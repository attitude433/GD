// LevelEditorLayer_updateColor @ 0x2dda10
// Body: 363 bytes


undefined8
FUN_1402dda10(longlong param_1,undefined2 *param_2,undefined8 param_3,uint param_4,char param_5,
             undefined4 param_6,undefined8 param_7,undefined4 param_8,undefined1 param_9,
             longlong param_10,undefined4 param_11,undefined4 param_12)

{
  undefined8 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if (0x44d < (int)param_4) {
    param_4 = 0x44d;
  }
  if (param_10 != 0) {
    if (*(char *)(param_10 + 0x5dd) == '\0') {
      if (*(char *)(param_10 + 0x5de) == '\0') goto LAB_1402dda8f;
      uVar2 = *(undefined2 *)(*(longlong *)(param_1 + 0xda0) + 0xa8d);
      uVar4 = *(undefined1 *)(*(longlong *)(param_1 + 0xda0) + 0xa8f);
    }
    else {
      uVar2 = *(undefined2 *)(*(longlong *)(param_1 + 0xda0) + 0xa8a);
      uVar4 = *(undefined1 *)(*(longlong *)(param_1 + 0xda0) + 0xa8c);
    }
    *param_2 = uVar2;
    *(undefined1 *)(param_2 + 1) = uVar4;
  }
LAB_1402dda8f:
  uVar1 = FUN_140223970(param_1,param_2,param_10,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11,param_12);
  if (*(int *)(param_1 + 0x880) != 0) {
    uVar7 = param_4 & 0x1f;
    uVar6 = (ulonglong)(longlong)(int)param_4 >> 5;
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x3a10) + uVar6 * 4);
    if ((bool)param_5 == ((uVar5 & 1 << (sbyte)uVar7) != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x3a30);
      uVar5 = *(uint *)(lVar3 + uVar6 * 4) & ~(1 << uVar7);
    }
    else {
      if (param_5 == '\0') {
        uVar5 = uVar5 & ~(1 << uVar7);
      }
      else {
        uVar5 = uVar5 | 1 << uVar7;
      }
      *(uint *)(*(longlong *)(param_1 + 0x3a10) + uVar6 * 4) = uVar5;
      lVar3 = *(longlong *)(param_1 + 0x3a30);
      uVar5 = *(uint *)(lVar3 + uVar6 * 4) | 1 << uVar7;
    }
    *(uint *)(lVar3 + uVar6 * 4) = uVar5;
  }
  return uVar1;
}

