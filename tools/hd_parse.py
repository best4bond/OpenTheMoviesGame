#!/usr/bin/env python3
"""Parser for The Movies .hd head files (Data\\Heads\\head_*.hd) and Data\\Hairs\\head_shape.dat.
.hd: u32 version (4), two BGRA skin tints (u32 each), texture name32 at 0x0c, reserved zeros to 0x94,
then 2988 vertices of 6 floats (position xyz, unit normal xyz) = 71,860 bytes in every file.
head_shape.dat: u32 triangle count (876), then count*3 u16 indices into the head vertices (written by the dev-time tool near 009d7aa0).
Verified on the 83 .hd files and head_shape.dat in MISC0000.pak.  Usage: hd_parse.py FILE.pak"""
import struct, sys, os, math
sys.path.insert(0, os.path.dirname(__file__))
import pak_lookup as P
NV = 2988
def parse(r):
    ver, t0, t1 = struct.unpack_from("<3I", r, 0)
    name = r[0x0c:0x2c].split(b"\0")[0].decode("latin-1")
    assert ver == 4 and not any(r[0x2c:0x94]) and len(r) == 0x94 + NV * 24
    verts = [struct.unpack_from("<6f", r, 0x94 + 24 * i) for i in range(NV)]
    assert all(abs(math.sqrt(sum(x * x for x in v[3:])) - 1) < 0.05 for v in verts)
    bgra = lambda w: tuple(w.to_bytes(4, "little"))
    return dict(version=ver, tints=(bgra(t0), bgra(t1)), texture=name, verts=verts)
def head_shape(r):
    n, = struct.unpack_from("<I", r, 0); assert len(r) == 4 + 6 * n
    return struct.unpack_from("<%dH" % (3 * n), r, 4)
if __name__ == "__main__":
    data = open(sys.argv[1], "rb").read(); h = P.parse(data); ok = 0
    for i in range(h["count"]):
        e = P.entry(data, h, i); n = e["name"].lower()
        if n.endswith(".hd"): parse(P.read(data, h, e)); ok += 1
        elif n == "head_shape.dat":
            idx = head_shape(P.read(data, h, e)); print("head_shape.dat", len(idx) // 3, "tris, max index", max(idx))
    print(".hd ok:", ok)
