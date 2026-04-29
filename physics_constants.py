"""
GD 물리 상수 (출처: lily-pi/GeometryPhysics, 커뮤니티 분석, 위키)

단위:
  1 block (b) = 30 Delta units (.gmd 파일의 X/Y 좌표 단위)
  1 block (b) = 135 pixels (실제 화면 렌더링)
  시간 = 초 (s)
  프레임레이트 = 60 FPS (1프레임 = 1/60s)
  
  → 게임 로직/시뮬레이션은 Delta 단위로 (b/s² 공식이 그대로 적용)
  → 픽셀은 화면 표시할 때만

검증 정확도:
  큐브, 쉽 = 정확 (lily-pi 저장소 출처)
  나머지 = 추정/근사 (정성적 자료 기반)
"""

# ========== 기본 상수 ==========
BLOCK_SIZE = 30          # 1 block = 30 Delta (게임 좌표 단위)
PIXEL_SIZE = 135         # 1 block = 135 pixels (화면 렌더링)
FRAME_RATE = 60
DT = 1 / FRAME_RATE


# ========== 게임 속도 (참고용 - 위에 SPEED_SYSTEM/SPEED로 통합됨) ==========


# ========== 큐브 모드 [정확 - lily-pi & OpenGD 교차검증] ==========
# OpenGD 기준 실시간 시뮬레이션 값 (매 프레임 dt 곱해서 적용)
# m_dGravity = 0.958199 (OpenGD)
# m_dJumpHeight = 11.180032 (OpenGD)
# 점프 시: m_dYVel = jumpHeight (즉시 속도 부여)
# 매 프레임: m_dYVel -= gravity * dt * gravityMultiplier(=1.0 for cube)
# 터미널: ±15
CUBE = {
    'jump_height': 11.180032,     # 점프 즉시 부여되는 Y속도 (OpenGD 단위)
    'gravity': 0.958199,          # 매 프레임 빠지는 중력 (OpenGD 단위)
    'gravity_multiplier': 1.0,
    'terminal_velocity': 15,      # ±15
    'hitbox_size': (30, 30),      # Delta 단위
    'hitbox_tolerance': 2,
    'rotates': True,
    
    # lily-pi 단위 (b/s²)
    'jump_velocity_bs': 20.14884,
    'gravity_bs': 79,
    'terminal_velocity_bs': 30.1194,
}


# ========== 쉽 모드 [정확 - OpenGD] ==========
# 가속도가 상황별로 다름 (홀드/낙하 여부에 따라)
SHIP = {
    'accel_holding': 0.8,         # 홀드 중 (위로)
    'accel_releasing_rising': 1.2, # 안 떨어지는 중에 놓을 때
    'accel_default': -1.0,        # 기본
    'extra_boost_normal': 0.4,
    'extra_boost_holding_falling': 0.5,
    'velocity_upper_limit': 8.0,  # 미니: / 0.85
    'velocity_lower_limit': -6.4,
    'hitbox_size': (30, 30),
    'rotates': False,
    'gravity_bs': 25,             # lily-pi 기준
}


# ========== 볼 모드 [정확 - OpenGD] ==========
BALL = {
    'gravity_multiplier': 0.6,    # 큐브의 60%
    'jump_velocity_multiplier': 0.6,  # 점프 시 jumpHeight * 0.6
    'click_action': 'gravity_flip_with_jump',  # 클릭 시 중력 반전 + 작은 점프
    'terminal_velocity': 15,
    'hitbox_size': (30, 30),
    'rotates': False,
}


# ========== UFO 모드 [정확 - OpenGD] ==========
UFO = {
    'click_velocity': 7.0,        # 클릭 시 Y속도 = playerSize * 7 (미니는 8)
    'click_velocity_mini': 8.0,
    'gravity_mult_falling': 0.8,
    'gravity_mult_rising': 1.2,
    'gravity_factor': 0.5,        # gravity * dt * mult * 0.5
    'velocity_upper_limit': 8.0,
    'velocity_lower_limit': -6.4,
    'hitbox_size': (30, 30),
    'rotates': False,
}


# ========== 웨이브 모드 [부분적 - OpenGD] ==========
# 쉽/UFO랑 같은 코드 경로 쓰지만 클릭=대각선 이동
WAVE = {
    'mode': 'diagonal',
    'angle_normal_deg': 45,
    'angle_mini_deg': 60,         # 미니는 더 가파름
    'velocity_upper_limit': 8.0,
    'velocity_lower_limit': -6.4,
    'hitbox_type': 'small_square',
    'hitbox_size': (15, 15),
    'rotates': False,
    'ignores_pads': True,
    'ignores_orbs_except': ['blue', 'green'],
}


# ========== 로봇 모드 [근사] ==========
ROBOT = {
    'jump_velocity_min': 15,
    'jump_velocity_max': 25,
    'gravity_multiplier': 1.0,
    'variable_jump': True,
    'hitbox_size': (30, 30),
    'rotates': False,
}


# ========== 스파이더 모드 [근사] ==========
SPIDER = {
    'click_action': 'teleport_flip',
    'gravity_multiplier': 1.0,
    'hitbox_size': (30, 30),
    'rotates': False,
}


# ========== 스웡 모드 (2.2) [근사] ==========
SWING = {
    'click_action': 'gravity_flip',
    'hitbox_size': (30, 30),
    'rotates': False,
}


# ========== 미니 모드 변형 ==========
MINI_MULTIPLIER = {
    'cube':   {'player_size': 0.8, 'jump_velocity_mult': 0.8},
    'ship':   {'player_size': 0.85},  # velocity_limit이 / 0.85 (더 빠름)
    'ufo':    {'player_size': 0.8, 'click_velocity_override': 8.0},
    'ball':   {'player_size': 0.8},
    'wave':   {'player_size': 0.85, 'angle_deg': 60},
    'robot':  {'player_size': 0.8},
    'spider': {'player_size': 0.8},
    'hitbox_scale': 0.6,
}


# ========== 속도 시스템 ==========
# OpenGD가 사용하는 두 변수: m_dXVel (실제 X속도) + m_playerSpeed (메커닉 보정)
SPEED_SYSTEM = {
    0: {'label': '1x',   'x_vel': 5.77, 'player_speed': 0.9},   # 기본
    1: {'label': '0.5x', 'x_vel': 5.98, 'player_speed': 0.7},
    2: {'label': '2x',   'x_vel': 5.87, 'player_speed': 1.1},
    3: {'label': '3x',   'x_vel': 6.0,  'player_speed': 1.3},
    4: {'label': '4x',   'x_vel': 6.0,  'player_speed': 1.6},
}

# lily-pi 기준 픽셀/초 (Delta 단위/초로 보면 같음)
SPEED = {
    0.5: 251.16,
    1.0: 311.58,
    2.0: 387.42,
    3.0: 468.00,
    4.0: 576.00,
}


# ========== 점프 패드 ==========
PADS = {
    'yellow': {'id': 35,   'velocity_multiplier': 1.5},
    'pink':   {'id': 140,  'velocity_multiplier': 0.5},
    'red':    {'id': 1332, 'velocity_multiplier': 2.0},
    'blue':   {'id': 67,   'action': 'jump_and_flip'},
    'spider': {'id': 3005, 'action': 'teleport'},
}


# ========== 점프 오브 (클릭 시 발동) ==========
ORBS = {
    'yellow':     {'id': 36,   'velocity_multiplier': 1.0},
    'pink':       {'id': 141,  'velocity_multiplier': 0.6},
    'red':        {'id': 1333, 'velocity_multiplier': 1.4},
    'blue':       {'id': 84,   'action': 'gravity_flip'},
    'green':      {'id': 1022, 'action': 'gravity_flip_inverse'},
    'black':      {'id': 1330, 'action': 'down_dash'},
    'dash_green': {'id': 1704, 'action': 'horizontal_dash'},
    'dash_pink':  {'id': 1751, 'action': 'horizontal_dash_up'},
    'teleport':   {'id': 3027, 'action': 'teleport'},
    'toggle':     {'id': 1594, 'action': 'toggle_groups'},
    'spider':     {'id': 3004, 'action': 'spider_teleport'},
}


# ========== 모드 전환 포털 ==========
# 우선순위 (스택 시): Spider > Robot > Wave > UFO > Ball > Ship > Cube
PORTALS = {
    'cube':              {'id': 12,   'priority': 0},
    'ship':              {'id': 13,   'priority': 1},
    'ball':              {'id': 47,   'priority': 2},
    'ufo':               {'id': 111,  'priority': 3},
    'wave':              {'id': 660,  'priority': 4},
    'robot':             {'id': 745,  'priority': 5},
    'spider':            {'id': 1331, 'priority': 6},
    'swing':             {'id': 1933, 'priority': 4},  # 2.2
    'gravity_normal':    {'id': 10},
    'gravity_inverted':  {'id': 11},
    'gravity_toggle':    {'id': 2926},
    'size_normal':       {'id': 99},
    'size_mini':         {'id': 101},
    'dual_enter':        {'id': 286},
    'dual_exit':         {'id': 287},
    'mirror_enter':      {'id': 45},
    'mirror_exit':       {'id': 46},
}


# ========== 스피드 포털 ==========
SPEED_PORTALS = {
    'slow':       {'id': 200,  'speed': 0.5},
    'normal':     {'id': 201,  'speed': 1.0},
    'fast':       {'id': 202,  'speed': 2.0},
    'very_fast':  {'id': 203,  'speed': 3.0},
    'super_fast': {'id': 1334, 'speed': 4.0},
}


# ========== 듀얼 모드 그리드 ==========
DUAL_GRID = {
    'cube_only': 9,    # 큐브/볼/스파이더/로봇만 = 9칸
    'with_ship': 10,   # 쉽/UFO/웨이브/스웡 포함 = 10칸
}


# ========== 자주 쓰는 오브젝트 ID (게임플레이용) ==========
GAMEPLAY_IDS = {
    # 블록
    'block':         1,
    'half_block':    2,
    'corner_block':  6,
    
    # 스파이크
    'spike':         8,
    'small_spike':   39,
    'tall_spike':    103,
    'invisible_spike': 392,
    'short_spike':   135,
    
    # 슬로프
    'slope_30_up':   1734,
    'slope_30_dn':   1735,
    'slope_60_up':   1740,
    'slope_60_dn':   1741,
    
    # 텍스트
    'text':          914,
    
    # 시작 위치
    'start_pos':     31,
}


# ========== 헬퍼 함수 ==========

def block_to_pixel(b: float) -> float:
    return b * BLOCK_SIZE


def pixel_to_block(p: float) -> float:
    return p / BLOCK_SIZE


def cube_jump_distance(speed_x: float = None) -> dict:
    """큐브 점프 시 도달 거리/높이/시간 (lily-pi b/s 단위 사용)"""
    if speed_x is None:
        speed_x = SPEED[1.0]
    v0 = CUBE['jump_velocity_bs']  # 20.14884
    g = CUBE['gravity_bs']         # 79
    
    t_air = 2 * v0 / g
    h_max = v0**2 / (2 * g)
    distance_x = speed_x * t_air
    
    return {
        'air_time_s': t_air,
        'air_time_frames': t_air * FRAME_RATE,
        'max_height_b': h_max,
        'max_height_px': h_max * BLOCK_SIZE,
        'distance_x_px': distance_x,
        'distance_x_b': distance_x / BLOCK_SIZE,
    }


def cube_position(t: float, v0: float = None) -> float:
    """큐브 점프 후 t초 시점의 높이 (블록 단위)"""
    if v0 is None:
        v0 = CUBE['jump_velocity_bs']
    g = CUBE['gravity_bs']
    return v0 * t - 0.5 * g * t * t


def cube_velocity(t: float, v0: float = None) -> float:
    """t초 시점의 수직 속도"""
    if v0 is None:
        v0 = CUBE['jump_velocity_bs']
    g = CUBE['gravity_bs']
    v = v0 - g * t
    return max(v, -CUBE['terminal_velocity_bs'])


def can_jump_gap(gap_blocks: float, speed_mult: float = 1.0) -> bool:
    """주어진 너비 갭을 큐브 점프로 건널 수 있는지"""
    speed_x = SPEED[speed_mult]
    result = cube_jump_distance(speed_x)
    return result['distance_x_b'] >= gap_blocks


if __name__ == "__main__":
    print("=== GD 큐브 점프 분석 ===\n")
    
    for label, speed_mult in [('0.5x', 0.5), ('1x', 1.0), ('2x', 2.0), ('3x', 3.0), ('4x', 4.0)]:
        speed_x = SPEED[speed_mult]
        result = cube_jump_distance(speed_x)
        print(f"[{label}]")
        print(f"  공중 시간: {result['air_time_s']:.3f}s ({result['air_time_frames']:.1f}프레임)")
        print(f"  최대 높이: {result['max_height_b']:.2f}b ({result['max_height_px']:.0f}px)")
        print(f"  수평 거리: {result['distance_x_b']:.2f}b ({result['distance_x_px']:.0f}px)")
        print()
    
    print("=== 갭 점프 가능 여부 (1x 속도) ===")
    for gap in [3, 4, 5, 5.3, 6]:
        ok = "OK" if can_jump_gap(gap, 1.0) else "X"
        print(f"  {gap}b 갭: {ok}")
