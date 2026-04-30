#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <fstream>
#include <map>

using namespace geode::prelude;

// ── 데이터 저장소 ─────────────────────────────────────────────

// 일반 오브젝트: objectID → 충돌박스 + 분류·표면 속성
struct HitboxData {
    cocos2d::CCRect objectRect;
    cocos2d::CCRect outerRect;
    // 분류 (47개 GameObjectType enum)
    int  objectType;
    // 일반 플래그
    bool isTrigger;
    bool isDecoration;
    bool isDecoration2;
    bool isPassable;
    bool isStartPos;
    bool isInvisibleBlock;
    // 슬로프
    int  slopeDirection;
    bool slopeUphill;
    bool slopeIsHazard;
    // 표면 속성
    bool isIceBlock;
    bool isGripSlope;
    bool isNonStickX;
    bool isNonStickY;
    bool isDontBoostX;
    bool isDontBoostY;
};
static std::map<int, HitboxData> g_hitboxes;

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
    bool     activateGroup;
};
static std::map<int, TriggerData> g_triggers;

// 레벨 시작 정보 (PlayLayer init 시 한 번 dump)
struct LevelStart {
    float player1_x, player1_y;
    float player2_x, player2_y;
    float ground_y;
    float ground_y2;
    float level_length;
    bool  has_start_pos;
    float start_pos_x, start_pos_y;
    bool  captured;
};
static LevelStart g_levelStart{};

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
            td.easing         = (int)eff->m_easingType;
            td.easingRate     = eff->m_easingRate;
            td.touchTriggered = eff->m_isTouchTriggered;
            td.spawnTriggered = eff->m_isSpawnTriggered;
            td.multiActivate  = eff->m_isMultiTriggered;
            // 색상
            td.r              = eff->m_triggerTargetColor.r;
            td.g              = eff->m_triggerTargetColor.g;
            td.b              = eff->m_triggerTargetColor.b;
            td.opacity        = eff->m_opacity;
            td.blending       = eff->m_usesBlending;
            td.copyColorID    = eff->m_copyColorID;
            td.copyOpacity    = eff->m_copyOpacity;
            // 이동
            td.moveX          = eff->m_moveOffset.x;
            td.moveY          = eff->m_moveOffset.y;
            // 그룹
            td.activateGroup  = eff->m_activateGroup;

            g_triggers[id] = td;

        } else {
            // 일반 오브젝트 — 히트박스 + 분류 기록
            if (g_hitboxes.find(id) != g_hitboxes.end()) return;
            HitboxData hd{};
            hd.objectRect       = obj->getObjectRect();
            hd.outerRect        = obj->getOuterObjectRect();
            hd.objectType       = (int)obj->m_objectType;
            hd.isTrigger        = obj->m_isTrigger;
            hd.isDecoration     = obj->m_isDecoration;
            hd.isDecoration2    = obj->m_isDecoration2;
            hd.isPassable       = obj->m_isPassable;
            hd.isStartPos       = obj->m_isStartPos;
            hd.isInvisibleBlock = obj->m_isInvisibleBlock;
            hd.slopeDirection   = obj->m_slopeDirection;
            hd.slopeUphill      = obj->m_slopeUphill;
            hd.slopeIsHazard    = obj->m_slopeIsHazard;
            hd.isIceBlock       = obj->m_isIceBlock;
            hd.isGripSlope      = obj->m_isGripSlope;
            hd.isNonStickX      = obj->m_isNonStickX;
            hd.isNonStickY      = obj->m_isNonStickY;
            hd.isDontBoostX     = obj->m_isDontBoostX;
            hd.isDontBoostY     = obj->m_isDontBoostY;
            g_hitboxes[id] = hd;
        }
    }

    void setupHasCompleted() {
        PlayLayer::setupHasCompleted();
        if (g_levelStart.captured) return;     // 한 번만

        g_levelStart.player1_x = m_player1 ? m_player1->m_position.x : 0;
        g_levelStart.player1_y = m_player1 ? m_player1->m_position.y : 0;
        g_levelStart.player2_x = m_player2 ? m_player2->m_position.x : 0;
        g_levelStart.player2_y = m_player2 ? m_player2->m_position.y : 0;
        g_levelStart.ground_y  = m_groundLayer  ? m_groundLayer->getGroundY()  : 0;
        g_levelStart.ground_y2 = m_groundLayer2 ? m_groundLayer2->getGroundY() : 0;
        g_levelStart.level_length = m_levelLength;
        g_levelStart.has_start_pos = (m_startPosObject != nullptr);
        if (m_startPosObject) {
            g_levelStart.start_pos_x = m_startPosObject->getPositionX();
            g_levelStart.start_pos_y = m_startPosObject->getPositionY();
        }
        g_levelStart.captured = true;
    }

    void onQuit() {
        saveHitboxes();
        saveTriggers();
        saveLevelStart();
        PlayLayer::onQuit();
    }

    // ── level_start.json 저장 ───────────────────────────────
    void saveLevelStart() {
        auto path = geode::dirs::getGameDir() / "level_start.json";
        std::ofstream f(path);
        if (!f.is_open()) return;
        const auto& s = g_levelStart;
        f << "{\n"
          << "  \"player1\":   {\"x\": " << s.player1_x << ", \"y\": " << s.player1_y << "},\n"
          << "  \"player2\":   {\"x\": " << s.player2_x << ", \"y\": " << s.player2_y << "},\n"
          << "  \"ground_y\":  " << s.ground_y  << ",\n"
          << "  \"ground_y2\": " << s.ground_y2 << ",\n"
          << "  \"level_length\": " << s.level_length << ",\n"
          << "  \"has_start_pos\": " << b2s(s.has_start_pos) << ",\n"
          << "  \"start_pos\": {\"x\": " << s.start_pos_x << ", \"y\": " << s.start_pos_y << "}\n"
          << "}\n";
        f.close();
        geode::log::info("level_start.json 저장");
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
        for (auto& [id, hd] : g_hitboxes) {
            if (!first) f << ",\n";
            auto& o = hd.objectRect;
            auto& u = hd.outerRect;
            f << "  \"" << id << "\": {"
              << "\"object\": {"
                << "\"x\": " << o.origin.x   << ", "
                << "\"y\": " << o.origin.y   << ", "
                << "\"w\": " << o.size.width << ", "
                << "\"h\": " << o.size.height
              << "}, "
              << "\"outer\": {"
                << "\"x\": " << u.origin.x   << ", "
                << "\"y\": " << u.origin.y   << ", "
                << "\"w\": " << u.size.width << ", "
                << "\"h\": " << u.size.height
              << "}, "
              << "\"type\": " << hd.objectType << ", "
              << "\"flags\": {"
                << "\"trigger\": "     << b2s(hd.isTrigger)        << ", "
                << "\"decoration\": "  << b2s(hd.isDecoration)     << ", "
                << "\"decoration2\": " << b2s(hd.isDecoration2)    << ", "
                << "\"passable\": "    << b2s(hd.isPassable)       << ", "
                << "\"startPos\": "    << b2s(hd.isStartPos)       << ", "
                << "\"invisible\": "   << b2s(hd.isInvisibleBlock)
              << "}, "
              << "\"slope\": {"
                << "\"dir\": "    << hd.slopeDirection       << ", "
                << "\"uphill\": " << b2s(hd.slopeUphill)     << ", "
                << "\"hazard\": " << b2s(hd.slopeIsHazard)
              << "}, "
              << "\"surface\": {"
                << "\"ice\": "       << b2s(hd.isIceBlock)    << ", "
                << "\"grip\": "      << b2s(hd.isGripSlope)   << ", "
                << "\"noStickX\": "  << b2s(hd.isNonStickX)   << ", "
                << "\"noStickY\": "  << b2s(hd.isNonStickY)   << ", "
                << "\"noBoostX\": "  << b2s(hd.isDontBoostX)  << ", "
                << "\"noBoostY\": "  << b2s(hd.isDontBoostY)
              << "}}";
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
