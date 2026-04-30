"""
Every End 시작 0~100블록을 raw .gmd 그대로 시각화 (Decoration 포함).
시뮬이 못 보는 시각 요소까지 다 그려서 "진짜 어떻게 생겼는지" 파악.

색상 분류:
  Solid       — 회색 (충돌 블록)
  Hazard      — 빨강 (사망)
  Slope       — 주황
  Decoration  — 어두운 보라 (반투명, 시각만)
  Trigger     — 보라 점 (위치만)
  Pad/Orb     — 노랑/분홍 (점프 부스트)
  Portal      — 파랑 (모드 전환)
  Modifier    — 초록 (스피드 포털 등)
  Coin        — 금
  ?           — 회색 (모름)
"""
import json
import sys
from pathlib import Path
import matplotlib.pyplot as plt
from matplotlib.patches import Rectangle
import matplotlib.lines as mlines
import collections

from decode_gmd import parse_gmd_file, decode_level_data
from parse_objects import parse_objects
from gmd_decoder import classify

# ── kind → (color, alpha, marker_size) ──────────────────────────
STYLE = {
    "Solid":      ("#888888", 1.0,  None),
    "Hazard":     ("#ff3333", 1.0,  None),
    "Slope":      ("#ffaa66", 1.0,  None),
    "Breakable":  ("#cc6633", 1.0,  None),
    "Decoration": ("#3a2050", 0.35, None),     # 반투명 어두운 보라
    "Trigger":    ("#cc66ff", 0.6,  4),        # 점
    "Pad":        ("#ffe060", 1.0,  None),
    "Orb":        ("#ff66cc", 1.0,  None),
    "Portal":     ("#3399ff", 1.0,  None),
    "Modifier":   ("#33cc66", 1.0,  None),
    "UserCoin":   ("#ffd700", 1.0,  None),
    "SecretCoin": ("#ffd700", 1.0,  None),
    "?":          ("#666666", 0.5,  None),
}


def visualize_raw(gmd_path: str, start_b: int, end_b: int, out: str):
    meta = parse_gmd_file(gmd_path)
    raw = parse_objects(decode_level_data(meta["k4"]))

    BLOCK = 30
    x_min = start_b * BLOCK
    x_max = end_b * BLOCK
    y_min, y_max = -150, 600

    width_in = max(60, (end_b - start_b) * 0.6)
    fig, ax = plt.subplots(figsize=(width_in, 12))
    ax.set_facecolor("#0a0a14")

    counts = collections.Counter()
    drawn_objs = 0
    drawn_trigs = 0

    # 히트박스 사이즈 — hitboxes.json
    hb = json.loads(Path("hitboxes.json").read_text(encoding="utf-8"))

    # 그리는 순서: Decoration 먼저 (뒤로), 그 다음 Solid, Hazard, 트리거 점은 마지막
    # raw 를 한 번 정렬
    def z_priority(obj):
        oid = obj.get(1)
        kind, _ = classify(oid or 0)
        return {"Decoration": 0, "Solid": 1, "Slope": 1, "Breakable": 1,
                "Hazard": 2, "Pad": 3, "Orb": 3, "Portal": 3, "Modifier": 3,
                "UserCoin": 4, "Trigger": 5}.get(kind, 1)

    raw_sorted = sorted(
        (o for o in raw
         if x_min <= o.get(2, 1e9) <= x_max
         and y_min <= o.get(3, 1e9) <= y_max),
        key=z_priority,
    )

    for obj in raw_sorted:
        oid = obj.get(1)
        if oid is None:
            continue
        kind, _ = classify(oid)
        color, alpha, marker = STYLE.get(kind, STYLE["?"])
        x = obj.get(2, 0)
        y = obj.get(3, 0)
        rot = obj.get(6, 0)

        if marker:
            ax.plot(x, y, "o", markersize=marker, color=color, alpha=alpha)
            drawn_trigs += 1
        else:
            info = hb.get(str(oid), {})
            outer = info.get("outer", {})
            w = outer.get("w", 30) if outer.get("w", 0) > 0 else 30
            h = outer.get("h", 30) if outer.get("h", 0) > 0 else 30
            rect = Rectangle((x - w / 2, y - h / 2), w, h,
                             facecolor=color, edgecolor="black",
                             linewidth=0.15, alpha=alpha,
                             angle=rot, rotation_point="center")
            ax.add_patch(rect)
            drawn_objs += 1
        counts[kind] += 1

    # player 진로
    ax.axhline(y=0,   color="white",  lw=0.6, alpha=0.5)
    ax.axhline(y=15,  color="cyan",   lw=1.0, alpha=0.7,
               label="y=15 (player on virtual floor)")
    ax.axhline(y=45,  color="lime",   lw=1.0, alpha=0.7,
               label="y=45 (player on top of block)")
    ax.axhline(y=92,  color="yellow", lw=0.7, alpha=0.5,
               label="y=92 (jump apex from y=15)")
    ax.axhline(y=122, color="orange", lw=0.5, alpha=0.4,
               label="y=122 (jump apex from y=45)")

    ax.set_xlim(x_min - 30, x_max + 30)
    ax.set_ylim(y_min, y_max)
    ax.set_aspect("equal")
    ax.grid(True, alpha=0.08)
    ax.tick_params(colors="gray")

    block_ticks = list(range(start_b, end_b + 1, max(1, (end_b - start_b) // 30)))
    ax.set_xticks([b * BLOCK for b in block_ticks])
    ax.set_xticklabels([f"{b}b" for b in block_ticks], color="gray", fontsize=8)

    # 범례
    handles = []
    for kind in ("Solid", "Hazard", "Slope", "Breakable", "Decoration",
                 "Pad", "Orb", "Portal", "Modifier", "UserCoin", "?", "Trigger"):
        c = counts.get(kind, 0)
        if c == 0:
            continue
        color, alpha, marker = STYLE[kind]
        if marker:
            handles.append(mlines.Line2D([], [], marker="o", linestyle="",
                                          markerfacecolor=color, markersize=6,
                                          alpha=alpha,
                                          label=f"{kind} ({c})"))
        else:
            handles.append(mlines.Line2D([], [], marker="s", linestyle="",
                                          markerfacecolor=color,
                                          markeredgecolor="black",
                                          markersize=10, alpha=alpha,
                                          label=f"{kind} ({c})"))
    ax.legend(handles=handles, loc="upper right",
              facecolor="#222238", labelcolor="white", fontsize=9)

    ax.set_title(f"{meta.get('k2','?')} — blocks {start_b}~{end_b} (raw .gmd, all objects)",
                 color="white", fontsize=14)
    plt.tight_layout()
    plt.savefig(out, dpi=80, bbox_inches="tight", facecolor="#000010")
    print(f"-> {out}")
    print(f"   drew {drawn_objs} rects + {drawn_trigs} trigger dots")
    print(f"   {dict(counts.most_common())}")


if __name__ == "__main__":
    start_b = int(sys.argv[1]) if len(sys.argv) > 1 else 0
    end_b   = int(sys.argv[2]) if len(sys.argv) > 2 else 100
    visualize_raw("samples/Every End.gmd", start_b, end_b,
                  f"every_end_raw_{start_b}_{end_b}b.png")
