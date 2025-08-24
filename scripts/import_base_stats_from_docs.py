#!/usr/bin/env python3
import csv
import re
import sys
from pathlib import Path

def sanitize_token(s):
    return re.sub(r'[^A-Za-z0-9]', '', s).upper()


def parse_species_header(path):
    mapping = {}
    pattern = re.compile(r'#define\s+(SPECIES_[A-Z0-9_]+)\s+0x([0-9A-Fa-f]+)')
    with open(path) as f:
        for line in f:
            m = pattern.match(line)
            if m:
                idx = int(m.group(2), 16)
                mapping[idx] = m.group(1)
    return mapping


def read_docs_csv(path, species_map):
    rows = {}
    with open(path, newline='', encoding='utf-8') as f:
        reader = csv.DictReader(f)
        for row in reader:
            dex = row['Dex No.']
            if not dex.isdigit():
                continue
            idx = int(dex)
            if idx not in species_map:
                continue
            stats_fields = ['HP', 'ATK', 'DEF', 'SP. ATK', 'SP. DEF', 'SPD']
            type1 = row['Type 1'].strip()
            ability1 = row['Ability 1'].strip()
            hidden = row['Hidden Ability'].strip()
            if not (type1 and ability1 and hidden and all(row[s].strip() for s in stats_fields)):
                continue
            macro = species_map[idx]
            name_s = sanitize_token(row['Name'])
            macro_s = macro[len('SPECIES_'):]
            if not name_s.endswith(macro_s):
                continue
            type2 = row['Type 2'].strip() or type1
            ability2 = row['Ability 2'].strip()
            stats = {k: int(row[k].strip()) for k in stats_fields}
            rows[idx] = {
                'macro': macro,
                'type1': sanitize_token(type1),
                'type2': sanitize_token(type2),
                'ability1': sanitize_token(ability1),
                'ability2': sanitize_token(ability2) if ability2 else 'NONE',
                'hidden': sanitize_token(hidden),
                'stats': stats,
            }
    return rows


def generate_base_stats(species_map, data):
    lines = []
    lines.append('#include "defines.h"')
    lines.append('#include "../include/abilities.h"')
    lines.append('#include "../include/items.h"')
    lines.append('#include "../include/base_stats.h"')
    lines.append('')
    lines.append('const struct BaseStats gBaseStats[] =')
    lines.append('{')
    # ensure SPECIES_NONE entry
    lines.append('    [SPECIES_NONE] = {0},')
    for idx in sorted(species_map):
        if idx == 0:
            continue
        macro = species_map[idx]
        if idx in data:
            d = data[idx]
            s = d['stats']
            lines.append(f'    [{macro}] = {{')
            lines.append(f'        .baseHP = {s["HP"]},')
            lines.append(f'        .baseAttack = {s["ATK"]},')
            lines.append(f'        .baseDefense = {s["DEF"]},')
            lines.append(f'        .baseSpAttack = {s["SP. ATK"]},')
            lines.append(f'        .baseSpDefense = {s["SP. DEF"]},')
            lines.append(f'        .baseSpeed = {s["SPD"]},')
            lines.append(f'        .type1 = TYPE_{d["type1"]},')
            lines.append(f'        .type2 = TYPE_{d["type2"]},')
            lines.append(f'        .ability1 = ABILITY_{d["ability1"]},')
            lines.append(f'        .ability2 = ABILITY_{d["ability2"]},')
            lines.append(f'        .hiddenAbility = ABILITY_{d["hidden"]},')
            lines.append('    },')
        else:
            lines.append(f'    [{macro}] = {{0}},')
    lines.append('};')
    return '\n'.join(lines) + '\n'


def main():
    docs_path = Path('docs.csv')
    species_h = Path('include/species.h')
    out_path = Path('src/Base_Stats.c')
    species_map = parse_species_header(species_h)
    data = read_docs_csv(docs_path, species_map)
    content = generate_base_stats(species_map, data)
    out_path.write_text(content)
    print(f'Wrote {out_path}')

if __name__ == '__main__':
    main()
