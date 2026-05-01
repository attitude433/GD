// triggerObject(GJBaseGameLayer* layer, int uniqueID, gd::vector<int> const* remapKeys)
// Class: Trigger_4bd820 @ 0x4bd820
// (Geode 2.2081 bindings)


void FUN_1404bd820(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = *(int *)(param_1 + 0x40c);
  if (iVar3 < 0x7e1) {
    if (iVar3 != 0x7e0) {
      if (iVar3 == 0x77a) {
        iVar3 = *(int *)(param_1 + 0x5f8);
        if (*(char *)(param_1 + 0x740) == '\0') {
          FUN_14023ee40(param_2,*(undefined4 *)(param_1 + 0x5cc),iVar3 != 2,iVar3 != 1,
                        *(undefined1 *)(param_1 + 0x741),*(undefined4 *)(param_1 + 0x744),
                        *(undefined4 *)(param_1 + 0x5bc),*(undefined4 *)(param_1 + 0x5e8),
                        *(undefined4 *)(param_1 + 0x5ec),*(undefined1 *)(param_1 + 0x74c),
                        *(undefined4 *)(param_1 + 0x750));
          return;
        }
        FUN_14023f670(param_2,iVar3 != 2,iVar3 != 1,*(undefined4 *)(param_1 + 0x5bc),
                      *(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5ec),
                      *(undefined1 *)(param_1 + 0x74c),*(undefined4 *)(param_1 + 0x750),
                      *(undefined1 *)(param_1 + 0x754));
        return;
      }
      if (iVar3 != 0x77c) {
        if (iVar3 == 0x7df) {
          (**(code **)(*param_2 + 0x4d0))
                    (param_2,*(undefined4 *)(param_1 + 0x618),*(undefined1 *)(param_1 + 0x620),
                     *(undefined1 *)(param_1 + 0x605),*(undefined4 *)(param_1 + 0x5bc),
                     *(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5ec),
                     *(undefined4 *)(param_1 + 0x39c),*(undefined4 *)(param_1 + 0x698));
          return;
        }
LAB_1404bda63:
        FUN_1404a5f30(param_1);
        return;
      }
      if (*(int *)(param_1 + 0x5f8) != 2) {
        FUN_140235f70(param_2,*(undefined4 *)(param_1 + 0x5e0),*(undefined4 *)(param_1 + 0x5bc),
                      *(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5ec),
                      *(undefined4 *)(param_1 + 0x39c),*(undefined4 *)(param_1 + 0x698));
      }
      if (*(int *)(param_1 + 0x5f8) != 1) {
        FUN_140236010(param_2,*(undefined4 *)(param_1 + 0x5e4),*(undefined4 *)(param_1 + 0x5bc),
                      *(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5ec),
                      *(undefined4 *)(param_1 + 0x39c),*(undefined4 *)(param_1 + 0x698));
        return;
      }
    }
  }
  else if (iVar3 == 0x80e) {
    iVar3 = *(int *)(param_1 + 0x748);
    uVar4 = *(undefined4 *)(param_1 + 0x5c8);
    if (iVar3 == 1) {
      *(undefined4 *)(param_2 + 0x8d) = uVar4;
    }
    else {
      if (iVar3 == 2) {
        *(undefined4 *)((longlong)param_2 + 0x46c) = uVar4;
        return;
      }
      if (iVar3 == 3) {
        *(undefined4 *)(param_2 + 0x8e) = uVar4;
        return;
      }
      if (iVar3 == 4) {
        *(undefined4 *)((longlong)param_2 + 0x474) = uVar4;
        return;
      }
    }
  }
  else {
    if (iVar3 != 0xb6d) goto LAB_1404bda63;
    cVar1 = *(char *)(param_1 + 0x6e4);
    cVar2 = *(char *)((longlong)param_2 + 0x311);
    *(char *)((longlong)param_2 + 0x311) = cVar1;
    *(undefined1 *)((longlong)param_2 + 0x312) = *(undefined1 *)(param_1 + 0x6f0);
    if (*(char *)(param_1 + 0x6e5) != '\0') {
      fVar5 = *(float *)(param_1 + 0x6e8);
      *(float *)(param_2 + 0x5a) = fVar5;
      fVar6 = *(float *)(param_1 + 0x6ec);
      if (fVar5 <= DAT_140622c24) {
        fVar5 = DAT_140622c24;
      }
      if (DAT_1406231b0 <= fVar5) {
        fVar5 = DAT_1406231b0;
      }
      *(float *)(param_2 + 0x5a) = fVar5;
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (DAT_140622c24 <= fVar6) {
        fVar6 = DAT_140622c24;
      }
      *(float *)((longlong)param_2 + 0x2cc) = fVar6;
    }
    if (cVar2 != cVar1) {
      FUN_140213180(param_2,param_2[0x1b4],(int)param_2[0xa8],0);
      return;
    }
  }
  return;
}

