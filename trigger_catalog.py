"""
GD 2.2 트리거 카탈로그 — 80개 종류 분류 + 시뮬 영향 + 한 줄 설명.

카테고리:
  gameplay  : 게임플레이에 직접 영향 (Move/Toggle/Collision 등) → 시뮬 처리 필수
  visual    : 시각만 (Color/Alpha/Pulse 등) → 시뮬 무시 가능
  camera    : 카메라 시점 → 시뮬 보통 무시 (Gameplay Offset 류는 영향)
  audio     : 음악/효과음 → 시뮬 무관
  control   : 게임 시스템 제어 (Reset/End/Checkpoint 등) → 일부 시뮬 영향
  special   : 특수 케이스 (Sequence/LinkVisible 등)

sim_relevant=True 인 것만 시뮬에 통합 필요.
effect_func: trigger_logic.py 의 구현된 함수 이름 (None = 미구현)
gmdkit_module: gmdkit.mappings.obj_prop.trigger.<module> (None = 매핑 없음)
"""

# (gd_id, gmdkit_name, category, sim_relevant, description, gmdkit_module, effect_func)
_RAW = [
    # ── 게임플레이 (시뮬 처리 필수) ──────────────────────────────
    (901,  "MOVE",            "gameplay", True,
     "그룹 오브젝트들을 duration 동안 (offsetX, offsetY)만큼 이동",
     "move",            "apply_move"),
    (1346, "ROTATE",          "gameplay", True,
     "그룹을 target 중심으로 degrees 만큼 회전",
     "rotate",          None),
    (2067, "SCALE",            "gameplay", True,
     "그룹의 스케일 변경",
     "scale",           None),
    (1049, "TOGGLE",          "gameplay", True,
     "그룹 enable/disable (activate_group=True/False)",
     "toggle",          "apply_toggle"),
    (1268, "SPAWN",           "gameplay", True,
     "delay 후 target_id 그룹의 트리거들 발동 (chain)",
     "spawn",           "apply_spawn"),
    (1616, "STOP",            "gameplay", True,
     "target_id 그룹의 진행 중인 액션 중지",
     "stop",            None),
    (1815, "COLLISION",       "gameplay", True,
     "block_a 와 block_b 두 collision_block 그룹이 충돌 시 target 그룹 발동",
     "collision",       None),
    (1816, "COLLISION_BLOCK", "gameplay", True,
     "보이지 않는 충돌 영역 — Collision 트리거의 인풋 (block_id)",
     "collision_block", None),
    (1347, "FOLLOW",          "gameplay", True,
     "그룹이 target 그룹의 위치를 일정 비율로 따라감",
     "follow",          None),
    (1814, "FOLLOW_PLAYER_Y", "gameplay", True,
     "그룹이 player 의 Y축 위치를 따라감",
     "follow_player_y", None),
    (3016, "ADV_FOLLOW",       "gameplay", True,
     "고급 추종 (속도/지연/축 옵션)",
     "adv_follow",      None),
    (3660, "EDIT_ADV_FOLLOW", "gameplay", True,
     "ADV_FOLLOW 의 파라미터 변경",
     "edit_adv_follow", None),
    (3661, "RETARGET_ADV_FOLLOW", "gameplay", True,
     "ADV_FOLLOW 의 target 변경",
     None,              None),
    (1595, "TOUCH",           "gameplay", True,
     "사용자 터치 시 target 그룹 발동",
     "touch",           None),
    (1812, "ON_DEATH",        "gameplay", True,
     "player 사망 시 target 그룹 발동",
     "on_death",        None),
    (1611, "COUNT",           "gameplay", True,
     "아이템 카운트가 조건 만족 시 target 그룹 발동",
     "count",           None),
    (1811, "INSTANT_COUNT",   "gameplay", True,
     "즉시 카운트 비교",
     "instant_count",   None),
    (1817, "PICKUP",          "gameplay", True,
     "아이템 카운트 증가 (collectible)",
     "pickup",          None),
    (1912, "RANDOM",          "gameplay", True,
     "여러 그룹 중 무작위 하나 발동",
     "random",          None),
    (2068, "ADV_RANDOM",      "gameplay", True,
     "고급 무작위 (확률 가중치)",
     "adv_random",      None),
    (1932, "PLAYER_CONTROL",  "gameplay", True,
     "player 입력 제어 (점프 잠금 등)",
     "player_control",  None),
    (2066, "GRAVITY",         "gameplay", True,
     "중력 변경 (방향/세기)",
     "gravity",         None),
    (3022, "TELEPORT",        "gameplay", True,
     "player 또는 그룹 텔레포트",
     "teleport",        None),
    (1917, "REVERSE",         "gameplay", True,
     "player 진행 방향 반전",
     None,              None),
    (2069, "FORCE_BLOCK",     "gameplay", True,
     "사각 영역 안에서 player 점프력/중력 변경",
     "force_block",     None),
    (3645, "FORCE_CIRCLE",    "gameplay", True,
     "원형 영역 안에서 점프력 변경",
     None,              None),
    (3640, "STATE_BLOCK",     "gameplay", True,
     "상태 기반 블록 (조건부 활성)",
     "state_block",     None),
    (3643, "TOGGLE_BLOCK",    "gameplay", True,
     "블록 토글 영역",
     "toggle_block",    None),
    (3608, "SPAWN_PARTICLE",  "gameplay", False,    # 입자는 시각
     "특정 위치에 파티클 스폰",
     "spawn_particle",  None),
    (3609, "INSTANT_COLLISION", "gameplay", True,
     "즉시 충돌 검사 (한 프레임)",
     "instant_collision", None),
    (1612, "PLAYER_HIDE",     "gameplay", False,    # 시각 (충돌엔 영향 X)
     "player 숨김 (그래픽만)",
     None,              None),
    (1613, "PLAYER_SHOW",     "gameplay", False,
     "player 표시",
     None,              None),
    (32,   "TRAIL_ENABLE",    "visual",   False,
     "player trail 활성",
     None,              None),
    (33,   "TRAIL_DISABLE",   "visual",   False,
     "player trail 비활성",
     None,              None),
    (3032, "KEYFRAME",         "gameplay", True,
     "키프레임 정의 (애니메이션 노드)",
     "keyframe",        None),
    (3033, "ANIMATE_KEYFRAME", "gameplay", True,
     "키프레임 애니메이션 발동",
     "animate_keyframe", None),
    (1585, "ANIMATE",         "gameplay", True,
     "그룹의 애니메이션 발동",
     "animate",         None),
    (3614, "TIME",            "gameplay", True,
     "시간 카운터 시작",
     "time",            None),
    (3615, "TIME_EVENT",      "gameplay", True,
     "시간 카운터 도달 시 그룹 발동",
     "time_event",      None),
    (3617, "TIME_CONTROL",    "gameplay", True,
     "시간 카운터 제어 (시작/정지)",
     "time_control",    None),
    (3618, "RESET",            "gameplay", True,
     "그룹 또는 카운터 리셋",
     "reset",           None),
    (3619, "ITEM_EDIT",       "gameplay", True,
     "아이템 카운터 값 직접 수정",
     "item_edit",       None),
    (3620, "ITEM_COMPARE",    "gameplay", True,
     "아이템 카운터 비교 후 분기",
     "item_compare",    None),
    (3641, "ITEM_PERSIST",     "gameplay", True,
     "아이템 카운터 영구 저장",
     "item_persist",    None),
    (3604, "EVENT",            "gameplay", True,
     "특정 이벤트(시작/체크포인트 등) 시 그룹 발동",
     "event",           None),
    (2063, "CHECKPOINT",       "control",  True,
     "체크포인트 — 사망 시 여기서 부활",
     "checkpoint",      None),
    (31,   "START_POSITION",   "control",  True,
     "시작 위치 (에디터 모드)",
     None,              None),
    (3600, "END",              "control",  True,
     "레벨 종료",
     "end",             None),
    (2925, "CAMERA_MODE",     "camera",   False,
     "카메라 모드 변경 (free/manual/static)",
     "camera_mode",     None),
    (1935, "TIMEWARP",         "gameplay", True,
     "시간 흐름 변경 (slow-mo)",
     None,              None),

    # ── 카메라 (시뮬 보통 무시) ──────────────────────────────────
    (1913, "ZOOM_CAMERA",     "camera",   False,
     "카메라 줌 변경",
     "zoom_camera",     None),
    (1914, "STATIC_CAMERA",   "camera",   False,
     "카메라 정지 (그룹 위치 기준)",
     "static_camera",   None),
    (1916, "OFFSET_CAMERA",   "camera",   False,
     "카메라 오프셋",
     "offset_camera",   None),
    (2015, "ROTATE_CAMERA",   "camera",   False,
     "카메라 회전",
     "rotate_camera",   None),
    (2016, "CAMERA_GUIDE",    "camera",   False,
     "카메라 가이드 (디자인 보조)",
     "camera_guide",    None),
    (2062, "CAMERA_EDGE",     "camera",   False,
     "카메라 경계 설정",
     "camera_edge",     None),
    (2901, "GAMEPLAY_OFFSET", "camera",   True,    # player 좌표 영향 가능
     "게임플레이 영역 오프셋 (player 화면 기준 위치)",
     "gameplay_offset", None),

    # ── 시각 (시뮬 무관) ─────────────────────────────────────────
    (899,  "COLOR",           "visual",   False,
     "색상 채널 변경 (Color/BG/Ground)",
     "color",           None),
    (1006, "PULSE",           "visual",   False,
     "색상 펄스 (fade in/hold/fade out)",
     "pulse",           None),
    (1007, "ALPHA",           "visual",   False,
     "그룹 투명도 보간",
     "alpha",           None),
    (1520, "SHAKE",           "visual",   False,
     "화면 흔들림 효과",
     "shake",           None),
    (2903, "GRADIENT",         "visual",   False,
     "그래디언트 효과",
     "gradient",        None),
    (3029, "CHANGE_BG",       "visual",   False,
     "배경 텍스처 변경",
     "change_bg",       None),
    (3030, "CHANGE_GR",       "visual",   False,
     "Ground 텍스처 변경",
     "change_gr",       None),
    (3031, "CHANGE_MG",       "visual",   False,
     "Middle Ground 텍스처 변경",
     "change_mg",       None),
    (1818, "BG_EFFECT_ENABLE", "visual",   False,
     "배경 효과 활성",
     None,              None),
    (1819, "BG_EFFECT_DISABLE","visual",   False,
     "배경 효과 비활성",
     None,              None),
    (3606, "BG_SPEED",         "visual",   False,
     "배경 스크롤 속도",
     "bg_speed",        None),
    (2899, "OPTIONS",         "visual",   False,
     "에디터 옵션 (시각 영향)",
     "options",         None),
    (2900, "ARROW",            "visual",   False,
     "화살표 표시 (디자인)",
     "arrow",           None),
    (3613, "UI",               "visual",   False,
     "UI 표시/숨김",
     "ui",              None),
    (2999, "EDIT_MG",          "visual",   False,
     "Middle Ground 편집",
     None,              None),
    (3662, "LINK_VISIBLE",    "special",  False,
     "그룹 시각 링크",
     "link_visible",    None),

    # ── 오디오 (시뮬 무관) ───────────────────────────────────────
    (1934, "SONG",             "audio",    False,
     "음악 변경 또는 재생",
     "song",            None),
    (3605, "EDIT_SONG",        "audio",    False,
     "음악 편집",
     None,              None),
    (3602, "SFX",              "audio",    False,
     "효과음 재생",
     "sfx",             None),
    (3603, "EDIT_SFX",         "audio",    False,
     "효과음 편집",
     None,              None),
    (3642, "BPM",              "audio",    False,
     "BPM 동기화 (마커)",
     "bpm",             None),

    # ── 특수/모드별 ──────────────────────────────────────────────
    (3612, "MG_SPEED",         "special",  False,
     "Middle Ground 속도",
     "mg_speed",        None),
    (3607, "SEQUENCE",         "special",  True,
     "시퀀스 (순서대로 그룹 발동)",
     "sequence",        None),
]


# ── gmdkit 키 매핑 자동 import ───────────────────────────────

import importlib as _il


def _build_keymap(module) -> dict[int, str]:
    """모듈의 NAME=N 상수 → {N: 'name_lower'}"""
    out = {}
    for k, v in vars(module).items():
        if k.startswith("_") or not isinstance(v, int):
            continue
        out[v] = k.lower()
    return out


def _common_keymap() -> dict[int, str]:
    """obj_prop 공통 키 + trigger 공통 키 — 모든 트리거에 적용"""
    import gmdkit.mappings.obj_prop as _op
    import gmdkit.mappings.obj_prop.trigger as _tc
    m = _build_keymap(_op)
    m.update(_build_keymap(_tc))
    return m


_COMMON_KEYS: dict[int, str] | None = None


def _trigger_specific_keys(module_name: str) -> dict[int, str]:
    """특정 트리거 종류의 키 (gmdkit.mappings.obj_prop.trigger.<module>)"""
    if not module_name:
        return {}
    try:
        mod = _il.import_module(f"gmdkit.mappings.obj_prop.trigger.{module_name}")
        return _build_keymap(mod)
    except ImportError:
        return {}


def all_keys_for(gd_id: int) -> dict[int, str]:
    """
    트리거 ID 의 모든 키 매핑 반환 — common + trigger common + 종류 specific.
    인스턴스의 .gmd dict 에 있는 키들이 어떤 의미인지 알려줌.
    """
    global _COMMON_KEYS
    if _COMMON_KEYS is None:
        _COMMON_KEYS = _common_keymap()
    e = TRIGGER_CATALOG.get(gd_id)
    if not e:
        return dict(_COMMON_KEYS)
    out = dict(_COMMON_KEYS)
    out.update(_trigger_specific_keys(e["gmdkit_module"]))
    return out


# ── 공개 API: id → entry dict ────────────────────────────────────
TRIGGER_CATALOG: dict[int, dict] = {}
for gd_id, name, category, sim_relevant, desc, mod, fn in _RAW:
    TRIGGER_CATALOG[gd_id] = {
        "id":            gd_id,
        "name":          name,
        "category":      category,
        "sim_relevant":  sim_relevant,
        "description":   desc,
        "gmdkit_module": mod,
        "effect_func":   fn,
        # confidence: 'verified' = OpenGD/gdp 코드로 검증,
        #             'inferred' = 이름·키 매핑·일반 GD 지식 기반 추측,
        #             'unknown' = 잘 모름 (확인 필요)
        "confidence":    "inferred",   # 디폴트 (verified 는 아래에서 수동 표시)
    }


# OpenGD 코드로 직접 검증된 트리거 (verified)
_VERIFIED_IN_OPENGD = {
    899:  "OpenGD::EffectGameObject::triggerActivated case 899 (color channel)",
    901:  "OpenGD::EffectGameObject::triggerActivated case 901 → runMoveCommand",
    1006: "OpenGD::EffectGameObject::triggerActivated case 1006 (pulse)",
    1007: "OpenGD::EffectGameObject::triggerActivated case 1007 (alpha tween)",
    1049: "OpenGD::EffectGameObject::triggerActivated case 1049 (toggle, _toggledOn)",
    1268: "OpenGD::EffectGameObject::triggerActivated case 1268 (spawn delay chain)",
}
for gd_id, src in _VERIFIED_IN_OPENGD.items():
    if gd_id in TRIGGER_CATALOG:
        TRIGGER_CATALOG[gd_id]["confidence"] = "verified"
        TRIGGER_CATALOG[gd_id]["source"] = src


def lookup(gd_id: int) -> dict | None:
    return TRIGGER_CATALOG.get(gd_id)


def by_category(category: str) -> list[dict]:
    return [e for e in TRIGGER_CATALOG.values() if e["category"] == category]


def sim_relevant_only() -> list[dict]:
    return [e for e in TRIGGER_CATALOG.values() if e["sim_relevant"]]


def implemented_only() -> list[dict]:
    """trigger_logic.py 에 effect_func 가 정의된 트리거"""
    return [e for e in TRIGGER_CATALOG.values() if e["effect_func"] is not None]


# ── 자체 점검 ───────────────────────────────────────────────────

if __name__ == "__main__":
    import json, collections
    print(f"트리거 catalog: {len(TRIGGER_CATALOG)} 개")

    # 카테고리별 카운트
    cats = collections.Counter(e["category"] for e in TRIGGER_CATALOG.values())
    print("\n카테고리별:")
    for c, n in cats.most_common():
        sim = sum(1 for e in TRIGGER_CATALOG.values()
                   if e["category"] == c and e["sim_relevant"])
        print(f"  {c:<10} {n:>2}개  (sim_relevant: {sim})")

    sim_n = sum(1 for e in TRIGGER_CATALOG.values() if e["sim_relevant"])
    impl  = sum(1 for e in TRIGGER_CATALOG.values() if e["effect_func"])
    verified = sum(1 for e in TRIGGER_CATALOG.values() if e["confidence"] == "verified")
    inferred = sum(1 for e in TRIGGER_CATALOG.values() if e["confidence"] == "inferred")
    print(f"\n시뮬 처리 필요: {sim_n}/{len(TRIGGER_CATALOG)}")
    print(f"trigger_logic.py 에 구현된 효과: {impl}")
    print(f"\nConfidence (코드 검증):")
    print(f"  verified : {verified} (OpenGD 소스 검증)")
    print(f"  inferred : {inferred} (이름/키 기반 추측 — 검증 필요)")
    print()

    # all_keys_for 동작 검증 — Move 트리거의 모든 키 보여줌
    move_keys = all_keys_for(901)
    print(f"Move 트리거 (ID 901) 의 매핑 가능한 키: {len(move_keys)} 개")
    sample_keys = sorted(move_keys.items())[:8]
    print(f"  앞 8개: {dict(sample_keys)}")

    # id_dictionary_merged 와 정합 확인 — 누락된 트리거 ID 있는지
    try:
        d = json.load(open("id_dictionary_merged.json", encoding="utf-8"))
        dict_trigs = {int(k) for k, v in d.items() if v.get("gmdkit_category") == "trigger"}
        cat_ids = set(TRIGGER_CATALOG.keys())
        missing = dict_trigs - cat_ids
        extra   = cat_ids - dict_trigs
        if missing:
            print(f"\nWARN: id_dict 에 있는데 catalog 에 없는 ID: {sorted(missing)}")
        if extra:
            print(f"\nWARN: catalog 에 있는데 id_dict 에 없는 ID: {sorted(extra)}")
        if not missing and not extra:
            print(f"\n[OK] id_dictionary_merged 와 정합 ({len(dict_trigs)} 트리거)")
    except FileNotFoundError:
        pass

    # Every End 시작 영역에 등장하는 18종이 다 catalog 에 있는지
    every_end_start_kinds = ["toggle", "move", "rotate", "collision_block", "collision",
                              "alpha", "color", "follow", "spawn", "stop",
                              "static_camera", "follow_player_y", "on_death", "shake",
                              "pulse", "adv_follow", "camera_guide", "ui"]
    missing_kinds = [k for k in every_end_start_kinds
                     if not any(e["gmdkit_module"] == k for e in TRIGGER_CATALOG.values())]
    if missing_kinds:
        print(f"\nWARN: Every End 시작 트리거 catalog 누락: {missing_kinds}")
    else:
        print(f"\n[OK] Every End 시작 영역 18종 catalog 다 있음")
