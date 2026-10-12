#pragma once
#include <string>
#include <cstdint>

namespace Session
{
    struct BuildInfo
    {
        std::wstring exePath;
        uint32_t peTimeDateStamp = 0; // fingerprints the exact build - RVAs are only
                                       // meaningful for the build they were verified against
        uint32_t sizeOfImage = 0;
        uintptr_t imageBase = 0;
    };

    // Creates <dll folder>/sessions/session_<timestamp>/ and returns its path.
    std::wstring CreateSessionDir();

    // Reads the running process's own PE header for build fingerprinting.
    BuildInfo ReadBuildInfo();

    void WriteMetadata(const std::wstring& sessionDir, const BuildInfo& info,
                        uint64_t sessionStartQpc, uint64_t qpcFrequency);
}
