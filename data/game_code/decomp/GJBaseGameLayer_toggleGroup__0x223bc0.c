// Function: FUN_140223bc0
// Original target: GJBaseGameLayer_toggleGroup @ 0x223bc0
// Ghidra entry: 140223bc0
// Signature: undefined FUN_140223bc0(void)


void FUN_140223bc0(longlong param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint local_res18 [2];
  undefined1 local_28 [16];
  
  uVar6 = param_2;
  if ((int)param_2 < 0) {
    uVar6 = 0;
  }
  uVar3 = uVar6;
  if (9999 < (int)uVar6) {
    uVar3 = 9999;
  }
  if (((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x950) + 0x4f8) +
                 ((ulonglong)(longlong)(int)uVar3 >> 5) * 4) >> ((byte)uVar3 & 0x1f) & 1) != 0) !=
      (bool)param_3) {
    lVar4 = FUN_140224280(param_1,param_2);
    if (lVar4 != 0) {
      puVar2 = *(uint **)(lVar4 + 0x38);
      uVar3 = *puVar2;
      if (param_3 == '\0') {
        if (uVar3 != 0) {
          plVar5 = *(longlong **)(puVar2 + 4);
          plVar1 = plVar5 + ((ulonglong)uVar3 - 1);
          for (; (plVar5 <= plVar1 && (lVar4 = *plVar5, lVar4 != 0)); plVar5 = plVar5 + 1) {
            *(int *)(lVar4 + 0x4c0) = *(int *)(lVar4 + 0x4c0) + -1;
            *(byte *)(lVar4 + 0x28e) = (byte)((uint)*(undefined4 *)(lVar4 + 0x4c0) >> 0x1f);
          }
        }
      }
      else if (uVar3 != 0) {
        plVar5 = *(longlong **)(puVar2 + 4);
        plVar1 = plVar5 + ((ulonglong)uVar3 - 1);
        for (; (plVar5 <= plVar1 && (lVar4 = *plVar5, lVar4 != 0)); plVar5 = plVar5 + 1) {
          *(int *)(lVar4 + 0x4c0) = *(int *)(lVar4 + 0x4c0) + 1;
          *(byte *)(lVar4 + 0x28e) = (byte)((uint)*(undefined4 *)(lVar4 + 0x4c0) >> 0x1f);
        }
      }
    }
    local_res18[0] = 9999;
    if (((int)uVar6 < 10000) && (local_res18[0] = param_2, (int)param_2 < 0)) {
      local_res18[0] = 0;
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x950) + 0x4f8);
    puVar2 = (uint *)(lVar4 + ((ulonglong)(longlong)(int)local_res18[0] >> 5) * 4);
    uVar6 = *(uint *)(lVar4 + ((ulonglong)(longlong)(int)local_res18[0] >> 5) * 4);
    lVar4 = *(longlong *)(param_1 + 0x950) + 0x518;
    if (param_3 == '\0') {
      *puVar2 = uVar6 & ~(1 << (local_res18[0] & 0x1f));
      FUN_140060d70(lVar4,local_28,local_res18);
    }
    else {
      *puVar2 = uVar6 | 1 << (local_res18[0] & 0x1f);
      FUN_14005d780(lVar4,local_res18);
    }
  }
  return;
}

