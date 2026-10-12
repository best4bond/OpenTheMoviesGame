"""Builds coverage_functions.txt (one function entry VA per line: "<hex VA> <name>") for the CoverageTracer.

Sources, merged: the Ghidra export index (all functions at export time), renames.csv and library_map.csv from the
decompilation repo, and any extra address lists given on the command line (one hex VA per line).

Usage: python gen_function_list.py [--repo PATH] [--out PATH] [extra_list.txt ...]
"""
import argparse
import csv
import os
REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
import re
import sys

TEXT_LO, TEXT_HI = 0x401000, 0xD16000


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--repo', default=REPO_ROOT)
    ap.add_argument('--out', default=r'F:\DecompilingTheMovies\The Movies\coverage_functions.txt')
    ap.add_argument('extra', nargs='*')
    a = ap.parse_args()

    funcs = {}

    def add(addr, name=''):
        if TEXT_LO <= addr < TEXT_HI:
            if addr not in funcs or (name and not name.startswith('FUN_')):
                funcs[addr] = name or funcs.get(addr, '')

    with open(os.path.join(a.repo, 'data', 'ExportDecompiled', 'index.csv'), newline='', encoding='utf-8') as f:
        for r in csv.DictReader(f):
            add(int(r['address'], 16), r['name'])

    lib = os.path.join(a.repo, 'library_map.csv')
    if os.path.exists(lib):
        with open(lib, newline='', encoding='utf-8', errors='ignore') as f:
            for r in csv.DictReader(f):
                try:
                    add(int(r['addr'], 16), r['name'])
                except (ValueError, KeyError):
                    pass

    ren = os.path.join(a.repo, 'renames.csv')
    if os.path.exists(ren):
        with open(ren, newline='', encoding='utf-8', errors='ignore') as f:
            for row in csv.reader(f):
                for cell in row[:2]:
                    m = re.fullmatch(r'(?:0x)?([0-9a-fA-F]{6,8})', cell.strip())
                    if m:
                        add(int(m.group(1), 16), row[1] if len(row) > 1 and not re.fullmatch(r'[0-9a-fA-F]{6,8}', row[1]) else '')
                        break

    for extra in a.extra:
        with open(extra, encoding='utf-8') as f:
            for line in f:
                m = re.match(r'\s*(?:0x)?([0-9a-fA-F]{6,8})\b\s*(\S*)', line)
                if m:
                    add(int(m.group(1), 16), m.group(2))

    os.makedirs(os.path.dirname(a.out), exist_ok=True)
    with open(a.out, 'w', encoding='utf-8', newline='\n') as f:
        for addr in sorted(funcs):
            f.write('%08X %s\n' % (addr, funcs[addr]))
    print('wrote %d function entries to %s' % (len(funcs), a.out))


if __name__ == '__main__':
    sys.exit(main())
