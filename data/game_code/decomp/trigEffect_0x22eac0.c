// Called from triggerObject base / 0x4bc180
// Function: FUN_14022eac0 @ 0x22eac0


void FUN_14022eac0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  CCObject *pCVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint local_res10 [2];
  undefined1 local_38 [16];
  
  if (*(int *)(param_2 + 0x40c) == 0xe4c) {
    iVar11 = *(int *)(param_2 + 0x5c8);
    if (*(char *)(param_2 + 0x69c) == '\0') {
      uVar4 = FUN_140224280(param_1,iVar11);
      FUN_14022ee00(param_1,param_2,uVar4);
      return;
    }
    plVar2 = *(longlong **)(param_1 + 0x720);
    for (plVar13 = *(longlong **)(param_1 + 0x718); plVar13 != plVar2; plVar13 = plVar13 + 4) {
      if ((int)plVar13[2] == iVar11) {
        local_res10[0] =
             ((uint)*(byte *)(*plVar13 + 0x739) + (*(byte *)(*plVar13 + 0x738) + 10) * 10) * 1000000
             + (int)plVar13[1];
        plVar8 = (longlong *)
                 ((*(ulonglong *)(param_1 + 0xfb0) &
                  ((((ulonglong)(local_res10[0] >> 8 & 0xff) ^
                    ((ulonglong)(local_res10[0] & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) *
                    0x100000001b3 ^ (ulonglong)(local_res10[0] >> 0x10 & 0xff)) * 0x100000001b3 ^
                  (ulonglong)(local_res10[0] >> 0x18)) * 0x100000001b3) * 0x10 +
                 *(longlong *)(param_1 + 0xf98));
        lVar6 = plVar8[1];
        if (lVar6 == *(longlong *)(param_1 + 0xf88)) {
LAB_14022ebf1:
          lVar6 = 0;
        }
        else {
          uVar9 = *(uint *)(lVar6 + 0x10);
          while (local_res10[0] != uVar9) {
            if (lVar6 == *plVar8) goto LAB_14022ebf1;
            lVar6 = *(longlong *)(lVar6 + 8);
            uVar9 = *(uint *)(lVar6 + 0x10);
          }
        }
        if (lVar6 == 0) {
          uVar12 = 1;
        }
        else {
          plVar8 = (longlong *)FUN_14024ed30(param_1 + 0xf80,local_38,local_res10);
          iVar1 = *(int *)(*plVar8 + 0x14);
          iVar10 = 0;
          uVar9 = (0 < iVar1) + 1;
          uVar12 = (ulonglong)uVar9;
          if (0 < iVar1) {
            do {
              pCVar3 = cocos2d::CCArray::objectAtIndex
                                 (*(CCArray **)(param_1 + 0xf78),iVar1 + -1 + iVar10);
              FUN_14022ee00(param_1,param_2,pCVar3);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)uVar9);
            goto LAB_14022ec94;
          }
        }
        do {
          uVar4 = FUN_140224280(param_1,(int)plVar13[1]);
          FUN_14022ee00(param_1,param_2,uVar4);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
LAB_14022ec94:
    }
  }
  else if (*(int *)(param_2 + 0x40c) == 0xe4d) {
    iVar11 = *(int *)(param_2 + 0x5cc);
    if (*(char *)(param_2 + 0x6a4) == '\0') {
      if (*(char *)(param_2 + 0x6a5) == '\0') {
        if (*(char *)(param_2 + 0x6a6) == '\0') {
          if (iVar11 == 0) {
            return;
          }
        }
        else {
          iVar11 = -3;
        }
      }
      else {
        iVar11 = -2;
      }
    }
    else {
      iVar11 = -1;
    }
    iVar1 = *(int *)(param_2 + 0x5c8);
    if (*(char *)(param_2 + 0x69c) == '\0') {
      lVar6 = FUN_140224280();
      if (lVar6 != 0) {
        uVar9 = **(uint **)(lVar6 + 0x38);
        if (uVar9 != 0) {
          plVar13 = *(longlong **)(*(uint **)(lVar6 + 0x38) + 4);
          plVar2 = plVar13 + ((ulonglong)uVar9 - 1);
          if (plVar13 <= plVar2) {
            while (lVar6 = *plVar13, lVar6 != 0) {
              if (*(int *)(lVar6 + 0x40c) == 0xbc8) {
                plVar8 = *(longlong **)(param_1 + 0x720);
                for (plVar7 = *(longlong **)(param_1 + 0x718); plVar7 != plVar8; plVar7 = plVar7 + 4
                    ) {
                  if (*plVar7 == lVar6) {
                    *(int *)((longlong)plVar7 + 0xc) = iVar11;
                  }
                }
              }
              plVar13 = plVar13 + 1;
              if (plVar2 < plVar13) {
                return;
              }
            }
          }
        }
      }
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x720);
      lVar5 = *(longlong *)(param_1 + 0x718);
      if (lVar5 != lVar6) {
        do {
          if (*(int *)(lVar5 + 0x10) == iVar1) {
            *(int *)(lVar5 + 0xc) = iVar11;
          }
          lVar5 = lVar5 + 0x20;
        } while (lVar5 != lVar6);
        return;
      }
    }
  }
  return;
}

