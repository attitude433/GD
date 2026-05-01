// GJBaseGameLayer_activatePersistentItemTrigger @ 0x234a40


void FUN_140234a40(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong local_res10;
  undefined4 *local_78;
  undefined4 *puStack_70;
  undefined4 *local_68;
  undefined4 local_58 [2];
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (*(char *)(param_2 + 0x777) == '\0') {
    if (*(char *)(param_2 + 0x775) == '\0') {
      uVar2 = *(uint *)(param_2 + 0x6a0);
      local_res10 = CONCAT44(local_res10._4_4_,uVar2);
      lVar11 = *(longlong *)(param_1 + 0x950);
      if (*(char *)(param_2 + 0x774) == '\0') {
        FUN_14005d780(lVar11 + 0x370,&local_res10);
      }
      else {
        uVar12 = 0;
        uVar13 = *(ulonglong *)(lVar11 + 0x360) &
                 (((((ulonglong)(uVar2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)(uVar2 >> 8 & 0xff)) * 0x100000001b3 ^
                  (ulonglong)(uVar2 >> 0x10) & 0xff) * 0x100000001b3 ^ (ulonglong)(uVar2 >> 0x18)) *
                 0x100000001b3;
        lVar9 = *(longlong *)(*(longlong *)(lVar11 + 0x348) + 8 + uVar13 * 0x10);
        if (lVar9 == *(longlong *)(lVar11 + 0x338)) {
LAB_140234dc4:
          lVar9 = 0;
        }
        else {
          uVar1 = *(uint *)(lVar9 + 0x10);
          while (uVar2 != uVar1) {
            if (lVar9 == *(longlong *)(*(longlong *)(lVar11 + 0x348) + uVar13 * 0x10))
            goto LAB_140234dc4;
            lVar9 = *(longlong *)(lVar9 + 8);
            uVar1 = *(uint *)(lVar9 + 0x10);
          }
        }
        if (lVar9 != 0) {
          plVar10 = (longlong *)FUN_140060b20(lVar11 + 0x330,&local_78,&local_res10);
          uVar12 = *(undefined4 *)(*plVar10 + 0x14);
        }
        plVar10 = (longlong *)FUN_140060b20(lVar11 + 0x370,&local_78,&local_res10);
        *(undefined4 *)(*plVar10 + 0x14) = uVar12;
      }
      if (*(char *)(param_2 + 0x776) != '\0') {
        FUN_1402624b0(*(undefined8 *)(param_1 + 0x950),*(undefined4 *)(param_2 + 0x6a0),0);
        FUN_140233ec0(param_1,*(undefined4 *)(param_2 + 0x6a0),0);
      }
    }
    else {
      if (*(char *)(param_2 + 0x776) != '\0') {
        lVar11 = *(longlong *)(param_1 + 0x950);
        local_78 = (undefined4 *)0x0;
        puStack_70 = (undefined4 *)0x0;
        local_68 = (undefined4 *)0x0;
        local_res10 = *(ulonglong *)(lVar11 + 0x380);
        if (local_res10 != 0) {
          if (0x3fffffffffffffff < local_res10) {
                    /* WARNING: Subroutine does not return */
            FUN_140062a20();
          }
          FUN_140250b80(&local_78,&local_res10);
        }
        puVar3 = *(undefined8 **)(lVar11 + 0x378);
        puVar6 = puStack_70;
        for (puVar4 = (undefined8 *)*puVar3; puStack_70 = puVar6, puVar7 = local_78,
            puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
          if (puVar6 == local_68) {
            FUN_140063270(&local_78,puVar6);
          }
          else {
            *puVar6 = *(undefined4 *)(puVar4 + 2);
            puStack_70 = puVar6 + 1;
          }
          puVar6 = puStack_70;
        }
        for (; puVar7 != puVar6; puVar7 = puVar7 + 1) {
          FUN_1402624b0(*(undefined8 *)(param_1 + 0x950),*puVar7,0);
          FUN_140233ec0(param_1,*puVar7);
        }
        FUN_14005e430(&local_78);
      }
      if (*(char *)(param_2 + 0x774) == '\0') {
        FUN_14005e0d0(*(longlong *)(param_1 + 0x950) + 0x370);
      }
    }
  }
  else if (*(char *)(param_2 + 0x775) == '\0') {
    local_res10 = CONCAT44(local_res10._4_4_,*(undefined4 *)(param_2 + 0x6a0));
    lVar11 = *(longlong *)(param_1 + 0x950) + 0x3b0;
    if (*(char *)(param_2 + 0x774) == '\0') {
      FUN_14005d780(lVar11,&local_res10);
    }
    else {
      FUN_140060d70(lVar11,&local_78,&local_res10);
    }
    if (*(char *)(param_2 + 0x776) != '\0') {
      uVar14 = *(undefined8 *)(param_1 + 0x950);
      cVar8 = FUN_140263110(uVar14,*(undefined4 *)(param_2 + 0x6a0));
      if (cVar8 != '\0') {
        FUN_1402631b0(uVar14);
      }
    }
  }
  else {
    if (*(char *)(param_2 + 0x776) != '\0') {
      lVar11 = *(longlong *)(param_1 + 0x950);
      local_58[0] = *(undefined4 *)(lVar11 + 0x3b0);
      local_50 = (longlong *)0x0;
      local_48 = 0;
      local_50 = (longlong *)FUN_1404d0770(0x18);
      *local_50 = (longlong)local_50;
      local_50[1] = (longlong)local_50;
      local_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = *(undefined8 *)(lVar11 + 0x3e0);
      local_20 = *(undefined8 *)(lVar11 + 1000);
      FUN_14005ee00(&local_40,*(longlong *)(lVar11 + 0x3d0) - *(longlong *)(lVar11 + 0x3c8) >> 3,
                    local_50);
      puVar3 = *(undefined8 **)(lVar11 + 0x3b8);
      plVar10 = local_50;
      for (puVar4 = (undefined8 *)*puVar3; local_50 = plVar10, puVar4 != puVar3;
          puVar4 = (undefined8 *)*puVar4) {
        FUN_140060d70(local_58,&local_78,puVar4 + 2);
        plVar10 = local_50;
      }
      for (plVar5 = (longlong *)*plVar10; plVar5 != plVar10; plVar5 = (longlong *)*plVar5) {
        uVar14 = *(undefined8 *)(param_1 + 0x950);
        cVar8 = FUN_140263110(uVar14,(int)plVar5[2]);
        if (cVar8 != '\0') {
          FUN_1402631b0(uVar14);
        }
      }
      FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>
                (&local_40);
      FUN_14005d870(&local_50);
    }
    if (*(char *)(param_2 + 0x774) == '\0') {
      FUN_14005e0d0(*(longlong *)(param_1 + 0x950) + 0x3b0);
    }
  }
  return;
}

