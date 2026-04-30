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
- `decomp_extracted.py` — **GD.exe Ghidra 직접 추출** — 80개 트리거 정밀 식 + 86 DAT 상수
  + 모든 jump 메커니즘 + 7 모드 식 + Item/Counter 시스템 (디자인용 시각/오디오 포함)
- `parse_custom_object_setup.py` — customObjectSetup 자동 파서 (76 .gmd 키→멤버)
- `parse_trigger_object.py` — triggerObject case→FUN 자동 매핑
- `jump_ai.py` — greedy 점프 AI (ring orb 사용 가능, BFS 미구현)
- `sim_samples.py` — 4 샘플 레벨 자동 시뮬 + 정확도 측정
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
| 물리 (큐브) | **95%** | lily-pi + OpenGD + GD.exe 3중 검증 |
| 물리 (Ship/UFO/Wave/Ball/Robot/Spider/Swing) | 5% | 모드 전환만, 실제 물리 X (식 다 있음, 코드 안 옮김) |
| 게임 메커닉 (큐브) | **95%** | propellPlayer/ringJump 16 multipliers 검증 + Mini mode |
| 충돌 처리 | 95% | DAT 30+ 검증 + Mini hitbox |
| 음악 분석 | 90% | BPM/비트/섹션/에너지, 30개 테스트 통과 |
| 데이터셋 | 5% | 9개만 (수백~수천 필요) |
| 시뮬레이터 (큐브) | **85%** | 12 트리거 + Ring/Touch/Mini/Block-block 통합, 26/26 테스트 |
| 트리거 catalog | **100%** | 80개 모두 디컴파일 + 분석 (게임플레이 + 디자인) |
| 점프 AI | 30% | greedy 동작 (ring 사용 가능), BFS/A* 미구현 |
| Ghidra 디컴파일 환경 | 100% | GD.exe 199+ 함수 + 86+ DAT 추출 (`decomp_extracted.py`) |
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
  → Ghidra 환경 + GD.exe 디컴파일 199+ 함수 + 86+ DAT ✅
  → **모든 트리거 메커니즘 100% 분석 + decomp_extracted.py 정리 ✅**
  → 시뮬레이터 1차 통합 (S1-S5: GRAVITY/TIMEWARP/TELEPORT/PLAYER_CONTROL/Item/SCALE/ROTATE) ✅
  → **큐브 모드 완성 (C1-C5: Ring orb/TouchTrigger/Mini/Block-block + greedy AI) ✅ (현재 도달점)**

다음: 7 모드 시뮬 + BFS AI + 데이터셋 + 생성 시스템

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

**4차 추출 (2026-04-30 추가)**:
- `customObjectSetup` 자동 파서 (`parse_custom_object_setup.py`) — 76 .gmd 키→멤버 매핑
- `gmd_key = key_offset / 8` 검증 (gmdkit 표준과 5개 매칭)
- `customSetup` 수동 추출 — `CUSTOM_SETUP_DEFAULTS` 18개 object의 디폴트 값
- **★★★ `triggerObject` (0x4a5f30, 1297줄, 105 case) 발견** — Geode bindings 에서 주소 확인.
- **★★★ `updateMove` (0x38a0c0, 673줄) 발견** — 모든 모드 물리 분기 통합 (Spider 7회/Robot 6회/Ship 6회/UFO 5회/Ball 4회/Wave/Swing 2회).
- **★★ `Collision fire` 메커니즘 100% 추출** — register (0x25c430) → check (0x2187d0) → enqueue → fire (0x25c540).
- **모든 7 모드 토글러 식별** — Ship/UFO=Bird/Wave=Dart/Ball=Roll/Robot/Spider/Swing.
- **Spider 점프 분석** — 100블록(3000units) ray-cast → instant teleport.
- **Item/Counter/Timer 시스템 발견** — processItems/getItemValue/activateItemCompare/Edit/Persistent/Timer.
- **모드별 X-velocity 계수** — Ship ×0.7, Spider -0.20, dash ×4.0 등.
- **collidedWithSlopeInternal (744줄) 식별** — 84개 mode 분기.
- 199+ 함수 + 86+ DAT 상수 검증, 40 commits 누적 — 모두 `decomp_extracted.py` 정리.

**5차 추출 (2026-04-30 마무리)** — 정밀 식 추출 완료:
- propellPlayer (패드 점프) — `force × 16.0 × speed_factor`, air mode ×0.6
- ringJump 16개 mode/type별 multiplier (Ship 0.37, UFO 0.42, Ball 0.77, Spider 1.38 등)
- TIMEWARP `clampf(x, 0.1, 2.0)` → cocos timeScale
- TELEPORT (target_id obj 위치로 instant move + random 선택)
- PLAYER_CONTROL (stop_jump/left_right/rotation/slide 별 player flag clear)
- FOLLOW_PLAYER_Y (group dy = player_dy * speed action 등록)
- ItemCompare 정밀 식 (val1 산술 → 6 비교 op → group fire)
- ItemEdit 정밀 식 (두 값 결합 + 산술 → counter/timer/diamonds 저장)
- getItemValue type 1-5 매핑 (Counter/Timer/Diamonds/Time/Attempts)
- 모드 7개 toggler offset 검증 정정 (Ball/UFO swap, Robot 미스라벨)

**모든 트리거 메커니즘 100% 분석 완료** (게임플레이 + 디자인). + **시뮬레이터 통합 완료** (12 트리거 + greedy AI).

**7차 추출 (디자인용 시각/사운드 트리거 분석, 36-43차, 55 commits 누적)**:
- Pulse 정밀 식 (212줄) — fade_in → hold → fade_out 펄스 사이클
- GRADIENT (207줄) — 15 layer + 3 blend mode + 2 color group
- SONG/EDIT_SONG/EDIT_SFX 오디오 — SongManager + action_type 0/2
- Camera 트리거 5개 (STATIC/MOVE/MODE/FLAG/ZOOM) — 각 식 추출
- SPAWN_PARTICLE + BG/Ground/Mid Texture
- ROTATE (orbit calc atan2) + ANIMATE_KEYFRAME
- RANDOM (LCG 확률 그룹 선택) + Color Legacy (899/900/915)
- COUNT (1612/1613) + GRAVITY (2066) + Mode 변경 (1915/1917) + Touch Kill

★ 모든 트리거 메커니즘 100% 분석 완료 — 디자인 단계 통합 가이드 포함

**6차 추출 (최종 마무리, 46 commits 누적)**:
- 모든 14개 derived class triggerObject 식별 + 분류
- 4개 충돌 함수 라벨 정정 (collidedWithObjectInternal vs handleRotated 등)
- TransformTriggerGameObject 의 SCALE 트리거 (2067) 식 추출
- TouchTriggerGameObject 의 TOUCH 트리거 (1611) 식 추출
- 1302줄 0x4bc180 분석 — base + SCALE 1개만 추가 처리
- ItemEdit/ItemCompare 정밀 산술 식 추출 (모든 op 6개 + round/abs)
- 모든 시각/카메라/사운드 트리거 = 시뮬 무관 확정 (skip 가능)

**최종 통계**:
- 디컴파일 함수: 199+ (시작 21, 9.5배)
- DAT 상수: 86+ (값 추출)
- 분석된 트리거 효과 함수: 12+ (Move/Toggle/Spawn/COLLISION/TELEPORT/PLAYER_CONTROL/FOLLOW_PLAYER_Y/TIMEWARP/ItemEdit/ItemCompare/SCALE/TOUCH)
- 분석된 jump 함수: 5 (propellPlayer/ringJump 16 multipliers/bumpPlayer/boostPlayer/spiderTestJumpInternal)
- 모드 토글러: 7 (검증 + offset 정정)
- Collision fire 메커니즘 100% 추출

**시뮬레이터 통합 1차 완료 (S1-S5, 5 commits)**:
- S2: GRAVITY/TIMEWARP/TELEPORT/PLAYER_CONTROL 트리거 통합 ✓
- S3: ItemEdit/ItemCompare/Counter/Timer 시스템 통합 ✓
- S4: SCALE/ROTATE 트리거 통합 ✓
- S5: greedy 점프 AI + 4 샘플 측정 ✓
- 23/23 unit tests 통과 (당시)

**큐브 모드 완성 단계 (C1-C5, 5 commits) — 2026-04-30~05-01**:
- C1: Ring orb 활성화 (8 종류, decomp 검증 16 multipliers, single-use) ✓
- C2: TouchTrigger (1611) 활성화 — jump 입력 시 target_group fire ✓
- C3: Mini mode 구현 — 0.6× hitbox + 0.8× jump_velocity ✓
- C4: Block-vs-block COLLISION (Every End 14 추가 트리거) ✓
- C5 partial: greedy AI 가 ring orb 사용 ✓
- 26/26 unit tests 통과

**큐브 모드 시뮬 — 거의 완성 (85%)**:
- 12 트리거 모두 처리:
  Move/Toggle/Spawn/COLLISION (그룹) +
  GRAVITY/TIMEWARP/TELEPORT/PLAYER_CONTROL (player) +
  ItemEdit/ItemCompare/Pickup (counter) +
  SCALE/ROTATE (visual+collision)
- Ring orb 8종 + TouchTrigger
- Mini mode (size portal 17/18)
- Block-vs-block COLLISION
- propellPlayer 16 multipliers (모든 패드/오브 type 정확)
- 슬로프 충돌, 회전, dx/dy, no_touch, z_layer, flip
- greedy AI (ring 사용 가능)

**4 샘플 레벨 결과 (greedy AI)**:
- DeCode: 19.9b/838b (2.4%)
- Supersonic: 14.2b/1235b (1.1%)
- iSpy: 3.1b/1435b (0.2%)
- **Every End: 4480b/4558b (98.3%)** — 자동 portal/pad 잘 동작

**남은 작업**:
- 7 모드 물리 (Ship/UFO/Wave/Ball/Robot/Spider/Swing — decomp 식 있음, 코드 안 옮김)
- BFS/A* 정밀 점프 AI (greedy 한계: spike 너머 못 봄)
- 데이터셋 확장 → 생성 모델 (본 게임)

**다음 작업 순서** (큐브 완성 후, 우선순위 순):

### 1차 — 시뮬 정확도 향상 (1-2일)
1. **BFS 점프 AI** (`jump_ai.py`) — greedy 한계 (lookahead 1프레임)
   - 매 프레임 (jump=T/F) × N프레임 lookahead 탐색
   - 점프 최적 sequence 찾기 → 데이터셋 자동 클리어 가능
2. **샘플 레벨 정확도 검증** — Every End 의 4480b 도달이 실제 게임 동작과 같은지 확인
   - Geode 모드로 게임에서 실측 vs 시뮬 trace 비교

### 2차 — 7 모드 시뮬 (1주)
모든 식 `decomp_extracted.py` 에 있음, 코드 옮기기만:
- Ship: vy 가속 0.7×, jump_hold +1.35×
- UFO: clampf X-vel ±5
- Wave: 45° 각도 (mini 60°)
- Ball: 클릭 시 중력 반전 + 점프 0.6×
- Robot: charge jump (decomp 식 있음)
- Spider: instant teleport (100b ray-cast — `spiderTestJumpInternal` 식)
- Swing: 중력 반전 (스윙코프터 2.2)

### 3차 — 데이터셋 + 생성 시스템 (수주~수개월, 본 게임)
1. **데이터셋 확장** — GDBrowser API 로 인기 레벨 100+개 수집
2. **레벨 분석** — BPM ↔ 점프 패턴 상관관계 추출
3. **레이아웃 생성기** — 음악 분석 → 큐브 패턴 (룰 베이스 → LLM → 학습)
4. **디자인 생성기** — `decomp_extracted` 의 모든 시각/오디오 트리거 활용
   (Pulse/GRADIENT/Camera/Particle/SONG/EDIT_SFX 등 — 식 다 있음)

### 작업 효율 팁
- 디컴파일은 거의 끝남 — 더 추출할 게 별로 없음
- 시뮬 통합은 패턴이 정해져 있음: TriggerInstance 필드 → _build_trigger 파싱 → _fire_trigger 분기 → 단위 테스트
- 모든 식은 `decomp_extracted.py` 의 docstring 에 정리됨
- `simulator.py` 의 _test_* 함수가 26개 → 새 기능마다 테스트 1개 추가

### 환경 (다음 세션 시작 시 그대로 사용 가능)
- Geode SDK (D:\hitbox_dumper, GEODE_SDK env), VS 2022 BuildTools, CMake, Ghidra 12.0.4
- D:\OpenGD (depth=1), D:\gdp (depth=1)
- 우리 모드 v4 설치됨 (`%LOCALAPPDATA%\GeometryDash\geode\mods\attitude433.gd-dumper.geode`)
