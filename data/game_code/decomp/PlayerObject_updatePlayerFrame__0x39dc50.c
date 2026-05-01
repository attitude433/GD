// Function: FUN_14039dc50
// Original target: PlayerObject_updatePlayerFrame @ 0x39dc50
// Ghidra entry: 14039dc50
// Signature: undefined FUN_14039dc50(void)


void FUN_14039dc50(longlong param_1,uint param_2)

{
  CCString *pCVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  CCSpriteFrameCache *pCVar5;
  CCSpriteFrame *pCVar6;
  CCSize *pCVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  float local_res8;
  float local_resc;
  undefined8 local_res18 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar10 = 0x1e5;
  if ((int)param_2 < 0x1e5) {
    uVar10 = param_2;
  }
  if ((int)uVar10 < 1) {
    uVar10 = 0;
  }
  else {
    *(uint *)(param_1 + 0x620) = uVar10;
  }
  if (DAT_1406c2ed8 == (longlong *)0x0) {
    local_res18[0] = FUN_1404d0770(0x668);
    DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res18[0]);
    (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
  }
  FUN_140181d10(DAT_1406c2ed8,uVar10,0,*(undefined4 *)(param_1 + 0xbf4));
  pCVar1 = cocos2d::CCString::createWithFormat("player_%02d_001.png",(ulonglong)uVar10);
  pcVar2 = cocos2d::CCString::getCString(pCVar1);
  pCVar1 = cocos2d::CCString::createWithFormat("player_%02d_2_001.png",(ulonglong)uVar10);
  pcVar3 = cocos2d::CCString::getCString(pCVar1);
  pCVar1 = cocos2d::CCString::createWithFormat("player_%02d_glow_001.png",(ulonglong)uVar10);
  pcVar4 = cocos2d::CCString::getCString(pCVar1);
  lVar9 = **(longlong **)(param_1 + 0x738);
  pCVar5 = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  pCVar6 = cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar5,pcVar2);
  (**(code **)(lVar9 + 0x3e0))(*(undefined8 *)(param_1 + 0x738),pCVar6);
  lVar9 = **(longlong **)(param_1 + 0x740);
  pCVar5 = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  pCVar6 = cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar5,pcVar3);
  (**(code **)(lVar9 + 0x3e0))(*(undefined8 *)(param_1 + 0x740),pCVar6);
  lVar9 = **(longlong **)(param_1 + 0x750);
  pCVar5 = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  pCVar6 = cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar5,pcVar4);
  (**(code **)(lVar9 + 0x3e0))(*(undefined8 *)(param_1 + 0x750),pCVar6);
  pCVar7 = (CCSize *)(**(code **)(**(longlong **)(param_1 + 0x738) + 0x130))();
  cocos2d::CCSize::CCSize((CCSize *)&local_res8,pCVar7);
  lVar9 = **(longlong **)(param_1 + 0x740);
  uVar8 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)local_res18,local_res8 * DAT_140622b08,local_resc * DAT_140622b08);
  (**(code **)(lVar9 + 0xb8))(*(undefined8 *)(param_1 + 0x740),uVar8);
  pCVar1 = cocos2d::CCString::createWithFormat("player_%02d_extra_001.png",(ulonglong)uVar10);
  pcVar2 = cocos2d::CCString::getCString(pCVar1);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (pcVar2[lVar9] != '\0');
  FUN_14003a930(&local_48,pcVar2);
  FUN_14039ec10(param_1,&local_48);
  return;
}

