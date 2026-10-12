"""Fail if tracked/staged files look like game-derived material.

Usage: python tools/audit_firewall.py [--all]   (default: git-tracked + staged; --all scans the work tree)
Checks: forbidden extensions, raw Ghidra FUN_ bodies, large hex byte runs, big files.

Exception: data/identified_organized/ (decompiled functions, one .c per class) is deliberately tracked, so it is
exempt from the content checks (FUN_ bodies, hex runs, size). Binary extensions are still forbidden there.
"""
import re, subprocess, sys, pathlib

ROOT = pathlib.Path(__file__).resolve().parent.parent
BAD_EXT = {".exe", ".dll", ".pdb", ".obj", ".lib", ".bin", ".flm", ".gpr", ".rep", ".whl"}
MAX_BYTES = 2_000_000
FUN_BODY = re.compile(r"^\s*(?:undefined\d?|int|uint|void|char|float)\b[^;\n]*\bFUN_[0-9a-fA-F]{8}\s*\([^;]*\)\s*\{?\s*$", re.M)
HEX_RUN = re.compile(r"(?:\b(?:0x)?[0-9a-fA-F]{2}\b[ ,]+){32,}")
SELF = pathlib.Path(__file__).resolve()
ALLOWED_DECOMPILED = ROOT / "data" / "identified_organized"
TEXT_EXT = {".c", ".cpp", ".h", ".hpp", ".py", ".md", ".txt", ".json", ".csv", ".ps1"}

def files(all_):
    if all_:
        return [p for p in ROOT.rglob("*") if p.is_file() and ".git" not in p.parts]
    out = subprocess.run(["git", "ls-files", "-co", "--exclude-standard"], cwd=ROOT,
                         capture_output=True, text=True, check=True).stdout.split("\n")
    return [ROOT / f for f in out if f and (ROOT / f).is_file()]

def check(p):
    if p == SELF:
        return []
    errs = []
    if p.suffix.lower() in BAD_EXT:
        errs.append("forbidden extension")
    if ALLOWED_DECOMPILED in p.parents:
        return errs
    if p.stat().st_size > MAX_BYTES:
        errs.append("file larger than 2 MB")
    if p.suffix.lower() in TEXT_EXT:
        t = p.read_text(errors="ignore")
        if p.suffix.lower() in {".c", ".cpp", ".h"} and FUN_BODY.search(t) and "{" in t:
            errs.append("raw Ghidra FUN_ function definition")
        if HEX_RUN.search(t):
            errs.append("long hex byte run")
    return errs

def main():
    bad = 0
    for p in files("--all" in sys.argv):
        for e in check(p):
            print(f"FAIL {p.relative_to(ROOT)}: {e}")
            bad += 1
    print("audit failed" if bad else "audit passed")
    return 1 if bad else 0

if __name__ == "__main__":
    sys.exit(main())
