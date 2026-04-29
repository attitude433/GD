"""
OpenGD object.json + 우리 id_dictionary.json 병합
→ 더 풍부한 통합 사전 생성
"""
import json

OBJECT_TYPE_NAMES = {
    0: 'Solid', 2: 'Hazard', 3: 'InvGravPortal', 4: 'NormGravPortal',
    5: 'ShipPortal', 6: 'CubePortal', 7: 'Decoration',
    8: 'YellowPad', 9: 'PinkPad', 10: 'GravityPad',
    11: 'YellowRing', 12: 'PinkRing', 13: 'GravityRing',
    14: 'InvMirrorPortal', 15: 'NormMirrorPortal', 16: 'BallPortal',
    17: 'RegSizePortal', 18: 'MiniPortal', 19: 'UfoPortal',
    20: 'Modifier', 22: 'SecretCoin', 23: 'DualPortal', 24: 'SoloPortal',
    25: 'Slope', 26: 'WavePortal', 27: 'RobotPortal', 28: 'TeleportPortal',
    29: 'GreenRing', 30: 'Collectible', 31: 'UserCoin', 32: 'DropRing',
    33: 'SpiderPortal', 34: 'RedPad', 35: 'RedRing', 36: 'CustomRing',
    37: 'DashRing', 38: 'GravityDashRing', 39: 'CollisionObject', 40: 'Special',
}


def merge():
    # 두 파일 로드
    with open('opengd/OpenGD-main/Content/Custom/object.json') as f:
        opengd_data = json.load(f)
    
    try:
        with open('id_dictionary.json') as f:
            our_dict = json.load(f)
    except FileNotFoundError:
        our_dict = {}
    
    merged = {}
    all_ids = set(opengd_data.keys()) | set(our_dict.keys())
    
    for sid in all_ids:
        info = {'id': int(sid)}
        
        # OpenGD 데이터 (텍스처, 타입, 레이어)
        if sid in opengd_data:
            o = opengd_data[sid]
            info['texture'] = o.get('texture_name')
            info['object_type'] = o.get('object_type')
            info['object_type_name'] = OBJECT_TYPE_NAMES.get(o.get('object_type'))
            info['z_layer'] = o.get('default_z_layer')
            info['z_order'] = o.get('default_z_order')
            info['primary_channel'] = o.get('default_primary_channel')
            info['secondary_channel'] = o.get('default_secondary_channel')
            info['has_children'] = bool(o.get('children'))
        
        # 우리 데이터 (라벨, gmdkit 카테고리, 사용 키)
        if sid in our_dict:
            o = our_dict[sid]
            info['label'] = o.get('label')
            info['gmdkit_category'] = o.get('category')
            info['gmdkit_name'] = o.get('name')
            info['used_keys'] = list(o.get('keys', {}).keys())
            info['sample_position'] = o.get('sample_position')
        
        info['has_opengd_data'] = sid in opengd_data
        info['has_our_data'] = sid in our_dict
        
        merged[sid] = info
    
    return merged


if __name__ == "__main__":
    merged = merge()
    
    # 통계
    only_opengd = sum(1 for v in merged.values() if v['has_opengd_data'] and not v['has_our_data'])
    only_ours = sum(1 for v in merged.values() if v['has_our_data'] and not v['has_opengd_data'])
    both = sum(1 for v in merged.values() if v['has_opengd_data'] and v['has_our_data'])
    
    print(f"총 ID: {len(merged)}")
    print(f"  양쪽 다: {both}개")
    print(f"  OpenGD만: {only_opengd}개")
    print(f"  우리만: {only_ours}개")
    
    # 카테고리별 통계 (병합 결과)
    from collections import Counter
    types = Counter()
    for info in merged.values():
        types[info.get('object_type_name', 'unknown')] += 1
    
    print(f"\n[object_type 분포 TOP 10]")
    for name, n in types.most_common(10):
        print(f"  {name}: {n}개")
    
    # 잘 알려진 ID 샘플
    print(f"\n[알려진 ID 샘플 (텍스처 + 카테고리)]")
    for sid in ['1', '8', '12', '35', '36', '47', '101', '141', '660', '1734']:
        if sid in merged:
            info = merged[sid]
            tex = info.get('texture', '?')
            otype = info.get('object_type_name', '?')
            cat = info.get('gmdkit_category', '?')
            print(f"  ID {sid:>4}: type={otype:<15} cat={cat:<10} tex={tex}")
    
    # 저장
    with open('id_dictionary_merged.json', 'w', encoding='utf-8') as f:
        json.dump(merged, f, ensure_ascii=False, indent=2)
    print(f"\n→ id_dictionary_merged.json 저장 ({len(merged)}개 ID)")
