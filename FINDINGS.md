# The Movies: Stunts & Effects — Reverse Engineering Findings

Function names proposed so far are in `renames.csv`. `python3 tools/apply_renames.py` applies them to `ExportDecompiled/`.

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

### Criteria segment, confirmed in our loader

`LH_LoadBankCriteriaInfo` reads a count, then per entry a string (`00bbfe60`, a u32 length followed by the bytes) and a list of sample ids (`00c03440`, a u32 count then that many u32s). That is the same layout Fable's docs give. All of these calls go through a shared bidirectional archive object: field `+4` is 0 when loading (`LH_Archive_IsLoading`), so the same serializer code reads or writes depending on mode.

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

**Correction:** an earlier version of this section said there was no other overlap and that our export has no zlib strings. Both statements were wrong, and the deep dive below replaces them. Fable's `.big` archives and its LZO1X texture codec still have no counterpart here. `CSystem` in Fable is a different class (`CSystemManager`, `CSystemRegistry`). Their save and definition-file formats are Fable-specific, and their mesh notes are for `.big` mesh banks, unrelated to our `.msh`.

## Deep dive: what else matches Fable and Black & White

I compared the export against both projects using several independent signals, then checked the results by hand. Files: `fable_matches.csv` (results), `tools/match_fable.py` (reproducible), `renames.csv` (verified names).

**Signals used**
1. Every quoted string in our export against every string in both repos (source, symbols, Ghidra dumps, docs).
2. Normalised pseudo-C similarity (4-gram shingles with variable and address names removed) against the roughly 9,300 function bodies in Fable's Ghidra dumps.
3. Function sizes. In the matched region 446 of 511 functions have exactly the same size in both binaries, so the code is the same source built the same way. Runs of 6 or more consecutive functions with identical sizes give matches even where Fable has no decompiled body.
4. Class names, RTTI names and numeric constants against both repos' symbol lists and sources.

**Result for Fable: a large shared library.** In our binary the window `0x00bc0000`-`0x00c9a000` holds Lionhead middleware that Fable also contains (in Fable it sits around `0x00c00000`-`0x00cb0000`). `fable_matches.csv` has 1,154 matched functions from 4,852 in that window. Confidence of each row:
- 186 matched by body similarity alone (0.6 or higher).
- 368 size-run matches with a body similarity of 0.6 or higher, so both signals agree.
- 117 size-run matches where the body similarity is below 0.6 (likely right, since the sizes are identical, but not confirmed).
- 483 size-run matches where Fable has no decompiled body to compare, so only the size sequence supports them.
- 142 rows have a similarity of 0.95 or higher.

What the shared code is: a dynamic OpenAL wrapper (`alcCreateContext`, `alSourcePlay`, ...), a DSP/codec stack (FFT and MDCT kernels, resamplers, convolution filters, gain and mixing loops), CPU feature detection, the `PK*` thread, semaphore and timer classes, hashing and bitstream helpers, DirectSound and COM helpers, and the game's HTTP client (a different generation of it, see below). It also includes libvorbis (`Xiph.Org libVorbis I 20030909`), libogg and zlib (covered below).

**How far to trust Fable's names.** I checked every Fable name's provenance. None of the matched functions carry the PDB-derived names that Fable's BSim pass ported from `ego_r.exe` and `FableWin.exe`. All of them come from Fable's own automatic naming, which describes behaviour and is sometimes wrong. Two examples I found: Fable calls a 4,202-token audio convolution function `Graphics_RenderTextWithConditionalEffects`, and calls our Ogg page checksum `CRC32_ComputeBuffer`. So `fable_matches.csv` is a set of hints. `renames.csv` only takes names I checked against our own code.

**Names verified and added to `renames.csv`**
- zlib, **two separate copies** in the binary. The first copy is `0x00b2....`-`0x00bb....` and the second is `0x00a3....`-`0x00ac....` (names ending `_copy2`). I named 35 functions in the first (including `adler32` and the deflate half) and 29 in the second: `inflate`, `inflateInit_`/`inflateInit2_`, `inflateReset`, `inflateEnd`, `inflateSetDictionary`, `adler32`, `zcalloc`, the `inflate_blocks_*`, `inflate_codes_*`, `inflate_trees_*`, `huft_build`, `inflate_flush`, `inflate_fast`, and the deflate side: `deflate`, `deflateEnd`, `deflateCopy`, `deflateReset`, `deflateParams`, `deflateInit2_`, `read_buf`, `lm_init`, `longest_match`, `fill_window`, `deflate_stored`, `putShortMSB`, `flush_pending`. The first copy's version check compares against the string `"1.1.4"`, so this is zlib 1.1.4 (B&W ships 1.1.3). The identifying signals were the message strings, `stream_size==0x38`, `adler32`'s 65521 and 5552 constants, deflate states 42/113/666, a `0x16b8`-byte deflate state and a 1,440-entry huft array. The `_tr_*` functions of `trees.c` are not named yet. My first grep missed the second copy and its deflate half because those strings appear as symbol references (`s_incorrect_header_check_...`) and not as quoted strings.
- `Jenkins_Hash_Lookup2` (golden ratio `0x9e3779b9` and the lookup2 mix), `Ogg_PageChecksumSet` (an MSB-first CRC over an Ogg page, written at header bytes 22-25), `CPU_IsCpuidSupported`, `CPU_GetIntelBrandName`, `CPU_GetAMDBrandName`, `CPU_InitCapabilities`, `Math_IntegerSqrt`.
- Three functions in the HTTP client, named by what they do: `LHHttp_ParseURL`, `LHHttp_BuildHeaderBlock`, `LHHttp_ParseResponseHeaders`.

**HTTP client.** Our client (`"Lionhead Studios TheMovies Client (HTTPLib) 1.0"`, `0x0096....`) does the same job as Fable's `LHHttp2` (`0x0083f...`-`0x00841...`): parse the URL with default port 80, build headers with a default `User-Agent`, read `ServerCode` and `Location:`. It is a different implementation (plain `char*` fields, extra `X-MoviesContent-*` headers), so body similarity is only 0.2-0.36 and it is not a code match.

**Result for Black & White: almost nothing beyond the `LHFile` container.**
- Strings: 34 in common, all trivial except `"LiOnHeAd"` and the zlib error messages. Their `src/zlib` is zlib 1.1.3, which is the same structure as ours, but it is upstream zlib, not a Lionhead library.
- Numeric constants: one match, 2π.
- Class and RTTI names: no useful overlap (only generic ones like `Bubble` and `Config`, which mean different things).
- The `LHFile` segment container matches, as documented above. The rest of B&W's Lionhead source (`LHMem`, `LHHeap2`, `LHParseFile`, `LH3DMath`, `LHLog`, `LH3DMesh`) has no counterpart. The compiler is MSVC 6 and the library generation differs, so size runs do not line up either.
- Their repo has almost no decompiled function bodies I could compare, only source and symbol lists, so code-level matching was limited to strings, constants and names.

**Limits.** The size and body signals only see the shared library. Fable's dumps hold about 9,300 bodies out of about 49,600 functions, so functions without a dumped body can only be matched by size runs. The 3,700 unmatched functions in our window may be Movies-specific or may be shared code that neither signal can catch.

## libogg and libvorbis inside the binary

The binary statically links **libogg (1.1-era)** and parts of **libvorbis 1.0.1 (`Xiph.Org libVorbis I 20030909`)**. I named them by reading the code next to the upstream sources (`xiph/ogg` tag `v1.1.1`, `xiph/vorbis` tag `v1.0.1`). The Fable hint names (`CBitstream::WriteBits`, `FFT_Radix4Transform`, `MDCT_Analysis`, ...) turned out to be its automatic guesses for these same functions, so the real names replace them. Function order follows the source files, which made the mapping reliable; each name was confirmed by a distinguishing constant, string or call pattern.

**libogg** (40 names, `renames.csv`):
- `framing.c`: `ogg_page_*` accessors, `ogg_stream_init/clear/destroy/reset/reset_serialno`, `_os_body_expand`, `_os_lacing_expand`, `ogg_page_checksum_set` (`00c327e0`), `ogg_stream_packetin`, `ogg_stream_flush` (the `"OggS"` header writer), `ogg_stream_pageout`, `ogg_stream_pagein`, `_packetout`, `ogg_stream_packetout/peek`, and `ogg_sync_init/clear/destroy/buffer/wrote/pageseek/reset`.
- `bitwise.c`: `oggpack_writeinit/write/writealign/reset/writeclear`, `oggpackB_write`, `oggpack_readinit/look/adv/read/bytes`, using a 33-entry mask table at `0xf77f78`.

**libvorbis** (69 names):
- `info.c` in full: comment functions, `vorbis_info_init/clear`, the three `_vorbis_unpack_*` and `_vorbis_pack_*` functions, `vorbis_synthesis_headerin` (`00c301a0`), `vorbis_commentheader_out` and `vorbis_analysis_headerout`. The vendor string `"Xiph.Org libVorbis I 20030909"` is written by `_vorbis_pack_comment` (`00c30370`).
- `sharedbook.c` and `codebook.c`: `_ilog`, `_float32_unpack`, `_make_words`, `_book_maptype1_quantvals`, `_book_unquantize`, static book clear/destroy, `vorbis_book_init_encode/init_decode/clear`, `_dist`, `_best`, bit reversal, `vorbis_staticbook_pack/unpack` (the `"BCV"` `0x564342` sync pattern), `vorbis_book_encode/errorv/decode`, `decodevs_add`, `decodev_set`, `decodevv_add`.
- `smallft.c`: `drfti1`, `fdrffti`, `dradf2/4/g`, `drftf1`, `dradb2/3/4/g`, `drftb1`, `drft_forward`. Verified through the call structure of `drftf1` and `drftb1`, and the `{4,2,3,5}` factor table.
- `mdct.c`: `mdct_init`, the 8/16/32-point butterflies, `butterfly_first`, `butterfly_generic`, `butterflies`, `mdct_clear`, `mdct_bitreverse`, `mdct_backward`, `mdct_forward`.

**What is not there.** I found no `floor1` dB lookup table and nothing I could tie to floor, residue, mapping, windowing or psychoacoustic code, so those parts of libvorbis appear not to be linked. That was not exhaustively ruled out. The game's own codec layer (`LLACoda*`, `LHACodecsOggVorbisCCodecInstance`, `OggVorbisLibWrapper.cpp`) calls into the pieces above. For example `00c609a0` builds a 128-point `mdct_init` inside Lionhead's own code.

**Other find.** `00bba8c0` (`CodecFormat_DetectFromHeader`) sniffs the first 4 bytes of an audio file to choose a codec: `"OggS"` selects Ogg, `"RIFF"` selects MPEG-2 Layer II (fmt tag `0x50`) or Xbox ADPCM (`0x69`), and `0x75b22630` selects WMA.

## Naming the rest of the shared library window

The window `0x00bc0000`-`0x00c9a000` (4,852 functions) is now mostly labelled: **1,867 names in `renames.csv`** cover everything named this session, and `library_map.csv` lists every function in the window with its size, current name, source-file bracket, structural category and Fable hint. `tools/library_map.py` regenerates it. About 2,880 functions in the window still have `FUN_` names (about 550 of them 200 bytes or larger). Of those, about 800 have a Fable hint I have not adopted.

**How the names were made, from most to least reliable**
1. **Source-file assertions.** The library logs `.\File.cpp(line) : message` through a stack-built message. Each such function names its own class and often its purpose (`PKCSemaphore`, `PKDiskBufferingCReader`, `PKContainersCRedBlackTree`, `PKDataReadCWindow`, `PKStringsCHeapString`, `PKAllocatorsCPooledMemory`/`CPresizedMemory`, `LLACodaCChannel`/`COneShot`/`CStreamed`/`CSystem`, `CFrame`, `CInstance`, `CASyncDecoder`, `OggVorbisLibWrapper`, `MapAnalysisImp*`, `RiffCInfo`, `CSFXTimeline`). I read about 110 of these and named them `Class_Method`, with the evidence (file, line, message) in the CSV. Header assertions from `d:\rh\audio\ver06_movies2\libpk\` (`PKCAutoDelete.h`, `PKCAutoDeleteMe.h`, `PKCAutoDeleteArray.h`, `PKCArray.h`, `PKAllocatorsLinkTime.h`, `PKAllocatorsRunTime.h`, `PKCMailbox.h`) name 84 more template instantiations by header line (`Get`, `Release`, `Set`, `Resize`, `At`, `Free`, `Allocate`, `Receive`).
2. **The red-black tree.** `PKContainersCRedBlackTree` is complete (`Insert`, `Remove`, `LeftRotate`, `Find`, `FindFirst`, `GetMin/MaxObject`, `NextNode`, `PrevNode`, `GetSuccessor/Predecessor`, `Count`, `ForEach`, constructor and destructors). Its nodes are `{left, right, parent, ..., object at +0x10}` and it is used by the segment reader, the disk reader and the map-analysis classes.
3. **Win32 and OpenAL wrappers.** 44 single-call wrappers are named by the API they call (`Wrap_CloseHandle_...`), and 33 lazy OpenAL loaders by the AL function they resolve (`OpenALContext_alSourcePlay_...`).
4. **Compiler-generated patterns.** 388 scalar deleting destructors, 289 destructors called only from those, 314 constructors (stores its final vtable and returns `this`) and 92 vtable setters. Functions with the same vtable address belong to one class, which the names show (`Ctor_vt00d9fb18_...`).
5. **STL and array templates.** `LH_Array_*` (get/set/reserve/free/truncate), and the MSVC 7.1 sort internals `LH_Sort_Med3`, `PushHeap`, `AdjustHeap`, `UnguardedPartition`, `InsertionSort` and comparators (75 functions). 
6. **Small maths and bit utilities** where the body is a few lines, such as `Util_PopCount`, `Util_BitLength`, `Util_CeilLog2` and `Math_Vector3Length`.

**One correction to Fable's hints.** Fable calls four x87 functions `Pow2_Float`. They multiply the exponent by 3.321928 (log2 of 10) before `fscale`/`f2xm1`, so they compute 10^x. They are named `Math_Pow10_x87*`.

**What the bracket column shows.** Template instantiations from many source files are interleaved, so most functions can only be placed "between file A and file B". The largest unnamed blocks: after `MapAnalysisImpCGroupModel` (about 400), between `PKCTimerManager` and `PKDiskBufferingCReader` (about 380), and between `PKAllocatorsCPooledMemory` and `CVSTParameters` (about 250). The game's own audio engine (`LHAudioSystem_*`, `CEngine`, event triggers, atmosphere groups, the sound driver classes) is in the 0x00bf3000-0x00c02000 and 0x00bc0000-0x00bc9000 ranges. I named seven creator and predicate functions there and left the rest, because that code is Movies-specific and each function needs its own read.

## TODO
- DJ-era selection; timeline event data sources; `info.sm` field meanings.
- `.pak` entry layout (name/hash, offset, size, compression) and how a lookup by path finds an entry; the newer META Data `.lug` route; the rest of the sample record and the RLM/criteria segment layouts.
- Details of the older notes (SLVAR type functions, `CSystem`, the RTTI class list) can still be pulled from `git show 9b29b4e:FINDINGS.md`.
