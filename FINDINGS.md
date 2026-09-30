# The Movies: Stunts & Effects — Reverse Engineering Findings

Rewrite in progress. Evidence comes from the Ghidra export in `ExportDecompiled/` (`index.csv` maps address → file). Addresses are for `MoviesSE.exe`.

## Genre popularity (`AudienceTaste`)

Singleton `AudienceTaste` is created by `AudienceTaste_Constructor` (`00523c50`, global `DAT_0104c414`) and set up in `AudienceTaste_Init` (`00523a60`).

**Data.** `AudienceTaste_LoadTimelineSeeds` (`00523090`) reads a `"timeline"` data set. Per genre it builds a sorted list of 0x28-byte entries (`AudienceTaste_PushTimelineEntry`, `00522490`). Each entry has a date at +0 and a popularity value in [0,1] at +0x24 (`pfVar4[9]`). The genre map is at `this+0x64`.

**Constants set in `Init`.**
- Decay rate `this+0x70 = ln(2) / (4 years)`. `FUN_0043b710` multiplies days by `0.002739726` (= 1/365), so time is in years. This is a 4-year half-life.
- Other defaults: `this+0x74 = 1.0`, `this+0x78 = 1910.0` (probably a start year), `this+0x7c` = a 1800.0 time value.

**Formula** (`AudienceTaste_GetGenreTrend`, `005216e0`):
1. Find the latest timeline entry for the genre dated at or before now. The loop stops at the first entry dated after now and uses the one before it.
2. `dt = (now - entry.date)` in years.
3. `trend = 0.5 + (entry.value - 0.5) * exp(-decay * dt)`, clamped to [0,1].
4. With no usable entry, trend is 0.5 (neutral).

So each scripted era value pulls a genre's popularity away from neutral, and the effect fades back toward 0.5 with a 4-year half-life until the next timeline entry.

**Most popular genre.** `AudienceTaste_GetMostPopularGenre` (`005217e0`) walks the global genre list (`DAT_00f88660`) and returns the genre id with the highest trend. Ties keep the first genre found.

**Consumers.**
- `Release_GetNormalizedGenrePopularity` and `Release_NotifyIfMostPopularGenreChanged` (`0047f9f0`) fire a notification when the top genre changes.
- The `"PopularGenrePropensity"` property (`decomp_0010.c`) is used in character/AI logic.
- `FUN_00521900` is a debug dump: it prints a text bar of each genre's trend.

## TODO
- Radio DJ-era and timeline-event system.
- `.lug`/`.met` audio banks, `.msh`, `.pak`.
- Restore the Star Maker, `CStudioAI` and SLVAR/SLREGISTER serialization notes from git history (`git show 9b29b4e:FINDINGS.md`), re-checking each against the export.
