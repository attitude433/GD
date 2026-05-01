// Function: FUN_1403942a0
// Original target: PlayerObject_squishCheckLeft_3942a0 @ 0x3942a0
// Ghidra entry: 1403942a0
// Signature: undefined FUN_1403942a0(void)


void FUN_1403942a0(longlong param_1,float param_2,longlong param_3)

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
  dVar1 = *(double *)(param_1 + 0x970);
  dVar3 = (double)param_2;
  dVar4 = dVar3;
  if ((dVar1 != 0.0) && (dVar4 = dVar1, dVar3 <= dVar1)) {
    dVar4 = dVar3;
  }
  *(double *)(param_1 + 0x970) = dVar4;
  if (iVar2 != 0) {
    if (iVar2 != *(int *)(param_1 + 0x5dc)) {
      *(int *)(param_1 + 0x5dc) = iVar2;
      if (*(CCDictionary **)(param_1 + 0x5c8) != (CCDictionary *)0x0) {
        cocos2d::CCDictionary::setObject
                  (*(CCDictionary **)(param_1 + 0x5c8),*(CCObject **)(param_1 + 0x5a8),
                   (longlong)iVar2);
      }
    }
    *(longlong *)(param_1 + 0x618) = param_3;
    *(undefined8 *)(param_1 + 0x610) = 0;
  }
  return;
}

