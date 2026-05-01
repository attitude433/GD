// Function: FUN_1403916e0
// Original target: PlayerObject_postCollideTeardown_3916e0 @ 0x3916e0
// Ghidra entry: 1403916e0
// Signature: undefined FUN_1403916e0(void)


void FUN_1403916e0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *_Memory;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_res8 [2];
  CCPoint local_res10 [8];
  undefined1 local_38 [16];
  
  uVar7 = *(uint *)((longlong)param_2 + 0x39c);
  uVar5 = *(ulonglong *)(param_1 + 0x6d0) &
          ((((ulonglong)(uVar7 >> 8) & 0xff ^
            ((ulonglong)uVar7 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
           (ulonglong)(uVar7 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar7 >> 0x18)) *
          0x100000001b3;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x6b8) + 8 + uVar5 * 0x10);
  if (lVar3 == *(longlong *)(param_1 + 0x6a8)) {
LAB_140391780:
    lVar3 = 0;
  }
  else {
    uVar8 = *(uint *)(lVar3 + 0x10);
    while (uVar7 != uVar8) {
      if (lVar3 == *(longlong *)(*(longlong *)(param_1 + 0x6b8) + uVar5 * 0x10)) goto LAB_140391780;
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar8 = *(uint *)(lVar3 + 0x10);
    }
  }
  if (lVar3 != 0) {
    (**(code **)(*param_2 + 0x648))(param_2,CONCAT71((uint7)(uint3)(uVar7 >> 8),1));
    local_res8[0] = *(undefined4 *)((longlong)param_2 + 0x39c);
    plVar4 = (longlong *)FUN_1403a43c0(param_1 + 0x6a0,local_38,local_res8);
    lVar3 = *plVar4;
    uVar1 = *(undefined8 *)(lVar3 + 0x20);
    uVar7 = (uint)DAT_1406243e0;
    uVar8 = (uint)((ulonglong)DAT_1406243e0 >> 0x20);
    if ((char)param_2[0x59] == '\0') {
      param_2[0x77] =
           (longlong)
           ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar3 + 0x18) >> 0x20) ^ uVar8,
                             (uint)*(undefined8 *)(lVar3 + 0x18) ^ uVar7) + (double)param_2[0x77]);
    }
    param_2[0x78] =
         (longlong)
         ((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar8,(uint)uVar1 ^ uVar7) +
         (double)param_2[0x78]);
    cocos2d::CCPoint::CCPoint
              (local_res10,
               (float)(double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar3 + 0x18) >> 0x20) ^
                                       uVar8,(uint)*(undefined8 *)(lVar3 + 0x18) ^ uVar7),
               (float)(double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar3 + 0x20) >> 0x20) ^
                                       uVar8,(uint)*(undefined8 *)(lVar3 + 0x20) ^ uVar7));
    cocos2d::CCPoint::operator+((CCPoint *)(param_2 + 0x9a),(CCPoint *)local_res8);
    cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x9a),(CCPoint *)local_res8);
    *(float *)((longlong)param_2 + 0x3d4) = *(float *)((longlong)param_2 + 0x3d4) + DAT_140623294;
    *(float *)(param_2 + 0x7b) = *(float *)(param_2 + 0x7b) + DAT_140623294;
    (**(code **)(*param_2 + 0x520))(param_2,0);
    iVar2 = (**(code **)(*param_2 + 0x660))(param_2);
    if (iVar2 == 0x19) {
      FUN_14019c2c0(param_2);
    }
    uVar7 = *(uint *)((longlong)param_2 + 0x39c);
    lVar3 = *(longlong *)(param_1 + 0x6b8);
    uVar6 = ((((ulonglong)(uVar7 >> 8 & 0xff) ^
              ((ulonglong)(uVar7 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
             (ulonglong)(uVar7 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar7 >> 0x18)) *
            0x100000001b3;
    uVar5 = *(ulonglong *)(param_1 + 0x6d0) & uVar6;
    plVar4 = *(longlong **)(lVar3 + 8 + uVar5 * 0x10);
    _Memory = (longlong *)0x0;
    if (plVar4 != *(longlong **)(param_1 + 0x6a8)) {
      uVar8 = *(uint *)(plVar4 + 2);
      while ((_Memory = plVar4, uVar7 != uVar8 &&
             (_Memory = (longlong *)0x0, plVar4 != *(longlong **)(lVar3 + uVar5 * 0x10)))) {
        plVar4 = (longlong *)plVar4[1];
        uVar8 = *(uint *)(plVar4 + 2);
      }
    }
    if (_Memory != (longlong *)0x0) {
      uVar6 = *(ulonglong *)(param_1 + 0x6d0) & uVar6;
      plVar4 = *(longlong **)(lVar3 + uVar6 * 0x10);
      if (*(longlong **)(lVar3 + 8 + uVar6 * 0x10) == _Memory) {
        if (plVar4 == _Memory) {
          uVar1 = *(undefined8 *)(param_1 + 0x6a8);
          *(undefined8 *)(lVar3 + uVar6 * 0x10) = uVar1;
          *(undefined8 *)(lVar3 + 8 + uVar6 * 0x10) = uVar1;
        }
        else {
          *(longlong *)(lVar3 + 8 + uVar6 * 0x10) = _Memory[1];
        }
      }
      else if (plVar4 == _Memory) {
        *(longlong *)(lVar3 + uVar6 * 0x10) = *_Memory;
      }
      lVar3 = *_Memory;
      *(longlong *)(param_1 + 0x6b0) = *(longlong *)(param_1 + 0x6b0) + -1;
      *(longlong *)_Memory[1] = lVar3;
      *(longlong *)(lVar3 + 8) = _Memory[1];
      free(_Memory);
    }
  }
  return;
}

