// Called from updatePlayerCollisionBlocks per player block
// Function: FUN_140226d60


void FUN_140226d60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (-1 < *(int *)(param_2 + 0x278)) {
    lVar5 = (longlong)*(int *)(param_2 + 0x27c);
    lVar1 = (longlong)*(int *)(param_2 + 0x278) * 8;
    plVar3 = *(longlong **)(**(longlong **)(lVar1 + *(longlong *)(param_1 + 0x3598)) + lVar5 * 8);
    lVar1 = **(longlong **)(lVar1 + *(longlong *)(param_1 + 0x3640));
    iVar2 = *(int *)(lVar1 + lVar5 * 4);
    *(int *)(lVar1 + lVar5 * 4) = iVar2 + -1;
    lVar1 = *plVar3;
    *(undefined8 *)(lVar1 + (longlong)*(int *)(param_2 + 0x270) * 8) =
         *(undefined8 *)(lVar1 + -8 + (longlong)iVar2 * 8);
    *(int *)(*(longlong *)(*plVar3 + (longlong)*(int *)(param_2 + 0x270) * 8) + 0x270) =
         *(int *)(param_2 + 0x270);
    if (*(int *)(param_2 + 0x40c) == 0x718) {
      if (*(char *)(param_2 + 0x280) != '\0') {
        iVar2 = *(int *)(param_1 + 0x3618);
        *(int *)(param_1 + 0x3618) = iVar2 + -1;
        *(undefined8 *)(*(longlong *)(param_1 + 0x3600) + (longlong)*(int *)(param_2 + 0x274) * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x3600) + -8 + (longlong)iVar2 * 8);
        *(int *)(*(longlong *)
                  (*(longlong *)(param_1 + 0x3600) + (longlong)*(int *)(param_2 + 0x274) * 8) +
                0x274) = *(int *)(param_2 + 0x274);
        return;
      }
      lVar5 = (longlong)*(int *)(param_2 + 0x27c);
      lVar1 = (longlong)*(int *)(param_2 + 0x278) * 8;
      plVar3 = *(longlong **)(**(longlong **)(lVar1 + *(longlong *)(param_1 + 0x35c8)) + lVar5 * 8);
      lVar1 = **(longlong **)(lVar1 + *(longlong *)(param_1 + 0x3670));
      iVar2 = *(int *)(lVar1 + lVar5 * 4);
      *(int *)(lVar1 + lVar5 * 4) = iVar2 + -1;
      lVar1 = *plVar3;
      *(undefined8 *)(lVar1 + (longlong)*(int *)(param_2 + 0x274) * 8) =
           *(undefined8 *)(lVar1 + -8 + (longlong)iVar2 * 8);
      *(int *)(*(longlong *)(*plVar3 + (longlong)*(int *)(param_2 + 0x274) * 8) + 0x274) =
           *(int *)(param_2 + 0x274);
      return;
    }
    if (*(int *)(param_2 + 0x3a0) != 7) {
      if (*(char *)(param_2 + 0x280) != '\0') {
        iVar2 = *(int *)(param_1 + 0x35f8);
        *(int *)(param_1 + 0x35f8) = iVar2 + -1;
        *(undefined8 *)(*(longlong *)(param_1 + 0x35e0) + (longlong)*(int *)(param_2 + 0x274) * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x35e0) + -8 + (longlong)iVar2 * 8);
        *(int *)(*(longlong *)
                  (*(longlong *)(param_1 + 0x35e0) + (longlong)*(int *)(param_2 + 0x274) * 8) +
                0x274) = *(int *)(param_2 + 0x274);
        return;
      }
      lVar5 = (longlong)*(int *)(param_2 + 0x27c);
      lVar1 = (longlong)*(int *)(param_2 + 0x278) * 8;
      plVar3 = *(longlong **)(**(longlong **)(lVar1 + *(longlong *)(param_1 + 0x35b0)) + lVar5 * 8);
      lVar1 = **(longlong **)(lVar1 + *(longlong *)(param_1 + 0x3658));
      iVar2 = *(int *)(lVar1 + lVar5 * 4);
      *(int *)(lVar1 + lVar5 * 4) = iVar2 + -1;
      lVar1 = *plVar3;
      *(undefined8 *)(lVar1 + (longlong)*(int *)(param_2 + 0x274) * 8) =
           *(undefined8 *)(lVar1 + -8 + (longlong)iVar2 * 8);
      *(int *)(*(longlong *)(*plVar3 + (longlong)*(int *)(param_2 + 0x274) * 8) + 0x274) =
           *(int *)(param_2 + 0x274);
      uVar4 = (ulonglong)(longlong)(int)*(uint *)(param_2 + 0x27c) >> 5;
      lVar1 = **(longlong **)
                (*(longlong *)(param_1 + 0x3688) + (longlong)*(int *)(param_2 + 0x278) * 8);
      *(uint *)(lVar1 + uVar4 * 4) =
           *(uint *)(lVar1 + uVar4 * 4) | 1 << (*(uint *)(param_2 + 0x27c) & 0x1f);
    }
  }
  return;
}

