# The Movies (2005) — Reverse Engineering Notes

Fan reverse-engineering notes for **The Movies** and **The Movies: Stunts & Effects** (Lionhead Studios, published by Activision, 2005–2006).

This is an ongoing effort to understand how the game's simulation actually works under the hood — mechanics like genre popularity, the radio/news system, save-file structure, and various asset formats (`.msh`, `.lug`, `.pak`) — done by statically analyzing the shipped `MoviesSE.exe` in Ghidra and cross-checking the results against the real game data files.

Write-up is being redone from scratch — check back soon.

## What this is

- Original analysis: function/class identification, algorithm and data-structure documentation, decompiled-code excerpts (a handful of lines at a time, for illustration), and short quoted strings used as evidence (debug asserts, embedded source paths, error messages).
- A description of how various game systems and file formats work.

## What this is *not*

- No copies of the game binary, Ghidra project/database, or any extracted game assets (audio, textures, meshes, full data files) are included in this repo.
- Not affiliated with, endorsed by, or sponsored by Lionhead Studios, Activision, or their successors. All trademarks and copyrighted game content belong to their respective owners; this repo only contains original analysis and commentary about that content.

## Tools used

- [Ghidra](https://ghidra-sre.org/) for static analysis/decompilation of the executable.
- `reshoot.exe`, archive-extraction tool for pulling real data files (`.csv`/`.ini`/`.lhts`) out of the game's `.pak` archives to verify inferences made from the disassembly.
- Claude to help me write these notes and talk through complicated parts of this disassembly.
