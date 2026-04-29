"""
.gmd 파일에서 오브젝트 다 뽑아내기 - 2단계
"""
from decode_gmd import parse_gmd_file, decode_level_data

# 자주 쓰는 오브젝트 ID 매핑
OBJECT_NAMES = {
    1: "기본 블록",
    8: "스파이크",
    13: "작은 스파이크",
    36: "점프 패드(노랑)",
    41: "점프 링(노랑)",
    1734: "삼각형 슬로프",
    1735: "사각형 슬로프", 
    1736: "사각형 슬로프(역)",
    3811: "장식?",
}

# 자주 쓰는 키 매핑
KEY_NAMES = {
    1: "ID",
    2: "X",
    3: "Y",
    6: "회전각",
    21: "주색상채널",
    22: "보조색상채널",
    155: "Z레이어",
    156: "Z순서",
}


def parse_objects(level_data: str) -> list[dict]:
    """
    레벨 데이터에서 오브젝트들 파싱
    """
    # 헤더 부분 건너뛰기 - 첫 번째 ; 이후가 오브젝트 영역
    if ';' not in level_data:
        return []
    
    objects_section = level_data.split(';', 1)[1]
    
    # ; 로 오브젝트 분할
    raw_objects = objects_section.split(';')
    
    objects = []
    for raw in raw_objects:
        if not raw.strip():
            continue
        
        # , 로 키-값 쌍 분할
        parts = raw.split(',')
        
        # 짝수 개여야 함 (키, 값, 키, 값...)
        if len(parts) % 2 != 0:
            continue
        
        obj = {}
        for i in range(0, len(parts), 2):
            try:
                key = int(parts[i])
                value = parts[i+1]
                # 숫자면 변환
                try:
                    value = float(value) if '.' in value else int(value)
                except ValueError:
                    pass
                obj[key] = value
            except (ValueError, IndexError):
                continue
        
        if obj:
            objects.append(obj)
    
    return objects


def summarize_level(filepath: str):
    """레벨 요약"""
    meta = parse_gmd_file(filepath)
    level_data = decode_level_data(meta['k4'])
    objects = parse_objects(level_data)
    
    print(f"\n{'='*60}")
    print(f"레벨: {meta.get('k2', '?')} (by {meta.get('k5', '?')})")
    print(f"{'='*60}")
    print(f"총 오브젝트 수: {len(objects)}")
    
    # 오브젝트 ID별 카운트
    from collections import Counter
    id_counts = Counter(obj.get(1) for obj in objects)
    
    print(f"\n[자주 쓴 오브젝트 TOP 10]")
    for obj_id, count in id_counts.most_common(10):
        name = OBJECT_NAMES.get(obj_id, f"ID {obj_id}")
        print(f"  {name:30s} : {count}개")
    
    # 처음 5개 오브젝트 자세히
    print(f"\n[처음 5개 오브젝트 상세]")
    for i, obj in enumerate(objects[:5]):
        print(f"\n  오브젝트 #{i+1}:")
        for key, value in obj.items():
            key_name = KEY_NAMES.get(key, f"키{key}")
            print(f"    {key_name} = {value}")
    
    # X좌표 범위
    x_coords = [obj.get(2, 0) for obj in objects if 2 in obj]
    if x_coords:
        print(f"\n[X좌표 범위]: {min(x_coords)} ~ {max(x_coords)}")
    
    return objects


if __name__ == "__main__":
    summarize_level("/home/claude/gmd_data/How2.gmd")
