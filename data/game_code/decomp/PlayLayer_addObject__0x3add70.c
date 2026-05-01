// Function: FUN_1403add70
// Original target: PlayLayer_addObject @ 0x3add70
// Ghidra entry: 1403add70
// Signature: undefined FUN_1403add70(void)


void FUN_1403add70(longlong *param_1,CCNode *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined3 *puVar11;
  CCPoint *pCVar12;
  longlong lVar13;
  undefined8 uVar14;
  CCString *this;
  CCObject *pCVar15;
  char *pcVar16;
  uint uVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float local_res10;
  float local_res14;
  CCNode *local_res18 [2];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  
  if (param_2 == (CCNode *)0x0) {
    return;
  }
  iVar4 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
  if (iVar4 == 0x19) {
    FUN_14019c2c0();
  }
  else {
    FUN_1401a1730(param_2);
  }
  (**(code **)(*(longlong *)param_2 + 0x140))(param_2,0);
  pfVar7 = (float *)(**(code **)(*(longlong *)param_2 + 0x670))(param_2,&local_res10);
  if (*(float *)(param_1 + 0x71a) <= *pfVar7 && *pfVar7 != *(float *)(param_1 + 0x71a)) {
    puVar8 = (undefined4 *)(**(code **)(*(longlong *)param_2 + 0x670))(param_2,&local_res10);
    *(undefined4 *)(param_1 + 0x71a) = *puVar8;
  }
  iVar4 = -1;
  if (((*(int *)(param_2 + 0x40c) == 0xe1d) || (*(int *)(param_2 + 0x40c) == 0xe4e)) ||
     ((iVar5 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2), iVar5 == 0x14 &&
      (((*(int *)(param_2 + 0x4e8) != 1 || (param_2[0x5d0] == (CCNode)0x0)) &&
       (*(int *)(param_2 + 0x40c) != 0x80f)))))) {
    *(undefined4 *)(param_2 + 0x278) = 0xffffffff;
  }
  else {
    (**(code **)(*param_1 + 0x478))(param_1,param_2);
  }
  cocos2d::CCArray::addObject((CCArray *)param_1[0x1b7],(CCObject *)param_2);
  FUN_140223f40(param_1,param_2,1);
  if (*(int *)(param_2 + 0x40c) == 0x64f) {
    local_res10 = *(float *)(param_2 + 0x6a0);
    if ((int)*(float *)(param_2 + 0x77c) < 0) {
      local_res10 = *(float *)(param_2 + 0x77c);
    }
    local_res18[0] = param_2;
    if (param_2[0x780] == (CCNode)0x0) {
      plVar9 = (longlong *)FUN_14024eaf0(param_1 + 0x207,&local_58,&local_res10);
      lVar13 = *plVar9;
      puVar18 = *(undefined8 **)(lVar13 + 0x20);
      if (puVar18 == *(undefined8 **)(lVar13 + 0x28)) goto LAB_1403adf09;
      *puVar18 = param_2;
      *(longlong *)(lVar13 + 0x20) = *(longlong *)(lVar13 + 0x20) + 8;
    }
    else {
      plVar9 = (longlong *)FUN_14024eaf0(param_1 + 0x20f,&local_58,&local_res10);
      lVar13 = *plVar9;
      puVar18 = *(undefined8 **)(lVar13 + 0x20);
      if (puVar18 == *(undefined8 **)(lVar13 + 0x28)) {
LAB_1403adf09:
        FUN_140063110(lVar13 + 0x18,puVar18,local_res18);
      }
      else {
        *puVar18 = param_2;
        *(longlong *)(lVar13 + 0x20) = *(longlong *)(lVar13 + 0x20) + 8;
      }
    }
  }
  else {
    iVar5 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
    if ((iVar5 == 0x1e) ||
       (iVar5 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2), iVar5 == 0x1f)) {
      cocos2d::CCArray::addObject((CCArray *)param_1[0x718],(CCObject *)param_2);
    }
  }
  iVar5 = *(int *)(param_2 + 0x294);
  fVar21 = 0.0;
  if (((iVar5 != 0) && (iVar5 != 0x3f2)) && ((iVar5 != 0x3f3 && (iVar5 == 0x3f4)))) {
    _uStack_4c = CONCAT22(uStack_4a,0x100);
    local_res18[0] =
         (CCNode *)
         CONCAT53(local_res18[0]._3_5_,*(undefined3 *)(*(longlong *)(param_2 + 0x4f8) + 0x147));
    local_58 = 0;
    uStack_54 = 0x3f266666;
    uStack_50 = 0x3e19999a;
    puVar10 = (undefined2 *)FUN_1400652c0(&local_res10,local_res18,&local_58,param_4,0,0x3e19999a);
    *(undefined2 *)(param_2 + 0x281) = *puVar10;
    param_2[0x283] = *(CCNode *)(puVar10 + 1);
  }
  if ((((*(longlong *)(param_2 + 0x380) != 0) && (iVar5 = *(int *)(param_2 + 0x298), iVar5 != 0)) &&
      (iVar5 != 0x3f2)) && ((iVar5 != 0x3f3 && (iVar5 == 0x3f4)))) {
    _uStack_4c = CONCAT22(uStack_4a,0x100);
    uVar20 = _uStack_4c;
    uVar22 = 0;
    uVar23 = 0x3e19999a;
    puVar11 = (undefined3 *)(**(code **)(*(longlong *)(param_2 + 0x140) + 8))();
    uStack_54 = 0x3f266666;
    local_res18[0] = (CCNode *)CONCAT53(local_res18[0]._3_5_,*puVar11);
    local_58 = uVar22;
    uStack_50 = uVar23;
    _uStack_4c = uVar20;
    puVar10 = (undefined2 *)FUN_1400652c0(&local_res10,local_res18,&local_58);
    *(undefined2 *)(param_2 + 0x281) = *puVar10;
    param_2[0x283] = *(CCNode *)(puVar10 + 1);
  }
  if (((param_2[0x4ec] != (CCNode)0x0) && (*(int *)(param_2 + 0x4e8) == 1)) &&
     (((param_2[0x5d0] == (CCNode)0x0 && (param_2[0x5d1] == (CCNode)0x0)) ||
      (cVar1 = (**(code **)(*(longlong *)param_2 + 0x5f0))(param_2), cVar1 != '\0')))) {
    cocos2d::CCArray::addObject((CCArray *)param_1[0x1b9],(CCObject *)param_2);
  }
  if (*(char *)((longlong)param_1 + 0x309e) != '\0') {
    param_2[0x2c8] = (CCNode)0x0;
  }
  if (*(int *)(param_2 + 0x40c) == 0x2eb) {
    pCVar12 = (CCPoint *)(**(code **)(*(longlong *)param_2 + 200))(param_2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,pCVar12);
    fVar19 = *(float *)(param_2 + 0x754);
    lVar13 = (**(code **)(*(longlong *)param_2 + 200))(param_2);
    local_res14 = fVar19 + *(float *)(lVar13 + 4);
    fVar19 = (float)FUN_1404b2440(param_2,param_1[0x15a]);
    local_res10 = local_res10 + fVar19;
    plVar9 = (longlong *)FUN_1404b21c0("portal_16_front_001.png",0);
    *(longlong **)(param_2 + 0x748) = plVar9;
    *(undefined4 *)((longlong)plVar9 + 0x40c) = 0x2ed;
    (**(code **)(*plVar9 + 0x448))(plVar9);
    lVar13 = *plVar9;
    uVar14 = cocos2d::CCPoint::CCPoint((CCPoint *)local_res18,(CCPoint *)&local_res10);
    (**(code **)(lVar13 + 0x4b0))(plVar9,uVar14);
    lVar13 = *plVar9;
    *(undefined1 *)((longlong)plVar9 + 0x424) = 1;
    *(undefined4 *)(plVar9 + 0x8e) = *(undefined4 *)(param_2 + 0x470);
    *(undefined4 *)(plVar9 + 0x84) = *(undefined4 *)(param_2 + 0x420);
    cVar1 = (**(code **)(*(longlong *)param_2 + 0x4e8))(param_2);
    (**(code **)(lVar13 + 0x430))(plVar9,cVar1 == '\0');
    cVar1 = (**(code **)(*(longlong *)param_2 + 0x4e8))(param_2);
    *(bool *)((longlong)plVar9 + 0x3ec) = cVar1 == '\0';
    *(CCNode *)((longlong)plVar9 + 0x41a) = param_2[0x41a];
    *(CCNode *)((longlong)plVar9 + 0x41b) = param_2[0x41b];
    *(CCNode *)((longlong)plVar9 + 0x41c) = param_2[0x41c];
    uVar20 = (**(code **)(*(longlong *)param_2 + 0x158))(param_2);
    (**(code **)(*plVar9 + 0x150))(plVar9,uVar20);
    *(undefined4 *)((longlong)plVar9 + 0x3d4) = uVar20;
    *(undefined4 *)(plVar9 + 0x7b) = uVar20;
    FUN_14019c940(plVar9,param_2);
    FUN_140198650(plVar9,*(undefined4 *)(param_2 + 0x488));
    FUN_1401986e0(plVar9,*(undefined4 *)(param_2 + 0x48c));
    *(undefined4 *)(plVar9 + 0xa6) = *(undefined4 *)(param_2 + 0x530);
    *(undefined4 *)((longlong)plVar9 + 0x534) = *(undefined4 *)(param_2 + 0x534);
    if (param_2[0x516] != (CCNode)0x0) {
      *(undefined1 *)((longlong)plVar9 + 0x516) = 1;
    }
    (**(code **)(*plVar9 + 0x5a8))(plVar9);
    FUN_1403add70(param_1,plVar9);
  }
  iVar5 = *(int *)(param_2 + 0x40c);
  if (iVar5 < 0x11f) {
    if (iVar5 == 0x11e) goto switchD_1403ae2f2_caseD_a;
    switch(iVar5) {
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 99:
    case 0x65:
    case 0x6f:
      goto switchD_1403ae2f2_caseD_a;
    case 0xf:
    case 0x10:
    case 0x11:
      uVar17 = *(uint *)((longlong)param_1 + 0x38cc);
      if ((int)*(uint *)((longlong)param_1 + 0x38cc) < 0) {
        uVar17 = 0;
      }
      if (3 < (int)uVar17) {
        uVar17 = 3;
      }
      this = cocos2d::CCString::createWithFormat("rod_ball_%02d_001.png",(ulonglong)uVar17);
      pcVar16 = cocos2d::CCString::getCString(this);
      pCVar15 = (CCObject *)FUN_14018dc20(pcVar16);
      *(undefined4 *)(pCVar15 + 0x40c) = 0x25;
      (**(code **)(*(longlong *)pCVar15 + 0x448))(pCVar15);
      uVar17 = *(uint *)(param_2 + 0x294);
      if ((uVar17 != 0x3ec) && (*(uint **)(pCVar15 + 0x450) != (uint *)0x0)) {
        if ((int)uVar17 < 0) {
          uVar17 = 0;
        }
        uVar6 = 0x44d;
        if (((int)uVar17 < 0x44e) && (uVar6 = uVar17, (int)uVar17 < 0)) {
          uVar6 = 0x3f3;
        }
        **(uint **)(pCVar15 + 0x450) = uVar6;
      }
      if (*(undefined8 **)(param_2 + 0x450) != (undefined8 *)0x0) {
        **(undefined8 **)(param_2 + 0x450) = 0;
      }
      (**(code **)(*(longlong *)param_2 + 0x5a8))(param_2);
      (**(code **)(*(longlong *)pCVar15 + 0x5a8))(pCVar15);
      *(undefined8 *)(param_2 + 0x530) = 0;
      *(undefined8 *)(pCVar15 + 0x530) = 0;
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)local_res18,*(float *)(param_2 + 0x1b0) * DAT_140622b08,
                 *(float *)(param_2 + 0x1b4) + DAT_14062307c);
      cocos2d::CCNode::convertToWorldSpace(param_2,(CCPoint *)&local_res10);
      lVar13 = *(longlong *)pCVar15;
      uVar14 = cocos2d::CCNode::convertToNodeSpace((CCNode *)param_1[0x15b],(CCPoint *)local_res18);
      (**(code **)(lVar13 + 0x4b0))(pCVar15,uVar14);
      (**(code **)(*(longlong *)pCVar15 + 0xa0))(pCVar15,DAT_140622a10);
      (**(code **)(*param_1 + 0x478))(param_1,pCVar15);
      cocos2d::CCArray::addObject((CCArray *)param_1[0x1b7],pCVar15);
      (**(code **)(*(longlong *)pCVar15 + 0x140))(pCVar15,0);
      FUN_14019c940(pCVar15,param_2);
      FUN_140223f40(param_1,pCVar15,1);
      break;
    case 0x1d:
    case 0x1e:
    case 0x69:
      goto switchD_1403ae2f2_caseD_1d;
    case 0x1f:
      if (*(char *)(*(longlong *)(param_2 + 0x740) + 0x173) == '\0') {
        plVar9 = (longlong *)param_1[0x631];
        if (plVar9 != (longlong *)0x0) {
          iVar4 = *(int *)(plVar9[0xe8] + 0x174);
          pfVar7 = (float *)(**(code **)(*plVar9 + 200))();
          fVar21 = *pfVar7;
        }
        pfVar7 = (float *)(**(code **)(*(longlong *)param_2 + 200))(param_2);
        iVar5 = *(int *)(*(longlong *)(param_2 + 0x740) + 0x174);
        cVar1 = *(char *)(*(longlong *)(param_2 + 0x740) + 0x172);
        if (((iVar4 < iVar5) || (((fVar21 < *pfVar7 && (cVar1 == '\0')) && (iVar4 <= iVar5)))) ||
           (((*pfVar7 < fVar21 && (cVar1 != '\0')) && (iVar4 <= iVar5)))) {
          if ((CCNode *)param_1[0x631] != param_2) {
            cocos2d::CCObject::retain((CCObject *)param_2);
            if ((CCObject *)param_1[0x631] != (CCObject *)0x0) {
              cocos2d::CCObject::release((CCObject *)param_1[0x631]);
            }
            param_1[0x631] = (longlong)param_2;
          }
          *(undefined1 *)(param_1 + 0x646) = 1;
        }
      }
      break;
    case 0x24:
    case 0x54:
    case 0x8d:
      goto switchD_1403ae2f2_caseD_24;
    }
  }
  else {
    if (iVar5 < 0x3ff) {
      if (iVar5 == 0x3fe) goto switchD_1403ae2f2_caseD_24;
      if (iVar5 < 0x2ec) {
        if (((iVar5 != 0x2eb) && (iVar5 != 0x11f)) && (iVar5 != 0x294)) {
          if (iVar5 == 0x2e8) goto switchD_1403ae2f2_caseD_1d;
          if (iVar5 != 0x2e9) goto switchD_1403ae2f2_caseD_e;
        }
      }
      else if (iVar5 != 0x2ed) {
        if (((iVar5 != 899) && (iVar5 != 900)) && (iVar5 != 0x393)) goto switchD_1403ae2f2_caseD_e;
switchD_1403ae2f2_caseD_1d:
        if (param_2[0x5dd] == (CCNode)0x0) {
          if (param_2[0x5de] != (CCNode)0x0) {
            lVar13 = param_1[0x1b4];
            *(undefined2 *)(param_2 + 0x5b9) = *(undefined2 *)(lVar13 + 0xa8d);
            param_2[0x5bb] = *(CCNode *)(lVar13 + 0xa8f);
          }
        }
        else {
          lVar13 = param_1[0x1b4];
          *(undefined2 *)(param_2 + 0x5b9) = *(undefined2 *)(lVar13 + 0xa8a);
          param_2[0x5bb] = *(CCNode *)(lVar13 + 0xa8c);
        }
        goto switchD_1403ae2f2_caseD_e;
      }
    }
    else if (iVar5 < 0x78e) {
      if (iVar5 != 0x78d) {
        if (iVar5 != 0x532) {
          if (iVar5 == 0x533) goto switchD_1403ae2f2_caseD_a;
          if (iVar5 != 0x535) {
            if ((iVar5 == 0x718) && (param_2[0x69d] != (CCNode)0x0)) {
              cocos2d::CCArray::addObject((CCArray *)param_1[0x1b8],(CCObject *)param_2);
            }
            goto switchD_1403ae2f2_caseD_e;
          }
        }
switchD_1403ae2f2_caseD_24:
        FUN_140245ed0(param_1,param_2);
        goto switchD_1403ae2f2_caseD_e;
      }
    }
    else if (((iVar5 != 0x810) && (iVar5 != 0xb56)) && (iVar5 != 0xb6e))
    goto switchD_1403ae2f2_caseD_e;
switchD_1403ae2f2_caseD_a:
    if (param_2[0x516] == (CCNode)0x0) {
      bVar2 = FUN_140245ed0(param_1,param_2);
      iVar4 = *(int *)(param_2 + 0x40c);
      if (iVar4 < 0x11f) {
        if (iVar4 == 0x11e) {
          pcVar16 = "portal_11_back_001.png";
        }
        else {
          switch(iVar4) {
          default:
switchD_1403ae6c3_caseD_a:
            pcVar16 = "portal_01_back_001.png";
            break;
          case 0xb:
            pcVar16 = "portal_02_back_001.png";
            break;
          case 0xc:
            pcVar16 = "portal_03_back_001.png";
            break;
          case 0xd:
            pcVar16 = "portal_04_back_001.png";
            break;
          case 0x2d:
            pcVar16 = "portal_05_back_001.png";
            break;
          case 0x2e:
            pcVar16 = "portal_06_back_001.png";
            break;
          case 0x2f:
            pcVar16 = "portal_07_back_001.png";
            break;
          case 99:
            pcVar16 = "portal_08_back_001.png";
            break;
          case 0x65:
            pcVar16 = "portal_09_back_001.png";
            break;
          case 0x6f:
            pcVar16 = "portal_10_back_001.png";
          }
        }
      }
      else if (iVar4 < 0x534) {
        if (iVar4 == 0x533) {
          pcVar16 = "portal_17_back_001.png";
        }
        else if (iVar4 == 0x11f) {
          pcVar16 = "portal_12_back_001.png";
        }
        else if (iVar4 == 0x294) {
          pcVar16 = "portal_13_back_001.png";
        }
        else {
          if (iVar4 != 0x2e9) {
            if (iVar4 == 0x2eb) goto LAB_1403ae7d2;
            if (iVar4 != 0x2ed) goto switchD_1403ae6c3_caseD_a;
            goto LAB_1403ae776;
          }
          pcVar16 = "portal_14_back_001.png";
        }
      }
      else if (iVar4 == 0x78d) {
        pcVar16 = "portal_18_back_001.png";
      }
      else if (iVar4 == 0x810) {
LAB_1403ae776:
        pcVar16 = "portal_16_back_001.png";
      }
      else if (iVar4 == 0xb56) {
LAB_1403ae7d2:
        pcVar16 = "portal_15_back_001.png";
      }
      else if (iVar4 == 0xb6e) {
        pcVar16 = "portal_19_back_001.png";
      }
      else {
        pcVar16 = "portal_01_back_001.png";
      }
      pCVar15 = (CCObject *)FUN_14018dc20(pcVar16);
      *(undefined4 *)(pCVar15 + 0x40c) = 0x26;
      (**(code **)(*(longlong *)pCVar15 + 0x668))(pCVar15,7);
      pCVar15[0x512] = (CCObject)0x1;
      (**(code **)(*(longlong *)pCVar15 + 0x448))(pCVar15);
      lVar13 = *(longlong *)pCVar15;
      pCVar12 = (CCPoint *)(**(code **)(*(longlong *)param_2 + 200))(param_2);
      uVar14 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,pCVar12);
      (**(code **)(lVar13 + 0x4b0))(pCVar15,uVar14);
      pCVar15[0x424] = (CCObject)0x1;
      *(undefined4 *)(pCVar15 + 0x464) = 4;
      iVar4 = *(int *)(param_2 + 0x470);
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_2 + 0x420);
      }
      lVar13 = *(longlong *)pCVar15;
      *(uint *)(pCVar15 + 0x420) = iVar4 + -100 + (uint)bVar2;
      uVar3 = (**(code **)(*(longlong *)param_2 + 0x4e8))(param_2);
      (**(code **)(lVar13 + 0x430))(pCVar15,uVar3);
      lVar13 = *(longlong *)pCVar15;
      uVar3 = (**(code **)(*(longlong *)param_2 + 0x4f0))(param_2);
      (**(code **)(lVar13 + 0x438))(pCVar15,uVar3);
      lVar13 = *(longlong *)pCVar15;
      uVar20 = (**(code **)(*(longlong *)param_2 + 0x168))(param_2);
      (**(code **)(lVar13 + 0x160))(pCVar15,uVar20);
      lVar13 = *(longlong *)pCVar15;
      uVar20 = (**(code **)(*(longlong *)param_2 + 0x178))(param_2);
      (**(code **)(lVar13 + 0x170))(pCVar15,uVar20);
      *(undefined4 *)(pCVar15 + 0x3d4) = *(undefined4 *)(param_2 + 0x3d4);
      *(undefined4 *)(pCVar15 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
      pCVar15[0x3ec] = *(CCObject *)(param_2 + 0x3ec);
      pCVar15[0x3ed] = *(CCObject *)(param_2 + 0x3ed);
      FUN_140198650(pCVar15,*(undefined4 *)(param_2 + 0x488));
      FUN_1401986e0(pCVar15,*(undefined4 *)(param_2 + 0x48c));
      *(undefined4 *)(pCVar15 + 0x3dc) = *(undefined4 *)(param_2 + 0x3dc);
      *(undefined4 *)(pCVar15 + 0x3e0) = *(undefined4 *)(param_2 + 0x3e0);
      pCVar15[0x41a] = *(CCObject *)(param_2 + 0x41a);
      pCVar15[0x41b] = *(CCObject *)(param_2 + 0x41b);
      pCVar15[0x41c] = *(CCObject *)(param_2 + 0x41c);
      (**(code **)(*param_1 + 0x478))(param_1,pCVar15);
      cocos2d::CCArray::addObject((CCArray *)param_1[0x1b7],pCVar15);
      FUN_14019c940(pCVar15,param_2);
      FUN_140223f40(param_1,pCVar15,1);
      param_2[0x424] = (CCNode)0x1;
      *(uint *)(param_2 + 0x420) = bVar2 + 0xc;
      (**(code **)(*(longlong *)pCVar15 + 0x5a8))(pCVar15);
      *(undefined4 *)(pCVar15 + 0x530) = *(undefined4 *)(param_2 + 0x530);
      *(undefined4 *)(pCVar15 + 0x534) = *(undefined4 *)(param_2 + 0x534);
    }
  }
switchD_1403ae2f2_caseD_e:
  iVar4 = *(int *)(param_2 + 0x40c);
  if (iVar4 < 0x78f) {
    if (iVar4 == 0x78e) goto LAB_1403aea5b;
    if (iVar4 < 0xcc) {
      if ((iVar4 == 0xcb) || (((iVar4 == 200 || (iVar4 == 0xc9)) || (iVar4 == 0xca))))
      goto LAB_1403aea5b;
    }
    else if ((iVar4 == 0x536) || (iVar4 == 0x77d)) goto LAB_1403aea5b;
  }
  else {
    if ((((iVar4 != 0x78f) && (iVar4 != 0xb54)) && (iVar4 != 0xb56)) &&
       ((iVar4 != 0xbce && (iVar4 != 0xbd3)))) goto LAB_1403aea64;
LAB_1403aea5b:
    if (param_2[0x6f8] != (CCNode)0x0) goto LAB_1403aea7f;
  }
LAB_1403aea64:
  if (*(int *)(param_2 + 0x4e8) != 1) {
    return;
  }
  if (param_2[0x704] == (CCNode)0x0) {
    return;
  }
  if (param_2[0x6f8] == (CCNode)0x0) {
    return;
  }
LAB_1403aea7f:
  FUN_1404ab8f0(param_2);
  cocos2d::CCArray::addObject((CCArray *)param_1[0x712],(CCObject *)param_2);
  return;
}

