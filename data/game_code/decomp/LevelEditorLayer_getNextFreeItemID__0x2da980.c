// LevelEditorLayer_getNextFreeItemID @ 0x2da980
// Body: 295 bytes


undefined4 FUN_1402da980(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined4 local_res8 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  undefined1 local_30 [40];
  
  local_res8[0] = 0;
  FUN_14005e660(local_48,local_res8);
  puVar3 = *(undefined8 **)(param_2 + 8);
  for (puVar4 = (undefined8 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
    FUN_140060d70(local_48,local_58,puVar4 + 2);
  }
  if (*(longlong *)(param_1 + 0xdb8) != 0) {
    puVar5 = *(uint **)(*(longlong *)(param_1 + 0xdb8) + 0x38);
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      plVar9 = *(longlong **)(puVar5 + 4);
      plVar1 = plVar9 + ((ulonglong)uVar2 - 1);
      for (; (plVar9 <= plVar1 && (plVar6 = (longlong *)*plVar9, plVar6 != (longlong *)0x0));
          plVar9 = plVar9 + 1) {
        if (((int)plVar6[0x9d] == 1) &&
           (((iVar7 = (**(code **)(*plVar6 + 0x660))(plVar6), iVar7 == 0x1e &&
             ((char)plVar6[0xd5] != '\0')) || (*(int *)((longlong)plVar6 + 0x40c) == 0x719)))) {
          local_res8[0] = (undefined4)plVar6[0xd4];
          FUN_140060d70(local_48,local_58,local_res8);
        }
      }
    }
  }
  uVar8 = FUN_1402d1460(1,1000,local_48);
  FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>(local_30);
  FUN_14005d870(local_40);
  return uVar8;
}

