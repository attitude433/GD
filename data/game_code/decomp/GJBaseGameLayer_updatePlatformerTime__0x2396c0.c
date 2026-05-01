// GJBaseGameLayer_updatePlatformerTime @ 0x2396c0
// Function: FUN_1402396c0


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402396c0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  CCString *this;
  char *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void *_Memory;
  void **ppvVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  undefined1 local_70 [32];
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  void *local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_1406ba040 ^ (ulonglong)auStack_98;
  uVar7 = (uint)((float)(int)((double)param_1[0x6ac] * DAT_140623000) / DAT_14062350c);
  fVar10 = (float)(int)((int)((double)param_1[0x6ac] * DAT_140623000) + uVar7 * -1000) /
           DAT_14062307c;
  uVar8 = (uint)fVar10;
  (**(code **)(*param_1 + 0x548))(fVar10,uVar7,uVar8,1);
  lVar9 = *(longlong *)(param_1[0x20a] + 8 + (param_1[0x20d] & 0x994f76653e2a3951U) * 0x10);
  if (lVar9 == param_1[0x208]) {
LAB_140239781:
    lVar9 = 0;
  }
  else {
    iVar1 = *(int *)(lVar9 + 0x10);
    while (iVar1 != -1) {
      if (lVar9 == *(longlong *)(param_1[0x20a] + (param_1[0x20d] & 0x994f76653e2a3951U) * 0x10))
      goto LAB_140239781;
      lVar9 = *(longlong *)(lVar9 + 8);
      iVar1 = *(int *)(lVar9 + 0x10);
    }
  }
  if (lVar9 != 0) {
    this = cocos2d::CCString::createWithFormat("%i.%02d",(ulonglong)uVar7,(ulonglong)uVar8);
    pcVar3 = cocos2d::CCString::getCString(this);
    local_50 = (void *)0x0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (pcVar3[lVar9] != '\0');
    FUN_14003a930(&local_50,pcVar3);
    FUN_140069090(local_30,uVar7);
    local_78[0] = 0xffffffff;
    plVar4 = (longlong *)FUN_14024eaf0(param_1 + 0x207,local_70,local_78);
    plVar2 = *(longlong **)(*plVar4 + 0x20);
    for (plVar4 = *(longlong **)(*plVar4 + 0x18); plVar4 != plVar2; plVar4 = plVar4 + 1) {
      lVar9 = *plVar4;
      if (*(char *)(lVar9 + 0x305) != '\0') {
        ppvVar6 = local_30;
        if (*(char *)(lVar9 + 0x778) == '\0') {
          ppvVar6 = &local_50;
        }
        uVar5 = FUN_14003bdb0(local_70,ppvVar6);
        FUN_1404b3a50(lVar9,uVar5);
      }
    }
    FUN_14003a830(local_30);
    if (0xf < uStack_38) {
      _Memory = local_50;
      if ((0xfff < uStack_38 + 1) &&
         (_Memory = *(void **)((longlong)local_50 + -8),
         0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
  }
  return;
}

