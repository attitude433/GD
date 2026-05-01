// GJBaseGameLayer_largeFunc_2168d0 @ 0x2168d0


void FUN_1402168d0(longlong param_1,longlong param_2,char param_3,longlong param_4,char param_5)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  CCObject *this;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 local_res18 [2];
  
  if (*(char *)(param_1 + 0x422) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x422) = param_3;
  if ((param_3 == '\0') || (*(char *)(*(longlong *)(param_1 + 0xdb0) + 0x154) == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  lVar5 = *(longlong *)(param_1 + 0x3540);
  if (*(char *)(lVar5 + 0x270) != cVar3) {
    *(char *)(lVar5 + 0x270) = cVar3;
    FUN_1404cd610(lVar5,*(undefined1 *)(lVar5 + 0x254));
  }
  plVar11 = (longlong *)(param_1 + 0xda8);
  *(undefined1 *)(*(longlong *)(param_1 + 0xda0) + 0xa99) = *(undefined1 *)(param_1 + 0x422);
  *(undefined1 *)(*plVar11 + 0xa99) = *(undefined1 *)(param_1 + 0x422);
  if (*(char *)(param_1 + 0x422) != '\0') {
    (**(code **)(*(longlong *)*plVar11 + 0x460))();
    lVar5 = (**(code **)(*(longlong *)*plVar11 + 0x1e8))();
    if (lVar5 == 0) {
      plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xda0) + 0x1e8))();
      (**(code **)(*plVar6 + 0x1b8))(plVar6,*plVar11,0x3b);
      if (*(char *)(param_1 + 0x309c) == '\0') {
        FUN_140388670(*plVar11);
      }
    }
    plVar11 = (longlong *)*plVar11;
    cVar3 = *(char *)(param_1 + 0x860);
    lVar5 = *(longlong *)(param_1 + 0xda0);
    (**(code **)(*plVar11 + 0x140))(plVar11,1);
    (**(code **)(plVar11[0x28] + 0x28))(plVar11 + 0x28,0xff);
    FUN_1403a04a0(plVar11,lVar5);
    if (cVar3 == '\0') {
      FUN_14039a1d0(plVar11,*(char *)(lVar5 + 0x9bf) == '\0',1);
      uVar10 = CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar5 + 0x9a0) >> 0x20) ^
                        DAT_1406243e0._4_4_,
                        (uint)*(undefined8 *)(lVar5 + 0x9a0) ^ (uint)DAT_1406243e0);
    }
    else {
      FUN_14039a1d0(plVar11,*(char *)(lVar5 + 0x9bf),1);
      uVar10 = *(undefined8 *)(lVar5 + 0x9a0);
    }
    FUN_140388d10(plVar11,uVar10);
    *(undefined1 *)((longlong)plVar11 + 0x9c1) = 0;
    *(undefined1 *)((longlong)plVar11 + 0xa0c) = 0;
    FUN_14038b440(plVar11,*(char *)(lVar5 + 0x72b) == '\0');
    if (*(char *)((longlong)plVar11 + 0x9bc) != '\0') {
      FUN_1403a0680(plVar11);
    }
    if (*(char *)(*(longlong *)(param_1 + 0xdb0) + 0x154) != '\0') {
      lVar5 = *(longlong *)(param_1 + 0xda8);
      if (*(char *)(lVar5 + 0xbc8) == '\0') {
        local_res18[0] = 1;
        puVar7 = (undefined1 *)FUN_1400cdbf0(lVar5 + 3000,local_res18);
        *puVar7 = 0;
      }
      if (*(char *)(lVar5 + 0xa2b) == '\0') {
        if (*(char *)(lVar5 + 0x985) != '\0') {
          FUN_1403a0680(lVar5);
        }
        *(undefined2 *)(lVar5 + 0x985) = 0;
        *(undefined1 *)(lVar5 + 0x99c) = 1;
        if (*(char *)(lVar5 + 0x9e4) != '\0') {
          FUN_140396650(lVar5);
        }
      }
    }
    if ((*(char *)(param_1 + 0x309c) == '\0') && (param_5 == '\0')) {
      FUN_140397b70(*(undefined8 *)(param_1 + 0xda0));
      FUN_140397b70(*(undefined8 *)(param_1 + 0xda8));
    }
    if (param_2 != 0) {
      *(longlong *)(param_1 + 0x408) = param_2;
    }
    FUN_140212ef0(param_1,param_4,param_2);
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0xda0);
  if ((*(char *)(lVar5 + 0x9bc) != '\0') &&
     ((param_4 == 0 || (*(int *)(param_4 + 0x39c) != *(int *)(lVar5 + 0x39c))))) {
    FUN_140398660();
    lVar5 = *(longlong *)(param_1 + 0xda0);
  }
  if (*(char *)(param_1 + 0x309c) == '\0') {
    if (param_4 == 0) goto LAB_140216bfc;
    lVar8 = *(longlong *)(param_1 + 0xda8);
    if (*(int *)(param_4 + 0x39c) == *(int *)(lVar8 + 0x39c)) {
      lVar8 = lVar5;
    }
    FUN_140216e80(param_1,lVar8);
    lVar5 = *(longlong *)(param_1 + 0xda0);
  }
  else if (param_4 == 0) goto LAB_140216bfc;
  if (*(int *)(param_4 + 0x39c) == *(int *)(*(longlong *)(param_1 + 0xda8) + 0x39c)) {
    FUN_1403a04a0(lVar5);
  }
LAB_140216bfc:
  plVar11 = (longlong *)(param_1 + 0xda8);
  (**(code **)(*(longlong *)*plVar11 + 0x1f8))((longlong *)*plVar11,1);
  (**(code **)(*(longlong *)(*plVar11 + 0x140) + 0x28))((longlong *)(*plVar11 + 0x140),0);
  FUN_14039f100(*plVar11);
  lVar5 = *plVar11;
  uVar9 = 0;
  uVar4 = cocos2d::CCArray::count(*(CCArray **)(lVar5 + 0x690));
  if (uVar4 != 0) {
    do {
      this = cocos2d::CCArray::objectAtIndex(*(CCArray **)(lVar5 + 0x690),uVar9);
      cocos2d::CCParticleSystem::resetSystem((CCParticleSystem *)this);
      cocos2d::CCParticleSystem::stopSystem((CCParticleSystem *)this);
      (**(code **)(*(longlong *)this + 0x1f8))(this,0);
      uVar9 = uVar9 + 1;
      uVar4 = cocos2d::CCArray::count(*(CCArray **)(lVar5 + 0x690));
    } while (uVar9 < uVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0xda8);
  cocos2d::CCMotionStreak::stopStroke(*(CCMotionStreak **)(lVar5 + 0x7a0));
  if (*(char *)(lVar5 + 0x978) != '\0') {
    *(undefined1 *)(lVar5 + 0x978) = 0;
    uVar13 = DAT_140622b38;
    if (*(char *)(lVar5 + 0x7e4) != '\0') {
      uVar13 = DAT_140622a74;
    }
    FUN_1403a0190(lVar5,uVar13);
  }
  if (*(char *)(param_1 + 0x309c) == '\0') {
    local_res18[0] = CONCAT13(local_res18[0]._3_1_,0x64ff00);
    FUN_140397760(*(undefined8 *)(param_1 + 0xda0),local_res18,DAT_1406231e0);
  }
  *(undefined8 *)(param_1 + 0x408) = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x4e8) == 1)) {
    *(undefined1 *)(param_1 + 0x311) = *(undefined1 *)(param_2 + 0x6e4);
    *(undefined1 *)(param_1 + 0x312) = *(undefined1 *)(param_2 + 0x6f0);
    fVar2 = DAT_1406231b0;
    fVar1 = DAT_140622c24;
    if (*(char *)(param_2 + 0x6e5) != '\0') {
      fVar12 = *(float *)(param_2 + 0x6e8);
      *(float *)(param_1 + 0x2d0) = fVar12;
      if (fVar12 <= fVar1) {
        fVar12 = fVar1;
      }
      fVar14 = *(float *)(param_2 + 0x6ec);
      if (fVar2 <= fVar12) {
        fVar12 = fVar2;
      }
      *(float *)(param_1 + 0x2d0) = fVar12;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (fVar1 <= fVar14) {
        fVar14 = fVar1;
      }
      *(float *)(param_1 + 0x2cc) = fVar14;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xda0);
  if ((((*(char *)(lVar5 + 0x9b9) == '\0') && (*(char *)(lVar5 + 0x9ba) == '\0')) &&
      (*(char *)(lVar5 + 0x9bc) == '\0')) && (*(char *)(lVar5 + 0x9c4) == '\0')) {
    if (*(char *)(lVar5 + 0x9bb) == '\0') {
      uVar10 = 6;
      if (*(char *)(lVar5 + 0x9be) != '\0') {
        uVar10 = 0x21;
      }
    }
    else {
      uVar10 = 0x10;
    }
  }
  else {
    uVar10 = 5;
  }
  FUN_140213180(param_1,param_4,uVar10,0);
  if ((*(char *)(*(longlong *)(param_1 + 0xda0) + 0x9bc) != '\0') &&
     ((param_4 == 0 ||
      (*(int *)(param_4 + 0x39c) != *(int *)(*(longlong *)(param_1 + 0xda0) + 0x39c))))) {
    FUN_14038b5e0();
    FUN_1403a0680(*(undefined8 *)(param_1 + 0xda0));
    if (*(char *)((longlong)*(longlong **)(param_1 + 0xda8) + 0x9bc) != '\0') {
      plVar11 = *(longlong **)(param_1 + 0xda0);
      lVar5 = *plVar11;
      uVar10 = (**(code **)(**(longlong **)(param_1 + 0xda8) + 0x158))();
      (**(code **)(lVar5 + 0x150))(plVar11,uVar10);
    }
  }
  return;
}

