// PlayerObject_update_388d80 @ 0x388d80


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140388d80(CCNode *param_1,float param_2)

{
  CCNode *pCVar1;
  CCNode CVar2;
  ushort uVar3;
  undefined2 uVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  CCNode CVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  CCPoint *pCVar13;
  CCCallFunc *pCVar14;
  CCDelayTime *pCVar15;
  CCObject *pCVar16;
  CCDirector *this;
  float *pfVar17;
  CCScaleTo *pCVar18;
  CCScaleTo *pCVar19;
  CCScaleTo *pCVar20;
  CCScaleTo *pCVar21;
  CCSequence *pCVar22;
  CCAction *pCVar23;
  CCHide *pCVar24;
  longlong lVar25;
  char *pcVar26;
  CCTextureCache *this_00;
  CCTexture2D *pCVar27;
  int iVar28;
  int iVar29;
  double dVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_138 [32];
  CCScaleTo *local_118;
  undefined8 local_110;
  undefined2 local_108;
  CCNode local_106;
  undefined2 local_f8;
  float local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [32];
  ulonglong local_b0;
  
  fVar38 = DAT_140622c24;
  local_b0 = DAT_1406ba040 ^ (ulonglong)auStack_138;
  fVar39 = param_2 * DAT_140622bd8;
  if (0.0 <= *(double *)(param_1 + 0x808)) {
    dVar6 = (*(double *)(param_1 + 0xaa0) - *(double *)(param_1 + 0x808)) -
            (double)*(float *)(param_1 + 0x814);
    if (dVar6 < (double)*(float *)(param_1 + 0x810)) {
      if (0.0 < dVar6) {
        uVar3 = *(ushort *)(param_1 + 0x97a);
        fVar33 = (float)(dVar6 / (double)*(float *)(param_1 + 0x810));
        fVar37 = DAT_140622c24;
        if (fVar33 <= DAT_140622c24) {
          fVar37 = fVar33;
        }
        if ((fVar37 < 0.0) || (fVar37 == 0.0)) {
          local_108 = *(undefined2 *)(param_1 + 0x818);
          local_106 = param_1[0x81a];
        }
        else if (fVar37 == DAT_140622c24) {
          local_108 = *(undefined2 *)(param_1 + 0x97a);
          local_106 = param_1[0x97c];
        }
        else {
          local_106 = SUB41((int)((float)(int)((uint)(byte)param_1[0x97c] -
                                              (uint)(byte)param_1[0x81a]) * fVar37 +
                                 (float)(byte)param_1[0x81a]),0);
          local_108._1_1_ = (byte)((ushort)*(undefined2 *)(param_1 + 0x818) >> 8);
          local_f8._1_1_ = (byte)(uVar3 >> 8);
          uVar12 = (uint)(byte)*(undefined2 *)(param_1 + 0x818);
          local_108 = CONCAT11((char)(int)((float)(int)((uint)local_f8._1_1_ - (uint)local_108._1_1_
                                                       ) * fVar37 + (float)local_108._1_1_),
                               (char)(int)((float)(int)((uVar3 & 0xff) - uVar12) * fVar37 +
                                          (float)uVar12));
        }
        local_f8 = uVar3;
        (*(code *)**(undefined8 **)(param_1 + 0x140))(param_1 + 0x140,&local_108);
        uVar4 = *(undefined2 *)(param_1 + 0x81b);
        fVar37 = fVar38;
        if ((float)(dVar6 / (double)*(float *)(param_1 + 0x810)) <= fVar38) {
          fVar37 = (float)(dVar6 / (double)*(float *)(param_1 + 0x810));
        }
        if ((fVar37 < 0.0) || (fVar37 == 0.0)) {
          local_108 = *(undefined2 *)(param_1 + 0x81b);
          local_106 = param_1[0x81d];
        }
        else if (fVar37 == fVar38) {
          local_108 = *(undefined2 *)(param_1 + 0x97d);
          local_106 = param_1[0x97f];
        }
        else {
          local_106 = SUB41((int)((float)(int)((uint)(byte)param_1[0x97f] -
                                              (uint)(byte)param_1[0x81d]) * fVar37 +
                                 (float)(byte)param_1[0x81d]),0);
          local_f8._1_1_ = (byte)((ushort)uVar4 >> 8);
          local_108._1_1_ = (byte)(*(ushort *)(param_1 + 0x97d) >> 8);
          local_108 = CONCAT11((char)(int)((float)(int)((uint)local_108._1_1_ - (uint)local_f8._1_1_
                                                       ) * fVar37 + (float)local_f8._1_1_),
                               (char)(int)((float)(int)((*(ushort *)(param_1 + 0x97d) & 0xff) -
                                                       (uint)(byte)uVar4) * fVar37 +
                                          (float)(byte)uVar4));
        }
        local_f8 = uVar4;
        (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x740) + 0x140))
                  ((undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x140),&local_108);
        (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x760) + 0x140))
                  ((undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x140),&local_108);
        lVar25 = *(longlong *)(param_1 + 0x8a0);
        *(undefined2 *)(lVar25 + 0x2f4) = local_108;
        *(CCNode *)(lVar25 + 0x2f6) = local_106;
        FUN_1402a6ed0();
        lVar25 = *(longlong *)(param_1 + 0x8a8);
        *(undefined2 *)(lVar25 + 0x2f4) = local_108;
        *(CCNode *)(lVar25 + 0x2f6) = local_106;
        FUN_1402a6ed0();
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x808) = 0xbff0000000000000;
      (*(code *)**(undefined8 **)(param_1 + 0x140))(param_1 + 0x140,param_1 + 0x97a);
      FUN_14039d3a0(param_1,param_1 + 0x97d);
    }
  }
  dVar30 = DAT_1406237b0;
  dVar6 = DAT_140623000;
  fVar37 = DAT_140622bd8;
  if (*(double *)(param_1 + 0x9a0) <= DAT_140623000) {
    if (*(double *)(param_1 + 0x9a0) < DAT_1406237b0) {
      *(undefined8 *)(param_1 + 0x9a0) = 0xc08f400000000000;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x9a0) = 0x408f400000000000;
  }
  if (param_1[0xb70] != (CCNode)0x0) {
    if (*(double *)(param_1 + 0xaf8) <= dVar6) {
      if (*(double *)(param_1 + 0xaf8) < dVar30) {
        *(undefined8 *)(param_1 + 0xaf8) = 0xc08f400000000000;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xaf8) = 0x408f400000000000;
    }
  }
  if (param_1[0x9c0] != (CCNode)0x0) {
    return;
  }
  pCVar13 = (CCPoint *)(**(code **)(*(longlong *)param_1 + 200))(param_1);
  cocos2d::ccpDistance((CCPoint *)(param_1 + 0x4d0),pCVar13);
  pCVar13 = (CCPoint *)(**(code **)(*(longlong *)param_1 + 200))(param_1);
  cocos2d::CCPoint::operator=((CCPoint *)(param_1 + 0x4d0),pCVar13);
  *(undefined4 *)(param_1 + 0xab4) = 0;
  fVar8 = DAT_140622ad0;
  fVar33 = DAT_140622a10;
  iVar29 = 1;
  if (param_1[0xa2a] == (CCNode)0x0) {
    FUN_14038b900(param_1);
    iVar31 = -1;
    if (0 < *(int *)(param_1 + 0xb88)) {
      pCVar1 = param_1 + 0x9ba;
      fVar34 = DAT_140622afc;
      if (((((param_1[0x9b9] == (CCNode)0x0) && (fVar34 = DAT_140622b2c, *pCVar1 == (CCNode)0x0)) &&
           (fVar34 = fVar8, param_1[0x9c4] == (CCNode)0x0)) &&
          ((fVar34 = DAT_140622b38, param_1[0x9bb] == (CCNode)0x0 && (param_1[0x9be] == (CCNode)0x0)
           ))) && (fVar34 = fVar38, param_1[0x9bd] != (CCNode)0x0)) {
        fVar34 = fVar37;
      }
      fVar37 = fVar34;
      if (((*(float *)(param_1 + 0x9f0) != fVar38) &&
          (fVar37 = DAT_140622b30, param_1[0x9b9] == (CCNode)0x0)) &&
         ((fVar37 = DAT_140622b84, *pCVar1 == (CCNode)0x0 &&
          (fVar37 = fVar34, param_1[0x9c4] != (CCNode)0x0)))) {
        fVar37 = DAT_140622b48;
      }
      dVar6 = (double)(fVar39 * *(float *)(param_1 + 0xb90) * fVar37);
      FUN_140388d10(param_1,dVar6 + *(double *)(param_1 + 0x9a0));
      if (dVar6 != 0.0) {
        param_1[0x952] = (CCNode)0x1;
      }
      if (param_1[0x9bf] == (CCNode)0x0) {
        if (0.0 < dVar6) {
LAB_140389335:
          *(double *)(param_1 + 0x830) =
               (dVar6 / _DAT_140622ed8) * DAT_140622e48 + *(double *)(param_1 + 0x830);
        }
      }
      else if (dVar6 < 0.0) goto LAB_140389335;
      if (param_1[0xb70] != (CCNode)0x0) {
        fVar37 = *(float *)(param_1 + 0xb8c);
        *(double *)(param_1 + 0xaf8) = (double)(fVar37 * fVar39) + *(double *)(param_1 + 0xaf8);
        if (fVar37 != 0.0) {
          param_1[0xb94] = (CCNode)0x1;
        }
        if ((((param_1[0x9b9] == (CCNode)0x0) && (*pCVar1 == (CCNode)0x0)) &&
            (param_1[0x9bc] == (CCNode)0x0)) &&
           (((param_1[0x9c4] == (CCNode)0x0 && (param_1[0x9bb] == (CCNode)0x0)) &&
            (((param_1[0x9bd] == (CCNode)0x0 &&
              ((param_1[0x9be] == (CCNode)0x0 && (param_1[0x728] == (CCNode)0x0)))) &&
             (fVar33 < (float)((uint)fVar37 & DAT_1406243c0))))))) {
          fVar37 = DAT_140622ab4;
          if (*(float *)(param_1 + 0x9f0) == fVar38) {
            fVar37 = DAT_140622ae0;
          }
          iVar32 = iVar29;
          if (param_1[0x9c3] != (CCNode)0x0) {
            iVar32 = iVar31;
          }
          iVar28 = -0xb4;
          if (param_1[0x9c2] == (CCNode)0x0) {
            iVar28 = 0xb4;
          }
          iVar11 = iVar31;
          if (param_1[0x9bf] == (CCNode)0x0) {
            iVar11 = iVar29;
          }
          *(float *)(param_1 + 0x720) =
               ((float)(iVar28 * iVar11) * (float)iVar32 * *(float *)(param_1 + 0xb84)) / fVar37;
          param_1[0x728] = (CCNode)0x1;
        }
      }
    }
    CVar9 = param_1[0x9e4];
    if (CVar9 != (CCNode)0x0) {
      *(undefined8 *)(param_1 + 0x9a0) = 0;
    }
    dVar30 = (double)fVar39;
    dVar6 = dVar30 * *(double *)(param_1 + 0x9a0);
    if (param_1[0xb70] != (CCNode)0x0) {
      FUN_14038a0c0(param_1);
      CVar9 = param_1[0x9e4];
    }
    CVar2 = param_1[0xb70];
    if (CVar2 == (CCNode)0x0) {
      dVar35 = (double)*(float *)(param_1 + 0x9f4) * *(double *)(param_1 + 0x7b8);
    }
    else {
      dVar35 = *(double *)(param_1 + 0xaf8);
    }
    dVar35 = dVar35 * (double)param_2;
    dVar7 = dVar35 * _DAT_140622c78;
    if (param_1[0x9bc] == (CCNode)0x0) {
      if (CVar9 != (CCNode)0x0) goto LAB_140389567;
    }
    else if (CVar9 == (CCNode)0x0) {
      iVar32 = iVar31;
      if (param_1[0x9bf] == (CCNode)0x0) {
        iVar32 = iVar29;
      }
      if (param_1[0x985] != (CCNode)0x0) {
        iVar31 = iVar29;
      }
      dVar6 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & DAT_1406243d0._4_4_,
                               SUB84(dVar35,0) & (uint)DAT_1406243d0) * (double)iVar32 *
              (double)iVar31;
      if (*(float *)(param_1 + 0x9f0) != fVar38) {
        dVar6 = dVar6 + dVar6;
      }
    }
    else {
LAB_140389567:
      dVar36 = *(double *)(param_1 + 0x578);
      if (CVar2 == (CCNode)0x0) {
        dVar6 = dVar36 * dVar35;
      }
      else {
        dVar35 = dVar30 * *(double *)(param_1 + 0x570);
        dVar6 = dVar36 * dVar30;
        *(double *)(param_1 + 0xaf8) = *(double *)(param_1 + 0x570);
        *(double *)(param_1 + 0x9a0) = dVar36;
      }
    }
    *(float *)(param_1 + 0xab4) = (float)dVar6;
    if ((param_1[0x9c2] != (CCNode)0x0) && (CVar2 == (CCNode)0x0)) {
      dVar35 = dVar35 * DAT_140623728;
    }
    dVar30 = dVar6;
    dVar36 = dVar35 + *(double *)(param_1 + 0x9d8);
    if (param_1[0x9c3] != (CCNode)0x0) {
      dVar30 = dVar35 + *(double *)(param_1 + 0x9d8);
      dVar36 = dVar6;
    }
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_d8,(float)dVar36,(float)dVar30);
    pCVar13 = (CCPoint *)(**(code **)(*(longlong *)param_1 + 200))(param_1);
    cocos2d::CCPoint::operator+(pCVar13,(CCPoint *)local_e8);
    (**(code **)(*(longlong *)param_1 + 0xb8))(param_1,local_e8);
    *(undefined8 *)(param_1 + 0x9d8) = 0;
    dVar6 = *(double *)(param_1 + 0x9d0);
    if (dVar6 != 0.0) {
      dVar30 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & DAT_1406243d0._4_4_,
                                SUB84(dVar6,0) & (uint)DAT_1406243d0);
      if (dVar7 <= dVar30) {
        dVar30 = dVar7;
      }
      if (dVar6 <= 0.0) {
        dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ DAT_1406243e0._4_4_,
                                  SUB84(dVar30,0) ^ (uint)DAT_1406243e0);
      }
      *(double *)(param_1 + 0x9d8) = dVar30;
      *(double *)(param_1 + 0x9d0) = dVar6 - dVar30;
    }
  }
  fVar38 = DAT_140622a10;
  if (param_1[0x9b9] == (CCNode)0x0) {
    if (param_1[0x9ba] != (CCNode)0x0) goto LAB_1403897f7;
    if (param_1[0x9bc] != (CCNode)0x0) goto LAB_14038982d;
    if (param_1[0x9c4] != (CCNode)0x0) goto LAB_1403897f7;
    if ((((param_1[0xa0c] == (CCNode)0x0) || (cVar10 = FUN_14039b4f0(param_1), cVar10 != '\0')) ||
        ((param_1[0xa2a] != (CCNode)0x0 || (param_1[0x72b] != (CCNode)0x0)))) ||
       ((param_1[0xb70] != (CCNode)0x0 &&
        ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)(param_1 + 0xaf8) >> 0x20) &
                          DAT_1406243d0._4_4_,
                          (uint)*(undefined8 *)(param_1 + 0xaf8) & (uint)DAT_1406243d0) <=
         _DAT_140622e68)))) {
      if ((param_1[0x7e6] != (CCNode)0x0) &&
         (pCVar23 = cocos2d::CCNode::getActionByTag(param_1,3), pCVar23 == (CCAction *)0x0)) {
        pCVar14 = cocos2d::CCCallFunc::create((CCObject *)param_1,FUN_14038b8c0);
        pCVar15 = cocos2d::CCDelayTime::create(DAT_1406229f4);
        pCVar22 = cocos2d::CCSequence::create((CCFiniteTimeAction *)pCVar15,pCVar14,0);
        (**(code **)(*(longlong *)pCVar22 + 0x40))(pCVar22,3);
        cocos2d::CCNode::runAction(param_1,(CCAction *)pCVar22);
      }
    }
    else {
      if (param_1[0x7e6] == (CCNode)0x0) {
        cocos2d::CCParticleSystem::resumeSystem(*(CCParticleSystem **)(param_1 + 0x8b8));
      }
      param_1[0x7e6] = (CCNode)0x1;
      cocos2d::CCNode::stopActionByTag(param_1,3);
    }
  }
  else {
    if (((param_1[0x985] == (CCNode)0x0) || (cVar10 = FUN_14039b4f0(param_1), cVar10 != '\0')) ||
       (param_1[0x72b] != (CCNode)0x0)) {
      if (param_1[0x7e7] != (CCNode)0x0) {
        cocos2d::CCParticleSystem::stopSystem(*(CCParticleSystem **)(param_1 + 0x8c8));
      }
      param_1[0x7e7] = (CCNode)0x0;
    }
    else {
      if (param_1[0x7e7] == (CCNode)0x0) {
        cocos2d::CCParticleSystem::resumeSystem(*(CCParticleSystem **)(param_1 + 0x8c8));
      }
      param_1[0x7e7] = (CCNode)0x1;
    }
LAB_1403897f7:
    if ((param_1[0x9bc] == (CCNode)0x0) && (param_1[0xa0c] != (CCNode)0x0)) {
      if (param_1[0x9bf] == (CCNode)0x0) {
        if (DAT_140623728 < *(double *)(param_1 + 0x9a0)) {
LAB_14038995a:
          if (((param_1[0xa2a] == (CCNode)0x0) && (param_1[0x72b] == (CCNode)0x0)) &&
             ((param_1[0xb70] == (CCNode)0x0 ||
              ((((param_1[0xb01] != (CCNode)0x0 || (param_1[0xb00] != (CCNode)0x0)) ||
                (param_1[0xb59] != (CCNode)0x0)) || (param_1[0xb5a] != (CCNode)0x0)))))) {
            cocos2d::CCParticleSystem::resumeSystem(*(CCParticleSystem **)(param_1 + 0x8d0));
            goto LAB_14038983a;
          }
        }
      }
      else if (*(double *)(param_1 + 0x9a0) <= DAT_140622e18 &&
               DAT_140622e18 != *(double *)(param_1 + 0x9a0)) goto LAB_14038995a;
    }
LAB_14038982d:
    cocos2d::CCParticleSystem::stopSystem(*(CCParticleSystem **)(param_1 + 0x8d0));
  }
LAB_14038983a:
  *(float *)(*(longlong *)(param_1 + 0x7b0) + 0x1b4) =
       (*(float *)(param_1 + 0xaac) - fVar38) * DAT_140622e70 + fVar8;
  if (param_1[0x7e4] != (CCNode)0x0) {
    if (param_1[0x9c2] == (CCNode)0x0) {
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_e0 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_e0);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      fVar39 = *(float *)(DAT_1406c2ed8[0x41] + 0x50c);
      lVar25 = *(longlong *)(param_1 + 0x7b0);
      uVar12 = cocos2d::CCArray::count(*(CCArray **)(lVar25 + 0x1a0));
      if (1 < uVar12) {
        while (uVar12 = cocos2d::CCArray::count(*(CCArray **)(lVar25 + 0x1a0)), 1 < uVar12) {
          pCVar16 = cocos2d::CCArray::objectAtIndex(*(CCArray **)(lVar25 + 0x1a0),1);
          cocos2d::CCPoint::CCPoint((CCPoint *)local_e8,(CCPoint *)(pCVar16 + 0x38));
          if (fVar39 <= local_e8[0]) break;
          cocos2d::CCArray::removeObjectAtIndex(*(CCArray **)(lVar25 + 0x1a0),0,true);
        }
      }
    }
    else {
      this = cocos2d::CCDirector::sharedDirector();
      pfVar17 = (float *)cocos2d::CCDirector::getWinSize(this);
      fVar39 = *pfVar17;
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_d8 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_d8);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      plVar5 = DAT_1406c2ed8;
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_d8 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_d8);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      fVar37 = *(float *)(DAT_1406c2ed8[0x41] + 0x1a8);
      fVar33 = *(float *)(plVar5[0x41] + 0x50c);
      lVar25 = *(longlong *)(param_1 + 0x7b0);
      uVar12 = cocos2d::CCArray::count(*(CCArray **)(lVar25 + 0x1a0));
      if (1 < uVar12) {
        while (uVar12 = cocos2d::CCArray::count(*(CCArray **)(lVar25 + 0x1a0)), 1 < uVar12) {
          pCVar16 = cocos2d::CCArray::objectAtIndex(*(CCArray **)(lVar25 + 0x1a0),1);
          cocos2d::CCPoint::CCPoint((CCPoint *)local_e8,(CCPoint *)(pCVar16 + 0x38));
          if (local_e8[0] <= fVar39 / fVar37 + fVar33) break;
          cocos2d::CCArray::removeObjectAtIndex(*(CCArray **)(lVar25 + 0x1a0),0,true);
        }
      }
    }
  }
  dVar6 = DAT_140622e48;
  plVar5 = *(longlong **)(param_1 + 0xc10);
  if (plVar5 != (longlong *)0x0) {
    if ((((param_1[0x9bd] == (CCNode)0x0) || (param_1[0x985] == (CCNode)0x0)) ||
        (param_1[0x99c] != (CCNode)0x0)) ||
       (((param_1[0xa1c] == (CCNode)0x0 || (*(double *)(param_1 + 0x830) <= _DAT_140622d40)) ||
        (DAT_140622e48 <= *(double *)(param_1 + 0x830))))) {
      cVar10 = (**(code **)(*plVar5 + 0x148))();
      if ((cVar10 != '\0') &&
         (pCVar23 = cocos2d::CCNode::getActionByTag(*(CCNode **)(param_1 + 0xc10),9),
         pCVar23 == (CCAction *)0x0)) {
        cocos2d::CCNode::stopAllActions(*(CCNode **)(param_1 + 0xc10));
        pCVar18 = cocos2d::CCScaleTo::create(DAT_140622a50,DAT_1406229ec,fVar38);
        pCVar24 = cocos2d::CCHide::create();
        pCVar22 = cocos2d::CCSequence::create((CCFiniteTimeAction *)pCVar18,pCVar24,0);
        (**(code **)(*(longlong *)pCVar22 + 0x40))(pCVar22,9);
        cocos2d::CCNode::runAction(*(CCNode **)(param_1 + 0xc10),(CCAction *)pCVar22);
        cocos2d::CCParticleSystem::stopSystem(*(CCParticleSystem **)(param_1 + 0x8e0));
      }
    }
    else {
      cVar10 = (**(code **)(*plVar5 + 0x148))();
      if (cVar10 == '\0') {
        cocos2d::CCNode::stopAllActions(*(CCNode **)(param_1 + 0xc10));
        (**(code **)(**(longlong **)(param_1 + 0xc10) + 0xa0))();
        (**(code **)(**(longlong **)(param_1 + 0xc10) + 0x140))(*(longlong **)(param_1 + 0xc10),1);
        fVar39 = DAT_140622bd8;
        fVar38 = DAT_1406229ec;
        pCVar18 = cocos2d::CCScaleTo::create(DAT_1406229ec,DAT_140622ce0,DAT_140622bd8);
        fVar37 = DAT_140622cc8;
        pCVar19 = cocos2d::CCScaleTo::create(fVar38,DAT_140622b7c,DAT_140622cc8);
        fVar33 = DAT_140622dc8;
        pCVar20 = cocos2d::CCScaleTo::create(fVar38,DAT_140622dc8,fVar39);
        pCVar21 = cocos2d::CCScaleTo::create(fVar38,fVar39,fVar37);
        local_118 = cocos2d::CCScaleTo::create(fVar38,fVar33,fVar39);
        local_110 = 0;
        pCVar22 = cocos2d::CCSequence::create((CCFiniteTimeAction *)pCVar18,pCVar19,pCVar20,pCVar21)
        ;
        cocos2d::CCNode::runAction(*(CCNode **)(param_1 + 0xc10),(CCAction *)pCVar22);
        cocos2d::CCParticleSystem::resumeSystem(*(CCParticleSystem **)(param_1 + 0x8e0));
      }
    }
  }
  if ((((param_1[0x9bd] == (CCNode)0x0) || (param_1[0x985] == (CCNode)0x0)) ||
      (param_1[0x99c] != (CCNode)0x0)) ||
     (((param_1[0xa1c] == (CCNode)0x0 || (*(double *)(param_1 + 0x830) <= DAT_140622cf0)) ||
      ((dVar6 <= *(double *)(param_1 + 0x830) || (param_1[0x72b] != (CCNode)0x0)))))) {
    cVar10 = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x4d8))();
    if (cVar10 != '\0') {
      cocos2d::CCParticleSystem::stopSystem(*(CCParticleSystem **)(param_1 + 0x8e0));
    }
  }
  else {
    cVar10 = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x4d8))();
    if (cVar10 == '\0') {
      cocos2d::CCParticleSystem::resumeSystem(*(CCParticleSystem **)(param_1 + 0x8e0));
    }
  }
  param_1[0x8b0] = (CCNode)0x0;
  if (*(longlong *)(param_1 + 0x730) == 0) goto LAB_140389e45;
  if (param_1[0x9bd] == (CCNode)0x0) {
    if (param_1[0x9be] != (CCNode)0x0) {
      lVar25 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x8a8) + 0x318) + 200))();
      fVar38 = *(float *)(lVar25 + 4) * fVar8 + DAT_140622e58;
      goto LAB_140389dd1;
    }
    pCVar13 = (CCPoint *)&DAT_1406c2450;
  }
  else {
    lVar25 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x8a0) + 0x318) + 200))();
    fVar38 = *(float *)(lVar25 + 4) * fVar8 + DAT_140623038;
LAB_140389dd1:
    cocos2d::CCPoint::CCPoint((CCPoint *)local_e8,0.0,fVar38);
    pCVar13 = (CCPoint *)local_e8;
  }
  pCVar13 = (CCPoint *)cocos2d::CCPoint::CCPoint((CCPoint *)&local_e0,pCVar13);
  cocos2d::CCPoint::operator=((CCPoint *)(*(longlong *)(param_1 + 0x730) + 0x18c),pCVar13);
LAB_140389e45:
  if (param_1[0x9e4] != (CCNode)0x0) {
    FUN_140396d20(param_1);
  }
  if (param_1[0x9c4] != (CCNode)0x0) {
    lVar25 = **(longlong **)(param_1 + 0x8f0);
    fVar39 = (float)(**(code **)(*(longlong *)param_1 + 0x158))(param_1);
    fVar38 = DAT_1406231d0;
    (**(code **)(lVar25 + 0x3d8))
              (*(undefined8 *)(param_1 + 0x8f0),
               (float)(-(param_1[0x9c2] != (CCNode)0x0) & 0x5a) +
               ((DAT_1406231d0 - fVar39) - DAT_1406233a4));
    lVar25 = **(longlong **)(param_1 + 0x8f8);
    uVar12 = (**(code **)(*(longlong *)param_1 + 0x158))(param_1);
    (**(code **)(lVar25 + 0x3d8))
              (*(undefined8 *)(param_1 + 0x8f8),
               (float)(int)(-(uint)(param_1[0x9c2] != (CCNode)0x0) & 0xffffffa6) +
               (((float)(uVar12 ^ DAT_1406243f0) - fVar38) - DAT_1406233a4));
  }
  param_1[0x989] = param_1[0x985];
  param_1[0x98a] = param_1[0x986];
  *(undefined4 *)(param_1 + 0x98b) = 0;
  *(int *)(param_1 + 0xb74) = *(int *)(param_1 + 0xb74) + -1;
  *(int *)(param_1 + 0xb78) = *(int *)(param_1 + 0xb78) + -1;
  *(int *)(param_1 + 0xb80) = *(int *)(param_1 + 0xb80) + -1;
  *(int *)(param_1 + 0xb7c) = *(int *)(param_1 + 0xb7c) + -1;
  *(int *)(param_1 + 0xadc) = *(int *)(param_1 + 0xadc) + -1;
  iVar29 = *(int *)(param_1 + 0xae8) - _UNK_140623f54;
  iVar31 = *(int *)(param_1 + 0xaec) - _UNK_140623f58;
  iVar32 = *(int *)(param_1 + 0xaf0) - _UNK_140623f5c;
  *(int *)(param_1 + 0xae4) = *(int *)(param_1 + 0xae4) - _DAT_140623f50;
  *(int *)(param_1 + 0xae8) = iVar29;
  *(int *)(param_1 + 0xaec) = iVar31;
  *(int *)(param_1 + 0xaf0) = iVar32;
  *(int *)(param_1 + 0xb88) = *(int *)(param_1 + 0xb88) + -1;
  cocos2d::CCPoint::operator=((CCPoint *)(param_1 + 0xb8c),(CCPoint *)&DAT_1406c2450);
  FUN_1400cdcd0(param_1 + 0xb98);
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    pcVar26 = (char *)FUN_140386060(local_d0,*(undefined4 *)(param_1 + 0x92c),
                                    (float)*(double *)(param_1 + 0xaa0));
    if (0xf < *(ulonglong *)(pcVar26 + 0x18)) {
      pcVar26 = *(char **)pcVar26;
    }
    lVar25 = *(longlong *)(*(longlong *)(param_1 + 0x7a8) + 0x158);
    this_00 = cocos2d::CCTextureCache::sharedTextureCache();
    pCVar27 = cocos2d::CCTextureCache::addImage(this_00,pcVar26,false);
    (**(code **)(lVar25 + 0x18))(*(longlong *)(param_1 + 0x7a8) + 0x158,pCVar27);
    FUN_14003a830(local_d0);
  }
  if (((param_1[0xb70] != (CCNode)0x0) && (param_1[0x9e4] != (CCNode)0x0)) &&
     ((*(longlong *)(param_1 + 0x590) != 0 &&
      ((fVar38 = *(float *)(*(longlong *)(param_1 + 0x590) + 0x750), 0.0 < fVar38 &&
       ((double)fVar38 < *(double *)(param_1 + 0xaa0) - *(double *)(param_1 + 0x588))))))) {
    FUN_140396650(param_1);
    param_1[0x985] = (CCNode)0x0;
  }
  return;
}

