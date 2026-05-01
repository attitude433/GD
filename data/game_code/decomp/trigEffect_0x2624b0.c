// Called from triggerObject base / 0x4bc180
// Function: FUN_1402624b0 @ 0x2624b0


void FUN_1402624b0(longlong param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint local_res8;
  undefined4 local_res10;
  uint local_res18 [2];
  undefined4 local_res20;
  ulonglong local_80 [2];
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  
  uVar14 = 0;
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  local_res10 = param_2;
  if (9999 < (int)param_2) {
    local_res10 = 9999;
  }
  iVar11 = FUN_1402623f0();
  if (param_3 == 0) {
    FUN_14005d780(param_1 + 0x330,&local_res10);
  }
  else {
    plVar12 = (longlong *)FUN_140060b20(param_1 + 0x330,local_80,&local_res10);
    *(int *)(*plVar12 + 0x14) = param_3;
  }
  uVar13 = (ulonglong)local_res10._1_1_;
  uVar17 = (ulonglong)local_res10._2_1_;
  uVar18 = (ulonglong)local_res10._3_1_;
  plVar12 = (longlong *)
            ((*(ulonglong *)(param_1 + 0x3a0) &
             (((((ulonglong)(local_res10 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar13) *
               0x100000001b3 ^ uVar17) * 0x100000001b3 ^ uVar18) * 0x100000001b3) * 0x10 +
            *(longlong *)(param_1 + 0x388));
  lVar15 = plVar12[1];
  if (lVar15 == *(longlong *)(param_1 + 0x378)) {
LAB_1402625b3:
    lVar15 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar15 + 0x10);
    while (local_res10 != uVar2) {
      if (lVar15 == *plVar12) goto LAB_1402625b3;
      lVar15 = *(longlong *)(lVar15 + 8);
      uVar2 = *(uint *)(lVar15 + 0x10);
    }
  }
  if (lVar15 != 0) {
    plVar12 = (longlong *)FUN_140060b20(param_1 + 0x370,local_80,&local_res10);
    *(int *)(*plVar12 + 0x14) = param_3;
    uVar18 = (ulonglong)local_res10._3_1_;
    uVar17 = (ulonglong)local_res10._2_1_;
    uVar13 = (ulonglong)local_res10._1_1_;
  }
  uVar13 = *(ulonglong *)(param_1 + 0x238) &
           (((((ulonglong)(local_res10 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar13) *
             0x100000001b3 ^ uVar17) * 0x100000001b3 ^ uVar18) * 0x100000001b3;
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 8 + uVar13 * 0x10);
  if (lVar15 == *(longlong *)(param_1 + 0x210)) {
LAB_140262671:
    lVar15 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar15 + 0x10);
    while (local_res10 != uVar2) {
      if (lVar15 == *(longlong *)(*(longlong *)(param_1 + 0x220) + uVar13 * 0x10))
      goto LAB_140262671;
      lVar15 = *(longlong *)(lVar15 + 8);
      uVar2 = *(uint *)(lVar15 + 0x10);
    }
  }
  if ((lVar15 != 0) && (lVar15 != *(longlong *)(param_1 + 0x210))) {
    puVar16 = &LAB_140258910;
    if (param_3 < iVar11) {
      puVar16 = &LAB_140258920;
    }
    FUN_14026c9f0(*(longlong *)(lVar15 + 0x18),*(longlong *)(lVar15 + 0x20),
                  *(longlong *)(lVar15 + 0x20) - *(longlong *)(lVar15 + 0x18) >> 6,puVar16);
    local_res8 = 0;
    lVar19 = *(longlong *)(lVar15 + 0x18);
    if (*(longlong *)(lVar15 + 0x20) - lVar19 >> 6 != 0) {
      local_80[0] = 0;
      uVar13 = uVar14;
      do {
        iVar11 = (int)uVar14;
        bVar8 = false;
        if ((*(char *)(lVar19 + uVar13) == '\0') &&
           (iVar4 = *(int *)(lVar19 + 4 + uVar13), iVar4 != param_3)) {
          iVar5 = *(int *)(lVar19 + 8 + uVar13);
          *(int *)(lVar19 + 4 + uVar13) = param_3;
          if (iVar5 <= iVar4) {
            if ((iVar5 < iVar4) && (param_3 <= iVar5)) goto LAB_140262722;
            goto LAB_1402628b7;
          }
          if (param_3 < iVar5) goto LAB_1402628b7;
LAB_140262722:
          uVar2 = *(uint *)(lVar19 + 0xc + uVar13);
          cVar3 = *(char *)(lVar19 + 0x10 + uVar13);
          local_res18[0] = CONCAT31(local_res18[0]._1_3_,cVar3);
          uVar6 = *(undefined4 *)(lVar19 + 0x14 + uVar13);
          local_res20 = *(undefined4 *)(lVar19 + 0x18 + uVar13);
          if (*(char *)(lVar19 + 0x20 + uVar13) == '\0') {
            puVar16 = (undefined1 *)((longlong)iVar11 * 0x40 + *(longlong *)(lVar15 + 0x18));
            puVar7 = *(undefined1 **)(lVar15 + 0x20);
            puVar10 = puVar16;
            while (puVar9 = puVar10 + 0x40, puVar9 != puVar7) {
              *puVar16 = *puVar9;
              *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(puVar10 + 0x44);
              *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(puVar10 + 0x48);
              *(undefined4 *)(puVar16 + 0xc) = *(undefined4 *)(puVar10 + 0x4c);
              puVar16[0x10] = puVar10[0x50];
              *(undefined4 *)(puVar16 + 0x14) = *(undefined4 *)(puVar10 + 0x54);
              *(undefined4 *)(puVar16 + 0x18) = *(undefined4 *)(puVar10 + 0x58);
              *(undefined4 *)(puVar16 + 0x1c) = *(undefined4 *)(puVar10 + 0x5c);
              puVar16[0x20] = puVar10[0x60];
              FUN_14024b1d0(puVar16 + 0x28,puVar10 + 0x68);
              puVar16 = puVar16 + 0x40;
              puVar10 = puVar9;
            }
            FUN_14005e430(*(longlong *)(lVar15 + 0x20) + -0x18);
            *(longlong *)(lVar15 + 0x20) = *(longlong *)(lVar15 + 0x20) + -0x40;
            bVar8 = true;
            uVar14 = (ulonglong)local_res8;
            uVar13 = local_80[0];
            cVar3 = (char)local_res18[0];
          }
          iVar11 = (int)uVar14;
          if (*(longlong *)(param_1 + 0x140) == 0) {
            local_res18[0] = uVar2;
            if ((int)uVar2 < 0) {
              local_res18[0] = 0;
            }
            if (9999 < (int)local_res18[0]) {
              local_res18[0] = 9999;
            }
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4f8) +
                             ((ulonglong)(longlong)(int)local_res18[0] >> 5) * 4);
            if (cVar3 == '\0') {
              *puVar1 = *puVar1 & ~(1 << (local_res18[0] & 0x1f));
              FUN_140060d70(param_1 + 0x518,local_70,local_res18);
            }
            else {
              *puVar1 = *puVar1 | 1 << (local_res18[0] & 0x1f);
              FUN_14005d780(param_1 + 0x518,local_res18);
            }
          }
          else {
            FUN_14024b270(local_60,uVar13 + 0x28 + lVar19);
            (**(code **)**(undefined8 **)(param_1 + 0x140))
                      (*(undefined8 **)(param_1 + 0x140),uVar2,(char)local_res18[0],local_60,uVar6,
                       local_res20);
            FUN_14005e430(local_60);
          }
          if (!bVar8) goto LAB_1402628b7;
        }
        else {
LAB_1402628b7:
          local_res8 = iVar11 + 1;
          uVar14 = (ulonglong)local_res8;
          uVar13 = uVar13 + 0x40;
          local_80[0] = uVar13;
        }
        lVar19 = *(longlong *)(lVar15 + 0x18);
      } while ((ulonglong)(longlong)(int)uVar14 <
               (ulonglong)(*(longlong *)(lVar15 + 0x20) - lVar19 >> 6));
    }
  }
  return;
}

