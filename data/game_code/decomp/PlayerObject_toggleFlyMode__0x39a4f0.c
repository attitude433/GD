// PlayerObject_toggleFlyMode @ 0x39a4f0
// Function: FUN_14039a4f0


void FUN_14039a4f0(longlong *param_1,char param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 local_res8;
  undefined2 local_res10;
  
  if (*(char *)((longlong)param_1 + 0x9b9) != param_2) {
    param_1[0xfb] = param_1[0x154];
    *(char *)((longlong)param_1 + 0x9b9) = param_2;
    if (param_2 != '\0') {
      FUN_14039be30(param_1,5);
    }
    *(undefined2 *)(param_1 + 0xe5) = 0;
    *(undefined1 *)(param_1 + 0xcd) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    param_1[0x134] = (longlong)((double)param_1[0x134] * DAT_140622d98);
    (**(code **)(*param_1 + 0x150))(param_1,0);
    *(undefined1 *)((longlong)param_1 + 0xa0c) = 0;
    *(undefined1 *)((longlong)param_1 + 0x9c1) = 0;
    *(undefined1 *)((longlong)param_1 + 0x7e3) = 0;
    FUN_1403a3250(param_1);
    if (*(char *)((longlong)param_1 + 0x9b9) == '\0') {
      FUN_14039b2e0(param_1);
    }
    else {
      FUN_14038d060();
      if ((char)param_1[0x16e] == '\0') {
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          local_res8 = FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
        }
        FUN_14039de80(param_1,(int)DAT_1406c2ed8[0x5a] - *(int *)((longlong)DAT_1406c2ed8 + 0x2d4));
        (**(code **)(*(longlong *)param_1[0xe7] + 0xa0))();
        lVar1 = *(longlong *)param_1[0xe7];
        uVar3 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,0.0,DAT_140623010);
        (**(code **)(lVar1 + 0xb8))(param_1[0xe7],uVar3);
        fVar4 = DAT_1406237c0;
      }
      else {
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          local_res8 = FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
        }
        FUN_14039e0b0(param_1,*(int *)((longlong)DAT_1406c2ed8 + 0x36c) - (int)DAT_1406c2ed8[0x6e]);
        (**(code **)(*(longlong *)param_1[0xe7] + 0xa0))((longlong *)param_1[0xe7],DAT_140622b38);
        lVar1 = *(longlong *)param_1[0xe7];
        uVar3 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,DAT_140623028,DAT_140622ff0);
        (**(code **)(lVar1 + 0xb8))(param_1[0xe7],uVar3);
        fVar4 = 0.0;
      }
      lVar1 = *(longlong *)param_1[0xeb];
      uVar3 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,0.0,fVar4);
      (**(code **)(lVar1 + 0xb8))(param_1[0xeb],uVar3);
      (**(code **)(*(longlong *)param_1[0xeb] + 0x140))((longlong *)param_1[0xeb],1);
      FUN_1403a02a0(param_1);
      if (*(char *)((longlong)param_1 + 0x72b) == '\0') {
        cocos2d::CCParticleSystem::resetSystem((CCParticleSystem *)param_1[0x118]);
        cocos2d::CCParticleSystem::resetSystem((CCParticleSystem *)param_1[0x119]);
      }
      cocos2d::CCParticleSystem::stopSystem((CCParticleSystem *)param_1[0x119]);
      *(undefined1 *)((longlong)param_1 + 0x7e7) = 0;
      if (*(char *)((longlong)param_1 + 0x7e6) != '\0') {
        cocos2d::CCParticleSystem::stopSystem((CCParticleSystem *)param_1[0x117]);
      }
      *(undefined1 *)((longlong)param_1 + 0x7e6) = 0;
      if (param_3 == '\0') {
        local_res10 = 0xff;
        local_res8 = CONCAT53(local_res8._3_5_,0xff00ff);
        FUN_140397760(param_1,&local_res8,DAT_1406231e0);
      }
      FUN_1403a0090(param_1);
      FUN_1403a0220(param_1);
      plVar2 = (longlong *)param_1[0xf5];
      if (((plVar2 != (longlong *)0x0) && ((char)param_1[0x16e] == '\0')) &&
         (*(char *)((longlong)param_1 + 0x72b) == '\0')) {
        (**(code **)(*plVar2 + 0x140))(plVar2,1);
      }
    }
    if (param_2 != '\0') {
      FUN_140398860(param_1);
      FUN_1403961c0(param_1);
    }
  }
  return;
}

