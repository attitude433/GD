// effect_Color_260c40 @ 0x260c40
// Function: FUN_140260c40


void FUN_140260c40(longlong param_1,uint param_2,char param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined2 *param_8,undefined8 *param_9,
                  undefined4 param_10,undefined1 param_11,undefined1 param_12,char param_13,
                  undefined1 param_14,undefined4 param_15,undefined4 param_16)

{
  void *_Src;
  void *_Dst;
  uint uVar1;
  float fVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  undefined4 local_res10;
  undefined4 local_res20 [2];
  undefined1 local_48 [32];
  
  uVar15 = 0;
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  if (9999 < (int)param_2) {
    param_2 = 9999;
  }
  uVar17 = (ulonglong)param_2;
  local_res10 = param_2;
  local_res20[0] = param_4;
  if (param_13 == '\0') {
    if (param_3 != '\0') goto LAB_140260efc;
  }
  else {
    if (param_3 != '\0') {
      lVar13 = *(longlong *)(param_1 + 0x188);
      local_res10._1_1_ = (byte)(param_2 >> 8);
      local_res10._2_1_ = (byte)(param_2 >> 0x10);
      local_res10._3_1_ = (byte)(param_2 >> 0x18);
      uVar15 = *(ulonglong *)(param_1 + 0x1a0) &
               ((((uVar17 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)local_res10._1_1_) * 0x100000001b3 ^ (ulonglong)local_res10._2_1_) *
                0x100000001b3 ^ (ulonglong)local_res10._3_1_) * 0x100000001b3;
      plVar12 = *(longlong **)(lVar13 + 8 + uVar15 * 0x10);
      if (plVar12 == *(longlong **)(param_1 + 0x178)) {
LAB_140260e8f:
        plVar12 = (longlong *)0x0;
      }
      else {
        uVar1 = *(uint *)(plVar12 + 2);
        while (param_2 != uVar1) {
          if (plVar12 == *(longlong **)(lVar13 + uVar15 * 0x10)) goto LAB_140260e8f;
          plVar12 = (longlong *)plVar12[1];
          uVar1 = *(uint *)(plVar12 + 2);
        }
      }
      if (plVar12 != (longlong *)0x0) {
        plVar4 = *(longlong **)(lVar13 + uVar15 * 0x10);
        if (*(longlong **)(lVar13 + 8 + uVar15 * 0x10) == plVar12) {
          if (plVar4 == plVar12) {
            uVar5 = *(undefined8 *)(param_1 + 0x178);
            *(undefined8 *)(lVar13 + uVar15 * 0x10) = uVar5;
            *(undefined8 *)(lVar13 + 8 + uVar15 * 0x10) = uVar5;
          }
          else {
            *(longlong *)(lVar13 + 8 + uVar15 * 0x10) = plVar12[1];
          }
        }
        else if (plVar4 == plVar12) {
          *(longlong *)(lVar13 + uVar15 * 0x10) = *plVar12;
        }
        lVar13 = *plVar12;
        *(longlong *)(param_1 + 0x180) = *(longlong *)(param_1 + 0x180) + -1;
        *(longlong *)plVar12[1] = lVar13;
        *(longlong *)(lVar13 + 8) = plVar12[1];
        FID_conflict__vector<struct_GSISymbolEntry,class_std::allocator<struct_GSISymbolEntry>_>
                  (plVar12 + 3);
        free(plVar12);
      }
LAB_140260efc:
      *(uint *)(*(longlong *)(param_1 + 0x310) + ((ulonglong)(longlong)(int)local_res10 >> 5) * 4) =
           *(uint *)(*(longlong *)(param_1 + 0x310) +
                    ((ulonglong)(longlong)(int)local_res10 >> 5) * 4) | 1 << (local_res10 & 0x1f);
      plVar12 = (longlong *)FUN_140269060(param_1 + 0x170,local_48,&local_res10);
      lVar13 = *plVar12;
      puVar3 = *(undefined1 **)(lVar13 + 0x20);
      if (puVar3 == *(undefined1 **)(lVar13 + 0x28)) {
        FUN_14026bbe0(lVar13 + 0x18,puVar3,local_res20,&param_5,&param_6,&param_7,&local_res10,
                      param_8,param_9,&param_10,&param_11,&param_12,&param_14,&param_15,&param_16);
      }
      else {
        *(uint *)(puVar3 + 0x14) = local_res10;
        *(undefined2 *)(puVar3 + 0x1c) = *param_8;
        puVar3[0x1e] = *(undefined1 *)(param_8 + 1);
        *(undefined4 *)(puVar3 + 0x20) = param_7;
        *(undefined4 *)(puVar3 + 8) = param_5;
        *(undefined4 *)(puVar3 + 4) = param_4;
        *(undefined4 *)(puVar3 + 0xc) = param_6;
        uVar7 = *(undefined4 *)param_9;
        uVar8 = *(undefined4 *)((longlong)param_9 + 4);
        uVar9 = *(undefined4 *)(param_9 + 1);
        uVar10 = *(undefined4 *)((longlong)param_9 + 0xc);
        *(undefined4 *)(puVar3 + 0x34) = param_10;
        puVar3[0x38] = param_11;
        puVar3[0x39] = param_12;
        puVar3[0x3a] = param_14;
        *(undefined4 *)(puVar3 + 0x3c) = param_15;
        *(undefined4 *)(puVar3 + 0x40) = param_16;
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 0x10) = 0;
        *(undefined4 *)(puVar3 + 0x18) = 0;
        *(undefined4 *)(puVar3 + 0x44) = 0;
        *(undefined4 *)(puVar3 + 0x24) = uVar7;
        *(undefined4 *)(puVar3 + 0x28) = uVar8;
        *(undefined4 *)(puVar3 + 0x2c) = uVar9;
        *(undefined4 *)(puVar3 + 0x30) = uVar10;
        *(longlong *)(lVar13 + 0x20) = *(longlong *)(lVar13 + 0x20) + 0x48;
      }
      plVar12 = (longlong *)FUN_140269060(param_1 + 0x170,local_48,&local_res10);
      lVar13 = *(longlong *)(*plVar12 + 0x20);
      goto LAB_1402610f4;
    }
    lVar13 = *(longlong *)(param_1 + 0x158);
    lVar14 = *(longlong *)(param_1 + 0x160) - lVar13;
    lVar6 = lVar14 >> 0x3f;
    uVar16 = uVar15;
    if (lVar14 / 0x48 + lVar6 != lVar6) {
      do {
        if (*(int *)(uVar16 + 0x14 + lVar13) == (int)uVar17) {
          _Dst = (void *)(lVar13 + (longlong)(int)uVar15 * 0x48);
          _Src = (void *)((longlong)_Dst + 0x48);
          memmove(_Dst,_Src,*(longlong *)(param_1 + 0x160) - (longlong)_Src);
          *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + -0x48;
          uVar17 = (ulonglong)local_res10;
        }
        else {
          uVar15 = (ulonglong)((int)uVar15 + 1);
          uVar16 = uVar16 + 0x48;
        }
        param_2 = (uint)uVar17;
        lVar13 = *(longlong *)(param_1 + 0x158);
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)((*(longlong *)(param_1 + 0x160) - lVar13) / 0x48));
    }
  }
  puVar3 = *(undefined1 **)(param_1 + 0x160);
  if (puVar3 == *(undefined1 **)(param_1 + 0x168)) {
    FUN_14026bbe0(param_1 + 0x158,puVar3,local_res20,&param_5,&param_6,&param_7,&local_res10,param_8
                  ,param_9,&param_10,&param_11,&param_12,&param_14,&param_15,&param_16);
    lVar13 = *(longlong *)(param_1 + 0x160);
  }
  else {
    *(undefined4 *)(puVar3 + 8) = param_5;
    *(undefined2 *)(puVar3 + 0x1c) = *param_8;
    puVar3[0x1e] = *(undefined1 *)(param_8 + 1);
    *(undefined4 *)(puVar3 + 0x20) = param_7;
    *(undefined4 *)(puVar3 + 4) = param_4;
    *(undefined4 *)(puVar3 + 0xc) = param_6;
    *puVar3 = 0;
    uVar5 = *param_9;
    uVar11 = param_9[1];
    *(undefined4 *)(puVar3 + 0x34) = param_10;
    puVar3[0x38] = param_11;
    puVar3[0x39] = param_12;
    puVar3[0x3a] = param_14;
    *(undefined4 *)(puVar3 + 0x3c) = param_15;
    *(undefined4 *)(puVar3 + 0x40) = param_16;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    *(undefined4 *)(puVar3 + 0x44) = 0;
    *(uint *)(puVar3 + 0x14) = param_2;
    *(undefined8 *)(puVar3 + 0x24) = uVar5;
    *(undefined8 *)(puVar3 + 0x2c) = uVar11;
    *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 0x48;
    lVar13 = *(longlong *)(param_1 + 0x160);
  }
LAB_1402610f4:
  if (*(char *)(lVar13 + -0x48) == '\0') {
    fVar2 = *(float *)(lVar13 + -0x44);
    fVar18 = *(float *)(lVar13 + -0x38) + 0.0;
    *(float *)(lVar13 + -0x38) = fVar18;
    fVar18 = fVar18 + *(float *)(lVar13 + -4);
    if (fVar18 < fVar2) {
      *(float *)(lVar13 + -0x30) = fVar18 / fVar2;
      return;
    }
    if (fVar18 <= fVar2 + *(float *)(lVar13 + -0x40)) {
      *(float *)(lVar13 + -0x30) = DAT_140622c24;
      return;
    }
    if (0.0 < *(float *)(lVar13 + -0x3c)) {
      *(float *)(lVar13 + -0x30) =
           DAT_140622c24 -
           ((fVar18 - fVar2) - *(float *)(lVar13 + -0x40)) / *(float *)(lVar13 + -0x3c);
      return;
    }
    *(undefined4 *)(lVar13 + -0x30) = 0;
  }
  return;
}

