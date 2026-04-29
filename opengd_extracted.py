"""
OpenGD에서 추출한 추가 데이터:
- 점프 패드/오브 정확한 배율 (모드별)
- 트리거 ID 매핑
- Easing 타입 매핑
- GameObject 카테고리 enum
- 충돌 처리 정보
"""

# ========== GameObject 타입 enum (OpenGD GameObject.h) ==========
GAME_OBJECT_TYPES = {
    0:  'Solid',                # 단단한 블록 (밟을 수 있음)
    2:  'Hazard',                # 위험 (스파이크, 톱니)
    3:  'InvGravPortal',         # 중력 반전 포털
    4:  'NormGravPortal',        # 중력 정상 포털
    5:  'ShipPortal',
    6:  'CubePortal',
    7:  'Decoration',            # 장식 (충돌 없음)
    8:  'YellowJumpPad',
    9:  'PinkJumpPad',
    10: 'GravityPad',            # 점프 + 중력 반전
    11: 'YellowJumpRing',        # 노랑 점프 오브 (ring)
    12: 'PinkJumpRing',
    13: 'GravityRing',
    14: 'InvMirrorPortal',
    15: 'NormMirrorPortal',
    16: 'BallPortal',
    17: 'RegularSizePortal',
    18: 'MiniSizePortal',
    19: 'UfoPortal',
    20: 'Modifier',              # 보조 오브젝트
    22: 'SecretCoin',
    23: 'DualPortal',
    24: 'SoloPortal',
    25: 'Slope',                 # 슬로프
    26: 'WavePortal',
    27: 'RobotPortal',
    28: 'TeleportPortal',
    29: 'GreenRing',             # 그린 오브
    30: 'Collectible',
    31: 'UserCoin',
    32: 'DropRing',              # 드롭 (큐브 강한 점프)
    33: 'SpiderPortal',
    34: 'RedJumpPad',
    35: 'RedJumpRing',
    36: 'CustomRing',
    37: 'DashRing',              # 대시 오브 (수평)
    38: 'GravityDashRing',
    39: 'CollisionObject',
    40: 'Special',
}


# ========== 점프 패드 정확한 배율 (OpenGD propellPlayer 기반) ==========
# 공식: m_dYVel = flipMod * 16 * force * (vehicleSize == 1.0 ? 1.0 : 0.8)
# 볼/스파이더는 추가로 *= 0.6
JUMP_PADS = {
    'yellow':  {'id': 35,   'force': 1.00, 'velocity': 16.0,  'extra': None},
    'pink':    {'id': 140,  'force': 0.65, 'velocity': 10.4,  'extra': None},
    'red':     {'id': 1332, 'force': 1.25, 'velocity': 20.0,  'extra': None},
    'gravity': {'id': 67,   'force': 0.80, 'velocity': 12.8,  'extra': 'gravity_flip'},
    'spider':  {'id': 3005, 'force': None, 'velocity': None,  'extra': 'teleport'},
}


# ========== 점프 오브(링) 정확한 배율 (OpenGD ringJump 기반) ==========
# 기본값: newYVel = m_dJumpHeight (= 11.180032)
# 그다음 케이스별 배율 적용 후 flipMod 곱하고, vehicleSize<1이면 *0.8
JUMP_RINGS = {
    'yellow': {
        'id': 36,
        'multipliers': {  # 모드별 배율
            'cube': 1.0, 'robot': 1.0, 'ship': 1.0,
            'ufo': 1.0, 'wave': 1.0, 'ball': 1.0, 'spider': 1.0,
        },
    },
    'pink': {
        'id': 141,
        'multipliers': {
            'cube': 0.72, 'ship': 0.37, 'ufo': 0.42, 'ball': 0.77,
            'robot': 0.72, 'spider': 0.72, 'wave': 0.72,
        },
    },
    'red': {
        'id': 1333,
        'multipliers': {
            'cube': 1.38, 'ship': 1.38,    # 미니쉽: 1.4
            'ufo': 1.02,                    # 미니UFO: 1.36
            'ball': 1.34, 'spider': 1.34,
            'robot': 1.28,
            'wave': 1.38,
        },
    },
    'blue': {
        'id': 84,
        'action': 'gravity_flip',
        'multiplier': 0.8,
    },
    'green': {
        'id': 1022,
        'action': 'gravity_flip_then_fall',
        'multipliers': {'ship': 0.7, 'default': 1.0},
    },
    'drop': {  # 검은 드롭 오브
        'id': 1330,
        'velocities': {  # 절대 속도 (음수 = 아래로)
            'cube': -15, 'robot': -15, 'ball': -15, 'spider': -16.5,
            'ship': -14, 'wave': -14, 'ufo': -11.2,
        },
    },
    'spider': {'id': 3004, 'action': 'spider_teleport'},
    'teleport': {'id': 3027, 'action': 'teleport'},
    'toggle': {'id': 1594, 'action': 'toggle_groups'},
}


# ========== Easing 타입 (트리거에서 사용) ==========
EASING_TYPES = {
    0:  'None',
    1:  'EaseInOut',
    2:  'EaseIn',
    3:  'EaseOut',
    4:  'EaseElasticInOut',
    5:  'EaseElasticIn',
    6:  'EaseElasticOut',
    7:  'EaseBounceInOut',
    8:  'EaseBounceIn',
    9:  'EaseBounceOut',
    10: 'EaseExponentialInOut',
    11: 'EaseExponentialIn',
    12: 'EaseExponentialOut',
    13: 'EaseSineInOut',
    14: 'EaseSineIn',
    15: 'EaseSineOut',
    16: 'EaseBackInOut',
    17: 'EaseBackIn',
    18: 'EaseBackOut',
}


# ========== 트리거 ID 매핑 (OpenGD EffectGameObject.cpp 기반) ==========
TRIGGER_IDS = {
    # Color/BG triggers
    29:   'BG_Color',            # 배경색 (target=1000 자동 설정)
    30:   'Ground_Color',        # 바닥색 (target=1001 자동 설정)
    899:  'Color',               # 일반 색상 트리거
    
    # Enter effect triggers
    22:   'Enter_Effect_1',
    23:   'Enter_Effect_5',
    24:   'Enter_Effect_4',
    25:   'Enter_Effect_6',
    26:   'Enter_Effect_7',
    27:   'Enter_Effect_2',
    28:   'Enter_Effect_3',
    
    # Movement/transformation
    901:  'Move',                # 이동 (duration, offset, easing, easeRate, targetGroup)
    1007: 'Alpha',               # 투명도 fade
    1006: 'Pulse',               # 펄스 (색상 펄스)
    
    # 추가 트리거 (OpenGD 미구현이지만 알려진 것)
    1049: 'Toggle',              # 그룹 토글
    1268: 'Spawn',               # Spawn 트리거 (다른 트리거 발동)
}


# ========== 충돌 처리 ==========
COLLISION = {
    'mini_scale': 0.6,           # 미니 모드 히트박스 스케일
    
    # 큐브 모드 바닥/천장 (Y 좌표 px)
    'cube_floor_y': 105,         # 미니: 99
    'cube_floor_y_mini': 99,
    'world_ceiling_y': 1290,     # 이거 넘으면 죽음
    
    # 비큐브 모드 (쉽/UFO/웨이브 등)
    'vehicle_floor_offset': 93,   # 바닥 + 93 = 플레이어 최소 Y
    'vehicle_ceiling_offset': 240, # 천장 - 240 = 플레이어 최대 Y
    'vehicle_floor_offset_mini': 87,
    'vehicle_ceiling_offset_mini': 234,
    
    # 충돌 박스
    'has_outer_bounds': True,    # 일반 충돌
    'has_inner_bounds': True,    # 더 정밀한 내부 박스
    
    # 큐브 모서리 죽음
    'cube_corner_death': True,   # 회전 중 모서리 닿으면 죽음
}


# ========== 속도 시스템 (OpenGD 기준) ==========
SPEED_PORTALS = {
    0: {'gd_label': '1x',   'x_vel': 5.77, 'player_speed': 0.9, 'portal_id': 201},
    1: {'gd_label': '0.5x', 'x_vel': 5.98, 'player_speed': 0.7, 'portal_id': 200},
    2: {'gd_label': '2x',   'x_vel': 5.87, 'player_speed': 1.1, 'portal_id': 202},
    3: {'gd_label': '3x',   'x_vel': 6.0,  'player_speed': 1.3, 'portal_id': 203},
    4: {'gd_label': '4x',   'x_vel': 6.0,  'player_speed': 1.6, 'portal_id': 1334},
}


if __name__ == "__main__":
    print(f"GameObject 타입: {len(GAME_OBJECT_TYPES)}개")
    print(f"Easing 타입: {len(EASING_TYPES)}개")
    print(f"트리거 ID: {len(TRIGGER_IDS)}개")
    print(f"점프 패드: {len(JUMP_PADS)}개")
    print(f"점프 오브: {len(JUMP_RINGS)}개")
    
    print("\n[점프 패드 효과]")
    for name, info in JUMP_PADS.items():
        v = info.get('velocity')
        e = info.get('extra', '')
        v_str = f"{v:>6}" if v is not None else "  N/A "
        print(f"  {name:10s} → Y속도 {v_str}  {e or ''}")
    
    print("\n[노란 오브 vs 빨간 오브 vs 핑크 오브 (큐브 모드)]")
    print(f"  점프 기본값: 11.180032")
    print(f"  노랑 (×1.00): 11.180")
    print(f"  핑크 (×0.72):  8.050")
    print(f"  빨강 (×1.38): 15.428")
