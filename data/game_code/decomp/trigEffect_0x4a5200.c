// Called from triggerObject base / 0x4bc180
// Function: FUN_1404a5200 @ 0x4a5200


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404a5200(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined8 **local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1406ba040 ^ (ulonglong)auStack_a8;
  uVar5 = (undefined4)param_2;
  FUN_1404a5380(local_38,param_2,*(undefined4 *)(param_1 + 0x40c));
  if (local_28 != 0) {
    *(undefined4 *)(param_1 + 0x60c) = uVar5;
    if ((undefined8 ***)(param_1 + 0x5e8) != local_38) {
      pppuVar4 = local_38;
      if (0xf < local_20) {
        pppuVar4 = (undefined8 ***)local_38[0];
      }
      FUN_14003cce0((undefined8 ***)(param_1 + 0x5e8),pppuVar4);
    }
    *(undefined1 *)(param_1 + 0x5e1) = 1;
    if (*(char *)(param_1 + 0x305) == '\0') {
      uVar2 = FUN_14003bdb0(local_58,local_38);
      lVar1 = *(longlong *)(param_1 + 0x5c8);
      local_88 = uVar2;
      FUN_140074450(*(undefined8 *)(lVar1 + 0x298));
      uVar3 = FUN_14003bdb0(local_78,uVar2);
      FUN_140073e00(*(undefined8 *)(lVar1 + 0x298),uVar3);
      FUN_14003a830(uVar2);
    }
    else {
      uVar2 = FUN_14003bdb0(local_78,local_38);
      FUN_140040d60(*(undefined8 *)(param_1 + 0x5c8),uVar2,DAT_1406229ec);
    }
  }
  FUN_14003a830(local_38);
  return;
}

