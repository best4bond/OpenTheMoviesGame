#pragma once
#include <cstdint>

namespace HookManager
{
    bool Initialize();
    void Shutdown();

    // Creates + enables a MinHook hook at ModuleBase()+rva, redirecting to detour.
    // A callable trampoline to the original is written to *original.
    bool Register(const char* name, uintptr_t rva, void* detour, void** original);

    uintptr_t ModuleBase();

    // Converts an absolute address to an RVA relative to the game module, or
    // 0 if it falls outside the module (a hook trampoline, another DLL, etc.
    // - callers should treat 0 as "unresolved", not as a real RVA).
    uintptr_t ToRva(void* absoluteAddress);
}
