// triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys)
// Class: Trigger_4c23f0 @ 0x4c23f0
// (Geode 2.2081 bindings)


void FUN_1404c23f0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  CCString *pCVar5;
  char *pcVar6;
  CCTextureCache *pCVar7;
  uint uVar8;
  CCObject *pCVar9;
  code *pcVar10;
  
  iVar1 = *(int *)(param_1 + 0x40c);
  if (iVar1 == 0xbd5) {
    uVar8 = *(uint *)(param_1 + 0x740);
    *(uint *)(param_2 + 0x854) = uVar8;
    if (*(char *)(param_2 + 0x3225) != '\0') {
      return;
    }
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      uVar4 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar4);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    pCVar9 = (CCObject *)DAT_1406c2ed8;
    if (*(uint *)(DAT_1406c2ed8 + 0x78) == uVar8) {
      FUN_14020b820(param_2,uVar8);
      FUN_14020c490(param_2);
      return;
    }
    uVar3 = 0x3b;
    if ((int)uVar8 < 0x3b) {
      uVar3 = uVar8;
    }
    uVar8 = 1;
    if (1 < (int)uVar3) {
      uVar8 = uVar3;
    }
    if (*(char *)((longlong)DAT_1406c2ed8 + 0x3d4) != '\0') {
      return;
    }
    if (uVar8 == *(uint *)(DAT_1406c2ed8 + 0x78)) {
      return;
    }
    *(undefined1 *)((longlong)DAT_1406c2ed8 + 0x3d4) = 1;
    pCVar5 = cocos2d::CCString::createWithFormat("game_bg_%02d_001.png",(ulonglong)uVar8);
    pcVar6 = cocos2d::CCString::getCString(pCVar5);
    pCVar7 = cocos2d::CCTextureCache::sharedTextureCache();
    pcVar10 = FUN_140182950;
  }
  else if (iVar1 == 0xbd6) {
    uVar8 = *(uint *)(param_1 + 0x740);
    *(uint *)(param_2 + 0x858) = uVar8;
    if (*(char *)(param_2 + 0x3225) != '\0') {
      return;
    }
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      uVar4 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar4);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    pCVar9 = (CCObject *)DAT_1406c2ed8;
    if (*(uint *)((longlong)DAT_1406c2ed8 + 0x3c4) == uVar8) {
      return;
    }
    uVar3 = 0x16;
    if ((int)uVar8 < 0x16) {
      uVar3 = uVar8;
    }
    uVar8 = 1;
    if (1 < (int)uVar3) {
      uVar8 = uVar3;
    }
    if (*(char *)((longlong)DAT_1406c2ed8 + 0x3d5) != '\0') {
      return;
    }
    if (uVar8 == *(uint *)((longlong)DAT_1406c2ed8 + 0x3c4)) {
      return;
    }
    *(undefined1 *)((longlong)DAT_1406c2ed8 + 0x3d5) = 1;
    bVar2 = 3 < uVar8 - 8;
    *(undefined1 *)((longlong)pCVar9 + 0x3d7) = 0;
    *(bool *)((longlong)pCVar9 + 0x3d8) = bVar2;
    pCVar5 = cocos2d::CCString::createWithFormat("groundSquare_%02d_001.png",(ulonglong)uVar8);
    pcVar6 = cocos2d::CCString::getCString(pCVar5);
    pCVar7 = cocos2d::CCTextureCache::sharedTextureCache();
    cocos2d::CCTextureCache::addImageAsync(pCVar7,pcVar6,pCVar9,FUN_140182d70,uVar8,0);
    if (bVar2) {
      return;
    }
    pCVar5 = cocos2d::CCString::createWithFormat("groundSquare_%02d_2_001.png",(ulonglong)uVar8);
    pcVar6 = cocos2d::CCString::getCString(pCVar5);
    pCVar7 = cocos2d::CCTextureCache::sharedTextureCache();
    pcVar10 = FUN_140182db0;
  }
  else {
    if (iVar1 != 0xbd7) {
      return;
    }
    uVar8 = *(uint *)(param_1 + 0x740);
    *(uint *)(param_2 + 0x85c) = uVar8;
    if (*(char *)(param_2 + 0x3225) != '\0') {
      return;
    }
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      uVar4 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar4);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    pCVar9 = (CCObject *)DAT_1406c2ed8;
    if (*(uint *)(DAT_1406c2ed8 + 0x79) == uVar8) {
      if ((int)uVar8 < 1) {
        return;
      }
      if (*(longlong *)(param_2 + 0x1020) != 0) {
        return;
      }
      FUN_14020bae0(param_2,uVar8);
      FUN_14020c490(param_2);
      return;
    }
    if (uVar8 == 0) {
      if (*(longlong **)(param_2 + 0x1020) == (longlong *)0x0) {
        return;
      }
      (**(code **)(**(longlong **)(param_2 + 0x1020) + 0x1f0))();
      *(undefined8 *)(param_2 + 0x1020) = 0;
      return;
    }
    uVar3 = 3;
    if ((int)uVar8 < 3) {
      uVar3 = uVar8;
    }
    uVar8 = 1;
    if (1 < (int)uVar3) {
      uVar8 = uVar3;
    }
    if (*(char *)((longlong)DAT_1406c2ed8 + 0x3d6) != '\0') {
      return;
    }
    if (uVar8 == *(uint *)(DAT_1406c2ed8 + 0x79)) {
      return;
    }
    *(undefined1 *)((longlong)DAT_1406c2ed8 + 0x3d6) = 1;
    *(undefined2 *)((longlong)pCVar9 + 0x3d9) = 0;
    pCVar5 = cocos2d::CCString::createWithFormat("fg_%02d_001.png",(ulonglong)uVar8);
    pcVar6 = cocos2d::CCString::getCString(pCVar5);
    pCVar7 = cocos2d::CCTextureCache::sharedTextureCache();
    cocos2d::CCTextureCache::addImageAsync(pCVar7,pcVar6,pCVar9,FUN_140182b10,uVar8,0);
    pCVar5 = cocos2d::CCString::createWithFormat("fg_%02d_2_001.png",(ulonglong)uVar8);
    pcVar6 = cocos2d::CCString::getCString(pCVar5);
    pCVar7 = cocos2d::CCTextureCache::sharedTextureCache();
    pcVar10 = FUN_140182b50;
  }
  cocos2d::CCTextureCache::addImageAsync(pCVar7,pcVar6,pCVar9,pcVar10,uVar8,0);
  return;
}

