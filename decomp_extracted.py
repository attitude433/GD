"""GD.exe Ghidra 디컴파일 직접 추출 데이터 (2026-04-30 추출).

이 모듈은 D:\\GhidraProjects\\decomp/ 의 디컴파일 결과를 정리한 결과물.
gdp_extracted (camila314 디컴파일) 보다 더 최신 버전 (실측 GeometryDash.exe) 기준.

추출된 함수 (37개 중 핵심):
  - PlayerObject::collidedWithObject (0x3919b0) → wrapper
    → collidedWithObjectInternal (0x38f140) → wrapper
    → collidedWithObjectVariant (0x391a70, 1234줄) ★ 진짜 충돌 처리
  - PlayerObject 보조 함수 16개 (set Y, land, slope, squish, ...)
  - GJBaseGameLayer::update (0x237850, 812줄)
  - GJBaseGameLayer::processCommands (0x239c60) → processTriggers (0x231d10)
    → triggerObjectDispatch (0x2338e0)
  - EffectGameObject::triggerActivated (0x4a8790) — wrapper, 멤버 플래그만 set

DAT 상수 의미 모두 dump (`_DAT_constants.txt`, `_DAT_constants_v2.txt` 참조).

Wrapper-heavy 구조 → 한 함수 분석으로 끝나지 않음. 80개 트리거 진짜 효과는 아직.
"""

# =============================================================================
# DAT 상수 (collidedWithObjectVariant + 친구들에서 직접 dump)
# =============================================================================

# 충돌 관련 — collidedWithObjectVariant
COLLISION_TOLERANCE_DEFAULT = 10.0      # DAT_14062307c (float) — 기본 (모드 전환 등)
COLLISION_TOLERANCE_CUBE    = 5.0       # DAT_140623010 (float) — 큐브/일반
COLLISION_TOLERANCE_SLOPE   = 15.0      # DAT_140622ef0 (double) — 슬로프 카운터 > 0
COLLISION_TOLERANCE_AIR     = 6.0       # DAT_140623028 (float) — 공중 모드 (no_clip 분기)

# 박스 절반 (rect.size * BOX_HALF = bound to half-rect)
BOX_HALF = 0.5                          # DAT_140622b08

# Y 위치 정밀도 (snap to 1/POSITION_SNAP)
POSITION_SNAP = 1000.0                  # DAT_140623000

# 시간 임계값
TIME_THRESHOLD_100MS = 0.1              # DAT_140622cf0 (double)
TIME_THRESHOLD_200MS = 0.2              # DAT_140622d18 (double)

# Float abs (XOR mask) — abs(f) = bit_xor(f, ABS_MASK_NEG) trick
ABS_MASK = 0x7fffffff                   # DAT_1406243c0

# =============================================================================
# 착지 속도 임계값 (Y-velocity, broadcastEvent 호출 분기)
# landGround (0x39bf30) 에서 추출
# =============================================================================

# 큐브 모드 (player[0x9bf] = m_isUpsideDown == 0):
LAND_VEL_Y_DOWN_HARDEST = -14.0   # DAT_140623770 — abs(velY) > 14 → event 5 (very hard)
LAND_VEL_Y_DOWN_HARD    =  -8.0   # DAT_140623768 — abs in (8,14] → event 4
LAND_VEL_Y_DOWN_MEDIUM  =  -4.0   # DAT_140623748 — abs in (4,8]  → event 3
LAND_VEL_Y_DOWN_LIGHT   =  -1.0   # DAT_140623728 — abs in (1,4]  → event 1 or 2

# 거꾸로 모드 (player[0x9bf] != 0): 같은 임계값 양수
LAND_VEL_Y_UP_HARDEST = 14.0      # DAT_140622ee0
LAND_VEL_Y_UP_HARD    =  8.0      # DAT_140622ec0
LAND_VEL_Y_UP_MEDIUM  =  4.0      # DAT_140622e90
LAND_VEL_Y_UP_LIGHT   =  1.0      # DAT_140622e18

# 착지 X-displacement 임계값 (player.x - landingX, 큰 값 = 강한 착지)
# event 0x41-0x44 (65-68) 분기에 사용
LAND_X_DISP_LIGHT  = 7.5     # DAT_14062304c
LAND_X_DISP_MEDIUM = 150.0   # DAT_140623358
LAND_X_DISP_HARD   = 300.0   # DAT_14062343c
LAND_X_DISP_HARDEST= 450.0   # DAT_1406234a8

# =============================================================================
# 슬로프 Y 위치 보정 (slopeYPos, 0x1a13b0)
# =============================================================================

# 슬로프 flag [0x89] 가 set 일 때:
SLOPE_FLAG_OFFSET_HALFBLOCK = 4.0   # type ∈ {1,3,5,6} 외:  DAT_140622e90 (= +4)
SLOPE_FLAG_OFFSET_HALFBLOCK_NEG = -4.0  # type ∈ {1,3,5,6}:  DAT_140623748 (= -4)
SLOPE_TYPES_WITH_NEG_OFFSET = {1, 3, 5, 6}  # mask 0x6a 의 bit set

# =============================================================================
# 기타 검증된 상수
# =============================================================================
RAD_TO_DEG = 57.295780181884766    # DAT_140622f50 — 180 / pi (회전 각도 변환)
PI = 3.141592653589793              # DAT_140622e80
PROCESS_COMMANDS_FRAME_SCALE = 1000.0  # DAT_14062350c — frame counter scaler

# 추가 collidedWithObjectVariant 임계값
COLLISION_FALL_THRESHOLD = 16.0    # DAT_140622f00
COLLISION_FALL_THRESHOLD2 = 20.0   # DAT_140622f10

# =============================================================================
# PlayerObject 멤버 오프셋 (collidedWithObjectVariant 등에서 확인)
# =============================================================================

PLAYER_OFFSETS = {
    # 위치 (m_position 등)
    0x9a0: "m_lastPositionForBuffer (Y double 저장 — setPositionY_388d10 의 dest)",
    0x968: "m_squishYRight (double — 오른쪽 가장 가까운 끼임 Y 위치)",
    0x970: "m_squishYLeft  (double — 왼쪽)",

    # 충돌/landing
    0x9bf: "m_isUpsideDown (char) — 중력 반전 플래그 ★",
    0x9c1: "m_landed (char) — 1프레임 전 ground 접촉 여부",
    0x9c3: "m_isRotated90 (char) — 가로 swing/cube 회전 모드",
    0x134: "m_yVelocity (double, 8 bytes 단위 — *(longlong*)) ★",
    0xc6:  "m_landingYVelocity (double — 마지막 착지 시 velY)",
    0x9ec: "m_landingObjectId (int — 착지한 오브젝트 ID)",
    0xc3c: "m_lastLandingY (float — 마지막 착지 X 변화량)",

    # 모드
    0x16e: "m_isFlying (char — ship/UFO/wave/swing 등 공중 모드)",
    0x9b1: "m_isRobot (char)",
    0x136: "m_dashing (char)",
    0x9b9: "m_isShip (char)",
    0x9ba: "m_isBall (char)",
    0x9bb: "m_isUFO (char)",
    0x9bc: "m_isWave (char)",
    0x9bd: "m_isRobot2 (char)",  # 별도 robot mode flag?
    0x9be: "m_isSpider (char)",
    0x9c4: "m_isSwingCopter (char)",

    # 슬로프
    0x15e: "m_slopeCounter (int — 현재 슬로프 위에 있는 카운터)",

    # 이벤트 broadcasting (GJBaseGameLayer 참조)
    0x184: "m_gameLayer (longlong — GJBaseGameLayer*)",
    0x39c: "m_playerIndex (int — 1 or 2)",

    # collision dictionary (어떤 오브젝트 ID 와 충돌 중인지 record)
    0xb6: "m_collidedObjectsDict_y (CCDictionary*)",
    0xb7: "m_collidedObjectsDict_x (CCDictionary*)",
    0xc1: "m_lastCollidedObjectY (longlong*)",
    0xc2: "m_lastCollidedObjectX (longlong*)",
    0xcf: "m_attachedObject (longlong*) — wave/swing trail 등",
    0xdd: "m_attachedObjectsList (CCList* — std::list iter)",

    # GameObject 측 충돌 flag
    0x88: "GameObject::m_slopeUphill (char)",
    0x89: "GameObject::m_slopeFlagSpecial (char — half-block 보정)",
    0x444: "GameObject::m_slopeType (int — 0..6)",
    0x515: "GameObject::m_isPassthrough (char) — collidedWithObject 의 local_res8",
    0x51d: "GameObject::m_killsPlayerOnSide (char)",
    0x51e: "GameObject::m_killsPlayerOnTop (char)",
    0x3fe: "GameObject::m_objectID (short)",
    0x3e4: "GameObject::m_currentScaleY (float — 충돌 시점)",
    0x48c: "GameObject::m_currentScaleX (float — 충돌 시점)",
}

# =============================================================================
# 충돌 처리 핵심 룰 (collidedWithObjectVariant 추출)
# =============================================================================

COLLISION_RULES = """
collidedWithObjectVariant (0x391a70) 의 절차 (요약):

1. tolerance 결정:
   tolerance = COLLISION_TOLERANCE_DEFAULT  # 10.0
   if (NOT m_isFlying AND NOT m_isRobot AND NOT m_dashing):
       tolerance = COLLISION_TOLERANCE_CUBE  # 5.0
   if (m_slopeCounter > 0):
       tolerance = COLLISION_TOLERANCE_SLOPE  # 15.0
   if (m_isShip|Ball|Wave|SwingCopter AND NOT m_isFlying):
       tolerance = COLLISION_TOLERANCE_AIR  # 6.0
   if (m_isRobot):
       tolerance += player[0xd0]  # robot 추가 보정

2. 부호 (중력 방향): sign = isUpsideDown ? -1 : +1
   tolerance_y = sign * tolerance

3. velY 계산 (param_3 가 부딪힌 오브젝트):
   - 오브젝트도 움직이는 경우 (Move trigger 활성 etc):
     local_180 = (CCPoint) param_3.lastFramePosition  (offset +0x9a)
     param_3.getCurrentRelativePos(&local_res18)  (vfunc 0x4a8)
     dY_obj = currentY - lastY
     if (player.bottom 가 obj.bottom 위에 있으면):
         dY_obj 빼기 (오브젝트가 위로 가면 player 도 같이)
     velY_relative = (currentY - lastY) / dt

4. 충돌 분기 (rect intersect 후):
   - X-rect intersect AND Y-rect intersect AND velY_sign vs gravity_sign:
     → "위에서 떨어져서 착지" → landGround (FUN_14039bf30)
   - X-rect intersect AND Y-rect intersect 반대 방향:
     → "천장에 부딪힘" → landCeiling (FUN_14039bed0)
   - X-rect intersect 못함 (옆에서 부딪힘):
     → squishCheck Right/Left (FUN_140394200/3942a0) — 끼임 처리
   - X 가 spike 같은 hazard (local_res18 != 0):
     → killPlayer 경로 (FUN_140216090 또는 destroyPlayer)

5. 위치 snap:
   - new Y = (현재 Y) + velY*dt + tolerance_y
   - setPositionY_388d10: round((Y - floor(Y)) * 1000) / 1000 + floor(Y)
"""

# =============================================================================
# 착지 이벤트 broadcast 룰 (landGround 0x39bf30)
# =============================================================================

LANDING_EVENT_RULES = """
landGround (0x39bf30) 가 broadcastEvent (FUN_140231ff0) 호출하는 조건:

velY = player[0x134]  (m_yVelocity, double)
sign = isUpsideDown ? -1 : +1
abs_velY = sign * velY  # 부호 정규화 (down = 양수 취급)

Y-velocity 기반 sound/particle event:
  abs_velY > 14:           event 5  (very hard land)
  abs_velY in (8, 14]:     event 4  (hard)
  abs_velY in (4, 8]:      event 3  (medium)
  abs_velY in (1, 4]:      event 1 (jump-able) or event 2 (depends on player[0xa0c])
  abs_velY ≤ 1:            no event (silent landing)

X-displacement 기반 (player[0xc3c] = X 변화량):
  > 7.5    AND ≤ 150:  event 0x41 (65)  light land particle
  > 150    AND ≤ 300:  event 0x42 (66)  medium
  > 300    AND ≤ 450:  event 0x43 (67)  hard
  > 450:                event 0x44 (68)  hardest

이 broadcast 들이 Collision 트리거 (id=1815) 의 block_a/block_b 매칭에 사용됨.
"""

# =============================================================================
# Trigger queue 구조 (processTriggers 0x231d10 + dispatch 0x2338e0)
# =============================================================================

TRIGGER_QUEUE_LAYOUT = """
GJBaseGameLayer 안의 두 큐:

1. "Play Action" 큐 (0x3300/0x3308) — processTriggers 가 처리
   각 entry = 24 bytes (0x18):
     [0..3]  uint32  trigger ID (1=PLAY/start, 2=PAUSE, 3=RESUME 같은 큰 카테고리)
     [4]     uint8   forwardFlag (param_2)
     [5]     uint8   reverseFlag (param_4 의 invert)
     [8..15] double  fire time (current time + delay 비교)

   dequeue 후 호출: triggerObjectDispatch(layer, fwd, id, !rev)

2. "Effect Object" 큐 (0x3318/0x3320/0x3328) — triggerObjectDispatch 가 enqueue
   각 entry = 16 bytes (0x10):
     [0..3]  uint32  trigger param_3
     [4]     uint8   param_2
     [5]     uint8   computed flag (cVar1 && param_4==0)
     [6..7]  ?
     [8..15] zero (uStack_20 = 0)

   max 100,000 entries.

triggerObjectDispatch (0x2338e0) 가 호출하는 진짜 분기 함수:
  - FUN_1403981d0 (param_2 == 0 일 때)
  - FUN_140397f40 (param_2 != 0 일 때)
  → 이 둘 안에 80개 트리거 case 분기가 있을 것 (다음 라운드 추출)
"""

# =============================================================================
# 다음 라운드 추출 대상 (CLAUDE.md 다음 단계)
# =============================================================================

NEXT_DECOMPILE_TARGETS = [
    # 진짜 트리거 case 분기 (triggerObjectDispatch 가 호출)
    ("PlayerObject_triggerCheck_3981d0", 0x3981d0),
    ("PlayerObject_triggerCheck_397f40", 0x397f40),

    # update() 의 초기 함수들 — 트리거 발동 큐 push 가 여기 있을 가능성
    ("GJBaseGameLayer_updateGroups_21fbe0", 0x21fbe0),
    ("GJBaseGameLayer_updateColors_2222b0", 0x2222b0),
    ("GJBaseGameLayer_updateMoveTriggers_2466c0", 0x2466c0),
    ("GJBaseGameLayer_updateRotTriggers_248880", 0x248880),

    # processCommands → 0x213770 (FUN_140213770) — collision detection main loop
    ("GJBaseGameLayer_collisionLoop_213770", 0x213770),
    ("GJBaseGameLayer_collisionInner_2137f0", 0x2137f0),

    # customObjectSetup 안의 모든 case (이미 디컴파일 됨, 분석 필요)
    # — 80개 트리거 .gmd 키 → 멤버 매핑

    # FUN_1403a3f10 (player 마다 frame 단위 호출)
    ("PlayerObject_perFrameUpdate_3a3f10", 0x3a3f10),
]


if __name__ == "__main__":
    print(f"PlayerObject 멤버 오프셋: {len(PLAYER_OFFSETS)}개 검증")
    print(f"DAT 상수: {sum(1 for k, v in vars().items() if k.isupper() and isinstance(v, (int, float)))}개")
    print()
    print("=== 충돌 처리 룰 ===")
    print(COLLISION_RULES)
    print()
    print("=== 착지 이벤트 ===")
    print(LANDING_EVENT_RULES)
    print()
    print("=== 트리거 큐 ===")
    print(TRIGGER_QUEUE_LAYOUT)
