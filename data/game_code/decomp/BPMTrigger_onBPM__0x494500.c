// BPMTrigger_onBPM @ 0x494500
// Body: 165 bytes


void FUN_140494500(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (DAT_1406c2e88 == (longlong *)0x0) {
    uVar1 = FUN_1404d0770(0x888);
    DAT_1406c2e88 = (longlong *)FUN_140053100(uVar1);
    (**(code **)(*DAT_1406c2e88 + 0x48))(DAT_1406c2e88);
  }
  plVar2 = DAT_1406c2e88;
  if (DAT_1406c2e88[0x45] != 0) {
    FMOD::ChannelControl::stop((ChannelControl *)DAT_1406c2e88[0x45]);
  }
  FUN_14005e0d0(plVar2 + 0x85);
  FUN_14005e0d0(plVar2 + 0x8d);
  FUN_14005e0d0(plVar2 + 0x95);
  plVar2 = (longlong *)FUN_14009b8b0(*(undefined4 *)(param_1 + 0x2f8));
                    /* WARNING: Could not recover jumptable at 0x00014049459e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x410))(plVar2);
  return;
}

