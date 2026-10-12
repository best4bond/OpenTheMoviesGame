# TheMoviesDebugger

A runtime instrumentation DLL for `MoviesSE.exe` (The Movies, 2005), built to
accelerate the Ghidra-based reverse-engineering project in
`Decompiling-The-Movies-Game`. It hooks known functions (confirmed in Ghidra
first, never guessed), records caller addresses and timing, and exports the
result as structured JSON you can hand back to Claude for analysis.

This is a deliberately trimmed **Phase 1-3** milestone: one confirmed hook,
caller-RVA capture, call timing, JSONL export. No ImGui overlay, no memory
diffing, no DirectX tracing yet - see "Where this goes next" below for why,
and what's likely worth adding once this is proven out.

## What it proves

- The DLL attaches to the game process and can resolve its own module base.
- `TM::WAdvMovieMaker::Tick` (confirmed via full RTTI chain - see
  `src/game/Addresses.hpp`) can be hooked without breaking the game.
- For every call, we capture: timestamp, thread id, the `this` pointer, the
  caller's return address converted to an RVA, and how long the original
  function took.
- That data streams to `events.jsonl` continuously and gets aggregated into
  `functions.json` / `summary.txt` (caller frequency ranking, timing stats)
  whenever you press **F11** or cleanly unload the DLL.

If this works, the next hook is nearly free to add (see GameHooks.cpp) -
each new confirmed Ghidra function becomes one RVA constant + one detour.

## Build

Requires [vcpkg](https://github.com/microsoft/vcpkg) with manifest mode (the
included `vcpkg.json` pulls in MinHook automatically) and an x86 toolchain -
**this must be a 32-bit build**, since `MoviesSE.exe` is a 32-bit process and
Windows will refuse to load a 64-bit DLL into it.

```bash
cmake -B build -A Win32 -DCMAKE_TOOLCHAIN_FILE=<path-to-vcpkg>/scripts/buildsystems/vcpkg.cmake
cmake --build build --config RelWithDebInfo
```

This produces:

- `build/RelWithDebInfo/TheMoviesDebugger.dll`
- `build/RelWithDebInfo/TheMoviesInjector.exe`

If `find_package(minhook CONFIG REQUIRED)` can't find the `minhook::minhook`
target with your installed vcpkg version, check what target name your
`minhook` port actually exports (`vcpkg list minhook`, or look in
`<vcpkg>/installed/x86-windows/share/minhook/`) and adjust
`target_link_libraries` in `CMakeLists.txt` accordingly - the exact exported
target name has shifted between vcpkg revisions in the past.

You can also just open the folder in Visual Studio (File > Open > Folder) -
its built-in CMake integration will pick up `CMakeLists.txt` and
`vcpkg.json` automatically if vcpkg is integrated (`vcpkg integrate install`).

**The linker needs the DLL file unlocked**, which means either the game isn't
running or `TheMoviesDebugger.dll` has already been ejected from it (see
"Fast iteration" below) - `cmake --build` will fail with `LNK1168` otherwise.

## Fast iteration (no game restart needed)

Once the DLL is loaded once, you don't need to close the game to rebuild it.
The injector also works in reverse: it can make a remote thread inside the
game call `FreeLibrary` on our DLL, which triggers our own clean
`DLL_PROCESS_DETACH` (unhooks everything, flushes the event queue) without
touching the game process itself.

```
TheMoviesInjector.exe --eject
build\...\cmake --build build --config RelWithDebInfo
TheMoviesInjector.exe path\to\TheMoviesDebugger.dll
```

(`--eject` defaults to `TheMoviesDebugger.dll` against `MoviesSE.exe`; both
are overridable - see `TheMoviesInjector.exe` with no arguments for usage.)

## Running it

1. Start The Movies normally.
2. Run the injector, pointing it at the built DLL:

   ```
   TheMoviesInjector.exe path\to\TheMoviesDebugger.dll
   ```

   It polls for `MoviesSE.exe` for up to 60s, so you can also launch the
   injector first and then start the game.

3. A `sessions\session_<timestamp>\` folder appears next to
   `TheMoviesDebugger.dll` containing:
   - `metadata.json` - exe path, PE timestamp, image base, QPC frequency.
     **Check `pe_timestamp` matches what's documented in `Addresses.hpp`
     (2006-04-27 patched build) before trusting any RVA** - a different
     build will have different addresses and the hook will either fail to
     install or (worse) land on the wrong bytes.
   - `debug.log` - plain-text attach/hook-install log. Also logs every
     `SITT_DebugConsoleCommandDispatch` command string live, as it fires.
   - `events.jsonl` - one JSON object per hooked call, streamed live.
   - `strings.jsonl` - one JSON object per captured string payload (currently
     just `SITT_DebugConsoleCommandDispatch` commands), streamed live. Empty
     if that dispatcher never fires during the session - it's driven by a
     scripted-event system, not a player-facing console, so it may not fire
     at all outside specific scripted moments (tutorial completion looks like
     the most likely trigger - see `Addresses.hpp`).
4. Open the Advanced Movie Maker screen in-game a few times to generate
   `WAdvMovieMaker::Tick` calls.
5. **Press F11** to flush and write `functions.json` + `summary.txt` for the
   current session (this rolls over to a fresh session directory, so you can
   do this repeatedly during one play session). See "Why F11" below for why
   this is the reliable way to get a finished summary, rather than just
   closing the game.
6. Paste `summary.txt` (or `functions.json` for the full caller list) back
   into the Claude session working on the Ghidra decompilation.

## Resolving caller classes with ResolveVtables.ps1

Every `CallEvent` now also captures the calling object's vtable pointer
(`*(void**)this`), not just its raw `this` address. `summary.txt`'s "top
callers" list only ever showed a bare RVA - identifying which CONCRETE CLASS
that caller actually was meant hand-pressing F on it in Ghidra and
decompiling it, one caller at a time.

`tools\ResolveVtables.ps1` automates that: it reads every logged vtable
address from a session's `events.jsonl`, follows the RTTI COL pointer stored
at `vtable-4` against the raw `.exe` (same technique used throughout this
project's manual RTTI verifications), and prints a frequency-ranked table of
concrete class names per hooked function - no Ghidra GUI interaction needed
for the identification step itself (only for later renaming the functions
once you know what to look for).

```powershell
.\tools\ResolveVtables.ps1 -SessionDir "build\RelWithDebInfo\sessions\session_<timestamp>"
# or restrict to one hooked function:
.\tools\ResolveVtables.ps1 -SessionDir "...\session_<timestamp>" -FunctionRva "0x340ba0"
```

Needs the session's own `metadata.json` alongside `events.jsonl` (only the
original attach-session folder has one - a rolled-over F11 folder doesn't),
since it uses `image_base` to correctly map captured runtime addresses back
to the `.exe` file's static addresses.

## Why F11 (not just closing the game)

`DllMain`'s `DLL_PROCESS_DETACH` only does a full synchronised shutdown
(joining the background writer thread, flushing final aggregates) when the
DLL is explicitly unloaded via `FreeLibrary`. When the *process* is
terminating instead (the normal case - you close the game), Windows may have
already torn down every thread but the one calling `DllMain`, and trying to
join our writer thread at that point can hang the game's exit instead of
speeding up the export. So on process termination we deliberately skip that
join and just leave whatever the background writer already flushed to
`events.jsonl`. Pressing F11 while the game is still fully running sidesteps
this entirely by doing the synchronised export on demand.

## Project layout

```
src/
  dllmain.cpp          - DllMain, init thread, F11 hotkey polling
  core/
    Logging.*           - plain-text debug.log
    Session.*            - session folder + metadata.json (build fingerprint)
  game/
    Addresses.hpp         - RVA constants; every entry documents how it was
                            verified in Ghidra
  hooks/
    HookManager.*        - thin MinHook wrapper (module base, RVA<->VA, register)
    GameHooks.*           - the actual per-function detours live here
  telemetry/
    Event.hpp             - CallEvent POD
    EventQueue.*          - hot-path-safe queue + background JSONL writer
    Exporter.*            - functions.json + summary.txt aggregation
injector/
  main.cpp               - standalone CreateRemoteThread+LoadLibraryW injector
```

## Where this goes next

Roughly in priority order, matching what's actually been a bottleneck in the
Ghidra work so far rather than the full original wishlist:

1. **More anchor hooks.** Every function this session has confirmed via
   RTTI/xref is a one-line addition to `Addresses.hpp` + a `Detour_*` in
   `GameHooks.cpp`. Caller-frequency data from a handful of well-chosen
   anchors (e.g. a room's `Tick`, the applicant spawn dispatcher) is a much
   stronger "what's worth tracing next" signal than the static
   function-size heuristic used to triage the ~34k unnamed functions.
2. **Watch-on-change for a struct offset.** Given an object pointer and an
   offset, poll it once a frame and log when it changes, correlated with
   what you just did in-game. This directly answers the "what does
   `param_1 + 0x34` actually mean" questions that come up constantly when
   reading decompiled code statically.
3. Only after those two prove out: an ImGui overlay (for picking objects
   interactively instead of hardcoding an address), then memory
   snapshot/diff, then DirectX draw-call tracing. Not started - deliberately
   deferred until the plain hook+export loop above has paid for itself.

## DecadeTracker (long-session tracking)

`src/hooks/DecadeTracker.cpp` adds seven low-volume hooks and writes **`decade_log.csv`**
next to `MoviesSE.exe` (one `key=value` line per event; opened share-read, so you can copy
it while the game runs). Events: `REL_PLAYER`/`REL_AI` (+`_FACTORS`: S, PI, SR, GP, BO, TP,
boredom, revenue pool), `PAYOUT` (first 5 payout days, then every 30th, plus the last),
`TREND` and `SATURATION` (only when they move by >= 0.03 / 0.02), `POSTPROD` + `SHOT`
(final quality from the per-shot records), `UPDATE_RATE` (project updates per real second,
once a minute). `year=` is the game clock (days / 365). Capped at 64 MB. All reads are
SEH-guarded. See docs/MOVIE_SUCCESS.md and docs/MOVIE_QUALITY.md for what each field means.

### DecadeTracker, phase 2 events
Added: `AWARD_JUDGE` + `AWARD_ENTRY` (top 15 sorted contenders of every award judging: category, score, whether the
contender is the player studio) and `AWARD_BONUSES` (the 12 active-bonus flags after each recompute);
`FINANCE` (monthly: balance, total income/expense and the per-category ledger from the StudioFinance object);
`STUDIO_PLAYER`, `STUDIO_AI` (monthly per AI studio: rating, reputation base/time, capital, happiness, success difference...),
`STUDIO_RATING` (when a studio's star rating moves >= 0.01); `STAR_RATING` (per star, change >= 0.02);
`RESEARCH` (research items, only when one changes; includes the two dates used by the pioneer-technology window).
`REL_PLAYER` now also logs `projDate2c8` (the date the pioneer check uses).


## Decompilation bring-up tools (coverage tracer, RTTI skeleton, source generator)

See `docs/DECOMP_PIPELINE.md`: first-call coverage tracing (`tools/run_coverage.ps1`, `TheMoviesInjector.exe --launch`),
class / vtable / global skeletons from RTTI (`tools/rtti_dump.py`, `tools/globals_table.py`) and the Ghidra-export to
compilable-C generator with a compile-check report (`tools/generate_sources.py`, `tools/compile_check.py`).
