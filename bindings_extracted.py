"""
geode-sdk/bindings 2.2081에서 추출한 데이터:
- 정확한 멤버 변수 이름 (PlayerObject, GameObject)
- 모든 enum (GameObjectType 47개, GJGameEvent 79개 등)
- 함수 시그니처 (직접 후킹 시 참조용)

주의: 변수가 어떤 값을 갖는지(상수)는 여전히 게임 안에서만 알 수 있음.
이 파일은 "구조"만 담음.
"""

# ========== GameObjectType (47개, 2.2 신규 8개 포함) ==========
GAME_OBJECT_TYPES = {
    0:  'Solid',
    2:  'Hazard',
    3:  'InverseGravityPortal',
    4:  'NormalGravityPortal',
    5:  'ShipPortal',
    6:  'CubePortal',
    7:  'Decoration',
    8:  'YellowJumpPad',
    9:  'PinkJumpPad',
    10: 'GravityPad',
    11: 'YellowJumpRing',
    12: 'PinkJumpRing',
    13: 'GravityRing',
    14: 'InverseMirrorPortal',
    15: 'NormalMirrorPortal',
    16: 'BallPortal',
    17: 'RegularSizePortal',
    18: 'MiniSizePortal',
    19: 'UfoPortal',
    20: 'Modifier',
    21: 'Breakable',                    # 2.2 신규
    22: 'SecretCoin',
    23: 'DualPortal',
    24: 'SoloPortal',
    25: 'Slope',
    26: 'WavePortal',
    27: 'RobotPortal',
    28: 'TeleportPortal',
    29: 'GreenRing',
    30: 'Collectible',
    31: 'UserCoin',
    32: 'DropRing',
    33: 'SpiderPortal',
    34: 'RedJumpPad',
    35: 'RedJumpRing',
    36: 'CustomRing',
    37: 'DashRing',
    38: 'GravityDashRing',
    39: 'CollisionObject',
    40: 'Special',
    41: 'SwingPortal',                  # 2.2 신규
    42: 'GravityTogglePortal',          # 2.2 신규
    43: 'SpiderOrb',                    # 2.2 신규
    44: 'SpiderPad',                    # 2.2 신규
    45: 'EnterEffectObject',            # 2.2 신규
    46: 'TeleportOrb',                  # 2.2 신규
    47: 'AnimatedHazard',               # 2.2 신규
}


# ========== GJGameEvent (79개) ==========
# 게임 내 모든 이벤트. 각 이벤트가 발생하는 조건/효과는 코드에 박혀있음.
GAME_EVENTS = {
    0: 'None',
    # 착지 (점프 높이별)
    1: 'TinyLanding', 2: 'FeatherLanding', 3: 'SoftLanding',
    4: 'NormalLanding', 5: 'HardLanding',
    # 충돌/충격
    6: 'HitHead',
    7: 'OrbTouched', 8: 'OrbActivated', 9: 'PadActivated',
    # 중력
    10: 'GravityInverted', 11: 'GravityRestored',
    # 점프 종류
    12: 'NormalJump',
    13: 'RobotBoostStart', 14: 'RobotBoostStop',
    15: 'UFOJump',
    16: 'ShipBoostStart', 17: 'ShipBoostEnd',
    18: 'SpiderTeleport',
    19: 'BallSwitch',
    20: 'SwingSwitch',
    21: 'WavePush', 22: 'WaveRelease',
    23: 'DashStart', 24: 'DashStop',
    25: 'Teleported',
    # 포털
    26: 'PortalNormal', 27: 'PortalShip', 28: 'PortalBall',
    29: 'PortalUFO', 30: 'PortalWave', 31: 'PortalRobot',
    32: 'PortalSpider', 33: 'PortalSwing',
    # 오브 종류
    34: 'YellowOrb', 35: 'PinkOrb', 36: 'RedOrb',
    37: 'GravityOrb', 38: 'GreenOrb', 39: 'DropOrb',
    40: 'CustomOrb', 41: 'DashOrb', 42: 'GravityDashOrb',
    43: 'SpiderOrb', 44: 'TeleportOrb',
    # 패드 종류
    45: 'YellowPad', 46: 'PinkPad', 47: 'RedPad',
    48: 'GravityPad', 49: 'SpiderPad',
    # 포털 효과 종류
    50: 'PortalGravityFlip', 51: 'PortalGravityNormal',
    52: 'PortalGravityInvert', 53: 'PortalFlip',
    54: 'PortalUnFlip', 55: 'PortalNormalScale',
    56: 'PortalMiniScale', 57: 'PortalDualOn',
    58: 'PortalDualOff', 59: 'PortalTeleport',
    # 진행
    60: 'Checkpoint', 61: 'DestroyBlock',
    62: 'UserCoin', 63: 'PickupItem',
    64: 'CheckpointRespawn',
    # 낙하 거리
    65: 'FallLow', 66: 'FallMed', 67: 'FallHigh', 68: 'FallVHigh',
    # 입력
    69: 'JumpPush', 70: 'JumpRelease',
    71: 'LeftPush', 72: 'LeftRelease',
    73: 'RightPush', 74: 'RightRelease',
    # 리버스
    75: 'PlayerReversed',
    # 낙하 속도
    76: 'FallSpeedLow', 77: 'FallSpeedMed', 78: 'FallSpeedHigh',
}


# ========== PlayerCollisionDirection ==========
COLLISION_DIRECTIONS = {
    0: 'Top',
    1: 'Bottom',
    2: 'Left',
    3: 'Right',
}


# ========== PulseEffectType ==========
PULSE_EFFECT_TYPES = {
    0: 'Default',
    1: 'Hsv',
    2: 'Color',
}


# ========== TouchTriggerType ==========
TOUCH_TRIGGER_TYPES = {
    0: 'Normal',
    1: 'ToggleOn',
    2: 'ToggleOff',
}


# ========== PlayerButton ==========
PLAYER_BUTTONS = {
    1: 'Jump',
    2: 'Left',
    3: 'Right',
}


# ========== PlayerObject 핵심 멤버 변수 ==========
# (값 자체는 게임 실행 시 결정. 여기는 변수 이름/타입만)
PLAYER_OBJECT_MEMBERS = {
    # 물리 핵심
    'm_yVelocity':             ('double', '현재 Y속도 (점프하면 +, 떨어지면 -)'),
    'm_yVelocityUnrounded':    ('double', '반올림 안 된 Y속도'),
    'm_yVelocityBeforeSlope':  ('double', '슬로프 진입 직전 Y속도'),
    'm_fallSpeed':             ('double', '낙하 속도'),
    'm_gravity':               ('double', '중력값 (OpenGD: 0.958199)'),
    'm_gravityMod':            ('float',  '중력 모디파이어'),
    'm_speedMultiplier':       ('double', '속도 배율'),
    'm_playerSpeed':           ('float',  '0.7=0.5x, 0.9=1x, 1.1=2x, 1.3=3x, 1.6=4x'),
    'm_vehicleSize':           ('float',  '미니=0.6, 일반=1.0'),
    
    # 모드 상태
    'm_isShip':                ('bool', '쉽 모드'),
    'm_isBird':                ('bool', 'UFO 모드 (코드명 Bird)'),
    'm_isBall':                ('bool', '볼 모드'),
    'm_isDart':                ('bool', '웨이브 모드 (코드명 Dart)'),
    'm_isRobot':               ('bool', '로봇 모드'),
    'm_isSpider':              ('bool', '스파이더 모드'),
    'm_isSwing':               ('bool', '스웡 모드'),
    
    # 게임플레이 상태
    'm_isUpsideDown':          ('bool', '중력 반전 상태'),
    'm_isOnGround':            ('bool', '지면 위'),
    'm_isOnSlope':             ('bool', '슬로프 위'),
    'm_isDashing':             ('bool', '대시 중'),
    'm_isSliding':             ('bool', '슬라이딩 중'),
    'm_isOnIce':               ('bool', '얼음 위'),
    'm_isFlipped':             ('bool', '뒤집힘'),
    'm_isLocked':              ('bool', '잠김'),
    'm_isDead':                ('bool', '죽음'),
    'm_isPlatformer':          ('bool', '플랫포머 모드'),
    
    # 점프
    'm_jumpBuffered':          ('bool', '점프 버퍼링됨'),
    'm_stateRingJump':         ('bool', '오브 점프 상태'),
    'm_touchedRing':           ('bool', '오브 닿음'),
    'm_touchedPad':            ('bool', '패드 닿음'),
    'm_touchedGravityPortal':  ('bool', '중력 포털 닿음'),
    
    # 슬로프 (꽤 복잡)
    'm_slopeAngle':            ('float',  '슬로프 각도'),
    'm_slopeAngleRadians':     ('float',  '슬로프 각도 (라디안)'),
    'm_slopeVelocity':         ('float',  '슬로프 속도'),
    'm_isCollidingWithSlope':  ('bool',   '슬로프 충돌 중'),
    'm_currentSlope':          ('GameObject*', '현재 슬로프'),
    'm_currentSlope2':         ('GameObject*', '현재 슬로프 2'),
    'm_collidingWithSlopeId':  ('int',    '충돌 슬로프 ID'),
    
    # 위치
    'm_position':              ('CCPoint', '현재 위치'),
    'm_lastGroundedPos':       ('CCPoint', '마지막 지면 위치'),
    'm_yStart':                ('double',  '시작 Y좌표'),
    
    # 충돌 로그 (방향별)
    'm_collisionLogTop':       ('CCDictionary*', '위쪽 충돌 로그'),
    'm_collisionLogBottom':    ('CCDictionary*', '아래쪽 충돌 로그'),
    'm_collisionLogLeft':      ('CCDictionary*', '왼쪽 충돌 로그'),
    'm_collisionLogRight':     ('CCDictionary*', '오른쪽 충돌 로그'),
    'm_lastCollisionBottom':   ('int', '마지막 아래쪽 충돌 ID'),
    
    # 입력
    'm_holdingButtons':        ('map<int,bool>', '버튼 상태'),
    'm_inputsLocked':          ('bool',          '입력 잠김'),
}


# ========== GameObject 핵심 멤버 변수 ==========
GAME_OBJECT_MEMBERS = {
    'm_objectType':       ('GameObjectType', '오브젝트 타입'),
    'm_savedObjectType':  ('GameObjectType', '저장된 타입'),
    'm_objectRect':       ('CCRect',         '히트박스 (충돌 박스)'),
    'm_objectID':         ('int',            'GD 오브젝트 ID'),
    # ... 수백 개 더 있음
}


# ========== 슬로프 처리 함수 (직접 후킹용 참조) ==========
# bindings에서 추출 - 이 함수들이 슬로프 충돌 처리
SLOPE_FUNCTIONS = [
    'preSlopeCollision(dt, object) -> bool',
    'collidedWithSlope(dt, object, skipPre)',
    'collidedWithSlopeInternal(dt, object, forced)',
    'handleRotatedSlopeCollision(dt, object, skipPre)',
    'getModifiedSlopeYVel() -> float',
]


# ========== 충돌 처리 함수 ==========
COLLISION_FUNCTIONS = [
    'collidedWithObject(dt, object) -> bool',
    'collidedWithObject(dt, object, rect, skipCheck) -> bool',
    'collidedWithObjectInternal(dt, object, rect, skipCheck) -> bool',
    'handleRotatedObjectCollision(dt, object, rect, skipCheck) -> bool',
    'handleRotatedCollisionInternal(dt, object, rect, skipCheck, skipPre, slope) -> bool',
    'preCollision()',
    'postCollision(dt, betweenSteps)',
    'storeCollision(direction, id)',
    'resetCollisionLog(full)',
    'resetCollisionValues()',
]


# ========== 점프/패드 처리 함수 ==========
JUMP_FUNCTIONS = [
    'ringJump(object, skipCheck)',
    'propellPlayer(yVelocity, noEffects, objectType)',
    'pushPlayer(yVelocity)',
    'boostPlayer(yVelocity)',
    'bumpPlayer(bumpMod, objectType, noEffects, object)',
    'spiderTestJump(dynamic)',
    'spiderTestJumpInternal(dynamic)',
    'incrementJumps()',
]


if __name__ == "__main__":
    print(f"GameObjectType: {len(GAME_OBJECT_TYPES)}개")
    print(f"GJGameEvent: {len(GAME_EVENTS)}개")
    print(f"PlayerObject 핵심 멤버: {len(PLAYER_OBJECT_MEMBERS)}개")
    print(f"슬로프 함수: {len(SLOPE_FUNCTIONS)}개")
    print(f"충돌 함수: {len(COLLISION_FUNCTIONS)}개")
    print(f"점프 함수: {len(JUMP_FUNCTIONS)}개")
    
    print("\n[2.2 신규 GameObjectType]")
    new_22 = [21, 41, 42, 43, 44, 45, 46, 47]
    for i in new_22:
        print(f"  {i}: {GAME_OBJECT_TYPES[i]}")
    
    print("\n[착지 종류]")
    for i in range(1, 6):
        print(f"  {i}: {GAME_EVENTS[i]}")
