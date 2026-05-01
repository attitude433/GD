// Function: FUN_1403a3f10
// Original target: PlayerObject_perFrameUpdate_3a3f10 @ 0x3a3f10
// Ghidra entry: 1403a3f10
// Signature: undefined FUN_1403a3f10(void)


void FUN_1403a3f10(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  CCArray *pCVar5;
  CCObject *pCVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar3 = *(longlong *)(param_1 + 0xc30);
  pCVar5 = cocos2d::CCDictionary::allKeys(*(CCDictionary **)(lVar3 + 0x140));
  if (pCVar5 != (CCArray *)0x0) {
    uVar2 = **(uint **)(pCVar5 + 0x38);
    if (uVar2 != 0) {
      plVar7 = *(longlong **)(*(uint **)(pCVar5 + 0x38) + 4);
      plVar1 = plVar7 + ((ulonglong)uVar2 - 1);
      for (; (plVar7 <= plVar1 && (*plVar7 != 0)); plVar7 = plVar7 + 1) {
        lVar8 = (longlong)*(int *)(*plVar7 + 0x38);
        pCVar6 = cocos2d::CCDictionary::objectForKey(*(CCDictionary **)(lVar3 + 0x140),lVar8);
        cVar4 = (**(code **)(*(longlong *)pCVar6 + 0x48))(pCVar6);
        if (cVar4 == '\0') {
          (**(code **)(*(longlong *)pCVar6 + 0x60))(pCVar6,param_2);
        }
        else {
          (**(code **)(*(longlong *)pCVar6 + 0x58))(pCVar6);
          cocos2d::CCDictionary::removeObjectForKey(*(CCDictionary **)(lVar3 + 0x140),lVar8);
        }
      }
    }
  }
  return;
}

