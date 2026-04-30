"""
트리거·충돌 동작 정의 — OpenGD 소스에서 정밀 추출.

이 파일은 "어떤 식·룰·분기로 동작하는지"의 데이터/함수만.
시뮬레이터(`simulator.py`)가 이 파일을 import 해서 동작 적용.

출처:
- D:/OpenGD/Source/EffectGameObject.cpp::triggerActivated
- D:/OpenGD/Source/EffectManager.cpp + MoveAction.cpp + GroupCommandObject 흐름
- D:/OpenGD/Source/PlayerObject.cpp::collidedWithObject / propellPlayer / ringJump
- D:/OpenGD/Source/PlayLayer.cpp 충돌 디스패치 메인 루프 (~line 1380~1503)
"""
from __future__ import annotations
import math


# ── 1. PlayLayer 충돌 디스패치 룰 ──────────────────────────────
#
# PlayLayer 가 매 프레임 player 와 닿은 모든 obj 에 대해:
#   if obj 가 hazard 리스트에 있으면     → Hazard 분기 (radius / rect)
#   else 아래 GameObjectType 별 분기
#
# 분기는 우선순위로 처리. 같은 GameObjectType 끼리 중복 충돌 시 첫 매칭 적용.

# 액션 enum — 시뮬에서 분기 처리용
ACTION_DEATH         = "death"            # destroyPlayer
ACTION_SOLID_COLLIDE = "solid_collide"    # collidedWithObject (snap/death)
ACTION_PROPEL        = "propel"           # propellPlayer(force)
ACTION_RING_JUMP     = "ring_jump"        # 클릭 시 ringJump
ACTION_CHANGE_MODE   = "change_mode"      # mode 전환
ACTION_TOGGLE_MINI   = "toggle_mini"
ACTION_GRAVITY_FLIP  = "gravity_flip"
ACTION_CHANGE_SPEED  = "change_speed"     # speed portal
ACTION_TRIGGER       = "trigger"          # EffectGameObject — triggerActivated
ACTION_PASS          = "pass"             # 무시 (Mirror, Special 등)


# GameObjectType → (action, args)
# args 가 callable 이면 obj 전달해서 dispatch_action 안에서 호출
TYPE_DISPATCH: dict[int, tuple[str, dict]] = {
    # Hazard 류는 별도 hazard 리스트로 처리되므로 여기 없음
    # 0  Solid          : default → solid_collide
    # 25 Slope          : default → solid_collide
    # 39 CollisionObject: default → solid_collide

    # 모드 전환 포털
    5:  (ACTION_CHANGE_MODE, {"mode": "ship"}),         # ShipPortal
    6:  (ACTION_CHANGE_MODE, {"mode": "cube"}),         # CubePortal
    16: (ACTION_CHANGE_MODE, {"mode": "ball"}),         # BallPortal
    19: (ACTION_CHANGE_MODE, {"mode": "ufo"}),          # UfoPortal
    26: (ACTION_CHANGE_MODE, {"mode": "wave"}),         # WavePortal
    27: (ACTION_CHANGE_MODE, {"mode": "robot"}),        # RobotPortal
    33: (ACTION_CHANGE_MODE, {"mode": "spider"}),       # SpiderPortal

    # 중력 포털
    3:  (ACTION_GRAVITY_FLIP, {"flip_to": True}),       # InvGravPortal
    4:  (ACTION_GRAVITY_FLIP, {"flip_to": False}),      # NormGravPortal

    # 사이즈 포털
    17: (ACTION_TOGGLE_MINI, {"mini": False}),          # RegularSizePortal
    18: (ACTION_TOGGLE_MINI, {"mini": True}),           # MiniSizePortal

    # 미러 포털 — OpenGD 미구현, pass
    14: (ACTION_PASS, {}),                              # InvMirrorPortal
    15: (ACTION_PASS, {}),                              # NormMirrorPortal

    # 점프 패드 (propellPlayer force) — PlayLayer.cpp:1394~1430
    8:  (ACTION_PROPEL, {"force": 1.00}),               # YellowJumpPad
    9:  (ACTION_PROPEL, {"force": 0.65}),               # PinkJumpPad
    10: (ACTION_PROPEL, {"force": 0.80, "gravity_flip": True}),  # GravityPad
    34: (ACTION_PROPEL, {"force": 1.25}),               # RedJumpPad

    # 점프 오브 (ringJump) — 클릭 시 발동
    11: (ACTION_RING_JUMP, {"kind": "yellow"}),
    12: (ACTION_RING_JUMP, {"kind": "pink"}),
    13: (ACTION_RING_JUMP, {"kind": "gravity"}),
    29: (ACTION_RING_JUMP, {"kind": "green"}),
    32: (ACTION_RING_JUMP, {"kind": "drop"}),
    35: (ACTION_RING_JUMP, {"kind": "red"}),
    37: (ACTION_RING_JUMP, {"kind": "dash"}),
    38: (ACTION_RING_JUMP, {"kind": "gravity_dash"}),

    # Modifier (speed portal) — obj.id 로 추가 분기
    20: (ACTION_CHANGE_SPEED, {}),                       # PlayLayer 가 obj.id 보고 결정

    # Special / 미구현
    40: (ACTION_PASS, {}),
}


# Modifier (type=20) 의 obj.id → speed_index — PlayLayer.cpp:1446~1464
SPEED_PORTAL_DISPATCH: dict[int, int] = {
    201: 0,    # 1x   (normal)
    200: 1,    # 0.5x (slow)
    202: 2,    # 2x
    203: 3,    # 3x
    1334: 4,   # 4x
}


# ── 2. propellPlayer (점프 패드) 정확한 식 ───────────────────
# PlayerObject.cpp:400
#   m_dYVel = flipMod * 16 * force * (vehicleSize == 1.0 ? 1.0 : 0.8)
#   if (mode == Ball or Spider) m_dYVel *= 0.6
def propel_player_yvel(force: float, flip_mod: int = 1,
                       vehicle_size: float = 1.0, mode: str = "cube") -> float:
    """점프 패드의 최종 Y속도 (units/s 가 아니라 GD 내부 단위; *30 곱해야 units/s)"""
    yvel = flip_mod * 16.0 * force * (1.0 if vehicle_size == 1.0 else 0.8)
    if mode in ("ball", "spider"):
        yvel *= 0.6
    return yvel


# ── 3. ringJump (점프 오브, 클릭 시) 정확한 식 ──────────────
# PlayerObject.cpp:416
#   yellow:  newYVel = m_dJumpHeight (=11.180032), 모드 무관
#   red:     newYVel = m_dJumpHeight * mult [모드별]
#   pink:    newYVel = m_dJumpHeight * mult [모드별]
#   drop:    newYVel = -절대값 [모드별]
#   gravity: newYVel = m_dJumpHeight * 0.8 + 중력 반전
JUMP_HEIGHT_BASE = 11.180032          # m_dJumpHeight (OpenGD)

RING_JUMP_MULTIPLIERS = {
    "yellow":  {"cube":1.0, "ship":1.0, "ufo":1.0, "ball":1.0, "wave":1.0, "robot":1.0, "spider":1.0},
    "red":     {"cube":1.38, "ship":1.0,  "ship_mini":1.4,
                "ufo":1.02,  "ufo_mini":1.36,
                "ball":1.34, "spider":1.34, "robot":1.28, "wave":1.38},
    "pink":    {"cube":0.72, "ship":0.37, "ufo":0.42, "ball":0.77,
                "robot":0.72, "spider":0.72, "wave":0.72},
    "gravity": {"_all": 0.8, "_flip": True},
    "green":   {"_all": 1.0, "_flip": True, "_then_fall": True},
}

# Drop ring 은 absolute Y속도 (음수 = 아래로)
RING_DROP_VELOCITIES = {
    "cube": -15.0, "robot": -15.0, "ball": -15.0, "spider": -16.5,
    "ship": -14.0, "wave": -14.0, "ufo": -11.2,
}


def ring_jump_yvel(kind: str, mode: str = "cube",
                   vehicle_size: float = 1.0, flip_mod: int = 1) -> tuple[float, dict]:
    """
    점프 오브 클릭 시 새 Y속도 + 부속 효과(중력 반전 등).
    반환: (yvel, extras) — extras 에 {'gravity_flip': bool, 'then_fall': bool}
    """
    extras = {"gravity_flip": False, "then_fall": False}

    if kind == "drop":
        yvel = RING_DROP_VELOCITIES.get(mode, -15.0) * flip_mod
        return yvel, extras

    if kind in ("gravity", "green"):
        yvel = JUMP_HEIGHT_BASE * RING_JUMP_MULTIPLIERS[kind]["_all"] * flip_mod
        extras["gravity_flip"] = RING_JUMP_MULTIPLIERS[kind].get("_flip", False)
        extras["then_fall"]    = RING_JUMP_MULTIPLIERS[kind].get("_then_fall", False)
        return yvel, extras

    table = RING_JUMP_MULTIPLIERS.get(kind, {})
    if kind == "red" and vehicle_size < 1.0 and mode in ("ship", "ufo"):
        mult = table.get(f"{mode}_mini", 1.0)
    else:
        mult = table.get(mode, 1.0)
    yvel = JUMP_HEIGHT_BASE * mult * flip_mod
    if vehicle_size < 1.0 and kind != "red":
        yvel *= 0.8
    return yvel, extras


# ── 4. collidedWithObject (Solid/Slope 충돌) 정밀 룰 ─────────
# PlayerObject.cpp:710
# 핵심 forgive: mod = flipMod * (10 if cube else 6 if ship else ?)
# 그래서 player outer 박스를 안쪽으로 mod 만큼 줄인 가상 박스로 검사
COLLISION_MOD = {
    "cube":   10.0,
    "ship":    6.0,
    "ball":   10.0,
    "ufo":    10.0,
    "wave":   10.0,
    "robot":  10.0,
    "spider": 10.0,
}


def collide_with_solid(player_y: float, player_h: float,
                       obj_min_y: float, obj_max_y: float,
                       vy: float, gravity_dir: int, mode: str = "cube"
                       ) -> tuple[str, float | None]:
    """
    Solid/Slope 충돌 판정. inner box 검사는 외부에서 하고, 여기는
    "윗면 snap 가능?" / "사망?" 분기만.

    반환: (action, snap_y)
      action ∈ {"land", "death", "ignore"}
      snap_y = 윗면에 snap 할 player.y (action="land" 일 때만)

    OpenGD 룰 그대로:
      mod    = COLLISION_MOD[mode]
      topP   = pos.y + (-h/2 * -flipMod) - mod
      bottomP= pos.y + (-h/2 *  flipMod) + mod
      → b >= MaxY (윗면 들어옴) 이고 vy<0 (떨어지는 중) → snap
      → 그 외에 inner 박스가 obj rect 와 겹치면 death
    """
    flip_mod = gravity_dir   # +1 / -1
    mod = COLLISION_MOD.get(mode, 10.0)
    half = player_h / 2.0
    top    = player_y + half * flip_mod - mod
    bottom = player_y - half * flip_mod + mod

    if gravity_dir > 0:    # 정상 중력
        # 떨어지는 중 윗면 들어옴
        if bottom >= obj_max_y or top >= obj_max_y:
            if vy < 0:
                # MaxYP >= (Min+Max)/2 일 때 snap (즉 player 가 obj 윗면 위쪽에 더 가까움)
                snap_y = obj_max_y + half
                return "land", snap_y
        # else: 옆/아래 들어옴 → 사망
        return "death", None
    else:                  # 반전 중력
        if top <= obj_min_y or bottom <= obj_min_y:
            if vy > 0:
                snap_y = obj_min_y - half
                return "land", snap_y
        return "death", None


# ── 5. EffectGameObject::triggerActivated 분기 ───────────────
# EffectGameObject.cpp:92
# 트리거 종류별 동작:
#   29  → BG Color    (target_color=1000 자동)
#   30  → Ground Color(target_color=1001 자동)
#   899 → 일반 Color  (target_color=trigger 의 _targetColorId)
#   22~28 → Enter Effect 1~7 (PlayLayer._enterEffectID)
#   901 → Move        : runMoveCommand(dur, offset, easing, easeRate, groupID)
#   1006 → Pulse      : color sequence (fadeIn/hold/fadeOut)
#   1007 → Alpha      : group._alpha tween
#   1049 → Toggle     : 그룹 obj 들 _toggledOn = activate_group
#                       (off 면 removeFromGameLayer 도 호출)
#   1268 → Spawn      : _spawnDelay 후 target 그룹의 _isTrigger+_spawnTriggered
#                       오브젝트들에 triggerActivated 호출 (chain)

TRIGGER_BEHAVIOR = {
    29:   {"kind": "color", "target": 1000, "params": ("color","opacity","blending","copy_color","hsv","duration")},
    30:   {"kind": "color", "target": 1001, "params": ("color","opacity","blending","copy_color","hsv","duration")},
    899:  {"kind": "color", "target": "explicit", "params": ("color","opacity","blending","copy_color","hsv","duration")},
    901:  {"kind": "move",  "params": ("duration","offset","easing","ease_rate","target_group_id")},
    1006: {"kind": "pulse", "params": ("color","fade_in","hold","fade_out","pulse_mode","main_only","detail_only","copy_color","hsv","target_group_id")},
    1007: {"kind": "alpha", "params": ("duration","opacity","target_group_id")},
    1049: {"kind": "toggle","params": ("activate_group","target_group_id")},
    1268: {"kind": "spawn", "params": ("spawn_delay","target_group_id")},
    # Enter effects
    22: {"kind": "enter_effect", "effect_id": 1},
    23: {"kind": "enter_effect", "effect_id": 5},
    24: {"kind": "enter_effect", "effect_id": 4},
    25: {"kind": "enter_effect", "effect_id": 6},
    26: {"kind": "enter_effect", "effect_id": 7},
    27: {"kind": "enter_effect", "effect_id": 2},
    28: {"kind": "enter_effect", "effect_id": 3},
}


# ── 6. Move 트리거 흐름 (EffectManager + GroupCommandObject) ─
# EffectManager.cpp:37  runMoveCommand → GroupCommandObject 만들고 _groupActions 에 push
# EffectManager.cpp:47  prepareMoveActions(dt) — 매 프레임:
#   for cmd in _groupActions:
#     cmd.step(dt)               # easing 적용된 이번 프레임 진행률
#     cmd._delta1 = (이번 프레임 이동량)
#     _activeMoveActions[gid]._newPosOptimized += cmd._newPos
# 그 다음 BaseGameLayer 가 _activeMoveActions 순회 → 그룹 obj 들의
#   obj._startPosOffset.x/y += _newPosOptimized.x/y
#
# 즉 Move 트리거 = "duration 동안 그룹 오브젝트들의 _startPosOffset 에 offset 누적".
# easing 은 "진행률(0~1)에 ease 함수 적용 후 그 차이만큼 이동" 식.


# ── 7. Easing 함수 (cocos2d) — 19종 ──────────────────────────
# OpenGD::actionEasing 이 cocos2d EaseIn/Out/InOut 등을 wrap.
# cocos2d 공식 식:
def ease_none(t: float) -> float:                  return t
def ease_in(t: float, rate: float = 2.0) -> float:    return t ** rate
def ease_out(t: float, rate: float = 2.0) -> float:   return 1.0 - (1.0 - t) ** rate
def ease_in_out(t: float, rate: float = 2.0) -> float:
    if t < 0.5:
        return 0.5 * (2 * t) ** rate
    return 1.0 - 0.5 * (2 - 2 * t) ** rate


def ease_sine_in(t: float)    -> float: return 1 - math.cos(t * math.pi / 2)
def ease_sine_out(t: float)   -> float: return math.sin(t * math.pi / 2)
def ease_sine_in_out(t: float)-> float: return -(math.cos(math.pi * t) - 1) / 2


def ease_exp_in(t: float)     -> float: return 0.0 if t == 0 else 2 ** (10 * (t - 1))
def ease_exp_out(t: float)    -> float: return 1.0 if t == 1 else 1 - 2 ** (-10 * t)
def ease_exp_in_out(t: float) -> float:
    if t == 0:   return 0.0
    if t == 1:   return 1.0
    if t < 0.5:  return 0.5 * 2 ** (10 * (2 * t - 1))
    return 1 - 0.5 * 2 ** (-10 * (2 * t - 1))


def ease_back_in(t: float, s: float = 1.70158)    -> float: return t * t * ((s + 1) * t - s)
def ease_back_out(t: float, s: float = 1.70158)   -> float:
    t -= 1
    return t * t * ((s + 1) * t + s) + 1
def ease_back_in_out(t: float, s: float = 1.70158)-> float:
    s *= 1.525
    if t < 0.5:
        return 0.5 * (2 * t) ** 2 * ((s + 1) * 2 * t - s)
    t = 2 * t - 2
    return 0.5 * (t * t * ((s + 1) * t + s) + 2)


# Bounce (cocos2d 공식)
def _bounce_out(t: float) -> float:
    if   t < 1/2.75:                 return 7.5625 * t * t
    elif t < 2/2.75: t -= 1.5/2.75;  return 7.5625 * t * t + 0.75
    elif t < 2.5/2.75: t -= 2.25/2.75; return 7.5625 * t * t + 0.9375
    else:           t -= 2.625/2.75; return 7.5625 * t * t + 0.984375
def ease_bounce_out(t: float) -> float: return _bounce_out(t)
def ease_bounce_in(t: float)  -> float: return 1 - _bounce_out(1 - t)
def ease_bounce_in_out(t: float) -> float:
    if t < 0.5: return 0.5 - 0.5 * _bounce_out(1 - 2 * t)
    return 0.5 + 0.5 * _bounce_out(2 * t - 1)


# Elastic (cocos2d 공식)
def ease_elastic_in(t: float, period: float = 0.3) -> float:
    if t == 0 or t == 1: return t
    s = period / 4
    t -= 1
    return -(2 ** (10 * t)) * math.sin((t - s) * 2 * math.pi / period)
def ease_elastic_out(t: float, period: float = 0.3) -> float:
    if t == 0 or t == 1: return t
    s = period / 4
    return 2 ** (-10 * t) * math.sin((t - s) * 2 * math.pi / period) + 1
def ease_elastic_in_out(t: float, period: float = 0.3) -> float:
    if t == 0 or t == 1: return t
    s = period / 4
    t = t * 2 - 1
    if t < 0:
        return -0.5 * 2 ** (10 * t) * math.sin((t - s) * 2 * math.pi / period)
    return 2 ** (-10 * t) * math.sin((t - s) * 2 * math.pi / period) * 0.5 + 1


# easing 인덱스 (OpenGD 와 동일) → 함수
EASE_FUNC = {
    0:  ease_none,
    1:  ease_in_out,
    2:  ease_in,
    3:  ease_out,
    4:  ease_elastic_in_out,
    5:  ease_elastic_in,
    6:  ease_elastic_out,
    7:  ease_bounce_in_out,
    8:  ease_bounce_in,
    9:  ease_bounce_out,
    10: ease_exp_in_out,
    11: ease_exp_in,
    12: ease_exp_out,
    13: ease_sine_in_out,
    14: ease_sine_in,
    15: ease_sine_out,
    16: ease_back_in_out,
    17: ease_back_in,
    18: ease_back_out,
}


def apply_ease(t: float, ease: int, rate: float = 2.0) -> float:
    """
    progress t (0~1) 에 easing 적용. rate 는 In/Out/InOut 류만 사용.
    """
    f = EASE_FUNC.get(ease, ease_none)
    if ease in (1, 2, 3):
        return f(t, rate)
    return f(t)


# ── 단위 테스트 ────────────────────────────────────────────────

def _test_propel():
    # 큐브, vehicleSize 1.0, force 1.0 → yvel = 1 * 16 * 1 * 1 = 16
    assert propel_player_yvel(1.0)        == 16.0
    assert propel_player_yvel(1.25)       == 20.0           # red pad
    assert propel_player_yvel(0.65)       == 16 * 0.65      # pink pad
    assert propel_player_yvel(0.80)       == 12.8           # gravity pad
    # ball 모드 *0.6
    assert abs(propel_player_yvel(1.0, mode="ball") - 9.6) < 1e-9
    # mini *0.8
    assert abs(propel_player_yvel(1.0, vehicle_size=0.6) - 12.8) < 1e-9
    print("[OK] propel_player_yvel")


def _test_ring_jump():
    # yellow cube
    yv, ex = ring_jump_yvel("yellow", "cube")
    assert abs(yv - JUMP_HEIGHT_BASE) < 1e-6
    # red cube *1.38
    yv, _ = ring_jump_yvel("red", "cube")
    assert abs(yv - JUMP_HEIGHT_BASE * 1.38) < 1e-6
    # pink ship *0.37
    yv, _ = ring_jump_yvel("pink", "ship")
    assert abs(yv - JUMP_HEIGHT_BASE * 0.37) < 1e-6
    # drop cube = -15
    yv, _ = ring_jump_yvel("drop", "cube")
    assert yv == -15.0
    # gravity → flip True
    yv, ex = ring_jump_yvel("gravity", "cube")
    assert ex["gravity_flip"]
    print("[OK] ring_jump_yvel")


def _test_easing():
    # ease_none = identity
    assert apply_ease(0.3, 0) == 0.3
    # ease_in (rate=2, t=0.5) = 0.25
    assert abs(apply_ease(0.5, 2) - 0.25) < 1e-9
    # ease_out (rate=2, t=0.5) = 1 - 0.25 = 0.75
    assert abs(apply_ease(0.5, 3) - 0.75) < 1e-9
    # ease_in_out 중간: 0.5 → 0.5
    assert abs(apply_ease(0.5, 1) - 0.5) < 1e-9
    # ease_sine_in_out (0) = 0, (1) = 1
    assert abs(apply_ease(0,   13))     < 1e-9
    assert abs(apply_ease(1,   13) - 1) < 1e-6
    print("[OK] easing (none/in/out/in_out/sine)")


def _test_collide_solid():
    # 큐브, 떨어지는 중 (vy=-100), player y=45 위에 block top=30 → land
    action, snap_y = collide_with_solid(
        player_y=45, player_h=30,
        obj_min_y=0, obj_max_y=30,
        vy=-100, gravity_dir=1, mode="cube")
    # mod=10, half=15, bottom = 45 - 15 + 10 = 40, top = 45 + 15 - 10 = 50
    # bottom(40) >= MaxY(30) and vy<0 → land
    assert action == "land"
    assert snap_y == 30 + 15   # = 45
    # 옆/아래 충돌: player y=20, block 0~30, vy=-100 (떨어지는 중)
    # bottom = 20 - 15 + 10 = 15, top = 20 + 15 - 10 = 25 둘 다 < 30 → death (윗면 들어온 게 아님)
    action, _ = collide_with_solid(20, 30, 0, 30, vy=-100, gravity_dir=1)
    assert action == "death"
    print("[OK] collide_with_solid")


if __name__ == "__main__":
    _test_propel()
    _test_ring_jump()
    _test_easing()
    _test_collide_solid()
