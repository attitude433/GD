"""점프 AI — 시뮬레이터에 자동 점프 결정 알고리즘.

두 가지 모드:
1. greedy: 충돌 임박 시 점프 (단순, 빠름)
2. bfs: 가능한 점프 시퀀스 탐색 (정확, 느림 — 단기 lookahead)

목적: 시뮬레이터 정확도 검증 + 데이터셋 수집을 위한 자동 클리어
"""
from __future__ import annotations
from dataclasses import dataclass
from copy import deepcopy
from simulator import (
    Player, Level, SimObject, run_simulation,
    step_physics, step_triggers, step_dispatch, step_collision,
    step_collision_triggers, update_active_moves, update_pending_spawns,
    ActiveMove, PendingSpawn, DT, GROUND_Y, BLOCK_SIZE, SPEED,
)
from physics_constants import CUBE


# 큐브 점프 분석 (lily-pi 검증):
JUMP_VY = CUBE['jump_velocity_bs'] * BLOCK_SIZE   # 604.47 u/s
GRAVITY = CUBE['gravity_bs']        * BLOCK_SIZE   # 2370 u/s²
DEFAULT_SPEED = SPEED[1.0]                          # 311.58 u/s
# 1.0x 속도 큐브 점프 — 약 0.51초 공중, 약 159u 거리
JUMP_AIR_TIME    = 2 * JUMP_VY / GRAVITY           # ≈ 0.51s
JUMP_DISTANCE_X  = DEFAULT_SPEED * JUMP_AIR_TIME   # ≈ 159 u (5.3 b)
JUMP_MAX_HEIGHT  = JUMP_VY ** 2 / (2 * GRAVITY)    # ≈ 77 u (2.6 b)


# 충돌 가능 hazard / solid object types
_HAZARD_TYPES = {2, 47}                # Hazard, AnimatedHazard
_SOLID_TYPES  = {0, 25, 39}             # Solid, Slope, CollisionObject
_RING_TYPES   = {11, 12, 13, 29, 32, 35, 37, 38}    # 점프 오브


def greedy_jump_decide(p: Player, level: Level, lookahead_units: float = 200.0) -> bool:
    """
    Greedy 룰:
    1. ring orb 위에 있으면 → 즉시 click (ring 발동)
    2. on_ground 이고 lookahead 안에 hazard → 점프
    """
    if not p.alive:
        return False

    # 1. Ring orb 위에 있으면 즉시 click (공중에서도 발동 가능)
    # touched_rings 는 step_ring_check 가 채움 — AI 가 호출하기 전에 채워져야
    # 하지만 jump_ai 의 main loop 에서 ring_check 가 step_physics 전에 호출됨 → OK
    if p.touched_rings:
        return True

    if not p.on_ground:
        return False

    # 2. lookahead 안에 hazard 찾기
    px = p.x
    for o in level.nearby(px + lookahead_units / 2, margin=lookahead_units):
        if not o.enabled or o.is_passable or o.no_touch or o.z_layer < 0:
            continue
        if o.type not in _HAZARD_TYPES:
            continue
        if o.x + o.dx <= px:
            continue
        gap = (o.x + o.dx) - px
        if gap > lookahead_units:
            continue
        return True
    return False


def run_with_greedy_ai(level: Level, max_frames: int = 60 * 600,
                       lookahead: float = 200.0,
                       start_x: float = 0.0, start_y: float = 105.0):
    """Greedy AI 로 시뮬 — 매 프레임 jump 결정."""
    if not level.objects:
        raise ValueError("빈 레벨")
    end_x = max(o.x + o.w / 2 for o in level.objects)

    p = Player(x=start_x, y=start_y)
    active_moves: list[ActiveMove]   = []
    pending_spawns: list[PendingSpawn] = []
    collision_blocks: set[int]         = set()

    jump_log = []
    collision_block_pairs: set = set()
    from simulator import step_ring_check, fire_ring_jump, fire_touch_triggers
    for f in range(max_frames):
        if p.jump_blocked:
            p.jump_blocked = False    # 1프레임만
            action = False
            jump_log_skip = True
        else:
            # Ring orb buffer 갱신 — AI 가 ring 사용 결정에 필요
            step_ring_check(p, level)
            # AI: greedy 결정 (ring 위면 즉시 점프)
            action = greedy_jump_decide(p, level, lookahead_units=lookahead)
            jump_log_skip = False
        if action and not jump_log_skip:
            jump_log.append((f, p.x))

        prev_x = p.x
        eff_dt = DT * p.timewarp
        p.total_time += eff_dt
        for tid in p.timers:
            p.timers[tid] += eff_dt
        ring_fired = False
        if action and p.touched_rings:
            ring_fired = fire_ring_jump(p)
        if action:
            fire_touch_triggers(level, p, active_moves, pending_spawns)
        step_physics(p, jump=(action and not ring_fired), dt=eff_dt)
        step_triggers(level, prev_x, p.x, active_moves, pending_spawns, player=p)
        collision_blocks, collision_block_pairs = step_collision_triggers(
            level, p, collision_blocks, active_moves, pending_spawns,
            prev_block_pairs=collision_block_pairs)
        update_pending_spawns(level, pending_spawns, active_moves, eff_dt, player=p)
        update_active_moves(active_moves, eff_dt)
        step_dispatch(p, level)
        hit_id = step_collision(p, level)
        if not p.alive:
            return {
                'cleared': False, 'frames': f + 1,
                'final_x': p.x, 'death_obj_id': hit_id,
                'jumps': len(jump_log),
            }
        if (not p.on_ground and p.gravity_dir > 0
                and p.y - p.h / 2 < GROUND_Y and p.vy < 0):
            p.y = GROUND_Y + p.h / 2
            p.vy = 0
            p.on_ground = True
        if p.x >= end_x:
            return {'cleared': True, 'frames': f + 1, 'final_x': p.x,
                    'jumps': len(jump_log)}
        if p.y < -300:
            return {'cleared': False, 'frames': f + 1, 'final_x': p.x,
                    'death_obj_id': None, 'jumps': len(jump_log)}
    return {'cleared': False, 'frames': max_frames, 'final_x': p.x,
            'jumps': len(jump_log)}


if __name__ == "__main__":
    # 자기 테스트: 단순 spike 레벨
    objs = [SimObject(obj_id=1, x=15+i*30, y=15, rotation=0, w=30, h=30, type=0)
            for i in range(20)]
    spike = SimObject(obj_id=8, x=300, y=37, rotation=0, w=6, h=14, type=2)
    objs.append(spike)
    objs.sort(key=lambda o: o.x)
    level = Level(name="t", objects=objs, _xs=[o.x for o in objs])
    res = run_with_greedy_ai(level, max_frames=200)
    print(f"Greedy AI on spike level: {res}")
    assert res['cleared'], f"점프 1번 으로 spike 넘어야: {res}"
    print(f"[OK] greedy AI clears single spike with {res['jumps']} jump(s)")
