// FUN_1403a0700 @ 0x3a0700


void FUN_1403a0700(longlong *param_1,char param_2,char param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CCObject *pCVar5;
  undefined8 uVar6;
  CCScaleTo *pCVar7;
  CCEaseElasticOut *pCVar8;
  CCPoint *pCVar9;
  CCDirector *this;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined2 local_res8;
  undefined8 local_res20;
  undefined2 local_a8;
  undefined1 local_a6;
  CCPoint local_98 [8];
  CCPoint local_90 [8];
  CCPoint local_88 [8];
  CCPoint local_80 [88];
  
  fVar3 = DAT_140622c24;
  fVar12 = *(float *)(param_1 + 0x13e);
  if ((fVar12 == DAT_140622c24) && (param_2 == '\0')) {
    return;
  }
  if (param_2 == '\0') {
    if ((char)param_1[0x16e] != '\0') {
      *(undefined4 *)(param_1 + 0x15e) = 2;
    }
    *(undefined4 *)(param_1 + 0x13e) = 0x3f800000;
    if ((char)param_1[0x157] != '\0') {
      if (*(char *)((longlong)param_1 + 0x9bb) == '\0') {
        if ((*(char *)((longlong)param_1 + 0x9bd) == '\0') &&
           (*(char *)((longlong)param_1 + 0x9bc) == '\0')) {
          uVar11 = (undefined4)param_1[0xc4];
          goto LAB_1403a0850;
        }
      }
      else {
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          uVar6 = FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar6);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
        }
        FUN_14039e580(param_1,*(int *)((longlong)DAT_1406c2ed8 + 0x2dc) - (int)DAT_1406c2ed8[0x5c]);
      }
    }
  }
  else {
    if (fVar12 != DAT_140622c24) {
      return;
    }
    *(undefined4 *)(param_1 + 0x13e) = 0x3f19999a;
    if ((char)param_1[0x157] != '\0') {
      if (*(char *)((longlong)param_1 + 0x9bb) == '\0') {
        if ((*(char *)((longlong)param_1 + 0x9bd) == '\0') &&
           (*(char *)((longlong)param_1 + 0x9bc) == '\0')) {
          uVar11 = 0;
LAB_1403a0850:
          FUN_14039dc50(fVar12,uVar11);
        }
      }
      else {
        FUN_14039e580(fVar12,0);
      }
    }
  }
  fVar12 = *(float *)(param_1 + 0x13e);
  *(float *)((longlong)param_1 + 0x394) = fVar12;
  *(float *)(param_1 + 0x73) = fVar12;
  cocos2d::CCParticleSystem::loadScaledDefaults((CCParticleSystem *)param_1[0x121],fVar12);
  cocos2d::CCParticleSystem::loadScaledDefaults
            ((CCParticleSystem *)param_1[0x122],*(float *)(param_1 + 0x13e));
  cocos2d::CCParticleSystem::loadScaledDefaults
            ((CCParticleSystem *)param_1[0x117],*(float *)(param_1 + 0x13e));
  cocos2d::CCParticleSystem::loadScaledDefaults
            ((CCParticleSystem *)param_1[0x11a],*(float *)(param_1 + 0x13e));
  cocos2d::CCParticleSystem::loadScaledDefaults
            ((CCParticleSystem *)param_1[0x118],*(float *)(param_1 + 0x13e));
  cocos2d::CCParticleSystem::loadScaledDefaults
            ((CCParticleSystem *)param_1[0x119],*(float *)(param_1 + 0x13e));
  cocos2d::CCParticleSystem::loadScaledDefaults
            ((CCParticleSystem *)param_1[0x11b],*(float *)(param_1 + 0x13e));
  cocos2d::CCParticleSystem::loadScaledDefaults
            ((CCParticleSystem *)param_1[0x11c],*(float *)(param_1 + 0x13e));
  cocos2d::CCParticleSystem::loadScaledDefaults
            ((CCParticleSystem *)param_1[0x11d],*(float *)(param_1 + 0x13e));
  cocos2d::CCParticleSystem::loadScaledDefaults
            ((CCParticleSystem *)param_1[0x11e],*(float *)(param_1 + 0x13e));
  cocos2d::CCParticleSystem::loadScaledDefaults
            ((CCParticleSystem *)param_1[0x11f],*(float *)(param_1 + 0x13e));
  fVar12 = fVar3;
  if (*(char *)((longlong)param_1 + 0x9bc) != '\0') {
    fVar12 = DAT_140622ba4;
  }
  cocos2d::CCMotionStreak::setStroke
            ((CCMotionStreak *)param_1[0xf4],
             *(float *)((longlong)param_1 + 0x924) * *(float *)(param_1 + 0x13e) * fVar12);
  if ((*(char *)((longlong)param_1 + 0x7e4) != '\0') ||
     (*(char *)((longlong)param_1 + 0x9bc) != '\0')) {
    *(int *)(param_1[0xf6] + 0x1b0) = (int)param_1[0x13e];
  }
  if (param_1[0xe6] != 0) {
    *(int *)(param_1[0xe6] + 0x150) = (int)param_1[0x13e];
  }
  if (param_1[0xf5] != 0) {
    FUN_1403862b0(param_1[0xf5],*(undefined4 *)((longlong)param_1 + 0x92c),param_1);
  }
  lVar1 = param_1[0x186];
  pCVar5 = cocos2d::CCDictionary::objectForKey(*(CCDictionary **)(lVar1 + 0x140),6);
  if (pCVar5 != (CCObject *)0x0) {
    (**(code **)(*(longlong *)pCVar5 + 0x58))(pCVar5);
    cocos2d::CCDictionary::removeObjectForKey(*(CCDictionary **)(lVar1 + 0x140),6);
  }
  fVar12 = *(float *)(param_1 + 0x13e);
  if ((*(char *)((longlong)param_1 + 0x7e4) != '\0') &&
     (*(char *)((longlong)param_1 + 0x7e1) == '\0')) {
    if (DAT_1406c2ed8 == (longlong *)0x0) {
      uVar6 = FUN_1404d0770(0x668);
      DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar6);
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
    }
    fVar2 = DAT_140622b08;
    if (*(char *)(DAT_1406c2ed8[0x41] + 0x3225) == '\0') {
      pCVar7 = cocos2d::CCScaleTo::create(DAT_140622b08,fVar12,fVar12);
      pCVar8 = cocos2d::CCEaseElasticOut::create((CCActionInterval *)pCVar7);
      (**(code **)(*(longlong *)pCVar8 + 0x40))(pCVar8,6);
      cocos2d::CCDictionary::setObject
                (*(CCDictionary **)(param_1[0x186] + 0x140),(CCObject *)pCVar8,
                 (longlong)*(int *)(pCVar8 + 0x48));
      (**(code **)(*(longlong *)pCVar8 + 0x50))(pCVar8,param_1);
      local_res8 = 0xff00;
      if (*(float *)(param_1 + 0x13e) != fVar3) {
        local_res8 = 0xff;
      }
      if (param_3 == '\0') {
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          local_res20 = FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res20);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
        }
        lVar1 = DAT_1406c2ed8[0x41];
        pCVar9 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_90,(CCPoint *)(param_1 + 0x140));
        this = cocos2d::CCDirector::sharedDirector();
        cocos2d::CCDirector::getWinSize(this);
        fVar14 = *(float *)pCVar9 - DAT_1406231e0;
        fVar13 = *(float *)pCVar9 + DAT_1406232bc;
        iVar4 = rand();
        fVar15 = (float)iVar4 / DAT_140623644;
        local_res20._4_4_ = local_res20._4_4_ + DAT_1406231e0;
        fVar12 = (float)(**(code **)(**(longlong **)(lVar1 + 0xfe8) + 0xa8))();
        cocos2d::CCPoint::CCPoint
                  (local_98,fVar15 * (fVar13 - fVar14) + fVar14,
                   local_res20._4_4_ / fVar12 + *(float *)(lVar1 + 0x414));
        local_a8 = local_res8;
        local_a6 = 0x96;
        uVar6 = cocos2d::CCPoint::CCPoint(local_88,pCVar9);
        uVar10 = cocos2d::CCPoint::CCPoint(local_80,local_98);
        FUN_140246d00(lVar1,uVar10,uVar6,&local_a8,DAT_140623010,fVar2,0,1,fVar3);
        local_a8 = local_res8;
        local_a6 = 0x96;
        FUN_140397760(param_1,&local_a8,DAT_1406231d0);
        FUN_140397970(param_1);
      }
      goto LAB_1403a0cba;
    }
  }
  (**(code **)(*param_1 + 0x78))(param_1,fVar12);
  (**(code **)(*param_1 + 0x88))(param_1,fVar12);
LAB_1403a0cba:
  if ((((*(char *)((longlong)param_1 + 0x9bb) != '\0') && ((char)param_1[0xe5] != '\0')) &&
      (*(char *)((longlong)param_1 + 0xa2a) == '\0')) &&
     (*(char *)((longlong)param_1 + 0x9e4) == '\0')) {
    *(undefined2 *)(param_1 + 0xe5) = 0;
    *(undefined1 *)(param_1 + 0xcd) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    FUN_14038d350(param_1,fVar3);
  }
  FUN_1403a0680(param_1);
  FUN_1403a10e0(param_1);
  return;
}

