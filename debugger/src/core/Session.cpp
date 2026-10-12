#include "Session.hpp"
#include <windows.h>
#include <filesystem>
#include <fstream>
#include <cstdio>

namespace fs = std::filesystem;

namespace
{
    // Any address inside this DLL - used to resolve our own module handle so
    // sessions/ lands next to TheMoviesDebugger.dll regardless of what
    // directory the game process's CWD happens to be.
    void AnchorFunction() {}

    std::wstring GetSelfDirectory()
    {
        HMODULE hSelf = nullptr;
        GetModuleHandleExW(
            GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            reinterpret_cast<LPCWSTR>(&AnchorFunction), &hSelf);

        wchar_t path[MAX_PATH];
        GetModuleFileNameW(hSelf, path, MAX_PATH);
        return fs::path(path).parent_path().wstring();
    }
}

namespace Session
{
    std::wstring CreateSessionDir()
    {
        SYSTEMTIME st;
        GetLocalTime(&st);

        wchar_t name[64];
        swprintf_s(name, L"session_%04u-%02u-%02u_%02u%02u%02u",
            st.wYear, st.wMonth, st.wDay, st.wHour, st.wMinute, st.wSecond);

        fs::path dir = fs::path(GetSelfDirectory()) / L"sessions" / name;
        std::error_code ec;
        fs::create_directories(dir, ec);
        return dir.wstring();
    }

    BuildInfo ReadBuildInfo()
    {
        BuildInfo info;
        HMODULE hExe = GetModuleHandleW(nullptr);

        wchar_t path[MAX_PATH];
        GetModuleFileNameW(hExe, path, MAX_PATH);
        info.exePath = path;
        info.imageBase = reinterpret_cast<uintptr_t>(hExe);

        auto base = reinterpret_cast<BYTE*>(hExe);
        auto dos = reinterpret_cast<IMAGE_DOS_HEADER*>(base);
        auto nt = reinterpret_cast<IMAGE_NT_HEADERS32*>(base + dos->e_lfanew);
        info.peTimeDateStamp = nt->FileHeader.TimeDateStamp;
        info.sizeOfImage = nt->OptionalHeader.SizeOfImage;
        return info;
    }

    void WriteMetadata(const std::wstring& sessionDir, const BuildInfo& info,
                        uint64_t sessionStartQpc, uint64_t qpcFrequency)
    {
        std::wofstream out(sessionDir + L"\\metadata.json");
        out << L"{\n";
        out << L"  \"exe_path\": \"" << info.exePath << L"\",\n";
        out << L"  \"image_base\": \"0x" << std::hex << info.imageBase << std::dec << L"\",\n";
        out << L"  \"size_of_image\": " << info.sizeOfImage << L",\n";
        out << L"  \"pe_timestamp\": " << info.peTimeDateStamp << L",\n";
        out << L"  \"qpc_frequency\": " << qpcFrequency << L",\n";
        out << L"  \"session_start_qpc\": " << sessionStartQpc << L"\n";
        out << L"}\n";
    }
}
