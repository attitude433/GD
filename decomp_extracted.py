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
# triggerObject (★★★ 80개 트리거 dispatch 발견 — 0x4a5f30, 1297줄, 105 case)
# Geode 2.2081 bindings 에서 주소 확인:
#   EffectGameObject::triggerObject = win 0x4a5f30
#   파생 클래스 4개도 별도 구현: 0x4b9e10, 0x4bb210, 0x4bd820, 0x4c23f0
# =============================================================================

# triggerObject base 의 case → 효과 함수 매핑 (디컴파일 src 직접 추출)
TRIGGER_DISPATCH_BASE = {
    # case object_id : (효과 함수, 설명)
    0x385: ("FUN_14021ea40", "Move (901) — FUN_14021ea40(layer, this_trigger)"),
    0x393: ("inline:case 899/900/0x393", "BG/Color legacy (915, 899, 900) — common goto"),
    0x3ee: ("FUN_140260c40", "Color (1006) — colorMgr.setColor(channel, R, G, B, opacity, blending, ...)"),
    0x3ef: ("FUN_140260a70", "Pulse (1007) — colorMgr.pulseColor(channel, ...)"),
    0x419: ("FUN_140223bc0", "Toggle (1049) — toggleGroup(layer, group_id, on/off)"),
    0x717: ("inline:check param_1+0x6a6", "COLLISION (1815) — flag-based, see line 510"),
    0x71a: ("inline:check param_1+0x28d", "?(1818) — early return"),
    0x812: ("inline:set layer.player[0xb84]", "GRAVITY (2066) — set player gravity direction"),
    # 나머지 ~95 case: 디컴파일 src 590-985 라인 참조
}

# 15개 triggerObject 구현 (Geode 2.2081 bindings 확인 — class별 override)
# 모두 dump 완료 (D:/GhidraProjects/decomp/triggerObject_*.c)
TRIGGER_DISPATCH_DERIVED_ADDRS = {
    0x4a5f30: "EffectGameObject (BASE) — 105 case, Move/Color/Pulse/Toggle 등",
    0x4b41e0: "(73줄)",
    0x4b4870: "(177줄)",
    0x4b88a0: "(41줄)",
    0x4b91f0: "(35줄)",
    0x4b9e10: "FAIL — function not found at this addr",
    0x4bb210: "(217줄) — TOUCH 트리거 (case 0x64b)",
    0x4bc180: "(1302줄) — base 와 거의 동일 case 구조 (서브클래스 override)",
    0x4bccd0: "(44줄)",
    0x4bd820: "(110줄) — case 0x77a/0x77c/0x7df/0x7e0",
    0x4bf1e0: "(47줄)",
    0x4bfcf0: "(60줄)",
    0x4c23f0: "(161줄)",
    0x4c3320: "(161줄)",
    # 추가: GameObject::triggerObject = inline (= 6131:6131 bindings)
}

# Spawn(0x4f4 = 1268) 미발견 — 어떤 triggerObject 에도 case 0x4f4 없음.
# 가설: SpawnTrigger 가 별도 mechanism (trigger queue 직접 호출) 또는 inline 호출.
# spawnGroup 함수 (0x21ab80) 자체는 알려져 있고 caller 분석 필요.
SPAWN_TRIGGER_BLOCKER = """
다음 라운드에서 해야 할 것:
1. spawnGroup (0x21ab80) 의 caller 들을 찾아 Spawn 트리거 발동 위치 식별
2. customSetup 에서 0x4f4 가 m_isActiveTrigger=1 으로 설정됨 → activeTrigger 처리
   loop 가 어디서 돌아가는지 (update() 의 어떤 sub-call 인지) 추적
"""

# 알려진 효과 함수 주소 (이미 있는 것들 + triggerObject 가 호출하는 것들)
TRIGGER_EFFECT_FUNCTIONS = {
    "spawnGroup":  0x21ab80,
    "toggleGroup": 0x223bc0,
    "addToGroup":  0x223fd0,
    "MoveEffect":  0x21ea40,    # Move trigger 진짜 효과 (208 줄, decomp 완료)
    "ColorSet":    0x260c40,    # Color trigger 진짜 효과 (212 줄, 시각만 — 시뮬 무관)
    "PulseEffect": 0x260a70,    # Pulse trigger (48 줄, 시각만)
    "MoveActionMgr_addAction": 0x25c700,  # Move trigger 가 duration > 0 일 때 호출 (보간)
    # GRAVITY, COLLISION 은 inline 작은 코드라 별도 함수 없음
}

# Move 트리거 효과 (FUN_14021ea40, decomp 분석):
MOVE_TRIGGER_EFFECT = """
Move trigger (case 0x385) → FUN_14021ea40(layer, this_trigger):

param_2 (this_trigger) 멤버 offsets:
  +0x5e0  m_moveOffset (CCPoint)
  +0x5bc  m_duration (float)
  +0x5c8  m_targetGroupID (int)
  +0x5cc  m_centerGroupID (int)
  +0x5e8  m_easing (int)
  +0x5ec  m_easingRate (float)
  +0x5f0  m_lockPlayerX (char)
  +0x5f1  m_lockPlayerY (char)
  +0x5f2/0x5f3  추가 lock variants
  +0x5f4  m_useDirection (char)
  +0x5fc  m_moveX (uint = float bits)
  +0x600  m_moveY (uint = float bits)
  +0x605  m_useDirectionMode (char)
  +0x608  m_centerGroupID2 (int)
  +0x610  m_useTarget (char)
  +0x611  m_smallStepMode (char) — instant per-frame move (duration 무시)
  +0x698  m_uniqueID
  +0x6a4  m_targetIsP1 (char)
  +0x6a5  m_targetIsP2 (char)

3가지 분기:
  1. m_useTarget=1 → 큐에 enqueue (별도 follow 처리)
  2. m_smallStepMode=0 → MoveActionMgr 에 duration 보간 액션 추가
     (call FUN_14025c700)
  3. m_smallStepMode=1 → 즉시 group 전 멤버 위치에 dX/dY 추가
     - obj+0x3b8 (X double) += dX
     - obj+0x3c0 (Y double) += dY
     - obj+0x4d0/0x4d4 (rendered float X/Y) 갱신
     - obj+0x368 dirty flag = 0x101
     - obj+0x351 dirty flag2 = 0x101

GameObject 위치 멤버:
  +0x3b8: m_position.x (double)
  +0x3c0: m_position.y (double)
  +0x4d0: m_renderPosX (float)
  +0x4d4: m_renderPosY (float)
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


# =============================================================================
# customSetup (0x4a87e0) — object ID 별 디폴트 멤버 값 (.gmd 파싱 전 초기 설정)
# 141줄 if/else cascade 수동 추출 결과
# =============================================================================

CUSTOM_SETUP_DEFAULTS = {
    # ID: { member_offset: (type, value), ... }
    # 'trigger_kind' = param_1[0x81] (트리거 종류 분류 enum)

    900:   {0x81: ("u4", 0x3f1), 0x5df: ("u1", 0), 0xb8: ("f", 1.0)},   # 0x384
    29:    {0x81: ("u4", 1000),  0x5df: ("u1", 0), 0xb8: ("f", 1.0)},   # 0x1d
    30:    {0x81: ("u4", 0x3e9), 0x5df: ("u1", 0), 0xb8: ("f", 1.0)},   # 0x1e (1001)
    105:   {0x81: ("u4", 0x3ec), 0x5df: ("u1", 0), 0xb8: ("f", 1.0)},   # 0x69 (1004)
    142:   {0x74: ("u4", 0x16),  0x84: ("u4", 9),  0x8a: ("zero_if_set", 0), 0x57a: ("u1", 1)},  # 0x8e
    200:   {0xba: ("u1", 1)},                                            # 0xc8
    201:   {0xba: ("u1", 1)},                                            # 0xc9
    202:   {0xba: ("u1", 1)},                                            # 0xca
    203:   {0xba: ("u1", 1)},                                            # 0xcb
    744:   {0x81: ("u4", 0x3eb)},                                       # 0x2e8 (1003)
    915:   {0x81: ("u4", 0x3ea), 0x5df: ("u1", 1)},                      # 0x393 (1002)
    1329:  {0x74: ("u4", 0x1f),  0x84: ("u4", 9),                        # 0x531
            0x285: ("u1", 1), 0x8a: ("zero_if_set", 0), 0x57a: ("u1", 1)},
    1334:  {0xba: ("u1", 1)},                                            # 0x536
    1912:  {0x5bc: ("f", 50.0)},                                         # 0x778 (RANDOM)
    2066:  {0xdb: ("f", 1.0)},                                           # 0x812 (GRAVITY)
    3607:  {0xd2: ("u1", 1)},                                            # 0xe17
    3640:  {0xba: ("u2", 1), 0xd2: ("u1", 1)},                           # 0xe38
    3643:  {0xba: ("u2", 1)},                                            # 0xe3b
}

# 두 번째 분기 (LAB_1404a8a1d) — 이 ID 들은 m_isActiveTrigger=1 (offset 0x73b):
ACTIVE_TRIGGER_IDS = {0x778, 0x63b, 0x8e, 0x4f4, 0x531, 0x64b, 0x713,
                      0x717, 0x80f, 0x814, 0xe19, 0xe24, 0xe14, 0xe17, 0xe38, 0xe3b,
                      # 변환: iVar2-0xe14 == 0 이면 0xe14, ==3 이면 0xe17 (bVar3 마지막 식)
                      }
# 그 외: m_isActiveTrigger = (param_1[0x74] == 0x1e ? 1 : 0)

# trigger_kind 코드 (param_1[0x81]):
TRIGGER_KIND_CODES = {
    1000: "trigger_kind_default (object 29 = ?)",
    1001: "trigger_kind_alt    (object 30 = ?)",
    1002: "trigger_kind_color_legacy (object 915, BG color trigger 변종)",
    1003: "trigger_kind_pulse  (object 744 = PULSE trigger 구버전)",
    1004: "trigger_kind_for_105 (object 105 = GRADIENT/STATIC)",
    1009: "trigger_kind_for_900 (object 900 = ?)",
}


# =============================================================================
# customObjectSetup → .gmd 키 → 멤버 매핑 dict 생성 (parse_custom_object_setup.py 결과 import)
# =============================================================================

import json as _json
from pathlib import Path as _Path

def _load_setup_extraction() -> dict:
    """custom_object_setup_extracted.json 을 읽어서 다음 형식으로 변환:

    {
      object_id: [   # case ID, -1 = 모든 EffectGameObject 공통 (top-level)
        (gmd_key_code, parser, member_offset, store_type),
        ...
      ]
    }
    """
    src = _Path(__file__).parent / "custom_object_setup_extracted.json"
    if not src.exists():
        return {}
    raw = _json.loads(src.read_text(encoding="utf-8"))
    out = {}
    for cid_str, entries in raw["extracted"].items():
        cid = int(cid_str)
        rows = []
        for e in entries:
            koff = int(e["key_offset"], 16)
            gmd_key = koff // 8
            mem = int(e["member_offset"], 16) if e["member_offset"] else None
            rows.append((gmd_key, e["parser"], mem, e["store_type"]))
        out[cid] = rows
    return out

GMD_KEY_TO_MEMBER = _load_setup_extraction()
"""GMD 키 → 트리거 멤버 매핑 — 통합 dict.

사용 예 (시뮬레이터에서):
    common = decomp_extracted.GMD_KEY_TO_MEMBER.get(-1, [])  # 모든 트리거 공통
    obj_specific = decomp_extracted.GMD_KEY_TO_MEMBER.get(1815, [])  # COLLISION 트리거
    for gmd_key, parser, member_off, store_type in common + obj_specific:
        if str(gmd_key) in obj_data_dict:
            value = (atoi if parser == 'atoi' else atof)(obj_data_dict[str(gmd_key)])
            # → 시뮬레이터의 trigger 객체 멤버에 저장
"""

# 자주 쓰이는 .gmd 키 코드 (gmdkit 표준):
GMD_KEYS_COMMON = {
    1:   "object_id",
    2:   "x",
    3:   "y",
    6:   "rotation",
    7:   "color_r",      # also ID 105 trigger 입력
    8:   "color_g",
    9:   "color_b",
    10:  "duration",       # ★ 트리거 지속 시간
    11:  "trigger_event",
    15:  "color_blend",
    17:  "blending",
    21:  "color_id",      # = 36 ?
    23:  "primary_color_id",
    25:  "z_order",
    28:  "move_x",        # ★ Move 트리거 X 변화량
    29:  "move_y",        # ★ Move 트리거 Y 변화량
    30:  "easing",        # ★ 이징 type
    35:  "opacity",
    36:  "secondary_color_id",  # 또는 group ID
    51:  "target_group_id",  # ★ 트리거가 영향 주는 그룹
    56:  "active_trigger",
    58:  "lock_player_x",  # ★ Move 트리거 옵션
    59:  "lock_player_y",
    62:  "spawn_triggered",
    66:  "extra_flag_66",
    71:  "use_target",
    80:  "block_a",       # ★ COLLISION 트리거
    85:  "easing_rate",   # ★ 이징 강도
    93:  "trigger_on_exit",  # ★ COLLISION 트리거
    95:  "block_b",       # ★ COLLISION 트리거
    115: "spawn_delay",
    138: "P1",            # 플레이어 1 대상
    142: "extra_flag_142",
    144: "fade_in_time",
    155: "group_parents",
    200: "fade_out_time",
    280: "extra_flag_280",
    284: "extra_flag_284",
    381: "extra_flag_381",
    383: "extra_id_383",
    394: "extra_flag_394",
    395: "extra_id_395",
    397: "extra_flag_397",
    463: "extra_flag_463",
}


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
