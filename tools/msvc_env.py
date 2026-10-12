"""Shared helper: environment of the VS2022 x86 command prompt, and a way to ask cl which identifiers its headers define."""
import os
import re
import shutil
import subprocess
import tempfile

VCVARS = r'C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars32.bat'


def msvc_env():
    bat = os.path.join(tempfile.gettempdir(), 'tm_vcvars_env.bat')
    with open(bat, 'w') as f:
        f.write('@echo off\r\ncall "' + VCVARS + '" > nul\r\nset\r\n')
    out = subprocess.run(['cmd', '/c', bat], capture_output=True, text=True).stdout
    env = {}
    for line in out.splitlines():
        if '=' in line:
            k, v = line.split('=', 1)
            env[k] = v
    return env


def cl_path(env):
    return shutil.which('cl', path=env.get('PATH') or env.get('Path')) or 'cl'


def header_words(shim_dir):
    """All identifiers present in the preprocessed shim (so in windows.h / CRT headers): any Ghidra type name in this set
    is already defined and must not be re-declared as an incomplete struct."""
    env = msvc_env()
    probe = os.path.join(tempfile.gettempdir(), 'tm_shim_probe.c')
    with open(probe, 'w') as f:
        f.write('#include "ghidra_shim.h"\r\n')
    r = subprocess.run([cl_path(env), '/nologo', '/TC', '/E', '/I', shim_dir, probe], capture_output=True, text=True, env=env)
    return set(re.findall(r'[A-Za-z_][A-Za-z0-9_]*', r.stdout))
