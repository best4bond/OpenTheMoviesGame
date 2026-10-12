#pragma once
#include <cstdint>

// RVAs relative to MoviesSE.exe's module base (RVA = VA - ImageBase).
// ImageBase is 0x00400000 for the build these were verified against.
//
// Every entry here must be independently confirmed in Ghidra (not guessed)
// before it's added - see project_the_movies_re.md for how each one was
// verified. Add new anchors here as more functions are confirmed; nothing
// else in this project should hardcode an absolute VA.
namespace Addresses
{
    // TM::WAdvMovieMaker::Tick - per-frame update of the Advanced Movie Maker
    // window (only runs while that screen is open).
    //
    // Verified 2026-09-30 via the full RTTI COL chain:
    //   - Type descriptor string ".?AVWAdvMovieMaker@TM@@" at VA 0x00E55B24
    //   - COL at VA 0x00DBF284 references that type descriptor
    //   - vtable at VA 0x00D2F0D4 (slot 10, VA 0x00D2F0FC) points at this function
    // Build: VC7.1 (linker 7.10), PE timestamp 2006-04-27 - confirm this
    // matches your MoviesSE.exe before trusting this RVA (see metadata.json
    // written by the DLL, and compare against the notes in project_the_movies_re.md).
    constexpr uintptr_t WAdvMovieMaker_Tick = 0x00212210; // VA 0x00612210

    // TM::WWindow::Tick - the base window class's default per-frame update:
    // process pending child add/remove requests, then recurse into each
    // child's own Tick (vtable slot 10, offset 0x28). Confirmed RTTI-verified
    // 2026-09-30 (see project_the_movies_re.md) - originally added here as an
    // unverified hypothesis, discovered purely from runtime evidence: it was
    // the *only* observed caller of WAdvMovieMaker::Tick (46/46 calls, first
    // play session). Ghidra's static xrefs to a virtual method only ever find
    // its own vtable slot, never its call sites - this caller relationship
    // was invisible to static analysis and could only be found by watching it
    // happen at runtime. Confirmed afterward via RTTI as the shared Tick
    // default inherited by 16+ unrelated widget classes (drag sources,
    // checkboxes, costume-option sliders, images, league entries, ...).
    constexpr uintptr_t WWindow_Tick = 0x00340ba0; // VA 0x00740ba0

    // TM::WInterface::Tick - discovered as a caller of WWindow_Tick (1572
    // calls in the free-play menu/HUD session), RTTI-verified 2026-09-30.
    // Handles quicksave triggers and dispatches several numbered
    // notification/message types - almost certainly the main in-game
    // HUD/interface controller's own per-frame update, sitting above most
    // other HUD sub-widgets in the Tick hierarchy. Hooking it to see what
    // calls *it* during actual gameplay (as opposed to menu navigation),
    // since it sits higher up the call chain than WWindow_Tick and should
    // surface more gameplay-specific systems.
    constexpr uintptr_t WInterface_Tick = 0x002a3720; // VA 0x006a3720

    // --- Simulation-side anchors (all three below), added to complement the
    // UI-tree anchors above once WWindow_Tick's caller space was largely
    // exhausted (28 -> 21 -> 12 -> 2 new callers per successive session).
    // These were already named from work predating the debugger DLL; RVAs
    // recomputed and calling conventions re-verified against the live Ghidra
    // signature before hooking - see GameHooks.cpp for the TMRoom_Tick
    // two-param note specifically.

    // TM::TMRoom::Tick - per-facility simulation update (staff assignment
    // slots, queued asset requests, occupant bookkeeping). Ghidra's detected
    // signature is a genuine 2-arg __fastcall (this in ECX, a second value in
    // EDX) rather than the 1-arg thiscall shape every UI Tick above uses -
    // the detour must forward EDX through unchanged rather than dropping it.
    // FIXED 2026-10-02: this was 0x0013f000 (= VA 0x53f000, nothing there) since
    // the start - the real function is at VA 0x0093f000 (Ghidra: TMRoom_Tick),
    // so RVA = 0x0053f000. Every earlier "TMRoom::Tick = 0 calls" result was
    // an artifact of hooking the wrong address.
    constexpr uintptr_t TMRoom_Tick = 0x0053f000; // VA 0x0093f000

    // CStudioAI::Tick - studio-level AI driver, single-arg (this only).
    constexpr uintptr_t CStudioAI_Tick = 0x001156b0; // VA 0x005156b0

    // TM::TMBaseDesire::TickShared - shared per-frame update for the
    // character desire/need system, single-arg (this only).
    constexpr uintptr_t TMBaseDesire_TickShared = 0x00437b90; // VA 0x00837b90

    // SITT_DebugConsoleCommandDispatch - an internal developer command
    // dispatcher, __stdcall(param1), where param1[0] is a char* to a
    // "command.arg" string (e.g. "money_display.on") and param1[1] flags
    // whether an arg part is present. NOT reachable via any player-facing
    // console/hotkey found so far - its only call chain traces back through
    // a scripted-event/condition system tied to GlobalStatRegistry, the same
    // machinery behind the AMM/Trailer-Editor tutorial scripts. Recovered a
    // ~40-command list from its body (see project_the_movies_re.md,
    // 2026-10-01 entry) including money_display, mood_*, addictions_*,
    // timeline_static/restore, and completed_newgame_tutorial/
    // completed_stunt_tutorial - the last two look exactly like what a
    // tutorial's own final scripted step would fire to mark itself done.
    // Hooked purely as an observer (never alters the call) to test whether
    // any of these fire during an ordinary playthrough.
    constexpr uintptr_t SITT_DebugConsoleCommandDispatch = 0x0050e360; // VA 0x0090e360

    // Game_TickOneFrame - the top-level per-tick game-state dispatcher, called
    // once per simulation tick from Game_MainLoop. __fastcall(this), single
    // arg, same thiscall-equivalent idiom as the UI Tick hooks. Hooked to read
    // the game-state value it switches on (*(int*)(this[0x2d] - 0xC)) and log
    // only when it changes, to identify which numeric state ID (0-5, plus the
    // paused/active pair already confirmed) corresponds to which real screen -
    // see project_the_movies_re.md, 2026-10-01 "all 6 switch cases" entry for
    // why that mapping wasn't provable from static analysis alone. The state
    // read is SEH-guarded (see GameHooks.cpp) since the offset chain is
    // inferred from the decompile, not independently proven.
    constexpr uintptr_t Game_TickOneFrame = 0x00023530; // VA 0x00423530

    // --- Added 2026-10-01 to resolve two open questions from the first
    // state-observing session: (1) TMRoom::Tick showed 0 calls despite a full
    // play session - is the simulation queue even running? and (2) the
    // runtime-inferred state-ID mapping (state 0 = "active gameplay") turned
    // out to conflict with Game_TickOneFrame's own switch, which routes case
    // 0 to Game_TickState0_Transition (explicitly "not a real tick") and puts
    // the true active-gameplay path behind the switch's default case instead
    // (some numeric state value never observed last session). Hooking the
    // three functions below directly settles both questions from real call
    // counts instead of more state-ID inference.

    // Game_TickActiveGameplay - the switch's default case in Game_TickOneFrame
    // (i.e. reached by any state value NOT 0/1/2/3/4/5). __fastcall(this),
    // single arg, same thiscall-equivalent idiom as every other Tick hook.
    // Calls Campaign_AdvanceYearIfDecadeElapsed() and SimObjectQueue_TickPending()
    // unconditionally - the two calls that structurally distinguish "real"
    // gameplay ticks from every other named case in the switch.
    constexpr uintptr_t Game_TickActiveGameplay = 0x00022b00; // VA 0x00422b00

    // Game_TickPaused - Game_TickOneFrame's case 3. Same __fastcall(this)
    // shape. Per the existing Ghidra comment at this address: "Named 'Paused'
    // by inference, not proof" - structurally near-identical to
    // Game_TickActiveGameplay, the ONLY difference being it never calls
    // Campaign_AdvanceYearIfDecadeElapsed(). It DOES still call
    // SimObjectQueue_TickPending(), same as ActiveGameplay - so if this name
    // is right, "paused" here means "the calendar stops, but the sim queue
    // keeps ticking", not a full simulation freeze. Hooking this alongside
    // ActiveGameplay directly tests whether case 3 ever actually fires during
    // ordinary play, and how its call count compares.
    constexpr uintptr_t Game_TickPaused = 0x00022c30; // VA 0x00422c30

    // SimObjectQueue_TickPending - __stdcall, zero arguments. Called from
    // both Game_TickActiveGameplay and Game_TickPaused (and TMRoom::Tick's
    // own caller chain traces back here per earlier RTTI/xref work). Walks a
    // linked list of pending sim objects via a sentinel node (DAT_0104c5ec /
    // DAT_0104c5f8), ticking each one through its own vtable slot 0xc.
    // Hooking this directly (rather than inferring its activity from its
    // callers) is the most direct way to find out why TMRoom::Tick logged 0
    // calls last session - either this never fires, or it fires but never
    // reaches a TMRoom in its pending list under the play conditions tried.
    constexpr uintptr_t SimObjectQueue_TickPending = 0x0013c550; // VA 0x0053c550

    // --- Added 2026-10-01 to resolve the TMRoom::Tick-always-0 mystery.
    // TMRoom::Tick (above) is only the BASE/default vtable-slot-3
    // implementation - roughly half of TMRoom's concrete subclasses override
    // it instead. Confirmed via direct vtable-slot reads against the RTTI
    // type descriptor for each subclass (COL pointer at vtable-4, slot 3 at
    // vtable+0xC) - see the comment at TMRoom::Tick's address in Ghidra for
    // the full table. Same 2-arg __fastcall(this, edx) shape as the base
    // (virtual overrides must match the slot's calling convention), even
    // though some override bodies don't end up reading edx.
    // CORRECTED 2026-10-01: these 4 were originally written with RVAs that
    // were off by exactly 0x400000 (one ImageBase) due to a hex subtraction
    // error made by hand while transcribing from Ghidra's VAs. MinHook
    // hooked the WRONG (unrelated) addresses as a result, overwriting
    // whatever functions actually lived there with jumps into mismatched-
    // signature detours - this corrupted 4 unrelated functions' code and
    // caused an immediate access-violation crash inside MoviesSE.exe on next
    // injection. Caught by comparing debug.log's logged hook VAs against the
    // Ghidra-confirmed real addresses. See project_the_movies_re.md.
    constexpr uintptr_t CCastRoom_Tick = 0x00517c10; // VA 0x00917c10
    constexpr uintptr_t CCrewRoom_Tick = 0x005185c0; // VA 0x009185c0
    constexpr uintptr_t CDirectorRoom_Tick = 0x0051ab70; // VA 0x0091ab70
    constexpr uintptr_t CLeadsRoom_Tick = 0x00527380; // VA 0x00927380
    // CHireRoom::Tick (VA 0x00924260) and CMarketingRoom::Tick
    // (VA 0x009282d0) turned out to be pure tail-call thunks straight into
    // the base TMRoom::Tick above (disassembled and confirmed 2026-10-01) -
    // not hooked separately since calls through them are already
    // indistinguishable from, and already counted by, the base hook.

    // AutosaveSystem_TriggerAutosave - __cdecl(wchar_t* message, uint length,
    // uint capacity), added 2026-10-01 after the game crashed (nvd3dum.dll
    // access violation) while injected and the user suspected an autosave
    // was in progress. Called from WinMain's shutdown tail, one unnamed
    // caller, and WInterface::Tick (already hooked) - this gives a precise
    // "an autosave/quicksave just started" signal distinct from
    // WInterface::Tick's own per-frame noise, to directly correlate against
    // any future crash.
    constexpr uintptr_t AutosaveSystem_TriggerAutosave = 0x000b1130; // VA 0x004b1130

    // --- Added 2026-10-01 to resolve the remaining Game_TickOneFrame switch
    // cases directly, rather than continuing to infer screen mapping purely
    // from state-change dwell times. Game_TickActiveGameplay/Game_TickPaused
    // (cases default/3) were already hooked; these 4 cover the rest.
    // Signatures independently re-verified via Ghidra before hooking, per
    // standing discipline (see the hex-arithmetic RVA bug in cont. 19 for why
    // this always matters) - State1/State4 are 1-arg __fastcall(this) like
    // most Tick-family hooks, but State2/State5 are genuine 2-arg
    // __fastcall(this, edx), matching Game_TickOneFrame's own call sites
    // which pass extraout_EDX/extraout_EDX_00 for exactly those two cases.
    constexpr uintptr_t Game_TickState1 = 0x00022d20; // VA 0x00422d20 (1-arg)
    constexpr uintptr_t Game_TickState2 = 0x00022e40; // VA 0x00422e40 (2-arg)
    constexpr uintptr_t Game_TickState4 = 0x00022e00; // VA 0x00422e00 (1-arg)
    constexpr uintptr_t Game_TickState5 = 0x00022f40; // VA 0x00422f40 (2-arg)

    // CStaff_Tick - vtable slot 12 (offset 0xC) for the TMCharacter class
    // hierarchy (staff/extra/wannabe/star, etc.) - the character-level
    // equivalent of TMRoom::Tick, found 2026-10-01 via the same vtable-slot
    // technique. Not CStaff-exclusive despite the name: CExtra_Tick and
    // CWannabe_Tick both call this directly as their own first action before
    // adding type-specific logic (see the comment at this address in
    // Ghidra). 1-arg __fastcall(this), standard shape. Hooking this directly
    // (rather than only the Room/Desire systems) should reveal the full
    // character-type taxonomy actually active during play, the same way
    // WWindow::Tick revealed 70 widget classes and TMBaseDesire::TickShared
    // revealed 19 desire classes - via ResolveVtables.ps1 on the next
    // capture.
    constexpr uintptr_t CStaff_Tick = 0x0017dcf0; // VA 0x0057dcf0

    // TMRoom_Constructor - base constructor called by every concrete room
    // constructor (CCostumeRoom_Constructor, CPostProdRoom_Constructor, ...,
    // ~30 callers, all already named in Ghidra). __fastcall(this) -> this.
    // Added 2026-10-02 to find out which room classes are ever instantiated
    // during play, given TMRoom::Tick never fires. The caller RVA of each
    // call identifies the derived constructor (vtable is still the base one
    // at this point, so vtable capture is useless here).
    constexpr uintptr_t TMRoom_Constructor = 0x0053e990; // VA 0x0093e990

    // --- Added 2026-10-02 to test "does making a star a scriptwriter upset them,
    // and is it a desire?" ---
    // CStar_SetJob - __thiscall(this, int job, int* p2). Fires on every job change
    // for stars (calls CStaff_SetJob). Logs the new job.
    constexpr uintptr_t CStar_SetJob = 0x00188570; // VA 0x00588570
    // DesireUnfulfilled_GetDescriptionText - __thiscall(this, outText) -> outText.
    // Builds "DESIRE_UNFULFILLED_<name>" where <name> is the CBasicString at
    // (*(this+0x13c))+0x64 (ptr) / +0x68 (len); the detour reads it before calling.
    constexpr uintptr_t DesireUnfulfilled_GetDescriptionText = 0x004417b0; // VA 0x008417b0

    // TMCharacter_AddResidentDesire - __thiscall(this = character, desire*). Appends a
    // desire to the character's list (node at desire+0xA0 into this+0x548). Added
    // 2026-10-02 to log WHICH desire classes get attached on each job change.
    constexpr uintptr_t TMCharacter_AddResidentDesire = 0x0019a1c0; // VA 0x0059a1c0

    // Explainer_GetActionCost - __thiscall(this = explainer (interactive prop), float* outCost,
    // TMCharacter* ch, string* actionName) -> bool usable. Rejects on range/queue/missing
    // action/<name>/cost ini section, else fills outCost. Added 2026-10-02 to observe
    // "disposeoflitter" routing to dustbin/swingbin props.
    constexpr uintptr_t Explainer_GetActionCost = 0x004b30e0; // VA 0x008b30e0

    // TMCharacter_SortResidentDesires - __fastcall(TMCharacter* character). Sorts the resident
    // desire list, writes rankIndex into each desire (+0x104) and stores the top-urgency desire
    // at character+0x4C0. Hooked 2026-10-02 to log which desire dominates per character.
    constexpr uintptr_t TMCharacter_SortResidentDesires = 0x0019b170; // VA 0x0059b170

    // Scene_Step - __fastcall(Scene* scene), one simulation step of an FS scene (frame counter at
    // scene+0x8c). Hooked 2026-10-02 to measure how many steps/second a scene runs (time unit).
    constexpr uintptr_t Scene_Step = 0x00577c80; // VA 0x00977c80

    // Scene_LoadFlm - __cdecl(const char* name, int fallbackName, uint* ids, byte isChild) -> Scene*.
    // Logs every .flm that gets loaded. Added 2026-10-03 for the movie-making capture.
    constexpr uintptr_t Scene_LoadFlm = 0x0057c450; // VA 0x0097c450
    // Scene_SetChannel - __thiscall(Scene* this, const char* name, float value, uint flags): the generic
    // scene "event"/variable write (ai_stop, ai_action, sld_* sliders ...).
    constexpr uintptr_t Scene_SetChannel = 0x005757a0; // VA 0x009757a0
    // Scene_ReleaseMarker - __thiscall(Scene* this, uint markerMask): fires when all members passed a marker.
    constexpr uintptr_t Scene_ReleaseMarker = 0x00571e70; // VA 0x00971e70
}
