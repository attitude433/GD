// Called from triggerObject base / 0x4bc180
// Function: FUN_1402415c0 @ 0x2415c0


void FUN_1402415c0(longlong *param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 *local_res8;
  undefined1 local_b8 [32];
  undefined1 local_98 [112];
  
  if (((*(char *)((longlong)param_1 + 0x31f1) != '\0') || ((char)param_1[0x63e] == '\0')) &&
     ((**(code **)(*param_1 + 0x528))(), *(char *)((longlong)param_1 + 0x3764) == '\0')) {
    if (*(char *)((longlong)param_1 + 0x88a) == '\0') {
      uVar8 = ~*(uint *)(param_2 + 0x7ec);
      if (param_2[0x7ea] == '\0') {
        if (DAT_1406c2e88 == (longlong *)0x0) {
          local_res8 = (undefined1 *)FUN_1404d0770(0x888);
          DAT_1406c2e88 = (longlong *)FUN_140053100(local_res8);
          (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
        }
        local_res8 = local_b8;
        uVar3 = FUN_14033cc00();
        uVar3 = FUN_14033f4d0(uVar3,local_b8,*(undefined4 *)(param_2 + 0x760));
        if (DAT_1406c2e88 == (longlong *)0x0) {
          uVar5 = FUN_1404d0770(0x888);
          DAT_1406c2e88 = (longlong *)FUN_140053100(uVar5);
          (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
        }
        plVar4 = DAT_1406c2e88;
        uVar11 = FUN_1400569e0(*(undefined4 *)(param_2 + 0x768));
        FUN_14005aaa0(plVar4,uVar3,uVar11,0,*(undefined4 *)(param_2 + 0x770),param_2[0x786],
                      *(undefined4 *)(param_2 + 0x774),*(undefined4 *)(param_2 + 0x77c),
                      *(undefined4 *)(param_2 + 0x778),*(undefined4 *)(param_2 + 0x780),uVar8);
      }
      else {
        if (DAT_1406c2e88 == (longlong *)0x0) {
          local_res8 = (undefined1 *)FUN_1404d0770(0x888);
          DAT_1406c2e88 = (longlong *)FUN_140053100(local_res8);
          (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
        }
        plVar4 = DAT_1406c2e88;
        local_res8 = (undefined1 *)CONCAT44(local_res8._4_4_,uVar8);
        uVar10 = (((((ulonglong)(uVar8 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)(uVar8 >> 8 & 0xff)) * 0x100000001b3 ^
                  (ulonglong)(uVar8 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar8 >> 0x18)) *
                 0x100000001b3;
        uVar7 = DAT_1406c2e88[0xb3] & uVar10;
        lVar6 = *(longlong *)(DAT_1406c2e88[0xb0] + 8 + uVar7 * 0x10);
        if (lVar6 == DAT_1406c2e88[0xae]) {
LAB_140241737:
          lVar6 = 0;
        }
        else {
          uVar1 = *(uint *)(lVar6 + 0x10);
          while (uVar8 != uVar1) {
            if (lVar6 == *(longlong *)(DAT_1406c2e88[0xb0] + uVar7 * 0x10)) goto LAB_140241737;
            lVar6 = *(longlong *)(lVar6 + 8);
            uVar1 = *(uint *)(lVar6 + 0x10);
          }
        }
        if (lVar6 == 0) {
          uVar10 = DAT_1406c2e88[0xab] & uVar10;
          lVar6 = *(longlong *)(DAT_1406c2e88[0xa8] + 8 + uVar10 * 0x10);
          lVar9 = 0;
          if (lVar6 != DAT_1406c2e88[0xa6]) {
            uVar1 = *(uint *)(lVar6 + 0x10);
            while ((lVar9 = lVar6, uVar8 != uVar1 &&
                   (lVar9 = 0, lVar6 != *(longlong *)(DAT_1406c2e88[0xa8] + uVar10 * 0x10)))) {
              lVar6 = *(longlong *)(lVar6 + 8);
              uVar1 = *(uint *)(lVar6 + 0x10);
            }
          }
          if (lVar9 != 0) {
            plVar4 = (longlong *)FUN_140061b10(DAT_1406c2e88 + 0xa5,local_b8,&local_res8);
            *(undefined1 *)(*plVar4 + 100) = 1;
          }
        }
        else {
          plVar2 = (longlong *)FUN_140061b10(DAT_1406c2e88 + 0xad,local_b8,&local_res8);
          uVar3 = FUN_1400565f0(local_98,*plVar2 + 0x18);
          FUN_14005b9d0(plVar4,uVar3);
          FUN_14005df60(plVar4 + 0xad,&local_res8);
        }
      }
    }
    else {
      plVar4 = (longlong *)param_1[0x113];
      if (plVar4 == (longlong *)param_1[0x114]) {
        local_res8 = param_2;
        FUN_14012d2a0(param_1 + 0x112,plVar4,&local_res8);
      }
      else {
        *plVar4 = (longlong)param_2;
        param_1[0x113] = param_1[0x113] + 8;
      }
    }
  }
  return;
}

