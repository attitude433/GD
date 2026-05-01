// Called from triggerObject base / 0x4bc180
// Function: FUN_140241e50 @ 0x241e50


void FUN_140241e50(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 uVar5;
  CCArray *this;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_res8;
  longlong local_res10;
  longlong *local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  if ((*(char *)((longlong)param_1 + 0x31f1) != '\0') || ((char)param_1[0x63e] == '\0')) {
    local_res10 = param_2;
    if (*(char *)((longlong)param_1 + 0x3764) == '\0') {
      if (*(char *)((longlong)param_1 + 0x88a) == '\0') {
        if (((0 < *(int *)(param_2 + 0x7bc)) &&
            (this = (CCArray *)FUN_140224280(), this != (CCArray *)0x0)) &&
           (uVar4 = cocos2d::CCArray::count(this), uVar4 != 0)) {
          local_58 = (longlong *)0x0;
          local_50 = 0;
          local_58 = (longlong *)FUN_1404d0770(0x20);
          *local_58 = (longlong)local_58;
          local_58[1] = (longlong)local_58;
          local_58[2] = (longlong)local_58;
          *(undefined2 *)(local_58 + 3) = 0x101;
          uVar4 = **(uint **)(this + 0x38);
          if (uVar4 != 0) {
            plVar9 = *(longlong **)(*(uint **)(this + 0x38) + 4);
            plVar8 = plVar9 + ((ulonglong)uVar4 - 1);
            for (; (plVar9 <= plVar8 && (lVar2 = *plVar9, lVar2 != 0)); plVar9 = plVar9 + 1) {
              if (*(int *)(lVar2 + 0x40c) == 0xe12) {
                uVar3 = (ulonglong)local_res8 >> 0x20;
                local_res8 = CONCAT44((int)uVar3,*(undefined4 *)(lVar2 + 0x39c));
                plVar6 = (longlong *)FUN_140250040(param_1 + 0xed,local_48,&local_res8);
                lVar2 = *(longlong *)(*plVar6 + 0x20);
                for (lVar7 = *(longlong *)(*plVar6 + 0x18); lVar7 != lVar2; lVar7 = lVar7 + 4) {
                  FUN_1400cdf10(&local_58,local_38,lVar7);
                }
              }
            }
          }
          plVar8 = (longlong *)*local_58;
          cVar1 = *(char *)((longlong)plVar8 + 0x19);
          while (cVar1 == '\0') {
            if (*(char *)(param_2 + 2000) == '\0') {
              FUN_140242130(param_1,*(undefined4 *)((longlong)plVar8 + 0x1c),0,param_2);
            }
            if (0 < *(int *)(param_2 + 0x5c8)) {
              FUN_140242430(param_1,*(undefined4 *)((longlong)plVar8 + 0x1c),0,param_2);
            }
            plVar9 = (longlong *)plVar8[2];
            if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x19);
              plVar8 = plVar9;
              plVar9 = (longlong *)*plVar9;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar9 + 0x19);
                plVar8 = plVar9;
                plVar9 = (longlong *)*plVar9;
              }
            }
            else {
              cVar1 = *(char *)(plVar8[1] + 0x19);
              plVar6 = (longlong *)plVar8[1];
              plVar9 = plVar8;
              while ((plVar8 = plVar6, cVar1 == '\0' && (plVar9 == (longlong *)plVar8[2]))) {
                cVar1 = *(char *)(plVar8[1] + 0x19);
                plVar6 = (longlong *)plVar8[1];
                plVar9 = plVar8;
              }
            }
            cVar1 = *(char *)((longlong)plVar8 + 0x19);
          }
          FUN_1400cdb90(&local_58);
        }
        if (0 < *(int *)(param_2 + 0x7b4)) {
          if (*(char *)(param_2 + 2000) == '\0') {
            FUN_140242130(param_1,*(int *)(param_2 + 0x7b4),1,param_2);
          }
          if (0 < *(int *)(param_2 + 0x5c8)) {
            FUN_140242430(param_1,*(undefined4 *)(param_2 + 0x7b4),1,param_2);
          }
        }
        if (0 < *(int *)(param_2 + 0x78c)) {
          if (DAT_1406c2e88 == (longlong *)0x0) {
            local_res8 = FUN_1404d0770(0x888);
            DAT_1406c2e88 = (longlong *)FUN_140053100(local_res8);
            (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
          }
          uVar5 = FUN_1400583f0(DAT_1406c2e88,*(undefined4 *)(param_2 + 0x78c));
          if (*(char *)(param_2 + 2000) == '\0') {
            FUN_140242130(param_1,uVar5,0,param_2);
          }
        }
      }
      else {
        plVar8 = (longlong *)param_1[0x113];
        if (plVar8 == (longlong *)param_1[0x114]) {
          FUN_14012d2a0(param_1 + 0x112,plVar8,&local_res10);
        }
        else {
          *plVar8 = param_2;
          param_1[0x113] = param_1[0x113] + 8;
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x528))();
    }
  }
  return;
}

