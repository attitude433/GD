"""
GD 음악 분석 모듈
음악 파일 → BPM/비트/섹션/드롭/에너지 추출 → dict + JSON
"""

import json
import numpy as np
import librosa
from scipy.signal import butter, sosfilt, find_peaks


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
