"""Reimplementation progress tracker.

Joins tools/ghidra_names.csv (address,name for every function in Ghidra) with the `// orig: 0xVA` tags found in
src/ and writes docs/generated/progress.csv + progress.md (gitignored: it contains game-derived names).

Status per function:  unnamed (FUN_*)  ->  named  ->  reimplemented (an `orig:` tag exists in src/).
Add `verified` by putting `// orig: 0x004A1230 verified` in the source.

Usage: python tools/progress.py
"""
import csv
import os
import re
import sys
from collections import Counter, defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TEMPLATE = re.compile(r'<[^<>]*>')
NAMES = os.path.join(ROOT, 'tools', 'ghidra_names.csv')  # live Ghidra names


def group_of(name):
    prev = None
    while prev != name:
        prev, name = name, TEMPLATE.sub('', name)
    name = name.lstrip('~')
    head = name.split('::')[0] if '::' in name else (name.strip('_').split('_')[0] if '_' in name.strip('_') else '')
    return re.sub(r'[^A-Za-z0-9]', '', head) or '_misc'

TAG = re.compile(r'orig:\s*0x([0-9a-fA-F]{6,8})(\s+verified)?')
UNNAMED = re.compile(r'^FUN_[0-9a-fA-F]{8}$')


def scan_src():
    tags = {}
    for base, _, files in os.walk(os.path.join(ROOT, 'src')):
        for f in files:
            if f.endswith(('.cpp', '.hpp', '.h', '.c')):
                for m in TAG.finditer(open(os.path.join(base, f), encoding='utf-8', errors='ignore').read()):
                    tags[m.group(1).upper().zfill(8)] = 'verified' if m.group(2) else 'reimplemented'
    return tags


def main():
    tags = scan_src()
    rows = []
    for r in csv.DictReader(open(NAMES, encoding='utf-8')):
        addr, name = r['address'].upper().zfill(8), r['name']
        if UNNAMED.match(name):
            status, cls = 'unnamed', ''
        else:
            status, cls = 'named', group_of(name)
        status = tags.get(addr, status)
        rows.append((addr, name, cls, status))
    out = os.path.join(ROOT, 'docs', 'generated')
    os.makedirs(out, exist_ok=True)
    with open(os.path.join(out, 'progress.csv'), 'w', newline='', encoding='utf-8') as f:
        w = csv.writer(f)
        w.writerow(['address', 'name', 'class', 'status'])
        w.writerows(rows)
    total = Counter(r[3] for r in rows)
    per = defaultdict(Counter)
    for _, _, c, s in rows:
        if c:
            per[c][s] += 1
    with open(os.path.join(out, 'progress.md'), 'w', encoding='utf-8') as f:
        f.write('# Reimplementation progress\n\n')
        f.write(' | '.join(f'{k}: {v}' for k, v in total.items()) + '\n\n')
        f.write('| class | named | reimplemented | verified |\n|---|---|---|---|\n')
        for c, n in sorted(per.items(), key=lambda kv: -sum(kv[1].values()))[:60]:
            f.write(f"| {c} | {n['named']} | {n['reimplemented']} | {n['verified']} |\n")
    print(dict(total))


main()
