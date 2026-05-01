// EditorUI_updateGridNodeSize @ 0xe2c00
// Body: 336 bytes


void FUN_1400e2c00(longlong param_1)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  CCObject *pCVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  if (*(int *)(param_1 + 0x4f8) == 2) {
    uVar7 = *(undefined4 *)(param_1 + 0x4d8);
    uVar6 = FUN_140348cb0();
    uVar7 = FUN_140370ba0(uVar6,uVar7);
  }
  else if (*(longlong *)(param_1 + 0x538) == 0) {
    uVar3 = cocos2d::CCArray::count(*(CCArray **)(param_1 + 0x340));
    fVar2 = DAT_1406236f0;
    if (uVar3 == 0) {
      uVar7 = FUN_140348cb0();
      uVar7 = FUN_140370ba0(uVar7,0xffffffff);
    }
    else {
      uVar7 = 0;
      uVar5 = 0;
      uVar3 = cocos2d::CCArray::count(*(CCArray **)(param_1 + 0x340));
      fVar10 = fVar2;
      if (uVar3 != 0) {
        do {
          pCVar4 = cocos2d::CCArray::objectAtIndex(*(CCArray **)(param_1 + 0x340),uVar5);
          uVar8 = FUN_140348cb0();
          uVar6 = *(undefined4 *)(pCVar4 + 0x40c);
          fVar9 = (float)FUN_140370ba0(uVar8,uVar6);
          if ((fVar10 != fVar2) && (bVar1 = fVar10 != fVar9, fVar9 = fVar10, uVar6 = uVar7, bVar1))
          {
            uVar7 = 0xffffffff;
            break;
          }
          uVar7 = uVar6;
          uVar5 = uVar5 + 1;
          uVar3 = cocos2d::CCArray::count(*(CCArray **)(param_1 + 0x340));
          fVar10 = fVar9;
        } while (uVar5 < uVar3);
      }
      uVar6 = FUN_140348cb0();
      uVar7 = FUN_140370ba0(uVar6,uVar7);
    }
  }
  else {
    uVar7 = *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x40c);
    uVar6 = FUN_140348cb0();
    uVar7 = FUN_140370ba0(uVar6,uVar7);
  }
  *(undefined4 *)(param_1 + 0x278) = uVar7;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x500) + 0x38c8) + 0x27c) = uVar7;
  return;
}

