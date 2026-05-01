// PlayerObject_playSpiderDashEffect @ 0x395170


void FUN_140395170(longlong param_1,float *param_2,float *param_3)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  CCObject *pCVar7;
  longlong lVar8;
  CCScaleTo *pCVar9;
  CCEaseElasticOut *pCVar10;
  CCSprite *this;
  CCArray *this_00;
  CCString *this_01;
  char *pcVar11;
  CCSpriteFrameCache *this_02;
  CCSpriteFrame *pCVar12;
  CCAnimation *pCVar13;
  CCAnimate *pCVar14;
  CCCallFunc *pCVar15;
  CCSequence *pCVar16;
  int iVar17;
  undefined2 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  undefined8 local_res8;
  
  local_res8 = CONCAT71(local_res8._1_7_,*(undefined1 *)(param_1 + 0x9c3));
  if ((*(char *)(param_1 + 0x7e4) != '\0') && (*(char *)(param_1 + 0x72b) == '\0')) {
    iVar17 = -1;
    uVar20 = 1;
    iVar5 = -1;
    if (*(char *)(param_1 + 0x9c2) == '\0') {
      iVar5 = 1;
    }
    *param_2 = (float)iVar5 * DAT_14062304c + *param_2;
    if (*(char *)(param_1 + 0x9c2) == '\0') {
      iVar17 = 1;
    }
    *param_3 = (float)iVar17 * DAT_14062304c + *param_3;
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      uVar6 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar6);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    fVar22 = DAT_140622c24;
    lVar21 = 0xa8a;
    if (*(char *)((longlong)DAT_1406c2ed8 + 0x395) == '\0') {
      *param_3 = *param_3 + DAT_140623028;
      fVar23 = DAT_140622ca8;
      pCVar7 = (CCObject *)
               FUN_140042870(*(float *)(param_1 + 0x9f0) * DAT_14062307c * DAT_140622ca8);
      uVar19 = 0xa8a;
      if (*(char *)(param_1 + 0xab9) == '\0') {
        uVar19 = 0xa8d;
      }
      *(undefined2 *)(pCVar7 + 0x154) = *(undefined2 *)((ulonglong)uVar19 + param_1);
      pCVar7[0x156] = *(CCObject *)((ulonglong)uVar19 + 2 + param_1);
      (**(code **)(*(longlong *)pCVar7 + 0xb8))(pCVar7,param_2);
      (**(code **)(**(longlong **)(param_1 + 0xc28) + 0x1b8))
                (*(longlong **)(param_1 + 0xc28),pCVar7);
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        uVar6 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar6);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      plVar4 = DAT_1406c2ed8;
      lVar8 = DAT_1406c2ed8[0x41] + 0x37a0;
      if (DAT_1406c2ed8[0x41] == 0) {
        lVar8 = 0;
      }
      *(longlong *)(pCVar7 + 0x170) = lVar8;
      cocos2d::CCArray::addObject(*(CCArray **)(plVar4[0x41] + 0x38b8),pCVar7);
      *(undefined4 *)(pCVar7 + 0x168) = 0x3ed70a3e;
      uVar3 = DAT_140622a88;
      pCVar7 = (CCObject *)FUN_140042870(*(float *)(param_1 + 0x9f0) * DAT_140623120 * fVar23);
      puVar18 = (undefined2 *)(param_1 + 0xa8d);
      if (*(char *)(param_1 + 0xab9) != '\0') {
        puVar18 = (undefined2 *)(param_1 + 0xa8a);
      }
      *(undefined2 *)(pCVar7 + 0x154) = *puVar18;
      pCVar7[0x156] = *(CCObject *)(puVar18 + 1);
      (**(code **)(*(longlong *)pCVar7 + 0xb8))(pCVar7,param_3);
      (**(code **)(**(longlong **)(param_1 + 0xc28) + 0x1b8))
                (*(longlong **)(param_1 + 0xc28),pCVar7,0);
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        uVar6 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar6);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      plVar4 = DAT_1406c2ed8;
      lVar8 = DAT_1406c2ed8[0x41] + 0x37a0;
      if (DAT_1406c2ed8[0x41] == 0) {
        lVar8 = 0;
      }
      *(longlong *)(pCVar7 + 0x170) = lVar8;
      cocos2d::CCArray::addObject(*(CCArray **)(plVar4[0x41] + 0x38b8),pCVar7);
      *(undefined4 *)(pCVar7 + 0x168) = 0x3f570a3e;
      pCVar7 = (CCObject *)
               FUN_140042870(*(float *)(param_1 + 0x9f0) * DAT_14062307c,
                             *(float *)(param_1 + 0x9f0) * DAT_140623164 * DAT_140622d04,uVar3,0,0);
      puVar18 = (undefined2 *)(param_1 + 0xa8d);
      if (*(char *)(param_1 + 0xab9) != '\0') {
        puVar18 = (undefined2 *)(param_1 + 0xa8a);
      }
      *(undefined2 *)(pCVar7 + 0x154) = *puVar18;
      pCVar7[0x156] = *(CCObject *)(puVar18 + 1);
      (**(code **)(*(longlong *)pCVar7 + 0xb8))(pCVar7,param_3);
      (**(code **)(**(longlong **)(param_1 + 0xc28) + 0x1b8))
                (*(longlong **)(param_1 + 0xc28),pCVar7,0);
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        uVar6 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar6);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      plVar4 = DAT_1406c2ed8;
      lVar8 = DAT_1406c2ed8[0x41] + 0x37a0;
      if (DAT_1406c2ed8[0x41] == 0) {
        lVar8 = 0;
      }
      *(longlong *)(pCVar7 + 0x170) = lVar8;
      cocos2d::CCArray::addObject(*(CCArray **)(plVar4[0x41] + 0x38b8),pCVar7);
      *(undefined4 *)(pCVar7 + 0x160) = 1;
    }
    uVar2 = DAT_140529bae;
    uVar1 = DAT_140529bac;
    *(undefined2 *)(param_1 + 0x818) = DAT_140529bac;
    *(undefined1 *)(param_1 + 0x81a) = DAT_140529bae;
    *(undefined2 *)(param_1 + 0x81b) = uVar1;
    *(undefined1 *)(param_1 + 0x81d) = uVar2;
    (*(code *)**(undefined8 **)(param_1 + 0x140))();
    FUN_14039d3a0(param_1,param_1 + 0x81b);
    *(undefined8 *)(param_1 + 0x808) = *(undefined8 *)(param_1 + 0xaa0);
    *(undefined4 *)(param_1 + 0x810) = 0x3e99999a;
    *(undefined4 *)(param_1 + 0x814) = 0x3d4ccccd;
    cocos2d::CCNode::stopActionByTag(*(CCNode **)(param_1 + 0x8a8),10);
    (**(code **)(**(longlong **)(param_1 + 0x8a8) + 0xa0))();
    pCVar9 = cocos2d::CCScaleTo::create(DAT_140622af0,fVar22);
    pCVar10 = cocos2d::CCEaseElasticOut::create((CCActionInterval *)pCVar9,DAT_140622abc);
    (**(code **)(*(longlong *)pCVar10 + 0x40))(pCVar10,10);
    cocos2d::CCNode::runAction(*(CCNode **)(param_1 + 0x8a8),(CCAction *)pCVar10);
    if (*(char *)(param_1 + 0x7e4) != '\0') {
      this = cocos2d::CCSprite::createWithSpriteFrameName("spiderDash_002.png");
      (**(code **)(*(longlong *)this + 0x150))(this);
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_res8 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      (**(code **)(**(longlong **)(DAT_1406c2ed8[0x41] + 0xfe8) + 0x1b8))
                (*(longlong **)(DAT_1406c2ed8[0x41] + 0xfe8),this,0x28);
      local_res8 = 0x100000302;
      (*(code *)**(undefined8 **)(this + 0x158))(this + 0x158,0x100000302);
      lVar8 = *(longlong *)this;
      (**(code **)(lVar8 + 0x130))(this);
      (**(code **)(lVar8 + 0x78))(this);
      lVar8 = *(longlong *)this;
      if (*(char *)(param_1 + 0x9c3) == '\0') {
        fVar23 = (param_3[1] - param_2[1]) * DAT_140622b08 + param_2[1];
        fVar22 = *param_2;
      }
      else {
        fVar22 = (*param_3 - *param_2) * DAT_140622b08 + *param_2;
        fVar23 = param_2[1];
      }
      uVar6 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,fVar22,fVar23);
      (**(code **)(lVar8 + 0xb8))(this,uVar6);
      if (*(char *)(param_1 + 0xab9) == '\0') {
        lVar21 = 0xa8d;
      }
      (*(code *)**(undefined8 **)(this + 0x140))(this + 0x140,param_1 + lVar21);
      this_00 = cocos2d::CCArray::create();
      do {
        this_01 = cocos2d::CCString::createWithFormat("spiderDash_%03d.png",uVar20);
        pcVar11 = cocos2d::CCString::getCString(this_01);
        this_02 = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
        pCVar12 = cocos2d::CCSpriteFrameCache::spriteFrameByName(this_02,pcVar11);
        cocos2d::CCArray::addObject(this_00,(CCObject *)pCVar12);
        uVar19 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar19;
      } while ((int)uVar19 < 9);
      pCVar13 = cocos2d::CCAnimation::createWithSpriteFrames(this_00,DAT_1406229dc);
      pCVar14 = cocos2d::CCAnimate::create(pCVar13);
      pCVar15 = cocos2d::CCCallFunc::create((CCObject *)this,(_func_void *)&LAB_14003be70);
      pCVar16 = cocos2d::CCSequence::create((CCFiniteTimeAction *)pCVar14,pCVar15,0);
      cocos2d::CCNode::runAction((CCNode *)this,(CCAction *)pCVar16);
    }
  }
  if ((*(char *)(param_1 + 0x72b) == '\0') &&
     ((*(char *)(param_1 + 0x9be) == '\0' || (*(char *)(param_1 + 0xb70) == '\0')))) {
    cocos2d::CCParticleSystem::resetSystem(*(CCParticleSystem **)(param_1 + 0x8b8));
  }
  return;
}

