"""
.gmd 오브젝트 디코더 — raw 키-값 dict 를 사람이 읽는 형식으로

사용:
    from gmd_decoder import decode_object, format_object
    obj = {1: 901, 2: 1875, 3: 105, 10: 2.0, 51: 15, 28: 300, 29: 0, 30: 2}
    decoded = decode_object(obj)         # → {'kind': 'Move', 'x': 1875, 'duration': 2.0, ...}
    print(format_object(decoded))
"""
from __future__ import annotations
import importlib
import json
from pathlib import Path

import gmdkit.mappings.obj_prop as _obj_prop
import gmdkit.mappings.obj_prop.trigger as _trig_common


# ── 키 매핑 빌드 ────────────────────────────────────────────────

def _build_keymap(module) -> dict[int, str]:
    """모듈의 NAME=N 상수들을 {N: 'name_lower'} dict 로"""
    out = {}
    for k, v in vars(module).items():
        if k.startswith("_") or not isinstance(v, int):
            continue
        out[v] = k.lower()
    return out


_COMMON         = _build_keymap(_obj_prop)        # 1=id, 2=x, 3=y, 6=rotation, 57=groups ...
_TRIGGER_COMMON = _build_keymap(_trig_common)     # 11=touch_trigger, 87=multi_trigger, 62=spawn_trigger ...

# 트리거 종류별 매핑은 lazy import
_TRIG_SPECIFIC: dict[str, dict[int, str]] = {}


def _get_trigger_keymap(module_name: str) -> dict[int, str]:
    """gmdkit.mappings.obj_prop.trigger.<module_name> 의 키 매핑 반환"""
    if module_name in _TRIG_SPECIFIC:
        return _TRIG_SPECIFIC[module_name]
    try:
        mod = importlib.import_module(f"gmdkit.mappings.obj_prop.trigger.{module_name}")
        _TRIG_SPECIFIC[module_name] = _build_keymap(mod)
    except ImportError:
        _TRIG_SPECIFIC[module_name] = {}
    return _TRIG_SPECIFIC[module_name]


# ── ID 사전 (gmdkit_name 등 메타) ──────────────────────────────

_ID_DICT: dict[str, dict] | None = None

def _id_dict() -> dict[str, dict]:
    global _ID_DICT
    if _ID_DICT is None:
        _ID_DICT = json.loads(Path("id_dictionary_merged.json").read_text(encoding="utf-8"))
    return _ID_DICT


# ── 핵심 함수 ──────────────────────────────────────────────────

def classify(obj_id: int) -> tuple[str, str | None]:
    """
    오브젝트 ID 의 (kind, trigger_module_name) 반환.
    kind ∈ {'Solid','Hazard','Slope','Decoration','Trigger','Pad','Orb','Portal',
             'Modifier','Coin','?'}
    trigger_module_name 은 kind=='Trigger' 일 때 gmdkit 모듈 이름 (없으면 None)
    """
    e = _id_dict().get(str(obj_id), {})
    cat = e.get("gmdkit_category", "")
    if cat == "trigger":
        name_l = (e.get("gmdkit_name") or "").lower()
        return ("Trigger", name_l or None)
    if cat == "portal":      return ("Portal", None)
    if cat == "pad":         return ("Pad", None)
    if cat == "orb":         return ("Orb", None)
    if cat == "speed":       return ("Modifier", None)
    type_name = e.get("object_type_name") or ""
    if type_name in ("Solid", "Hazard", "Slope", "Decoration"):
        return (type_name, None)
    if type_name in ("YellowJumpPad", "PinkJumpPad", "RedJumpPad",
                      "GravityPad", "SpiderPad"):
        return ("Pad", None)
    if type_name and "Portal" in type_name:        return ("Portal", None)
    if type_name == "Modifier":                    return ("Modifier", None)
    if type_name and ("Ring" in type_name or "Orb" in type_name):
        return ("Orb", None)
    return (type_name or "?", None)


def decode_object(obj: dict[int, object]) -> dict:
    """
    raw .gmd 오브젝트(키=int)를 사람이 읽는 dict 로.
      - 'id', 'x', 'y' 등 공통 키
      - 트리거면 'kind'='Trigger', 'trigger_kind'='move' 등 + 트리거 키
      - 알 수 없는 키는 'k123' 형식으로 보존
    """
    obj_id = obj.get(1)
    if obj_id is None:
        return {"raw": obj}

    kind, trig_mod = classify(obj_id)
    out: dict = {"id": obj_id, "kind": kind}
    if kind == "Trigger" and trig_mod:
        out["trigger_kind"] = trig_mod

    # 매핑 우선순위: 트리거 specific > trigger common > obj common
    keymap = dict(_COMMON)
    if kind == "Trigger":
        keymap.update(_TRIGGER_COMMON)
        if trig_mod:
            keymap.update(_get_trigger_keymap(trig_mod))

    for k, v in obj.items():
        if k == 1:
            continue                                # id 는 위에서 처리
        name = keymap.get(k, f"k{k}")
        out[name] = v
    return out


def format_object(decoded: dict, hide_zeros: bool = True) -> str:
    """디코드된 dict 를 한 줄 사람이 읽기 좋은 형식으로"""
    kind = decoded.get("kind", "?")
    if "trigger_kind" in decoded:
        kind = f"{decoded['trigger_kind'].title()} (trigger)"
    obj_id = decoded.get("id", "?")
    x = decoded.get("x", 0)
    y = decoded.get("y", 0)

    skip = {"id", "kind", "trigger_kind", "x", "y"}
    parts = []
    for k, v in decoded.items():
        if k in skip:
            continue
        if hide_zeros and v in (0, 0.0, "", False, None):
            continue
        parts.append(f"{k}={v}")
    body = "  ".join(parts) if parts else "(no extra)"
    return f"[ID {obj_id}] {kind} @ ({x}, {y})\n    {body}"


# ── 단위 테스트 ────────────────────────────────────────────────

def _test_classify():
    assert classify(1)    == ("Solid", None)
    assert classify(8)    == ("Hazard", None)
    assert classify(901)  == ("Trigger", "move")
    assert classify(1346) == ("Trigger", "rotate")
    assert classify(1347) == ("Trigger", "follow")
    assert classify(1815) == ("Trigger", "collision")
    assert classify(35)   == ("Pad", None)
    assert classify(36)   == ("Orb", None)
    assert classify(13)   == ("Portal", None)        # ShipPortal
    assert classify(200)  == ("Modifier", None)      # 0.5x speed
    print("[OK] classify")


def _test_decode():
    # Move 트리거 가짜 인스턴스
    obj = {1: 901, 2: 1875, 3: 105, 10: 2.0, 51: 15, 28: 300, 29: 0, 30: 2,
           87: 1, 57: "5"}
    d = decode_object(obj)
    assert d["kind"] == "Trigger"
    assert d["trigger_kind"] == "move"
    assert d["x"] == 1875 and d["y"] == 105
    assert d["duration"] == 2.0
    assert d["target_id"] == 15
    assert d["move_x"] == 300
    assert d["easing"] == 2
    assert d["multi_trigger"] == 1
    print("[OK] decode (Move trigger)")
    print("    " + format_object(d).replace("\n", "\n    "))


if __name__ == "__main__":
    _test_classify()
    _test_decode()
