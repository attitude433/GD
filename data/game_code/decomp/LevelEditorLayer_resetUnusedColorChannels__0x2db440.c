// LevelEditorLayer_resetUnusedColorChannels @ 0x2db440
// Body: 860 bytes


void FUN_1402db440(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  longlong local_70 [2];
  longlong local_60 [3];
  ulonglong local_48;
  
  local_res8[0] = 0;
  FUN_14005e660(local_78,local_res8);
  uVar11 = 0;
  if (*(longlong *)(param_1 + 0xdb8) != 0) {
    puVar4 = *(uint **)(*(longlong *)(param_1 + 0xdb8) + 0x38);
    uVar6 = *puVar4;
    if (uVar6 != 0) {
      plVar9 = *(longlong **)(puVar4 + 4);
      plVar1 = plVar9 + ((ulonglong)uVar6 - 1);
      for (; (plVar9 <= plVar1 && (lVar5 = *plVar9, lVar5 != 0)); plVar9 = plVar9 + 1) {
        puVar4 = *(uint **)(lVar5 + 0x450);
        local_res8[0] = uVar11;
        if (puVar4 != (uint *)0x0) {
          local_res8[0] = *puVar4;
          if ((puVar4[1] == local_res8[0]) || (local_res8[0] == 0)) {
            local_res8[0] = puVar4[1];
          }
        }
        puVar4 = *(uint **)(lVar5 + 0x458);
        uVar6 = uVar11;
        if (puVar4 != (uint *)0x0) {
          uVar6 = *puVar4;
          if ((puVar4[1] == uVar6) || (uVar6 == 0)) {
            uVar6 = puVar4[1];
          }
        }
        local_res10[0] = uVar6;
        if ((int)local_res8[0] < 1000) {
          FUN_140060d70(local_78,local_98,local_res8);
        }
        if ((int)uVar6 < 1000) {
          FUN_140060d70(local_78,local_88,local_res10);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x37d8) != 0) {
    puVar4 = *(uint **)(*(longlong *)(param_1 + 0x37d8) + 0x38);
    uVar6 = *puVar4;
    if (uVar6 != 0) {
      plVar9 = *(longlong **)(puVar4 + 4);
      plVar1 = plVar9 + ((ulonglong)uVar6 - 1);
      for (; (plVar9 <= plVar1 && (lVar5 = *plVar9, lVar5 != 0)); plVar9 = plVar9 + 1) {
        iVar3 = *(int *)(lVar5 + 0x40c);
        if (iVar3 < 0x2e9) {
          if (iVar3 == 0x2e8) {
            local_res8[0] = 0x3eb;
          }
          else if (iVar3 == 0x1d) {
            local_res8[0] = 1000;
          }
          else if (iVar3 == 0x1e) {
            local_res8[0] = 0x3e9;
          }
          else {
            if (iVar3 != 0x69) goto LAB_1402db5d4;
            local_res8[0] = 0x3ec;
          }
        }
        else if (iVar3 == 899) {
          local_res8[0] = *(uint *)(lVar5 + 0x408);
          if ((int)local_res8[0] < 1000) {
LAB_1402db5fc:
            FUN_140060d70(local_78,local_88,local_res8);
          }
        }
        else if (iVar3 == 900) {
          local_res8[0] = 0x3f1;
        }
        else {
          if (iVar3 != 0x393) {
LAB_1402db5d4:
            local_res8[0] = 0;
            goto LAB_1402db5fc;
          }
          local_res8[0] = 0x3ea;
        }
      }
    }
  }
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xdb0) + 0x140) + 0x148);
  if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x38), lVar5 != 0)) {
    lVar8 = *(longlong *)(lVar5 + 0x120);
    do {
      uVar6 = *(uint *)(*(longlong *)(lVar5 + 0x108) + 0x5c);
      if (uVar6 - 1 < 999) {
        uVar10 = local_48 &
                 (((((ulonglong)(uVar6 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)(uVar6 >> 8 & 0xff)) * 0x100000001b3 ^
                  (ulonglong)(uVar6 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar6 >> 0x18)) *
                 0x100000001b3;
        lVar5 = *(longlong *)(local_60[0] + 8 + uVar10 * 0x10);
        if (lVar5 == local_70[0]) {
LAB_1402db700:
          lVar5 = 0;
        }
        else {
          uVar2 = *(uint *)(lVar5 + 0x10);
          while (uVar6 != uVar2) {
            if (lVar5 == *(longlong *)(local_60[0] + uVar10 * 0x10)) goto LAB_1402db700;
            lVar5 = *(longlong *)(lVar5 + 8);
            uVar2 = *(uint *)(lVar5 + 0x10);
          }
        }
        if (lVar5 == 0) {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xdb0) + 0x140);
          if ((int)uVar6 < 0) {
            uVar6 = uVar11;
          }
          if (0x44d < (int)uVar6) {
            uVar6 = 0x44d;
          }
          lVar7 = (longlong)(int)uVar6;
          cocos2d::CCDictionary::removeObjectForKey(*(CCDictionary **)(lVar5 + 0x148),lVar7);
          *(undefined8 *)(*(longlong *)(lVar5 + 0x2e0) + lVar7 * 8) = 0;
          cocos2d::CCDictionary::removeObjectForKey(*(CCDictionary **)(lVar5 + 0x278),lVar7);
        }
      }
      if (lVar8 == 0) break;
      lVar5 = lVar8;
      lVar8 = *(longlong *)(lVar8 + 0x120);
    } while( true );
  }
  FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>(local_60);
  FUN_14005d870(local_70);
  return;
}

