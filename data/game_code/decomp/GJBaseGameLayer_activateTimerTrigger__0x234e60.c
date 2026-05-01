// GJBaseGameLayer_activateTimerTrigger @ 0x234e60


void FUN_140234e60(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  double dVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 *local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  double local_60 [2];
  undefined1 local_50 [40];
  
  iVar4 = *(int *)(param_2 + 0x40c);
  if (iVar4 == 0xe1e) {
    FUN_140262f50(*(undefined8 *)(param_1 + 0x950),*(undefined4 *)(param_2 + 0x6a0),
                  *(undefined8 *)(param_2 + 0x740),*(undefined8 *)(param_2 + 0x748),
                  *(undefined1 *)(param_2 + 0x750),*(char *)(param_2 + 0x758) == '\0',
                  *(undefined1 *)(param_2 + 0x751),*(undefined4 *)(param_2 + 0x754),
                  *(undefined1 *)(param_2 + 0x752),*(undefined4 *)(param_2 + 0x5c8),param_3,
                  *(undefined4 *)(param_2 + 0x39c),*(undefined4 *)(param_2 + 0x698));
  }
  else if (iVar4 == 0xe1f) {
    uVar6 = *(undefined4 *)(param_2 + 0x698);
    uVar7 = *(undefined4 *)(param_2 + 0x39c);
    uVar8 = *(undefined4 *)(param_2 + 0x5c8);
    uVar3 = *(undefined1 *)(param_2 + 0x759);
    local_res10[0] = (undefined1 *)CONCAT71(local_res10[0]._1_7_,uVar3);
    dVar2 = *(double *)(param_2 + 0x748);
    local_res20[0] = *(undefined4 *)(param_2 + 0x6a0);
    local_78[0] = uVar6;
    local_70[0] = uVar7;
    local_68[0] = uVar8;
    local_60[0] = dVar2;
    plVar12 = (longlong *)FUN_140267110(*(longlong *)(param_1 + 0x950) + 0x4b0,local_50,local_res20)
    ;
    lVar9 = *plVar12;
    puVar10 = *(undefined1 **)(lVar9 + 0x20);
    if (puVar10 == *(undefined1 **)(lVar9 + 0x28)) {
      FUN_14026ccb0(lVar9 + 0x18,puVar10,local_68,local_60,local_res10,local_res20,param_3,local_70,
                    local_78);
    }
    else {
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 0x20) = 0;
      *(undefined8 *)(puVar10 + 0x28) = 0;
      *(undefined8 *)(puVar10 + 0x30) = 0;
      *(undefined4 *)(puVar10 + 0xc) = uVar8;
      *(float *)(puVar10 + 8) = (float)dVar2;
      puVar10[0x1c] = uVar3;
      *(undefined4 *)(puVar10 + 0x18) = local_res20[0];
      *(undefined4 *)(puVar10 + 0x10) = uVar7;
      *(undefined4 *)(puVar10 + 0x14) = uVar6;
      local_res10[0] = puVar10;
      FUN_1400846d0(puVar10 + 0x20,param_3);
      *(longlong *)(lVar9 + 0x20) = *(longlong *)(lVar9 + 0x20) + 0x38;
    }
  }
  else if (iVar4 == 0xe21) {
    if (*(int *)(param_2 + 0x75c) == 0) {
      uVar5 = *(uint *)(param_2 + 0x6a0);
      local_res10[0] = (undefined1 *)CONCAT44(local_res10[0]._4_4_,uVar5);
      lVar9 = *(longlong *)(param_1 + 0x950);
      uVar11 = *(ulonglong *)(lVar9 + 0x4a0) &
               ((((ulonglong)(uVar5 >> 8 & 0xff) ^
                 ((ulonglong)(uVar5 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
                (ulonglong)(uVar5 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar5 >> 0x18)) *
               0x100000001b3;
      lVar13 = *(longlong *)(*(longlong *)(lVar9 + 0x488) + 8 + uVar11 * 0x10);
      if (lVar13 == *(longlong *)(lVar9 + 0x478)) {
LAB_140234f52:
        lVar13 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar13 + 0x10);
        while (uVar5 != uVar1) {
          if (lVar13 == *(longlong *)(*(longlong *)(lVar9 + 0x488) + uVar11 * 0x10))
          goto LAB_140234f52;
          lVar13 = *(longlong *)(lVar13 + 8);
          uVar1 = *(uint *)(lVar13 + 0x10);
        }
      }
      if (lVar13 != 0) {
        plVar12 = (longlong *)FUN_140267360(lVar9 + 0x470,local_60,local_res10);
        *(undefined1 *)(*plVar12 + 0x28) = 1;
      }
    }
    else if (*(int *)(param_2 + 0x75c) == 1) {
      uVar5 = *(uint *)(param_2 + 0x6a0);
      local_res10[0] = (undefined1 *)CONCAT44(local_res10[0]._4_4_,uVar5);
      lVar9 = *(longlong *)(param_1 + 0x950);
      uVar11 = *(ulonglong *)(lVar9 + 0x4a0) &
               ((((ulonglong)(uVar5 >> 8 & 0xff) ^
                 ((ulonglong)(uVar5 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
                (ulonglong)(uVar5 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar5 >> 0x18)) *
               0x100000001b3;
      lVar13 = *(longlong *)(*(longlong *)(lVar9 + 0x488) + 8 + uVar11 * 0x10);
      if (lVar13 == *(longlong *)(lVar9 + 0x478)) {
LAB_140235031:
        lVar13 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar13 + 0x10);
        while (uVar5 != uVar1) {
          if (lVar13 == *(longlong *)(*(longlong *)(lVar9 + 0x488) + uVar11 * 0x10))
          goto LAB_140235031;
          lVar13 = *(longlong *)(lVar13 + 8);
          uVar1 = *(uint *)(lVar13 + 0x10);
        }
      }
      if (lVar13 != 0) {
        plVar12 = (longlong *)FUN_140267360(lVar9 + 0x470,local_60,local_res10);
        *(undefined1 *)(*plVar12 + 0x28) = 0;
      }
    }
  }
  return;
}

