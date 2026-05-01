// GJBaseGameLayer_postCollisionCheck @ 0x25c2e0


void FUN_14025c2e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *_Memory;
  longlong *plVar3;
  
  _Memory = (longlong *)**(longlong **)(param_1 + 0x2a8);
  if (_Memory != *(longlong **)(param_1 + 0x2a8)) {
    do {
      if (*(char *)((longlong)_Memory + 0x14) == '\0') {
        iVar2 = ((int)_Memory[2] + -10000000) / 10000;
        FUN_14025c540(param_1,0,iVar2,(int)_Memory[2] + (iVar2 + 1000) * -10000);
        plVar3 = (longlong *)
                 (((((((ulonglong)*(byte *)(_Memory + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)_Memory + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)_Memory + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)_Memory + 0x13)) * 0x100000001b3 &
                  *(ulonglong *)(param_1 + 0x2d0)) * 0x10 + *(longlong *)(param_1 + 0x2b8));
        if ((longlong *)plVar3[1] == _Memory) {
          if ((longlong *)*plVar3 == _Memory) {
            lVar1 = *(longlong *)(param_1 + 0x2a8);
            *plVar3 = lVar1;
            plVar3[1] = lVar1;
          }
          else {
            plVar3[1] = _Memory[1];
          }
        }
        else if ((longlong *)*plVar3 == _Memory) {
          *plVar3 = *_Memory;
        }
        plVar3 = (longlong *)*_Memory;
        *(longlong *)(param_1 + 0x2b0) = *(longlong *)(param_1 + 0x2b0) + -1;
        *(longlong **)_Memory[1] = plVar3;
        plVar3[1] = _Memory[1];
        free(_Memory);
      }
      else {
        plVar3 = (longlong *)*_Memory;
      }
      _Memory = plVar3;
    } while (plVar3 != *(longlong **)(param_1 + 0x2a8));
  }
  return;
}

