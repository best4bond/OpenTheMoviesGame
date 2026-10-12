"""Syntax-checks the generated C sources with MSVC (cl /Zs) and reports how much of the export is compilable.

Writes docs/generated/compile_report.json and compile_report.md:
  - functions with no reported error / total
  - histogram of error codes, and the most frequent undeclared identifiers (what the shim or globals.h still lacks)
Errors are attributed to functions through gen/functions.json (line ranges), so one broken function does not hide the rest.

Usage: python compile_check.py [--gen DIR] [--jobs N] [--limit FILES]
"""
import argparse
import collections
import concurrent.futures
import json
import os
REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
import re
import subprocess
import sys

VCVARS = r'C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars32.bat'
ERR = re.compile(r'^(?P<file>[^()\r\n]+)\((?P<line>\d+)(?:,\d+)?\)\s*:\s*(?P<kind>fatal error|error|warning)\s+(?P<code>C\d+)\s*:\s*(?P<msg>.*)$')


def msvc_env():
    import tempfile
    bat = os.path.join(tempfile.gettempdir(), 'tm_vcvars_env.bat')
    with open(bat, 'w') as f:
        f.write('@echo off' + chr(13) + chr(10) + 'call "' + VCVARS + '" > nul' + chr(13) + chr(10) + 'set' + chr(13) + chr(10))
    out = subprocess.run(['cmd', '/c', bat], capture_output=True, text=True).stdout
    env = {}
    for line in out.splitlines():
        if '=' in line:
            k, v = line.split('=', 1)
            env[k] = v
    return env


def check(env, gen, fname):
    src = os.path.join(gen, 'src', fname)
    import shutil
    cl = shutil.which('cl', path=env.get('PATH') or env.get('Path')) or 'cl'
    r = subprocess.run([cl, '/nologo', '/TC', '/Zs', '/W0', '/wd4244', '/wd4047', '/wd4024', '/wd4013', '/wd4133', '/wd4101',
                        '/Fo:NUL', src], capture_output=True, text=True, env=env, cwd=gen)
    return fname, r.stdout + r.stderr


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--gen', default=os.path.join(REPO_ROOT, 'gen'))
    ap.add_argument('--out', default=os.path.join(REPO_ROOT, 'docs', 'generated'))
    ap.add_argument('--jobs', type=int, default=8)
    ap.add_argument('--limit', type=int, default=0)
    a = ap.parse_args()
    funcs = json.load(open(os.path.join(a.gen, 'functions.json')))
    by_file = collections.defaultdict(list)
    for fu in funcs:
        by_file[fu['file']].append(fu)
    files = sorted(by_file)
    if a.limit:
        files = files[:a.limit]
    env = msvc_env()
    codes = collections.Counter()
    undecl = collections.Counter()
    failed = set()
    header_errors = collections.Counter()
    fatal_files = []
    with concurrent.futures.ThreadPoolExecutor(a.jobs) as ex:
        for fname, text in ex.map(lambda f: check(env, a.gen, f), files):
            ranges = by_file[fname]
            starts = [r['first'] for r in ranges]
            nerr = 0
            for line in text.splitlines():
                m = ERR.match(line.strip())
                if not m or m.group('kind') == 'warning':
                    continue
                if not m.group('file').endswith(fname):
                    header_errors[(os.path.basename(m.group('file')), m.group('code'))] += 1
                    continue          # error inside a shared header
                nerr += 1
                codes[m.group('code')] += 1
                ln = int(m.group('line'))
                lo, hi = 0, len(ranges)
                while lo < hi:
                    mid = (lo + hi) // 2
                    if starts[mid] <= ln:
                        lo = mid + 1
                    else:
                        hi = mid
                if lo > 0 and ranges[lo - 1]['first'] <= ln <= ranges[lo - 1]['last']:
                    failed.add(ranges[lo - 1]['name'])
                mm = re.search(r"'([^']+)'\s*:\s*undeclared identifier", m.group('msg'))
                if mm:
                    undecl[mm.group(1)] += 1
                if m.group('kind') == 'fatal error':
                    fatal_files.append((fname, m.group('msg')))
            print('%s: %d errors' % (fname, nerr), flush=True)

    total = sum(len(by_file[f]) for f in files)
    ok = total - len([n for f in files for n in [fu['name'] for fu in by_file[f]] if n in failed])
    report = {'all_undeclared': dict(undecl), 'files': len(files), 'functions': total, 'functions_without_error': ok,
              'error_codes': codes.most_common(40), 'top_undeclared': undecl.most_common(60), 'fatal': fatal_files[:10]}
    os.makedirs(a.out, exist_ok=True)
    json.dump(report, open(os.path.join(a.out, 'compile_report.json'), 'w'), indent=1)
    with open(os.path.join(a.out, 'compile_report.md'), 'w', encoding='utf-8') as f:
        f.write('# Compile check of the generated sources (cl /Zs, C mode)\n\n')
        f.write('Functions with no reported error: **%d of %d** (%.1f%%) across %d files\n\n' % (ok, total, 100.0 * ok / max(total, 1), len(files)))
        f.write('## Error codes\n\n')
        for c, n in codes.most_common(25):
            f.write('- %s: %d\n' % (c, n))
        f.write('\n## Most frequent undeclared identifiers\n\n')
        for c, n in undecl.most_common(40):
            f.write('- `%s`: %d\n' % (c, n))
        if fatal_files:
            f.write('\n## Fatal errors\n\n')
            for fn_, msg in fatal_files[:10]:
                f.write('- %s: %s\n' % (fn_, msg))
    print('functions without error: %d of %d' % (ok, total))
    if header_errors:
        print('header errors (summed over files):', header_errors.most_common(8))


if __name__ == '__main__':
    sys.exit(main())
