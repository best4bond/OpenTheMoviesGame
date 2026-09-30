#!/usr/bin/env python3
"""Match functions in ExportDecompiled/ against the Fable decomp (BuffJesus/FableDecomp).

Fable and The Movies share a statically linked Lionhead audio/utility library compiled
the same way, so many functions have identical sizes and near-identical pseudo-C.

Two independent signals are combined:
  body : 4-gram shingle similarity of normalised decompiler output
  size : runs of consecutive functions whose address gaps (sizes) are equal in both binaries

Usage: match_fable.py /path/to/FableDecomp [out.csv]
Only matches inside the shared-library window are kept; outside it size runs are coincidence.
"""
import re, sys, os, glob, csv, bisect, collections, pathlib

ROOT = pathlib.Path(__file__).resolve().parent.parent
LO, HI = 0x00BC0000, 0x00C9A000   # window of our binary that holds the shared library
K = 6                              # length of a size-run seed

HDR = re.compile(r'^//// FUNCTION (\S+) @ ([0-9a-f]{8}) ////$', re.M)
VAR = re.compile(r'\b(?:param_\d+|local_[0-9a-f]+|[a-z]{1,2}Var\d+|[a-z]Stack_?[0-9a-f]+|pv?Stack_[0-9a-f]+|'
                 r'puStack_[0-9a-f]+|in_[A-Za-z0-9_]+|unaff_[A-Za-z0-9_]+|extraout_[A-Za-z0-9_]+|this_\d+|'
                 r'_Memory|_Dest|_Format)\b')
TOK = re.compile(r'"(?:[^"\\]|\\.)*"|0x[0-9a-fA-F]+|\w+|[^\s\w]')


def norm(body):
    b = re.sub(r'/\*.*?\*/', '', body, flags=re.S)
    b = re.sub(r'\bFUN_[0-9a-f]{8}\b', 'FUNC', b)
    b = re.sub(r'\b(?:DAT|PTR|LAB|s|u|_DAT|thunk_FUN)_[0-9a-f_A-Za-z]*[0-9a-f]{6,8}\b', 'GLOB', b)
    b = VAR.sub('V', b)
    b = re.sub(r'\b(?:undefined\d?|uint|int|char|byte|ushort|short|float10|float|double|bool|ulonglong|'
               r'longlong|dword|word|void|size_t)\b', 'T', b)
    return TOK.findall(b)


def shingles(toks, n=4):
    return {tuple(toks[i:i + n]) for i in range(max(0, len(toks) - n + 1))}


def jac(a, b):
    return len(a & b) / len(a | b) if a and b else 0.0


def load_ours():
    F = {}
    for f in sorted(glob.glob(str(ROOT / 'ExportDecompiled' / 'decomp_*.c'))):
        t = open(f, errors='replace').read()
        ms = list(HDR.finditer(t))
        for i, m in enumerate(ms):
            end = ms[i + 1].start() if i + 1 < len(ms) else len(t)
            F[m.group(2)] = dict(name=m.group(1), body=t[m.end():end])
    return F


def load_fable(fable):
    g = pathlib.Path(fable) / 'ghidra_out'
    names = {}
    for line in open(g / 'engine_api.tsv', errors='replace'):
        p = line.rstrip('\n').split('\t')
        if len(p) >= 7 and re.fullmatch(r'[0-9a-f]{8}', p[0]):
            names[p[0]] = p[6]
    bodies = {}
    for f in sorted(g.glob('naming_corpus*.txt')):
        for blk in open(f, errors='replace').read().split('@@@FUNC ')[1:]:
            head, _, rest = blk.partition('\n')
            bodies[head.split()[0]] = rest.split('@@DECOMP', 1)[-1].split('@@ENDFUNC')[0]
    labels = {}
    for f in sorted(g.glob('labels_*.tsv')):
        for line in open(f, errors='replace'):
            p = line.rstrip('\n').split('\t')
            if len(p) >= 3 and re.fullmatch(r'[0-9a-f]{8}', p[0]):
                labels[p[0]] = p[2]
    return names, bodies, labels


def gaps(lst):
    v = [int(a, 16) for a in lst]
    return [v[i + 1] - v[i] for i in range(len(v) - 1)] + [0]


def main():
    fable = sys.argv[1]
    out = sys.argv[2] if len(sys.argv) > 2 else str(ROOT / 'fable_matches.csv')
    ours = load_ours()
    names, fbodies, labels = load_fable(fable)

    # --- body similarity via inverted index of shingles ---
    po = {a: shingles(t) for a, v in ours.items() if len(t := norm(v['body'])) >= 25}
    pf = {b: shingles(t) for b, v in fbodies.items() if len(t := norm(v)) >= 25}
    inv = collections.defaultdict(list)
    for b, sh in pf.items():
        for s in sh:
            inv[hash(s)].append(b)
    inv = {k: v for k, v in inv.items() if len(v) <= 40}
    best = {}
    for a, sh in po.items():
        cnt = collections.Counter()
        for s in sh:
            for b in inv.get(hash(s), ()):
                cnt[b] += 1
        cand = [(jac(sh, pf[b]), b) for b, _ in cnt.most_common(3)]
        if cand:
            best[a] = max(cand)
    byb = collections.defaultdict(list)
    for a, (j, b) in best.items():
        byb[b].append((j, a))
    body = {a: (b, j) for a, (j, b) in best.items() if j >= 0.6 and max(byb[b])[1] == a}

    # --- size runs ---
    oa = sorted(ours, key=lambda a: int(a, 16))
    fa = sorted(names, key=lambda a: int(a, 16))
    og, fg = gaps(oa), gaps(fa)
    idx = collections.defaultdict(list)
    for i in range(len(fg) - K):
        idx[tuple(fg[i:i + K])].append(i)
    ext = {}
    for i in range(len(og) - K):
        key = tuple(og[i:i + K])
        l = idx.get(key)
        if l and len(l) == 1 and sum(key):
            for d in range(K):
                ext[i + d] = l[0] + d
    changed = True
    while changed:
        changed = False
        for i, j in list(ext.items()):
            for d in (-1, 1):
                ni, nj = i + d, j + d
                if 0 <= ni < len(og) and 0 <= nj < len(fg) and ni not in ext and og[ni] == fg[nj]:
                    ext[ni] = nj
                    changed = True
    size = {oa[i]: fa[j] for i, j in ext.items() if LO <= int(oa[i], 16) < HI}
    pos = {a: i for i, a in enumerate(oa)}
    fpos = {a: i for i, a in enumerate(fa)}

    def conf(a, b):
        if b in pf and a in po:
            return jac(po[a], pf[b])
        return None

    srt = sorted(size, key=lambda a: pos[a])
    runs, cur = [], []
    for a in srt:
        if cur and pos[a] == pos[cur[-1]] + 1 and fpos[size[a]] == fpos[size[cur[-1]]] + 1:
            cur.append(a)
        else:
            if cur:
                runs.append(cur)
            cur = [a]
    if cur:
        runs.append(cur)

    final = {}
    for r in runs:
        cs = [conf(a, size[a]) for a in r]
        known = [c for c in cs if c is not None]
        ok = sum(1 for c in known if c >= 0.6)
        good = len(r) >= 6 and (not known or (ok >= 1 and ok / len(known) >= 0.5))
        for a, c in zip(r, cs):
            if good:
                final[a] = (size[a], c, 'size-run', len(r))
            elif c is not None and c >= 0.8:
                final[a] = (size[a], c, 'body', 0)
    for a, (b, j) in body.items():
        if a not in final and j >= 0.6 and LO <= int(a, 16) < HI:
            final[a] = (b, j, 'body', 0)

    # keep one ours function per Fable target (highest confidence)
    tgt = {}
    for a, (b, j, m, n) in final.items():
        score = (j or 0) + (0.5 if m == 'size-run' else 0)
        if b not in tgt or score > tgt[b][0]:
            tgt[b] = (score, a)
    rows = []
    for a, (b, j, m, n) in sorted(final.items()):
        if tgt[b][1] != a:
            continue
        rows.append([a, ours[a]['name'], b, names.get(b, ''), m, '' if j is None else f'{j:.2f}', n,
                     labels.get(b, '')[:120].replace('\n', ' ')])
    with open(out, 'w', newline='') as fh:
        w = csv.writer(fh)
        w.writerow(['ours_addr', 'ours_name', 'fable_addr', 'fable_name', 'method', 'body_similarity',
                    'size_run_len', 'fable_label_note'])
        w.writerows(rows)
    print(f'{len(rows)} matches written to {out}')


if __name__ == '__main__':
    main()
