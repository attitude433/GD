// LevelEditorLayer_getNextFreeGroupID @ 0x2da7a0
// Body: 480 bytes


undefined4 FUN_1402da7a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined1 local_d8 [8];
  undefined1 local_d0 [16];
  undefined1 local_c0 [40];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  local_res8[0] = 0;
  FUN_14005e660(local_d8,local_res8);
  puVar5 = *(undefined8 **)(param_2 + 8);
  for (puVar6 = (undefined8 *)*puVar5; puVar6 != puVar5; puVar6 = (undefined8 *)*puVar6) {
    FUN_140060d70(local_d8,local_98,puVar6 + 2);
  }
  if (*(longlong *)(param_1 + 0xdb8) != 0) {
    puVar7 = *(uint **)(*(longlong *)(param_1 + 0xdb8) + 0x38);
    uVar2 = *puVar7;
    if (uVar2 != 0) {
      plVar13 = *(longlong **)(puVar7 + 4);
      plVar1 = plVar13 + ((ulonglong)uVar2 - 1);
      for (; (plVar13 <= plVar1 && (lVar8 = *plVar13, lVar8 != 0)); plVar13 = plVar13 + 1) {
        if (0 < *(short *)(lVar8 + 0x498)) {
          iVar12 = 0;
          lVar10 = 0;
          uVar11 = 0;
          do {
            if ((uVar11 < 10) && (*(longlong *)(lVar8 + 0x490) != 0)) {
              local_res8[0] = (int)*(short *)(lVar10 + *(longlong *)(lVar8 + 0x490));
            }
            else {
              local_res8[0] = 0;
            }
            FUN_140060d70(local_d8,local_98,local_res8);
            iVar12 = iVar12 + 1;
            uVar11 = uVar11 + 1;
            lVar10 = lVar10 + 2;
          } while (iVar12 < *(short *)(lVar8 + 0x498));
        }
        if ((*(int *)(lVar8 + 0x4e8) == 1) &&
           ((*(int *)(lVar8 + 0x40c) != 0x3ee || (*(int *)(lVar8 + 0x658) == 1)))) {
          local_res8[0] = *(int *)(lVar8 + 0x5c8);
          iVar12 = *(int *)(lVar8 + 0x5cc);
          iVar3 = *(int *)(lVar8 + 0x6a0);
          iVar4 = *(int *)(lVar8 + 0x694);
          local_res10[0] = iVar12;
          local_res18[0] = iVar3;
          local_res20[0] = iVar4;
          if (0 < local_res8[0]) {
            FUN_140060d70(local_d8,local_88,local_res8);
          }
          if (0 < iVar12) {
            FUN_140060d70(local_d8,local_78,local_res10);
          }
          if (0 < iVar3) {
            FUN_140060d70(local_d8,local_68,local_res18);
          }
          if (0 < iVar4) {
            FUN_140060d70(local_d8,local_58,local_res20);
          }
        }
      }
    }
  }
  uVar9 = FUN_1402d1460(*(undefined4 *)(*(longlong *)(param_1 + 0xdb0) + 0x1bc),9999,local_d8);
  FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>(local_c0);
  FUN_14005d870(local_d0);
  return uVar9;
}

