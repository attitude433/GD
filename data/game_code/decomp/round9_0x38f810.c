// FUN_14038f810 @ 0x38f810


/* WARNING: Type propagation algorithm not settling */

void FUN_14038f810(longlong *param_1,float param_2,longlong *param_3,char param_4)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  CCRect *pCVar12;
  CCPoint *pCVar13;
  longlong lVar14;
  longlong *plVar15;
  float *pfVar16;
  undefined8 uVar17;
  int iVar18;
  ulonglong uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 local_res20 [2];
  bool local_167;
  char local_164;
  undefined8 local_158;
  CCPoint local_150 [4];
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110 [2];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  CCRect local_f8 [8];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  
  if ((param_4 == '\0') && (cVar6 = FUN_14038f2e0(), cVar6 != '\0')) {
    return;
  }
  pCVar12 = (CCRect *)(**(code **)(*param_1 + 0x490))(param_1);
  cocos2d::CCRect::CCRect((CCRect *)&local_138,pCVar12);
  pCVar12 = (CCRect *)(**(code **)(*param_3 + 0x490))(param_3);
  cocos2d::CCRect::CCRect((CCRect *)&local_148,pCVar12);
  bVar23 = (char)param_3[0x88] == '\0';
  if ((char)param_1[0x16e] == '\0') {
    if (*(char *)((longlong)param_1 + 0x9c2) == '\0') goto LAB_14038f8ed;
LAB_14038f91a:
    bVar26 = true;
    bVar23 = (char)param_3[0x88] != '\0';
  }
  else {
    if ((double)param_1[0x15f] <= 0.0 && (double)param_1[0x15f] != 0.0) goto LAB_14038f91a;
LAB_14038f8ed:
    bVar26 = false;
  }
  iVar18 = *(int *)((longlong)param_3 + 0x444);
  if ((iVar18 == 1) || (((iVar18 - 3U & 0xfffffffc) == 0 && (iVar18 != 4)))) {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
  }
  bVar24 = false;
  bVar22 = false;
  pCVar13 = (CCPoint *)(**(code **)(*param_3 + 0x4a8))(param_3,&local_158);
  cocos2d::CCPoint::operator-(pCVar13,(CCPoint *)&local_118);
  if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
    local_110[0] = local_114;
    local_114 = local_118;
  }
  else {
    local_110[0] = local_118;
  }
  if ((double)*(float *)((longlong)param_1 + 0x9f4) * (double)param_1[0xf7] * (double)param_2 <
      (double)local_114) {
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      if (bVar23 != false) {
        bVar24 = true;
      }
    }
    else {
      bVar24 = bVar23 == false;
    }
    bVar22 = true;
    bVar23 = (bool)(bVar23 ^ 1);
  }
  cVar9 = *(char *)((longlong)param_1 + 0x9bf);
  if (cVar9 != *(char *)((longlong)param_1 + 0x9c3)) {
    bVar23 = bVar23 == false;
  }
  cVar8 = *(char *)((longlong)param_1 + 0x9b1);
  if (cVar8 != '\0') {
    iVar18 = -1;
    if (cVar9 == '\0') {
      iVar18 = 1;
    }
    if ((((0.0 < (float)iVar18 * *(float *)((longlong)param_1 + 0x9b4)) && (bVar23 != false)) &&
        (*(char *)((longlong)param_1 + 0x953) == cVar6)) &&
       (*(char *)((longlong)param_1 + 0x953) == cVar9)) {
      return;
    }
  }
  fVar33 = local_13c /
           (float)((double)local_140 /
                  ((double)*(float *)((longlong)param_1 + 0x9f4) * (double)param_1[0xf7]));
  local_158 = CONCAT44(local_158._4_4_,fVar33);
  if (cVar8 != '\0') {
    iVar18 = -1;
    if (cVar9 == '\0') {
      iVar18 = 1;
    }
    if ((0.0 < (float)iVar18 * *(float *)((longlong)param_1 + 0x9b4)) &&
       ((double)fVar33 < (double)param_1[0x127])) {
      return;
    }
  }
  bVar7 = bVar23;
  if (cVar8 != '\0') {
    bVar7 = bVar23 * '\x04';
  }
  fVar36 = (float)bVar7;
  (**(code **)(*param_3 + 0x4a8))(param_3,&local_128);
  cocos2d::CCPoint::operator-((CCPoint *)(param_3 + 0x9a),(CCPoint *)&local_e8);
  fVar33 = DAT_140622b08;
  if (*(char *)((longlong)param_1 + 0x9c3) != '\0') {
    local_e4 = local_e8;
  }
  cVar9 = *(char *)((longlong)param_1 + 0x9bf);
  cVar8 = cVar9;
  if (((cVar9 == '\0') && (0.0 < local_e4)) ||
     ((cVar9 != '\0' && (cVar8 = *(char *)((longlong)param_1 + 0x9bf), local_e4 < 0.0)))) {
    bVar20 = true;
  }
  else {
    bVar20 = false;
  }
  cVar5 = cVar9;
  if ((param_4 != '\0') || (cVar5 = cVar8, bVar20)) {
    cVar9 = cVar5;
    local_e4 = (float)((uint)local_e4 & DAT_1406243c0);
    fVar27 = DAT_140623010;
    if ((char)param_1[0x16e] != '\0') {
      fVar27 = DAT_14062307c;
    }
    if (fVar27 * param_2 <= local_e4) {
      local_e4 = DAT_140623010;
      if ((char)param_1[0x16e] != '\0') {
        local_e4 = DAT_14062307c;
      }
      local_e4 = local_e4 * param_2;
    }
    fVar36 = fVar36 + local_e4;
  }
  fVar35 = local_12c * DAT_140622b08;
  fVar27 = cosf((float)(double)param_1[0x126]);
  fVar35 = fVar35 / fVar27;
  lVar14 = (**(code **)(*param_1 + 200))(param_1);
  fVar27 = DAT_140622c24;
  if (cVar9 == '\0') {
    fVar35 = (*(float *)(lVar14 + 4) - fVar35) - fVar36;
  }
  else {
    fVar35 = fVar35 + *(float *)(lVar14 + 4) + fVar36;
  }
  cVar9 = *(char *)((longlong)param_1 + 0x9b1);
  if (cVar9 == '\0') {
LAB_14038fc39:
    pCVar12 = (CCRect *)
              cocos2d::CCRect::CCRect
                        (local_f8,local_148,local_144 + DAT_140622c24,local_140,
                         local_13c - DAT_140622e58);
    bVar10 = cocos2d::CCRect::intersectsRect((CCRect *)&local_138,pCVar12);
    if (!bVar10) {
      return;
    }
  }
  else if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
    if (local_144 + local_13c < fVar35) {
      return;
    }
  }
  else {
    if (fVar35 < local_144) {
      return;
    }
    if (cVar9 == '\0') goto LAB_14038fc39;
  }
  pCVar13 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
  cocos2d::CCPoint::CCPoint(local_150,pCVar13);
  fVar35 = cocos2d::CCRect::getMinY((CCRect *)&local_148);
  fVar28 = cocos2d::CCRect::getMaxY((CCRect *)&local_148);
  pCVar12 = (CCRect *)(**(code **)(*param_3 + 0x490))(param_3);
  cocos2d::CCRect::CCRect((CCRect *)&local_128,pCVar12);
  local_128 = atanf(local_11c / local_120);
  fVar29 = cosf(local_128);
  fVar37 = (local_12c / fVar29) * fVar33;
  fVar29 = 0.0;
  if (((*(char *)((longlong)param_1 + 0x9b1) == '\0') ||
      ((int)param_1[0xd1] == *(int *)((longlong)param_3 + 0x39c))) ||
     (*(char *)((longlong)param_1 + 0x953) == cVar6)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
    if ((char)param_1[0x16e] == '\0') {
      fVar29 = *(float *)(param_1 + 0x13e) * DAT_140623120;
    }
  }
  dVar31 = (double)FUN_1401a13b0(param_3);
  fVar3 = DAT_140622e58;
  dVar32 = DAT_140622cf0;
  if (cVar6 == '\0') {
    fVar30 = (local_12c * fVar33 + fVar28) - fVar29;
    fVar29 = ((float)dVar31 + fVar37) - fVar29;
    fVar28 = fVar29;
    if (fVar30 <= fVar29) {
      fVar28 = fVar30;
    }
    bVar25 = fVar30 <= fVar29;
    fVar30 = fVar28;
    if (fVar28 <= fVar35) {
      fVar30 = fVar35;
    }
    local_167 = fVar28 <= fVar35;
  }
  else {
    fVar35 = (fVar35 - local_12c * fVar33) + fVar29;
    fVar29 = ((float)dVar31 - fVar37) + fVar29;
    fVar30 = fVar29;
    if (fVar29 <= fVar35) {
      fVar30 = fVar35;
    }
    bVar25 = fVar29 <= fVar35;
    local_167 = fVar28 <= fVar30;
    if (local_167) {
      fVar30 = fVar28;
    }
  }
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,bVar25);
  local_164 = '\0';
  bVar25 = false;
  if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
    if (cVar6 != '\0') goto LAB_14038ff71;
LAB_14038fe2b:
    if (((bVar10) || (bVar23 == false)) || ((char)param_1[0x136] != '\0')) {
LAB_14038fe81:
      cVar9 = '\0';
      if ((bVar23 == false) && (cVar9 = param_4, bVar20)) {
        cVar9 = '\x01';
      }
    }
    else {
      if (*(char *)((longlong)param_1 + 0xa1c) == '\0') {
LAB_14038fe6b:
        if (*(char *)((longlong)param_1 + 0x9b9) != '\0') goto LAB_14038fe74;
      }
      else {
        if (*(char *)((longlong)param_1 + 0x9b9) == '\0') {
          if (((*(char *)((longlong)param_1 + 0x9ba) == '\0') &&
              (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
             (*(char *)((longlong)param_1 + 0x9c4) == '\0')) goto LAB_14038fe81;
          goto LAB_14038fe6b;
        }
LAB_14038fe74:
        if (*(char *)((longlong)param_1 + 0x985) != '\0') goto LAB_14038fe81;
      }
      cVar9 = '\x01';
    }
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      if (local_14c < fVar30) goto LAB_14038ff01;
      if ((cVar9 != '\0') && (local_14c < fVar30 + fVar36)) {
        if (*(char *)((longlong)param_1 + 0x9ba) != '\0') {
          bVar20 = 0.0 < (double)param_1[0x134];
LAB_14038fefb:
          if (bVar20) goto LAB_14038fefd;
        }
        goto LAB_14038ff01;
      }
LAB_14038fefd:
      bVar20 = false;
    }
    else {
      if (local_14c <= fVar30) {
        if ((cVar9 == '\0') || (local_14c <= fVar30 - fVar36)) goto LAB_14038fefd;
        if (*(char *)((longlong)param_1 + 0x9ba) != '\0') {
          bVar20 = (double)param_1[0x134] < 0.0;
          goto LAB_14038fefb;
        }
      }
LAB_14038ff01:
      bVar20 = true;
    }
    if (((*(char *)((longlong)param_1 + 0x985) == '\0') ||
        ((((*(char *)((longlong)param_1 + 0x9b9) == '\0' &&
           (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
          (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
         (*(char *)((longlong)param_1 + 0x9c4) == '\0')))) ||
       ((bVar23 != false && ((char)param_1[0x16e] == '\0')))) {
      bVar21 = false;
LAB_14038ff58:
      bVar2 = false;
    }
    else {
      bVar21 = true;
      if (((char)param_1[0x16e] != '\0') && (bVar10)) goto LAB_14038ff58;
      bVar2 = true;
    }
    if (bVar20) goto LAB_1403902af;
  }
  else {
    if (cVar6 != '\0') goto LAB_14038fe2b;
LAB_14038ff71:
    local_164 = '\x01';
    if (bVar23 == false) {
      if (((((*(char *)((longlong)param_1 + 0x9b9) != '\0') ||
            (*(char *)((longlong)param_1 + 0x9ba) != '\0')) ||
           (*(char *)((longlong)param_1 + 0x9bc) != '\0')) ||
          (*(char *)((longlong)param_1 + 0x9c4) != '\0')) &&
         (*(char *)((longlong)param_1 + 0x985) != '\0')) {
        fVar36 = (float)(byte)((*(char *)((longlong)param_1 + 0x9b1) != '\0') + 1);
      }
    }
    else {
      fVar36 = 0.0;
    }
    if ((bVar10) ||
       (((((*(char *)((longlong)param_1 + 0x9b9) != '\0' ||
           (*(char *)((longlong)param_1 + 0x9ba) != '\0')) ||
          ((*(char *)((longlong)param_1 + 0x9bc) != '\0' ||
           (*(char *)((longlong)param_1 + 0x9c4) != '\0')))) &&
         ((bVar23 != false && ((char)param_1[0x16e] == '\0')))) || ((char)param_1[0x136] != '\0'))))
    {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      if (fVar30 < local_14c) goto LAB_14039004b;
      if (bVar20) {
        fVar36 = fVar30 - fVar36;
        bVar20 = local_14c < fVar36;
LAB_140390045:
        if (!bVar20 && local_14c != fVar36) goto LAB_14039004b;
      }
LAB_140390047:
      bVar20 = false;
    }
    else {
      if (fVar30 <= local_14c) {
        if (bVar20) {
          fVar36 = fVar30 + fVar36;
          bVar20 = fVar36 < local_14c;
          goto LAB_140390045;
        }
        goto LAB_140390047;
      }
LAB_14039004b:
      bVar20 = true;
    }
    if ((((*(char *)((longlong)param_1 + 0x985) == '\0') && ((char)param_1[0x16e] == '\0')) &&
        (((*(char *)((longlong)param_1 + 0x9b9) != '\0' ||
          (((*(char *)((longlong)param_1 + 0x9ba) != '\0' ||
            (*(char *)((longlong)param_1 + 0x9bc) != '\0')) ||
           (*(char *)((longlong)param_1 + 0x9c4) != '\0')))) ||
         (*(char *)((longlong)param_1 + 0x9bb) != '\0')))) &&
       ((bVar23 != false && (*(char *)((longlong)param_1 + 0x9b1) != '\0')))) {
      bVar2 = true;
LAB_1403900ab:
      if (((*(char *)((longlong)param_1 + 0x9b9) != '\0') ||
          (*(char *)((longlong)param_1 + 0x9ba) != '\0')) ||
         ((*(char *)((longlong)param_1 + 0x9bc) != '\0' ||
          (*(char *)((longlong)param_1 + 0x9c4) != '\0')))) {
        bVar25 = bVar23 != false;
      }
    }
    else {
      bVar2 = false;
      if (*(char *)((longlong)param_1 + 0x985) == '\0') goto LAB_1403900ab;
    }
    if (bVar20) {
      if ((((*(char *)((longlong)param_1 + 0x9b9) == '\0') &&
           (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
          (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
         (((*(char *)((longlong)param_1 + 0x9c4) == '\0' &&
           (*(char *)((longlong)param_1 + 0x9bb) == '\0')) &&
          (((char)param_1[0x16e] == '\0' && (*(int *)((longlong)param_1 + 0xb7c) < 1)))))) {
        if ((((double)param_1[0xfb] != 0.0) &&
            ((double)param_1[0x154] - (double)param_1[0xfb] < DAT_140622cf0)) ||
           (((double)param_1[0x100] != 0.0 &&
            ((double)param_1[0x154] - (double)param_1[0x100] < DAT_140622cf0)))) {
          lVar14 = *param_1;
          pfVar16 = (float *)(**(code **)(lVar14 + 200))(param_1);
          uVar17 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_158,*pfVar16,fVar30);
          (**(code **)(lVar14 + 0xb8))(param_1,uVar17);
          dVar32 = (double)param_1[0x134];
          if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
            if (DAT_140623738 <= dVar32) {
              dVar32 = DAT_140623738;
            }
          }
          else if (dVar32 <= DAT_140622e60) {
            dVar32 = DAT_140622e60;
          }
          FUN_140388d10(param_1,dVar32);
LAB_140390290:
          *(undefined1 *)((longlong)param_1 + 0x9c1) = 0;
          *(undefined1 *)((longlong)param_1 + 0xa0c) = 0;
          return;
        }
        if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
          local_14c = local_14c - DAT_140622e58;
          bVar21 = local_14c < fVar30;
        }
        else {
          local_14c = local_14c + DAT_140622e58;
          bVar21 = fVar30 < local_14c;
        }
        bVar20 = !bVar21 && local_14c != fVar30;
        if (bVar21 || local_14c == fVar30) goto LAB_140390290;
        if (*(char *)((longlong)param_1 + 0xc44) != '\0') goto LAB_1403902ac;
        if (*(char *)((longlong)param_1 + 0x7e5) != '\0') goto LAB_14039022f;
        if (DAT_1406c2ed8 != (longlong *)0x0) goto LAB_140390214;
        local_158 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_158);
      }
      else {
LAB_1403902ac:
        bVar21 = false;
LAB_1403902af:
        if ((((char)param_3[0x89] == '\0') &&
            (((!bVar10 &&
              ((*(char *)((longlong)param_1 + 0x9bc) == '\0' || (0 < (int)param_1[0x16f])))) ||
             (((char)param_1[0x16e] != '\0' || (0 < *(int *)((longlong)param_1 + 0xb7c))))))) ||
           (*(char *)((longlong)param_1 + 0xc44) != '\0')) goto LAB_140390330;
        if (*(char *)((longlong)param_1 + 0x7e5) != '\0') {
LAB_14039022f:
          *(undefined1 *)((longlong)param_1 + 0x984) = 1;
          return;
        }
        if (DAT_1406c2ed8 != (longlong *)0x0) goto LAB_140390214;
        local_158 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_158);
      }
      (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
LAB_140390214:
      (**(code **)(*(longlong *)DAT_1406c2ed8[0x41] + 0x468))
                ((longlong *)DAT_1406c2ed8[0x41],param_1,0);
      return;
    }
    bVar21 = false;
  }
LAB_140390330:
  fVar36 = fVar30;
  if (*(char *)((longlong)param_1 + 0x9c3) != '\0') {
    uVar34 = *(uint *)((longlong)param_3 + 0x39c);
    uVar19 = param_1[0xda] &
             ((((ulonglong)(uVar34 >> 8 & 0xff) ^
               ((ulonglong)(uVar34 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
              (ulonglong)(uVar34 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar34 >> 0x18)) *
             0x100000001b3;
    lVar14 = *(longlong *)(param_1[0xd7] + 8 + uVar19 * 0x10);
    if (lVar14 == param_1[0xd5]) {
LAB_1403903d7:
      lVar14 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar14 + 0x10);
      while (uVar34 != uVar1) {
        if (lVar14 == *(longlong *)(param_1[0xd7] + uVar19 * 0x10)) goto LAB_1403903d7;
        lVar14 = *(longlong *)(lVar14 + 8);
        uVar1 = *(uint *)(lVar14 + 0x10);
      }
    }
    if (lVar14 != 0) {
      local_108 = *(float *)((longlong)param_3 + 0x39c);
      plVar15 = (longlong *)FUN_1403a43c0(param_1 + 0xd4,local_f8,&local_108);
      fVar36 = (float)((double)fVar30 - *(double *)(*plVar15 + 0x20));
    }
  }
  cVar9 = (char)local_res20[0];
  if (*(char *)((longlong)param_1 + 0x9b1) != '\0') {
    uVar34 = (uint)((ulonglong)DAT_1406243d0 >> 0x20);
    if ((((double)param_1[0x128] != (double)fVar30) &&
        ((*(char *)((longlong)param_1 + 0x9c3) == '\0' || ((double)param_1[0x129] != (double)fVar36)
         ))) || (((char)param_1[0x16e] != '\0' &&
                 ((double)CONCAT44((uint)((ulonglong)param_1[0x15f] >> 0x20) & uVar34,
                                   (uint)param_1[0x15f] & (uint)DAT_1406243d0) < dVar32)))) {
      if ((local_110[0] != 0.0) &&
         (((((char)local_res20[0] != '\0' && ((char)param_1[0x12a] != '\0')) ||
           ((local_167 != false && (*(char *)((longlong)param_1 + 0x951) != '\0')))) &&
          ((*(char *)((longlong)param_1 + 0x9e4) == '\0' &&
           (((char)param_1[0x16e] == '\0' ||
            (dVar32 < (double)CONCAT44((uint)((ulonglong)param_1[0x15f] >> 0x20) & uVar34,
                                       (uint)param_1[0x15f] & (uint)DAT_1406243d0))))))))) {
        bVar20 = false;
      }
    }
    else {
      bVar20 = false;
    }
  }
  if (((char)param_1[0x16e] != '\0') && (bVar20)) {
    pCVar12 = (CCRect *)
              cocos2d::CCRect::CCRect
                        (local_f8,local_138 - fVar3,local_134 - DAT_14062307c,
                         local_130 + DAT_140622ff0,local_12c + DAT_140623120);
    bVar10 = cocos2d::CCRect::intersectsRect((CCRect *)&local_148,pCVar12);
    if (!bVar10) {
      bVar20 = false;
    }
  }
  if ((((bVar23 != false) && (*(char *)((longlong)param_1 + 0x9bc) != '\0')) &&
      (*(char *)((longlong)param_1 + 0x985) != '\0')) &&
     (cVar6 == *(char *)((longlong)param_1 + 0x9bf))) {
    return;
  }
  if (!bVar20) {
    return;
  }
  param_1[0xcf] = (longlong)param_3;
  pCVar12 = (CCRect *)(**(code **)(*param_3 + 0x490))(param_3);
  cocos2d::CCRect::CCRect((CCRect *)&local_108,pCVar12);
  fVar35 = atanf(local_fc / local_100);
  *(float *)(param_1 + 0xd3) = fVar35;
  param_1[0xce] = param_1[0xcf];
  local_res20[0] = *(undefined4 *)((longlong)param_3 + 0x39c);
  plVar15 = (longlong *)FUN_14024e530(param_1 + 0xdc,local_f8,local_res20);
  fVar35 = local_128;
  *(longlong **)(*plVar15 + 0x18) = param_3;
  param_1[0xd0] = (longlong)(double)(fVar37 - local_12c * fVar33);
  *(char *)((longlong)param_1 + 0x953) = cVar6;
  param_1[0x128] = (longlong)(double)fVar30;
  param_1[0x129] = (longlong)(double)fVar36;
  *(undefined4 *)(param_1 + 0xd1) = *(undefined4 *)((longlong)param_3 + 0x39c);
  *(bool *)((longlong)param_1 + 0x68c) = bVar23;
  dVar32 = (double)param_1[0x126];
  *(char *)(param_1 + 0x12a) = cVar9;
  *(bool *)((longlong)param_1 + 0x951) = local_167;
  fVar33 = DAT_140623200;
  iVar18 = -1;
  if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
    iVar18 = 1;
  }
  if (bVar23 == false) {
    iVar18 = -iVar18;
  }
  iVar11 = -iVar18;
  if (!bVar22) {
    iVar11 = iVar18;
  }
  iVar18 = -iVar11;
  if (!bVar26) {
    iVar18 = iVar11;
  }
  iVar11 = -iVar18;
  if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
    iVar11 = iVar18;
  }
  param_1[0x126] = (longlong)(double)((float)iVar11 * local_128 * DAT_140623200 * DAT_1406229bc);
  pCVar13 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
  cocos2d::CCPoint::CCPoint((CCPoint *)local_110,pCVar13);
  lVar14 = *param_1;
  pfVar16 = (float *)(**(code **)(lVar14 + 200))(param_1);
  uVar17 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_128,*pfVar16,fVar30);
  (**(code **)(lVar14 + 0xb8))(param_1,uVar17);
  *(undefined1 *)(param_1 + 0x136) = 1;
  if (*(char *)((longlong)param_1 + 0x9b1) == '\0') {
    param_1[0xb3] = param_1[0x154];
    param_1[0xad] = param_1[0x134];
  }
  *(char *)(param_1 + 0x137) = local_164;
  if (!bVar2) {
    if (local_164 == '\0') {
      fVar28 = (float)(double)param_1[0x134];
      FUN_14039bf30(param_1,param_3,0);
      fVar36 = DAT_1406237c0;
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        if (DAT_140623010 < fVar28) {
LAB_1403907d7:
          FUN_140388d10(param_1,(double)fVar28);
        }
      }
      else if (fVar28 < DAT_1406237c0) goto LAB_1403907d7;
      if ((((char)param_1[0x16e] != '\0') &&
          (DAT_1406231b0 < (float)((uint)(*(float *)(param_1 + 0xd3) * fVar33) & DAT_1406243c0))) &&
         ((fVar28 < fVar36 && (0.0 < (double)param_1[0x15f])))) {
        param_1[0x15f] = (longlong)((double)param_1[0x15f] * DAT_140622d98);
      }
      FUN_140393ff0(param_1,1,param_3);
      param_1[0xbd] = (longlong)param_3;
      pCVar12 = (CCRect *)(**(code **)(*param_3 + 0x490))(param_3);
      cocos2d::CCRect::CCRect(local_f8,pCVar12);
      fVar33 = atanf(local_ec / local_f0);
      *(float *)(param_1 + 0xbf) = fVar33;
      cVar6 = *(char *)(param_1[0xbd] + 0x440);
      *(char *)((longlong)param_1 + 0x5fc) = cVar6;
      if (*(char *)((longlong)param_1 + 0x9c3) != '\0') {
        cVar6 = cVar6 == '\0';
        *(char *)((longlong)param_1 + 0x5fc) = cVar6;
      }
      if ((cVar6 != '\0') && (fVar27 <= fVar33)) {
        *(undefined4 *)((longlong)param_1 + 0xb3c) = 3;
      }
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_108,(CCPoint *)(param_3 + 0x9a));
      (**(code **)(*param_3 + 0x4a8))(param_3,&local_128);
      if ((local_128 != local_108) || (local_124 != local_104)) {
        if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
          bVar26 = local_124 == local_104;
          bVar22 = local_124 < local_104;
        }
        else {
          bVar26 = local_108 == local_128;
          bVar22 = local_108 < local_128;
          local_124 = local_128;
          local_104 = local_108;
        }
        if (!bVar22 && !bVar26) {
          param_1[0xc6] = (longlong)(double)((local_124 - local_104) / param_2);
        }
      }
    }
    else {
      dVar31 = (double)param_1[0x134];
      if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
        if (0.0 <= dVar31) {
          dVar31 = 0.0;
        }
      }
      else if (dVar31 <= 0.0) {
        dVar31 = 0.0;
      }
      FUN_140388d10(param_1,dVar31);
      *(undefined1 *)((longlong)param_1 + 0x9c1) = 0;
      *(undefined1 *)((longlong)param_1 + 0xa0c) = 0;
      FUN_140393ff0(param_1,0,param_3);
    }
  }
  dVar4 = DAT_140623738;
  dVar31 = DAT_140622e60;
  if (bVar25) {
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      if (DAT_140623738 < (double)param_1[0x134]) {
        iVar18 = 1;
LAB_1403909c0:
        FUN_140388d10(param_1,(double)((float)iVar18 * DAT_140623730));
      }
    }
    else if ((double)param_1[0x134] <= DAT_140622e60 && DAT_140622e60 != (double)param_1[0x134]) {
      iVar18 = -1;
      goto LAB_1403909c0;
    }
  }
  if (bVar21) {
    if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
      if (dVar31 < (double)param_1[0x134] || dVar31 == (double)param_1[0x134]) goto LAB_140390a1e;
      iVar18 = 1;
    }
    else {
      if ((double)param_1[0x134] <= dVar4) goto LAB_140390a1e;
      iVar18 = -1;
    }
    FUN_140388d10(param_1,(double)((float)iVar18 + (float)iVar18));
  }
LAB_140390a1e:
  param_1[0x127] = (longlong)(double)(float)local_158;
  fVar33 = DAT_140622c54;
  if (DAT_140622ba4 / fVar35 <= DAT_140622c54) {
    fVar33 = DAT_140622ba4 / fVar35;
  }
  fVar33 = fVar33 * (float)local_158 * DAT_140622cd8;
  if ((bVar23 != false) && (!bVar24)) {
    fVar33 = fVar33 * DAT_1406236f0;
  }
  iVar18 = -1;
  if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
    iVar18 = 1;
  }
  *(float *)((longlong)param_1 + 0x9b4) = (float)iVar18 * fVar33;
  if ((((char)param_1[0x16e] != '\0') && (local_164 != '\0')) &&
     (*(char *)((longlong)param_1 + 0x9ba) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x985) = 0;
  }
  if ((((*(char *)((longlong)param_1 + 0x9b9) == '\0') &&
       (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
      ((*(char *)((longlong)param_1 + 0x9bc) == '\0' &&
       ((*(char *)((longlong)param_1 + 0x9c4) == '\0' &&
        (*(char *)((longlong)param_1 + 0x9bb) == '\0')))))) ||
     (*(float *)((longlong)param_1 + 0x9b4) = (float)iVar18 * fVar33 * DAT_140622b8c,
     *(char *)((longlong)param_1 + 0x9bb) == '\0')) {
    FUN_140390bc0(param_1);
  }
  else if ((double)(float)dVar32 != (double)param_1[0x126]) {
    fVar33 = cosf((float)(double)param_1[0x126]);
    fVar33 = fVar27 / fVar33;
    if (fVar3 < fVar33) {
      fVar33 = (fVar33 - fVar27) * DAT_140622b74 + fVar27;
    }
    *(undefined2 *)(param_1 + 0xe5) = 0;
    *(undefined1 *)(param_1 + 0xcd) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    FUN_14038d350(param_1,fVar33);
  }
  return;
}

