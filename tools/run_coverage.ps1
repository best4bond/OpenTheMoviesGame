# Launches The Movies under the first-call coverage tracer.
#
#   powershell -ExecutionPolicy Bypass -File tools\run_coverage.ps1
#
# 1. copies tools\coverage_functions.txt next to MoviesSE.exe (its presence is what turns the tracer on)
# 2. starts the game suspended, injects TheMoviesDebugger.dll at the entry point (so start-up is captured)
# 3. when you quit the game, removes coverage_functions.txt again so normal injection sessions are unaffected
#
# While playing: F9 = marker, F8 = re-arm all functions + marker (the next phase then lists its COMPLETE set),
# F10 = write coverage_summary.txt. The game clock starting and every game month add markers automatically.
# Results: coverage_log.csv (seq,microseconds,thread,phase,rva) in the game folder.
$game = 'F:\DecompilingTheMovies\The Movies'
$tools = Split-Path -Parent $PSScriptRoot   # repo root
$injector = Join-Path $game 'TheMoviesInjector.exe'
if (-not (Test-Path $injector)) { $injector = Join-Path $tools 'debuggeruild\RelWithDebInfo\TheMoviesInjector.exe' }

Copy-Item (Join-Path $tools 'debuggeruild\RelWithDebInfo\TheMoviesDebugger.dll') (Join-Path $game 'TheMoviesDebugger.dll') -Force
Copy-Item (Join-Path $tools 'tools\coverage_functions.txt') (Join-Path $game 'coverage_functions.txt') -Force

& $injector --launch (Join-Path $game 'MoviesSE.exe') (Join-Path $game 'TheMoviesDebugger.dll')
if ($LASTEXITCODE -ne 0) { Write-Host 'launch failed'; Remove-Item (Join-Path $game 'coverage_functions.txt') -ErrorAction SilentlyContinue; exit 1 }

Write-Host 'Game running under the coverage tracer. Quit the game when finished; waiting...'
while (Get-Process -Name MoviesSE -ErrorAction SilentlyContinue) { Start-Sleep -Seconds 2 }
Remove-Item (Join-Path $game 'coverage_functions.txt') -ErrorAction SilentlyContinue
Write-Host 'Done. See coverage_log.csv and coverage_summary.txt in the game folder.'
