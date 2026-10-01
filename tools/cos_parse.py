#!/usr/bin/env python3
"""Parser for The Movies .cos costume-data files (Data\\Costume\\Datas\\*.cos),
from FUN_009ced70 (costume loader), FUN_009cc940 (header), FUN_009cd880 (part record A),
FUN_009cd980 (part record B), FUN_009cd820 (optional 0x24 block).
Usage: cos_parse.py FILE.pak   -- parses every .cos and checks it consumes the file exactly."""
import struct, sys, os
sys.path.insert(0, os.path.dirname(__file__))
import pak_lookup as P
cstr = lambda b: b.split(b"\0")[0].decode("latin-1")

def parse(d):
    ver, = struct.unpack_from("<I", d, 0)
    h = {"version": ver, "flags4": d[4:8], "b8": d[8], "b9": d[9], "h10": struct.unpack_from("<H", d, 10)[0],
         "names": [cstr(d[o:o + 32]) for o in (0x0c, 0x2c, 0x4c, 0x6c)],
         "d8c": struct.unpack_from("<I", d, 0x8c)[0]}
    p = 0x90
    if ver >= 7:
        h["d90"] = struct.unpack_from("<5I", d, p); p += 20
    h["d_a4"] = 0
    if d[4] & 2:                             # raw dword, not used for the counts
        h["d_a4"], = struct.unpack_from("<I", d, p); p += 4
    na, nb = d[6] & 0x1f, h["d8c"] & 0x1f   # the loader packs these into this+0xa4 bits 2-6 and 7-11
    A, B = [], []
    for _ in range(na):                      # record A: name32, 4 dwords, name32, [4 bytes], [0x24 block]
        r = {"name": cstr(d[p:p + 32]), "u": struct.unpack_from("<4I", d, p + 32), "name2": cstr(d[p + 48:p + 80])}
        p += 0x50
        r["b50"] = d[p:p + 4]; p += 4        # version >= 6
        if r["b50"][0] & 8: r["blk"] = d[p:p + 36]; p += 36
        A.append(r)
    for _ in range(nb):                      # record B: name32, 4 bytes, 3 dwords, name32, [dword], [0x24 block]
        r = {"name": cstr(d[p:p + 32]), "b20": d[p + 32:p + 36], "u": struct.unpack_from("<3I", d, p + 36),
             "name2": cstr(d[p + 48:p + 80])}
        fl = d[p + 33]; p += 0x50
        if fl & 2: r["d50"] = struct.unpack_from("<I", d, p)[0]; p += 4
        if fl & 4: r["blk"] = d[p:p + 36]; p += 36
        B.append(r)
    h["tail"] = d[p:]                         # 0 bytes, 64 bytes (two name fields, stale text; seen when dword 0xa4 == 1), or one all-zero 0x78 record
    h["A"], h["B"], h["end"] = A, B, p
    return h

if __name__ == "__main__":
    data = open(sys.argv[1], "rb").read(); hd = P.parse(data)
    ok = bad = 0
    for i in range(hd["count"]):
        e = P.entry(data, hd, i)
        if not e["name"].lower().endswith(".cos"): continue
        raw = P.read(data, hd, e)
        try:
            h = parse(raw); exact = len(h["tail"]) in (0, 64) or h["tail"] == bytes(120)
        except Exception as x:
            h = None; exact = False; print(e["name"], "ERR", x)
        ok += exact; bad += not exact
        if h and (not exact or "-v" in sys.argv):
            print(e["name"], len(raw), h["end"], h["version"], h["names"][0], len(h["A"]), len(h["B"]))
    print("exact", ok, "not", bad)
