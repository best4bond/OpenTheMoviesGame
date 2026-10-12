#include "Exporter.hpp"
#include <windows.h>
#include <fstream>
#include <vector>
#include <algorithm>

namespace
{
    double TicksToMicros(uint64_t ticks, double freq)
    {
        if (freq <= 0.0) return 0.0;
        return (double)ticks * 1000000.0 / freq;
    }

    std::vector<std::pair<uintptr_t, uint64_t>> SortedCallers(const Exporter::FunctionStats& s)
    {
        std::vector<std::pair<uintptr_t, uint64_t>> callers(s.callerCounts.begin(), s.callerCounts.end());
        std::sort(callers.begin(), callers.end(), [](const auto& a, const auto& b) { return a.second > b.second; });
        return callers;
    }
}

namespace Exporter
{
    void WriteFunctionsAndSummary(const std::wstring& sessionDir, const StatsMap& stats, uint64_t droppedEvents)
    {
        LARGE_INTEGER freqLi;
        QueryPerformanceFrequency(&freqLi);
        double freq = (double)freqLi.QuadPart;

        // functions.json
        {
            std::wofstream out(sessionDir + L"\\functions.json");
            out << L"{\n  \"functions\": [\n";
            bool first = true;
            for (const auto& [rva, s] : stats)
            {
                if (!first) out << L",\n";
                first = false;

                double avgMicros = s.callCount ? TicksToMicros(s.totalDurationTicks, freq) / (double)s.callCount : 0.0;
                double minMicros = TicksToMicros(s.minDurationTicks == UINT64_MAX ? 0 : s.minDurationTicks, freq);
                double maxMicros = TicksToMicros(s.maxDurationTicks, freq);

                out << L"    {\n";
                out << L"      \"rva\": \"0x" << std::hex << rva << std::dec << L"\",\n";
                out << L"      \"name\": \"" << std::wstring(s.name.begin(), s.name.end()) << L"\",\n";
                out << L"      \"call_count\": " << s.callCount << L",\n";
                out << L"      \"unique_callers\": " << s.callerCounts.size() << L",\n";
                out << L"      \"avg_duration_us\": " << avgMicros << L",\n";
                out << L"      \"min_duration_us\": " << minMicros << L",\n";
                out << L"      \"max_duration_us\": " << maxMicros << L",\n";
                out << L"      \"callers\": [\n";

                auto callers = SortedCallers(s);
                bool firstCaller = true;
                for (const auto& [callerRva, count] : callers)
                {
                    if (!firstCaller) out << L",\n";
                    firstCaller = false;
                    out << L"        {\"rva\": \"0x" << std::hex << callerRva << std::dec
                        << L"\", \"count\": " << count << L"}";
                }
                out << L"\n      ]\n    }";
            }
            out << L"\n  ]\n}\n";
        }

        // summary.txt - meant to be pasted straight back into Claude.
        {
            std::wofstream out(sessionDir + L"\\summary.txt");
            out << L"Session summary\n\n";

            uint64_t totalCalls = 0;
            for (const auto& [rva, s] : stats) totalCalls += s.callCount;

            out << L"Hooked functions: " << stats.size() << L"\n";
            out << L"Total recorded calls: " << totalCalls << L"\n";
            out << L"Dropped events (queue contention): " << droppedEvents << L"\n\n";

            for (const auto& [rva, s] : stats)
            {
                out << L"== " << std::wstring(s.name.begin(), s.name.end())
                    << L" (RVA 0x" << std::hex << rva << std::dec << L") ==\n";
                out << L"  calls: " << s.callCount << L"\n";

                double avgMicros = s.callCount ? TicksToMicros(s.totalDurationTicks, freq) / (double)s.callCount : 0.0;
                out << L"  avg duration: " << avgMicros << L" us\n";
                out << L"  unique callers: " << s.callerCounts.size() << L"\n";

                out << L"  top callers (unresolved/RVA 0x0 = outside the game module):\n";
                auto callers = SortedCallers(s);
                size_t shown = 0;
                for (const auto& [callerRva, count] : callers)
                {
                    if (shown++ >= 10) break;
                    out << L"    RVA 0x" << std::hex << callerRva << std::dec << L" -- " << count << L" calls\n";
                }
                out << L"\n";
            }
        }
    }
}
