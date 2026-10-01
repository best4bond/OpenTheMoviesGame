#!/usr/bin/env python3
"""Parser for The Movies .msh (version 10) meshes, written from LH_LoadMeshBinary (009deb10)
and checked byte-for-byte on the costume meshes in premium_costumes0000.pak.
Usage: msh_parse.py FILE.pak [--all]      (reads every *.msh, unwrapping the zcmp layer)
       msh_parse.py FILE.msh              (a loose mesh, zcmp or raw)
Only the layout up to the end of the skeleton is understood; the trailer is returned raw."""
import struct, sys, os
sys.path.insert(0, os.path.dirname(__file__))
import pak_lookup as P

al = lambda x: (x + 3) & ~3
cstr = lambda b: b.split(b"\0")[0].decode("latin-1")

def parse(d):
    if d[:4] == b"zcmp":
        d = P.unzcmp(d)
    ver, ntex, nmat, nsub = struct.unpack_from("<4I", d, 0)
    assert ver == 10, ver
    ctl = d[0x16]
    p = 0x18 + 4 * sum(1 for b in (1, 6, 7) if ctl >> b & 1)     # optional dwords, usually 0
    assert p == 0x24, (hex(ctl), hex(p))
    m = {"header": d[:0x24], "textures": [], "materials": [], "submeshes": []}
    for _ in range(ntex):
        m["textures"].append(cstr(d[p:p + 32])); p += 32
    for _ in range(nmat):
        n = 0x18 if d[p + 0x0e] & 4 else 0x14
        m["materials"].append(d[p:p + n]); p += n
    for _ in range(nsub):
        nprim, _, _, flags = d[p:p + 4]
        mat = d[p + 4:p + 52]                                    # 12 dwords, copied to the 0x80 record
        p += 52
        extra = None
        if flags & 0x10:
            extra = struct.unpack_from("<2H", d, p); p += 4
        sub = {"nprim": nprim, "flags": flags, "matrix12": struct.unpack("<12f", mat), "extra": extra, "prims": []}
        for _ in range(nprim):
            pr = {}
            pr["u0"], ntri, nvert = struct.unpack_from("<3I", d, p)
            pr["flags"] = fl = d[p + 12:p + 16]
            q = p + 16
            if fl[0] & 0x10: pr["ids"] = struct.unpack_from("<3I", d, q); q += 12
            if fl[0] & 0x20: pr["quant"] = struct.unpack_from("<14f", d, q); q += 0x38
            if fl[0] & 0x40: pr["u40"] = struct.unpack_from("<I", d, q)[0]; q += 4
            pr["ntri"], pr["nvert"] = ntri, nvert
            idx = struct.unpack_from("<%dH" % (ntri * 3), d, q); q += ntri * 6
            assert not idx or max(idx) < nvert, "index out of range"
            pr["indices"] = idx
            q = al(q)
            if fl[0] & 0x20:                                      # quantized: 8 x u16
                pr["verts_raw"] = [struct.unpack_from("<8H", d, q + 16 * i) for i in range(nvert)]
                q += 16 * nvert
                if fl[1] & 1:                                     # 2nd UV: 2 x u16 per vertex
                    pr["uv2_raw"] = [struct.unpack_from("<2H", d, q + 4 * i) for i in range(nvert)]
                    q += 4 * nvert
                q = al(q)
            else:                                                 # direct: 8 floats
                pr["verts"] = [struct.unpack_from("<8f", d, q + 32 * i) for i in range(nvert)]
                q += 32 * nvert
            if fl[0] & 1:                                         # 0x14 bytes per vertex
                pr["vtx_extra"] = d[q:q + 20 * nvert]; q += 20 * nvert
            if fl[0] & 0x40:                                      # (vertex, value) pairs, count from the 0x40 dword
                pr["pairs"] = struct.unpack_from("<%dI" % (2 * pr["u40"]), d, q); q += 8 * pr["u40"]
            pr["end"] = p = q
            sub["prims"].append(pr)
        m["submeshes"].append(sub)
    m["pos_after_prims"] = p
    m["rest"] = d[p:]
    return m

def skeleton(rest):
    """After the last primitive: dword (unknown), bone count, then bones of 0x54 bytes:
    name[32], parent (int32, -1 = root), 12 floats (3x4 matrix). Returns (unknown, bones, tail)."""
    unk, n = struct.unpack_from("<2I", rest, 0)
    bones = []
    p = 8
    for _ in range(n):
        bones.append((cstr(rest[p:p + 32]), struct.unpack_from("<i", rest, p + 32)[0],
                      struct.unpack_from("<12f", rest, p + 36))); p += 0x54
    return unk, bones, rest[p:]

if __name__ == "__main__":
    f = sys.argv[1]
    if f.endswith(".pak"):
        data = open(f, "rb").read(); h = P.parse(data)
        for i in range(h["count"]):
            e = P.entry(data, h, i)
            if not e["name"].lower().endswith(".msh"): continue
            raw = P.read(data, h, e)
            try: m = parse(raw)
            except Exception as ex: print(e["name"], "FAIL", repr(ex)[:90], len(P.unzcmp(raw))); continue
            pr = [(p["ntri"], p["nvert"], p["flags"].hex()) for s_ in m["submeshes"] for p in s_["prims"]]
            print(e["name"], m["textures"], pr, "rest", len(m["rest"]), end="")
            unk, bones, tail = skeleton(m["rest"])
            print(" bones", len(bones), bones[0][0], bones[-1][0], "tail", len(tail), cstr(tail[:32]))
    else:
        m = parse(open(f, "rb").read()); print(m["textures"], m["pos_after_prims"], len(m["rest"]))
