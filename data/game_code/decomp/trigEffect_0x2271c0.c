// Called from triggerObject base / 0x4bc180
// Function: FUN_1402271c0 @ 0x2271c0


void FUN_1402271c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  
  switch(*(undefined4 *)(param_2 + 0x40c)) {
  case 0xbbe:
    FUN_140227480(param_1,param_2,param_1 + 0x658,0);
    return;
  case 0xbbf:
    FUN_140227480(param_1,param_2,param_1 + 0x670,1);
    return;
  case 0xbc0:
    FUN_140227480(param_1,param_2,param_1 + 0x688,2);
    return;
  case 0xbc1:
    FUN_140227480(param_1,param_2,param_1 + 0x6a0,3);
    return;
  case 0xbc2:
    FUN_140227480(param_1,param_2,param_1 + 0x6b8,4);
    return;
  case 0xbc3:
  case 0xbc4:
  case 0xbc5:
  case 0xbc6:
  case 0xbc7:
    iVar3 = *(int *)(param_2 + 0x5c8);
    if (*(char *)(param_2 + 0x804) == '\0') {
      lVar5 = FUN_140224280(param_1,iVar3);
      if (lVar5 != 0) {
        uVar4 = **(uint **)(lVar5 + 0x38);
        if (uVar4 != 0) {
          plVar9 = *(longlong **)(*(uint **)(lVar5 + 0x38) + 4);
          plVar1 = plVar9 + ((ulonglong)uVar4 - 1);
          for (; (plVar9 <= plVar1 && (lVar5 = *plVar9, lVar5 != 0)); plVar9 = plVar9 + 1) {
            if (*(int *)(lVar5 + 0x3a8) == 0x2d) {
              iVar3 = *(int *)(lVar5 + 0x40c);
              if (iVar3 == 0xbbe) {
                lVar6 = 0x658;
              }
              else if (iVar3 == 0xbbf) {
                lVar6 = 0x670;
              }
              else if (iVar3 == 0xbc0) {
                lVar6 = 0x688;
              }
              else if (iVar3 == 0xbc1) {
                lVar6 = 0x6a0;
              }
              else {
                if (iVar3 != 0xbc2) goto LAB_140227420;
                lVar6 = 0x6b8;
              }
              plVar2 = (longlong *)(param_1 + lVar6);
              if (plVar2 != (longlong *)0x0) {
                lVar6 = plVar2[1];
                for (lVar7 = *plVar2; lVar7 != lVar6; lVar7 = lVar7 + 0xe8) {
                  if (*(longlong *)(lVar7 + 0xa0) == lVar5) {
                    FUN_140138940(lVar7,param_2,(float)*(double *)(param_1 + 0x3c8));
                  }
                }
              }
            }
LAB_140227420:
          }
        }
      }
    }
    else {
      iVar8 = 0;
      do {
        if (iVar8 == 0) {
          lVar5 = 0x658;
LAB_1402272eb:
          plVar1 = (longlong *)(param_1 + lVar5);
          if (plVar1 != (longlong *)0x0) {
            lVar5 = *plVar1;
            lVar6 = plVar1[1];
            while ((lVar5 != lVar6 &&
                   ((*(int *)(*(longlong *)(lVar5 + 0xa0) + 0x7d8) != iVar3 ||
                    (FUN_140138940(lVar5,param_2,(float)*(double *)(param_1 + 0x3c8)), iVar3 < 1))))
                  ) {
              lVar5 = lVar5 + 0xe8;
            }
          }
        }
        else {
          if (iVar8 == 1) {
            lVar5 = 0x670;
            goto LAB_1402272eb;
          }
          if (iVar8 == 2) {
            lVar5 = 0x688;
            goto LAB_1402272eb;
          }
          if (iVar8 == 3) {
            lVar5 = 0x6a0;
            goto LAB_1402272eb;
          }
          if (iVar8 == 4) {
            lVar5 = 0x6b8;
            goto LAB_1402272eb;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
    }
  }
  return;
}

