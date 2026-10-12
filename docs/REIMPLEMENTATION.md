# Reimplementation layout and workflow

Goal: a readable C++ reimplementation, organised by subsystem and class, not by original address or per function.

## Layout (under `src/` (new, in this repo), headers beside sources)

```
src/
  core/        MV:: / LH:: / PKStrings: strings, arrays, lists, memory, file IO, logging 
  engine/      renderer, SWF/LSWF, audio (vorbis), input, scene objects (MV::Object, FS::CObject)
  ui/          TM::W* windows, bubbles, HUD (WWindow, WInterface, WAdvMovieMaker...)
  game/
    studio/    CLot, TMRoom, TMFloorPlan, TMFixedAsset, builders
    staff/     CStaff, jobs, traits, experience   
    movie/     scripts, scenes, quality, success, stunts (see FINDINGS.md)
    economy/   finances, awards, decades
```

One `Class.hpp/.cpp` pair per class or tightly related group. Struct and enum definitions go in headers first;
bodies come after types are recovered. Classes come from `docs/generated/rtti_classes.json` (RTTI names = module names).

## Rules

1. Every reimplemented function carries `// orig: 0xVVVVVVVV` (the Ghidra VA); append `verified` once checked against the
   running game (e.g. through the DLL hooks): `// orig: 0x004A1230 verified`.
2. Behaviour-equivalent, not instruction-equivalent: real names, struct fields instead of pointer arithmetic, loops instead of gotos.
3. Rename in Ghidra as you go, then refresh `tools/ghidra_names.csv` (see DECOMP_PIPELINE.md).
4. Findings go in FINDINGS.md; formulas first, code second.
5. **Open question:** this repo currently commits `ExportDecompiled/` (full decompiler output). Decide whether reimplemented code
   is written by hand from the notes (recommended) and whether the export stays in the public repo.

## Progress tracking

```
python tools/progress.py
```
Writes `docs/generated/progress.csv` (address, name, class, status) and `progress.md` (per-class counts).
Status: `unnamed` -> `named` -> `reimplemented` -> `verified`, derived from names in `ghidra_names.csv` and the `orig:` tags in `src/`.
