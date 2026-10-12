#include <windows.h>
#include "core/Logging.hpp"
#include "core/Session.hpp"
#include "hooks/HookManager.hpp"
#include "hooks/GameHooks.hpp"
#include "hooks/DecadeTracker.hpp"
#include "hooks/CoverageTracer.hpp"
#include "telemetry/EventQueue.hpp"
#include <atomic>

namespace
{
    std::atomic<bool> g_shuttingDown{false};
    HANDLE g_hotkeyThreadHandle = nullptr;

    // Polling GetAsyncKeyState avoids needing a message loop / window for a
    // global hotkey in this first pass (no ImGui overlay yet). F11 rolls the
    // current session over: flush events.jsonl, write functions.json +
    // summary.txt, and start a fresh session directory without unloading.
    //
    // This is also the *reliable* way to get a finished summary.txt: see the
    // DLL_PROCESS_DETACH comment below for why a normal game exit often won't.
    DWORD WINAPI HotkeyThread(LPVOID)
    {
        bool wasDown = false;
        while (!g_shuttingDown.load(std::memory_order_relaxed))
        {
            bool isDown = (GetAsyncKeyState(VK_F11) & 0x8000) != 0;
            if (isDown && !wasDown)
            {
                Logging::Log("F11 pressed: exporting current session snapshot");
                EventQueue::Stop();
                EventQueue::Start(Session::CreateSessionDir());
            }
            wasDown = isDown;
            Sleep(50);
        }
        return 0;
    }

    DWORD WINAPI InitThread(LPVOID)
    {
        Session::BuildInfo build = Session::ReadBuildInfo();
        std::wstring sessionDir = Session::CreateSessionDir();

        Logging::Initialize(sessionDir);
        Logging::Log("TheMoviesDebugger attaching. exe=%ls timestamp=0x%08X sizeOfImage=0x%X",
            build.exePath.c_str(), build.peTimeDateStamp, build.sizeOfImage);

        LARGE_INTEGER freq, start;
        QueryPerformanceFrequency(&freq);
        QueryPerformanceCounter(&start);
        Session::WriteMetadata(sessionDir, build, (uint64_t)start.QuadPart, (uint64_t)freq.QuadPart);

        if (!HookManager::Initialize())
        {
            Logging::Log("HookManager::Initialize failed, aborting attach");
            return 1;
        }

        EventQueue::Start(sessionDir);

        if (!GameHooks::InstallAll())
            Logging::Log("One or more game hooks failed to install (see log above)");

        if (!DecadeTracker::Install())
            Logging::Log("DecadeTracker did not fully install (see log above)");

        // Coverage tracer is enabled only if coverage_functions.txt exists next to the exe. It goes last so every
        // function already detoured by MinHook (first byte E9) is left alone.
        if (CoverageTracer::Install())
            Logging::Log("CoverageTracer installed (F8 re-arm, F9 marker, F10 summary)");

        g_hotkeyThreadHandle = CreateThread(nullptr, 0, HotkeyThread, nullptr, 0, nullptr);

        Logging::Log("TheMoviesDebugger ready. Press F11 at any time to export the current "
                      "session and start a fresh one.");
        // Tells "TheMoviesInjector.exe --launch" that every hook and the coverage tracer are in place, so it may
        // release the game's main thread.
        if (HANDLE ev = CreateEventW(nullptr, TRUE, FALSE, L"TheMoviesDebugger.InitDone"))
            SetEvent(ev);
        return 0;
    }
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID reserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        // Keep this handler minimal - we're inside the loader lock here.
        // All real init happens on a separate thread.
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, InitThread, nullptr, 0, nullptr);
        break;

    case DLL_PROCESS_DETACH:
        g_shuttingDown.store(true, std::memory_order_relaxed);

        // `reserved` is non-null when the process is terminating (ExitProcess),
        // in which case every thread but this one may already be gone and
        // trying to join the writer thread here can hang the whole exit.
        // Per Microsoft's DllMain guidance, skip synchronised cleanup in that
        // case - the OS reclaims everything anyway, and whatever the
        // background writer already flushed to events.jsonl is what survives
        // for this run. Only do a full, safe shutdown on an explicit
        // FreeLibrary unload. This is why F11 (not "just close the game") is
        // the reliable way to get functions.json/summary.txt written.
        if (reserved == nullptr)
        {
            // Wait for the hotkey thread to actually observe g_shuttingDown
            // and return *before* we let FreeLibrary proceed. If it's still
            // running when the loader unmaps this DLL's code, its next
            // instruction fetch is into freed memory - an access violation
            // that takes the whole (still-running) game process down with
            // it. 2s is generous - the loop only sleeps 50ms between checks.
            if (g_hotkeyThreadHandle)
            {
                // Bounded wait only - this thread polls every 50ms, so 200ms
                // is generous margin. See EventQueue::Stop()'s header comment
                // for why a longer/unbounded wait here is dangerous: we're
                // inside DLL_PROCESS_DETACH, holding the loader lock for the
                // whole call, and a stuck join here previously stalled the
                // entire game process for several minutes (not a permanent
                // deadlock, but a severe, user-visible freeze - see
                // project_the_movies_re.md, 2026-10-01).
                if (WaitForSingleObject(g_hotkeyThreadHandle, 200) == WAIT_TIMEOUT)
                    Logging::Log("WARNING: hotkey thread did not exit within 200ms of unload request");
                CloseHandle(g_hotkeyThreadHandle);
                g_hotkeyThreadHandle = nullptr;
            }

            GameHooks::Shutdown(); // stops the command-trigger poll thread, same reasoning

            // Short bounded timeout, not the default (effectively infinite)
            // used by the F11 path in HotkeyThread above - see EventQueue::Stop()'s
            // doc comment. If it times out, the final functions.json/summary.txt
            // export is skipped for this eject; periodic 250ms flushes already
            // on disk are the fallback, and F11 before ejecting (the documented
            // workflow) already covers the common case.
            EventQueue::Stop(500);
            HookManager::Shutdown();
            DecadeTracker::Shutdown();
            CoverageTracer::Shutdown();
            Logging::Log("TheMoviesDebugger detaching (explicit unload)");
            Logging::Shutdown();
        }
        break;
    }
    return TRUE;
}
