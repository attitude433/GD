// triggerObject @ 0x4c3320
// Function: FUN_1404c3320


void FUN_1404c3320(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  CCObject *pCVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plStack_48;
  longlong *plStack_40;
  longlong *plStack_38;
  
  iVar7 = *(int *)(param_1 + 0x760);
  iVar1 = *(int *)(param_1 + 0x5c8);
  if (*(char *)(param_1 + 0x69c) == '\0') {
    FUN_14021e190();
    return;
  }
  FUN_14025da50(*(undefined8 *)(param_2 + 0x950));
  FUN_1402277f0(param_2,0xffffffff,iVar1,iVar7);
  plVar9 = *(longlong **)(param_2 + 0x720);
  for (plVar11 = *(longlong **)(param_2 + 0x718); plVar11 != plVar9; plVar11 = plVar11 + 4) {
    if (iVar1 == -1) {
      if (*plVar11 == 0) goto LAB_14021e788;
    }
    else if ((int)plVar11[2] == iVar1) {
LAB_14021e788:
      if (iVar7 == 0) {
        *(undefined1 *)((longlong)plVar11 + 0x1e) = 1;
LAB_14021e7a4:
        *(undefined2 *)((longlong)plVar11 + 0x1c) = 0;
      }
      else if (iVar7 == 1) {
        *(undefined2 *)((longlong)plVar11 + 0x1c) = 0x101;
      }
      else if (iVar7 == 2) goto LAB_14021e7a4;
    }
  }
  FUN_140232380(param_2,0xffffffff,iVar1,iVar7);
  plVar9 = *(longlong **)(param_2 + 0x738);
  for (plVar11 = *(longlong **)(param_2 + 0x730); plVar11 != plVar9; plVar11 = plVar11 + 0xc) {
    if (iVar1 == -1) {
      if (*plVar11 == 0) goto LAB_14021e7f2;
    }
    else if ((int)plVar11[10] == iVar1) {
LAB_14021e7f2:
      if (iVar7 == 0) {
        *(undefined1 *)((longlong)plVar11 + 0x4d) = 1;
      }
      else if (iVar7 == 1) {
        *(undefined2 *)((longlong)plVar11 + 0x4e) = 0x101;
      }
      else if (iVar7 == 2) {
        *(undefined2 *)((longlong)plVar11 + 0x4e) = 0;
      }
    }
  }
  plVar9 = *(longlong **)(param_2 + 0x750);
  plVar11 = *(longlong **)(param_2 + 0x748);
  do {
    if (plVar11 == plVar9) {
      FUN_140205460(param_2 + 0x1a8,0xffffffff,iVar1,iVar7);
      puVar2 = *(undefined8 **)(param_2 + 0x1040);
      for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
        plVar9 = (longlong *)puVar3[4];
        for (plVar11 = (longlong *)puVar3[3]; plVar11 != plVar9; plVar11 = plVar11 + 1) {
          if (*(int *)(*plVar11 + 0x698) == iVar1) {
            *(bool *)(*plVar11 + 0x788) = iVar7 != 2;
          }
        }
      }
      plStack_48 = (longlong *)0x0;
      plStack_40 = (longlong *)0x0;
      plVar11 = (longlong *)0x0;
      plStack_38 = (longlong *)0x0;
      plVar9 = (longlong *)0x0;
      if ((*(longlong *)(param_2 + 0x3168) != 0) &&
         (lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x3168) + 0x38), lVar5 != 0)) {
        lVar8 = *(longlong *)(lVar5 + 0x120);
        while( true ) {
          lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x108) + 0x248);
          if ((lVar5 != 0) && (*(int *)(lVar5 + 0x698) == iVar1)) {
            if (plVar9 == plVar11) {
              FUN_140063110(&plStack_48,plVar9);
              plVar9 = plStack_40;
              plVar11 = plStack_38;
            }
            else {
              *plVar9 = lVar5;
              plStack_40 = plVar9 + 1;
              plVar9 = plStack_40;
            }
          }
          if (lVar8 == 0) break;
          lVar5 = lVar8;
          lVar8 = *(longlong *)(lVar8 + 0x120);
        }
      }
      plVar4 = plStack_48;
      if (plStack_48 != plVar9) {
        plVar10 = plStack_48;
        if (iVar7 == 2) {
          do {
            FUN_14021f750(param_2,*plVar10);
            plVar10 = plVar10 + 1;
          } while (plVar10 != plVar9);
        }
        else {
          do {
            iVar7 = *(int *)(*plVar10 + 0x748);
            if (999 < iVar7) {
              iVar7 = 999;
            }
            pCVar6 = cocos2d::CCDictionary::objectForKey
                               (*(CCDictionary **)(param_2 + 0x3168),(longlong)iVar7);
            if (pCVar6 != (CCObject *)0x0) {
              (**(code **)(*(longlong *)pCVar6 + 0x1f8))(pCVar6,0);
              *(undefined8 *)(pCVar6 + 0x248) = 0;
            }
            plVar10 = plVar10 + 1;
          } while (plVar10 != plVar9);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        plVar9 = plVar4;
        if ((0xfff < ((longlong)plVar11 - (longlong)plVar4 & 0xfffffffffffffff8U)) &&
           (plVar9 = (longlong *)plVar4[-1],
           0x1f < (ulonglong)((longlong)plVar4 + (-8 - (longlong)plVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(plVar9);
      }
      return;
    }
    if (iVar1 == -1) {
      if (*plVar11 == 0) goto LAB_14021e842;
    }
    else if ((int)plVar11[10] == iVar1) {
LAB_14021e842:
      if (iVar7 == 0) {
        *(undefined1 *)((longlong)plVar11 + 0x4d) = 1;
      }
      else if (iVar7 == 1) {
        *(undefined2 *)((longlong)plVar11 + 0x4e) = 0x101;
      }
      else if (iVar7 == 2) {
        *(undefined2 *)((longlong)plVar11 + 0x4e) = 0;
      }
    }
    plVar11 = plVar11 + 0xc;
  } while( true );
}

