
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14039a820(longlong *param_1,char param_2,char param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined2 local_38;
  char local_36;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1406ba040 ^ (ulonglong)auStack_58;
  if (*(char *)((longlong)param_1 + 0x9ba) != param_2) {
    param_1[0xfb] = param_1[0x154];
    *(char *)((longlong)param_1 + 0x9ba) = param_2;
    if (param_2 != '\0') {
      FUN_14039be30(param_1,0x13);
    }
    *(undefined2 *)(param_1 + 0xe5) = 0;
    *(undefined1 *)(param_1 + 0xcd) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    param_1[0x134] = (longlong)((double)param_1[0x134] * DAT_140622d98);
    (**(code **)(*param_1 + 0x150))(param_1);
    *(undefined1 *)((longlong)param_1 + 0xa0c) = 0;
    *(undefined1 *)((longlong)param_1 + 0x9c1) = 0;
    *(undefined1 *)((longlong)param_1 + 0x7e3) = 0;
    FUN_1403a3250(param_1);
    if (*(char *)((longlong)param_1 + 0x9ba) == '\0') {
      FUN_14039b2e0(param_1);
    }
    else {
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_28 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_28);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      FUN_14039e2e0(param_1,(int)DAT_1406c2ed8[0x5d] - *(int *)((longlong)DAT_1406c2ed8 + 0x2ec));
      FUN_14038d060(param_1);
      (**(code **)(*(longlong *)param_1[0xe7] + 0xa0))();
      lVar2 = *(longlong *)param_1[0xe7];
      uVar3 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,0.0,DAT_140623010);
      (**(code **)(lVar2 + 0xb8))(param_1[0xe7],uVar3);
      (**(code **)(*(longlong *)param_1[0xeb] + 0x140))((longlong *)param_1[0xeb],1);
      lVar2 = *(longlong *)param_1[0xeb];
      uVar3 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,0.0,DAT_1406237e0);
      (**(code **)(lVar2 + 0xb8))(param_1[0xeb],uVar3);
      FUN_1403a02a0(param_1);
      uVar1 = *(undefined2 *)((longlong)param_1 + 0xa8d);
      local_20 = (float)(byte)uVar1 / DAT_140623418;
      local_38._1_1_ = (byte)((ushort)uVar1 >> 8);
      local_1c = (float)local_38._1_1_ / DAT_140623418;
      local_18 = (float)*(byte *)((longlong)param_1 + 0xa8f) / DAT_140623418;
      local_14 = 0x3f800000;
      local_38 = uVar1;
      (**(code **)(*(longlong *)param_1[0x118] + 0x538))((longlong *)param_1[0x118],&local_20);
      (**(code **)(*(longlong *)param_1[0x118] + 0x558))((longlong *)param_1[0x118],&local_20);
      if (*(char *)((longlong)param_1 + 0x72b) == '\0') {
        cocos2d::CCParticleSystem::resetSystem((CCParticleSystem *)param_1[0x118]);
      }
      if (*(char *)((longlong)param_1 + 0x7e6) != '\0') {
        cocos2d::CCParticleSystem::stopSystem((CCParticleSystem *)param_1[0x117]);
      }
      *(undefined1 *)((longlong)param_1 + 0x7e6) = 0;
      if (param_3 == '\0') {
        local_38 = 0xc8ff;
        local_36 = param_3;
        FUN_140397760(param_1,&local_38,DAT_1406231e0);
      }
      FUN_1403a0090(param_1);
      FUN_1403a0220(param_1);
      (**(code **)(*(longlong *)param_1[0xed] + 0x140))((longlong *)param_1[0xed],1);
    }
    if (param_2 != '\0') {
      FUN_140398860(param_1);
      FUN_1403961c0(param_1);
    }
  }
  return;
}

