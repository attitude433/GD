
void FUN_1402361a0(longlong param_1,float param_2)

{
  undefined4 uVar1;
  CCDirector *pCVar2;
  longlong lVar3;
  
  if ((*(float *)(param_1 + 0x338) != param_2) && (*(char *)(param_1 + 0x3258) != '\0')) {
    *(float *)(param_1 + 0x338) = param_2;
    pCVar2 = cocos2d::CCDirector::sharedDirector();
    uVar1 = *(undefined4 *)(param_1 + 0x338);
    lVar3 = (**(code **)(*(longlong *)pCVar2 + 0x70))(pCVar2);
    *(undefined4 *)(lVar3 + 0x38) = uVar1;
  }
  return;
}

