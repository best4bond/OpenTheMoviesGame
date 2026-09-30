#!/usr/bin/env python3
"""Append (address, new_name, evidence) rows read from stdin as TSV to renames.csv (updates rows already present)."""
import csv, sys, pathlib
root = pathlib.Path(__file__).resolve().parent.parent
rows = list(csv.reader(open(root / "renames.csv", newline="")))
have = {r[0] for r in rows}
added = 0
for line in sys.stdin:
    line = line.rstrip("\n")
    if not line.strip() or line.startswith("#"):
        continue
    a, n, e = line.split("\t", 2)
    if a in have:
        for r in rows:
            if r[0] == a:
                r[2], r[3] = n, e
        continue
    rows.append([a, "FUN_" + a, n, e])
    have.add(a)
    added += 1
csv.writer(open(root / "renames.csv", "w", newline="")).writerows(rows)
print(added, "added,", len(rows), "total")
