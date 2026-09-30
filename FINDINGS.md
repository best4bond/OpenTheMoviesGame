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

## Radio and timeline events

**Radio channel clip playback** (`RadioChannel_PlayClip` `004f4860`, `RadioChannel_SelectNextClip` `004f6ed0`):
- The radio object holds several channels. The current channel index is at `+0xaa8`. Each channel is a 0x164-byte record.
- A clip has a category at clip+0x44: `0` = DJ, `1` = News, `2` = Tannoy, other = Speech. When debug logging is on, the category is used as a prefix (`"DJ,"`, `"News,"`, `"Tannoy,"`, `"Speech,"`) in the played-clip log line. Category 0 clips also fetch a value from a global object through `FUN_0049ab70` (unnamed).
- Each channel keeps four priority queues of clips (5-dword records starting at channel+0x1c8, priority index 1-4). `SelectNextClip` fills the current-clip slot at channel+0x22c from the lowest-numbered non-empty queue. It skips clips whose per-category "played" flag is set. It also requires a per-category counter (`DAT_0104b09c[category]`) to be at least the queue's priority number.
- If a "forced" queue (channel+0x1d8) is non-empty, its clip is played into slot +0x230 instead, and the current clip is lowered to volume `min(0.1, DAT_0104b0b4)`, which looks like ducking under speech.
- A clip is only started once the gap since the last clip (`DAT_00e51cd4`) has elapsed.
- `"DJ_STING"` and `"RADIO_DJ_MCDUFF_INTRO"` are referenced in `decomp_0005.c` and `decomp_0038.c`.

**Timeline UI and events** (`decomp_0025.c`): `Timeline_Constructor` (`0079f4f0`), `WTimeline_Tick`, and the event/movie/awards/research-pack icons (`WTimeline*Icon_*`).
- `Timeline_OnRadioClipFinished` (`007994f0`) compares the finished clip's name with each timeline event's name, and with that name + `"_FUTURE"`. On a match it calls `FUN_007a3110` on that event's icon. This ties radio announcements to timeline events.
- `Timeline_InterpolateGenreColumnsAtDate` (`00a1db90`) loads a per-genre `info.sm` file (a `.sm` data file next to the timeline entry) and builds display values from it, including `field[0x2d]*47+18` and `(1-field[5])*0.5*40+60`. It reads about 20 more fields from that file. I did not identify what these fields mean.

Not yet done: the DJ-era selection logic, and where the clip-name to event-name mapping data is loaded from.

## TODO
- DJ-era selection; timeline event data sources; `info.sm` field meanings.
- `.lug`/`.met` audio banks, `.msh`, `.pak`.
- Restore the Star Maker, `CStudioAI` and SLVAR/SLREGISTER serialization notes from git history (`git show 9b29b4e:FINDINGS.md`), re-checking each against the export.
