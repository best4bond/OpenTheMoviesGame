#include "CoverageTracer.hpp"
#include "HookManager.hpp"
#include "core/Logging.hpp"
#include <windows.h>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>

namespace
{
    constexpr uintptr_t RVA_GameClock = 0x00a4fa4c;      // game clock in days (float)
    constexpr uintptr_t IMAGE_BASE_PREFERRED = 0x400000; // the exe has no relocations: VA = base + (VA - 0x400000)

    struct Entry
    {
        uintptr_t addr;      // absolute address in this process
        uint8_t   orig;      // original first byte
        volatile LONG hit;   // 1 once reported in the current phase
        int       phase;     // phase of the first hit (current arming)
    };

    std::vector<Entry> g_entries;       // sorted by addr
    CRITICAL_SECTION   g_cs;
    HANDLE             g_file = INVALID_HANDLE_VALUE;
    HANDLE             g_thread = nullptr;
    PVOID              g_veh = nullptr;
    volatile bool      g_stop = false;
    volatile LONG      g_seq = 0;
    volatile LONG      g_phase = 0;
    uintptr_t          g_base = 0;
    LARGE_INTEGER      g_qpcStart, g_qpcFreq;
    std::vector<int>   g_phaseHits;      // functions first-reached per phase

    unsigned long long NowUs()
    {
        LARGE_INTEGER n; QueryPerformanceCounter(&n);
        return (unsigned long long)((n.QuadPart - g_qpcStart.QuadPart) * 1000000ull / g_qpcFreq.QuadPart);
    }

    void WriteLine(const char* s, int n)
    {
        if (g_file == INVALID_HANDLE_VALUE) return;
        DWORD w = 0;
        WriteFile(g_file, s, (DWORD)n, &w, nullptr);
    }

    int FindEntry(uintptr_t a)
    {
        size_t lo = 0, hi = g_entries.size();
        while (lo < hi)
        {
            size_t mid = (lo + hi) / 2;
            if (g_entries[mid].addr < a) lo = mid + 1; else hi = mid;
        }
        return (lo < g_entries.size() && g_entries[lo].addr == a) ? (int)lo : -1;
    }

    LONG CALLBACK Veh(PEXCEPTION_POINTERS ep)
    {
        if (ep->ExceptionRecord->ExceptionCode != EXCEPTION_BREAKPOINT) return EXCEPTION_CONTINUE_SEARCH;
        uintptr_t a = (uintptr_t)ep->ExceptionRecord->ExceptionAddress;
        if (a < g_base) return EXCEPTION_CONTINUE_SEARCH;
        int idx = FindEntry(a);
        if (idx < 0) return EXCEPTION_CONTINUE_SEARCH;

        Entry& e = g_entries[(size_t)idx];
        *reinterpret_cast<volatile uint8_t*>(a) = e.orig;           // disarm first so any racing thread just proceeds
        FlushInstructionCache(GetCurrentProcess(), reinterpret_cast<void*>(a), 1);
        if (InterlockedCompareExchange(&e.hit, 1, 0) == 0)
        {
            LONG seq = InterlockedIncrement(&g_seq);
            LONG ph = g_phase;
            e.phase = ph;
            char buf[96];
            int n = sprintf_s(buf, "%ld,%llu,%lu,%ld,%08X\n", seq, NowUs(), GetCurrentThreadId(), ph,
                              (unsigned)(a - g_base));
            EnterCriticalSection(&g_cs);
            WriteLine(buf, n);
            if ((size_t)ph < g_phaseHits.size()) g_phaseHits[(size_t)ph]++;
            LeaveCriticalSection(&g_cs);
        }
        ep->ContextRecord->Eip = (DWORD)a;                          // re-execute the restored instruction
        return EXCEPTION_CONTINUE_EXECUTION;
    }

    void Marker(const char* label)
    {
        LONG ph = InterlockedIncrement(&g_phase);
        EnterCriticalSection(&g_cs);
        if ((size_t)ph >= g_phaseHits.size()) g_phaseHits.resize((size_t)ph + 1, 0);
        char buf[160];
        int n = sprintf_s(buf, "#MARK,%ld,%llu,%ld,%s\n", g_seq, NowUs(), ph, label);
        WriteLine(buf, n);
        LeaveCriticalSection(&g_cs);
    }

    void Arm(Entry& e)
    {
        // only re-arm if the byte is still what we saved (never write over a MinHook patch or a changed byte)
        if (*reinterpret_cast<volatile uint8_t*>(e.addr) != e.orig) return;
        *reinterpret_cast<volatile uint8_t*>(e.addr) = 0xCC;
        e.hit = 0;
    }

    void RearmAll()
    {
        for (auto& e : g_entries) if (e.hit) Arm(e);
        FlushInstructionCache(GetCurrentProcess(), nullptr, 0);
    }

    void WriteSummary()
    {
        wchar_t path[MAX_PATH];
        GetModuleFileNameW(nullptr, path, MAX_PATH);
        wchar_t* slash = wcsrchr(path, L'\\');
        if (slash) *(slash + 1) = 0;
        wcscat_s(path, L"coverage_summary.txt");
        FILE* f = nullptr;
        if (_wfopen_s(&f, path, L"w") != 0 || !f) return;
        long total = 0, hit = 0;
        for (auto& e : g_entries) { ++total; if (e.hit) ++hit; }
        fprintf(f, "armed functions: %ld\nreached in current arming: %ld\nphases: %ld\n", total, hit, (long)g_phase + 1);
        EnterCriticalSection(&g_cs);
        for (size_t i = 0; i < g_phaseHits.size(); ++i) fprintf(f, "phase %zu: %d functions\n", i, g_phaseHits[i]);
        LeaveCriticalSection(&g_cs);
        fclose(f);
    }

    DWORD WINAPI HelperThread(LPVOID)
    {
        bool d8 = false, d9 = false, d10 = false, clockSeen = false;
        long lastMonth = -1;
        while (!g_stop)
        {
            bool k8 = (GetAsyncKeyState(VK_F8) & 0x8000) != 0;
            bool k9 = (GetAsyncKeyState(VK_F9) & 0x8000) != 0;
            bool k10 = (GetAsyncKeyState(VK_F10) & 0x8000) != 0;
            if (k8 && !d8) { RearmAll(); Marker("F8_REARM"); }
            if (k9 && !d9) Marker("F9_MARK");
            if (k10 && !d10) WriteSummary();
            d8 = k8; d9 = k9; d10 = k10;

            float days = 0.f;
            __try { days = *reinterpret_cast<const float*>(g_base + RVA_GameClock); } __except (EXCEPTION_EXECUTE_HANDLER) {}
            if (!clockSeen && days > 0.f) { clockSeen = true; Marker("GAME_CLOCK_STARTED"); }
            if (clockSeen && days > 0.f)
            {
                long month = (long)(days / 30.4375f);
                if (month != lastMonth) { if (lastMonth >= 0) { char l[48]; sprintf_s(l, "MONTH_%ld", month); Marker(l); } lastMonth = month; }
            }
            Sleep(50);
        }
        return 0;
    }
}

namespace CoverageTracer
{
    bool Install()
    {
        g_base = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
        wchar_t dir[MAX_PATH];
        GetModuleFileNameW(nullptr, dir, MAX_PATH);
        wchar_t* slash = wcsrchr(dir, L'\\');
        if (slash) *(slash + 1) = 0;

        wchar_t listPath[MAX_PATH]; wcscpy_s(listPath, dir); wcscat_s(listPath, L"coverage_functions.txt");
        FILE* f = nullptr;
        if (_wfopen_s(&f, listPath, L"r") != 0 || !f) return false;   // file absent: tracer disabled

        std::vector<uintptr_t> addrs;
        char line[256];
        while (fgets(line, sizeof(line), f))
        {
            unsigned long va = strtoul(line, nullptr, 16);
            if (va >= IMAGE_BASE_PREFERRED && va < 0x01100000) addrs.push_back(g_base + (va - IMAGE_BASE_PREFERRED));
        }
        fclose(f);
        std::sort(addrs.begin(), addrs.end());
        addrs.erase(std::unique(addrs.begin(), addrs.end()), addrs.end());

        InitializeCriticalSection(&g_cs);
        QueryPerformanceFrequency(&g_qpcFreq);
        QueryPerformanceCounter(&g_qpcStart);

        wchar_t outPath[MAX_PATH]; wcscpy_s(outPath, dir); wcscat_s(outPath, L"coverage_log.csv");
        g_file = CreateFileW(outPath, FILE_APPEND_DATA, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, CREATE_ALWAYS,
                             FILE_ATTRIBUTE_NORMAL, nullptr);
        if (g_file == INVALID_HANDLE_VALUE) { Logging::Log("CoverageTracer: cannot open coverage_log.csv"); return false; }
        { const char* h = "seq,microseconds,thread,phase,rva\n"; WriteLine(h, (int)strlen(h)); }
        g_phaseHits.assign(1, 0);

        // .text is read-execute; make the whole range writable once (keeps RWX for the run)
        MEMORY_BASIC_INFORMATION mbi;
        size_t patched = 0, skippedHook = 0, skippedCC = 0;
        uintptr_t textLo = g_base + 0x1000, textHi = g_base + (0x00d16000 - IMAGE_BASE_PREFERRED);
        DWORD oldProt = 0;
        VirtualProtect(reinterpret_cast<void*>(textLo), textHi - textLo, PAGE_EXECUTE_READWRITE, &oldProt);

        g_entries.reserve(addrs.size());
        for (uintptr_t a : addrs)
        {
            if (a < textLo || a >= textHi) continue;
            if (!VirtualQuery(reinterpret_cast<void*>(a), &mbi, sizeof(mbi))) continue;
            uint8_t b = *reinterpret_cast<volatile uint8_t*>(a);
            if (b == 0xE9) { ++skippedHook; continue; }   // MinHook detour (or a real jmp thunk): leave alone
            if (b == 0xCC) { ++skippedCC; continue; }
            Entry e{a, b, 0, -1};
            g_entries.push_back(e);
        }
        for (auto& e : g_entries) { *reinterpret_cast<volatile uint8_t*>(e.addr) = 0xCC; ++patched; }
        FlushInstructionCache(GetCurrentProcess(), nullptr, 0);

        g_veh = AddVectoredExceptionHandler(1, Veh);
        g_thread = CreateThread(nullptr, 0, HelperThread, nullptr, 0, nullptr);
        Logging::Log("CoverageTracer: armed %zu of %zu listed functions (%zu detoured/jmp skipped, %zu int3 skipped)",
                     patched, addrs.size(), skippedHook, skippedCC);
        return true;
    }

    void Shutdown()
    {
        g_stop = true;
        if (g_thread) { WaitForSingleObject(g_thread, 1000); CloseHandle(g_thread); g_thread = nullptr; }
        // disarm everything that is still armed before the DLL goes away
        for (auto& e : g_entries) if (!e.hit && *reinterpret_cast<volatile uint8_t*>(e.addr) == 0xCC)
            *reinterpret_cast<volatile uint8_t*>(e.addr) = e.orig;
        FlushInstructionCache(GetCurrentProcess(), nullptr, 0);
        if (g_veh) { RemoveVectoredExceptionHandler(g_veh); g_veh = nullptr; }
        if (g_file != INVALID_HANDLE_VALUE) { WriteSummary(); CloseHandle(g_file); g_file = INVALID_HANDLE_VALUE; }
    }
}
