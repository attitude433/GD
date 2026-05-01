// Function: FUN_140397f40
// Original target: PlayerObject_triggerCheck_397f40 @ 0x397f40
// Ghidra entry: 140397f40
// Signature: undefined FUN_140397f40(void)


undefined8 FUN_140397f40(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint *puVar3;
  CCObject *pCVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  CCArray *pCVar8;
  CCArray *pCVar9;
  CCArray *this;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res8 [2];
  
  if (*(char *)(param_1 + 0xbc8) == '\0') {
    local_res8[0] = param_2;
    puVar7 = (undefined1 *)FUN_1400cdbf0(param_1 + 3000,local_res8);
    *puVar7 = 1;
  }
  if ((*(char *)(param_1 + 0xa2a) == '\0') && (*(char *)(param_1 + 0xa2b) == '\0')) {
    if (param_2 == 1) {
      if (*(char *)(param_1 + 0x985) == '\0') {
        FUN_1403a0680(param_1);
      }
      *(undefined2 *)(param_1 + 0x985) = 0x101;
      *(undefined1 *)(param_1 + 0x7e0) = 0;
      FUN_14005e0d0(param_1 + 0x848);
      *(undefined1 *)(param_1 + 0x989) = *(undefined1 *)(param_1 + 0x985);
      *(undefined1 *)(param_1 + 0x98a) = *(undefined1 *)(param_1 + 0x986);
      *(undefined4 *)(param_1 + 0x98b) = 0;
      uVar5 = cocos2d::CCArray::count(*(CCArray **)(param_1 + 0xa38));
      if (uVar5 == 0) {
        if (((*(char *)(param_1 + 0x9bb) != '\0') ||
            ((((*(char *)(param_1 + 0x9b9) == '\0' && (*(char *)(param_1 + 0x9ba) == '\0')) &&
              (*(char *)(param_1 + 0x9bc) == '\0')) &&
             ((*(char *)(param_1 + 0x9c4) == '\0' && (*(char *)(param_1 + 0x985) != '\0')))))) &&
           (*(char *)(param_1 + 0x9c1) != '\0')) {
          FUN_14038b900(param_1,0);
        }
      }
      else {
        uVar5 = cocos2d::CCArray::count(*(CCArray **)(param_1 + 0xa38));
        if (0 < (int)uVar5) {
          pCVar8 = cocos2d::CCArray::createWithCapacity(uVar5);
          pCVar9 = cocos2d::CCArray::createWithCapacity(uVar5);
          if (*(longlong *)(param_1 + 0xa38) != 0) {
            puVar3 = *(uint **)(*(longlong *)(param_1 + 0xa38) + 0x38);
            uVar5 = *puVar3;
            if (uVar5 != 0) {
              puVar10 = *(undefined8 **)(puVar3 + 4);
              puVar1 = puVar10 + ((ulonglong)uVar5 - 1);
              for (; (puVar10 <= puVar1 &&
                     (pCVar4 = (CCObject *)*puVar10, pCVar4 != (CCObject *)0x0));
                  puVar10 = puVar10 + 1) {
                if (pCVar4[0x740] != (CCObject)0x0) {
                  FUN_140398c00(param_1,pCVar4,0);
                  *(undefined1 *)(param_1 + 0x985) = 0;
                  return 1;
                }
                iVar6 = (**(code **)(*(longlong *)pCVar4 + 0x660))(pCVar4);
                this = pCVar8;
                if (iVar6 != 0x24) {
                  this = pCVar9;
                }
                cocos2d::CCArray::addObject(this,pCVar4);
              }
            }
          }
          if (pCVar8 != (CCArray *)0x0) {
            uVar5 = **(uint **)(pCVar8 + 0x38);
            if (uVar5 != 0) {
              plVar11 = *(longlong **)(*(uint **)(pCVar8 + 0x38) + 4);
              plVar2 = plVar11 + ((ulonglong)uVar5 - 1);
              for (; (plVar11 <= plVar2 && (*plVar11 != 0)); plVar11 = plVar11 + 1) {
                FUN_140398c00(param_1,*plVar11,0);
              }
            }
          }
          if (pCVar9 != (CCArray *)0x0) {
            uVar5 = **(uint **)(pCVar9 + 0x38);
            if (uVar5 != 0) {
              plVar11 = *(longlong **)(*(uint **)(pCVar9 + 0x38) + 4);
              plVar2 = plVar11 + ((ulonglong)uVar5 - 1);
              for (; (plVar11 <= plVar2 && (*plVar11 != 0)); plVar11 = plVar11 + 1) {
                FUN_140398c00(param_1,*plVar11,0);
              }
            }
          }
        }
      }
    }
    else if (param_2 - 2U < 2) {
      FUN_140397e30(param_1,param_2);
    }
    return 1;
  }
  return 0;
}

