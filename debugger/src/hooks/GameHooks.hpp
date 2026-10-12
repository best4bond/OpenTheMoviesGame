#pragma once

// Every actual game-function hook lives in GameHooks.cpp, kept separate from
// HookManager (generic MinHook wrapper) and Addresses.hpp (RVA constants).
// Adding a new anchor is: confirm the function in Ghidra, add its RVA to
// Addresses.hpp, add a Detour_* + Register() call here.
namespace GameHooks
{
    bool InstallAll();

    // Stops the command-trigger polling thread (see CommandTriggerThreadProc
    // in GameHooks.cpp). Call before EventQueue::Stop()/HookManager::Shutdown()
    // on an explicit unload, same reasoning as the F11 hotkey thread in
    // dllmain.cpp: it must not still be running when FreeLibrary unmaps this
    // DLL's code.
    void Shutdown();
}
