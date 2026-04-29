# GD AI Level Generator

Geometry Dash 레벨을 AI가 생성하는 도구를 만드는 프로젝트.

## 최종 목표

음악을 입력하면 그에 맞는 플레이 가능한 GD 레벨을 생성한다.

## 큰 그림 (3단계 파이프라인)

### 1. 음악 분석
- BPM, 비트 위치, 섹션, 드롭, 에너지 곡선 추출
- 도구 후보: librosa

### 2. 레이아웃
- 음악 정보 받아서 게임플레이 뼈대 구성
- 게임플레이 오브젝트 + 게임플레이 트리거 (스피드/모드/중력 포털)
- 한 번에 통째로 X → 큰 뼈대 → 구간 → 디테일

### 3. 디자인
- 레이아웃 위에 시각 요소
- 블록 디자인, 색상, 시각 트리거 (Color/Pulse/Move)

## 핵심 원칙

- 레이아웃 먼저, 디자인 나중
- 단계별 점진 생성
- AI는 플레이 못 함 — 정량 검증만 가능
- MVP부터 (단순 큐브)

## 코드 파일

- `decode_gmd.py` — .gmd 디코딩
- `parse_objects.py` — 오브젝트 파싱
- `encode_gmd.py` — 데이터 → .gmd 인코딩
- `extract_id_dict.py` — Object_IDs_New.gmd에서 ID 사전 추출
- `merge_dictionaries.py` — 우리 사전 + OpenGD object.json 병합
- `visualize.py` — 레벨 시각화
- `test_roundtrip.py` — 왕복 검증
- `physics_constants.py` — 물리 상수 (큐브/쉽/볼/UFO/웨이브 등)
- `opengd_extracted.py` — OpenGD에서 추출한 게임 메커닉 데이터

## 데이터 파일

- `Object_IDs_New.gmd` — Colon이 만든 ID 정리 레벨
- `id_dictionary.json` — 우리 추출 사전 (4072개)
- `id_dictionary_merged.json` — OpenGD 병합본 (4076개, 텍스처+타입+라벨)
- `test_output.gmd` — 인코딩 테스트 결과 (게임에 import해서 동작 확인 가능)

## 데이터 형식

### .gmd 파일 구조
```
.gmd (XML 평문)
├── k1: 레벨 ID
├── k2: 레벨 이름
├── k5: 만든 사람
└── k4: 인코딩된 레벨 데이터 (Base64 + Gzip)
       └── 풀면:
           ├── 헤더 (kS38: 색상 채널)
           ├── 레벨 설정 (kA13, kA15...)
           └── 오브젝트 리스트
```

### 오브젝트 형식
- `,`로 키-값 쌍 구분, `;`로 오브젝트 구분
- 핵심 키: 1=ID, 2=X, 3=Y, 6=회전

### 단위
- 1 block (b) = 30 Delta units (.gmd 좌표 단위)
- 1 block (b) = 135 pixels (화면 렌더링)
- 60 FPS

## 작업 진행 상황

### 완성도 평가

| 영역 | 완성도 | 비고 |
|---|---|---|
| 입출력 (디코딩/인코딩) | 95% | 왕복 검증 4/4 통과 |
| ID 사전 | 90% | 4076개, GD 2.2 약 90% 커버 |
| 물리 (큐브/쉽) | 90% | lily-pi + OpenGD 교차검증 |
| 물리 (전체 모드) | 70% | 2.2 추가 모드 부분적 |
| 게임 메커닉 | 80% | 패드/오브/포털 정확 |
| 충돌 처리 | 75% | OpenGD 코드 기반 |
| 데이터셋 | 5% | 9개만 (수백~수천 필요) |
| 생성 시스템 | 0% | 아직 시작 안 함 |

### 완료된 거
- .gmd 디코딩/인코딩 (왕복 검증됨)
- 오브젝트 파싱 + 메타데이터
- ID 사전 4076개 (텍스처/타입/라벨/카테고리 통합)
- 큐브/쉽 정확한 물리 (lily-pi + OpenGD)
- 볼/UFO 정확한 물리 (OpenGD 코드)
- 점프 패드 5종 + 점프 오브 9종 정확한 동작
- 모드 전환 포털 7종, 부속 포털 다수
- 스피드 포털 5종 (x속도값)
- Easing 19종, 트리거 ID 15종
- GameObject 타입 39개 enum
- 충돌 시스템 (Outer/Inner bounds)
- 시각화 (색깔 박스)

### 부족한 거
- 2.2 신규 ID 약 460개 (게임 뜯어야 함)
- 트리거 65종 동작 (OpenGD 미구현)
- 로봇/스파이더/스웡 정확한 물리
- 학습용 데이터셋
- 음악 분석 모듈
- 시뮬레이터/검증기
- 생성 모델

## 다음 단계 (우선순위)

1. **시뮬레이터 (큐브 모드)** — 지금 있는 데이터로 충분
2. **데이터셋 확장** — GDBrowser API로 인기 레벨 수집
3. **음악 분석 모듈** — librosa
4. **레이아웃 생성** — 룰 베이스 → LLM 에이전트 → 학습
5. **디자인 생성** — 색상/장식 추가
6. **게임 뜯기** (필요시) — 2.2 신규 ID, 트리거 동작
   - Geode SDK + Show Hitboxes / Mega Hack 모드

## 출처

- **lily-pi/GeometryPhysics** — 큐브/쉽 정확한 물리 공식
- **OpenGD** (Open-GD/OpenGD) — GD 오픈소스 클론, 실제 게임 로직 코드
- **OpenGD-RL** — OpenGD에 강화학습 붙인 사례
- **DashBot 3.0** — 유전 알고리즘 봇
- **Object_IDs_New 레벨** (Colon, ID 99784974) — ID 라벨 사전
- **gmdkit** (PyPI) — 키/카테고리 매핑

## 환경

- Python 3
- 핵심 라이브러리: `gmdkit`, `matplotlib`
- 향후: librosa, PyTorch, Pillow
