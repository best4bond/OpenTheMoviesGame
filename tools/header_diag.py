"""Compiles gen/decl_all.h + globals.h alone and prints each error with the offending line (header problems hide every
function error behind MSVC's 100-error limit, so they have to be clean first)."""
import os
REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
import re
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import msvc_env

gen = sys.argv[1] if len(sys.argv) > 1 else os.path.join(REPO_ROOT, 'gen')
limit = int(sys.argv[2]) if len(sys.argv) > 2 else 40
env = msvc_env.msvc_env()
cl = msvc_env.cl_path(env)
with open(os.path.join(gen, 'probe.c'), 'w') as f:
    f.write('#include "types_gen.h"\r\n#include "decl_all.h"\r\n#include "globals.h"\r\n')
r = subprocess.run([cl, '/nologo', '/TC', '/Zs', '/W0', 'probe.c'], capture_output=True, text=True, env=env, cwd=gen)
files = {}
n = 0
for l in (r.stdout + r.stderr).splitlines():
    m = re.search(r'([A-Za-z_]+\.h)\((\d+)\): (?:fatal )?error (C\d+): (.*)', l)
    if not m:
        continue
    fn, ln, code, msg = m.group(1), int(m.group(2)), m.group(3), m.group(4)
    if fn not in files:
        files[fn] = open(os.path.join(gen, fn), encoding='utf-8', errors='ignore').read().split('\n')
    src = files[fn][ln - 1] if ln - 1 < len(files[fn]) else ''
    print(fn, ln, code, msg[:80], '|', src[:130])
    n += 1
    if n >= limit:
        break
print('errors shown:', n)
