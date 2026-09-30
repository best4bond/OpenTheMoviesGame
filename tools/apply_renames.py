#!/usr/bin/env python3
"""Apply renames.csv to ExportDecompiled/*.c and index.csv.

renames.csv is the source of truth; the export files can be regenerated from Ghidra,
so re-run this script after re-exporting. Names are matched by address: whatever name
the export currently gives that address is replaced by new_name (old_name is only
documentation of the original FUN_ name).
"""
import csv, re, pathlib

root = pathlib.Path(__file__).resolve().parent.parent
export = root / "ExportDecompiled"

cur = {}
for r in list(csv.reader(open(export / "index.csv", newline="")))[1:]:
    cur[r[0]] = r[1].strip('"')

mapping = {}
for r in csv.DictReader(open(root / "renames.csv", newline="")):
    a = r["address"]
    old = cur.get(a)
    if old and old != r["new_name"]:
        mapping[old] = r["new_name"]
    if r["old_name"] != r["new_name"] and r["old_name"] not in mapping and cur.get(a) == r["old_name"]:
        mapping[r["old_name"]] = r["new_name"]

if not mapping:
    print("nothing to do")
    raise SystemExit
pat = re.compile(r"(?<![A-Za-z0-9_])(" + "|".join(map(re.escape, sorted(mapping, key=len, reverse=True))) + r")(?![A-Za-z0-9_])")
changed = 0
for p in sorted(export.glob("*.c")) + [export / "index.csv"]:
    text = p.read_text(encoding="utf-8", errors="surrogateescape")
    new = pat.sub(lambda m: mapping[m.group(1)], text)
    if new != text:
        p.write_text(new, encoding="utf-8", errors="surrogateescape")
        changed += 1
print(f"{len(mapping)} renames applied, {changed} files changed")
