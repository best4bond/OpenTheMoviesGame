#!/usr/bin/env python3
"""Parser for Serenity .sdb UI databases (title.sdb, titlebe.sdb = big-endian, titlele.sdb = little-endian)
and the .stx quad file. No code in MoviesSE.exe references these extensions, so the layout is from the data.
.sdb: two u16 (1, 0), u32 total size, u32 count, then count x { char name[32] (0xFF padded), u32 size, u32 hash, u32 offset },
data follows at 12 + 44*count; entries are contiguous. hash = h*53 + c over the UPPERCASED name (incl. extension), mod 2^32.
Usage: sdb_parse.py FILE.pak"""
import struct, sys, os
sys.path.insert(0, os.path.dirname(__file__))
import pak_lookup as P

def serenity_hash(s):
    h = 0
    for c in s.upper().encode("latin-1"): h = (h * 53 + c) & 0xFFFFFFFF
    return h

def parse_sdb(r):
    e = ">" if r[0] == 0 else "<"           # first dword is two u16 (1, 0): 00 01 00 00 (BE) or 01 00 00 00 (LE)
    maj, mnr, tot, n = struct.unpack_from(e + "2H2I", r, 0)
    assert (maj, mnr) == (1, 0) and tot == len(r)
    out = []; pos = 12 + 44 * n
    for k in range(n):
        o = 12 + 44 * k
        nm = r[o:o + 32].split(b"\0")[0].decode("latin-1")
        sz, hs, off = struct.unpack_from(e + "3I", r, o + 32)
        assert off == pos and hs == serenity_hash(nm), nm
        out.append((nm, r[off:off + sz])); pos += sz
    assert pos == len(r)
    return e, out

if __name__ == "__main__":
    data = open(sys.argv[1], "rb").read(); h = P.parse(data)
    for i in range(h["count"]):
        e = P.entry(data, h, i)
        if e["name"].lower().endswith(".sdb"):
            end, ents = parse_sdb(P.read(data, h, e))
            print(e["name"], "BE" if end == ">" else "LE", len(ents), "entries, hashes ok")
