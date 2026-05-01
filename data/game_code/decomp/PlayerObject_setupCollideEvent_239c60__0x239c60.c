// Function: FUN_140239c60
// Original target: PlayerObject_setupCollideEvent_239c60 @ 0x239c60
// Ghidra entry: 140239c60
// Signature: undefined FUN_140239c60(void)


void FUN_140239c60(longlong param_1,float param_2,char param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulonglong in_RDX;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x3e0);
  if (0.0 < param_2) {
    fVar7 = (float)roundf(*(float *)(param_1 + 0x330) * DAT_14062350c);
    in_RDX = (ulonglong)*(uint *)(param_1 + 0x3f4);
    if (param_3 == '\0') {
      *(int *)(param_1 + 0x3e0) = *(int *)(param_1 + 0x3e0) + 2;
      iVar2 = *(uint *)(param_1 + 0x3f4) + (int)fVar7;
    }
    else {
      *(int *)(param_1 + 0x3e0) = *(int *)(param_1 + 0x3e0) + 1;
      iVar2 = (int)(longlong)((float)(int)fVar7 * DAT_140622b08 + (float)in_RDX);
    }
    *(int *)(param_1 + 0x3f4) = iVar2;
  }
  if (*(char *)(param_1 + 0x324a) == '\0') {
    if (0.0 < param_2) {
      if (param_3 == '\0') {
        iVar2 = *(int *)(param_1 + 1000) + 2;
      }
      else {
        iVar2 = *(int *)(param_1 + 1000) + 1;
      }
      *(int *)(param_1 + 1000) = iVar2;
    }
    if (((*(char *)(param_1 + 0x3799) == '\0') && (*(char *)(param_1 + 0x379a) == '\0')) ||
       (param_4 != '\0')) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    FUN_140231d10(param_1,in_RDX,uVar5);
    lVar6 = *(longlong *)(param_1 + 0x3318);
    uVar4 = (ulonglong)*(int *)(param_1 + 0x3400);
    if (uVar4 < (ulonglong)(*(longlong *)(param_1 + 0x3320) - lVar6 >> 4)) {
      iVar2 = *(int *)(param_1 + 0x3ec) - *(int *)(param_1 + 0x32fc);
      *(int *)(param_1 + 0x32fc) = *(int *)(param_1 + 0x3ec);
      if (uVar4 < (ulonglong)(*(longlong *)(param_1 + 0x3320) - lVar6 >> 4)) {
        do {
          *(int *)(lVar6 + 8 + (longlong)(int)uVar4 * 0x10) = iVar2;
          iVar2 = 0;
          uVar3 = *(int *)(param_1 + 0x3400) + 1;
          uVar4 = (ulonglong)uVar3;
          *(uint *)(param_1 + 0x3400) = uVar3;
          lVar6 = *(longlong *)(param_1 + 0x3318);
        } while ((ulonglong)(longlong)(int)uVar3 <
                 (ulonglong)(*(longlong *)(param_1 + 0x3320) - lVar6 >> 4));
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x86c)) {
    piVar1 = (int *)(param_1 + 0x870);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x870) = 0x78;
      *(int *)(param_1 + 0x86c) = *(int *)(param_1 + 0x86c) + -1;
    }
  }
  return;
}

