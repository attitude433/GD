// Called from triggerObject base / 0x4bc180
// Function: FUN_14020fdb0 @ 0x20fdb0


void FUN_14020fdb0(longlong param_1,longlong *param_2,CCObject *param_3)

{
  char cVar1;
  CCObject CVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  CCPoint *pCVar8;
  CCArray *this;
  CCObject *pCVar9;
  float *pfVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  CCHide *pCVar15;
  CCDelayTime *pCVar16;
  CCSequence *pCVar17;
  CCDirector *this_00;
  int iVar18;
  int iVar19;
  CCObject *pCVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  undefined4 uVar27;
  float local_res10;
  float local_res14;
  undefined2 local_res18;
  CCObject local_res1a;
  CCPoint local_res20 [8];
  CCPoint local_d8 [8];
  CCPoint local_d0 [8];
  CCPoint local_c8 [8];
  CCPoint local_c0 [8];
  undefined8 local_b8;
  CCPoint local_b0 [120];
  
  if (param_3 == (CCObject *)0x0) {
    param_3 = *(CCObject **)(param_1 + 0xda0);
  }
  param_3[0x560] = (CCObject)0x1;
  iVar18 = *(int *)((longlong)param_2 + 0x40c);
  plVar14 = (longlong *)param_2[0xe9];
  if (plVar14 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar14 + 0x670))(plVar14,&local_res10);
    lVar7 = (**(code **)(*param_2 + 0x670))(param_2,&local_res18);
    *(float *)((longlong)param_2 + 0x754) = *(float *)(lVar6 + 4) - *(float *)(lVar7 + 4);
  }
  pCVar8 = (CCPoint *)(**(code **)(*(longlong *)param_3 + 200))(param_3);
  cocos2d::CCPoint::CCPoint(local_d8,pCVar8);
  pCVar9 = (CCObject *)param_2[0xe9];
  if (pCVar9 == (CCObject *)0x0) {
    if (0 < (int)param_2[0xb9]) {
      this = (CCArray *)FUN_140224280(param_1);
      uVar4 = cocos2d::CCArray::count(this);
      if (0 < (int)uVar4) {
        if (uVar4 == 1) {
LAB_14020fef6:
          fVar25 = 0.0;
        }
        else {
          DAT_1406c2ef8 = DAT_1406c2ef8 * 0x343fd + 0x269ec3;
          fVar25 = (float)((uint)((ulonglong)DAT_1406c2ef8 >> 0x10) & 0x7fff) / DAT_140623644;
          if (fVar25 == DAT_140622c24) goto LAB_14020fef6;
        }
        pCVar9 = cocos2d::CCArray::objectAtIndex(this,(int)((float)(int)uVar4 * fVar25));
        if (pCVar9 != (CCObject *)0x0) goto LAB_14020ff24;
        goto LAB_140210063;
      }
    }
    pCVar9 = (CCObject *)0x0;
  }
  else {
LAB_14020ff24:
    pCVar8 = (CCPoint *)(**(code **)(*param_2 + 200))(param_2);
    pCVar8 = (CCPoint *)cocos2d::CCPoint::CCPoint((CCPoint *)&local_res18,pCVar8);
    cocos2d::CCPoint::operator=((CCPoint *)(param_3 + 0xa00),pCVar8);
    *(longlong **)(param_3 + 0xa80) = param_2;
    *(undefined4 *)(param_3 + 0xc3c) = 0;
    if (*(int *)((longlong)param_2 + 0x40c) == 0x2eb) {
      fVar25 = *(float *)((longlong)param_2 + 0x754);
      lVar6 = (**(code **)(*param_2 + 0x4a8))(param_2,&local_res18);
      fVar22 = *(float *)(lVar6 + 4);
      pfVar10 = (float *)(**(code **)(*(longlong *)param_3 + 200))(param_3);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,*pfVar10,fVar25 + fVar22);
    }
    else {
      (**(code **)(*(longlong *)pCVar9 + 0x4a8))(pCVar9,&local_res10);
    }
    if ((char)param_2[0xee] != '\0') {
      (**(code **)(*(longlong *)param_3 + 200))(param_3);
      pCVar8 = (CCPoint *)(**(code **)(*param_2 + 0x4a8))(param_2,local_res20);
      cocos2d::CCPoint::operator-(pCVar8,(CCPoint *)&local_res18);
      cocos2d::CCPoint::operator-((CCPoint *)&local_res10,local_res20);
      cocos2d::CCPoint::operator=((CCPoint *)&local_res10,local_res20);
    }
    if (*(char *)((longlong)param_2 + 0x771) != '\0') {
      pfVar10 = (float *)(**(code **)(*(longlong *)param_3 + 200))(param_3);
      local_res10 = *pfVar10;
    }
    if (*(char *)((longlong)param_2 + 0x772) != '\0') {
      lVar6 = (**(code **)(*(longlong *)param_3 + 200))(param_3);
      local_res14 = *(float *)(lVar6 + 4);
    }
    (**(code **)(*(longlong *)param_3 + 0xb8))(param_3,&local_res10);
  }
LAB_140210063:
  iVar5 = *(int *)((longlong)param_2 + 0x774);
  if (0 < iVar5) {
    if (iVar5 == 1) {
      bVar21 = false;
    }
    else if (iVar5 == 2) {
      bVar21 = true;
    }
    else {
      if (iVar5 != 3) goto LAB_14021009e;
      bVar21 = param_3[0x9bf] == (CCObject)0x0;
    }
    FUN_14039a1d0(param_3,bVar21,1);
  }
LAB_14021009e:
  if (iVar18 != 0xbce) {
    FUN_1401993b0(param_2);
    (**(code **)(*param_2 + 0x558))(param_2,param_3);
  }
  uVar3 = DAT_1406233a4;
  uVar27 = DAT_1406231e0;
  if (pCVar9 == (CCObject *)0x0) {
    (**(code **)(*param_2 + 0x4e8))(param_2);
    (**(code **)(*param_2 + 0x168))(param_2);
  }
  else {
    if (*(char *)((longlong)param_2 + 0x41c) == '\0') {
      local_res10 = (float)CONCAT22(local_res10._2_2_,0xff00);
      local_res18 = 0xff00;
      local_res1a = (CCObject)0xff;
      FUN_140397760(param_3,&local_res18,DAT_1406231e0);
    }
    (**(code **)(*(longlong *)pCVar9 + 0x168))(pCVar9);
    (**(code **)(*(longlong *)pCVar9 + 0x4e8))(pCVar9);
    pCVar8 = (CCPoint *)(**(code **)(*(longlong *)pCVar9 + 200))(pCVar9);
    pCVar8 = (CCPoint *)cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,pCVar8);
    cocos2d::CCPoint::operator=((CCPoint *)(param_3 + 0xa00),pCVar8);
    *(CCObject **)(param_3 + 0xa80) = pCVar9;
    FUN_1401993b0(pCVar9);
    if (*(char *)((longlong)param_2 + 0x41c) == '\0') {
      local_res10 = (float)CONCAT22(local_res10._2_2_,0xc8ff);
      local_res18 = 0xc8ff;
      local_res1a = (CCObject)0x0;
      FUN_140397760(param_3,&local_res18,uVar27);
    }
    FUN_14038b5e0(param_3);
    if (param_3[0x9bc] != (CCObject)0x0) {
      FUN_1403a0680(param_3);
    }
    if (*(char *)((longlong)param_2 + 0x41c) == '\0') {
      if (iVar18 == 0xbce) {
        cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,local_d8);
        lVar6 = *(longlong *)param_3;
        pCVar20 = param_3;
      }
      else {
        pCVar8 = (CCPoint *)(**(code **)(*param_2 + 200))(param_2);
        cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,pCVar8);
        lVar6 = *(longlong *)pCVar9;
        pCVar20 = pCVar9;
      }
      pCVar8 = (CCPoint *)(**(code **)(lVar6 + 200))(pCVar20);
      cocos2d::CCPoint::CCPoint(local_res20,pCVar8);
      local_res18 = *(undefined2 *)(param_3 + 0xa8a);
      local_res1a = param_3[0xa8c];
      pCVar8 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_c8,local_res20);
      uVar11 = cocos2d::CCPoint::CCPoint(local_c0,(CCPoint *)&local_res10);
      cocos2d::CCPoint::operator-(pCVar8,local_d0);
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_b8 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_b8);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      if (*(char *)((longlong)DAT_1406c2ed8 + 0x395) == '\0') {
        uVar12 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_b8,(CCPoint *)&DAT_1406c1d28);
        uVar13 = cocos2d::CCPoint::CCPoint(local_b0,local_d0);
        plVar14 = (longlong *)FUN_1400445b0(uVar13,uVar12,DAT_140622a74);
        (**(code **)(*plVar14 + 0xb8))(plVar14,uVar11);
        (**(code **)plVar14[0x28])(plVar14 + 0x28,&local_res18);
        *(undefined4 *)(plVar14 + 0x2e) = 0x40800000;
        *(undefined2 *)((longlong)plVar14 + 0x174) = 0x101;
        *(undefined4 *)((longlong)plVar14 + 0x17c) = 0x3f800000;
        *(undefined4 *)((longlong)plVar14 + 0x15c) = 100;
        (**(code **)(**(longlong **)(param_1 + 0xfe8) + 0x1b8))
                  (*(longlong **)(param_1 + 0xfe8),plVar14,0);
      }
      (**(code **)(**(longlong **)(param_1 + 0x31f8) + 0x140))(*(longlong **)(param_1 + 0x31f8),1);
      pCVar15 = cocos2d::CCHide::create();
      pCVar16 = cocos2d::CCDelayTime::create(DAT_140622a04);
      pCVar17 = cocos2d::CCSequence::create((CCFiniteTimeAction *)pCVar16,pCVar15,0);
      cocos2d::CCNode::runAction(*(CCNode **)(param_1 + 0x31f8),(CCAction *)pCVar17);
    }
  }
  if ((char)param_2[0xeb] != '\0') {
    *(undefined4 *)(param_1 + 0x500) = 0x3f000000;
  }
  this_00 = cocos2d::CCDirector::sharedDirector();
  fVar25 = (float)cocos2d::CCDirector::getWinSize(this_00);
  uVar27 = DAT_140623210;
  if ((char)param_2[0xeb] != '\0') {
    uVar27 = uVar3;
  }
  if (pCVar9 != (CCObject *)0x0) {
    param_3[0xa0c] = (CCObject)0x0;
    cocos2d::CCPoint::operator=((CCPoint *)(param_3 + 0xa2c),(CCPoint *)&DAT_1406c2450);
    fVar25 = (float)FUN_1403a0680(param_3);
  }
  if ((char)param_2[0xec] == '\0') {
    if (*(char *)((longlong)param_2 + 0x759) != '\0') {
      cVar1 = (char)param_2[0xef];
      if ((*(float *)((longlong)param_2 + 0x75c) == 0.0) && (cVar1 == '\0')) {
        param_3[0x952] = (CCObject)0x0;
        *(longlong *)(param_3 + 0x9a0) = 0;
        if (param_3[0xb70] != (CCObject)0x0) {
          *(longlong *)(param_3 + 0xaf8) = 0;
          param_3[0xb94] = (CCObject)0x0;
        }
      }
      else {
        cocos2d::ccpForAngle(fVar25);
        fVar25 = local_res14 * local_res14 + local_res10 * local_res10;
        if (fVar25 < 0.0) {
          fVar22 = sqrtf(fVar25);
        }
        else {
          fVar22 = SQRT(fVar25);
        }
        if (0.0 < fVar22) {
          cocos2d::CCPoint::operator*((CCPoint *)&local_res10,fVar25);
          cocos2d::CCPoint::operator=((CCPoint *)&local_res10,(CCPoint *)&local_res18);
          fVar25 = local_res10;
          if (param_3[0x9c3] != (CCObject)0x0) {
            local_res10 = local_res14;
            local_res14 = fVar25;
          }
          pfVar10 = (float *)cocos2d::CCPoint::CCPoint
                                       ((CCPoint *)&local_res18,(CCPoint *)&local_res10);
          param_3[0x952] = (CCObject)0x1;
          dVar26 = (double)pfVar10[1];
          if (cVar1 != '\0') {
            dVar26 = dVar26 + *(double *)(param_3 + 0x9a0);
          }
          *(double *)(param_3 + 0x9a0) = dVar26;
          if (param_3[0xb70] != (CCObject)0x0) {
            dVar26 = (double)*pfVar10;
            if (cVar1 != '\0') {
              dVar26 = dVar26 + *(double *)(param_3 + 0xaf8);
            }
            *(double *)(param_3 + 0xaf8) = dVar26;
            param_3[0xb94] = (CCObject)0x1;
          }
        }
      }
    }
  }
  else {
    FUN_14039fc60(param_3);
  }
  if (*(char *)((longlong)param_2 + 0x779) != '\0') {
    *(undefined2 *)(param_1 + 0x760) = 0x101;
  }
  if (*(char *)((longlong)param_2 + 0x77a) != '\0') {
    pCVar8 = (CCPoint *)(**(code **)(*(longlong *)param_3 + 200))(param_3);
    pCVar8 = (CCPoint *)cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,pCVar8);
    cocos2d::CCPoint::operator=((CCPoint *)(param_3 + 0xa2c),pCVar8);
  }
  if ((param_3[0x9e4] == (CCObject)0x0) || (*(char *)((longlong)param_2 + 0x77b) == '\0'))
  goto LAB_14021079d;
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&local_res10,(float)*(double *)(param_3 + 0x570),
             (float)*(double *)(param_3 + 0x578));
  fVar22 = local_res14;
  fVar25 = local_res10;
  atan2f(local_res14,local_res10);
  fVar23 = (float)FUN_14022e8b0();
  if (fVar23 != 0.0) {
    fVar24 = cosf(fVar23);
    fVar23 = sinf(fVar23);
    pCVar8 = (CCPoint *)
             cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&local_res18,fVar24 * fVar25 - fVar23 * fVar22,
                        fVar23 * fVar25 + fVar24 * fVar22);
    cocos2d::CCPoint::operator=((CCPoint *)&local_res10,pCVar8);
    fVar25 = local_res10;
    fVar22 = local_res14;
  }
  fVar23 = atan2f(fVar22,fVar25);
  iVar5 = (int)(float)((uint)(fVar23 * DAT_140623200) ^ DAT_1406243f0);
  CVar2 = param_3[0x9c3];
  iVar18 = iVar5 + -0x5a;
  if (CVar2 == (CCObject)0x0) {
    iVar18 = iVar5;
  }
  iVar19 = iVar18 % 0x168;
  iVar5 = iVar19 + 0x168;
  if (-1 < iVar19) {
    iVar5 = iVar19;
  }
  *(double *)(param_3 + 0x580) = (double)-iVar5;
  fVar23 = fVar25;
  fVar24 = fVar22;
  if (CVar2 != (CCObject)0x0) {
    fVar23 = fVar22;
    fVar24 = fVar25;
    local_res10 = fVar22;
    local_res14 = fVar25;
  }
  dVar26 = (double)fVar23;
  *(double *)(param_3 + 0x570) = dVar26;
  *(double *)(param_3 + 0x578) = (double)fVar24;
  if (0.0 <= dVar26) {
    if (0.0 < dVar26) {
      uVar4 = (uint)(byte)CVar2;
      goto LAB_14021078d;
    }
  }
  else {
    uVar4 = CONCAT31((int3)((uint)(iVar18 / 0x168) >> 8),CVar2 == (CCObject)0x0);
LAB_14021078d:
    FUN_140398510(param_3,uVar4);
  }
  FUN_1403961c0(param_3);
LAB_14021079d:
  if (pCVar9 != (CCObject *)0x0) {
    FUN_140239ba0(param_1,param_3,uVar27);
  }
  FUN_140231ff0(param_1,0x19,0);
  return;
}

