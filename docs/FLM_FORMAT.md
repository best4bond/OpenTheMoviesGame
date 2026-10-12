# The `.flm` scene format (The Movies, MoviesSE.exe 2006 patched build)

Status: reverse-engineered from `MoviesSE.exe` (Ghidra) and validated against the game's own data.
**The parser in `tools/FlmDump.py` walks all 11,914 `.flm` files shipped with the game and lands on
the exact last byte of every one.** The outer structure is therefore solid. Per-field *meaning*
inside the object records is only partly decoded; every claim below is labelled
**[code]** (read from decompiled game code), **[data]** (inferred statistically from the corpus)
or **[guess]**.

## 1. What a `.flm` is

A `.flm` ("film"/"flim" scene) is a small, binary, **node graph** that scripts a piece of choreography:
which animations (`.anm`) play, where actors stand and walk, where cameras go, and what events fire.
The game uses the same format for two very different jobs:

| Use | Where | Examples |
|---|---|---|
| **AI interactions** – a character interacting with a prop or another character (queue at a bin, throw litter, smoke, talk, repair…) | `Data\Scene\Interactions\ai_*.flm` (580 files) | `ai_swingbin.flm`, `ai_throwlitter.flm`, `ai_donothing.flm` |
| **Movie-maker scene library** – scripted scenes that the player picks/shoots in the movie editor (with cameras and `action`/`cut`/`take_end` markers) | `Data\Scene\Interactions\<NNN>\*.flm` (numbered folders `000`..`0NN`), plus ~1,000 loose files | the other ~11,300 files |

Counts over the whole corpus: 11,914 files, **1,288,931 objects**; version field = 18 (9,086 files) or 19 (2,828 files).
No file starts with the `zcmp` compression magic that the loader also supports (see §3).

Files are stored in the game's `.pak` archives. `reshoot` (Movies Editor tools) lists/extracts them:
`reshoot -g -d <outdir> -e "data\scene\interactions\ai_*.flm"` (**flag order matters**: `-g` then `-d`, otherwise it extracts
into the game folder).

## 1b. The `NNN` prefix is the SET ID; scene definitions live in `data\scene\NNN\*.ini` **[data, verified]**

Each film set has an ini in `data\set\set_*.ini` with `[scene] setid = N`. The numbered folders / file prefixes (`NNN_...flm`, `data\scene\NNN\NNN_*.ini`) are those set ids, so a set's folder holds **the scenes that can be shot on that set**.
Set ids (from `data\set\*.ini`; several set variants share an id): **1** landscapes (alien planet, battlefield, desert, field, forest, jungle), 2 alleyway, 3 bar, 4 rooftop, 5 office, 6 city corridor, 7 hotel bedroom, 8 diner, 9 municipal, 10 school corridor,
11 school library, 12 suburban street, 13 living room, 14 bathroom, 15 city street, 16 barracks, 17 bombed street, **18 stage (`set_stage`)**, 19 subway carriage, 20 subway station, 21 beach, 22 bridge tz1, **23 spaceship bridge (`set_bridgetz2/3`)**,
**25 spaceship corridor (`set_corridortz1..4`)**, 27 graveyard, 28/29 shack exterior/interior, 30 cellar, 31 bank, 32 saloon, 33 saloon bedroom, 34 jail, 35 western street, 36 stagecoach, 37 car, 38 roof section, 40 green screen, 41 blue screen,
42 municipal reception, 44 bridge variation, 45/46 miniature city (intact/destroyed), 47 scrolling miniature.
(`rehearsal_*_set018.flm` = the rehearsal scenes of set 18, the stage. Captured shoots: `001_fire_*` = alien-planet landscape stunts, `023_*` = spaceship bridge, `025_*` = spaceship corridor stunts, `018_*` = generic stage scenes.)

**Scene definition ini** (`data\scene\NNN\NNN_name.ini`), keys seen: `name` (string id), `sisname`, `interaction` (the `.flm` file), `description`, `numsliders` (how many director sliders the scene shows, e.g. 2 for the stunt scenes), `runtime` (scene length in seconds, e.g. 39, 62, 17, 25, 103),
`[role/roleN]` (`required`, `costume` e.g. `costume_sci-fi_blue`, `gender`, `stuntrisk` 0..1, optional `[role/roleN/genre]`), `[metaprops]` (props the scene needs: `scanner`, `time_bomb`, `shotgun`, ...),
`[genre]` (weights horror/action/comedy/romance/sci-fi), `[rating]` (sex/violence/realism), `[level] quality`, `[date] from/to`, `[technology]` (e.g. `environmental_pyrotechnics`), `[stunt] level` (0.6 for `001_fire_stare`), `[categories]` (script-slot tags such as `action/intro`, `action/investigation`, `comedy/intro`).
So the film's **script editor** picks scenes by category/genre from the set's folder, and each scene's `.flm` provides the choreography, the crew bundle and the sliders (`numsliders` = number of `sld_*` channels shown).

## 2. How the game uses a scene at runtime

```
desire (priority)            -> CMetaExplainer for the action name -> prop explainer (Data\explainers\*.ini)
  -> CActivity (per character/prop)                                   [CAssetActionExplainer_CreateActivity]
  -> runner states  EnRoute -> (Queueing) -> Turning -> ReadyAndPuppet
  -> TMCharacter_PlayInteractionScene(name)  (char vtable slot 88, 0x599480)
       -> Scene_LoadFlm(name)            0x97c450   builds the path, loads the file
            -> scene ctor 0x97c170 -> parser 0x97b6a0
       -> Scene_BindParent / Scene_SetPlacement(scene, character position, yaw)
       -> character "puppeted" flag set; the scene now drives the character
  -> scene fires events; event "ai_stop" ends it (CActivity_SendAiStopToProp sends it)
```

* The scene name comes from the explainer ini (`interaction = ai_swingbin.flm`) or from
  `Prop_GetPuppetSceneName` (0x4043a0). Default when none: **`ai_puppet_wait.flm`**.
* `Scene_LoadFlm` builds `Data\Scene\Interactions\<name>`. If the name starts with **three digits**
  (`012_something.flm`) the file is looked up in the numbered sub-folder `012\`.
* If the file is missing: log `Missing flm file:<path> Using blank scene instead` and load **`ai_donothing.flm`**.
  A name of **`None.flm`** loads nothing.
* Names beginning with `ai_` or `_debug` get scene flag `0x40000` (AI scene: not cached/preloaded like movie scenes).
  Three special names (`015_fall_window_on_fire`, `015_fall_from_building`, `015_window_explode`) get flag `0x400`.
* After parsing, the loader sends the scene events `endshoot` (1.0), `ai_crane` and `ai_dolly` (0/1 from flags) using the
  scene event function `FUN_009757a0(scene, "name", float, 0)`.
* The scene object is 0x274 bytes (ctor `0x97c170`); live scenes are appended to a global vector (`DAT_01050b74`).

## 3. File layout (little-endian)

```
0x00  HEADER                      0x3C bytes  (15 dwords, read by FUN_00971460)
      int32[0]    unknown (0x44-0x50 in samples; probably a size/offset)             [guess]
      int32[1]    VERSION        18 or 19                                           [data]
      int32[2]    STRING BLOCK SIZE in bytes (includes the offset table)            [code]
      int32[3]    string-table index of a LINKED/CHILD scene name (-1 = none);       [code]
                  the loader recursively loads it (Scene_LoadFlm) and attaches it
      int32[4..8] -1 / 0                                                            [data]
      byte 0x2C   A  (count; skipped (A+B)*4 bytes after the header array)          [code]
      byte 0x2D   B
      byte 0x2E   STRING COUNT                                                      [code]
      byte 0x2F   CHANNEL COUNT                                                     [code]
      u16  0x30   unknown
      u16  0x32   OBJECT COUNT A                                                    [code]
      byte 0x34   ENTITY COUNT                                                      [code]
      byte 0x35   FLAGS (bit1: per-channel extra int32 present; bits1-2 copied to scene flags) [code]
      byte 0x36   OBJECT COUNT B     (total objects = u16@0x32 + byte@0x36)         [code]
      byte 0x37   HEADER ARRAY COUNT (int32 array right after the header)          [code]
      int32[0x38] string index of the scene's CAMERA/"look_at" name (-1 none, -10 = built-in "look_at");
                  checked for the substrings "trailer" and "[user camera]" to set scene flags 0x2/0x10   [code]
0x3C  int32 headerArray[HEADER ARRAY COUNT]
      skip (A+B)*4 bytes
      STRING BLOCK : int32 offset[STRING COUNT] (relative to the start of the block),
                     then NUL-terminated strings. Total block size = header int32[2].
      ENTITY TABLE : ENTITY COUNT * 8 bytes  { int32 stringIdx; u8; u8; u16 }
                     the name "dummy_extra" sets a flag (entity is a placeholder extra)       [code]
      CHANNELS     : CHANNEL COUNT * { int32 n; int32 ids[n] }   (ids = box ids that depend on the channel)
                     channel i is NAMED by string i (the first strings); a channel named "extras_leave" gets flag 2 [code]
      CHANNEL EXTRA: if FLAGS&2 : int32[CHANNEL COUNT]
      OBJECT RECORDS : (u16@0x32 + byte@0x36) records, each { int32 type; int32 totalSize; ... }
                       records are contiguous; advance by totalSize.
EOF = end of last record (verified for all 11,914 files)
```

Optional compression: a file whose first four bytes are `zcmp` is decompressed by `FUN_00afb9d0`
(the stream after the magic) before parsing. None of the shipped files use it. **[code]**

### Strings
The string table holds asset names and marker names. Corpus-wide extensions:
`.anm` ≈ 201k references (animations; 1.5k+ distinct), `.seq` 11k (sequences), `.flm` 10k (nested scenes),
`.msh` 405 (props), plus bare words (no extension) such as `action`, `take_end`, `cut`, `break`, `crew_wait`,
`short`, `extra_wait`, `ai_action`, `litter`, `fclexp` (facial expression), which are markers/events/entity names.
The "entity" names most common across all files: `dummy_extra` (every file), `action`, `take_end`, `cut`, `break`,
`crew_wait`, `short`, `extra_wait`.

## 4. Object records

The factory is `FUN_00971950` (switch on `type`); classes live in namespace **`FS`**.

| type | class (RTTI) | runtime size | file size (typical) | count in corpus |
|---|---|---|---|---|
| 0 | `FS::Box` | 0x60 | 72 (+4 per link) | 84,605 |
| 1 | `FS::AnimBox` | 0x7c | 84 / 88 / 96 | 522,205 |
| 2 | `FS::MoveToBox` | 0xb4 | 132 | 140,759 |
| 3 | `FS::ChoiceBox` (branch / switch) | 0x80 | 120–156 | 113,591 |
| 4 | `FS::SettingsBox` | 0xa8 | 144 | 100,334 |
| 5 | `FS::CObject` | 0xe8 | 64 / 80 | 11,065 |
| 6 | `FS::Character` (an actor) | 0xe8 | 64 / 80 | 25,501 |
| 7 | `FS::CamBox` | 0x258 | 116 / 136 | 166,378 |
| 8 | `FS::CCamera` | 0x13c | 80 | 9,814 |
| 9 | `FS::CSettingsBox2` | 0x94 | 124 | 114,679 |

(All sizes in bytes. A record is *fixed part* + `numTriples*12` + int list A + int list B, see below. `totalSize` is authoritative.)

### 4.1 Common box header (types 0,1,2,3,4,7?,9) – words w0..w14 **[code]** (`FUN_00a24f50`, `FUN_00a444f0`)

| word | meaning |
|---|---|
| w0 | type |
| w1 | total record size |
| w2 | **box id** (unique in the file; every link elsewhere refers to these ids) |
| w3 | small int / id – group/parent link **[data]** |
| w4..w7 | float x, y, z, yaw (w6 is almost always 0) – position/orientation offset **[data]** |
| w8 | 4 bytes: **b0 = number of 12-byte "trailer triples"**, b1 = flag bits (copied into the box's flag word), b2 = more flags, b3 |
| w9 (low byte) | count of **int list A** (outgoing links; always valid box ids) |
| w10 (low byte) | count of **int list B** |
| w11 | 0 / -1 |
| w12..w14 | 0 (w14 stored but unused so far) |

Tail after the type-specific fixed part: `b0 × 12` bytes of triples (copied raw to box+0x24), then list A ints (box+0x2c),
then list B ints (box+0x30). **[code]**

### 4.1b Fixed size per class and the trailer triple **[code]**
Slot 4 of every box class returns the size of its **fixed part** = the byte offset where the trailer triples begin:

| class | fixed part (bytes) | words |
|---|---|---|
| Box | 0x3C | w0..w14 |
| AnimBox | 0x48 | w0..w17 |
| MoveToBox | 0x78 | w0..w29 |
| ChoiceBox | 0x4C | w0..w18 |
| CamBox | 0x68 (file version < 19) / 0x7C (version 19) | w0..w25 / w0..w30 |

Each trailer triple (one per actor slot, `b0` of them) is **`{ next box, slot in next box, action priority }`**: **[code, FSBox_Process]**
* `next box` - box the actor moves on to when this box finishes (-1 = the actor is released),
* `slot in next box` - which actor slot of the next box this actor occupies (0 for single-actor chains; 1 for the second participant),
* `priority` - written to the actor's animation controller as its **action/animation priority** (`FSActor_SetActionPriority`, `FUN_00a3bfe0` -> `FUN_00a017f0`): **200** for ordinary
  action boxes, **120** for SettingsBox/CSettingsBox2.

### 4.2 `Box` (type 0) - sync / locator node **[code]**
Fixed part is only the common header (0x3C bytes, `FSBox_GetFixedSize` returns 0x3C), so the words I previously listed as "`w15..w17`" are simply
its **trailer triple** `{next box, next slot, priority 200}` (see 4.1b). A plain Box does nothing visible: it is a **wait / synchronisation / locator node**.
Its `w11` (box+0x34) is its **duration in ticks**: 0 = pass straight through, N = wait N ticks, **-1 = wait until another box signals it** (via a start/end signal list, section 5b).
`w12` (box+0x54) = delay before a signal takes effect. `FSBox_Update` (0xa43d00, slot 11): finished (returns 2) when `elapsed >= w11` (and w11 != -1) or when the "signalled" flag
(box+0x4b bit0) is set; otherwise still running (returns 1).
Example: `ai_swingbin.flm` Box 11 sits at the stand position (-0.631,-0.652) and passes the actor on to AnimBox 10.

### 4.3 `AnimBox` (type 1) – play an animation **[code]**
`w15` = **string-table index of the `.anm` file** (the init, vtable slot 3 at `0xa439e0`, resolves it with
`scene->GetString(idx)` (`FUN_009722a0`), loads it with `FUN_00aa9160(name,1)` into box+0x60 and computes its duration box+0x68),
`w16` = -1 (100%), `w17` = -1 (99%; second string index, unused in shipped data).
Trailer triple (w18..w20): `{ next box id or -1, 0/-1, 200 }` – the third value is 200 in nearly every case
(time, probably 1/100 s or ticks; the duration getter returns field×100) **[data]**.
`-1` as next id ends the chain.

### 4.4 `MoveToBox` (type 2, 132 bytes) – walk along a path **[code]**
Common header, then a 13-word path block `w15..w27` (copied to box+0x60): **start point** `P0 = (w15,w16,w17)`, two **control points**
`(w18..w20)`, `(w21..w23)`, **end point** `P3 = (w24,w25,w26)`, `w27` extra. `w28` = **string-table index of the walk animation** (`walk.anm`, `walk_female.anm`;
default -1; the init, `FUN_00a42ae0`, loads it with `Anim_LoadByName`), `w29` = byte flag (bit0 set -> **straight line P0->P3**; clear -> cubic curve through the control points),
then one trailer triple. At runtime `FSMoveToBox_GetPlacement` (0xa429a0) evaluates the path at normalised time `t` (position from the curve / lerp, **yaw = direction of the
curve tangent**). **[code]**

### 4.5 `ChoiceBox` (type 3) - branch / switch  **[code]**  (earlier notes called this "MoveToBox waypoints"; the RTTI name is `FS::ChoiceBox`)
Layout: common header; `w15` = **selector** (int, may be a string index or one of the negative selector codes below); `w16` = {byte, flags byte, u16}
and the number of branches **N**; optional ints `+0x44/+0x48` when flag bit0 of the flags byte is set (two more string indices used by selector -2); then
**N groups of `b0` triples** (each group = the per-actor "next box" links of that branch), then **N float weights**.
`FSChoiceBox_Execute` (0xa41970) picks branch index `i` and copies that group's triples into the box's active trailer, then reports "done" (returns 2). Selector `w15`:

| w15 | meaning | how `i` is chosen |
|---|---|---|
| **-1** | random | weighted random using the N float weights (typical weights 0.5, 0.2, 0.25, 0.125 ...) with the scene's random value (`FUN_00972130`) |
| **-2** | compare two scene variables | strings at `+0x74/+0x78` look up two scene variables (`FUN_009722e0`): `i = 1` if equal, `2` if first > second, `0` if first < second |
| **-3** | by an actor attribute | `i = FUN_0097e770(actor0.object)` (an attribute of the first actor's 3D object - likely gender/variant) |
| **-4** | by a prop attribute | reads the key `proptype` from the actor object's description and picks a random branch among N |
| >= 0 | named command (string index) | the name is looked up: `ai_no_3d_obj` (flag 1), `ai_linked_no_3d_obj` (flag 4), `ai_set_variance` (flag 2: reads `[variance:x]` / `[count variance:x]` tags from the actor object's description, used for crowd variance); the literal string `endshoot` increments a scene counter (+0x1cc) |

### 4.6 `SettingsBox` (type 4, 144 bytes) / `CSettingsBox2` (type 9, 124 bytes) - property setters **[code layout, [guess] semantics]**
Instant boxes (their `Execute` returns 2 = complete at once) that change properties of actor slot 0 (the box's first actor) and of the scene:
* `FSSettingsBox_Execute` (0xa41360): applies four sub-structs at box+0x64 / +0x70 / +0x88 / +0x90 (each applied to the actor object via `FUN_00a40d40`, `FUN_00a41250`, `FUN_00a411d0`),
  writes two floats from box+0x80/+0x84 into the actor object (+0x90/+0x94) and toggles actor flag bit 0x10000 from box+0x61. The trailer's last value is always 120 (types 4 and 9).
* `FSSettingsBox2_Execute` (0xa40a10): if flag bit0: sets the **scene time-scale / progress interpolator** (`scene+0x150`, value box+0x60 / `scene+0x1a8`, rate box+0x68); applies the sub-struct at +0x6c and +0x80
  to the actor object (`FUN_00a3fc40`) - in the data `w17` is very often a string index naming e.g. `fclexp` (**facial expression**); and if the actor has not yet had its "settings applied" flag (0x20) set,
  applies the +0x80 struct once and sets the flag.
So: SettingsBox = general actor/prop property changes (costume/attachments/visibility); SettingsBox2 = expression/speed/blend style changes.

### 4.7 `CObject` (type 5) and `Character` (type 6) - the scene's props and actors **[code + data]**
`FS::Character` (vtable 0xd707c0, ctor 0x971620 - earlier notes mislabelled it `FS::Character`; that name belongs to a *different* class whose constructor happens to follow in memory) derives from `FS::CObject`.
Both use their own header reader (`FUN_00a3ba30`): common start (w0..w7 as above) then **optional fields controlled by flag bits in w8**: bit1 -> six more words, bit4 (0x10) -> four more words.
* `Character` = an **actor**. `w5` = the **box id where this actor starts** (99% valid id); a scene has one `Character` per participant (25,501 over 11,914 files, about 2 per file). The trailing floats hold the stand offset:
  in `ai_swingbin.flm` they are **(-0.631, -0.652)**, identical to `LocalPositionX/Y` in `Data\explainers\swingbin.ini`. **[data, verified]**
* `CObject` = a **prop / non-character object** that the scene creates or moves (in `ai_swingbin.flm` it is the litter object `p_litter.msh`); `w5` is a box link, `w8` flags `0x10013`, `w9..w14` a transform.
* `CCamera` (type 8, 80 bytes, `FS::CCamera`, 0xa3fdf0) is also a `CObject` subclass: the scene's camera object, with extra runtime-only state.

### 4.8 `CamBox` (type 7) - a camera shot  **[code layout, data semantics]**
Header reader `FUN_00a251e0`. For file version >= 17 (all shipped files are 18/19) the fixed part is `w15..w24` (10 words); older versions use 8:
`w15` int (0), **`w16..w18` camera position (x,y,z)**, **`w19..w21` look-at target (x,y,z)**, **`w22` field of view in radians** (typical 0.63-1.04; the class default is 1.2257 = 70.2 deg),
`w23` float (0.5 - blend/ease factor), `w24` float (usually 0), `w25` = {flags byte, byte, u16}; if flags bit2 is set, five more words follow (`w26..w30`, else -1).
Then the trailer triple `{next box id, 0, 200}`. If both vectors are all-zero the camera is marked "static" (flag 0x40000). 20,107 CamBoxes in a 1,500-file sample; example (`031_exit_with_axe.flm`):
pos (-10.27, 8.33, 7.48), target (6.34, 2.19, 1.87), fov 0.686.

## 5. Execution model  **[code]**

All boxes derive from `FS::Box` (vtable 0xd7912c). Roles of the overridden vtable slots (verified from the base-class code):

| slot | role | notes |
|---|---|---|
| 0 | destructor | |
| 3 | **ResolveLinks** (`FSBox_ResolveLinks` 0xa44090) | every box id in the trailer triples (element 0), list A and list B is converted to a **box pointer** via `scene->FindBoxById` (`FUN_00971c30`); derived classes also load their animation (AnimBox: `.anm` from string idx w15; MoveToBox: `.anm` from w28) |
| 5 | **Place** (`FSBox_Place` 0xa43c90) | if idle (+8==0): store world position (+0xc..+0x14) and yaw (+0x18), set state = 1 or 2 |
| 7 | **AssignActor(slot, actor)** (`FSBox_AssignActor` 0xa43b70) | `b0` (the triple count) is the **number of actor slots** of the box; stores the actor pointer, ORs actor flags, resets actor placement to the "unset" sentinel -11000.0 |
| 8 | **GetPlacement(actorIdx, outPos, outYaw, t)** | base: the box position; AnimBox: position + per-actor offsets stored in the `.anm` (multi-actor animations carry 16-byte x,y,z,yaw offsets); MoveToBox: path evaluation |
| 9 | **GetDuration** | AnimBox: from the loaded animation (`FSAnimBox_ComputeDuration` 0xa43110; the `.anm` object has a *type* 0 single / 1 random variant / 2,3 variant list); Box: field x 100 |
| 11 | **Update** (`FSBox_Update` 0xa43d00 base) | returns 1 = keep running, 2 = finished; Settings/Choice boxes do their work here and return 2 |
| 12 | **Reset** (`FSBox_Reset` 0xa44130) | clears runtime state and the actor array |

So: **one trailer triple per actor slot**. Triple = `{next box (per actor), second value, third value}` with the third being **200** for movement/animation/camera/plain boxes and **120** for the two settings boxes (a constant per class, probably a priority or sort layer; not a per-instance time). Because each actor has its own "next" pointer, two characters can proceed along different boxes.

Flow of a scene:
1. Load -> parse (section 3) -> create objects -> `ResolveLinks` on all boxes.
2. Each `FS::Character` record names its **start box** (`w5`); the runner places that actor at that box (`Place`/`AssignActor`).
3. The runner repeatedly executes the box an actor is on: animation boxes play their `.anm` (duration from the animation), MoveToBoxes walk the path, camera boxes aim the camera, Settings boxes apply properties and finish immediately, Choice boxes pick a branch.
4. When a box finishes, the actor moves to that box's `next` pointer for its slot; `-1` ends the chain for that actor.
5. Events the scene emits/consumes: `ai_stop` (ends an AI interaction), `endshoot`, `ai_crane`, `ai_dolly`, markers `action` / `take_end` / `cut` / `break` (movie scenes).

### Worked examples (`python tools\FlmDump.py --graph <file>`)
```
ai_swingbin.flm   strings [dummy_extra, p_litter.msh, throw_litter_in_swing_bin.anm]
  Character id=2  startBox=11          (the actor)
  CObject   id=6                         (the litter prop, p_litter.msh)
  SettingsBox id=7
  AnimBox   id=10 pos=(-0.631,-0.652) anm=throw_litter_in_swing_bin.anm trailer=[-1,-1,200]
  Box       id=11 pos=(-0.631,-0.652) next=10
=> actor starts at Box 11 (the stand position next to the bin) -> plays the bin-throw animation -> ends.

ai_throwlitter.flm strings [ai_action, dummy_extra, actor_throw_litter.anm, litter, fclexp]
  Character id=1 startBox=10 ; CSettingsBox2 id=10 ; AnimBox id=2 anm=actor_throw_litter.anm trailer=[7,0,200]
  SettingsBox id=7 ; SettingsBox id=9 ; CObject id=8
=> throw-litter on the ground: set expression/settings -> play throw animation -> settings -> end.
```

## 5b. The runner (scene step and box state machine) **[code]**

The scene object (0x274 bytes) is a **discrete-frame simulator**; frame counter at scene+0x8c, hard cap **6000 frames**.

`Scene_Step` (`FUN_00977c80`) - one tick, called recursively for child scenes:
1. If the scene is active and not ending: handle "finished"/"jump" flags; if the finish frame is reached it calls `Scene_FastForwardToEnd` + `Scene_RestartAtFrame(startFrame)`.
2. Advance the progress/time-scale interpolator (scene+0x150..0x184, time constant 100.0).
3. Recurse into child scenes (`+0x3c..0x40` vector).
4. If a "restart" flag is set: `Scene_FastForwardToEnd`, `Scene_RestartAtFrame` (re-seat all actors on their start boxes).
5. Run the per-actor event trackers (`FUN_00975cf0`): for each marker/entity the scene fires the named events (`action`, `cut` -> flag 0x800, `dummy_extra` handling).
6. For every box in the scene's box array (`+0x60`, count `+0x48&0xffff`) run `FSBox_QueueIfHasActors` (0xa43c50): clear flags; if any actor is assigned, push the box on the scene's **active list** (`Scene_AddActiveBox`, linked list head scene+0x70, link at box+0x50, in-list flag box+0x48 bit25) and bump the box's "times active" counter.
7. **Drain the active list**: for each box, unlink and call `FSBox_Process` (0xa44320).
8. Update actors: first the scene's camera actor, then every other `Character`/`CObject` via vtable slot 6 (`FSCharacter_Update`, 0xa3cea0 - handles turn-in-place: picks one of 6 turn animations from the heading error 10/22/45 degrees each side).
9. Fire `ai_action` on the configured frame (`+0x1bc`), frame++.

`FSBox_Process` (`FUN_00a44320`) - per-box state machine, box state at +0x20:
* **0 WAITING**: calls vtable slot 13 (a per-class hook, a stub by default) then waits until *all* actor slots (`b0`) are filled; then state = 1, elapsed(+0x38/+0x3c)=0, **fire list A** (`FSBox_SignalBoxes(boxes of list A)`).
* **1 RUNNING**: `state = box->Update()` (vtable slot 11): returns **1** (keep running) or **2** (done). AnimBox/MoveToBox override it (done when the animation/path finishes); Settings/Choice boxes return 2 immediately.
* **2 FINISHED**: for every actor slot k: release the actor from this box (`FUN_00a3b890`); if triple[k].next == null the actor is freed; otherwise: `next->AssignActor(actor, triple[k].slot)` (vtable +0x1c), set the actor's priority from triple[k].priority, compute where the actor now stands (`GetPlacement(k, ..., 900000)`) and `next->Place(...)`, then add `next` to the active list. Finally state = 0 and **fire list B**.
* **List A = signals sent when this box starts, list B = signals sent when it ends.** `FSBox_SignalBoxes` (0xa43e60) pokes each listed box that is currently in state 1 (running): sets its "signalled" flag (0x1000000, which makes a waiting `Box`/`FSBox_Update` finish) and puts it on the active list, or, if the target has a delay (`+0x54` = w12), creates a delayed-signal object (`FUN_00a446e0`). This is how parallel tracks (e.g. a camera cut, a second actor) are synchronised.

Other scene-level functions (renamed): `Scene_Reset` 0x977150 (stop: reset children, free arrays, call each box's Reset, resets characters, sends `ai_action`/`ai_cg`), `Scene_FastForwardToEnd` 0x977590 (sets `ai_ended_by_user`, runs `Scene_Step` up to 6000 times until every actor has finished - used when a scene is skipped/interrupted), `Scene_RunToCompletion` 0x9791a0 (same idea, returns the frame count), `Scene_RestartAtFrame` 0x978cd0 (assign actors to their start boxes: `AssignActor`/`Reset`/`GetDuration` calls).
AnimBox specifics: `FSAnimBox_AssignActor` (0xa43200) = `FSBox_AssignActor` + recompute duration; `FSAnimBox_PlaceActor` (0xa436a0) places the actor using the per-actor offsets from the `.anm` then `FSBox_Place`.
MoveToBox specifics: `FSMoveToBox_AssignActor` (0xa421d0) copies the walking-animation cycle length (the actor's current cycle) into box+0xa0; `FSMoveToBox_GetDuration` (0xa42910): straight-line paths use the base duration clipped to `animLength*100-101`; curved paths use a random value + the cycle length.
ChoiceBox: `FSChoiceBox_Place` (0xa415b0) / `GetPlacement` (0xa41560) keep a per-actor record (0x14 bytes each at +0x70: used-flag, pos xyz, yaw) so every actor of a multi-actor choice keeps its own placement.

## 5c. Markers (the "entity" table) and scene restart/seek **[code]**

The **entity table** in the file (8-byte entries `{ int32 name string index; u8 flag; u8; u16 }`, count = byte@0x34, at scene+0x64) defines the scene's **named markers** (`action`, `cut`,
`take_end`, `break`, `crew_wait`, `extra_wait`, `short`, `dummy_extra`, ...). Marker `i` has the bit mask `1 << i`. A marker is a **barrier**: it fires once **every actor that belongs to it has reached it**.

* Every actor (`Character`/`CObject`) has two masks: `member` (actor+0x90, which markers it participates in) and `passed` (actor+0x94, markers it has already reached).
  When a box is assigned to an actor (`FSBox_AssignActor`) the box's own **marker mask** (box+0x44 = **w13** of the common header) is OR-ed into the actor's mask - so a box that carries marker bits means "the actor is now waiting at that marker".
* `Scene_AllMembersPassedMarker` (`FUN_00971e10`): true when no actor has the marker in `member` without having it in `passed`.
* `Scene_UpdateMarkers` (`FUN_00975cf0`, called every step): for each marker whose members have all passed:
  * the **marker name** triggers behaviour: **`action`** -> calls the scene's user callback (scene+0x1dc/+0x1e0 - this is the movie system's "Action!" hook; skipped while the scene is ending or suspended),
    **`cut`** -> sets scene flag 0x800 (a cut was reached), **`dummy_extra`** -> special-cased (skipped unless extras are active),
  * child scenes inherit the marker by **name** (`Scene_FindMarkerMaskByName`, `FUN_009730c0`, stores the matching mask in child+0x1b4),
  * `Scene_ReleaseMarker` (`FUN_00971e70`) clears the `passed` bits and **signals every box that is running (state 1) and whose marker mask contains the bit**: they get the "signalled" flag (0x1000000) and so finish on their next update.
* So `take_end`, `cut`, `break` etc. are *rendezvous points*: actors stand in a waiting `Box` (w11 = -1) carrying the marker's bit until all participating actors/extras/crew arrive, then everyone proceeds.

`Scene_RestartAtFrame(startFrame, flag)` (0x978cd0, formerly `Scene_Start`): the "(re)start / seek" entry point.
1. Aborts if the scene is flagged suspended (0x80000).
2. For every actor with a 3D object: resets its animation controller (`FUN_00980750`), clears pending animation state, resets the animation sub-system and expressions.
3. Clears the scene's current interaction name to `"none"`, re-initialises the sequence player (`FUN_00974ee0`), unloads/refreshes dependents (`FUN_009fa970`/`FUN_009fe620`), and sets the "starting" flag 0x800000 on the scene and all children (suppresses rendering/side effects).
4. `Scene_Reset`, then **simulates forward by calling `Scene_Step` until the frame counter reaches `startFrame`** (this is how a scene is *seeked*: fast-forward by stepping).
5. Finalises every actor (reset slot 12, re-apply animation/expressions at the reached frame, `FUN_00a03180`), clears the starting flags and the scene's pending interaction.
Because frame 0 starts every actor on its `Character` start box (section 4.7) and `Scene_Step` then runs the box graph, seeking to frame N is exactly "run N steps silently".

## 5d. Channels = named scene variables, and the command vocabulary **[code]**

**Channels.** The `CHANNELS` section (count = byte@0x2F) is the scene's set of **named float variables**. Channel *i* is named by **string-table entry *i*** (the first `channelCount` strings:
`ai_action`, `ai_ended_by_user`, `ai_director_mood`, `ai_actor_mood`, `endshoot`, `sld_miniature`, `sld_blue_ground`, ...; `sld_` = editor sliders). Each runtime channel is a 0x18-byte record at scene+0xc4
(current value, previous value, ...) written by `SceneChannel_SetValue` (`FUN_00974c20`). The per-channel list of int32 in the file (`{n; ids[n]}`) lists box ids that depend on the channel; the optional extra int32 per channel (flags bit1) is its default/initial value.
* `Scene_SetChannel(name, value)` (`FUN_009757a0`) is the universal "event": it recurses into child scenes, finds the channel whose string equals `name`, sets it, and special-cases `sld_miniature` (miniature scale slider, `FUN_00a00f30`) and `sld_blue_ground` (blue/green-screen ground, `FUN_00972630`).
  It is what the engine calls for `ai_stop`, `ai_ended_by_user`, `ai_action`, `endshoot`, `ai_crane`, `ai_dolly`, `ai_cg`, ... - the "events" I listed earlier are just channel writes.
* `ChoiceBox` selector -2 compares two channels (read with `FUN_009722e0`); a `SettingsBox` "set channel" command writes one (below).
* Channel values drive the movie editor's per-scene controls (director mood, actor mood, miniature, blue ground ...).

**SettingsBox / CSettingsBox2 are COMMAND boxes.** Their sub-structs are *scene event commands* `{ int commandNameIdx; int argIdx; int delay; int extra; ... }` (strings from the table). `FUN_00a3fc40(cmd, scene, actor)` runs a command: if `delay < 1` it dispatches at once
through `SceneEventCommand_Dispatch` (0xa3e560), otherwise it creates a delayed-command object (0x20 bytes, `FUN_00a3de70`) that fires `delay` steps later. Other sub-struct types in the same boxes:
* *Channel set* (`FUN_00a41250`): `{ u16 channelIdx; u16 mode (0 set, 1 add, 2 random 0..value); float value }` - changes a channel and echoes it to child scenes and to the scene's controller (`FUN_009757a0`).
* *Object/slot assignment* (`FUN_00a40d40`): `{ int mode; int slotA; int slotB }` - binds/unbinds objects to the actor's slots (mode 1 = take another scene object's transform; sets flags 0x8000000/0x4000000 when the object type is 0xb/10).
* *Animation-layer look-at command* (`FUN_00a411d0`): builds a command with name idx -10 (built-in `look_at`) and the box's float.

**Command vocabulary** (`SceneEventCommand_Dispatch`, 0xa3e560; the command string comes from the command's name entry, the argument from its second string):

| command | effect |
|---|---|
| `playsnd*` / `pplaysnd*` / `playsndloop*`, `kill_snd_loop` | start/stop a sound (loop variants only when the actor is "local"/audible) |
| `set_fire_on`, `set_fire_off`, `doorframe_fire`, `...` (`_on`/`_off` family from a table at 0xd78c0c) | fire/particle emitters on the actor's object or a door frame |
| `blood_cloud`, `blood_splash` | blood effects (suppressed in low-violence mode) |
| `fclexp <name>` | **facial expression** on the actor (`FUN_00980750`; not during the "starting" pre-roll) |
| `noshadow`, `fadeshadow` | disable / fade the actor's shadow |
| `above_ground`, `not_above_ground`, `set_global_altitude`, `use_global_altitude_on/off` | ground-snapping / altitude control of the object |
| `cam_binocular`, `cam_crosshair`, `cam_overlay`, `cam_none`, `cam_overlay_speed` | camera screen overlays (`fx_binocular.dds`, `fx_crosshair.dds`, custom overlay) |
| `mumble`, `mumble_off` | lip-sync "mumble" on/off |
| `setpropindex<n>`, `prophide_<n>`, `propunhide_<n>`, `hide_<n>`, `unhide_<n>`, `break_<n>` | prop/part visibility by index (0..31) |
| `fe...` | extended facial/face effect with optional index prefix (`FUN_00a31bb0`) |
| `play_dead_on/off` | ragdoll "play dead" flag (actor flag 0x40000000) |
| `look_at` | look-at target: refers to another box/object by id and aims the actor's head/eyes (`FUN_00a01be0`) |
| `rotor_hack`, `deform...`, `notrans`, `reverse`, `unreverse` | misc object flags (rotor, deform direction, no transparency, reverse playback) |
| `check_vis_extra`, `reset_animated_static_on_prop`, `stop_all_effects` | utility |
| `boom`, `fire`, `pos:`, `zangle(`, `normal`, `scale:`, `speed:` | spatial VFX placement (explosion/fire effects at an offset, with scale/speed/orientation) |
| anything else | falls through to `FUN_00a3e060` (further effect names) |

## 5e. Time base (measured at runtime) **[runtime-verified; AI scenes 30 Hz, movie shoots 10 Hz - see 5g]**

A runtime hook on `Scene_Step` (session 2026-10-03, hook #28) measured **about 30 `Scene_Step` calls per second per scene** (297 of 805 one-second samples are 30.0 +/- 0.5; the maximum is 31.06;
lower samples are scenes that started or stopped inside the sampling second or frame-rate dips). So **one scene step = 1/30 s (about 33 ms)** and the hard cap of 6000 frames = **200 seconds**.
Over a few minutes of play with a handful of characters 112 distinct scene objects ran (almost all short AI interactions: scenes that lived 2-3 samples; the longest ones reached frame 833, about 28 s, which are crowd/idle scenes).
The accumulator in the real-time driver (`FUN_00978930`) therefore advances 100 units per step with the sub-step remainder (0..99) used only for render interpolation. Box `w11` durations are in **steps (1/30 s)**; the `*100` in the duration getters converts steps to 1/100-step units.

## 5f. Details of the remaining helpers **[code]**

* **Sound commands** (`SceneCommand_PlaySound`, `FUN_00a3e060`, the fall-through of the command dispatcher): `playsnd<sample>[ v3(x,y,z)]` plays a sample, positioned in 3D relative to the actor when a `v3(...)` offset follows
  (the offset is stored at actor+0x90); `playsndloop<sample>` loops it; `pplaysnd<sample>` ("per-actor" sound) appends the actor's **variant index** (`_%d`) to the sample name so different actors use different voices.
  All sound commands are skipped while the scene is in the pre-roll "starting" state or when the audio system is unavailable (`FUN_00a22fa0`).
* **Facial expression** (`Actor_SetFacialExpression`, `FUN_00980750`, command `fclexp`): `(expressionIndex 0..53, weight 0..1 clamped, blend steps)`; only works for actors whose object has a face controller (`obj+0x178`); the controller (`FUN_00a304f0`) blends toward the weight.
* **Look-at** (`Actor_SetLookAt`, `FUN_00a01be0`): sets either a world position (`+0xc0..+0xc8`) or another object (`+0xd0`) as the look target, with a blend time (`+0xd4/+0xd8`) and a flag; the start time is stored as **`sceneFrame*100 + substep`** (`+0xdc`), which confirms the "100 units per step" time base of section 5e.
* **Animation instances** (`AnimInstance_SetFrame`, `FUN_00a03180`): sets the current frame (wrapped modulo the clip length); when the clip loops *and* the animation is a **random-variant set** (flag bit0), it re-rolls the variant: a weighted random pick (0..100) over the variants' weights (`+0xc` of each variant), stored in the instance flags (bits 8..11). This is the mechanism behind AnimBox animations of "type 1" (random variants).
* **Marker entry flag bytes** (entity table entry `{ int32 name; u8 flagA; u8 flagB; u16 }`, corpus statistics): the four core markers `action`, `take_end`, `cut`, `dummy_extra` have `flagA=1, flagB=1` in the 9,7xx movie-scene files and `flagA=0, flagB=1` in the ~1,100 others
  (AI scenes and a few special scenes); scene-specific markers (`break`, `short`, `medium`, `extra_wait`) are `0,0`; `crew_wait`/`crew_leave` are mostly `0,1`.
  `Scene_UpdateMarkers` skips a marker whose `flagA != 0` when the scene is flagged 0x80000 (suspended / non-shoot), i.e. **`flagA` = "movie-shoot marker, ignore outside a shoot"**. The loader sets `flagB = 1` for `dummy_extra`; it appears to mark **standard/shared markers**. (flagB meaning is a guess.)

## 5g. A real movie shoot, captured at runtime **[runtime-verified]**

Capture: one scene shot on the spaceship-bridge set (`023_chair_sit_down.flm`), with the director menu used to change the mood slider mid-take (session 2026-10-03, hooks on `Scene_LoadFlm`, `Scene_SetChannel`, `Scene_ReleaseMarker`, `Scene_Step`).

**Scene set.** Loading one shot scene loads a *bundle*: the main scene plus its **linked crew scene** and **extras/mechanism sub-scenes**:
`023_chair_sit_down.flm` (main) + `023_crew_00.flm` (linked crew scene; header string idx [3]) + `023_x_E_coms.flm` + `023_x_F_robot.flm` (children, `NNN_x_*`). Earlier captures:
stunt scenes `001_fire_stare.flm` + `001_crew_00.flm`, `001_fire_run_through.flm` + `001_crew_01.flm`; bridge `023_2_enter_hor.flm` + `023_crew_01.flm` + `023_x_door_mechanism.flm`.
The crew scene carries the camera/dolly/crane crew and the director's "workflow"; the main scene carries the cast.

**Take start = a broadcast of channel writes to every scene of the bundle** (`Scene_SetChannel`): `endshoot=1` (when the bundle is loaded), `ai_crane=0`, `ai_dolly=0`, `sld_mood=0.125` (default mood slider),
then at take start `ai_director_mood=0`, `ai_actor_mood=0`, `ai_ended_by_user=0 -> 1 -> 0`, `ai_take_in_progress=1`, `ai_crank=0`, `ai_director_mood=0.89`, `ai_stunt_fail=0`; at the end `ai_take_in_progress=0`.
Crew-scene channel list (21): `endshoot, ai_ended_by_user, ai_director_mood, ai_actor_mood, ai_dolly, ai_crank, ai_crane, ai_monitor, ai_crew_speed, ai_take_in_progress, ai_notrack_01..08, ai_dolly_push_speed, ai_dolly_pull_speed, ai_devmode`.
Main-scene channels (5): `endshoot, ai_director_mood, ai_actor_mood, ai_ended_by_user, sld_mood`. Extras: `ai_ended_by_user, extras_leave`.
**The director menu's mood slider writes `sld_mood`** continuously (84 writes while it was dragged: 0.125 -> 0.195 -> 0.33 ... -> 1.000 -> 0.000 -> 0.125); `ai_director_mood` / `ai_actor_mood` are the director's and actor's mood outputs derived from it.

**Marker timeline of the take** (crew scene `023_crew_00.flm` marker bits: `0x1 action, 0x2 crew_begin, 0x4 crew_leave, 0x8 cut, 0x10 take_end, 0x20 crew_wait, 0x40 applaud, 0x80 crew_dolly_start, 0x100 crew_dolly_end, 0x200 cast_ready, 0x400 dummy_extra`;
main scene bits `0x1 action, 0x2 cut, 0x4 take_end, 0x8 dummy_extra`). Frames (scene frame counter) and time at the shoot rate of 10 steps/s:

| frame | marker | time into scene |
|---|---|---|
| 1 | `crew_wait` | 0.1 s |
| 141 | `crew_begin` | 14.1 s |
| 177 | `cast_ready` | 17.7 s |
| 206 (main 209) | **`action`** | 20.6 s |
| 207 | `crew_dolly_start` | 20.7 s |
| 232 (main 231) | **`cut`** | 23.2 s |
| 322 | `crew_dolly_end` | 32.2 s |
| 338 | `applaud` | 33.8 s |
| 390 (main 389) | **`take_end`** | 39.0 s |
| 408 | `crew_leave` | 40.8 s |
| 527 (main 526) | `dummy_extra` (all actors left) | 52.7 s |

The main scene's marker fires 1-3 frames after the crew scene's because barrier markers wait for *all* members; child scenes (`E_coms`, `F_robot`) fire the same markers (mask `0x8` repeated 106x while waiting at their `dummy_extra` rendezvous).

**Time base: movie shoots run at 10 `Scene_Step`s per second (100 ms per step)**, versus **30 per second for AI scenes** (section 5e): 150 of ~160 normal one-second samples read exactly 10.0 steps/s, and the marker timestamps agree
(e.g. `applaud` at frame 338 -> `take_end` at 390: 52 frames in 5.1 s). The rate is chosen by the caller of the real-time driver (`FUN_00978930`), which feeds a different time constant for shoots.

**Re-simulation bursts.** Whenever the director menu changes a setting (or a take restarts), the game replays the take silently from frame 1 up to the current frame via `Scene_RestartAtFrame`, i.e. hundreds of `Scene_Step`s inside a single second:
bursts of 233, 217, 457, 902 and 1,348 steps were logged (all marker fires during those bursts carry the same timestamp). The 6000-step cap bounds a take at 600 s of shoot time.

## 5h. Stunt scenes and the rest of a filming session (second capture, successful stunt shoot) **[runtime-verified]**

Capture: Alien-world set, a movie whose script contains stunt scenes, one successful stunt shot (session 2026-10-03, 11:00-11:09).

**Session flow, as seen through `Scene_LoadFlm`:**
1. **Script preload (11:00:31, ~300 ms):** when filming starts the game loads the **whole movie's scene list at once**, each main scene together with its linked crew scene and extras:
   `025_time_bomb` (+`025_crew_02`), `025_fall_head` (+`025_crew_00`), `018_gun_fire_xt_cu` (+`018_crew_01`), `025_enter_with_gun` (+4 `025_x_guard_N` extras), `018_between_with_scanner`, `018_fall_head`,
   `025_monster_biting` (+`025_x_alien_*`, `025_x_corpse_1`, `025_x_zombie`), `018_gun_shot_react`, `025_early_horror`. (Load order = script order; the same scene pointer slot is reused as each is loaded and freed.)
2. **Rehearsal scenes (11:01-11:03):** `rehearsal_set_single018.flm`, `rehearsal_2singles_set018.flm`, `rehearsal_set018.flm`, `rehearsal_exits_set018.flm` - generic per-set staging scenes (one actor, two actors, whole cast, exits); the number is the **set id** (018).
   They write the channels `ai_satisfyloop`, `ai_stop` (0 at start, 1 at end), `ai_callactor0`, `ai_callactor1` (0 at start): these are the "call actor N / satisfy loop" controls of the rehearsal.
3. **Shoot (11:04-11:08):** each shoot scene is loaded again (11:04:47 and 11:05:54 for `025_time_bomb`; 11:06:53 and 11:07:29 for `025_fall_head`; 11:08:20 for `018_gun_fire_xt_cu`) - one load for the review/set-up, one for the shoot itself.

**Stunt scenes expose their own sliders** as channels (this is where the director-menu stunt options come from):
* `025_time_bomb.flm`: channels `endshoot, ai_ended_by_user, ai_director_mood, ai_actor_mood, ai_time_bomb, sld_timebomb, sld_mood` (time-bomb stunt: `sld_timebomb` slider, `ai_time_bomb` state).
* `025_fall_head.flm`: channels `endshoot, ai_ended_by_user, ai_director_mood, ai_actor_mood, ai_stunt_fail, sld_fall` (fall stunt: `sld_fall` slider, **`ai_stunt_fail`** = failure flag).
At take start the game writes `ai_stunt_fail = 0` (the successful stunt kept it 0; setting it to 1 is what makes the scene take its failure branch via ChoiceBox/compare - not captured), and the stunt sliders at 0.000 (default).

**Stunt take timelines** (scene frames, 10 steps/s; main-scene marker is 1 frame before the crew-scene marker):

| marker | `025_time_bomb` | `025_fall_head` |
|---|---|---|
| `crew_wait` | 1 | 1 |
| `crew_begin` | 123 | 148 |
| `cast_ready` | 159 | 184 |
| **`action`** | 187 | 212 |
| `crew_dolly_start` | 189 | 214 |
| **`cut`** | 309 (action lasts 122 steps = 12.2 s) | 262 (50 steps = 5.0 s) |
| `crew_dolly_end` | 414 | 329 |
| `applaud` | 430 | 357 |
| **`take_end`** | 494 | 408 |
| `crew_leave` | 512 | 424 |

Live-time checks at the shoot rate: in `025_fall_head`, `cut` (frame 262, 11:07:55.958) -> `crew_dolly_end` (329, 11:08:02.657) = 67 steps in 6.7 s; `applaud` +28 steps in 2.8 s; `take_end` +51 steps in 5.1 s; `crew_leave` +16 steps in 1.6 s - all exactly **10 steps/s**.
Crew-scene durations differ per scene (`crew_00`, `crew_01`, `crew_02` are different choreographies of the same crew workflow: e.g. `crew_begin` at 123 vs 148 frames).
The "re-simulation" at the start of each take is why most markers appear in one 1-ms burst at the beginning of a take (`Scene_RestartAtFrame` replays frames 1..N silently): only markers after the replay point are seen live.

## 6. Known unknowns / next steps
* The exact field-by-field layout of the command sub-structs inside Settings boxes (names are known, not every int); the commands handled by `FUN_00a3e060`.
* What the box counters at +0x38/+0x3c are used for, the delayed-signal object (`FUN_00a446e0`), the exact event trackers in `FUN_00975cf0` and the scene-start logic in `Scene_RestartAtFrame` (0x978cd0, long).
* Header int32[0] and int32[4..8]; the A/B counts at 0x2C/0x2D; u16@0x30; the exact meaning of marker flagB.
* The exact tick semantics (how `time` fields and the `200` constant are interpreted; how list A/B links fan out).
* How `.seq` (sequence) references are used by scenes (`FUN_00a44dd0` on scene+0x248 builds some sequence table).

## 7. Tool / reproduction
* `tools\FlmDump.py file.flm` – header, strings, entities, channels, object list; `--graph` prints a compact node graph.
* Validation: run it across the extracted corpus (`F:\DecompilingTheMovies\flm_all`); expected 0 failures.
* Relevant Ghidra names: `Scene_LoadFlm` 0x97c450, `Scene_SetPlacement` 0x978350, `Scene_BindParent` 0x978310,
  `TMCharacter_PlayInteractionScene` 0x599480, `Prop_GetPuppetSceneName` 0x4043a0, `CAssetActionExplainer_CreateActivity` 0x8bca40,
  scene parser `FUN_0097b6a0` (0x97b6a0), object factory `FUN_00971950`, header reader `FUN_00971460`.
