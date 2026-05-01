# data/

게임 코드 원본 dump + JSON으로 정제한 결과물.

## ✅ 검증 완료 영역 (다음 세션 AI 가 다시 손대지 말 것)

| 영역 | 상태 | 마스터 파일 |
|---|---|---|
| **오브젝트 ID 사전** | ✅ 4092/4092 (100%) — GD 2.2081 ObjectToolbox 와 1:1 일치 | `id_dictionary_merged.json` (루트) |
| **오브젝트 히트박스** | ✅ 4074/4092 직접 검증 + 4 표준 패턴 + 14 RobTop bug | `data/json/hitbox_complete.json` |

각 마스터 파일의 `_meta` 필드에 검증 방법 + 후임자 메시지 명시됨. 사용자가 명시적으로
재검증 요청하지 않으면 이 두 파일 손대지 말 것.

자세한 검증 로그는 루트 `CLAUDE.md` 의 "✅ 검증 완료 영역" 섹션 참조.

---

## 구조

```
프로젝트 루트/
├── (코드가 직접 읽는 JSON 5개 — 절대 옮기지 말 것)
│   ├── id_dictionary.json              extract_id_dict.py 의 출력
│   ├── id_dictionary_merged.json       마스터 ID 사전 4092개
│   ├── hitboxes.json                   simulator.py 가 읽음
│   ├── custom_object_setup_extracted.json
│   └── trigger_case_dispatch.json
└── data/
    ├── README.md
    ├── game_code/                     ← Ghidra 디컴파일 결과
    │   ├── decomp/                    .c (204) + .txt (15)
    │   └── ghidra_scripts/            .java 추출 스크립트 (33)
    └── json/                          ← 코드가 안 쓰는 분석 결과 7개
        ├── binary_id_textures.json
        ├── customSetup_per_id_v2.json
        ├── hitbox_complete.json
        ├── hitbox_from_plist.json
        ├── level_start.json
        ├── opengd_hitbox_table.json
        └── triggers.json
```

## 정책 (정리됨, 2026-05-01)

- **루트**: simulator/decoder/visualize 등 Python 코드가 직접 read/write 하는 JSON 만
- **data/json/**: 분석 결과 (코드는 안 읽지만 사람·외부 도구가 참조)
- 같은 파일이 두 곳에 동시 존재하지 않음 (중복 0)

## 루트 JSON (5개) — 코드 의존성

| 파일 | 엔트리 | reader | writer |
|---|---|---|---|
| `id_dictionary.json` | 4072 | merge_dictionaries.py, visualize.py | extract_id_dict.py |
| `id_dictionary_merged.json` | **4092 (마스터)** | gmd_decoder.py, trigger_catalog.py | merge_dictionaries.py |
| `hitboxes.json` | 3744 | simulator.py, debug_visualize_raw.py | (Geode dumper) |
| `custom_object_setup_extracted.json` | 17 case | decomp_extracted.py, parse_custom_object_setup.py | parse_custom_object_setup.py |
| `trigger_case_dispatch.json` | 14 case | parse_trigger_object.py | (수동) |

## data/json/ (7개) — 분석 결과

| 파일 | 엔트리 | 출처 | 내용 |
|---|---|---|---|
| `binary_id_textures.json` | 4092 (id, tex) | Ghidra `ObjectToolbox::init` | id → 텍스처 매핑 (authoritative) |
| `hitbox_from_plist.json` | 4092 ID | GD `Resources/*.plist` 41 시트 | sprite frame size (visible bbox) |
| `hitbox_complete.json` | **4092 ID** | runtime + opengd + plist + customSetup | **통합본 — 93.7% 정확** |
| `opengd_hitbox_table.json` | 435 hb + 38 radii | OpenGD `LongData.cpp` | 포털/패드/오브 하드코딩 |
| `customSetup_per_id_v2.json` | 352 ID | GameObject + Enhanced + Effect customSetup | 멤버 offset → value (raw decomp) |
| `triggers.json` | 330 트리거 | Geode runtime dumper | 트리거 속성 dump |
| `level_start.json` | 7 필드 | Geode dumper | player1 시작 좌표 + ground_y |

## data/game_code/

| 폴더 | 개수 | 용량 | 내용 |
|---|---|---|---|
| `decomp/` | 223 | 2.1 MB | Ghidra 12.0.4 디컴파일 .c + DAT 상수 .txt |
| `ghidra_scripts/` | 33 | 0.1 MB | analyzeHeadless 용 .java 스크립트 |

원본 위치: `D:\GhidraProjects\` (Ghidra 프로젝트). 여기 있는 건 git 추적용 사본.

## 추출 메타

- GD.exe: **2.2081** (Steam, 2026-04-11 빌드)
- Ghidra: 12.0.4
- Geode SDK: 5.6.1
- OpenGD: depth=1 clone @ `D:\OpenGD`
- 작업 기간: 2026-04-30 ~ 2026-05-01

## 갱신 절차

**ID 사전**: `python extract_id_dict.py` → `merge_dictionaries.py` → `id_dictionary_merged.json` 갱신

**hitbox 새로 빌드**:
1. dumper 로 `hitboxes.json` 갱신 (게임 플레이)
2. plist 다시 파싱 (GD 업데이트 시)
3. customSetup 다시 디컴파일 (GD 업데이트 시)
4. Python 통합 스크립트 → `hitbox_complete.json` 재생성

**Ghidra 디컴파일**:
1. `data/game_code/ghidra_scripts/` 의 .java 수정
2. `D:\GhidraProjects\` 에 복사
3. `analyzeHeadless.bat /d/GhidraProjects GD -process GeometryDash.exe -noanalysis -scriptPath /d/GhidraProjects -postScript YourScript.java`
4. `D:\GhidraProjects\decomp\` 결과 → `data/game_code/decomp/` 복사
