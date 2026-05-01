// Function: FUN_140370b70
// Original target: ObjectToolbox_intKeyToFrame @ 0x370b70
// Ghidra entry: 140370b70
// Signature: undefined FUN_140370b70(void)
// Body size: 40 bytes


undefined8 * FUN_140370b70(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  puVar1 = (undefined8 *)FUN_1401d0660(param_1 + 0x140,local_res10);
  if (0xf < (ulonglong)puVar1[3]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  return puVar1;
}

