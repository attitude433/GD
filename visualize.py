"""
레벨 시각화 - 텍스처 없이 색깔 박스로
"""
import json
import matplotlib.pyplot as plt
from matplotlib.patches import Rectangle, RegularPolygon
from decode_gmd import parse_gmd_file, decode_level_data
from parse_objects import parse_objects


# 카테고리별 색깔
CATEGORY_COLORS = {
    'block': '#666666',      # 회색
    'spike': '#cc3333',      # 빨강
    'portal': '#3366cc',     # 파랑
    'pad': '#ffcc00',        # 노랑
    'orb': '#ff66cc',        # 분홍
    'speed': '#66cc66',      # 초록
    'trigger': '#9966cc',    # 보라
    'slope': '#888888',      # 어두운 회색
    'unknown': '#cccccc',    # 연한 회색
}


def categorize_id(obj_id: int, id_dict: dict = None) -> str:
    """ID를 카테고리로 분류"""
    # 잘 알려진 ID들
    if obj_id == 1:
        return 'block'
    if obj_id in (8, 9, 39, 103, 392):  # 스파이크 종류
        return 'spike'
    if obj_id in (1734, 1735, 1736, 1737):  # 슬로프
        return 'slope'
    
    # 사전에서 찾기
    if id_dict and str(obj_id) in id_dict:
        cat = id_dict[str(obj_id)].get('category', 'unknown')
        if cat != 'unknown':
            return cat
    
    return 'unknown'


def visualize_level(gmd_path: str, output_path: str = None, 
                    width: int = 30, height: int = 6):
    """레벨을 그림으로"""
    meta = parse_gmd_file(gmd_path)
    level_data = decode_level_data(meta['k4'])
    objects = parse_objects(level_data)
    
    # ID 사전 로드 (있으면)
    id_dict = None
    try:
        with open('id_dictionary.json') as f:
            id_dict = json.load(f)
    except FileNotFoundError:
        pass
    
    # 좌표 수집
    xs = [o.get(2, 0) for o in objects if 2 in o]
    ys = [o.get(3, 0) for o in objects if 3 in o]
    
    if not xs:
        print("좌표 정보가 있는 오브젝트 없음")
        return
    
    fig, ax = plt.subplots(figsize=(width, height))
    
    # 카테고리별로 그리기
    drawn = {}
    for obj in objects:
        x = obj.get(2)
        y = obj.get(3)
        oid = obj.get(1)
        if x is None or y is None or oid is None:
            continue
        
        cat = categorize_id(oid, id_dict)
        color = CATEGORY_COLORS.get(cat, '#cccccc')
        
        # 카테고리별로 모양 다르게
        if cat == 'spike':
            # 삼각형
            tri = RegularPolygon((x, y), numVertices=3, radius=15,
                                 orientation=0, facecolor=color, edgecolor='black', linewidth=0.3)
            ax.add_patch(tri)
        elif cat in ('portal', 'pad', 'orb'):
            # 원
            circle = plt.Circle((x, y), 12, facecolor=color, edgecolor='black', linewidth=0.5)
            ax.add_patch(circle)
        elif cat == 'trigger':
            # 작은 사각형 (반투명)
            rect = Rectangle((x-10, y-10), 20, 20, facecolor=color, 
                            edgecolor='black', linewidth=0.3, alpha=0.5)
            ax.add_patch(rect)
        else:
            # 기본 사각형
            rect = Rectangle((x-15, y-15), 30, 30, facecolor=color, 
                            edgecolor='black', linewidth=0.3)
            ax.add_patch(rect)
        
        drawn[cat] = drawn.get(cat, 0) + 1
    
    # 범위 설정
    margin = 50
    ax.set_xlim(min(xs) - margin, max(xs) + margin)
    ax.set_ylim(min(ys) - margin, max(ys) + margin)
    ax.set_aspect('equal')
    ax.set_facecolor('#1a1a2e')  # GD 어두운 배경 느낌
    ax.grid(True, alpha=0.1)
    
    # 제목
    name = meta.get('k2', 'Unknown')
    author = meta.get('k5', '?')
    ax.set_title(f"{name} (by {author}) - {len(objects)} objects", 
                 color='white', fontsize=12)
    ax.tick_params(colors='gray')
    
    # 범례
    legend_items = [(cat, cnt) for cat, cnt in drawn.items()]
    legend_items.sort(key=lambda x: -x[1])
    legend_str = " | ".join(f"{c}:{n}" for c, n in legend_items[:6])
    ax.text(0.5, -0.05, legend_str, transform=ax.transAxes, 
            ha='center', color='gray', fontsize=8)
    
    plt.tight_layout()
    
    if output_path:
        plt.savefig(output_path, dpi=100, bbox_inches='tight', 
                    facecolor='#0f0f1e')
        print(f"→ {output_path}")
        plt.close()
    else:
        plt.show()


if __name__ == "__main__":
    # 작은 레벨 몇 개 시각화
    import os
    levels = [
        ("/home/claude/gmd_data/How2.gmd", "/home/claude/viz_How2.png"),
        ("/home/claude/gmd_data/keyboard beta.gmd", "/home/claude/viz_keyboard.png"),
        ("/home/claude/gmd_data/small wierd challang.gmd", "/home/claude/viz_small.png"),
        ("/home/claude/test_output.gmd", "/home/claude/viz_test.png"),
    ]
    
    for gmd, png in levels:
        if os.path.exists(gmd):
            print(f"\n시각화: {os.path.basename(gmd)}")
            visualize_level(gmd, png)
