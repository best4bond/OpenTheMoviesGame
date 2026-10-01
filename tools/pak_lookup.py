#!/usr/bin/env python3
"""Reference implementation of The Movies .pak path hashing and header/entry parsing,
transcribed from MoviesSE.exe (see FINDINGS.md, ".pak archives").
Checked on one version-4 pak (premium_costumes0000.pak, 45 entries): header, bucket table, both hashes
and decoding all match. Versions 5 and 6 are still unchecked.

Usage: pak_lookup.py FILE.pak            list header and entries
       pak_lookup.py FILE.pak --verify   check hashes, buckets and sizes
       pak_lookup.py FILE.pak --extract DIR
"""
import struct, sys, zlib

def norm(path):
    if path.startswith("./"):
        path = path[2:]
    return path.replace("/", "\\")

def hashes(path):
    path = norm(path)
    h1 = h2 = 0
    for ch in path.encode("latin-1"):
        c = ch - 256 if ch > 127 else ch          # decompiler shows sign-extended char
        h1 = (h1 * 0x17 + (c & 0xFFFFFFDF)) & 0xFFFFFFFF
    for ch in path.encode("latin-1"):
        h2 = (h2 * 5 + ord(chr(ch).lower())) & 0xFFFFFFFF
    return h1, h2

def dirs(data, hdr):
    blob = data[hdr["blob_off"]: hdr["blob_off"] + hdr["blobsize"]]
    return blob

def full_path(data, hdr, e):
    blob = dirs(data, hdr)
    return blob[e["dir_offset"]:].split(b"\0")[0].decode("latin-1") + e["name"]

def parse(data):
    ver, = struct.unpack_from("<I", data, 0)
    if ver not in (4, 5, 6):
        raise ValueError(f"unsupported version {ver}")
    f = struct.unpack_from("<10I" if ver == 4 else "<13I", data, 0)
    count, nbuckets, blobsize = f[3], f[4], f[6]
    if ver == 4:
        ent_off, bkt_off, blob_off = f[7], f[8], f[9]
    else:
        ent_off, bkt_off, blob_off = f[10], f[11], f[12]
    return dict(version=ver, count=count, nbuckets=nbuckets, blobsize=blobsize,
                ent_off=ent_off, bkt_off=bkt_off, blob_off=blob_off)

def entry(data, hdr, i):
    off = hdr["ent_off"] + i * 0x38
    h1, h2, offset, packed, unpacked, flags = struct.unpack_from("<6I", data, off)
    name = data[off + 0x18: off + 0x38].split(b"\0")[0].decode("latin-1")
    return dict(hash1=h1, hash2=h2, offset=offset, packed=packed, unpacked=unpacked,
                dir_offset=(flags >> 1) & 0x3FFF, flag0=flags & 1, name=name)

def read(data, hdr, e):
    """Return the file bytes: inner header +4 unpacked, +8 compressed, +0xc flags (bit0 stored), data at +0x10."""
    blk = data[e["offset"]: e["offset"] + e["packed"]]
    _, usize, csize, fl = struct.unpack_from("<4I", blk, 0)
    body = blk[0x10:]
    return body[:usize] if fl & 1 else zlib.decompress(body[:csize])

def verify(d, h):
    bad = 0
    keys = []
    for i in range(h["count"]):
        e = entry(d, h, i)
        keys.append((e["hash1"] & 0xFF, e["hash1"]))
        start, end = struct.unpack_from("<2I", d, h["bkt_off"] + (e["hash1"] & 0xFF) * 8)
        ok = start <= i < end and hashes(full_path(d, h, e)) == (e["hash1"], e["hash2"]) \
            and len(read(d, h, e)) == e["unpacked"]
        bad += not ok
        if not ok:
            print("MISMATCH", i, e["name"])
    print("sorted by (hash1&0xff, hash1):", keys == sorted(keys))
    print(f"{h['count'] - bad}/{h['count']} entries verified")

if __name__ == "__main__":
    import os
    d = open(sys.argv[1], "rb").read()
    h = parse(d)
    if "--verify" in sys.argv:
        verify(d, h)
    elif "--extract" in sys.argv:
        out = sys.argv[sys.argv.index("--extract") + 1]
        for i in range(h["count"]):
            e = entry(d, h, i)
            path = os.path.join(out, full_path(d, h, e).replace("\\", os.sep))
            os.makedirs(os.path.dirname(path), exist_ok=True)
            open(path, "wb").write(read(d, h, e))
    else:
        print(h)
        for i in range(h["count"]):
            e = entry(d, h, i)
            print(full_path(d, h, e), e["offset"], e["packed"], e["unpacked"])
