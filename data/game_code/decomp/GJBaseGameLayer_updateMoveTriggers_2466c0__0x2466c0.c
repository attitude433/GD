// Function: FUN_1402466c0
// Original target: GJBaseGameLayer_updateMoveTriggers_2466c0 @ 0x2466c0
// Ghidra entry: 1402466c0
// Signature: undefined FUN_1402466c0(void)


void FUN_1402466c0(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  float fVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  uint uVar10;
  
  uVar5 = DAT_1406243f0;
  fVar4 = DAT_1406233a4;
  if (*(longlong *)(param_1 + 0x3450) != 0) {
    puVar2 = *(uint **)(*(longlong *)(param_1 + 0x3450) + 0x38);
    uVar10 = *puVar2;
    if (uVar10 != 0) {
      plVar8 = *(longlong **)(puVar2 + 4);
      plVar1 = plVar8 + ((ulonglong)uVar10 - 1);
      for (; (plVar8 <= plVar1 && (plVar3 = (longlong *)*plVar8, plVar3 != (longlong *)0x0));
          plVar8 = plVar8 + 1) {
        plVar6 = (longlong *)(**(code **)(*plVar3 + 0x1e8))(plVar3);
        if (*(char *)((longlong)plVar6 + 0x305) != '\0') {
          if ((*(int *)((longlong)plVar6 + 0x40c) == 0x54) &&
             (*(char *)(*(longlong *)(param_1 + 0xda0) + 0x9bf) != '\0')) {
            lVar7 = *plVar3;
            fVar9 = (float)(**(code **)(*plVar6 + 0x158))();
            fVar9 = fVar4 - fVar9;
          }
          else {
            lVar7 = *plVar3;
            uVar10 = (**(code **)(*plVar6 + 0x158))(plVar6);
            fVar9 = (float)(uVar10 ^ uVar5);
          }
          (**(code **)(lVar7 + 0x150))(plVar3,fVar9);
        }
      }
    }
  }
  return;
}

