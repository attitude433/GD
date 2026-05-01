// FUN_14039a1d0 @ 0x39a1d0


void FUN_14039a1d0(longlong param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  longlong local_res8;
  undefined2 local_res10;
  
  if (*(char *)(param_1 + 0x9bf) != param_2) {
    FUN_1403a0680();
    *(char *)(param_1 + 0x9bf) = param_2;
    if (*(longlong *)(param_1 + 0xc20) != 0) {
      uVar1 = 10;
      if (param_2 == '\0') {
        uVar1 = 0xb;
      }
      FUN_140231ff0(*(longlong *)(param_1 + 0xc20),uVar1,0,*(undefined4 *)(param_1 + 0x39c));
    }
    *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(param_1 + 0xaa0);
    *(undefined8 *)(param_1 + 0x960) = 0;
    *(undefined8 *)(param_1 + 0x958) = 0;
    *(undefined1 *)(param_1 + 0xa29) = 0;
    if ((*(char *)(param_1 + 0x9b1) != '\0') || (*(char *)(param_1 + 0x9b0) != '\0')) {
      *(bool *)(param_1 + 0x68c) = *(char *)(param_1 + 0x68c) == '\0';
    }
    cocos2d::CCDictionary::removeAllObjects(*(CCDictionary **)(param_1 + 0x5b0));
    cocos2d::CCDictionary::removeAllObjects(*(CCDictionary **)(param_1 + 0x5b8));
    cocos2d::CCDictionary::removeAllObjects(*(CCDictionary **)(param_1 + 0x5c0));
    cocos2d::CCDictionary::removeAllObjects(*(CCDictionary **)(param_1 + 0x5c8));
    *(undefined8 *)(param_1 + 0x5e0) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x5d0) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x5d8) = 0xffffffffffffffff;
    if (*(char *)(param_1 + 0x7e1) == '\0') {
      *(double *)(param_1 + 0x9a0) = *(double *)(param_1 + 0x9a0) * DAT_140622d98;
      if (param_3 == '\0') {
        if (param_2 == '\0') {
          local_res10 = 0x9600;
          local_res8 = CONCAT53(local_res8._3_5_,0xff0000);
        }
        else {
          local_res10 = 0xc8ff;
          local_res8 = (ulonglong)local_res8._3_5_ << 0x18;
        }
        local_res8 = CONCAT62(local_res8._2_6_,local_res10);
        FUN_140397760(param_1,&local_res8,DAT_1406231d0);
      }
    }
    FUN_1403a0220(param_1);
    FUN_140398860(param_1);
    if (*(char *)(param_1 + 0x9bb) == '\0') {
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_res8 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      if ((((DAT_1406c2ed8[0x41] != 0) && (*(char *)(DAT_1406c2ed8[0x41] + 0x3231) == '\0')) &&
          (*(char *)(param_1 + 0x9bc) == '\0')) && (*(char *)(param_1 + 0x7e1) == '\0')) {
        *(undefined1 *)(param_1 + 0x7e3) = 1;
        FUN_1403a0090(param_1);
      }
    }
    cocos2d::CCPoint::operator=((CCPoint *)(param_1 + 0xa2c),(CCPoint *)(param_1 + 0xa00));
    *(undefined1 *)(param_1 + 0x9c1) = 0;
    if (*(char *)(param_1 + 0x9bb) != '\0') {
      *(undefined2 *)(param_1 + 0x728) = 0;
      *(undefined1 *)(param_1 + 0x668) = 0;
      *(undefined4 *)(param_1 + 0x720) = 0;
      FUN_14038d480(param_1);
      return;
    }
    if (*(char *)(param_1 + 0x9c4) != '\0') {
      FUN_14039add0(param_1);
    }
  }
  return;
}

