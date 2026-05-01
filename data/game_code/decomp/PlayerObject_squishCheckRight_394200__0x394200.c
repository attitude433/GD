// Function: FUN_140394200
// Original target: PlayerObject_squishCheckRight_394200 @ 0x394200
// Ghidra entry: 140394200
// Signature: undefined FUN_140394200(void)


void FUN_140394200(longlong param_1,float param_2,longlong param_3)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 0x39c);
  }
  dVar1 = *(double *)(param_1 + 0x968);
  dVar3 = (double)param_2;
  dVar4 = dVar3;
  if ((dVar1 != 0.0) && (dVar4 = dVar1, dVar1 <= dVar3)) {
    dVar4 = dVar3;
  }
  *(double *)(param_1 + 0x968) = dVar4;
  if (iVar2 != 0) {
    if (iVar2 != *(int *)(param_1 + 0x5d8)) {
      *(int *)(param_1 + 0x5d8) = iVar2;
      if (*(CCDictionary **)(param_1 + 0x5c0) != (CCDictionary *)0x0) {
        cocos2d::CCDictionary::setObject
                  (*(CCDictionary **)(param_1 + 0x5c0),*(CCObject **)(param_1 + 0x5a8),
                   (longlong)iVar2);
      }
    }
    *(longlong *)(param_1 + 0x610) = param_3;
    *(undefined8 *)(param_1 + 0x618) = 0;
  }
  return;
}

