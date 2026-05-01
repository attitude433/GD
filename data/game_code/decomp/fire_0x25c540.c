
void FUN_14025c540(longlong param_1,byte param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint local_res8 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  iVar3 = 0;
  lVar5 = *(longlong *)(param_1 + 0x248);
  lVar6 = *(longlong *)(param_1 + 0x250) - lVar5;
  lVar4 = lVar6 >> 0x3f;
  if (lVar6 / 0x38 + lVar4 != lVar4) {
    lVar4 = 0;
    do {
      if ((((*(char *)(lVar4 + lVar5) == '\0') && (*(uint *)(lVar4 + 0x10 + lVar5) != (uint)param_2)
           ) && (*(int *)(lVar4 + 4 + lVar5) == param_3)) &&
         (*(int *)(lVar4 + 8 + lVar5) == param_4)) {
        if (*(longlong *)(param_1 + 0x140) == 0) {
          local_res8[0] = *(uint *)(lVar4 + 0xc + lVar5);
          uVar2 = local_res8[0];
          if ((int)local_res8[0] < 0) {
            uVar2 = 0;
          }
          if ((int)uVar2 < 10000) {
            if ((int)local_res8[0] < 0) {
              local_res8[0] = 0;
            }
          }
          else {
            local_res8[0] = 9999;
          }
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x4f8) +
                           ((ulonglong)(longlong)(int)local_res8[0] >> 5) * 4);
          if (*(char *)(lVar4 + 0x14 + lVar5) == '\0') {
            *puVar1 = *puVar1 & ~(1 << (local_res8[0] & 0x1f));
            FUN_140060d70(param_1 + 0x518,local_58,local_res8);
          }
          else {
            *puVar1 = *puVar1 | 1 << (local_res8[0] & 0x1f);
            FUN_14005d780(param_1 + 0x518,local_res8);
          }
        }
        else {
          FUN_14024b270(local_48,lVar5 + 0x20 + lVar4);
          (**(code **)**(undefined8 **)(param_1 + 0x140))
                    (*(undefined8 **)(param_1 + 0x140),*(undefined4 *)(lVar4 + 0xc + lVar5),
                     *(undefined1 *)(lVar4 + 0x14 + lVar5),local_48,
                     *(undefined4 *)(lVar4 + 0x18 + lVar5),*(undefined4 *)(lVar4 + 0x1c + lVar5));
          FUN_14005e430(local_48);
        }
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x38;
      lVar5 = *(longlong *)(param_1 + 0x248);
    } while ((ulonglong)(longlong)iVar3 <
             (ulonglong)((*(longlong *)(param_1 + 0x250) - lVar5) / 0x38));
  }
  return;
}

