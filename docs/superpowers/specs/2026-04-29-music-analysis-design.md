# Music Analysis Module Design
**Date:** 2026-04-29  
**File:** `analyze_music.py`

## 목적

음악 파일을 입력받아 GD 레벨 생성 파이프라인이 사용할 수 있는 구조화된 음악 데이터를 추출한다.

## 의존성

- `librosa` — 스펙트럼 분석, 에너지 곡선, 섹션 감지, BPM/비트 트래킹
- `scipy` — 피크 감지 (드롭)
- `numpy` — 수치 연산

> **참고:** madmom은 Python 3.14 미지원으로 제외. BPM 앙상블을 librosa 멀티-전략으로 대체.

## 모듈 구조

```
analyze_music.py
├── analyze(filepath, start=None, end=None, bpm=None) → dict   # 메인 진입점
├── _detect_bpm(y, sr)           # librosa + madmom 앙상블 BPM 감지
├── _detect_beats(y, sr, bpm)    # 비트 타임스탬프 추출
├── _detect_sections(y, sr)      # 구조 변화점 감지 + 라벨 추정
├── _detect_drops(energy, sr)    # 드롭 위치 (에너지 급등 피크)
├── _extract_energy(y, sr)       # RMS / 저음 / 고음 에너지 곡선
├── _detect_onsets(y, sr)        # 온셋 타임스탬프 + 강도
└── save_json(analysis, path)    # JSON 저장
```

CLI:
```
python analyze_music.py song.mp3 [--start 10] [--end 120] [--bpm 174] [--out result.json]
```

## 출력 데이터 구조

```json
{
  "meta": {
    "filepath": "song.mp3",
    "duration": 212.4,
    "start": 10.0,
    "end": 120.0
  },
  "bpm": {
    "value": 174.0,
    "source": "madmom",
    "candidates": [87.0, 174.0, 174.5]
  },
  "beats": [0.34, 0.69, 1.03],
  "sections": [
    {"start": 0.0,   "end": 14.2,  "label": "intro",   "energy_mean": 0.12},
    {"start": 14.2,  "end": 62.0,  "label": "buildup", "energy_mean": 0.45},
    {"start": 62.0,  "end": 126.0, "label": "drop",    "energy_mean": 0.89}
  ],
  "drops": [
    {"time": 62.0, "intensity": 0.94}
  ],
  "energy": {
    "times": [0.0, 0.02, 0.04],
    "rms":    [0.12, 0.13, 0.14],
    "bass":   [0.08, 0.09, 0.10],
    "treble": [0.05, 0.06, 0.07]
  },
  "onsets": {
    "times":    [0.34, 0.69],
    "strength": [0.8, 0.6]
  }
}
```

`sections[].label` 은 자동 추정값이므로 JSON에서 직접 수정 가능하다.

## BPM 앙상블 로직

1. `librosa.beat.beat_track()` default → `tempo1`
2. `librosa.beat.tempo()` (tempogram 기반) → `tempo2`
3. 두 값 각각 절반/그대로/두배 → 후보 풀 최대 6개 (20~300 BPM 필터)
4. 각 후보를 비트 그리드로 변환, 온셋 타임스탬프와 alignment 스코어 계산
5. 스코어 최고 후보 채택, `source: "librosa"` 로 기록
6. `--bpm` 인자 지정 시 전 과정 건너뛰고 `source: "user"` 로 기록

## 섹션 감지 로직

1. `librosa.segment.recurrence_matrix()` 로 구조 변화점 후보 추출
2. RMS 에너지 변화량 병행 계산
3. 두 결과가 동의하거나 에너지 변화가 threshold 초과인 지점을 변화점으로 확정
4. 각 섹션 평균 에너지 기반 라벨 자동 추정:
   - `energy < 0.20` + 처음/끝 → `"intro"` / `"outro"`
   - `energy 0.20~0.60`, 상승 추세 → `"buildup"`
   - `energy > 0.70` → `"drop"`
   - 나머지 → `"verse"` / `"chorus"` (에너지 순위 기반)

## 드롭 감지 로직

1. RMS 에너지 곡선에서 `scipy.signal.find_peaks()` 로 피크 감지
2. `prominence` 기준으로 주요 피크만 추림 (노이즈 제거)
3. 직전 2초 대비 에너지가 급등한 피크만 드롭으로 분류
4. `intensity` = 피크 에너지 / 전체 최대 에너지 (0~1 정규화)

## 에너지 주파수 분리

- **bass**: 20~250 Hz (킥/베이스)
- **treble**: 4000 Hz~ (하이햇/심벌)
- `librosa.effects.preemphasis` + 밴드패스 필터로 분리 후 RMS 계산

## start/end 처리

`librosa.load(filepath, offset=start, duration=end-start)` 로 트리밍.  
지정하지 않으면 전체 파일 사용.

## 테스트 기준

- BPM 정확도: 실제 BPM ±2 이내
- 드롭 감지: 주요 드롭 누락 없음 (false negative 0)
- 왕복 검증: JSON 저장 후 로드 시 수치 동일
