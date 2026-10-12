#pragma once
#include "Event.hpp"
#include <string>
#include <cstdint>

// Hot-path-safe event intake. Push() never blocks longer than a try_lock -
// if the buffer is momentarily contended it drops the event and counts the
// drop, rather than stalling whatever game function called into the hook.
// A background thread drains the buffer every ~250ms, writes it to
// events.jsonl, and folds it into the running per-function stats used for
// functions.json / summary.txt at Stop().
namespace EventQueue
{
    void Start(const std::wstring& sessionDir);

    // Flushes remaining events and writes functions.json + summary.txt, by
    // waiting up to waitTimeoutMs for the writer thread to finish its current
    // cycle and exit. Default (kWaitInfinite) is for the normal F11 path,
    // called from a plain background thread with no special constraints.
    //
    // DLL_PROCESS_DETACH's explicit-unload path must pass a SHORT bounded
    // value instead: FreeLibrary calls DllMain while holding the Windows
    // loader lock, and if the writer thread is ever blocked on anything that
    // itself needs that lock, an unconditional/unbounded join here can stall
    // the whole game process for minutes (observed firsthand - see
    // project_the_movies_re.md, 2026-10-01). If the wait times out, the final
    // export is skipped entirely (the writer thread may still be touching
    // g_stats/the output files) rather than racing it - periodic 250ms
    // flushes already on disk are the fallback.
    constexpr uint32_t kWaitInfinite = 0xFFFFFFFFu;
    void Stop(uint32_t waitTimeoutMs = kWaitInfinite);

    void Push(const CallEvent& ev);

    // Same try_lock/drop-on-contention contract as Push(), separate buffer -
    // written to strings.jsonl alongside events.jsonl/functions.json.
    void PushString(const StringEvent& ev);

    void RegisterFunctionName(uintptr_t rva, const char* name);
}
