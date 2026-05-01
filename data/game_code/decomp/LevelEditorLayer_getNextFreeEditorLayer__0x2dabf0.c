// LevelEditorLayer_getNextFreeEditorLayer @ 0x2dabf0
// Body: 289 bytes


undefined4 FUN_1402dabf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong *plVar8;
  int local_res8 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  undefined1 local_30 [40];
  
  local_res8[0] = 0;
  FUN_14005e660(local_48,local_res8);
  puVar3 = *(undefined8 **)(param_2 + 8);
  for (puVar4 = (undefined8 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
    FUN_140060d70(local_48,local_68,puVar4 + 2);
  }
  if (*(longlong *)(param_1 + 0xdb8) != 0) {
    puVar5 = *(uint **)(*(longlong *)(param_1 + 0xdb8) + 0x38);
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      plVar8 = *(longlong **)(puVar5 + 4);
      plVar1 = plVar8 + ((ulonglong)uVar2 - 1);
      for (; (plVar8 <= plVar1 && (lVar6 = *plVar8, lVar6 != 0)); plVar8 = plVar8 + 1) {
        local_res8[0] = (int)*(short *)(lVar6 + 0x4ba);
        FUN_140060d70(local_48,local_68,local_res8);
        local_res8[0] = (int)*(short *)(lVar6 + 0x4bc);
        FUN_140060d70(local_48,local_58,local_res8);
      }
    }
  }
  uVar7 = FUN_1402d1460(1,1000,local_48);
  FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>(local_30);
  FUN_14005d870(local_40);
  return uVar7;
}

