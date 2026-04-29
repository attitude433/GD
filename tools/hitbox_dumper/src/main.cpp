#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <fstream>
#include <map>

using namespace geode::prelude;

// ── 데이터 저장소 ─────────────────────────────────────────────

// 일반 오브젝트: objectID → m_objectRect {x, y, w, h}
static std::map<int, cocos2d::CCRect> g_hitboxes;

// 트리거: objectID → 속성 dict (JSON 문자열로 직접 구성)
struct TriggerData {
    // 공통
    float    duration;
    int      targetGroupID;
    int      easing;
    float    easingRate;
    bool     touchTriggered;
    bool     spawnTriggered;
    bool     multiActivate;
    // 색상 트리거 (Color / BG / Ground / Pulse)
    int      r, g, b;
    float    opacity;
    bool     blending;
    int      copyColorID;     // 다른 채널 색상 복사
    bool     copyOpacity;
    // 이동 트리거 (Move)
    float    moveX, moveY;
    // 그룹 트리거 (Spawn / Toggle)
    int      activateGroupID;
    bool     activateGroup;
};
static std::map<int, TriggerData> g_triggers;

// ── 헬퍼: bool → "true"/"false" ──────────────────────────────
static const char* b2s(bool v) { return v ? "true" : "false"; }

// ── PlayLayer 훅 ──────────────────────────────────────────────
class $modify(PlayLayer) {

    void addObject(GameObject* obj) {
        PlayLayer::addObject(obj);
        if (!obj) return;

        int id = obj->m_objectID;
        if (id <= 0) return;

        // EffectGameObject(트리거)와 일반 오브젝트 분리
        if (auto* eff = typeinfo_cast<EffectGameObject*>(obj)) {
            if (g_triggers.find(id) != g_triggers.end()) return; // 이미 기록

            TriggerData td{};
            td.duration       = eff->m_duration;
            td.targetGroupID  = eff->m_targetGroupID;
            td.easing         = (int)eff->m_easing;
            td.easingRate     = eff->m_easingRate;
            td.touchTriggered = eff->m_touchTriggered;
            td.spawnTriggered = eff->m_spawnTriggered;
            td.multiActivate  = eff->m_multiActivate;
            // 색상
            td.r              = eff->m_r;
            td.g              = eff->m_g;
            td.b              = eff->m_b;
            td.opacity        = eff->m_opacity;
            td.blending       = eff->m_blending;
            td.copyColorID    = eff->m_copyColorID;
            td.copyOpacity    = eff->m_copyOpacity;
            // 이동
            td.moveX          = eff->m_moveX;
            td.moveY          = eff->m_moveY;
            // 그룹
            td.activateGroupID = eff->m_activateGroupID;
            td.activateGroup   = eff->m_activateGroup;

            g_triggers[id] = td;

        } else {
            // 일반 오브젝트 — 히트박스 기록
            if (g_hitboxes.find(id) != g_hitboxes.end()) return;
            g_hitboxes[id] = obj->m_objectRect;
        }
    }

    void onQuit() {
        saveHitboxes();
        saveTriggers();
        PlayLayer::onQuit();
    }

    // ── hitboxes.json 저장 ────────────────────────────────────
    void saveHitboxes() {
        auto path = geode::dirs::getGameDir() / "hitboxes.json";
        std::ofstream f(path);
        if (!f.is_open()) {
            geode::log::error("hitboxes.json 열기 실패");
            return;
        }
        f << "{\n";
        bool first = true;
        for (auto& [id, rect] : g_hitboxes) {
            if (!first) f << ",\n";
            f << "  \"" << id << "\": {"
              << "\"x\": " << rect.origin.x   << ", "
              << "\"y\": " << rect.origin.y   << ", "
              << "\"w\": " << rect.size.width << ", "
              << "\"h\": " << rect.size.height
              << "}";
            first = false;
        }
        f << "\n}\n";
        f.close();
        geode::log::info("hitboxes.json: {}개", g_hitboxes.size());
    }

    // ── triggers.json 저장 ───────────────────────────────────
    void saveTriggers() {
        auto path = geode::dirs::getGameDir() / "triggers.json";
        std::ofstream f(path);
        if (!f.is_open()) {
            geode::log::error("triggers.json 열기 실패");
            return;
        }
        f << "{\n";
        bool first = true;
        for (auto& [id, td] : g_triggers) {
            if (!first) f << ",\n";
            f << "  \"" << id << "\": {\n"
              // 공통
              << "    \"duration\": "        << td.duration        << ",\n"
              << "    \"targetGroupID\": "   << td.targetGroupID   << ",\n"
              << "    \"easing\": "          << td.easing          << ",\n"
              << "    \"easingRate\": "      << td.easingRate       << ",\n"
              << "    \"touchTriggered\": "  << b2s(td.touchTriggered) << ",\n"
              << "    \"spawnTriggered\": "  << b2s(td.spawnTriggered) << ",\n"
              << "    \"multiActivate\": "   << b2s(td.multiActivate)  << ",\n"
              // 색상
              << "    \"r\": "              << td.r               << ",\n"
              << "    \"g\": "              << td.g               << ",\n"
              << "    \"b\": "              << td.b               << ",\n"
              << "    \"opacity\": "        << td.opacity          << ",\n"
              << "    \"blending\": "       << b2s(td.blending)   << ",\n"
              << "    \"copyColorID\": "    << td.copyColorID      << ",\n"
              << "    \"copyOpacity\": "    << b2s(td.copyOpacity) << ",\n"
              // 이동
              << "    \"moveX\": "          << td.moveX            << ",\n"
              << "    \"moveY\": "          << td.moveY            << ",\n"
              // 그룹
              << "    \"activateGroupID\": " << td.activateGroupID << ",\n"
              << "    \"activateGroup\": "   << b2s(td.activateGroup) << "\n"
              << "  }";
            first = false;
        }
        f << "\n}\n";
        f.close();
        geode::log::info("triggers.json: {}개", g_triggers.size());

        // 완료 팝업
        FLAlertLayer::create(
            "GD Dumper",
            fmt::format(
                "히트박스 <cy>{}개</c>\n트리거 <cg>{}개</c> 저장 완료!",
                g_hitboxes.size(), g_triggers.size()
            ),
            "OK"
        )->show();
    }
};
