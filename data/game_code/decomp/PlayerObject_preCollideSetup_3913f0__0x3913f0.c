// Function: FUN_1403913f0
// Original target: PlayerObject_preCollideSetup_3913f0 @ 0x3913f0
// Ghidra entry: 1403913f0
// Signature: undefined FUN_1403913f0(void)


void FUN_1403913f0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  CCPoint *pCVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  CCPoint local_res20 [8];
  double local_88;
  double local_80;
  undefined1 local_78 [88];
  
  uVar2 = *(uint *)((longlong)param_2 + 0x39c);
  uVar8 = param_1[0xda] &
          ((((ulonglong)(uVar2 >> 8 & 0xff) ^
            ((ulonglong)(uVar2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
           (ulonglong)(uVar2 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar2 >> 0x18)) *
          0x100000001b3;
  lVar6 = *(longlong *)(param_1[0xd7] + 8 + uVar8 * 0x10);
  if (lVar6 == param_1[0xd5]) {
LAB_140391490:
    lVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar6 + 0x10);
    while (uVar2 != uVar1) {
      if (lVar6 == *(longlong *)(param_1[0xd7] + uVar8 * 0x10)) goto LAB_140391490;
      lVar6 = *(longlong *)(lVar6 + 8);
      uVar1 = *(uint *)(lVar6 + 0x10);
    }
  }
  if (lVar6 == 0) {
    (**(code **)(*param_2 + 0x4a8))(param_2,&local_res8);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_res18,(CCPoint *)&local_res8);
    pCVar7 = (CCPoint *)(**(code **)(*param_1 + 200))(param_1);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_res10,pCVar7);
    fVar10 = DAT_140622d08;
    fVar9 = sinf(DAT_140622d08);
    fVar10 = cosf(fVar10);
    fVar11 = local_res8 - local_res10;
    local_res8 = (fVar10 * fVar11 - fVar9 * (local_resc - local_res14)) + local_res10;
    local_resc = fVar10 * (local_resc - local_res14) + fVar9 * fVar11 + local_res14;
    dVar3 = (double)(local_res8 - local_res18);
    dVar4 = (double)(local_resc - local_res1c);
    if ((char)param_2[0x59] == '\0') {
      param_2[0x77] = (longlong)(dVar3 + (double)param_2[0x77]);
    }
    param_2[0x78] = (longlong)(dVar4 + (double)param_2[0x78]);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&local_88,local_res8 - local_res18,local_resc - local_res1c);
    cocos2d::CCPoint::operator+((CCPoint *)(param_2 + 0x9a),local_res20);
    cocos2d::CCPoint::operator=((CCPoint *)(param_2 + 0x9a),local_res20);
    *(float *)((longlong)param_2 + 0x3d4) = *(float *)((longlong)param_2 + 0x3d4) - DAT_140623294;
    *(float *)(param_2 + 0x7b) = *(float *)(param_2 + 0x7b) - DAT_140623294;
    (**(code **)(*param_2 + 0x520))(param_2,0);
    (**(code **)(*param_2 + 0x648))(param_2,1);
    iVar5 = (**(code **)(*param_2 + 0x660))(param_2);
    if (iVar5 == 0x19) {
      FUN_14019c2c0(param_2);
    }
    local_88 = dVar3;
    local_80 = dVar4;
    FUN_1403a3ff0(param_1 + 0xd4,local_78,(longlong)param_2 + 0x39c,&local_88);
  }
  return;
}

