// Function: FUN_140231ff0
// Original target: GJBaseGameLayer_broadcastEvent_231ff0 @ 0x231ff0
// Ghidra entry: 140231ff0
// Signature: undefined FUN_140231ff0(void)


void FUN_140231ff0(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 local_res8;
  int local_resc;
  undefined1 local_38 [32];
  
  local_resc = param_3 * 10000 + param_4;
  local_res8 = param_2;
  piVar2 = (int *)FUN_1401d0800(param_1 + 0x598,&local_res8);
  if (*piVar2 != *(int *)(param_1 + 0x3e0)) {
    puVar3 = (undefined4 *)FUN_1401d0800(param_1 + 0x598,&local_res8);
    *puVar3 = *(undefined4 *)(param_1 + 0x3e0);
    puVar4 = (undefined8 *)FUN_14024a5e0(param_1 + 0x588,&local_res8);
    puVar1 = (undefined4 *)puVar4[1];
    for (puVar3 = (undefined4 *)*puVar4; puVar3 != puVar1; puVar3 = puVar3 + 10) {
      if (*(char *)(puVar3 + 3) == '\0') {
        FUN_14024b270(local_38,puVar3 + 4);
        (**(code **)(*(longlong *)(param_1 + 0x198) + 8))
                  ((longlong *)(param_1 + 0x198),*puVar3,0,0,local_38,puVar3[1],puVar3[2]);
        FUN_14005e430(local_38);
      }
    }
  }
  if (param_4 != 0) {
    FUN_140231ff0(param_1,param_2,param_3,0);
  }
  return;
}

