"""
시뮬이 보는 것 그대로 시각화 — 레벨 모양 파악용

시뮬은 정적 Solid/Hazard/Slope/Breakable 만 보고, Decoration·트리거는 무시.
플레이어 진로 라인(y=15/45/92) 같이 그려서 어디가 평지/장애물인지 확인.

사용:
    python debug_visualize.py [start_block] [end_block]
    예) python debug_visualize.py 0 200    → 0~200블록 (시작 영역)
"""
import json
import sys
from pathlib import Path
import matplotlib.pyplot as plt
from matplotlib.patches import Rectangle
import matplotlib.lines as mlines

from simulator import load_level, _SOLID_TYPES, _HAZARD_TYPES, _BREAKABLE_TYPES

# ── 색상 (시뮬 분류 기준) ───────────────────────────────────────
TYPE_COLOR = {
    0:  ("#888888", "Solid"),
    25: ("#ffaa66", "Slope"),
    39: ("#aaaaaa", "CollisionObject"),
    21: ("#cc6633", "Breakable"),
    2:  ("#ff3333", "Hazard"),
    47: ("#ff6666", "AnimatedHazard"),
}


def visualize(gmd_path: str, start_b: int, end_b: int, out: str):
    level = load_level(gmd_path)
    BLOCK = 30
    x_min = start_b * BLOCK
    x_max = end_b * BLOCK
    y_min, y_max = -100, 500

    # 영역 안 정적 오브젝트만
    in_zone = [o for o in level.objects
               if x_min <= o.x <= x_max
               and y_min <= o.y <= y_max
               and o.type in _SOLID_TYPES | _HAZARD_TYPES | _BREAKABLE_TYPES]

    # 트리거 위치 (점)
    trig_in_zone = [t for t in level.triggers
                    if x_min <= t.x <= x_max and y_min <= t.y <= y_max]

    width_in = max(40, (end_b - start_b) * 0.15)
    fig, ax = plt.subplots(figsize=(width_in, 8))
    ax.set_facecolor("#0f0f1e")

    # 분류별 카운트
    counts = {}
    for o in in_zone:
        color, label = TYPE_COLOR.get(o.type, ("#cccccc", f"type{o.type}"))
        rect = Rectangle((o.x - o.w / 2, o.y - o.h / 2), o.w, o.h,
                         facecolor=color, edgecolor="black",
                         linewidth=0.2, angle=o.rotation,
                         rotation_point="center")
        ax.add_patch(rect)
        counts[label] = counts.get(label, 0) + 1

    # 트리거는 작은 보라 점
    if trig_in_zone:
        ax.scatter([t.x for t in trig_in_zone], [t.y for t in trig_in_zone],
                   s=3, c="#cc66ff", alpha=0.4, label=f"trigger ({len(trig_in_zone)})")

    # player 진로 라인
    ax.axhline(y=0,   color="white",  lw=0.6, alpha=0.5)  # virtual floor
    ax.axhline(y=15,  color="cyan",   lw=1.0, alpha=0.7,
               label="player ground center (y=15)")
    ax.axhline(y=45,  color="lime",   lw=1.0, alpha=0.7,
               label="player on top of block row (y=45)")
    ax.axhline(y=92,  color="yellow", lw=0.8, alpha=0.5,
               label="cube jump apex from y=15 (~92)")

    ax.set_xlim(x_min - 50, x_max + 50)
    ax.set_ylim(y_min, y_max)
    ax.set_aspect("equal")
    ax.grid(True, alpha=0.1)
    ax.tick_params(colors="gray")

    # 블록 단위 X 눈금 (큰 블록 단위)
    block_ticks = list(range(start_b, end_b + 1, max(1, (end_b - start_b) // 20)))
    ax.set_xticks([b * BLOCK for b in block_ticks])
    ax.set_xticklabels([f"{b}b" for b in block_ticks], color="gray")

    # 범례 (분류별 카운트)
    type_legend = [mlines.Line2D([], [], marker="s", linestyle="",
                                  markerfacecolor=TYPE_COLOR[t][0],
                                  markeredgecolor="black",
                                  markersize=8,
                                  label=f"{TYPE_COLOR[t][1]}: {counts.get(TYPE_COLOR[t][1], 0)}")
                   for t in (0, 25, 21, 2, 47) if counts.get(TYPE_COLOR[t][1], 0) > 0]
    ax.legend(handles=type_legend +
              [mlines.Line2D([], [], color="cyan",   label="y=15 (ground)"),
               mlines.Line2D([], [], color="lime",   label="y=45 (on block)"),
               mlines.Line2D([], [], color="yellow", label="y=92 (jump apex)"),
               mlines.Line2D([], [], marker="o", linestyle="",
                             markerfacecolor="#cc66ff", markersize=4,
                             label=f"trigger: {len(trig_in_zone)}")],
              loc="upper right", facecolor="#222238", labelcolor="white",
              fontsize=8)

    ax.set_title(f"{level.name} — blocks {start_b}~{end_b} "
                 f"(시뮬이 보는 정적 충돌 오브젝트만)",
                 color="white", fontsize=12)
    plt.tight_layout()
    plt.savefig(out, dpi=80, bbox_inches="tight", facecolor="#0a0a14")
    print(f"→ {out}  (영역 {start_b}~{end_b}b: {len(in_zone)} 정적, {len(trig_in_zone)} 트리거)")


if __name__ == "__main__":
    start_b = int(sys.argv[1]) if len(sys.argv) > 1 else 0
    end_b   = int(sys.argv[2]) if len(sys.argv) > 2 else 200
    visualize("samples/Every End.gmd", start_b, end_b,
              f"debug_every_end_{start_b}_{end_b}b.png")
