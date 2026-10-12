"""Attributes unclassified unnamed steady-gameplay functions to classes by call-graph neighbours and string hints.

Inputs: docs/generated/rename_priority.csv (unclassified rows), tools/ghidra_names.csv (current names),
        the decompile export (call edges + string literals), library_map.csv (library brackets).
Output: docs/generated/unclassified_analysis.md / .csv
"""
import collections, csv, glob, os, re
import os
REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

REPO = REPO_ROOT
ROOT = REPO_ROOT
GEN = os.path.join(ROOT, 'docs', 'generated')

names = {r['address'].upper(): r['name'] for r in csv.DictReader(open(os.path.join(ROOT, 'tools', 'ghidra_names.csv'), encoding='utf-8'))}
lib = {}
for r in csv.DictReader(open(os.path.join(REPO, 'library_map.csv'), encoding='utf-8', errors='ignore')):
    lib[r['addr'].upper()] = r
rows = list(csv.DictReader(open(os.path.join(GEN, 'rename_priority.csv'))))
uncl = {r['address'].upper(): r for r in rows if r['class'] == '(unclassified)'}
steady = {r['address'].upper() for r in rows}  # unnamed steady functions

# class of a *named* function: from its name prefix
def cls_of(name):
    m = re.match(r'([A-Za-z0-9]+(?:_[A-Z][A-Za-z0-9]*)?)_', name)
    if name.startswith(('FUN_', 'Ctor_', 'Dtor_', 'thunk_', 'LAB_')):
        return None
    return name.split('_')[0]

body = {}
cur = None
for f in sorted(glob.glob(os.path.join(REPO, 'data', 'ExportDecompiled', 'decomp_*.c'))):
    txt = open(f, encoding='utf-8', errors='ignore').read()
    for part in re.split(r'//// FUNCTION ', txt)[1:]:
        m = re.match(r'\S+ @ ([0-9a-fA-F]{8}) ////', part)
        if m:
            body[m.group(1).upper()] = part

callees = collections.defaultdict(set)
callers = collections.defaultdict(set)
strings = collections.defaultdict(list)
for a, t in body.items():
    for c in set(re.findall(r'FUN_([0-9a-fA-F]{8})', t)):
        c = c.upper()
        if c != a:
            callees[a].add(c)
            callers[c].add(a)
    for s in re.findall(r'"([^"\n]{4,60})"', t):
        strings[a].append(s)

def neighbour_classes(a):
    votes = collections.Counter()
    for n in callees[a] | callers[a]:
        nm = names.get(n, '')
        c = cls_of(nm) if nm else None
        if c:
            votes[c] += 1
    return votes

out = []
for a, r in uncl.items():
    if a in lib and lib[a]['source_file_or_bracket'].startswith('between') and lib[a]['category'] != 'named':
        kind = 'library-bracket'
    else:
        kind = 'game-or-engine'
    votes = neighbour_classes(a)
    top = votes.most_common(1)[0] if votes else ('', 0)
    srcs = [s for s in strings[a] if '.cpp' in s or '.ini' in s]
    out.append(dict(address=a, kind=kind, order=int(r['first_call_order']), n_callers=len(callers[a]),
                    n_steady_callers=len([c for c in callers[a] if c in steady or names.get(c, 'FUN_').startswith('FUN_') is False]),
                    guess=top[0], guess_votes=top[1], strings='|'.join(strings[a][:3])))

with open(os.path.join(GEN, 'unclassified_analysis.csv'), 'w', newline='', encoding='utf-8') as f:
    w = csv.DictWriter(f, fieldnames=list(out[0].keys()))
    w.writeheader()
    w.writerows(out)

game = [o for o in out if o['kind'] == 'game-or-engine']
by_guess = collections.Counter(o['guess'] for o in game if o['guess_votes'] >= 2)
lines = ['# Unclassified steady functions: attribution by call-graph neighbours', '',
         'Total %d; library-bracket %d; remaining %d; of those %d have a class guess with >= 2 neighbour votes.' % (
             len(out), len(out) - len(game), len(game), sum(by_guess.values())), '',
         '| guess (name prefix of neighbours) | functions |', '|---|---|']
for g, c in by_guess.most_common(40):
    lines.append('| %s | %d |' % (g, c))
open(os.path.join(GEN, 'unclassified_analysis.md'), 'w', encoding='utf-8').write('\n'.join(lines) + '\n')
print('\n'.join(lines))
