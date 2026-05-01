// Called from triggerObject base / 0x4bc180
// Function: FUN_14020e760 @ 0x20e760


void FUN_14020e760(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int iVar7;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  local_res18[0] = *(uint *)(param_2 + 0x800);
  iVar7 = 0;
  if (100 < local_res18[0]) {
    local_res18[0] = 0;
  }
  if (param_3 == '\0') {
    lVar3 = param_1 + 0x5e8;
    puVar6 = local_38;
  }
  else {
    lVar3 = param_1 + 0x5a8;
    puVar6 = local_48;
  }
  plVar2 = (longlong *)FUN_1402502e0(lVar3,puVar6,local_res18);
  lVar3 = *plVar2;
  lVar5 = *(longlong *)(lVar3 + 0x18);
  lVar4 = *(longlong *)(lVar3 + 0x20) - lVar5;
  lVar1 = lVar4 >> 0x3f;
  lVar4 = lVar4 / 0xe8 + lVar1;
  if (lVar4 == lVar1) {
    return;
  }
  if (*(int *)(param_2 + 0x7d8) == 0) {
    local_res10[0] = local_res18[0];
    if (local_res18[0] < 0x65) {
      if (param_3 != '\0') {
        FUN_14024a470(param_1 + 0x5a8,local_res10);
        lVar3 = (longlong)(int)local_res18[0];
        lVar5 = *(longlong *)(param_1 + 0x628);
        goto LAB_14020e942;
      }
      FUN_14024a470(param_1 + 0x5e8,local_res10);
    }
    else if (param_3 != '\0') {
      lVar3 = (longlong)(int)local_res18[0];
      goto LAB_14020e85a;
    }
    lVar3 = (longlong)(int)local_res18[0];
  }
  else {
    if (lVar4 != lVar1) {
      plVar2 = (longlong *)(lVar5 + 0xa0);
LAB_14020e880:
      if (*(int *)(*plVar2 + 0x7d8) != *(int *)(param_2 + 0x7d8)) goto code_r0x00014020e88c;
      lVar1 = *(longlong *)(lVar3 + 0x20);
      lVar5 = (longlong)iVar7 * 0xe8 + lVar5;
      lVar4 = lVar5;
      while (lVar4 = lVar4 + 0xe8, lVar4 != lVar1) {
        FUN_140250c90(lVar5,lVar4);
        lVar5 = lVar5 + 0xe8;
      }
      lVar5 = *(longlong *)(lVar3 + 0x20);
      FUN_14005e430(lVar5 + -0x20);
      FUN_1402508a0(lVar5 + -0xe8,lVar5 + -0xe8);
      *(longlong *)(lVar3 + 0x20) = *(longlong *)(lVar3 + 0x20) + -0xe8;
    }
LAB_14020e90c:
    lVar5 = *(longlong *)(lVar3 + 0x20) - *(longlong *)(lVar3 + 0x18);
    lVar3 = lVar5 >> 0x3f;
    if (lVar5 / 0xe8 + lVar3 != lVar3) {
      return;
    }
    lVar3 = (longlong)(int)local_res18[0];
    if (param_3 != '\0') {
LAB_14020e85a:
      lVar5 = *(longlong *)(param_1 + 0x628);
      goto LAB_14020e942;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x640);
LAB_14020e942:
  *(undefined4 *)(lVar5 + lVar3 * 4) = 0xfffffffe;
  return;
code_r0x00014020e88c:
  iVar7 = iVar7 + 1;
  plVar2 = plVar2 + 0x1d;
  if ((ulonglong)(lVar4 - lVar1) <= (ulonglong)(longlong)iVar7) goto LAB_14020e90c;
  goto LAB_14020e880;
}

