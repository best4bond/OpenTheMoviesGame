#pragma once

// Low-volume, event-based tracker meant to run for a whole play session (an in-game
// decade). Writes decade_log.csv next to MoviesSE.exe: one "key=value" line per
// event (releases, daily income payouts, genre trend/saturation changes, per-shot
// quality at post-production, project update rate). The file is opened with
// share-read so it can be copied while the game is running.
namespace DecadeTracker
{
    bool Install();   // after HookManager::Initialize()
    void Shutdown();  // after HookManager::Shutdown() on an explicit unload

    // Called from GameHooks' existing CStudioAI::Tick detour (that function is already hooked there; a second
    // MinHook hook on it fails with MH_ERROR_ALREADY_CREATED). Does the once-per-game-month snapshots.
    void OnStudioAITick(void* studio);
}
