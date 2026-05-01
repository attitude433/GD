// LevelEditorLayer_transferDefaultColors @ 0x2dbde0
// Body: 803 bytes


void FUN_1402dbde0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  CCObject CVar7;
  longlong lVar8;
  CCObject *pCVar9;
  undefined2 uVar10;
  longlong *plVar11;
  undefined2 local_res8;
  undefined1 local_resa;
  
  lVar8 = FUN_14025b2d0(param_2);
  if (lVar8 != 0) {
    uVar3 = **(uint **)(lVar8 + 0x38);
    if (uVar3 != 0) {
      plVar11 = *(longlong **)(*(uint **)(lVar8 + 0x38) + 4);
      plVar1 = plVar11 + ((ulonglong)uVar3 - 1);
      for (; (plVar11 <= plVar1 && (lVar8 = *plVar11, lVar8 != 0)); plVar11 = plVar11 + 1) {
        pCVar9 = (CCObject *)FUN_14025bc00(param_3,*(undefined4 *)(lVar8 + 0x5c));
        if (*(int *)(lVar8 + 0x58) < 1) {
          uVar10 = *(undefined2 *)(lVar8 + 0x48);
          CVar7 = *(CCObject *)(lVar8 + 0x4a);
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0xda0);
          if (*(int *)(lVar8 + 0x58) == 1) {
            uVar10 = *(undefined2 *)(lVar5 + 0xa8a);
            CVar7 = *(CCObject *)(lVar5 + 0xa8c);
          }
          else {
            uVar10 = *(undefined2 *)(lVar5 + 0xa8d);
            CVar7 = *(CCObject *)(lVar5 + 0xa8f);
          }
        }
        *(undefined2 *)(pCVar9 + 0x4b) = uVar10;
        pCVar9[0x4d] = CVar7;
        *(undefined4 *)(pCVar9 + 100) = *(undefined4 *)(lVar8 + 0x60);
        pCVar9[0x54] = *(CCObject *)(lVar8 + 0x54);
        iVar4 = *(int *)(lVar8 + 0x78);
        *(int *)(pCVar9 + 0x78) = iVar4;
        uVar6 = *(undefined8 *)(lVar8 + 0x70);
        *(undefined8 *)(pCVar9 + 0x68) = *(undefined8 *)(lVar8 + 0x68);
        *(undefined8 *)(pCVar9 + 0x70) = uVar6;
        pCVar9[0x7d] = *(CCObject *)(lVar8 + 0x7d);
        if (iVar4 < 1) {
          cocos2d::CCDictionary::removeObjectForKey
                    (*(CCDictionary **)(param_3 + 0x278),(longlong)*(int *)(pCVar9 + 0x5c));
        }
        else {
          cocos2d::CCDictionary::setObject
                    (*(CCDictionary **)(param_3 + 0x278),pCVar9,(longlong)*(int *)(pCVar9 + 0x5c));
        }
      }
    }
  }
  uVar10 = *(undefined2 *)(*(longlong *)(param_1 + 0xda0) + 0xa8a);
  CVar7 = *(CCObject *)(*(longlong *)(param_1 + 0xda0) + 0xa8c);
  pCVar9 = *(CCObject **)(*(longlong *)(param_3 + 0x2e0) + 0x1f68);
  if (pCVar9 == (CCObject *)0x0) {
    pCVar9 = (CCObject *)FUN_140258ea0();
    *(undefined4 *)(pCVar9 + 0x5c) = 0x3ed;
    cocos2d::CCDictionary::setObject(*(CCDictionary **)(param_3 + 0x148),pCVar9,0x3ed);
    *(CCObject **)(*(longlong *)(param_3 + 0x2e0) + 0x1f68) = pCVar9;
    lVar8 = FUN_14025bcc0(param_3,0x3ed);
    *(longlong *)(pCVar9 + 0x90) = lVar8;
    *(CCObject **)(lVar8 + 0x158) = pCVar9;
  }
  *(undefined2 *)(pCVar9 + 0x4b) = uVar10;
  pCVar9[0x4d] = CVar7;
  uVar10 = *(undefined2 *)(*(longlong *)(param_1 + 0xda0) + 0xa8d);
  CVar7 = *(CCObject *)(*(longlong *)(param_1 + 0xda0) + 0xa8f);
  pCVar9 = *(CCObject **)(*(longlong *)(param_3 + 0x2e0) + 0x1f70);
  if (pCVar9 == (CCObject *)0x0) {
    pCVar9 = (CCObject *)FUN_140258ea0();
    *(undefined4 *)(pCVar9 + 0x5c) = 0x3ee;
    cocos2d::CCDictionary::setObject(*(CCDictionary **)(param_3 + 0x148),pCVar9,0x3ee);
    *(CCObject **)(*(longlong *)(param_3 + 0x2e0) + 0x1f70) = pCVar9;
    lVar8 = FUN_14025bcc0(param_3,0x3ee);
    *(longlong *)(pCVar9 + 0x90) = lVar8;
    *(CCObject **)(lVar8 + 0x158) = pCVar9;
  }
  *(undefined2 *)(pCVar9 + 0x4b) = uVar10;
  pCVar9[0x4d] = CVar7;
  uVar10 = *(undefined2 *)(*(longlong *)(param_1 + 0xda0) + 0xa8a);
  uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0xda0) + 0xa8c);
  lVar8 = FUN_14025bcc0(param_3,0x3ed);
  *(undefined2 *)(lVar8 + 0x144) = uVar10;
  *(undefined1 *)(lVar8 + 0x146) = uVar2;
  uVar10 = *(undefined2 *)(*(longlong *)(param_1 + 0xda0) + 0xa8a);
  uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0xda0) + 0xa8c);
  lVar8 = FUN_14025bcc0(param_3,0x3ed);
  *(undefined2 *)(lVar8 + 0x147) = uVar10;
  *(undefined1 *)(lVar8 + 0x149) = uVar2;
  uVar10 = *(undefined2 *)(*(longlong *)(param_1 + 0xda0) + 0xa8d);
  uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0xda0) + 0xa8f);
  lVar8 = FUN_14025bcc0(param_3,0x3ee);
  *(undefined2 *)(lVar8 + 0x144) = uVar10;
  *(undefined1 *)(lVar8 + 0x146) = uVar2;
  uVar10 = *(undefined2 *)(*(longlong *)(param_1 + 0xda0) + 0xa8d);
  uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0xda0) + 0xa8f);
  lVar8 = FUN_14025bcc0(param_3,0x3ee);
  *(undefined2 *)(lVar8 + 0x147) = uVar10;
  *(undefined1 *)(lVar8 + 0x149) = uVar2;
  lVar8 = FUN_14025bcc0(*(undefined8 *)(param_1 + 0x950),0x3ed);
  local_resa = DAT_140529ab2;
  local_res8 = DAT_140529ab0;
  if (lVar8 != 0) {
    local_resa = *(undefined1 *)(lVar8 + 0x149);
    local_res8 = *(undefined2 *)(lVar8 + 0x147);
  }
  FUN_1402639f0(*(undefined8 *)(param_1 + 0x950),&local_res8);
  return;
}

