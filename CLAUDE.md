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
- `decomp_extracted.py` — **GD.exe Ghidra 직접 추출** (collidedWithObjectVariant + landing
  + DAT 상수 30+ + PlayerObject 멤버 오프셋 검증, 2026-04-30 갱신)
- `analyze_music.py` — 음악 분석 (BPM/비트/섹션/에너지, librosa 기반)
- `simulator.py` — 시뮬레이터 (Player·물리·AABB·가상 floor·시뮬 루프 + Toggle/Move/Spawn
  + 회전(axis-aligned)·스케일·flip·no_touch·z_layer 처리. 17 단위 테스트 통과)
- `gmd_decoder.py` — `.gmd` 트리거 인스턴스 디코더 (gmdkit 매핑 활용, 사람이 읽는 형식)
- `trigger_logic.py` — OpenGD 소스에서 정밀 추출한 트리거·충돌 동작 정의:
  PlayLayer 충돌 디스패치 룰, propellPlayer/ringJump 식, collidedWithObject 정밀
  (mod tolerance 포함), EffectGameObject::triggerActivated 분기, Easing 19종 함수
- `trigger_catalog.py` — GD 2.2 80개 트리거 catalog (id/이름/카테고리/sim_relevant/
  description/gmdkit_module/effect_func). gmdkit 키 매핑 자동 import. 6 verified / 74 inferred
- `debug_visualize.py`, `debug_visualize_raw.py` — Every End 시각화 디버그 (시뮬 시점 vs raw .gmd)

## 데이터 파일

- `Object_IDs_New.gmd` — Colon이 만든 ID 정리 레벨
- `id_dictionary.json` — 우리 추출 사전 (4072개)
- `id_dictionary_merged.json` — OpenGD 병합본 (4076개, 텍스처+타입+라벨)
- `test_output.gmd` — 인코딩 테스트 결과 (게임에 import해서 동작 확인 가능)
- `hitboxes.json` — 3744개 오브젝트 (rect + GameObjectType + flags + slope/surface 속성)
- `triggers.json` — 트리거 330개 속성 (카탈로그라 대부분 default)
- `level_start.json` — GD 큐브 디폴트 시작 좌표(0,105) + 가상 floor(y=0)
- `samples/music/` — 테스트용 음악 파일
- `samples/*.gmd` — 시뮬 검증용 4개 레벨:
  - `Every End.gmd` (MindCap, 4560b, 326K obj, 트리거 10K — 시각 헤비)
  - `DeCode.gmd` (Rek3dge, 829b, 12K obj, 트리거 305 — 정적 위주)
  - `Supersonic.gmd` (ZenthicAlpha, 1235b, 21K obj — 모드/패드/오브 풍부)
  - `iSpyWithMyLittleEye.gmd` (Voxicat, 1436b, 42K obj, 트리거 8K — 트리거 헤비)
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
| 충돌 처리 | 90% | 슬로프 로직 + 오브젝트 히트박스 수치 확보 (3744개) |
| 음악 분석 | 90% | BPM/비트/섹션/에너지, 30개 테스트 통과 |
| 데이터셋 | 5% | 9개만 (수백~수천 필요) |
| 시뮬레이터 | 60% | 큐브+OpenGD 정밀+회전/스케일/no_touch/z_layer/flip 적용. 트리거 동작 깊이 부족 |
| 트리거 catalog | 70% | 80개 분류·키매핑. 6 verified / 74 inferred. 동작 함수 3개만 구현 |
| Ghidra 디컴파일 환경 | 100% | GD.exe 분석 완료, 37 함수 + 30 DAT 상수 (D:\GhidraProjects\decomp/) |
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
- **오브젝트 히트박스 + 분류 추출** (Geode 5.6.1 모드, `tools/hitbox_dumper/`)
  - rect (object/outer) + GameObjectType + flags(trigger/decoration/passable/startPos/invisible)
    + slope(dir/uphill/hazard) + surface(ice/grip/noStick/noBoost) 다 dump
  - PlayLayer setup 시 player1 시작좌표 + ground_y + StartPos 정보도 dump (`level_start.json`)
  - 결과: `hitboxes.json`, `triggers.json`, `level_start.json` (전부 루트)
  - 빌드는 D:\hitbox_dumper에서 (한국어 경로 → Codegen 인코딩 이슈 회피)
- **시뮬레이터 큐브 MVP + 트리거 표면 구현** (`simulator.py`)
  - Player + 큐브 물리 (lily-pi b/s 단위) + AABB 충돌 + GameObjectType 기반 분류
  - 가상 floor (y=0) + GD 디폴트 시작 (0, 105) + 추락사
  - 공간 인덱스 (x 정렬 + bisect 윈도우) — 19828 오브젝트 60초 시뮬 0.13s
  - **트리거 시스템**: TriggerInstance + 그룹 lookup + X 기반 활성화 (once/multi/spawn)
    + Toggle/Move(instant·duration 보간)/Spawn chain 효과
  - 단위 테스트 12/12 통과
  - **한계 (큰 단추 안 끼움)**: 트리거 동작이 표면적 — gmdkit 키 매핑 + 단순 효과만.
    OpenGD/gdp 디컴파일에서 진짜 동작 (`triggerObject`, `processTriggers`,
    `collidedWithObject`, easing 정확한 식, Move의 lock_player_x 의미,
    Collision 트리거의 block_a/block_b 룰, Camera/Player Control 등) 미추출.
    Every End 시작에 Collision/Move 트리거 30개+ 발동되는데 매칭/처리 못해서
    "점프 한 번 없이 4480블록 진행" 같은 비현실 결과.
- **`.gmd` 디코더** (`gmd_decoder.py`)
  - gmdkit 매핑 (79개 트리거 종류) 활용해서 raw 키-값 → human-readable
  - `decode_object`, `format_object`, `classify` 함수
  - 사용 예: `[ID 901] Move (trigger) @ (1875, 105) duration=2.0 target_id=15 ...`
- **음악 분석 모듈** (`analyze_music.py`)
  - BPM 자동 감지 (librosa 멀티-전략, 극단값 억제 prior)
  - 비트 타임스탬프, 섹션, RMS/저음/고음 에너지
  - CLI: `python analyze_music.py 곡.mp3 [--bpm N]`
  - 9곡 테스트 7/9 정확 (틀리면 --bpm으로 수동 지정)
  - 테스트 파일: `samples/music/`, 결과: `samples/results/`

### 부족한 거
- 2.2 신규 ID 약 460개 (Object_IDs_New에 안 깔린 것들)
- 트리거 65종 실제 사용값 (Object_IDs_New 카탈로그는 default라 의미 없음 → 실 레벨에서 따로 추출 필요)
- 로봇/스파이더/스웡 정확한 물리
- 학습용 데이터셋
- 시뮬레이터/검증기
- 생성 모델

## 다음 단계 (우선순위)

**중요한 깨달음**: 시뮬 = 맵 동작 + player 물리. player 물리부터 만들고 표면 트리거를
끼워 넣는 식으론 실 레벨 못 풀음. 맵 동작(트리거/패드/오브/포털)의 **진짜 동작 정의**가
1차 작업이고, 시뮬은 그 위에 얹는 것.

1. **트리거·메커니즘 동작 정의 완성 (1차)** — OpenGD/gdp 디컴파일에서 정밀 추출:
   - 트리거 처리 함수 (`triggerObject`, `processTriggers`, `bumpPlayer`,
     `propellPlayer`, `ringJump`, `boostPlayer` — bindings_extracted 의 시그니처 참조)
   - 충돌 처리 (`collidedWithObject`, `collidedWithSlope`, `handleRotatedObjectCollision`)
   - Collision 트리거의 block_a/block_b 매칭 룰
   - Move 트리거의 easing/duration/lock_player_x 정확한 의미
   - Camera 트리거가 player 물리에 영향 주는지 여부
   - 패드/오브/포털 효과의 정확한 수식
2. **시뮬에 통합** — `simulator.py` 의 표면 트리거 구현을 진짜 동작으로 교체
3. **검증기** — BFS/A* 탐색으로 자동 점프 시퀀스 찾기
4. **데이터셋 확장** — GDBrowser API로 인기 레벨 수집
5. **레이아웃 생성** — 룰 베이스 → LLM 에이전트 → 학습
6. **디자인 생성** — 색상/장식 추가 (시각 트리거 Color/Pulse/Tint/BG)

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

- Python 3.11 (실측)
- 핵심 라이브러리: `gmdkit` (PyPI 0.4.0 — `.gmd` 키 매핑 79개 트리거 종류 커버),
  `matplotlib`, `librosa`, `scipy`, `numpy`
- 향후: PyTorch, Pillow

## 다음 세션 진입점

### 현재 상태 (요약)

진행 흐름:
- 음악 분석 ✅ → 게임 데이터 추출(hitboxes/level_start) ✅ → 시뮬레이터 큐브 MVP ✅
  → 트리거 표면 구현(Toggle/Move/Spawn) ✅ → OpenGD 정밀 동작 통합(`trigger_logic.py`) ✅
  → 회전/스케일/flip/no_touch/z_layer 적용 ✅ → 트리거 catalog 80개(`trigger_catalog.py`) ✅
  → Ghidra 환경 + GD.exe 디컴파일 21 함수 ✅
  → **3차 추출 ✅ — 37 함수 + 30 DAT 상수 + `decomp_extracted.py` 정리 (현재 도달점)**

핵심 깨달음 — RobTop GD 코드는 **wrapper-heavy 구조**:
- `EffectGameObject::triggerActivated` (0x4a8790, 11줄) = wrapper. 멤버 플래그만 set
- `processCommands` (0x239c60) → `processTriggers` (0x231d10) → `FUN_1402338e0` (0x2338e0)
  ★ **이건 INPUT 이벤트 dispatcher (jump/left/right press/release) 였음 — 80 트리거 dispatch 아님**
- `collidedWithObject` (0x3919b0) = wrapper → `collidedWithObjectInternal` (0x38f140) = wrapper
  → **`collidedWithObjectVariant` (0x391a70, 1234줄) = 진짜 충돌 처리** ⭐
- 80개 트리거 진짜 case 분기는 **`customObjectSetup` (0x4a8ad0, .gmd 키 → 멤버 매핑)** +
  `updateGroups`/`updateColors`/`updateMoveTriggers` 안에 분산 — **단일 점이 아님**

3차 추출에서 검증 (`decomp_extracted.py` 에 정리):
- DAT 상수 30+개 (collision tolerance 5/6/10/15, landing velY threshold ±1/±4/±8/±14,
  X-displacement 7.5/150/300/450, position snap 1/1000, etc.)
- collidedWithObjectVariant 충돌 룰: tolerance 결정 → velY 계산 → 분기 (ground/ceiling/squish/kill)
- landGround event broadcast 로직 (Y velocity → event 1~5, X displacement → event 0x41~0x44)
- PlayerObject 멤버 오프셋 25개 검증 (m_isUpsideDown=0x9bf, m_yVelocity=0x134 등)
- Trigger queue 구조 2개 (input action queue + effect object queue)

즉 한 함수 디컴파일로 끝나지 않고 **함수 chain 5~10단계 + 각 함수 1000+줄 분석** 해야
진짜 동작 정확히 추출됨. 80개 트리거 + 모든 메커니즘 정밀화 = **수주~수개월 작업**.

### 다음 세션에서 할 일 (디컴파일 분석 계속)

`D:\GhidraProjects\` 에 Ghidra 12.0.4 + GD.exe 분석 + **37 함수** 디컴파일 결과.
- `D:\GhidraProjects\GD\GeometryDash.exe` — 분석 끝난 Ghidra 프로젝트 (재분석 불필요)
- `D:\GhidraProjects\DumpFunctions.java` / `DumpFunctions2.java` / `DumpFunctions3.java` —
  함수 리스트 추가 후 헤드리스 실행 (`/d/ghidra_12.0.4_PUBLIC/support/analyzeHeadless.bat`)
- `D:\GhidraProjects\DumpDATs.java` — DAT 상수 값만 dump (float/double/int/bytes)
- `D:\GhidraProjects\decomp\*.c` — 37 함수 디컴파일 결과
- `D:\GhidraProjects\decomp\_DAT_constants.txt` / `_DAT_constants_v2.txt` — 30+ DAT 값
- `decomp_extracted.py` — Python 측 정리 결과 (시뮬레이터에서 import 해서 쓸 수 있음)

**다음 작업 순서** (재정렬 — 3차 추출 후 깨달음 반영):

1. **`customObjectSetup` (2200줄) 의 case 0x716/0x717/0x718/0x778/0x779/0x78b-0x78f/0x812
   분석** — 각 트리거의 .gmd 키 → 멤버 offset 매핑. 패턴이 일정 (atoi/atof로 string parse,
   member에 store) 이라 자동 추출 스크립트 작성 가능.
2. **`updateGroups` (629줄) 분석** — Move 트리거 효과의 실제 적용. group iterate +
   position 적분 (easing) 이 여기일 것.
3. **`updateColors` (661줄) 분석** — Color/Pulse/BG/Tint 트리거 효과. LayerGradient 처리.
4. **`collisionInner_2137f0` (564줄) 분석** — 매 프레임 collision detection 메인 루프.
   collidedWithObjectVariant 호출자 — 어떤 오브젝트 vs player 호출하는지 룰.
5. **`PlayerObject_savePositionState_396650` (183줄), `postCollideTeardown_3916e0` (112줄)
   분석** — 충돌 후 처리.
6. 추출 결과 → `decomp_extracted.py` 확장 + `trigger_catalog.py` verified 표시
7. 최종 `simulator.py` 에 통합 → 시뮬 정확도 측정 (4 샘플 레벨 비교)

**작업 효율 팁**:
- 1234줄·2200줄 다 한 번에 안 읽고, **switch/case 자동 추출** + DAT 상수 + sub-function 호출만
  grep 으로 추출해서 구조 파악
- DAT_xxx 상수 값은 `DumpDATs.java` 에 주소 추가하면 한 번에 다 dump (float/double/i32/bytes)
- 멤버 변수 오프셋은 `decomp_extracted.PLAYER_OFFSETS` 참조 (25개 검증)
- 함수 chain 따라갈 때 새 wrapper 발견하면 `DumpFunctions3.java` 의 TARGETS 에 추가
- 한 라운드 헤드리스 실행 = 약 60초 (이미 분석된 프로젝트 재사용)

**대안 — Geode 모드 실측 (병행 가능)**:
디컴파일이 너무 깊으면 모드에 매 프레임 player.x/y/vy + 활성 트리거 + 그룹 상태 dump
추가 → 게임 30초 → 진짜 동작 데이터 직접 측정. 한 세션 안에 큰 진전.

### 환경 (다음 세션 시작 시 그대로 사용 가능)
- Geode SDK (D:\hitbox_dumper, GEODE_SDK env), VS 2022 BuildTools, CMake, Ghidra 12.0.4
- D:\OpenGD (depth=1), D:\gdp (depth=1)
- 우리 모드 v4 설치됨 (`%LOCALAPPDATA%\GeometryDash\geode\mods\attitude433.gd-dumper.geode`)
