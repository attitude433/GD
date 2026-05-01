// Function: FUN_14038f140
// Original target: REAL_collidedWithObjectInternal @ 0x38f140
// Ghidra entry: 14038f140
// Signature: undefined FUN_14038f140(void)


undefined1
FUN_14038f140(longlong *param_1,undefined8 param_2,undefined8 param_3,CCRect *param_4,
             undefined1 param_5,undefined1 param_6,char param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  CCPoint *pCVar4;
  undefined8 uVar5;
  float local_res8;
  float local_resc;
  float local_48;
  float local_44;
  CCPoint local_40 [8];
  CCRect local_38 [32];
  
  pCVar4 = (CCPoint *)(**(code **)(*param_1 + 200))();
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_res8,pCVar4);
  FUN_1403913f0(param_1,param_3);
  puVar1 = (undefined8 *)param_1[0xdd];
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    FUN_1403913f0(param_1,puVar2[3]);
  }
  uVar3 = 0;
  if (param_7 == '\0') {
    uVar5 = cocos2d::CCRect::CCRect(local_38,param_4);
    uVar3 = FUN_140391a70(param_1,param_2,param_3,uVar5,param_5);
  }
  else {
    FUN_14038f810(param_1,param_2,param_3,param_6);
  }
  pCVar4 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,pCVar4);
  cocos2d::CCPoint::CCPoint
            (local_40,(local_44 - local_resc) + local_res8,local_resc - (local_48 - local_res8));
  (**(code **)(*param_1 + 0xb8))(param_1,local_40);
  FUN_1403916e0(param_1,param_3);
  puVar1 = (undefined8 *)param_1[0xdd];
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    FUN_1403916e0(param_1,puVar2[3]);
  }
  return uVar3;
}

