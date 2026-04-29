# GD AI Level Generator

Geometry Dash 레벨을 AI가 생성하는 도구를 만드는 프로젝트.

## 최종 목표

음악을 입력하면 그에 맞는 플레이 가능한 GD 레벨을 생성한다.

## 큰 그림 (3단계 파이프라인)

### 1. 음악 분석 ✅ 완료
- BPM, 비트 위치, 섹션, 에너지 곡선 추출 구현
- librosa 멀티-전략 앙상블 BPM (극단값 억제 prior, 9곡 테스트 7/9 정확)
- `analyze_music.py` — CLI: `python analyze_music.py 곡.mp3`

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
- `gdp_extracted.py` — camila314/gdp GD 2.2 디컴파일 결과 (물리 상수, 슬로프/충돌 로직)
- `bindings_extracted.py` — geode-sdk/bindings 2.2081 (PlayerObject/GameObject 멤버 구조, enum)
- `analyze_music.py` — 음악 분석 (BPM/비트/섹션/에너지, librosa 기반)

## 데이터 파일

- `Object_IDs_New.gmd` — Colon이 만든 ID 정리 레벨
- `id_dictionary.json` — 우리 추출 사전 (4072개)
- `id_dictionary_merged.json` — OpenGD 병합본 (4076개, 텍스처+타입+라벨)
- `test_output.gmd` — 인코딩 테스트 결과 (게임에 import해서 동작 확인 가능)
- `samples/music/` — 테스트용 음악 파일
- `samples/results/` — 음악 분석 결과 JSON

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
| 충돌 처리 | 80% | 슬로프 로직 디컴파일 확보, 오브젝트별 히트박스 수치만 미확인 |
| 음악 분석 | 90% | BPM/비트/섹션/에너지, 30개 테스트 통과 |
| 데이터셋 | 5% | 9개만 (수백~수천 필요) |
| 시뮬레이터 | 0% | 오브젝트 히트박스 데이터 필요 |
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
- GameObject 타입 47개 enum (2.2 신규 8개 포함, bindings 기준)
- 충돌 시스템 (Outer/Inner bounds, 플레이어 기준)
- 슬로프 Y좌표 계산 함수 (`slopeYPos`) — GD 2.2 디컴파일 결과 그대로
- 충돌 snap_up 임계값, 비행 속도 제한 등 물리 상수 확정 (gdp_extracted)
- PlayerObject 멤버 변수 전체 구조 (bindings_extracted)
- 시각화 (색깔 박스)
- **음악 분석 모듈** (`analyze_music.py`)
  - BPM 자동 감지 (librosa 멀티-전략, 극단값 억제 prior)
  - 비트 타임스탬프, 섹션, RMS/저음/고음 에너지
  - CLI: `python analyze_music.py 곡.mp3 [--bpm N]`
  - 9곡 테스트 7/9 정확 (틀리면 --bpm으로 수동 지정)
  - 테스트 파일: `samples/music/`, 결과: `samples/results/`

### 부족한 거
- **오브젝트별 히트박스 수치** ← 시뮬레이터 블로커, 집에서 게임 뜯어야 함
  - 블록(ID 1), 스파이크(ID 8) 등 m_objectRect 실제 값
  - `tools/hitbox_dumper/` Geode 모드 작성 완료 → 빌드 후 게임 실행하면 추출됨
  - 출력: `hitboxes.json` (히트박스) + `triggers.json` (트리거 속성)
- 2.2 신규 ID 약 460개
- 트리거 65종 동작 (triggers.json 뽑으면 상당수 해결)
- 로봇/스파이더/스웡 정확한 물리
- 학습용 데이터셋
- 시뮬레이터/검증기
- 생성 모델

## 다음 단계 (우선순위)

1. **게임 뜯기 (집)** — `tools/hitbox_dumper/` 빌드 → GD 실행 → hitboxes.json + triggers.json 추출
   - Geode SDK 설치 → cmake 빌드 → .geode 파일 모드 폴더에 복사 → Object_IDs_New 레벨 입장
2. **시뮬레이터 (큐브 모드)** — 히트박스 데이터 확보 후 진행
3. **데이터셋 확장** — GDBrowser API로 인기 레벨 수집
4. **레이아웃 생성** — 룰 베이스 → LLM 에이전트 → 학습
5. **디자인 생성** — 색상/장식 추가

## 출처

- **lily-pi/GeometryPhysics** — 큐브/쉽 정확한 물리 공식
- **OpenGD** (Open-GD/OpenGD) — GD 오픈소스 클론, 실제 게임 로직 코드
- **camila314/gdp** — GD 2.2 바이너리 디컴파일 (물리 상수, 슬로프/충돌 로직 21개 함수)
- **geode-sdk/bindings** — GD 2.2081 클래스 구조/멤버 변수 (PlayerObject, GameObject 등)
- **OpenGD-RL** — OpenGD에 강화학습 붙인 사례
- **DashBot 3.0** — 유전 알고리즘 봇
- **Object_IDs_New 레벨** (Colon, ID 99784974) — ID 라벨 사전
- **gmdkit** (PyPI) — 키/카테고리 매핑

## 환경

- Python 3.14
- 핵심 라이브러리: `gmdkit`, `matplotlib`, `librosa`, `scipy`, `numpy`
- 향후: PyTorch, Pillow
