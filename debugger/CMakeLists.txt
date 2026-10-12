cmake_minimum_required(VERSION 3.20)
project(TheMoviesDebugger LANGUAGES CXX)

# The Movies (2005) is a 32-bit process. This DLL must match it or Windows
# will refuse to load it into the game at all.
if(NOT CMAKE_GENERATOR_PLATFORM STREQUAL "Win32" AND NOT CMAKE_VS_PLATFORM_NAME STREQUAL "Win32")
    message(WARNING "Configure with -A Win32 (or the CMake VS generator's x86 platform) - "
                     "a 64-bit build of this DLL cannot be injected into MoviesSE.exe.")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(minhook CONFIG REQUIRED)

add_library(TheMoviesDebugger SHARED
    src/dllmain.cpp
    src/core/Logging.cpp
    src/core/Session.cpp
    src/hooks/HookManager.cpp
    src/hooks/GameHooks.cpp
    src/hooks/DecadeTracker.cpp
    src/hooks/CoverageTracer.cpp
    src/telemetry/EventQueue.cpp
    src/telemetry/Exporter.cpp
)

target_include_directories(TheMoviesDebugger PRIVATE src)
target_link_libraries(TheMoviesDebugger PRIVATE minhook::minhook)
target_compile_definitions(TheMoviesDebugger PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX UNICODE _UNICODE)
set_target_properties(TheMoviesDebugger PROPERTIES OUTPUT_NAME "TheMoviesDebugger")

# Standalone CreateRemoteThread+LoadLibrary injector. Kept as a separate tiny
# exe rather than a DLL proxy (e.g. hijacking dinput8.dll) so there's no export
# forwarding to get right before anything can be tested.
add_executable(TheMoviesInjector injector/main.cpp)
target_compile_definitions(TheMoviesInjector PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX UNICODE _UNICODE)
