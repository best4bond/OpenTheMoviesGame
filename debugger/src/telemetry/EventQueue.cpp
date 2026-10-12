#include "EventQueue.hpp"
#include "Exporter.hpp"
#include "../core/Logging.hpp"
#include <windows.h>
#include <vector>
#include <mutex>
#include <atomic>
#include <fstream>

namespace
{
    std::mutex g_bufferMutex;
    std::vector<CallEvent> g_activeBuffer;
    constexpr size_t kMaxBufferedEvents = 200000; // bounded - see Push()

    std::mutex g_stringBufferMutex;
    std::vector<StringEvent> g_activeStringBuffer;
    constexpr size_t kMaxBufferedStringEvents = 20000; // string hooks are expected to be low-volume

    std::atomic<uint64_t> g_droppedEvents{0};
    std::atomic<uint64_t> g_droppedStringEvents{0};
    std::atomic<bool> g_running{false};

    // Raw HANDLE rather than std::thread specifically so Stop() can do a
    // BOUNDED wait (WaitForSingleObject with a timeout) instead of an
    // unconditional join - see the comment on Stop() in EventQueue.hpp for
    // why an unbounded join here is dangerous. A std::thread that's still
    // joinable when its destructor runs calls std::terminate(), so switching
    // back to std::thread later must not reintroduce a skipped join/detach.
    HANDLE g_writerThreadHandle = nullptr;

    std::wofstream g_eventsFile;
    std::wofstream g_stringsFile;
    std::wstring g_sessionDir;

    std::mutex g_statsMutex;
    Exporter::StatsMap g_stats;

    void AppendEventLine(const CallEvent& ev)
    {
        g_eventsFile << L"{\"qpc\":" << ev.qpcTimestamp
                      << L",\"dur_ticks\":" << ev.durationTicks
                      << L",\"tid\":" << ev.threadId
                      << L",\"fn_rva\":\"0x" << std::hex << ev.functionRva << std::dec << L"\""
                      << L",\"caller_rva\":\"0x" << std::hex << ev.callerRva << std::dec << L"\""
                      << L",\"this\":\"0x" << std::hex << ev.thisPtr << std::dec << L"\""
                      << L",\"vtable\":\"0x" << std::hex << ev.vtablePtr << std::dec << L"\"}\n";
    }

    // Escapes a narrow string (read from arbitrary game memory - never trust
    // it to already be clean) for embedding in a JSON string literal.
    std::wstring JsonEscapeNarrow(const char* s)
    {
        std::wstring out;
        for (const char* p = s; *p; ++p)
        {
            unsigned char c = static_cast<unsigned char>(*p);
            if (c == L'"' || c == L'\\') { out += L'\\'; out += static_cast<wchar_t>(c); }
            else if (c == L'\n') out += L"\\n";
            else if (c == L'\r') out += L"\\r";
            else if (c == L'\t') out += L"\\t";
            else if (c < 0x20 || c > 0x7e) continue; // drop non-printable/non-ASCII rather than emit raw bytes
            else out += static_cast<wchar_t>(c);
        }
        return out;
    }

    void AppendStringEventLine(const StringEvent& ev)
    {
        g_stringsFile << L"{\"qpc\":" << ev.qpcTimestamp
                       << L",\"tid\":" << ev.threadId
                       << L",\"label\":\"" << JsonEscapeNarrow(ev.label) << L"\""
                       << L",\"payload\":\"" << JsonEscapeNarrow(ev.payload) << L"\"}\n";
    }

    void DrainAndWrite(std::vector<CallEvent>& batch)
    {
        std::lock_guard<std::mutex> statsLock(g_statsMutex);
        for (const auto& ev : batch)
        {
            AppendEventLine(ev);

            auto& s = g_stats[ev.functionRva];
            s.callCount++;
            s.totalDurationTicks += ev.durationTicks;
            if (ev.durationTicks < s.minDurationTicks) s.minDurationTicks = ev.durationTicks;
            if (ev.durationTicks > s.maxDurationTicks) s.maxDurationTicks = ev.durationTicks;
            s.callerCounts[ev.callerRva]++;
        }
        g_eventsFile.flush();
    }

    void DrainAndWriteStrings(std::vector<StringEvent>& batch)
    {
        for (const auto& ev : batch)
            AppendStringEventLine(ev);
        g_stringsFile.flush();
    }

    void DrainOnce()
    {
        std::vector<CallEvent> batch;
        {
            std::lock_guard<std::mutex> lock(g_bufferMutex);
            batch.swap(g_activeBuffer);
        }
        if (!batch.empty()) DrainAndWrite(batch);

        std::vector<StringEvent> stringBatch;
        {
            std::lock_guard<std::mutex> lock(g_stringBufferMutex);
            stringBatch.swap(g_activeStringBuffer);
        }
        if (!stringBatch.empty()) DrainAndWriteStrings(stringBatch);
    }

    DWORD WINAPI WriterThreadProc(LPVOID)
    {
        while (g_running.load(std::memory_order_relaxed))
        {
            Sleep(250);
            DrainOnce();
        }

        DrainOnce(); // final drain after g_running goes false
        return 0;
    }
}

namespace EventQueue
{
    void Start(const std::wstring& sessionDir)
    {
        g_sessionDir = sessionDir;
        g_eventsFile.open(sessionDir + L"\\events.jsonl", std::ios::out);
        g_stringsFile.open(sessionDir + L"\\strings.jsonl", std::ios::out);
        g_activeBuffer.reserve(4096);
        g_droppedEvents.store(0);
        g_droppedStringEvents.store(0);
        g_running.store(true, std::memory_order_relaxed);
        g_writerThreadHandle = CreateThread(nullptr, 0, WriterThreadProc, nullptr, 0, nullptr);
        Logging::Log("EventQueue started, writing to events.jsonl / strings.jsonl");
    }

    void Stop(uint32_t waitTimeoutMs)
    {
        g_running.store(false, std::memory_order_relaxed);

        bool exited = true;
        if (g_writerThreadHandle)
        {
            exited = (WaitForSingleObject(g_writerThreadHandle, waitTimeoutMs) == WAIT_OBJECT_0);
            CloseHandle(g_writerThreadHandle); // just releases our handle ref either way, never blocks
            g_writerThreadHandle = nullptr;
        }

        if (!exited)
        {
            // Writer thread may still be mid-DrainOnce(), touching g_stats or
            // the output files - closing/exporting here would race it. Leave
            // everything alone; whatever it already flushed every 250ms is
            // on disk, just without a final functions.json/summary.txt.
            Logging::Log("EventQueue::Stop: writer thread did not exit within %u ms - skipping final export", waitTimeoutMs);
            return;
        }

        g_eventsFile.close();
        g_stringsFile.close();

        uint64_t dropped = g_droppedEvents.load();
        if (dropped > 0)
            Logging::Log("EventQueue: dropped %llu events due to contention", (unsigned long long)dropped);

        uint64_t droppedStrings = g_droppedStringEvents.load();
        if (droppedStrings > 0)
            Logging::Log("EventQueue: dropped %llu string events due to contention", (unsigned long long)droppedStrings);

        Exporter::WriteFunctionsAndSummary(g_sessionDir, g_stats, dropped);
        Logging::Log("EventQueue stopped, exported functions.json/summary.txt");
    }

    void Push(const CallEvent& ev)
    {
        std::unique_lock<std::mutex> lock(g_bufferMutex, std::try_to_lock);
        if (!lock.owns_lock() || g_activeBuffer.size() >= kMaxBufferedEvents)
        {
            g_droppedEvents.fetch_add(1, std::memory_order_relaxed);
            return;
        }
        g_activeBuffer.push_back(ev);
    }

    void PushString(const StringEvent& ev)
    {
        std::unique_lock<std::mutex> lock(g_stringBufferMutex, std::try_to_lock);
        if (!lock.owns_lock() || g_activeStringBuffer.size() >= kMaxBufferedStringEvents)
        {
            g_droppedStringEvents.fetch_add(1, std::memory_order_relaxed);
            return;
        }
        g_activeStringBuffer.push_back(ev);
    }

    void RegisterFunctionName(uintptr_t rva, const char* name)
    {
        std::lock_guard<std::mutex> lock(g_statsMutex);
        g_stats[rva].name = name;
    }
}
