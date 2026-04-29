"""
실제 레벨 왕복 테스트:
원본 .gmd → 디코딩 → 인코딩 → 다시 디코딩 → 일치?
"""
from decode_gmd import parse_gmd_file, decode_level_data
from parse_objects import parse_objects
from encode_gmd import save_gmd, build_level_data, encode_level_data
import os


def roundtrip_test(input_path: str):
    name = os.path.basename(input_path).replace('.gmd', '')
    print(f"\n{'='*60}")
    print(f"테스트: {name}")
    print('='*60)
    
    # 1. 원본 디코딩
    meta = parse_gmd_file(input_path)
    original_data = decode_level_data(meta['k4'])
    original_objs = parse_objects(original_data)
    print(f"원본 오브젝트: {len(original_objs)}개")
    
    # 2. 다시 인코딩
    out_path = f"/tmp/roundtrip_{name}.gmd"
    save_gmd(out_path, original_objs, 
             level_name=meta.get('k2', name),
             author=meta.get('k5', 'unknown'))
    
    # 3. 다시 디코딩
    new_meta = parse_gmd_file(out_path)
    new_data = decode_level_data(new_meta['k4'])
    new_objs = parse_objects(new_data)
    print(f"왕복 후 오브젝트: {len(new_objs)}개")
    
    # 4. 비교
    if len(new_objs) != len(original_objs):
        print(f"✗ 개수 불일치!")
        return False
    
    # 키-값 단위로 비교
    mismatches = 0
    for i, (orig, new) in enumerate(zip(original_objs, new_objs)):
        # 키 집합 비교
        if set(orig.keys()) != set(new.keys()):
            mismatches += 1
            if mismatches <= 3:
                print(f"  오브젝트 #{i}: 키 다름")
                print(f"    원본 키: {sorted(orig.keys())}")
                print(f"    새 키:  {sorted(new.keys())}")
            continue
        
        # 값 비교 (float 오차 고려)
        for k in orig:
            v1, v2 = orig[k], new[k]
            if isinstance(v1, (int, float)) and isinstance(v2, (int, float)):
                if abs(float(v1) - float(v2)) > 0.001:
                    mismatches += 1
                    break
            elif str(v1) != str(v2):
                mismatches += 1
                break
    
    if mismatches == 0:
        print(f"✓ 완벽 일치 ({len(original_objs)}개)")
        return True
    else:
        print(f"△ {mismatches}개 오브젝트 불일치 ({len(original_objs)-mismatches}/{len(original_objs)} 일치)")
        return False


if __name__ == "__main__":
    test_files = [
        "/home/claude/gmd_data/How2.gmd",
        "/home/claude/gmd_data/keyboard beta.gmd",
        "/home/claude/gmd_data/small wierd challang.gmd",
        "/home/claude/Object_IDs_New.gmd",
    ]
    
    results = []
    for f in test_files:
        if os.path.exists(f):
            results.append(roundtrip_test(f))
    
    print(f"\n{'='*60}")
    print(f"결과: {sum(results)}/{len(results)} 통과")
