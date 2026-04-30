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
    # ⭐ 정정 (toggleXMode 검증 완료):
    0x9b9: "m_isShip (char) — toggleFlyMode 가 set",
    0x9ba: "m_isUFO (char) — toggleBirdMode 가 set ⚠ 이전: Ball 로 잘못",
    0x9bb: "m_isBall (char) — toggleRollMode 가 set ⚠ 이전: UFO 로 잘못",
    0x9bc: "m_isWave (char) — toggleDartMode 가 set",
    0x9bd: "m_isRobot (char) — toggleRobotMode 가 set ⚠ 이전: Robot2",
    0x9be: "m_isSpider (char) — toggleSpiderMode 가 set",
    0x9c4: "m_isSwingCopter (char) — toggleSwingMode 가 set",

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

# triggerObject base (0x4a5f30) 의 case → 효과 함수 매핑 (자동 추출 + gmdkit cross-ref)
# parse_trigger_object.py 결과 (105 case → 22 unique 분기, 나머지는 goto LAB 공유)
# ⚠️ 이전 (1006=Color, 1007=Pulse) 잘못. gmdkit 기준 수정:
TRIGGER_DISPATCH_BASE = {
    # (id_hex, id_dec) : (gmdkit_name, primary_FUN_addr, lines, 설명)
    0x385: ("MOVE",                0x21ea40, 208, "Move trigger — group dx/dy 적용"),
    0x3ee: ("PULSE",               0x260c40, 212, "Pulse trigger — colorMgr 에 pulse action"),
    0x3ef: ("ALPHA",               0x260a70,  48, "Alpha trigger — group opacity 변경"),
    0x419: ("TOGGLE",              0x223bc0,  72, "Toggle group on/off"),
    0x716: ("FOLLOW_PLAYER_Y",     0x25cbf0,  40, "그룹이 player Y 위치 따라가게 등록"),
    0x717: ("COLLISION",           0x25c430,  44, "두 collision_block 충돌 트리거 등록"),
    0x779: ("ZOOM_CAMERA",         0x235cf0,  56, "카메라 zoom 변경"),
    0x78c: ("PLAYER_CONTROL",      0x2174e0, 156, "플레이어 입력 제한 (점프/이동 잠금 등)"),
    0x78e: ("SONG",                0x2415c0, 109, "노래 재생/일시정지/볼륨"),
    0xb57: ("GRADIENT",            0x21f750, 207, "그라데이션 색상 영역 설정"),
    0xb6c: ("UNKNOWN_2924",        0x221030, 478, "ID 2924 트리거 (gmdkit 미정의, 큰 함수)"),
    0xbb7: ("UNKNOWN_2999",        0x2360b0,  20, "ID 2999 (gmdkit: EDIT_MG?)"),
    0xbc7: ("UNKNOWN_3015",        0x2271c0, 120, "ID 3015"),
    0xbce: ("TELEPORT",            0x20fdb0, 345, "플레이어 순간이동"),
    0xbcf: ("UNKNOWN_3023",        0x20e760,  96, "ID 3023"),
    0xbd9: ("ANIMATE_KEYFRAME",    0x217bc0,  73, "키프레임 애니메이션"),
    0xe13: ("EDIT_SFX",            0x241e50, 123, "SFX 편집"),
    0xe15: ("EDIT_SONG",           0x241940,  30, "노래 편집"),
    0xe18: ("SPAWN_PARTICLE",      0x23feb0, 132, "파티클 spawn"),
    0xe4d: ("RETARGET_ADV_FOLLOW", 0x22eac0, 146, "ADV_FOLLOW target 변경"),
    # 모드/패드/포털 (case < 0x100)
    0x3b:  ("MODE_PORTAL_INNER",   0x20e400, 139, "내부 모드 처리 (cube/ship/etc)"),
    0xcb:  ("SPEED_PORTAL_VFAST",  0x1993b0, 985, "VERY_FAST speed (203) — 거대 함수"),
    # inline (별도 함수 호출 X — 직접 멤버 set 또는 작은 식)
    "inline_collision_check": (0x717, "COLLISION 트리거 본체는 0x25c430 가 등록만, 실제 충돌 감지는 update 가"),
    "inline_gravity":         (0x812, "GRAVITY (2066) — *(int*)(layer.player+0xb84) = trigger.gravity_dir"),
    # 나머지 ~83 case: goto LAB 으로 다른 case 와 동일 함수 호출 (case grouping)
}

# 알려진 트리거 효과 함수 주소 (검증된 매핑)
TRIGGER_EFFECT_FUNCS = {
    # 시뮬에 중요 (gameplay 영향)
    0x21ea40: ("MOVE",          "group 위치 dx/dy 적용 (smallStep + duration 보간)"),
    0x223bc0: ("TOGGLE",        "group enable/disable bit set"),
    0x21ab80: ("SPAWN",         "spawnGroup — group 의 트리거들 발동"),
    0x223fd0: ("ADD_TO_GROUP",  "오브젝트를 group 에 추가"),
    0x25c430: ("COLLISION",     "Collision trigger 등록 (실제 감지는 update)"),
    0x25cbf0: ("FOLLOW_Y",      "follow_player_y action 등록"),
    0x2174e0: ("PLAYER_CONTROL","입력 제한 set"),
    0x20fdb0: ("TELEPORT",      "player 위치 설정"),
    # 시각 (시뮬 무관 — 색상/파티클/사운드)
    0x260c40: ("PULSE",         "colorMgr pulse action"),
    0x260a70: ("ALPHA",         "group opacity"),
    0x21f750: ("GRADIENT",      "gradient layer"),
    0x235cf0: ("ZOOM_CAMERA",   "카메라 줌"),
    0x2415c0: ("SONG",          "노래 제어"),
    0x241e50: ("EDIT_SFX",      "SFX"),
    0x241940: ("EDIT_SONG",     "노래 편집"),
    0x23feb0: ("SPAWN_PARTICLE","파티클"),
    0x22eac0: ("ADV_FOLLOW",    "고급 follow"),
    0x217bc0: ("ANIMATE",       "키프레임"),
    # 모드 portal
    0x20e400: ("MODE_INNER",    "모드 처리"),
    0x1993b0: ("SPEED_VFAST",   "속도 변경 985줄 거대"),
    0x20e760: ("?_3023",        "분류 미정"),
    0x2271c0: ("?_3015",        "분류 미정"),
    0x221030: ("?_2924",        "478줄 큰 함수"),
    0x2360b0: ("?_EDIT_MG",     "20줄 작음"),
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
# 6차: 모드 togglers + Collision block update (어떤 게 player vs collision 인지)
# =============================================================================

# 7가지 모드 토글러 모두 식별 완료 (Geode binding 검증)
MODE_TOGGLE_FUNCS = {
    0x39a4f0: ("toggleFlyMode",    93,  "Ship 모드 (비행)"),
    0x39a820: ("toggleBirdMode",   88,  "UFO 모드 (Bird = 새 = UFO)"),
    0x39ab20: ("toggleSwingMode",  71,  "Swing 모드 (스윙코프터, 2.2 신규)"),
    0x39af90: ("toggleDartMode",   99,  "Wave 모드 (Dart = 화살)"),
    0x39b570: ("toggleRollMode",   55,  "Ball 모드 (구르기)"),
    0x39b6f0: ("toggleRobotMode",  139, "Robot 모드 (charge jump)"),
    0x39ba70: ("toggleSpiderMode", 141, "Spider 모드 (instant teleport)"),
}

# Mode 진입/탈출 시 호출되는 추가 함수
MODE_LIFECYCLE_FUNCS = {
    0x2178c0: ("canBeActivatedByPlayer", 49,
               "player vs trigger — 발동 가능한지 체크 (P1/P2 분기, mode 호환성)"),
    0x212ef0: ("playerWillSwitchMode",   89, "모드 전환 직전 hook"),
    0x212c20: ("switchToRobotMode",      34, "PlayLayer-side Robot 전환"),
    0x212d10: ("switchToSpiderMode",     34, "PlayLayer-side Spider 전환"),
    0x213180: ("updateDualGround",       77, "Dual 모드 P1/P2 분리"),
}

# 슬로프/회전 처리 함수
SLOPE_AND_ROTATION_FUNCS = {
    0x390bc0: ("updateSlopeRotation",  19,  "슬로프 위 player 회전"),
    0x390c40: ("updateShipRotation",   59,  "ship 자세 회전"),
}

# Player 사망 + Dual Ground + Platformer time
GAMEPLAY_MISC_FUNCS = {
    0x397d40: ("playerDestroyed",       34, "player 사망 처리"),
    0x213180: ("updateDualGround",      77, "dual 모드 ground 업데이트 (P1/P2 분리)"),
    0x2185a0: ("updatePlayerCollisionBlocks", 71,
               "매 프레임 player 위치를 virtual collision_block 으로 미러 (block_a/b 충돌 감지의 토대)"),
    0x2396c0: ("updatePlatformerTime",  90, "플랫포머 모드 (2.2 신규) 타이머"),
    0x226d60: ("removeFromCollisionBlocks", 78,
               "collision_block 의 lookup table 4개에서 unregister (위치 변경 전 호출)"),
}

# Collision 트리거 발동 메커니즘 (디컴파일 분석)
# =============================================================================
# 7차: Collision 트리거 fire 메커니즘 완전 추출
# =============================================================================

COLLISION_FIRE_FUNCS = {
    0x2187d0: ("updateCollisionBlocks",  304,
               "매 프레임 모든 collision_block 페어 체크 + enter/exit 트리거 발동 enqueue"),
    0x218ec0: ("checkCollisionBlocks",    54,
               "한 collision_block 의 모든 트리거 매칭 체크"),
    0x218370: ("createPlayerCollisionBlock", 80,
               "player 용 virtual collision_block 만들기 (P1/P2 각각)"),
    0x214960: ("collisionCheckObjects",  729,
               "player vs object 충돌 체크 (★ 큰 함수, slope/snap/squish 모두)"),
    0x25c2e0: ("postCollisionCheck",      49,
               "collision queue (param_1+0x2a8) 처리 → FUN_14025c540 호출"),
    0x25c540: ("fireCollisionTrigger",    67,
               "★ 진짜 트리거 fire 함수 — 등록 테이블 (param_1+0x248) 매칭 → 효과 적용"),
    0x393ff0: ("PlayerObject_updateCollide", 110,
               "player 의 collision direction 별 정보 저장 (PlayerCollisionDirection enum)"),
}

COLLISION_TRIGGER_FIRE_LAYOUT = """
Collision 트리거 (1815) 등록 → 발동 전체 흐름:

1. 트리거 등록 (registerCollisionTrigger = 0x25c430):
   layer + 0x248 ~ + 0x250 = vector<CollisionTrigger> (each 56 bytes / 0x38):
     +0x00 byte   on_exit_flag
     +0x04 int    block_a_id
     +0x08 int    block_b_id
     +0x0c int    target_group_id
     +0x10 uint   trigger_type / signature
     +0x14 byte   activate_group (1 = on, 0 = off)
     +0x18 int    unique_id
     +0x1c int    control_id
     +0x20      vector<int> remap_keys

2. 매 프레임 collision check (updateCollisionBlocks = 0x2187d0):
   - layer + 0xdc0 = CCArray<EffectGameObject*> (모든 collision_block 1816)
   - updatePlayerCollisionBlocks (player → virtual collision_block 미러)
   - 각 collision_block 위치/box 갱신 + 다른 block 과 overlap 체크
   - overlap 감지 시 → enqueue to layer + 0x2a8 (collision event queue)
   - exit 감지 시 → enqueue with on_exit flag

3. queue 처리 (postCollisionCheck = 0x25c2e0):
   - layer + 0x2a8 ~ 0x2b0 의 each entry _Memory[2] = encoded(blockA, blockB):
       blockA = (val - 10000000) / 10000
       blockB = val - 10000000 - blockA * 10000
   - fireCollisionTrigger(layer, 0 (enter), blockA, blockB) 호출

4. 실제 fire (fireCollisionTrigger = 0x25c540):
   - layer + 0x248 의 등록 테이블 iterate (56-byte stride)
   - 매칭 조건:
       entry.on_exit_flag == 0 AND
       entry.block_a == param_3 AND
       entry.block_b == param_4 AND
       entry.trigger_type != param_2
   - 매칭 시 효과:
       - layer.callback (+0x140) 있으면: callback(target_group, activate, remap_keys, unique_id, control_id)
       - 없으면: toggleGroup direct (activate_group ? on : off)

시뮬 통합:
  - 우리 sim 의 collision_player_triggers 는 step 1 의 등록 테이블에 해당
  - step_collision_triggers 는 step 4 의 fire 에 해당
  - block-vs-block 은 step 2-3 의 enqueue + dequeue 가 빠져있음 → 다음 단계
"""


# =============================================================================
# 0x4bc180 (1302줄) — base override 후보 확인 결과
# =============================================================================

# 0x4bc180 디컴파일 결과 (안 봤던 1302줄 함수):
# parse_trigger_object 결과 = base 와 거의 동일 case 구조 (case 0xb55, 0xbbe..0xbcd 등)
# → ColorTriggerObject 또는 PulseTriggerObject 등 파생 클래스의 triggerObject override.
# 자세한 분석은 다음 단계.


# =============================================================================
# 8차: Spider 물리 + Robot 헬퍼 함수 (모드별 물리)
# =============================================================================

SPIDER_PHYSICS_FUNCS = {
    0x394340: ("spiderTestJump",         22,
               "Spider 점프 trigger — 점프 가능한 위치인지 체크"),
    0x3943f0: ("spiderTestJumpInternal", 494,
               "★ Spider 진짜 점프 처리 — instant teleport (위/아래 즉시 이동)"),
    0x395170: ("playSpiderDashEffect",   201, "Spider dash 시각 effect (화살표 trail)"),
    0x3a14d0: ("playDynamicSpiderRun",   106, "Spider 달리기 애니메이션"),
}

ROBOT_PHYSICS_FUNCS = {
    # Robot 은 separate jump 함수 없음 — updateJump (0x38b900) 안에서 m_isRobot 분기로 처리
    0x39b6f0: ("toggleRobotMode",        139, "Robot 모드 enter/exit"),
    0x39be30: ("playerJump_init_39be30", 16,  "점프 변수 초기화 (param=0x1b mode 코드)"),
    0x398860: ("robotJumpRelated_398860",76,  "Robot 토글 후 호출 — jump charge 관련"),
    0x3961c0: ("robotJumpRelated_3961c0",137, "Robot 토글 후 호출 — animation speed 등"),
    0x3a10e0: ("updateRobotAnimationSpeed", 179, "Robot animation speed 업데이트"),
}

PHYSICS_MODE_TRANSITIONS = {
    0x212c20: ("switchToRobotMode",  34, "PlayLayer 측 Robot mode 전환 (portal 호출)"),
    0x212d10: ("switchToSpiderMode", 34, "PlayLayer 측 Spider mode 전환"),
}

PLAYER_PHYSICS_MAIN_FUNCS = {
    0x388d80: ("PlayerObject::update",        570,
               "★ player virtual update (per-frame orchestration)"),
    0x38a0c0: ("PlayerObject::updateMove",    673,
               "★★★ 모든 모드 물리 분기 통합 — Ship/UFO/Ball/Wave/Robot/Spider/Swing"),
    0x38b900: ("PlayerObject::updateJump",    817,
               "Jump 상태 업데이트 (모드 분기 없음 — updateMove 가 호출 전 mode-set)"),
    0x39dc50: ("PlayerObject::updatePlayerFrame", 142,
               "Frame (sprite) 업데이트"),
    0x4bc180: ("TransformTriggerGameObject::triggerObject", 1302,
               "Transform 트리거 — Move/Rotate/Scale 의 통합 처리 (base override)"),
}

# =============================================================================
# 모드별 X-velocity / acceleration multipliers (updateMove 분석)
# =============================================================================

# 모드별 X 가속 multipliers (updateMove 0x38a0c0 line 383-403)
MODE_X_VELOCITY_MULTIPLIERS = {
    # Ship (0x9b9): 기본 dVar30 *= 0.7 (DAT_140622dd0)
    "SHIP_BASE":           0.7,    # DAT_140622dd0 (line 384)
    "SHIP_JUMP_BOOST":    -0.25,   # DAT_140623710 (line 402)
    # UFO (0x9bb)
    "UFO_JUMP_BOOST":     -0.28,   # DAT_140623718 (line 398)
    # Spider (0x9be)
    "SPIDER_JUMP_BOOST":  -0.20,   # DAT_140623708 (line 394)
    # 공통
    "JUMP_HOLD_BOOST":     1.35,   # DAT_140622e38 (line 390) — jump 누르고 있을 때
    "DASH_MULTIPLIER":     4.0,    # DAT_140622e90 (line 405) — m_isDashing
    "VELOCITY_DAMP":       0.8,    # DAT_140622de8 (line 409) — speed 감속 계수
    "JUMP_HOLD_RATIO":     0.4,    # DAT_140622d78 (line 382) — base hold-up
    "MAX_SPEED_RATIO":     0.95,   # DAT_140622e00 (line 118) — max speed 한계
}

# 가속/감속 thresholds
ACCELERATION_CONSTS = {
    "MIN_VELOCITY":        0.01,   # DAT_140622c38 — 이하면 0 으로 set
    "TIME_50MS":           0.05,   # DAT_140622cb0 — 0.05s
    "TIME_100MS":          0.1,    # DAT_140622cf0 — 0.1s
    "TIME_200MS":          0.2,    # DAT_140622d18 — 0.2s
    "TIME_500MS":          0.5,    # DAT_140622d98
    "DIST_40":             40.0,   # DAT_140622f30
    "DIST_80":             80.0,   # DAT_140622f70
    "VISUAL_SMOOTH_002":   0.02,   # DAT_1406229c0 — visual 보간 (mode 별 다름)
    "VISUAL_SMOOTH_005":   0.05,   # DAT_1406229ec
    "VISUAL_SMOOTH_010":   0.10,   # DAT_140622a10
    "VISUAL_SMOOTH_015":   0.15,   # DAT_140622a50
    "VISUAL_SMOOTH_020":   0.20,   # DAT_140622a74
}

# Float ops 마스크 (XOR/AND tricks)
FLOAT_BITWISE_MASKS = {
    0x6243c0: ("ABS_MASK = 0x7fffffff",        "Float abs (XOR로 부호 비트 제거)"),
    0x6243d0: ("ABS_MASK_ULL = 0xffffffff_ull", "Long ABS"),
    0x6243e0: ("NEGATE_MASK = 0",              "0 (negate 식 첨부)"),
    0x6243f0: ("SIGN_MASK = 0x80000000",       "Float negate (XOR)"),
}


FOLLOW_ZOOM_NOTES = """
26차 — FOLLOW_PLAYER_Y + ZOOM_CAMERA 분석:

FOLLOW_PLAYER_Y (case 0x716=1814) → FUN_14025cbf0 (40줄):
  - Action 등록 (param_1 + 0x610 vector)
  - type = 3 (follow_player_y), duration, speed, group, etc.
  - clampf duration to [0, DAT_140622fe8]
  - 이후 매 프레임 다른 함수가 처리:
      group obj 의 Y += player.deltaY * speed * duration_factor

ZOOM_CAMERA (case 0x779=1913) → FUN_140235cf0 (56줄):
  - 카메라 zoom 변경 (param_1 + 0x1ac)
  - clampf zoom to [DAT_140622ad0, DAT_140622f28]
  - 모드별 dual ground 처리 호출 (현재 plyer mode 에 따라 6/0x10/0x21/5)
  - ★ 카메라 zoom 만 변경 — player 물리 무관

시뮬 영향:
- FOLLOW_PLAYER_Y: 시뮬에 통합 가능 (group dy = player_dy * speed)
- ZOOM_CAMERA: 무관 (skip)

남은 트리거 분석 우선순위:
1. TIMEWARP (1935) — 시간 변형, sim_dt 영향 (게임플레이 영향 大)
2. ANIMATE_KEYFRAME (3033) — 애니메이션 (시각 + 일부 collision?)
3. EDIT_MG (2999) — 편집 마이크로
4. SPAWN_PARTICLE (3608) — 시각만
"""


PLAYER_CONTROL_FORMULA = """
25차 — PLAYER_CONTROL 트리거 (case 0x78c=1932) 분석 (0x2174e0, 156줄):

EffectGameObject (param_2) 의 flag 들 (검증된 멤버 offsets):
- 0x740: stop_jump        — 점프 입력 차단
- 0x741: stop_left_right  — 좌우 입력 차단
- 0x742: stop_rotation    — 회전 정지
- 0x743: stop_slide       — slide 정지
- 0x6a4: target_p1
- 0x6a5: target_p2

각 flag 효과 (player 멤버 변경):
stop_jump (0x740):
  player[0x985] = 0  (m_jumpPressed clear)
  player[0x99c] = 1  (?? jump-blocked flag)
  if player[0x9e4]: savePositionState (FUN_140396650)

stop_left_right (0x741):
  player[0xb01] = 0  (m_leftPressed clear)
  player[0xb00] = 0  (m_rightPressed clear)
  player[0xb58] = 0  (방향 입력 history clear)

stop_rotation (0x742):
  player[0x728] = 0  (rotation timer)
  player[0x668] = 0
  player[0x720] = 0

stop_slide (0x743):
  player[0x952] = 0
  player[0xb94] = 0

시뮬 통합:
- 우리 sim 의 player.jump 입력 → stop_jump 발동 시 그 프레임부터 입력 무시
- 우리 sim 은 left/right 미사용 (auto-walk) → 그 부분 skip 가능
- 가장 중요: stop_jump 가 player AI 의 점프 시퀀스에 영향
"""


PULSE_ALPHA_CONFIRMED = """
24차 — Pulse/Alpha 트리거 확인 (시각만, game state 무관):

case 0x3ee (1006) PULSE → FUN_140260c40 (212줄)
  - 색상 채널에 pulse action 등록
  - pulseTime/fadeIn/fadeOut/color blend 옵션
  - colorMgr 의 hash table 에 추가/제거
  - 시뮬: 영향 없음 (visual only)

case 0x3ef (1007) ALPHA → FUN_140260a70 (48줄)
  - Group 의 opacity 변경
  - 단순: clamp channel, register alpha action
  - 시뮬: 영향 없음 (visual only)

확정: Pulse/Alpha 둘 다 시뮬에 통합 불필요.

남은 분석할 시각 트리거: GRADIENT, ZOOM_CAMERA, EDIT_SFX/SONG, SPAWN_PARTICLE
- ZOOM_CAMERA 는 player 시야 변경 → 시뮬에는 무관 (player 좌표는 그대로)
- 나머지는 모두 visual/audio
"""


BUMP_BOOST_NOTES = """
23차 — bumpPlayer + boostPlayer 분석:

bumpPlayer (0x39f6a0, 60줄):
  - param_3 != 0x2c: just calls propellPlayer (= bump = pad jump)
  - param_3 == 0x2c (44): SPECIAL — Spider gravity ring
    - If gravity orientation differs: gravity flip
    - Spider test jump (instant teleport)
    - Broadcast event 0x12

boostPlayer (0x39fee0, 76줄):
  - 큐브 전용 (모든 mode flag 0):
    - player.m_yVelocity = round(force * 1000) / 1000  ★ snap to 0.001
    - Jump rotation 계산:
        rotation_speed = (isUpsideDown ? +180 : -180) / fVar4
        fVar4 = (speedMod == 1.0) ? DAT_140622bcc : DAT_140622b68
    - player[0xe4] = rotation_speed
    - player[0xe5] = 1 (rotating flag)
  - 다른 모드 (Spider 외): play "fall_loop" sound
  - 모든 모드: m_position 저장

핵심 발견:
- boostPlayer 는 큐브 전용 회전 효과 처리
- m_yVelocity 직접 설정 (force 값 파라미터 그대로)
- 회전 속도는 180 / TIME_SOMETHING (한 번 점프 시간에 한 바퀴)
"""


RING_JUMP_MULTIPLIERS = {
    # Ring/orb type 별 jump force multiplier (decomp 검증, ringJump 0x398c00)
    # 형식: (DAT_offset, value, ring_type, mode/조건, 의미)
    # type 0x0c (12) = mode-aware multi-ring:
    (0x622ac4, 0.37): "ring 0x0c Ship multiplier",
    (0x622ad4, 0.42): "ring 0x0c UFO multiplier",
    (0x622b94, 0.77): "ring 0x0c Ball multiplier",
    (0x622b80, 0.72): "ring 0x0c default (cube?) multiplier",

    # type 0x1d (29) = Ship-only ring:
    (0x622b74, 0.70): "ring 0x1d Ship multiplier",

    # type 0x23 (35) = COMPLEX ring (5 sub-cases):
    (0x622cd4, 1.38): "ring 0x23 default + Spider multiplier",
    (0x622cc4, 1.34): "ring 0x23 Ball multiplier",
    (0x622c9c, 1.28): "ring 0x23 Robot multiplier",
    (0x622c2c, 1.02): "ring 0x23 UFO (speedMod==1) multiplier",
    (0x622cd0, 1.36): "ring 0x23 UFO (speedMod!=1) multiplier",
    (0x622cd8, 1.40): "ring 0x23 Ship (speedMod!=1) multiplier",

    # type 0x20 (32) = X-VELOCITY ring:
    (0x623864, -14.0): "ring 0x20 flying-mode initial Y velocity",
    (0x623880, -15.0): "ring 0x20 default initial Y velocity",
    (0x622c54,  1.10): "ring 0x20 Spider/Robot Y multiplier",

    # 기타:
    (0x622bd8, 0.90): "Robot default ring multiplier",
    (0x6229f4, 0.06): "Spider visual scale",
}

# Ring jump 정밀 식 (의미 정리 후 시뮬에서 사용 가능)
RING_JUMP_FORMULA = """
ringJump (0x398c00) — orb/ring 충돌 시 호출:

step 1. ring type 식별 (object.vfunc 0x660 = getObjectType)
step 2. type 별 multiplier 결정:
   type 0x0c: Ship 0.37, UFO 0.42, Ball 0.77, default 0.72
   type 0x1d: Ship 0.70
   type 0x23: Spider 1.38 (default), Ball 1.34, Robot 1.28,
              UFO speedMod==1: 1.02, speedMod!=1: 1.36, Ship !=1: 1.40
   type 0x20: 초기 Y -14 (flying) 또는 -15 (default), Spider/Robot ×1.1
   default Robot: 0.90

step 3. 공통 처리:
   sign = isUpsideDown ? -1 : +1
   speed_factor = (speedMod != 1.0) ? 0.8 : 1.0
   setPositionY(player, sign * multiplier * speed_factor)

step 4. Air mode (Ball, Spider, Swing) 보정:
   player.m_yVelocity *= 0.6 (DAT_140622db0)

이로써 모든 ring/orb 의 정확한 점프 높이 계산 가능.
"""


RING_JUMP_STRUCTURE = """
21차 — ringJump (0x398c00, 628줄) 구조 분석:

ringJump 는 ALL ring/orb types 의 jump 처리. 객체 type (vfunc 0x660 = getObjectType) 별 분기:

- type 0x24 (36) = ?  → 특수 처리 (FUN_140398430)
- type 0x2e (46) = TELEPORT ORB → calls teleportPlayer (FUN_14020fdb0)
- type 0x2b (43) = GRAVITY RING (Yellow gravity) → slope 또는 gravity flip
- type 0x25 (37) = ?  → broadcasts event 0x29
- type 0x26 (38) = same as 0x25
- type 0x20 (32) = X-VELOCITY RING (Green pad?)
                  → setPositionY(player, sign * DAT_140623880 * mode_factor)
                  → Spider/Robot 면 *DAT_140622c54 (1.1)
- type 0x1d (29) = Ship-only ring → fVar24 *= DAT_140622b74 (0.7)
- type 0x0c (12) = mode-aware multi-ring (jump force):
                  Ship  : *DAT_140622ac4
                  UFO   : *DAT_140622ad4
                  Ball  : *DAT_140622b94
                  default: *DAT_140622b80
- type 0x23 (35) = COMPLEX multi-ring (5 sub-cases):
                  default Spider: *DAT_140622cd4
                  Robot : *DAT_140622c9c
                  Ball  : *DAT_140622cc4
                  UFO   : *DAT_140622c2c (speedMod ==1) or *DAT_140622cd0
                  Ship  : *DAT_140622cd8 (speedMod !=1)
- type 0x0d (13) = DOWN ring → fVar24 *= DAT_140622ba4 (0.8)
- 그 외: *DAT_140622bd8 (Robot 한정)

공통 처리 (ALL types):
  sign = isUpsideDown ? -1 : +1
  speed_factor = (speedMod != 1.0) ? 0.8 : 1.0
  setPositionY(player, sign * fVar24 * speed_factor)

  if mode in (Ball, Spider, Swing):
      player.m_yVelocity *= DAT_140622db0 (0.6) or DAT_140622dd0
  if Spider:
      stop visual actions (skip)

이 함수는 진짜 GD 의 모든 ring/orb 효과 통합. ~15 새 DAT 상수 더 dump 필요.
다음: 모드별/링타입별 multiplier 값 확인 → 시뮬에 통합.
"""


PROPELL_PLAYER_FORMULA = """
20차 — propellPlayer (0x39f850, 81줄) 정밀 식 추출:

GD 패드 (yellow/pink/red/blue 등) 점프 처리:

상수:
- DAT_1406230f8 = 16.0 (jump force base multiplier)
- DAT_140622db0 = 0.6  (Ball/Spider/Swing y-velocity 감쇠)
- DAT_140622ba4 = 0.8  (speed-modified force 감쇠)
- DAT_140622c24 = 1.0  (default speed mod)

식:
  sign = isUpsideDown ? -1 : +1
  fVar6 = (player.speedMod != 1.0) ? 0.8 : 1.0
  setPositionY(player, sign * jumpForce * 16.0 * fVar6)

  # Air mode 보정:
  if (m_isBall OR m_isSpider OR m_isSwing):
      player.m_yVelocity *= 0.6

  # State reset:
  player[0xa1c] = 1     # m_propelled flag
  player[0xa0c] = 0     # m_landed clear
  player[0x9c1] = 0     # m_landed_prev clear
  player[0x7e3] = 1     # ?
  player[0x136] = 0     # m_dashing reset (2 bytes)

  # Audio/animation:
  if m_isRobot:  play "jump_start" sound
  elif m_isSpider: play "fall_loop" sound
  else: skip

핵심 발견:
- jumpForce = 16.0 × pad_strength (yellow/pink/red 별 force value)
- Air 모드 (Ball/Spider/Swing) 는 추가 0.6× 감쇠
- 속도 모디 (1x 외) 시 0.8× 추가 감쇠
- 모든 모드 공통 base 식 (모드별 분기 X)

시뮬 통합:
- 패드 충돌 → setPositionY(player, sign * pad_force * 16.0 * speed_mod_factor)
- 그 후 mode 가 air 이면 y_velocity *= 0.6
"""


UPDATE_MOVE_REVISED = """
⚠ 19차 재분석 — updateMove 의 모드 분기 의미 정정:

이전 가정: updateMove (673줄) = 모든 모드 물리 통합 함수
실제: updateMove 의 모드 flag 체크 대부분이 **시각/rotation 처리**:
  - L294-300: visual smoothing factor (sprite interpolation 속도)
  - L497-524: rotation snap (cube 만 90도 snap, 다른 모드 skip)
  - L498-503: "any flying mode" 분기 = 비행 모드 vs 큐브 visual 차이

진짜 mode 물리는:
  - updateJump (0x38b900, 817줄): 큐브 점프 + 일반 (mode flag 직접 체크 X)
  - 모드별 별도 함수 (예: spiderTestJumpInternal 0x3943f0)
  - 패드/오브 충돌 시 propellPlayer/ringJump (mode-aware velocity)

따라서:
- "Ship 0.7 가속 multiplier" 는 visual smoothing 일 가능성
- 실제 Ship 의 부드러운 가속은 별도 메커니즘 (jump force 곡선?)

다음 라운드 추적:
- updateJump 안의 mode flag (없을 수도) — 어떻게 mode 별 jump 가 다른지
- propellPlayer 안의 mode 분기 (0x39f850, 이미 dump 됨)
- 모드별 점프력은 player 멤버 (m_jumpVelocity 등) 에 저장될 가능성
"""


MODE_FLAG_OFFSETS_CORRECTED = {
    # 7개 모드 toggleXMode 함수 검증 결과 (★★ 검증 완료, 이전 매핑 정정):
    "Ship":       (0x9b9, 0x39a4f0, "toggleFlyMode"),
    "UFO":        (0x9ba, 0x39a820, "toggleBirdMode"),     # ⚠ 정정 (이전: Ball)
    "Ball":       (0x9bb, 0x39b570, "toggleRollMode"),     # ⚠ 정정 (이전: UFO)
    "Wave":       (0x9bc, 0x39af90, "toggleDartMode"),
    "Robot":      (0x9bd, 0x39b6f0, "toggleRobotMode"),    # ⚠ 정정 (이전: Robot2)
    "Spider":     (0x9be, 0x39ba70, "toggleSpiderMode"),
    "SwingCopter":(0x9c4, 0x39ab20, "toggleSwingMode"),
}

# ⚠ 이전 분석들 (UPDATE_MOVE_BRANCHES, SHIP_MODE_PHYSICS, UFO_MODE_PHYSICS) 의 mode flag
# 라벨링이 일부 잘못됨. 위 정정된 매핑 우선.
# 단, line 번호 + flag offset 조합은 그대로 유효. 단순 mode 이름 라벨만 swap 필요:
#   "Ball" 표기 → 실제 "UFO" (0x9ba)
#   "UFO"  표기 → 실제 "Ball" (0x9bb)
#   "Robot2" → "Robot"


TELEPORT_TRIGGER_NOTES = """
18차 — Teleport 트리거 (case 0xbce=3022) 분석 (FUN_14020fdb0, 345줄):

처리 흐름:
1. param_3 = player (or 기본 = layer.player1)
2. player[0x560] = 1 (teleport flag set)
3. param_2[0xe9] = target object reference (group lookup)
4. 만약 target 없으면:
   - layer 의 group 에서 random 선택 (DAT_1406c2ef8 = LCG seed: x*0x343fd+0x269ec3)
   - 단일 target 이면 fVar25=0, 여러개면 (rand & 0x7fff) / DAT_140623644
5. param_2[0x754] = target.position.y - param_2.position.y (Y offset calc)
6. player position = target position 으로 이동
7. easing/duration 적용 가능 (CCSequence + CCDelayTime + CCHide)

핵심 데이터:
- player[0x560] = m_isTeleporting flag
- DAT_1406c2ef8 = global LCG random state
- DAT_140623644 = 0x7fff_float (random normalize)

시뮬 통합:
- Teleport 발동 시 player.x/y = target.x/y instant
- 여러 target 이면 random 선택
- duration 옵션은 CCAction sequence (시뮬에선 instant 충분)
"""


UFO_MODE_PHYSICS = """
⚠ 정정 — 17차 분석은 사실 BALL 모드 분석이었음 (player[0x9bb] = m_isBall, 이전 UFO 로 잘못 표기)

17차 — Ball 모드 (player[0x9bb]=1) 물리 분기 추출 (updateMove L603-672):

Ball 모드의 X-axis smoothing (m_smoothXVelocity = player[0x13c]):
(이전 잘못 "UFO" 로 표기 — 0x9bb는 Ball)

조건: NOT (UFO disabled OR isJumping OR isDying)
이 분기는 dash 모드 (player[0x165]=1) 일 때만 활성:

  dVar3 = player.m_xVelocity (0x15f)

  # 가속도 결정:
  fVar21 = 0.2  (DAT_140622a74)              # base
  if (특정 조건):     fVar21 = 0.1  (DAT_140622a10)
  if jumpDirReverse:  fVar23 = DAT_140622aa0  # 다른 가속

  # 방향에 따른 smoothXVel 업데이트:
  if jumpHeldDown direction:
      m_smoothXVel = m_smoothXVel - dt*accel  # 감속
  elif jumpHeldUp direction:
      m_smoothXVel = m_smoothXVel + dt*accel  # 가속
  else:
      m_smoothXVel = clamp toward m_xVel

  # ★ 핵심 클램프:
  m_smoothXVel = clampf(m_smoothXVel, -5.0, +5.0)
                   # DAT_1406237c0 = -5.0, DAT_140623010 = +5.0
                   # → UFO 의 X 가속 한계 ±5 units/frame

dash 아닐 때:
  m_smoothXVel = m_xVel  # straight copy

UFO 의 특징:
- X 가속 ±5 단위 한계 (큐브 보다 훨씬 좁음)
- jump 누르면 Y 가속 (Ship 처럼) + X 가속 smoothing 별도 처리
- Dash 모드 한정 X 처리 (보통 모드는 단순 copy)

시뮬 통합:
- UFO: Ship 모드 코드 + 추가로 X smoothing (clampf -5~+5)
- jumping = both Y + X smoothing
"""


WAVE_BALL_PHYSICS_NOTES = """
Wave (m_isWave=0x9bc) 와 Ball (m_isBall=0x9ba) 는
updateMove 안에 명시적 분기 적게 (각 2-4회).
이는 두 모드가 "같은 패턴 (jumpHeld → 다른 효과)" 를 사용하기 때문:

Wave: jump = 45° 각도 위로 (각도 변경, Y 가속 + X 가속 둘 다 영향)
Ball: jump = 중력 반전 (gravity_dir 반전)

이 둘은 별도 함수 (toggleRollMode 0x39b570 또는 specific handler) 에서 처리될 수도.
다음 라운드: 두 모드의 jump 핸들러 직접 추적 필요.
"""


SHIP_MODE_PHYSICS = """
16차 — Ship 모드 물리 분기 정밀 추출 (updateMove L383-415):

Ship 모드 (player[0x9b9] = 1) 의 Y-velocity 업데이트 식:

설정 단계 (L370-382, 모든 모드 공통):
  fVar21 = (player.attached_obj == 0) ? 0
           : (player[0xd3].rotation * RAD_TO_DEG_v2) & ABS_MASK_FLOAT
  dVar29 = clampf(fVar21, 40.0, 80.0) - 40.0) / 40.0    # 0~1 비율
  dVar30 = dt * jumpForce * (dVar29 * 0.5 + 0.5) * 0.4  # 가속도 base

Ship 분기 (L383-385):
  if m_isShip:
      dVar30 *= 0.7    # Ship 은 더 부드러운 가속 (DAT_140622dd0)

Jump hold 처리 (L386-415):
  if (jumpHeldDown AND yVelocity > 0) OR (jumpHeldUp AND yVelocity < 0):
      # 점프 누른 채로 같은 방향 가속
      dVar29 = (dVar29 * 0.7) + 1.35   # boost (DAT_140622e38)
      # mode 별 추가 보정:
      if m_isShip:
          dVar29 += -0.25  # DAT_140623710
      elif m_isUFO (0x9bb):
          dVar29 += -0.28  # DAT_140623718
      elif m_isSpider (0x9be):
          dVar29 += -0.20  # DAT_140623708
      # 공통:
      if m_isDashing (0x165):
          dVar29 *= 4.0  # DAT_140622e90
      if (jumpHeld AND wasn't held last frame):
          dVar29 *= 0.8  # DAT_140622de8
      dVar29 *= dt * 0.5 * smoothFactor   # final 가속도

  elif (반대 방향 jumpHeld):
      dVar30 += dt   # base 가속만

Final apply (L425):
  player[0x15f] += smoothFactor * dVar30   # m_xVelocity update

핵심 발견:
- Ship 의 0.7 multiplier 가 "Ship 가속이 큐브보다 부드러움" 의 직접적 원인
- Jump hold boost 1.35 가 "점프 누르면 더 빨라짐"
- dash 모드 ×4 = 4배 가속

시뮬 통합:
- 큐브 (현재): 단순 jump + gravity
- Ship 시뮬에 추가하려면:
  1. m_yVelocity 처리: 매 프레임 base 가속 dVar30 적용
  2. Ship 면 dVar30 *= 0.7
  3. Jump 누르면 + 1.35 * mode_factor (Ship -0.25)
  4. dash 면 *4
"""


UPDATE_MOVE_BRANCHES = """
15차 — updateMove (673줄) 모드 분기 위치 매핑:

각 모드 flag 가 체크되는 line 번호 (decomp 파일 기준):

  Robot2 (0x9bd): L146, L295, L314, L502, L580
  Spider (0x9be): L147, L296, L315, L393, L503
  Ship   (0x9b9): L292, L383, L391, L497, L522, L537
  UFO    (0x9bb): L293, L392, L501, L541
  Ball   (0x9ba): L294, L498, L523, L538
  Wave   (0x9bc): L499, L539
  Swing  (0x9c4): L500, L540

블록별 처리 (구획):
- L66-145:  공통 dt 시간 계산 + dash 모드 + 시간 변형
- L146-280: 처음 mode 분기 set (Spider/Robot2 별 처리)
- L281-340: 가속/감속 계산 (모드별 가속 계수)
- L341-400: 공중 모드 (Ship/UFO/Wave) 별 점프-반응
- L401-500: jump 누르고 있을 때 가속 처리
- L501-540: 회전/visual 보정 (각 모드 별)
- L541-673: 최종 위치 갱신, sub-call (slopeSnap 등)

가속/감속 상수 사용 (DAT 빈도):
- DAT_1406229c0, DAT_140622a10, DAT_1406229ec — 모드별 다른 가속도

자세한 모드별 식 추출은 다음 라운드 — 각 분기 ~30 줄씩 직접 읽기.

시뮬 통합 우선순위:
1. Ship/UFO (가장 많이 쓰는 비-큐브 모드) — line 383-501 추출
2. Wave (자주 쓰임) — line 499/539 주변
3. Robot/Spider (고급 점프) — Spider 는 별도 spiderTestJump 도 있음
4. Ball/Swing — 마지막 우선순위
"""


PLAYER_UPDATE_CHAIN = """
PlayerObject 매 프레임 업데이트 chain (디컴파일 추출):

1. PlayerObject::update (0x388d80, 570줄)
   - 가장 위 — orchestration
   - mode flag 직접 체크 X (다른 곳에서 처리)
   - 호출: 0x4d0770/0x17ab00 (lazy init), 0x2a6ed0, 0x39b4f0 (toggleFlyMode??)

2. updateMove (0x38a0c0, 673줄) ★★★
   - 진짜 모드별 물리 처리
   - 모드 flag 분기 빈도 (top):
       Spider (0x9be): 7회
       Robot2 (0x9bd): 6회
       Ship   (0x9b9): 6회
       UFO    (0x9bb): 5회
       Ball   (0x9ba): 4회
       Wave   (0x9bc): 2회
       Swing  (0x9c4): 2회
       Robot  (0x9b1): 1회
   - 호출: 0x3bdb0/0x3a830 (5회씩, CCRect 헬퍼?), slopeSnap 등

3. updateJump (0x38b900, 817줄)
   - 모드 flag 직접 체크 X — 큐브 점프 + dual mode 만 처리
   - 호출: setPositionY (17회), 다른 sub-funcs

4. updatePlayerFrame (0x39dc50, 142줄)
   - sprite/animation 업데이트만

→ 시뮬에 모드 추가하려면 updateMove (673줄) 정밀 분석 필수.
   각 모드 분기당 ~80-90줄 처리 (Spider/Ship 등).
"""


COLLIDED_WITH_SLOPE_DETAILED = """
13차 — collidedWithSlopeInternal (744줄, 0x38f810) 구조 분석:

이 함수는 player 가 slope 와 충돌했을 때 모든 모드에 대해 다르게 처리.
84개 player flag 분기 — GD 충돌 로직의 핵심.

자주 체크되는 player member (top 10):
  0x9bf (m_isUpsideDown): 18회 — 가장 많이 체크
  0x9ba (m_isBall):       11회
  0x9bc (m_isWave):       10회
  0x9b9 (m_isShip):        9회
  0x9c4 (m_isSwingCopter): 8회
  0x9c3 (m_isRotated90):   7회
  0x9b1 (m_isRobot):       7회
  0x985 (m_jumpPressed):   7회

→ 슬로프 충돌은 **모든 모드에 대해 다른 처리**. m_isUpsideDown 이 핵심 분기.

핵심 DAT 상수 사용 빈도:
  DAT_140622e60 = 2.0  (5회) — slope tolerance
  DAT_140622e58 = 2.0  (4회) — slope margin
  DAT_140623738 = -2.0 (4회) — 음수 방향
  DAT_140623010 = 5.0  (3회) — cube tolerance
  DAT_14062307c = 10.0 (3회) — default tolerance
  DAT_140622cf0 = 0.1  (3회) — 시간 임계값
  DAT_1406243d0 = NaN  (3회) — abs mask?

호출 sub-function (chain):
  - setPositionY (0x388d10): 5회 — 위치 자주 갱신
  - playerDestroyed (via 17ab00): 2회 — 슬로프 hazard 사망 처리
  - updateCollide (0x393ff0): 2회 — collision direction 저장
  - slopeYPos (0x1a13b0): 1회 — 슬로프 Y 정확 계산
  - landGround (0x39bf30): 1회 — 착지 처리
  - updateSlopeRotation (0x390bc0): 1회 — 슬로프 위 회전
  - 38d350, 38f2e0, 3a43c0: 보조 헬퍼

처리 흐름 (개략):
1. 자기 호출 방지 체크 (param_4 + FUN_14038f2e0)
2. player rect, slope obj rect 추출 (vfunc 0x490)
3. m_isFlying (0x16e) 분기 — 비행 모드면 다른 경로
4. m_isUpsideDown × m_isRotated90 4가지 조합
5. 각 모드별 (Ship/Ball/Wave/UFO/Swing/Robot/Spider) 따로 처리
6. slopeYPos 로 정확한 Y 계산 → setPositionY
7. landGround 또는 다른 처리 (point of contact 에 따라)

시뮬 통합 의미:
- 큐브 (현재 sim 사용) 는 16번 분기만 (m_isUpsideDown 만 분기)
- 모든 모드 정확하게 시뮬하려면 744줄 전체 분석 필요
- 우선순위: m_isFlying (Ship/UFO/Wave/Swing) 분기 정도면 큰 진전
"""


SPIDER_JUMP_DETAILED = """
12차 — spiderTestJumpInternal (494줄) 정밀 분석:

Spider 점프 알고리즘 (ray-cast based instant teleport):

1. 가능 여부 체크 (line 74-95):
   - param_1[0x138] (locked) → return
   - param_1+0xa2a (dead) → return
   - param_1+0x7e1 (some flag) → return
   - bVar2 = (NOT rotated AND NOT player[0x184]+0x311 AND
            (m_isShip OR m_isBall OR m_isWave OR m_isSwingCopter OR m_isUFO OR m_isSpider))

2. 검색 영역 계산 (line 96-126):
   - DAT_1406235a0 = 3000.0  ★ 검색 거리 (= 100 블록 = 화면 7개분량!)
   - DAT_140623294 = 90.0
   - X 범위: player.x - 3000 ~ player.x + 3000
   - rect (위 검색용 local_198, 아래 검색용 local_178)

3. 분기 (m_isUpsideDown=0x9bf, m_isRotated90=0x9c3):
   - 4가지 조합 (정상/거꾸로 × 정상/회전)
   - 각각 다른 비교 함수: FUN_140386320/380/3e0/440 (Y 정렬)

4. 후보 리스트 (line 193-218):
   - this  = FUN_140211260(layer, rect, 1) — 위/주변 오브젝트
   - this_00 = FUN_140211620(layer) — 다른 collision_block 들
   - qsort 로 정렬 (compare 함수 4가지 중 하나)

5. Main loop (line 226+):
   - 정렬된 후보 list iterate
   - 각 후보 obj 의 type (vfunc 0x660) check:
       0x19 (25) = Slope object → slopeYPos 로 정확한 Y 계산
   - 첫 valid collision 위치 → fVar25 = target Y
   - player 위치 = (player.x, target Y) instant set (texture animation 추가)

핵심 상수:
- 검색 거리: 3000 units (100 블록)
- DAT_140622e58 = 2.0 (margin)
- DAT_140622ff0 = 4.0 (다른 margin)
- DAT_140622c24 = 1.0 (offset)
- DAT_140623730 = -2.0 (음수 margin)
- DAT_1406237a8 = -4.0
- DAT_14062307c = 10.0 (tolerance)

시뮬 구현 가능:
- 단순화: player 위 100b 안에서 첫 solid 찾기 → 거기까지 instant move
- 정밀: 4가지 모드 (정상/거꾸로/회전/회전+거꾸로) 분기 + slope 처리
- 중간 hazard 통과 시 사망 (line 280+의 type check 분기)
"""


ROBOT_SPIDER_PHYSICS_NOTES = """
Robot/Spider 물리 메커니즘 분석 결과:

Robot:
- 점프는 charge-based — 점프 누르고 있으면 더 높이 점프 (max charge 시간 = ?)
- 물리 함수는 별도 X — updateJump (0x38b900) 안에 m_isRobot (0x9bd) 분기로 처리됨
- toggleRobotMode 가 m_isRobot=1 set + jump 변수 초기화 (param_1[0x106] = 1.5)
- 추가 robot-only 함수: updateRobotAnimationSpeed (0x3a10e0, 179줄)

Spider:
- 점프는 INSTANT TELEPORT — 천장/바닥까지 즉시 점프 (대시처럼)
- spiderTestJumpInternal (0x3943f0, 494줄) = 핵심 함수
  - ray-cast 위/아래 → 첫 충돌 위치까지 player 위치 점프
  - 중간 hazard 가 있으면 사망 (대시 도중 spike 만나면 죽음)
- spiderTestJump (0x394340) = wrapper (인풋 받으면 호출)
- spiderTestJumpInternal 분석은 다음 단계 (494줄 — 작지 않음)

시뮬 통합 우선순위:
- Spider 의 ray-cast jump 가 시뮬 정확도에 직접 영향 — 다음 라운드 분석
- Robot 의 charge jump 는 updateJump 안의 분기 추출 필요
"""


# =============================================================================
# 9차: 추가 DAT 상수 + 큰 sub-function 들 (Spider/collision 정밀 처리)
# =============================================================================

# 추가 DAT 상수 (Round 9 — Spider + collisionCheckObjects 가 사용)
ADDITIONAL_DAT_CONSTANTS_R9 = {
    0x622ba4: ("float 0.8",     "?"),
    0x622ff0: ("float 4.0",     "충돌 4단위 임계값"),
    0x623068: ("float 8.0",     "충돌 8단위 임계값"),
    0x623210: ("float 60.0",    "각도 60도 (회전)"),
    0x623294: ("float 90.0",    "각도 90도 (slope)"),
    0x6235a0: ("float 3000.0",  "x 속도/거리 임계값"),
    0x623610: ("float 9999.0",  "max 값"),
    0x623730: ("float -2.0",    "음수 임계값 (vy)"),
    0x6237a8: ("float -4.0",    "음수 임계값 (vy)"),
    0x62381c: ("float -10.0",   "음수 임계값 (vy)"),
}

# 9차 dump 함수 — Spider + collisionCheckObjects sub-calls (큰 함수 위주)
ROUND9_BIG_FUNCS = {
    0x38f810: ("collidedWithSlopeInternal", 744,
               "★ 슬로프 충돌 정밀 처리 — Geode binding 확인됨"),
    0x211620: ("?_211620", 286, "GJBaseGameLayer 큰 함수 (collision 처리?)"),
    0x2168d0: ("?_2168d0", 209, "GJBaseGameLayer 함수"),
    0x3a0700: ("?_3a0700", 192, "PlayerObject 함수"),
    0x211260: ("?_211260", 173, "GJBaseGameLayer 함수"),
}

# =============================================================================
# 10차: collidedWithSlopeInternal 분석 + 추가 DAT
# =============================================================================

# 핵심 새 DAT 상수
DEG_TO_RAD = 0.017453292519943295  # DAT_1406229bc — pi/180 (도→라디안)
RAD_TO_DEG_v2 = 57.29577951308232  # DAT_140623200 — 180/pi (라디안→도) v2

ADDITIONAL_DAT_CONSTANTS_R10 = {
    0x6229bc: ("DEG_TO_RAD = pi/180 = 0.017453",  "각도→라디안 변환"),
    0x622b74: ("float 0.7",                       "슬로프 각도 비율?"),
    0x622b8c: ("float 0.75",                      "슬로프 각도 비율?"),
    0x622c54: ("float 1.1",                       "?"),
    0x622cd8: ("float 1.4",                       "?"),
    0x622d98: ("double 0.5",                      "half-block (BOX_HALF의 double 버전)"),
    0x623120: ("float 20.0",                      "거리/높이 임계값"),
    0x6231b0: ("float 40.0",                      "거리/높이 임계값"),
    0x623200: ("float 57.2958 = 180/pi",          "라디안→도"),
    0x6236f0: ("float -1.0",                      "음수 방향"),
    0x6237c0: ("float -5.0",                      "음수 임계값"),
}

# 10차 추가 dump 함수
ROUND10_FUNCS = {
    0x38d350: ("?_38d350",                  44,
               "PlayerObject — collidedWithSlopeInternal 가 호출 (작은 헬퍼)"),
    0x38f2e0: ("collidedWithSlope_helper", 177,
               "★ 슬로프 충돌 helper (slope angle 계산?)"),
    0x3a43c0: ("?_3a43c0",                  94,
               "PlayerObject — slope 처리 후 호출"),
    0x24e530: ("?_24e530",                  93,
               "GJBaseGameLayer — set lookup helper"),
}

# =============================================================================
# 11차: Item / Counter / Timer / Pickup 시스템 (2.2 신규 — 시뮬에 영향 가능)
# =============================================================================

ITEM_SYSTEM_FUNCS = {
    # GJBaseGameLayer 측 — 매 프레임 처리
    0x216290: ("processItems",                    167,
               "★ 매 프레임 모든 item trigger 처리 (param_1+0x3218 dictionary)"),
    0x2161b0: ("pickupItem",                       46,
               "Pickup item — player 가 item 획득 (counter +N)"),
    0x2341c0: ("getItemValue",                     27,
               "★ 현재 counter/item 값 read (type, id) → double"),
    0x234630: ("activateItemCompareTrigger",      190,
               "★ Item Compare 트리거 — counter 값 비교 → 트리거 발동"),
    0x234250: ("activateItemEditTrigger",         204,
               "★ Item Edit 트리거 — counter 값 변경"),
    0x234a40: ("activatePersistentItemTrigger",   168,
               "Persistent Item 트리거 (저장되는 카운터)"),
    0x234e60: ("activateTimerTrigger",            132,
               "★ Timer 트리거 — 시간 경과 후 발동"),
    0x38cba0: ("incrementJumps",                   31,
               "PlayerObject — m_jumps++ (점프 카운터)"),
}

ITEM_SYSTEM_NOTES = """
GD 2.2 Item/Counter/Timer 시스템 — 시뮬에 영향 큼:

핵심 데이터 위치:
- layer + 0x3218 = CCDictionary<key_string, ItemTrigger> (모든 item 등록)
- DAT_1406c2ee8 = global manager (lazy init, holds counter values)
- ItemTrigger 의 vfunc 0x660 = getObjectType:
    0x16 (22) = ItemEditTrigger (counter 변경)
    0x1f (31) = ItemCompareTrigger (counter 비교)

발동 흐름:
1. processItems (매 프레임) 가 dictionary 순회
2. 각 trigger 의 type 분기:
   - 0x16 (Edit): counter 에 값 적용 (incr/decr/set)
   - 0x1f (Compare): counter 와 임계값 비교 → 트리거 발동
3. Pickup 트리거 (pickupItem) 는 player 가 item 닿으면 counter += N

시뮬 통합 우선순위:
- 데모 레벨에서 Item 시스템을 거의 안 쓰지만 (대부분 Move/Toggle/Spawn)
- 신규 demon 레벨은 Item-driven 게임플레이 많음 (보스전, 패턴 변화 등)
- Item value 변화에 따른 트리거 발동 시뮬 가능 (Compare 트리거)
"""


COLLIDED_WITH_SLOPE_INTERNAL_NOTES = """
collidedWithSlopeInternal (0x38f810, 744줄) 사용 sub-call:
- slopeYPos (0x1a13b0) — 슬로프 Y 위치 계산 (이미 분석됨)
- setPositionY (0x388d10) — Y 위치 설정 (snap 1/1000)
- landGround (0x39bf30) — 착지 처리
- updateCollide (0x393ff0) — collision direction 저장
- updateSlopeRotation (0x390bc0) — 슬로프 위 player 회전
- 0x38d350, 0x38f2e0, 0x3a43c0 (10차 추가 dump)

DAT 상수 25개 사용 (반의 기본 상수 + 새 13개) — 슬로프별 mod tolerance 차이.

다음 단계: 744줄 코드 직접 읽고 분기 패턴 정리 → opengd_extracted/gdp_extracted 의
slopeYPos 와 통합 → 시뮬레이터 슬로프 정밀화.
"""


COLLISION_TRIGGER_MECHANISM = """
실제 collision 트리거 (1815) 발동 흐름:

1. Player 자체가 virtual collision_block 으로 매 프레임 미러됨:
   updatePlayerCollisionBlocks (0x2185a0):
   - param_1[0x1b4] (P1) → param_1[0x614] 의 collision_block
   - param_1[0x1b5] (P2) → param_1[0x615] 의 collision_block
   - 위치, 회전, scale 모두 복사
   - block_a == 0 이 PLAYER 인 이유: 시뮬에선 따로 sensor 안 등록해도
     player 자체가 sensor 역할

2. removeFromCollisionBlocks (0x226d60) — 위치 변경 전 4개 lookup table 에서 빼기:
   - +0x35e0/+0x35f8 (위치별 group)
   - +0x3598 (block_a 인덱스)
   - +0x35b0/+0x3658 (block_b 인덱스)
   - +0x3600/+0x3618 (collision_block 1816 전용)
   - +0x3670/+0x3688 (특수 flag set)

3. 다음 프레임에 다시 등록 → 새 위치에서 다른 block 과 overlap 할 수 있음

4. 실제 enter/exit 감지 + 트리거 fire 는:
   updatePlayerCollisionBlocks 직후 다른 함수 (아직 미발견 — vtable 0x478 호출).
   다음 라운드 추출 대상.
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
