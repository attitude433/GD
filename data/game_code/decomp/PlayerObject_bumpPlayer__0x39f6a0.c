// Function: FUN_14039f6a0
// Original target: PlayerObject_bumpPlayer @ 0x39f6a0
// Ghidra entry: 14039f6a0
// Signature: undefined FUN_14039f6a0(void)


void FUN_14039f6a0(longlong *param_1,undefined8 param_2,int param_3,undefined1 param_4,
                  longlong param_5)

{
  char cVar1;
  char cVar2;
  
  if (((char)param_1[0x16e] != '\0') || ((char)param_1[0x176] == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x99c) = 1;
  }
  if (param_3 != 0x2c) {
    FUN_14039f850(param_1,param_2,param_4,param_3);
    if (((char)param_1[0x16e] != '\0') && ((char)param_1[0xe5] == '\0')) {
      FUN_14038cc80(param_1);
    }
    *(undefined1 *)((longlong)param_1 + 0x952) = 0;
    if (param_3 == 0x22) {
      *(undefined1 *)((longlong)param_1 + 0x952) = 1;
      cocos2d::CCPoint::operator=((CCPoint *)((longlong)param_1 + 0xa2c),(CCPoint *)&DAT_1406c2450);
    }
    return;
  }
  if (param_5 == 0) goto LAB_14039f72d;
  if (*(char *)((longlong)param_1 + 0x9c3) == '\0') {
LAB_14039f6fd:
    if (*(char *)((longlong)param_1 + 0x9c3) != '\0') goto LAB_14039f72d;
    cVar2 = *(char *)((longlong)param_1 + 0x9bf);
    cVar1 = FUN_1401a1910(param_5);
    if (cVar1 == cVar2) goto LAB_14039f72d;
  }
  else {
    cVar2 = *(char *)((longlong)param_1 + 0x9bf);
    cVar1 = FUN_1401a19d0(param_5);
    if (cVar1 == cVar2) goto LAB_14039f6fd;
  }
  FUN_14039a1d0(param_1,cVar2 == '\0',1);
LAB_14039f72d:
  FUN_1403943f0(param_1,0);
  if (param_1[0x184] != 0) {
    FUN_140231ff0(param_1[0x184],0x12,0,*(undefined4 *)((longlong)param_1 + 0x39c));
  }
  if ((((*(char *)((longlong)param_1 + 0x9b9) == '\0') &&
       (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
      (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
     (((*(char *)((longlong)param_1 + 0x9c4) == '\0' &&
       (*(char *)((longlong)param_1 + 0x9bb) == '\0')) &&
      (*(char *)((longlong)param_1 + 0x9be) == '\0')))) {
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  FUN_14039fa50(param_1,0x2c);
  return;
}

