// Function: FUN_140396650
// Original target: PlayerObject_savePositionState_396650 @ 0x396650
// Ghidra entry: 140396650
// Signature: undefined FUN_140396650(void)


void FUN_140396650(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  CCSprite *this;
  CCSprite *this_00;
  undefined8 uVar7;
  CCPoint *pCVar8;
  CCScaleTo *pCVar9;
  CCCallFunc *pCVar10;
  CCSequence *pCVar11;
  CCMoveBy *pCVar12;
  CCFadeTo *pCVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  undefined8 local_res8;
  float local_res10;
  float local_res14;
  undefined1 local_68 [64];
  
  if (*(char *)((longlong)param_1 + 0x9e4) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x9e4) = 0;
    param_1[0x142] = 0;
    if (((char)param_1[0x16e] != '\0') && (param_1[0xb2] != 0)) {
      dVar17 = (double)*(float *)(param_1[0xb2] + 0x74c);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_res8,(float)(dVar17 * (double)param_1[0xae]),
                 (float)(dVar17 * (double)param_1[0xaf]));
      pfVar6 = (float *)cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,(CCPoint *)&local_res8);
      *(undefined1 *)((longlong)param_1 + 0x952) = 1;
      param_1[0x134] = (longlong)(double)pfVar6[1];
      if ((char)param_1[0x16e] != '\0') {
        param_1[0x15f] = (longlong)(double)*pfVar6;
        *(undefined1 *)((longlong)param_1 + 0xb94) = 1;
      }
      if (*(char *)(param_1[0xb2] + 0x755) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x952) = 0;
        *(undefined1 *)((longlong)param_1 + 0xb94) = 0;
      }
    }
    param_1[0xb2] = 0;
    (**(code **)(*(longlong *)param_1[0xcc] + 0x140))((longlong *)param_1[0xcc],0);
    if ((*(char *)((longlong)param_1 + 0x7e4) != '\0') &&
       (*(char *)((longlong)param_1 + 0x7e1) == '\0')) {
      this = cocos2d::CCSprite::createWithSpriteFrameName("playerDash2_001.png");
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_res8 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      (**(code **)(**(longlong **)(DAT_1406c2ed8[0x41] + 0xfe8) + 0x1b8))
                (*(longlong **)(DAT_1406c2ed8[0x41] + 0xfe8),this,0x28);
      local_res8 = 0x100000302;
      (*(code *)**(undefined8 **)(this + 0x158))(this + 0x158,0x100000302);
      this_00 = cocos2d::CCSprite::createWithSpriteFrameName("playerDash2_outline_001.png");
      (**(code **)(*(longlong *)this + 0x1b8))(this,this_00,1);
      (**(code **)(*(longlong *)this + 0x138))(this,&local_res10);
      lVar1 = *(longlong *)this_00;
      uVar7 = cocos2d::CCPoint::CCPoint
                        ((CCPoint *)&local_res8,local_res10 * DAT_140622b08,
                         local_res14 * DAT_140622b08);
      (**(code **)(lVar1 + 0xb8))(this_00,uVar7);
      (**(code **)(*(longlong *)(this_00 + 0x140) + 0x28))(this_00 + 0x140,0x96);
      (**(code **)(*(longlong *)param_1[0xcc] + 200))();
      pCVar8 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
      cocos2d::CCPoint::operator+(pCVar8,(CCPoint *)&local_res8);
      (**(code **)(*(longlong *)this + 0xb8))(this,&local_res8);
      lVar1 = *(longlong *)this;
      (**(code **)(*(longlong *)param_1[0xcc] + 0x80))();
      (**(code **)(lVar1 + 0x78))(this);
      lVar1 = *(longlong *)this;
      (**(code **)(*(longlong *)param_1[0xcc] + 0x90))();
      (**(code **)(lVar1 + 0x88))(this);
      puVar2 = *(undefined8 **)(this + 0x140);
      uVar7 = (**(code **)(*(longlong *)(param_1[0xcc] + 0x140) + 8))();
      (*(code *)*puVar2)(this + 0x140,uVar7);
      (**(code **)(*(longlong *)this + 0x150))
                (this,(float)(double)CONCAT44((uint)((ulonglong)param_1[0xb0] >> 0x20) ^
                                              DAT_1406243e0._4_4_,
                                              (uint)param_1[0xb0] ^ (uint)DAT_1406243e0));
      fVar15 = (float)(**(code **)(*(longlong *)this + 0x90))(this);
      fVar3 = DAT_140622a74;
      fVar15 = fVar15 * DAT_140622a74;
      fVar16 = (float)(**(code **)(*(longlong *)this + 0x80))(this);
      pCVar9 = cocos2d::CCScaleTo::create(fVar3,fVar16 * fVar3,fVar15);
      pCVar10 = cocos2d::CCCallFunc::create((CCObject *)this,(_func_void *)&LAB_14003be70);
      pCVar11 = cocos2d::CCSequence::create((CCFiniteTimeAction *)pCVar9,pCVar10,0);
      cocos2d::CCNode::runAction((CCNode *)this,(CCAction *)pCVar11);
      pCVar8 = (CCPoint *)cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,DAT_14062389c,0.0);
      pCVar12 = cocos2d::CCMoveBy::create(fVar3,pCVar8);
      cocos2d::CCNode::runAction((CCNode *)this,(CCAction *)pCVar12);
      pCVar13 = cocos2d::CCFadeTo::create(fVar3,'\0');
      cocos2d::CCNode::runAction((CCNode *)this,(CCAction *)pCVar13);
      pCVar13 = cocos2d::CCFadeTo::create(fVar3,'\0');
      cocos2d::CCNode::runAction((CCNode *)this_00,(CCAction *)pCVar13);
    }
    cocos2d::CCParticleSystem::stopSystem((CCParticleSystem *)param_1[0x11d]);
    fVar3 = DAT_140622c24;
    if ((((*(char *)((longlong)param_1 + 0x9b9) == '\0') &&
         (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
        (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
       (((*(char *)((longlong)param_1 + 0x9c4) == '\0' &&
         (*(char *)((longlong)param_1 + 0x9bd) == '\0')) &&
        (*(char *)((longlong)param_1 + 0x9be) == '\0')))) {
      (**(code **)(*(longlong *)param_1[0xe7] + 0x158))();
      (**(code **)(*(longlong *)param_1[0xe7] + 0xa0))();
      cocos2d::CCNode::stopAllActions((CCNode *)param_1[0xe7]);
      (**(code **)(*(longlong *)param_1[0xe7] + 0x150))();
      (**(code **)(*(longlong *)param_1[0xea] + 0xa0))();
      cocos2d::CCNode::stopAllActions((CCNode *)param_1[0xea]);
      (**(code **)(*(longlong *)param_1[0xea] + 0x150))();
      (**(code **)(*param_1 + 0x150))(param_1);
      if ((char)param_1[0x16e] != '\0') {
        pfVar6 = (float *)cocos2d::CCPoint::CCPoint
                                    ((CCPoint *)&local_res8,(float)(double)param_1[0xae],
                                     (float)(double)param_1[0xaf]);
        fVar15 = *pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1];
        if (fVar15 < 0.0) {
          fVar15 = sqrtf(fVar15);
        }
        else {
          fVar15 = SQRT(fVar15);
        }
        fVar16 = DAT_140622e58;
        if (fVar15 <= DAT_140623104) {
          fVar16 = (fVar15 / DAT_140623104) * DAT_140622d04 + DAT_140622b08;
        }
        fVar15 = DAT_140622ab4;
        if (*(float *)(param_1 + 0x13e) == fVar3) {
          fVar15 = DAT_140622ae0;
        }
        iVar14 = -1;
        iVar4 = 1;
        if (*(char *)((longlong)param_1 + 0x9c3) != '\0') {
          iVar4 = -1;
        }
        iVar5 = -0xb4;
        if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
          iVar5 = 0xb4;
        }
        if (*(char *)((longlong)param_1 + 0x9c2) == '\0') {
          iVar14 = 1;
        }
        *(float *)(param_1 + 0xe4) =
             ((float)(iVar5 * iVar14) * (float)iVar4 * *(float *)((longlong)param_1 + 0xb84) *
             fVar16) / fVar15;
        *(undefined1 *)(param_1 + 0xe5) = 1;
      }
    }
    if (*(char *)((longlong)param_1 + 0x9bb) != '\0') {
      if ((char)param_1[0x16e] != '\0') {
        *(undefined2 *)(param_1 + 0xe5) = 0;
        *(undefined1 *)(param_1 + 0xcd) = 0;
        *(undefined4 *)(param_1 + 0xe4) = 0;
      }
      FUN_14038d350(param_1);
    }
    if (*(char *)((longlong)param_1 + 0xa0c) != '\0') {
      if (*(char *)((longlong)param_1 + 0x9bd) == '\0') {
        if (*(char *)((longlong)param_1 + 0x9be) != '\0') {
          FUN_1403a14d0(param_1);
        }
      }
      else {
        uVar7 = FUN_14003bdb0(local_68,param_1 + 0x17a);
        FUN_140040cf0(param_1[0x114],uVar7);
      }
    }
    if (param_1[0x184] != 0) {
      FUN_140231ff0(param_1[0x184],0x18,0,*(undefined4 *)((longlong)param_1 + 0x39c));
    }
  }
  return;
}

