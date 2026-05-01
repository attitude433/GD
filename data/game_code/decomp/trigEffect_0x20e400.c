// Called from triggerObject base / 0x4bc180
// Function: FUN_14020e400 @ 0x20e400


void FUN_14020e400(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res10;
  uint local_res20 [2];
  undefined8 in_stack_ffffffffffffff58;
  uint uVar11;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar12;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar13;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar14;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  local_res20[0] = *(uint *)(param_2 + 0x800);
  if (local_res20[0] < 0x65) {
    if (param_3 == '\0') {
      lVar5 = param_1 + 0x5e8;
      puVar7 = local_48;
    }
    else {
      lVar5 = param_1 + 0x5a8;
      puVar7 = local_58;
    }
    local_res10 = param_2;
    plVar2 = (longlong *)FUN_1402502e0(lVar5,puVar7,local_res20);
    uVar11 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
    uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
    uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
    lVar5 = *plVar2;
    if (0 < *(int *)(param_2 + 0x7d8)) {
      lVar9 = *(longlong *)(lVar5 + 0x18);
      lVar6 = *(longlong *)(lVar5 + 0x20) - lVar9;
      iVar4 = 0;
      lVar8 = lVar6 >> 0x3f;
      lVar6 = lVar6 / 0xe8 + lVar8;
      if (lVar6 != lVar8) {
        uVar3 = 0;
        plVar2 = (longlong *)(lVar9 + 0xa0);
LAB_14020e4c0:
        lVar10 = uVar3 * 0xe8 + lVar9;
        if (*(int *)(*plVar2 + 0x7d8) != *(int *)(param_2 + 0x7d8)) goto code_r0x00014020e4d6;
        if (((*(int *)(*plVar2 + 0x39c) == *(int *)(param_2 + 0x39c)) &&
            (*(int *)(lVar10 + 0xac) == *(int *)(param_2 + 0x5c8))) &&
           (*(int *)(lVar10 + 0xb0) == *(int *)(param_2 + 0x5cc))) {
          FUN_1401387a0(lVar10,*(undefined8 *)(lVar10 + 0xa0));
          return;
        }
        lVar6 = *(longlong *)(lVar5 + 0x20);
        for (lVar8 = lVar9 + 0x1d0; lVar8 != lVar6; lVar8 = lVar8 + 0xe8) {
          lVar9 = lVar9 + 0xe8;
          FUN_140250c90(lVar9,lVar8);
          uVar11 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
          uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
          uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
          uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
        }
        lVar9 = *(longlong *)(lVar5 + 0x20);
        FUN_14005e430(lVar9 + -0x20);
        FUN_1402508a0(lVar9 + -0xe8,lVar9 + -0xe8);
        *(longlong *)(lVar5 + 0x20) = *(longlong *)(lVar5 + 0x20) + -0xe8;
      }
    }
LAB_14020e59e:
    local_74 = 0;
    local_78 = 0;
    local_70 = ((uint)*(byte *)(param_2 + 0x739) + (*(byte *)(param_2 + 0x738) + 10) * 10) * 1000000
               + *(int *)(param_2 + 0x5c8);
    plVar2 = (longlong *)
             ((*(ulonglong *)(param_1 + 0xfb0) &
              ((((ulonglong)(local_70 >> 8 & 0xff) ^
                ((ulonglong)(local_70 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3
               ^ (ulonglong)(local_70 >> 0x10 & 0xff)) * 0x100000001b3 ^
              (ulonglong)(local_70 >> 0x18)) * 0x100000001b3) * 0x10 +
             *(longlong *)(param_1 + 0xf98));
    lVar9 = plVar2[1];
    if (lVar9 == *(longlong *)(param_1 + 0xf88)) {
LAB_14020e663:
      lVar9 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar9 + 0x10);
      while (local_70 != uVar1) {
        if (lVar9 == *plVar2) goto LAB_14020e663;
        lVar9 = *(longlong *)(lVar9 + 8);
        uVar1 = *(uint *)(lVar9 + 0x10);
      }
    }
    if (lVar9 != 0) {
      plVar2 = (longlong *)FUN_14024ed30(param_1 + 0xf80,local_38,&local_70);
      local_74 = *(undefined4 *)(*plVar2 + 0x14);
      local_78 = *(undefined4 *)(*plVar2 + 0x18);
    }
    lVar9 = *(longlong *)(lVar5 + 0x20);
    local_6c = *(undefined4 *)(param_2 + 0x698);
    local_64 = *(undefined4 *)(param_2 + 0x5cc);
    local_60[0] = *(undefined4 *)(param_2 + 0x5c8);
    local_68 = 0;
    if (lVar9 == *(longlong *)(lVar5 + 0x28)) {
      FUN_140251180(lVar5 + 0x18,lVar9,&local_res10,local_60,&local_64,&local_68,&local_74,&local_78
                    ,&local_6c);
    }
    else {
      FUN_1402042f0(lVar9,param_2,local_60[0],local_64,(ulonglong)uVar11 << 0x20,
                    CONCAT44(uVar12,local_74),CONCAT44(uVar13,local_78),CONCAT44(uVar14,local_6c));
      *(longlong *)(lVar5 + 0x20) = *(longlong *)(lVar5 + 0x20) + 0xe8;
    }
  }
  return;
code_r0x00014020e4d6:
  iVar4 = iVar4 + 1;
  plVar2 = plVar2 + 0x1d;
  uVar3 = (ulonglong)iVar4;
  if ((ulonglong)(lVar6 - lVar8) <= uVar3) goto LAB_14020e59e;
  goto LAB_14020e4c0;
}

