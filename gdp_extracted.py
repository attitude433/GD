"""
camila314/gdp 2.2에서 추출한 데이터.
실제 GD 2.2 바이너리 디컴파일 결과 — OpenGD나 lily-pi랑 차원이 다른 정확도.

함수 본문 21개 디컴파일됨. 핵심 발견 정리.
시뮬레이터 작성 시 이 파일을 레퍼런스로.

원본: github.com/camila314/gdp
"""

# ========== 확정된 물리 상수 (디컴파일 결과) ==========
# 출처: PlayerObject_updateJump.cpp

# 볼/쉽/스파이더는 m_gravity 무시하고 0.9582 고정 사용
SHARED_GRAVITY = 0.9582  # 볼/쉽/스파이더용

# 비행 모드 (쉽/UFO/웨이브/스웡)의 Y속도 제한
FLY_VEL_LIMITS = {
    'normal_size': {
        'upper': 8.0,
        'lower': -6.4,
        'mini_factor': 0.85,  # 미니는 / 0.85
    },
    'mini_size': {
        'upper': 9.4118,   # = 8 / 0.85
        'lower': -7.5294,  # = -6.4 / 0.85
    },
}

# 스웡 모드 중력 모디파이어
SWING_GRAV_MOD = {
    'normal': 0.4,
    'mini': 0.6,
}

# 웨이브(Dart) 모드: Y속도 = flipMod() * 8.0 * (jumpHeld ? 1 : -1)
WAVE_VELOCITY = 8.0  # 절대값

# 점프 패드/오브 터치 후 Y속도 0.6배 (특정 조건)
PAD_VEL_REDUCE = 0.6

# 점프 시 회전 속도
ROTATION_SPEED_MULT = {
    'normal_size': 3.0/2.0,    # 1.5
    'mini_size': 15.0/13.0,    # ~1.154
}
ROTATION_BASE = 180  # 도/초


# ========== 슬로프 처리 (collidedWithSlopeInternal) ==========
SLOPE_PHYSICS = {
    # 슬로프 Y속도 = (높이 * playerSpeed * speedMult) / 너비
    # = "이 슬로프를 따라 올라갈 때 필요한 Y속도"
    
    # float_g (스냅 임계값)
    'float_g_uphill_was_on_slope': 4.0,
    'float_g_uphill_new': 1.0,
    'float_g_not_uphill': 0.0,
    
    # 슬로프 이동 시 추가량
    'slope_move_extra_platformer': 10,  # 플랫포머
    'slope_move_extra_normal': 5,       # 일반
    
    # 새 슬로프 진입 시 보정
    'new_slope_scalar_normal': 20,  # m_vehicleSize * 20
    
    # 슬로프 위에서 player_radius 보정: radius / cos(slopeAngle)
    
    # 플랫포머 + 슬로프 각도 임계값
    'slope_angle_threshold_normal': 80.0,  # 도
    'slope_angle_threshold_ice': 40.0,
    
    # 라디안 → 도 변환
    'rad_to_deg': 57.296,
    
    # 슬로프가 위험물(spike)일 때 Y 보정
    'slope_hazard_offset': 4,  # 위/아래 4픽셀
}


# ========== 슬로프 위 Y좌표 계산 (slopeYPos 함수 디컴파일) ==========
def slope_y_pos(player_x: float, 
                slope_left: float, slope_right: float,
                slope_bottom: float, slope_top: float,
                slope_uphill: bool,
                is_hazard: bool = False,
                floor_top: bool = False) -> float:
    """
    슬로프 위에서 플레이어 X 좌표에 해당하는 Y 좌표 계산.
    GD 2.2 GameObject::slopeYPos 디컴파일 결과 그대로.
    """
    slope_ratio = (slope_top - slope_bottom) / (slope_right - slope_left)
    
    if slope_left < player_x:
        distance_from_right = player_x - slope_right
        if slope_uphill:
            result = slope_top + distance_from_right * slope_ratio
        else:
            result = slope_bottom - distance_from_right * slope_ratio
    else:
        distance_from_left = slope_left - player_x
        if not slope_uphill:
            result = slope_top + distance_from_left * slope_ratio
        else:
            result = slope_bottom - distance_from_left * slope_ratio
    
    if is_hazard:
        result += -4 if floor_top else 4
    
    return result


# ========== 충돌 처리 핵심 (collidedWithObjectInternal) ==========
COLLISION_PHYSICS = {
    # snapUpThreshold: 살짝 발판 위로 올라가는 허용 거리
    'snap_up_default': 10.0,
    'snap_up_state_scaled': 15.0,         # m_stateScale >= 1
    'snap_up_platformer_no_slope': 5.0,
    'snap_up_fly_mode': 6.0,              # UFO/Wave/Ship/Swing
    
    # 충돌 판정 thresholds
    'collision_floor_threshold': 5.0,     # boolL 판정용
    
    # 플레이어 모드 enum (collision 함수 안 사용)
    'mode_enum': {
        'Cube': 0, 'Ship': 1, 'Ball': 2, 'Ufo': 3,
        'Wave': 4, 'Robot': 5, 'Spider': 6, 'Swing': 7,
    },
}


# ========== 점프 패드 처리 (boostPlayer) ==========
# void boostPlayer(float yVelocity):
#   m_yVelocity = yVelocity (그대로)
#   m_isOnGround = false
#   m_isAccelerating = true
#   m_rotationSpeed = 180 * (size==1 ? 1.5 : 15/13) * flipMod
BOOST_PLAYER = {
    'set_y_velocity_directly': True,  # 패드 force 그대로 적용
    'rotation_180_degrees': True,
}


# ========== 디컴파일된 함수 목록 ==========
DECOMPILED_FUNCTIONS = [
    # PlayerObject
    'updateJump',                      # 482줄, 점프/낙하 메인 로직
    'collidedWithObjectInternal',      # 653줄, 일반 충돌 처리
    'collidedWithSlopeInternal',       # 288줄, 슬로프 충돌
    'updateRotation',                  # 회전
    'updateShipRotation',              # 쉽 회전
    'updateSlopeRotation',             # 슬로프 위 회전
    'updateTimeMod',                   # 속도 변경
    'boostPlayer',                     # 점프 패드 처리
    'reversePlayer',                   # 리버스
    'doReversePlayer',
    'runBallRotation',
    'convertToClosestRotation',
    'placeStreakPoint',
    'playerDestroyed',
    'checkSnapJumpToObject',
    
    # GameObject
    'slopeYPos',                       # 슬로프 위 Y 좌표 계산
    
    # PlayLayer
    'destroyPlayer',
    'postUpdate',
    
    # GJBaseGameLayer
    'update',                          # 메인 업데이트 루프
    
    # 기타
    'HardStreak::addPoint',            # 웨이브 트레일
    'Slerp2D',                         # 회전 보간
]


# ========== 시뮬레이터 작성 시 참조 순서 ==========
SIMULATOR_REFERENCE_ORDER = [
    # 1. 메인 루프
    'GJBaseGameLayer::update',
    
    # 2. 매 프레임 플레이어 업데이트
    'PlayerObject::updateJump',  # 입력 처리, 중력 적용, Y속도 갱신
    'PlayerObject::updateRotation',
    
    # 3. 충돌
    'PlayerObject::collidedWithObjectInternal',  # 일반
    'PlayerObject::collidedWithSlopeInternal',   # 슬로프
    'GameObject::slopeYPos',                     # 슬로프 위 Y
    
    # 4. 이벤트
    'PlayerObject::boostPlayer',     # 패드
    'PlayLayer::destroyPlayer',      # 죽음
]


if __name__ == "__main__":
    print(f"디컴파일된 함수: {len(DECOMPILED_FUNCTIONS)}개")
    
    # 슬로프 Y 계산 테스트
    # 30x30 정사각형 슬로프, 우상향, 플레이어 X=15에서 Y는?
    y = slope_y_pos(
        player_x=15,
        slope_left=0, slope_right=30,
        slope_bottom=0, slope_top=30,
        slope_uphill=True,
    )
    print(f"\n슬로프 테스트: 30x30 우상향, X=15 → Y={y:.2f}")
    print("(예상: 15. 정중앙)")
    
    # 핵심 상수 출력
    print(f"\n[핵심 확정값]")
    print(f"공유 중력 (볼/쉽/스파이더): {SHARED_GRAVITY}")
    print(f"비행 속도 제한: 위 {FLY_VEL_LIMITS['normal_size']['upper']}, 아래 {FLY_VEL_LIMITS['normal_size']['lower']}")
    print(f"웨이브 Y속도: ±{WAVE_VELOCITY}")
    print(f"스웡 중력 모드: 일반 {SWING_GRAV_MOD['normal']}, 미니 {SWING_GRAV_MOD['mini']}")
