"""
.gmd 파일 디코더 - 1단계
파일을 읽고, 레벨 데이터를 추출하고, 디코딩한다
"""
import base64
import zlib
import re
from pathlib import Path


def decode_level_data(encoded_data: str) -> str:
    """
    .gmd 파일 안의 레벨 데이터(k4 값)를 디코딩한다.
    
    인코딩 순서: Base64(URL-safe) -> Gzip
    (CCLocalLevels.dat과 달리 XOR 단계는 없음)
    """
    # URL-safe Base64를 일반 Base64로
    fixed = encoded_data.replace('-', '+').replace('_', '/')
    
    # Base64 디코딩
    decoded_bytes = base64.b64decode(fixed)
    
    # Gzip 풀기
    decompressed = zlib.decompress(decoded_bytes, zlib.MAX_WBITS | 16)
    
    return decompressed.decode('utf-8')


def parse_gmd_file(filepath: str) -> dict:
    """
    .gmd 파일에서 메타데이터랑 레벨 데이터 추출
    """
    content = Path(filepath).read_text(encoding='utf-8')
    
    # 정규식으로 k1, k2, k4 등의 값 추출
    # 형식: <k>키이름</k><타입>값</타입>
    metadata = {}
    
    # 문자열 값 (s 태그)
    for match in re.finditer(r'<k>(k\w+)</k><s>([^<]*)</s>', content):
        metadata[match.group(1)] = match.group(2)
    
    # 정수 값 (i 태그)  
    for match in re.finditer(r'<k>(k\w+)</k><i>([^<]*)</i>', content):
        metadata[match.group(1)] = int(match.group(2))
    
    return metadata


# 실제로 돌려보기
if __name__ == "__main__":
    filepath = "/home/claude/gmd_data/How2.gmd"
    
    print("=" * 60)
    print(f"파일: {filepath}")
    print("=" * 60)
    
    # 1. 메타데이터 파싱
    meta = parse_gmd_file(filepath)
    
    print("\n[메타데이터]")
    for key, value in meta.items():
        if key == 'k4':
            print(f"  {key}: <레벨 데이터, {len(value)}자 - 인코딩됨>")
        else:
            print(f"  {key}: {value}")
    
    # 2. 레벨 데이터 디코딩
    if 'k4' in meta:
        print("\n[레벨 데이터 디코딩 시도]")
        try:
            level_data = decode_level_data(meta['k4'])
            print(f"  성공! 길이: {len(level_data)}자")
            print(f"\n[처음 500자]")
            print(level_data[:500])
        except Exception as e:
            print(f"  실패: {e}")
