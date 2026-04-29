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
