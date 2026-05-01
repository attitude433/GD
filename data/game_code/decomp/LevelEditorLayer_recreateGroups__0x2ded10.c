// LevelEditorLayer_recreateGroups @ 0x2ded10
// Body: 849 bytes


void FUN_1402ded10(longlong *param_1)

{
  uint *puVar1;
  CCArray *this;
  uint uVar2;
  CCObject *pCVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_1[0x1b7] != 0) {
    puVar1 = *(uint **)(param_1[0x1b7] + 0x38);
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      plVar5 = *(longlong **)(puVar1 + 4);
      plVar4 = plVar5 + ((ulonglong)uVar2 - 1);
      for (; (plVar5 <= plVar4 && (lVar6 = *plVar5, lVar6 != 0)); plVar5 = plVar5 + 1) {
        *(undefined1 *)(lVar6 + 0x512) = *(undefined1 *)(lVar6 + 0x511);
      }
    }
  }
  FUN_140249ac0(param_1 + 0x207);
  FUN_140249ac0(param_1 + 0x20f);
  cocos2d::CCArray::removeAllObjects((CCArray *)param_1[0x1b8]);
  cocos2d::CCArray::addObject((CCArray *)param_1[0x1b8],(CCObject *)param_1[0x614]);
  cocos2d::CCArray::addObject((CCArray *)param_1[0x1b8],(CCObject *)param_1[0x615]);
  lVar6 = 0;
  do {
    if (*(CCArray **)(lVar6 + param_1[0x1e3]) != (CCArray *)0x0) {
      cocos2d::CCArray::removeAllObjects(*(CCArray **)(lVar6 + param_1[0x1e3]));
    }
    if (*(CCArray **)(lVar6 + param_1[0x1e6]) != (CCArray *)0x0) {
      cocos2d::CCArray::removeAllObjects(*(CCArray **)(lVar6 + param_1[0x1e6]));
    }
    if (*(CCArray **)(lVar6 + param_1[0x1e9]) != (CCArray *)0x0) {
      cocos2d::CCArray::removeAllObjects(*(CCArray **)(lVar6 + param_1[0x1e9]));
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 < 0x13879);
  if ((param_1[0x725] != 0) && (lVar6 = *(longlong *)(param_1[0x725] + 0x38), lVar6 != 0)) {
    for (lVar7 = *(longlong *)(lVar6 + 0x120);
        cocos2d::CCArray::removeAllObjects(*(CCArray **)(lVar6 + 0x108)), lVar7 != 0;
        lVar7 = *(longlong *)(lVar7 + 0x120)) {
      lVar6 = lVar7;
    }
  }
  this = (CCArray *)param_1[0x1b7];
  uVar11 = 0;
  uVar2 = cocos2d::CCArray::count(this);
  if (uVar2 != 0) {
    do {
      pCVar3 = cocos2d::CCArray::objectAtIndex(this,uVar11);
      if (0 < *(short *)(pCVar3 + 0x498)) {
        iVar10 = 0;
        lVar6 = 0;
        uVar8 = 0;
        do {
          if ((uVar8 < 10) && (*(longlong *)(pCVar3 + 0x490) != 0)) {
            iVar9 = (int)*(short *)(*(longlong *)(pCVar3 + 0x490) + lVar6);
          }
          else {
            iVar9 = 0;
          }
          (**(code **)(*param_1 + 0x480))(param_1,pCVar3,iVar9,1);
          iVar10 = iVar10 + 1;
          uVar8 = uVar8 + 1;
          lVar6 = lVar6 + 2;
        } while (iVar10 < *(short *)(pCVar3 + 0x498));
      }
      if (*(int *)(pCVar3 + 0x40c) == 0x64f) {
        if (pCVar3[0x780] == (CCObject)0x0) {
          plVar4 = (longlong *)FUN_14024eaf0(param_1 + 0x207,local_48);
          lVar6 = *plVar4;
          if (*(undefined8 **)(lVar6 + 0x20) == *(undefined8 **)(lVar6 + 0x28)) goto LAB_1402def97;
          **(undefined8 **)(lVar6 + 0x20) = pCVar3;
          *(longlong *)(lVar6 + 0x20) = *(longlong *)(lVar6 + 0x20) + 8;
        }
        else {
          plVar4 = (longlong *)FUN_14024eaf0(param_1 + 0x20f,local_58);
          lVar6 = *plVar4;
          if (*(undefined8 **)(lVar6 + 0x20) == *(undefined8 **)(lVar6 + 0x28)) {
LAB_1402def97:
            FUN_140063110();
          }
          else {
            **(undefined8 **)(lVar6 + 0x20) = pCVar3;
            *(longlong *)(lVar6 + 0x20) = *(longlong *)(lVar6 + 0x20) + 8;
          }
        }
      }
      else if ((*(int *)(pCVar3 + 0x40c) == 0x718) && (pCVar3[0x69d] != (CCObject)0x0)) {
        cocos2d::CCArray::addObject((CCArray *)param_1[0x1b8],pCVar3);
      }
      uVar11 = uVar11 + 1;
      uVar2 = cocos2d::CCArray::count(this);
    } while (uVar11 < uVar2);
  }
  if (*(char *)(param_1[0x1b6] + 0x1ce) != '\0') {
    lVar6 = 8;
    do {
      if (*(longlong *)(lVar6 + param_1[0x1e3]) != 0) {
        puVar1 = *(uint **)(*(longlong *)(lVar6 + param_1[0x1e3]) + 0x38);
        qsort(*(void **)(puVar1 + 4),(ulonglong)*puVar1,8,FUN_1402052d0);
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 < 0x13879);
  }
  return;
}

