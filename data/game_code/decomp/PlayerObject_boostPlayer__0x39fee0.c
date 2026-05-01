// Function: FUN_14039fee0
// Original target: PlayerObject_boostPlayer @ 0x39fee0
// Ghidra entry: 14039fee0
// Signature: undefined FUN_14039fee0(void)


void FUN_14039fee0(longlong *param_1,float param_2)

{
  int iVar1;
  CCPoint *pCVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  char local_38 [8];
  ulonglong uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  *(undefined1 *)((longlong)param_1 + 0xa1c) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa0c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7e3) = 1;
  *(undefined1 *)((longlong)param_1 + 0x952) = 1;
  dVar3 = (double)param_2;
  dVar5 = (double)(int)param_2;
  if (dVar3 != dVar5) {
    dVar3 = (double)round((dVar3 - dVar5) * DAT_140623000);
    dVar3 = dVar3 / DAT_140623000 + dVar5;
  }
  param_1[0x134] = (longlong)dVar3;
  if (*(char *)((longlong)param_1 + 0x9e4) == '\0') {
    if ((((*(char *)((longlong)param_1 + 0x9b9) == '\0') &&
         (*(char *)((longlong)param_1 + 0x9ba) == '\0')) &&
        (*(char *)((longlong)param_1 + 0x9bc) == '\0')) &&
       (((*(char *)((longlong)param_1 + 0x9c4) == '\0' &&
         (*(char *)((longlong)param_1 + 0x9bb) == '\0')) &&
        (*(char *)((longlong)param_1 + 0x9bd) == '\0')))) {
      if (*(char *)((longlong)param_1 + 0x9be) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x729) = 0;
        *(undefined1 *)(param_1 + 0xcd) = 0;
        fVar4 = DAT_140622b68;
        if (*(float *)(param_1 + 0x13e) == DAT_140622c24) {
          fVar4 = DAT_140622bcc;
        }
        iVar1 = 0xb4;
        if (*(char *)((longlong)param_1 + 0x9bf) == '\0') {
          iVar1 = -0xb4;
        }
        *(float *)(param_1 + 0xe4) = (float)iVar1 / fVar4;
        *(undefined1 *)(param_1 + 0xe5) = 1;
        goto LAB_1403a0067;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x9be) == '\0') goto LAB_1403a0067;
    local_28 = 9;
    local_20 = 0xf;
    local_38[0] = s_fall_loop_1405c7a28[0];
    local_38[1] = s_fall_loop_1405c7a28[1];
    local_38[2] = s_fall_loop_1405c7a28[2];
    local_38[3] = s_fall_loop_1405c7a28[3];
    local_38[4] = s_fall_loop_1405c7a28[4];
    local_38[5] = s_fall_loop_1405c7a28[5];
    local_38[6] = s_fall_loop_1405c7a28[6];
    local_38[7] = s_fall_loop_1405c7a28[7];
    uStack_30 = (ulonglong)(byte)s_fall_loop_1405c7a28[8];
    FUN_140040d60(param_1[0x115],local_38,DAT_140622a10);
  }
LAB_1403a0067:
  pCVar2 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001403a0087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cocos2d::CCPoint::operator=((CCPoint *)((longlong)param_1 + 0xa2c),pCVar2);
  return;
}

