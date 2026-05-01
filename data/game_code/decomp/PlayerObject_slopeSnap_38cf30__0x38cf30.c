// Function: FUN_14038cf30
// Original target: PlayerObject_slopeSnap_38cf30 @ 0x38cf30
// Ghidra entry: 14038cf30
// Signature: undefined FUN_14038cf30(void)


void FUN_14038cf30(longlong param_1)

{
  CCNode *pCVar1;
  float fVar2;
  CCAction *pCVar3;
  CCScaleTo *pCVar4;
  CCEaseInOut *pCVar5;
  
  pCVar3 = cocos2d::CCNode::getActionByTag(*(CCNode **)(param_1 + 0x738),0xd);
  if (pCVar3 != (CCAction *)0x0) {
    pCVar1 = *(CCNode **)(param_1 + 0x738);
    cocos2d::CCNode::stopActionByTag(pCVar1,0xd);
    cocos2d::CCNode::stopActionByTag(pCVar1,0xe);
    fVar2 = DAT_140622c24;
    pCVar4 = cocos2d::CCScaleTo::create(DAT_140622a10,DAT_140622c24,DAT_140622c24);
    pCVar5 = cocos2d::CCEaseInOut::create((CCActionInterval *)pCVar4,DAT_140622e58);
    (**(code **)(*(longlong *)pCVar5 + 0x40))(pCVar5,0xe);
    cocos2d::CCNode::runAction(pCVar1,(CCAction *)pCVar5);
    pCVar1 = *(CCNode **)(param_1 + 0x750);
    cocos2d::CCNode::stopActionByTag(pCVar1,0xd);
    cocos2d::CCNode::stopActionByTag(pCVar1,0xe);
    pCVar4 = cocos2d::CCScaleTo::create(DAT_140622a10,fVar2,fVar2);
    pCVar5 = cocos2d::CCEaseInOut::create((CCActionInterval *)pCVar4,DAT_140622e58);
    (**(code **)(*(longlong *)pCVar5 + 0x40))(pCVar5,0xe);
    cocos2d::CCNode::runAction(pCVar1,(CCAction *)pCVar5);
  }
  return;
}

