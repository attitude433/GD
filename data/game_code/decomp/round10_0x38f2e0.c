// FUN_14038f2e0 @ 0x38f2e0


ulonglong FUN_14038f2e0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  CCRect *pCVar5;
  CCPoint *this;
  float *pfVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  float *pfVar10;
  ulonglong uVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_res8 [2];
  float local_res18;
  float local_res1c;
  float fVar17;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  CCRect local_b8 [4];
  float local_b4;
  float local_ac;
  CCRect local_a8 [16];
  CCRect local_98 [16];
  CCRect local_88 [80];
  
  if (*(int *)((longlong)param_3 + 0x39c) == (int)param_1[0xd1]) {
    return (ulonglong)(uint3)((uint)(int)param_1[0xd1] >> 8) << 8;
  }
  pCVar5 = (CCRect *)(**(code **)(*param_3 + 0x490))(param_3);
  cocos2d::CCRect::CCRect((CCRect *)&local_c8,pCVar5);
  pCVar5 = (CCRect *)(**(code **)(*param_1 + 0x490))(param_1);
  cocos2d::CCRect::CCRect(local_a8,pCVar5);
  uVar1 = *(uint *)((longlong)param_3 + 0x444);
  bVar12 = 0;
  fVar16 = 0.0;
  if ((uVar1 - 2 < 3) || (uVar1 == 6)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((uVar1 < 7) && ((0x6aU >> (uVar1 & 0x1f) & 1) != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((char)param_1[0x16e] == '\0') ||
     ((fVar15 = DAT_140623010, (char)param_1[0x136] == '\0' &&
      (*(char *)((longlong)param_1 + 0x9b1) == '\0')))) {
    fVar15 = 0.0;
  }
  this = (CCPoint *)(**(code **)(*param_3 + 0x4a8))(param_3,local_res8);
  cocos2d::CCPoint::operator-(this,(CCPoint *)&local_res18);
  fVar17 = DAT_140622c24;
  if (*(char *)((longlong)param_1 + 0x9c3) != '\0') {
    local_res18 = local_res1c;
  }
  fVar13 = (float)((double)*(float *)((longlong)param_1 + 0x9f4) * (double)param_1[0xf7] *
                  (double)(float)param_2);
  if (bVar3) {
    if ((((*(char *)((longlong)param_1 + 0x9c2) == '\0') || ((char)param_1[0x16e] != '\0')) ||
        (local_res18 < fVar13)) &&
       (pfVar6 = (float *)(**(code **)(*param_1 + 200))(param_1),
       *pfVar6 <= local_c8 && local_c8 != *pfVar6)) {
      if ((*(char *)((longlong)param_1 + 0x9c2) == '\0') || ((char)param_1[0x16e] != '\0')) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
      fVar16 = (float)iVar4;
      fVar15 = fVar15 + fVar16;
      fVar14 = local_bc - (fVar15 + fVar15);
      fVar13 = local_c8;
LAB_14038f55e:
      cocos2d::CCRect::CCRect(local_98,fVar13,fVar15 + local_c4,fVar17,fVar14);
      bVar3 = cocos2d::CCRect::intersectsRect(local_a8,local_98);
      bVar12 = 1;
      if (bVar3) {
        uVar7 = cocos2d::CCRect::CCRect(local_88,local_98);
        FUN_140391a70(param_1,param_2,param_3,uVar7,(uint)fVar14 & 0xffffff00);
        bVar12 = 1;
      }
    }
  }
  else if (((*(char *)((longlong)param_1 + 0x9c2) != '\0') || ((char)param_1[0x16e] != '\0')) ||
          (fVar13 < local_res18)) {
    pfVar6 = (float *)(**(code **)(*param_1 + 200))(param_1);
    fVar13 = cocos2d::CCRect::getMaxX((CCRect *)&local_c8);
    if (fVar13 < *pfVar6) {
      if ((*(char *)((longlong)param_1 + 0x9c2) == '\0') && ((char)param_1[0x16e] == '\0')) {
        iVar4 = 1;
      }
      else {
        iVar4 = 0;
      }
      fVar16 = (float)iVar4;
      fVar13 = (local_c0 + local_c8) - fVar17;
      fVar15 = fVar15 + fVar16;
      fVar14 = local_bc - (fVar15 + fVar15);
      goto LAB_14038f55e;
    }
  }
  cocos2d::CCRect::CCRect(local_b8);
  local_c0 = local_c0 - (fVar16 + fVar16);
  if (bVar2) {
    pCVar5 = (CCRect *)
             cocos2d::CCRect::CCRect
                       (local_88,local_c8 + fVar16,(local_c4 + local_bc) - fVar17,local_c0,fVar17);
    cocos2d::CCRect::operator=(local_b8,pCVar5);
    lVar8 = (**(code **)(*param_1 + 200))(param_1);
    if (local_ac + local_b4 <= *(float *)(lVar8 + 4)) {
LAB_14038f7c1:
      bVar3 = cocos2d::CCRect::intersectsRect(local_a8,local_b8);
      bVar12 = 1;
      if (bVar3) {
        uVar7 = cocos2d::CCRect::CCRect(local_88,local_b8);
        FUN_140391a70(param_1,param_2,param_3,uVar7,(uint)fVar17 & 0xffffff00);
        bVar12 = 1;
      }
      goto LAB_14038f72e;
    }
  }
  else {
    pCVar5 = (CCRect *)cocos2d::CCRect::CCRect(local_88,local_c8 + fVar16,local_c4,local_c0,fVar17);
    cocos2d::CCRect::operator=(local_b8,pCVar5);
    lVar8 = (**(code **)(*param_1 + 200))(param_1);
    if (*(float *)(lVar8 + 4) <= local_ac + local_b4) goto LAB_14038f7c1;
  }
  if ((bVar12 != 0) ||
     (*(undefined1 *)((longlong)param_1 + 0x669) = 0, (char)param_1[0x136] != '\0'))
  goto LAB_14038f72e;
  local_res8[0] = *(undefined4 *)((longlong)param_3 + 0x39c);
  plVar9 = (longlong *)FUN_14024e530(param_1 + 0xdc,local_88,local_res8);
  *(longlong **)(*plVar9 + 0x18) = param_3;
  lVar8 = param_1[0xce];
  if (lVar8 != 0) {
    if (((*(char *)(lVar8 + 0x440) == '\0') ||
        ((*(uint *)(lVar8 + 0x444) < 7 && ((0x6aU >> (*(uint *)(lVar8 + 0x444) & 0x1f) & 1) != 0))))
       && (((char)param_3[0x88] == '\0' ||
           ((*(uint *)((longlong)param_3 + 0x444) < 7 &&
            ((0x6aU >> (*(uint *)((longlong)param_3 + 0x444) & 0x1f) & 1) != 0)))))) {
      pfVar6 = (float *)(**(code **)(*(longlong *)param_1[0xce] + 200))();
      pfVar10 = (float *)(**(code **)(*param_3 + 200))(param_3);
      if (*pfVar10 <= *pfVar6 && *pfVar6 != *pfVar10) goto LAB_14038f727;
    }
    plVar9 = (longlong *)param_1[0xce];
    if (((char)plVar9[0x88] == '\0') ||
       ((*(uint *)((longlong)plVar9 + 0x444) < 7 &&
        ((0x6aU >> (*(uint *)((longlong)plVar9 + 0x444) & 0x1f) & 1) != 0)))) goto LAB_14038f72e;
    pfVar6 = (float *)(**(code **)(*plVar9 + 200))();
    pfVar10 = (float *)(**(code **)(*param_3 + 200))(param_3);
    if (*pfVar10 < *pfVar6 || *pfVar10 == *pfVar6) goto LAB_14038f72e;
  }
LAB_14038f727:
  param_1[0xce] = (longlong)param_3;
LAB_14038f72e:
  bVar3 = cocos2d::CCRect::intersectsRect((CCRect *)&local_c8,local_a8);
  uVar11 = (ulonglong)bVar12;
  if (!bVar3) {
    uVar11 = 1;
  }
  return uVar11;
}

