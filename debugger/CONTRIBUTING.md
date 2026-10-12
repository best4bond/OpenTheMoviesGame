# Contributing

## Firewall: no game-derived material
Never commit game binaries, assets, Ghidra databases, or raw decompiler dumps
(`FUN_xxxxxxxx` bodies). Run `python tools/audit_firewall.py` before every commit.
The `.gitignore` is a safety net, not a substitute for checking.

## Evidence for names and types
Every function name, struct, field or enum added must have recorded evidence
(RTTI, string xref, runtime trace, caller analysis...) in `docs/` or a code comment.
Don't commit guesses as facts; mark uncertain items clearly.

## Reproducibility
Extraction/generation must be a script that runs against the contributor's own
copy of the game. Document the command in the README.

## AI-assisted work
AI tools may assist, but a person reviews and owns every change, writes
outward-facing text (issues, PRs), and no automated traffic is sent to
community infrastructure.
