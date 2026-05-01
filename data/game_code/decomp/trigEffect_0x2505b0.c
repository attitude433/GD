// Called from triggerObject base / 0x4bc180
// Function: FUN_1402505b0 @ 0x2505b0


undefined8 * FUN_1402505b0(float *param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar9 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar6 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10);
  puVar8 = *(undefined8 **)(param_1 + 2);
  if (puVar6 != puVar8) {
    iVar1 = *(int *)(puVar6 + 2);
    puVar8 = puVar6;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10))
      break;
      puVar8 = (undefined8 *)puVar8[1];
      iVar1 = *(int *)(puVar8 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar5 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar5)();
    return puVar6;
  }
  puVar6 = (undefined8 *)FUN_1404d0770(0x20);
  *(undefined4 *)(puVar6 + 2) = *(undefined4 *)param_3;
  puVar6[3] = 0;
  fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar10 && fVar10 != *param_1) {
    uVar7 = FUN_14005f0f0(param_1);
    FUN_14005ef40(param_1,uVar7);
    puVar2 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar8 = *(undefined8 **)(param_1 + 2);
    if (puVar2 != puVar8) {
      iVar1 = *(int *)(puVar2 + 2);
      puVar8 = puVar2;
      while (*(int *)(puVar6 + 2) != iVar1) {
        if (puVar8 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_140250796;
        puVar8 = (undefined8 *)puVar8[1];
        iVar1 = *(int *)(puVar8 + 2);
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_140250796:
  puVar2 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar8;
  puVar6[1] = puVar2;
  *puVar2 = puVar6;
  puVar8[1] = puVar6;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar9 = *(ulonglong *)(param_1 + 0xc) & uVar9;
  puVar4 = *(undefined8 **)(lVar3 + uVar9 * 0x10);
  if (puVar4 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar9 * 0x10) = puVar6;
  }
  else {
    if (puVar4 == puVar8) {
      *(undefined8 **)(lVar3 + uVar9 * 0x10) = puVar6;
      goto LAB_1402507e8;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) != puVar2) goto LAB_1402507e8;
  }
  *(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) = puVar6;
LAB_1402507e8:
  *param_2 = puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

