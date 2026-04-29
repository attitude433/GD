"""
역방향: 데이터 → .gmd 파일

흐름:
1. 오브젝트 리스트 → 오브젝트 문자열
2. + 헤더/설정 → 레벨 데이터 텍스트
3. → Gzip 압축 → Base64 인코딩 (URL-safe)
4. → XML plist에 k4로 넣기
5. → .gmd 파일 저장
"""
import base64
import gzip
import io
from pathlib import Path


def objects_to_string(objects: list[dict]) -> str:
    """오브젝트 리스트를 GD 형식 문자열로"""
    parts = []
    for obj in objects:
        # 키 순서대로 (1=ID 먼저, 그다음 2=X, 3=Y, 나머지)
        items = []
        # ID, X, Y 먼저
        for key in (1, 2, 3):
            if key in obj:
                items.append(f"{key},{obj[key]}")
        # 나머지 키 (정렬해서)
        for key in sorted(obj.keys()):
            if key in (1, 2, 3):
                continue
            value = obj[key]
            # float인데 정수 값이면 정수로
            if isinstance(value, float) and value.is_integer():
                value = int(value)
            items.append(f"{key},{value}")
        parts.append(",".join(items))
    return ";".join(parts) + ";"


def build_level_data(objects: list[dict], header: str = None, settings: str = None) -> str:
    """
    레벨 데이터 텍스트 만들기
    
    구조: 헤더,설정;오브젝트1;오브젝트2;...
    """
    if header is None:
        # 기본 색상 채널 (최소한)
        header = "kS38,1_255_2_255_3_255_4_-1_6_1000_7_1_15_1_18_0_8_1|"
    
    if settings is None:
        # 기본 레벨 설정
        settings = "kA13,0,kA15,0,kA16,0,kA14,,kA6,0,kA7,0,kA17,0,kA18,0,kS39,0,kA2,0,kA3,1,kA8,0,kA4,0,kA9,0,kA10,0,kA11,0"
    
    objects_str = objects_to_string(objects)
    return f"{header},{settings};{objects_str}"


def encode_level_data(level_data: str) -> str:
    """레벨 데이터 → Base64+Gzip 문자열"""
    # Gzip 압축
    buf = io.BytesIO()
    with gzip.GzipFile(fileobj=buf, mode='wb') as f:
        f.write(level_data.encode('utf-8'))
    compressed = buf.getvalue()
    
    # Base64 (URL-safe)
    encoded = base64.b64encode(compressed).decode('ascii')
    encoded = encoded.replace('+', '-').replace('/', '_')
    
    return encoded


def build_gmd_xml(level_name: str, encoded_data: str, 
                  level_id: int = 0, author: str = "AI",
                  description: str = "") -> str:
    """완성된 .gmd XML 만들기"""
    # 설명 Base64 인코딩
    desc_b64 = base64.b64encode(description.encode('utf-8')).decode('ascii')
    
    xml = f"""<?xml version="1.0"?><plist version="1.0" gjver="2.0"><dict><k>kCEK</k><i>4</i><k>k2</k><s>{level_name}</s><k>k4</k><s>{encoded_data}</s><k>k3</k><s>{desc_b64}</s><k>k5</k><s>{author}</s><k>k13</k><t /><k>k21</k><i>2</i><k>k16</k><i>1</i><k>k80</k><i>0</i><k>k50</k><i>35</i><k>k47</k><t /><k>k48</k><i>{len(encoded_data)}</i></dict></plist>"""
    return xml


def save_gmd(filepath: str, objects: list[dict], 
             level_name: str = "AI Generated", 
             author: str = "AI",
             header: str = None, settings: str = None):
    """오브젝트 리스트를 .gmd 파일로 저장"""
    level_data = build_level_data(objects, header, settings)
    encoded = encode_level_data(level_data)
    xml = build_gmd_xml(level_name, encoded, author=author)
    Path(filepath).write_text(xml, encoding='utf-8')


# 테스트: 간단한 레벨 만들기
if __name__ == "__main__":
    # 기본 큐브 레벨: 바닥 블록 + 스파이크 + 점프 패드
    test_objects = []
    
    # 바닥 블록 깔기 (X=15부터 30 간격으로)
    for i in range(20):
        test_objects.append({
            1: 1,        # 기본 블록
            2: 15 + i*30, # X
            3: 15,        # Y (바닥)
        })
    
    # 스파이크 몇 개
    for x in [195, 285, 405]:
        test_objects.append({
            1: 8,    # 스파이크
            2: x,
            3: 45,   # 블록 위
        })
    
    # 점프 패드
    test_objects.append({
        1: 35,   # 노란 점프 패드
        2: 555,
        3: 35,
    })
    
    print(f"오브젝트 {len(test_objects)}개 생성")
    
    save_gmd("test_output.gmd", test_objects, 
             level_name="Test AI Level",
             author="ClaudeAI")
    
    print("→ test_output.gmd 저장됨")
    
    # 왕복 검증: 다시 읽어서 똑같이 나오는지
    print("\n[왕복 검증]")
    from decode_gmd import parse_gmd_file, decode_level_data
    from parse_objects import parse_objects
    
    meta = parse_gmd_file("test_output.gmd")
    print(f"  레벨 이름: {meta.get('k2')}")
    print(f"  만든 사람: {meta.get('k5')}")
    
    decoded = decode_level_data(meta['k4'])
    parsed = parse_objects(decoded)
    print(f"  파싱된 오브젝트 수: {len(parsed)}")
    
    if len(parsed) == len(test_objects):
        print("  ✓ 오브젝트 수 일치")
    else:
        print(f"  ✗ 불일치 (원본 {len(test_objects)} vs 파싱 {len(parsed)})")
    
    # 첫 오브젝트 확인
    if parsed:
        print(f"  첫 오브젝트: {parsed[0]}")
