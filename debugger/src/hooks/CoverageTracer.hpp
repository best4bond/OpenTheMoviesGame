#pragma once

// First-call coverage tracer.
//
// Reads "coverage_functions.txt" (one function entry address per line, hex VA, optional trailing name) from the
// folder of MoviesSE.exe. If the file exists it plants an INT3 at the first byte of every listed function and
// installs a vectored exception handler: the first time a function is entered the handler records
// (sequence, microseconds since attach, thread id, phase, RVA), puts the original byte back and resumes, so each
// function costs one exception in the whole run. The result is written to "coverage_log.csv" next to the exe.
//
// Hotkeys (polled from a helper thread):
//   F8  re-arm every function (so the next phase records its *complete* function set) and start a new phase
//   F9  write a marker line (start a new phase without re-arming: the next phase lists newly reached functions)
//   F10 write coverage_summary.txt (functions reached per phase)
// Automatic markers are written when the game clock starts (a game was loaded) and at every game month.
namespace CoverageTracer
{
    bool Install();   // after the other hooks (functions already detoured by MinHook start with E9 and are skipped)
    void Shutdown();
}
