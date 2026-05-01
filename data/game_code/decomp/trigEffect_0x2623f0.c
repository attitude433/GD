// Called from triggerObject base / 0x4bc180
// Function: FUN_1402623f0 @ 0x2623f0


undefined4 FUN_1402623f0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bStackX_11;
  byte bStackX_12;
  byte bStackX_13;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  if (9999 < (int)param_2) {
    param_2 = 9999;
  }
  bStackX_11 = (byte)(param_2 >> 8);
  bStackX_12 = (byte)(param_2 >> 0x10);
  bStackX_13 = (byte)(param_2 >> 0x18);
  lVar2 = *(longlong *)(param_1 + 0x338);
  plVar5 = (longlong *)
           ((*(ulonglong *)(param_1 + 0x360) &
            (((((ulonglong)param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)bStackX_11) * 0x100000001b3 ^ (ulonglong)bStackX_12) * 0x100000001b3 ^
            (ulonglong)bStackX_13) * 0x100000001b3) * 0x10 + *(longlong *)(param_1 + 0x348));
  lVar3 = plVar5[1];
  lVar4 = 0;
  if (lVar3 != lVar2) {
    uVar1 = *(uint *)(lVar3 + 0x10);
    while ((lVar4 = lVar3, param_2 != uVar1 && (lVar4 = 0, lVar3 != *plVar5))) {
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(uint *)(lVar3 + 0x10);
    }
  }
  if (lVar4 == 0) {
    lVar4 = lVar2;
  }
  if (lVar4 != lVar2) {
    return *(undefined4 *)(lVar4 + 0x14);
  }
  return 0;
}

