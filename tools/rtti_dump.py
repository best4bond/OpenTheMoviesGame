"""Extracts MSVC RTTI from MoviesSE.exe and builds class / vtable skeletons.

Outputs (in --out, default docs/generated):
  rtti_classes.json   every class with RTTI: demangled name, vtable VA(s), slot function VAs (+names), bases with offsets,
                      constructor candidates and an estimated object size
  classes.h           C skeleton: <class>_vtbl structs (one slot per virtual function, named from the Ghidra renames when
                      known) and an empty struct per class that embeds its first base, with the size as a comment

Size estimate: a constructor is a function that stores a class vtable address into the object; the size is taken from
`operator_new(SIZE)` calls in the decompiled export that are followed by a call to that constructor (most common value),
with the highest field offset touched inside the constructor as a lower bound.

Usage: python rtti_dump.py [--exe PATH] [--repo PATH] [--out DIR]
"""
import argparse
import collections
import csv
import json
import os
REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
import re
import struct
import sys


class Pe:
    def __init__(self, path):
        self.d = open(path, 'rb').read()
        d = self.d
        pe = struct.unpack_from('<I', d, 0x3c)[0]
        n = struct.unpack_from('<H', d, pe + 6)[0]
        so = struct.unpack_from('<H', d, pe + 20)[0]
        self.base = struct.unpack_from('<I', d, pe + 24 + 28)[0]
        self.secs = []
        o = pe + 24 + so
        for i in range(n):
            name, vs, va, rs, ro = struct.unpack_from('<8sIIII', d, o + i * 40)
            self.secs.append((name.rstrip(b'\0').decode(), self.base + va, vs, ro, rs))

    def off(self, va):
        for _, a, vs, ro, rs in self.secs:
            if a <= va < a + max(vs, rs):
                return ro + (va - a) if (va - a) < rs else None
        return None

    def sec(self, va):
        for name, a, vs, ro, rs in self.secs:
            if a <= va < a + vs:
                return name
        return None

    def u32(self, va):
        o = self.off(va)
        return struct.unpack_from('<I', self.d, o)[0] if o is not None and o + 4 <= len(self.d) else None

    def cstr(self, va, maxlen=400):
        o = self.off(va)
        if o is None:
            return None
        e = self.d.find(b'\0', o, o + maxlen)
        return self.d[o:e].decode('latin1') if e > 0 else None


def demangle(rtti_name):
    # ".?AVCFoo@TM@@" -> "TM::CFoo"; templates / odd names are kept readable but unparsed
    m = re.match(r'^\.\?A[VUW]?(.*)@@$', rtti_name)
    if not m:
        return rtti_name
    body = m.group(1)
    if '?$' in body:
        return re.sub(r'[^A-Za-z0-9_$@?]', '_', body)
    parts = [p for p in body.split('@') if p]
    return '::'.join(reversed(parts))


def ident(name):
    return re.sub(r'[^A-Za-z0-9_]', '_', name.replace('::', '_'))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--exe', default=r'F:\DecompilingTheMovies\The Movies\MoviesSE.exe')
    ap.add_argument('--repo', default=REPO_ROOT)
    ap.add_argument('--out', default=os.path.join(REPO_ROOT, 'docs', 'generated'))
    a = ap.parse_args()
    os.makedirs(a.out, exist_ok=True)
    pe = Pe(a.exe)
    d = pe.d

    # ---- type descriptors: (vftable ptr, spare, ".?AV...@@")
    tds = {}
    for m in re.finditer(rb'\.\?A[VUW][A-Za-z0-9_$?@]+@@\x00', d):
        o = m.start() - 8
        if o < 0:
            continue
        va = None
        for name, sa, vs, ro, rs in pe.secs:
            if ro <= m.start() < ro + rs:
                va = sa + (m.start() - ro) - 8
                break
        if va is None:
            continue
        tds[va] = m.group(0)[:-1].decode()
    print('type descriptors:', len(tds))

    # ---- complete object locators in .rdata: sig=0, offset, cdOffset, pTypeDescriptor, pClassHierarchy
    rdata = [s for s in pe.secs if s[0] == '.rdata'][0]
    _, rva0, rvs, rro, rrs = rdata
    cols = {}
    for o in range(rro, rro + rrs - 20, 4):
        sig, off, cdo, ptd, pch = struct.unpack_from('<5I', d, o)
        if sig == 0 and ptd in tds and pe.sec(pch) == '.rdata' and cdo < 0x1000 and off < 0x1000:
            cols[rva0 + (o - rro)] = (off, cdo, ptd, pch)
    print('complete object locators:', len(cols))

    # ---- vtables: the dword before the first slot points at the COL
    vtables = collections.defaultdict(list)  # td va -> [(vtable va, col offset)]
    col_ptr_locs = {}
    for o in range(rro, rro + rrs - 4, 4):
        v = struct.unpack_from('<I', d, o)[0]
        if v in cols:
            col_ptr_locs[rva0 + (o - rro) + 4] = v
    starts = sorted(col_ptr_locs)
    for i, vt in enumerate(starts):
        col = cols[col_ptr_locs[vt]]
        vtables[col[2]].append((vt, col[0]))

    def slots_of(vt, limit_va):
        out = []
        va = vt
        while va < limit_va:
            p = pe.u32(va)
            if p is None or pe.sec(p) != '.text':
                break
            out.append(p)
            va += 4
        return out

    # ---- function names from the export index / renames
    names = {}
    idx = os.path.join(a.repo, 'data', 'ExportDecompiled', 'index.csv')
    if os.path.exists(idx):
        for r in csv.DictReader(open(idx, newline='', encoding='utf-8')):
            names[int(r['address'], 16)] = r['name']
    ren = os.path.join(a.repo, 'renames.csv')
    if os.path.exists(ren):
        for r in csv.DictReader(open(ren, newline='', encoding='utf-8', errors='ignore')):
            try:
                names[int(r['address'], 16)] = r['new_name']
            except (ValueError, KeyError):
                pass

    # ---- class hierarchy (bases + offsets)
    def bases_of(pch):
        n = pe.u32(pch + 8)
        arr = pe.u32(pch + 12)
        out = []
        if n is None or arr is None or n > 64:
            return out
        for i in range(n):
            bcd = pe.u32(arr + 4 * i)
            if not bcd:
                continue
            btd = pe.u32(bcd)
            mdisp = struct.unpack('<i', struct.pack('<I', pe.u32(bcd + 8)))[0]
            out.append((demangle(tds.get(btd, '?')), mdisp))
        return out

    # ---- constructors and sizes from the decompiled export
    vt_ctors = collections.defaultdict(list)       # vtable va -> [function name]
    ctor_maxoff = {}
    size_votes = collections.defaultdict(collections.Counter)
    exp_dir = os.path.join(a.repo, 'data', 'ExportDecompiled')
    all_vts = {vt for lst in vtables.values() for vt, _ in lst}
    hdr = re.compile(r'^//// FUNCTION (\S+) @ ([0-9a-fA-F]+) ////$')
    store_re = re.compile(r'=\s*&PTR_\w*?_([0-9a-fA-F]{8});')
    new_re = re.compile(r'operator_new\((0x[0-9a-fA-F]+|\d+)\)')
    call_re = re.compile(r'\b([A-Za-z_]\w*)\(')
    off_re = re.compile(r'\+ (0x[0-9a-fA-F]+)\)|param_1\[(0x[0-9a-fA-F]+|\d+)\]')
    if os.path.isdir(exp_dir):
        for fn in sorted(os.listdir(exp_dir)):
            if not fn.startswith('decomp_'):
                continue
            cur, body = None, []

            def flush():
                if cur is None:
                    return
                text = body
                vts = set()
                for line in text:
                    m = store_re.search(line)
                    if m and int(m.group(1), 16) in all_vts:
                        vts.add(int(m.group(1), 16))
                if vts:
                    mx = 0
                    for line in text:
                        for m in off_re.finditer(line):
                            v = m.group(1) or ''
                            if v:
                                mx = max(mx, int(v, 16))
                            else:
                                w = m.group(2)
                                mx = max(mx, int(w, 0) * 4)
                    for vt in vts:
                        vt_ctors[vt].append(cur)
                    ctor_maxoff[cur] = mx
                for i, line in enumerate(text):
                    m = new_re.search(line)
                    if m:
                        size = int(m.group(1), 0)
                        for look in text[i + 1:i + 8]:
                            cm = call_re.search(look)
                            while cm:
                                callee = cm.group(1)
                                if callee not in ('operator_new', 'if', 'while', 'return', 'sizeof'):
                                    size_votes[callee][size] += 1
                                    break
                                cm = call_re.search(look, cm.end())
                            else:
                                continue
                            break

            for line in open(os.path.join(exp_dir, fn), encoding='utf-8', errors='ignore'):
                line = line.rstrip('\n')
                m = hdr.match(line)
                if m:
                    flush()
                    cur, body = m.group(1), []
                else:
                    body.append(line)
            flush()
    print('constructor candidates:', sum(len(v) for v in vt_ctors.values()))

    # ---- assemble
    classes = []
    for td, rname in tds.items():
        vts = vtables.get(td, [])
        entry = {'rtti': rname, 'name': demangle(rname), 'type_descriptor': '%08X' % td, 'vtables': []}
        class_ctors = []
        for vt, off in sorted(vts):
            for c0 in vt_ctors.get(vt, []):
                if c0 not in class_ctors:
                    class_ctors.append(c0)
        class_size = None
        for c0 in class_ctors:
            if c0 in size_votes:
                class_size = size_votes[c0].most_common(1)[0][0]
                break
        for vt, off in sorted(vts):
            nxt = [s for s in starts if s > vt]
            limit = nxt[0] - 4 if nxt else vt + 0x800
            sl = slots_of(vt, limit)
            ctors = class_ctors
            size = class_size
            entry['vtables'].append({
                'va': '%08X' % vt, 'this_offset': off, 'slot_count': len(sl),
                'slots': [{'va': '%08X' % s, 'name': names.get(s, 'FUN_%08x' % s)} for s in sl],
                'ctors': ctors[:6], 'size': size,
                'size_lower_bound': max([ctor_maxoff.get(c, 0) for c in ctors] + [0]) + 4 if ctors else None})
        col0 = [c for c in cols.values() if c[2] == td]
        entry['bases'] = bases_of(col0[0][3]) if col0 else []
        classes.append(entry)
    classes.sort(key=lambda c: c['name'])
    with open(os.path.join(a.out, 'rtti_classes.json'), 'w', encoding='utf-8') as f:
        json.dump({'classes': classes}, f, indent=1)
    print('classes written:', len(classes), 'with vtables:', sum(1 for c in classes if c['vtables']))

    # ---- C skeleton
    seen = set()
    with open(os.path.join(a.out, 'classes.h'), 'w', encoding='utf-8', newline='\n') as f:
        f.write('/* Generated by tools/rtti_dump.py from MoviesSE.exe RTTI. Do not edit by hand. */\n#pragma once\n')
        f.write('#include <stdint.h>\n\n')
        for c in classes:
            nm = ident(c['name'])
            if nm in seen or not c['vtables']:
                continue
            seen.add(nm)
            v = next((x for x in c['vtables'] if x['this_offset'] == 0), c['vtables'][0])
            f.write('/* %s: vtable %s, %d slots%s%s */\n' % (
                c['name'], v['va'], v['slot_count'],
                (', object size ~%d (0x%X)' % (v['size'], v['size'])) if v['size'] else '',
                (', bases: ' + ', '.join('%s@%d' % b for b in c['bases'][1:])) if len(c['bases']) > 1 else ''))
            f.write('typedef struct %s_vtbl {\n' % nm)
            for i, s in enumerate(v['slots']):
                f.write('    void* slot_%02X; /* %s %s */\n' % (i, s['va'], s['name']))
            f.write('} %s_vtbl;\n' % nm)
            for sv in c['vtables']:
                if sv is v:
                    continue
                f.write('/* secondary vtable %s for the base subobject at offset %d: %d slots */\n' % (
                    sv['va'], sv['this_offset'], sv['slot_count']))
                f.write('typedef struct %s_vtbl_at%d {\n' % (nm, sv['this_offset']))
                for i, s2 in enumerate(sv['slots']):
                    f.write('    void* slot_%02X; /* %s %s */\n' % (i, s2['va'], s2['name']))
                f.write('} %s_vtbl_at%d;\n' % (nm, sv['this_offset']))
            f.write('typedef struct %s { %s_vtbl* vtbl; uint8_t fields[%d]; } %s;\n\n' % (
                nm, nm, max(0, (v['size'] or v['size_lower_bound'] or 4) - 4), nm))
    print('classes.h written')


if __name__ == '__main__':
    sys.exit(main())
