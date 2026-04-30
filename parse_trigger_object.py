"""triggerObject (0x4a5f30) 의 case → 호출하는 FUN_ 매핑 자동 추출.

각 case 라벨 다음 ~30 줄 내에서 FUN_xxx 호출을 잡음 (가장 가까운 호출이 그 case 의 핵심 효과 함수).
"""
import re
import json
from pathlib import Path
from collections import defaultdict

SRC = Path("D:/GhidraProjects/decomp/triggerObject_EffectGameObject_base__0x4a5f30.c")

CASE_RE = re.compile(r"^\s*case\s+(0x[0-9a-fA-F]+|[0-9]+)\s*:")
FUN_RE  = re.compile(r"FUN_140([0-9a-f]+)\s*\(")

# 헬퍼/관계없는 함수 (group_lookup, string ops, alloc 등) — 트리거 효과 아님
HELPER = {
    0x224280, 0x224590,   # group_lookup (FUN_140224280/590)
    0x4d0770, 0x17ab00,   # alloc + global init
    0x5e430,              # string copy/free helper
    0x60b20,              # set/map insert
    0x846d0,              # 다른 헬퍼
    0x24b270,             # 어떤 vector copy
    0x24a470,             # 어떤 헬퍼
    0x2505b0, 0x2508a0,   # iterator helpers
    0x251cb0, 0x250c90,   # iterator helpers
    0x26c2b0, 0x26c550,   # 헬퍼
    0x39ee30,             # 다른 객체 호출
    0x38b440,             # player 함수
    0x2623f0,             # color manager 헬퍼 (color cache lookup)
    0x2620e0,             # 다른 헬퍼
}


def main():
    src = SRC.read_text(encoding="utf-8", errors="replace")
    lines = src.split("\n")

    # 1) case 라벨 위치 찾기
    case_locs: list[tuple[int, int]] = []  # (line_idx, case_id)
    for i, ln in enumerate(lines):
        m = CASE_RE.match(ln)
        if m:
            case_locs.append((i, int(m.group(1), 0)))

    # 2) 각 case 별 호출 함수 찾기 — case_locs[i] ~ case_locs[i+1] 사이의 FUN_
    case_calls: dict[int, list[int]] = defaultdict(list)
    for idx, (line_no, cid) in enumerate(case_locs):
        end = case_locs[idx + 1][0] if idx + 1 < len(case_locs) else line_no + 30
        for j in range(line_no, min(end, len(lines))):
            for m in FUN_RE.finditer(lines[j]):
                addr = int(m.group(1), 16)
                if addr not in HELPER and addr not in case_calls[cid]:
                    case_calls[cid].append(addr)

    # 3) 출력
    print(f"# Cases: {len(case_locs)}")
    print(f"# Unique cases: {len(case_calls)}")
    for cid in sorted(case_calls.keys()):
        cs = case_calls[cid]
        # primary effect function = 첫 번째 non-helper FUN_
        primary = cs[0] if cs else None
        rest = cs[1:5]
        primary_str = f"0x{primary:x}" if primary else "?"
        rest_str = " ".join(f"0x{c:x}" for c in rest)
        print(f"  case 0x{cid:>4x} ({cid:>5})  -> {primary_str:>10}  [+{rest_str}]")

    # JSON 으로도 저장
    out = {
        "case_to_calls": {f"0x{c:x}": [f"0x{a:x}" for a in calls] for c, calls in case_calls.items()},
        "primary": {f"0x{c:x}": (f"0x{calls[0]:x}" if calls else None) for c, calls in case_calls.items()},
    }
    Path("trigger_case_dispatch.json").write_text(json.dumps(out, indent=2), encoding="utf-8")
    print("\n→ trigger_case_dispatch.json")


if __name__ == "__main__":
    main()
