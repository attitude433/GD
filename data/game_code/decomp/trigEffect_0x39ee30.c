// Called from triggerObject base / 0x4bc180
// Function: FUN_14039ee30 @ 0x39ee30


void FUN_14039ee30(longlong param_1,int param_2)

{
  CCNode *pCVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cStackX_11;
  
  if (*(int *)(param_1 + 0x72c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x72c) = param_2;
  pCVar1 = *(CCNode **)(param_1 + 0x730);
  if (pCVar1 != (CCNode *)0x0) {
    puVar2 = *(undefined8 **)(pCVar1 + 0x180);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,pCVar1);
    }
    cocos2d::CCNode::unscheduleAllSelectors(pCVar1);
    cocos2d::CCNode::stopAllActions(pCVar1);
    (**(code **)(*(longlong *)pCVar1 + 0x200))(pCVar1);
    *(undefined8 *)(param_1 + 0x730) = 0;
  }
  if (*(int *)(param_1 + 0x72c) != 1) {
    return;
  }
  puVar4 = (undefined2 *)(**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x738) + 0x140) + 8))();
  if ((((char)*puVar4 == '\0') && (cStackX_11 = (char)((ushort)*puVar4 >> 8), cStackX_11 == '\0'))
     && (*(char *)(puVar4 + 1) == '\0')) {
    lVar5 = FUN_14006a000();
    *(longlong *)(param_1 + 0x730) = lVar5;
    *(longlong *)(lVar5 + 0x168) = param_1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x730) + 0x150) = *(undefined4 *)(param_1 + 0x9f0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x730) + 0x178) = 0x43480000;
    lVar5 = *(longlong *)(param_1 + 0x730);
    *(undefined2 *)(lVar5 + 0x188) = DAT_140529ba8;
    *(undefined1 *)(lVar5 + 0x18a) = DAT_140529baa;
    pCVar1 = *(CCNode **)(param_1 + 0x730);
    *(undefined8 *)(pCVar1 + 0x160) = *(undefined8 *)(param_1 + 0x738);
    *(undefined4 *)(pCVar1 + 0x140) = 0x3d4ccccd;
    *(undefined4 *)(pCVar1 + 0x144) = 0x3ecccccd;
    *(undefined4 *)(pCVar1 + 0x148) = 0x3f19999a;
    pCVar1[0x14c] = (CCNode)0x0;
    cocos2d::CCNode::schedule(pCVar1,FUN_14006a140,DAT_1406229ec);
    if (DAT_1406c2ed8 != (longlong *)0x0) goto LAB_14039f0b7;
    uVar6 = FUN_1404d0770(0x668);
    DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar6);
  }
  else {
    lVar5 = FUN_14006a000();
    *(longlong *)(param_1 + 0x730) = lVar5;
    *(longlong *)(lVar5 + 0x168) = param_1;
    *(undefined8 *)(*(longlong *)(param_1 + 0x730) + 0x154) = 0x100000302;
    *(undefined4 *)(*(longlong *)(param_1 + 0x730) + 0x150) = *(undefined4 *)(param_1 + 0x9f0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x730) + 0x178) = 0x43480000;
    lVar5 = *(longlong *)(param_1 + 0x730);
    *(undefined2 *)(lVar5 + 0x188) = *(undefined2 *)(param_1 + 0xa8a);
    *(undefined1 *)(lVar5 + 0x18a) = *(undefined1 *)(param_1 + 0xa8c);
    pCVar1 = *(CCNode **)(param_1 + 0x730);
    *(undefined8 *)(pCVar1 + 0x160) = *(undefined8 *)(param_1 + 0x738);
    *(undefined4 *)(pCVar1 + 0x140) = 0x3d4ccccd;
    *(undefined4 *)(pCVar1 + 0x144) = 0x3ecccccd;
    *(undefined4 *)(pCVar1 + 0x148) = 0x3f19999a;
    pCVar1[0x14c] = (CCNode)0x0;
    cocos2d::CCNode::schedule(pCVar1,FUN_14006a140,DAT_1406229ec);
    if (DAT_1406c2ed8 != (longlong *)0x0) goto LAB_14039f0b7;
    uVar6 = FUN_1404d0770(0x668);
    DAT_1406c2ed8 = (longlong *)FUN_14017ab00(uVar6);
  }
  (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
LAB_14039f0b7:
  plVar3 = DAT_1406c2ed8;
  *(undefined8 *)(*(longlong *)(param_1 + 0x730) + 0x170) =
       *(undefined8 *)(DAT_1406c2ed8[0x41] + 0xfe8);
  (**(code **)(**(longlong **)(plVar3[0x41] + 0xfe8) + 0x1c0))
            (*(longlong **)(plVar3[0x41] + 0xfe8),*(undefined8 *)(param_1 + 0x730));
  return;
}

