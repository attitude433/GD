// LevelEditorLayer_addSpecial @ 0x2d7bc0
// Body: 1870 bytes


void FUN_1402d7bc0(longlong *param_1,CCObject *param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  CCObject CVar5;
  int iVar6;
  uint uVar7;
  CCPoint *pCVar8;
  undefined8 uVar9;
  CCObject *pCVar10;
  CCObject *pCVar11;
  longlong *plVar12;
  CCArray *this;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  float local_res8;
  float local_resc;
  CCPoint local_res10 [8];
  undefined1 local_38 [16];
  ulonglong uVar17;
  
  if ((((char)param_1[0x111] == '\0') && (*(uint *)(param_2 + 0x3a0) < 0x1a)) &&
     ((0x2200001U >> (*(uint *)(param_2 + 0x3a0) & 0x1f) & 1) != 0)) {
    CVar5 = param_2[0x4c6];
  }
  else {
    CVar5 = (CCObject)0x1;
  }
  param_2[0x36c] = CVar5;
  if (param_2[0x36d] != *(CCObject *)((longlong)param_1 + 0x889)) {
    param_2[0x368] = (CCObject)0x1;
  }
  param_2[0x36d] = *(CCObject *)((longlong)param_1 + 0x889);
  if (param_2[0x4f2] == (CCObject)0x0) {
    iVar15 = ((int)param_1[0x717] - *(int *)((longlong)param_1 + 0x38bc)) + 1;
    *(int *)(param_1 + 0x718) = iVar15;
    iVar6 = rand();
    iVar6 = (int)(((float)iVar6 / DAT_140623644) * DAT_14062350c);
    *(int *)((longlong)param_1 + 0x38bc) = iVar6;
    *(int *)(param_1 + 0x717) = iVar6 + iVar15;
  }
  FUN_1402d7660(param_2);
  iVar6 = *(int *)(param_2 + 0x40c);
  uVar18 = 0;
  if (iVar6 == 0x2eb) {
    pCVar8 = (CCPoint *)(**(code **)(*(longlong *)param_2 + 200))(param_2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,pCVar8);
    fVar1 = *(float *)(param_2 + 0x754);
    if (fVar1 == 0.0) {
      fVar1 = DAT_1406232bc;
    }
    local_resc = local_resc + fVar1;
    local_res8 = local_res8 + DAT_14062381c;
    uVar9 = cocos2d::CCPoint::CCPoint(local_res10,(CCPoint *)&local_res8);
    plVar12 = (longlong *)FUN_1402d46a0(param_1,0x2ed,uVar9,1);
    lVar2 = *plVar12;
    cVar4 = (**(code **)(*(longlong *)param_2 + 0x4e8))(param_2);
    (**(code **)(lVar2 + 0x430))(plVar12,cVar4 == '\0');
    lVar2 = *plVar12;
    uVar20 = (**(code **)(*(longlong *)param_2 + 0x158))(param_2);
    (**(code **)(lVar2 + 0x6a0))(plVar12,uVar20);
    uVar17 = uVar18;
    uVar19 = uVar18;
    uVar13 = uVar18;
    if (0 < *(short *)(param_2 + 0x498)) {
      do {
        uVar14 = uVar18;
        if ((uVar17 < 10) && (*(longlong *)(param_2 + 0x490) != 0)) {
          uVar14 = (ulonglong)(uint)(int)*(short *)(uVar13 + *(longlong *)(param_2 + 0x490));
        }
        (**(code **)(*plVar12 + 0x598))(plVar12,uVar14);
        uVar7 = (int)uVar19 + 1;
        uVar17 = uVar17 + 1;
        uVar19 = (ulonglong)uVar7;
        uVar13 = uVar13 + 2;
      } while ((int)uVar7 < (int)*(short *)(param_2 + 0x498));
      uVar17 = uVar18;
      uVar19 = uVar18;
      uVar13 = uVar18;
      if (0 < *(short *)(param_2 + 0x498)) {
        do {
          uVar14 = uVar18;
          if ((uVar17 < 10) && (*(longlong *)(param_2 + 0x490) != 0)) {
            uVar14 = (ulonglong)(uint)(int)*(short *)(uVar13 + *(longlong *)(param_2 + 0x490));
          }
          (**(code **)(*plVar12 + 0x6a8))(plVar12,uVar14);
          uVar7 = (int)uVar19 + 1;
          uVar17 = uVar17 + 1;
          uVar19 = (ulonglong)uVar7;
          uVar13 = uVar13 + 2;
        } while ((int)uVar7 < (int)*(short *)(param_2 + 0x498));
      }
    }
    *(longlong **)(param_2 + 0x748) = plVar12;
    *(undefined1 *)(plVar12 + 0xea) = 1;
  }
  else if (iVar6 == 0x531) {
    iVar15 = (*(int *)((longlong)param_1 + 0x3844) - (int)param_1[0x709]) + 1;
    *(int *)((longlong)param_1 + 0x384c) = iVar15;
    iVar6 = rand();
    iVar6 = (int)(((float)iVar6 / DAT_140623644) * DAT_14062350c);
    *(int *)(param_1 + 0x709) = iVar6;
    *(int *)((longlong)param_1 + 0x3844) = iVar6 + iVar15;
  }
  else if (iVar6 == 0x811) {
    FUN_1402e1640(param_1,param_2);
    cocos2d::CCArray::addObject((CCArray *)param_1[0x700],param_2);
  }
  else if (iVar6 == 0xbd8) {
    cocos2d::CCArray::addObject((CCArray *)param_1[0x701],param_2);
    (**(code **)(*param_1 + 0x540))(param_1,param_2);
  }
  if (*(int *)(param_2 + 0x40c) == 0x419) {
    FUN_1404a85b0(param_2);
  }
  if (param_2[0x4ec] != (CCObject)0x0) {
    lVar2 = param_1[0x719];
    bVar3 = cocos2d::CCArray::containsObject(*(CCArray **)(lVar2 + 0x240),param_2);
    if (!bVar3) {
      cocos2d::CCArray::addObject(*(CCArray **)(lVar2 + 0x240),param_2);
      *(undefined1 *)(lVar2 + 0x204) = 1;
    }
  }
  iVar6 = (**(code **)(*(longlong *)param_2 + 0x660))(param_2);
  if (iVar6 == 0x19) {
    FUN_14019c2c0(param_2);
  }
  if (*(int *)(param_2 + 0x4e8) == 1) {
    FUN_1402d8900(param_1,param_2,0);
  }
  iVar6 = *(int *)(param_2 + 0x40c);
  if (iVar6 < 0x717) {
    if (iVar6 != 0x716) {
      if (iVar6 < 0x4f5) {
        if (iVar6 == 0x4f4) goto LAB_1402d8078;
        if (iVar6 != 0x385) {
          if (iVar6 == 0x3ee) {
            cocos2d::CCArray::addObject((CCArray *)param_1[0x6fa],param_2);
            *(undefined1 *)((longlong)param_1 + 0x3852) = 1;
            goto LAB_1402d7fc2;
          }
          if (iVar6 == 0x3ef) {
            cocos2d::CCArray::addObject((CCArray *)param_1[0x6fc],param_2);
            *(undefined1 *)((longlong)param_1 + 0x3853) = 1;
            goto LAB_1402d7fc2;
          }
          goto LAB_1402d80a8;
        }
      }
      else if ((iVar6 != 0x542) && (iVar6 != 0x543)) {
LAB_1402d80a8:
        if (iVar6 < 0x2e9) {
          if (((iVar6 != 0x2e8) && (iVar6 != 0x1d)) && ((iVar6 != 0x1e && (iVar6 != 0x69))))
          goto LAB_1402d7fc2;
        }
        else if (((iVar6 != 899) && (iVar6 != 900)) && (iVar6 != 0x393)) goto LAB_1402d7fc2;
        cocos2d::CCArray::addObject((CCArray *)param_1[0x6fb],param_2);
        *(undefined1 *)((longlong)param_1 + 0x3851) = 1;
        goto LAB_1402d7fc2;
      }
    }
LAB_1402d7fb2:
    this = (CCArray *)param_1[0x6fe];
  }
  else {
    if (0x814 < iVar6) {
      if (iVar6 != 0xbc8) {
        if (iVar6 == 0xe3a) {
          local_res8 = *(float *)(param_2 + 0x39c);
          plVar12 = (longlong *)FUN_1402f0bb0(param_1[0x719] + 0x1b0,local_38,&local_res8);
          *(CCObject **)(*plVar12 + 0x18) = param_2;
          goto LAB_1402d7fc2;
        }
        goto LAB_1402d80a8;
      }
      goto LAB_1402d7fb2;
    }
    if ((iVar6 == 0x814) || (iVar6 == 0x778)) {
LAB_1402d8078:
      cocos2d::CCArray::addObject((CCArray *)param_1[0x6fd],param_2);
      *(undefined1 *)((longlong)param_1 + 0x3854) = 1;
      goto LAB_1402d7fc2;
    }
    if (iVar6 != 0x7e0) {
      if (iVar6 != 0x813) goto LAB_1402d80a8;
      goto LAB_1402d7fb2;
    }
    this = (CCArray *)param_1[0x6ff];
  }
  cocos2d::CCArray::addObject(this,param_2);
LAB_1402d7fc2:
  if (param_2[0x4ed] != (CCObject)0x0) {
    cocos2d::CCArray::addObject((CCArray *)param_1[0x70b],param_2);
    *(undefined1 *)(param_1 + 0x70c) = 1;
  }
  if ((param_2[0x4f1] != (CCObject)0x0) ||
     (cVar4 = (**(code **)(*(longlong *)param_2 + 0x5f0))(param_2), cVar4 != '\0')) {
    cocos2d::CCArray::addObject((CCArray *)param_1[0x703],param_2);
  }
  if (param_2[0x4ef] != (CCObject)0x0) {
    cocos2d::CCArray::addObject((CCArray *)param_1[0x6f9],param_2);
  }
  if ((param_1[0x1b6] == 0) || (*(char *)(param_1[0x1b6] + 0x155) == '\0')) {
    CVar5 = (CCObject)FUN_140196e40(param_2);
  }
  else {
    CVar5 = (CCObject)0x0;
  }
  param_2[0x2c8] = CVar5;
  cocos2d::CCArray::addObject((CCArray *)param_1[0x1b7],param_2);
  FUN_140223f40(param_1,param_2,0);
  if ((param_2[0x49a] != (CCObject)0x0) &&
     (pCVar10 = cocos2d::CCDictionary::objectForKey
                          ((CCDictionary *)param_1[0x1ee],(ulonglong)*(uint *)(param_2 + 0x39c)),
     pCVar10 != (CCObject *)0x0)) {
    param_2[0x49a] = (CCObject)0x0;
    uVar7 = cocos2d::CCArray::count((CCArray *)pCVar10);
    uVar17 = uVar18;
    if (uVar7 != 0) {
      do {
        pCVar11 = cocos2d::CCArray::objectAtIndex((CCArray *)pCVar10,(uint)uVar17);
        iVar6 = *(int *)(pCVar11 + 0x38);
        pCVar11 = cocos2d::CCDictionary::objectForKey
                            ((CCDictionary *)param_1[0x1ec],(longlong)iVar6);
        if (pCVar11 == (CCObject *)0x0) {
          FUN_140224680(param_1,param_2,iVar6);
        }
        uVar16 = (uint)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        uVar7 = cocos2d::CCArray::count((CCArray *)pCVar10);
      } while (uVar16 < uVar7);
    }
    cocos2d::CCDictionary::removeObjectForKey
              ((CCDictionary *)param_1[0x1ee],(ulonglong)*(uint *)(param_2 + 0x39c));
  }
  local_res8 = *(float *)(param_2 + 0x39c);
  uVar13 = param_1[0x6dc] &
           ((((ulonglong)((uint)local_res8 >> 8 & 0xff) ^
             ((ulonglong)((uint)local_res8 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) *
             0x100000001b3 ^ (ulonglong)((uint)local_res8 >> 0x10 & 0xff)) * 0x100000001b3 ^
           (ulonglong)((uint)local_res8 >> 0x18)) * 0x100000001b3;
  uVar17 = *(ulonglong *)(param_1[0x6d9] + 8 + uVar13 * 0x10);
  uVar19 = uVar18;
  if (uVar17 != param_1[0x6d7]) {
    fVar1 = *(float *)(uVar17 + 0x10);
    while ((uVar19 = uVar17, local_res8 != fVar1 &&
           (uVar19 = uVar18, uVar17 != *(ulonglong *)(param_1[0x6d9] + uVar13 * 0x10)))) {
      uVar17 = *(ulonglong *)(uVar17 + 8);
      fVar1 = *(float *)(uVar17 + 0x10);
    }
  }
  if ((uVar19 != 0) && (*(int *)(param_2 + 0x370) == 0)) {
    plVar12 = (longlong *)FUN_1401795b0(param_1 + 0x6d6,local_38,&local_res8);
    iVar6 = *(int *)(*plVar12 + 0x14);
    pCVar10 = cocos2d::CCDictionary::objectForKey((CCDictionary *)param_1[0x1f8],(longlong)iVar6);
    if (pCVar10 != (CCObject *)0x0) {
      cocos2d::CCArray::addObject((CCArray *)pCVar10,param_2);
      local_res8 = *(float *)(param_2 + 0x39c);
      *(int *)(param_2 + 0x370) = iVar6;
      FUN_14005d780(param_1 + 0x6d6,&local_res8);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x3b22) = 1;
  return;
}

