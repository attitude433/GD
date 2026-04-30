"""customObjectSetup (0x4a8ad0) 디컴파일 결과에서
  .gmd 키 → 멤버 offset 매핑을 자동 추출.

패턴 (Ghidra 디컴파일 일관):
    if (*(longlong *)(*param_3 + KEY_OFFSET) != 0) {       # 키 존재 체크
      pcVar12 = (char *)(*param_2 + VALUE_OFFSET);          # 값 ptr
      if (0xf < *(ulonglong *)(*param_2 + SSO_CHECK)) {    # SSO 체크
        pcVar12 = *(char **)pcVar12;
      }
      iVar6 = atoi(pcVar12);     # or atof
    }
    *(TYPE *)(param_1 + MEMBER_OFFSET) = iVar6;            # 멤버에 저장

출력: per case (object ID), list of {key_offset, value_offset, parser, member_offset}.
"""

import re
import json
import sys
from collections import defaultdict
from pathlib import Path

DECOMP = Path(r"D:/GhidraProjects/decomp/EffectGameObject_customObjectSetup__0x4a8ad0.c")

# 키 체크 패턴: if (*(longlong *)(*param_3 + 0xNNN) != 0) {
KEY_CHECK = re.compile(
    r"if\s*\(\s*\*\(longlong\s*\*\)\s*\(\s*\*param_3\s*\+\s*(0x[0-9a-fA-F]+)\s*\)\s*!=\s*0\s*\)\s*\{"
)

# 값 ptr: pcVar12 = (char *)(*param_2 + 0xNNN);
VAL_PTR = re.compile(r"pcVar\d+\s*=\s*\(char\s*\*\)\s*\(\s*\*param_2\s*\+\s*(0x[0-9a-fA-F]+)\s*\)\s*;")

# 파서: atoi(...) 또는 atof(...)
PARSER = re.compile(r"\b(atoi|atof)\s*\(\s*pcVar")

# 케이스 라인: case 0xNNN: 또는 case NNN:
CASE_LINE = re.compile(r"^\s*case\s+(0x[0-9a-fA-F]+|[0-9]+)\s*:")

# 멤버 store: *(TYPE *)(param_1 + 0xNNN) = ...; (다양한 TYPE 패턴 허용)
MEMBER_STORE = re.compile(
    r"\*\(\s*([a-zA-Z_][\w\s\*]+?)\s*\*\)\s*\(\s*param_1\s*\+\s*(0x[0-9a-fA-F]+)\s*\)\s*="
)


def parse() -> dict:
    src = DECOMP.read_text(encoding="utf-8", errors="replace")
    lines = src.split("\n")

    # 1) 케이스 시작 라인 인덱스 찾기 (switch 안의 case 라벨)
    case_starts: list[tuple[int, int]] = []  # (line_idx, case_id)
    for i, ln in enumerate(lines):
        m = CASE_LINE.match(ln)
        if m:
            case_starts.append((i, int(m.group(1), 0)))

    # 끝 라인 = 다음 케이스 시작 또는 파일 끝
    case_ranges: list[tuple[int, int, int]] = []  # (start, end, id)
    for idx, (start, cid) in enumerate(case_starts):
        end = case_starts[idx + 1][0] if idx + 1 < len(case_starts) else len(lines)
        case_ranges.append((start, end, cid))

    # "top-level" (어떤 case 에도 속하지 않는 — switch 이전) 도 따로 캡처
    top_end = case_starts[0][0] if case_starts else len(lines)
    case_ranges.insert(0, (0, top_end, -1))  # -1 = top-level

    # 2) 각 case 범위 안에서 KEY_CHECK 블록 추출
    per_case: dict[int, list[dict]] = defaultdict(list)

    for start, end, cid in case_ranges:
        i = start
        while i < end:
            m_key = KEY_CHECK.search(lines[i])
            if not m_key:
                i += 1
                continue
            key_off = int(m_key.group(1), 16)

            # 다음 ~10 줄 안에서 VAL_PTR + PARSER 찾기
            value_off = None
            parser = None
            store_member = None
            store_type = None

            # 블록 내부 (KEY 체크 } 까지) 에서 VAL_PTR, PARSER 추출
            block_end = min(i + 12, end)
            for j in range(i, block_end):
                if value_off is None:
                    mv = VAL_PTR.search(lines[j])
                    if mv:
                        value_off = int(mv.group(1), 16)
                if parser is None:
                    mp = PARSER.search(lines[j])
                    if mp:
                        parser = mp.group(1)

            # MEMBER_STORE — KEY_CHECK 이후 ~18 줄 내, 다음 KEY_CHECK 전까지.
            # store는 if 블록 안 (직접) 또는 직후 (CONCAT44 패턴) 에 모두 올 수 있음.
            search_end = min(i + 18, end)
            # 다음 KEY_CHECK 라인을 만나면 거기서 끊음
            for j in range(i + 1, search_end):
                if KEY_CHECK.search(lines[j]):
                    search_end = j
                    break
            for j in range(i + 1, search_end):
                ms = MEMBER_STORE.search(lines[j])
                if ms:
                    store_type = ms.group(1).strip()
                    store_member = int(ms.group(2), 16)
                    break

            per_case[cid].append({
                "line": i + 1,
                "key_offset": f"0x{key_off:x}",
                "value_offset": f"0x{value_off:x}" if value_off is not None else None,
                "parser": parser,
                "member_offset": f"0x{store_member:x}" if store_member is not None else None,
                "store_type": store_type,
            })
            i = block_end
            continue

    return {
        "source": str(DECOMP),
        "total_cases": len(case_ranges),
        "case_ids": sorted([c[2] for c in case_ranges]),
        "extracted": {str(cid): entries for cid, entries in sorted(per_case.items())},
    }


# case ID (object ID) → gmdkit trigger 이름 (id_dictionary_merged.json 에서 cross-ref 결과)
CASE_LABELS = {
    -1: "TOP-LEVEL (모든 EffectGameObject 공통)",
    0x69:  "ID 105 — GRADIENT/STATIC trigger (35 reads, 가장 큰 case)",
    0x716: "ID 1814 — FOLLOW_PLAYER_Y trigger",
    0x717: "ID 1815 — COLLISION trigger ★",
    0x718: "ID 1816 — COLLISION_BLOCK trigger ★",
    0x778: "ID 1912 — RANDOM trigger",
    0x779: "ID 1913 — ZOOM_CAMERA trigger ★",
    0x78b: "ID 1931 — (unknown, 2.2 신규)",
    0x78c: "ID 1932 — PLAYER_CONTROL trigger",
    0x78d: "ID 1933 — SWING portal",
    0x78f: "ID 1935 — TIMEWARP trigger",
    0x812: "ID 2066 — GRAVITY trigger ★",
}


def summary(data: dict) -> str:
    lines = [f"# {data['source']}"]
    lines.append(f"# Total cases: {data['total_cases']}")
    lines.append(f"# 핵심 패턴: gmd_key_code = key_offset / 8 (검증: COLLISION 1815 의 0x280/8=80=block_a)")
    lines.append("")
    for cid_str, entries in data["extracted"].items():
        cid = int(cid_str)
        label = CASE_LABELS.get(cid, f"case 0x{cid:x} ({cid})")
        lines.append(f"## {label} — {len(entries)} key reads")
        for e in entries:
            mem = e["member_offset"] or "?"
            typ = (e["store_type"] or "?")[:14]
            parser = e["parser"] or "?"
            koff = int(e["key_offset"], 16)
            gmd_key = koff // 8  # 검증된 매핑
            lines.append(
                f"  L{e['line']:4d}  param_3+{e['key_offset']:>6} (gmd_key={gmd_key:>3})  "
                f"{parser:>4}  -> param_1+{mem:>6} ({typ})"
            )
        lines.append("")
    return "\n".join(lines)


if __name__ == "__main__":
    data = parse()
    out_json = Path(__file__).parent / "custom_object_setup_extracted.json"
    out_txt  = Path(__file__).parent / "custom_object_setup_extracted.txt"
    out_json.write_text(json.dumps(data, ensure_ascii=False, indent=2), encoding="utf-8")
    out_txt.write_text(summary(data), encoding="utf-8")

    total = sum(len(v) for v in data["extracted"].values())
    print(f"Extracted {total} key reads across {len(data['extracted'])} cases")
    print(f"  JSON: {out_json.name}")
    print(f"  TXT:  {out_txt.name}")
    # 빠른 미리보기
    for cid_str, entries in list(data["extracted"].items())[:3]:
        cid = int(cid_str)
        label = "top" if cid == -1 else f"0x{cid:x}"
        print(f"  case {label}: {len(entries)} reads")
