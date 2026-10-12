# How a movie's quality rating is computed (The Movies, MoviesSE.exe 2006 patched build)

Reverse-engineered from `CQualityRating_Compute` (`FUN_005dcb10`) and its helpers; constants from `Data\releasing_movies.ini`, `Data\experience.ini`, `Data\stunts.ini` (see `TRAITS_AND_EXPERIENCE.md`).
Labels: **[code]** read from decompiled code, **[data]** from ini files, **[guess]** interpretation.
Scope: the **quality** rating (0..1; sections 1-6 are the per-shot rating, section 7 how the movie's final quality is assembled from it). The box-office *success* calculation (the `success_overall_*` constants, public interest, era fit, technology, genre popularity) is a separate calculator (`ReleaseCalc_LoadTuningData`, `FUN_005df000`) and is **not decoded yet**.

## 1. The object **[code]**
`CQualityRating` (0xBC bytes; ctor `FUN_005dcd60` = `CQualityRating_Constructor`, which immediately calls `CQualityRating_Compute`). Field `+0x74` = the project/movie (if null the rating is computed from a draft/preview variant using +0x8c). Result written to `+0x90` and returned.

| field | content | how computed |
|---|---|---|
| +0xA4 | **cast performance** `perf` | `CQualityRating_CastPerformance` (`FUN_005dc900`): average over cast members (+ the director counted once) of the actor's performance (section 3) |
| +0xA8 | normalised performance | `clamp01((perf - 0.75) / (1.5 - 0.75))` (`unspread_performance_min/max`); stored for display |
| +0xAC | **script quality** `S` | `Script_GetBaseQuality` (`FUN_004bdbc0`): the float at `script+0x124` of the project's script object |
| +0xB0 | **star relationship factor** `R` | `CQualityRating_StarRelationshipFactor` (`FUN_005d9520`), range 0.8..1.2 (section 4) |
| +0xB4 | **set condition factor** `T` | `0.9 + (1.0 - 0.9) * setRepair` (`set_repair_value_min/max`; `setRepair` = the set object's repair value, 1.0 if none) |
| +0xB8 | **crew factor** `C` | `CQualityRating_CrewFactor` (`FUN_005d9130`), range 0.9..1.1 (section 5) |
| +0x90 | final **quality** `Q` | section 2 |

## 2. The final formula **[code + data]**
```
P = T * C * R * perf                                   // product of the production factors (about 1.0 when everything is average)
x = ( (P - 1) - 2 * (S - 0.4) * 0.1 ) * 0.8            // quality_overall_shifter_mid_point 0.4, quality_overall_max_shifter 0.1, quality_overall_max_adder 0.8
// x < 0 : applied linearly      g(x) = x
// x > 0 : diminishing returns   g(x) = sum over successive chunks of 0.1:  chunk_k * 0.8^(k+1)      (so g(x) <= 0.4, reached asymptotically)
Q = clamp01( S + g(x) )
```
Meaning: **script quality is the base**; production factors above 1 add a *capped* bonus (+0.4 maximum on top of the script quality, with each further 0.1 of excess worth 20% less than the previous), production factors below 1 subtract linearly and without a cap. The `-2*(S-0.4)*0.1` shift lowers the bonus slightly for already-good scripts.
Worked examples (S = 0.6, i.e. a 3-star script): all factors 1.0 -> x = -0.032 -> **Q = 0.568**; P = 1.2 -> x = 0.128 -> g = 0.1*0.8 + 0.028*0.64 = 0.098 -> **Q = 0.698**; P = 0.8 -> x = -0.192 -> **Q = 0.408**; P = 2.0 -> x = 0.768 -> g = 0.1*(0.8+0.64+0.512+0.4096+0.3277+0.2621+0.2097) + 0.068*0.1678 = 0.316 + 0.011 = 0.327 -> **Q = 0.927**.
Script-quality star bands from the ini: 1 star 0.2, 2 stars 0.4, 3 stars 0.6, 4 stars 0.8, 5 stars 1.0.

## 3. Per-actor performance **[code + data]**
`QualityCalc_ActorPerformance` (`FUN_005db140`) builds a record (0x90 bytes) for an actor and returns `genreExp * relationship * mood`:
* **genre experience factor** `QualityCalc_GenreExperienceFactor` (`FUN_005d9390`): `g` = the actor's trait named after the movie's **genre** (`Trait[genre]`); `o` = the mean of the actor's *other* genre traits, capped at `(1-g)*0.5`; `factor = 0.8 + (1.2-0.8)*(g + o)` (`star_genre_experience_min/max`). So genre skill matters most, other genres help a little.
* **relationship factor** (`FUN_005d7b90` / `FUN_005d7cb0`): the actor's relationship with the rest of the cast (see section 4), range 0.8..1.2.
* **mood factor**: for stars `CStar_GetMoodPerformanceFactor` (`FUN_005d79a0`, `star_mood_min/max` 0.8..1.2); for non-stars the fixed `star_mood_min` (0.8).
* For **stunt roles** (`stuntrisk > 0`) the actor's performance is instead `QualityCalc_StuntPerformance` (see `TRAITS_AND_EXPERIENCE.md` section 3).
The three components are also stored in the record (+0x7C genre, +0x80 relationship, +0x8C mood, +0x84 star rating) for the post-release breakdown screen, and the normalised value `QualityCalc_NormalizePerformance` (`FUN_005d75f0`) = `clamp01((v-0.75)/0.75)`.

## 4. Star relationship factor `R` **[code + data]**
`CQualityRating_StarRelationshipFactor` (`FUN_005d9520`): for each cast star (a `CStar` with a non-empty relationship table) and the director/lead, `QualityCalc_StarChemistry` (`FUN_005d87a0`) averages the star's stored **relationship values** with every *other* cast star who is present (the director counts double; `0.5` when no one else is there). The averaged value `v` over all stars is mapped:
```
v' = clamp01( (v - (1 - width) * 0.5) / width ),   width = star_relationship_range_width = 0.5
R  = 0.8 + (1.2 - 0.8) * v'                          // star_relationship_min/max
```
So friends in the cast raise quality by up to +20% (relative production factor), enemies lower it by up to -20%, and a lone star scores neutral.

## 5. Crew factor `C` **[code + data]**
`CQualityRating_CrewFactor` (`FUN_005d9130`): mean of the **`Movies` trait** of the crew members listed in the project (four crew lists, `FUN_005b25c0`) -> `C = 0.9 + 0.2 * meanMovies` (`crew_min/max` 0.9..1.1); if there is no crew record it falls back to `FUN_005d8e10`. Since crew gain `MOVIES_CREWPERSHOT = 0.02` of headroom per shot (diminishing), experienced crews are worth up to +10%.

## 6. What is NOT here yet
* The **success/box-office** calculator and the factors named in `[min_max]` that are not used by quality (`public_interest 1.0-1.4`, `era_fit 0.8-1.0`, `technology 0.7-1.0`, `genre_popularity 0.9-1.2`, `star_ratings_of_cast`, `success_overall_*`), `boredom` bounds, `genre_fit max_from_ideal`, `pre_production`.
* `FUN_005dca10` (the preview/draft variant of the cast performance), `FUN_005d7b90/7cb0` (per-actor relationship), `FUN_005d8e10` (crew fallback), and the writer of `script+0x124`.

## 7. How the per-shot ratings become the movie's quality (decoded) **[code + data]**
Sections 1-6 describe **one** `CQualityRating`. The movie is not rated once: the project keeps **a pre-production record** (`project+0x348`, saved `PQualityPreProduction`) and **one record per shot** (`project+0x350..0x354`, saved `PQualityShots`, 0x18-byte list nodes holding a pointer at +0x14), each with the same field layout (`+0x90` quality, `+0xB0` star relationship, `+0xB4` set condition, `+0xB8` crew; for a shot record `+0x74` is its `ShootController`). When the movie enters **post-production** (`CPhasePostProduction_Begin`, `0x5AAC20`, called from the phase's creation) the game freezes the movie's **final quality** (`CProject_ComputeFinalQuality`, `0x5B6FB0`) into `project+0x360` (saved `Quality`; this is the `Qm` of `MOVIE_SUCCESS.md`):
```
x      = clamp01( (TicksInPreProd * 0.1) / pre_production )          // project+0x35c; pre_production = 300 (releasing_movies.ini [pre_production], QualityCalc_GetPreProductionTime)
Q      = 0.25 * Qpre * (1 - (1 - x)^3)                               // pre-production record's quality +0x90; the cube is pow(.,3.0)
w_i    = SceneState_GetShotWeight( ShootController_GetSceneState(shot_i.controller) )     // field +0x1F4 of the scene state at controller+0x1D8 (probably the scene runtime; not verified)
W      = sum over shots that have a controller/scene state of w_i
Q     += 0.75 * sum_i ( w_i / W * Qshot_i )                          // Qshot_i = CQualityRating +0x90 of shot i (section 2)
Q      = clamp01(Q)
```
So the movie's quality is the **runtime-weighted average of the shot ratings, worth 75%**, plus **up to 25% from the pre-production rating that grows with time spent in pre-production** (an ease-out curve: after 1/3 of the target time it already gives 70% of its share). A movie with no pre-production time can never exceed 0.75, and a movie made of unscored shots (no scene state) gets only the pre-production part. After that, `CProject_GetQualityWithAwardBoost` (`MOVIE_SUCCESS.md` 3i) adds the super-star / super-director award bonuses. **Measured check of this section (two player movies, 1922; DecadeTracker `POSTPROD`/`SHOT` lines):**
* Movie 1: `ticks = 794`, `Qpre = 0.23316`, shots (weight, rating) = (15, .17590) (12, .16927) (36, .18699) (50, .19376). `x = 79.4/300 = 0.26467`, pre-production term `0.25 * 0.23316 * (1 - (1-x)^3) = 0.035112`, shot term `0.75 * (sum w*q / 113) = 0.75 * 0.186631 = 0.139973`, total **0.175085** vs logged `finalQuality = 0.17509` - **exact**.
* Movie 2: `ticks = 755`, `Qpre = 0.23387`, shots (89, .14685) (222, .19179) (23, .19655): `0.033966 + 0.75 * 0.180143 = 0.169073` vs logged **0.16907** - **exact**.
So the formula (25% pre-production with the cubic ease-out, 75% weight-averaged shot ratings) is confirmed. The shot weights are small integers (12..222) - plausibly shot lengths; not yet identified. Pre-production in both movies lasted 75-79 s of play (755-794 updates) - far below the 300 s needed for full weight, so the pre-production term gave only 58-60% of its possible 25%.
Also measured: the **per-project update rate is 10.0 per second at normal speed**, 23-30 per second at fast-forward, and 2-9 per second while the game was loading/saving or unfocused - the unit of `TicksInPreProd` is a game tick, not real time.

**What the game tells the player about pre-production (and what it does not).**
* The phase status text (`CPhasePreProduction` vslot 11, `0x5ABC60`) depends only on: casting complete?, `PreProdFactor < 1.0`?, suspended?. It shows `PROJECT_PHASE_PREPRODUCTION` (casting not complete) / `..._REHEARSAL` (`PreProdFactor` still below 1.0) / **`..._REHEARSAL_COMPLETE`** (`PreProdFactor >= 1.0`), each with a `_STALLED` variant when the project is suspended. `PreProdFactor` fills by 1/600 per update once casting is complete, so "rehearsal complete" appears **600 updates (60 s of play, about 37 game days) after the cast is complete**. This is the "done" indicator the player sees.
* The only Tannoy tied to it is **`TANNOY_CASTING_COMPLETE`**: once `PreProdFactor >= 1.0` it is announced **30 game days later and then every 60 game days** while the movie stays in the phase (the timer variable is the phase's `+0xE0`; clock integer = game days). The `TANNOY_CASTING_*` "needed/missing" nags before that concern the cast, director, extras, crew and stunt double. `data\rule\tannoy.csv` has only four rule-driven tannoys (script complete, actors/director/crew missing from the shoot) and none for pre-production.
* **Nothing in the game reacts to the 3000-update point** where the quality weight reaches its maximum: `QualityCalc_GetPreProductionTime` (`pre_production = 300`) has exactly one reader, `CProject_ComputeFinalQuality`. There is no UI element, tooltip or announcement for it.
So keeping a movie in pre-production **after** "rehearsal complete" still raises the quality weight until `ticks * 0.1 = 300`, i.e. about **3000 updates, roughly 187 game days (6 months) in the phase** (measured: one game day = 1.6 s = 16 updates at normal speed). Weight versus time in the phase: 600 updates -> 49% of the 25% pre-production share, 1000 -> 70%, 1500 -> 87%, 2000 -> 96%, 2500 -> 99.5%, 3000 -> 100%. The prize is small: `0.25 * Qpre * (1 - weight)` with `Qpre` about 0.23-0.28 observed, i.e. at most about +0.06 quality over the 0 -> full range and about +0.02-0.025 between 800 and 3000 updates (the player's first movies spent 755-794).

**Measured pre-production cost (one player movie, 1934; `PREPROD_COST` lines every 300 phase ticks).** The movie spent **2,094 updates in casting** (stage 0, `PreProdFactor 0`), then rehearsed (stage 1: `PreProdFactor` +0.5 per 300 updates = 1/600 per update, exactly as decoded) and reached stage 2 ("rehearsal complete") at about update 2,700; it left pre-production at update 3,854. The project's cost total (`costs+0x70`) rose:
| phase ticks | cost total | increase per 300 updates |
|---|---|---|
| 300 / 600 / 900 / 1200 | 1,112 / 1,556 / 2,025 / 2,493 | ~468 (about 1.6 per update) while casting |
| 1500 / 1800 / 2100 | 4,189 / 6,704 / 10,504 | 1,696 / 2,515 / 3,800 (cast being hired) |
| 2400 / 2700 | 16,386 / 22,110 | 5,882 / 5,723 (about 19 per update) while the rehearsal bar is filling |
| 3000 / 3300 / 3600 / end 3854 | 24,822 / 27,685 / 30,548 / 32,959 | **2,863 per 300 updates (about 9.5 per update, $153 per game day, $4,600 per game month)** after rehearsal complete |
So staying in pre-production after "rehearsal complete" costs about **$9.5 per update**. Because the update counter includes casting time (here 2,094 updates), this movie was already at `x = 0.9` of the quality weight when rehearsal finished, so the extra 1,150 updates it stayed bought at most `0.25*Qpre*(1-0.9)^3 = 0.25*Qpre*0.001` (about 0.00006 quality) - essentially nothing. Rough marginal value of 300 more updates at `x = ticks/3000`: `0.25 * Qpre * 3*(1-x)^2 * 0.1` quality (about 0.012 at x = 0.2, 0.0068 at x = 0.4, 0.003 at x = 0.6, 0.0008 at x = 0.8), which at a success around 0.3 (pool slope about $0.7M per unit of quality) is worth roughly $9k, $5k, $2k, $0.5k of extra revenue pool against ~$2.9k per 300 updates after rehearsal - so **waiting only pays while the phase is shorter than about 1,800 updates (about 110 game days) and the movie earns about S = 0.3; beyond that it costs more than it earns**. (Whether these costs are real cash or only a project tally is not yet confirmed - the monthly `FINANCE` ledger was not recorded in that session; see the tracker notes.)

**Pre-production running cost (the rising cost the player sees; structure decoded, rates not yet measured).** Every project owns a `CProjectCosts` object (`project+0x240`; running total as an int64 at `costs+0x70`, 23 fractional bits). Its per-update accrual routine (`CProjectCosts` vslot 18, `0x5CAAF0`) switches on the project's phase id: writing (2) `FUN_005C5690`, **pre-production (4)**, shoot (5) per-shot costs, release (7) `FUN_005C55D0`. In pre-production it only accrues while the project is **occupying a pre-production facility room** (`FUN_005B5D40` -> `CFacilityPreProduction_GetOccupyingRoom == project`), and then adds, per update:
* the pre-production facility's own running cost while `PreProdFactor < 1.0` (`FUN_005C56E0` -> `FUN_005C5600`: sum of the facility items' costs, `+0x234` items) - i.e. while the **rehearsal bar is still filling**;
* the **wages of the cast** (`FUN_005CA1A0` -> `FUN_005C9E30`: each cast member's salary plus the salaries of a star's entourage, added to the project total `costs+0x70` and to that member's own cost entry) and of the **director/lead** (`FUN_005C6D80`).
Money actually leaving the studio is booked through `StudioFinance` (`AddExpense`, per category) - those calls are visible in the routines that charge the script and the marketing spend, but in the wage paths above only the project's own tally is updated, so **whether the pre-production wages are extra cash out or an attribution of wages the studio pays anyway is not established**. The DecadeTracker (`PREPROD_COST` every 300 phase ticks, `PREPROD_END`, and `costTotal` in `POSTPROD`/`REL_PLAYER`) records the project cost total over time and the monthly `FINANCE` ledger shows the studio's real expenses, so the cost per update/day of staying in pre-production can be read directly from a play session.

**`TicksInPreProd` (`project+0x35c`)** - `CPhasePreProduction_Update` (`0x5AD2F0`, vslot 4, run by `CProject_Update` `0x5B6A30` every project tick, vtable `0xD2A154`):
```
if project is suspended (project+0x364, saved BSuspended): return            // nothing counts while on hold
if !CProject_IsCastingComplete(project):                                      // FUN_005B20F0: the cast list is complete (FUN_005A73B0) and the costs object exists
        stage = 0 ("casting")                                                  // phase+0xE8
else:
        PreProdFactor += 0.001666  (= 1/600; DAT_E54460)                      // project+0x2C4, saved PreProdFactor; forced to 1.0 when the global DAT_0104A974+0x6C > 0 (CProject_SetPreProdFactor)
        stage 1 = "rehearsescript"
        if PreProdFactor >= 1.0 (DAT_E54464):  stage 2 = "waitingincastingforshoot" and TANNOY_CASTING_COMPLETE every 30/60 game-clock units
CPhasePreProduction_UpdateCastingAnnouncements()                               // TANNOY_CASTING_* nags, re-armed every DAT_E54454 = 60 / DAT_E54458 = 90 clock units
phase.ticks = min(phase.ticks + 1, 400,000,000)                                // phase+0xCC, cap DAT_E5445C (none in practice)
```
When the phase ends (`CPhasePreProduction_Advance`, `0x5AB040`, vslot 5) the counter is copied to the project (`CProject_SetTicksInPreProd`, `0x5B0FD0`), the room assignments are freed and the movie moves on. So **`TicksInPreProd` counts every unsuspended project update since the movie entered pre-production - including the casting time before the cast is complete**; only the pre-production *record's* quality `Qpre` depends on the actual work done. Pre-production's own progress bar (`PreProdFactor`) needs 600 updates (1/0.001666) once the casting is complete.
**Unit**: the quality formula multiplies the counter by 0.1 before dividing by `pre_production = 300`, and the progress step (1/600 per update) fits a 60-second rehearsal, which indicates **one project update = 0.1 s (10 per second)**: full pre-production weight needs 3000 updates = **300 s (5 minutes) of game time in pre-production**, and the 'pre-production complete' progress takes 600 updates = 60 s. **Measured**: the DecadeTracker log (`UPDATE_RATE`) shows `CProject_Update` running at **10.00 calls per second** for a project in the writing phase (two 60-second windows: 601 calls each), so one tick = 0.1 s as deduced.
