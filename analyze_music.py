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


def _bpm_alignment_score(bpm: float, onset_times: list, duration: float) -> float:
    """주어진 BPM이 온셋 타임스탬프와 얼마나 잘 맞는지 0~1 스코어.

    위상-불변(phase-invariant): 최적 위상 오프셋을 찾아서 점수 계산.
    coverage penalty: 그리드 비트 수 대비 실제 온셋 커버율 고려
    → 너무 드문 그리드(절반 BPM)는 불이익
    """
    if bpm <= 0 or not onset_times:
        return 0.0
    beat_interval = 60.0 / bpm
    onset_arr = np.array(onset_times)

    # 각 온셋을 비트 간격으로 나눈 나머지 → 최적 위상 오프셋 찾기
    phases = onset_arr % beat_interval
    # 원형 중앙값(circular median)을 위상 오프셋으로 사용
    phase_offset = float(np.median(phases))

    # 위상 오프셋을 적용한 비트 그리드
    start = phase_offset - beat_interval * np.ceil(phase_offset / beat_interval)
    beats = np.arange(start, duration + beat_interval, beat_interval)
    beats = beats[(beats >= -beat_interval * 0.5) & (beats <= duration + beat_interval * 0.5)]
    n_beats = max(1, len(beats))

    # 각 온셋이 가장 가까운 비트 그리드와 얼마나 가까운지
    alignment_scores = []
    for onset in onset_times:
        nearest = beats[np.argmin(np.abs(beats - onset))]
        distance = abs(onset - nearest)
        alignment_scores.append(max(0.0, 1.0 - 2.0 * distance / beat_interval))
    alignment = float(np.mean(alignment_scores))

    # coverage: 각 그리드 비트가 온셋으로 커버되는 비율
    covered = 0
    for beat in beats:
        dists = np.abs(onset_arr - beat)
        if dists.min() <= beat_interval * 0.5:
            covered += 1
    coverage = covered / n_beats

    # 두 점수의 조화 평균 (coverage가 낮으면 전체 점수도 낮아짐)
    if alignment + coverage == 0:
        return 0.0
    return 2.0 * alignment * coverage / (alignment + coverage)


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

    # 전략 2: tempogram 기반
    oenv = librosa.onset.onset_strength(y=y, sr=sr, hop_length=HOP_LENGTH)
    tempo2 = float(np.atleast_1d(
        librosa.beat.tempo(onset_envelope=oenv, sr=sr, hop_length=HOP_LENGTH)
    )[0])

    # 전략 3: 온셋 간격 중앙값 기반
    raw_candidates = {tempo1, tempo2}
    if len(onset_times) >= 4:
        diffs = np.diff(onset_times)
        # 중앙값과 사분위수 모두 사용
        for q in [0.25, 0.5, 0.75]:
            d = float(np.quantile(diffs, q))
            if d > 0:
                raw_candidates.add(60.0 / d)

    # 후보 풀: 각 원시 BPM에서 절반/그대로/두배 + x4/3, x3/4
    all_candidates = []
    for t in raw_candidates:
        all_candidates += [t / 2, t * 2.0 / 3, t, t * 4.0 / 3, t * 3.0 / 2, t * 2]
    all_candidates = [b for b in all_candidates if 20 <= b <= 300]

    # 각 후보 주변 ±5 BPM 범위 세밀 탐색 (0.5 step)
    refined = []
    for b in all_candidates:
        refined += list(np.arange(max(20, b - 5), min(300, b + 5) + 0.5, 0.5))
    all_candidates = list(set(all_candidates + refined))
    all_candidates = [b for b in all_candidates if 20 <= b <= 300]

    scores = {b: _bpm_alignment_score(b, onset_times, duration) for b in all_candidates}

    # EDM/GD 음악 prior: 130~200 BPM 범위에 가중치 부여
    # alignment 스코어가 비슷할 때 절반/두배 오류 보정용
    def _edm_prior(bpm: float) -> float:
        if 130 <= bpm <= 200:
            return 1.15
        if 100 <= bpm < 130 or 200 < bpm <= 240:
            return 1.0
        return 0.85  # 너무 느리거나 빠른 BPM 불이익

    weighted = {b: s * _edm_prior(b) for b, s in scores.items()}
    best_bpm = max(weighted, key=weighted.get)

    return {
        "value":      round(best_bpm, 2),
        "source":     "librosa",
        "candidates": [round(b, 2) for b in sorted(set(all_candidates))],
    }


def _detect_beats(y: np.ndarray, sr: int, bpm: float) -> list:
    """BPM을 힌트로 librosa beat tracking 수행 → 비트 타임스탬프 리스트."""
    _, beat_frames = librosa.beat.beat_track(
        y=y, sr=sr, hop_length=HOP_LENGTH, bpm=bpm
    )
    beat_times = librosa.frames_to_time(beat_frames, sr=sr, hop_length=HOP_LENGTH)
    return beat_times.tolist()


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


if __name__ == "__main__":
    import argparse
    import os

    MUSIC_DIR = os.path.join(os.path.dirname(__file__), "samples", "music")
    RESULTS_DIR = os.path.join(os.path.dirname(__file__), "samples", "results")

    def _default_out(filepath: str) -> str:
        stem = os.path.splitext(os.path.basename(filepath))[0]
        return os.path.join(RESULTS_DIR, stem + "_analysis.json")

    parser = argparse.ArgumentParser(description="GD 음악 분석기")
    parser.add_argument("filepath", help="분석할 음악 파일 (mp3/wav/flac) — 파일명만 입력하면 samples/music/ 에서 탐색")
    parser.add_argument("--start", type=float, default=None, help="분석 시작 시간 (초)")
    parser.add_argument("--end",   type=float, default=None, help="분석 종료 시간 (초)")
    parser.add_argument("--bpm",   type=float, default=None, help="BPM 직접 지정")
    parser.add_argument("--out",   type=str,   default=None, help="JSON 출력 경로 (기본: samples/results/)")
    args = parser.parse_args()

    # 파일명만 입력 시 samples/music/ 에서 자동 탐색
    filepath = args.filepath
    if not os.path.exists(filepath):
        candidate = os.path.join(MUSIC_DIR, filepath)
        if os.path.exists(candidate):
            filepath = candidate

    print(f"[1/2] 분석 중: {filepath}", flush=True)
    result = analyze(filepath, start=args.start, end=args.end, bpm=args.bpm)

    out_path = args.out or _default_out(filepath)
    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    save_json(result, out_path)

    print(f"[2/2] 저장 완료: {out_path}")
    print(f"  BPM    : {result['bpm']['value']} ({result['bpm']['source']})")
    print(f"  비트   : {len(result['beats'])}개")
    print(f"  섹션   : {len(result['sections'])}개 → {[s['label'] for s in result['sections']]}")
    print(f"  드롭   : {len(result['drops'])}개")
    print(f"  길이   : {result['meta']['duration']:.1f}초")
