"""4 샘플 레벨에 시뮬 돌려서 결과/통계 비교.

목적: Collision 트리거 (1815) 인프라 추가 후 Every End 같이 헤비한 레벨이
얼마나 더 현실적으로 동작하는지 측정.

각 레벨 — 점프 없는 단순 시뮬 (always False) → 얼마나 가서 죽는지 + 트리거 통계.
"""
import sys
import time
from pathlib import Path

from simulator import (load_level, run_simulation, BLOCK_SIZE)


SAMPLES = [
    ("samples/DeCode.gmd",            "DeCode"),
    ("samples/Supersonic.gmd",        "Supersonic"),
    ("samples/Every End.gmd",         "Every End"),
    ("samples/iSpyWithMyLittleEye.gmd","iSpyWithMyLittleEye"),
]


def sim_one(gmd_path: str, name: str) -> dict:
    """레벨 1개 시뮬 — 점프 안 누름. 통계 + SimResult 반환."""
    t0 = time.time()
    level = load_level(gmd_path)
    t_load = time.time() - t0

    # 트리거 통계
    n_obj = len(level.objects)
    n_trig = len(level.triggers)
    n_collision = sum(1 for t in level.triggers if t.obj_id == 1815)
    n_collision_block = sum(1 for o in level.objects if o.block_id > 0)
    n_collision_indexed = sum(len(v) for v in level.collision_player_triggers.values())

    # 레벨 길이
    end_x = max(o.x + o.w / 2 for o in level.objects) if level.objects else 0
    end_blocks = end_x / BLOCK_SIZE   # 30 units = 1 block

    t1 = time.time()
    # 600s budget — Every End 같은 큰 레벨도 끝까지 보려고 충분히
    res = run_simulation(level, actions=[False] * 60 * 600)
    t_sim = time.time() - t1

    return {
        "name": name,
        "n_obj": n_obj,
        "n_trig": n_trig,
        "n_collision_trig": n_collision,
        "n_collision_indexed": n_collision_indexed,
        "n_collision_block_obj": n_collision_block,
        "end_x": end_x,
        "end_blocks": end_blocks,
        "cleared": res.cleared,
        "frames": res.frames,
        "final_x": res.final_x,
        "final_blocks": res.final_x / BLOCK_SIZE,
        "death_frame": res.death_frame,
        "death_x": res.death_x,
        "death_obj_id": res.death_obj_id,
        "t_load_s": t_load,
        "t_sim_s": t_sim,
    }


def fmt(r: dict) -> str:
    state = "CLEARED" if r["cleared"] else (
        f"DIED @ frame {r['death_frame']} ({r['final_blocks']:.0f}b, obj={r['death_obj_id']})"
        if r["death_frame"] is not None
        else f"TIMEOUT @ {r['final_blocks']:.0f}b"
    )
    return (f"[{r['name']:>22}]  obj={r['n_obj']:>6}  trig={r['n_trig']:>5}  "
            f"coll_trig={r['n_collision_trig']:>4} (idx={r['n_collision_indexed']:>4})  "
            f"coll_block={r['n_collision_block_obj']:>4}  "
            f"len={r['end_blocks']:>5.0f}b  → {r['final_blocks']:>5.1f}b  "
            f"({state})  load={r['t_load_s']:.1f}s sim={r['t_sim_s']:.1f}s")


def main():
    rows = []
    for path, name in SAMPLES:
        if not Path(path).exists():
            print(f"[SKIP] {path} not found")
            continue
        print(f"... {name}", flush=True)
        try:
            r = sim_one(path, name)
            rows.append(r)
        except Exception as e:
            print(f"[FAIL] {name}: {type(e).__name__}: {e}")
            import traceback
            traceback.print_exc()

    print("\n=== 결과 ===")
    for r in rows:
        print(fmt(r))


if __name__ == "__main__":
    main()
