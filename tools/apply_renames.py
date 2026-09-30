#!/usr/bin/env python3
"""Apply renames.csv to ExportDecompiled/*.c and index.csv.

renames.csv is the source of truth; the export files can be regenerated from Ghidra,
so re-run this script after re-exporting.
"""
import csv, re, sys, pathlib

root = pathlib.Path(__file__).resolve().parent.parent
export = root / "ExportDecompiled"
mapping = {}
with open(root / "renames.csv", newline="") as f:
    for r in csv.DictReader(f):
        mapping[r["old_name"]] = r["new_name"]

pat = re.compile(r"\b(" + "|".join(map(re.escape, mapping)) + r")\b")
changed = 0
for p in sorted(export.glob("*.c")) + [export / "index.csv"]:
    text = p.read_text(encoding="utf-8", errors="surrogateescape")
    new = pat.sub(lambda m: mapping[m.group(1)], text)
    if new != text:
        p.write_text(new, encoding="utf-8", errors="surrogateescape")
        changed += 1
print(f"{len(mapping)} renames, {changed} files changed")
