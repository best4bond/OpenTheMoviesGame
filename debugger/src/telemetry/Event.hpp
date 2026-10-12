#pragma once
#include <cstdint>

// One observed call of a hooked function. Kept as a flat POD so pushing one
// onto the queue from inside a hot hook is cheap - no allocation, no string
// formatting on the hook's own thread.
struct CallEvent
{
    uint64_t qpcTimestamp = 0;   // QueryPerformanceCounter value when the call started
    uint64_t durationTicks = 0;  // QPC ticks spent inside the original function
    uint32_t threadId = 0;
    uintptr_t functionRva = 0;
    uintptr_t callerRva = 0;     // 0 = unresolved (outside the game module)
    uintptr_t thisPtr = 0;       // 0 if not applicable
    uintptr_t vtablePtr = 0;     // *(void**)thisPtr, i.e. the object's vtable address -
                                  // 0 if thisPtr is 0 or the read failed (SEH-guarded at
                                  // the call site, see GameHooks.cpp's TryReadVtablePtr).
                                  // Lets a later offline pass resolve every observed
                                  // caller's CONCRETE class via RTTI in bulk (read the COL
                                  // pointer at vtablePtr-4), rather than hand-verifying one
                                  // caller at a time - see tools/ResolveVtables.ps1.
};

// One observed string payload from a hook that captures more than a bare
// call (e.g. a debug/script command string). Fixed-size and POD for the same
// reason as CallEvent - cheap to push from a hot path, no heap allocation.
// Payload is truncated, not heap-allocated, if the source string is longer.
struct StringEvent
{
    uint64_t qpcTimestamp = 0;
    uint32_t threadId = 0;
    char label[32] = {};    // which hook/source this came from, e.g. "SITT_DebugConsoleCommandDispatch"
    char payload[192] = {}; // the captured string itself
};
