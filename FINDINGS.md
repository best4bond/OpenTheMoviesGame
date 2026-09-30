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

## Save/load framework (SLVAR / SLREGISTER)

Re-checked against the export; the earlier conclusions hold.

- `Savegame_SaveToDisk` (`004b37e0`), `Savegame_LoadFromDisk` (`004b2b40`, `decomp_0007.c`). Global `DAT_010583e0` is the direction flag (0 = write, 1 = read). The load path sets it to 1 and reads bracketed text sections in order: `[HEADER]`, `[STATICS]`, `[OBJECTS]`. It compares the save version against the literal `"ver17"`.
- **`[STATICS]`:** `SLVAR_LoadOrSaveStatics` (`0098d400`, `decomp_0043.c`) processes static vars, static lists and static arrays, matching the log strings `" Static vars"`, `" Static lists"`, `" Static arrays"`. Static vars carry a type tag 0-6, dispatched through a `switch`.
- **`[OBJECTS]`:** each object is written with its type name, then a factory lookup by name. If the name is unknown, the log says `"Failed To match type when loading ... Attempting to scan past. Have you SLREGISTERed it?"` (`decomp_0043.c:4876`), and loading skips forward instead of failing. So the framework's registration macro is `SLREGISTER`.
- The registry of registered classes is filled by static constructors at startup, so it can't be listed statically.

## Star Maker integration

- `Game_CheckStarMakerNotRunning` at `00542aa0`: the export has the `"LionheadStudiosTheStarMaker"` mutex (`decomp_0011.c:6793`, `CreateMutexA`). The function is unnamed in this export, so check its address.
- `Game_InitUserDataFolders` (`0056bd80`) builds the `My Documents\The Movies\` folder tree (including `Starmaker\`).

## Rival studio AI (`CStudioAI`)

All present in the export: `CStudioAI_CreateGlobalInstance` (`0041f4e0`), `CStudioAI_LoadTuningData` (`00515e00`), `CStudioAI_CreateRandomNew` (`00517a40`), `CStudioAI_SpawnDueRivalsAndScheduleDates` (`00510440`). Rival studios spawn from templates once their opening date has passed. `CStudioAI_CreateRandomNew` picks one of 6 random personalities, and a template spawn triggers the `TANNOY_NEW_STUDIOOPENED` announcement.

## Disabled developer console

`CVarSystem_Register_STUBBED` (`005434a0`, `decomp_0011.c`) is a stub in the retail build. Over 100 debug commands (`sbx_*`, `awd_*`, `gnd_*`, `sitt_*`, `ee_*`, `ass_*`) register through it and are inert.

## `.msh` mesh format

Parsed by `LH_LoadMeshBinary` (`009deb10`, `decomp_0045.c`). Details below come from the loaders' own annotations in the export plus a re-read of the code; none were checked against real `.msh` files here.

**File header** (`LH_LoadMeshHeader`, `009dadd0`), 0x24 bytes when the control byte is `0xC2`:

| Offset | Field |
|---|---|
| 0x00 | dword FormatVersion. The caller aborts unless it is 10 |
| 0x04 | NumTextureNames |
| 0x08 | NumMaterials |
| 0x0c | NumSubmeshes |
| 0x10-0x15 | flag bytes. Byte 0x14 folds into mesh flag bits, and the rest is undecoded |
| 0x16 | control byte. Bits 1, 6 and 7 each say an optional dword follows (at 0x18, 0x1c, 0x20) |
| 0x17 | read but unused |

The texture-name table follows the header. Per the loader annotation, the optional dwords were 0 in every file checked.

**Materials** (`LH_LoadMeshMaterial`, `009daeb0`): a 0x14-byte on-disk record, or 0x18 bytes when bit 2 of byte 0x0e is set. It has two texture indices (0xFF means none), three flag dwords, and a dword at 0x10 copied straight through (probably a colour or ID). The loader expands each record into a 0x24-byte in-memory entry that holds a "type code". Observed values are 0, 3, 5, 7, 0xB, 0x18 and 0x1B, and the renderer meaning of each is not known. A second texture is only resolved if global `DAT_0105be08` is set.

**Primitive header** (`LH_LoadMeshPrimitiveHeader`, `009dcb40`): a flags byte at +0xc controls what follows.
- Bit 0x10: three extra dwords follow.
- Bit 0x20: a 14-float quantization block follows (`LH_LoadVertexQuantizationBounds`, `009dad00`).
- Bit 0x40: one extra dword follows.

After the header the loader reads `TriangleCount * 6` bytes of indices (three uint16 per triangle, `LH_BuildPrimitiveIndexBuffer`). Then it reads the vertices in one of two layouts, chosen by a flag bit: a compact 16-byte quantized vertex, or a direct 32-byte float vertex (position, normal, UV).

**Vertex dequantization** (`LH_DequantizeVertex`, `00a39e80`): the compact vertex is 8 little-endian uint16 values. With `t = value / 65535`:
- Position xyz = `lerp(bboxMin, bboxMax, t)`.
- Normal xyz = `2t - 1`.
- UV = `lerp(uvMin, uvMax, t)`.

The first 10 floats of the quantization block (bbox min/max and UV min/max) are used, and the last 4 are undecoded.

Other mesh functions: collision hulls (`LH_LoadMeshCollisionHullSet` `00a76060`, `LH_LoadCollisionHullPiece` `00a73d40`), extra polygon data (`LH_LoadAuxPolygonChunk` `009e7270`), and a debug text exporter (`LH_ExportMeshDebugText` `009dc3e0`).

## TODO
- DJ-era selection; timeline event data sources; `info.sm` field meanings.
- `.lug`/`.met` audio banks (`LH_LoadLUGAsset` `00c009c0`, magic `"LiOnHeAd"` in `decomp_0064.c`), `.pak`.
- Details of the older notes (SLVAR type functions, `CSystem`, the RTTI class list) can still be pulled from `git show 9b29b4e:FINDINGS.md`.
