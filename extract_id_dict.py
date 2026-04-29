"""
Object_IDs_New.gmd에서 ID별 정보 다 뽑기

각 ID에 대해:
- 사용되는 키 목록
- 키별 기본값(이 레벨에서 사용된 값)
- 라벨 위치
"""
import json
import base64
from collections import defaultdict
from decode_gmd import parse_gmd_file, decode_level_data
from parse_objects import parse_objects


def decode_b64_text(s):
    try:
        padding = 4 - len(s) % 4
        if padding != 4:
            s += '=' * padding
        return base64.b64decode(s).decode('utf-8', errors='replace')
    except:
        return s


def build_id_dictionary(gmd_path: str) -> dict:
    """ID 사전 빌드"""
    meta = parse_gmd_file(gmd_path)
    level_data = decode_level_data(meta['k4'])
    objects = parse_objects(level_data)
    
    # 텍스트 라벨이랑 일반 오브젝트 분리
    text_objs = [o for o in objects if o.get(1) == 914]
    non_text = [o for o in objects if o.get(1) != 914]
    
    # 라벨 위치 -> ID 번호 매핑
    label_positions = {}
    for t in text_objs:
        txt = decode_b64_text(t.get(31, ''))
        if txt.isdigit():
            label_positions[(t.get(2), t.get(3))] = int(txt)
    
    # 각 일반 오브젝트에 대해 가장 가까운 라벨 찾기
    id_dict = {}
    
    for obj in non_text:
        ox, oy = obj.get(2, 0), obj.get(3, 0)
        actual_id = obj.get(1)
        
        # 같은 X 근처(±60)에서 가장 가까운 라벨
        nearest_label = None
        nearest_dist = float('inf')
        for (lx, ly), label_num in label_positions.items():
            if abs(ox - lx) < 60:
                dist = abs(oy - ly)
                if dist < 200 and dist < nearest_dist:
                    nearest_dist = dist
                    nearest_label = label_num
        
        if nearest_label is None:
            continue
        
        # 같은 ID인지 검증 (라벨이랑 실제 ID 일치)
        if nearest_label != actual_id:
            # 결번이거나 변형일 수 있음 — 일단 라벨 기준
            pass
        
        # 사전에 추가
        if actual_id not in id_dict:
            id_dict[actual_id] = {
                'id': actual_id,
                'label': nearest_label,
                'keys': {},
                'sample_position': (ox, oy),
            }
        
        # 이 오브젝트의 모든 키 기록 (1, 2, 3은 ID/X/Y라 제외)
        for key, value in obj.items():
            if key in (1, 2, 3):
                continue
            if key not in id_dict[actual_id]['keys']:
                id_dict[actual_id]['keys'][key] = value
    
    return id_dict


def categorize_with_gmdkit(id_dict: dict) -> dict:
    """gmdkit 매핑이랑 합치기"""
    from gmdkit.mappings.obj_id import (
        collectible, modifier, orb, pad, portal, speed, trigger
    )
    
    # 카테고리별 ID 모으기
    categories = {
        'orb': {int(getattr(orb, a)): a for a in dir(orb) 
                if not a.startswith('_') and isinstance(getattr(orb, a), (int, float))},
        'pad': {int(getattr(pad, a)): a for a in dir(pad) 
                if not a.startswith('_') and isinstance(getattr(pad, a), (int, float))},
        'portal': {int(getattr(portal, a)): a for a in dir(portal) 
                   if not a.startswith('_') and isinstance(getattr(portal, a), (int, float))},
        'trigger': {int(getattr(trigger, a)): a for a in dir(trigger) 
                    if not a.startswith('_') and isinstance(getattr(trigger, a), (int, float))},
        'speed': {int(getattr(speed, a)): a for a in dir(speed) 
                  if not a.startswith('_') and isinstance(getattr(speed, a), (int, float))},
    }
    
    # 각 ID에 카테고리 + 이름 붙이기
    for oid, info in id_dict.items():
        for cat_name, cat_dict in categories.items():
            if oid in cat_dict:
                info['category'] = cat_name
                info['name'] = cat_dict[oid]
                break
        else:
            info['category'] = 'unknown'
            info['name'] = None
    
    return id_dict


if __name__ == "__main__":
    print("ID 사전 빌드 중...")
    id_dict = build_id_dictionary("Object_IDs_New.gmd")
    print(f"기본 사전: {len(id_dict)}개 ID")
    
    print("\ngmdkit 매핑 합치는 중...")
    id_dict = categorize_with_gmdkit(id_dict)
    
    # 카테고리별 통계
    from collections import Counter
    cat_count = Counter(info['category'] for info in id_dict.values())
    print("\n[카테고리별 분포]")
    for cat, n in cat_count.most_common():
        print(f"  {cat:15s}: {n}개")
    
    # 알려진 ID 샘플
    print("\n[알려진 ID 샘플]")
    known = [info for info in id_dict.values() if info['name']]
    for info in sorted(known, key=lambda x: x['id'])[:15]:
        keys_used = list(info['keys'].keys())
        print(f"  ID {info['id']:4d} [{info['category']:8s}] {info['name']:25s} 키: {keys_used[:5]}...")
    
    # 키 사용 통계 (모든 ID에서)
    all_keys = Counter()
    for info in id_dict.values():
        for k in info['keys']:
            all_keys[k] += 1
    
    print(f"\n[가장 많이 쓰이는 키 TOP 15]")
    for key, count in all_keys.most_common(15):
        print(f"  키 {key}: {count}개 ID에서 사용")
    
    # 저장
    serializable = {}
    for oid, info in id_dict.items():
        serializable[str(oid)] = {
            'id': info['id'],
            'label': info['label'],
            'category': info['category'],
            'name': info['name'],
            'keys': {str(k): v for k, v in info['keys'].items()},
            'sample_position': list(info['sample_position']),
        }
    
    with open('id_dictionary.json', 'w', encoding='utf-8') as f:
        json.dump(serializable, f, ensure_ascii=False, indent=2)
    print(f"\n→ id_dictionary.json 저장됨 ({len(serializable)}개 ID)")
