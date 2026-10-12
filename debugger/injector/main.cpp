// Minimal CreateRemoteThread+LoadLibraryW injector for TheMoviesDebugger.dll.
// Chosen over a DLL-proxy (hijacking e.g. dinput8.dll) for the first pass
// because it needs no export forwarding to get right before anything can be
// tested - just a plain console tool you run after (or while waiting for)
// MoviesSE.exe to start.
#include <windows.h>
#include <tlhelp32.h>
#include <string>
#include <cstdio>
#include <filesystem>

namespace fs = std::filesystem;

namespace
{
    DWORD FindProcessId(const std::wstring& exeName)
    {
        HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if (snap == INVALID_HANDLE_VALUE) return 0;

        PROCESSENTRY32W entry{};
        entry.dwSize = sizeof(entry);
        DWORD pid = 0;
        if (Process32FirstW(snap, &entry))
        {
            do
            {
                if (_wcsicmp(entry.szExeFile, exeName.c_str()) == 0)
                {
                    pid = entry.th32ProcessID;
                    break;
                }
            } while (Process32NextW(snap, &entry));
        }
        CloseHandle(snap);
        return pid;
    }

    bool InjectDll(DWORD pid, const std::wstring& dllPath)
    {
        HANDLE process = OpenProcess(
            PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION |
            PROCESS_VM_OPERATION | PROCESS_VM_WRITE | PROCESS_VM_READ,
            FALSE, pid);
        if (!process)
        {
            wprintf(L"OpenProcess failed (%lu). Try running the injector as administrator.\n", GetLastError());
            return false;
        }

        size_t bytes = (dllPath.size() + 1) * sizeof(wchar_t);
        LPVOID remoteMem = VirtualAllocEx(process, nullptr, bytes, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
        if (!remoteMem)
        {
            wprintf(L"VirtualAllocEx failed (%lu)\n", GetLastError());
            CloseHandle(process);
            return false;
        }

        if (!WriteProcessMemory(process, remoteMem, dllPath.c_str(), bytes, nullptr))
        {
            wprintf(L"WriteProcessMemory failed (%lu)\n", GetLastError());
            VirtualFreeEx(process, remoteMem, 0, MEM_RELEASE);
            CloseHandle(process);
            return false;
        }

        auto loadLibraryAddr = reinterpret_cast<LPTHREAD_START_ROUTINE>(
            GetProcAddress(GetModuleHandleW(L"kernel32.dll"), "LoadLibraryW"));

        HANDLE thread = CreateRemoteThread(process, nullptr, 0, loadLibraryAddr, remoteMem, 0, nullptr);
        if (!thread)
        {
            wprintf(L"CreateRemoteThread failed (%lu)\n", GetLastError());
            VirtualFreeEx(process, remoteMem, 0, MEM_RELEASE);
            CloseHandle(process);
            return false;
        }

        WaitForSingleObject(thread, INFINITE);

        DWORD exitCode = 0; // LoadLibraryW's return value: the loaded module's HMODULE, or 0 on failure
        GetExitCodeThread(thread, &exitCode);

        CloseHandle(thread);
        VirtualFreeEx(process, remoteMem, 0, MEM_RELEASE);
        CloseHandle(process);

        if (exitCode == 0)
        {
            wprintf(L"LoadLibraryW returned NULL inside the target process - the DLL failed to load.\n"
                    L"Check that TheMoviesDebugger.dll (and MinHook's DLL, if it wasn't statically\n"
                    L"linked) are both x86/Win32 builds, and are somewhere the loader can find them\n"
                    L"(next to MoviesSE.exe is simplest).\n");
            return false;
        }

        wprintf(L"Injected successfully. Module handle in target process: 0x%p\n", (void*)(uintptr_t)exitCode);
        return true;
    }

    // Finds an already-loaded module by name (not path) inside the target
    // process, e.g. "TheMoviesDebugger.dll".
    HMODULE FindRemoteModule(DWORD pid, const std::wstring& moduleName)
    {
        HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, pid);
        if (snap == INVALID_HANDLE_VALUE) return nullptr;

        MODULEENTRY32W entry{};
        entry.dwSize = sizeof(entry);
        HMODULE found = nullptr;
        if (Module32FirstW(snap, &entry))
        {
            do
            {
                if (_wcsicmp(entry.szModule, moduleName.c_str()) == 0)
                {
                    found = entry.hModule;
                    break;
                }
            } while (Module32NextW(snap, &entry));
        }
        CloseHandle(snap);
        return found;
    }

    // The eject counterpart to InjectDll: a remote thread that calls
    // FreeLibrary(remoteModule) inside the target process. Unlike LoadLibraryW,
    // FreeLibrary takes the module handle directly as its one parameter, so no
    // VirtualAllocEx/WriteProcessMemory dance is needed - the handle value is
    // already meaningful in the target process's own address space.
    //
    // This is a genuine, synchronised FreeLibrary (lpvReserved == NULL in the
    // DLL's DllMain), not a process-exit unload, so TheMoviesDebugger.dll's own
    // DLL_PROCESS_DETACH handler does its full clean shutdown: hooks removed,
    // background writer thread flushed, functions.json/summary.txt written.
    bool EjectDll(DWORD pid, HMODULE remoteModule)
    {
        HANDLE process = OpenProcess(
            PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_OPERATION,
            FALSE, pid);
        if (!process)
        {
            wprintf(L"OpenProcess failed (%lu). Try running the injector as administrator.\n", GetLastError());
            return false;
        }

        auto freeLibraryAddr = reinterpret_cast<LPTHREAD_START_ROUTINE>(
            GetProcAddress(GetModuleHandleW(L"kernel32.dll"), "FreeLibrary"));

        HANDLE thread = CreateRemoteThread(process, nullptr, 0, freeLibraryAddr, remoteModule, 0, nullptr);
        if (!thread)
        {
            wprintf(L"CreateRemoteThread failed (%lu)\n", GetLastError());
            CloseHandle(process);
            return false;
        }

        // The DLL's own DLL_PROCESS_DETACH runs synchronously on this remote
        // thread (including waiting for its hotkey thread and flushing the
        // event queue), so give it real time rather than a short timeout.
        WaitForSingleObject(thread, INFINITE);

        DWORD exitCode = 0; // FreeLibrary's BOOL return
        GetExitCodeThread(thread, &exitCode);

        CloseHandle(thread);
        CloseHandle(process);

        if (exitCode == 0)
        {
            wprintf(L"FreeLibrary returned FALSE inside the target process - unload failed.\n");
            return false;
        }

        wprintf(L"Ejected successfully. The game process is still running; you can now rebuild "
                L"and re-run the injector.\n");
        return true;
    }
}

namespace
{
    // Reads ImageBase + AddressOfEntryPoint from the exe on disk (the game has no relocations, so this is where
    // the entry point will be in memory).
    bool ReadEntryPoint(const std::wstring& exePath, uintptr_t* outEntry)
    {
        HANDLE f = CreateFileW(exePath.c_str(), GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 0, nullptr);
        if (f == INVALID_HANDLE_VALUE) return false;
        BYTE hdr[1024]; DWORD got = 0;
        bool ok = ReadFile(f, hdr, sizeof(hdr), &got, nullptr) && got >= 0x200;
        CloseHandle(f);
        if (!ok) return false;
        DWORD pe = *reinterpret_cast<DWORD*>(hdr + 0x3c);
        if (pe + 0x60 > sizeof(hdr)) return false;
        DWORD entryRva = *reinterpret_cast<DWORD*>(hdr + pe + 24 + 16);
        DWORD imageBase = *reinterpret_cast<DWORD*>(hdr + pe + 24 + 28);
        *outEntry = (uintptr_t)imageBase + entryRva;
        return true;
    }

    // Starts the game suspended, lets the loader finish (imports resolved), parks the main thread on a "jmp $" at the
    // entry point, injects the DLL, waits until the DLL says its hooks / coverage tracer are in place, restores the
    // entry bytes and releases the main thread. This is how the coverage tracer sees the game's whole start-up.
    int LaunchAndInject(const std::wstring& exePath, const std::wstring& dllPath)
    {
        uintptr_t entry = 0;
        if (!ReadEntryPoint(exePath, &entry)) { wprintf(L"Cannot read the PE header of %ls\n", exePath.c_str()); return 1; }

        std::wstring dir = fs::path(exePath).parent_path().wstring();
        STARTUPINFOW si{}; si.cb = sizeof(si);
        PROCESS_INFORMATION pi{};
        std::wstring cmd = L"\"" + exePath + L"\"";
        if (!CreateProcessW(exePath.c_str(), cmd.data(), nullptr, nullptr, FALSE, CREATE_SUSPENDED, nullptr, dir.c_str(), &si, &pi))
        {
            wprintf(L"CreateProcess failed (%lu)\n", GetLastError());
            return 1;
        }
        wprintf(L"Started pid %lu suspended; entry point 0x%08X\n", pi.dwProcessId, (unsigned)entry);

        BYTE orig[2] = {};
        SIZE_T n = 0;
        DWORD oldProt = 0;
        VirtualProtectEx(pi.hProcess, (LPVOID)entry, 2, PAGE_EXECUTE_READWRITE, &oldProt);
        if (!ReadProcessMemory(pi.hProcess, (LPCVOID)entry, orig, 2, &n) || n != 2)
        { wprintf(L"ReadProcessMemory failed (%lu)\n", GetLastError()); TerminateProcess(pi.hProcess, 1); return 1; }
        const BYTE spin[2] = {0xEB, 0xFE};
        WriteProcessMemory(pi.hProcess, (LPVOID)entry, spin, 2, &n);
        FlushInstructionCache(pi.hProcess, (LPCVOID)entry, 2);

        ResumeThread(pi.hThread);
        bool parked = false;
        for (int i = 0; i < 4000 && !parked; ++i)
        {
            Sleep(5);
            SuspendThread(pi.hThread);
            CONTEXT ctx{}; ctx.ContextFlags = CONTEXT_CONTROL;
            if (GetThreadContext(pi.hThread, &ctx) && ctx.Eip == (DWORD)entry) parked = true;
            else ResumeThread(pi.hThread);
        }
        if (!parked) { wprintf(L"The main thread never reached the entry point.\n"); TerminateProcess(pi.hProcess, 1); return 1; }
        wprintf(L"Main thread parked at the entry point; injecting...\n");

        if (!InjectDll(pi.dwProcessId, dllPath)) { TerminateProcess(pi.hProcess, 1); return 1; }

        bool ready = false;
        for (int i = 0; i < 2400 && !ready; ++i) // up to 120 s (arming ~35k functions takes a moment)
        {
            HANDLE ev = OpenEventW(SYNCHRONIZE, FALSE, L"TheMoviesDebugger.InitDone");
            if (ev) { ready = WaitForSingleObject(ev, 0) == WAIT_OBJECT_0; CloseHandle(ev); }
            if (!ready) Sleep(50);
        }
        wprintf(ready ? L"DLL initialisation finished.\n" : L"Timed out waiting for the DLL; releasing the game anyway.\n");

        WriteProcessMemory(pi.hProcess, (LPVOID)entry, orig, 2, &n);
        FlushInstructionCache(pi.hProcess, (LPCVOID)entry, 2);
        ResumeThread(pi.hThread);
        CloseHandle(pi.hThread);
        CloseHandle(pi.hProcess);
        wprintf(L"Game released.\n");
        return 0;
    }
}

int wmain(int argc, wchar_t* argv[])
{
    if (argc >= 4 && (std::wstring(argv[1]) == L"--launch"))
    {
        std::wstring exePath = fs::absolute(argv[2]).wstring();
        std::wstring dllPath = fs::absolute(argv[3]).wstring();
        if (!fs::exists(exePath)) { wprintf(L"Exe not found: %ls\n", exePath.c_str()); return 1; }
        if (!fs::exists(dllPath)) { wprintf(L"DLL not found: %ls\n", dllPath.c_str()); return 1; }
        return LaunchAndInject(exePath, dllPath);
    }
    if (argc >= 2 && (std::wstring(argv[1]) == L"--eject"))
    {
        std::wstring moduleName = (argc >= 3) ? argv[2] : L"TheMoviesDebugger.dll";
        std::wstring processName = (argc >= 4) ? argv[3] : L"MoviesSE.exe";

        DWORD pid = FindProcessId(processName);
        if (pid == 0)
        {
            wprintf(L"%ls is not running.\n", processName.c_str());
            return 1;
        }

        HMODULE remoteModule = FindRemoteModule(pid, moduleName);
        if (!remoteModule)
        {
            wprintf(L"%ls is not currently loaded in %ls (pid %lu) - nothing to eject.\n",
                moduleName.c_str(), processName.c_str(), pid);
            return 1;
        }

        wprintf(L"Found %ls loaded at 0x%p in pid %lu. Ejecting...\n",
            moduleName.c_str(), (void*)remoteModule, pid);
        return EjectDll(pid, remoteModule) ? 0 : 1;
    }

    if (argc < 2)
    {
        wprintf(L"Usage:\n");
        wprintf(L"  Inject: TheMoviesInjector.exe <path to TheMoviesDebugger.dll> [process exe name]\n");
        wprintf(L"  Eject:  TheMoviesInjector.exe --eject [dll module name] [process exe name]\n");
        wprintf(L"  Defaults: process=MoviesSE.exe, eject module=TheMoviesDebugger.dll\n");
        return 1;
    }

    std::wstring dllPath = fs::absolute(argv[1]).wstring();
    std::wstring processName = (argc >= 3) ? argv[2] : L"MoviesSE.exe";

    if (!fs::exists(dllPath))
    {
        wprintf(L"DLL not found: %ls\n", dllPath.c_str());
        return 1;
    }

    wprintf(L"Waiting for %ls (up to 60s)...\n", processName.c_str());
    DWORD pid = 0;
    for (int i = 0; i < 120 && pid == 0; ++i)
    {
        pid = FindProcessId(processName);
        if (pid == 0) Sleep(500);
    }

    if (pid == 0)
    {
        wprintf(L"Timed out waiting for %ls to start.\n", processName.c_str());
        return 1;
    }

    wprintf(L"Found %ls, pid %lu. Injecting %ls...\n", processName.c_str(), pid, dllPath.c_str());
    return InjectDll(pid, dllPath) ? 0 : 1;
}
