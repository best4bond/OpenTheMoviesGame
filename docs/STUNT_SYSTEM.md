# The stunt success/failure system (The Movies, MoviesSE.exe 2006 patched build)

Reverse-engineered from `ShootController_RollStuntOutcome` (`FUN_004ea1d0`, 0x4ea1d0) and `Data\stunts.ini`, and confirmed against a runtime capture of a failed stunt take.
Labels: **[code]** read from decompiled code, **[data]** from the shipped ini files, **[runtime]** observed in play.

## 1. When it runs **[code + runtime]**
At the start of every take of a scene the shoot controller rolls the stunt outcome **once** (about 20 ms after the take begins, right after the silent re-simulation of the take) and publishes it as the scene channel **`ai_stunt_fail`** through
`ShootController_SetChannel` (`FUN_004e9fa0`), which stores it in the controller's channel list and forwards it with `Scene_SetChannel` to every scene of the bundle (main scene, crew scene, extras).
Observed in the capture (`018_fall_head.flm`, failed stunt): `ai_stunt_fail = 0.000` at take start (reset together with `ai_crane`, `ai_dolly`, `ai_director_mood`...), then **`ai_stunt_fail = 1.000` 22 ms later**; the outcome stays fixed for the take
(replays triggered by moving the `sld_fall` slider re-simulate the same take without re-rolling). Successful takes keep it at 0. The scene's own `.flm` branches on this channel (ChoiceBox compare) to play the failure animations.

## 2. The roll (all constants from `Data\stunts.ini`) **[code + data]**
Inputs: the cast of the scene (each role with `stuntrisk > 0` in the scene ini), each actor's stunt ability, and the scene's stunt *difficulty* (the slider/level object at controller+0x1d8).

1. **Per actor** (only actors whose role has `stuntrisk > 0` and who have a character):
   * `health` = the actor's current health/ability value (character vslot `0x1e4`).
   * If `health < healththreshold` (**0.01**) the injury modifier applies: `mod = stuntabilityinjurymodifier` (**0.7**), else `mod = 1.0`.
   * `healthAbility = minhealthability + (maxhealthability - minhealthability) * health` (**0.5 .. 1.0**, linear in health), then multiplied by `mod`.
   * The actor's **`Stunts` trait** (a skill rating from the character's trait table) is combined with `healthAbility` (`FUN_004728e0`) to give the actor's **stunt score**.
2. **Cast score** = average of the stunt scores of those actors; stored at controller+0xf8.
3. **Difficulty gap** `diff = castScore - difficulty` (difficulty from the scene's stunt level object, `FUN_004b58b0(controller+0x1d8)`).
4. **Success chance** (piecewise linear through the points `(-1, stuntchancelow)`, `(0, stuntchancemedium)`, `(+1, stuntchancehigh)`):
   * `diff >= 0`: `chance = stuntchancemedium + (stuntchancehigh - stuntchancemedium) * diff` = **0.80 + 0.30 * diff**
   * `diff < 0`: `chance = stuntchancemedium - (stuntchancelow - stuntchancemedium) * diff` = **0.80 + 1.20 * diff**
   * (`stuntchancelow = -0.40`, `stuntchancemedium = 0.80`, `stuntchancehigh = 1.10`)
5. If the **Lucky Charm** award bonus (bonus id 0xE) is active: `chance += luckycharmbonus` (**+0.10**).
6. Clamp `chance` to `[stuntchancemin, stuntchancemax]` = **[0.05, 0.98]**, then to [0, 1]; stored at controller+0xf4 (shown in the UI as the success chance).
7. **Random draw** with a private LCG: `seed = seed * 0x19660D + 0x3C6EF35F` (Numerical-Recipes constants; the seed is initialised from the clock on first use); `r = ((seed >> 6) & 0x7FFFFF) / 2^23` (0..1).
   **Success if `r < chance`**, otherwise **failure** -> flag controller+0xf0 = 1 -> channel `ai_stunt_fail = 1`.
Worked numbers: castScore equal to the difficulty (diff 0) -> 80% success (90% with a lucky charm); castScore 0.5 below the difficulty -> 0.80 - 0.60 = 20%; castScore 1.0 or more below -> clamped to 5%; castScore 0.5 above -> 0.95; >= 0.6 above -> capped at 98%.
Nothing is rolled (flag 0) when there is no stunt actor, when the movie is in a mode where the stunt system is disabled (`DAT_0104a974 + 0x80 != 0`), or the scene is not a stunt scene (`FUN_005b60b0`).

### 2b. Exact formulas (helpers decoded) **[code]**
The three small helpers used by the roll are plain clamped arithmetic (`clamp01(x)` = min(max(x,0),1)):
* `Float_MulClamp01(&a, b)` (`FUN_004728e0`) = `clamp01(a * b)`; `Float_MulInPlaceClamp01(&v, m)` (`FUN_004bd4d0`): `v = clamp01(v * m)` (in place; underflow -> 0, overflow -> 1); `Float_SubClamp01(&a, b)` (`FUN_0042aa00`) = `clamp01(a - b)`.
* `StuntState_GetDifficulty` (`FUN_004b58b0`) = the stunt state object's float at +0x248 clamped to [0,1], or **0 when the stunt mode flag `FUN_0051ff70(2)` is set**. (The object at controller+0x1d8 is the scene's stunt state; `+0x248` is the difficulty/level shown by the stunt slider.)

So for each stunt actor (role `stuntrisk > 0`):
```
health        = character.vslot_0x1e4()                          // current health/ability value
healthAbility = clamp01(Float_SubClamp01(max,min) * health + min)  // min=0.5, max=1.0  -> 0.5 + 0.5*health
if health < healththreshold(0.01):  healthAbility = clamp01(healthAbility * 0.7)   // stuntabilityinjurymodifier
score         = clamp01(StuntsTrait * healthAbility)             // the actor's "Stunts" trait (0..1)
castScore     = average(score over stunt actors)                  // stored at controller+0xf8
diff          = castScore - difficulty                            // difficulty = StuntState_GetDifficulty()
chance        = 0.80 + 0.30*diff   (diff >= 0)   |   0.80 + 1.20*diff   (diff < 0)
if LuckyCharm bonus (id 0xE) active: chance += 0.10
chance        = clamp(chance, 0.05, 0.98)                         // stored at controller+0xf4
fail          = (rand01() >= chance)                              // LCG, see above
```
`ShootController_StartTake` (`FUN_004eb540`) runs this roll as part of starting a take (after the scene is rewound with `Scene_RestartAtFrame` and the take state is set to 3 = "in progress").

## 3. Related tuning from `Data\stunts.ini` **[data]** (consequences are applied elsewhere; values listed for reimplementation)
* `[experience]`: `experiencemin/max` 0.20/0.21, XP after a stunt: success +0.02..0.06, failure +0.01..0.04 (`stuntxpsuccess/failuremin/max`), `actorstuntskillmodifier` 0.7, `stuntmangenremodifier` 0.7.
* `[injuries]`: health loss on **failure** 0.1..0.8 (`min/maxhealthlossstuntfailure`), on **success** 0.1..0.2; `stuntdamageskillmultiplier` 0.3.
* `[performance]` (affects the movie's quality/score): `stuntskill` factor 0.9..1.1, `stuntlevel` 0.9..1.4, `likenessbonus` 1.1 (0.9..1.0 range), `health` 0.9..1.1, `injurymultiplier` 0.9, `success` factor 0.8..1.25, release-screen bounds 0.6..2.0.
* `[training]` (stunt school): XP on success -0.04..+0.04 (!), failure -0.03..+0.03, `stuntxpincreasemin` 0.005, health-loss ranges (failure 0.05..0.5, success 0.05..0.2), `successinjurymultiplier` 0.12, `failureinjurymultiplier` 0.18, `minxpcapforhealthloss` 0.15.
* `[scripts]`: `topstuntskillmodifier` 0.3, `minstuntskillmodifier` -0.51, `ignorestuntrisklimit` 0.
* General: `genderfactor` 0.5, `sexfactor` 0.1, `weightfactor` 0.1, `agefactor` 0.15, `looksfactor` 0.15 (likeness factors for stunt doubles), `healthgainpertick` 0.00001 (health regeneration per tick).

## 4. Evidence from the captures
* `025_time_bomb` / `025_fall_head` / `018_*` successful takes: `ai_stunt_fail` = 0 at start, never 1.
* `018_fall_head` failed take (11:16:11): `ai_stunt_fail` 0 -> 1 (+22 ms), `ai_director_mood = 0.661`; the `sld_fall` slider was dragged 0.167 -> 0.782 -> 0.167 (each change replays the take: `ai_ended_by_user` 1 -> 0 pairs), `ai_take_in_progress` 1 -> 0 at the end (20.3 s after start including the replays).
* The stunt scene inis carry the per-role risk: `001_fire_stare` `stuntrisk = 1.0`, `[stunt] level = 0.60`; `018_gun_fire_xt_cu` `stuntrisk = 0`, `[stunt] level = 0`; `025_time_bomb` `[stunt] level = 0`.

## 5. After the take: injuries, XP and announcements **[code + data]**
`ShootController_EndTake` (`FUN_004eace0`) runs when a take finishes: it records the take time, adds an amount from the experience table (index 0x0D, `FUN_00440130`) to every cast member's **`Movies` trait**, builds the movie record (`CProject_BuildMovieRecord`),
computes the take's quality score (`FUN_004df5d0`, stored at controller+0xfc), then calls, in this order:
1. `ShootController_ApplyActorExperience` (`FUN_004e0780`) - XP for everyone in the cast:
   * stunt actors (role `stuntrisk > 0`, not in mode 2): **`CStaff_AddStuntExperience(difficulty, success)`** (`FUN_0057c410`);
   * everyone else (and the director/crew via `FUN_005b2780`): **`CStaff_AddGenreExperience(controller)`** (`FUN_0057c250`).
2. `ShootController_ApplyStuntConsequences` (`FUN_004e2240`) - injuries and the on-screen announcement.

**Stunt XP** (`CStaff_AddStuntExperience`): `xp = (max - min) * difficulty + min` using `[experience]` values - **success: min 0.02, max 0.06; failure: min 0.01, max 0.04** (so harder stunts give more XP, and success always gives more than failure at the same difficulty);
x the award-bonus-0xF multiplier when active; **x `actorstuntskillmodifier` (0.7) unless the character's job is stuntman (job 16)**; then `Stunts` trait += xp, and the character's stunt statistics are updated (`FUN_005761e0`, e.g. `stunt_failure_count`).

**Genre/acting XP** (`CStaff_AddGenreExperience`): adds XP to the trait named after the movie's genre (name from the project via `FUN_005b6b90`/`FUN_00449b40`); the amount is looked up in an experience table by role (`FUN_00440130(index)`): **index 0x10 for the director** (the character who is the project's director), **0x0E / 0x0F for lead cast** (depending on whether the actor role is "star"/lead, `FUN_005a6140`), **0x13 for everyone else**; **x `stuntmangenremodifier` (0.7) for stuntmen**.

**Injuries** (`ShootController_ApplyStuntConsequences`, only when the stunt mode is off and the controller has stunt actors): for each stunt actor
```
skillFactor = clamp01(StuntsTrait * stuntdamageskillmultiplier(0.3))
danger      = clamp01(difficulty - skillFactor)
healthLoss  = lerp(minLoss, maxLoss, danger)       // failure: 0.10 .. 0.80 ; success: 0.10 .. 0.20
character.vslot_0x1e8(-healthLoss)                 // AdjustHealth
```
then the Tannoy announces **`TANNOY_STUNT_SCENE_SUCCESS` or `TANNOY_STUNT_SCENE_FAILURE`** (text/audio keys; only in normal play, i.e. when the global flag at `DAT_0104a974+0x6c` is not negative).
So a stunt performed by a skilled actor on an easy stunt costs only about 0.10 health even on failure; an unskilled actor on a hard stunt can lose up to 0.80.

**Stunt school training** (`StuntTraining_ApplyExperience`, `FUN_0083d1a0`, run for the stunt-training desire): `match = 1 - |sessionLevel - StuntsTrait|` (how well the session's level fits the trainee), range = `[training]` success (-0.04 .. +0.04) or failure (-0.03 .. +0.03);
`xp = (clamp01(max) - min) * match + min`; x award-bonus-0xF multiplier when active; `xp = max(xp, stuntxpincreasemin = 0.005)` (so training never lowers skill); **if health < healththreshold: xp x `lowhealthmultiplier` (0.1)**; `Stunts` trait += xp.

## 6. Capture evidence
(kept from section 4) plus: the failed-take sequence in `018_fall_head` matches step 7 of the roll (a draw above the chance sets `ai_stunt_fail = 1`).

## 7. Open items
* The two sub-systems behind the numbers: what `character.vslot_0x1e4` returns exactly (a combined health/ability value), the **trait container** (`Stunts`, `Movies`, genre traits: `FUN_00577370`, `FUN_004425f0` add, `FUN_00441750` get) and the experience table at `FUN_00440130`.
* The take-quality score (`FUN_004df5d0`) and the `[performance]` factors in `QualityCalc_LoadTuningData` (how stunt skill/level/likeness/injury/success scale the movie quality).
* Who sets the stunt state's difficulty at +0x248 (probably the stunt slider channel, `sld_fall`/`sld_timebomb`) and whether a mid-take slider change re-rolls (it does not: the roll is in `StartTake`).

## 8. See also
`TRAITS_AND_EXPERIENCE.md`: trait container (`Stunts`, `Movies`, genre traits and the diminishing-returns gain `new = old + (1-old)*delta`), the experience table (`experience.ini`), the stunt performance factors and take-score normalisation, and the movie-quality tuning (`releasing_movies.ini`).
