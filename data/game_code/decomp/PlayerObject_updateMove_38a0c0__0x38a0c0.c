// PlayerObject_updateMove_38a0c0 @ 0x38a0c0


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014038a983) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14038a0c0(longlong *param_1,float param_2)

{
  double dVar1;
  char cVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 ****ppppuVar12;
  void *_Memory;
  byte bVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong _Size;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qb;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_188 [32];
  char local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 ***local_118 [2];
  ulonglong local_108;
  ulonglong local_100;
  undefined8 ***local_f8 [2];
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1406ba040 ^ (ulonglong)auStack_188;
  local_160 = 0;
  dVar3 = (double)*(float *)((longlong)param_1 + 0x9f4) * (double)param_1[0xf7];
  lVar14 = param_1[0x136];
  if ((((char)lVar14 != '\0') && (*(char *)((longlong)param_1 + 0x68c) == '\0')) &&
     ((char)param_1[0x137] == '\0')) {
    fVar20 = cosf(*(float *)(param_1 + 0xbf));
    dVar3 = dVar3 * (double)fVar20;
  }
  dVar7 = DAT_140622d98;
  dVar29 = DAT_140622d18;
  dVar30 = DAT_140622cb0;
  fVar21 = DAT_140622a74;
  dVar1 = (double)param_1[0x15f];
  fVar20 = DAT_140622c24;
  if ((char)param_1[0x165] != '\0') {
    fVar20 = DAT_140622a74;
  }
  cVar16 = *(char *)((longlong)param_1 + 0xb01);
  if (((cVar16 == '\0') && ((char)param_1[0x160] == '\0')) &&
     ((*(char *)((longlong)param_1 + 0xb59) == '\0' &&
      (*(char *)((longlong)param_1 + 0xb5a) == '\0')))) {
    cVar17 = (char)param_1[0x160];
    cVar18 = '\0';
  }
  else {
    cVar17 = (char)param_1[0x160];
    cVar18 = '\x01';
    if ((cVar16 != '\0') && (cVar17 != '\0')) {
      cVar18 = '\x01';
      if (*(char *)((longlong)param_1 + 0xb02) == '\0') {
        cVar16 = '\0';
      }
      else {
        cVar17 = '\0';
      }
    }
  }
  fVar28 = fVar20;
  if (((((char)param_1[0x165] == '\0') && (*(char *)((longlong)param_1 + 0xa0c) == '\0')) &&
      (cVar16 != *(char *)((longlong)param_1 + 0xb5b))) &&
     ((fVar28 = DAT_140622a74, *(int *)((longlong)param_1 + 0xb3c) < 1 &&
      (dVar31 = (double)param_1[0x154] - (double)param_1[0x168], fVar28 = fVar20,
      dVar31 < DAT_140622d98)))) {
    fVar28 = (float)((dVar31 + dVar31) * _DAT_140622de8 + DAT_140622d18);
  }
  iVar11 = 1;
  if (cVar16 != '\0') {
    iVar11 = -1;
  }
  dVar31 = (double)param_2 * DAT_140622d98 * (double)fVar28;
  if ((((*(char *)((longlong)param_1 + 0xb59) == '\0') || (cVar16 == '\0')) &&
      ((*(char *)((longlong)param_1 + 0xb5a) == '\0' || (cVar17 == '\0')))) ||
     ((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & DAT_1406243d0._4_4_,
                         SUB84(dVar1,0) & (uint)DAT_1406243d0) < dVar3 * _DAT_140622e00 ||
       ((char)lVar14 == '\0')) || ((char)param_1[0x137] != '\0')))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)((longlong)param_1 + 0xb19) != '\0') || (bVar4)) {
    dVar26 = DAT_140622e18;
    if ((double)param_1[0xad] < 0.0) {
      dVar26 = DAT_140622e18 - ((double)param_1[0xad] / DAT_140622ef0) * _DAT_140622d50;
    }
    if (bVar4) {
      param_1[0x164] =
           (longlong)((double)(param_2 * DAT_140622a88) * dVar26 + (double)param_1[0x164]);
    }
    dVar3 = dVar3 + (double)param_1[0x164];
    *(undefined1 *)((longlong)param_1 + 0xb19) = 1;
  }
  if (((cVar16 != '\0') && (0.0 < (double)param_1[0x15f])) ||
     ((cVar17 != '\0' && ((double)param_1[0x15f] <= 0.0 && (double)param_1[0x15f] != 0.0)))) {
    dVar31 = dVar31 * DAT_140622e48;
  }
  dVar26 = dVar30;
  cVar19 = cVar18;
  local_168 = cVar18;
  if ((cVar16 == '\0') && (cVar17 == '\0')) {
    if (*(char *)((longlong)param_1 + 0xa0c) != '\0') {
      if (*(char *)((longlong)param_1 + 0x9bd) == '\0') {
        if (*(char *)((longlong)param_1 + 0x9be) != '\0') {
          uStack_130 = 0;
          local_128 = 6;
          local_120 = 0xf;
          local_138._0_6_ = CONCAT24(DAT_14057db84,DAT_14057db80);
          local_138 = (ulonglong)(uint6)local_138;
          local_160 = 0x10;
          FUN_14003bdb0(local_118,*(longlong *)(param_1[0x115] + 0x298) + 0x198);
          bVar13 = 0x30;
          ppppuVar12 = local_118;
          if (0xf < local_100) {
            ppppuVar12 = (undefined8 ****)local_118[0];
          }
          uVar15 = local_108;
          if (6 < local_108) {
            uVar15 = 6;
          }
          iVar11 = memcmp(ppppuVar12,&local_138,uVar15);
          if ((iVar11 == 0) && (local_108 == 6)) {
LAB_14038a70d:
            bVar4 = false;
          }
          else {
            uStack_150 = 0;
            local_148 = 6;
            local_140 = 0xf;
            local_158._0_6_ = CONCAT24(DAT_14057db68,DAT_14057db64);
            local_158 = (void *)(ulonglong)(uint6)local_158;
            local_160 = 0x270;
            FUN_14003bdb0(local_f8,*(longlong *)(param_1[0x115] + 0x298) + 0x198);
            bVar13 = 0xf0;
            iVar11 = FUN_14003a760(local_f8,&local_158);
            if (iVar11 == 0) goto LAB_14038a70d;
            bVar4 = true;
          }
          if ((char)bVar13 < '\0') {
            bVar13 = bVar13 & 0x7f;
            FUN_14003a830(local_f8);
          }
          if ((bVar13 & 0x40) != 0) {
            bVar13 = bVar13 & 0xbf;
            FUN_14003a830(&local_158);
          }
          if ((bVar13 & 0x20) != 0) {
            FUN_14003a830(local_118);
          }
          fVar21 = DAT_140622a74;
          if (bVar4) {
            uStack_150 = 0;
            local_148 = 6;
            local_140 = 0xf;
            local_158._0_6_ = CONCAT24(DAT_14057db84,DAT_14057db80);
            local_158 = (void *)(ulonglong)(uint6)local_158;
            FUN_140040d60(param_1[0x115],&local_158,DAT_140622a74);
            fVar21 = DAT_140622a74;
          }
        }
      }
      else {
        uStack_130 = 0;
        local_128 = 6;
        local_120 = 0xf;
        local_138._0_6_ = CONCAT24(DAT_14057db84,DAT_14057db80);
        local_138 = (ulonglong)(uint6)local_138;
        local_160 = 1;
        FUN_14003bdb0(local_118,*(longlong *)(param_1[0x114] + 0x298) + 0x198);
        bVar5 = false;
        bVar4 = false;
        ppppuVar12 = local_118;
        if (0xf < local_100) {
          ppppuVar12 = (undefined8 ****)local_118[0];
        }
        uVar15 = local_108;
        if (6 < local_108) {
          uVar15 = 6;
        }
        iVar11 = memcmp(ppppuVar12,&local_138,uVar15);
        if ((iVar11 == 0) && (local_108 == 6)) {
          bVar6 = false;
          uVar15 = local_140;
        }
        else {
          uStack_150 = 0;
          local_148 = 6;
          uVar15 = 0xf;
          local_140 = 0xf;
          local_158._0_6_ = CONCAT24(DAT_14057db68,DAT_14057db64);
          local_158 = (void *)(ulonglong)(uint6)local_158;
          local_160 = 0x107;
          FUN_14003bdb0(local_f8,*(longlong *)(param_1[0x114] + 0x298) + 0x198);
          bVar5 = true;
          bVar4 = true;
          ppppuVar12 = local_f8;
          if (0xf < local_e0) {
            ppppuVar12 = (undefined8 ****)local_f8[0];
          }
          _Size = local_e8;
          if (6 < local_e8) {
            _Size = 6;
          }
          iVar11 = memcmp(ppppuVar12,&local_158,_Size);
          if ((iVar11 == 0) && (local_e8 == 6)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
        }
        if (bVar4) {
          FUN_14003a830(local_f8);
        }
        if ((bVar5) && (0xf < uVar15)) {
          _Memory = local_158;
          if ((0xfff < uVar15 + 1) &&
             (_Memory = *(void **)((longlong)local_158 + -8),
             0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
        FUN_14003a830(local_118);
        fVar21 = DAT_140622a74;
        cVar19 = local_168;
        if (bVar6) {
          uStack_150 = 0;
          local_148 = 6;
          local_140 = 0xf;
          local_158._0_6_ = CONCAT24(DAT_14057db84,DAT_14057db80);
          local_158 = (void *)(ulonglong)(uint6)local_158;
          FUN_140040d60(param_1[0x114],&local_158,DAT_140622a74);
          fVar21 = DAT_140622a74;
          cVar19 = local_168;
        }
      }
    }
    bVar4 = true;
    dVar26 = dVar29;
    if ((char)param_1[0x165] == '\0') {
      fVar28 = *(float *)(param_1 + 0x143) + fVar21;
      fVar20 = DAT_140622c24;
      if (fVar28 <= DAT_140622c24) {
        fVar20 = fVar28;
      }
      if ((((*(char *)((longlong)param_1 + 0xa0c) == '\0') &&
           (fVar21 = DAT_1406229c0, *(char *)((longlong)param_1 + 0x9b9) == '\0')) &&
          (*(char *)((longlong)param_1 + 0x9bb) == '\0')) &&
         (((*(char *)((longlong)param_1 + 0x9ba) == '\0' &&
           (fVar21 = DAT_140622a10, *(char *)((longlong)param_1 + 0x9bd) == '\0')) &&
          (*(char *)((longlong)param_1 + 0x9be) == '\0')))) {
        fVar21 = DAT_1406229ec;
      }
      *(float *)(param_1 + 0x143) = param_2 * fVar21 + *(float *)(param_1 + 0x143);
      dVar26 = (double)fVar20;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x143) = 0;
    bVar4 = false;
    if (((cVar16 != '\0') &&
        (dVar27 = (double)param_1[0x15f],
        (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ DAT_1406243e0._4_4_,
                         SUB84(dVar3,0) ^ (uint)DAT_1406243e0) < dVar27)) ||
       ((cVar17 != '\0' && (dVar27 = (double)param_1[0x15f], dVar27 < dVar3)))) {
      param_1[0x15f] = (longlong)((double)iVar11 * dVar31 + dVar27);
    }
    if (*(char *)((longlong)param_1 + 0xa0c) != '\0') {
      if (*(char *)((longlong)param_1 + 0x9bd) == '\0') {
        if (*(char *)((longlong)param_1 + 0x9be) != '\0') {
          FUN_1403a14d0(param_1);
        }
      }
      else {
        uVar22 = FUN_14003bdb0(local_118,param_1 + 0x17a);
        FUN_140040cf0(param_1[0x114],uVar22);
      }
    }
  }
  uVar10 = DAT_1406243d0._4_4_;
  uVar9 = (uint)DAT_1406243d0;
  if ((double)CONCAT44((uint)((ulonglong)param_1[0x15f] >> 0x20) & DAT_1406243d0._4_4_,
                       (uint)param_1[0x15f] & (uint)DAT_1406243d0) < dVar7) {
    *(undefined1 *)((longlong)param_1 + 0xb94) = 0;
  }
  uVar8 = DAT_1406243c0;
  if ((*(char *)((longlong)param_1 + 0xb94) != '\0') || ((char)param_1[0x16b] != '\0')) {
    bVar4 = true;
  }
  if (((((char)param_1[0x162] == '\0') && (*(char *)((longlong)param_1 + 0xb94) == '\0')) &&
      ((char)param_1[0x16b] == '\0')) || ((char)param_1[0x165] != '\0')) {
    if (((char)param_1[0x163] != '\0') && ((char)param_1[0x165] == '\0')) {
      dVar26 = DAT_140622cf0;
    }
  }
  else {
    dVar26 = dVar30;
    if (((char)param_1[0x145] == '\0') && (cVar18 == '\0')) {
      dVar26 = dVar29;
    }
  }
  cVar2 = *(char *)((longlong)param_1 + 0xb59);
  if (cVar2 == '\0') {
    if (*(char *)((longlong)param_1 + 0xb5a) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xb5b) = 0;
      fVar20 = 1.0;
LAB_14038a9b0:
      if ((*(char *)((longlong)param_1 + 0xb5a) != '\0') && (cVar17 == '\0')) goto LAB_14038a9c6;
    }
  }
  else {
    *(char *)((longlong)param_1 + 0xb5b) = cVar2;
    iVar11 = 1;
    if (cVar2 != '\0') {
      iVar11 = -1;
    }
    fVar20 = (float)iVar11;
    if (cVar16 != '\0') goto LAB_14038a9b0;
LAB_14038a9c6:
    bVar4 = false;
    if (param_1[0xcf] == 0) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = (float)((uint)(*(float *)(param_1 + 0xd3) * DAT_140623200) & uVar8);
    }
    dVar29 = (double)fVar21;
    dVar30 = dVar29;
    if (DAT_140622f70 <= dVar29) {
      dVar30 = DAT_140622f70;
    }
    dVar27 = DAT_140622f30;
    if ((DAT_140622f30 <= dVar30) && (dVar27 = DAT_140622f70, dVar29 <= DAT_140622f70)) {
      dVar27 = dVar29;
    }
    dVar29 = (dVar27 - DAT_140622f30) / DAT_140622f30;
    dVar30 = (double)param_2 * dVar7 * (dVar29 * dVar7 + dVar7) * DAT_140622d78;
    if (*(char *)((longlong)param_1 + 0x9b9) != '\0') {
      dVar30 = dVar30 * DAT_140622dd0;
    }
    cVar2 = *(char *)((longlong)param_1 + 0xb59);
    if (((cVar2 != '\0') && (0.0 < (double)param_1[0x15f])) ||
       ((*(char *)((longlong)param_1 + 0xb5a) != '\0' &&
        ((double)param_1[0x15f] <= 0.0 && (double)param_1[0x15f] != 0.0)))) {
      dVar29 = dVar29 * DAT_140622dd0 + _DAT_140622e38;
      if (*(char *)((longlong)param_1 + 0x9b9) == '\0') {
        if (*(char *)((longlong)param_1 + 0x9bb) == '\0') {
          if (*(char *)((longlong)param_1 + 0x9be) != '\0') {
            dVar29 = dVar29 + _DAT_140623708;
          }
        }
        else {
          dVar29 = dVar29 + _DAT_140623718;
        }
      }
      else {
        dVar29 = dVar29 + DAT_140623710;
      }
      if ((char)param_1[0x165] != '\0') {
        dVar29 = dVar29 * DAT_140622e90;
      }
      if (((cVar2 != '\0') && (cVar17 == '\0')) ||
         ((*(char *)((longlong)param_1 + 0xb5a) != '\0' && (cVar16 == '\0')))) {
        dVar29 = dVar29 * _DAT_140622de8;
      }
      dVar29 = dVar29 * dVar31;
      if ((double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar10,SUB84(dVar30,0) & uVar9) <
          (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar10,SUB84(dVar29,0) & uVar9)) {
        dVar30 = dVar29;
      }
    }
    else if (((cVar2 != '\0') && (cVar17 != '\0')) ||
            ((*(char *)((longlong)param_1 + 0xb5a) != '\0' && (cVar16 != '\0')))) {
      dVar30 = dVar30 + dVar31;
    }
    if (((((char)param_1[0x136] != '\0') && ((char)param_1[0x167] == '\0')) &&
        (0 < *(int *)((longlong)param_1 + 0xb3c))) && ((char)param_1[0x137] == '\0')) {
      param_1[0x15f] = (longlong)((double)param_1[0x15f] * _DAT_140622de8);
    }
    param_1[0x15f] = (longlong)((double)fVar20 * dVar30 + (double)param_1[0x15f]);
  }
  if ((((char)param_1[0x163] != '\0') && ((char)param_1[0x165] == '\0')) &&
     ((*(char *)((longlong)param_1 + 0xb59) == '\0' &&
      (*(char *)((longlong)param_1 + 0xb5a) == '\0')))) {
    if (*(char *)((longlong)param_1 + 0xb5b) == '\0') {
      if ((double)param_1[0x15f] < 0.0) goto LAB_14038abc8;
    }
    else if (0.0 < (double)param_1[0x15f]) {
LAB_14038abc8:
      *(undefined1 *)(param_1 + 0x163) = 0;
    }
  }
  fVar20 = DAT_140622a50;
  if (bVar4) {
LAB_14038ac3d:
    fVar21 = DAT_140622a50;
    if (((char)param_1[0x165] == '\0') && ((char)param_1[0x16b] == '\0')) {
      fVar21 = DAT_140622c24;
    }
    dVar30 = (double)param_1[0x15f] -
             (double)param_1[0x15f] * dVar26 * (double)param_2 * (double)fVar21;
    param_1[0x15f] = (longlong)dVar30;
    if (((double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar10,SUB84(dVar30,0) & uVar9) <
         DAT_140622c38) ||
       (((char)param_1[0x16e] != '\0' &&
        (((0.0 < dVar1 && (dVar30 < 0.0)) || ((dVar1 < 0.0 && (0.0 < dVar30)))))))) {
      param_1[0x15f] = 0;
LAB_14038accf:
      *(undefined1 *)(param_1 + 0x16b) = 0;
      *(undefined1 *)(param_1 + 0x163) = 0;
      *(undefined1 *)((longlong)param_1 + 0xb94) = 0;
      *(undefined1 *)(param_1 + 0x162) = 0;
    }
  }
  else {
    dVar30 = (double)param_1[0x15f];
    dVar29 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar10,SUB84(dVar30,0) & uVar9);
    if (dVar3 < dVar29) goto LAB_14038ac3d;
    if (((char)param_1[0x16e] != '\0') &&
       (((dVar29 < DAT_140622c38 || ((0.0 < dVar1 && (dVar30 < 0.0)))) ||
        ((dVar1 < 0.0 && (0.0 < dVar30)))))) goto LAB_14038accf;
  }
  fVar21 = DAT_140622c24;
  if ((char)param_1[0x162] != '\0') {
    if (((char)param_1[0x165] == '\0') && ((char)param_1[0x16b] == '\0')) {
      fVar20 = DAT_140622c24;
    }
    fVar20 = (float)((double)*(float *)((longlong)param_1 + 0xb14) -
                    (double)*(float *)((longlong)param_1 + 0xb14) * dVar26 * (double)param_2 *
                    (double)fVar20);
    *(float *)((longlong)param_1 + 0xb14) = fVar20;
    if ((float)((uint)fVar20 & uVar8) < fVar21) {
      *(undefined1 *)(param_1 + 0x162) = 0;
    }
  }
  uVar9 = DAT_1406243f0;
  if (*(char *)((longlong)param_1 + 0x9e4) == '\0') {
    cVar2 = *(char *)((longlong)param_1 + 0x9c2);
    if ((cVar16 == '\0') || (cVar2 != '\0')) {
      if ((cVar17 != '\0') && (cVar2 != '\0')) {
        uVar22 = 0;
        goto LAB_14038ada9;
      }
    }
    else {
      uVar22 = 1;
LAB_14038ada9:
      FUN_140398510(param_1,uVar22);
    }
    if (cVar2 != *(char *)((longlong)param_1 + 0x9c2)) {
      FUN_14038cf30();
      if (*(char *)((longlong)param_1 + 0x9b9) == '\0') {
        if ((((*(char *)((longlong)param_1 + 0x9ba) == '\0') &&
             (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
            (*(char *)((longlong)param_1 + 0x9c4) == '\0')) &&
           (((cVar18 = cVar19, *(char *)((longlong)param_1 + 0x9bb) == '\0' &&
             (*(char *)((longlong)param_1 + 0x9bd) == '\0')) &&
            ((*(char *)((longlong)param_1 + 0x9be) == '\0' && ((char)param_1[0xe5] == '\0')))))) {
          uVar22 = (**(code **)(*param_1 + 0x158))();
          auVar25._8_4_ = (int)extraout_XMM0_Qb;
          auVar25._0_8_ = uVar22;
          auVar25._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
          if ((char)param_1[0x136] != '\0') {
            auVar24._8_8_ = auVar25._8_8_;
            auVar24._0_8_ = (double)(float)uVar22 - (double)param_1[0x126] * _DAT_140622f50;
            auVar25._4_12_ = auVar24._4_12_;
            auVar25._0_4_ = (float)auVar24._0_8_;
          }
          fVar20 = (float)(auVar25._0_4_ & uVar8);
          if (((DAT_1406231d0 < fVar20) && (fVar20 < DAT_140623324)) ||
             ((DAT_1406233fc < fVar20 && (fVar20 < DAT_14062344c)))) {
            lVar14 = *param_1;
            (**(code **)(lVar14 + 0x158))(param_1);
            goto LAB_14038aec8;
          }
        }
        else if ((*(char *)((longlong)param_1 + 0x9b9) != '\0') ||
                (*(char *)((longlong)param_1 + 0x9ba) != '\0')) goto LAB_14038aeb8;
      }
      else {
LAB_14038aeb8:
        lVar14 = *param_1;
        (**(code **)(lVar14 + 0x158))(param_1);
LAB_14038aec8:
        (**(code **)(lVar14 + 0x150))();
      }
    }
  }
  else {
    param_1[0x15f] = (longlong)dVar3;
  }
  if ((((((*(char *)((longlong)param_1 + 0x9b9) == '\0') &&
         (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
        (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
       ((*(char *)((longlong)param_1 + 0x9c4) == '\0' &&
        (*(char *)((longlong)param_1 + 0x9bb) == '\0')))) &&
      (*(char *)((longlong)param_1 + 0x9bd) == '\0')) &&
     (*(char *)((longlong)param_1 + 0x9be) == '\0')) {
    bVar4 = true;
    if ((((double)param_1[0x15f] == 0.0) || ((char)param_1[0xe5] != '\0')) ||
       ((cVar18 == '\0' ||
        ((double)CONCAT44((uint)((ulonglong)param_1[0x134] >> 0x20) & DAT_1406243d0._4_4_,
                          (uint)param_1[0x134] & (uint)DAT_1406243d0) <= DAT_140622e18))))
    goto LAB_14038afad;
    if ((*(char *)((longlong)param_1 + 0xa2a) == '\0') &&
       (*(char *)((longlong)param_1 + 0x9e4) == '\0')) {
      *(undefined2 *)(param_1 + 0xe5) = 0;
      *(undefined1 *)(param_1 + 0xcd) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      FUN_14038d220(param_1,0,fVar21);
    }
    FUN_14038cf30(param_1);
  }
  else {
    bVar4 = false;
LAB_14038afad:
    if (((((char)param_1[0x136] == '\0') && (*(char *)((longlong)param_1 + 0x9b1) == '\0')) &&
        (bVar4)) &&
       ((((cVar18 == '\0' && (*(char *)((longlong)param_1 + 0xa0c) == '\0')) &&
         ((char)param_1[0xe5] == '\0')) &&
        (fVar20 = (float)(**(code **)(*param_1 + 0x158))(param_1),
        (int)fVar20 != ((int)fVar20 / 0x5a) * 0x5a)))) {
      FUN_14038d100(param_1);
      FUN_140391260(param_1);
    }
  }
  fVar20 = DAT_140623010;
  if (((cVar16 == '\0') && (cVar17 == '\0')) && (*(char *)((longlong)param_1 + 0xa0c) != '\0')) {
    if ((double)*(float *)((longlong)param_1 + 0xbac) <
        (double)param_1[0x154] - (double)*(float *)(param_1 + 0x175)) {
      iVar11 = rand();
      *(float *)((longlong)param_1 + 0xbac) =
           ((float)iVar11 / DAT_140623644) * DAT_14062307c + fVar20;
      *(float *)(param_1 + 0x175) = (float)(double)param_1[0x154];
      if (*(char *)((longlong)param_1 + 0x9bd) == '\0') {
        if (*(char *)((longlong)param_1 + 0x9be) != '\0') {
          uStack_150 = 0;
          local_148 = 6;
          local_140 = 0xf;
          local_158._0_6_ = CONCAT24(DAT_14057db68,DAT_14057db64);
          local_158 = (void *)(ulonglong)(uint6)local_158;
          FUN_140040cf0(param_1[0x115],&local_158);
        }
      }
      else {
        uStack_150 = 0;
        local_148 = 6;
        local_140 = 0xf;
        local_158._0_6_ = CONCAT24(DAT_14057db68,DAT_14057db64);
        local_158 = (void *)(ulonglong)(uint6)local_158;
        FUN_140040cf0(param_1[0x114],&local_158);
      }
    }
  }
  else {
    *(float *)(param_1 + 0x175) = (float)(double)param_1[0x154];
  }
  if (((*(char *)((longlong)param_1 + 0x9bb) == '\0') ||
      (*(char *)((longlong)param_1 + 0x729) != '\0')) ||
     (*(char *)((longlong)param_1 + 0x9e4) != '\0')) goto LAB_14038b3be;
  dVar3 = (double)param_1[0x15f];
  if ((char)param_1[0x165] != '\0') {
    fVar21 = DAT_140622a74;
    if ((((0.0 <= dVar3) || (fVar28 = *(float *)(param_1 + 0x13c), fVar28 <= 0.0)) ||
        (cVar16 == '\0')) &&
       (((dVar3 <= 0.0 || (fVar28 = *(float *)(param_1 + 0x13c), 0.0 <= fVar28)) || (cVar17 == '\0')
        ))) {
      fVar28 = *(float *)(param_1 + 0x13c);
      if (((fVar28 <= 0.0) || (dVar3 <= (double)fVar28)) &&
         ((0.0 <= fVar28 || ((double)fVar28 <= dVar3)))) {
        fVar21 = DAT_140622a10;
      }
    }
    if (((((0.0 < fVar28) && ((double)fVar28 < dVar3)) && (fVar23 = DAT_140622aa0, cVar17 != '\0'))
        || (((fVar23 = fVar21, 0.0 <= fVar28 || ((double)fVar28 <= dVar3)) ||
            (fVar23 = DAT_140622aa0, cVar16 != '\0')))) && (fVar21 = fVar23, cVar16 != '\0'))
    goto LAB_14038b31b;
    if (cVar17 == '\0') {
      if (*(char *)((longlong)param_1 + 0xb59) == '\0') {
        if ((double)param_1[0x15f] < (double)fVar28) goto LAB_14038b31b;
        if ((cVar16 == '\0') &&
           ((*(char *)((longlong)param_1 + 0xb5a) != '\0' ||
            ((double)fVar28 < (double)param_1[0x15f])))) goto LAB_14038b302;
        if (fVar28 <= 0.0) {
          if (fVar28 < 0.0) {
            fVar23 = param_2 * fVar21 * DAT_140622b08;
            fVar21 = (float)((uint)fVar28 ^ uVar9);
            if (fVar23 <= (float)((uint)fVar28 ^ uVar9)) {
              fVar21 = fVar23;
            }
            fVar28 = fVar21 + fVar28;
            *(float *)(param_1 + 0x13c) = fVar28;
          }
          goto LAB_14038b32f;
        }
        fVar23 = param_2 * fVar21 * DAT_140622b08;
        fVar21 = fVar28;
        if (fVar23 <= fVar28) {
          fVar21 = fVar23;
        }
      }
      else {
LAB_14038b31b:
        fVar21 = param_2 * fVar21;
      }
      fVar28 = fVar28 - fVar21;
      *(float *)(param_1 + 0x13c) = fVar28;
    }
    else {
LAB_14038b302:
      fVar28 = param_2 * fVar21 + fVar28;
      *(float *)(param_1 + 0x13c) = fVar28;
    }
LAB_14038b32f:
    fVar20 = cocos2d::clampf(fVar28,DAT_1406237c0,fVar20);
    *(float *)(param_1 + 0x13c) = fVar20;
  }
  if ((char)param_1[0x136] != '\0') {
    cosf((float)(double)param_1[0x126]);
  }
  lVar14 = *param_1;
  (**(code **)(lVar14 + 0x158))(param_1);
  (**(code **)(lVar14 + 0x150))(param_1);
LAB_14038b3be:
  if ((char)param_1[0x165] == '\0') {
    *(float *)(param_1 + 0x13c) = (float)(double)param_1[0x15f];
  }
  return;
}

