// Called from triggerObject base / 0x4bc180
// Function: FUN_14023feb0 @ 0x23feb0


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14023feb0(longlong *param_1,undefined4 param_2,CCPoint *param_3,float param_4,float param_5
                  )

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  CCArray *this;
  longlong *plVar6;
  CCPoint *pCVar7;
  CCObject *pCVar8;
  CCParticleSystem *this_00;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_XMM1_Da;
  float fVar14;
  float fVar15;
  float _X;
  undefined1 auStack_188 [32];
  int local_168;
  undefined4 local_160;
  undefined1 local_158;
  float local_148;
  float local_144;
  CCPoint local_140 [8];
  CCPoint local_138 [16];
  CCPoint local_128 [8];
  CCPoint local_120 [8];
  undefined1 local_118 [32];
  ulonglong local_f8;
  
  local_f8 = DAT_1406ba040 ^ (ulonglong)auStack_188;
  if (param_5 == 0.0) {
    param_5 = DAT_140622c24;
  }
  this = (CCArray *)FUN_140224280();
  cocos2d::CCPoint::CCPoint(local_140);
  plVar6 = (longlong *)FUN_140224520(param_1,param_2);
  if (plVar6 != (longlong *)0x0) {
    pCVar7 = (CCPoint *)(**(code **)(*plVar6 + 200))(plVar6);
    cocos2d::CCPoint::operator=(local_140,pCVar7);
  }
  uVar10 = 0;
  uVar5 = cocos2d::CCArray::count(this);
  uVar4 = DAT_1406243f0;
  if (uVar5 != 0) {
    do {
      pCVar8 = cocos2d::CCArray::objectAtIndex(this,uVar10);
      if (*(int *)(pCVar8 + 0x40c) == 0x811) {
        if (pCVar8[0x5d8] != (CCObject)0x0) {
          pCVar8[0x5d8] = (CCObject)0x0;
          FUN_140067570(pCVar8 + 0x5b8,pCVar8 + 0x5e0);
        }
        FUN_14003bdb0(local_118,pCVar8 + 0x5b8);
        local_168 = *(int *)(pCVar8 + 0x470);
        if (local_168 == 0) {
          local_168 = *(int *)(pCVar8 + 0x420);
        }
        iVar2 = *(int *)(pCVar8 + 0x46c);
        if (iVar2 == 0) {
          iVar2 = *(int *)(pCVar8 + 0x464);
        }
        local_158 = 1;
        local_160 = 0;
        this_00 = (CCParticleSystem *)
                  (**(code **)(*param_1 + 0x518))(param_1,local_118,pCVar8 + 0x5e0,iVar2);
        FUN_14003a830(local_118);
        if (this_00 != (CCParticleSystem *)0x0) {
          pCVar7 = param_3;
          if (plVar6 != (longlong *)0x0) {
            pCVar7 = (CCPoint *)(**(code **)(*(longlong *)pCVar8 + 200))(pCVar8);
            cocos2d::CCPoint::CCPoint((CCPoint *)&local_148,pCVar7);
            if (param_4 != 0.0) {
              pfVar9 = (float *)cocos2d::CCPoint::CCPoint(local_120,local_140);
              if ((float)((uint)param_4 ^ uVar4) != 0.0) {
                _X = (float)((uint)param_4 ^ uVar4) * DAT_1406229bc;
                fVar13 = *pfVar9;
                fVar15 = local_148 - fVar13;
                fVar1 = pfVar9[1];
                fVar14 = local_144 - fVar1;
                fVar11 = cosf(_X);
                fVar12 = sinf(_X);
                local_148 = (fVar11 * fVar15 - fVar12 * fVar14) + fVar13;
                fVar13 = cosf(_X);
                fVar11 = sinf(_X);
                local_144 = fVar13 * fVar14 + fVar11 * fVar15 + fVar1;
              }
            }
            cocos2d::CCPoint::operator-((CCPoint *)&local_148,local_138);
            cocos2d::CCPoint::operator*(local_138,in_XMM1_Da);
            cocos2d::CCPoint::operator+(param_3,local_128);
            cocos2d::CCPoint::operator=((CCPoint *)&local_148,local_128);
            pCVar7 = (CCPoint *)&local_148;
          }
          (**(code **)(*(longlong *)this_00 + 0xb8))(this_00,pCVar7);
          if ((pCVar8[0x331] != (CCObject)0x0) || (pCVar8[0x708] != (CCObject)0x0)) {
            (**(code **)(*param_1 + 0x508))(param_1,pCVar8);
          }
          FUN_1404a0230(pCVar8,this_00);
          fVar13 = (float)(**(code **)(*(longlong *)this_00 + 0x380))(this_00);
          if (fVar13 < 0.0) {
            (**(code **)(*(longlong *)this_00 + 0x388))(this_00,0);
          }
          lVar3 = *(longlong *)this_00;
          fVar13 = (float)(**(code **)(*(longlong *)pCVar8 + 0x158))(pCVar8);
          (**(code **)(lVar3 + 0x150))(this_00,fVar13 + param_4);
          lVar3 = *(longlong *)this_00;
          fVar13 = (float)(**(code **)(*(longlong *)pCVar8 + 0x80))(pCVar8);
          (**(code **)(lVar3 + 0x78))(this_00,fVar13 * param_5);
          lVar3 = *(longlong *)this_00;
          in_XMM1_Da = (float)(**(code **)(*(longlong *)pCVar8 + 0x90))(pCVar8);
          in_XMM1_Da = in_XMM1_Da * param_5;
          (**(code **)(lVar3 + 0x88))(this_00);
          (**(code **)(*(longlong *)pCVar8 + 0x140))(pCVar8,1);
          cocos2d::CCParticleSystem::resumeSystem(this_00);
        }
      }
      uVar10 = uVar10 + 1;
      uVar5 = cocos2d::CCArray::count(this);
    } while (uVar10 < uVar5);
  }
  return;
}

