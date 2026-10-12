# Decompilation bring-up tools

Three tools that move the project from "35,000 functions of Ghidra pseudo-C" towards something that can be compiled and run.
All scripts are in `tools/`, all generated output is in `docs/generated/` and `gen/` (regenerate, do not edit).

## 1. First-call coverage tracer (`src/hooks/CoverageTracer.cpp`)

Answers: *which functions does the game actually run to reach the main menu, to load a save, to play a month?*

- Plants an INT3 on the first byte of every function listed in `coverage_functions.txt` (35,039 entries; built by
  `tools/gen_function_list.py` from the Ghidra export, `library_map.csv` and `renames.csv`). A vectored exception handler
  logs the first entry of each function (sequence, microseconds, thread, phase, RVA), restores the byte and continues, so every
  function costs one exception per run. Functions already detoured by MinHook (first byte `E9`) are skipped.
- Output: `coverage_log.csv` next to `MoviesSE.exe`; `coverage_summary.txt` (functions per phase) on F10 or eject.
- Hotkeys while the game runs: **F9** marker (new phase; the next phase lists only *newly reached* functions),
  **F8** re-arm everything + marker (the next phase lists its *complete* function set), **F10** summary.
  Automatic markers: `GAME_CLOCK_STARTED` when a game is loaded and `MONTH_n` at each game month.
- Start-up coverage needs the DLL in before `WinMain`: `TheMoviesInjector.exe --launch MoviesSE.exe TheMoviesDebugger.dll`
  starts the game suspended, parks the main thread on a `jmp $` at the entry point, injects, waits for the DLL's
  `TheMoviesDebugger.InitDone` event, restores the entry bytes and resumes. `tools/run_coverage.ps1` does the whole thing
  (copies the function list in, launches, removes the list again when the game exits).
- The list file's presence is what enables the tracer, so normal injection sessions are unaffected.
- **Status: built and wired in, not yet run against the game.** First run: use `run_coverage.ps1`, press F9 at the main menu,
  load a save, F8 once the game is running, play a month, quit.

Suggested reading of the log: functions with phase 0 = boot + main menu; phase 1 = load a game; later phases = gameplay.
Join `rva` with `gen/functions.json` or `docs/generated/rtti_classes.json` to see which classes and files that code belongs to.

## 2. RTTI skeleton (`tools/rtti_dump.py`, `tools/globals_table.py`)

- `docs/generated/rtti_classes.json`: 2,066 classes found through MSVC RTTI (2,009 with vtables): demangled name, every vtable
  (VA, `this` offset, slot function addresses with their Ghidra names), base classes with offsets, constructor candidates and an
  object size (1,095 classes get an exact size from `operator_new(size)` followed by the constructor call; the rest get a lower
  bound from the highest field offset the constructor touches).
- `docs/generated/classes.h`: C skeleton, one `<class>_vtbl` struct per primary vtable (slots named from the renames), a struct per
  class with the size as a comment, and `_vtbl_atN` structs for secondary (multiple inheritance) vtables.
- `docs/generated/globals.csv` / `globals.h`: 11,303 referenced globals with section (.data / .bss / .rdata), use counts and a
  guessed type (votes over the casts and uses Ghidra left behind: float/char/short/int, pointer when dereferenced or indexed,
  aggregate when its address is taken). The type is a guess; the `type_votes` column shows the evidence.

## 3. Header shim and source generator (`tools/ghidra_shim.h`, `tools/generate_sources.py`)

- `ghidra_shim.h` maps Ghidra's pseudo-types (`undefined4`, `float10`, `code`...) and helper macros (`CONCAT31`, `SUB41`,
  `CARRY4`, x87 intrinsics...) onto real C for MSVC x86. `__thiscall` becomes `__fastcall` (same register for `this`, different
  stack layout: fine for compile checks, **not** an ABI match; real replacements still need a hand-written ABI wrapper).
- `generate_sources.py` reads `ExportDecompiled/` and writes `gen/`: `decl_all.h` (a prototype per function from its own signature),
  `types_gen.h` (incomplete struct typedefs for the type names it meets), `globals_extra.h` (externs for identifiers the last
  compile check could not resolve), and 344 source files of at most 120 functions each. FID-identified CRT/STL/ATL functions
  (622, tagged "Library Function") are left out and listed in `gen/library_functions.csv`. The queued renames are applied.
  Mechanical fixes only: C++ names become safe identifiers, `void` returns are widened to a 32-bit value (Ghidra often types
  functions as `void` although callers use EAX), `stackNNNN` temporaries and SEH try-level bookkeeping are neutralised,
  Ghidra's `x._1_3_` partial-register accesses become shifts and masks.
- `compile_check.py` runs `cl /TC /Zs` over every file (about 7 seconds) and writes `docs/generated/compile_report.md/json`:
  functions with no error, error-code histogram, and the identifiers still undeclared. `header_diag.py` shows header errors
  with the offending line (they must stay at zero, otherwise MSVC's 100-error limit hides everything else).

Typical loop: `generate_sources.py` -> `compile_check.py` -> `generate_sources.py` (picks up new externs) -> `compile_check.py`.

**Current result: 32,957 of 34,413 functions (95.8%) pass a syntax/type check.** The remaining errors are mostly type mismatches
from guessed global types (C2440), float `%` (C2296), pointer arithmetic on unknown-size types and a few hundred
decompiler artifacts. A passing function is *syntactically valid C*, not a behaviourally verified one.

## What this does not do yet

- No object code is produced or linked (`/Zs` only); calling-convention rewriting at call sites (`__thiscall`) is not done.
- Struct layouts are skeletons: fields are not typed, only sizes and vtables are known.
- Data (vtables, string tables, static initialisers, resources) is not reconstructed.

## Refreshing names from Ghidra

`tools/rename_priority.py` now prefers `tools/ghidra_names.csv` (address,name for every function in the live Ghidra project) over the stale `ExportDecompiled/index.csv` + `renames.csv`. To refresh it: call the Ghidra MCP `list_functions` tool (the result is saved to a JSON file of `"<name> at <addr>"` lines), convert it to `tools/ghidra_names.csv`, then run `python tools/rename_priority.py`. Last refresh: 60,838 functions, 31,030 still named FUN_*.
