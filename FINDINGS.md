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

## Comparison with the Black & White decomp (`openblack/bw1-decomp`)

I compared our export against that project's Lionhead library sources (`src/Lionhead/*`) and symbol lists (`config/BW1W120/**/symbols.txt`). Much of that source is empty stubs (`LHAudio`, most of `LH3DLib`), so the comparison mostly rests on `LHFile`, `LHParseFile`, `LH3DMath`, `LHLog` and the symbol names.

**Match found: the segment file container (`LHFile` ↔ our `CLHSegmentReader`).**
- The magic is the same: `"LiOnHeAd"`, 8 bytes.
- Segments are the same: a 32-byte name (zero-padded, stored in a 33-byte buffer), a dword size, then the data. B&W's `LHFile::VerifyFile` (`007bd7d0`) reads the name, reads the size, seeks past the data, and repeats until end of file, so it builds a segment directory.
- Our equivalent is `LH_DecodeSegmentStructure` (`00c0a430`), which checks the header with `LH_VerifyLUGHeader`. It then reads each segment's info with `LH_GetFirstSegmentInfo` (`00c0a370`) and records offset and size in a 0x28-byte node. Its assert path names `.\CLHSegmentReader.cpp`, so it is a rewrite of the same format under a new class name, not the same code.
- `.lug` audio banks and B&W's segment files therefore share a container. The write side matches too: B&W's `WriteSegmentHeader` (`007bdb20`) is the counterpart of the segment writes in our `LH_BuildLUGAsset` (`00bd34d0`).
- Suggested renames for our unnamed functions around `00c0a3e0`-`00c0a7d0`: `FUN_00c0a3e0` clears the segment list, and the node constructor `FUN_00c0ab70` builds one directory entry. I read these but did not verify them against the segment code beyond what is quoted here.

**No match found for:**
- `LHParseFile` (enum-list parser using `bsearch`/`qsort`). Our only `_bsearch` caller uses 100-byte records and is unrelated.
- `LH3DMath` (an inverse-square-root lookup table built from `(i | 0x1f80) << 17`). Nothing like it is in the export.
- `LHLog`'s `LHLogger`/`LHVersion`. Our `LH_LogErrorMessage`, `LH_Assert` and `LH_FormatVersionString` look like a small string-builder and assert helper, and the version helper formats a 5-part number. That is unrelated to `LHVersion` (a registry-based version-block checker).
- `LH3DMesh`. B&W's mesh is an older in-memory format with a 4-byte magic, flags such as UV2, name data, EBone and TnL data, and no version-10 header. It does not correspond to our `.msh` loader.

**Why so little overlap:** B&W was built with MSVC 6, and *The Movies* used a newer compiler, DirectX 9 and a new library layer (the `PK*` containers/strings/disk classes and the `LLA`/`LHA` audio classes). That rules out byte-level matching. Only file formats and clearly named strings carry over. B&W's `symbols.txt` files are still useful for class and method names that show up as strings in our export.

## `.lug` audio bank format

Loaded by `LH_LoadLUGAsset` (`00c009c0`, `decomp_0063.c`) on top of the segment container (see the Black & White comparison). An auto-detecting entry point, `LH_LoadLUGAsset_AutoDetectFormat` (`00bd2b70`), reads the first segment. If it is not the classic bank-info segment, it takes a newer single-blob "META Data" route (`LH_LoadMetFile`, `LH_DeserializeMetaDataSegment` `00c05390`) that is not covered here.

**Load order** (each step checks `LH_CheckLoadStatus`):
1. `LH_DecodeSegmentStructure`: builds the segment directory.
2. `LH_LoadGlobalProperties` (`00bff9d0`): segment `LHAudioBankGlobalProps` (string at `0xd9f1bc`), read with `LH_SerializeGlobalProperties`. Missing segment means defaults.
3. `LH_ValidateFileBank` (`00bffb00`): reads the bank info segment (string at `0xd9f148`). `LH_GetFileSegmentBankInfo` (`00bd1ef0`) seeks to **offset 0x208** in it and reads a dword version, which must be 0 (a "normal LUG"). The 0x208 bytes before it are a fixed text field (title/description). `LH_IsNormalLUG` also requires the wave-data segment (`0xd9f374`) and sample-table segment (`0xd9f1d4`) to exist.
4. `LH_OpenWavSegment`: opens the wave-data segment (`LHAudioWaveData`, `0xd9f374`) and gets its base offset.
5. `LH_LoadSampleBankTable` (`00bffe70`): segment `LHAudioBankSampleTable` (`0xd9f1d4`). A dword count, masked to 16 bits (max 65535 samples), then `count` records of **0x28c bytes** each.
6. `LH_ExtractResources` (`00c00480`): builds a 0x24-byte `LH_ResourceHeader` for each sample record. Records with a zero ID (`+0x104`) are skipped. Duplicate IDs log `"Resource collision, id (...)"` as a warning and are dropped.
7. `LH_BuildDriverTable` (`00c00660`) builds per-sample driver entries from the sample records.
8. `LH_LoadRLMParams`: an RLM-parameters segment (string at `0xd9f344`), which is optional. Applied by `FUN_00bffdd0`.
9. `LH_LoadBankCriteriaInfo` (`00c00080`): segment `LHAudioBankCriteiaInfo` (`0xd9f32c`). The spelling is missing an "r" and is baked into shipped data, so a reader or writer must keep it. It holds a count, then per criteria entry a name and a driver table. `LH_BuildTriggersFromCriteria` turns these into triggers.

**Sample record (0x28c bytes), fields used by `LH_ExtractResources`:**

| Offset | Meaning |
|---|---|
| 0x000 | name string (up to 0x104 bytes) |
| 0x104 | resource ID. The record is skipped if this is 0 |
| 0x108 | wave ID. Equal to the ID for a real clip. Records where it differs are aliases of another clip, and `LH_ExtractResources` skips them, so each clip is extracted once (Fable's `.lug` notes call these aliases) |
| 0x10c | uncompressed size |
| 0x110 | data offset within the wave-data segment (the loader adds the segment base) |
| 0x124 | wave format tag (word) |
| 0x126 | channel count (word) |
| 0x128 | sample rate (dword) |
| 0x138 | loop start (-1 in the Fable files means no loop) |
| 0x13c | loop end (-1 in the Fable files means no loop) |

The parameter block at `0x240`-`0x27c` is decoded in the next subsection. The write side is `LH_BuildLUGAsset` (`00bd34d0`) with matching `LH_Save*` functions.

### Sample record parameter block (`LH_BuildDriverTable`, `00c00660`)

`LH_BuildDriverTable` turns each sample record into a 0x48-byte "driver" object. The record's `+0x244` dword is a flags word that says which optional fields are present. What each field means for playback is my inference from how it is used, not confirmed.

| Record offset | Used as |
|---|---|
| 0x104 / 0x108 | driver +4 / +8: id and wave id |
| 0x118 | two words. The low word goes to driver word 0xb and the high word to driver word 0xa. Fable's docs saw values `0x10000`, `0` and `40000` here |
| 0x140 | group / category name string, 256 bytes (`"Arena"`, `"Balverine"`, ...). Copied into the driver |
| 0x240 | dword copied to the driver, default 1 when 0. Fable saw 1, 300 and 1000 here, so it looks like a priority or weight |
| 0x244 | flags word, see below |
| 0x248 | dword, used only if flag `0x40` is set |
| 0x250, 0x254 | words, used if flags `0x4` and `0x8` are set |
| 0x258 | flag bits 1 and 2, used if flag `0x10` is set. They become driver flags 1 and 2 |
| 0x25c, 0x25e | word pair forming a range. If both flags `0x20` and `0x1000` are set it is (0x25c, 0x25e). If only one is set that word is used for both ends. If neither, both are 0x7f. The pair is swapped so low <= high |
| 0x260 | word, used if flag `0x1` is set, otherwise the driver value is 100 |
| 0x264 | word, always copied |
| 0x268 | float, used if flag `0x80` is set. Fable's data has values like 3.0 and 5.0, so this is a minimum distance |
| 0x26c | float, used if flag `0x100` is set. Fable's values are like 25.0 and 35.0, so this is a maximum distance |
| 0x270, 0x272 | two words, copied to driver words 0 and 1. Fable saw these as percentages up to 140 |
| 0x274 | with flag `0x400` and a value of 2, clears driver flag 8 (otherwise flag 8 is set) |
| 0x278 | if non-zero, sets driver flag 4 |
| 0x27c | dword, default 1 when it is -1. Fable saw values like 4000, 800 and 10000 |

The Fable docs also list this block as unknown. The distance floats and the alias meaning of `0x108` line up with what they observed in real files.

## `.pak` archives

Only the parts I could read from the decompile are here. The per-entry fields are not decoded, so no extractor can be written from this alone.

**Discovery** (`FUN_00a96360`, `decomp_0051.c`): scans `data\Pak\*.*pak`, then the per-user folder `...\Lionhead Studios\TheMovies\` for `*.cpak` (the folder is from `SHGetSpecialFolderPathA` with CSIDL `0x23`, the common application data folder). `.cpak` files are user content and go through a separate loader (`FUN_00aafc30`) from the normal `.pak` path.

**Loading** (`FUN_00aafeb0`, `decomp_0052.c`):
- At most `0xffe` (4094) pak files can be loaded. Past that it logs `"Too many pak files ... is the maximum"`. Each pak gets a sequential index from the counter `DAT_010b9360`.
- The index is XORed into each entry's flags dword (entry `+0x14`, mask `0x7ff8000`, shifted left 15), so every entry records which pak it came from in bits 15-26. Code elsewhere reads it back with `(flags >> 0xf) & 0xfff` (for example `decomp_0046.c`).
- The pak's `FILE*` is kept open at pak object `+0x28`, in read mode. Pak object `+0x24` is a mode flag: 1 normally, or 2 when the header version is 6.

**Header** (`FUN_00a9b6b0`, parsed from a buffer read by `FUN_00a9be50`; size check in `FUN_00a9baa0` requires at least 0x34 bytes):

| File offset | Meaning |
|---|---|
| 0x00 | version dword. Only 4, 5 and 6 are accepted |
| 0x04, 0x08 | not identified |
| 0x0c | entry count |
| 0x10 | count of 8-byte records in a second table |
| 0x14 | not identified |
| 0x18 | size in bytes of a string blob |
| 0x1c | v4: offset of the entry table. v5/6: not identified (see below) |
| 0x20 | v4: offset of the 8-byte table |
| 0x24 | v4: offset of the string blob |
| 0x28, 0x2c, 0x30 | v5/6: offsets of the entry table, the 8-byte table and the string blob |

In v4 the three offsets sit at `0x1c`-`0x24`. In v5 and v6 three more dwords come first (`0x1c`-`0x24`, kept but not used in the parts I read), and the offsets move to `0x28`-`0x30`. The loader copies the tables into memory: `count * 0x38` bytes of entries, `count2 * 8` bytes of small records, and the string blob.

**Entries:** 0x38 bytes each. Only the flags dword at `+0x14` (pak index in bits 15-26) is known. The file-name/hash, offset and size fields have not been decoded.

**Path handling** (`FUN_00ab0060`, `FUN_00ab0150`): paths are lower-cased and cut down to the part after `data\`. A file-type classifier checks the extensions `.msh`, `.pak`, `.cpak`, `.exe`, `.avi`, `.wmv`, `.fnt`. For `.msh` it treats names starting `head_` and `cos_` specially, with `_fat` and `_enh` suffixes (body-size and enhanced variants of costumes). A separate `"%s\%s%s%04d.pak"` format is used when generating numbered pak names.

## Comparison with the Fable decomp (`BuffJesus/FableDecomp`)

*Fable: The Lost Chapters* (Lionhead, 2004-05, MSVC 7.1) shares more with our binary than Black & White does, but only in a few places. Their `docs/formats/AUDIO.md` (Part B) documents `.lug` from real files, and I used it to cross-check ours.

**Matches (all confirmed by both sides):**
- Same container: `"LiOnHeAd"` + blocks of `char[32] name`, `u32 size`, payload. Same segment order: `LHFileSegmentBankInfo`, `LHAudioWaveData`, `LHAudioBankSampleTable`, `LHAudioBankCriteiaInfo` (same typo).
- Same sample record size, 652 (0x28c) bytes, with the same offsets for id (+260), wave id (+264), RIFF size (+268), RIFF offset (+272), format tag (+292), channels, rate, group name (+320).
- Their bank-info payload is 0x208 bytes holding the bank title, which fits our loader reading the version dword at 0x208 (their version is 0, as ours expects).
- Their `LHAudioBankCriteiaInfo` layout is `u32 count`, then per entry `u32 len`, tag string, `u32 n`, `n` sample ids. That fills in the criteria segment we left open. The tags are semicolon-joined event criteria such as `SI_HERO;SE_FOOTSTEP;MATERIAL_GRASS`.
- The sample-table count is followed by a second u16 in Fable's files, which they could not explain. Our loader masks the 4-byte count read to 16 bits and ignores the upper half.
- Their audio is embedded RIFF/WAVE, packed back to back and addressed by RIFF offset and size. That matches our `FileSize` field in the resource header, which is the record's offset plus the wave segment base.

**What their notes add:** codec statistics for Fable's banks (Xbox ADPCM `0x0069` for 98.7% of clips, otherwise 16-bit PCM), the tag format above, and the observation that a `.met` sidecar file with build metadata sits next to each bank. Our `LH_LoadMetFile` reads such a file.

**What ours adds for them:** the driver table above answers their open question about the `+576..` parameter block. They marked those fields as hypotheses.

**Other overlap:** none I could use. Fable's `.big` archives and its LZO1X texture compression have no counterpart in our export (no LZO or zlib strings). `CSystem` in Fable is a different class (`CSystemManager`, `CSystemRegistry`). Their save format (`SAVE*.md`) and definition files (`.bin` defs) are Fable-specific, and our save format is the text-based SLVAR one. Their mesh notes are for `.big` mesh banks, which are unrelated to our `.msh`.

## TODO
- DJ-era selection; timeline event data sources; `info.sm` field meanings.
- Criteria segment fields in our own loader (`FUN_00c03440`) against Fable's layout; `.pak` entry layout (name/hash, offset, size, compression) and how a lookup by path finds an entry; the newer META Data `.lug` route; the rest of the sample record and the RLM/criteria segment layouts.
- Details of the older notes (SLVAR type functions, `CSystem`, the RTTI class list) can still be pulled from `git show 9b29b4e:FINDINGS.md`.
