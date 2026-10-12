#include "GameHooks.hpp"
#include "DecadeTracker.hpp"
#include "HookManager.hpp"
#include "../game/Addresses.hpp"
#include "../telemetry/EventQueue.hpp"
#include "../core/Logging.hpp"
#include <windows.h>
#include <intrin.h>
#include <filesystem>
#include <fstream>
#include <atomic>
#include <cstring>
#include <cstdio>

namespace
{
    // Reads *(void**)self, i.e. the object's vtable pointer, for every hook
    // that has a `this`. SEH-guarded like every other inferred-memory read in
    // this file - `self` always comes from the game's own virtual dispatch so
    // should never be null/invalid in practice, but there's no proof of that
    // for every call site, so guard it anyway rather than assume.
    //
    // Purpose: this lets an OFFLINE pass (see tools/ResolveVtables.ps1)
    // resolve every observed caller's concrete class via RTTI in bulk - read
    // the COL pointer at vtablePtr-4 for each distinct vtable address logged
    // in events.jsonl - instead of the previous one-at-a-time workflow of
    // hand-pressing F on each unresolved caller RVA and decompiling it.
    uintptr_t TryReadVtablePtr(const void* self)
    {
        __try
        {
            if (!self) return 0;
            return *reinterpret_cast<const uintptr_t*>(self);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return 0;
        }
    }

    // TM::WAdvMovieMaker::Tick is a virtual method called through a vtable,
    // i.e. __thiscall ABI (this in ECX, no stack args). The standard MinHook
    // idiom for hooking a __thiscall method is a __fastcall detour (fastcall's
    // first two register args are ECX/EDX, matching thiscall's ECX-for-this
    // plus one unused slot), while the trampoline back to the original is
    // typed as __thiscall so the compiler emits the right calling convention
    // when we call through it.
    using TickFn = void(__thiscall*)(void* self);
    TickFn Original_WAdvMovieMaker_Tick = nullptr;

    void __fastcall Detour_WAdvMovieMaker_Tick(void* self, void* /*edx, unused*/)
    {
        void* returnAddr = _ReturnAddress();

        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_WAdvMovieMaker_Tick(self);
        QueryPerformanceCounter(&end);

        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::WAdvMovieMaker_Tick;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // WWindow::Tick - same __thiscall shape as the hook above (this pointer,
    // no stack args). Fires far more often than WAdvMovieMaker::Tick (once
    // per child per frame, for whatever window/container owns the list it
    // walks - it's the base class's default child-ticking behaviour, shared
    // by 16+ unrelated widget classes per the RTTI check in Addresses.hpp),
    // so it's a good stress test of the queue's drop counter as well as a
    // caller-frequency source across the wider window system.
    using ChildTickDispatchFn = void(__thiscall*)(void* self);
    ChildTickDispatchFn Original_WWindow_Tick = nullptr;

    void __fastcall Detour_WWindow_Tick(void* self, void* /*edx, unused*/)
    {
        void* returnAddr = _ReturnAddress();

        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_WWindow_Tick(self);
        QueryPerformanceCounter(&end);

        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::WWindow_Tick;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // WInterface::Tick - same __thiscall shape again. Sits higher in the
    // Tick call hierarchy than WWindow::Tick (it was itself a caller of it),
    // so its own callers are expected to be more gameplay-specific systems
    // rather than generic widget plumbing.
    using InterfaceTickFn = void(__thiscall*)(void* self);
    InterfaceTickFn Original_WInterface_Tick = nullptr;

    void __fastcall Detour_WInterface_Tick(void* self, void* /*edx, unused*/)
    {
        void* returnAddr = _ReturnAddress();

        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_WInterface_Tick(self);
        QueryPerformanceCounter(&end);

        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::WInterface_Tick;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // TMRoom::Tick - the one anchor here that ISN'T a 1-arg thiscall shape.
    // Ghidra's own signature for it is a genuine 2-arg __fastcall
    // (this in ECX, a second value in EDX), unlike every UI Tick above. The
    // incoming EDX value gets overwritten before ever being read in every
    // code path we found in the decompile, so its exact meaning is unclear -
    // but forwarding it through unchanged is correct regardless of whether
    // it's semantically meaningful or not, so that's what this does rather
    // than guessing a replacement value or (worse) silently dropping it like
    // a 1-arg hook would.
    using RoomTickFn = void(__fastcall*)(void* self, void* edxParam);
    RoomTickFn Original_TMRoom_Tick = nullptr;

    void __fastcall Detour_TMRoom_Tick(void* self, void* edxParam)
    {
        void* returnAddr = _ReturnAddress();

        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_TMRoom_Tick(self, edxParam);
        QueryPerformanceCounter(&end);

        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::TMRoom_Tick;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // --- TMRoom subclass Tick overrides (added 2026-10-01) -------------
    // Same 2-arg __fastcall(this, edx) shape as TMRoom::Tick itself - these
    // are overrides of the exact same vtable slot, so they share its calling
    // convention regardless of whether each override's own body reads edx.
    // See Addresses.hpp for why these were added (TMRoom::Tick-always-0
    // mystery - roughly half of TMRoom's subclasses override slot 3 instead
    // of using the shared base).
    using RoomTickOverrideFn = void(__fastcall*)(void* self, void* edxParam);

    RoomTickOverrideFn Original_CCastRoom_Tick = nullptr;
    void __fastcall Detour_CCastRoom_Tick(void* self, void* edxParam)
    {
        void* returnAddr = _ReturnAddress();
        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_CCastRoom_Tick(self, edxParam);
        QueryPerformanceCounter(&end);
        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::CCastRoom_Tick;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    RoomTickOverrideFn Original_CCrewRoom_Tick = nullptr;
    void __fastcall Detour_CCrewRoom_Tick(void* self, void* edxParam)
    {
        void* returnAddr = _ReturnAddress();
        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_CCrewRoom_Tick(self, edxParam);
        QueryPerformanceCounter(&end);
        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::CCrewRoom_Tick;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    RoomTickOverrideFn Original_CDirectorRoom_Tick = nullptr;
    void __fastcall Detour_CDirectorRoom_Tick(void* self, void* edxParam)
    {
        void* returnAddr = _ReturnAddress();
        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_CDirectorRoom_Tick(self, edxParam);
        QueryPerformanceCounter(&end);
        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::CDirectorRoom_Tick;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    RoomTickOverrideFn Original_CLeadsRoom_Tick = nullptr;
    void __fastcall Detour_CLeadsRoom_Tick(void* self, void* edxParam)
    {
        void* returnAddr = _ReturnAddress();
        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_CLeadsRoom_Tick(self, edxParam);
        QueryPerformanceCounter(&end);
        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::CLeadsRoom_Tick;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // CStudioAI::Tick - 1-arg thiscall shape, same idiom as the UI hooks.
    using StudioAITickFn = void(__thiscall*)(void* self);
    StudioAITickFn Original_CStudioAI_Tick = nullptr;

    void __fastcall Detour_CStudioAI_Tick(void* self, void* /*edx, unused*/)
    {
        void* returnAddr = _ReturnAddress();

        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_CStudioAI_Tick(self);
        QueryPerformanceCounter(&end);
        DecadeTracker::OnStudioAITick(self);

        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::CStudioAI_Tick;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // TMBaseDesire::TickShared - 1-arg thiscall shape, same idiom again.
    using DesireTickFn = void(__thiscall*)(void* self);
    DesireTickFn Original_TMBaseDesire_TickShared = nullptr;

    void __fastcall Detour_TMBaseDesire_TickShared(void* self, void* /*edx, unused*/)
    {
        void* returnAddr = _ReturnAddress();

        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_TMBaseDesire_TickShared(self);
        QueryPerformanceCounter(&end);

        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::TMBaseDesire_TickShared;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // Reads param1[0] as a char* and copies it into outBuf, guarded by SEH -
    // we're trusting an inferred memory layout (never independently proven
    // the way the address itself was), so a bad read here must not crash the
    // game. Kept in its own function with no C++ objects in scope because
    // __try/__except cannot coexist with C++ object unwinding in the same
    // function under the default /EHsc model.
    bool TryReadCommandString(const uint32_t* param1, char* outBuf, size_t outBufSize)
    {
        __try
        {
            if (!param1) return false;
            auto strPtr = reinterpret_cast<const char*>(param1[0]);
            if (!strPtr) return false;
            strncpy_s(outBuf, outBufSize, strPtr, _TRUNCATE);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    // SITT_DebugConsoleCommandDispatch - __stdcall, one pointer param. Purely
    // observational: reads the command string being dispatched (see
    // Addresses.hpp for the inferred param1[0]="command.arg" layout) and logs
    // it, then calls straight through with the original pointer untouched.
    // Never alters param1, never substitutes its own value - if the memory
    // layout guess is wrong, the worst case is a garbage/empty log entry, not
    // a changed call.
    using DispatchFn = uint32_t(__stdcall*)(uint32_t* param1);
    DispatchFn Original_SITT_DebugConsoleCommandDispatch = nullptr;

    uint32_t __stdcall Detour_SITT_DebugConsoleCommandDispatch(uint32_t* param1)
    {
        void* returnAddr = _ReturnAddress();

        StringEvent sev;
        sev.qpcTimestamp = [] { LARGE_INTEGER t; QueryPerformanceCounter(&t); return static_cast<uint64_t>(t.QuadPart); }();
        sev.threadId = GetCurrentThreadId();
        strncpy_s(sev.label, "SITT_DebugConsoleCommandDispatch", _TRUNCATE);
        if (!TryReadCommandString(param1, sev.payload, sizeof(sev.payload)))
            strncpy_s(sev.payload, "<unreadable>", _TRUNCATE);
        EventQueue::PushString(sev);

        Logging::Log("SITT_DebugConsoleCommandDispatch fired: \"%s\" (caller RVA 0x%zX)",
            sev.payload, (size_t)HookManager::ToRva(returnAddr));

        return Original_SITT_DebugConsoleCommandDispatch(param1);
    }

    // Reads a wide (wchar_t) message into a narrow buffer, lossy (non-ASCII
    // dropped as '?'), same SEH-guarded-inferred-memory pattern as
    // TryReadCommandString above. Added for AutosaveSystem_TriggerAutosave.
    bool TryReadWideMessage(const wchar_t* message, uint32_t length, char* outBuf, size_t outBufSize)
    {
        __try
        {
            if (!message) return false;
            size_t n = (length < outBufSize - 1) ? length : (outBufSize - 1);
            for (size_t i = 0; i < n; ++i)
            {
                wchar_t wc = message[i];
                outBuf[i] = (wc >= 0x20 && wc <= 0x7e) ? static_cast<char>(wc) : '?';
            }
            outBuf[n] = '\0';
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    // AutosaveSystem_TriggerAutosave - __cdecl, 3 args (wchar_t* message,
    // uint length, uint capacity), no `this`. Added 2026-10-01 after the game
    // crashed (nvd3dum.dll access violation, 0xc0000005) while injected and
    // the user suspected an autosave was in progress - see Addresses.hpp.
    // Logs BEFORE calling the original (not after, unlike every other hook
    // here) so the "autosave triggered" line survives on disk even if the
    // crash happens during or shortly after the real call itself.
    using TriggerAutosaveFn = void(__cdecl*)(wchar_t* message, uint32_t length, uint32_t capacity);
    TriggerAutosaveFn Original_AutosaveSystem_TriggerAutosave = nullptr;

    void __cdecl Detour_AutosaveSystem_TriggerAutosave(wchar_t* message, uint32_t length, uint32_t capacity)
    {
        void* returnAddr = _ReturnAddress();

        StringEvent sev;
        LARGE_INTEGER t;
        QueryPerformanceCounter(&t);
        sev.qpcTimestamp = static_cast<uint64_t>(t.QuadPart);
        sev.threadId = GetCurrentThreadId();
        strncpy_s(sev.label, "AutosaveSystem_TriggerAutosave", _TRUNCATE);
        if (!TryReadWideMessage(message, length, sev.payload, sizeof(sev.payload)))
            strncpy_s(sev.payload, "<unreadable>", _TRUNCATE);
        EventQueue::PushString(sev);

        Logging::Log("AutosaveSystem_TriggerAutosave fired: \"%s\" (caller RVA 0x%zX)",
            sev.payload, (size_t)HookManager::ToRva(returnAddr));

        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_AutosaveSystem_TriggerAutosave(message, length, capacity);
        QueryPerformanceCounter(&end);

        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::AutosaveSystem_TriggerAutosave;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = 0; // no `this` - free function
        EventQueue::Push(ev);
    }

    // Reads the game-state value Game_TickOneFrame switches on: this[0x2d]
    // holds a pointer, and the actual state is the dword 0xC bytes *before*
    // wherever that points (matches Ghidra's *(int*)(param_1[0x2d] - 0xc)
    // exactly). SEH-guarded for the same reason as the SITT string read - the
    // offset chain is inferred from the decompile, not independently proven.
    bool TryReadGameState(const uint8_t* self, int32_t* outState)
    {
        __try
        {
            auto basePtr = *reinterpret_cast<const uint8_t* const*>(self + 0x2d * 4);
            if (!basePtr) return false;
            *outState = *reinterpret_cast<const int32_t*>(basePtr - 0xC);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    // Game_TickOneFrame fires once per simulation tick - far too often to log
    // every call as a string event. Only logs when the state value actually
    // changes, specifically to correlate numeric state IDs with real screens
    // (play different screens, see which IDs show up around the switch).
    // Still tracked as a normal CallEvent too (cheap, consistent with every
    // other hook, and its timing doubles as a rough tick-rate measurement).
    using TickOneFrameFn = void(__thiscall*)(void* self);
    TickOneFrameFn Original_Game_TickOneFrame = nullptr;
    std::atomic<int32_t> g_lastLoggedGameState{INT32_MIN}; // sentinel: "never logged yet"

    void __fastcall Detour_Game_TickOneFrame(void* self, void* /*edx, unused*/)
    {
        void* returnAddr = _ReturnAddress();

        int32_t state = 0;
        if (TryReadGameState(reinterpret_cast<const uint8_t*>(self), &state) &&
            state != g_lastLoggedGameState.load(std::memory_order_relaxed))
        {
            int32_t previous = g_lastLoggedGameState.exchange(state, std::memory_order_relaxed);

            StringEvent sev;
            LARGE_INTEGER t;
            QueryPerformanceCounter(&t);
            sev.qpcTimestamp = static_cast<uint64_t>(t.QuadPart);
            sev.threadId = GetCurrentThreadId();
            strncpy_s(sev.label, "Game_TickOneFrame (state change)", _TRUNCATE);
            char buf[64];
            snprintf(buf, sizeof(buf), "%d -> %d", previous, state);
            strncpy_s(sev.payload, buf, _TRUNCATE);
            EventQueue::PushString(sev);

            Logging::Log("Game state changed: %d -> %d", previous, state);
        }

        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_Game_TickOneFrame(self);
        QueryPerformanceCounter(&end);

        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::Game_TickOneFrame;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // Game_TickActiveGameplay - the switch's default case, 1-arg __fastcall
    // shape like every other Tick hook. See Addresses.hpp for why this and
    // the next two hooks were added.
    using ActiveGameplayFn = void(__thiscall*)(void* self);
    ActiveGameplayFn Original_Game_TickActiveGameplay = nullptr;

    void __fastcall Detour_Game_TickActiveGameplay(void* self, void* /*edx, unused*/)
    {
        void* returnAddr = _ReturnAddress();

        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_Game_TickActiveGameplay(self);
        QueryPerformanceCounter(&end);

        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::Game_TickActiveGameplay;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // Game_TickPaused - case 3, same 1-arg __fastcall shape.
    using PausedFn = void(__thiscall*)(void* self);
    PausedFn Original_Game_TickPaused = nullptr;

    void __fastcall Detour_Game_TickPaused(void* self, void* /*edx, unused*/)
    {
        void* returnAddr = _ReturnAddress();

        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_Game_TickPaused(self);
        QueryPerformanceCounter(&end);

        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::Game_TickPaused;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // SimObjectQueue_TickPending - __stdcall, zero arguments. No `this`, no
    // params - the detour takes nothing and forwards nothing.
    using SimQueueTickFn = void(__stdcall*)();
    SimQueueTickFn Original_SimObjectQueue_TickPending = nullptr;

    void __stdcall Detour_SimObjectQueue_TickPending()
    {
        void* returnAddr = _ReturnAddress();

        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_SimObjectQueue_TickPending();
        QueryPerformanceCounter(&end);

        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::SimObjectQueue_TickPending;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = 0; // no `this` - not applicable for this function
        EventQueue::Push(ev);
    }

    // Game_TickState1 / Game_TickState4 - 1-arg __fastcall(this), same shape
    // as Game_TickActiveGameplay/Game_TickPaused. Added 2026-10-01 to resolve
    // the remaining switch cases' real screen mapping - see Addresses.hpp.
    using TickState1ArgFn = void(__thiscall*)(void* self);

    TickState1ArgFn Original_Game_TickState1 = nullptr;
    void __fastcall Detour_Game_TickState1(void* self, void* /*edx, unused*/)
    {
        void* returnAddr = _ReturnAddress();
        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_Game_TickState1(self);
        QueryPerformanceCounter(&end);
        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::Game_TickState1;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    TickState1ArgFn Original_Game_TickState4 = nullptr;
    void __fastcall Detour_Game_TickState4(void* self, void* /*edx, unused*/)
    {
        void* returnAddr = _ReturnAddress();
        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_Game_TickState4(self);
        QueryPerformanceCounter(&end);
        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::Game_TickState4;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // Game_TickState2 / Game_TickState5 - genuine 2-arg __fastcall(this, edx),
    // same shape as TMRoom::Tick - edx forwarded through unchanged.
    using TickState2ArgFn = void(__fastcall*)(void* self, void* edxParam);

    TickState2ArgFn Original_Game_TickState2 = nullptr;
    void __fastcall Detour_Game_TickState2(void* self, void* edxParam)
    {
        void* returnAddr = _ReturnAddress();
        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_Game_TickState2(self, edxParam);
        QueryPerformanceCounter(&end);
        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::Game_TickState2;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    TickState2ArgFn Original_Game_TickState5 = nullptr;
    void __fastcall Detour_Game_TickState5(void* self, void* edxParam)
    {
        void* returnAddr = _ReturnAddress();
        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_Game_TickState5(self, edxParam);
        QueryPerformanceCounter(&end);
        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::Game_TickState5;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // CStaff_Tick - 1-arg __fastcall(this), standard shape. See Addresses.hpp
    // for why this was added (character-type taxonomy via vtable capture).
    using CStaffTickFn = void(__thiscall*)(void* self);
    CStaffTickFn Original_CStaff_Tick = nullptr;
    void __fastcall Detour_CStaff_Tick(void* self, void* /*edx, unused*/)
    {
        void* returnAddr = _ReturnAddress();
        LARGE_INTEGER start, end;
        QueryPerformanceCounter(&start);
        Original_CStaff_Tick(self);
        QueryPerformanceCounter(&end);
        CallEvent ev;
        ev.qpcTimestamp = static_cast<uint64_t>(start.QuadPart);
        ev.durationTicks = static_cast<uint64_t>(end.QuadPart - start.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::CStaff_Tick;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = TryReadVtablePtr(self);
        EventQueue::Push(ev);
    }

    // TMRoom_Constructor - __fastcall(this) returning this. Logs the caller
    // (derived room constructor) and the new object's address.
    using RoomCtorFn = void*(__fastcall*)(void* self, void* edxParam);
    RoomCtorFn Original_TMRoom_Constructor = nullptr;
    void* __fastcall Detour_TMRoom_Constructor(void* self, void* edxParam)
    {
        void* returnAddr = _ReturnAddress();
        void* result = Original_TMRoom_Constructor(self, edxParam);
        CallEvent ev;
        LARGE_INTEGER t;
        QueryPerformanceCounter(&t);
        ev.qpcTimestamp = static_cast<uint64_t>(t.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::TMRoom_Constructor;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        EventQueue::Push(ev);
        Logging::Log("TMRoom_Constructor: caller RVA 0x%zX this=%p",
            (size_t)ev.callerRva, self);
        return result;
    }

    // Reads the linked object's name string for DesireUnfulfilled. SEH-guarded,
    // no C++ objects in scope. this+0x13c -> obj; obj+0x64 = char* ptr, obj+0x68 = len.
    bool TryReadUnfulfilledKey(const uint8_t* self, char* out, size_t outSize)
    {
        __try
        {
            auto obj = *reinterpret_cast<const uint8_t* const*>(self + 0x13c);
            if (!obj) return false;
            auto str = *reinterpret_cast<const char* const*>(obj + 0x64);
            auto len = *reinterpret_cast<const uint32_t*>(obj + 0x68);
            if (!str) return false;
            size_t n = len < outSize - 1 ? len : outSize - 1;
            for (size_t i = 0; i < n; ++i)
            {
                char c = str[i];
                out[i] = (c >= 0x20 && c <= 0x7e) ? c : '?';
            }
            out[n] = '\0';
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    }

    // CStar_SetJob: __thiscall(this, job, p2). Detour is __fastcall(this, edx, job, p2)
    // - same 2 stack args, callee cleans 8 bytes, identical ABI to thiscall here.
    using StarSetJobFn = void(__thiscall*)(void* self, int job, int* p2);
    StarSetJobFn Original_CStar_SetJob = nullptr;
    void __fastcall Detour_CStar_SetJob(void* self, void* /*edx*/, int job, int* p2)
    {
        void* returnAddr = _ReturnAddress();
        // Log BEFORE the call so it survives if the call misbehaves.
        Logging::Log("CStar_SetJob: this=%p newJob=%d (caller RVA 0x%zX)",
            self, job, (size_t)HookManager::ToRva(returnAddr));
        StringEvent sev;
        LARGE_INTEGER t; QueryPerformanceCounter(&t);
        sev.qpcTimestamp = static_cast<uint64_t>(t.QuadPart);
        sev.threadId = GetCurrentThreadId();
        strncpy_s(sev.label, "CStar_SetJob", _TRUNCATE);
        snprintf(sev.payload, sizeof(sev.payload), "newJob=%d this=%p", job, self);
        EventQueue::PushString(sev);
        Original_CStar_SetJob(self, job, p2);
    }

    // DesireUnfulfilled_GetDescriptionText: __thiscall(this, outText) -> outText.
    using UnfulfilledTextFn = void*(__thiscall*)(void* self, void* outText);
    UnfulfilledTextFn Original_DesireUnfulfilled_GetDescriptionText = nullptr;
    char g_lastUnfulfilledKey[64] = {};
    void* __fastcall Detour_DesireUnfulfilled_GetDescriptionText(void* self, void* /*edx*/, void* outText)
    {
        char key[64] = {};
        if (TryReadUnfulfilledKey(reinterpret_cast<const uint8_t*>(self), key, sizeof(key)) &&
            strcmp(key, g_lastUnfulfilledKey) != 0)
        {
            strncpy_s(g_lastUnfulfilledKey, key, _TRUNCATE);
            Logging::Log("DesireUnfulfilled text key: DESIRE_UNFULFILLED_%s", key);
            StringEvent sev;
            LARGE_INTEGER t; QueryPerformanceCounter(&t);
            sev.qpcTimestamp = static_cast<uint64_t>(t.QuadPart);
            sev.threadId = GetCurrentThreadId();
            strncpy_s(sev.label, "DesireUnfulfilled key", _TRUNCATE);
            strncpy_s(sev.payload, key, _TRUNCATE);
            EventQueue::PushString(sev);
        }
        return Original_DesireUnfulfilled_GetDescriptionText(self, outText);
    }

    bool TryReadJob(const uint8_t* self, int32_t* out)
    {
        __try
        {
            *out = *reinterpret_cast<const int32_t*>(self + 0x814);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    }

    // TMCharacter_AddResidentDesire: __thiscall(this=character, desire). Detour is
    // __fastcall(this, edx, desire) - 1 stack arg, 4 bytes cleaned, same as thiscall.
    using AddResidentDesireFn = void(__thiscall*)(void* self, void* desire);
    AddResidentDesireFn Original_TMCharacter_AddResidentDesire = nullptr;
    void __fastcall Detour_TMCharacter_AddResidentDesire(void* self, void* /*edx*/, void* desire)
    {
        void* returnAddr = _ReturnAddress();
        int32_t job = -1;
        TryReadJob(reinterpret_cast<const uint8_t*>(self), &job);
        uintptr_t desireVtable = TryReadVtablePtr(desire);

        CallEvent ev;
        LARGE_INTEGER t; QueryPerformanceCounter(&t);
        ev.qpcTimestamp = static_cast<uint64_t>(t.QuadPart);
        ev.threadId = GetCurrentThreadId();
        ev.functionRva = Addresses::TMCharacter_AddResidentDesire;
        ev.callerRva = HookManager::ToRva(returnAddr);
        ev.thisPtr = reinterpret_cast<uintptr_t>(self);
        ev.vtablePtr = desireVtable;
        EventQueue::Push(ev);
        Logging::Log("AddResidentDesire: character=%p job=%d desire=%p desireVtable=0x%zX (caller RVA 0x%zX)",
            self, job, desire, (size_t)desireVtable, (size_t)ev.callerRva);

        Original_TMCharacter_AddResidentDesire(self, desire);
    }


    // Reads the action-name string (CBasicString shape: char* ptr, uint32 len). SEH-guarded.
    bool TryReadStringArg(const void* str, char* out, size_t outSize)
    {
        __try
        {
            auto ptr = *reinterpret_cast<const char* const*>(str);
            auto len = *(reinterpret_cast<const uint32_t*>(str) + 1);
            if (!ptr) return false;
            size_t n = len < outSize - 1 ? len : outSize - 1;
            for (size_t i = 0; i < n; ++i)
            {
                char c = ptr[i];
                out[i] = (c >= 0x20 && c <= 0x7e) ? c : '?';
            }
            out[n] = '\0';
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    }

    bool TryReadCharClass(const uint8_t* ch, int32_t* out)
    {
        __try
        {
            *out = *reinterpret_cast<const int32_t*>(ch + 0x4c4);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    }

    // Explainer_GetActionCost: __thiscall(this, float* outCost, ch, string* action) -> bool.
    // 3 stack args (12 bytes cleaned), same as a __fastcall detour with (self, edx, a, b, c).
    // Original is called first so the result and cost can be logged. "disposeoflitter" is
    // logged on every call (capped); every other action name is logged once on first sight.
    using ExplainerCostFn = unsigned(__thiscall*)(void* self, float* outCost, void* ch, void* action);
    ExplainerCostFn Original_Explainer_GetActionCost = nullptr;
    unsigned __fastcall Detour_Explainer_GetActionCost(void* self, void* /*edx*/, float* outCost, void* ch, void* action)
    {
        void* returnAddr = _ReturnAddress();
        unsigned result = Original_Explainer_GetActionCost(self, outCost, ch, action);
        bool usable = (result & 0xFF) != 0;

        char name[48] = {};
        if (!TryReadStringArg(action, name, sizeof(name))) strcpy_s(name, "?");

        static char s_seen[64][48];
        static int s_seenCount = 0;
        static long s_litterLogs = 0;
        bool isLitter = strcmp(name, "disposeoflitter") == 0;
        bool log = false;
        if (isLitter)
        {
            log = (s_litterLogs++ < 3000);
        }
        else
        {
            bool seen = false;
            for (int i = 0; i < s_seenCount; ++i)
                if (strcmp(s_seen[i], name) == 0) { seen = true; break; }
            if (!seen && s_seenCount < 64)
            {
                strcpy_s(s_seen[s_seenCount++], name);
                log = true;
            }
        }
        if (log)
        {
            float cost = -1.0f;
            if (usable && outCost) cost = *outCost;
            int32_t cls = -1, job = -1;
            TryReadCharClass(reinterpret_cast<const uint8_t*>(ch), &cls);
            TryReadJob(reinterpret_cast<const uint8_t*>(ch), &job);
            Logging::Log("Explainer_GetActionCost: action=%s usable=%d cost=%.3f explainer=%p vtable=0x%zX char=%p class=%d job=%d (caller RVA 0x%zX)",
                name, usable ? 1 : 0, cost, self, (size_t)TryReadVtablePtr(self), ch, cls, job,
                (size_t)HookManager::ToRva(returnAddr));
        }
        return result;
    }


    // Reads the dominant desire (character+0x4C0) name/urgency. SEH-guarded, no C++ objects.
    bool TryReadTopDesire(const uint8_t* ch, char* name, size_t nameSize, float* urgency, float* urgencyAux)
    {
        __try
        {
            // After the sort the first list node (character+0x53C) is the highest-ranked desire;
            // character+0x4C0 (topDesire) proved to stay null in practice. Node: +4 next, +8 item.
            auto node = *reinterpret_cast<const uint8_t* const*>(ch + 0x53C);
            if (!node || node == ch + 0x548) return false;
            auto d = *reinterpret_cast<const uint8_t* const*>(node + 8);
            if (!d) return false;
            auto str = *reinterpret_cast<const char* const*>(d + 0x64);
            auto len = *reinterpret_cast<const uint32_t*>(d + 0x68);
            if (!str) return false;
            size_t n = len < nameSize - 1 ? len : nameSize - 1;
            for (size_t i = 0; i < n; ++i)
            {
                char c = str[i];
                name[i] = (c >= 0x20 && c <= 0x7e) ? c : '?';
            }
            name[n] = 0;
            *urgency = *reinterpret_cast<const float*>(d + 0xE0);
            *urgencyAux = *reinterpret_cast<const float*>(d + 0xE4);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    }

    // TMCharacter_SortResidentDesires: __fastcall(character). After the original runs, logs the
    // character's dominant desire only when it CHANGES (per-character last-name table), so the
    // log is a timeline of what each character is "about to do" rather than a per-frame flood.
    using SortDesiresFn = void(__fastcall*)(void* character);
    SortDesiresFn Original_TMCharacter_SortResidentDesires = nullptr;
    void __fastcall Detour_TMCharacter_SortResidentDesires(void* character)
    {
        Original_TMCharacter_SortResidentDesires(character);

        struct Slot { void* ch; char name[40]; };
        static Slot s_slots[1024];
        static long s_logged = 0;
        if (s_logged > 20000) return;

        static long s_calls = 0, s_readFail = 0;
        ++s_calls;
        if (s_calls <= 5 || (s_calls % 2000) == 0)
            Logging::Log("SortResidentDesires diag: calls=%ld readFails=%ld char=%p", s_calls, s_readFail, character);
        char name[40] = {};
        float urg = 0, aux = 0;
        if (!TryReadTopDesire(reinterpret_cast<const uint8_t*>(character), name, sizeof(name), &urg, &aux))
        {
            ++s_readFail;
            return;
        }

        Slot* slot = nullptr;
        for (auto& sl : s_slots)
        {
            if (sl.ch == character) { slot = &sl; break; }
            if (!sl.ch && !slot) slot = &sl;
        }
        if (!slot) return;
        if (slot->ch == character && strcmp(slot->name, name) == 0) return;
        slot->ch = character;
        strncpy_s(slot->name, name, _TRUNCATE);

        int32_t cls = -1, job = -1;
        TryReadCharClass(reinterpret_cast<const uint8_t*>(character), &cls);
        TryReadJob(reinterpret_cast<const uint8_t*>(character), &job);
        ++s_logged;
        Logging::Log("TopDesire: char=%p class=%d job=%d top=%s urgency=%.3f aux=%.3f",
            character, cls, job, name, urg, aux);
    }



    // True when the scene is an AI interaction scene (flag 0x40000 at scene+0x50, set by the parser for
    // names starting "ai_" / "_debug"). Used to keep movie-scene logs readable.
    bool TryIsAiScene(const uint8_t* scene)
    {
        __try
        {
            return (*reinterpret_cast<const uint32_t*>(scene + 0x50) & 0x40000) != 0;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { return true; }
    }

    // Scene_Step: __fastcall(scene). Counts calls per scene pointer and logs, once per second,
    // each scene's steps/second plus its frame counter (scene+0x8c) so the real-time length of one
    // scene step can be measured. SEH-guarded read of the frame counter.
    bool TryReadSceneFrame(const uint8_t* scene, uint32_t* out)
    {
        __try
        {
            *out = *reinterpret_cast<const uint32_t*>(scene + 0x8c);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    }

    using SceneStepFn = void(__fastcall*)(void* scene);
    SceneStepFn Original_Scene_Step = nullptr;
    void __fastcall Detour_Scene_Step(void* scene)
    {
        struct Slot { void* scene; long calls; uint32_t frame; };
        static Slot s_slots[128];
        static LARGE_INTEGER s_lastLog = {};
        static long s_logLines = 0;

        Original_Scene_Step(scene);

        LARGE_INTEGER now, freq;
        QueryPerformanceCounter(&now);
        QueryPerformanceFrequency(&freq);
        if (s_lastLog.QuadPart == 0) s_lastLog = now;

        uint32_t frame = 0;
        TryReadSceneFrame(reinterpret_cast<const uint8_t*>(scene), &frame);
        Slot* slot = nullptr;
        for (auto& sl : s_slots)
        {
            if (sl.scene == scene) { slot = &sl; break; }
            if (!sl.scene && !slot) slot = &sl;
        }
        if (slot && !TryIsAiScene(reinterpret_cast<const uint8_t*>(scene)))
        {
            slot->scene = scene;
            slot->calls++;
            slot->frame = frame;
        }

        double elapsed = double(now.QuadPart - s_lastLog.QuadPart) / double(freq.QuadPart);
        if (elapsed >= 1.0)
        {
            if (s_logLines < 200)
            {
                for (auto& sl : s_slots)
                {
                    if (sl.scene && sl.calls > 0)
                    {
                        Logging::Log("SceneStep: scene=%p steps=%ld in %.3fs (%.2f steps/s) frame=%u",
                            sl.scene, sl.calls, elapsed, sl.calls / elapsed, sl.frame);
                        ++s_logLines;
                    }
                }
            }
            for (auto& sl : s_slots) { sl.calls = 0; }
            s_lastLog = now;
        }
    }


    // ---- Scene capture hooks (movie making) ------------------------------------------------------
    bool TryCopyCString(const char* src, char* out, size_t outSize)
    {
        __try
        {
            size_t i = 0;
            for (; i + 1 < outSize; ++i)
            {
                char c = src[i];
                if (c == 0) break;
                out[i] = (c >= 0x20 && c <= 0x7e) ? c : '?';
            }
            out[i] = 0;
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    }

    // Scene_LoadFlm: cdecl(name, fallback, ids, isChild) -> Scene*. Logs name + caller RVA + result.
    using SceneLoadFlmFn = void*(__cdecl*)(const char*, int, unsigned*, unsigned char);
    SceneLoadFlmFn Original_Scene_LoadFlm = nullptr;
    void* __cdecl Detour_Scene_LoadFlm(const char* name, int fallback, unsigned* ids, unsigned char isChild)
    {
        void* returnAddr = _ReturnAddress();
        char nm[96] = {};
        if (!name || !TryCopyCString(name, nm, sizeof(nm))) strcpy_s(nm, "?");
        void* result = Original_Scene_LoadFlm(name, fallback, ids, isChild);
        static long s_n = 0;
        if (s_n++ < 3000)
            Logging::Log("Scene_LoadFlm: name=%s child=%d scene=%p (caller RVA 0x%zX)", nm, (int)isChild, result,
                (size_t)HookManager::ToRva(returnAddr));
        return result;
    }

    // Scene_SetChannel: thiscall(scene, name, float value, uint flags). Logs a (name,value) pair only when it
    // changes for that name (global dedupe table) so the log stays readable.
    using SceneSetChannelFn = unsigned(__thiscall*)(void* self, const char* name, float value, unsigned flags);
    SceneSetChannelFn Original_Scene_SetChannel = nullptr;
    unsigned __fastcall Detour_Scene_SetChannel(void* self, void* /*edx*/, const char* name, float value, unsigned flags)
    {
        struct Seen { void* scene; char name[40]; float value; bool used; };
        static Seen s_seen[1024];
        static long s_n = 0;
        unsigned result = Original_Scene_SetChannel(self, name, value, flags);
        char nm[40] = {};
        if (name && !TryIsAiScene(reinterpret_cast<const uint8_t*>(self)) && TryCopyCString(name, nm, sizeof(nm)) && nm[0] && s_n < 6000)
        {
            Seen* slot = nullptr;
            for (auto& e : s_seen)
            {
                if (e.used && e.scene == self && strcmp(e.name, nm) == 0) { slot = &e; break; }
                if (!e.used && !slot) slot = &e;
            }
            if (slot && (!slot->used || slot->value != value))
            {
                slot->scene = self;
                strncpy_s(slot->name, nm, _TRUNCATE);
                slot->value = value;
                slot->used = true;
                ++s_n;
                Logging::Log("Scene_SetChannel: scene=%p %s = %.3f", self, nm, value);
            }
        }
        return result;
    }

    // Scene_ReleaseMarker: thiscall(scene, mask). Logs each marker release.
    using SceneReleaseMarkerFn = void(__thiscall*)(void* self, unsigned mask);
    SceneReleaseMarkerFn Original_Scene_ReleaseMarker = nullptr;
    void __fastcall Detour_Scene_ReleaseMarker(void* self, void* /*edx*/, unsigned mask)
    {
        static long s_n = 0;
        uint32_t frame = 0;
        TryReadSceneFrame(reinterpret_cast<const uint8_t*>(self), &frame);
        if (!TryIsAiScene(reinterpret_cast<const uint8_t*>(self)) && s_n++ < 6000)
            Logging::Log("Scene_ReleaseMarker: scene=%p mask=0x%X frame=%u", self, mask, frame);
        Original_Scene_ReleaseMarker(self, mask);
    }

    // --- Active command trigger ---------------------------------------
    //
    // Everything above only ever reads what the game itself passes through.
    // This is different: it constructs a parameter from scratch and calls
    // SITT_DebugConsoleCommandDispatch ourselves, based on an *inferred*
    // layout (this codebase's ubiquitous CBasicString<char> shape: char* ptr,
    // uint32 length, uint32 capacity - matches the param1[1]==0 empty-string
    // check and the '.'-split seen in the real function), never independently
    // proven the way a hooked address itself is. The call is wrapped in SEH
    // so a wrong guess produces a caught failure, not a crashed game.
    //
    // File-driven rather than hotkey-driven: polls for a plain-text command
    // file next to the DLL, fires whatever's in it, deletes the file. Lets a
    // command be tried without rebuilding/reinjecting the DLL.
    struct FakeCBasicString
    {
        const char* ptr;
        uint32_t length;
        uint32_t capacity;
    };

    bool TryInvokeDebugCommand(const char* command)
    {
        char cmdBuf[256];
        strncpy_s(cmdBuf, command, _TRUNCATE);

        FakeCBasicString fakeStr;
        fakeStr.ptr = cmdBuf;
        fakeStr.length = static_cast<uint32_t>(strlen(cmdBuf));
        fakeStr.capacity = sizeof(cmdBuf);

        if (fakeStr.length == 0) return false; // dispatcher's own early-out; nothing to send

        __try
        {
            Original_SITT_DebugConsoleCommandDispatch(reinterpret_cast<uint32_t*>(&fakeStr));
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return false;
        }
    }

    std::atomic<bool> g_commandThreadShuttingDown{false};
    HANDLE g_commandThreadHandle = nullptr;

    std::wstring GetCommandFilePath()
    {
        // Anchor off an address in this DLL, same technique Session.cpp uses,
        // duplicated locally rather than shared to keep this section self-contained.
        HMODULE hSelf = nullptr;
        GetModuleHandleExW(
            GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            reinterpret_cast<LPCWSTR>(&GetCommandFilePath), &hSelf);
        wchar_t path[MAX_PATH];
        GetModuleFileNameW(hSelf, path, MAX_PATH);
        return (std::filesystem::path(path).parent_path() / L"command.txt").wstring();
    }

    DWORD WINAPI CommandTriggerThreadProc(LPVOID)
    {
        std::wstring path = GetCommandFilePath();

        while (!g_commandThreadShuttingDown.load(std::memory_order_relaxed))
        {
            Sleep(500);

            std::error_code ec;
            if (!std::filesystem::exists(path, ec) || ec) continue;

            std::string command;
            {
                std::ifstream in(path);
                std::getline(in, command);
            }
            std::filesystem::remove(path, ec); // clear immediately so it can't re-fire

            // trim trailing CR/whitespace
            while (!command.empty() && (command.back() == '\r' || command.back() == '\n' || command.back() == ' '))
                command.pop_back();
            if (command.empty()) continue;

            bool ok = TryInvokeDebugCommand(command.c_str());

            StringEvent sev;
            LARGE_INTEGER t;
            QueryPerformanceCounter(&t);
            sev.qpcTimestamp = static_cast<uint64_t>(t.QuadPart);
            sev.threadId = GetCurrentThreadId();
            strncpy_s(sev.label, ok ? "SITT_DebugConsoleCommandDispatch (triggered)"
                                     : "SITT_DebugConsoleCommandDispatch (triggered, SEH caught)", _TRUNCATE);
            strncpy_s(sev.payload, command.c_str(), _TRUNCATE);
            EventQueue::PushString(sev);

            Logging::Log("Command trigger: \"%s\" -> %s", command.c_str(), ok ? "completed" : "SEH exception caught");
        }
        return 0;
    }
}

namespace GameHooks
{
    bool InstallAll()
    {
        EventQueue::RegisterFunctionName(Addresses::WAdvMovieMaker_Tick, "WAdvMovieMaker::Tick");
        EventQueue::RegisterFunctionName(Addresses::WWindow_Tick, "WWindow::Tick");
        EventQueue::RegisterFunctionName(Addresses::WInterface_Tick, "WInterface::Tick");

        bool ok = HookManager::Register(
            "WAdvMovieMaker::Tick",
            Addresses::WAdvMovieMaker_Tick,
            reinterpret_cast<void*>(&Detour_WAdvMovieMaker_Tick),
            reinterpret_cast<void**>(&Original_WAdvMovieMaker_Tick));

        if (!ok)
            Logging::Log("GameHooks::InstallAll: failed to hook WAdvMovieMaker::Tick");

        bool ok2 = HookManager::Register(
            "WWindow::Tick",
            Addresses::WWindow_Tick,
            reinterpret_cast<void*>(&Detour_WWindow_Tick),
            reinterpret_cast<void**>(&Original_WWindow_Tick));

        if (!ok2)
            Logging::Log("GameHooks::InstallAll: failed to hook WWindow::Tick");

        bool ok3 = HookManager::Register(
            "WInterface::Tick",
            Addresses::WInterface_Tick,
            reinterpret_cast<void*>(&Detour_WInterface_Tick),
            reinterpret_cast<void**>(&Original_WInterface_Tick));

        if (!ok3)
            Logging::Log("GameHooks::InstallAll: failed to hook WInterface::Tick");

        EventQueue::RegisterFunctionName(Addresses::TMRoom_Tick, "TMRoom::Tick");
        EventQueue::RegisterFunctionName(Addresses::CStudioAI_Tick, "CStudioAI::Tick");
        EventQueue::RegisterFunctionName(Addresses::TMBaseDesire_TickShared, "TMBaseDesire::TickShared");

        bool ok4 = HookManager::Register(
            "TMRoom::Tick",
            Addresses::TMRoom_Tick,
            reinterpret_cast<void*>(&Detour_TMRoom_Tick),
            reinterpret_cast<void**>(&Original_TMRoom_Tick));

        if (!ok4)
            Logging::Log("GameHooks::InstallAll: failed to hook TMRoom::Tick");

        bool ok5 = HookManager::Register(
            "CStudioAI::Tick",
            Addresses::CStudioAI_Tick,
            reinterpret_cast<void*>(&Detour_CStudioAI_Tick),
            reinterpret_cast<void**>(&Original_CStudioAI_Tick));

        if (!ok5)
            Logging::Log("GameHooks::InstallAll: failed to hook CStudioAI::Tick");

        bool ok6 = HookManager::Register(
            "TMBaseDesire::TickShared",
            Addresses::TMBaseDesire_TickShared,
            reinterpret_cast<void*>(&Detour_TMBaseDesire_TickShared),
            reinterpret_cast<void**>(&Original_TMBaseDesire_TickShared));

        if (!ok6)
            Logging::Log("GameHooks::InstallAll: failed to hook TMBaseDesire::TickShared");

        // No RegisterFunctionName here - this hook logs via PushString/
        // strings.jsonl, not the CallEvent/functions.json call-count path,
        // so it doesn't participate in that stats table.
        bool ok7 = HookManager::Register(
            "SITT_DebugConsoleCommandDispatch",
            Addresses::SITT_DebugConsoleCommandDispatch,
            reinterpret_cast<void*>(&Detour_SITT_DebugConsoleCommandDispatch),
            reinterpret_cast<void**>(&Original_SITT_DebugConsoleCommandDispatch));

        if (!ok7)
            Logging::Log("GameHooks::InstallAll: failed to hook SITT_DebugConsoleCommandDispatch");

        EventQueue::RegisterFunctionName(Addresses::Game_TickOneFrame, "Game_TickOneFrame");

        bool ok8 = HookManager::Register(
            "Game_TickOneFrame",
            Addresses::Game_TickOneFrame,
            reinterpret_cast<void*>(&Detour_Game_TickOneFrame),
            reinterpret_cast<void**>(&Original_Game_TickOneFrame));

        if (!ok8)
            Logging::Log("GameHooks::InstallAll: failed to hook Game_TickOneFrame");

        EventQueue::RegisterFunctionName(Addresses::Game_TickActiveGameplay, "Game_TickActiveGameplay");
        EventQueue::RegisterFunctionName(Addresses::Game_TickPaused, "Game_TickPaused");
        EventQueue::RegisterFunctionName(Addresses::SimObjectQueue_TickPending, "SimObjectQueue_TickPending");

        bool ok9 = HookManager::Register(
            "Game_TickActiveGameplay",
            Addresses::Game_TickActiveGameplay,
            reinterpret_cast<void*>(&Detour_Game_TickActiveGameplay),
            reinterpret_cast<void**>(&Original_Game_TickActiveGameplay));

        if (!ok9)
            Logging::Log("GameHooks::InstallAll: failed to hook Game_TickActiveGameplay");

        bool ok10 = HookManager::Register(
            "Game_TickPaused",
            Addresses::Game_TickPaused,
            reinterpret_cast<void*>(&Detour_Game_TickPaused),
            reinterpret_cast<void**>(&Original_Game_TickPaused));

        if (!ok10)
            Logging::Log("GameHooks::InstallAll: failed to hook Game_TickPaused");

        bool ok11 = HookManager::Register(
            "SimObjectQueue_TickPending",
            Addresses::SimObjectQueue_TickPending,
            reinterpret_cast<void*>(&Detour_SimObjectQueue_TickPending),
            reinterpret_cast<void**>(&Original_SimObjectQueue_TickPending));

        if (!ok11)
            Logging::Log("GameHooks::InstallAll: failed to hook SimObjectQueue_TickPending");

        EventQueue::RegisterFunctionName(Addresses::CCastRoom_Tick, "CCastRoom::Tick");
        EventQueue::RegisterFunctionName(Addresses::CCrewRoom_Tick, "CCrewRoom::Tick");
        EventQueue::RegisterFunctionName(Addresses::CDirectorRoom_Tick, "CDirectorRoom::Tick");
        EventQueue::RegisterFunctionName(Addresses::CLeadsRoom_Tick, "CLeadsRoom::Tick");

        bool ok12 = HookManager::Register(
            "CCastRoom::Tick",
            Addresses::CCastRoom_Tick,
            reinterpret_cast<void*>(&Detour_CCastRoom_Tick),
            reinterpret_cast<void**>(&Original_CCastRoom_Tick));

        if (!ok12)
            Logging::Log("GameHooks::InstallAll: failed to hook CCastRoom::Tick");

        bool ok13 = HookManager::Register(
            "CCrewRoom::Tick",
            Addresses::CCrewRoom_Tick,
            reinterpret_cast<void*>(&Detour_CCrewRoom_Tick),
            reinterpret_cast<void**>(&Original_CCrewRoom_Tick));

        if (!ok13)
            Logging::Log("GameHooks::InstallAll: failed to hook CCrewRoom::Tick");

        bool ok14 = HookManager::Register(
            "CDirectorRoom::Tick",
            Addresses::CDirectorRoom_Tick,
            reinterpret_cast<void*>(&Detour_CDirectorRoom_Tick),
            reinterpret_cast<void**>(&Original_CDirectorRoom_Tick));

        if (!ok14)
            Logging::Log("GameHooks::InstallAll: failed to hook CDirectorRoom::Tick");

        bool ok15 = HookManager::Register(
            "CLeadsRoom::Tick",
            Addresses::CLeadsRoom_Tick,
            reinterpret_cast<void*>(&Detour_CLeadsRoom_Tick),
            reinterpret_cast<void**>(&Original_CLeadsRoom_Tick));

        if (!ok15)
            Logging::Log("GameHooks::InstallAll: failed to hook CLeadsRoom::Tick");

        // No RegisterFunctionName here - logs via PushString/strings.jsonl
        // only, same as SITT_DebugConsoleCommandDispatch.
        bool ok16 = HookManager::Register(
            "AutosaveSystem_TriggerAutosave",
            Addresses::AutosaveSystem_TriggerAutosave,
            reinterpret_cast<void*>(&Detour_AutosaveSystem_TriggerAutosave),
            reinterpret_cast<void**>(&Original_AutosaveSystem_TriggerAutosave));

        if (!ok16)
            Logging::Log("GameHooks::InstallAll: failed to hook AutosaveSystem_TriggerAutosave");

        EventQueue::RegisterFunctionName(Addresses::Game_TickState1, "Game_TickState1");
        EventQueue::RegisterFunctionName(Addresses::Game_TickState2, "Game_TickState2");
        EventQueue::RegisterFunctionName(Addresses::Game_TickState4, "Game_TickState4");
        EventQueue::RegisterFunctionName(Addresses::Game_TickState5, "Game_TickState5");

        bool ok17 = HookManager::Register(
            "Game_TickState1",
            Addresses::Game_TickState1,
            reinterpret_cast<void*>(&Detour_Game_TickState1),
            reinterpret_cast<void**>(&Original_Game_TickState1));

        if (!ok17)
            Logging::Log("GameHooks::InstallAll: failed to hook Game_TickState1");

        bool ok18 = HookManager::Register(
            "Game_TickState2",
            Addresses::Game_TickState2,
            reinterpret_cast<void*>(&Detour_Game_TickState2),
            reinterpret_cast<void**>(&Original_Game_TickState2));

        if (!ok18)
            Logging::Log("GameHooks::InstallAll: failed to hook Game_TickState2");

        bool ok19 = HookManager::Register(
            "Game_TickState4",
            Addresses::Game_TickState4,
            reinterpret_cast<void*>(&Detour_Game_TickState4),
            reinterpret_cast<void**>(&Original_Game_TickState4));

        if (!ok19)
            Logging::Log("GameHooks::InstallAll: failed to hook Game_TickState4");

        bool ok20 = HookManager::Register(
            "Game_TickState5",
            Addresses::Game_TickState5,
            reinterpret_cast<void*>(&Detour_Game_TickState5),
            reinterpret_cast<void**>(&Original_Game_TickState5));

        if (!ok20)
            Logging::Log("GameHooks::InstallAll: failed to hook Game_TickState5");

        EventQueue::RegisterFunctionName(Addresses::CStaff_Tick, "CStaff::Tick");

        bool ok21 = HookManager::Register(
            "CStaff::Tick",
            Addresses::CStaff_Tick,
            reinterpret_cast<void*>(&Detour_CStaff_Tick),
            reinterpret_cast<void**>(&Original_CStaff_Tick));

        if (!ok21)
            Logging::Log("GameHooks::InstallAll: failed to hook CStaff::Tick");

        EventQueue::RegisterFunctionName(Addresses::TMRoom_Constructor, "TMRoom::Constructor");
        bool ok22 = HookManager::Register(
            "TMRoom::Constructor",
            Addresses::TMRoom_Constructor,
            reinterpret_cast<void*>(&Detour_TMRoom_Constructor),
            reinterpret_cast<void**>(&Original_TMRoom_Constructor));
        if (!ok22)
            Logging::Log("GameHooks::InstallAll: failed to hook TMRoom::Constructor");

        bool ok23 = HookManager::Register(
            "CStar_SetJob", Addresses::CStar_SetJob,
            reinterpret_cast<void*>(&Detour_CStar_SetJob),
            reinterpret_cast<void**>(&Original_CStar_SetJob));
        if (!ok23) Logging::Log("GameHooks::InstallAll: failed to hook CStar_SetJob");

        bool ok24 = HookManager::Register(
            "DesireUnfulfilled_GetDescriptionText", Addresses::DesireUnfulfilled_GetDescriptionText,
            reinterpret_cast<void*>(&Detour_DesireUnfulfilled_GetDescriptionText),
            reinterpret_cast<void**>(&Original_DesireUnfulfilled_GetDescriptionText));
        if (!ok24) Logging::Log("GameHooks::InstallAll: failed to hook DesireUnfulfilled_GetDescriptionText");

        EventQueue::RegisterFunctionName(Addresses::TMCharacter_AddResidentDesire, "TMCharacter::AddResidentDesire");
        bool ok25 = HookManager::Register(
            "TMCharacter_AddResidentDesire", Addresses::TMCharacter_AddResidentDesire,
            reinterpret_cast<void*>(&Detour_TMCharacter_AddResidentDesire),
            reinterpret_cast<void**>(&Original_TMCharacter_AddResidentDesire));
        if (!ok25) Logging::Log("GameHooks::InstallAll: failed to hook TMCharacter_AddResidentDesire");

        EventQueue::RegisterFunctionName(Addresses::Explainer_GetActionCost, "Explainer::GetActionCost");
        bool ok26 = HookManager::Register(
            "Explainer_GetActionCost", Addresses::Explainer_GetActionCost,
            reinterpret_cast<void*>(&Detour_Explainer_GetActionCost),
            reinterpret_cast<void**>(&Original_Explainer_GetActionCost));
        if (!ok26) Logging::Log("GameHooks::InstallAll: failed to hook Explainer_GetActionCost");

        EventQueue::RegisterFunctionName(Addresses::TMCharacter_SortResidentDesires, "TMCharacter::SortResidentDesires");
        bool ok27 = HookManager::Register(
            "TMCharacter_SortResidentDesires", Addresses::TMCharacter_SortResidentDesires,
            reinterpret_cast<void*>(&Detour_TMCharacter_SortResidentDesires),
            reinterpret_cast<void**>(&Original_TMCharacter_SortResidentDesires));
        if (!ok27) Logging::Log("GameHooks::InstallAll: failed to hook TMCharacter_SortResidentDesires");

        EventQueue::RegisterFunctionName(Addresses::Scene_Step, "Scene::Step");
        bool ok28 = HookManager::Register(
            "Scene_Step", Addresses::Scene_Step,
            reinterpret_cast<void*>(&Detour_Scene_Step),
            reinterpret_cast<void**>(&Original_Scene_Step));
        if (!ok28) Logging::Log("GameHooks::InstallAll: failed to hook Scene_Step");

        bool ok29 = HookManager::Register(
            "Scene_LoadFlm", Addresses::Scene_LoadFlm,
            reinterpret_cast<void*>(&Detour_Scene_LoadFlm),
            reinterpret_cast<void**>(&Original_Scene_LoadFlm));
        if (!ok29) Logging::Log("GameHooks::InstallAll: failed to hook Scene_LoadFlm");
        bool ok30 = HookManager::Register(
            "Scene_SetChannel", Addresses::Scene_SetChannel,
            reinterpret_cast<void*>(&Detour_Scene_SetChannel),
            reinterpret_cast<void**>(&Original_Scene_SetChannel));
        if (!ok30) Logging::Log("GameHooks::InstallAll: failed to hook Scene_SetChannel");
        bool ok31 = HookManager::Register(
            "Scene_ReleaseMarker", Addresses::Scene_ReleaseMarker,
            reinterpret_cast<void*>(&Detour_Scene_ReleaseMarker),
            reinterpret_cast<void**>(&Original_Scene_ReleaseMarker));
        if (!ok31) Logging::Log("GameHooks::InstallAll: failed to hook Scene_ReleaseMarker");

        // Only start the trigger thread if the hook it depends on
        // (Original_SITT_DebugConsoleCommandDispatch) actually installed -
        // otherwise it'd be calling a null function pointer.
        if (ok7)
        {
            g_commandThreadShuttingDown.store(false, std::memory_order_relaxed);
            g_commandThreadHandle = CreateThread(nullptr, 0, CommandTriggerThreadProc, nullptr, 0, nullptr);
            Logging::Log("Command trigger armed - write a command to command.txt next to the DLL to fire it");
        }

        // Add further Register() calls here as more anchors are confirmed in
        // Ghidra and added to Addresses.hpp.
        return ok && ok2 && ok3 && ok4 && ok5 && ok6 && ok7 && ok8 && ok9 && ok10 && ok11 &&
               ok12 && ok13 && ok14 && ok15 && ok16 && ok17 && ok18 && ok19 && ok20 && ok21 && ok22 && ok23 && ok24 && ok25 && ok26 && ok27 && ok28 && ok29 && ok30 && ok31;
    }

    void Shutdown()
    {
        g_commandThreadShuttingDown.store(true, std::memory_order_relaxed);
        if (g_commandThreadHandle)
        {
            // Bounded wait only - called from DLL_PROCESS_DETACH, which holds
            // the loader lock for the whole call. 600ms covers this thread's
            // own 500ms poll interval plus margin; if it's exceeded we don't
            // keep waiting; see EventQueue::Stop() for why an unbounded wait
            // here is dangerous, not just slow.
            if (WaitForSingleObject(g_commandThreadHandle, 600) == WAIT_TIMEOUT)
                Logging::Log("GameHooks::Shutdown: command-trigger thread did not exit within 600ms");
            CloseHandle(g_commandThreadHandle);
            g_commandThreadHandle = nullptr;
        }
    }
}
