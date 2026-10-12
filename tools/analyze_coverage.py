"""Summarises coverage_log.csv: functions per phase / per scenario, how many are named, which classes they belong to.

Writes docs/generated/coverage_report.md and coverage_sets.json (function lists per scenario).
Scenario boundaries are taken from the markers: edit SCENARIOS below if your run used a different sequence.

Usage: python analyze_coverage.py [coverage_log.csv]
"""
import collections
import csv
import json
import os
REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
import sys

LOG = sys.argv[1] if len(sys.argv) > 1 else r'F:\DecompilingTheMovies\The Movies\coverage_log.csv'
REPO = REPO_ROOT
OUT = os.path.join(REPO_ROOT, 'docs', 'generated')

rows, marks = [], []
for line in open(LOG, encoding='utf-8'):
    if line.startswith('#MARK'):
        p = line.strip().split(',')
        marks.append({'seq': int(p[1]), 'us': int(p[2]), 'phase': int(p[3]), 'label': p[4]})
    elif not line.startswith('seq'):
        p = line.strip().split(',')
        rows.append({'seq': int(p[0]), 'us': int(p[1]), 'tid': int(p[2]), 'phase': int(p[3]), 'va': int(p[4], 16) + 0x400000})

names = {}
for r in csv.DictReader(open(os.path.join(REPO, 'data', 'ExportDecompiled', 'index.csv'), newline='', encoding='utf-8')):
    names[int(r['address'], 16)] = r['name']
for r in csv.DictReader(open(os.path.join(REPO, 'renames.csv'), newline='', encoding='utf-8', errors='ignore')):
    try:
        names[int(r['address'], 16)] = r['new_name']
    except (ValueError, KeyError):
        pass

# class membership from RTTI vtable slots
cls_of = {}
rt = os.path.join(OUT, 'rtti_classes.json')
if os.path.exists(rt):
    for c in json.load(open(rt))['classes']:
        for v in c['vtables']:
            for s in v['slots']:
                cls_of.setdefault(int(s['va'], 16), c['name'])

by_phase = collections.defaultdict(list)
for r in rows:
    by_phase[r['phase']].append(r['va'])
phases = sorted(by_phase)
label = {m['phase']: m['label'] for m in marks}

# scenarios: phase ranges (inclusive) -> name. A function belongs to the first scenario that reached it.
f9 = next((m['phase'] for m in marks if m['label'] == 'F9_MARK'), None)
f8 = next((m['phase'] for m in marks if m['label'] == 'F8_REARM'), None)
SCEN = [('boot_menu_and_new_game_load', 1, 1)]
if f9:
    SCEN.append(('playing_first_game', 2, f9 - 1))
    SCEN.append(('loading_second_save', f9, (f8 or f9 + 1) - 1))
if f8:
    SCEN.append(('steady_gameplay_after_rearm', f8, max(phases)))
sets = {}
seen = set()
for name, lo, hi in SCEN:
    s = []
    for p in range(lo, hi + 1):
        for va in by_phase.get(p, []):
            if va not in seen:
                s.append(va)
                seen.add(va)
    sets[name] = s

# steady gameplay = everything reached after the re-arm (complete set, independent of earlier phases)
steady = sorted({va for p in phases if f8 and p >= f8 for va in by_phase[p]})
allf = sorted({r['va'] for r in rows})

def named_frac(vs):
    n = sum(1 for v in vs if not names.get(v, 'FUN_').startswith('FUN_'))
    return n, len(vs)

lines = ['# Coverage report', '', 'Log: %s' % LOG, '',
         'Functions first-called in the run: **%d** over %.0f seconds (%d threads).' % (
             len(allf), rows[-1]['us'] / 1e6, len({r['tid'] for r in rows})), '',
         '## Markers', '']
for m in marks:
    lines.append('- phase %d at %.1fs: %s (after %d functions)' % (m['phase'], m['us'] / 1e6, m['label'], m['seq']))
lines += ['', '## New functions per scenario (first reached in that scenario)', '']
for name, lo, hi in SCEN:
    n, t = named_frac(sets[name])
    lines.append('- %s (phases %d-%d): %d functions, %d already named (%.0f%%)' % (name, lo, hi, t, n, 100.0 * n / max(t, 1)))
n, t = named_frac(steady)
lines += ['', '## Steady gameplay (complete set after F8 re-arm)', '',
          '%d distinct functions called during %d game-months of play, %d already named (%.0f%%).' % (
              t, len([p for p in phases if f8 and p > f8]), n, 100.0 * n / max(t, 1)), '']
cc = collections.Counter(cls_of.get(v, '(not a virtual slot)') for v in steady)
lines += ['### Classes with the most steady-gameplay functions (virtual slots only)', '']
for c, k in cc.most_common(25):
    if c != '(not a virtual slot)':
        lines.append('- %s: %d' % (c, k))
lines.append('- (not a virtual slot / plain function): %d' % cc.get('(not a virtual slot)', 0))
lines += ['', '## Named functions in steady gameplay (first 60 by call order)', '']
order = [r['va'] for r in rows if (f8 and r['phase'] >= f8)]
shown = 0
for v in order:
    nm = names.get(v, '')
    if nm and not nm.startswith('FUN_'):
        lines.append('- %08X %s' % (v, nm))
        shown += 1
        if shown >= 60:
            break
open(os.path.join(OUT, 'coverage_report.md'), 'w', encoding='utf-8').write('\n'.join(lines) + '\n')
json.dump({k: ['%08X' % v for v in vs] for k, vs in sets.items()} | {'steady_gameplay': ['%08X' % v for v in steady]},
          open(os.path.join(OUT, 'coverage_sets.json'), 'w'))
print('\n'.join(lines[:40]))
