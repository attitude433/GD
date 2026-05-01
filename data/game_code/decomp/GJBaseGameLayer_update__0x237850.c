// Function: FUN_140237850
// Original target: GJBaseGameLayer_update @ 0x237850
// Ghidra entry: 140237850
// Signature: undefined FUN_140237850(void)


/* WARNING: Removing unreachable block (ram,0x000140237c5d) */
/* WARNING: Removing unreachable block (ram,0x000140237c64) */
/* WARNING: Removing unreachable block (ram,0x000140237c8f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140237850(longlong *param_1,float param_2)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  double dVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  LARGE_INTEGER LVar16;
  char cVar17;
  int iVar18;
  CCDirector *pCVar19;
  float *pfVar20;
  CCPoint *pCVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  LARGE_INTEGER LVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  LARGE_INTEGER local_res8;
  char local_res10;
  int local_res18 [2];
  int local_res20;
  float local_178;
  double local_168;
  int local_160;
  float local_15c;
  double local_158;
  double local_150;
  CCPoint local_148 [8];
  CCPoint local_140 [8];
  double local_138;
  double local_130;
  undefined1 local_128 [32];
  CCPoint local_108 [8];
  CCPoint local_100 [8];
  undefined1 local_f8 [184];
  
  if (DAT_1406c10a0 == '\0') {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1406c10a8);
    DAT_1406c10a0 = '\x01';
  }
  QueryPerformanceCounter(&local_res8);
  dVar35 = (double)local_res8.QuadPart / (double)_DAT_1406c10a8;
  local_130 = dVar35;
  if ((*(int *)((longlong)param_1 + 0x32a4) < 1) && (*(char *)((longlong)param_1 + 0x3766) != '\0'))
  {
    FUN_140237600();
    *(undefined1 *)((longlong)param_1 + 0x3766) = 0;
  }
  if ((char)param_1[0x64b] != '\0') {
    (**(code **)(*param_1 + 0x4f8))(param_1);
  }
  local_168 = (double)param_2;
  if ((char)param_1[0x64b] == '\0') {
    param_1[0x64a] = 0;
  }
  else {
    local_168 = (double)FUN_1402377b0(param_1);
  }
  dVar34 = DAT_140622f60;
  fVar37 = *(float *)(param_1 + 0x66);
  if (((char)param_1[0x64b] == '\0') || (0 < *(int *)((longlong)param_1 + 0x32a4))) {
    param_1[0x79] = (longlong)(local_168 + (double)param_1[0x79]);
    param_1[0x7b] = (longlong)(local_168 / (double)fVar37 + (double)param_1[0x7b]);
    FUN_14025bea0(param_1[0x12a]);
    FUN_1402b8ef0(*(undefined8 *)(param_1[0x1b4] + 0x7b0));
    FUN_1402b8ef0(*(undefined8 *)(param_1[0x1b5] + 0x7b0));
    FUN_14021fbe0(param_1);
    FUN_1402222b0(param_1);
    (**(code **)(*param_1 + 0x3f8))(param_1);
    FUN_1402466c0(param_1);
    FUN_140248880(param_1);
    if (DAT_1406c10a0 == '\0') {
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1406c10a8);
      DAT_1406c10a0 = '\x01';
    }
    QueryPerformanceCounter(&local_res8);
    param_1[0x6f2] = (longlong)((double)local_res8.QuadPart / (double)_DAT_1406c10a8);
  }
  else if (0.0 < local_168) {
    dVar7 = local_168 * DAT_140622f60;
    *(undefined1 *)(param_1[0x1b4] + 0x984) = 0;
    *(undefined1 *)(param_1[0x1b5] + 0x984) = 0;
    if (*(char *)(param_1[0x1b4] + 0xa2a) == '\0') {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8.s,(CCPoint *)(param_1[0x1b4] + 0xa90));
      (**(code **)(*(longlong *)param_1[0x1b4] + 0xb8))((longlong *)param_1[0x1b4],&local_res8);
    }
    if ((*(char *)((longlong)param_1 + 0x422) != '\0') &&
       (*(char *)(param_1[0x1b5] + 0xa2a) == '\0')) {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8.s,(CCPoint *)(param_1[0x1b5] + 0xa90));
      (**(code **)(*(longlong *)param_1[0x1b5] + 0xb8))((longlong *)param_1[0x1b5],&local_res8);
    }
    fVar38 = DAT_140622c24;
    fVar30 = *(float *)(param_1 + 0x66);
    if (DAT_140622c24 <= *(float *)(param_1 + 0x66)) {
      fVar30 = DAT_140622c24;
    }
    fVar29 = (float)roundf((float)((dVar7 / (double)fVar30) * DAT_140622e90));
    fVar30 = fVar38;
    if (fVar38 <= fVar29) {
      fVar30 = fVar29;
    }
    local_res18[0] = (int)fVar30;
    *(undefined1 *)(param_1 + 0x611) = 0;
    dVar32 = (double)local_res18[0];
    dVar7 = dVar7 / dVar32;
    dVar36 = local_168 / dVar32;
    dVar32 = (local_168 / (double)fVar37) / dVar32;
    local_150 = dVar36 * dVar34;
    local_158 = dVar32;
    local_138 = dVar7;
    if ((*(char *)((longlong)param_1 + 0x3232) == '\0') &&
       (*(char *)((longlong)param_1 + 0x3259) != '\0')) {
      pCVar19 = cocos2d::CCDirector::sharedDirector();
      pfVar20 = (float *)cocos2d::CCDirector::getWinSize(pCVar19);
      *(float *)((longlong)param_1 + 0x4dc) =
           (float)(DAT_140622ef0 - (double)(DAT_140623254 - *pfVar20 * DAT_140622b08));
    }
    *(undefined1 *)((longlong)param_1 + 0x3259) = 0;
    fVar15 = _UNK_14062409c;
    fVar14 = _UNK_140624098;
    fVar13 = _UNK_140624094;
    fVar12 = _DAT_140624090;
    fVar11 = _UNK_14062407c;
    fVar10 = _UNK_140624078;
    fVar9 = _UNK_140624074;
    fVar29 = _DAT_140624070;
    fVar30 = DAT_140622bd8;
    fVar37 = DAT_140622a10;
    plVar22 = (longlong *)((longlong)param_1 + 0x3734);
    if ((param_1 + 0x6e6 < plVar22) || (param_1 + 0x6ec < (longlong *)((longlong)param_1 + 0x3704U))
       ) {
      lVar27 = 3;
      do {
        iVar25 = *(int *)((longlong)plVar22 - 0x2c);
        iVar18 = *(int *)((longlong)plVar22 - 0x24);
        *(int *)plVar22 = (int)((float)(int)plVar22[-6] * fVar29 + (float)(int)*plVar22 * fVar12);
        *(int *)((longlong)plVar22 + 4) =
             (int)((float)iVar25 * fVar9 + (float)*(int *)((longlong)plVar22 + 4) * fVar13);
        *(int *)(plVar22 + 1) =
             (int)((float)(int)plVar22[-5] * fVar10 + (float)(int)plVar22[1] * fVar14);
        *(int *)((longlong)plVar22 + 0xc) =
             (int)((float)iVar18 * fVar11 + (float)*(int *)((longlong)plVar22 + 0xc) * fVar15);
        plVar22 = plVar22 + 2;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    else {
      plVar22 = param_1 + 0x6e7;
      lVar27 = 3;
      do {
        *(int *)((longlong)plVar22 + -4) =
             (int)((float)*(int *)((longlong)plVar22 + -0x34) * fVar37 +
                  (float)*(int *)((longlong)plVar22 + -4) * fVar30);
        *(int *)plVar22 = (int)((float)(int)plVar22[-6] * fVar37 + (float)(int)*plVar22 * fVar30);
        *(int *)((longlong)plVar22 + 4) =
             (int)((float)*(int *)((longlong)plVar22 + -0x2c) * fVar37 +
                  (float)*(int *)((longlong)plVar22 + 4) * fVar30);
        *(int *)(plVar22 + 1) =
             (int)((float)(int)plVar22[-5] * fVar37 + (float)(int)plVar22[1] * fVar30);
        plVar22 = plVar22 + 2;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    local_res10 = '\0';
    local_res20 = 0;
    if (0 < local_res18[0]) {
      local_15c = (float)dVar32;
      uVar31 = (undefined4)DAT_140622d98;
      uVar39 = (undefined4)((ulonglong)DAT_140622d98 >> 0x20);
      LVar28 = local_res8;
      local_178 = *(float *)(param_1 + 0x66);
      do {
        *(undefined1 *)(param_1 + 0x6f3) = 0;
        if (*(char *)((longlong)param_1 + 0x3799) != '\0') {
          dVar33 = (double)local_15c;
          dVar35 = (double)param_1[0x6f2];
          dVar34 = dVar35 + dVar33;
          lVar27 = param_1[0x660];
          lVar2 = param_1[0x661];
          if (lVar27 != lVar2) {
            do {
              dVar1 = *(double *)(lVar27 + 0x10);
              if (((dVar35 + dVar33 * (double)CONCAT44(uVar39,uVar31) <= dVar1) && (dVar1 < dVar34))
                 && (cVar17 = FUN_140231e80(param_1,lVar27), cVar17 != '\0')) {
                *(undefined1 *)(param_1 + 0x6f3) = 1;
                dVar7 = dVar7 * (double)CONCAT44(uVar39,uVar31);
                dVar35 = dVar36 * (double)CONCAT44(uVar39,uVar31);
                dVar32 = local_158 * (double)CONCAT44(uVar39,uVar31);
                cVar17 = (char)param_1[0x6f3];
                goto LAB_140237dc9;
              }
            } while ((dVar1 < dVar34) && (lVar27 = lVar27 + 0x18, lVar27 != lVar2));
          }
        }
        cVar17 = (char)param_1[0x6f3];
        dVar35 = dVar36;
LAB_140237dc9:
        LVar16 = local_res8;
        uVar31 = ZEXT14(cVar17 == '\0');
        local_res8.s.LowPart._1_3_ = 0;
        local_res8.s.LowPart._0_1_ = cVar17 == '\0';
        local_res8.s.HighPart = LVar16.s.HighPart;
        do {
          *(undefined8 *)((longlong)param_1 + 0x3704) = 0;
          *(undefined8 *)((longlong)param_1 + 0x370c) = 0;
          *(undefined8 *)((longlong)param_1 + 0x3714) = 0;
          *(undefined8 *)((longlong)param_1 + 0x371c) = 0;
          *(undefined8 *)((longlong)param_1 + 0x3724) = 0;
          *(undefined8 *)((longlong)param_1 + 0x372c) = 0;
          param_1[0x79] = (longlong)(dVar35 + (double)param_1[0x79]);
          param_1[0x7b] = (longlong)(dVar32 + (double)param_1[0x7b]);
          if (((char)param_1[0x6ae] == '\0') && (*(char *)((longlong)param_1 + 0x324a) == '\0')) {
            param_1[0x6ac] = (longlong)(dVar32 + (double)param_1[0x6ac]);
            if ((char)param_1[0x6f3] == '\0') {
              iVar25 = (int)param_1[0x6ad] + 2;
            }
            else {
              iVar25 = (int)param_1[0x6ad] + 1;
            }
            *(int *)(param_1 + 0x6ad) = iVar25;
            (**(code **)(*param_1 + 0x418))(param_1);
            uVar31 = local_res8.s.LowPart;
          }
          *(longlong *)(param_1[0x1b4] + 0xaa0) = param_1[0x79];
          *(longlong *)(param_1[0x1b5] + 0xaa0) = param_1[0x79];
          if (((char)param_1[0x6f3] == '\0') || (uVar31 == 0)) {
            lVar27 = param_1[0x602];
            cVar17 = *(char *)((longlong)*(longlong **)(lVar27 + 8) + 0x19);
            plVar22 = *(longlong **)(lVar27 + 8);
            while (cVar17 == '\0') {
              FUN_14024ea90(param_1 + 0x602,param_1 + 0x602,plVar22[2]);
              plVar3 = (longlong *)*plVar22;
              free(plVar22);
              plVar22 = plVar3;
              cVar17 = *(char *)((longlong)plVar3 + 0x19);
            }
            *(longlong *)(lVar27 + 8) = lVar27;
            *(longlong *)lVar27 = lVar27;
            *(longlong *)(lVar27 + 0x10) = lVar27;
            param_1[0x603] = 0;
            plVar22 = param_1 + 0x217;
            lVar27 = *plVar22;
            cVar17 = *(char *)((longlong)*(longlong **)(lVar27 + 8) + 0x19);
            plVar3 = *(longlong **)(lVar27 + 8);
            while (cVar17 == '\0') {
              FUN_140093e00(plVar22,plVar22,plVar3[2]);
              plVar4 = (longlong *)*plVar3;
              free(plVar3);
              plVar3 = plVar4;
              cVar17 = *(char *)((longlong)plVar4 + 0x19);
            }
            *(longlong *)(lVar27 + 8) = lVar27;
            *(longlong *)lVar27 = lVar27;
            *(longlong *)(lVar27 + 0x10) = lVar27;
            param_1[0x218] = 0;
          }
          plVar22 = param_1 + 0x217;
          FUN_140261da0(param_1[0x12a]);
          if (*(float *)(param_1 + 0x9d) != 0.0) {
            *(undefined4 *)(param_1 + 0x9d) = 0;
            *(undefined1 *)((longlong)param_1 + 0x4ec) = 0;
            FUN_1403a0d50(param_1[0x1b4]);
            if (*(char *)((longlong)param_1 + 0x422) != '\0') {
              FUN_1403a0d50(param_1[0x1b5]);
            }
          }
          (**(code **)(*param_1 + 0x4f8))(param_1);
          FUN_140239c60(param_1);
          FUN_1403982e0(param_1[0x1b4],0);
          if (*(char *)((longlong)param_1 + 0x422) != '\0') {
            FUN_1403982e0(param_1[0x1b5],0);
          }
          lVar27 = param_1[0x1b4];
          cocos2d::CCDictionary::removeAllObjects(*(CCDictionary **)(lVar27 + 0x5b0));
          cocos2d::CCDictionary::removeAllObjects(*(CCDictionary **)(lVar27 + 0x5b8));
          cocos2d::CCDictionary::removeAllObjects(*(CCDictionary **)(lVar27 + 0x5c0));
          cocos2d::CCDictionary::removeAllObjects(*(CCDictionary **)(lVar27 + 0x5c8));
          *(undefined4 *)(lVar27 + 0x5e0) = *(undefined4 *)(lVar27 + 0x5d0);
          *(undefined4 *)(lVar27 + 0x5e4) = *(undefined4 *)(lVar27 + 0x5d4);
          *(undefined8 *)(lVar27 + 0x5d0) = 0xffffffffffffffff;
          *(undefined8 *)(lVar27 + 0x5d8) = 0xffffffffffffffff;
          if (*(char *)((longlong)param_1 + 0x422) != '\0') {
            lVar27 = param_1[0x1b5];
            cocos2d::CCDictionary::removeAllObjects(*(CCDictionary **)(lVar27 + 0x5b0));
            cocos2d::CCDictionary::removeAllObjects(*(CCDictionary **)(lVar27 + 0x5b8));
            cocos2d::CCDictionary::removeAllObjects(*(CCDictionary **)(lVar27 + 0x5c0));
            cocos2d::CCDictionary::removeAllObjects(*(CCDictionary **)(lVar27 + 0x5c8));
            *(undefined4 *)(lVar27 + 0x5e0) = *(undefined4 *)(lVar27 + 0x5d0);
            *(undefined4 *)(lVar27 + 0x5e4) = *(undefined4 *)(lVar27 + 0x5d4);
            *(undefined8 *)(lVar27 + 0x5d0) = 0xffffffffffffffff;
            *(undefined8 *)(lVar27 + 0x5d8) = 0xffffffffffffffff;
          }
          puVar23 = *(undefined8 **)(param_1[0x12a] + 0x2a8);
          for (puVar5 = (undefined8 *)*puVar23; puVar5 != puVar23; puVar5 = (undefined8 *)*puVar5) {
            *(undefined1 *)((longlong)puVar5 + 0x14) = 0;
          }
          lVar27 = *plVar22;
          cVar17 = *(char *)((longlong)*(longlong **)(lVar27 + 8) + 0x19);
          plVar3 = *(longlong **)(lVar27 + 8);
          while (cVar17 == '\0') {
            FUN_140093e00(plVar22,plVar22,plVar3[2]);
            plVar4 = (longlong *)*plVar3;
            free(plVar3);
            plVar3 = plVar4;
            cVar17 = *(char *)((longlong)plVar4 + 0x19);
          }
          *(longlong *)(lVar27 + 8) = lVar27;
          *(longlong *)lVar27 = lVar27;
          *(longlong *)(lVar27 + 0x10) = lVar27;
          param_1[0x218] = 0;
          cVar17 = *(char *)((longlong)param_1 + 0x422);
          plVar22 = (longlong *)param_1[0x1b4];
          lVar27 = (**(code **)(*plVar22 + 200))(plVar22);
          fVar37 = *(float *)(lVar27 + 4) - *(float *)((longlong)plVar22 + 0x4d4);
          plVar22 = (longlong *)param_1[0x1b4];
          if ((*(char *)((longlong)param_1 + 0x324a) == '\0') &&
             (dVar7 * _DAT_140622f00 <
              (double)(float)((uint)(fVar37 - *(float *)((longlong)plVar22 + 0xab4)) & DAT_1406243c0
                             ))) {
            fVar37 = 0.0;
          }
          pfVar20 = (float *)(**(code **)(*plVar22 + 200))(plVar22);
          fVar30 = *pfVar20 - *(float *)(plVar22 + 0x9a);
          if (*(char *)((longlong)param_1 + 0x324a) != '\0') {
            fVar30 = 0.0;
          }
          *(float *)(param_1[0x12a] + 0x800) = fVar30;
          if (*(char *)((longlong)param_1 + 0x324a) != '\0') {
            fVar37 = 0.0;
          }
          *(float *)(param_1[0x12a] + 0x804) = fVar37;
          *(uint *)(param_1[0x12a] + 0x808) = *(uint *)((longlong)param_1 + 0x4dc) ^ DAT_1406243f0;
          *(uint *)(param_1[0x12a] + 0x80c) = *(uint *)(param_1 + 0x9c) ^ DAT_1406243f0;
          fVar37 = *(float *)((longlong *)param_1[0x1b4] + 0x141);
          fVar30 = (float)(**(code **)(*(longlong *)param_1[0x1b4] + 0x158))();
          *(float *)(param_1[0x12a] + 0x810) = fVar30 - fVar37;
          fVar37 = *(float *)((longlong *)param_1[0x1b5] + 0x141);
          fVar30 = (float)(**(code **)(*(longlong *)param_1[0x1b5] + 0x158))();
          *(float *)(param_1[0x12a] + 0x814) = fVar30 - fVar37;
          if (*(char *)((longlong)param_1 + 0x324a) == '\0') {
            FUN_140263340(param_1[0x12a]);
          }
          FUN_14025f3f0(param_1[0x12a]);
          FUN_14022b5d0(param_1);
          FUN_140260800(param_1[0x12a]);
          (**(code **)(*param_1 + 0x410))(param_1);
          FUN_1402187d0(param_1);
          if (*(char *)((longlong)param_1 + 0x324a) == '\0') {
            if ((*(char *)((longlong)param_1 + 0x309c) == '\0') &&
               (*(char *)((longlong)param_1 + 0x886) == '\0')) {
              uVar24 = 0;
            }
            else {
              uVar24 = 1;
            }
            *(undefined8 *)(param_1[0x1b5] + 0x9d0) = *(undefined8 *)(param_1[0x1b4] + 0x9d0);
            *(undefined8 *)(param_1[0x1b5] + 0x9d8) = *(undefined8 *)(param_1[0x1b4] + 0x9d8);
            FUN_1403a3f10(param_1[0x1b4]);
            if (*(char *)((longlong)param_1 + 0x422) != '\0') {
              FUN_1403a3f10(param_1[0x1b5]);
            }
            (**(code **)(*(longlong *)param_1[0x1b4] + 0x20))();
            if ((((*(char *)((longlong)param_1 + 0x887) == '\0') ||
                 (*(char *)(param_1[0x1b4] + 0xa2a) == '\0')) &&
                (iVar25 = FUN_1402137f0(param_1,param_1[0x1b4],(float)dVar7,uVar24), iVar25 == 1))
               && ((*(char *)((longlong)param_1 + 0x309c) != '\0' &&
                   (*(char *)((longlong)param_1 + 0x886) == '\0')))) {
              (**(code **)(*param_1 + 0x428))(param_1,param_1[0x1b4]);
            }
            lVar27 = param_1[0x1b4];
            fVar30 = (float)dVar35 + *(float *)(lVar27 + 0xad8);
            *(float *)(lVar27 + 0xad8) = fVar30;
            fVar37 = DAT_1406229ac;
            iVar25 = *(int *)(lVar27 + 0xabc);
            if (DAT_1406229ac <= fVar30) {
              *(float *)(lVar27 + 0xad8) = fVar30 - DAT_1406229ac;
              iVar25 = iVar25 + 1;
              *(int *)(lVar27 + 0xabc) = iVar25;
            }
            *(undefined4 *)(*(longlong *)(lVar27 + 0xac0) + (longlong)(iVar25 % 200) * 4) =
                 *(undefined4 *)(lVar27 + 0x50);
            if ((cVar17 != '\0') && (*(char *)((longlong)param_1 + 0x422) != '\0')) {
              (**(code **)(*(longlong *)param_1[0x1b5] + 0x20))
                        ((longlong *)param_1[0x1b5],(float)dVar7);
              if (((*(char *)((longlong)param_1 + 0x887) == '\0') ||
                  (*(char *)(param_1[0x1b5] + 0xa2a) == '\0')) &&
                 (((iVar25 = FUN_1402137f0(param_1,param_1[0x1b5],(float)dVar7,uVar24), iVar25 == 1
                   && (*(char *)((longlong)param_1 + 0x309c) != '\0')) &&
                  (*(char *)((longlong)param_1 + 0x886) == '\0')))) {
                (**(code **)(*param_1 + 0x428))(param_1,param_1[0x1b5]);
              }
              lVar27 = param_1[0x1b5];
              fVar30 = (float)dVar35 + *(float *)(lVar27 + 0xad8);
              *(float *)(lVar27 + 0xad8) = fVar30;
              iVar25 = *(int *)(lVar27 + 0xabc);
              if (fVar37 <= fVar30) {
                *(float *)(lVar27 + 0xad8) = fVar30 - fVar37;
                iVar25 = iVar25 + 1;
                *(int *)(lVar27 + 0xabc) = iVar25;
              }
              *(undefined4 *)(*(longlong *)(lVar27 + 0xac0) + (longlong)(iVar25 % 200) * 4) =
                   *(undefined4 *)(lVar27 + 0x50);
            }
            param_1[0x7a] =
                 (longlong)(dVar35 / (double)*(float *)(param_1 + 0x66) + (double)param_1[0x7a]);
            FUN_14021a8f0(param_1);
            uVar31 = (**(code **)(*(longlong *)param_1[0x1b4] + 0x158))();
            *(undefined4 *)(param_1[0x1b4] + 0xa08) = uVar31;
            uVar31 = (**(code **)(*(longlong *)param_1[0x1b5] + 0x158))();
            *(undefined4 *)(param_1[0x1b5] + 0xa08) = uVar31;
            FUN_140391020(param_1[0x1b4]);
            if (*(char *)((longlong)param_1 + 0x422) != '\0') {
              FUN_140391020(param_1[0x1b5]);
            }
            pCVar21 = (CCPoint *)(**(code **)(*(longlong *)param_1[0x1b4] + 200))();
            pCVar21 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_108,pCVar21);
            cocos2d::CCPoint::operator=((CCPoint *)(param_1[0x1b4] + 0x9f8),pCVar21);
            if (*(char *)((longlong)param_1 + 0x422) != '\0') {
              pCVar21 = (CCPoint *)(**(code **)(*(longlong *)param_1[0x1b5] + 200))();
              pCVar21 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_100,pCVar21);
              cocos2d::CCPoint::operator=((CCPoint *)(param_1[0x1b5] + 0x9f8),pCVar21);
            }
            if (((int)param_1[0x7e] == 0) ||
               ((int)param_1[0x7e] + 1000U <= *(uint *)((longlong)param_1 + 0x3f4))) {
              *(undefined4 *)(param_1 + 0x7e) = *(undefined4 *)((longlong)param_1 + 0x3f4);
              *(int *)((longlong)param_1 + 0x4d4) = *(int *)((longlong)param_1 + 0x4d4) + 1;
              puVar23 = (undefined8 *)param_1[0x69e];
              for (puVar5 = (undefined8 *)*puVar23; puVar5 != puVar23;
                  puVar5 = (undefined8 *)*puVar5) {
                local_160 = *(int *)(puVar5 + 2);
                iVar25 = *(int *)((longlong)puVar5 + 0x14);
                iVar18 = 0;
                if (local_160 < 1) {
                  if (local_160 == -3) {
                    iVar18 = (int)param_1[0x9b];
                    LVar28.QuadPart = (longlong)param_1 + 0x50c;
                  }
                  else if (local_160 == -2) {
                    iVar18 = *(int *)(param_1[0x1b5] + 0x544);
                    LVar28.QuadPart = param_1[0x1b5] + 0x4d0;
                  }
                  else if (local_160 == -1) {
                    iVar18 = *(int *)(param_1[0x1b4] + 0x544);
                    LVar28.QuadPart = param_1[0x1b4] + 0x4d0;
                  }
                }
                else {
                  plVar22 = (longlong *)FUN_14024e530(param_1 + 0x695,local_128,&local_160);
                  LVar28.QuadPart = *(longlong *)(*plVar22 + 0x18) + 0x4d0;
                  iVar18 = *(int *)(*(longlong *)(*plVar22 + 0x18) + 0x544);
                }
                iVar25 = (*(int *)((longlong)param_1 + 0x4d4) % iVar25 + iVar18) * 2;
                lVar27 = param_1[0x97];
                *(undefined4 *)(lVar27 + (longlong)iVar25 * 4) = *(undefined4 *)LVar28;
                *(undefined4 *)(lVar27 + 4 + (longlong)iVar25 * 4) =
                     *(undefined4 *)(LVar28.QuadPart + 4);
              }
            }
            uVar31 = FUN_140213770(param_1);
            *(undefined4 *)((longlong)param_1 + 0x764) = uVar31;
            (**(code **)(*param_1 + 0x400))(param_1);
            param_1[0x6f2] = (longlong)(dVar35 + (double)param_1[0x6f2]);
          }
          FUN_14025c2e0(param_1[0x12a]);
          FUN_1402398d0(param_1);
          plVar22 = *(longlong **)param_1[0xaa];
          if (plVar22 != (longlong *)param_1[0xaa]) {
            do {
              plVar3 = (longlong *)plVar22[3];
              if (*(int *)((longlong)plVar3 + 0x554) < (int)param_1[0x7c]) {
                *(undefined1 *)(plVar3 + 0xaa) = 0;
              }
              if ((char)plVar3[0xaa] == '\0') {
                (**(code **)(*plVar3 + 0x680))(plVar3);
              }
              if ((char)plVar3[0x5f] == '\0') {
                (**(code **)(*plVar3 + 0x688))(plVar3,param_1);
                uVar26 = param_1[0xaf] &
                         (((((ulonglong)*(byte *)(plVar22 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                           ^ (ulonglong)*(byte *)((longlong)plVar22 + 0x11)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar22 + 0x12)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar22 + 0x13)) * 0x100000001b3;
                lVar2 = param_1[0xac];
                lVar27 = lVar2 + uVar26 * 0x10;
                puVar23 = *(undefined8 **)(lVar2 + uVar26 * 0x10);
                if (*(undefined8 **)(lVar27 + 8) == plVar22) {
                  if (puVar23 == plVar22) {
                    lVar6 = param_1[0xaa];
                    *(longlong *)(lVar2 + uVar26 * 0x10) = lVar6;
                    *(longlong *)(lVar27 + 8) = lVar6;
                  }
                  else {
                    *(longlong *)(lVar27 + 8) = plVar22[1];
                  }
                }
                else if (puVar23 == plVar22) {
                  *(longlong *)(lVar2 + uVar26 * 0x10) = *plVar22;
                }
                puVar23 = (undefined8 *)*plVar22;
                param_1[0xab] = param_1[0xab] + -1;
                *(undefined8 **)plVar22[1] = puVar23;
                puVar23[1] = plVar22[1];
                free(plVar22);
              }
              else {
                puVar23 = (undefined8 *)*plVar22;
              }
              plVar22 = puVar23;
            } while (puVar23 != (undefined8 *)param_1[0xaa]);
          }
          FUN_1402054f0(param_1 + 0x35);
          plVar22 = *(longlong **)param_1[0x86];
          if (plVar22 != (longlong *)param_1[0x86]) {
            do {
              FUN_140205310((longlong)plVar22 + 0x14);
              uVar31 = *(undefined4 *)((longlong)plVar22 + 0x24);
              switch(*(undefined4 *)(plVar22 + 2)) {
              case 1:
                *(undefined4 *)(param_1 + 0x82) = uVar31;
                break;
              case 2:
                *(undefined4 *)((longlong)param_1 + 0x414) = uVar31;
                break;
              case 7:
                *(undefined4 *)((longlong)param_1 + 0x41c) = uVar31;
                break;
              case 9:
                *(undefined4 *)(param_1 + 0x5f) = uVar31;
                break;
              case 10:
                *(undefined4 *)(param_1 + 0x3c) = uVar31;
                break;
              case 0xb:
                *(undefined4 *)((longlong)param_1 + 0x1e4) = uVar31;
                break;
              case 0xc:
                *(undefined4 *)(param_1 + 0x3e) = uVar31;
                break;
              case 0xd:
                *(undefined4 *)((longlong)param_1 + 500) = uVar31;
                break;
              case 0xe:
                *(undefined4 *)(param_1 + 0x35) = uVar31;
                break;
              case 0xf:
                *(undefined4 *)(param_1 + 0x36) = uVar31;
                break;
              case 0x10:
                *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar31;
                break;
              case 0x11:
                *(undefined4 *)((longlong)param_1 + 0x324) = uVar31;
                break;
              case 0x12:
                *(undefined4 *)(param_1 + 0x50) = uVar31;
                break;
              case 0x13:
                *(undefined4 *)((longlong)param_1 + 0x284) = uVar31;
                break;
              case 0x14:
                *(undefined4 *)((longlong)param_1 + 700) = uVar31;
                break;
              case 0x15:
                *(undefined4 *)(param_1 + 0x42) = uVar31;
                break;
              case 0x16:
                *(undefined4 *)((longlong)param_1 + 0x214) = uVar31;
                break;
              case 0x19:
                *(undefined4 *)((longlong)param_1 + 0x424) = uVar31;
              }
              if (*(char *)(plVar22 + 6) == '\0') {
                plVar22 = (longlong *)*plVar22;
              }
              else {
                puVar23 = (undefined8 *)FUN_14024d170(param_1 + 0x85,local_f8,plVar22);
                plVar22 = (longlong *)*puVar23;
              }
            } while (plVar22 != (undefined8 *)param_1[0x86]);
          }
          FUN_14023bcf0(param_1);
          (**(code **)(*param_1 + 0x550))(param_1);
          if ((char)param_1[0x63e] != '\0') {
            lVar27 = param_1[0x1b4];
            if (*(char *)(lVar27 + 0x979) != '\0') {
              FUN_1403a32d0(lVar27);
              *(undefined1 *)(lVar27 + 0x979) = 0;
            }
            if ((((*(char *)(lVar27 + 0x9b9) != '\0') || (*(char *)(lVar27 + 0x9ba) != '\0')) ||
                ((*(char *)(lVar27 + 0x9bc) != '\0' || (*(char *)(lVar27 + 0x9c4) != '\0')))) &&
               ((*(int *)(lVar27 + 0x39c) == 1 &&
                (iVar25 = *(int *)(lVar27 + 0x898) + 1, *(int *)(lVar27 + 0x898) = iVar25,
                0x13 < iVar25)))) {
              *(undefined4 *)(lVar27 + 0x898) = 0;
              FUN_1403a32d0(lVar27);
            }
            if ((*(char *)(lVar27 + 0x7e9) != '\0') &&
               (dVar34 = (double)FUN_14003cf30(),
               DAT_140622cf0 < dVar34 - *(double *)(lVar27 + 0x7f0))) {
              *(undefined1 *)(lVar27 + 0x7e9) = 0;
            }
          }
          (**(code **)(*param_1 + 0x578))(param_1);
          iVar25 = local_res20;
          uVar31 = local_res8.s.LowPart + 1;
          local_res8.s.LowPart = uVar31;
        } while ((int)uVar31 < 2);
        if (0.0 < *(float *)((longlong)param_1 + 0x334)) {
          (**(code **)(*param_1 + 0x4f0))(param_1);
          (**(code **)(*param_1 + 0x4f8))(param_1);
        }
        if ((*(float *)(param_1 + 0x66) != local_178) &&
           (iVar18 = (local_res18[0] - iVar25) + -1, 0 < iVar18)) {
          dVar35 = (double)(float)((double)iVar18 * dVar36);
          local_168 = local_168 - dVar35;
          param_1[0x64a] = (longlong)(dVar35 + (double)param_1[0x64a]);
          local_res10 = '\x01';
          iVar25 = local_res18[0];
        }
        local_res20 = iVar25 + 1;
        uVar31 = (undefined4)DAT_140622d98;
        uVar39 = (undefined4)((ulonglong)DAT_140622d98 >> 0x20);
        fVar38 = DAT_140622c24;
        dVar35 = local_130;
        dVar7 = local_138;
        dVar32 = local_158;
        local_178 = *(float *)(param_1 + 0x66);
      } while (local_res20 < local_res18[0]);
    }
    cVar17 = local_res10;
    if (*(char *)((longlong)param_1 + 0x309e) != '\0') {
      FUN_1402393e0(param_1);
    }
    FUN_140235240(param_1);
    puVar23 = (undefined8 *)param_1[0x208];
    for (puVar5 = (undefined8 *)*puVar23; puVar5 != puVar23; puVar5 = (undefined8 *)*puVar5) {
      plVar3 = (longlong *)puVar5[4];
      for (plVar22 = (longlong *)puVar5[3]; plVar22 != plVar3; plVar22 = plVar22 + 1) {
        lVar27 = *plVar22;
        if ((*(char *)(lVar27 + 0x305) != '\0') && (*(char *)(lVar27 + 0x748) != '\0')) {
          uVar24 = FUN_14003bdb0(local_128,lVar27 + 0x750);
          FUN_1404b3a50(lVar27,uVar24);
        }
      }
    }
    puVar23 = (undefined8 *)param_1[0x210];
    for (puVar5 = (undefined8 *)*puVar23; puVar5 != puVar23; puVar5 = (undefined8 *)*puVar5) {
      plVar3 = (longlong *)puVar5[4];
      for (plVar22 = (longlong *)puVar5[3]; plVar22 != plVar3; plVar22 = plVar22 + 1) {
        lVar27 = *plVar22;
        if ((*(char *)(lVar27 + 0x305) != '\0') && (*(char *)(lVar27 + 0x748) != '\0')) {
          uVar24 = FUN_14003bdb0(local_128,lVar27 + 0x750);
          FUN_1404b3a50(lVar27,uVar24);
        }
      }
    }
    bVar8 = false;
    cocos2d::CCPoint::CCPoint(local_148);
    cocos2d::CCPoint::CCPoint(local_140);
    if (*(char *)(param_1[0x1b4] + 0xa2a) == '\0') {
      pCVar21 = (CCPoint *)(**(code **)(*(longlong *)param_1[0x1b4] + 200))();
      pCVar21 = (CCPoint *)cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8.s,pCVar21);
      cocos2d::CCPoint::operator=((CCPoint *)(param_1[0x1b4] + 0xa90),pCVar21);
      if (*(char *)((longlong)param_1 + 0x422) != '\0') {
        pCVar21 = (CCPoint *)(**(code **)(*(longlong *)param_1[0x1b5] + 200))();
        pCVar21 = (CCPoint *)cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8.s,pCVar21);
        cocos2d::CCPoint::operator=((CCPoint *)(param_1[0x1b5] + 0xa90),pCVar21);
      }
      fVar37 = *(float *)((longlong)param_1 + 0x41c);
      if ((fVar37 != 0.0) && (fVar37 != fVar38)) {
        if (*(float *)((longlong)param_1 + 0x3204) == DAT_1406236f0) {
          fVar37 = fVar38 - fVar37;
        }
        bVar8 = true;
        pCVar19 = cocos2d::CCDirector::sharedDirector();
        pfVar20 = (float *)cocos2d::CCDirector::getWinSize(pCVar19);
        fVar30 = *pfVar20;
        pfVar20 = (float *)(**(code **)(*(longlong *)param_1[0x1b4] + 200))();
        fVar37 = (fVar30 / *(float *)(param_1 + 0x35) -
                 ((*pfVar20 - *(float *)(param_1 + 0x82)) + (*pfVar20 - *(float *)(param_1 + 0x82)))
                 ) * fVar37;
        cocos2d::CCPoint::CCPoint((CCPoint *)local_res18,fVar37,0.0);
        pCVar21 = (CCPoint *)(**(code **)(*(longlong *)param_1[0x1b4] + 200))();
        cocos2d::CCPoint::operator+(pCVar21,(CCPoint *)&local_res8.s);
        cocos2d::CCPoint::operator=(local_148,(CCPoint *)&local_res8.s);
        if (*(char *)((longlong)param_1 + 0x422) != '\0') {
          cocos2d::CCPoint::CCPoint((CCPoint *)local_res18,fVar37,0.0);
          pCVar21 = (CCPoint *)(**(code **)(*(longlong *)param_1[0x1b5] + 200))();
          cocos2d::CCPoint::operator+(pCVar21,(CCPoint *)&local_res8.s);
          cocos2d::CCPoint::operator=(local_140,(CCPoint *)&local_res8.s);
        }
      }
    }
    fVar37 = *(float *)(param_1 + 0xa4);
    *(bool *)((longlong)param_1 + 0x51d) = 0.0 < fVar37;
    if (0.0 < fVar37) {
      *(float *)(param_1 + 0xa4) = (float)((double)fVar37 - local_168);
    }
    FUN_14025bea0(param_1[0x12a]);
    FUN_1402b8ef0(*(undefined8 *)(param_1[0x1b4] + 0x7b0));
    FUN_1402b8ef0(*(undefined8 *)(param_1[0x1b5] + 0x7b0));
    FUN_14021fbe0(param_1);
    FUN_1402222b0(param_1);
    if ((bVar8) &&
       ((**(code **)(*(longlong *)param_1[0x1b4] + 0xb8))((longlong *)param_1[0x1b4],local_148),
       *(char *)((longlong)param_1 + 0x422) != '\0')) {
      (**(code **)(*(longlong *)param_1[0x1b5] + 0xb8))((longlong *)param_1[0x1b5],local_140);
    }
    (**(code **)(*param_1 + 0x3f8))(param_1);
    FUN_1402466c0(param_1);
    FUN_140242320(param_1);
    FUN_140248880(param_1);
    if (((*(float *)((longlong)param_1 + 0x41c) == 0.0) ||
        (*(float *)((longlong)param_1 + 0x41c) == fVar38)) &&
       (*(char *)((longlong)param_1 + 0x421) != '\0')) {
      FUN_14038b750(param_1[0x1b4]);
      if (*(char *)((longlong)param_1 + 0x422) != '\0') {
        FUN_14038b750(param_1[0x1b5]);
      }
      *(undefined2 *)(param_1 + 0x84) = 0;
    }
    fVar37 = (float)((double)*(float *)((longlong)param_1 + 0x36ac) + local_168);
    *(float *)((longlong)param_1 + 0x36ac) = fVar37;
    if (fVar38 <= fVar37) {
      *(undefined4 *)((longlong)param_1 + 0x36ac) = 0;
      plVar22 = *(longlong **)param_1[0x100];
      if (plVar22 != (longlong *)param_1[0x100]) {
        do {
          if (DAT_1406c2e88 == (longlong *)0x0) {
            local_res8.QuadPart = FUN_1404d0770(0x888);
            DAT_1406c2e88 = (longlong *)FUN_140053100(local_res8.QuadPart);
            (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
          }
          cVar17 = FUN_140059d30(DAT_1406c2e88,*(undefined4 *)(plVar22 + 2));
          if (cVar17 == '\0') {
            uVar26 = param_1[0x105] &
                     (((((ulonglong)*(byte *)(plVar22 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar22 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar22 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar22 + 0x13)) * 0x100000001b3;
            lVar2 = param_1[0x102];
            lVar27 = lVar2 + uVar26 * 0x10;
            puVar23 = *(undefined8 **)(lVar2 + uVar26 * 0x10);
            if (*(undefined8 **)(lVar27 + 8) == plVar22) {
              if (puVar23 == plVar22) {
                lVar6 = param_1[0x100];
                *(longlong *)(lVar2 + uVar26 * 0x10) = lVar6;
                *(longlong *)(lVar27 + 8) = lVar6;
              }
              else {
                *(longlong *)(lVar27 + 8) = plVar22[1];
              }
            }
            else if (puVar23 == plVar22) {
              *(longlong *)(lVar2 + uVar26 * 0x10) = *plVar22;
            }
            puVar23 = (undefined8 *)*plVar22;
            param_1[0x101] = param_1[0x101] + -1;
            *(undefined8 **)plVar22[1] = puVar23;
            puVar23[1] = plVar22[1];
            FUN_1400cda80(plVar22 + 3);
            free(plVar22);
          }
          else {
            puVar23 = (undefined8 *)*plVar22;
          }
          plVar22 = puVar23;
          cVar17 = local_res10;
        } while (puVar23 != (undefined8 *)param_1[0x100]);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x3181) = 0;
    param_1[0x6f2] = (longlong)dVar35;
    *(undefined1 *)(param_1 + 0x6f3) = 0;
    if (cVar17 != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return;
}

