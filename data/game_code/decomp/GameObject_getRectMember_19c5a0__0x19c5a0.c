// Function: FUN_14019c5a0
// Original target: GameObject_getRectMember_19c5a0 @ 0x19c5a0
// Ghidra entry: 14019c5a0
// Signature: undefined FUN_14019c5a0(void)


CCPoint * FUN_14019c5a0(longlong *param_1,CCPoint *param_2)

{
  undefined4 uVar1;
  float fVar2;
  CCRect *pCVar3;
  float fVar4;
  CCRect local_18 [8];
  float local_10;
  float local_c;
  
  cocos2d::CCPoint::CCPoint(param_2,(CCPoint *)&DAT_1406c1c08);
  pCVar3 = (CCRect *)(**(code **)(*param_1 + 0x490))(param_1);
  cocos2d::CCRect::CCRect(local_18,pCVar3);
  fVar2 = DAT_140623614;
  fVar4 = local_10;
  if ((char)param_1[0x72] != '\0') {
    fVar4 = local_c;
    local_c = local_10;
  }
  if ((int)(*(float *)(param_1 + 0x91) * DAT_140623614) !=
      (int)(*(float *)((longlong)param_1 + 0x3e4) * DAT_140623614)) {
    *(float *)param_2 =
         (fVar4 - (fVar4 / *(float *)(param_1 + 0x91)) * *(float *)((longlong)param_1 + 0x3e4)) *
         DAT_140622b08;
  }
  if ((int)(*(float *)((longlong)param_1 + 0x48c) * fVar2) !=
      (int)(*(float *)(param_1 + 0x7d) * fVar2)) {
    *(float *)(param_2 + 4) =
         (local_c - (local_c / *(float *)((longlong)param_1 + 0x48c)) * *(float *)(param_1 + 0x7d))
         * DAT_140622b08;
  }
  if ((char)param_1[0x72] != '\0') {
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)param_2;
    *(undefined4 *)param_2 = uVar1;
  }
  return param_2;
}

