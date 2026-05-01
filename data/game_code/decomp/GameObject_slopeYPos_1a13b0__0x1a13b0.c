// Function: FUN_1401a13b0
// Original target: GameObject_slopeYPos_1a13b0 @ 0x1a13b0
// Ghidra entry: 1401a13b0
// Signature: undefined FUN_1401a13b0(void)


double FUN_1401a13b0(longlong *param_1,float param_2)

{
  CCRect *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  CCRect local_58 [8];
  float local_50;
  float local_4c;
  
  pCVar1 = (CCRect *)(**(code **)(*param_1 + 0x490))();
  cocos2d::CCRect::CCRect(local_58,pCVar1);
  fVar2 = cocos2d::CCRect::getMinX(local_58);
  fVar3 = cocos2d::CCRect::getMaxX(local_58);
  fVar4 = cocos2d::CCRect::getMinY(local_58);
  fVar5 = cocos2d::CCRect::getMaxY(local_58);
  dVar6 = (double)param_2;
  if ((double)fVar2 < dVar6) {
    dVar6 = (dVar6 - (double)fVar3) * (double)(local_4c / local_50);
    if ((char)param_1[0x88] == '\0') {
      dVar6 = (double)fVar4 - dVar6;
    }
    else {
      dVar6 = dVar6 + (double)fVar5;
    }
  }
  else {
    dVar6 = ((double)fVar2 - dVar6) * (double)(local_4c / local_50);
    if ((char)param_1[0x88] == '\0') {
      dVar6 = dVar6 + (double)fVar5;
    }
    else {
      dVar6 = (double)fVar4 - dVar6;
    }
  }
  if ((char)param_1[0x89] != '\0') {
    if ((*(uint *)((longlong)param_1 + 0x444) < 7) &&
       ((0x6aU >> (*(uint *)((longlong)param_1 + 0x444) & 0x1f) & 1) != 0)) {
      dVar6 = dVar6 + DAT_140623748;
    }
    else {
      dVar6 = dVar6 + DAT_140622e90;
    }
  }
  return dVar6;
}

