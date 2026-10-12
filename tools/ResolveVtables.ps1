<#
.SYNOPSIS
    Batch-resolves every vtable pointer captured in an events.jsonl session
    file to its concrete RTTI class name, ranked by call frequency.

.DESCRIPTION
    Each hooked Tick-style function now logs the calling object's vtable
    pointer (ev.vtablePtr, see Event.hpp) alongside the existing caller RVA.
    Previously, identifying WHICH CONCRETE CLASS was calling into a shared
    base implementation (e.g. WWindow::Tick, called by dozens of unrelated
    widget subclasses) meant hand-pressing F on each unresolved caller RVA in
    Ghidra and decompiling it one at a time.

    This script instead reads every logged vtable address directly from a
    captured session, follows the COL pointer stored at vtable-4 (per the
    MSVC RTTI ABI) against the raw .exe file to find each one's concrete
    class name, and prints a frequency-ranked table per hooked function.

    Runtime vtable addresses are converted back to the .exe's static/file VAs
    by reading image_base from the session's own metadata.json first, so this
    works correctly even if the module were ever loaded at a different base
    than its preferred ImageBase (not observed in this project so far, but
    not assumed either).

.PARAMETER SessionDir
    Path to a session_<timestamp> folder containing events.jsonl and
    metadata.json (e.g. from TheMoviesDebugger.dll's output).

.PARAMETER ExePath
    Path to MoviesSE.exe. Defaults to the path this project has used
    throughout - override if yours differs.

.PARAMETER FunctionRva
    Optional: restrict to a single hooked function's RVA (e.g. "0x340ba0"
    for WWindow::Tick). Omit to resolve vtables for every function in the
    session.

.EXAMPLE
    .\ResolveVtables.ps1 -SessionDir "..\build\RelWithDebInfo\sessions\session_2026-10-01_195933"

.EXAMPLE
    .\ResolveVtables.ps1 -SessionDir "...\session_2026-10-01_195933" -FunctionRva "0x340ba0"
#>
param(
    [Parameter(Mandatory = $true)]
    [string]$SessionDir,

    [string]$ExePath = "F:\DecompilingTheMovies\The Movies\MoviesSE.exe",

    [string]$FunctionRva = $null
)

$eventsPath = Join-Path $SessionDir "events.jsonl"
$metadataPath = Join-Path $SessionDir "metadata.json"

if (-not (Test-Path $eventsPath)) { throw "events.jsonl not found in $SessionDir" }
if (-not (Test-Path $metadataPath)) { throw "metadata.json not found in $SessionDir" }

# Not using ConvertFrom-Json here: Session.cpp's metadata.json writer emits
# exe_path with raw, unescaped backslashes (e.g. "F:\...\MoviesSE.exe"),
# which is invalid JSON and makes ConvertFrom-Json throw. Regex-extracting
# just the one field needed sidesteps that pre-existing bug entirely rather
# than requiring a DLL rebuild just to run this script. Worth fixing in
# Session::WriteMetadata separately (escape backslashes or use forward
# slashes), but not required for this tool to work.
$metadataRaw = Get-Content $metadataPath -Raw
$imageBaseMatch = [regex]::Match($metadataRaw, '"image_base"\s*:\s*"(0x[0-9a-fA-F]+)"')
if (-not $imageBaseMatch.Success) { throw "Could not find image_base in $metadataPath" }
$runtimeImageBase = [Convert]::ToUInt32($imageBaseMatch.Groups[1].Value, 16)

# --- PE file reading (same technique used throughout this project) --------
$bytes = [System.IO.File]::ReadAllBytes($ExePath)

function ReadU32([byte[]]$b, [int]$off) { return [BitConverter]::ToUInt32($b, $off) }

$e_lfanew = ReadU32 $bytes 0x3C
$peOff = $e_lfanew
$numSections = [BitConverter]::ToUInt16($bytes, $peOff + 6)
$optHeaderSize = [BitConverter]::ToUInt16($bytes, $peOff + 20)
$sectionTableOff = $peOff + 24 + $optHeaderSize

$sections = @()
for ($i = 0; $i -lt $numSections; $i++) {
    $base = $sectionTableOff + ($i * 40)
    $sections += [PSCustomObject]@{
        VirtAddr = ReadU32 $bytes ($base + 12)
        VirtSize = ReadU32 $bytes ($base + 8)
        RawPtr   = ReadU32 $bytes ($base + 20)
    }
}

$FileImageBase = 0x00400000 # this .exe's own preferred ImageBase (PE header)

function VaToOff([uint32]$va) {
    $rva = $va - $FileImageBase
    foreach ($s in $sections) {
        if ($rva -ge $s.VirtAddr -and $rva -lt ($s.VirtAddr + $s.VirtSize)) {
            return $s.RawPtr + ($rva - $s.VirtAddr)
        }
    }
    return -1
}

function ReadU32Va([uint32]$va) {
    $off = VaToOff $va
    if ($off -lt 0) { return $null }
    return ReadU32 $bytes $off
}

function ReadCString([uint32]$va) {
    $off = VaToOff $va
    if ($off -lt 0) { return $null }
    $sb = New-Object System.Text.StringBuilder
    $i = $off
    while ($bytes[$i] -ne 0 -and $sb.Length -lt 200) {
        $sb.Append([char]$bytes[$i]) | Out-Null
        $i++
    }
    return $sb.ToString()
}

# Resolves a vtable's class name by following the COL pointer stored at
# vtableVa-4 (the MSVC ABI location, not a scan - see project memory,
# 2026-10-01 "TMRoom::Tick-always-0 mystery" entry for why the old backward-
# scan approach was replaced with this direct-pointer-follow approach).
function ResolveClassName([uint32]$vtableVa) {
    $colPtrVa = ReadU32Va ([uint32]($vtableVa - 4))
    if ($null -eq $colPtrVa -or $colPtrVa -eq 0) { return $null }
    $sig = ReadU32Va $colPtrVa
    if ($sig -ne 0) { return $null }
    $pTypeDescVa = ReadU32Va ([uint32]($colPtrVa + 12))
    if ($null -eq $pTypeDescVa -or $pTypeDescVa -eq 0) { return $null }
    $rawName = ReadCString ([uint32]($pTypeDescVa + 8))
    if ($null -eq $rawName -or -not $rawName.StartsWith(".?AV")) { return $null }
    return $rawName
}

# Undoes MSVC's mangled-name prefix/suffix for a cleaner display, e.g.
# ".?AVWWindow@TM@@" -> "TM::WWindow". Best-effort, not a full demangler.
function PrettyClassName([string]$mangled) {
    $core = $mangled.Substring(4).TrimEnd('@')
    $parts = $core -split '@' | Where-Object { $_ -ne '' }
    [array]::Reverse($parts)
    return ($parts -join '::')
}

# --- Stream events.jsonl and tally (fn_rva -> vtable -> count) ------------
Write-Host "Reading $eventsPath ..."
$pattern = [regex]'"fn_rva":"(0x[0-9a-fA-F]+)".*?"vtable":"(0x[0-9a-fA-F]+)"'
$tally = @{} # fn_rva -> @{ vtable -> count }

$reader = [System.IO.StreamReader]::new($eventsPath)
$lineCount = 0
try {
    while (-not $reader.EndOfStream) {
        $line = $reader.ReadLine()
        $lineCount++
        $m = $pattern.Match($line)
        if (-not $m.Success) { continue }
        $fnRva = $m.Groups[1].Value
        $vtable = $m.Groups[2].Value
        if ($FunctionRva -and $fnRva -ne $FunctionRva) { continue }
        if ($vtable -eq "0x0") { continue }

        if (-not $tally.ContainsKey($fnRva)) { $tally[$fnRva] = @{} }
        $inner = $tally[$fnRva]
        if ($inner.ContainsKey($vtable)) { $inner[$vtable]++ } else { $inner[$vtable] = 1 }
    }
}
finally {
    $reader.Close()
}
Write-Host "Scanned $lineCount lines.`n"

# --- Resolve and print, ranked by frequency --------------------------------
$classNameCache = @{}

foreach ($fnRva in ($tally.Keys | Sort-Object)) {
    Write-Host "=== fn_rva $fnRva ===" -ForegroundColor Cyan
    $inner = $tally[$fnRva]
    $ranked = $inner.GetEnumerator() | Sort-Object -Property Value -Descending

    foreach ($entry in $ranked) {
        $runtimeVtableVa = [Convert]::ToUInt32($entry.Key, 16)
        # Convert the captured RUNTIME va back to the file's static va.
        $staticVtableVa = [uint32]($runtimeVtableVa - $runtimeImageBase + $FileImageBase)

        if (-not $classNameCache.ContainsKey($staticVtableVa)) {
            $mangled = ResolveClassName $staticVtableVa
            $classNameCache[$staticVtableVa] = if ($mangled) { PrettyClassName $mangled } else { $null }
        }
        $className = $classNameCache[$staticVtableVa]

        $label = if ($className) { $className } else { "<unresolved - vtable 0x$($staticVtableVa.ToString('X8')) has no COL / not RTTI-visible>" }
        Write-Host ("  {0,8} calls  vtable 0x{1:X8}  ->  {2}" -f $entry.Value, $staticVtableVa, $label)
    }
    Write-Host ""
}
