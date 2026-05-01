// LevelEditorLayer_getNextColorChannel @ 0x2db070
// Body: 969 bytes


uint FUN_1402db070(longlong param_1)

{
  longlong *plVar1;
  undefined2 uVar2;
  uint *puVar3;
  int *piVar4;
  float fVar5;
  CCObject *pCVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  bool bVar14;
  undefined4 local_res8;
  int local_res10 [2];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  longlong local_80 [2];
  longlong local_70 [3];
  ulonglong local_58;
  
  local_res8 = 0;
  FUN_14005e660(local_88,&local_res8);
  if (*(longlong *)(param_1 + 0xdb8) != 0) {
    puVar3 = *(uint **)(*(longlong *)(param_1 + 0xdb8) + 0x38);
    uVar11 = *puVar3;
    if (uVar11 != 0) {
      plVar12 = *(longlong **)(puVar3 + 4);
      plVar1 = plVar12 + ((ulonglong)uVar11 - 1);
      for (; (plVar12 <= plVar1 && (lVar7 = *plVar12, lVar7 != 0)); plVar12 = plVar12 + 1) {
        piVar4 = *(int **)(lVar7 + 0x450);
        local_res8 = 0;
        if (piVar4 != (int *)0x0) {
          local_res8 = *piVar4;
          if ((piVar4[1] == local_res8) || (local_res8 == 0)) {
            local_res8 = piVar4[1];
          }
        }
        piVar4 = *(int **)(lVar7 + 0x458);
        iVar10 = 0;
        if (piVar4 != (int *)0x0) {
          iVar10 = *piVar4;
          if ((piVar4[1] == iVar10) || (iVar10 == 0)) {
            iVar10 = piVar4[1];
          }
        }
        local_res10[0] = iVar10;
        if (local_res8 < 1000) {
          FUN_140060d70(local_88,local_a8,&local_res8);
        }
        if (iVar10 < 1000) {
          FUN_140060d70(local_88,local_98,local_res10);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x37d8) != 0) {
    puVar3 = *(uint **)(*(longlong *)(param_1 + 0x37d8) + 0x38);
    uVar11 = *puVar3;
    if (uVar11 != 0) {
      plVar12 = *(longlong **)(puVar3 + 4);
      plVar1 = plVar12 + ((ulonglong)uVar11 - 1);
      for (; (plVar12 <= plVar1 && (lVar7 = *plVar12, lVar7 != 0)); plVar12 = plVar12 + 1) {
        iVar10 = *(int *)(lVar7 + 0x40c);
        if (iVar10 < 0x2e9) {
          if (iVar10 == 0x2e8) {
            local_res8 = 0x3eb;
          }
          else if (iVar10 == 0x1d) {
            local_res8 = 1000;
          }
          else if (iVar10 == 0x1e) {
            local_res8 = 0x3e9;
          }
          else {
            if (iVar10 != 0x69) goto LAB_1402db211;
            local_res8 = 0x3ec;
          }
        }
        else if (iVar10 == 899) {
          local_res8 = *(int *)(lVar7 + 0x408);
          if (local_res8 < 1000) {
LAB_1402db239:
            FUN_140060d70(local_88,local_98,&local_res8);
          }
        }
        else if (iVar10 == 900) {
          local_res8 = 0x3f1;
        }
        else {
          if (iVar10 != 0x393) {
LAB_1402db211:
            local_res8 = 0;
            goto LAB_1402db239;
          }
          local_res8 = 0x3ea;
        }
      }
    }
  }
  fVar5 = DAT_140622c24;
  uVar11 = 1;
  do {
    uVar13 = uVar11;
    uVar9 = local_58 &
            ((((ulonglong)(uVar13 >> 8 & 0xff) ^
              ((ulonglong)(uVar13 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
             (ulonglong)(uVar13 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar13 >> 0x18)) *
            0x100000001b3;
    lVar7 = *(longlong *)(local_70[0] + 8 + uVar9 * 0x10);
    if (lVar7 == local_80[0]) {
LAB_1402db2f1:
      lVar7 = 0;
    }
    else {
      uVar11 = *(uint *)(lVar7 + 0x10);
      while (uVar13 != uVar11) {
        if (lVar7 == *(longlong *)(local_70[0] + uVar9 * 0x10)) goto LAB_1402db2f1;
        lVar7 = *(longlong *)(lVar7 + 8);
        uVar11 = *(uint *)(lVar7 + 0x10);
      }
    }
    if (lVar7 == 0) {
      uVar11 = uVar13;
      if ((int)uVar13 < 0) {
        uVar11 = 0;
      }
      uVar8 = uVar11;
      if (0x44d < (int)uVar11) {
        uVar8 = 0x44d;
      }
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xdb0) + 0x140);
      if (*(longlong *)(*(longlong *)(lVar7 + 0x2e0) + (longlong)(int)uVar8 * 8) == 0) break;
      if (0x44d < (int)uVar11) {
        uVar11 = 0x44d;
      }
      pCVar6 = *(CCObject **)(*(longlong *)(lVar7 + 0x2e0) + (longlong)(int)uVar11 * 8);
      if (pCVar6 == (CCObject *)0x0) {
        pCVar6 = (CCObject *)FUN_140258ea0();
        if ((int)uVar11 < 0) {
          uVar11 = 0;
        }
        if (0x44d < (int)uVar11) {
          uVar11 = 0x44d;
        }
        *(uint *)(pCVar6 + 0x5c) = uVar11;
        cocos2d::CCDictionary::setObject
                  (*(CCDictionary **)(lVar7 + 0x148),pCVar6,(longlong)(int)uVar11);
        *(CCObject **)(*(longlong *)(lVar7 + 0x2e0) + (longlong)(int)uVar11 * 8) = pCVar6;
        lVar7 = FUN_14025bcc0(lVar7,uVar11);
        *(longlong *)(pCVar6 + 0x90) = lVar7;
        *(CCObject **)(lVar7 + 0x158) = pCVar6;
      }
      uVar2 = *(undefined2 *)(pCVar6 + 0x48);
      local_res8 = CONCAT22(local_res8._2_2_,uVar2);
      if (((((char)uVar2 == -1) &&
           (local_res8._1_1_ = (char)((ushort)uVar2 >> 8), bVar14 = local_res8._1_1_ == -1, bVar14))
          && (pCVar6[0x4a] == (CCObject)0xff)) &&
         (((*(float *)(pCVar6 + 0x60) == fVar5 && (*(int *)(pCVar6 + 0x78) == 0)) &&
          ((pCVar6[0x54] == (CCObject)0x0 && (*(int *)(pCVar6 + 0x58) < 1)))))) break;
    }
    uVar11 = uVar13 + 1;
  } while ((int)(uVar13 + 1) < 0x3e9);
  if (999 < (int)uVar13) {
    uVar13 = 999;
  }
  FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>(local_70);
  FUN_14005d870(local_80);
  return uVar13;
}

