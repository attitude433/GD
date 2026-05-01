// LevelEditorLayer_levelSettingsUpdated @ 0x2d3720
// Body: 221 bytes


void FUN_1402d3720(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 local_28 [32];
  
  if (*(int *)(*(longlong *)(param_1 + -0x2f28) + 0x2a0) == 0) {
    puVar5 = (undefined1 *)
             FUN_14032b650(local_28,*(undefined4 *)(*(longlong *)(param_1 + -0x2f28) + 0x29c));
  }
  else {
    FUN_14003bdb0(local_28,*(longlong *)(param_1 + -0x29f0) + 0x188);
    puVar5 = local_28;
  }
  FUN_1402e8cd0(*(undefined8 *)(param_1 + 0x128),puVar5);
  fVar7 = *(float *)(param_1 + -0xfc);
  plVar1 = (longlong *)(param_1 + -0x37a0);
  FUN_14023ad00(plVar1);
  if ((fVar7 != *(float *)(param_1 + -0xfc)) && (*(longlong *)(param_1 + -0x29e8) != 0)) {
    puVar4 = *(uint **)(*(longlong *)(param_1 + -0x29e8) + 0x38);
    uVar3 = *puVar4;
    if (uVar3 != 0) {
      plVar6 = *(longlong **)(puVar4 + 4);
      plVar2 = plVar6 + ((ulonglong)uVar3 - 1);
      for (; (plVar6 <= plVar2 && (*plVar6 != 0)); plVar6 = plVar6 + 1) {
        (**(code **)(*plVar1 + 0x490))(plVar1);
      }
    }
  }
  return;
}

