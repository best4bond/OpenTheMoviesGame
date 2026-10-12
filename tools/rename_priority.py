"""Ranks the unnamed functions the game really runs (steady gameplay set from the coverage trace) by class.

Class of a function, in order of confidence:
  vtable   it is a virtual slot of a class (the most basic class that lists it)
  ctor     it is a constructor candidate found by rtti_dump.py
  address  its neighbours in the .text section (methods of one class are compiled together) belong to one class
Outputs docs/generated/rename_priority.md and rename_priority.csv.

Usage: python rename_priority.py
"""
import bisect
import collections
import csv
import json
import os
REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

REPO = REPO_ROOT
GEN = os.path.join(REPO_ROOT, 'docs', 'generated')
LOG = r'F:\DecompilingTheMovies\The Movies\coverage_log.csv'

names = {}
CUR = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'ghidra_names.csv')
if os.path.exists(CUR):
    # current names exported from the live Ghidra project (list_functions); preferred over the stale export
    for r in csv.DictReader(open(CUR, newline='', encoding='utf-8')):
        names[int(r['address'], 16)] = r['name']
else:
    for r in csv.DictReader(open(os.path.join(REPO, 'data', 'ExportDecompiled', 'index.csv'), newline='', encoding='utf-8')):
        names[int(r['address'], 16)] = r['name']
    for r in csv.DictReader(open(os.path.join(REPO, 'renames.csv'), newline='', encoding='utf-8', errors='ignore')):
        try:
            names[int(r['address'], 16)] = r['new_name']
        except (ValueError, KeyError):
            pass
all_funcs = sorted(names)

classes = json.load(open(os.path.join(GEN, 'rtti_classes.json')))['classes']
owner, how = {}, {}
depth = {}
for c in classes:
    d = len(c['bases'])
    for v in c['vtables']:
        for s in v['slots']:
            va = int(s['va'], 16)
            if va not in depth or d < depth[va]:
                depth[va] = d
                owner[va] = c['name']
                how[va] = 'vtable'
ctor_by_name = {}
for c in classes:
    for v in c['vtables']:
        for nm in v['ctors']:
            ctor_by_name.setdefault(nm, c['name'])
name_to_va = {n: a for a, n in names.items()}
for nm, cname in ctor_by_name.items():
    va = name_to_va.get(nm)
    if va and va not in owner:
        owner[va] = cname
        how[va] = 'ctor'

# address neighbourhood
classed = sorted(owner)
def by_address(va):
    i = bisect.bisect_left(classed, va)
    prev = classed[i - 1] if i > 0 else None
    nxt = classed[i] if i < len(classed) else None
    if prev is not None and nxt is not None and owner[prev] == owner[nxt] and nxt - prev < 0x3000:
        return owner[prev]
    best = None
    for n in (prev, nxt):
        if n is not None and abs(n - va) < 0x500 and (best is None or abs(n - va) < abs(best - va)):
            best = n
    return owner[best] if best is not None else None

rows = []
for line in open(LOG, encoding='utf-8'):
    if line.startswith(('#', 'seq')):
        continue
    p = line.strip().split(',')
    rows.append((int(p[0]), int(p[3]), int(p[4], 16) + 0x400000))
marks = [l.split(',') for l in open(LOG, encoding='utf-8') if l.startswith('#MARK')]
f8 = next((int(m[3]) for m in marks if m[4].strip() == 'F8_REARM'), None)
steady = {}
for seq, ph, va in rows:
    if f8 is None or ph >= f8:
        steady.setdefault(va, seq)

stats = collections.defaultdict(lambda: {'n': 0, 'named': 0, 'unnamed': [], 'how': collections.Counter()})
for va, seq in sorted(steady.items(), key=lambda kv: kv[1]):
    c = owner.get(va)
    h = how.get(va)
    if c is None:
        c = by_address(va)
        h = 'address' if c else None
    key = c or '(unclassified)'
    s = stats[key]
    s['n'] += 1
    s['how'][h or 'none'] += 1
    nm = names.get(va, 'FUN_%08x' % va)
    if nm.startswith(('FUN_', 'Ctor_', 'Dtor_')) or nm.startswith(('thunk_', 'LAB_')):
        s['unnamed'].append((seq, va, nm, h or 'none'))
    else:
        s['named'] += 1

ranked = sorted(stats.items(), key=lambda kv: -len(kv[1]['unnamed']))
with open(os.path.join(GEN, 'rename_priority.csv'), 'w', newline='', encoding='utf-8') as f:
    w = csv.writer(f)
    w.writerow(['class', 'address', 'name', 'first_call_order', 'class_evidence'])
    for cname, s in ranked:
        for seq, va, nm, h in s['unnamed']:
            w.writerow([cname, '%08X' % va, nm, seq, h])

tot_unnamed = sum(len(s['unnamed']) for s in stats.values())
lines = ['# Rename priority: unnamed functions in steady gameplay, by class', '',
         '%d functions in the steady-gameplay set, %d unnamed. Ranked by how many unnamed functions each class has; '
         '"order" is the order of first call after the re-arm (small = called early / fundamental).' % (len(steady), tot_unnamed), '',
         '| rank | class | steady fns | named | unnamed | evidence (vtable/ctor/address) |', '|---|---|---|---|---|---|']
for i, (cname, s) in enumerate(ranked[:40], 1):
    ev = '%d/%d/%d' % (s['how'].get('vtable', 0), s['how'].get('ctor', 0), s['how'].get('address', 0))
    lines.append('| %d | %s | %d | %d | %d | %s |' % (i, cname, s['n'], s['named'], len(s['unnamed']), ev))
lines += ['', '## First unnamed functions to look at, per class (earliest called first)', '']
for cname, s in ranked[:15]:
    if cname == '(unclassified)':
        continue
    lines.append('### %s' % cname)
    for seq, va, nm, h in s['unnamed'][:12]:
        lines.append('- %08X %s (%s, call #%d)' % (va, nm, h, seq))
    lines.append('')
open(os.path.join(GEN, 'rename_priority.md'), 'w', encoding='utf-8').write('\n'.join(lines) + '\n')
print('\n'.join(lines[:60]))
