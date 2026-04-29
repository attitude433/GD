# Music Analysis Module Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** `analyze_music.py` — 음악 파일에서 BPM/비트/섹션/드롭/에너지를 추출해 dict와 JSON으로 반환하는 독립 모듈 구현

**Architecture:** librosa로 스펙트럼/에너지/섹션 분석, madmom으로 BPM/비트 트래킹, 두 결과를 온셋 alignment 스코어로 앙상블. 모든 내부 함수는 순수 함수(y, sr 입력 → dict 출력), `analyze()`가 조합해 최종 결과 반환.

**Tech Stack:** Python 3, librosa, madmom, scipy, numpy, soundfile(테스트용)

---

## 파일 구조

| 파일 | 역할 |
|------|------|
| `analyze_music.py` | 메인 모듈 (전체 구현) |
| `tests/test_analyze_music.py` | 단위/통합 테스트 |
| `requirements.txt` | 의존성 목록 |

---

### Task 1: 의존성 설치 및 테스트 scaffold

**Files:**
- Create: `tests/test_analyze_music.py`
- Create: `requirements.txt`

- [ ] **Step 1: 의존성 설치**

```bash
pip install librosa madmom scipy numpy soundfile
```

Expected: 오류 없이 설치 완료

- [ ] **Step 2: madmom import 확인**

```bash
python -c "import madmom; print(madmom.__version__)"
```

Expected: 버전 출력 (예: `0.16.1`)

- [ ] **Step 3: `tests/` 디렉토리 생성**

```bash
mkdir tests
```

- [ ] **Step 4: 테스트 scaffold + 합성 오디오 헬퍼 작성**

`tests/test_analyze_music.py`:

```python
import numpy as np
import pytest
import json


def make_beat_audio(bpm: float = 120.0, duration: float = 10.0, sr: int = 22050):
    """BPM이 정확히 주어진 합성 오디오 생성 (테스트용)."""
    t = np.linspace(0, duration, int(sr * duration), endpoint=False)
    y = (0.2 * np.sin(2 * np.pi * 440 * t)).astype(np.float32)
    beat_interval = 60.0 / bpm
    beat_samples = [int(bt * sr) for bt in np.arange(0, duration, beat_interval)]
    decay = np.exp(-np.arange(200) / 30).astype(np.float32)
    for idx in beat_samples:
        end = min(idx + 200, len(y))
        y[idx:end] += 0.8 * decay[:end - idx]
    return y, sr


def make_drop_audio(drop_at: float = 5.0, duration: float = 12.0, sr: int = 22050):
    """특정 시점에 에너지가 급등하는 합성 오디오."""
    y, _ = make_beat_audio(bpm=128.0, duration=duration, sr=sr)
    drop_idx = int(drop_at * sr)
    burst_len = int(0.5 * sr)
    end = min(drop_idx + burst_len, len(y))
    y[drop_idx:end] += 2.0
    return np.clip(y, -1.0, 1.0), sr
```

- [ ] **Step 5: 테스트 파일 실행 확인**

```bash
python -m pytest tests/test_analyze_music.py -v
```

Expected: `no tests ran` 또는 `0 passed`

- [ ] **Step 6: requirements.txt 작성**

```
librosa
madmom
scipy
numpy
soundfile
```

- [ ] **Step 7: 커밋**

```bash
git add tests/test_analyze_music.py requirements.txt
git commit -m "test: add test scaffold and synthetic audio helpers"
```

---

### Task 2: 에너지 추출 (`_extract_energy`)

**Files:**
- Create: `analyze_music.py`
- Modify: `tests/test_analyze_music.py`

- [ ] **Step 1: 실패하는 테스트 작성**

`tests/test_analyze_music.py` 에 추가:

```python
from analyze_music import _extract_energy


def test_extract_energy_keys():
    y, sr = make_beat_audio(bpm=120.0, duration=5.0)
    result = _extract_energy(y, sr)
    assert set(result.keys()) == {"times", "rms", "bass", "treble"}


def test_extract_energy_lengths_match():
    y, sr = make_beat_audio(bpm=120.0, duration=5.0)
    result = _extract_energy(y, sr)
    n = len(result["times"])
    assert len(result["rms"]) == n
    assert len(result["bass"]) == n
    assert len(result["treble"]) == n


def test_extract_energy_normalized():
    y, sr = make_beat_audio(bpm=120.0, duration=5.0)
    result = _extract_energy(y, sr)
    assert 0.0 <= max(result["rms"]) <= 1.0
    assert 0.0 <= max(result["bass"]) <= 1.0
    assert 0.0 <= max(result["treble"]) <= 1.0


def test_extract_energy_times_monotone():
    y, sr = make_beat_audio(bpm=120.0, duration=5.0)
    result = _extract_energy(y, sr)
    times = result["times"]
    assert all(times[i] < times[i + 1] for i in range(len(times) - 1))
```

- [ ] **Step 2: 테스트 실행 (실패 확인)**

```bash
python -m pytest tests/test_analyze_music.py -v
```

Expected: `ImportError: cannot import name '_extract_energy'`

- [ ] **Step 3: `analyze_music.py` 생성 + `_extract_energy` 구현**

```python
"""
GD 음악 분석 모듈
음악 파일 → BPM/비트/섹션/드롭/에너지 추출 → dict + JSON
"""

import json
import numpy as np
import librosa
from scipy.signal import butter, sosfilt, find_peaks
from madmom.features.beats import RNNBeatProcessor
import madmom.audio.signal as madmom_signal


HOP_LENGTH = 512


def _bandpass(y: np.ndarray, sr: int, low_hz: float, high_hz: float) -> np.ndarray:
    nyq = sr / 2.0
    sos = butter(4, [low_hz / nyq, high_hz / nyq], btype='band', output='sos')
    return sosfilt(sos, y)


def _highpass(y: np.ndarray, sr: int, low_hz: float) -> np.ndarray:
    nyq = sr / 2.0
    sos = butter(4, low_hz / nyq, btype='high', output='sos')
    return sosfilt(sos, y)


def _normalize(arr: np.ndarray) -> np.ndarray:
    """0~1 min-max 정규화. 전부 0이면 그대로 반환."""
    mx = float(arr.max())
    if mx == 0:
        return arr
    return arr / mx


def _extract_energy(y: np.ndarray, sr: int) -> dict:
    """RMS / 저음(20-250Hz) / 고음(4kHz+) 에너지 곡선 추출."""
    rms = librosa.feature.rms(y=y, hop_length=HOP_LENGTH)[0]
    times = librosa.times_like(rms, sr=sr, hop_length=HOP_LENGTH)

    y_bass = _bandpass(y, sr, 20.0, 250.0)
    rms_bass = librosa.feature.rms(y=y_bass, hop_length=HOP_LENGTH)[0]

    y_treble = _highpass(y, sr, 4000.0)
    rms_treble = librosa.feature.rms(y=y_treble, hop_length=HOP_LENGTH)[0]

    return {
        "times":  times.tolist(),
        "rms":    _normalize(rms).tolist(),
        "bass":   _normalize(rms_bass).tolist(),
        "treble": _normalize(rms_treble).tolist(),
    }
```

- [ ] **Step 4: 테스트 통과 확인**

```bash
python -m pytest tests/test_analyze_music.py -v
```

Expected: 4개 PASS

- [ ] **Step 5: 커밋**

```bash
git add analyze_music.py tests/test_analyze_music.py
git commit -m "feat: add _extract_energy with bass/treble band separation"
```

---

### Task 3: 온셋 감지 (`_detect_onsets`)

**Files:**
- Modify: `analyze_music.py`
- Modify: `tests/test_analyze_music.py`

- [ ] **Step 1: 실패하는 테스트 작성**

```python
from analyze_music import _detect_onsets


def test_detect_onsets_keys():
    y, sr = make_beat_audio(bpm=120.0, duration=5.0)
    result = _detect_onsets(y, sr)
    assert set(result.keys()) == {"times", "strength"}


def test_detect_onsets_lengths_match():
    y, sr = make_beat_audio(bpm=120.0, duration=5.0)
    result = _detect_onsets(y, sr)
    assert len(result["times"]) == len(result["strength"])


def test_detect_onsets_detects_beats():
    """120 BPM, 10초 → 적어도 15개 이상 온셋 감지."""
    y, sr = make_beat_audio(bpm=120.0, duration=10.0)
    result = _detect_onsets(y, sr)
    assert len(result["times"]) >= 15


def test_detect_onsets_strength_normalized():
    y, sr = make_beat_audio(bpm=120.0, duration=5.0)
    result = _detect_onsets(y, sr)
    assert all(0.0 <= s <= 1.0 for s in result["strength"])
```

- [ ] **Step 2: 테스트 실행 (실패 확인)**

```bash
python -m pytest tests/test_analyze_music.py::test_detect_onsets_keys -v
```

Expected: `ImportError: cannot import name '_detect_onsets'`

- [ ] **Step 3: `_detect_onsets` 구현 추가 (`analyze_music.py`)**

```python
def _detect_onsets(y: np.ndarray, sr: int) -> dict:
    """온셋 타임스탬프 + 정규화된 강도 추출."""
    onset_env = librosa.onset.onset_strength(y=y, sr=sr, hop_length=HOP_LENGTH)
    onset_frames = librosa.onset.onset_detect(
        onset_envelope=onset_env, sr=sr, hop_length=HOP_LENGTH, backtrack=True
    )
    onset_times = librosa.frames_to_time(onset_frames, sr=sr, hop_length=HOP_LENGTH)
    strength = onset_env[onset_frames]
    return {
        "times":    onset_times.tolist(),
        "strength": _normalize(strength).tolist(),
    }
```

- [ ] **Step 4: 테스트 통과 확인**

```bash
python -m pytest tests/test_analyze_music.py -v
```

Expected: 전체 PASS

- [ ] **Step 5: 커밋**

```bash
git add analyze_music.py tests/test_analyze_music.py
git commit -m "feat: add _detect_onsets"
```

---

### Task 4: BPM 앙상블 감지 (`_detect_bpm`)

> **변경:** madmom이 Python 3.14 미지원으로 librosa 단독 멀티-전략 앙상블로 대체.
> beat_track (default) + tempogram 피크 + 절반/두배 후보 → onset alignment 스코어로 최선 선택.

**Files:**
- Modify: `analyze_music.py`
- Modify: `tests/test_analyze_music.py`

- [ ] **Step 1: 실패하는 테스트 작성**

```python
from analyze_music import _detect_bpm, _detect_onsets


def test_detect_bpm_keys():
    y, sr = make_beat_audio(bpm=120.0, duration=10.0)
    onset_times = _detect_onsets(y, sr)["times"]
    result = _detect_bpm(y, sr, onset_times)
    assert set(result.keys()) == {"value", "source", "candidates"}


def test_detect_bpm_source_valid():
    y, sr = make_beat_audio(bpm=120.0, duration=10.0)
    onset_times = _detect_onsets(y, sr)["times"]
    result = _detect_bpm(y, sr, onset_times)
    assert result["source"] in ("librosa", "user")


def test_detect_bpm_accuracy_120():
    """120 BPM 합성 오디오에서 ±2 이내로 감지."""
    y, sr = make_beat_audio(bpm=120.0, duration=20.0)
    onset_times = _detect_onsets(y, sr)["times"]
    result = _detect_bpm(y, sr, onset_times)
    assert abs(result["value"] - 120.0) <= 2.0, f"Got {result['value']}"


def test_detect_bpm_accuracy_174():
    """174 BPM 합성 오디오에서 ±2 이내로 감지."""
    y, sr = make_beat_audio(bpm=174.0, duration=20.0)
    onset_times = _detect_onsets(y, sr)["times"]
    result = _detect_bpm(y, sr, onset_times)
    assert abs(result["value"] - 174.0) <= 2.0, f"Got {result['value']}"


def test_detect_bpm_user_override():
    """user_bpm 지정 시 source='user', 값 그대로 반환."""
    y, sr = make_beat_audio(bpm=120.0, duration=10.0)
    onset_times = _detect_onsets(y, sr)["times"]
    result = _detect_bpm(y, sr, onset_times, user_bpm=174.0)
    assert result["value"] == 174.0
    assert result["source"] == "user"
```

- [ ] **Step 2: 테스트 실행 (실패 확인)**

```bash
python -m pytest tests/test_analyze_music.py::test_detect_bpm_keys -v
```

Expected: `ImportError: cannot import name '_detect_bpm'`

- [ ] **Step 3: `_detect_bpm` 구현 추가 (`analyze_music.py`)**

`analyze_music.py` 상단 import에서 madmom 관련 줄을 제거하고 아래 함수들을 추가:

```python
def _bpm_alignment_score(bpm: float, onset_times: list, duration: float) -> float:
    """주어진 BPM이 온셋 타임스탬프와 얼마나 잘 맞는지 0~1 스코어."""
    if bpm <= 0 or not onset_times:
        return 0.0
    beat_interval = 60.0 / bpm
    beats = np.arange(0, duration + beat_interval, beat_interval)
    scores = []
    for onset in onset_times:
        nearest = beats[np.argmin(np.abs(beats - onset))]
        distance = abs(onset - nearest)
        scores.append(max(0.0, 1.0 - 2.0 * distance / beat_interval))
    return float(np.mean(scores))


def _detect_bpm(
    y: np.ndarray,
    sr: int,
    onset_times: list,
    user_bpm: float = None,
) -> dict:
    """librosa 멀티-전략 앙상블 BPM 감지 (절반/두배 오류 보정 포함)."""
    if user_bpm is not None:
        return {"value": float(user_bpm), "source": "user", "candidates": [float(user_bpm)]}

    duration = len(y) / sr

    # 전략 1: beat_track default
    tempo1, _ = librosa.beat.beat_track(y=y, sr=sr, hop_length=HOP_LENGTH)
    tempo1 = float(np.atleast_1d(tempo1)[0])

    # 전략 2: tempogram 피크 (주기 성분에서 직접 추출)
    oenv = librosa.onset.onset_strength(y=y, sr=sr, hop_length=HOP_LENGTH)
    tempogram = librosa.feature.tempogram(onset_envelope=oenv, sr=sr, hop_length=HOP_LENGTH)
    tempo2 = float(np.atleast_1d(
        librosa.beat.tempo(onset_envelope=oenv, sr=sr, hop_length=HOP_LENGTH)
    )[0])

    # 후보 풀: 두 전략 각각의 절반/그대로/두배
    raw = {tempo1, tempo2}
    all_candidates = []
    for t in raw:
        all_candidates += [t / 2, t, t * 2]
    all_candidates = [b for b in all_candidates if 20 <= b <= 300]

    scores = {b: _bpm_alignment_score(b, onset_times, duration) for b in all_candidates}
    best_bpm = max(scores, key=scores.get)

    return {
        "value":      round(best_bpm, 2),
        "source":     "librosa",
        "candidates": [round(b, 2) for b in sorted(set(all_candidates))],
    }
```

- [ ] **Step 4: 테스트 통과 확인**

```bash
python -m pytest tests/test_analyze_music.py -v
```

Expected: 전체 PASS

- [ ] **Step 5: 커밋**

```bash
git add analyze_music.py tests/test_analyze_music.py
git commit -m "feat: add _detect_bpm with librosa multi-strategy ensemble"
```

---

### Task 5: 비트 타임스탬프 추출 (`_detect_beats`)

**Files:**
- Modify: `analyze_music.py`
- Modify: `tests/test_analyze_music.py`

- [ ] **Step 1: 실패하는 테스트 작성**

```python
from analyze_music import _detect_beats


def test_detect_beats_returns_list():
    y, sr = make_beat_audio(bpm=120.0, duration=10.0)
    beats = _detect_beats(y, sr, bpm=120.0)
    assert isinstance(beats, list)
    assert len(beats) > 0


def test_detect_beats_count_120():
    """120 BPM, 10초 → 약 20개 비트 (15~25 허용)."""
    y, sr = make_beat_audio(bpm=120.0, duration=10.0)
    beats = _detect_beats(y, sr, bpm=120.0)
    assert 15 <= len(beats) <= 25


def test_detect_beats_monotone():
    y, sr = make_beat_audio(bpm=120.0, duration=10.0)
    beats = _detect_beats(y, sr, bpm=120.0)
    assert all(beats[i] < beats[i + 1] for i in range(len(beats) - 1))


def test_detect_beats_within_duration():
    y, sr = make_beat_audio(bpm=120.0, duration=10.0)
    beats = _detect_beats(y, sr, bpm=120.0)
    assert all(0.0 <= b <= 10.1 for b in beats)
```

- [ ] **Step 2: 테스트 실행 (실패 확인)**

```bash
python -m pytest tests/test_analyze_music.py::test_detect_beats_returns_list -v
```

Expected: `ImportError: cannot import name '_detect_beats'`

- [ ] **Step 3: `_detect_beats` 구현 추가 (`analyze_music.py`)**

```python
def _detect_beats(y: np.ndarray, sr: int, bpm: float) -> list:
    """BPM을 힌트로 librosa beat tracking 수행 → 비트 타임스탬프 리스트."""
    _, beat_frames = librosa.beat.beat_track(
        y=y, sr=sr, hop_length=HOP_LENGTH, bpm=bpm
    )
    beat_times = librosa.frames_to_time(beat_frames, sr=sr, hop_length=HOP_LENGTH)
    return beat_times.tolist()
```

- [ ] **Step 4: 테스트 통과 확인**

```bash
python -m pytest tests/test_analyze_music.py -v
```

Expected: 전체 PASS

- [ ] **Step 5: 커밋**

```bash
git add analyze_music.py tests/test_analyze_music.py
git commit -m "feat: add _detect_beats"
```

---

### Task 6: 섹션 감지 (`_detect_sections`)

**Files:**
- Modify: `analyze_music.py`
- Modify: `tests/test_analyze_music.py`

- [ ] **Step 1: 실패하는 테스트 작성**

```python
from analyze_music import _detect_sections, _extract_energy


def test_detect_sections_keys():
    y, sr = make_beat_audio(bpm=120.0, duration=20.0)
    energy = _extract_energy(y, sr)
    sections = _detect_sections(y, sr, energy["times"])
    assert len(sections) > 0
    for s in sections:
        assert set(s.keys()) == {"start", "end", "label", "energy_mean"}


def test_detect_sections_cover_full_duration():
    """섹션들이 0초부터 끝까지 커버."""
    y, sr = make_beat_audio(bpm=120.0, duration=20.0)
    energy = _extract_energy(y, sr)
    sections = _detect_sections(y, sr, energy["times"])
    assert sections[0]["start"] == pytest.approx(0.0, abs=0.1)
    assert sections[-1]["end"] == pytest.approx(20.0, abs=0.5)


def test_detect_sections_no_overlap():
    y, sr = make_beat_audio(bpm=120.0, duration=20.0)
    energy = _extract_energy(y, sr)
    sections = _detect_sections(y, sr, energy["times"])
    for i in range(len(sections) - 1):
        assert sections[i]["end"] == pytest.approx(sections[i + 1]["start"], abs=0.01)


def test_detect_sections_label_valid():
    y, sr = make_beat_audio(bpm=120.0, duration=20.0)
    energy = _extract_energy(y, sr)
    sections = _detect_sections(y, sr, energy["times"])
    valid_labels = {"intro", "buildup", "drop", "verse", "chorus", "outro"}
    for s in sections:
        assert s["label"] in valid_labels
```

- [ ] **Step 2: 테스트 실행 (실패 확인)**

```bash
python -m pytest tests/test_analyze_music.py::test_detect_sections_keys -v
```

Expected: `ImportError: cannot import name '_detect_sections'`

- [ ] **Step 3: `_detect_sections` 구현 추가 (`analyze_music.py`)**

```python
def _detect_sections(y: np.ndarray, sr: int, energy_times: list) -> list:
    """구조 변화점 감지 → 섹션 리스트 + 라벨 자동 추정."""
    duration = len(y) / sr

    chroma = librosa.feature.chroma_cqt(y=y, sr=sr, hop_length=HOP_LENGTH)
    n_sections = max(2, min(8, int(duration / 15)))
    bounds_frames = librosa.segment.agglomerative(chroma, n_sections)
    bound_times = librosa.frames_to_time(
        bounds_frames, sr=sr, hop_length=HOP_LENGTH
    ).tolist()

    # 시작/끝 보정
    if not bound_times or bound_times[0] > 0.5:
        bound_times = [0.0] + bound_times
    if bound_times[-1] < duration - 0.5:
        bound_times = bound_times + [duration]
    bound_times[0] = 0.0
    bound_times[-1] = duration

    rms = librosa.feature.rms(y=y, hop_length=HOP_LENGTH)[0]
    rms_times = np.array(librosa.times_like(rms, sr=sr, hop_length=HOP_LENGTH))
    rms_norm = _normalize(rms)

    sections = []
    for i in range(len(bound_times) - 1):
        t_start = bound_times[i]
        t_end = bound_times[i + 1]
        mask = (rms_times >= t_start) & (rms_times < t_end)
        energy_mean = float(rms_norm[mask].mean()) if mask.any() else 0.0
        sections.append({
            "start":       round(t_start, 3),
            "end":         round(t_end, 3),
            "label":       "",
            "energy_mean": round(energy_mean, 4),
        })

    # 라벨 추정
    n = len(sections)
    energy_values = [s["energy_mean"] for s in sections]
    energy_rank = set(np.argsort(energy_values)[::-1][:max(1, n // 3)].tolist())

    for i, s in enumerate(sections):
        e = s["energy_mean"]
        rising = (i < n - 1) and (sections[i + 1]["energy_mean"] > e * 1.2)

        if e < 0.20 and i == 0:
            label = "intro"
        elif e < 0.20 and i == n - 1:
            label = "outro"
        elif e > 0.70:
            label = "drop"
        elif 0.20 <= e <= 0.60 and rising:
            label = "buildup"
        elif i in energy_rank:
            label = "chorus"
        else:
            label = "verse"
        s["label"] = label

    return sections
```

- [ ] **Step 4: 테스트 통과 확인**

```bash
python -m pytest tests/test_analyze_music.py -v
```

Expected: 전체 PASS

- [ ] **Step 5: 커밋**

```bash
git add analyze_music.py tests/test_analyze_music.py
git commit -m "feat: add _detect_sections with chroma segmentation and label estimation"
```

---

### Task 7: 드롭 감지 (`_detect_drops`)

**Files:**
- Modify: `analyze_music.py`
- Modify: `tests/test_analyze_music.py`

- [ ] **Step 1: 실패하는 테스트 작성**

```python
from analyze_music import _detect_drops, _extract_energy


def test_detect_drops_returns_list():
    y, sr = make_drop_audio(drop_at=5.0)
    energy = _extract_energy(y, sr)
    drops = _detect_drops(energy)
    assert isinstance(drops, list)


def test_detect_drops_keys():
    y, sr = make_drop_audio(drop_at=5.0)
    energy = _extract_energy(y, sr)
    drops = _detect_drops(energy)
    for d in drops:
        assert set(d.keys()) == {"time", "intensity"}


def test_detect_drops_intensity_normalized():
    y, sr = make_drop_audio(drop_at=5.0)
    energy = _extract_energy(y, sr)
    drops = _detect_drops(energy)
    for d in drops:
        assert 0.0 <= d["intensity"] <= 1.0


def test_detect_drops_detects_burst():
    """에너지 급등 지점 근처에서 드롭 감지 (±1초 허용)."""
    y, sr = make_drop_audio(drop_at=5.0, duration=12.0)
    energy = _extract_energy(y, sr)
    drops = _detect_drops(energy)
    assert len(drops) >= 1
    assert any(abs(d["time"] - 5.0) <= 1.0 for d in drops), \
        f"드롭 미감지: {drops}"
```

- [ ] **Step 2: 테스트 실행 (실패 확인)**

```bash
python -m pytest tests/test_analyze_music.py::test_detect_drops_returns_list -v
```

Expected: `ImportError: cannot import name '_detect_drops'`

- [ ] **Step 3: `_detect_drops` 구현 추가 (`analyze_music.py`)**

```python
def _detect_drops(energy: dict) -> list:
    """RMS 에너지 곡선에서 드롭(에너지 급등 피크) 감지."""
    rms = np.array(energy["rms"])
    times = np.array(energy["times"])

    dt = float(times[1] - times[0]) if len(times) > 1 else 0.02
    min_dist = max(1, int(2.0 / dt))

    peaks, _ = find_peaks(rms, prominence=0.15, distance=min_dist)

    drops = []
    for peak in peaks:
        pre_start = max(0, peak - min_dist)
        pre_energy = rms[pre_start:peak].mean() if peak > 0 else 0.0
        if rms[peak] > pre_energy * 1.3:
            drops.append({
                "time":      round(float(times[peak]), 3),
                "intensity": round(float(rms[peak]), 4),
            })

    return drops
```

- [ ] **Step 4: 테스트 통과 확인**

```bash
python -m pytest tests/test_analyze_music.py -v
```

Expected: 전체 PASS

- [ ] **Step 5: 커밋**

```bash
git add analyze_music.py tests/test_analyze_music.py
git commit -m "feat: add _detect_drops with prominence-based peak detection"
```

---

### Task 8: 메인 `analyze()` + `save_json()`

**Files:**
- Modify: `analyze_music.py`
- Modify: `tests/test_analyze_music.py`

- [ ] **Step 1: 실패하는 테스트 작성**

```python
import os
import tempfile
import soundfile as sf
from analyze_music import analyze, save_json


def _write_temp_wav(y, sr):
    """합성 오디오를 임시 wav 파일로 저장 후 경로 반환."""
    f = tempfile.NamedTemporaryFile(suffix=".wav", delete=False)
    f.close()
    sf.write(f.name, y, sr)
    return f.name


def test_analyze_returns_all_keys():
    y, sr = make_beat_audio(bpm=120.0, duration=15.0)
    path = _write_temp_wav(y, sr)
    try:
        result = analyze(path)
        assert set(result.keys()) == {"meta", "bpm", "beats", "sections", "drops", "energy", "onsets"}
    finally:
        os.unlink(path)


def test_analyze_meta_fields():
    y, sr = make_beat_audio(bpm=120.0, duration=15.0)
    path = _write_temp_wav(y, sr)
    try:
        result = analyze(path)
        assert result["meta"]["filepath"] == path
        assert result["meta"]["duration"] == pytest.approx(15.0, abs=0.1)
        assert result["meta"]["start"] is None
        assert result["meta"]["end"] is None
    finally:
        os.unlink(path)


def test_analyze_with_start_end():
    y, sr = make_beat_audio(bpm=120.0, duration=30.0)
    path = _write_temp_wav(y, sr)
    try:
        result = analyze(path, start=5.0, end=20.0)
        assert result["meta"]["start"] == 5.0
        assert result["meta"]["end"] == 20.0
        assert result["meta"]["duration"] == pytest.approx(15.0, abs=0.2)
    finally:
        os.unlink(path)


def test_analyze_bpm_user_override():
    y, sr = make_beat_audio(bpm=120.0, duration=15.0)
    path = _write_temp_wav(y, sr)
    try:
        result = analyze(path, bpm=174.0)
        assert result["bpm"]["value"] == 174.0
        assert result["bpm"]["source"] == "user"
    finally:
        os.unlink(path)


def test_save_json_roundtrip():
    y, sr = make_beat_audio(bpm=120.0, duration=10.0)
    audio_path = _write_temp_wav(y, sr)
    json_f = tempfile.NamedTemporaryFile(suffix=".json", delete=False)
    json_f.close()
    try:
        result = analyze(audio_path)
        save_json(result, json_f.name)
        with open(json_f.name, "r", encoding="utf-8") as f:
            loaded = json.load(f)
        assert loaded["bpm"]["value"] == result["bpm"]["value"]
        assert loaded["beats"] == result["beats"]
        assert loaded["meta"]["duration"] == result["meta"]["duration"]
    finally:
        os.unlink(audio_path)
        os.unlink(json_f.name)
```

- [ ] **Step 2: 테스트 실행 (실패 확인)**

```bash
python -m pytest tests/test_analyze_music.py::test_analyze_returns_all_keys -v
```

Expected: `ImportError: cannot import name 'analyze'`

- [ ] **Step 3: `analyze()` + `save_json()` 구현 추가 (`analyze_music.py`)**

```python
def analyze(
    filepath: str,
    start: float = None,
    end: float = None,
    bpm: float = None,
) -> dict:
    """메인 진입점: 음악 파일 분석 → 결과 dict 반환."""
    offset = start if start is not None else 0.0
    duration_arg = (end - start) if (start is not None and end is not None) else None

    y, sr = librosa.load(filepath, offset=offset, duration=duration_arg, sr=None, mono=True)
    duration = len(y) / sr

    energy   = _extract_energy(y, sr)
    onsets   = _detect_onsets(y, sr)
    bpm_result = _detect_bpm(y, sr, onsets["times"], user_bpm=bpm)
    beats    = _detect_beats(y, sr, bpm_result["value"])
    sections = _detect_sections(y, sr, energy["times"])
    drops    = _detect_drops(energy)

    return {
        "meta": {
            "filepath": filepath,
            "duration": round(duration, 3),
            "start":    start,
            "end":      end,
        },
        "bpm":      bpm_result,
        "beats":    beats,
        "sections": sections,
        "drops":    drops,
        "energy":   energy,
        "onsets":   onsets,
    }


def save_json(analysis: dict, path: str) -> None:
    """분석 결과를 JSON 파일로 저장."""
    with open(path, "w", encoding="utf-8") as f:
        json.dump(analysis, f, ensure_ascii=False, indent=2)
```

- [ ] **Step 4: 테스트 통과 확인**

```bash
python -m pytest tests/test_analyze_music.py -v
```

Expected: 전체 PASS

- [ ] **Step 5: 커밋**

```bash
git add analyze_music.py tests/test_analyze_music.py
git commit -m "feat: add analyze() and save_json()"
```

---

### Task 9: CLI 인터페이스

**Files:**
- Modify: `analyze_music.py`

- [ ] **Step 1: `__main__` 블록 추가 (`analyze_music.py` 맨 아래)**

```python
if __name__ == "__main__":
    import argparse

    parser = argparse.ArgumentParser(description="GD 음악 분석기")
    parser.add_argument("filepath", help="분석할 음악 파일 (mp3/wav/flac)")
    parser.add_argument("--start", type=float, default=None, help="분석 시작 시간 (초)")
    parser.add_argument("--end",   type=float, default=None, help="분석 종료 시간 (초)")
    parser.add_argument("--bpm",   type=float, default=None, help="BPM 직접 지정")
    parser.add_argument("--out",   type=str,   default=None, help="JSON 출력 경로")
    args = parser.parse_args()

    print(f"[1/2] 분석 중: {args.filepath}", flush=True)
    result = analyze(args.filepath, start=args.start, end=args.end, bpm=args.bpm)

    out_path = args.out or (args.filepath.rsplit(".", 1)[0] + "_analysis.json")
    save_json(result, out_path)

    print(f"[2/2] 저장 완료: {out_path}")
    print(f"  BPM    : {result['bpm']['value']} ({result['bpm']['source']})")
    print(f"  비트   : {len(result['beats'])}개")
    print(f"  섹션   : {len(result['sections'])}개 → {[s['label'] for s in result['sections']]}")
    print(f"  드롭   : {len(result['drops'])}개")
    print(f"  길이   : {result['meta']['duration']:.1f}초")
```

- [ ] **Step 2: 합성 wav 생성 후 CLI 동작 확인**

```bash
python -c "
import numpy as np, soundfile as sf
sr = 22050
t = np.linspace(0, 30, sr * 30, endpoint=False)
y = (0.3 * np.sin(2 * 3.14159 * 440 * t)).astype('float32')
beat = np.exp(-np.arange(200) / 30).astype('float32')
for i in range(60):
    idx = int(i * sr * 30 / 60)
    y[idx:idx+200] += 0.8 * beat[:min(200, len(y)-idx)]
sf.write('test_song.wav', y, sr)
"
python analyze_music.py test_song.wav --out test_out.json
```

Expected:
```
[1/2] 분석 중: test_song.wav
[2/2] 저장 완료: test_out.json
  BPM    : ...
  비트   : ...개
  섹션   : ...개 → [...]
  드롭   : ...개
  길이   : 30.0초
```

- [ ] **Step 3: `--bpm`, `--start`, `--end` 옵션 확인**

```bash
python analyze_music.py test_song.wav --bpm 174 --start 5 --end 25 --out test_out2.json
python -c "import json; d=json.load(open('test_out2.json')); print(d['bpm'], d['meta']['duration'])"
```

Expected: `{'value': 174.0, 'source': 'user', ...}  20.0...`

- [ ] **Step 4: 임시 파일 정리 + 커밋**

```bash
rm test_song.wav test_out.json test_out2.json
git add analyze_music.py
git commit -m "feat: add CLI interface for analyze_music.py"
```

---

## 완료 기준

| 항목 | 기준 |
|------|------|
| BPM 정확도 | 합성 오디오 ±2 BPM 이내 |
| 드롭 감지 | 급등 지점 ±1초 이내 감지 |
| JSON 왕복 | 저장 후 로드 시 수치 동일 |
| CLI | `python analyze_music.py song.mp3` 로 동작 |
| 전체 테스트 | `python -m pytest tests/test_analyze_music.py -v` 전부 PASS |
