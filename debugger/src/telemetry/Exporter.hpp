#pragma once
#include <cstdint>
#include <string>
#include <unordered_map>

namespace Exporter
{
    struct FunctionStats
    {
        std::string name;
        uint64_t callCount = 0;
        uint64_t totalDurationTicks = 0;
        uint64_t minDurationTicks = UINT64_MAX;
        uint64_t maxDurationTicks = 0;
        std::unordered_map<uintptr_t, uint64_t> callerCounts; // callerRva -> count
    };
    using StatsMap = std::unordered_map<uintptr_t, FunctionStats>;

    // Writes functions.json (full caller-frequency breakdown per hooked
    // function) and summary.txt (the human/AI-readable digest meant to be
    // pasted back into Claude).
    void WriteFunctionsAndSummary(const std::wstring& sessionDir, const StatsMap& stats, uint64_t droppedEvents);
}
