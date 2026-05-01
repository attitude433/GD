// PlayerObject_updateRobotAnimationSpeed @ 0x3a10e0


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403a10e0(longlong param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  void *_Memory;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 ***local_80 [2];
  ulonglong local_70;
  ulonglong local_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1406ba040 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  fVar1 = *(float *)(param_1 + 0x9f4);
  fVar13 = DAT_140622c24;
  if ((((fVar1 != DAT_140622bd8) && (fVar13 = DAT_140622bd8, fVar1 != DAT_140622b74)) &&
      (fVar13 = DAT_140622c70, fVar1 != DAT_140622c54)) &&
     ((fVar13 = DAT_140622ca8, fVar1 != DAT_140622ca8 &&
      (fVar13 = DAT_140622c24, fVar1 == DAT_140622d24)))) {
    fVar13 = DAT_140622d04;
  }
  fVar14 = DAT_140622c24;
  if (*(float *)(param_1 + 0x9f0) <= DAT_140622c24 && DAT_140622c24 != *(float *)(param_1 + 0x9f0))
  {
    fVar14 = DAT_140622bc4;
  }
  fVar15 = fVar14;
  if (DAT_140622c54 <= fVar1) {
    fVar15 = fVar14 * DAT_140622c54;
  }
  fVar14 = fVar13 / fVar14;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x8a0) + 0x298);
  if (*(float *)(lVar8 + 0x180) != fVar14) {
    *(float *)(lVar8 + 0x180) = fVar14;
    if ((*(longlong *)(lVar8 + 0x188) != 0) &&
       (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x188) + 0x38), lVar8 != 0)) {
      lVar4 = *(longlong *)(lVar8 + 0x120);
      while( true ) {
        lVar6 = lVar4;
        if (*(int *)(*(longlong *)(lVar8 + 0x108) + 0x1c) == 0) {
          *(float *)(*(longlong *)(lVar8 + 0x108) + 0x4c) = fVar14;
        }
        if (lVar6 == 0) break;
        lVar4 = *(longlong *)(lVar6 + 0x120);
        lVar8 = lVar6;
      }
    }
  }
  fVar13 = fVar13 / fVar15;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x298);
  if (*(float *)(lVar8 + 0x180) != fVar13) {
    *(float *)(lVar8 + 0x180) = fVar13;
    if ((*(longlong *)(lVar8 + 0x188) != 0) &&
       (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x188) + 0x38), lVar8 != 0)) {
      lVar4 = *(longlong *)(lVar8 + 0x120);
      while( true ) {
        lVar6 = lVar4;
        if (*(int *)(*(longlong *)(lVar8 + 0x108) + 0x1c) == 0) {
          *(float *)(*(longlong *)(lVar8 + 0x108) + 0x4c) = fVar13;
        }
        if (lVar6 == 0) break;
        lVar4 = *(longlong *)(lVar6 + 0x120);
        lVar8 = lVar6;
      }
    }
  }
  if (*(char *)(param_1 + 0x9be) != '\0') {
    FUN_14003bdb0(local_80,*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x298) + 0x198);
    uStack_38 = 0;
    local_30 = 4;
    uVar11 = 0xf;
    local_28 = 0xf;
    local_40 = 0x6b6c6177;
    bVar2 = false;
    ppppuVar9 = local_80;
    if (0xf < local_68) {
      ppppuVar9 = (undefined8 ****)local_80[0];
    }
    uVar12 = local_70;
    if (4 < local_70) {
      uVar12 = 4;
    }
    iVar5 = memcmp(ppppuVar9,&local_40,uVar12);
    if ((iVar5 == 0) && (local_70 == 4)) {
      bVar3 = true;
      uVar11 = local_48;
    }
    else {
      uStack_58 = 0;
      local_50 = 3;
      local_48 = 0xf;
      local_60 = (void *)(ulonglong)(uint3)DAT_1405c79ec;
      bVar2 = true;
      ppppuVar9 = local_80;
      if (0xf < local_68) {
        ppppuVar9 = (undefined8 ****)local_80[0];
      }
      uVar12 = local_70;
      if (3 < local_70) {
        uVar12 = 3;
      }
      iVar5 = memcmp(ppppuVar9,&local_60,uVar12);
      if ((iVar5 == 0) && (local_70 == 3)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
    }
    if ((bVar2) && (0xf < uVar11)) {
      _Memory = local_60;
      if ((0xfff < uVar11 + 1) &&
         (_Memory = *(void **)((longlong)local_60 + -8),
         0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    if (bVar3) {
      FUN_1403a14d0(param_1);
    }
    FUN_14003a830(local_80);
  }
  uVar7 = 3;
  if ((*(char *)(param_1 + 0xc41) == '\0') || (*(float *)(param_1 + 0x9f4) != DAT_140622b74)) {
    if ((*(char *)(param_1 + 0xc42) == '\0') ||
       ((*(float *)(param_1 + 0x9f4) != DAT_140622ca8 &&
        (*(float *)(param_1 + 0x9f4) != DAT_140622d24)))) {
      puVar10 = &DAT_1405c79ec;
    }
    else {
      puVar10 = (undefined4 *)&DAT_1405c7bb0;
      uVar7 = 4;
    }
  }
  else {
    puVar10 = (undefined4 *)&DAT_1405c7ba8;
    uVar7 = 4;
  }
  FUN_14003cce0(param_1 + 0xbd0,puVar10,uVar7);
  if (*(char *)(param_1 + 0x9bd) != '\0') {
    FUN_14003bdb0(&local_40,*(longlong *)(*(longlong *)(param_1 + 0x8a0) + 0x298) + 0x198);
    iVar5 = FUN_14003a760(&local_40,param_1 + 0xbd0);
    if (iVar5 != 0) {
      uVar7 = FUN_14003bdb0(local_80,param_1 + 0xbd0);
      FUN_140040cf0(*(undefined8 *)(param_1 + 0x8a0),uVar7);
    }
    FUN_14003a830(&local_40);
  }
  return;
}

