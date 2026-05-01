// Function: FUN_14039f850
// Original target: PlayerObject_propellPlayer @ 0x39f850
// Ghidra entry: 14039f850
// Signature: undefined FUN_14039f850(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14039f850(longlong *param_1,float param_2,char param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  CCPoint *pCVar3;
  longlong lVar4;
  char *pcVar5;
  float fVar6;
  char local_38 [8];
  ulonglong uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  *(undefined1 *)((longlong)param_1 + 0xa1c) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa0c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7e3) = 1;
  *(undefined2 *)(param_1 + 0x136) = 0;
  fVar1 = DAT_140622c24;
  fVar6 = DAT_140622c24;
  if (*(float *)(param_1 + 0x13e) != DAT_140622c24) {
    fVar6 = DAT_140622ba4;
  }
  iVar2 = -1;
  if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
    iVar2 = 1;
  }
  FUN_140388d10(param_1,(double)((float)iVar2 * param_2 * DAT_1406230f8 * fVar6));
  pcVar5 = (char *)((longlong)param_1 + 0x9be);
  if (((*(char *)((longlong)param_1 + 0x9bb) != '\0') || (*pcVar5 != '\0')) ||
     (*(char *)((longlong)param_1 + 0x9c4) != '\0')) {
    param_1[0x134] = (longlong)((double)param_1[0x134] * _DAT_140622db0);
  }
  if ((*(char *)((longlong)param_1 + 0xa2a) == '\0') &&
     (*(char *)((longlong)param_1 + 0x9e4) == '\0')) {
    *(undefined2 *)(param_1 + 0xe5) = 0;
    *(undefined1 *)(param_1 + 0xcd) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    if (*(char *)((longlong)param_1 + 0x9bb) == '\0') {
      FUN_14038d220(param_1,0,fVar1);
    }
    else {
      FUN_14038d350(param_1,fVar1);
    }
  }
  if (param_3 == '\0') {
    FUN_14039fa50(param_1,param_4);
    pcVar5 = (char *)((longlong)param_1 + 0x9be);
  }
  if (*(char *)((longlong)param_1 + 0x9bd) == '\0') {
    if (*pcVar5 == '\0') goto LAB_14039fa0a;
    local_28 = 9;
    uStack_30 = (ulonglong)(byte)s_fall_loop_1405c7a28[8];
    lVar4 = param_1[0x115];
    local_38 = (char  [8])s_fall_loop_1405c7a28._0_8_;
  }
  else {
    local_28 = 10;
    uStack_30 = (ulonglong)(ushort)s_jump_start_1405c7a78._8_2_;
    lVar4 = param_1[0x114];
    local_38 = (char  [8])s_jump_start_1405c7a78._0_8_;
  }
  local_20 = 0xf;
  FUN_140040cf0(lVar4,local_38);
LAB_14039fa0a:
  FUN_1403a0090(param_1);
  pCVar3 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014039fa3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cocos2d::CCPoint::operator=((CCPoint *)((longlong)param_1 + 0xa2c),pCVar3);
  return;
}

