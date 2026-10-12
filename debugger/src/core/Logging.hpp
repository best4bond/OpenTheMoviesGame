#pragma once
#include <string>

// Plain-text log, separate from the structured JSONL telemetry in EventQueue.
// This is for "did the DLL attach, did the hook install, what broke" - not
// for anything that needs to be machine-parsed later.
namespace Logging
{
    // Must be called from the init thread, never from DllMain (loader lock).
    void Initialize(const std::wstring& sessionDir);
    void Shutdown();

    // printf-style. Thread-safe. Prepends a timestamp and thread id.
    void Log(const char* fmt, ...);
}
