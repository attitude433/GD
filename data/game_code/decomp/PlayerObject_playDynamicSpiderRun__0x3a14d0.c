// PlayerObject_playDynamicSpiderRun @ 0x3a14d0


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403a14d0(longlong param_1)

{
  uint uVar1;
  size_t sVar2;
  CCAction *pCVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 ****ppppuVar6;
  undefined1 auStack_88 [40];
  ulonglong local_60 [4];
  undefined8 ***local_40 [2];
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1406ba040 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x9e4) != '\0') {
    return;
  }
  FUN_14003bdb0(local_40,*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x298) + 0x198);
  local_60[3] = 0xf;
  local_60[2] = 4;
  if (*(float *)(param_1 + 0x9f4) <= DAT_140622c54) {
    local_60[1] = 0;
    local_60[0] = 0x6b6c6177;
    if (*(float *)(param_1 + 0x9f4) <= DAT_140622bd8) {
      FUN_140040cf0(*(undefined8 *)(param_1 + 0x8a8),local_60);
      goto LAB_1403a16e3;
    }
    ppppuVar6 = local_40;
    if (0xf < local_28) {
      ppppuVar6 = (undefined8 ****)local_40[0];
    }
    sVar2 = 4;
    if (local_30 < 4) {
      sVar2 = local_30;
    }
    uVar1 = memcmp(local_60,ppppuVar6,sVar2);
    if (uVar1 == 0) {
      if (local_30 < 5) {
        uVar1 = (uint)(local_30 < 4);
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
    local_60[1] = 0;
    local_60[2] = 3;
    local_60[3] = 0xf;
    local_60[0] = (ulonglong)(uint3)DAT_1405c79ec;
  }
  else {
    local_60[1] = 0;
    local_60[0] = 0x6b6c6177;
    ppppuVar6 = local_40;
    if (0xf < local_28) {
      ppppuVar6 = (undefined8 ****)local_40[0];
    }
    sVar2 = 4;
    if (local_30 < 4) {
      sVar2 = local_30;
    }
    uVar1 = memcmp(local_60,ppppuVar6,sVar2);
    lVar4 = -1;
    if (uVar1 == 0) {
      if (local_30 < 5) {
        uVar1 = (uint)(local_30 < 4);
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
    puVar5 = (undefined4 *)&DAT_1405c7bb0;
    if (*(char *)(param_1 + 0xc43) == '\0') {
      puVar5 = &DAT_1405c79ec;
    }
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)((longlong)puVar5 + lVar4) != '\0');
    FUN_14003a930(local_60,puVar5,lVar4);
  }
  FUN_140040cf0(*(undefined8 *)(param_1 + 0x8a8),local_60);
  if ((uVar1 == 0) &&
     (pCVar3 = cocos2d::CCNode::getActionByTag
                         (*(CCNode **)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x298) + 0x140) + 0x2a0
                           ),1), pCVar3 != (CCAction *)0x0)) {
    if (pCVar3[0x5c] != (CCAction)0x0) {
      (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3,0);
    }
    (**(code **)(*(longlong *)pCVar3 + 0x60))(pCVar3,DAT_140622a10);
  }
LAB_1403a16e3:
  FUN_14003a830(local_40);
  return;
}

