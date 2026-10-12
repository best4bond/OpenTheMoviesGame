#include "HookManager.hpp"
#include "../core/Logging.hpp"
#include <windows.h>
#include <MinHook.h>

namespace
{
    uintptr_t g_moduleBase = 0;
    uintptr_t g_moduleSize = 0;
}

namespace HookManager
{
    bool Initialize()
    {
        HMODULE hExe = GetModuleHandleW(nullptr);
        g_moduleBase = reinterpret_cast<uintptr_t>(hExe);

        auto base = reinterpret_cast<BYTE*>(hExe);
        auto dos = reinterpret_cast<IMAGE_DOS_HEADER*>(base);
        auto nt = reinterpret_cast<IMAGE_NT_HEADERS32*>(base + dos->e_lfanew);
        g_moduleSize = nt->OptionalHeader.SizeOfImage;

        MH_STATUS status = MH_Initialize();
        if (status != MH_OK && status != MH_ERROR_ALREADY_INITIALIZED)
        {
            Logging::Log("MH_Initialize failed: %s", MH_StatusToString(status));
            return false;
        }

        Logging::Log("HookManager initialised. Module base 0x%08zX, size 0x%zX",
            (size_t)g_moduleBase, (size_t)g_moduleSize);
        return true;
    }

    void Shutdown()
    {
        MH_DisableHook(MH_ALL_HOOKS);
        MH_Uninitialize();
    }

    bool Register(const char* name, uintptr_t rva, void* detour, void** original)
    {
        void* target = reinterpret_cast<void*>(g_moduleBase + rva);

        MH_STATUS status = MH_CreateHook(target, detour, original);
        if (status != MH_OK)
        {
            Logging::Log("[%s] MH_CreateHook failed at RVA 0x%zX: %s", name, (size_t)rva, MH_StatusToString(status));
            return false;
        }
        status = MH_EnableHook(target);
        if (status != MH_OK)
        {
            Logging::Log("[%s] MH_EnableHook failed at RVA 0x%zX: %s", name, (size_t)rva, MH_StatusToString(status));
            return false;
        }

        Logging::Log("[%s] hooked at RVA 0x%zX (VA 0x%zX)", name, (size_t)rva, (size_t)reinterpret_cast<uintptr_t>(target));
        return true;
    }

    uintptr_t ModuleBase() { return g_moduleBase; }

    uintptr_t ToRva(void* absoluteAddress)
    {
        auto addr = reinterpret_cast<uintptr_t>(absoluteAddress);
        if (addr >= g_moduleBase && addr < g_moduleBase + g_moduleSize)
            return addr - g_moduleBase;
        return 0;
    }
}
