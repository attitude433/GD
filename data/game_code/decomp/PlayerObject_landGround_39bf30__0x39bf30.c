// Function: FUN_14039bf30
// Original target: PlayerObject_landGround_39bf30 @ 0x39bf30
// Ghidra entry: 14039bf30
// Signature: undefined FUN_14039bf30(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14039bf30(longlong *param_1,longlong *param_2,byte param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  CCPoint *pCVar10;
  undefined8 uVar11;
  int iVar12;
  CCParticleSystem *this;
  bool bVar13;
  float fVar14;
  undefined4 local_res8;
  undefined4 local_resc;
  CCPoint local_res10 [8];
  undefined1 local_78 [64];
  
  iVar12 = 0;
  if (param_2 != (longlong *)0x0) {
    iVar12 = (int)*(short *)((longlong)param_2 + 0x3fe);
  }
  *(int *)((longlong)param_1 + 0x9ec) = iVar12;
  cVar5 = *(char *)((longlong)param_1 + 0x9bf);
  dVar1 = (double)param_1[0x134];
  *(undefined1 *)(param_1 + 0x165) = 0;
  dVar3 = DAT_140622e98;
  iVar6 = -1;
  if (cVar5 == '\0') {
    iVar6 = 1;
  }
  if ((param_1[0x184] == 0) || (*(char *)((longlong)param_1 + 0x9bc) != '\0')) goto LAB_14039c164;
  if (cVar5 == '\0') {
    bVar13 = DAT_140623770 < dVar1;
    dVar2 = DAT_140623770;
  }
  else {
    bVar13 = dVar1 < DAT_140622ee0;
    dVar2 = DAT_140622ee0;
  }
  if (bVar13 || dVar2 == dVar1) {
    if (cVar5 == '\0') {
      bVar13 = DAT_140623768 < dVar1;
      dVar2 = DAT_140623768;
    }
    else {
      bVar13 = dVar1 < DAT_140622ec0;
      dVar2 = DAT_140622ec0;
    }
    if (!bVar13 && dVar2 != dVar1) {
      uVar11 = 4;
      goto LAB_14039c095;
    }
    if (cVar5 == '\0') {
      bVar13 = DAT_140623748 < dVar1;
      dVar2 = DAT_140623748;
    }
    else {
      bVar13 = dVar1 < DAT_140622e90;
      dVar2 = DAT_140622e90;
    }
    if (!bVar13 && dVar2 != dVar1) {
      uVar11 = 3;
      goto LAB_14039c095;
    }
    if (cVar5 == '\0') {
      bVar13 = DAT_140623728 < dVar1;
      dVar2 = DAT_140623728;
    }
    else {
      bVar13 = dVar1 < DAT_140622e18;
      dVar2 = DAT_140622e18;
    }
    if ((!bVar13 && dVar2 != dVar1) && (param_1[0x184] != 0)) {
      uVar11 = 1;
      if (*(char *)((longlong)param_1 + 0xa0c) == '\0') {
        uVar11 = 2;
      }
      goto LAB_14039c095;
    }
  }
  else {
    uVar11 = 5;
LAB_14039c095:
    FUN_140231ff0(param_1[0x184],uVar11,iVar12,*(undefined4 *)((longlong)param_1 + 0x39c));
  }
  if (*(float *)((longlong)param_1 + 0xc3c) == 0.0) goto LAB_14039c164;
  lVar8 = (**(code **)(*param_1 + 200))(param_1);
  fVar14 = (float)((uint)(*(float *)((longlong)param_1 + 0xc3c) - *(float *)(lVar8 + 4)) &
                  DAT_1406243c0);
  if (0.0 < fVar14) {
    if (fVar14 <= DAT_1406234a8) {
      if (fVar14 <= DAT_14062343c) {
        if (fVar14 <= DAT_140623358) {
          if ((DAT_14062304c < fVar14) && (lVar8 = param_1[0x184], lVar8 != 0)) {
            uVar11 = 0x41;
            goto LAB_14039c14b;
          }
        }
        else {
          lVar8 = param_1[0x184];
          if (lVar8 != 0) {
            uVar11 = 0x42;
LAB_14039c14b:
            FUN_140231ff0(lVar8,uVar11,*(undefined4 *)((longlong)param_1 + 0x9ec),
                          *(undefined4 *)((longlong)param_1 + 0x39c));
          }
        }
      }
      else {
        lVar8 = param_1[0x184];
        if (lVar8 != 0) {
          uVar11 = 0x43;
          goto LAB_14039c14b;
        }
      }
    }
    else {
      lVar8 = param_1[0x184];
      if (lVar8 != 0) {
        uVar11 = 0x44;
        goto LAB_14039c14b;
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xc3c) = 0;
LAB_14039c164:
  param_1[0x134] = 0;
  *(undefined1 *)((longlong)param_1 + 0xb19) = 0;
  if ((((*(char *)((longlong)param_1 + 0xa0c) == '\0') && (param_3 == 0)) &&
      (cVar5 = FUN_14039b4f0(param_1), cVar5 == '\0')) &&
     (*(char *)((longlong)param_1 + 0x72b) == '\0')) {
    if ((char)param_1[0x120] == '\0') {
      this = (CCParticleSystem *)param_1[0x122];
    }
    else {
      this = (CCParticleSystem *)param_1[0x121];
    }
    *(bool *)(param_1 + 0x120) = (char)param_1[0x120] == '\0';
    uVar7 = (**(code **)(*(longlong *)this + 0x378))(this);
    if (uVar7 < 3) {
      iVar12 = -1;
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        iVar12 = 1;
      }
      (**(code **)(*(longlong *)this + 0x3d8))(this,(float)iVar12 * *(float *)(param_1 + 0x123));
      cVar5 = *(char *)((longlong)param_1 + 0x9bf);
      lVar8 = *(longlong *)this;
      fVar14 = *(float *)((longlong)param_1 + 0x91c);
      pfVar9 = (float *)(**(code **)(*(longlong *)param_1[0x121] + 0x3f8))();
      iVar12 = -1;
      if (cVar5 == '\0') {
        iVar12 = 1;
      }
      uVar11 = cocos2d::CCPoint::CCPoint(local_res10,*pfVar9,(float)iVar12 * fVar14);
      (**(code **)(lVar8 + 0x400))(this,uVar11);
      iVar12 = 0xf;
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        iVar12 = -0xf;
      }
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_res8,0.0,(float)iVar12 * *(float *)(param_1 + 0x13e));
      uVar4 = local_resc;
      if (*(char *)((longlong)param_1 + 0x9c3) != '\0') {
        local_resc = local_res8;
        local_res8 = uVar4;
      }
      (**(code **)(*(longlong *)this + 0x150))(this);
      if ((param_2 != (longlong *)0x0) &&
         (iVar12 = (**(code **)(*param_2 + 0x660))(param_2), iVar12 == 0x19)) {
        (**(code **)(*(longlong *)this + 0x150))
                  (this,*(longlong *)this,
                   (double)(-(*(char *)((longlong)param_1 + 0x9c3) != '\0') & 0x5a) +
                   (double)param_1[0x126] * _DAT_140622f50);
      }
      pCVar10 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
      cocos2d::CCPoint::operator+(pCVar10,local_res10);
      (**(code **)(*(longlong *)this + 0xb8))(this,local_res10);
      cocos2d::CCParticleSystem::resetSystem(this);
    }
  }
  if ((char)param_1[0xb4] == '\0') {
    FUN_1403a0680(param_1);
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  if ((*(char *)((longlong)param_1 + 0xa0c) == '\0') &&
     (*(char *)((longlong)param_1 + 0x9e4) == '\0')) {
    if (*(char *)((longlong)param_1 + 0x9bd) == '\0') {
      if (*(char *)((longlong)param_1 + 0x9be) != '\0') {
        FUN_1403a14d0(param_1);
      }
    }
    else {
      uVar11 = FUN_14003bdb0(local_78,param_1 + 0x17a);
      FUN_140040cf0(param_1[0x114],uVar11);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xa0c) = 1;
  *(byte *)((longlong)param_1 + 0xa29) = param_3 ^ 1;
  if ((double)iVar6 * dVar1 <= dVar3) {
    param_1[0x142] = param_1[0x154];
    *(undefined1 *)((longlong)param_1 + 0x9c1) = 1;
  }
  *(undefined1 *)(param_1 + 0xfd) = 1;
  *(undefined4 *)((longlong)param_1 + 0xadc) = 2;
  if (*(char *)((longlong)param_1 + 0x9bb) == '\0') {
    if (((char)param_1[0xe5] != '\0') || (*(char *)((longlong)param_1 + 0x9b1) != '\0')) {
      *(undefined2 *)(param_1 + 0xe5) = 0;
      *(undefined1 *)(param_1 + 0xcd) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
  }
  else {
    if (((char)param_1[0xcd] != '\0') && ((char)param_1[0x136] == '\0')) {
      *(undefined2 *)(param_1 + 0xe5) = 0;
      *(undefined1 *)(param_1 + 0xcd) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    if (*(char *)((longlong)param_1 + 0x729) != '\0') {
      *(undefined2 *)(param_1 + 0xe5) = 0;
      *(undefined1 *)(param_1 + 0xcd) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    if ((((char)param_1[0xe5] == '\0') && (*(char *)((longlong)param_1 + 0xa2a) == '\0')) &&
       (*(char *)((longlong)param_1 + 0x9e4) == '\0')) {
      *(undefined2 *)(param_1 + 0xe5) = 0;
      *(undefined1 *)(param_1 + 0xcd) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      FUN_14038d350(param_1);
    }
  }
  if ((((*(char *)((longlong)param_1 + 0x9bb) == '\0') &&
       (*(char *)((longlong)param_1 + 0x9b9) == '\0')) &&
      ((*(char *)((longlong)param_1 + 0x9ba) == '\0' &&
       (((*(char *)((longlong)param_1 + 0x9bc) == '\0' &&
         (*(char *)((longlong)param_1 + 0x9c4) == '\0')) && ((char)param_1[0x136] == '\0')))))) &&
     ((*(char *)((longlong)param_1 + 0x9b1) == '\0' &&
      (fVar14 = (float)(**(code **)(*param_1 + 0x158))(param_1),
      (int)fVar14 != ((int)fVar14 / 0x5a) * 0x5a)))) {
    *(undefined2 *)(param_1 + 0xe5) = 0;
    *(undefined1 *)(param_1 + 0xcd) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  pCVar10 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
  cocos2d::CCPoint::operator=((CCPoint *)((longlong)param_1 + 0xa2c),pCVar10);
  if (((*(char *)((longlong)param_1 + 0x9b9) == '\0') &&
      (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
     ((*(char *)((longlong)param_1 + 0x9bc) == '\0' &&
      ((*(char *)((longlong)param_1 + 0x9c4) == '\0' &&
       (*(char *)((longlong)param_1 + 0x7e3) != '\0')))))) {
    if (*(char *)((longlong)param_1 + 0x929) == '\0') {
      cocos2d::CCMotionStreak::stopStroke((CCMotionStreak *)param_1[0xf4]);
    }
    if ((char)param_1[0x12f] != '\0') {
      *(undefined1 *)(param_1 + 0x12f) = 0;
      FUN_1403a0190(param_1);
    }
    *(undefined1 *)((longlong)param_1 + 0x979) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x7e3) = 0;
  return;
}

