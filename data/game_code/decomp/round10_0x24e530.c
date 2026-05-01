// FUN_14024e530 @ 0x24e530


undefined8 * FUN_14024e530(float *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  float *pfVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar9 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar7 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10);
  pfVar1 = param_1 + 2;
  puVar8 = *(undefined8 **)pfVar1;
  if (puVar7 != puVar8) {
    iVar2 = *(int *)(puVar7 + 2);
    puVar8 = puVar7;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10))
      break;
      puVar8 = (undefined8 *)puVar8[1];
      iVar2 = *(int *)(puVar8 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar6 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar6)();
    return puVar7;
  }
  puVar7 = (undefined8 *)FUN_1404d0770(0x20,pfVar1,param_3,param_4,pfVar1,0);
  *(undefined4 *)(puVar7 + 2) = *(undefined4 *)param_3;
  puVar7[3] = 0;
  fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar10 && fVar10 != *param_1) {
    FUN_140251040(param_1);
    puVar3 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10);
    puVar8 = *(undefined8 **)(param_1 + 2);
    if (puVar3 != puVar8) {
      iVar2 = *(int *)(puVar3 + 2);
      puVar8 = puVar3;
      while (*(int *)(puVar7 + 2) != iVar2) {
        if (puVar8 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10)
           ) goto LAB_14024e708;
        puVar8 = (undefined8 *)puVar8[1];
        iVar2 = *(int *)(puVar8 + 2);
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_14024e708:
  puVar3 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = puVar8;
  puVar7[1] = puVar3;
  *puVar3 = puVar7;
  puVar8[1] = puVar7;
  lVar4 = *(longlong *)(param_1 + 6);
  uVar9 = *(ulonglong *)(param_1 + 0xc) & uVar9;
  puVar5 = *(undefined8 **)(lVar4 + uVar9 * 0x10);
  if (puVar5 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar4 + uVar9 * 0x10) = puVar7;
  }
  else {
    if (puVar5 == puVar8) {
      *(undefined8 **)(lVar4 + uVar9 * 0x10) = puVar7;
      goto LAB_14024e75a;
    }
    if (*(undefined8 **)(lVar4 + 8 + uVar9 * 0x10) != puVar3) goto LAB_14024e75a;
  }
  *(undefined8 **)(lVar4 + 8 + uVar9 * 0x10) = puVar7;
LAB_14024e75a:
  *param_2 = puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

