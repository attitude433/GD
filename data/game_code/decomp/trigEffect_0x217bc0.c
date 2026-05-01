// Called from triggerObject base / 0x4bc180
// Function: FUN_140217bc0 @ 0x217bc0


void FUN_140217bc0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  CCObject *pCVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint local_res10 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  longlong local_60 [2];
  longlong local_50 [3];
  ulonglong local_38;
  
  lVar4 = FUN_140224280(param_1,*(undefined4 *)(param_2 + 0x684));
  local_res10[0] = 0;
  FUN_14005e660(local_68,local_res10);
  if (lVar4 != 0) {
    uVar2 = **(uint **)(lVar4 + 0x38);
    if (uVar2 != 0) {
      plVar8 = *(longlong **)(*(uint **)(lVar4 + 0x38) + 4);
      plVar1 = plVar8 + ((ulonglong)uVar2 - 1);
      for (; (plVar8 <= plVar1 && (lVar4 = *plVar8, lVar4 != 0)); plVar8 = plVar8 + 1) {
        if (*(int *)(lVar4 + 0x40c) == 0xbd8) {
          local_res10[0] = *(uint *)(lVar4 + 0x750);
          uVar9 = ((((ulonglong)(local_res10[0] >> 8 & 0xff) ^
                    ((ulonglong)(local_res10[0] & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) *
                    0x100000001b3 ^ (ulonglong)(local_res10[0] >> 0x10 & 0xff)) * 0x100000001b3 ^
                  (ulonglong)(local_res10[0] >> 0x18)) * 0x100000001b3 & local_38;
          lVar5 = *(longlong *)(local_50[0] + 8 + uVar9 * 0x10);
          if (lVar5 == local_60[0]) {
LAB_140217d00:
            lVar5 = 0;
          }
          else {
            uVar2 = *(uint *)(lVar5 + 0x10);
            while (local_res10[0] != uVar2) {
              if (lVar5 == *(longlong *)(local_50[0] + uVar9 * 0x10)) goto LAB_140217d00;
              lVar5 = *(longlong *)(lVar5 + 8);
              uVar2 = *(uint *)(lVar5 + 0x10);
            }
          }
          if (lVar5 == 0) {
            FUN_140060d70(local_68,local_78,local_res10);
            pCVar6 = cocos2d::CCDictionary::objectForKey
                               (*(CCDictionary **)(param_1 + 0x3530),(longlong)(int)local_res10[0]);
            uVar7 = FUN_140224520(param_1,*(undefined4 *)(param_2 + 0x5cc));
            iVar3 = *(int *)(param_2 + 0x5c8);
            if (iVar3 == 0) {
              iVar3 = *(int *)(lVar4 + 0x5c8);
            }
            FUN_14025cd10(*(undefined8 *)(param_1 + 0x950),iVar3,pCVar6,uVar7,
                          *(undefined4 *)(param_2 + 0x39c),*(undefined4 *)(param_2 + 0x698),0,
                          *(undefined4 *)(param_2 + 0x744),*(undefined4 *)(param_2 + 0x748),
                          *(undefined4 *)(param_2 + 0x74c),*(undefined4 *)(param_2 + 0x750),
                          *(undefined4 *)(param_2 + 0x754),*(undefined4 *)(param_2 + 0x740),param_3)
            ;
          }
        }
      }
    }
  }
  FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>(local_50);
  FUN_14005d870(local_60);
  return;
}

