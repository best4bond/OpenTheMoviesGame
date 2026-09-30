#!/usr/bin/env python3
"""Write library_map.csv: every function in the shared-library window with size, current name,
source-file bracket, structural category and the matching Fable hint (if any).

The bracket comes from functions that mention a source file (".\\X.cpp" or a libpk header):
a function between two anchors of the same file belongs to that file, otherwise it is listed
as "between X and Y" because template instantiations from other files are interleaved.
"""
import csv, re, glob, os, pathlib, collections

ROOT = pathlib.Path(__file__).resolve().parent.parent
LO, HI = 0x00BC0000, 0x00C9A000
HDR = re.compile(r'^//// FUNCTION (\S+) @ ([0-9a-f]{8}) ////$', re.M)
SRC = re.compile(r'"\.\\\\([A-Za-z0-9_]+)\.cpp"')

funcs, anchors = {}, {}
for f in sorted(glob.glob(str(ROOT / 'ExportDecompiled' / 'decomp_*.c'))):
    t = open(f, errors='replace').read()
    ms = list(HDR.finditer(t))
    for i, m in enumerate(ms):
        a = m.group(2)
        if not (LO <= int(a, 16) < HI):
            continue
        end = ms[i + 1].start() if i + 1 < len(ms) else len(t)
        body = t[m.end():end]
        funcs[a] = (m.group(1), body)
        s = SRC.findall(body)
        if s:
            anchors[a] = s[0]

size = {r[0]: int(r[2]) for r in list(csv.reader(open(ROOT / 'ExportDecompiled' / 'index.csv')))[1:]}
fable = {r['ours_addr']: r for r in csv.DictReader(open(ROOT / 'fable_matches.csv'))}

order = sorted(funcs, key=lambda a: int(a, 16))
prev, nxt, last = {}, {}, None
for a in order:
    if a in anchors:
        last = anchors[a]
    prev[a] = last
last = None
for a in reversed(order):
    if a in anchors:
        last = anchors[a]
    nxt[a] = last


def category(name, body):
    n = name
    for p, c in (('ScalarDeletingDtor_', 'scalar deleting destructor'), ('SetVtable_', 'vtable setter'),
                 ('Dtor_', 'destructor'), ('Ctor_', 'constructor'), ('GetField_', 'field getter'),
                 ('Wrap_', 'Win32/CRT wrapper'), ('OpenALContext_', 'OpenAL wrapper'),
                 ('LH_Array_', 'array helper'), ('LH_SortedArray_', 'array helper'),
                 ('LH_Map_', 'container helper'), ('LH_Container_', 'container helper')):
        if n.startswith(p):
            return c
    if not n.startswith('FUN_'):
        return 'named'
    if 'LH_Assert' in body:
        return 'has assertion'
    return 'unclassified'


rows = []
for a in order:
    name, body = funcs[a]
    p, q = prev[a], nxt[a]
    src = anchors.get(a) or (p if p and p == q else f'between {p or "?"} and {q or "?"}')
    fh = fable.get(a)
    rows.append([a, size.get(a, ''), name, src, category(name, body),
                 fh['fable_name'] if fh else '', fh['method'] if fh else '', fh['body_similarity'] if fh else ''])

with open(ROOT / 'library_map.csv', 'w', newline='') as fh:
    w = csv.writer(fh)
    w.writerow(['addr', 'size', 'name', 'source_file_or_bracket', 'category', 'fable_hint', 'fable_method',
                'fable_body_similarity'])
    w.writerows(rows)
c = collections.Counter(r[4] for r in rows)
print(len(rows), dict(c))
