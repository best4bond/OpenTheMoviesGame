# The Movies (2005) — Reverse Engineering Notes

Fan reverse-engineering notes for **The Movies** and **The Movies: Stunts & Effects** (Lionhead Studios, published by Activision, 2005–2006).

This is an ongoing effort to understand how the game's simulation actually works under the hood — mechanics like genre popularity, the radio/news system, save-file structure, and various asset formats (`.msh`, `.lug`, `.pak`) — done by statically analyzing the shipped `MoviesSE.exe` in Ghidra and cross-checking the results against the real, official game data files (extracted with Lionhead's own `reshoot.exe` modding tool, which ships with The Movies Editor).

**➡️ [FINDINGS.md](FINDINGS.md)** — the main write-up. It's a running research log, not a polished reference: sections get added as threads are investigated, and earlier conclusions are corrected in place (left visible) when later evidence overturns them, rather than silently rewritten.

## What this is

- Original analysis: function/class identification, algorithm and data-structure documentation, decompiled-code excerpts (a handful of lines at a time, for illustration), and short quoted strings used as evidence (debug asserts, embedded source paths, error messages).
- A description, in our own words, of how various game systems and file formats work, based on that analysis.

## What this is *not*

- No copies of the game binary, Ghidra project/database, or any extracted game assets (audio, textures, meshes, full data files) are included in this repo. Get the game from a legitimate source to follow along.
- Not affiliated with, endorsed by, or sponsored by Lionhead Studios, Activision, or their successors. All trademarks and copyrighted game content belong to their respective owners; this repo only contains original analysis and commentary about that content.
- Not a mod, patch, trainer, or cheat tool — this is documentation of how the shipping game works.

## Tools used

- [Ghidra](https://ghidra-sre.org/) (NSA) for static analysis/decompilation of the executable.
- `reshoot.exe`, the official archive-extraction tool bundled with **The Movies Editor** (Lionhead's own modding toolkit), for pulling real data files (`.csv`/`.ini`/`.lhts`) out of the game's `.pak` archives to verify inferences made from the disassembly.
