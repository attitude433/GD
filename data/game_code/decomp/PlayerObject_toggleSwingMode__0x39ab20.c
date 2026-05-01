// PlayerObject_toggleSwingMode @ 0x39ab20
// Function: FUN_14039ab20


void FUN_14039ab20(longlong *param_1,char param_2,char param_3)

{
  undefined8 local_res8;
  undefined2 local_res10;
  
  if (*(char *)((longlong)param_1 + 0x9c4) != param_2) {
    param_1[0xfb] = param_1[0x154];
    *(char *)((longlong)param_1 + 0x9c4) = param_2;
    if (param_2 != '\0') {
      FUN_14039be30(param_1,0x29);
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
    if (*(char *)((longlong)param_1 + 0x9c4) == '\0') {
      FUN_14039b2e0(param_1);
      FUN_14039dc50(param_1,(int)param_1[0xc4]);
      (**(code **)(*param_1 + 0x150))(param_1);
      FUN_14039af00(param_1);
    }
    else {
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_res8 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      FUN_14039e7b0(param_1,(int)DAT_1406c2ed8[99] - *(int *)((longlong)DAT_1406c2ed8 + 0x31c));
      if (param_3 == '\0') {
        local_res10 = 0xc8ff;
        local_res8 = CONCAT53(local_res8._3_5_,0xc8ff);
        FUN_140397760(param_1,&local_res8,DAT_1406231e0);
      }
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
      FUN_1403a0090(param_1);
      (**(code **)(*(longlong *)param_1[0xf0] + 0x140))((longlong *)param_1[0xf0],1);
      FUN_1403a3e80(param_1[0xf0]);
      (**(code **)(*(longlong *)param_1[0xf1] + 0xa0))();
      (**(code **)(*(longlong *)param_1[0xf2] + 0xa0))();
      (**(code **)(*(longlong *)param_1[0xf1] + 0x140))((longlong *)param_1[0xf1],1);
      (**(code **)(*(longlong *)param_1[0xf2] + 0x140))((longlong *)param_1[0xf2],1);
      cocos2d::CCParticleSystem::resetSystem((CCParticleSystem *)param_1[0x11e]);
      cocos2d::CCParticleSystem::resetSystem((CCParticleSystem *)param_1[0x11f]);
      cocos2d::CCParticleSystem::stopSystem((CCParticleSystem *)param_1[0x11e]);
      cocos2d::CCParticleSystem::stopSystem((CCParticleSystem *)param_1[0x11f]);
      FUN_14039add0(param_1);
    }
    if (param_2 != '\0') {
      FUN_140398860(param_1);
      FUN_1403961c0(param_1);
    }
  }
  return;
}

