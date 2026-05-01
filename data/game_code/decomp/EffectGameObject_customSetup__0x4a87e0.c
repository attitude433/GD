// Function: FUN_1404a87e0
// Original target: EffectGameObject_customSetup @ 0x4a87e0
// Ghidra entry: 1404a87e0
// Signature: undefined FUN_1404a87e0(void)


void FUN_1404a87e0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_res8 [4];
  
  FUN_1401a4f70();
  iVar2 = *(int *)((longlong)param_1 + 0x40c);
  if (iVar2 < 0x385) {
    if (iVar2 == 900) {
      *(undefined4 *)(param_1 + 0x81) = 0x3f1;
LAB_1404a8867:
      *(undefined1 *)((longlong)param_1 + 0x5df) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
    }
    else {
      if (iVar2 < 0xc9) {
        if (iVar2 != 200) {
          if (iVar2 == 0x1d) {
            *(undefined4 *)(param_1 + 0x81) = 1000;
          }
          else if (iVar2 == 0x1e) {
            *(undefined4 *)(param_1 + 0x81) = 0x3e9;
          }
          else {
            if (iVar2 != 0x69) {
              if (iVar2 == 0x8e) {
                *(undefined4 *)(param_1 + 0x74) = 0x16;
                *(undefined4 *)(param_1 + 0x84) = 9;
                goto LAB_1404a89b7;
              }
              goto LAB_1404a8a1d;
            }
            *(undefined4 *)(param_1 + 0x81) = 0x3ec;
          }
          goto LAB_1404a8867;
        }
      }
      else if (((iVar2 != 0xc9) && (iVar2 != 0xca)) && (iVar2 != 0xcb)) {
        if (iVar2 == 0x2e8) {
          *(undefined4 *)(param_1 + 0x81) = 0x3eb;
        }
        goto LAB_1404a8a1d;
      }
LAB_1404a88fc:
      *(undefined1 *)(param_1 + 0xba) = 1;
    }
  }
  else if (iVar2 < 0x813) {
    if (iVar2 == 0x812) {
      *(undefined4 *)(param_1 + 0xdb) = 0x3f800000;
    }
    else if (iVar2 == 0x393) {
      *(undefined4 *)(param_1 + 0x81) = 0x3ea;
      *(undefined1 *)((longlong)param_1 + 0x5df) = 1;
    }
    else if (iVar2 == 0x531) {
      *(undefined4 *)(param_1 + 0x74) = 0x1f;
      *(undefined4 *)(param_1 + 0x84) = 9;
      if (*(char *)((longlong)param_1 + 0x28d) == '\0') {
        if (DAT_1406c2ed8 == (longlong *)0x0) {
          local_res8[0] = FUN_1404d0770(0x668);
          DAT_1406c2ed8 = (longlong *)FUN_14017ab00(local_res8[0]);
          (**(code **)(*DAT_1406c2ed8 + 0x48))(DAT_1406c2ed8);
        }
        lVar1 = *(longlong *)(DAT_1406c2ed8[0x41] + 0x878);
        if ((*(int *)(lVar1 + 0x39c) == *(int *)(lVar1 + 0x3a0)) && (*(int *)(lVar1 + 0x454) != 2))
        {
          local_res8[0] = CONCAT53(local_res8[0]._3_5_,0x4bafff);
          (**(code **)(*param_1 + 0x530))(param_1,local_res8);
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x285) = 1;
LAB_1404a89b7:
      if ((undefined8 *)param_1[0x8a] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x8a] = 0;
      }
      *(undefined1 *)((longlong)param_1 + 0x57a) = 1;
    }
    else {
      if (iVar2 == 0x536) goto LAB_1404a88fc;
      if (iVar2 == 0x778) {
        *(undefined4 *)((longlong)param_1 + 0x5bc) = 0x42480000;
      }
    }
  }
  else {
    if (iVar2 != 0xe17) {
      if (iVar2 != 0xe38) {
        if (iVar2 == 0xe3b) {
          *(undefined2 *)(param_1 + 0xba) = 1;
        }
        goto LAB_1404a8a1d;
      }
      *(undefined2 *)(param_1 + 0xba) = 1;
    }
    *(undefined1 *)(param_1 + 0xd2) = 1;
  }
LAB_1404a8a1d:
  iVar2 = *(int *)((longlong)param_1 + 0x40c);
  if (iVar2 < 0x779) {
    if (iVar2 == 0x778) goto LAB_1404a8ab4;
    if (iVar2 < 0x63c) {
      if ((((iVar2 == 0x63b) || (iVar2 == 0x8e)) || (iVar2 == 0x4f4)) || (iVar2 == 0x531))
      goto LAB_1404a8ab4;
      bVar3 = iVar2 == 0x63a;
    }
    else {
      if ((iVar2 == 0x64b) || (iVar2 == 0x713)) goto LAB_1404a8ab4;
      bVar3 = iVar2 == 0x717;
    }
  }
  else {
    if (iVar2 < 0xe1a) {
      if (((iVar2 == 0xe19) || (iVar2 == 0x80f)) || (iVar2 == 0x814)) goto LAB_1404a8ab4;
      iVar2 = iVar2 + -0xe14;
    }
    else {
      if (iVar2 == 0xe24) goto LAB_1404a8ab4;
      iVar2 = iVar2 + -0xe38;
    }
    if (iVar2 == 0) goto LAB_1404a8ab4;
    bVar3 = iVar2 == 3;
  }
  if (!bVar3) {
    *(bool *)((longlong)param_1 + 0x73b) = (int)param_1[0x74] == 0x1e;
    return;
  }
LAB_1404a8ab4:
  *(undefined1 *)((longlong)param_1 + 0x73b) = 1;
  return;
}

