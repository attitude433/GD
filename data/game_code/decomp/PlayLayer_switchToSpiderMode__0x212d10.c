// PlayLayer_switchToSpiderMode @ 0x212d10


void FUN_140212d10(longlong param_1,longlong param_2,longlong *param_3)

{
  CCPoint *pCVar1;
  longlong *plVar2;
  undefined8 uVar3;
  CCPoint local_res8 [8];
  
  FUN_14039a4f0(param_2,0,0);
  FUN_14039a820(param_2,0,0);
  FUN_14039b570(param_2,0,0);
  FUN_14039af90(param_2,0,0);
  FUN_14039b6f0(param_2,0,0);
  FUN_14039ab20(param_2,0,0);
  if (param_3 != (longlong *)0x0) {
    pCVar1 = (CCPoint *)(**(code **)(*param_3 + 200))(param_3);
    pCVar1 = (CCPoint *)cocos2d::CCPoint::CCPoint(local_res8,pCVar1);
    cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0xa00),pCVar1);
    *(longlong **)(param_2 + 0xa80) = param_3;
  }
  if ((((*(char *)(param_1 + 0x422) == '\0') ||
       (plVar2 = *(longlong **)(param_1 + 0x408), plVar2 == (longlong *)0x0)) &&
      (plVar2 = param_3, param_3 == (longlong *)0x0)) ||
     (*(longlong **)(param_1 + 0x400) = plVar2, *(char *)((longlong)plVar2 + 0x41c) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_14039ba70(param_2,1,uVar3);
  return;
}

