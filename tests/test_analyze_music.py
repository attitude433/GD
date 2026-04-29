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
