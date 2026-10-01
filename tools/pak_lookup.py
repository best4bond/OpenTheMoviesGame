#!/usr/bin/env python3
"""Reference implementation of The Movies .pak path hashing and header/entry parsing,
transcribed from MoviesSE.exe (see FINDINGS.md, ".pak archives"). UNTESTED against a real .pak file:
no pak was available when this was written. Run it on a real file to check the layout.
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

if __name__ == "__main__":
    d = open(sys.argv[1], "rb").read()
    h = parse(d)
    print(h)
    for i in range(min(h["count"], 10)):
        print(entry(d, h, i))
