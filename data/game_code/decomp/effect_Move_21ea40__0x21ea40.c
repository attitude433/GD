// effect_Move_21ea40 @ 0x21ea40
// Function: FUN_14021ea40


void FUN_14021ea40(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  CCPoint *pCVar9;
  undefined8 uVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  float fVar15;
  undefined8 local_res10;
  float local_res18;
  float local_res1c;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar16;
  longlong local_78 [8];
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_res18,(CCPoint *)(param_2 + 0x5e0));
  fVar15 = DAT_140622c24;
  if (DAT_140622c24 <= *(float *)(param_2 + 0x5bc)) {
    fVar15 = *(float *)(param_2 + 0x5bc);
  }
  cVar11 = *(char *)(param_2 + 0x5f0);
  cVar13 = *(char *)(param_2 + 0x5f1);
  uVar1 = *(uint *)(param_2 + 0x5fc);
  uVar2 = *(uint *)(param_2 + 0x600);
  if (0x1e847e < (int)(local_res18 / fVar15) + 999999U) {
    return;
  }
  if (((cVar11 != '\0') || (*(char *)(param_2 + 0x5f2) != '\0')) &&
     (DAT_14062365c < (float)(uVar1 & DAT_1406243c0))) {
    return;
  }
  if (((cVar13 != '\0') || (*(char *)(param_2 + 0x5f3) != '\0')) &&
     (DAT_14062365c < (float)(uVar2 & DAT_1406243c0))) {
    return;
  }
  if ((*(char *)(param_2 + 0x610) != '\0') &&
     ((*(char *)(param_2 + 0x5f4) != '\0' || (*(char *)(param_2 + 0x605) != '\0')))) {
    iVar3 = *(int *)(param_2 + 0x608);
    if (iVar3 < 1) {
      iVar3 = *(int *)(param_2 + 0x5c8);
    }
    local_78[0] = param_2;
    lVar6 = FUN_140224590(param_1,iVar3);
    local_res20 = lVar6;
    if (*(char *)(param_2 + 0x6a4) == '\0') {
      if (*(char *)(param_2 + 0x6a5) == '\0') {
        local_res10 = FUN_140224590(param_1,*(undefined4 *)(param_2 + 0x5cc));
        goto LAB_14021eba3;
      }
      if (*(char *)((longlong)param_1 + 0x422) != '\0') {
        local_res10 = param_1[0x1b5];
        goto LAB_14021eba3;
      }
    }
    local_res10 = param_1[0x1b4];
LAB_14021eba3:
    if ((lVar6 != 0) && (local_res10 != 0)) {
      plVar7 = (longlong *)param_1[0xe7];
      if (plVar7 == (longlong *)param_1[0xe8]) {
        FUN_1402518b0(param_1 + 0xe6,plVar7,local_78,&local_res20,&local_res10);
      }
      else {
        *(undefined4 *)((longlong)plVar7 + 0x4c) = 1;
        plVar7[10] = 0;
        plVar7[1] = 0;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 0xb) = 0;
        plVar7[3] = 0;
        plVar7[4] = 0;
        plVar7[5] = 0;
        plVar7[6] = 0;
        plVar7[7] = 0;
        plVar7[8] = 0;
        *(undefined4 *)(plVar7 + 9) = 0;
        *plVar7 = param_2;
        *(undefined4 *)(plVar7 + 10) = *(undefined4 *)(param_2 + 0x698);
        *(undefined4 *)((longlong)plVar7 + 0x54) = *(undefined4 *)(param_2 + 0x5c8);
        *(undefined4 *)(plVar7 + 0xb) = *(undefined4 *)(param_2 + 0x5cc);
        plVar7[1] = lVar6;
        plVar7[2] = local_res10;
        param_1[0xe7] = param_1[0xe7] + 0x60;
      }
    }
    return;
  }
  if ((*(char *)(param_2 + 0x5f4) == '\0') &&
     (cVar14 = *(char *)(param_2 + 0x5f2), cVar12 = *(char *)(param_2 + 0x5f3),
     *(char *)(param_2 + 0x605) == '\0')) goto LAB_14021edc1;
  iVar3 = *(int *)(param_2 + 0x608);
  cVar11 = *(char *)((longlong)param_1 + 0x887);
  if (iVar3 < 1) {
    iVar3 = *(int *)(param_2 + 0x5c8);
  }
  fVar15 = (float)DAT_1406243c0;
  if (cVar11 == '\0') {
    plVar7 = (longlong *)FUN_140224520();
  }
  else {
    plVar7 = (longlong *)FUN_140224590(param_1,iVar3);
  }
  if (*(char *)(param_2 + 0x6a4) == '\0') {
    if (*(char *)(param_2 + 0x6a5) == '\0') {
      if (cVar11 == '\0') {
        plVar8 = (longlong *)FUN_140224520();
      }
      else {
        plVar8 = (longlong *)FUN_140224590(param_1,*(undefined4 *)(param_2 + 0x5cc));
      }
    }
    else {
      if (*(char *)((longlong)param_1 + 0x422) == '\0') goto LAB_14021ecdc;
      plVar8 = (longlong *)param_1[0x1b5];
    }
  }
  else {
LAB_14021ecdc:
    plVar8 = (longlong *)param_1[0x1b4];
  }
  if (((plVar7 == (longlong *)0x0) || (plVar8 == (longlong *)0x0)) ||
     (*(int *)((longlong)plVar7 + 0x39c) == *(int *)((longlong)plVar8 + 0x39c))) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,(CCPoint *)&DAT_1406c1d28);
  }
  else {
    (**(code **)(*plVar7 + 0x4a8))(plVar7,&local_res20);
    pCVar9 = (CCPoint *)(**(code **)(*plVar8 + 0x4a8))(plVar8,local_78);
    cocos2d::CCPoint::operator-(pCVar9,(CCPoint *)&local_res10);
  }
  cocos2d::CCPoint::operator=((CCPoint *)&local_res18,(CCPoint *)&local_res10);
  if (*(char *)(param_2 + 0x605) != '\0') {
    pCVar9 = (CCPoint *)cocos2d::ccpNormalize((CCPoint *)&local_res20);
    cocos2d::CCPoint::operator*(pCVar9,fVar15);
    cocos2d::CCPoint::operator=((CCPoint *)&local_res18,(CCPoint *)&local_res10);
  }
  cVar11 = '\0';
  cVar13 = '\0';
  cVar14 = '\0';
  cVar12 = '\0';
  if (*(char *)(param_2 + 0x5f4) != '\0') {
    if (*(int *)(param_2 + 0x5f8) == 1) {
      local_res1c = 0.0;
    }
    else {
      cVar14 = '\0';
      cVar12 = '\0';
      if (*(int *)(param_2 + 0x5f8) == 2) {
        local_res18 = 0.0;
      }
    }
  }
LAB_14021edc1:
  if (*(char *)(param_2 + 0x611) == '\0') {
    uVar10 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,(CCPoint *)&local_res18);
    FUN_14025c700(param_1[0x12a],uVar10,*(undefined4 *)(param_2 + 0x5c8),
                  *(undefined4 *)(param_2 + 0x5bc),CONCAT44(uVar16,*(undefined4 *)(param_2 + 0x5e8))
                  ,*(undefined4 *)(param_2 + 0x5ec),cVar11,cVar13,cVar14,cVar12,uVar1,uVar2,
                  *(undefined4 *)(param_2 + 0x39c),*(undefined4 *)(param_2 + 0x698));
    return;
  }
  uVar16 = *(undefined4 *)(param_2 + 0x5c8);
  dVar5 = (double)local_res1c;
  dVar4 = (double)local_res18;
  lVar6 = FUN_140224280(param_1,uVar16);
  if (lVar6 != 0) {
    uVar1 = **(uint **)(lVar6 + 0x38);
    if (uVar1 != 0) {
      plVar8 = *(longlong **)(*(uint **)(lVar6 + 0x38) + 4);
      plVar7 = plVar8 + ((ulonglong)uVar1 - 1);
      uVar10 = local_res10;
      for (; plVar8 <= plVar7; plVar8 = plVar8 + 1) {
        local_res10._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        lVar6 = *plVar8;
        if (lVar6 == 0) break;
        if (*(char *)(lVar6 + 0x2c8) == '\0') {
          *(double *)(lVar6 + 0x3b8) = dVar4 + *(double *)(lVar6 + 0x3b8);
        }
        *(undefined2 *)(lVar6 + 0x368) = 0x101;
        *(undefined2 *)(lVar6 + 0x351) = 0x101;
        *(double *)(lVar6 + 0x3c0) = dVar5 + *(double *)(lVar6 + 0x3c0);
        local_res10 = uVar10;
        (**(code **)(*param_1 + 0x490))(param_1,lVar6);
        *(float *)(lVar6 + 0x4d0) = (float)*(double *)(lVar6 + 0x3b8);
        *(float *)(lVar6 + 0x4d4) = (float)*(double *)(lVar6 + 0x3c0);
        uVar10 = local_res10;
      }
    }
  }
  lVar6 = param_1[0x12a];
  local_res10 = CONCAT44(local_res10._4_4_,uVar16);
  plVar7 = (longlong *)FUN_1402675e0(lVar6 + 0x620,local_78,&local_res10);
  *(double *)(*plVar7 + 0x18) = dVar4 + *(double *)(*plVar7 + 0x18);
  plVar7 = (longlong *)FUN_1402675e0(lVar6 + 0x620,local_78,&local_res10);
  *(double *)(*plVar7 + 0x20) = dVar5 + *(double *)(*plVar7 + 0x20);
  return;
}

