#include "Logging.hpp"
#include <windows.h>
#include <cstdio>
#include <cstdarg>
#include <mutex>

namespace
{
    FILE* g_logFile = nullptr;
    std::mutex g_logMutex;
}

namespace Logging
{
    void Initialize(const std::wstring& sessionDir)
    {
        std::lock_guard<std::mutex> lock(g_logMutex);
        // Plain byte mode, not "ccs=UTF-8" - Log() below writes with narrow
        // fprintf, and mixing a wide/UTF-8-oriented stream with byte-oriented
        // I/O is undefined behaviour in the CRT. It manifested as a hard
        // fast-fail crash (0xc0000409) inside ucrtbase.dll on the very first
        // write, which took the whole game process down with it.
        std::wstring path = sessionDir + L"\\debug.log";
        _wfopen_s(&g_logFile, path.c_str(), L"w");
    }

    void Shutdown()
    {
        std::lock_guard<std::mutex> lock(g_logMutex);
        if (g_logFile)
        {
            fclose(g_logFile);
            g_logFile = nullptr;
        }
    }

    void Log(const char* fmt, ...)
    {
        char buffer[2048];
        va_list args;
        va_start(args, fmt);
        vsnprintf(buffer, sizeof(buffer), fmt, args);
        va_end(args);

        SYSTEMTIME st;
        GetLocalTime(&st);

        std::lock_guard<std::mutex> lock(g_logMutex);
        if (g_logFile)
        {
            fprintf(g_logFile, "[%02u:%02u:%02u.%03u][tid %lu] %s\n",
                st.wHour, st.wMinute, st.wSecond, st.wMilliseconds,
                GetCurrentThreadId(), buffer);
            fflush(g_logFile);
        }
#ifdef _DEBUG
        OutputDebugStringA(buffer);
        OutputDebugStringA("\n");
#endif
    }
}
