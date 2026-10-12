# Character traits, the experience table and movie-quality tuning (The Movies, MoviesSE.exe 2006 patched build)

Labels: **[code]** read from decompiled code, **[data]** from shipped ini files, **[runtime]** observed in play.

## 1. The trait container **[code]**
Every character (`TMCharacter`) owns a **trait container** at `character+0x96c` (`TMCharacter_GetTraits`, `FUN_00577370`). It is a `std::map<string, TraitNode>` rooted at container+0x8c (sentinel at +0x90); the node's float value is at node+0x2c.
Traits are named floats in **[0, 1]**: `"Stunts"` (stunt skill), `"Movies"` (movies made), and the genre skills (named after the genre, e.g. action/comedy/horror...), plus others (the same container holds acting skills and statistics).

* `TraitContainer_Get(name)` (`FUN_00441750`): value, or **0.0** if the trait does not exist.
* `TraitContainer_Set(name, v)` (`FUN_00442490`): stores `clamp01(v)`.
* `TraitContainer_Add(name, delta)` (`FUN_004425f0`): **diminishing-returns gain**:
  ```
  if (award bonus #1 is active)  delta *= bonusValue(1)          // a global "experience gain" award bonus
  if (trait exists)  new = old + (1 - old) * delta                // moves a fraction `delta` of the remaining headroom
  else               new = delta
  Set(name, new)                                                  // clamped to [0,1]; returns the gain
  ```
  So XP numbers in the ini files are **fractions of the remaining headroom**, not absolute points; a 0.026 lead-role gain moves a 0.5 skill by 0.013 and a 0.9 skill by 0.0026.

## 2. The experience table (`Data\experience.ini`) **[code + data]**
(The "used for" column for rows 0-12 and 17-18 is inferred from the key names; rows 13-16 and 19 are confirmed by code.) Loaded by `ExperienceTable_Load` (`FUN_004404b0`) into 20 floats at `0x00F87E70`; read with `ExperienceTable_Get(idx)` (`FUN_00440130`, value clamped to [0,1]). Index = position in this list; values from the shipped ini:

| idx | key | value | used for |
|---|---|---|---|
| 0 | `LOT_PERHAMMERBUILD` | 0.0006 | builder XP per hammer swing building |
| 1 | `LOT_PERLITTERSWEPT` | 0.004 | janitor XP per litter swept |
| 2 | `LOT_PERHAMMERREPAIR` | 0.0003 | builder XP per repair swing |
| 3 | `SET_REHEARSELOOP` | 0.01 | rehearsal loop XP |
| 4 | `SET_WATCHREHEARSELOOP` | 0.005 | watching a rehearsal loop |
| 5 | `SET_WATCHSHOOTLOOP` | 0.0075 | watching a shoot loop |
| 6 | `SET_REHEARSE_INCREMENT` | 0.1 | rehearsal progress step |
| 7 | `SET_WATCH_INCREMENT` | 0.05 | watch progress step |
| 8 | `SET_WATCHSHOOT_INCREMENT` | 0.75 | watching a shoot progress step |
| 9 | `SET_REHEARSE_TIME` | 600 | rehearsal duration |
| 10 | `MOVIES_WRITERSTART` | 0.1 | starting writer skill |
| 11 | `MOVIES_SCIENTISTSTART` | 0.1 | starting scientist skill |
| 12 | `MOVIES_SCIENTIST_INCREMENT_PER_MONTH` | 0.011 | scientist skill growth/month |
| 13 (0x0D) | `MOVIES_CREWPERSHOT` | 0.02 | crew **Movies** trait gain per shot (`ShootController_EndTake`) |
| 14 (0x0E) | `MOVIES_LEADROLE` | 0.026 | lead role genre XP |
| 15 (0x0F) | `MOVIES_SUPPORTROLE` | 0.013 | supporting role genre XP |
| 16 (0x10) | `MOVIES_DIRECTOR` | 0.026 | director genre XP |
| 17 | `SCRIPT_QUALITY_GAIN` | 0.0004 | scriptwriter quality gain |
| 18 | `SCRIPT_EXP_GAIN` | 0.00002 | scriptwriter XP gain |
| 19 (0x13) | `MOVIES_STUNTMAN` | 0.013 | stuntman role genre XP |

Other keys in the file: `stars_experience_interval = 5`, `stars_experience_decay = 0.002` (stars lose experience over time, loaded into `DAT_00e4fb5c/60`), `StaffStartMinExp/MaxExp = 0.1`, `CrewStartMinExp/MaxExp = 0.1` (new hires start at 0.1).
`CStaff_AddGenreExperience` uses idx 0x10 (director), 0x0E/0x0F (lead/support) and 0x13 (stuntman) as described in `STUNT_SYSTEM.md`.

## 3. Stunt performance factors (movie quality) **[code + data]**
For each stunt shot the quality calculator multiplies five factors (`QualityCalc_StuntPerformance`, `FUN_005d8bd0`; constants from `stunts.ini [performance]`, loaded by `QualityCalc_LoadTuningData`):
```
skillFactor    = 0.9 + 0.2 * StuntsTrait                          (stuntskillminimum..maximum = 0.9..1.1)         QualityCalc_StuntSkillFactor
healthFactor   = 0.9 + 0.2 * health ; x0.9 if health < healththreshold (healthminimum/maximum 0.9..1.1, injurymultiplier 0.9)   QualityCalc_HealthFactor
likeness       = (double is the actor) ? likenessbonus (1.1)
                 : 0.9 + 0.1 * clamp01(likeness(double, actor))   (likenessminimum/maximum 0.9..1.0)            QualityCalc_LikenessFactor
levelFactor    = 0.9 + clamp01((1.4 - 0.9) * difficulty)           (stuntlevelminimum/maximum 0.9..1.4)
successFactor  = success ? 1.25 : 0.8                                (successmaximum / successminimum)
performance    = skillFactor * (healthFactor * likeness) * levelFactor * successFactor
```
(`likeness(double, actor)` = `FUN_00597820`, a weighted similarity from `genderfactor 0.5, sexfactor 0.1, weightfactor 0.1, agefactor 0.15, looksfactor 0.15` - the stunt double should resemble the star.) A null stuntman gives the 0.9 minimum for skill and health.

**Take score** (`ShootController_ComputeTakeScore`, `FUN_004df5d0`, stored at controller+0xfc): the three component slots (ids 1, 3, 2) of the take's performance record each give a `QualityCalc_StuntShotPerformance`; the nonzero components are summed and averaged, then mapped with **`ReleaseScreen_NormalizeScore`** (`FUN_006f9cf0`): `clamp(avg, 0.6, 2.0)` -> `(avg - 0.6) / (2.0 - 0.6)` (`releasescreenminbound 0.6`, `releasescreenmaxbound 2.0`) -> 0..1.
So a perfect-looking stunt shot (1.1 x 1.1 x 1.1 x 1.4 x 1.25 about 2.3) saturates at 1.0 and a poor failed one (0.9^4 x 0.9 x 0.8 about 0.47) bottoms out at 0.

## 3b. The likeness function (decoded) **[code + data]**
`QualityCalc_ComputeLikeness(out, a, b)` (`FUN_00597820`) compares the stunt double `a` with the star `b` (null pointers give 0). All terms use *current* values - age and weight come from each character's **current costume** (`GetEffectiveAge` vtable slot 107, `GetEffectiveWeight` slot 108, see the costume body-morph notes), so a costume can change likeness:
```
genderDiff   = (a.gender != b.gender) ? 1 : 0                       // character+0x4A0
ageTerm      = clamp01(|ageA - ageB|     * 0.02)                    // 50 years of difference = 1.0
weightTerm   = clamp01(|weightA - weightB| * 0.01)                   // 100 weight units = 1.0
looksTerm    = |looksA - looksB|                                     // vtable slot 132 (0x210): 0 for plain staff, a stored stat for stars/extras
sexTerm      = |sexAppealA - sexAppealB|                             // vtable slot 133 (0x214): same
likeness     = clamp01( 1 - ( genderfactor*genderDiff + agefactor*ageTerm + weightfactor*weightTerm
                              + looksfactor*looksTerm + sexfactor*sexTerm ) )
```
with `stunts.ini`: **genderfactor 0.5, agefactor 0.15, weightfactor 0.1, looksfactor 0.15, sexfactor 0.1** (they sum to 1.0, so likeness is 1 for identical characters and 0 for the worst possible mismatch).
Then `QualityCalc_LikenessFactor` turns it into the performance multiplier: **`0.9 + 0.1 * likeness`** (or **1.1** when the double *is* the actor). Consequences:
* A **gender mismatch alone** costs 0.5 of likeness -> multiplier 0.95 (-5%).
* A 30-year age gap alone costs 0.15*0.6 = 0.09 -> multiplier 0.991 (-0.9%); a 50-year gap 0.15 -> 0.985.
* A 40-unit weight gap alone: 0.1*0.4 = 0.04 -> 0.996.
* Only a total mismatch in every term reaches the 0.9 floor (-10%); everyday mismatches cost 1-5%. Compared with the star doing the stunt themselves (1.1), a good double (likeness near 1.0 -> 1.0) is still **-9%**.
* Likeness never influences the stunt success roll (section 2 of `STUNT_SYSTEM.md`), only the movie quality score.
(The stats behind slots 132/133: for stars `character+0xBC4` / `+0xBC8`, for extras `+0xA88` / `+0xA8C`; plain `CStaff` returns 0. The earlier project labels "ambition target/cap" for these two getters were wrong - the likeness code and the factor names show they are looks and sex appeal; the third stat of that float cluster, slot 121 at `+0xBC0`, keeps its old "ambition level" label unverified.)

## 4. Movie quality tuning (`Data\releasing_movies.ini`) **[data]** (loaded by `QualityCalc_LoadTuningData`, `ReleaseCalc_LoadTuningData`)
`[min_max]` multipliers (each factor is mapped linearly between min and max): star genre experience 0.8-1.2, star mood 0.8-1.2, stars' genre fit 0.9-1.1, star relationship 0.8-1.2 (range width 0.5), star ratings of cast 0.8-1.2, set repair value 0.9-1.0, crew 0.9-1.1, **unspread performance 0.75-1.5**, public interest 1.0-1.4, era fit 0.8-1.0, technology 0.7-1.0, genre popularity 0.9-1.2.
`[overall]`: `quality_overall_max_adder 0.8`, `quality_overall_max_shifter 0.1`, `quality_overall_shifter_mid_point 0.4`, and the same three for success (0.8 / 0.12 / 0.5). `[script_quality]`: star thresholds 0.2/0.4/0.6/0.8/1.0. `star_ratings_proportion 0.7`, `set_era_fit_cutoff 25` (years),
`[boredom]` bounds 0.8 (star increase 0.15 per use; star/set/costume/genre bounds 0.8), `pre_production 300`, `star_mood_step 0.25`, `[genre_fit] max_from_ideal`.
The final quality/success formulas live in the release calculator (`FUN_005dcd60` object, 0xBC bytes) and are not decoded yet.

## 5. Open items
* The meaning of the combined health value (`character vslot 0x1E4`) and the writers of the other traits in the container.
* The release calculator (`QualityCalc` object ctor `FUN_005dcd60`) that combines the `[min_max]` factors into movie quality and box-office success, (likeness is decoded in section 3b).
* The three component ids (1, 3, 2) in the take score - presumably the movie's first three shots/scene slots.
