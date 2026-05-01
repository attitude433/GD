// Called from triggerObject base / 0x4bc180
// Function: FUN_140219090 @ 0x219090


ulonglong FUN_140219090(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  byte bStackX_11;
  byte bStackX_12;
  byte bStackX_13;
  
  lVar1 = *(longlong *)(param_1 + 0x950);
  if (0x2711 < param_2) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar5 = param_2;
  if (param_2 <= param_3) {
    iVar5 = param_3;
  }
  if (param_3 <= param_2) {
    param_2 = param_3;
  }
  uVar2 = param_2 + 10000000 + iVar5 * 10000;
  iVar5 = param_2 + 10000000 + iVar5 * 10000;
  bStackX_11 = (byte)(uVar2 >> 8);
  bStackX_12 = (byte)(uVar2 >> 0x10);
  bStackX_13 = (byte)(uVar2 >> 0x18);
  plVar4 = (longlong *)
           ((*(ulonglong *)(lVar1 + 0x2d0) &
            (((((ulonglong)(uVar2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)bStackX_11) * 0x100000001b3 ^ (ulonglong)bStackX_12) * 0x100000001b3 ^
            (ulonglong)bStackX_13) * 0x100000001b3) * 0x10 + *(longlong *)(lVar1 + 0x2b8));
  lVar3 = plVar4[1];
  if (lVar3 != *(longlong *)(lVar1 + 0x2a8)) {
    if (iVar5 == *(int *)(lVar3 + 0x10)) goto LAB_140219158;
    while (lVar3 != *plVar4) {
      lVar3 = *(longlong *)(lVar3 + 8);
      if (iVar5 == *(int *)(lVar3 + 0x10)) {
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar3 != 0);
      }
    }
  }
  lVar3 = 0;
LAB_140219158:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar3 != 0);
}

