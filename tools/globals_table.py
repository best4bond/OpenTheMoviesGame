"""Builds a table of every global the decompiled export refers to, with a guessed type.

Outputs (in --out, default docs/generated):
  globals.csv   address, symbol, kind, section(.data/.bss/.rdata), uses, type_guess, size_guess, type_votes, first_function
  globals.h     extern declarations (type guessed from how the global is used; confidence column in the CSV)

The type guess is a vote over the casts / comparisons Ghidra left around each use:
  (float)DAT_x, *(float *)&DAT_x -> float        (char)/(byte)/== '\\0' -> uint8_t       (short)/(ushort) -> uint16_t
  (int)/(uint)/undefined4 -> uint32_t            &DAT_x passed or PTR_* -> pointer / address
Anything without evidence stays uint32_t. Size is the gap to the next referenced global (capped), so it is an upper bound.

Usage: python globals_table.py [--exe PATH] [--repo PATH] [--out DIR]
"""
import argparse
import collections
import csv
import os
REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
import re
import struct
import sys

SYM = re.compile(r'(?<![A-Za-z0-9_])(_?)(DAT|PTR_[A-Za-z]+|s_[A-Za-z0-9_]*?|u_[A-Za-z0-9_]*?|PTR_s_[A-Za-z0-9_]*?)_([0-9a-fA-F]{8})(?![0-9A-Za-z])')
HDR = re.compile(r'^//// FUNCTION (\S+) @ ([0-9a-fA-F]+) ////$')

CAST_TYPES = {
    'float': 'float', 'double': 'double', 'float10': 'double',
    'char': 'uint8_t', 'byte': 'uint8_t', 'undefined1': 'uint8_t', 'uchar': 'uint8_t', 'bool': 'uint8_t',
    'short': 'uint16_t', 'ushort': 'uint16_t', 'undefined2': 'uint16_t',
    'int': 'uint32_t', 'uint': 'uint32_t', 'undefined4': 'uint32_t', 'long': 'uint32_t', 'ulong': 'uint32_t',
    'longlong': 'uint64_t', 'ulonglong': 'uint64_t', 'undefined8': 'uint64_t',
}


def sections(path):
    d = open(path, 'rb').read()
    pe = struct.unpack_from('<I', d, 0x3c)[0]
    n = struct.unpack_from('<H', d, pe + 6)[0]
    so = struct.unpack_from('<H', d, pe + 20)[0]
    base = struct.unpack_from('<I', d, pe + 24 + 28)[0]
    out = []
    o = pe + 24 + so
    for i in range(n):
        name, vs, va, rs, ro = struct.unpack_from('<8sIIII', d, o + i * 40)
        out.append((name.rstrip(b'\0').decode(), base + va, vs, rs))
    return out


def classify(secs, va):
    for name, a, vs, rs in secs:
        if a <= va < a + vs:
            if name == '.data' and va - a >= rs:
                return '.bss'
            return name
    return '?'


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--exe', default=r'F:\DecompilingTheMovies\The Movies\MoviesSE.exe')
    ap.add_argument('--repo', default=REPO_ROOT)
    ap.add_argument('--out', default=os.path.join(REPO_ROOT, 'docs', 'generated'))
    a = ap.parse_args()
    os.makedirs(a.out, exist_ok=True)
    secs = sections(a.exe)

    info = {}  # va -> dict
    exp = os.path.join(a.repo, 'data', 'ExportDecompiled')
    for fn in sorted(os.listdir(exp)):
        if not fn.startswith('decomp_'):
            continue
        cur = ''
        for line in open(os.path.join(exp, fn), encoding='utf-8', errors='ignore'):
            h = HDR.match(line.rstrip('\n'))
            if h:
                cur = h.group(1)
                continue
            for m in SYM.finditer(line):
                under, kind, hexa = m.group(1), m.group(2), m.group(3)
                va = int(hexa, 16)
                g = info.setdefault(va, {'sym': {}, 'uses': 0, 'votes': collections.Counter(), 'first': cur, 'kind': kind})
                g['uses'] += 1
                full = m.group(0)
                g['sym'][full] = g['sym'].get(full, 0) + 1
                pre = line[max(0, m.start() - 28):m.start()]
                post = line[m.end():m.end() + 12]
                if kind.startswith('PTR_') or kind.startswith('s_') or kind.startswith('u_'):
                    g['votes']['ptr'] += 1
                    continue
                cm = re.search(r'\(\s*([A-Za-z0-9_]+)\s*(\*?)\s*\)\s*\*?\s*&?\s*$', pre)
                if cm and cm.group(1) in CAST_TYPES:
                    t = CAST_TYPES[cm.group(1)]
                    if cm.group(2) == '*':
                        t += '*'
                    g['votes'][t] += 1
                elif re.match(r"\s*(==|!=)\s*'", post):
                    g['votes']['uint8_t'] += 1
                elif pre.rstrip().endswith('&') and not pre.rstrip().endswith('&&'):
                    g['votes']['addr'] += 1
                if under == '_':
                    g['votes']['underscore'] += 1
                if re.match(r'\s*\[', post):
                    g['votes']['index'] += 1
                if re.search(r'(?:^|[\(\s,=!+-])\*\s*$', pre):
                    g['votes']['deref'] += 1
                if re.match(r'\s*=(?!=)', post):
                    g['votes']['assign'] += 1

    addrs = sorted(info)
    rows = []
    for i, va in enumerate(addrs):
        g = info[va]
        sec = classify(secs, va)
        gap = (addrs[i + 1] - va) if i + 1 < len(addrs) else 4
        votes = {k: v for k, v in g['votes'].items() if k not in ('underscore',)}
        tg = 'uint32_t'
        ptr_like = g['kind'].startswith(('PTR_', 's_', 'u_'))
        helper = ('ptr', 'addr', 'index', 'deref', 'assign')
        scalar = {k: v for k, v in votes.items() if k not in helper}
        if votes.get('index') or votes.get('deref'):
            tg = 'uint32_t*'                 # used as a pointer (dereferenced or indexed)
        elif votes.get('assign') and votes.get('addr'):
            tg = 'void*'                     # a pointer variable that is assigned addresses
        elif scalar and not (votes.get('addr', 0) > sum(scalar.values())):
            tg = max(scalar.items(), key=lambda kv: kv[1])[0]
        elif ptr_like:
            tg = 'void*'
        elif votes.get('addr') and not votes.get('assign'):
            tg = 'array'
        size = {'uint8_t': 1, 'uint16_t': 2, 'uint32_t': 4, 'float': 4, 'double': 8, 'uint64_t': 8}.get(tg.rstrip('*'), 4)
        if tg.endswith('*'):
            size = 4
        name = max(g['sym'].items(), key=lambda kv: kv[1])[0].lstrip('_')
        rows.append([f'{va:08X}', name, g['kind'], sec, g['uses'], tg, min(gap, 64) if gap > size else size,
                     ';'.join(f'{k}={v}' for k, v in votes.items()), g['first']])

    with open(os.path.join(a.out, 'globals.csv'), 'w', newline='', encoding='utf-8') as f:
        w = csv.writer(f)
        w.writerow(['address', 'symbol', 'kind', 'section', 'uses', 'type_guess', 'size_guess', 'type_votes', 'first_function'])
        w.writerows(rows)

    with open(os.path.join(a.out, 'globals.h'), 'w', newline='\n', encoding='utf-8') as f:
        f.write('/* Generated by tools/globals_table.py - types are guesses, see globals.csv */\n#pragma once\n#include <stdint.h>\n\n')
        seen = set()
        for r in rows:
            nm, tg = r[1], r[5]
            if nm in seen:
                continue
            seen.add(nm)
            if r[3] == '?':
                continue
            if tg == 'array':
                f.write(f'extern uint8_t {nm}[1]; /* {r[0]} {r[3]} aggregate (address taken) */\n')
            elif r[2].startswith('s_') or r[2].startswith('u_'):
                f.write(f'extern char {nm}[]; /* {r[0]} {r[3]} */\n')
            elif tg.endswith('*'):
                f.write(f'extern {tg} {nm}; /* {r[0]} {r[3]} */\n')
            else:
                f.write(f'extern {tg} {nm}; /* {r[0]} {r[3]} */\n')

    cnt = collections.Counter(r[5] for r in rows)
    secs_c = collections.Counter(r[3] for r in rows)
    print('globals:', len(rows), dict(cnt), dict(secs_c))


if __name__ == '__main__':
    sys.exit(main())
