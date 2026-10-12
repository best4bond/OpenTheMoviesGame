"""Post-process the ghidra/scripts/ExportByClass.java output into a tidier per-class layout.

Fixes what the plain name-prefix grouping gets wrong:
  * Auto-named compiler/library helpers (Ctor_vt<VA>_<addr>, SetVtable_<VA>_<addr>, Dtor_<addr>,
    ScalarDeletingDtor_<addr>) are regrouped by the vtable they install, so a class's constructor, destructor,
    deleting destructor and vtable setter end up in one file. The class name comes from RTTI
    (docs/generated/rtti_classes.json) when the vtable has an RTTI entry; most of the Lionhead shared-library
    classes have none, so those files are named after the vtable instead (vt00d9e214.c).
  * GetField_<off>_<addr> getters and Wrap_<api>_<addr> Win32 wrappers go to _helpers/GetField.c and Wrap.c.
  * Third-party / runtime code (vorbis, ogg, zlib, UnDecorator, ATL, std, CRT ...) goes to _thirdparty/.
  * Free functions with no class go to _free/.

Layout written to --out:  <Class>.c  _vtables/vtNNNNNNNN.c  _helpers/*.c  _thirdparty/*.c  _free/_misc.c
plus index.csv (name,address,file) and INDEX.md. The input directory is not modified.

Usage: python tools/organize_identified.py [--src data/identified] [--out data/identified_organized]
"""
import argparse
import csv
import json
import os
import re
import shutil
import sys
from collections import defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
HDR = re.compile(r'^/\* (.+) @ ([0-9a-fA-F]+)(?: - evidence:.*)? \*/$')
THIRD_PARTY = {'vorbis', 'ogg', 'oggpack', 'zlib', 'UnDecorator', 'DName', 'DNameStatusNode', 'DNameNode',
               'pDNameNode', 'pcharNode', 'charNode', 'FID', 'ATL', 'std', 'sbh', 'write', 'stdext'}
HELPERS = ('GetField', 'Wrap')
VT_NAME = re.compile(r'^(?:Ctor_vt|SetVtable_)([0-9a-fA-F]{8})')
VT_ASSIGN = re.compile(r'\*\s*\w+\s*=\s*&?(?:\(undefined ?\*+\)\s*)?&?(?:PTR_\w*?_|vtable_|PTR_)?([0-9a-fA-F]{8})\b|=\s*&PTR_\w+_([0-9a-fA-F]{8});')
PTR_REF = re.compile(r'&PTR_\w*?_?([0-9a-fA-F]{8})\b')
CALL = re.compile(r'\b((?:Dtor|ScalarDeletingDtor)_[0-9a-fA-F]{8})\b')


def rtti_vtable_names():
    path = os.path.join(ROOT, 'docs', 'generated', 'rtti_classes.json')
    out = {}
    if not os.path.exists(path):
        return out
    for c in json.load(open(path, encoding='utf-8'))['classes']:
        n = re.sub(r'[^A-Za-z0-9]', '', re.sub(r'<[^<>]*>', '', c['name'].split('::')[-1]).lstrip('?$~'))
        for v in c['vtables']:
            if n and v.get('this_offset', 0) == 0:
                out.setdefault(v['va'].upper(), n)
    return out


def read_blocks(src):
    blocks = []                     # (name, addr, body_lines)
    for fn in sorted(os.listdir(src)):
        if not fn.endswith('.c'):
            continue
        cur = None
        for line in open(os.path.join(src, fn), encoding='utf-8', errors='ignore'):
            line = line.rstrip('\n')
            m = HDR.match(line)
            if m:
                cur = (m.group(1), m.group(2).lower(), [])
                blocks.append(cur)
            elif cur is not None:
                cur[2].append(line)
    return blocks


def first_vtable(body):
    """VA of the first vtable pointer written through `this`/param_1 in a destructor-like body."""
    for line in body:
        m = re.search(r'\*\s*\(?[\w\s\*\(\)]*?(?:this|param_1)\)?\s*=\s*&?(?:PTR_\w*?_)?([0-9a-fA-F]{8})\b', line)
        if m:
            return m.group(1).upper()
        m = re.search(r'\*\s*(?:param_1|this)\s*=\s*&PTR_\w+?_([0-9a-fA-F]{8})', line)
        if m:
            return m.group(1).upper()
    return None


def prefix_group(name):
    name = re.sub(r'<[^<>]*>', '', name).lstrip('~')
    if '::' in name:
        head = name.split('::')[0]
    else:
        t = name.strip('_')
        head = t.split('_')[0] if '_' in t else ''
    return re.sub(r'[^A-Za-z0-9]', '', head) or None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--src', default=os.path.join(ROOT, 'data', 'identified'))
    ap.add_argument('--out', default=os.path.join(ROOT, 'data', 'identified_organized'))
    a = ap.parse_args()

    blocks = read_blocks(a.src)
    by_name = {b[0].split('::')[-1]: b for b in blocks}
    rtti = rtti_vtable_names()

    def vt_of(name, body, depth=0):
        m = VT_NAME.match(name.split('::')[-1])
        if m:
            return m.group(1).upper()
        short = name.split('::')[-1]
        if short.startswith('Dtor_'):
            return first_vtable(body)
        if short.startswith('ScalarDeletingDtor_') and depth < 2:
            for line in body:
                c = CALL.search(line)
                if c and c.group(1) != short and c.group(1) in by_name:
                    b = by_name[c.group(1)]
                    return vt_of(b[0], b[2], depth + 1)
        return None

    placed = defaultdict(list)       # relative file (no .c) -> [(addr, name, body)]
    for name, addr, body in blocks:
        short = name.split('::')[-1]
        role = re.match(r'^(ScalarDeletingDtor|Ctor|Dtor|SetVtable|GetField|Wrap)_', short)
        if role and role.group(1) in HELPERS:
            rel = '_helpers/' + role.group(1)
        elif role:
            vt = vt_of(name, body)
            if vt:
                cls = rtti.get(vt)
                rel = cls if cls else '_vtables/vt' + vt.lower()
            else:
                rel = '_vtables/_unresolved'
        else:
            g = prefix_group(name) or '_misc'
            if g in THIRD_PARTY:
                rel = '_thirdparty/' + g
            elif g == '_misc':
                rel = '_free/_misc'
            else:
                rel = g
        placed[rel].append((addr, name, body))

    if os.path.isdir(a.out):
        shutil.rmtree(a.out)
    index = []
    for rel, items in sorted(placed.items()):
        items.sort()
        path = os.path.join(a.out, rel + '.c')
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, 'w', encoding='utf-8', newline='\n') as f:
            f.write('/* %s - %d functions, sorted by address. Generated by tools/organize_identified.py */\n\n'
                    % (rel, len(items)))
            for addr, name, body in items:
                f.write('/* %s @ %s */\n' % (name, addr))
                f.write('\n'.join(body).strip('\n') + '\n\n')
                index.append((name, addr, rel + '.c'))
    with open(os.path.join(a.out, 'index.csv'), 'w', encoding='utf-8', newline='') as f:
        w = csv.writer(f)
        w.writerow(['name', 'address', 'file'])
        w.writerows(sorted(index))
    with open(os.path.join(a.out, 'INDEX.md'), 'w', encoding='utf-8', newline='\n') as f:
        f.write('# Identified functions (organized)\n\n| file | functions |\n|---|---|\n')
        for rel, items in sorted(placed.items(), key=lambda kv: -len(kv[1])):
            f.write('| %s | %d |\n' % (rel, len(items)))
    top = {}
    for rel, items in placed.items():
        k = rel.split('/')[0] if '/' in rel else '(classes)'
        top[k] = top.get(k, 0) + len(items)
    print('functions: %d, files: %d -> %s' % (len(index), len(placed), a.out))
    print('by area:', top)
    unresolved = len(placed.get('_vtables/_unresolved', []))
    print('unresolved Ctor/Dtor/etc.:', unresolved)


if __name__ == '__main__':
    sys.exit(main())
