import numpy as np
import pytest
import json
import os
import tempfile
import soundfile as sf


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


# --- Task 3: _detect_onsets ---

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


# --- Task 4: _detect_bpm ---

from analyze_music import _detect_bpm


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


# --- Task 5: _detect_beats ---

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


# --- Task 6: _detect_sections ---

from analyze_music import _detect_sections


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


# --- Task 7: _detect_drops ---

from analyze_music import _detect_drops


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


# --- Task 8: analyze() + save_json() ---

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
