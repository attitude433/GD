// FUN_14039af90 @ 0x39af90


void FUN_14039af90(longlong *param_1,char param_2,char param_3)

{
  CCDrawNode *this;
  longlong *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 local_res8;
  undefined2 local_res10;
  
  if (*(char *)((longlong)param_1 + 0x9bc) != param_2) {
    param_1[0xfb] = param_1[0x154];
    *(char *)((longlong)param_1 + 0x9bc) = param_2;
    if (param_2 != '\0') {
      FUN_14039be30(param_1,0x1a);
    }
    *(undefined2 *)(param_1 + 0xe5) = 0;
    *(undefined1 *)(param_1 + 0xcd) = 0;
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    param_1[0x134] = (longlong)((double)param_1[0x134] * DAT_140622d98);
    (**(code **)(*param_1 + 0x150))(param_1,0);
    *(undefined1 *)((longlong)param_1 + 0xa0c) = 0;
    *(undefined1 *)((longlong)param_1 + 0x9c1) = 0;
    *(undefined1 *)((longlong)param_1 + 0x7e3) = 0;
    FUN_1403a3250(param_1);
    fVar4 = DAT_140622c24;
    if (*(char *)((longlong)param_1 + 0x9bc) == '\0') {
      if ((*(float *)(param_1 + 0x13e) == DAT_140622c24) || ((char)param_1[0x157] == '\0')) {
        uVar3 = (undefined4)param_1[0xc4];
      }
      FUN_14039dc50(param_1,uVar3);
      FUN_14039b2e0(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x156) = 0x41a00000;
      *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x41200000;
      *(undefined4 *)(param_1 + 0x60) = 0x41200000;
      if (DAT_1406c2ed8 == (longlong *)0x0) {
        local_res8 = FUN_1404d0770(0x668);
        DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
        (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
      }
      FUN_14039e9e0(param_1,*(int *)((longlong)DAT_1406c2ed8 + 0x2f4) - (int)DAT_1406c2ed8[0x5f]);
      if (param_3 == '\0') {
        local_res10 = 0xc8ff;
        local_res8 = CONCAT53(local_res8._3_5_,0xc8ff);
        FUN_140397760(param_1,&local_res8,DAT_1406231e0);
      }
      FUN_1403a0090(param_1);
      FUN_1403a0220(param_1);
      if (*(char *)((longlong)param_1 + 0x7e6) != '\0') {
        cocos2d::CCParticleSystem::stopSystem((CCParticleSystem *)param_1[0x117]);
      }
      *(undefined1 *)((longlong)param_1 + 0x7e6) = 0;
      puVar2 = &DAT_140529ba8;
      if (*(char *)((longlong)param_1 + 0x829) == '\0') {
        puVar2 = &DAT_140529bac;
      }
      (*(code *)**(undefined8 **)(param_1[0xf4] + 0x140))
                ((undefined8 *)(param_1[0xf4] + 0x140),puVar2);
      this = (CCDrawNode *)param_1[0xf6];
      cocos2d::CCDrawNode::clear(this);
      cocos2d::CCArray::removeAllObjects(*(CCArray **)(this + 0x1a0));
      FUN_1403a0680(param_1);
      if ((*(char *)((longlong)param_1 + 0x7e4) != '\0') &&
         (*(char *)((longlong)param_1 + 0x7e1) == '\0')) {
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          local_res8 = FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
        }
        if ((*(char *)(DAT_1406c2ed8[0x41] + 0x3225) == '\0') && (param_3 == '\0')) {
          plVar1 = (longlong *)FUN_140042870(DAT_14062307c,DAT_140623210,DAT_140622ad0,0,1);
          *(undefined2 *)((longlong)plVar1 + 0x154) = *(undefined2 *)((longlong)param_1 + 0xa8a);
          *(undefined1 *)((longlong)plVar1 + 0x156) = *(undefined1 *)((longlong)param_1 + 0xa8c);
          (**(code **)(*plVar1 + 0xb8))(plVar1,param_1 + 0x140);
          *(undefined4 *)(plVar1 + 0x2c) = 1;
          *(undefined4 *)((longlong)plVar1 + 0x164) = 4;
          (**(code **)(*(longlong *)param_1[0x185] + 0x1b8))((longlong *)param_1[0x185],plVar1,0);
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0x9bc) != '\0') {
      fVar4 = DAT_140622ba4;
    }
    cocos2d::CCMotionStreak::setStroke
              ((CCMotionStreak *)param_1[0xf4],
               *(float *)((longlong)param_1 + 0x924) * *(float *)(param_1 + 0x13e) * fVar4);
    if (param_2 != '\0') {
      FUN_140398860(param_1);
      FUN_1403961c0(param_1);
    }
  }
  return;
}

