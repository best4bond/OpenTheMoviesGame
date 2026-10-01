#!/usr/bin/env python3
"""Parser for The Movies .lnd landscape files, from FUN_009e5540 (called by FUN_009e5ec0).
Layout: u32 version (1 or 2), u32 N, N x name32 (terrain layer names, e.g. Land_sand00),
257*257 vertices x 3 bytes (each byte used as `& 0x3f`), 8192 bytes occupancy bitmap (256*256 bits),
and, in version 2 files only, another 8192 bytes. Verified: all 25 files in MISC0000.pak match to the byte.
Usage: lnd_parse.py FILE.pak"""
import struct, sys, os
sys.path.insert(0, os.path.dirname(__file__))
import pak_lookup as P
cstr = lambda b: b.split(b"\0")[0].decode("latin-1")
G = 257

def parse(d):
    ver, n = struct.unpack_from("<2I", d, 0)
    names = [cstr(d[8 + 32 * i:40 + 32 * i]) for i in range(n)]
    p = 8 + 32 * n
    verts = d[p:p + G * G * 3]; p += G * G * 3
    gridA = d[p:p + 8192]; p += 8192
    gridB = b""
    if ver >= 2:
        gridB = d[p:p + 8192]; p += 8192
    assert p == len(d), (p, len(d))
    return dict(version=ver, layers=names, verts=verts, gridA=gridA, gridB=gridB)

if __name__ == "__main__":
    data = open(sys.argv[1], "rb").read(); h = P.parse(data)
    for i in range(h["count"]):
        e = P.entry(data, h, i)
        if e["name"].lower().endswith(".lnd"):
            m = parse(P.read(data, h, e))
            pc = lambda g: sum(bin(b).count("1") for b in g)
            print(e["name"], m["version"], m["layers"], "A bits", pc(m["gridA"]), "B bits", pc(m["gridB"]))
