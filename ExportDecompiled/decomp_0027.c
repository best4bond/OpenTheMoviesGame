//// FUNCTION FUN_007d5a30 @ 007d5a30 ////

void __fastcall FUN_007d5a30(int param_1)

{
  FUN_007d47b0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_007d5ae0 @ 007d5ae0 ////

void FUN_007d5ae0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_007d3c80(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_007d5b00 @ 007d5b00 ////

undefined4 * FUN_007d5b00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0043;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    CeremonyState_AttachToController(puVar1,extraout_EDX);
    *puVar1 = &PTR_FUN_00d58514;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_007d5380(DAT_0104e9c8);
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_007d5ba0 @ 007d5ba0 ////

undefined4 * FUN_007d5ba0(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce005b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_007d5c00(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d5c00 @ 007d5c00 ////

undefined4 * __fastcall FUN_007d5c00(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d58528;
  local_4 = 0;
  FUN_007c9f20(&PTR_DAT_00e5b6d4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b714,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b694,0.33);
  FUN_007c9f20(&PTR_DAT_00e5b674,1.0);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007d5ce0 @ 007d5ce0 ////

undefined4 * __thiscall FUN_007d5ce0(void *this,byte param_1)

{
  FUN_007d5d00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d5d00 @ 007d5d00 ////

void __fastcall FUN_007d5d00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d5d10 @ 007d5d10 ////

undefined4 * __thiscall FUN_007d5d10(void *this,byte param_1)

{
  FUN_007d5d30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d5d30 @ 007d5d30 ////

void __fastcall FUN_007d5d30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d5d40 @ 007d5d40 ////

undefined4 * FUN_007d5d40(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce009b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_007d5da0(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d5da0 @ 007d5da0 ////

undefined4 * __fastcall FUN_007d5da0(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce00b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d5853c;
  local_4 = 0;
  FUN_007d5490(DAT_0104e9c8);
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x3a0) + 0x20))(0);
  ExceptionList = param_1;
  return param_1;
}


//// FUNCTION FUN_007d5e50 @ 007d5e50 ////

undefined4 * __thiscall FUN_007d5e50(void *this,byte param_1)

{
  FUN_007d5e70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d5e70 @ 007d5e70 ////

void __fastcall FUN_007d5e70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d5e80 @ 007d5e80 ////

undefined4 * FUN_007d5e80(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce00e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_007d2710(DAT_0104e9c8 + 0x440);
  if (uVar1 < 2) {
    puVar2 = operator_new(8);
    local_4 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_007d5f20(puVar2,extraout_EDX_00);
      ExceptionList = local_c;
      return puVar2;
    }
  }
  else {
    puVar2 = operator_new(8);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_007d6020(puVar2,extraout_EDX);
      ExceptionList = local_c;
      return puVar2;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d5f20 @ 007d5f20 ////

undefined4 * __fastcall FUN_007d5f20(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *unaff_ESI;
  ulonglong uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce00f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar2 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar2;
  *param_1 = &PTR_FUN_00d58550;
  puVar1 = (undefined4 *)(DAT_0104e9c8 + 0x3b8);
  *(undefined4 *)(DAT_0104e9c8 + 0x3bc) = 0;
  local_4 = 0;
  (**(code **)(*(int *)*puVar1 + 0x20))(0);
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x3a0) + 0x20))(0);
  FUN_007c9f20(&PTR_DAT_00e5b694,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b674,1.0);
  ExceptionList = unaff_ESI;
  return param_1;
}


//// FUNCTION FUN_007d5ff0 @ 007d5ff0 ////

undefined4 * __thiscall FUN_007d5ff0(void *this,byte param_1)

{
  FUN_007d6010(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d6010 @ 007d6010 ////

void __fastcall FUN_007d6010(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d6020 @ 007d6020 ////

undefined4 * __fastcall FUN_007d6020(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0118;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar2 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar2;
  *param_1 = &PTR_FUN_00d58564;
  puVar1 = (undefined4 *)(DAT_0104e9c8 + 0x3b8);
  *(undefined4 *)(DAT_0104e9c8 + 0x3bc) = 0;
  local_4 = 0;
  (**(code **)(*(int *)*puVar1 + 0x20))(0);
  FUN_007c9f20(&PTR_DAT_00e5b6b4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b6f4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b674,0.0);
  ExceptionList = param_1;
  return param_1;
}


//// FUNCTION FUN_007d6100 @ 007d6100 ////

undefined4 * __thiscall FUN_007d6100(void *this,byte param_1)

{
  FUN_007d6120(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d6120 @ 007d6120 ////

void __fastcall FUN_007d6120(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d6130 @ 007d6130 ////

undefined4 * __fastcall FUN_007d6130(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *unaff_ESI;
  ulonglong uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0138;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar3 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar3;
  *param_1 = &PTR_FUN_00d58578;
  local_4 = 0;
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x3a0) + 0x20))(0);
  puVar1 = (undefined4 *)(DAT_0104e9c8 + 0x3b8);
  *(undefined4 *)(DAT_0104e9c8 + 0x3bc) = 0;
  (**(code **)(*(int *)*puVar1 + 0x20))(0);
  FUN_007c9f20(&PTR_DAT_00e5b694,0.0);
  if (((*(int *)(DAT_0104e9c8 + 0x418) != *(int *)(DAT_0104e9c8 + 0x410)) &&
      (iVar2 = *(int *)(DAT_0104e9c8 + 0x40c), iVar2 != 0)) &&
     (*(int *)(DAT_0104e9c8 + 0x410) - iVar2 >> 2 != 0)) {
    FUN_007d1a20(*(void **)(DAT_0104e9c8 + 0x3d4),*(int *)(DAT_0104e9c8 + 0x418) - iVar2 >> 2);
    ExceptionList = unaff_ESI;
    return param_1;
  }
  FUN_007d1760(*(int *)(DAT_0104e9c8 + 0x3d4));
  ExceptionList = unaff_ESI;
  return param_1;
}


//// FUNCTION FUN_007d6220 @ 007d6220 ////

bool __fastcall FUN_007d6220(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  return *(int *)(param_1 + 4) + 2000U < (uint)uVar1;
}


//// FUNCTION FUN_007d6240 @ 007d6240 ////

undefined4 * FUN_007d6240(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0163;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    CeremonyState_AttachToController(puVar1,extraout_EDX);
    local_4 = CONCAT31(local_4._1_3_,1);
    *puVar1 = &PTR_FUN_00d5858c;
    FUN_007d3010(0.0);
    FUN_007d3050();
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d62f0 @ 007d62f0 ////

undefined4 * __thiscall FUN_007d62f0(void *this,byte param_1)

{
  FUN_007d6310(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d6310 @ 007d6310 ////

void __fastcall FUN_007d6310(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d6320 @ 007d6320 ////

undefined4 * __thiscall FUN_007d6320(void *this,byte param_1)

{
  FUN_007d6340(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d6340 @ 007d6340 ////

void __fastcall FUN_007d6340(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d6350 @ 007d6350 ////

undefined4 * FUN_007d6350(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce017b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_007d63b0(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d63b0 @ 007d63b0 ////

undefined4 * __fastcall FUN_007d63b0(undefined4 *param_1,undefined4 param_2)

{
  void *unaff_ESI;
  ulonglong uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0198;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d585a0;
  local_4 = 0;
  FUN_007d4b60(DAT_0104e9c8);
  FUN_007c9f20(&PTR_DAT_00e5b6b4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b6f4,0.0);
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x370) + 0xfc))
            (*(undefined4 *)(**(int **)(DAT_0104e9c8 + 0x418) + 0x60),0);
  ExceptionList = unaff_ESI;
  return param_1;
}


//// FUNCTION FUN_007d64c0 @ 007d64c0 ////

undefined4 * __thiscall FUN_007d64c0(void *this,byte param_1)

{
  FUN_007d64e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d64e0 @ 007d64e0 ////

void __fastcall FUN_007d64e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d64f0 @ 007d64f0 ////

undefined4 * FUN_007d64f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce01c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    CeremonyState_AttachToController(puVar1,extraout_EDX);
    *puVar1 = &PTR_FUN_00d585b4;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_007d4f10(DAT_0104e9c8);
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_007d6590 @ 007d6590 ////

undefined4 * __thiscall FUN_007d6590(void *this,byte param_1)

{
  FUN_007d65b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d65b0 @ 007d65b0 ////

void __fastcall FUN_007d65b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d65c0 @ 007d65c0 ////

undefined4 * FUN_007d65c0(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce01db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_007d6620(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d6620 @ 007d6620 ////

undefined4 * __fastcall FUN_007d6620(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce01f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d585c8;
  local_4 = 0;
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x3a0) + 0x20))(0);
  FUN_007c9f20(&PTR_DAT_00e5b674,1.0);
  FUN_007c9f20(&PTR_DAT_00e5b6d4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b714,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b694,0.33);
  ExceptionList = param_1;
  return param_1;
}


//// FUNCTION FUN_007d6720 @ 007d6720 ////

undefined4 * __thiscall FUN_007d6720(void *this,byte param_1)

{
  FUN_007d6740(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d6740 @ 007d6740 ////

void __fastcall FUN_007d6740(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d6750 @ 007d6750 ////

undefined4 * FUN_007d6750(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0223;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    CeremonyState_AttachToController(puVar1,extraout_EDX);
    *puVar1 = &PTR_FUN_00d585dc;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_007d5240(DAT_0104e9c8);
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_007d67f0 @ 007d67f0 ////

undefined4 * __thiscall FUN_007d67f0(void *this,byte param_1)

{
  FUN_007d6810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d6810 @ 007d6810 ////

void __fastcall FUN_007d6810(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d6820 @ 007d6820 ////

undefined4 * FUN_007d6820(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce023b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_007d6130(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d6880 @ 007d6880 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007d6880(int *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar5;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  uint extraout_ECX_08;
  uint extraout_ECX_09;
  uint uVar6;
  uint extraout_ECX_10;
  int extraout_ECX_11;
  int *piVar7;
  undefined4 extraout_EDX;
  undefined4 uVar8;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  int extraout_EDX_09;
  undefined4 extraout_EDX_10;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0266;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053d480((int)param_1);
  WWindow_Tick(param_1);
  uVar5 = extraout_ECX;
  uVar8 = extraout_EDX;
  if (param_1[0xef] != 0) {
    uVar9 = FUN_00990ae0(extraout_ECX,extraout_EDX);
    uVar8 = (undefined4)(uVar9 >> 0x20);
    uVar5 = extraout_ECX_00;
    if ((uint)uVar9 < (uint)param_1[0xef]) {
      param_1[0xef] = 0;
      (**(code **)(*(int *)param_1[0xee] + 0x20))(0);
      uVar5 = extraout_ECX_01;
      uVar8 = extraout_EDX_00;
    }
  }
  if ((int *)param_1[0x107] == (int *)0x0) {
    iVar4 = param_1[0x106];
    if (iVar4 != param_1[0x104]) {
      param_1[0x106] = iVar4 + 4;
      if (iVar4 + 4 == param_1[0x104]) {
        puVar3 = operator_new(8);
        uStack_4 = 1;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_007d3190(puVar3,extraout_EDX_06);
        }
        uStack_4 = 0xffffffff;
        param_1[0x107] = (int)puVar3;
        FUN_007d56b0((int)param_1);
        iVar4 = extraout_ECX_07;
        uVar8 = extraout_EDX_07;
      }
      else {
        puVar3 = operator_new(8);
        uStack_4 = 0;
        if (puVar3 == (undefined4 *)0x0) {
          uStack_4 = 0xffffffff;
          param_1[0x107] = 0;
          iVar4 = extraout_ECX_05;
          uVar8 = extraout_EDX_04;
        }
        else {
          puVar3 = FUN_007d6130(puVar3,extraout_EDX_04);
          uStack_4 = 0xffffffff;
          param_1[0x107] = (int)puVar3;
          iVar4 = extraout_ECX_06;
          uVar8 = extraout_EDX_05;
        }
      }
    }
  }
  else {
    iVar4 = *(int *)param_1[0x107];
    uVar9 = FUN_00990ae0(uVar5,uVar8);
    (**(code **)(iVar4 + 8))((int)uVar9);
    cVar2 = (**(code **)(*(int *)param_1[0x107] + 0xc))();
    iVar4 = extraout_ECX_02;
    uVar8 = extraout_EDX_01;
    if (cVar2 != '\0') {
      uVar10 = (**(code **)(*(int *)param_1[0x107] + 4))();
      uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
      iVar4 = 0;
      if ((undefined4 *)param_1[0x107] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0x107])(1);
        iVar4 = extraout_ECX_03;
        uVar8 = extraout_EDX_02;
      }
      param_1[0x107] = (int)uVar10;
    }
    if (param_1[0x107] != 0) goto LAB_007d6b33;
    if (param_1[0x106] == param_1[0x104]) {
      FUN_007d3e60((int)param_1);
      iVar4 = extraout_ECX_04;
      uVar8 = extraout_EDX_03;
    }
  }
  if (param_1[0x107] != 0) {
LAB_007d6b33:
    uVar9 = FUN_00990ae0(iVar4,uVar8);
    DAT_0104e9b0 = (int)uVar9;
    ExceptionList = pvStack_c;
    return;
  }
  if ((_DAT_0104e9e0 & 1) == 0) {
    _DAT_0104e9e0 = _DAT_0104e9e0 | 1;
    _DAT_0104e9cc = "DebutAwardRotateInterval";
    _DAT_0104e9d0 = "awards";
    _DAT_0104e9d4 = 0;
    DAT_0104e9dc = 0;
  }
  iVar4 = FUN_007d5770(&DAT_0104e9cc);
  uVar1 = iVar4 + DAT_0104e9b0;
  uVar11 = FUN_00990ae0(DAT_0104e9b0,extraout_EDX_08);
  iVar4 = (int)(uVar11 >> 0x20);
  uVar9 = CONCAT44(iVar4,DAT_0104e9b0);
  uVar6 = extraout_ECX_08;
  if (uVar1 < (uint)uVar11) {
    uVar1 = param_1[0x111];
    uVar6 = uVar1;
    if ((uVar1 != 0) && (1 < (uint)((int)(param_1[0x112] - uVar1) >> 2))) {
      uVar6 = (uint)(param_1[0x114] != *(int *)(uVar1 + 4));
      iVar4 = *(int *)(uVar1 + uVar6 * 4);
      param_1[0x114] = iVar4;
    }
    uVar9 = FUN_00990ae0(uVar6,iVar4);
    uVar6 = extraout_ECX_09;
  }
  DAT_0104e9b0 = (int)uVar9;
  if (param_1[0x10e] != 0) {
    uVar11 = FUN_00990ae0(uVar6,(int)(uVar9 >> 0x20));
    uVar9 = CONCAT44((int)(uVar11 >> 0x20),DAT_0104e9b0);
    uVar6 = param_1[0x10e] + 0xfa;
    if (uVar6 < (uint)uVar11) {
      iVar4 = param_1[0x10d];
      if (iVar4 != param_1[0x114]) {
        (**(code **)(*(int *)param_1[0xdc] + 0x100))();
        param_1[0x10d] = 0x46;
        uVar6 = extraout_ECX_10;
        iVar4 = extraout_EDX_09;
      }
      param_1[0x10e] = 0;
      uVar9 = CONCAT44(iVar4,DAT_0104e9b0);
    }
  }
  DAT_0104e9b0 = (int)uVar9;
  uVar9 = FUN_00990ae0(uVar6,(int)(uVar9 >> 0x20));
  if (param_1[0x10f] + 0x5dcU < (uint)uVar9) {
    if (param_1[0x10e] != 0) {
      ExceptionList = pvStack_c;
      return;
    }
    if (param_1[0x10d] == param_1[0x114]) {
      ExceptionList = pvStack_c;
      return;
    }
    if (param_1[0x114] == 0x46) {
      ExceptionList = pvStack_c;
      return;
    }
    cVar2 = (**(code **)(*(int *)param_1[0xdc] + 0x104))();
    piVar7 = (int *)param_1[0xdc];
    if (cVar2 != '\0') {
      (**(code **)(*piVar7 + 0xfc))(param_1[0x114],1);
      param_1[0x10d] = param_1[0x114];
      iVar4 = extraout_ECX_11;
      uVar8 = extraout_EDX_10;
      goto LAB_007d6b33;
    }
  }
  else {
    cVar2 = FUN_007bd2d0(param_1[0x109]);
    if (cVar2 != '\0') {
      ExceptionList = pvStack_c;
      return;
    }
    if (param_1[0x10d] != param_1[0x114]) {
      ExceptionList = pvStack_c;
      return;
    }
    if (param_1[0x10e] != 0) {
      ExceptionList = pvStack_c;
      return;
    }
    piVar7 = (int *)param_1[0xdc];
  }
  (**(code **)(*piVar7 + 0x100))();
  param_1[0x10d] = 0x46;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007d6ba0 @ 007d6ba0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007d6ba0(int param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  void *unaff_ESI;
  ulonglong uVar4;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ce0280;
  pvStack_c = ExceptionList;
  iVar3 = *(int *)(*(int *)(param_1 + 0x448) + -4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004073f0(&local_4c,"AWARDS_DIALOGUE_CONCLUDE_3_",0x1b);
  ppuVar2 = FUN_00860970(iVar3);
  FUN_004073f0(&local_4c,*ppuVar2,(size_t)ppuVar2[1]);
  FUN_009b5030(local_2c,&local_4c);
  local_4._0_1_ = 1;
  FUN_007d3f90(param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  FUN_007c9f40((int *)&local_4c);
  (**(code **)(**(int **)(param_1 + 0x370) + 0xfc))(iVar3,1);
  uVar1 = _DAT_0104e9f8 & 1;
  *(int *)(param_1 + 0x450) = iVar3;
  *(int *)(param_1 + 0x434) = iVar3;
  if (uVar1 == 0) {
    _DAT_0104e9f8 = _DAT_0104e9f8 | 1;
    _DAT_0104e9e4 = "DebutAwardFirstInterval";
    _DAT_0104e9e8 = "awards";
    _DAT_0104e9ec = 0;
    DAT_0104e9f4 = 0;
  }
  iVar3 = FUN_007d5770(&DAT_0104e9e4);
  uVar4 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  DAT_0104e9b0 = iVar3 + (int)uVar4;
  if (&DAT_00000014 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_007d6dd0 @ 007d6dd0 ////

void __fastcall FUN_007d6dd0(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_007d6e00 @ 007d6e00 ////

void __fastcall FUN_007d6e00(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_007d6e30 @ 007d6e30 ////

int __fastcall FUN_007d6e30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007d46d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007d6e60 @ 007d6e60 ////

undefined4 * FUN_007d6e60(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_007d48c0(param_1,param_2,param_3);
  return param_1 + param_2;
}


//// FUNCTION FUN_007d6e90 @ 007d6e90 ////

int __fastcall FUN_007d6e90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007d4720();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007d6ed0 @ 007d6ed0 ////

undefined4 * FUN_007d6ed0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce02a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    CeremonyState_AttachToController(puVar1,extraout_EDX);
    *puVar1 = &PTR_FUN_00d58648;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_007d6ba0(DAT_0104e9c8);
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_007d6f70 @ 007d6f70 ////

undefined4 * __thiscall FUN_007d6f70(void *this,byte param_1)

{
  FUN_007d6f90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d6f90 @ 007d6f90 ////

void __fastcall FUN_007d6f90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d6fa0 @ 007d6fa0 ////

undefined4 * FUN_007d6fa0(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce02bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_007d5f20(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d7000 @ 007d7000 ////

void __fastcall FUN_007d7000(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_007d7030 @ 007d7030 ////

void __fastcall FUN_007d7030(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_007d7060 @ 007d7060 ////

void __fastcall FUN_007d7060(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_007d7090 @ 007d7090 ////

void __thiscall
FUN_007d7090(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce02d8;
  local_c = ExceptionList;
  if (0x1ffffffd < *(uint *)((int)this + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_00405d50(local_50,(undefined4 *)"map/set<T> too long",0x13);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddceb4);
  }
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_007d4680(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
                               ,param_4,0);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  if (param_3 == *(undefined4 **)((int)this + 4)) {
    (*(undefined4 **)((int)this + 4))[1] = piVar3;
    **(undefined4 **)((int)this + 4) = piVar3;
    *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
  }
  else if (param_2 == '\0') {
    param_3[2] = piVar3;
    if (param_3 == *(undefined4 **)(*(int *)((int)this + 4) + 8)) {
      *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
    }
  }
  else {
    *param_3 = piVar3;
    if (param_3 == (undefined4 *)**(int **)((int)this + 4)) {
      **(int **)((int)this + 4) = (int)piVar3;
    }
  }
  cVar1 = *(char *)(piVar3[1] + 0x14);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x14) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[5] == '\0') {
LAB_007d718b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_007d3870(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_007d38d0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_007d718b;
      if (piVar6 == (int *)*piVar2) {
        FUN_007d38d0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_007d3870(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_007d7240 @ 007d7240 ////

void FUN_007d7240(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce02f8;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_007d72b0 @ 007d72b0 ////

void FUN_007d72b0(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0318;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_007d7320 @ 007d7320 ////

void __thiscall FUN_007d7320(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0338;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &pvStack_c;
    FUN_00405d50(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16dc0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddd664);
  }
  ExceptionList = &pvStack_c;
  FUN_007d2c20((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x15) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x15) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x15) == '\0') {
          piVar6[1] = (int)piVar4;
        }
        *piVar4 = (int)piVar6;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar5 = (int *)_Memory[1];
        if ((int *)*piVar5 == _Memory) {
          *piVar5 = (int)param_2;
        }
        else {
          piVar5[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[5];
      *(char *)(param_2 + 5) = (char)_Memory[5];
      *(char *)(_Memory + 5) = (char)iVar1;
      goto LAB_007d7491;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar6[1] = (int)piVar4;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
  }
  else if ((int *)*piVar4 == _Memory) {
    *piVar4 = (int)piVar6;
  }
  else {
    piVar4[2] = (int)piVar6;
  }
  piVar5 = *(int **)((int)this + 4);
  if ((int *)*piVar5 == _Memory) {
    piVar2 = piVar4;
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      piVar2 = (int *)FUN_007d2ae0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_007d2ac0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_007d7491:
  if ((char)_Memory[5] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[5] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_007d3870(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_007d38d0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_007d3870(this,(int)piVar5);
              break;
            }
LAB_007d7554:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_007d38d0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_007d7554;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_007d3870(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_007d38d0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_007d75e0 @ 007d75e0 ////

void __thiscall FUN_007d75e0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0358;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x11) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &pvStack_c;
    FUN_00405d50(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16dc0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddd664);
  }
  ExceptionList = &pvStack_c;
  FUN_0063b190((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x11) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x11) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
          piVar6[1] = (int)piVar4;
        }
        *piVar4 = (int)piVar6;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar5 = (int *)_Memory[1];
        if ((int *)*piVar5 == _Memory) {
          *piVar5 = (int)param_2;
        }
        else {
          piVar5[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[4];
      *(char *)(param_2 + 4) = (char)_Memory[4];
      *(char *)(_Memory + 4) = (char)iVar1;
      goto LAB_007d7751;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x11) == '\0') {
    piVar6[1] = (int)piVar4;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
  }
  else if ((int *)*piVar4 == _Memory) {
    *piVar4 = (int)piVar6;
  }
  else {
    piVar4[2] = (int)piVar6;
  }
  piVar5 = *(int **)((int)this + 4);
  if ((int *)*piVar5 == _Memory) {
    piVar2 = piVar4;
    if (*(char *)((int)piVar6 + 0x11) == '\0') {
      piVar2 = (int *)FUN_0063af80(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x11) == '\0') {
      uVar3 = FUN_007d2b70((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_007d7751:
  if ((char)_Memory[4] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[4] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[4] == '\0') {
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(piVar5 + 4) = 0;
            FUN_007d2b10(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(*piVar4 + 0x10) != '\x01') || (*(char *)(piVar4[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x10) = 1;
                *(undefined1 *)(piVar4 + 4) = 0;
                FUN_007d2b90(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 4) = (char)piVar5[4];
              *(undefined1 *)(piVar5 + 4) = 1;
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              FUN_007d2b10(this,(int)piVar5);
              break;
            }
LAB_007d7814:
            *(undefined1 *)(piVar4 + 4) = 0;
          }
        }
        else {
          if ((char)piVar4[4] == '\0') {
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(piVar5 + 4) = 0;
            FUN_007d2b90(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(piVar4[2] + 0x10) == '\x01') && (*(char *)(*piVar4 + 0x10) == '\x01'))
            goto LAB_007d7814;
            if (*(char *)(*piVar4 + 0x10) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              *(undefined1 *)(piVar4 + 4) = 0;
              FUN_007d2b10(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 4) = (char)piVar5[4];
            *(undefined1 *)(piVar5 + 4) = 1;
            *(undefined1 *)(*piVar4 + 0x10) = 1;
            FUN_007d2b90(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 4) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_007d78a0 @ 007d78a0 ////

void __thiscall FUN_007d78a0(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  bool local_4;
  
  puVar2 = param_2;
  puVar5 = *(uint **)((int)this + 4);
  local_4 = true;
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
    puVar3 = (uint *)puVar5[1];
    do {
      puVar5 = puVar3;
      local_4 = *param_2 < puVar5[3];
      if (local_4) {
        puVar3 = (uint *)*puVar5;
      }
      else {
        puVar3 = (uint *)puVar5[2];
      }
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  param_2 = puVar5;
  if (local_4) {
    if (puVar5 == (uint *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_007d7090(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_007d39b0((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_007d7090(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007d79b0 @ 007d79b0 ////

undefined4 __thiscall FUN_007d79b0(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3fffffff < param_1) {
    param_1 = FUN_007d72b0();
  }
  pvVar1 = operator_new(param_1 * 4);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 4 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_007d7a00 @ 007d7a00 ////

void __thiscall FUN_007d7a00(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *_Dst;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = *(int *)((int)this + 4);
  param_3 = (undefined4 *)*param_3;
  if (iVar5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - iVar5 >> 2;
  }
  uVar6 = CONCAT44(iVar5,iVar1);
  if (param_2 != 0) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - iVar5 >> 2;
    }
    if (0x3fffffffU - iVar5 < param_2) {
      uVar6 = FUN_007d7240();
    }
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)uVar6;
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 8) - iVar5 >> 2;
    }
    if (uVar2 < iVar1 + param_2) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar5 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - iVar5 >> 2;
      }
      if (uVar2 < iVar1 + param_2) {
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)((int)this + 8) - iVar5 >> 2;
        }
        uVar2 = iVar5 + param_2;
      }
      pvVar3 = operator_new(uVar2 * 4);
      _Size = ((int)param_1 - (int)*(void **)((int)this + 4) >> 2) * 4;
      pvVar4 = _memmove(pvVar3,*(void **)((int)this + 4),_Size);
      _Dst = FUN_007d5910((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
      _memmove(_Dst,param_1,(*(int *)((int)this + 8) - (int)param_1 >> 2) << 2);
      pvVar4 = *(void **)((int)this + 4);
      if (pvVar4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - (int)pvVar4 >> 2;
      }
      if (pvVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar4);
      }
      *(void **)((int)this + 0xc) = (void *)(uVar2 * 4 + (int)pvVar3);
      *(void **)((int)this + 8) = (void *)((int)pvVar3 + (param_2 + iVar5) * 4);
      *(void **)((int)this + 4) = pvVar3;
      return;
    }
    iVar5 = *(int *)((int)this + 8);
    if ((uint)(iVar5 - (int)param_1 >> 2) < param_2) {
      FUN_007d4890(param_1,iVar5,param_1 + param_2);
      FUN_007d5910(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_007d2c80(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_007d4890(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_007d3b30(param_1,(int)pvVar3,iVar5);
    FUN_007d2c80(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_007d7be0 @ 007d7be0 ////

void __thiscall FUN_007d7be0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = param_3;
  piVar6 = *(int **)((int)this + 4);
  piVar2 = param_2;
  if ((param_2 == (int *)*piVar6) && (param_3 == piVar6)) {
    FUN_007d4770((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x15) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x15);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x15);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_007d7320(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_007d7ca0 @ 007d7ca0 ////

void __thiscall FUN_007d7ca0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce0370;
  local_10 = ExceptionList;
  iVar6 = *(int *)((int)this + 4);
  param_3 = (undefined4 *)*param_3;
  if (iVar6 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - iVar6 >> 2;
  }
  uVar7 = CONCAT44(iVar6,iVar1);
  if (param_2 != 0) {
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar6 >> 2;
    }
    ExceptionList = &local_10;
    if (0x3fffffffU - iVar6 < param_2) {
      ExceptionList = &local_10;
      uVar7 = FUN_007d72b0();
    }
    iVar6 = (int)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)uVar7;
    if (iVar6 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 8) - iVar6 >> 2;
    }
    if (uVar2 < iVar1 + param_2) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar6 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - iVar6 >> 2;
      }
      if (uVar2 < iVar1 + param_2) {
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)((int)this + 8) - iVar6 >> 2;
        }
        uVar2 = iVar6 + param_2;
      }
      puVar3 = operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_007d3c80(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_007d48c0(puVar4,param_2,&param_3);
      FUN_007d3c80(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar2;
      *(undefined4 **)((int)this + 8) = puVar3 + param_2 + iVar6;
      *(undefined4 **)((int)this + 4) = puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar3 - (int)param_1 >> 2) < param_2) {
      FUN_007d3c80(param_1,puVar3,param_1 + param_2);
      local_8 = 2;
      FUN_007d6e60(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar6 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar6;
      FUN_007d2cd0(param_1,(undefined4 *)(iVar6 + param_2 * -4),&param_3);
      ExceptionList = local_10;
      return;
    }
    uVar5 = FUN_007d3c80(puVar3 + -param_2,puVar3,puVar3);
    *(undefined4 *)((int)this + 8) = uVar5;
    FUN_007d3b60((int)param_1,(int)(puVar3 + -param_2),puVar3);
    FUN_007d2cd0(param_1,param_1 + param_2,&param_3);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_007d7ee0 @ 007d7ee0 ////

void __thiscall FUN_007d7ee0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *_Dst;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = *(int *)((int)this + 4);
  param_3 = (undefined4 *)*param_3;
  if (iVar5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - iVar5 >> 2;
  }
  uVar6 = CONCAT44(iVar5,iVar1);
  if (param_2 != 0) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - iVar5 >> 2;
    }
    if (0x3fffffffU - iVar5 < param_2) {
      uVar6 = FUN_007cd330();
    }
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)uVar6;
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 8) - iVar5 >> 2;
    }
    if (uVar2 < iVar1 + param_2) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar5 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - iVar5 >> 2;
      }
      if (uVar2 < iVar1 + param_2) {
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)((int)this + 8) - iVar5 >> 2;
        }
        uVar2 = iVar5 + param_2;
      }
      pvVar3 = operator_new(uVar2 * 4);
      _Size = ((int)param_1 - (int)*(void **)((int)this + 4) >> 2) * 4;
      pvVar4 = _memmove(pvVar3,*(void **)((int)this + 4),_Size);
      _Dst = FUN_007d5940((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
      _memmove(_Dst,param_1,(*(int *)((int)this + 8) - (int)param_1 >> 2) << 2);
      pvVar4 = *(void **)((int)this + 4);
      if (pvVar4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - (int)pvVar4 >> 2;
      }
      if (pvVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar4);
      }
      *(void **)((int)this + 0xc) = (void *)(uVar2 * 4 + (int)pvVar3);
      *(void **)((int)this + 8) = (void *)((int)pvVar3 + (param_2 + iVar5) * 4);
      *(void **)((int)this + 4) = pvVar3;
      return;
    }
    iVar5 = *(int *)((int)this + 8);
    if ((uint)(iVar5 - (int)param_1 >> 2) < param_2) {
      FUN_007ccd80(param_1,iVar5,param_1 + param_2);
      FUN_007d5940(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_007d2d10(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_007ccd80(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_007d3b90(param_1,(int)pvVar3,iVar5);
    FUN_007d2d10(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_007d80c0 @ 007d80c0 ////

void __thiscall FUN_007d80c0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = param_3;
  piVar6 = *(int **)((int)this + 4);
  piVar2 = param_2;
  if ((param_2 == (int *)*piVar6) && (param_3 == piVar6)) {
    FUN_007d47b0((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x11) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x11);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x11);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x11);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x11);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_007d75e0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_007d8180 @ 007d8180 ////

void __cdecl
FUN_007d8180(void *param_1,int *param_2,int param_3,undefined4 param_4,void *param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piStack_3c;
  int iStack_38;
  undefined4 auStack_34 [2];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0388;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_0085cea0(param_3);
  if ((char)uVar2 != '\0') {
    puVar3 = FUN_00861fb0(param_3);
    piVar4 = FUN_007d2300(param_1,puVar3);
    puVar3 = FUN_00861de0(local_2c,param_3);
    iVar1 = *param_2;
    local_4 = 0;
    *param_2 = iVar1 + 1;
    FUN_007d17c0(param_1,iVar1,puVar3);
    local_4 = 0xffffffff;
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    (**(code **)(*piVar4 + 0x18))(6,&LAB_007d6ce0,param_6,"AWARDS_HOVERTROPHY");
    iStack_38 = param_3;
    piStack_3c = piVar4;
    FUN_007d78a0(param_5,auStack_34,(uint *)&piStack_3c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d8260 @ 007d8260 ////

void __thiscall FUN_007d8260(void *this,int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  size_t sVar3;
  int *piVar4;
  undefined2 *local_9c;
  undefined4 local_98;
  uint local_94;
  undefined2 local_90 [8];
  wchar_t *pwStack_80;
  undefined2 *local_7c;
  undefined4 local_78;
  uint local_74;
  undefined2 local_70 [10];
  int *piStack_5c;
  wchar_t *pwStack_58;
  undefined2 *local_54;
  undefined4 local_50;
  uint local_4c;
  undefined2 local_48 [8];
  void *pvStack_38;
  undefined1 local_34 [4];
  uint uStack_30;
  undefined4 auStack_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00ce03bb;
  local_c = ExceptionList;
  if (param_1 != 0) {
    local_54 = local_48;
    local_48[0] = 0;
    local_50 = 0;
    local_4c = 10;
    local_7c = local_70;
    local_70[0] = 0;
    local_78 = 0;
    local_74 = 10;
    local_4 = 1;
    uStack_3 = 0;
    ExceptionList = &local_c;
    FUN_004036d0(&local_54,*(wchar_t **)(param_1 + 0x6c),*(uint *)(param_1 + 0x70));
    if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
      local_9c = local_90;
      local_90[0] = 0;
      local_98 = 0;
      local_94 = 10;
      local_4 = 2;
      puVar2 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0xb8) + 0x20))(local_34);
      FUN_004036d0(&pwStack_80,(wchar_t *)*puVar2,puVar2[1]);
      if (10 < uStack_30) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_38);
      }
      bVar1 = FUN_00861a30();
      if (!bVar1) {
        FUN_0040cae0(&stack0xffffff60,pwStack_58,(size_t)local_54);
        sVar3 = FUN_00ace02d(L"<br>");
        FUN_0040cae0(&stack0xffffff60,L"<br>",sVar3);
      }
      FUN_0040cae0(&stack0xffffff60,pwStack_80,(size_t)local_7c);
      sVar3 = FUN_00ace02d(L"<br>");
      FUN_0040cae0(&stack0xffffff60,L"<br>",sVar3);
      puVar2 = FUN_00861de0(&pvStack_38,*(int *)(param_1 + 0x60));
      FUN_0040cae0(&stack0xffffff60,(wchar_t *)*puVar2,puVar2[1]);
      if (10 < uStack_30) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_38);
      }
      piVar4 = FUN_007ce3f0(*(void **)((int)this + 0x358),*(int *)(param_1 + 0x60));
      (**(code **)(*piVar4 + 0x18))(6,&LAB_007d6ce0,this,"AWARDS_HOVERTROPHY");
      pwStack_58 = *(wchar_t **)(param_1 + 0x60);
      piStack_5c = piVar4;
      FUN_007d78a0((void *)((int)this + 0x428),auStack_14,(uint *)&piStack_5c);
      for (piVar4 = *(int **)((int)this + 0x40c);
          (piVar4 != *(int **)((int)this + 0x410) && (*piVar4 != param_1)); piVar4 = piVar4 + 1) {
      }
      FUN_007d17c0(*(void **)((int)this + 0x3d4),
                   (int)piVar4 - (int)*(int **)((int)this + 0x40c) >> 2,&local_9c);
      if (10 < local_94) {
                    /* WARNING: Subroutine does not return */
        _free(local_9c);
      }
    }
    if (10 < local_74) {
                    /* WARNING: Subroutine does not return */
      _free(local_7c);
    }
    if (10 < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_54);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d84d0 @ 007d84d0 ////

void __fastcall FUN_007d84d0(void *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  undefined4 extraout_EDX;
  wchar_t *pwVar8;
  char *local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined2 local_a4;
  float fStack_90;
  wchar_t *local_8c;
  size_t local_88;
  uint local_84;
  wchar_t local_80 [10];
  wchar_t *local_6c;
  size_t local_68;
  uint local_64;
  wchar_t local_60 [10];
  wchar_t *local_4c;
  size_t local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *pvStack_2c;
  int iStack_28;
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00ce0409;
  pvStack_c = ExceptionList;
  iVar1 = **(int **)((int)param_1 + 0x418);
  local_8c = local_80;
  local_80[0] = L'\0';
  local_88 = 0;
  local_84 = 10;
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 2;
  uStack_3 = 0;
  ExceptionList = &pvStack_c;
  if (iVar1 != 0) {
    ExceptionList = &pvStack_c;
    FUN_004036d0(&local_6c,*(wchar_t **)(iVar1 + 0x6c),*(uint *)(iVar1 + 0x70));
    if (*(int **)(iVar1 + 0xb8) != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0xb8) + 0x20))(&local_b0);
      FUN_004036d0(&local_4c,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      bVar3 = FUN_00861a30();
      if (bVar3) {
        uVar5 = FUN_00ace02d(L"AWARDS_SCREEN_WINNINGSTUDIO");
        pwVar8 = L"AWARDS_SCREEN_WINNINGSTUDIO";
      }
      else {
        uVar5 = FUN_00ace02d(L"AWARDS_SCREEN_WINNERANDSTUDIO");
        pwVar8 = L"AWARDS_SCREEN_WINNERANDSTUDIO";
      }
      FUN_004036d0(&local_8c,pwVar8,uVar5);
      FUN_007d3cb0(&pvStack_2c,*(int **)(iVar1 + 0xb8));
      local_4 = 3;
      if (iStack_28 != 0) {
        FUN_007c9f80((int *)&pvStack_2c);
      }
      iVar2 = *(int *)(iVar1 + 0xb8);
      iVar6 = GetPlayerStudio();
      fStack_90 = 1.0;
      if (iVar2 != iVar6) {
        fStack_90 = 0.0;
      }
      local_b0 = (char *)&local_a4;
      local_a4 = (ushort)local_a4._1_1_ << 8;
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"ai_reaction",0xb);
      local_ac = 0xb;
      local_b0[0xb] = '\0';
      local_4 = 4;
      FUN_007c9f20(&local_b0,fStack_90);
      local_4 = 3;
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      FUN_007d8260(param_1,iVar1);
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_2c);
      }
    }
  }
  local_b0 = (char *)&local_a4;
  local_a4 = 0;
  local_ac = 0;
  local_a8 = 10;
  local_4 = 5;
  sVar7 = FUN_00ace02d(L"<phrasebook><translate>");
  FUN_0040cae0(&local_b0,L"<phrasebook><translate>",sVar7);
  FUN_0040cae0(&local_b0,local_8c,local_88);
  sVar7 = FUN_00ace02d(L"</translate><phrase key=WINNER>");
  FUN_0040cae0(&local_b0,L"</translate><phrase key=WINNER>",sVar7);
  FUN_0040cae0(&local_b0,local_6c,local_68);
  sVar7 = FUN_00ace02d(L"</phrase><phrase key=STUDIO>");
  FUN_0040cae0(&local_b0,L"</phrase><phrase key=STUDIO>",sVar7);
  FUN_0040cae0(&local_b0,local_4c,local_48);
  sVar7 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(&local_b0,L"</phrase></phrasebook>",sVar7);
  FUN_007d40a0((int)param_1);
  _local_4 = CONCAT31(uStack_3,2);
  if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
    _free(local_b0);
  }
  FUN_006e3ce0(*(int *)((int)param_1 + 0x404),extraout_EDX);
  if (local_44 < 0xb) {
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (local_84 < 0xb) {
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_007d8840 @ 007d8840 ////

void __fastcall FUN_007d8840(void *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 0x40c);
  if (piVar1 != *(int **)((int)param_1 + 0x410)) {
    do {
      FUN_007d8260(param_1,*piVar1);
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)((int)param_1 + 0x410));
  }
  return;
}


//// FUNCTION FUN_007d89b0 @ 007d89b0 ////

void __fastcall FUN_007d89b0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_007d80c0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_007d89e0 @ 007d89e0 ////

void __fastcall FUN_007d89e0(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piStack_48;
  undefined *puStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce042b;
  pvStack_c = ExceptionList;
  piStack_48 = (int *)0x7d8a08;
  ExceptionList = &pvStack_c;
  pvVar5 = operator_new(0x398);
  local_4 = 0;
  if (pvVar5 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    local_24 = 0x42100000;
    local_20 = 0x42100000;
    piStack_48 = (int *)0x7d8a35;
    puVar6 = FUN_007d20c0(pvVar5,&local_24);
  }
  local_4 = 0xffffffff;
  (**(code **)(param_1[0xf0] + 4))();
  param_1[0xf5] = (int)puVar6;
  (**(code **)param_1[0xf0])();
  piStack_48 = param_1;
  (**(code **)(*(int *)param_1[0xf5] + 0x5c))(1);
  (**(code **)(*(int *)param_1[0xf5] + 0x68))(2,param_1,0);
  pfVar7 = (float *)FUN_007bd2b0((void *)param_1[0x109],(undefined4 *)&stack0xffffffc0);
  uVar8 = FUN_0043b6c0(&DAT_00e4fa4c,pfVar7);
  if ((char)uVar8 == '\0') {
    piVar10 = (int *)param_1[0x103];
    if (piVar10 != (int *)param_1[0x104]) {
      do {
        iVar3 = *(int *)(*piVar10 + 0x60);
        pvVar5 = (void *)param_1[0xf5];
        puVar6 = (undefined4 *)FUN_007bd2b0((void *)param_1[0x109],&piStack_48);
        FUN_007d8180(pvVar5,(int *)&stack0xffffffbc,iVar3,*puVar6,param_1 + 0x10a,param_1);
        piVar10 = piVar10 + 1;
      } while (piVar10 != (int *)param_1[0x104]);
    }
  }
  else {
    FUN_00861af0();
    FUN_00861040();
    puStack_2c = FUN_00860ec0();
    FUN_00861150();
    piStack_48 = (int *)0x0;
    do {
      puVar6 = *(undefined4 **)(*(int *)(&stack0xffffffcc + (int)piStack_48 * 4) + 4);
      puVar2 = (undefined4 *)*puVar6;
      while (puVar2 != puVar6) {
        pvVar5 = (void *)param_1[0xf5];
        puVar9 = (undefined4 *)FUN_007bd2b0((void *)param_1[0x109],(undefined4 *)&stack0xffffffc4);
        FUN_007d8180(pvVar5,(int *)&stack0xffffffbc,puVar2[3],*puVar9,param_1 + 0x10a,param_1);
        if (*(char *)((int)puVar2 + 0x11) == '\0') {
          puVar9 = (undefined4 *)puVar2[2];
          if (*(char *)((int)puVar9 + 0x11) == '\0') {
            cVar1 = *(char *)((int)*puVar9 + 0x11);
            puVar2 = puVar9;
            puVar9 = (undefined4 *)*puVar9;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar9 + 0x11);
              puVar2 = puVar9;
              puVar9 = (undefined4 *)*puVar9;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar2[1] + 0x11);
            puVar4 = (undefined4 *)puVar2[1];
            puVar9 = puVar2;
            while ((puVar2 = puVar4, cVar1 == '\0' && (puVar9 == (undefined4 *)puVar2[2]))) {
              cVar1 = *(char *)((int)puVar2[1] + 0x11);
              puVar4 = (undefined4 *)puVar2[1];
              puVar9 = puVar2;
            }
          }
        }
      }
      piStack_48 = (int *)((int)piStack_48 + 1);
    } while ((int)piStack_48 < 4);
  }
  (**(code **)(*param_1 + 0xc))(param_1[0xf5],1);
  ExceptionList = puStack_2c;
  return;
}


//// FUNCTION FUN_007d8c80 @ 007d8c80 ////

void __thiscall FUN_007d8c80(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007d48c0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_007d7ca0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_007d8cf0 @ 007d8cf0 ////

void __thiscall FUN_007d8cf0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    *puVar2 = *param_1;
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_007d7ee0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_007d8d70 @ 007d8d70 ////

void __fastcall FUN_007d8d70(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_007d7be0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_007d8da0 @ 007d8da0 ////

void __fastcall FUN_007d8da0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_007d80c0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_007d8dd0 @ 007d8dd0 ////

void __fastcall FUN_007d8dd0(undefined4 *param_1)

{
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce04e2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d587b4;
  param_1[0x14] = &PTR_FUN_00d5879c;
  local_4 = 0xb;
  (*(code *)DAT_0104e9b4[1])();
  DAT_0104e9c8 = 0;
  (*(code *)*DAT_0104e9b4)();
  if ((undefined4 *)param_1[0x107] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x107])(1);
  }
  param_1[0x107] = 0;
  if ((void *)param_1[0x111] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x111]);
  }
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_007d7be0(param_1 + 0x10a,&uStack_10,*(int **)param_1[0x10b],(int *)param_1[0x10b]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x10b]);
}


//// FUNCTION FUN_007d9270 @ 007d9270 ////

void __fastcall FUN_007d9270(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  void *pvVar7;
  float *pfVar8;
  int *piVar9;
  float fVar10;
  int local_b4;
  undefined4 uStack_b0;
  int *local_ac;
  int local_a8;
  float local_a4;
  undefined4 *local_a0;
  int iStack_9c;
  int *piStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 uStack_80;
  float fStack_7c;
  undefined *local_78 [4];
  undefined4 local_68;
  undefined1 local_64 [4];
  undefined **ppuStack_60;
  int iStack_5c;
  int *piStack_58;
  undefined4 uStack_4c;
  undefined1 auStack_38 [4];
  undefined **ppuStack_34;
  int iStack_30;
  int *piStack_2c;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce050b;
  pvStack_c = ExceptionList;
  local_a8 = param_1;
  if (*(void **)(param_1 + 0x40c) != (void *)0x0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x40c));
  }
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  FUN_00857aa0(&local_a4);
  local_4 = 0;
  local_78[0] = FUN_00861af0();
  local_78[1] = FUN_00860ec0();
  local_78[2] = FUN_00861040();
  local_78[3] = FUN_00861150();
  local_b4 = 0;
  do {
    local_ac = *(int **)(local_78[local_b4] + 4);
    piVar9 = (int *)*local_ac;
    if (piVar9 != local_ac) {
      do {
        pvVar7 = FUN_00857d80(local_64);
        fVar10 = (float)piVar9[3];
        local_4._0_1_ = 1;
        pfVar8 = (float *)FUN_007bd2b0(*(void **)(local_a8 + 0x424),&local_68);
        pfVar8 = FUN_00857b60(pvVar7,pfVar8);
        pfVar8 = FUN_00857b30(pfVar8,fVar10);
        local_a4 = *pfVar8;
        (*(code *)local_a0[1])();
        fStack_8c = pfVar8[6];
        (*(code *)*local_a0)();
        fStack_88 = pfVar8[7];
        fStack_84 = pfVar8[8];
        uStack_80 = *(undefined1 *)(pfVar8 + 9);
        fStack_7c = pfVar8[10];
        local_4._0_1_ = 0;
        ppuStack_60 = &PTR_FUN_00d1aed0;
        if (piStack_58 != (int *)0x0) {
          *piStack_58 = iStack_5c;
        }
        if (iStack_5c != 0) {
          *(int **)(iStack_5c + 4) = piStack_58;
        }
        uStack_4c = 0;
        iStack_5c = 0;
        piStack_58 = (int *)0x0;
        pvVar7 = FUN_00857bd0(auStack_38);
        local_4._0_1_ = 2;
        bVar6 = FUN_00856dd0(&local_a4,(int)pvVar7);
        local_4 = (uint)local_4._1_3_ << 8;
        ppuStack_34 = &PTR_FUN_00d1aed0;
        if (piStack_2c != (int *)0x0) {
          *piStack_2c = iStack_30;
        }
        if (iStack_30 != 0) {
          *(int **)(iStack_30 + 4) = piStack_2c;
        }
        uStack_20 = 0;
        iStack_30 = 0;
        piStack_2c = (int *)0x0;
        if (bVar6) {
          uStack_b0 = FUN_00856d90((int)&local_a4);
          iVar2 = *(int *)(param_1 + 0x40c);
          if ((iVar2 == 0) ||
             ((uint)(*(int *)(param_1 + 0x414) - iVar2 >> 2) <=
              (uint)(*(int *)(param_1 + 0x410) - iVar2 >> 2))) {
            FUN_007d7a00((void *)(param_1 + 0x408),*(undefined4 **)(param_1 + 0x410),1,&uStack_b0);
          }
          else {
            puVar3 = *(undefined4 **)(param_1 + 0x410);
            *puVar3 = uStack_b0;
            *(undefined4 **)(param_1 + 0x410) = puVar3 + 1;
          }
        }
        if (*(char *)((int)piVar9 + 0x11) == '\0') {
          piVar4 = (int *)piVar9[2];
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x11);
            piVar9 = piVar4;
            piVar4 = (int *)*piVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar4 + 0x11);
              piVar9 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar1 = *(char *)(piVar9[1] + 0x11);
            piVar5 = (int *)piVar9[1];
            piVar4 = piVar9;
            while ((piVar9 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar9[2]))) {
              cVar1 = *(char *)(piVar9[1] + 0x11);
              piVar5 = (int *)piVar9[1];
              piVar4 = piVar9;
            }
          }
        }
      } while (piVar9 != local_ac);
    }
    local_b4 = local_b4 + 1;
  } while (local_b4 < 4);
  if (piStack_98 != (int *)0x0) {
    *piStack_98 = iStack_9c;
  }
  if (iStack_9c != 0) {
    *(int **)(iStack_9c + 4) = piStack_98;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007d9520 @ 007d9520 ////

/* WARNING: Removing unreachable block (ram,0x007d9f70) */

void __fastcall FUN_007d9520(int *param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint *unaff_EBP;
  float10 fVar7;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int *piStack_190;
  char cStack_159;
  int *piStack_140;
  float *pfStack_13c;
  float fStack_130;
  undefined4 uStack_12c;
  int *piStack_128;
  undefined4 uStack_124;
  undefined4 *puStack_120;
  int *piStack_11c;
  int *piStack_114;
  uint uVar8;
  char *_Dest;
  uint *puStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined1 *puStack_ac;
  undefined4 uStack_a8;
  int **ppiVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *_Dest_00;
  int *local_90;
  uint uStack_88;
  undefined4 uStack_6c;
  uint local_68;
  void *local_64;
  void *pvStack_60;
  undefined1 *local_5c;
  undefined4 uStack_4c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0615;
  pvStack_c = ExceptionList;
  local_68 = 0;
  uStack_6c = CONCAT13(param_1[0x106] == param_1[0x104],(undefined3)uStack_6c);
  ExceptionList = &pvStack_c;
  pvVar3 = operator_new(0x50);
  local_4 = 0;
  local_64 = pvVar3;
  if (pvVar3 != (void *)0x0) {
    local_5c = &stack0xffffff64;
    ppiVar9 = &local_90;
    local_90 = (int *)((uint)local_90 & 0xffffff00);
    uVar10 = 0;
    uVar11 = 0x14;
    uStack_a8 = 0x7d9593;
    FUN_004015d0(&stack0xffffff64,"ui/awards_bg.dds",0x10);
    FUN_005e4a50(pvVar3,(char *)ppiVar9,uVar10,uVar11);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0xa0))();
  uStack_88 = 0x7d95ba;
  pvStack_60 = operator_new(0x3fc);
  puStack_8 = (undefined1 *)0x1;
  if (pvStack_60 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_88 = 0x7d95db;
    piVar4 = FUN_007cef30(pvStack_60,param_1[0x109]);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(param_1[0xd1] + 4))();
  param_1[0xd6] = (int)piVar4;
  (**(code **)param_1[0xd1])();
  uStack_88 = 0x44728000;
  (**(code **)(*(int *)param_1[0xd6] + 0x74))();
  local_90 = (int *)0x7d9620;
  FUN_0073e590((void *)param_1[0xd6],param_1);
  uVar11 = 0x42c00000;
  _Dest_00 = (uint *)0x1;
  local_90 = param_1;
  (**(code **)(*(int *)param_1[0xd6] + 100))();
  (**(code **)(*param_1 + 0xc))();
  puVar5 = FUN_007c7700();
  (**(code **)(param_1[0xd7] + 4))();
  param_1[0xdc] = (int)puVar5;
  (**(code **)param_1[0xd7])();
  uStack_a8 = 1;
  puStack_ac = (undefined1 *)0x7d9679;
  (**(code **)(*(int *)param_1[0xdc] + 0x5c))();
  uStack_b0 = param_1[0xd6];
  puStack_ac = (undefined1 *)0x42000000;
  uStack_b4 = 1;
  uStack_b8 = 0x7d9692;
  (**(code **)(*(int *)param_1[0xdc] + 100))();
  uStack_b8 = 0x43c80000;
  uStack_bc = 0x434d0000;
  puStack_c0 = (uint *)0x7d96a7;
  (**(code **)(*(int *)param_1[0xdc] + 0x74))();
  puStack_c0 = (uint *)0x1;
  (**(code **)(*param_1 + 0xc))();
  pvVar3 = operator_new(0x420);
  if (pvVar3 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    unaff_EBP = &local_68;
    local_68 = local_68 & 0xffff0000;
    uStack_6c = 10;
    uVar11 = FUN_00ace02d(L"<translate>AWARDS_TOOLTIP_SKIP</translate>");
    FUN_004036d0(&stack0xffffff8c,L"<translate>AWARDS_TOOLTIP_SKIP</translate>",uVar11);
    _Dest_00 = &uStack_88;
    uStack_88 = uStack_88 & 0xffffff00;
    local_90 = (int *)0x0;
    uVar11 = 0x14;
    _strncpy((char *)_Dest_00,"button_ffwd.",0xc);
    local_90 = (int *)0xc;
    *(char *)(_Dest_00 + 3) = '\0';
    puStack_ac = &stack0xffffff2c;
    uStack_4c = 4;
    uStack_b0 = 3;
    puVar5 = FUN_0069fb10(pvVar3,(int *)&stack0xffffff6c,(undefined4 *)&stack0xffffff8c,0x42580000,
                          0x42580000,0,0,0x3f800000,0x3f800000);
  }
  uStack_4c = 6;
  (**(code **)(param_1[0xdd] + 4))();
  param_1[0xe2] = (int)puVar5;
  (**(code **)param_1[0xdd])();
  if (((uStack_b0 & 2) != 0) && (uStack_b0 = uStack_b0 & 0xfffffffd, 0x14 < uVar11)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_00);
  }
  uStack_4c = 0xffffffff;
  if (((uStack_b0 & 1) != 0) && (uStack_b0 = uStack_b0 & 0xfffffffe, 10 < uStack_6c)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
  _Dest = "AWARDS_SKIP";
  (**(code **)(*(int *)param_1[0xe2] + 0x18))();
  pvVar3 = (void *)0x5;
  (**(code **)(*(int *)param_1[0xe2] + 0x18))();
  (**(code **)(*(int *)param_1[0xe2] + 0x60))();
  if (param_1[0x106] == param_1[0x104]) {
    puStack_c0 = &uStack_b4;
    uStack_b4 = uStack_b4 & 0xffffff00;
    uStack_bc = 0;
    uStack_b8 = 0x14;
    _strncpy((char *)puStack_c0,"button_right.",0xd);
    uStack_bc = 0xd;
    *(char *)((int)puStack_c0 + 0xd) = '\0';
    FUN_0069f100((void *)param_1[0xe2],(int *)&puStack_c0,0,0,0x3f800000,0x3f800000);
    if (0x14 < uStack_b8) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_c0);
    }
    FUN_0073e5e0((void *)param_1[0xe2],param_1);
  }
  else {
    (**(code **)(*(int *)param_1[0xe2] + 0x68))();
  }
  (**(code **)(*param_1 + 0xc))();
  pvVar6 = operator_new(0x360);
  if (pvVar6 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uStack_bc = uStack_bc & 0xffffff00;
    puStack_c0 = (uint *)0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ui\\hollywoodreport.dds",0x16);
    _Dest[0x16] = '\0';
    pvVar3 = (void *)((uint)pvVar3 | 4);
    piVar4 = FUN_0069d820(pvVar6,(undefined4 *)&stack0xffffff38,0,0,0x3f800000,0x3f800000);
  }
  if ((((uint)pvVar3 & 4) != 0) &&
     (pvVar3 = (void *)((uint)pvVar3 & 0xfffffffb), &DAT_00000014 < puStack_c0)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*piVar4 + 0x74))();
  piStack_114 = (int *)0x7d99fb;
  FUN_0073e590(piVar4,param_1);
  pvVar6 = (void *)0x1;
  piStack_114 = piVar4;
  (**(code **)(*param_1 + 0xc))();
  piStack_11c = (int *)0x7d9a0f;
  puVar5 = operator_new(0x3fc);
  if (puVar5 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar5);
  }
  puStack_120 = (undefined4 *)0x1;
  uStack_124 = 0x7d9a45;
  piStack_11c = param_1;
  (**(code **)(*piVar4 + 100))();
  uStack_124 = 0;
  uStack_12c = 1;
  fStack_130 = 1.1534794e-38;
  piStack_128 = param_1;
  (**(code **)(*piVar4 + 0x5c))();
  iVar1 = *piVar4;
  fStack_130 = 1.1534807e-38;
  fVar7 = (float10)(**(code **)(*param_1 + 0x10))();
  fStack_130 = (float)fVar7;
  (**(code **)(iVar1 + 0x78))();
  pfStack_13c = (float *)0x7d9a70;
  FUN_00830550(piVar4,9,&DAT_00e5b668);
  piStack_114 = (int *)0x12;
  pfStack_13c = (float *)0x7d9a86;
  FUN_00830550(piVar4,7,(char *)&piStack_114);
  pfStack_13c = (float *)0x7d9aa8;
  FUN_00830550(piVar4,8,&stack0xfffffee8);
  uVar8 = 0;
  uVar11 = FUN_00ace02d(L"<p align=\"center\"><translate>AWARDS_SCREEN_PRESENTS</translate>");
  pfStack_13c = (float *)0x7d9ade;
  FUN_004036d0(&stack0xffffff20,L"<p align=\"center\"><translate>AWARDS_SCREEN_PRESENTS</translate>"
               ,uVar11);
  uStack_b8 = 0xc;
  (**(code **)(*piVar4 + 0x54))();
  uStack_bc = 0xffffffff;
  if (10 < uVar8) {
                    /* WARNING: Subroutine does not return */
    pfStack_13c = (float *)&UNK_007d9b0a;
    _free(pvVar3);
  }
  pfStack_13c = (float *)0x7d9b18;
  (**(code **)(*piVar4 + 0x8c))();
  pfStack_13c = (float *)0x2;
  piStack_140 = piVar4;
  (**(code **)(*param_1 + 0xc))();
  puStack_120 = operator_new(0x3fc);
  if (puStack_120 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puStack_120);
  }
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*piVar4 + 0x5c))();
  iVar1 = *piVar4;
  fVar7 = (float10)(**(code **)(*param_1 + 0x10))();
  (**(code **)(iVar1 + 0x78))();
  FUN_00830550(piVar4,9,&DAT_00e5b668);
  piStack_140 = (int *)0x18;
  FUN_00830550(piVar4,7,(char *)&piStack_140);
  FUN_00830550(piVar4,8,&stack0xfffffebc);
  uVar8 = 0;
  uVar11 = FUN_00ace02d(L"<p align=\"center\"><translate>AWARDS_SCREEN_LIONHEADAWARDS</translate>");
  FUN_004036d0(&stack0xfffffef4,
               L"<p align=\"center\"><translate>AWARDS_SCREEN_LIONHEADAWARDS</translate>",uVar11);
  (**(code **)(*piVar4 + 0x54))();
  if (uVar8 < 0xb) {
    (**(code **)(*piVar4 + 0x8c))();
    (**(code **)(*param_1 + 0xc))();
    cStack_159 = (char)((uint)(float)fVar7 >> 0x18);
    if (cStack_159 == '\0') {
      puVar5 = operator_new(0x350);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = FUN_007cbc20(puVar5);
      }
      (**(code **)(param_1[0xf6] + 4))();
      param_1[0xfb] = (int)puVar5;
      (**(code **)param_1[0xf6])();
      (**(code **)(*(int *)param_1[0xfb] + 0x70))();
      (**(code **)(*param_1 + 0xc))();
    }
    pvVar3 = operator_new(0x360);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      pfStack_13c = &fStack_130;
      fStack_130 = (float)((uint)fStack_130 & 0xffffff00);
      uVar11 = 0x14;
      _strncpy((char *)pfStack_13c,"ui\\award_cache.dds",0x12);
      *(char *)((int)pfStack_13c + 0x12) = '\0';
      piVar4 = FUN_0069d820(pvVar3,&pfStack_13c,0,0,0x3f800000,0x3f800000);
      if (0x14 < uVar11) {
                    /* WARNING: Subroutine does not return */
        _free(pfStack_13c);
      }
    }
    pvVar3 = (void *)0x42400000;
    (**(code **)(*piVar4 + 0x74))();
    (**(code **)(*piVar4 + 0x68))();
    FUN_0073e590(piVar4,param_1);
    (**(code **)(*param_1 + 0xc))();
    piStack_190 = (int *)0x7d9da2;
    puVar5 = operator_new(0x3b0);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_007d0ed0(puVar5);
    }
    (**(code **)(param_1[0xe3] + 4))();
    param_1[0xe8] = (int)puVar5;
    (**(code **)param_1[0xe3])();
    uStack_194 = 2;
    uStack_198 = 0x7d9df7;
    piStack_190 = param_1;
    (**(code **)(*(int *)param_1[0xe8] + 0x60))();
    uStack_198 = 0x440b4000;
    (**(code **)(*(int *)param_1[0xe8] + 100))(1,param_1);
    FUN_0063e230((void *)param_1[0xe8],(undefined4 *)&stack0xfffffe80);
    (**(code **)(*param_1 + 0xc))(param_1[0xe8],1);
    puVar5 = operator_new(0x3b0);
    fStack_130 = 2.8026e-44;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_007d0ed0(puVar5);
    }
    fStack_130 = -NAN;
    (**(code **)(param_1[0xe9] + 4))();
    param_1[0xee] = (int)puVar5;
    (**(code **)param_1[0xe9])();
    (**(code **)(*(int *)param_1[0xee] + 0x5c))(1,param_1,0x44200000);
    (**(code **)(*(int *)param_1[0xee] + 100))(1,param_1,0x440d8000);
    uStack_198 = 0x44190000;
    uStack_194 = 0x4413c000;
    FUN_0063e230((void *)param_1[0xee],&uStack_198);
    (**(code **)(*param_1 + 0xc))(param_1[0xee],1);
    (**(code **)(*(int *)param_1[0xe8] + 0x20))(0);
    param_1[0xef] = 0;
    (**(code **)(*(int *)param_1[0xee] + 0x20))();
    FUN_007d89e0(param_1);
    puVar5 = operator_new(0x36c);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_006e4a50(puVar5);
    }
    (**(code **)(param_1[0xfc] + 4))();
    param_1[0x101] = (int)puVar5;
    (**(code **)param_1[0xfc])();
    (**(code **)(*(int *)param_1[0x101] + 0x70))(param_1,0);
    (**(code **)(*param_1 + 0xc))(param_1[0x101],1);
    do {
      cVar2 = (**(code **)(*param_1 + 0x50))(1);
    } while (cVar2 != '\0');
    ExceptionList = pvVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar6);
}


//// FUNCTION FUN_007d9fa0 @ 007d9fa0 ////

void __fastcall FUN_007d9fa0(int param_1)

{
  void *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0628;
  local_c = ExceptionList;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  this = (void *)**(undefined4 **)(param_1 + 0x418);
  local_4 = 0;
  ExceptionList = &local_c;
  local_20 = param_1;
  if (this != (void *)0x0) {
    local_24 = *(int *)((int)this + 0xb8);
    ExceptionList = &local_c;
    if (local_24 != 0) {
      ExceptionList = &local_c;
      FUN_007d8cf0(local_1c,&local_24);
    }
    iVar3 = 1;
    if (0 < *(int *)((int)this + 0x128)) {
      do {
        iVar2 = FUN_00856900(this,iVar3);
        local_24 = *(int *)(iVar2 + 0x2c);
        piVar1 = local_18;
        if (local_24 != 0) {
          for (; piVar1 != local_14; piVar1 = piVar1 + 1) {
            if (*piVar1 == local_24) {
              if (piVar1 != local_14) goto LAB_007da07e;
              break;
            }
          }
          if ((local_18 == (int *)0x0) ||
             ((uint)(local_10 - (int)local_18 >> 2) <= (uint)((int)local_14 - (int)local_18 >> 2)))
          {
            FUN_007d7ee0(local_1c,local_14,1,&local_24);
          }
          else {
            *local_14 = local_24;
            local_14 = local_14 + 1;
          }
        }
LAB_007da07e:
        iVar3 = iVar3 + 1;
        param_1 = local_20;
      } while (iVar3 <= *(int *)((int)this + 0x128));
    }
  }
  FUN_007cf600(*(void **)(param_1 + 0x358),local_1c);
  if (local_18 == (int *)0x0) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}


//// FUNCTION FUN_007da0d0 @ 007da0d0 ////

int __fastcall FUN_007da0d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007d46d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007da100 @ 007da100 ////

int __fastcall FUN_007da100(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007d4720();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007da130 @ 007da130 ////

undefined4 * FUN_007da130(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce064b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = CeremonyState_EnterHighlightContenders(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION CeremonyState_EnterHighlightContenders @ 007da190 ////

undefined4 * __fastcall
CeremonyState_EnterHighlightContenders(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d58a14;
  local_4 = 0;
  FUN_007d4e40(DAT_0104e9c8);
  FUN_007d9fa0(DAT_0104e9c8);
  FUN_007c9f20(&PTR_DAT_00e5b6b4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b6f4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b674,0.2);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007da270 @ 007da270 ////

undefined4 * FUN_007da270(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0693;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    CeremonyState_AttachToController(puVar1,extraout_EDX);
    local_4 = CONCAT31(local_4._1_3_,1);
    *puVar1 = &PTR_FUN_00d58a28;
    FUN_007d3030();
    FUN_007d3010(1.0);
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION CeremonyState_EnterWaitingToOpenEnvelope @ 007da350 ////

undefined4 * __fastcall
CeremonyState_EnterWaitingToOpenEnvelope(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  ulonglong uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce06c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar2 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar2;
  *param_1 = &PTR_FUN_00d58a3c;
  iVar1 = DAT_0104e9c8;
  local_4 = 0;
  uVar2 = FUN_00990ae0(extraout_ECX,(int)(uVar2 >> 0x20));
  *(int *)(iVar1 + 0x3bc) = (int)uVar2 + 2000;
  FUN_007c9f20(&PTR_DAT_00e5b714,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b694,0.66);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007da420 @ 007da420 ////

undefined4 * __thiscall FUN_007da420(void *this,byte param_1)

{
  FUN_007da440(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007da440 @ 007da440 ////

void __fastcall FUN_007da440(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007da450 @ 007da450 ////

undefined4 * __thiscall FUN_007da450(void *this,byte param_1)

{
  FUN_007da470(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007da470 @ 007da470 ////

void __fastcall FUN_007da470(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007da480 @ 007da480 ////

undefined4 * __thiscall FUN_007da480(void *this,byte param_1)

{
  FUN_007da4a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007da4a0 @ 007da4a0 ////

void __fastcall FUN_007da4a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007da4b0 @ 007da4b0 ////

undefined4 * FUN_007da4b0(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce06eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = CeremonyState_EnterStartAnnounceWinner(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION CeremonyState_EnterStartAnnounceWinner @ 007da510 ////

undefined4 * __fastcall
CeremonyState_EnterStartAnnounceWinner(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0708;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d58a50;
  local_4 = 0;
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x3a0) + 0x20))(0);
  FUN_007d4cd0(DAT_0104e9c8);
  FUN_007c9f20(&PTR_DAT_00e5b6d4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b714,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b694,1.0);
  ExceptionList = param_1;
  return param_1;
}


//// FUNCTION FUN_007da610 @ 007da610 ////

undefined4 * FUN_007da610(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0733;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    CeremonyState_AttachToController(puVar1,extraout_EDX);
    local_4 = CONCAT31(local_4._1_3_,1);
    *puVar1 = &PTR_FUN_00d58a64;
    FUN_007d30b0();
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_007da6a0 @ 007da6a0 ////

undefined4 * __thiscall FUN_007da6a0(void *this,byte param_1)

{
  FUN_007da6c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007da6c0 @ 007da6c0 ////

void __fastcall FUN_007da6c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007da6d0 @ 007da6d0 ////

undefined4 * __thiscall FUN_007da6d0(void *this,byte param_1)

{
  FUN_007da6f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007da6f0 @ 007da6f0 ////

void __fastcall FUN_007da6f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007da700 @ 007da700 ////

undefined4 * FUN_007da700(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce074b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = CeremonyState_EnterAnnounceWinnerName(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION CeremonyState_EnterAnnounceWinnerName @ 007da760 ////

undefined4 * __fastcall
CeremonyState_EnterAnnounceWinnerName(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d58a78;
  local_4 = 0;
  FUN_007d84d0(DAT_0104e9c8);
  FUN_007c9f20(&PTR_DAT_00e5b6d4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b674,0.8);
  FUN_007c9f20(&PTR_DAT_00e5b694,0.0);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007da840 @ 007da840 ////

undefined4 * FUN_007da840(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0793;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    CeremonyState_AttachToController(puVar1,extraout_EDX);
    local_4 = CONCAT31(local_4._1_3_,1);
    *puVar1 = &PTR_FUN_00d58a8c;
    FUN_007d3010(1.0);
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_007da8e0 @ 007da8e0 ////

undefined4 * __thiscall FUN_007da8e0(void *this,byte param_1)

{
  FUN_007da900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007da900 @ 007da900 ////

void __fastcall FUN_007da900(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007da910 @ 007da910 ////

undefined4 * __thiscall FUN_007da910(void *this,byte param_1)

{
  FUN_007da930(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007da930 @ 007da930 ////

void __fastcall FUN_007da930(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007da940 @ 007da940 ////

undefined4 * FUN_007da940(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce07ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = CeremonyState_EnterFinishedAward(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION CeremonyState_EnterFinishedAward @ 007da9a0 ////

undefined4 * __fastcall CeremonyState_EnterFinishedAward(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *unaff_ESI;
  ulonglong uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce07c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar3 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar3;
  *param_1 = &PTR_FUN_00d58aa0;
  local_4 = 0;
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x3a0) + 0x20))(0);
  puVar1 = (undefined4 *)(DAT_0104e9c8 + 0x3b8);
  *(undefined4 *)(DAT_0104e9c8 + 0x3bc) = 0;
  (**(code **)(*(int *)*puVar1 + 0x20))(0);
  FUN_007cd0b0(*(int *)(DAT_0104e9c8 + 0x358));
  FUN_007c9f20(&PTR_DAT_00e5b694,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b674,1.0);
  iVar2 = DAT_0104e9c8;
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x370) + 0x100))();
  FUN_006e3d40(*(int *)(iVar2 + 0x404));
  ExceptionList = unaff_ESI;
  return param_1;
}


//// FUNCTION FUN_007daaa0 @ 007daaa0 ////

undefined4 * __thiscall FUN_007daaa0(void *this,byte param_1)

{
  FUN_007daac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007daac0 @ 007daac0 ////

void __fastcall FUN_007daac0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007daad0 @ 007daad0 ////

undefined4 * __thiscall FUN_007daad0(void *this,byte param_1)

{
  FUN_007d8dd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007daaf0 @ 007daaf0 ////

/* WARNING: Removing unreachable block (ram,0x007dacf4) */
/* WARNING: Removing unreachable block (ram,0x007dad00) */
/* WARNING: Removing unreachable block (ram,0x007dad0c) */

void __fastcall FUN_007daaf0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  void *this;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  float *pfVar11;
  int *local_20;
  int local_1c;
  undefined1 auStack_18 [4];
  int *piStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce07e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_1c = param_1;
  FUN_007bd2b0(*(void **)(param_1 + 0x424),&local_20);
  uVar10 = FUN_0043b560();
  iVar8 = (int)uVar10;
  pfVar11 = (float *)&DAT_00e4fa4c;
  this = (void *)FUN_007bd2b0(*(void **)(param_1 + 0x424),&local_20);
  uVar6 = FUN_0043b6e0(this,pfVar11);
  if ((char)uVar6 != '\0') {
    iVar7 = FUN_0085baf0();
    iVar8 = iVar8 + iVar7;
  }
  piStack_14 = (int *)FUN_007d4720();
  *(undefined1 *)((int)piStack_14 + 0x11) = 1;
  piStack_14[1] = (int)piStack_14;
  *piStack_14 = (int)piStack_14;
  piStack_14[2] = (int)piStack_14;
  uStack_10 = 0;
  uStack_4 = 0;
  FUN_0085e8d0(iVar8,auStack_18);
  local_20 = (int *)*piStack_14;
  if (local_20 != piStack_14) {
    do {
      piVar9 = local_20 + 3;
      bVar5 = FUN_00861db0();
      if ((bVar5) && (bVar5 = FUN_00861a60(), !bVar5)) {
        FUN_007d8c80((void *)(param_1 + 0x440),piVar9);
      }
      FUN_0063b190((int *)&local_20);
    } while (local_20 != piStack_14);
  }
  piVar9 = (int *)*piStack_14;
  if (piVar9 != piStack_14) {
    do {
      bVar5 = FUN_00861a60();
      if (bVar5) {
        iVar8 = *(int *)(param_1 + 0x444);
        if ((iVar8 == 0) ||
           ((uint)(*(int *)(param_1 + 0x44c) - iVar8 >> 2) <=
            (uint)(*(int *)(param_1 + 0x448) - iVar8 >> 2))) {
          FUN_007d7ca0((void *)(param_1 + 0x440),*(undefined4 **)(param_1 + 0x448),1,piVar9 + 3);
        }
        else {
          puVar2 = *(undefined4 **)(param_1 + 0x448);
          FUN_007d48c0(puVar2,1,piVar9 + 3);
          *(undefined4 **)(param_1 + 0x448) = puVar2 + 1;
          param_1 = local_1c;
        }
      }
      if (*(char *)((int)piVar9 + 0x11) == '\0') {
        piVar3 = (int *)piVar9[2];
        if (*(char *)((int)piVar3 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x11);
          piVar9 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x11);
            piVar9 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x11);
          piVar4 = (int *)piVar9[1];
          piVar3 = piVar9;
          while ((piVar9 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x11);
            piVar4 = (int *)piVar9[1];
            piVar3 = piVar9;
          }
        }
      }
    } while (piVar9 != piStack_14);
  }
  if (DAT_0104e9fc != '\0') {
    if (*(void **)(param_1 + 0x444) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 0x444));
    }
    *(undefined4 *)(param_1 + 0x444) = 0;
    *(undefined4 *)(param_1 + 0x448) = 0;
    *(undefined4 *)(param_1 + 0x44c) = 0;
    local_20 = (int *)0x6;
    FUN_007d7ca0((void *)(param_1 + 0x440),*(undefined4 **)(param_1 + 0x448),1,&local_20);
    iVar8 = *(int *)(param_1 + 0x444);
    local_20 = (int *)0x33;
    if ((iVar8 == 0) ||
       ((uint)(*(int *)(param_1 + 0x44c) - iVar8 >> 2) <=
        (uint)(*(int *)(param_1 + 0x448) - iVar8 >> 2))) {
      FUN_007d7ca0((void *)(param_1 + 0x440),*(undefined4 **)(param_1 + 0x448),1,&local_20);
    }
    else {
      puVar2 = *(undefined4 **)(param_1 + 0x448);
      FUN_007d48c0(puVar2,1,&local_20);
      *(undefined4 **)(param_1 + 0x448) = puVar2 + 1;
    }
  }
  uStack_4 = 0xffffffff;
  FUN_007d80c0(auStack_18,&local_1c,(int *)*piStack_14,piStack_14);
                    /* WARNING: Subroutine does not return */
  _free(piStack_14);
}


//// FUNCTION CeremonyController_Constructor @ 007dade0 ////

int * __thiscall CeremonyController_Constructor(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar4;
  void *pvVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce08ad;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d587b4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5879c;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_LAB_00d58338;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_LAB_00d58348;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 **)((int)this + 0x380) = (undefined4 *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x374) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 **)((int)this + 0x398) = (undefined4 *)((int)this + 0x38c);
  *(undefined4 *)((int)this + 0x38c) = &PTR_LAB_00d58358;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 **)((int)this + 0x3b0) = (undefined4 *)((int)this + 0x3a4);
  *(undefined4 *)((int)this + 0x3a4) = &PTR_LAB_00d58358;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 **)((int)this + 0x3cc) = (undefined4 *)((int)this + 0x3c0);
  *(undefined4 *)((int)this + 0x3c0) = &PTR_LAB_00d58368;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 **)((int)this + 0x3e4) = (undefined4 *)((int)this + 0x3d8);
  *(undefined4 *)((int)this + 0x3d8) = &PTR_LAB_00d58378;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 **)((int)this + 0x3fc) = (undefined4 *)((int)this + 0x3f0);
  *(undefined4 *)((int)this + 0x3f0) = &PTR_LAB_00d58388;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  local_4._0_1_ = 9;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined1 *)((int)this + 0x420) = 0;
  *(int *)((int)this + 0x424) = param_1;
  iVar2 = FUN_007d46d0();
  *(int *)((int)this + 0x42c) = iVar2;
  *(undefined1 *)(iVar2 + 0x15) = 1;
  *(int *)(*(int *)((int)this + 0x42c) + 4) = *(int *)((int)this + 0x42c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x42c) = *(undefined4 *)((int)this + 0x42c);
  *(int *)(*(int *)((int)this + 0x42c) + 8) = *(int *)((int)this + 0x42c);
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x434) = 0x46;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  pvVar5 = (void *)0x0;
  local_4._0_1_ = 0xb;
  *(undefined4 *)((int)this + 0x450) = 0x46;
  iVar2 = FUN_0071b2b0();
  FUN_00741d80(this,iVar2,pvVar5);
  FUN_007d9270((int)this);
  cVar1 = FUN_007bd2c0(*(void **)((int)this + 0x424));
  if (cVar1 == '\0') {
    *(undefined4 *)((int)this + 0x418) = *(undefined4 *)((int)this + 0x40c);
  }
  else {
    *(undefined4 *)((int)this + 0x418) = *(undefined4 *)((int)this + 0x410);
  }
  FUN_007d9520(this);
  (*(code *)DAT_0104e9b4[1])();
  DAT_0104e9c8 = this;
  (*(code *)*DAT_0104e9b4)();
  if (*(int *)((int)this + 0x418) != *(int *)((int)this + 0x410)) {
    puVar3 = operator_new(8);
    local_4._0_1_ = 0xc;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_LAB_00d58264;
      uVar4 = FUN_00990ae0(extraout_ECX,extraout_EDX);
      puVar3[1] = (int)uVar4;
      *puVar3 = &PTR_FUN_00d58278;
    }
    local_4._0_1_ = 0xb;
    *(undefined4 **)((int)this + 0x41c) = puVar3;
  }
  cVar1 = FUN_007bd2c0(*(void **)((int)this + 0x424));
  if (cVar1 != '\0') {
    FUN_007d8840(this);
  }
  FUN_0053d480((int)this);
  FUN_007daaf0((int)this);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007db080 @ 007db080 ////

undefined4 __fastcall FUN_007db080(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c8);
}


//// FUNCTION FUN_007db100 @ 007db100 ////

void __fastcall FUN_007db100(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = FUN_00539330(*(int **)(param_1 + 0x4c8));
  if (iVar1 != 0) {
    iVar1 = 3;
    this = (void *)FUN_00539330(*(int **)(param_1 + 0x4c8));
    FUN_009021d0(this,iVar1);
  }
  return;
}


//// FUNCTION FUN_007db130 @ 007db130 ////

void __fastcall FUN_007db130(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puStack_1c;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = param_1[0x13f];
  if (iVar3 < 1) {
    param_1[0x13f] = iVar3 + 1;
  }
  else if (iVar3 == 1) {
    puStack_1c = (undefined4 *)0x7db153;
    FUN_007e7e10(param_1);
  }
  local_10 = param_1[0x30];
  local_c = param_1[0x27];
  local_8 = param_1[0x42];
  local_4 = param_1[0x39];
  local_14 = 0;
  puStack_1c = (undefined4 *)0x7db188;
  piVar2 = (int *)FUN_007dc3a0();
  puStack_1c = &local_14;
  cVar1 = (**(code **)(*piVar2 + 0x34))(&local_10);
  if (cVar1 != '\0') {
    puStack_1c = (undefined4 *)0x0;
    piVar2 = (int *)FUN_007dc3a0();
    cVar1 = (**(code **)(*piVar2 + 0x34))(&local_10,&puStack_1c);
    if (cVar1 != '\0') goto LAB_007db1cc;
  }
  iVar3 = FUN_007dc3a0();
  if (param_1[0x46] != iVar3) {
    return;
  }
LAB_007db1cc:
  FUN_007e7aa0(param_1);
  return;
}


//// FUNCTION FUN_007db220 @ 007db220 ////

void __fastcall FUN_007db220(int param_1)

{
  void *this;
  undefined4 *puVar1;
  char **ppcVar2;
  undefined4 local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce08c8;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"Lot",3);
  local_28 = 3;
  local_2c[3] = '\0';
  ppcVar2 = &local_2c;
  puVar1 = &local_34;
  local_4 = 0;
  this = (void *)FUN_00577370(*(int *)(param_1 + 0x4c8));
  FUN_00441750(this,puVar1,ppcVar2);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_30 = &stack0xffffffbc;
  (**(code **)(**(int **)(param_1 + 0x4f8) + 0x10c))();
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_007db2f0 @ 007db2f0 ////

void __fastcall FUN_007db2f0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint unaff_EBP;
  void *unaff_EDI;
  char *pcVar6;
  void **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20 [2];
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce08f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
  if (iVar2 == 0) {
LAB_007db3ad:
    local_2c = local_20;
    local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy((char *)local_2c,"ui/activity_idle.dds",0x14);
    local_28 = 0x14;
    *(char *)(local_2c + 5) = '\0';
    local_4 = 1;
  }
  else {
    piVar3 = (int *)FUN_00401c30(iVar2);
    iVar4 = FUN_00ace790(piVar3,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                         &TM::DesireTaskBuilder::RTTI_Type_Descriptor,0);
    if (iVar4 == 0) {
      iVar4 = FUN_00ace790(piVar3,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                           &TM::DesireTaskRepairman::RTTI_Type_Descriptor,0);
      if (iVar4 == 0) goto LAB_007db3ad;
    }
    pcVar6 = "ui/activity_busy.dds";
    if (*(char *)(iVar2 + 0x291) == '\0') {
      pcVar6 = "ui/activity_goingtotask.dds";
    }
    local_2c = local_20;
    local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
    local_28 = 0;
    local_24 = 0x14;
    pcVar5 = pcVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_2c,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
    local_4 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_2c);
  uStack_18 = 0xffffffff;
  if (0x14 < unaff_EBP) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  FUN_0069ce60(*(void **)(param_1 + 0x4e0),0xffffffff);
  ExceptionList = local_20[0];
  return;
}


//// FUNCTION FUN_007db470 @ 007db470 ////

void __fastcall FUN_007db470(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint **ppuVar7;
  undefined4 *local_60;
  uint *puStack_54;
  undefined4 uStack_50;
  char *pcStack_4c;
  uint uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0997;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"iconpanel2",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  FUN_0089e070(param_1,&local_2c,1,0,'\x01');
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Opening",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10c] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Open",4);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10a] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Closing",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10d] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Closed",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10b] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Pickup",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10e] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"highlight",9);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10f] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"normal",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x110] = iVar2;
  pvVar1 = operator_new(0x4dc);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    local_60 = FUN_007ac880(pvVar1,1,0,0,0);
  }
  local_4._0_1_ = 0;
  (**(code **)(param_1[0x139] + 4))();
  param_1[0x13e] = (int)local_60;
  (**(code **)param_1[0x139])();
  if (param_1[0x13e] != 0) {
    puStack_54 = (uint *)0x0;
    uStack_50 = 0;
    FUN_00882710(*(void **)(param_1[0x13e] + 0x358),(float *)&puStack_54);
    (**(code **)(*(int *)param_1[0x13e] + 0x74))();
    FUN_0089e5f0((void *)param_1[0x13e],'\x01');
    puStack_54 = &uStack_48;
    uStack_48 = uStack_48 & 0xffffff00;
    uStack_50 = 0;
    pcStack_4c = (char *)0x14;
    _strncpy((char *)puStack_54,"Lot",3);
    uStack_50 = 3;
    *(char *)((int)puStack_54 + 3) = '\0';
    ppuVar7 = &puStack_54;
    puVar6 = (undefined4 *)&stack0xffffff98;
    pvStack_c._0_1_ = 9;
    pvVar1 = (void *)FUN_00577370(param_1[0x132]);
    FUN_00441750(pvVar1,puVar6,ppuVar7);
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    if ((char *)0x14 < pcStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_54);
    }
    (**(code **)(*(int *)param_1[0x13e] + 0x10c))();
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"star_mood",9);
    uStack_48 = 9;
    pcStack_4c[9] = '\0';
    local_4._0_1_ = 10;
    FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x13e],&pcStack_4c,1,0,
                 (undefined1 *)0x0);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    puVar3 = &stack0xffffff7c;
    uVar4 = 0;
    uVar5 = 0x14;
    FUN_004015d0(&stack0xffffff70,"showmood",8);
    local_4._0_1_ = 0;
    pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_info");
    uVar5 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
    FUN_00881b40((void *)param_1[0xd6],"star_info",uVar5);
  }
  FUN_007e8be0((int)param_1);
  FUN_007e9550(param_1,'\0');
  FUN_007e7e10(param_1);
  FUN_007db220((int)param_1);
  pvVar1 = operator_new(0x360);
  if (pvVar1 == (void *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x20;
    pcStack_4c = _malloc(0x20);
    _strncpy(pcStack_4c,"ui/activity_busyfilm.dds",0x18);
    uStack_48 = 0x18;
    pcStack_4c[0x18] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xd);
    local_60 = FUN_0069d820(pvVar1,&pcStack_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xe;
  (**(code **)(param_1[0x133] + 4))();
  param_1[0x138] = (int)local_60;
  (**(code **)param_1[0x133])();
  local_4 = 0;
  if ((pvVar1 != (void *)0x0) && (0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  if (*(int *)(param_1[0x132] + 0x814) != 3) {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"",0);
    uStack_48 = 0;
    *pcStack_4c = '\0';
    local_4._0_1_ = 0xf;
    (**(code **)(*(int *)param_1[0x138] + 0x100))();
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    FUN_0069ce60((void *)param_1[0x138],0xffffff);
  }
  pcStack_4c = acStack_40;
  acStack_40[0] = '\0';
  uStack_48 = 0;
  uStack_44 = 0x14;
  _strncpy(pcStack_4c,"star_job",8);
  uStack_48 = 8;
  pcStack_4c[8] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0x10);
  FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x138],&pcStack_4c,1,0,
               (undefined1 *)0x0);
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007dbb10 @ 007dbb10 ////

int * __thiscall FUN_007dbb10(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce09e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MoodHUDCard_Constructor(this,param_2);
  *(undefined ***)this = &PTR_FUN_00d58b34;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d58b1c;
  piVar1 = (int *)((int)this + 0x4b8);
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 **)((int)this + 0x4c0) = (undefined4 *)((int)this + 0x4b4);
  *(undefined4 *)((int)this + 0x4b4) = &PTR_FUN_00d18c4c;
  *(int *)((int)this + 0x4c8) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x4bc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 **)((int)this + 0x4d8) = (undefined4 *)((int)this + 0x4cc);
  *(undefined4 *)((int)this + 0x4cc) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 **)((int)this + 0x4f0) = (undefined4 *)((int)this + 0x4e4);
  *(undefined4 *)((int)this + 0x4e4) = &PTR_FUN_00d2d100;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  local_4 = 3;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  FUN_007db470(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007dbc20 @ 007dbc20 ////

void __fastcall FUN_007dbc20(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0a22;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d58b34;
  param_1[0x14] = &PTR_LAB_00d58b1c;
  puVar2 = (undefined4 *)param_1[0x138];
  local_4 = 3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x133] + 4))();
    param_1[0x138] = 0;
    (**(code **)param_1[0x133])();
  }
  puVar2 = (undefined4 *)param_1[0x13e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x139] + 4))();
    param_1[0x13e] = 0;
    (**(code **)param_1[0x139])();
  }
  param_1[0x139] = &PTR_FUN_00d2d100;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13e] = 0;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x133] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x138] = 0;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x12d] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x132] = 0;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  local_4 = 0xffffffff;
  FUN_007e90c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007dbe30 @ 007dbe30 ////

void __fastcall FUN_007dbe30(int *param_1)

{
  uint uVar1;
  int iVar2;
  void *this;
  int *piVar3;
  
  iVar2 = param_1[0x132];
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x814) != 5)) {
    piVar3 = param_1;
    this = (void *)FUN_007dc3a0();
    FUN_007de3f0(this,piVar3);
  }
  else {
    FUN_007e7ec0(param_1,iVar2);
    FUN_007e7b00(param_1,(int *)param_1[0x132]);
    if ((char)param_1[0xc9] != '\0') {
      *(undefined1 *)(param_1[0x132] + 0x726) = 1;
    }
    uVar1 = FUN_0043b490((uint *)(param_1 + 0x106));
    if ((char)uVar1 != '\0') {
      FUN_007db220((int)param_1);
      FUN_007db2f0((int)param_1);
    }
    if ((DAT_0104d524 != param_1[0x132]) && (DAT_00f8860c != param_1[0x132])) {
      if (*(char *)((int)param_1 + 0x445) == '\0') {
        iVar2 = FUN_008819d0((void *)param_1[0xd6],"star_card");
        if (*(int *)(iVar2 + 0x260) != param_1[0x10f]) goto LAB_007dbf39;
      }
      FUN_00881c00((void *)param_1[0xd6],"star_card",param_1[0x110]);
      *(undefined1 *)((int)param_1 + 0x445) = 0;
      WHudIcon_Tick(param_1);
      return;
    }
    if (*(char *)((int)param_1 + 0x445) == '\0') {
      *(undefined1 *)((int)param_1 + 0x445) = 1;
      FUN_00881c00((void *)param_1[0xd6],"star_card",param_1[0x10f]);
      WHudIcon_Tick(param_1);
      return;
    }
  }
LAB_007dbf39:
  WHudIcon_Tick(param_1);
  return;
}


//// FUNCTION FUN_007dbf50 @ 007dbf50 ////

undefined4 * __thiscall FUN_007dbf50(void *this,byte param_1)

{
  FUN_007dbc20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007dc080 @ 007dc080 ////

int * __thiscall FUN_007dc080(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007dc0c0 @ 007dc0c0 ////

int __fastcall FUN_007dc0c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007dc270 @ 007dc270 ////

int * __thiscall FUN_007dc270(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007dc2a0 @ 007dc2a0 ////

int * __cdecl FUN_007dc2a0(int param_1,int param_2,int *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    (**(code **)(*param_3 + 4))();
    param_3[5] = *(int *)(param_1 + 0x14);
    (**(code **)*param_3)();
    param_1 = param_1 + 0x18;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_007dc2e0 @ 007dc2e0 ////

undefined4 * __cdecl FUN_007dc2e0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar1 = param_3 + -6;
    iVar2 = param_2 + -0x18;
    (**(code **)(param_3[-6] + 4))();
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    (**(code **)*puVar1)();
    param_3 = puVar1;
    param_2 = iVar2;
  } while (iVar2 != param_1);
  return puVar1;
}


//// FUNCTION FUN_007dc3a0 @ 007dc3a0 ////

undefined4 FUN_007dc3a0(void)

{
  return DAT_0104ea14;
}


//// FUNCTION FUN_007dc540 @ 007dc540 ////

void __cdecl FUN_007dc540(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_007dc5a0 @ 007dc5a0 ////

void __fastcall FUN_007dc5a0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d58c70;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_007dc5f0 @ 007dc5f0 ////

void __fastcall FUN_007dc5f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58c70;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_007dc6d0 @ 007dc6d0 ////

void __fastcall FUN_007dc6d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58c80;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_007dc7b0 @ 007dc7b0 ////

undefined4 * __thiscall FUN_007dc7b0(void *this,byte param_1)

{
  FUN_007dc6d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007dc7d0 @ 007dc7d0 ////

void __cdecl FUN_007dc7d0(int *param_1,int *param_2)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0a38;
  pvStack_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_10 = param_1[5];
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d18c4c;
  ExceptionList = &pvStack_c;
  if (local_10 != 0) {
    local_1c = (int *)(local_10 + 0x18);
    local_20 = *local_1c;
    ExceptionList = &pvStack_c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  (**(code **)(*param_1 + 4))();
  param_1[5] = param_2[5];
  (**(code **)*param_1)();
  (**(code **)(*param_2 + 4))();
  param_2[5] = local_10;
  (**(code **)*param_2)();
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007dc8a0 @ 007dc8a0 ////

void __cdecl
FUN_007dc8a0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined *param_10)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0a58;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    iVar1 = param_1 + iVar4 * 0x18;
    cVar3 = (*(code *)param_10)(*(undefined4 *)(iVar1 + 0x14),param_9);
    if (cVar3 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
    (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
    puVar2[5] = *(undefined4 *)(iVar1 + 0x14);
    (**(code **)*puVar2)();
    param_2 = iVar4;
  }
  puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
  (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
  puVar2[5] = param_9;
  (**(code **)*puVar2)();
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007dc970 @ 007dc970 ////

void __cdecl FUN_007dc970(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0a78;
  local_c = ExceptionList;
  iVar1 = (param_3 - param_1) / 0x18;
  iVar2 = (param_2 - param_1) / 0x18;
  iVar5 = iVar2;
  local_38 = iVar1;
  while (iVar3 = iVar5, iVar3 != 0) {
    iVar5 = local_38 % iVar3;
    local_38 = iVar3;
  }
  if ((local_38 < iVar1) && (0 < local_38)) {
    piVar8 = (int *)(param_1 + local_38 * 0x18);
    param_2 = iVar2 * 0x18;
    ExceptionList = &local_c;
    do {
      local_18 = &local_24;
      iVar1 = param_2 + (int)piVar8;
      local_20 = 0;
      local_1c = (int *)0x0;
      local_24 = &PTR_FUN_00d18c4c;
      local_10 = *(int *)(iVar2 * -0x18 + 0x14 + iVar1);
      if (local_10 != 0) {
        local_1c = (int *)(local_10 + 0x18);
        local_20 = *local_1c;
        *(int **)(*local_1c + 4) = &local_20;
        *local_1c = (int)&local_20;
      }
      local_4 = 0;
      if (iVar1 == param_3) {
        piVar7 = &param_1;
      }
      else {
        iStack_30 = iVar1;
        piVar7 = &iStack_30;
      }
      piVar6 = (int *)*piVar7;
      piVar7 = piVar8;
      while (piVar4 = piVar6, piVar4 != piVar8) {
        (**(code **)(*piVar7 + 4))();
        piVar7[5] = piVar4[5];
        (**(code **)*piVar7)();
        iVar1 = (param_3 - (int)piVar4) / 0x18;
        if (iVar2 < iVar1) {
          iStack_2c = param_2 + (int)piVar4;
          piVar7 = &iStack_2c;
        }
        else {
          iStack_28 = param_1 + (iVar2 - iVar1) * 0x18;
          piVar7 = &iStack_28;
        }
        piVar6 = (int *)*piVar7;
        piVar7 = piVar4;
      }
      (**(code **)(*piVar7 + 4))();
      piVar7[5] = local_10;
      (**(code **)*piVar7)();
      if (local_1c != (int *)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != 0) {
        *(int **)(local_20 + 4) = local_1c;
      }
      piVar8 = piVar8 + -6;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007dcb50 @ 007dcb50 ////

void __fastcall FUN_007dcb50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0.0 <= *(float *)(param_1 + 0xc0)) {
    iVar2 = 0;
    iVar3 = 0;
    while( true ) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x35c) != 0) {
        iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
      }
      if (iVar1 <= iVar2) break;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x35c) + iVar3 + 0x14) + 0x2c))();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    }
  }
  return;
}


//// FUNCTION FUN_007dcbc0 @ 007dcbc0 ////

void __thiscall FUN_007dcbc0(void *this,int param_1)

{
  char cVar1;
  int *this_00;
  float fVar2;
  
  if (param_1 == 0) {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14);
    (**(code **)(*this_00 + 100))(1,this,0xc1200000);
  }
  else {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14 + param_1 * 0x18);
    (**(code **)(*this_00 + 100))
              (2,*(undefined4 *)(*(int *)((int)this + 0x35c) + param_1 * 0x18 + -4),
               *(float *)((int)this + 0x390) + 10.0);
  }
  (**(code **)(*this_00 + 0x5c))(1,this,0);
  cVar1 = FUN_007e7910((int)this_00);
  fVar2 = DAT_00e5bd34;
  if (cVar1 == '\0') {
    fVar2 = DAT_00e5bd34 * 0.4;
  }
  (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,fVar2);
  cVar1 = (**(code **)(*this_00 + 0x100))();
  if (cVar1 == '\0') {
    FUN_0089e5f0(this_00,'\x01');
  }
  if ((this_00[0x58] == 0) && (this_00[0x54] == 0)) {
    (**(code **)(*(int *)this + 0xc))(this_00,1);
  }
  return;
}


//// FUNCTION FUN_007dcca0 @ 007dcca0 ////

undefined1 __thiscall FUN_007dcca0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1;
  
  local_1 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    while( true ) {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar1 = FUN_007db080(iVar2);
      if ((iVar1 != 0) && (iVar2 = FUN_007db080(iVar2), iVar2 == param_1)) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == *(int *)((int)this + 0x360)) {
        return 0;
      }
    }
    local_1 = 1;
  }
  return local_1;
}


//// FUNCTION FUN_007dcd20 @ 007dcd20 ////

void __fastcall FUN_007dcd20(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x344) != 0) {
    iVar3 = *(int *)(param_1 + 0x35c);
    iVar4 = *(int *)(param_1 + 0x360);
    if (iVar3 != iVar4) {
      do {
        piVar2 = *(int **)(iVar3 + 0x14);
        iVar1 = iVar3 + 0x18;
        if (iVar1 != iVar4) {
          local_8 = 0;
          (**(code **)(**(int **)(iVar3 + 0x2c) + 0x34))(&DAT_0104cce0,&local_8);
        }
        uStack_4 = 0;
        (**(code **)(*piVar2 + 0x34))(&DAT_0104cce0,&uStack_4);
        iVar4 = *(int *)(param_1 + 0x360);
        iVar3 = iVar1;
      } while (iVar1 != iVar4);
    }
  }
  return;
}


//// FUNCTION FUN_007dcda0 @ 007dcda0 ////

int __thiscall FUN_007dcda0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x14);
      iVar2 = FUN_007db080(iVar1);
      if (iVar2 != 0) {
        iVar2 = FUN_007db080(iVar1);
        if (iVar2 == param_1) {
          return iVar1;
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0x360));
  }
  return 0;
}


//// FUNCTION FUN_007dce40 @ 007dce40 ////

void __fastcall FUN_007dce40(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  fVar1 = (float)param_1[0xd1];
  if (param_1[0xd1] < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = DAT_00e5bd34 * 0.4;
  fVar4 = (float10)(**(code **)(*param_1 + 0x14))();
  fVar4 = (float10)(fVar2 * fVar1 - fVar1 * 10.0) - fVar4;
  if (fVar4 < (float10)0.0 != (fVar4 == (float10)0.0)) {
    param_1[0xe4] = 0;
    return;
  }
  if (param_1[0xd7] != 0) {
    if ((param_1[0xd8] - param_1[0xd7]) / 0x18 != 0) {
      iVar3 = 0;
      if (param_1[0xd7] != 0) {
        iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
      }
      fVar1 = (float)(iVar3 + 1);
      if (iVar3 + 1 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      param_1[0xe4] = (int)((float)fVar4 / fVar1 + 2.0);
    }
  }
  return;
}


//// FUNCTION FUN_007dcf60 @ 007dcf60 ////

void __cdecl FUN_007dcf60(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_007dc7d0(param_2,param_1);
  }
  cVar1 = (*(code *)param_4)(param_3[5],param_2[5]);
  if (cVar1 != '\0') {
    FUN_007dc7d0(param_3,param_2);
  }
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_007dc7d0(param_2,param_1);
  }
  return;
}


//// FUNCTION FUN_007dcfd0 @ 007dcfd0 ////

void __cdecl
FUN_007dcfd0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_stack_ffffffd4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0a98;
  local_4 = 0;
  iVar4 = param_2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    in_stack_ffffffd4 = 0x7dd023;
    cVar2 = (*(code *)param_10)();
    if (cVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    piVar5 = (int *)(param_1 + iVar4 * 0x18);
    (**(code **)(*piVar5 + 4))();
    piVar5[5] = *(int *)(param_1 + iVar3 * 0x18 + 0x14);
    (**(code **)*piVar5)();
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0x18);
    (**(code **)(*(int *)(param_1 + iVar4 * 0x18) + 4))();
    puVar1[5] = *(undefined4 *)(param_1 + param_3 * 0x18 + -4);
    (**(code **)*puVar1)();
    iVar4 = param_3 + -1;
  }
  iVar3 = 0;
  piVar5 = (int *)0x0;
  if (param_9 != 0) {
    piVar5 = (int *)(param_9 + 0x18);
    iVar3 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffffc8;
    *piVar5 = (int)&stack0xffffffc8;
  }
  FUN_007dc8a0(param_1,iVar4,param_2,&PTR_FUN_00d18c4c,iVar3,piVar5,&stack0xffffffc4,
               in_stack_ffffffd4,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007dd130 @ 007dd130 ////

void __cdecl
FUN_007dd130(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_ffffffe0;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0ab8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_3 + 4))();
  param_3[5] = *(int *)(param_1 + 0x14);
  (**(code **)*param_3)();
  iVar1 = 0;
  piVar2 = (int *)0x0;
  if (param_9 != 0) {
    piVar2 = (int *)(param_9 + 0x18);
    iVar1 = *piVar2;
    *(undefined1 **)(*piVar2 + 4) = &stack0xffffffd4;
    *piVar2 = (int)&stack0xffffffd4;
  }
  FUN_007dcfd0(param_1,0,(param_2 - param_1) / 0x18,&PTR_FUN_00d18c4c,iVar1,piVar2,&stack0xffffffd0,
               in_stack_ffffffe0,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007dd210 @ 007dd210 ////

void __fastcall FUN_007dd210(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0xd7] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      FUN_007dcbc0(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_007dd280 @ 007dd280 ////

void __cdecl FUN_007dd280(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_3;
        *param_3 = &PTR_LAB_00d58c80;
        iVar2 = *(int *)(param_1 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 0x18;
      param_3 = param_3 + 6;
      puVar3 = puVar3 + 6;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_007dd2f0 @ 007dd2f0 ////

void __cdecl FUN_007dd2f0(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_007dcf60(param_1,param_1 + iVar1 * 6,param_1 + iVar1 * 0xc,param_4);
    FUN_007dcf60(param_2 + iVar1 * -6,param_2,param_2 + iVar1 * 6,param_4);
    FUN_007dcf60(param_3 + iVar1 * -0xc,param_3 + iVar1 * -6,param_3,param_4);
    FUN_007dcf60(param_1 + iVar1 * 6,param_2,param_3 + iVar1 * -6,param_4);
    return;
  }
  FUN_007dcf60(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_007dd3a0 @ 007dd3a0 ////

void __cdecl FUN_007dd3a0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_stack_ffffffe4;
  
  iVar2 = (param_2 - param_1) / 0x18;
  iVar3 = iVar2 / 2;
  if (0 < iVar3) {
    piVar4 = (int *)(param_1 + 0x14 + iVar3 * 0x18);
    do {
      iVar5 = 0;
      piVar6 = (int *)0x0;
      piVar4 = piVar4 + -6;
      iVar1 = *piVar4;
      iVar3 = iVar3 + -1;
      if (iVar1 != 0) {
        piVar6 = (int *)(iVar1 + 0x18);
        iVar5 = *piVar6;
        *(undefined1 **)(*piVar6 + 4) = &stack0xffffffd8;
        *piVar6 = (int)&stack0xffffffd8;
      }
      FUN_007dcfd0(param_1,iVar3,iVar2,&PTR_FUN_00d18c4c,iVar5,piVar6,&stack0xffffffd4,
                   in_stack_ffffffe4,iVar1,param_3);
    } while (0 < iVar3);
  }
  return;
}


//// FUNCTION FUN_007dd470 @ 007dd470 ////

void __cdecl FUN_007dd470(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_ffffffec;
  
  iVar2 = 0;
  piVar3 = (int *)0x0;
  iVar1 = *(int *)(param_2 + -4);
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 0x18);
    iVar2 = *piVar3;
    *(undefined1 **)(*piVar3 + 4) = &stack0xffffffe0;
    *piVar3 = (int)&stack0xffffffe0;
  }
  FUN_007dd130(param_1,param_2 + -0x18,(int *)(param_2 + -0x18),&PTR_FUN_00d18c4c,iVar2,piVar3,
               &stack0xffffffdc,in_stack_ffffffec,iVar1,param_3);
  return;
}


//// FUNCTION FUN_007dd510 @ 007dd510 ////

void __cdecl FUN_007dd510(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    puVar3 = param_1 + 2;
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_1;
        *param_1 = &PTR_LAB_00d58c80;
        iVar2 = *(int *)(param_3 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 6;
      puVar3 = puVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_007dd5b0 @ 007dd5b0 ////

void __cdecl FUN_007dd5b0(undefined4 *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_8;
  int *local_4;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  FUN_007dd2f0(param_2,piVar4,param_3 + -6,param_4);
  piStack_8 = piVar4;
  while (((param_2 < piStack_8 &&
          (cVar2 = (*(code *)param_4)(piStack_8[-1],piStack_8[5]), cVar2 == '\0')) &&
         (cVar2 = (*(code *)param_4)(piStack_8[5],piStack_8[-1]), cVar2 == '\0'))) {
    piStack_8 = piStack_8 + -6;
  }
  do {
    piVar4 = piVar4 + 6;
    piVar1 = piVar4;
    local_4 = piVar4;
    piVar5 = piStack_8;
    if ((param_3 <= piVar4) || (cVar2 = (*(code *)param_4)(piVar4[5],piStack_8[5]), cVar2 != '\0'))
    break;
    cVar2 = (*(code *)param_4)(piStack_8[5],piVar4[5]);
  } while (cVar2 == '\0');
joined_r0x007dd66a:
  do {
    if (param_3 <= piVar1) {
LAB_007dd6b4:
      if (param_2 < piStack_8) {
        piVar3 = piStack_8 + -1;
        do {
          cVar2 = (*(code *)param_4)(*piVar3,piVar5[5]);
          piVar4 = local_4;
          if (cVar2 == '\0') {
            cVar2 = (*(code *)param_4)(piVar5[5],*piVar3);
            if (cVar2 != '\0') break;
            piVar5 = piVar5 + -6;
            FUN_007dc7d0(piVar5,piVar3 + -5);
          }
          piStack_8 = piStack_8 + -6;
          piVar3 = piVar3 + -6;
        } while (param_2 < piStack_8);
      }
      if (piStack_8 == param_2) {
        if (piVar1 == param_3) {
          *param_1 = piVar5;
          param_1[1] = piVar4;
          return;
        }
        if (piVar4 != piVar1) {
          FUN_007dc7d0(piVar5,piVar4);
        }
        piVar4 = piVar4 + 6;
        FUN_007dc7d0(piVar5,piVar1);
        piVar1 = piVar1 + 6;
        local_4 = piVar4;
        piVar5 = piVar5 + 6;
      }
      else {
        piStack_8 = piStack_8 + -6;
        if (piVar1 == param_3) {
          piVar5 = piVar5 + -6;
          if (piStack_8 != piVar5) {
            FUN_007dc7d0(piStack_8,piVar5);
          }
          piVar4 = piVar4 + -6;
          FUN_007dc7d0(piVar5,piVar4);
          local_4 = piVar4;
        }
        else {
          FUN_007dc7d0(piVar1,piStack_8);
          piVar1 = piVar1 + 6;
        }
      }
      goto joined_r0x007dd66a;
    }
    cVar2 = (*(code *)param_4)(piVar5[5],piVar1[5]);
    local_4 = piVar4;
    if (cVar2 == '\0') {
      cVar2 = (*(code *)param_4)(piVar1[5],piVar5[5]);
      if (cVar2 != '\0') goto LAB_007dd6b4;
      local_4 = piVar4 + 6;
      FUN_007dc7d0(piVar4,piVar1);
    }
    piVar4 = local_4;
    piVar1 = piVar1 + 6;
  } while( true );
}


//// FUNCTION FUN_007dd800 @ 007dd800 ////

void __cdecl FUN_007dd800(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar2 = param_1;
  if (param_1 != param_2) {
    while (iVar3 = iVar2, iVar2 = iVar3 + 0x18, iVar2 != param_2) {
      cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(param_1 + 0x14));
      if (cVar4 == '\0') {
        cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar3 + 0x14));
        iVar1 = iVar2;
        if (cVar4 != '\0') {
          do {
            iVar5 = iVar1 + -0x18;
            cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar1 + -0x1c))
            ;
            iVar1 = iVar5;
          } while (cVar4 != '\0');
          if ((iVar5 != iVar2) && (iVar2 != iVar3 + 0x30)) {
            FUN_007dc970(iVar5,iVar2,iVar3 + 0x30);
          }
        }
      }
      else if ((param_1 != iVar2) && (iVar2 != iVar3 + 0x30)) {
        FUN_007dc970(param_1,iVar2,iVar3 + 0x30);
      }
    }
  }
  return;
}


//// FUNCTION FUN_007dd970 @ 007dd970 ////

void __cdecl FUN_007dd970(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (1 < iVar1 / 0x18) {
    FUN_007dd470(param_1,param_2,param_3);
    param_2 = param_2 + -0x18;
    iVar1 = param_2 - param_1;
  }
  return;
}


//// FUNCTION FUN_007dd9d0 @ 007dd9d0 ////

void FUN_007dd9d0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007dc6d0(param_1);
  }
  return;
}


//// FUNCTION FUN_007dda00 @ 007dda00 ////

void __fastcall FUN_007dda00(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007dc6d0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007dda50 @ 007dda50 ////

undefined4 * FUN_007dda50(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007dd510(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007dda80 @ 007dda80 ////

void FUN_007dda80(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0ad8;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_007ddaf0 @ 007ddaf0 ////

void __cdecl FUN_007ddaf0(int *param_1,int *param_2,int param_3,undefined *param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 / 0x18;
    if (iVar2 < 0x21) {
LAB_007ddbd0:
      if (1 < iVar2) {
        FUN_007dd800((int)param_1,(int)param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < ((int)param_2 - (int)param_1) / 0x18) {
          FUN_007dd3a0((int)param_1,(int)param_2,param_4);
        }
        FUN_007dd970((int)param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_007ddbd0;
    }
    FUN_007dd5b0(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)local_8 - (int)param_1) / 0x18 < ((int)param_2 - (int)local_4) / 0x18) {
      FUN_007ddaf0(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_007ddaf0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_007ddc40 @ 007ddc40 ////

void __fastcall FUN_007ddc40(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007dc6d0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007ddca0 @ 007ddca0 ////

void __thiscall FUN_007ddca0(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_007dc2a0((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007dc6d0(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007ddd40 @ 007ddd40 ////

void __thiscall FUN_007ddd40(void *this,int *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined ***local_28;
  int local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ce0af8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d58c80;
  ExceptionList = &local_10;
  if (local_20 != 0) {
    local_2c = (int *)(local_20 + 0x18);
    local_30 = *local_2c;
    ExceptionList = &local_10;
    *(int **)(*local_2c + 4) = &local_30;
    *local_2c = (int)&local_30;
  }
  iVar3 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar3 != 0) {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x18;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    local_18 = this;
    puVar1 = &stack0xffffffc0;
    if (0xaaaaaaaU - iVar2 < param_2) {
      FUN_007dda80();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0xaaaaaaa - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x18;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_007dc0c0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007dd280(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007dd510(puVar5,param_2,(int)&local_34);
      FUN_007dd280((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_007dd9d0(puVar5,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 6;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 6;
      *(undefined4 **)((int)this + 4) = puVar4;
    }
    else {
      puVar5 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar5 - (int)param_1) / 0x18) < param_2) {
        FUN_007dd280((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007dda50(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007dc540(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007dd280((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007dc2e0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007dc540(param_1,param_1 + param_2 * 6,(int)&local_34);
      }
    }
  }
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_007de0b0 @ 007de0b0 ////

void __fastcall FUN_007de0b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0b42;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d58cac;
  param_1[0x14] = &PTR_FUN_00d58c90;
  local_4 = 3;
  FUN_004d9e90((int)(param_1 + 0xd2));
  while( true ) {
    if ((param_1[0xd7] == 0) || ((int)(param_1[0xd8] - param_1[0xd7]) / 0x18 == 0)) break;
    puVar1 = *(undefined4 **)(param_1[0xd8] + -4);
    if ((param_1[0xd7] != 0) &&
       (puVar2 = (undefined4 *)param_1[0xd8], ((int)puVar2 - param_1[0xd7]) / 0x18 != 0)) {
      puVar4 = puVar2 + -6;
      if (puVar4 != puVar2) {
        piVar3 = puVar2 + -4;
        do {
          *puVar4 = &PTR_LAB_00d58c80;
          if ((int *)*piVar3 != (int *)0x0) {
            *(int *)*piVar3 = piVar3[-1];
          }
          if (piVar3[-1] != 0) {
            *(int *)(piVar3[-1] + 4) = *piVar3;
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
          piVar3[3] = 0;
          if ((int *)*piVar3 != (int *)0x0) {
            *(int *)*piVar3 = piVar3[-1];
          }
          if (piVar3[-1] != 0) {
            *(int *)(piVar3[-1] + 4) = *piVar3;
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
          puVar4 = puVar4 + 6;
          piVar3 = piVar3 + 6;
        } while (puVar4 != puVar2);
      }
      param_1[0xd8] = param_1[0xd8] + -0x18;
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  param_1[0xda] = &PTR_LAB_00d58c80;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdf] = 0;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  FUN_007dda00((int)(param_1 + 0xd6));
  FUN_004d9e90((int)(param_1 + 0xd2));
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007de2a0 @ 007de2a0 ////

void __thiscall FUN_007de2a0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = param_1;
  if (param_1 != 0) {
    piVar5 = *(int **)((int)this + 0x34c);
    if (piVar5 != *(int **)((int)this + 0x350)) {
      do {
        if (piVar5[5] == param_1) {
          FUN_005ba670((void *)((int)this + 0x348),&param_1,piVar5);
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          break;
        }
        piVar5 = piVar5 + 6;
      } while (piVar5 != *(int **)((int)this + 0x350));
    }
    piVar5 = *(int **)((int)this + 0x35c);
    if (piVar5 != *(int **)((int)this + 0x360)) {
LAB_007de301:
      puVar7 = (undefined4 *)piVar5[5];
      iVar6 = FUN_007db080((int)puVar7);
      if ((iVar6 == 0) || (iVar6 = FUN_007db080((int)puVar7), iVar6 != iVar8)) goto LAB_007de31a;
      if (puVar7 != (undefined4 *)0x0) {
        piVar1 = puVar7 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(1);
        }
      }
      piVar2 = *(int **)((int)this + 0x360);
      piVar1 = piVar5 + 6;
      while (piVar1 != piVar2) {
        (**(code **)(*piVar5 + 4))();
        piVar5[5] = piVar5[0xb];
        (**(code **)*piVar5)();
        piVar1 = piVar5 + 0xc;
        piVar5 = piVar5 + 6;
      }
      puVar3 = *(undefined4 **)((int)this + 0x360);
      for (puVar7 = puVar3 + -6; puVar7 != puVar3; puVar7 = puVar7 + 6) {
        FUN_007dc6d0(puVar7);
      }
      *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) + -0x18;
    }
LAB_007de386:
    FUN_007dce40(this);
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)((int)this + 0x360) - *(int *)((int)this + 0x35c)) / 0x18;
    }
    if (0 < iVar8) {
      iVar6 = 0;
      do {
        FUN_007dcbc0(this,iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar8);
    }
    do {
      cVar4 = (**(code **)(*(int *)this + 0x50))(1);
    } while (cVar4 != '\0');
  }
  return;
LAB_007de31a:
  piVar5 = piVar5 + 6;
  if (piVar5 == *(int **)((int)this + 0x360)) goto LAB_007de386;
  goto LAB_007de301;
}


//// FUNCTION FUN_007de3f0 @ 007de3f0 ////

void __thiscall FUN_007de3f0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar5 = *(int **)((int)this + 0x35c);
    if (piVar5 != *(int **)((int)this + 0x360)) {
      do {
        puVar2 = (undefined4 *)piVar5[5];
        if (puVar2 == param_1) {
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          if (puVar2 != (undefined4 *)0x0) {
            piVar1 = puVar2 + 0x12;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar2)(1);
            }
          }
          FUN_007ddca0((void *)((int)this + 0x358),&param_1,piVar5);
          break;
        }
        piVar5 = piVar5 + 6;
      } while (piVar5 != *(int **)((int)this + 0x360));
    }
    FUN_007dce40(this);
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)((int)this + 0x360) - *(int *)((int)this + 0x35c)) / 0x18;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        FUN_007dcbc0(this,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    do {
      cVar3 = (**(code **)(*(int *)this + 0x50))(1);
    } while (cVar3 != '\0');
  }
  return;
}


//// FUNCTION FUN_007de4b0 @ 007de4b0 ////

void __fastcall FUN_007de4b0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_004d9e90(param_1 + 0x348);
  if (*(int *)(param_1 + 0x344) != 0) {
    while ((*(int *)(param_1 + 0x35c) != 0 &&
           ((*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18 != 0))) {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x360) + -4);
      if ((*(int *)(param_1 + 0x35c) != 0) &&
         (puVar3 = *(undefined4 **)(param_1 + 0x360),
         ((int)puVar3 - *(int *)(param_1 + 0x35c)) / 0x18 != 0)) {
        for (puVar4 = puVar3 + -6; puVar4 != puVar3; puVar4 = puVar4 + 6) {
          FUN_007dc6d0(puVar4);
        }
        *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + -0x18;
      }
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_007de590 @ 007de590 ////

void __thiscall FUN_007de590(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007de5d5;
    }
  }
  iVar1 = 0;
LAB_007de5d5:
  FUN_007ddd40(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_007de600 @ 007de600 ////

undefined4 * __thiscall FUN_007de600(void *this,char param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0b82;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d58cac;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d58c90;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 **)((int)this + 0x374) = (undefined4 *)((int)this + 0x368);
  *(undefined4 *)((int)this + 0x368) = &PTR_LAB_00d58c80;
  *(undefined4 *)((int)this + 0x37c) = 0;
  this_00 = (undefined4 *)((int)this + 0x380);
  local_4 = 3;
  FUN_0043b460(this_00);
  *(undefined4 *)((int)this + 0x390) = 0;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffff5;
  puVar2 = DAT_0104ea14;
  if (param_1 != '\0') {
    if (DAT_0104ea14 != (undefined4 *)0x0) {
      iVar1 = DAT_0104ea14[0x12];
      DAT_0104ea14[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104ea00[1])();
      DAT_0104ea14 = (undefined4 *)0x0;
      (*(code *)*DAT_0104ea00)();
    }
    (*(code *)DAT_0104ea00[1])();
    DAT_0104ea14 = this;
    (*(code *)*DAT_0104ea00)();
  }
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0x14))();
  FUN_0073e4e0(this,DAT_00e5bd38);
  FUN_0043b4d0(this_00,1);
  *this_00 = 10;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007de760 @ 007de760 ////

undefined4 * __thiscall FUN_007de760(void *this,byte param_1)

{
  FUN_007de0b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007de780 @ 007de780 ////

void __thiscall FUN_007de780(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007dd510(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_007de590(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007de810 @ 007de810 ////

void __fastcall FUN_007de810(int *param_1)

{
  bool bVar1;
  char cVar2;
  void *this;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0ba3;
  local_c = ExceptionList;
  iVar5 = param_1[0xd3];
  bVar1 = false;
  local_2c = 0;
  ExceptionList = &local_c;
  if (iVar5 != param_1[0xd4]) {
    do {
      iVar4 = *(int *)(iVar5 + 0x14);
      if ((iVar4 != 0) && (cVar2 = FUN_007dcca0(param_1,iVar4), cVar2 == '\0')) {
        this = operator_new(0x500);
        local_4 = 0;
        if (this == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else if (param_1[0xd7] == 0) {
          piVar3 = FUN_007dbb10(this,iVar4,0);
        }
        else {
          piVar3 = FUN_007dbb10(this,iVar4,(param_1[0xd8] - param_1[0xd7]) / 0x18);
        }
        local_4 = 0xffffffff;
        FUN_007e7dc0(piVar3);
        local_18 = &local_24;
        local_20 = 0;
        local_1c = (int *)0x0;
        local_24 = &PTR_LAB_00d58c80;
        if (piVar3 != (int *)0x0) {
          local_1c = piVar3 + 6;
          local_20 = *local_1c;
          *(int **)(*local_1c + 4) = &local_20;
          *local_1c = (int)&local_20;
        }
        local_4 = 1;
        local_10 = piVar3;
        FUN_007de780(param_1 + 0xd6,(int)&local_24);
        local_4 = 0xffffffff;
        local_24 = &PTR_LAB_00d58c80;
        if (local_1c != (int *)0x0) {
          *local_1c = local_20;
        }
        if (local_20 != 0) {
          *(int **)(local_20 + 4) = local_1c;
        }
        local_10 = (int *)0x0;
        local_20 = 0;
        local_1c = (int *)0x0;
        if (param_1[0xd7] == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
        }
        FUN_007dcbc0(param_1,iVar4 + -1);
        local_2c = local_2c + 1;
        bVar1 = true;
      }
      iVar5 = iVar5 + 0x18;
    } while (iVar5 != param_1[0xd4]);
    if ((bVar1) && (local_2c == 1)) {
      FUN_007dce40(param_1);
      FUN_007dd210(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007de9e0 @ 007de9e0 ////

void __thiscall FUN_007de9e0(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0bb8;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + 1;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d18c4c;
  local_10 = param_1;
  if (param_1 != 0) {
    local_1c = (int *)(param_1 + 0x18);
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  FUN_004db640((void *)((int)this + 0x348),(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_FUN_00d18c4c;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = 0;
  local_20 = 0;
  local_1c = (int *)0x0;
  FUN_007de810(this);
  FUN_007dce40(this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007deac0 @ 007deac0 ////

void __fastcall FUN_007deac0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0bd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xd1] = 0;
  FUN_004d9e90((int)(param_1 + 0xd2));
  puVar6 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      piVar2 = (int *)puVar6[2];
      if ((piVar2 != (int *)0x0) && (cVar3 = (**(code **)(*piVar2 + 0x204))(), cVar3 != '\0')) {
        iVar4 = FUN_005773c0((int)piVar2);
        iVar5 = GetPlayerStudio();
        if ((iVar4 == iVar5) && (piVar2[0x205] == 5)) {
          param_1[0xd1] = param_1[0xd1] + 1;
          piStack_1c = piVar2 + 6;
          pppuStack_18 = &ppuStack_24;
          ppuStack_24 = &PTR_FUN_00d18c4c;
          iStack_20 = *piStack_1c;
          *(int **)(*piStack_1c + 4) = &iStack_20;
          *piStack_1c = (int)&iStack_20;
          uStack_4 = 0;
          piStack_10 = piVar2;
          FUN_004db640(param_1 + 0xd2,(int)&ppuStack_24);
          uStack_4 = 0xffffffff;
          FUN_00435ec0(&ppuStack_24);
        }
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
  }
  FUN_007ddaf0((int *)param_1[0xd3],(int *)param_1[0xd4],(param_1[0xd4] - param_1[0xd3]) / 0x18,
               &LAB_007dbf70);
  FUN_007dce40(param_1);
  FUN_007de810(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007dec00 @ 007dec00 ////

void __fastcall FUN_007dec00(int *param_1)

{
  FUN_007deac0(param_1);
  FUN_007dcd20((int)param_1);
  FUN_007dd210(param_1);
  return;
}


//// FUNCTION FUN_007dec20 @ 007dec20 ////

void __fastcall FUN_007dec20(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0043b490((uint *)(param_1 + 0xe0));
  if ((char)uVar1 != '\0') {
    FUN_007deac0(param_1);
    FUN_007dcd20((int)param_1);
    FUN_007dd210(param_1);
    FUN_007deac0(param_1);
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_007dec70 @ 007dec70 ////

undefined4 __fastcall FUN_007dec70(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c8);
}


//// FUNCTION FUN_007decf0 @ 007decf0 ////

void __fastcall FUN_007decf0(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = FUN_00539330(*(int **)(param_1 + 0x4c8));
  if (iVar1 != 0) {
    iVar1 = 3;
    this = (void *)FUN_00539330(*(int **)(param_1 + 0x4c8));
    FUN_009021d0(this,iVar1);
  }
  return;
}


//// FUNCTION FUN_007ded20 @ 007ded20 ////

void __fastcall FUN_007ded20(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puStack_1c;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = param_1[0x13f];
  if (iVar3 < 1) {
    param_1[0x13f] = iVar3 + 1;
  }
  else if (iVar3 == 1) {
    puStack_1c = (undefined4 *)0x7ded43;
    FUN_007e7e10(param_1);
  }
  local_10 = param_1[0x30];
  local_c = param_1[0x27];
  local_8 = param_1[0x42];
  local_4 = param_1[0x39];
  local_14 = 0;
  puStack_1c = (undefined4 *)0x7ded78;
  piVar2 = (int *)FUN_007e00e0();
  puStack_1c = &local_14;
  cVar1 = (**(code **)(*piVar2 + 0x34))(&local_10);
  if (cVar1 != '\0') {
    puStack_1c = (undefined4 *)0x0;
    piVar2 = (int *)FUN_007e00e0();
    cVar1 = (**(code **)(*piVar2 + 0x34))(&local_10,&puStack_1c);
    if (cVar1 != '\0') goto LAB_007dedbc;
  }
  iVar3 = FUN_007e00e0();
  if (param_1[0x46] != iVar3) {
    return;
  }
LAB_007dedbc:
  FUN_007e7aa0(param_1);
  return;
}


//// FUNCTION FUN_007dee10 @ 007dee10 ////

void __fastcall FUN_007dee10(int param_1)

{
  void *this;
  undefined4 *puVar1;
  char **ppcVar2;
  undefined4 local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0bf8;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"Movies",6);
  local_28 = 6;
  local_2c[6] = '\0';
  ppcVar2 = &local_2c;
  puVar1 = &local_34;
  local_4 = 0;
  this = (void *)FUN_00577370(*(int *)(param_1 + 0x4c8));
  FUN_00441750(this,puVar1,ppcVar2);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_30 = &stack0xffffffbc;
  (**(code **)(**(int **)(param_1 + 0x4f8) + 0x10c))();
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_007deee0 @ 007deee0 ////

void __fastcall FUN_007deee0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  int iVar7;
  int local_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0c30;
  pvStack_c = ExceptionList;
  local_30 = 0;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
  if (iVar2 != 0) {
    iVar2 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
    piVar3 = (int *)FUN_00401c30(iVar2);
    local_30 = FUN_00ace790(piVar3,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                            &TM::DesireReadyPosition::RTTI_Type_Descriptor,0);
  }
  iVar2 = 0;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1ec))();
  if (iVar4 != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1ec))();
    iVar2 = *(int *)(iVar2 + 0xa0);
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar7 = 0;
    pTVar6 = &TM::CPhasePreProduction::RTTI_Type_Descriptor;
    pTVar5 = &TM::CPhaseBase::RTTI_Type_Descriptor;
    iVar4 = 0;
    piVar3 = (int *)FUN_005b22a0(iVar2);
    iVar4 = FUN_00ace790(piVar3,iVar4,pTVar5,pTVar6,iVar7);
  }
  if (((local_30 == 0) &&
      (cVar1 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1c4))(), cVar1 == '\0')) &&
     ((iVar2 == 0 || (iVar4 == 0)))) {
    piVar3 = (int *)FUN_0053ae00(*(int *)(param_1 + 0x4c8));
    if (piVar3 == (int *)0x0) {
      pcStack_2c = acStack_20;
      acStack_20[0] = '\0';
      uStack_28 = 0;
      uStack_24 = 0x20;
      pcStack_2c = _malloc(0x20);
      _strncpy(pcStack_2c,"ui/activity_idle.dds",0x14);
      uStack_28 = 0x14;
      pcStack_2c[0x14] = '\0';
      uStack_4 = 3;
      (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&pcStack_2c);
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_2c);
      }
      goto LAB_007df209;
    }
    iVar2 = FUN_00ace790(piVar3,0,&TM::TMRoom::RTTI_Type_Descriptor,
                         &TM::CCrewRoom::RTTI_Type_Descriptor,0);
    if (iVar2 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x20;
    pcStack_2c = _malloc(0x20);
    _strncpy(pcStack_2c,"ui/activity_busyfilm.dds",0x18);
    pcStack_2c[0x18] = '\0';
    uStack_4 = 2;
LAB_007df1ad:
    uStack_28 = 0x18;
    (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&pcStack_2c);
  }
  else {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1c4))();
    if ((cVar1 != '\0') || ((iVar2 != 0 && (iVar4 != 0)))) {
      pcStack_2c = acStack_20;
      acStack_20[0] = '\0';
      uStack_28 = 0;
      uStack_24 = 0x20;
      pcStack_2c = _malloc(0x20);
      _strncpy(pcStack_2c,"ui/activity_busyfilm.dds",0x18);
      pcStack_2c[0x18] = '\0';
      uStack_4 = 1;
      goto LAB_007df1ad;
    }
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x20;
    pcStack_2c = _malloc(0x20);
    _strncpy(pcStack_2c,"ui/activity_busy.dds",0x14);
    uStack_28 = 0x14;
    pcStack_2c[0x14] = '\0';
    uStack_4 = 0;
    (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&pcStack_2c);
  }
  uStack_4 = 0xffffffff;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
LAB_007df209:
  uStack_4 = 0xffffffff;
  FUN_0069ce60(*(void **)(param_1 + 0x4e0),0xffffffff);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007df230 @ 007df230 ////

void __fastcall FUN_007df230(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint **ppuVar7;
  undefined4 *local_60;
  uint *puStack_54;
  undefined4 uStack_50;
  char *pcStack_4c;
  uint uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0cd7;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"iconpanel2",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  FUN_0089e070(param_1,&local_2c,1,0,'\x01');
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Opening",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10c] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Open",4);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10a] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Closing",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10d] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Closed",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10b] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Pickup",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10e] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"highlight",9);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10f] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"normal",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x110] = iVar2;
  pvVar1 = operator_new(0x4dc);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    local_60 = FUN_007ac880(pvVar1,1,0,0,0);
  }
  local_4._0_1_ = 0;
  (**(code **)(param_1[0x139] + 4))();
  param_1[0x13e] = (int)local_60;
  (**(code **)param_1[0x139])();
  if (param_1[0x13e] != 0) {
    puStack_54 = (uint *)0x0;
    uStack_50 = 0;
    FUN_00882710(*(void **)(param_1[0x13e] + 0x358),(float *)&puStack_54);
    (**(code **)(*(int *)param_1[0x13e] + 0x74))();
    FUN_0089e5f0((void *)param_1[0x13e],'\x01');
    puStack_54 = &uStack_48;
    uStack_48 = uStack_48 & 0xffffff00;
    uStack_50 = 0;
    pcStack_4c = (char *)0x14;
    _strncpy((char *)puStack_54,"Movies",6);
    uStack_50 = 6;
    *(char *)((int)puStack_54 + 6) = '\0';
    ppuVar7 = &puStack_54;
    puVar6 = (undefined4 *)&stack0xffffff98;
    pvStack_c._0_1_ = 9;
    pvVar1 = (void *)FUN_00577370(param_1[0x132]);
    FUN_00441750(pvVar1,puVar6,ppuVar7);
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    if ((char *)0x14 < pcStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_54);
    }
    (**(code **)(*(int *)param_1[0x13e] + 0x10c))();
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"star_mood",9);
    uStack_48 = 9;
    pcStack_4c[9] = '\0';
    local_4._0_1_ = 10;
    FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x13e],&pcStack_4c,1,0,
                 (undefined1 *)0x0);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    puVar3 = &stack0xffffff7c;
    uVar4 = 0;
    uVar5 = 0x14;
    FUN_004015d0(&stack0xffffff70,"showmood",8);
    local_4._0_1_ = 0;
    pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_info");
    uVar5 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
    FUN_00881b40((void *)param_1[0xd6],"star_info",uVar5);
  }
  FUN_007e8be0((int)param_1);
  FUN_007e9550(param_1,'\0');
  FUN_007e7e10(param_1);
  FUN_007dee10((int)param_1);
  pvVar1 = operator_new(0x360);
  if (pvVar1 == (void *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x20;
    pcStack_4c = _malloc(0x20);
    _strncpy(pcStack_4c,"ui/activity_busyfilm.dds",0x18);
    uStack_48 = 0x18;
    pcStack_4c[0x18] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xd);
    local_60 = FUN_0069d820(pvVar1,&pcStack_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xe;
  (**(code **)(param_1[0x133] + 4))();
  param_1[0x138] = (int)local_60;
  (**(code **)param_1[0x133])();
  local_4 = 0;
  if ((pvVar1 != (void *)0x0) && (0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  if (*(int *)(param_1[0x132] + 0x814) != 3) {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"",0);
    uStack_48 = 0;
    *pcStack_4c = '\0';
    local_4._0_1_ = 0xf;
    (**(code **)(*(int *)param_1[0x138] + 0x100))();
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    FUN_0069ce60((void *)param_1[0x138],0xffffff);
  }
  pcStack_4c = acStack_40;
  acStack_40[0] = '\0';
  uStack_48 = 0;
  uStack_44 = 0x14;
  _strncpy(pcStack_4c,"star_job",8);
  uStack_48 = 8;
  pcStack_4c[8] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0x10);
  FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x138],&pcStack_4c,1,0,
               (undefined1 *)0x0);
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007df8d0 @ 007df8d0 ////

int * __thiscall FUN_007df8d0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0d22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MoodHUDCard_Constructor(this,param_2);
  *(undefined ***)this = &PTR_FUN_00d58dd4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d58db8;
  piVar1 = (int *)((int)this + 0x4b8);
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 **)((int)this + 0x4c0) = (undefined4 *)((int)this + 0x4b4);
  *(undefined4 *)((int)this + 0x4b4) = &PTR_FUN_00d18c4c;
  *(int *)((int)this + 0x4c8) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x4bc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 **)((int)this + 0x4d8) = (undefined4 *)((int)this + 0x4cc);
  *(undefined4 *)((int)this + 0x4cc) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 **)((int)this + 0x4f0) = (undefined4 *)((int)this + 0x4e4);
  *(undefined4 *)((int)this + 0x4e4) = &PTR_FUN_00d2d100;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  local_4 = 3;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  FUN_007df230(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007df9e0 @ 007df9e0 ////

void __fastcall FUN_007df9e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0d62;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d58dd4;
  param_1[0x14] = &PTR_LAB_00d58db8;
  puVar2 = (undefined4 *)param_1[0x138];
  local_4 = 3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x133] + 4))();
    param_1[0x138] = 0;
    (**(code **)param_1[0x133])();
  }
  puVar2 = (undefined4 *)param_1[0x13e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x139] + 4))();
    param_1[0x13e] = 0;
    (**(code **)param_1[0x139])();
  }
  param_1[0x139] = &PTR_FUN_00d2d100;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13e] = 0;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x133] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x138] = 0;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x12d] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x132] = 0;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  local_4 = 0xffffffff;
  FUN_007e90c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007dfbf0 @ 007dfbf0 ////

void __fastcall FUN_007dfbf0(int *param_1)

{
  uint uVar1;
  int iVar2;
  void *this;
  int *piVar3;
  
  iVar2 = param_1[0x132];
  if (((iVar2 == 0) || (*(int *)(iVar2 + 0x814) < 7)) || (0xc < *(int *)(iVar2 + 0x814))) {
    piVar3 = param_1;
    this = (void *)FUN_007e00e0();
    FUN_007e1350(this,piVar3);
  }
  else {
    FUN_007e7ec0(param_1,iVar2);
    FUN_007e7b00(param_1,(int *)param_1[0x132]);
    if ((char)param_1[0xc9] != '\0') {
      *(undefined1 *)(param_1[0x132] + 0x726) = 1;
    }
    uVar1 = FUN_0043b490((uint *)(param_1 + 0x106));
    if ((char)uVar1 != '\0') {
      FUN_007dee10((int)param_1);
      FUN_007deee0((int)param_1);
    }
    if ((DAT_0104d524 != param_1[0x132]) && (DAT_00f8860c != param_1[0x132])) {
      if (*(char *)((int)param_1 + 0x445) == '\0') {
        iVar2 = FUN_008819d0((void *)param_1[0xd6],"star_card");
        if (*(int *)(iVar2 + 0x260) != param_1[0x10f]) goto LAB_007dfd04;
      }
      FUN_00881c00((void *)param_1[0xd6],"star_card",param_1[0x110]);
      *(undefined1 *)((int)param_1 + 0x445) = 0;
      WHudIcon_Tick(param_1);
      return;
    }
    if (*(char *)((int)param_1 + 0x445) == '\0') {
      *(undefined1 *)((int)param_1 + 0x445) = 1;
      FUN_00881c00((void *)param_1[0xd6],"star_card",param_1[0x10f]);
      WHudIcon_Tick(param_1);
      return;
    }
  }
LAB_007dfd04:
  WHudIcon_Tick(param_1);
  return;
}


//// FUNCTION FUN_007dfd10 @ 007dfd10 ////

undefined4 * __thiscall FUN_007dfd10(void *this,byte param_1)

{
  FUN_007df9e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007dfe40 @ 007dfe40 ////

int * __thiscall FUN_007dfe40(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007dfe80 @ 007dfe80 ////

int __fastcall FUN_007dfe80(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007e0030 @ 007e0030 ////

int * __thiscall FUN_007e0030(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007e0060 @ 007e0060 ////

int * __cdecl FUN_007e0060(int param_1,int param_2,int *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    (**(code **)(*param_3 + 4))();
    param_3[5] = *(int *)(param_1 + 0x14);
    (**(code **)*param_3)();
    param_1 = param_1 + 0x18;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_007e00a0 @ 007e00a0 ////

undefined4 * __cdecl FUN_007e00a0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar1 = param_3 + -6;
    iVar2 = param_2 + -0x18;
    (**(code **)(param_3[-6] + 4))();
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    (**(code **)*puVar1)();
    param_3 = puVar1;
    param_2 = iVar2;
  } while (iVar2 != param_1);
  return puVar1;
}


//// FUNCTION FUN_007e00e0 @ 007e00e0 ////

undefined4 FUN_007e00e0(void)

{
  return DAT_0104ea2c;
}


//// FUNCTION FUN_007e0280 @ 007e0280 ////

void __cdecl FUN_007e0280(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_007e02e0 @ 007e02e0 ////

void __fastcall FUN_007e02e0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d58f10;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_007e0330 @ 007e0330 ////

void __fastcall FUN_007e0330(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58f10;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_007e0410 @ 007e0410 ////

void __fastcall FUN_007e0410(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58f20;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_007e04f0 @ 007e04f0 ////

undefined4 * __thiscall FUN_007e04f0(void *this,byte param_1)

{
  FUN_007e0410(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007e0510 @ 007e0510 ////

void __fastcall FUN_007e0510(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0.0 <= *(float *)(param_1 + 0xc0)) {
    iVar2 = 0;
    iVar3 = 0;
    while( true ) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x35c) != 0) {
        iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
      }
      if (iVar1 <= iVar2) break;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x35c) + iVar3 + 0x14) + 0x2c))();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    }
  }
  return;
}


//// FUNCTION FUN_007e0580 @ 007e0580 ////

void __thiscall FUN_007e0580(void *this,int param_1)

{
  char cVar1;
  int *this_00;
  float fVar2;
  
  if (param_1 == 0) {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14);
    (**(code **)(*this_00 + 100))(1,this,0xc1200000);
  }
  else {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14 + param_1 * 0x18);
    (**(code **)(*this_00 + 100))
              (2,*(undefined4 *)(*(int *)((int)this + 0x35c) + param_1 * 0x18 + -4),
               *(float *)((int)this + 0x378) + 10.0);
  }
  (**(code **)(*this_00 + 0x5c))(1,this,0);
  cVar1 = FUN_007e7910((int)this_00);
  fVar2 = DAT_00e5bd34;
  if (cVar1 == '\0') {
    fVar2 = DAT_00e5bd34 * 0.4;
  }
  (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,fVar2);
  cVar1 = (**(code **)(*this_00 + 0x100))();
  if (cVar1 == '\0') {
    FUN_0089e5f0(this_00,'\x01');
  }
  if ((this_00[0x58] == 0) && (this_00[0x54] == 0)) {
    (**(code **)(*(int *)this + 0xc))(this_00,1);
  }
  return;
}


//// FUNCTION FUN_007e0660 @ 007e0660 ////

undefined1 __thiscall FUN_007e0660(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1;
  
  local_1 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    while( true ) {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar1 = FUN_007dec70(iVar2);
      if ((iVar1 != 0) && (iVar2 = FUN_007dec70(iVar2), iVar2 == param_1)) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == *(int *)((int)this + 0x360)) {
        return 0;
      }
    }
    local_1 = 1;
  }
  return local_1;
}


//// FUNCTION FUN_007e06e0 @ 007e06e0 ////

void __fastcall FUN_007e06e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x344) != 0) {
    iVar3 = *(int *)(param_1 + 0x35c);
    iVar4 = *(int *)(param_1 + 0x360);
    if (iVar3 != iVar4) {
      do {
        piVar2 = *(int **)(iVar3 + 0x14);
        iVar1 = iVar3 + 0x18;
        if (iVar1 != iVar4) {
          local_8 = 0;
          (**(code **)(**(int **)(iVar3 + 0x2c) + 0x34))(&DAT_0104cce0,&local_8);
        }
        uStack_4 = 0;
        (**(code **)(*piVar2 + 0x34))(&DAT_0104cce0,&uStack_4);
        iVar4 = *(int *)(param_1 + 0x360);
        iVar3 = iVar1;
      } while (iVar1 != iVar4);
    }
  }
  return;
}


//// FUNCTION FUN_007e0760 @ 007e0760 ////

int __thiscall FUN_007e0760(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x14);
      iVar2 = FUN_007dec70(iVar1);
      if (iVar2 != 0) {
        iVar2 = FUN_007dec70(iVar1);
        if (iVar2 == param_1) {
          return iVar1;
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0x360));
  }
  return 0;
}


//// FUNCTION FUN_007e0800 @ 007e0800 ////

void __fastcall FUN_007e0800(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  fVar1 = (float)param_1[0xd1];
  if (param_1[0xd1] < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = DAT_00e5bd34 * 0.4;
  fVar4 = (float10)(**(code **)(*param_1 + 0x14))();
  fVar4 = (float10)(fVar2 * fVar1 - fVar1 * 10.0) - fVar4;
  if (fVar4 < (float10)0.0 != (fVar4 == (float10)0.0)) {
    param_1[0xde] = 0;
    return;
  }
  if (param_1[0xd7] != 0) {
    if ((param_1[0xd8] - param_1[0xd7]) / 0x18 != 0) {
      iVar3 = 0;
      if (param_1[0xd7] != 0) {
        iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
      }
      fVar1 = (float)(iVar3 + 1);
      if (iVar3 + 1 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      param_1[0xde] = (int)((float)fVar4 / fVar1 + 2.0);
    }
  }
  return;
}


//// FUNCTION FUN_007e0910 @ 007e0910 ////

void __fastcall FUN_007e0910(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0xd7] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      FUN_007e0580(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_007e0980 @ 007e0980 ////

void __cdecl FUN_007e0980(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_3;
        *param_3 = &PTR_LAB_00d58f20;
        iVar2 = *(int *)(param_1 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 0x18;
      param_3 = param_3 + 6;
      puVar3 = puVar3 + 6;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_007e0a20 @ 007e0a20 ////

void __cdecl FUN_007e0a20(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    puVar3 = param_1 + 2;
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_1;
        *param_1 = &PTR_LAB_00d58f20;
        iVar2 = *(int *)(param_3 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 6;
      puVar3 = puVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_007e0b40 @ 007e0b40 ////

void FUN_007e0b40(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007e0410(param_1);
  }
  return;
}


//// FUNCTION FUN_007e0b70 @ 007e0b70 ////

void __fastcall FUN_007e0b70(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007e0410(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007e0bc0 @ 007e0bc0 ////

undefined4 * FUN_007e0bc0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007e0a20(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007e0bf0 @ 007e0bf0 ////

void FUN_007e0bf0(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0d78;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_007e0c60 @ 007e0c60 ////

void __fastcall FUN_007e0c60(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007e0410(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007e0cc0 @ 007e0cc0 ////

void __thiscall FUN_007e0cc0(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_007e0060((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007e0410(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007e0d60 @ 007e0d60 ////

void __thiscall FUN_007e0d60(void *this,int *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined ***local_28;
  int local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ce0d98;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d58f20;
  ExceptionList = &local_10;
  if (local_20 != 0) {
    local_2c = (int *)(local_20 + 0x18);
    local_30 = *local_2c;
    ExceptionList = &local_10;
    *(int **)(*local_2c + 4) = &local_30;
    *local_2c = (int)&local_30;
  }
  iVar3 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar3 != 0) {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x18;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    local_18 = this;
    puVar1 = &stack0xffffffc0;
    if (0xaaaaaaaU - iVar2 < param_2) {
      FUN_007e0bf0();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0xaaaaaaa - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x18;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_007dfe80((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007e0980(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007e0a20(puVar5,param_2,(int)&local_34);
      FUN_007e0980((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_007e0b40(puVar5,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 6;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 6;
      *(undefined4 **)((int)this + 4) = puVar4;
    }
    else {
      puVar5 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar5 - (int)param_1) / 0x18) < param_2) {
        FUN_007e0980((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007e0bc0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007e0280(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007e0980((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007e00a0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007e0280(param_1,param_1 + param_2 * 6,(int)&local_34);
      }
    }
  }
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_007e1090 @ 007e1090 ////

void __fastcall FUN_007e1090(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0dd4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d58f4c;
  param_1[0x14] = &PTR_FUN_00d58f30;
  local_4 = 2;
  FUN_004d9e90((int)(param_1 + 0xd2));
  while ((param_1[0xd7] != 0 && ((int)(param_1[0xd8] - param_1[0xd7]) / 0x18 != 0))) {
    puVar1 = *(undefined4 **)(param_1[0xd8] + -4);
    if ((param_1[0xd7] != 0) &&
       (puVar2 = (undefined4 *)param_1[0xd8], ((int)puVar2 - param_1[0xd7]) / 0x18 != 0)) {
      puVar4 = puVar2 + -6;
      if (puVar4 != puVar2) {
        piVar3 = puVar2 + -4;
        do {
          *puVar4 = &PTR_LAB_00d58f20;
          if ((int *)*piVar3 != (int *)0x0) {
            *(int *)*piVar3 = piVar3[-1];
          }
          if (piVar3[-1] != 0) {
            *(int *)(piVar3[-1] + 4) = *piVar3;
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
          piVar3[3] = 0;
          if ((int *)*piVar3 != (int *)0x0) {
            *(int *)*piVar3 = piVar3[-1];
          }
          if (piVar3[-1] != 0) {
            *(int *)(piVar3[-1] + 4) = *piVar3;
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
          puVar4 = puVar4 + 6;
          piVar3 = piVar3 + 6;
        } while (puVar4 != puVar2);
      }
      param_1[0xd8] = param_1[0xd8] + -0x18;
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  FUN_007e0b70((int)(param_1 + 0xd6));
  FUN_004d9e90((int)(param_1 + 0xd2));
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007e1200 @ 007e1200 ////

void __thiscall FUN_007e1200(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = param_1;
  if (param_1 != 0) {
    piVar5 = *(int **)((int)this + 0x34c);
    if (piVar5 != *(int **)((int)this + 0x350)) {
      do {
        if (piVar5[5] == param_1) {
          FUN_005ba670((void *)((int)this + 0x348),&param_1,piVar5);
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          break;
        }
        piVar5 = piVar5 + 6;
      } while (piVar5 != *(int **)((int)this + 0x350));
    }
    piVar5 = *(int **)((int)this + 0x35c);
    if (piVar5 != *(int **)((int)this + 0x360)) {
LAB_007e1261:
      puVar7 = (undefined4 *)piVar5[5];
      iVar6 = FUN_007dec70((int)puVar7);
      if ((iVar6 == 0) || (iVar6 = FUN_007dec70((int)puVar7), iVar6 != iVar8)) goto LAB_007e127a;
      if (puVar7 != (undefined4 *)0x0) {
        piVar1 = puVar7 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(1);
        }
      }
      piVar2 = *(int **)((int)this + 0x360);
      piVar1 = piVar5 + 6;
      while (piVar1 != piVar2) {
        (**(code **)(*piVar5 + 4))();
        piVar5[5] = piVar5[0xb];
        (**(code **)*piVar5)();
        piVar1 = piVar5 + 0xc;
        piVar5 = piVar5 + 6;
      }
      puVar3 = *(undefined4 **)((int)this + 0x360);
      for (puVar7 = puVar3 + -6; puVar7 != puVar3; puVar7 = puVar7 + 6) {
        FUN_007e0410(puVar7);
      }
      *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) + -0x18;
    }
LAB_007e12e6:
    FUN_007e0800(this);
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)((int)this + 0x360) - *(int *)((int)this + 0x35c)) / 0x18;
    }
    if (0 < iVar8) {
      iVar6 = 0;
      do {
        FUN_007e0580(this,iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar8);
    }
    do {
      cVar4 = (**(code **)(*(int *)this + 0x50))(1);
    } while (cVar4 != '\0');
  }
  return;
LAB_007e127a:
  piVar5 = piVar5 + 6;
  if (piVar5 == *(int **)((int)this + 0x360)) goto LAB_007e12e6;
  goto LAB_007e1261;
}


//// FUNCTION FUN_007e1350 @ 007e1350 ////

void __thiscall FUN_007e1350(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar5 = *(int **)((int)this + 0x35c);
    if (piVar5 != *(int **)((int)this + 0x360)) {
      do {
        puVar2 = (undefined4 *)piVar5[5];
        if (puVar2 == param_1) {
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          if (puVar2 != (undefined4 *)0x0) {
            piVar1 = puVar2 + 0x12;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar2)(1);
            }
          }
          FUN_007e0cc0((void *)((int)this + 0x358),&param_1,piVar5);
          break;
        }
        piVar5 = piVar5 + 6;
      } while (piVar5 != *(int **)((int)this + 0x360));
    }
    FUN_007e0800(this);
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)((int)this + 0x360) - *(int *)((int)this + 0x35c)) / 0x18;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        FUN_007e0580(this,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    do {
      cVar3 = (**(code **)(*(int *)this + 0x50))(1);
    } while (cVar3 != '\0');
  }
  return;
}


//// FUNCTION FUN_007e1410 @ 007e1410 ////

void __fastcall FUN_007e1410(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_004d9e90(param_1 + 0x348);
  if (*(int *)(param_1 + 0x344) != 0) {
    while ((*(int *)(param_1 + 0x35c) != 0 &&
           ((*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18 != 0))) {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x360) + -4);
      if ((*(int *)(param_1 + 0x35c) != 0) &&
         (puVar3 = *(undefined4 **)(param_1 + 0x360),
         ((int)puVar3 - *(int *)(param_1 + 0x35c)) / 0x18 != 0)) {
        for (puVar4 = puVar3 + -6; puVar4 != puVar3; puVar4 = puVar4 + 6) {
          FUN_007e0410(puVar4);
        }
        *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + -0x18;
      }
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_007e14f0 @ 007e14f0 ////

void __thiscall FUN_007e14f0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007e1535;
    }
  }
  iVar1 = 0;
LAB_007e1535:
  FUN_007e0d60(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_007e1560 @ 007e1560 ////

undefined4 * __thiscall FUN_007e1560(void *this,char param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0e04;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d58f4c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d58f30;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  this_00 = (undefined4 *)((int)this + 0x368);
  local_4 = 2;
  FUN_0043b460(this_00);
  *(undefined4 *)((int)this + 0x378) = 0;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffff5;
  puVar2 = DAT_0104ea2c;
  if (param_1 != '\0') {
    if (DAT_0104ea2c != (undefined4 *)0x0) {
      iVar1 = DAT_0104ea2c[0x12];
      DAT_0104ea2c[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104ea18[1])();
      DAT_0104ea2c = (undefined4 *)0x0;
      (*(code *)*DAT_0104ea18)();
    }
    (*(code *)DAT_0104ea18[1])();
    DAT_0104ea2c = this;
    (*(code *)*DAT_0104ea18)();
  }
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0x14))();
  FUN_0073e4e0(this,DAT_00e5bd38);
  FUN_0043b4d0(this_00,1);
  *this_00 = 10;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007e16a0 @ 007e16a0 ////

undefined4 * __thiscall FUN_007e16a0(void *this,byte param_1)

{
  FUN_007e1090(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007e16c0 @ 007e16c0 ////

void __thiscall FUN_007e16c0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007e0a20(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_007e14f0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007e1750 @ 007e1750 ////

void __fastcall FUN_007e1750(int *param_1)

{
  bool bVar1;
  char cVar2;
  void *this;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0e23;
  local_c = ExceptionList;
  iVar5 = param_1[0xd3];
  bVar1 = false;
  local_2c = 0;
  ExceptionList = &local_c;
  if (iVar5 != param_1[0xd4]) {
    do {
      iVar4 = *(int *)(iVar5 + 0x14);
      if ((iVar4 != 0) && (cVar2 = FUN_007e0660(param_1,iVar4), cVar2 == '\0')) {
        this = operator_new(0x500);
        local_4 = 0;
        if (this == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else if (param_1[0xd7] == 0) {
          piVar3 = FUN_007df8d0(this,iVar4,0);
        }
        else {
          piVar3 = FUN_007df8d0(this,iVar4,(param_1[0xd8] - param_1[0xd7]) / 0x18);
        }
        local_4 = 0xffffffff;
        FUN_007e7dc0(piVar3);
        local_18 = &local_24;
        local_20 = 0;
        local_1c = (int *)0x0;
        local_24 = &PTR_LAB_00d58f20;
        if (piVar3 != (int *)0x0) {
          local_1c = piVar3 + 6;
          local_20 = *local_1c;
          *(int **)(*local_1c + 4) = &local_20;
          *local_1c = (int)&local_20;
        }
        local_4 = 1;
        local_10 = piVar3;
        FUN_007e16c0(param_1 + 0xd6,(int)&local_24);
        local_4 = 0xffffffff;
        local_24 = &PTR_LAB_00d58f20;
        if (local_1c != (int *)0x0) {
          *local_1c = local_20;
        }
        if (local_20 != 0) {
          *(int **)(local_20 + 4) = local_1c;
        }
        local_10 = (int *)0x0;
        local_20 = 0;
        local_1c = (int *)0x0;
        if (param_1[0xd7] == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
        }
        FUN_007e0580(param_1,iVar4 + -1);
        local_2c = local_2c + 1;
        bVar1 = true;
      }
      iVar5 = iVar5 + 0x18;
    } while (iVar5 != param_1[0xd4]);
    if ((bVar1) && (local_2c == 1)) {
      FUN_007e0800(param_1);
      FUN_007e0910(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007e1920 @ 007e1920 ////

void __thiscall FUN_007e1920(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0e38;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + 1;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d18c4c;
  local_10 = param_1;
  if (param_1 != 0) {
    local_1c = (int *)(param_1 + 0x18);
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  FUN_004db640((void *)((int)this + 0x348),(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_FUN_00d18c4c;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = 0;
  local_20 = 0;
  local_1c = (int *)0x0;
  FUN_007e1750(this);
  FUN_007e0800(this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007e1a00 @ 007e1a00 ////

void __fastcall FUN_007e1a00(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 auStack_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0e58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xd1] = 0;
  FUN_004d9e90((int)(param_1 + 0xd2));
  puVar7 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      piVar2 = (int *)puVar7[2];
      if (piVar2 != (int *)0x0) {
        iVar3 = piVar2[0x205];
        cVar4 = (**(code **)(*piVar2 + 0x204))();
        if (cVar4 != '\0') {
          iVar5 = FUN_005773c0((int)piVar2);
          iVar6 = GetPlayerStudio();
          if (((iVar5 == iVar6) && (6 < iVar3)) && (iVar3 < 0xd)) {
            param_1[0xd1] = param_1[0xd1] + 1;
            FUN_004397d0(auStack_24,(int)piVar2);
            uStack_4 = 0;
            FUN_004db640(param_1 + 0xd2,(int)auStack_24);
            uStack_4 = 0xffffffff;
            FUN_00435ec0(auStack_24);
          }
        }
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
  }
  FUN_007ddaf0((int *)param_1[0xd3],(int *)param_1[0xd4],(param_1[0xd4] - param_1[0xd3]) / 0x18,
               &LAB_007dfd30);
  FUN_007e0800(param_1);
  FUN_007e1750(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007e1b30 @ 007e1b30 ////

void __fastcall FUN_007e1b30(int *param_1)

{
  FUN_007e1a00(param_1);
  FUN_007e06e0((int)param_1);
  FUN_007e0910(param_1);
  return;
}


//// FUNCTION FUN_007e1b50 @ 007e1b50 ////

void __fastcall FUN_007e1b50(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0043b490((uint *)(param_1 + 0xda));
  if ((char)uVar1 != '\0') {
    FUN_007e1a00(param_1);
    FUN_007e06e0((int)param_1);
    FUN_007e0910(param_1);
    FUN_007e1a00(param_1);
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_007e1b90 @ 007e1b90 ////

void __fastcall FUN_007e1b90(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puStack_1c;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = param_1[0x145];
  if (iVar3 < 1) {
    param_1[0x145] = iVar3 + 1;
  }
  else if (iVar3 == 1) {
    puStack_1c = (undefined4 *)0x7e1bb3;
    FUN_007e7e10(param_1);
  }
  local_10 = param_1[0x30];
  local_c = param_1[0x27];
  local_8 = param_1[0x42];
  local_4 = param_1[0x39];
  local_14 = 0;
  puStack_1c = (undefined4 *)0x7e1be8;
  piVar2 = (int *)FUN_007e34b0();
  puStack_1c = &local_14;
  cVar1 = (**(code **)(*piVar2 + 0x34))(&local_10);
  if (cVar1 != '\0') {
    puStack_1c = (undefined4 *)0x0;
    piVar2 = (int *)FUN_007e34b0();
    cVar1 = (**(code **)(*piVar2 + 0x34))(&local_10,&puStack_1c);
    if (cVar1 != '\0') goto LAB_007e1c2c;
  }
  iVar3 = FUN_007e34b0();
  if (param_1[0x46] != iVar3) {
    return;
  }
LAB_007e1c2c:
  FUN_007e7aa0(param_1);
  return;
}


//// FUNCTION FUN_007e1c50 @ 007e1c50 ////

undefined4 __fastcall FUN_007e1c50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c8);
}


//// FUNCTION FUN_007e1c60 @ 007e1c60 ////

void __fastcall FUN_007e1c60(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00577370(*(int *)(param_1 + 0x4c8));
  fVar2 = FUN_00441450(iVar1);
  if ((float10)0.0 <= fVar2) {
    if ((float10)1.0 < fVar2) {
      fVar2 = (float10)1.0;
    }
  }
  else {
    fVar2 = (float10)0.0;
  }
  (**(code **)(**(int **)(param_1 + 0x4f8) + 0x10c))((float)fVar2,1);
  return;
}


//// FUNCTION FUN_007e1d70 @ 007e1d70 ////

void __fastcall FUN_007e1d70(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = FUN_00539330(*(int **)(param_1 + 0x4c8));
  if (iVar1 != 0) {
    iVar1 = 3;
    this = (void *)FUN_00539330(*(int **)(param_1 + 0x4c8));
    FUN_009021d0(this,iVar1);
  }
  return;
}


//// FUNCTION FUN_007e1de0 @ 007e1de0 ////

void __fastcall FUN_007e1de0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce0eb0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d59074;
  param_1[0x14] = &PTR_LAB_00d59058;
  puVar2 = (undefined4 *)param_1[0x138];
  local_4 = 4;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x133] + 4))();
    param_1[0x138] = 0;
    (**(code **)param_1[0x133])();
  }
  puVar2 = (undefined4 *)param_1[0x13e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x139] + 4))();
    param_1[0x13e] = 0;
    (**(code **)param_1[0x139])();
  }
  puVar2 = (undefined4 *)param_1[0x144];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x13f] + 4))();
    param_1[0x144] = 0;
    (**(code **)param_1[0x13f])();
  }
  param_1[0x13f] = &PTR_LAB_00d4a4b0;
  if ((undefined4 *)param_1[0x141] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x141] = param_1[0x140];
  }
  if (param_1[0x140] != 0) {
    *(undefined4 *)(param_1[0x140] + 4) = param_1[0x141];
  }
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x144] = 0;
  if ((undefined4 *)param_1[0x141] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x141] = param_1[0x140];
  }
  if (param_1[0x140] != 0) {
    *(undefined4 *)(param_1[0x140] + 4) = param_1[0x141];
  }
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x139] = &PTR_FUN_00d2d100;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13e] = 0;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x133] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x138] = 0;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x12d] = &PTR_FUN_00d25c70;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x132] = 0;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  local_4 = 0xffffffff;
  FUN_007e90c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007e20d0 @ 007e20d0 ////

void __fastcall FUN_007e20d0(int *param_1)

{
  undefined1 uVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  uint unaff_EDI;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  char *_Dest;
  undefined4 *local_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0f7e;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"iconpanel2",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  FUN_0089e070(param_1,&local_2c,1,0,'\x01');
  puVar5 = &stack0xffffff80;
  uVar6 = 0;
  uVar7 = 0x14;
  FUN_004015d0(&stack0xffffff74,"Opening",7);
  local_4 = local_4 & 0xffffff00;
  pvVar2 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar3 = FUN_0088a2b0(pvVar2,puVar5,uVar6,uVar7);
  param_1[0x10c] = iVar3;
  puVar5 = &stack0xffffff80;
  uVar6 = 0;
  uVar7 = 0x14;
  FUN_004015d0(&stack0xffffff74,"Open",4);
  local_4 = local_4 & 0xffffff00;
  pvVar2 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar3 = FUN_0088a2b0(pvVar2,puVar5,uVar6,uVar7);
  param_1[0x10a] = iVar3;
  puVar5 = &stack0xffffff80;
  uVar6 = 0;
  uVar7 = 0x14;
  FUN_004015d0(&stack0xffffff74,"Closing",7);
  local_4 = local_4 & 0xffffff00;
  pvVar2 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar3 = FUN_0088a2b0(pvVar2,puVar5,uVar6,uVar7);
  param_1[0x10d] = iVar3;
  puVar5 = &stack0xffffff80;
  uVar6 = 0;
  uVar7 = 0x14;
  FUN_004015d0(&stack0xffffff74,"Closed",6);
  local_4 = local_4 & 0xffffff00;
  pvVar2 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar3 = FUN_0088a2b0(pvVar2,puVar5,uVar6,uVar7);
  param_1[0x10b] = iVar3;
  puVar5 = &stack0xffffff80;
  uVar6 = 0;
  uVar7 = 0x14;
  FUN_004015d0(&stack0xffffff74,"Pickup",6);
  local_4 = local_4 & 0xffffff00;
  pvVar2 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar3 = FUN_0088a2b0(pvVar2,puVar5,uVar6,uVar7);
  param_1[0x10e] = iVar3;
  puVar5 = &stack0xffffff80;
  uVar6 = 0;
  uVar7 = 0x14;
  FUN_004015d0(&stack0xffffff74,"highlight",9);
  local_4 = local_4 & 0xffffff00;
  pvVar2 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar3 = FUN_0088a2b0(pvVar2,puVar5,uVar6,uVar7);
  param_1[0x10f] = iVar3;
  puVar5 = &stack0xffffff80;
  uVar6 = 0;
  uVar7 = 0x14;
  FUN_004015d0(&stack0xffffff74,"normal",6);
  local_4 = local_4 & 0xffffff00;
  pvVar2 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar3 = FUN_0088a2b0(pvVar2,puVar5,uVar6,uVar7);
  param_1[0x110] = iVar3;
  pvVar2 = operator_new(0x4dc);
  local_4._0_1_ = 8;
  if (pvVar2 == (void *)0x0) {
    local_58 = (undefined4 *)0x0;
  }
  else {
    local_58 = FUN_007ac880(pvVar2,1,0,0,0);
  }
  local_4._0_1_ = 0;
  (**(code **)(param_1[0x139] + 4))();
  param_1[0x13e] = (int)local_58;
  (**(code **)param_1[0x139])();
  FUN_007e9550(param_1,'\0');
  if (param_1[0x13e] != 0) {
    puStack_54 = (undefined1 *)0x0;
    uStack_50 = 0;
    FUN_00882710(*(void **)(param_1[0x13e] + 0x358),(float *)&puStack_54);
    (**(code **)(*(int *)param_1[0x13e] + 0x74))();
    FUN_0089e5f0((void *)param_1[0x13e],'\x01');
    iVar3 = FUN_00577370(param_1[0x132]);
    FUN_00441450(iVar3);
    (**(code **)(*(int *)param_1[0x13e] + 0x10c))();
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"star_mood",9);
    uStack_48 = 9;
    pcStack_4c[9] = '\0';
    local_4._0_1_ = 9;
    FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x13e],&pcStack_4c,1,0,
                 (undefined1 *)0x0);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    puVar5 = &stack0xffffff80;
    uVar6 = 0;
    uVar7 = 0x14;
    FUN_004015d0(&stack0xffffff74,"showmood",8);
    local_4._0_1_ = 0;
    pvVar2 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_info");
    uVar7 = FUN_0088a2b0(pvVar2,puVar5,uVar6,uVar7);
    FUN_00881b40((void *)param_1[0xd6],"star_info",uVar7);
  }
  FUN_007e8be0((int)param_1);
  FUN_007e7e10(param_1);
  FUN_007e1c60((int)param_1);
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    local_58 = (undefined4 *)0x0;
  }
  else {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x20;
    pcStack_4c = _malloc(0x20);
    _strncpy(pcStack_4c,"ui/activity_busyfilm.dds",0x18);
    uStack_48 = 0x18;
    pcStack_4c[0x18] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xc);
    puStack_54 = &stack0xffffff84;
    local_58 = FUN_0069d820(pvVar2,&pcStack_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xd;
  (**(code **)(param_1[0x133] + 4))();
  param_1[0x138] = (int)local_58;
  (**(code **)param_1[0x133])();
  local_4 = 0;
  if ((pvVar2 != (void *)0x0) && (0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  if (*(int *)(param_1[0x132] + 0x814) != 3) {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"",0);
    uStack_48 = 0;
    *pcStack_4c = '\0';
    puStack_54 = &stack0xffffff84;
    local_4._0_1_ = 0xe;
    (**(code **)(*(int *)param_1[0x138] + 0x100))();
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    FUN_0069ce60((void *)param_1[0x138],0xffffff);
  }
  pcStack_4c = acStack_40;
  acStack_40[0] = '\0';
  uStack_48 = 0;
  uStack_44 = 0x14;
  _strncpy(pcStack_4c,"star_job",8);
  uStack_48 = 8;
  pcStack_4c[8] = '\0';
  local_4._0_1_ = 0xf;
  FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x138],&pcStack_4c,1,0,
               (undefined1 *)0x0);
  local_4._0_1_ = 0;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 0;
  if (uStack_44 < 0x15) {
    if (DAT_0104d8e8 != 0) {
      puStack_54 = operator_new(0x360);
      local_4._0_1_ = 0x10;
      if (puStack_54 == (undefined1 *)0x0) {
        local_58 = (undefined4 *)0x0;
      }
      else {
        local_58 = FUN_00730500(puStack_54,param_1[0x132]);
      }
      local_4._0_1_ = 0;
      (**(code **)(param_1[0x13f] + 4))();
      param_1[0x144] = (int)local_58;
      (**(code **)param_1[0x13f])();
      _Dest = (char *)0x42200000;
      (**(code **)(*(int *)param_1[0x144] + 0x74))();
      (**(code **)(*(int *)param_1[0x144] + 0x5c))();
      uVar7 = 0;
      (**(code **)(*(int *)param_1[0x144] + 100))();
      (**(code **)(*param_1 + 0xc))();
      pvVar2 = operator_new(0x360);
      if (pvVar2 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        unaff_EDI = 0x20;
        _Dest = _malloc(0x20);
        _strncpy(_Dest,"ui/research/icon_person.dds",0x1b);
        _Dest[0x1b] = '\0';
        uVar7 = uVar7 | 2;
        local_2c = (char *)CONCAT31(local_2c._1_3_,0x12);
        piVar4 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xffffff8c,0x3e800000,0,0x3f400000,
                              0x3f800000);
      }
      local_2c = (char *)0x0;
      if (((uVar7 & 2) != 0) && (0x14 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest);
      }
      (**(code **)(*piVar4 + 0x70))();
      (**(code **)(*(int *)param_1[0x144] + 0xc))();
      uVar1 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar1;
    if (local_24 < 0x15) {
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
                    /* WARNING: Subroutine does not return */
  _free(pcStack_4c);
}


//// FUNCTION FUN_007e28c0 @ 007e28c0 ////

int * __thiscall FUN_007e28c0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0fd0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MoodHUDCard_Constructor(this,param_2);
  *(undefined ***)this = &PTR_FUN_00d59074;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d59058;
  piVar1 = (int *)((int)this + 0x4b8);
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 **)((int)this + 0x4c0) = (undefined4 *)((int)this + 0x4b4);
  *(undefined4 *)((int)this + 0x4b4) = &PTR_FUN_00d25c70;
  *(int *)((int)this + 0x4c8) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x4bc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 **)((int)this + 0x4d8) = (undefined4 *)((int)this + 0x4cc);
  *(undefined4 *)((int)this + 0x4cc) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 **)((int)this + 0x4f0) = (undefined4 *)((int)this + 0x4e4);
  *(undefined4 *)((int)this + 0x4e4) = &PTR_FUN_00d2d100;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 **)((int)this + 0x508) = (undefined4 *)((int)this + 0x4fc);
  *(undefined4 *)((int)this + 0x4fc) = &PTR_LAB_00d4a4b0;
  *(undefined4 *)((int)this + 0x510) = 0;
  *(undefined4 *)((int)this + 0x514) = 0;
  local_4 = 4;
  FUN_007e20d0(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007e29b0 @ 007e29b0 ////

undefined4 * __thiscall FUN_007e29b0(void *this,byte param_1)

{
  FUN_007e1de0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007e29d0 @ 007e29d0 ////

void __fastcall FUN_007e29d0(int param_1)

{
  char cVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  uint unaff_EBP;
  int *piVar8;
  void *unaff_EDI;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  int iVar11;
  char *local_b0;
  void **local_ac;
  int *local_a8;
  int *local_a4;
  void *local_a0 [2];
  uint uStack_98;
  undefined1 local_8c [12];
  void *pvStack_80;
  uint uStack_78;
  undefined1 local_6c [12];
  void *pvStack_60;
  uint uStack_58;
  undefined1 local_4c [12];
  void *pvStack_40;
  uint uStack_38;
  undefined1 local_2c [12];
  void *pvStack_20;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce102f;
  pvStack_c = ExceptionList;
  if (DAT_0104d8e8 != 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_005f5ba0(DAT_0104d8e8);
    if (((iVar2 != 0) && (this = (void *)FUN_005b2220(iVar2), this != (void *)0x0)) &&
       (iVar2 = FUN_005a7640(this,*(int *)(param_1 + 0x4c8),0), iVar2 != 0)) {
      uVar3 = FUN_005a6130(iVar2);
      switch(uVar3) {
      case 0:
        goto switchD_007e2a44_caseD_0;
      case 1:
        FUN_00401de0(&local_ac,"ui/button_dummy_red.dds",0xffffffff);
        local_4 = 0;
        (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_ac);
        if (unaff_EBP < 0x15) {
          ExceptionList = pvStack_20;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(unaff_EDI);
      case 2:
        FUN_00401de0(local_8c,"ui/button_dummy_green.dds",0xffffffff);
        local_4 = 1;
        (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(local_8c);
        if (uStack_98 < 0x15) {
          ExceptionList = pvStack_20;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_a0[0]);
      case 3:
        FUN_00401de0(local_4c,"ui/button_dummy_blue.dds",0xffffffff);
        local_4 = 2;
        (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(local_4c);
        if (uStack_58 < 0x15) {
          ExceptionList = pvStack_20;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(pvStack_60);
      default:
        FUN_00401de0(local_2c,"ui/empty.dds",0xffffffff);
        local_4 = 4;
        (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(local_2c);
        if (uStack_38 < 0x15) {
          ExceptionList = pvStack_20;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(pvStack_40);
      }
    }
    local_ac = local_a0;
    local_a0[0] = (void *)((uint)local_a0[0] & 0xffffff00);
    local_a8 = (int *)0x0;
    local_a4 = (int *)0x14;
    _strncpy((char *)local_ac,"ui/empty.dds",0xc);
    local_a8 = (int *)0xc;
    *(char *)(local_ac + 3) = '\0';
    local_4 = 5;
    (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_ac);
    if (unaff_EBP < 0x15) {
      ExceptionList = pvStack_20;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  iVar2 = 0;
  ExceptionList = &pvStack_c;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1ec))();
  if (iVar4 != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1ec))();
    iVar2 = *(int *)(iVar2 + 0xa0);
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar11 = 0;
    pTVar10 = &TM::CPhasePreProduction::RTTI_Type_Descriptor;
    pTVar9 = &TM::CPhaseBase::RTTI_Type_Descriptor;
    iVar4 = 0;
    piVar5 = (int *)FUN_005b22a0(iVar2);
    iVar4 = FUN_00ace790(piVar5,iVar4,pTVar9,pTVar10,iVar11);
  }
  local_b0 = "ui/activity_idle.dds";
  cVar1 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1c4))();
  if ((cVar1 == '\0') && ((iVar2 == 0 || (iVar4 == 0)))) {
    piVar5 = (int *)FUN_0053ae00(*(int *)(param_1 + 0x4c8));
    if (piVar5 == (int *)0x0) {
      iVar2 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
      if (iVar2 != 0) {
        iVar11 = 0;
        pTVar10 = &TM::DesireStuntTrain::RTTI_Type_Descriptor;
        pTVar9 = &TM::TMBaseDesire::RTTI_Type_Descriptor;
        iVar4 = 0;
        iVar2 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
        piVar5 = (int *)FUN_00401c30(iVar2);
        iVar2 = FUN_00ace790(piVar5,iVar4,pTVar9,pTVar10,iVar11);
        if (iVar2 != 0) {
          local_b0 = "ui/activity_busy.dds";
          goto LAB_007e2ed2;
        }
      }
      local_a8 = (int *)0x0;
      local_a4 = (int *)0x0;
      local_a0[0] = (void *)0x0;
      local_4 = 6;
      (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1f8))();
      if (local_a8 != (int *)0x0) {
        piVar5 = local_a8;
        if (((int)local_a4 - (int)local_a8 >> 2 != 0) &&
           (piVar7 = local_a4, piVar8 = local_a8, local_a8 != local_a4)) {
          do {
            iVar2 = *piVar8;
            if (iVar2 != 0) {
              piVar5 = (int *)FUN_005b22a0(iVar2);
              iVar4 = (**(code **)(*piVar5 + 0x24))();
              piVar5 = local_a8;
              piVar7 = local_a4;
              if (((iVar4 == 4) && (*(int *)(iVar2 + 0x210) != 0)) &&
                 (iVar2 = FUN_0053ae00(*(int *)(iVar2 + 0x210)), piVar5 = local_a8,
                 piVar7 = local_a4, iVar2 != 0)) {
                local_b0 = "ui/activity_busyfilm.dds";
                break;
              }
            }
            piVar8 = piVar8 + 1;
          } while (piVar8 != piVar7);
        }
        if (piVar5 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(piVar5);
        }
      }
      goto LAB_007e2ed2;
    }
    iVar2 = FUN_00ace790(piVar5,0,&TM::TMRoom::RTTI_Type_Descriptor,
                         &TM::CLeadsRoom::RTTI_Type_Descriptor,0);
    if (((iVar2 == 0) &&
        (iVar2 = FUN_00ace790(piVar5,0,&TM::TMRoom::RTTI_Type_Descriptor,
                              &TM::CCastRoom::RTTI_Type_Descriptor,0), iVar2 == 0)) &&
       (iVar2 = FUN_00ace790(piVar5,0,&TM::TMRoom::RTTI_Type_Descriptor,
                             &TM::CCrewRoom::RTTI_Type_Descriptor,0), iVar2 == 0)) {
      iVar2 = FUN_00ace790(piVar5,0,&TM::TMRoom::RTTI_Type_Descriptor,
                           &TM::CRehearseRoom::RTTI_Type_Descriptor,0);
      if (iVar2 != 0) {
        local_b0 = "ui/activity_busy.dds";
      }
      goto LAB_007e2ed2;
    }
  }
  local_b0 = "ui/activity_busyfilm.dds";
LAB_007e2ed2:
  local_ac = local_a0;
  local_a0[0] = (void *)((uint)local_a0[0] & 0xffffff00);
  local_a8 = (int *)0x0;
  local_a4 = (int *)0x14;
  pcVar6 = local_b0;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_ac,local_b0,(int)pcVar6 - (int)(local_b0 + 1));
  local_4 = 7;
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_ac);
  uStack_18 = 0xffffffff;
  if (unaff_EBP < 0x15) {
    FUN_0069ce60(*(void **)(param_1 + 0x4e0),0xffffffff);
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_EDI);
switchD_007e2a44_caseD_0:
  FUN_00401de0(local_6c,"ui/button_dummyoff.dds",0xffffffff);
  local_4 = 3;
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(local_6c);
  if (uStack_78 < 0x15) {
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_80);
}


//// FUNCTION FUN_007e2fb0 @ 007e2fb0 ////

void __fastcall FUN_007e2fb0(int *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  
  iVar4 = param_1[0x132];
  if ((iVar4 == 0) || (4 < *(int *)(iVar4 + 0x814))) {
    piVar6 = param_1;
    pvVar3 = (void *)FUN_007e34b0();
    FUN_007e46e0(pvVar3,piVar6);
  }
  else {
    FUN_007e7ec0(param_1,iVar4);
    FUN_007e7b00(param_1,(int *)param_1[0x132]);
    if (((char)param_1[0xc9] != '\0') &&
       (*(undefined1 *)(param_1[0x132] + 0x726) = 1, DAT_0104d8e8 != (int *)0x0)) {
      FUN_005f5d80(DAT_0104d8e8,param_1[0x132]);
    }
    uVar1 = FUN_0043b490((uint *)(param_1 + 0x106));
    if ((char)uVar1 != '\0') {
      FUN_007e1c60((int)param_1);
      FUN_007e29d0((int)param_1);
    }
    bVar5 = false;
    if (DAT_0104d8e8 != (int *)0x0) {
      iVar4 = param_1[0x132];
      iVar2 = FUN_005f5dc0((int)DAT_0104d8e8);
      bVar5 = iVar2 == iVar4;
      pvVar3 = (void *)(**(code **)(*DAT_0104d8e8 + 0x100))();
      if (((!bVar5) && (pvVar3 != (void *)0x0)) &&
         (iVar4 = FUN_004e0620(pvVar3,param_1[0x132]), iVar4 != 0)) {
        bVar5 = true;
      }
    }
    if (((DAT_0104d524 == param_1[0x132]) || (bVar5)) || (DAT_00f8860c == param_1[0x132])) {
      if (*(char *)((int)param_1 + 0x445) == '\0') {
        *(undefined1 *)((int)param_1 + 0x445) = 1;
        FUN_00881c00((void *)param_1[0xd6],"star_card",param_1[0x10f]);
        WHudIcon_Tick(param_1);
        return;
      }
    }
    else if ((*(char *)((int)param_1 + 0x445) != '\0') ||
            (iVar4 = FUN_008819d0((void *)param_1[0xd6],"star_card"),
            *(int *)(iVar4 + 0x260) == param_1[0x10f])) {
      FUN_00881c00((void *)param_1[0xd6],"star_card",param_1[0x110]);
      *(undefined1 *)((int)param_1 + 0x445) = 0;
      WHudIcon_Tick(param_1);
      return;
    }
  }
  WHudIcon_Tick(param_1);
  return;
}


//// FUNCTION FUN_007e3240 @ 007e3240 ////

int __fastcall FUN_007e3240(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007e33f0 @ 007e33f0 ////

int * __thiscall FUN_007e33f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007e3420 @ 007e3420 ////

int * __cdecl FUN_007e3420(int param_1,int param_2,int *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    (**(code **)(*param_3 + 4))();
    param_3[5] = *(int *)(param_1 + 0x14);
    (**(code **)*param_3)();
    param_1 = param_1 + 0x18;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_007e3460 @ 007e3460 ////

undefined4 * __cdecl FUN_007e3460(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar1 = param_3 + -6;
    iVar2 = param_2 + -0x18;
    (**(code **)(param_3[-6] + 4))();
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    (**(code **)*puVar1)();
    param_3 = puVar1;
    param_2 = iVar2;
  } while (iVar2 != param_1);
  return puVar1;
}


//// FUNCTION FUN_007e34b0 @ 007e34b0 ////

undefined4 FUN_007e34b0(void)

{
  if (DAT_0104d8e8 != 0) {
    return *(undefined4 *)(DAT_0104d8e8 + 0x604);
  }
  return DAT_0104ea44;
}


//// FUNCTION FUN_007e3630 @ 007e3630 ////

void __cdecl FUN_007e3630(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_007e3720 @ 007e3720 ////

void __fastcall FUN_007e3720(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d591d0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_007e3800 @ 007e3800 ////

undefined4 * __thiscall FUN_007e3800(void *this,byte param_1)

{
  FUN_007e3720(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007e3820 @ 007e3820 ////

void __fastcall FUN_007e3820(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0.0 <= *(float *)(param_1 + 0xc0)) {
    iVar2 = 0;
    iVar3 = 0;
    while( true ) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x35c) != 0) {
        iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
      }
      if (iVar1 <= iVar2) break;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x35c) + iVar3 + 0x14) + 0x2c))();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    }
  }
  return;
}


//// FUNCTION FUN_007e3890 @ 007e3890 ////

void __thiscall FUN_007e3890(void *this,int param_1)

{
  char cVar1;
  int *this_00;
  float fVar2;
  
  if (param_1 == 0) {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14);
    (**(code **)(*this_00 + 100))(1,this,0xc1200000);
  }
  else {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14 + param_1 * 0x18);
    (**(code **)(*this_00 + 100))
              (2,*(undefined4 *)(*(int *)((int)this + 0x35c) + param_1 * 0x18 + -4),
               *(float *)((int)this + 0x390) + 10.0);
  }
  (**(code **)(*this_00 + 0x5c))(1,this,0);
  cVar1 = FUN_007e7910((int)this_00);
  fVar2 = DAT_00e5bd34;
  if (cVar1 == '\0') {
    fVar2 = DAT_00e5bd34 * 0.4;
  }
  (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,fVar2);
  cVar1 = (**(code **)(*this_00 + 0x100))();
  if (cVar1 == '\0') {
    FUN_0089e5f0(this_00,'\x01');
  }
  if ((this_00[0x58] == 0) && (this_00[0x54] == 0)) {
    (**(code **)(*(int *)this + 0xc))(this_00,1);
  }
  return;
}


//// FUNCTION FUN_007e3970 @ 007e3970 ////

undefined1 __thiscall FUN_007e3970(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1;
  
  local_1 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    while( true ) {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar1 = FUN_007e1c50(iVar2);
      if ((iVar1 != 0) && (iVar2 = FUN_007e1c50(iVar2), iVar2 == param_1)) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == *(int *)((int)this + 0x360)) {
        return 0;
      }
    }
    local_1 = 1;
  }
  return local_1;
}


//// FUNCTION FUN_007e39f0 @ 007e39f0 ////

void __fastcall FUN_007e39f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x344) != 0) {
    iVar3 = *(int *)(param_1 + 0x35c);
    iVar4 = *(int *)(param_1 + 0x360);
    if (iVar3 != iVar4) {
      do {
        piVar2 = *(int **)(iVar3 + 0x14);
        iVar1 = iVar3 + 0x18;
        if (iVar1 != iVar4) {
          local_8 = 0;
          (**(code **)(**(int **)(iVar3 + 0x2c) + 0x34))(&DAT_0104cce0,&local_8);
        }
        uStack_4 = 0;
        (**(code **)(*piVar2 + 0x34))(&DAT_0104cce0,&uStack_4);
        iVar4 = *(int *)(param_1 + 0x360);
        iVar3 = iVar1;
      } while (iVar1 != iVar4);
    }
  }
  return;
}


//// FUNCTION FUN_007e3a70 @ 007e3a70 ////

int __thiscall FUN_007e3a70(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x14);
      iVar2 = FUN_007e1c50(iVar1);
      if (iVar2 != 0) {
        iVar2 = FUN_007e1c50(iVar1);
        if (iVar2 == param_1) {
          return iVar1;
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0x360));
  }
  return 0;
}


//// FUNCTION FUN_007e3b10 @ 007e3b10 ////

void __fastcall FUN_007e3b10(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  fVar1 = (float)param_1[0xd1];
  if (param_1[0xd1] < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = DAT_00e5bd34 * 0.4;
  fVar4 = (float10)(**(code **)(*param_1 + 0x14))();
  fVar4 = (float10)(fVar2 * fVar1 - fVar1 * 10.0) - fVar4;
  if (fVar4 < (float10)0.0 != (fVar4 == (float10)0.0)) {
    param_1[0xe4] = 0;
    return;
  }
  if (param_1[0xd7] != 0) {
    if ((param_1[0xd8] - param_1[0xd7]) / 0x18 != 0) {
      iVar3 = 0;
      if (param_1[0xd7] != 0) {
        iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
      }
      fVar1 = (float)(iVar3 + 1);
      if (iVar3 + 1 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      param_1[0xe4] = (int)((float)fVar4 / fVar1 + 2.0);
    }
  }
  return;
}


//// FUNCTION FUN_007e3c20 @ 007e3c20 ////

void __fastcall FUN_007e3c20(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0xd7] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      FUN_007e3890(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_007e3c90 @ 007e3c90 ////

void __cdecl FUN_007e3c90(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_3;
        *param_3 = &PTR_LAB_00d591d0;
        iVar2 = *(int *)(param_1 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 0x18;
      param_3 = param_3 + 6;
      puVar3 = puVar3 + 6;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_007e3d30 @ 007e3d30 ////

void __cdecl FUN_007e3d30(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    puVar3 = param_1 + 2;
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_1;
        *param_1 = &PTR_LAB_00d591d0;
        iVar2 = *(int *)(param_3 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 6;
      puVar3 = puVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_007e3e50 @ 007e3e50 ////

void FUN_007e3e50(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007e3720(param_1);
  }
  return;
}


//// FUNCTION FUN_007e3e80 @ 007e3e80 ////

void __fastcall FUN_007e3e80(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007e3720(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007e3ed0 @ 007e3ed0 ////

undefined4 * FUN_007e3ed0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007e3d30(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007e3f00 @ 007e3f00 ////

void FUN_007e3f00(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1048;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_007e3f70 @ 007e3f70 ////

void __fastcall FUN_007e3f70(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007e3720(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007e3fd0 @ 007e3fd0 ////

void __thiscall FUN_007e3fd0(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_007e3420((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007e3720(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007e4070 @ 007e4070 ////

void __thiscall FUN_007e4070(void *this,int *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined ***local_28;
  int local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ce1068;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d591d0;
  ExceptionList = &local_10;
  if (local_20 != 0) {
    local_2c = (int *)(local_20 + 0x18);
    local_30 = *local_2c;
    ExceptionList = &local_10;
    *(int **)(*local_2c + 4) = &local_30;
    *local_2c = (int)&local_30;
  }
  iVar3 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar3 != 0) {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x18;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    local_18 = this;
    puVar1 = &stack0xffffffc0;
    if (0xaaaaaaaU - iVar2 < param_2) {
      FUN_007e3f00();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0xaaaaaaa - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x18;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_007e3240((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007e3c90(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007e3d30(puVar5,param_2,(int)&local_34);
      FUN_007e3c90((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_007e3e50(puVar5,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 6;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 6;
      *(undefined4 **)((int)this + 4) = puVar4;
    }
    else {
      puVar5 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar5 - (int)param_1) / 0x18) < param_2) {
        FUN_007e3c90((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007e3ed0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007e3630(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007e3c90((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007e3460((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007e3630(param_1,param_1 + param_2 * 6,(int)&local_34);
      }
    }
  }
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_007e43a0 @ 007e43a0 ////

void __fastcall FUN_007e43a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce10b2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d591fc;
  param_1[0x14] = &PTR_FUN_00d591e0;
  local_4 = 3;
  FUN_007352a0((int)(param_1 + 0xd2));
  while( true ) {
    if ((param_1[0xd7] == 0) || ((int)(param_1[0xd8] - param_1[0xd7]) / 0x18 == 0)) break;
    puVar1 = *(undefined4 **)(param_1[0xd8] + -4);
    if ((param_1[0xd7] != 0) &&
       (puVar2 = (undefined4 *)param_1[0xd8], ((int)puVar2 - param_1[0xd7]) / 0x18 != 0)) {
      puVar4 = puVar2 + -6;
      if (puVar4 != puVar2) {
        piVar3 = puVar2 + -4;
        do {
          *puVar4 = &PTR_LAB_00d591d0;
          if ((int *)*piVar3 != (int *)0x0) {
            *(int *)*piVar3 = piVar3[-1];
          }
          if (piVar3[-1] != 0) {
            *(int *)(piVar3[-1] + 4) = *piVar3;
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
          piVar3[3] = 0;
          if ((int *)*piVar3 != (int *)0x0) {
            *(int *)*piVar3 = piVar3[-1];
          }
          if (piVar3[-1] != 0) {
            *(int *)(piVar3[-1] + 4) = *piVar3;
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
          puVar4 = puVar4 + 6;
          piVar3 = piVar3 + 6;
        } while (puVar4 != puVar2);
      }
      param_1[0xd8] = param_1[0xd8] + -0x18;
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  param_1[0xda] = &PTR_LAB_00d591d0;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdf] = 0;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  FUN_007e3e80((int)(param_1 + 0xd6));
  FUN_007352a0((int)(param_1 + 0xd2));
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007e4590 @ 007e4590 ////

void __thiscall FUN_007e4590(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = param_1;
  if (param_1 != 0) {
    piVar5 = *(int **)((int)this + 0x34c);
    if (piVar5 != *(int **)((int)this + 0x350)) {
      do {
        if (piVar5[5] == param_1) {
          FUN_00735760((void *)((int)this + 0x348),&param_1,piVar5);
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          break;
        }
        piVar5 = piVar5 + 6;
      } while (piVar5 != *(int **)((int)this + 0x350));
    }
    piVar5 = *(int **)((int)this + 0x35c);
    if (piVar5 != *(int **)((int)this + 0x360)) {
LAB_007e45f1:
      puVar7 = (undefined4 *)piVar5[5];
      iVar6 = FUN_007e1c50((int)puVar7);
      if ((iVar6 == 0) || (iVar6 = FUN_007e1c50((int)puVar7), iVar6 != iVar8)) goto LAB_007e460a;
      if (puVar7 != (undefined4 *)0x0) {
        piVar1 = puVar7 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(1);
        }
      }
      piVar2 = *(int **)((int)this + 0x360);
      piVar1 = piVar5 + 6;
      while (piVar1 != piVar2) {
        (**(code **)(*piVar5 + 4))();
        piVar5[5] = piVar5[0xb];
        (**(code **)*piVar5)();
        piVar1 = piVar5 + 0xc;
        piVar5 = piVar5 + 6;
      }
      puVar3 = *(undefined4 **)((int)this + 0x360);
      for (puVar7 = puVar3 + -6; puVar7 != puVar3; puVar7 = puVar7 + 6) {
        FUN_007e3720(puVar7);
      }
      *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) + -0x18;
    }
LAB_007e4676:
    FUN_007e3b10(this);
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)((int)this + 0x360) - *(int *)((int)this + 0x35c)) / 0x18;
    }
    if (0 < iVar8) {
      iVar6 = 0;
      do {
        FUN_007e3890(this,iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar8);
    }
    do {
      cVar4 = (**(code **)(*(int *)this + 0x50))(1);
    } while (cVar4 != '\0');
  }
  return;
LAB_007e460a:
  piVar5 = piVar5 + 6;
  if (piVar5 == *(int **)((int)this + 0x360)) goto LAB_007e4676;
  goto LAB_007e45f1;
}


//// FUNCTION FUN_007e46e0 @ 007e46e0 ////

void __thiscall FUN_007e46e0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar5 = *(int **)((int)this + 0x35c);
    if (piVar5 != *(int **)((int)this + 0x360)) {
      do {
        puVar2 = (undefined4 *)piVar5[5];
        if (puVar2 == param_1) {
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          if (puVar2 != (undefined4 *)0x0) {
            piVar1 = puVar2 + 0x12;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar2)(1);
            }
          }
          FUN_007e3fd0((void *)((int)this + 0x358),&param_1,piVar5);
          break;
        }
        piVar5 = piVar5 + 6;
      } while (piVar5 != *(int **)((int)this + 0x360));
    }
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)((int)this + 0x360) - *(int *)((int)this + 0x35c)) / 0x18;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        FUN_007e3890(this,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    do {
      cVar3 = (**(code **)(*(int *)this + 0x50))(1);
    } while (cVar3 != '\0');
  }
  return;
}


//// FUNCTION FUN_007e47a0 @ 007e47a0 ////

void __fastcall FUN_007e47a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_007352a0(param_1 + 0x348);
  if (*(int *)(param_1 + 0x344) != 0) {
    while ((*(int *)(param_1 + 0x35c) != 0 &&
           ((*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18 != 0))) {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x360) + -4);
      if ((*(int *)(param_1 + 0x35c) != 0) &&
         (puVar3 = *(undefined4 **)(param_1 + 0x360),
         ((int)puVar3 - *(int *)(param_1 + 0x35c)) / 0x18 != 0)) {
        for (puVar4 = puVar3 + -6; puVar4 != puVar3; puVar4 = puVar4 + 6) {
          FUN_007e3720(puVar4);
        }
        *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + -0x18;
      }
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_007e4880 @ 007e4880 ////

void __thiscall FUN_007e4880(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007e48c5;
    }
  }
  iVar1 = 0;
LAB_007e48c5:
  FUN_007e4070(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_007e48f0 @ 007e48f0 ////

undefined4 * __thiscall FUN_007e48f0(void *this,char param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce10f2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d591fc;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d591e0;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 **)((int)this + 0x374) = (undefined4 *)((int)this + 0x368);
  *(undefined4 *)((int)this + 0x368) = &PTR_LAB_00d591d0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  this_00 = (undefined4 *)((int)this + 0x380);
  local_4 = 3;
  FUN_0043b460(this_00);
  *(undefined4 *)((int)this + 0x390) = 0;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffff5;
  puVar2 = DAT_0104ea44;
  if (param_1 != '\0') {
    if (DAT_0104ea44 != (undefined4 *)0x0) {
      iVar1 = DAT_0104ea44[0x12];
      DAT_0104ea44[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104ea30[1])();
      DAT_0104ea44 = (undefined4 *)0x0;
      (*(code *)*DAT_0104ea30)();
    }
    (*(code *)DAT_0104ea30[1])();
    DAT_0104ea44 = this;
    (*(code *)*DAT_0104ea30)();
  }
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0x14))();
  FUN_0073e4e0(this,DAT_00e5bd38);
  FUN_0043b4d0(this_00,1);
  *this_00 = 10;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007e4a50 @ 007e4a50 ////

undefined4 * __thiscall FUN_007e4a50(void *this,byte param_1)

{
  FUN_007e43a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007e4a70 @ 007e4a70 ////

void __thiscall FUN_007e4a70(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007e3d30(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_007e4880(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007e4b00 @ 007e4b00 ////

void __fastcall FUN_007e4b00(int *param_1)

{
  bool bVar1;
  char cVar2;
  void *this;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1113;
  local_c = ExceptionList;
  iVar5 = param_1[0xd3];
  bVar1 = false;
  local_2c = 0;
  ExceptionList = &local_c;
  if (iVar5 != param_1[0xd4]) {
    do {
      iVar4 = *(int *)(iVar5 + 0x14);
      if ((iVar4 != 0) && (cVar2 = FUN_007e3970(param_1,iVar4), cVar2 == '\0')) {
        this = operator_new(0x518);
        local_4 = 0;
        if (this == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else if (param_1[0xd7] == 0) {
          piVar3 = FUN_007e28c0(this,iVar4,0);
        }
        else {
          piVar3 = FUN_007e28c0(this,iVar4,(param_1[0xd8] - param_1[0xd7]) / 0x18);
        }
        local_4 = 0xffffffff;
        FUN_007e7dc0(piVar3);
        local_18 = &local_24;
        local_20 = 0;
        local_1c = (int *)0x0;
        local_24 = &PTR_LAB_00d591d0;
        if (piVar3 != (int *)0x0) {
          local_1c = piVar3 + 6;
          local_20 = *local_1c;
          *(int **)(*local_1c + 4) = &local_20;
          *local_1c = (int)&local_20;
        }
        local_4 = 1;
        local_10 = piVar3;
        FUN_007e4a70(param_1 + 0xd6,(int)&local_24);
        local_4 = 0xffffffff;
        local_24 = &PTR_LAB_00d591d0;
        if (local_1c != (int *)0x0) {
          *local_1c = local_20;
        }
        if (local_20 != 0) {
          *(int **)(local_20 + 4) = local_1c;
        }
        local_10 = (int *)0x0;
        local_20 = 0;
        local_1c = (int *)0x0;
        if (param_1[0xd7] == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
        }
        FUN_007e3890(param_1,iVar4 + -1);
        local_2c = local_2c + 1;
        bVar1 = true;
      }
      iVar5 = iVar5 + 0x18;
    } while (iVar5 != param_1[0xd4]);
    if ((bVar1) && (local_2c == 1)) {
      FUN_007e3b10(param_1);
      FUN_007e3c20(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007e4cd0 @ 007e4cd0 ////

void __thiscall FUN_007e4cd0(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce1128;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + 1;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d25c70;
  local_10 = param_1;
  if (param_1 != 0) {
    local_1c = (int *)(param_1 + 0x18);
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  FUN_00736770((void *)((int)this + 0x348),(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_FUN_00d25c70;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = 0;
  local_20 = 0;
  local_1c = (int *)0x0;
  FUN_007e4b00(this);
  FUN_007e3b10(this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007e4db0 @ 007e4db0 ////

void __fastcall FUN_007e4db0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1148;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xd1] = 0;
  FUN_007352a0((int)(param_1 + 0xd2));
  puVar7 = DAT_0104ced4;
  if (DAT_0104ced4 != &DAT_0104cee0) {
    do {
      piVar2 = (int *)puVar7[2];
      if (piVar2 != (int *)0x0) {
        iVar3 = piVar2[0x205];
        cVar4 = (**(code **)(*piVar2 + 0x204))();
        if (cVar4 != '\0') {
          iVar5 = FUN_005773c0((int)piVar2);
          iVar6 = GetPlayerStudio();
          if ((iVar5 == iVar6) && (iVar3 < 5)) {
            param_1[0xd1] = param_1[0xd1] + 1;
            piStack_1c = piVar2 + 6;
            pppuStack_18 = &ppuStack_24;
            ppuStack_24 = &PTR_FUN_00d25c70;
            iStack_20 = *piStack_1c;
            *(int **)(*piStack_1c + 4) = &iStack_20;
            *piStack_1c = (int)&iStack_20;
            uStack_4 = 0;
            piStack_10 = piVar2;
            FUN_00736770(param_1 + 0xd2,(int)&ppuStack_24);
            uStack_4 = 0xffffffff;
            FUN_005783d0(&ppuStack_24);
          }
        }
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cee0);
  }
  FUN_007354b0((int *)param_1[0xd3],(int *)param_1[0xd4],(param_1[0xd4] - param_1[0xd3]) / 0x18,
               &LAB_007e3130);
  FUN_007e3b10(param_1);
  FUN_007e4b00(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007e4f10 @ 007e4f10 ////

void __fastcall FUN_007e4f10(int *param_1)

{
  FUN_007e4db0(param_1);
  FUN_007e39f0((int)param_1);
  FUN_007e3c20(param_1);
  return;
}


//// FUNCTION FUN_007e4f30 @ 007e4f30 ////

void __fastcall FUN_007e4f30(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0043b490((uint *)(param_1 + 0xe0));
  if ((char)uVar1 != '\0') {
    FUN_007e4db0(param_1);
    FUN_007e39f0((int)param_1);
    FUN_007e3c20(param_1);
    FUN_007e4db0(param_1);
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_007e4f70 @ 007e4f70 ////

undefined4 __cdecl FUN_007e4f70(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = FUN_007fd5d0();
    return uVar1;
  case 1:
    uVar1 = FUN_007329d0();
    return uVar1;
  case 2:
    uVar1 = FUN_007e34b0();
    return uVar1;
  case 3:
    uVar1 = FUN_00803080();
    return uVar1;
  case 4:
    uVar1 = FUN_007dc3a0();
    return uVar1;
  case 5:
    uVar1 = FUN_007e00e0();
    return uVar1;
  case 6:
    uVar1 = FUN_007ea7b0();
    return uVar1;
  case 7:
    uVar1 = FUN_007f8640();
    return uVar1;
  case 8:
    uVar1 = FUN_007f53c0();
    return uVar1;
  default:
    return 0;
  }
}


//// FUNCTION FUN_007e4fe0 @ 007e4fe0 ////

void __fastcall FUN_007e4fe0(int param_1)

{
  FUN_007e4f70(*(undefined4 *)(param_1 + 0x38c));
  return;
}


//// FUNCTION FUN_007e50c0 @ 007e50c0 ////

int __fastcall FUN_007e50c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007e5120 @ 007e5120 ////

void __cdecl FUN_007e5120(undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  float fVar6;
  
  piVar2 = (int *)FUN_007e4f70(param_1);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar5 = 0xc2c80000;
    iVar3 = FUN_0071b2b0();
    (**(code **)(iVar1 + 0x5c))(1,iVar3,uVar5);
  }
  piVar2 = (int *)FUN_007e4f70(param_2);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    fVar4 = FUN_0071afe0();
    fVar6 = (float)(fVar4 + (float10)param_3 + (float10)10.0);
    iVar3 = FUN_0071b2b0();
    (**(code **)(iVar1 + 0x5c))(1,iVar3,fVar6);
  }
  return;
}


//// FUNCTION FUN_007e5190 @ 007e5190 ////

undefined1 FUN_007e5190(void)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_007fd5d0();
  if (iVar1 != 0) {
    iVar1 = FUN_007fd5d0();
    if (*(int *)(iVar1 + 0x344) != 0) {
      uVar2 = 0;
    }
  }
  iVar1 = FUN_007e34b0();
  if (iVar1 != 0) {
    iVar1 = FUN_007e34b0();
    if (*(int *)(iVar1 + 0x344) != 0) {
      uVar2 = 0;
    }
  }
  iVar1 = FUN_00803080();
  if (iVar1 != 0) {
    iVar1 = FUN_00803080();
    if (*(int *)(iVar1 + 0x344) != 0) {
      uVar2 = 0;
    }
  }
  iVar1 = FUN_007dc3a0();
  if (iVar1 != 0) {
    iVar1 = FUN_007dc3a0();
    if (*(int *)(iVar1 + 0x344) != 0) {
      uVar2 = 0;
    }
  }
  iVar1 = FUN_007e00e0();
  if (iVar1 != 0) {
    iVar1 = FUN_007e00e0();
    if (*(int *)(iVar1 + 0x344) != 0) {
      uVar2 = 0;
    }
  }
  iVar1 = FUN_007ea7b0();
  if (iVar1 != 0) {
    iVar1 = FUN_007ea7b0();
    if (*(int *)(iVar1 + 0x344) != 0) {
      uVar2 = 0;
    }
  }
  iVar1 = FUN_007f8640();
  if (iVar1 != 0) {
    iVar1 = FUN_007f8640();
    if (*(int *)(iVar1 + 0x344) != 0) {
      uVar2 = 0;
    }
  }
  iVar1 = FUN_007f53c0();
  if ((iVar1 != 0) && (DAT_0104d8e8 != 0)) {
    iVar1 = FUN_007f53c0();
    if (*(int *)(iVar1 + 0x344) != 0) {
      uVar2 = 0;
    }
  }
  iVar1 = FUN_007329d0();
  if (iVar1 != 0) {
    iVar1 = FUN_007329d0();
    if (*(int *)(iVar1 + 0x344) != 0) {
      return 0;
    }
  }
  return uVar2;
}


//// FUNCTION FUN_007e5290 @ 007e5290 ////

undefined1 __cdecl FUN_007e5290(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  switch(param_1) {
  case 0:
    iVar1 = FUN_007fd5d0();
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_007fd5d0();
    break;
  case 1:
    iVar1 = FUN_007329d0();
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_007329d0();
    break;
  case 2:
    iVar1 = FUN_007e34b0();
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_007e34b0();
    break;
  case 3:
    iVar1 = FUN_00803080();
    if (iVar1 == 0) {
      return 1;
    }
    if (DAT_0104d8e8 != 0) {
      return 1;
    }
    iVar1 = FUN_00803080();
    break;
  case 4:
    iVar1 = FUN_007dc3a0();
    if (iVar1 == 0) {
      return 1;
    }
    if (DAT_0104d8e8 != 0) {
      return 1;
    }
    iVar1 = FUN_007dc3a0();
    break;
  case 5:
    iVar1 = FUN_007e00e0();
    if (iVar1 == 0) {
      return 1;
    }
    if (DAT_0104d8e8 != 0) {
      return 1;
    }
    iVar1 = FUN_007e00e0();
    break;
  case 6:
    iVar1 = FUN_007ea7b0();
    if (iVar1 == 0) {
      return 1;
    }
    if (DAT_0104d8e8 != 0) {
      return 1;
    }
    iVar1 = FUN_007ea7b0();
    break;
  case 7:
    iVar1 = FUN_007f8640();
    if (iVar1 == 0) {
      return 1;
    }
    if (DAT_0104d8e8 != 0) {
      return 1;
    }
    iVar1 = FUN_007f8640();
    break;
  case 8:
    iVar1 = FUN_007f53c0();
    if (iVar1 == 0) {
      return 1;
    }
    if (DAT_0104d8e8 == 0) {
      return 1;
    }
    iVar1 = FUN_007f53c0();
    break;
  default:
    goto switchD_007e52a0_default;
  }
  if (*(int *)(iVar1 + 0x344) != 0) {
    uVar2 = 0;
  }
switchD_007e52a0_default:
  return uVar2;
}


//// FUNCTION FUN_007e53c0 @ 007e53c0 ////

undefined4 FUN_007e53c0(void)

{
  int iVar1;
  
  iVar1 = FUN_007fd5d0();
  if ((iVar1 != 0) && (iVar1 = FUN_007fd5d0(), *(int *)(iVar1 + 0x344) != 0)) {
    return 0;
  }
  iVar1 = FUN_007e34b0();
  if ((iVar1 != 0) && (iVar1 = FUN_007e34b0(), *(int *)(iVar1 + 0x344) != 0)) {
    return 2;
  }
  iVar1 = FUN_00803080();
  if (((iVar1 != 0) && (DAT_0104d8e8 == 0)) &&
     (iVar1 = FUN_00803080(), *(int *)(iVar1 + 0x344) != 0)) {
    return 3;
  }
  iVar1 = FUN_007dc3a0();
  if (((iVar1 != 0) && (DAT_0104d8e8 == 0)) &&
     (iVar1 = FUN_007dc3a0(), *(int *)(iVar1 + 0x344) != 0)) {
    return 4;
  }
  iVar1 = FUN_007e00e0();
  if (((iVar1 != 0) && (DAT_0104d8e8 == 0)) &&
     (iVar1 = FUN_007e00e0(), *(int *)(iVar1 + 0x344) != 0)) {
    return 5;
  }
  iVar1 = FUN_007ea7b0();
  if (((iVar1 != 0) && (DAT_0104d8e8 == 0)) &&
     (iVar1 = FUN_007ea7b0(), *(int *)(iVar1 + 0x344) != 0)) {
    return 6;
  }
  iVar1 = FUN_007f8640();
  if (((iVar1 != 0) && (DAT_0104d8e8 == 0)) &&
     (iVar1 = FUN_007f8640(), *(int *)(iVar1 + 0x344) != 0)) {
    return 7;
  }
  iVar1 = FUN_007f53c0();
  if (((iVar1 != 0) && (DAT_0104d8e8 != 0)) &&
     (iVar1 = FUN_007f53c0(), *(int *)(iVar1 + 0x344) != 0)) {
    return 8;
  }
  iVar1 = FUN_007329d0();
  if ((iVar1 != 0) && (iVar1 = FUN_007329d0(), *(int *)(iVar1 + 0x344) != 0)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_007e5510 @ 007e5510 ////

undefined4 FUN_007e5510(void)

{
  if (DAT_0104d8e8 != 0) {
    return *(undefined4 *)(DAT_0104d8e8 + 0x634);
  }
  return DAT_0104ea5c;
}


//// FUNCTION FUN_007e5530 @ 007e5530 ////

void FUN_007e5530(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  
  piVar3 = (int *)FUN_0071b2b0();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x14))();
  fVar1 = (float)fVar5;
  piVar3 = (int *)FUN_007fd5d0();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x10))();
  fVar2 = (float)fVar5;
  iVar4 = FUN_007fd5d0();
  if (iVar4 != 0) {
    piVar3 = (int *)FUN_007fd5d0();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.6);
    piVar3 = (int *)FUN_007fd5d0();
    FUN_00800e70(piVar3);
  }
  iVar4 = FUN_007329d0();
  if (iVar4 != 0) {
    piVar3 = (int *)FUN_007329d0();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.6);
    piVar3 = (int *)FUN_007329d0();
    FUN_00736270(piVar3);
  }
  iVar4 = FUN_007e34b0();
  if (iVar4 != 0) {
    piVar3 = (int *)FUN_007e34b0();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.6);
    piVar3 = (int *)FUN_007e34b0();
    FUN_007e3c20(piVar3);
  }
  iVar4 = FUN_00803080();
  if ((iVar4 != 0) && (DAT_0104d8e8 == 0)) {
    piVar3 = (int *)FUN_00803080();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.6);
    piVar3 = (int *)FUN_00803080();
    FUN_00803910(piVar3);
  }
  iVar4 = FUN_007dc3a0();
  if ((iVar4 != 0) && (DAT_0104d8e8 == 0)) {
    piVar3 = (int *)FUN_007dc3a0();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.6);
    piVar3 = (int *)FUN_007dc3a0();
    FUN_007dd210(piVar3);
  }
  iVar4 = FUN_007e00e0();
  if ((iVar4 != 0) && (DAT_0104d8e8 == 0)) {
    piVar3 = (int *)FUN_007e00e0();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.6);
    piVar3 = (int *)FUN_007e00e0();
    FUN_007e0910(piVar3);
  }
  iVar4 = FUN_007ea7b0();
  if ((iVar4 != 0) && (DAT_0104d8e8 == 0)) {
    piVar3 = (int *)FUN_007ea7b0();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.6);
    piVar3 = (int *)FUN_007ea7b0();
    FUN_007eb040(piVar3);
  }
  iVar4 = FUN_007f8640();
  if ((iVar4 != 0) && (DAT_0104d8e8 == 0)) {
    piVar3 = (int *)FUN_007f8640();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.6);
    piVar3 = (int *)FUN_007f8640();
    FUN_007f8e70(piVar3);
    return;
  }
  return;
}


//// FUNCTION FUN_007e5710 @ 007e5710 ////

void FUN_007e5710(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  
  piVar3 = (int *)FUN_0071b2b0();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x14))();
  fVar1 = (float)fVar5;
  piVar3 = (int *)FUN_007fd5d0();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x10))();
  fVar2 = (float)fVar5;
  iVar4 = FUN_007fd5d0();
  if (iVar4 != 0) {
    piVar3 = (int *)FUN_007fd5d0();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.75);
    piVar3 = (int *)FUN_007fd5d0();
    FUN_00800e70(piVar3);
  }
  iVar4 = FUN_007329d0();
  if (iVar4 != 0) {
    piVar3 = (int *)FUN_007329d0();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.75);
    piVar3 = (int *)FUN_007329d0();
    FUN_00736270(piVar3);
  }
  iVar4 = FUN_007e34b0();
  if (iVar4 != 0) {
    piVar3 = (int *)FUN_007e34b0();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.75);
    piVar3 = (int *)FUN_007e34b0();
    FUN_007e3c20(piVar3);
  }
  iVar4 = FUN_00803080();
  if ((iVar4 != 0) && (DAT_0104d8e8 == 0)) {
    piVar3 = (int *)FUN_00803080();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.75);
    piVar3 = (int *)FUN_00803080();
    FUN_00803910(piVar3);
  }
  iVar4 = FUN_007dc3a0();
  if ((iVar4 != 0) && (DAT_0104d8e8 == 0)) {
    piVar3 = (int *)FUN_007dc3a0();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.75);
    piVar3 = (int *)FUN_007dc3a0();
    FUN_007dd210(piVar3);
  }
  iVar4 = FUN_007e00e0();
  if ((iVar4 != 0) && (DAT_0104d8e8 == 0)) {
    piVar3 = (int *)FUN_007e00e0();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.75);
    piVar3 = (int *)FUN_007e00e0();
    FUN_007e0910(piVar3);
  }
  iVar4 = FUN_007ea7b0();
  if ((iVar4 != 0) && (DAT_0104d8e8 == 0)) {
    piVar3 = (int *)FUN_007ea7b0();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.75);
    piVar3 = (int *)FUN_007ea7b0();
    FUN_007eb040(piVar3);
  }
  iVar4 = FUN_007f8640();
  if ((iVar4 != 0) && (DAT_0104d8e8 == 0)) {
    piVar3 = (int *)FUN_007f8640();
    (**(code **)(*piVar3 + 0x74))(fVar2,fVar1 * 0.75);
    piVar3 = (int *)FUN_007f8640();
    FUN_007f8e70(piVar3);
    return;
  }
  return;
}


//// FUNCTION WHudCardButtons_Tick @ 007e58f0 ////

void __fastcall WHudCardButtons_Tick(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void **ppvStack_14c;
  undefined4 uStack_148;
  uint uStack_144;
  void *apvStack_140 [2];
  uint uStack_138;
  void *pvStack_130;
  undefined1 auStack_12c [4];
  uint uStack_128;
  void *apvStack_110 [2];
  uint uStack_108;
  void *apvStack_f0 [2];
  uint uStack_e8;
  void *apvStack_d0 [2];
  uint uStack_c8;
  void *apvStack_b0 [2];
  uint uStack_a8;
  void *apvStack_90 [2];
  uint uStack_88;
  void *apvStack_70 [2];
  uint uStack_68;
  void *apvStack_50 [2];
  uint uStack_48;
  void *apvStack_30 [2];
  uint uStack_28;
  undefined1 uStack_18;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce11d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_007e4f70(param_1[0xe3]);
  if ((piVar2 != (int *)0x0) &&
     ((cVar1 = (**(code **)(*piVar2 + 0x34))(), cVar1 != '\0' ||
      (cVar1 = (**(code **)(*param_1 + 0x34))(), cVar1 != '\0')))) {
    param_1[0xe4] = *DAT_00f87b04;
  }
  if (((param_1[0xe5] + param_1[0xe4] < *DAT_00f87b04) && (param_1[0xe3] != 0)) &&
     ((char)param_1[0xe7] != '\0')) {
    iVar3 = FUN_007fd5d0();
    if (((*(int *)(iVar3 + 0x35c) != 0) &&
        (0 < (*(int *)(iVar3 + 0x360) - *(int *)(iVar3 + 0x35c)) / 0x18)) && (DAT_0104d8e8 == 0)) {
      FUN_007e5120(param_1[0xe3],0,(float)param_1[0xe6]);
      ppvStack_14c = apvStack_140;
      param_1[0xe3] = 0;
      apvStack_140[0] = (void *)((uint)apvStack_140[0] & 0xffff0000);
      uStack_148 = 0;
      uStack_144 = 10;
      uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&ppvStack_14c,(wchar_t *)&lpCaption_00d16918,uVar4);
      uStack_4 = 0;
      FUN_0040d3c0(&ppvStack_14c,L"<t1><translate>HUDSLIDER_STARS</translate></t1>");
      FUN_00401de0(auStack_12c,"ui/job_star.dds",0xffffffff);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      (**(code **)(*(int *)param_1[0xe2] + 0x100))();
      uStack_18 = 0;
      if (0x14 < uStack_138) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_140[0]);
      }
      (**(code **)(*param_1 + 0x88))(0x40000000);
      uStack_4 = 0xffffffff;
      if (10 < uStack_144) {
                    /* WARNING: Subroutine does not return */
        _free(ppvStack_14c);
      }
    }
  }
  cVar1 = FUN_007e5190();
  if ((cVar1 == '\0') && (s___AVWExtraIconManager_TM___00e5b930[0x1b] != '\0')) {
    (**(code **)(*param_1 + 0x20))();
    if (((param_1[0xe3] == 0) && (iVar3 = FUN_007fd5d0(), *(int *)(iVar3 + 0x344) == 0)) ||
       (cVar1 = FUN_007e5290(param_1[0xe3]), cVar1 != '\0')) {
      iVar3 = FUN_007e53c0();
      FUN_007e5120(param_1[0xe3],iVar3,(float)param_1[0xe6]);
      param_1[0xe3] = iVar3;
      switch(iVar3) {
      case 0:
        FUN_00401de0(&pvStack_130,"ui/job_star.dds",0xffffffff);
        puStack_8 = (undefined1 *)0x2;
        (**(code **)(*(int *)param_1[0xe2] + 0x100))(&pvStack_130);
        puStack_8 = (undefined1 *)0xffffffff;
        if (0x14 < uStack_128) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_130);
        }
        break;
      case 1:
        FUN_00401de0(apvStack_30,"ui/icon_stuntman.dds",0xffffffff);
        puStack_8 = (undefined1 *)0xa;
        (**(code **)(*(int *)param_1[0xe2] + 0x100))(apvStack_30);
        puStack_8 = (undefined1 *)0xffffffff;
        if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_30[0]);
        }
        break;
      case 2:
        FUN_00401de0(apvStack_50,"ui/job_extras.dds",0xffffffff);
        puStack_8 = (undefined1 *)0x3;
        (**(code **)(*(int *)param_1[0xe2] + 0x100))(apvStack_50);
        puStack_8 = (undefined1 *)0xffffffff;
        if (0x14 < uStack_48) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_50[0]);
        }
        break;
      case 3:
        FUN_00401de0(apvStack_d0,"ui/job_writer.dds",0xffffffff);
        puStack_8 = (undefined1 *)0x4;
        (**(code **)(*(int *)param_1[0xe2] + 0x100))(apvStack_d0);
        puStack_8 = (undefined1 *)0xffffffff;
        if (0x14 < uStack_c8) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_d0[0]);
        }
        break;
      case 4:
        FUN_00401de0(apvStack_110,"ui/job_builder.dds",0xffffffff);
        puStack_8 = (undefined1 *)0x5;
        (**(code **)(*(int *)param_1[0xe2] + 0x100))(apvStack_110);
        puStack_8 = (undefined1 *)0xffffffff;
        if (0x14 < uStack_108) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_110[0]);
        }
        break;
      case 5:
        FUN_00401de0(apvStack_90,"ui/job_crew.dds",0xffffffff);
        puStack_8 = (undefined1 *)0x6;
        (**(code **)(*(int *)param_1[0xe2] + 0x100))(apvStack_90);
        puStack_8 = (undefined1 *)0xffffffff;
        if (0x14 < uStack_88) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_90[0]);
        }
        break;
      case 6:
        FUN_00401de0(apvStack_f0,"ui/job_janitor.dds",0xffffffff);
        puStack_8 = (undefined1 *)0x7;
        (**(code **)(*(int *)param_1[0xe2] + 0x100))(apvStack_f0);
        puStack_8 = (undefined1 *)0xffffffff;
        if (0x14 < uStack_e8) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_f0[0]);
        }
        break;
      case 7:
        FUN_00401de0(apvStack_b0,"ui/job_scientist.dds",0xffffffff);
        puStack_8 = (undefined1 *)0x8;
        (**(code **)(*(int *)param_1[0xe2] + 0x100))(apvStack_b0);
        puStack_8 = (undefined1 *)0xffffffff;
        if (0x14 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_b0[0]);
        }
        break;
      case 8:
        FUN_00401de0(apvStack_70,"ui/button_dummy.dds",0xffffffff);
        puStack_8 = (undefined1 *)0x9;
        (**(code **)(*(int *)param_1[0xe2] + 0x100))(apvStack_70);
        puStack_8 = (undefined1 *)0xffffffff;
        if (0x14 < uStack_68) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_70[0]);
        }
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x20))();
  }
  WWindow_Tick(param_1);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_007e5fb0 @ 007e5fb0 ////

int __cdecl FUN_007e5fb0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_1 + 1;
  if (8 < iVar2) {
    iVar2 = 0;
  }
  while ((iVar2 != param_1 && (cVar1 = FUN_007e5290(iVar2), cVar1 != '\0'))) {
    iVar2 = iVar2 + 1;
    if (8 < iVar2) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


//// FUNCTION FUN_007e6020 @ 007e6020 ////

void __thiscall FUN_007e6020(void *this,char param_1)

{
  uint uVar1;
  size_t sVar2;
  void *_Memory;
  char *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40 [20];
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [4];
  undefined1 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce11f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(char *)((int)this + 0x39c) = param_1;
  if (param_1 != '\0') {
    FUN_007e5120(*(undefined4 *)((int)this + 0x38c),0,*(float *)((int)this + 0x398));
    local_2c = local_20;
    *(undefined4 *)((int)this + 0x38c) = 0;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 10;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
    local_4 = 0;
    sVar2 = FUN_00ace02d(L"<t1><translate>HUDSLIDER_STARS</translate></t1>");
    FUN_0040cae0(&local_2c,L"<t1><translate>HUDSLIDER_STARS</translate></t1>",sVar2);
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"ui/job_star.dds",0xf);
    local_48 = 0xf;
    local_4c[0xf] = '\0';
    uVar1 = 0x3f800000;
    _Memory = (void *)0x0;
    local_4 = CONCAT31(local_4._1_3_,1);
    (**(code **)(**(int **)((int)this + 0x388) + 0x100))(&local_4c);
    uStack_18 = 0;
    if (0x14 < uVar1) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    (**(code **)(*(int *)this + 0x88))(0x40000000);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007e6180 @ 007e6180 ////

void __fastcall FUN_007e6180(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *local_14c;
  undefined4 local_148;
  uint local_144;
  undefined2 local_140 [10];
  void *local_12c [2];
  uint uStack_124;
  void *local_10c [2];
  uint uStack_104;
  void *local_ec [2];
  uint uStack_e4;
  void *local_cc [2];
  uint uStack_c4;
  void *local_ac [2];
  uint uStack_a4;
  void *local_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1265;
  pvStack_c = ExceptionList;
  iVar1 = param_1[0xe3];
  local_14c = local_140;
  local_140[0] = 0;
  local_148 = 0;
  local_144 = 10;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_14c,(wchar_t *)&lpCaption_00d16918,uVar2);
  local_4 = 0;
  iVar3 = FUN_007e5fb0(iVar1);
  if (8 < iVar3) {
    iVar3 = 0;
  }
  if (iVar3 == iVar1) goto LAB_007e65d2;
  FUN_007e5120(iVar1,iVar3,(float)param_1[0xe6]);
  param_1[0xe3] = iVar3;
  switch(iVar3) {
  case 0:
    FUN_00401de0(local_4c,"ui/job_star.dds",0xffffffff);
    local_4._0_1_ = 1;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_4c);
    break;
  case 1:
    FUN_00401de0(local_2c,"ui/icon_stuntman.dds",0xffffffff);
    local_4._0_1_ = 9;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_2c);
    local_4c[0] = local_2c[0];
    uStack_44 = uStack_24;
    break;
  case 2:
    FUN_00401de0(local_8c,"ui/job_extras.dds",0xffffffff);
    local_4._0_1_ = 2;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_8c);
    local_4c[0] = local_8c[0];
    uStack_44 = uStack_84;
    break;
  case 3:
    FUN_00401de0(local_cc,"ui/job_writer.dds",0xffffffff);
    local_4._0_1_ = 3;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_cc);
    local_4c[0] = local_cc[0];
    uStack_44 = uStack_c4;
    break;
  case 4:
    FUN_00401de0(local_12c,"ui/job_builder.dds",0xffffffff);
    local_4._0_1_ = 4;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_12c);
    local_4c[0] = local_12c[0];
    uStack_44 = uStack_124;
    break;
  case 5:
    FUN_00401de0(local_10c,"ui/job_crew.dds",0xffffffff);
    local_4._0_1_ = 5;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_10c);
    local_4c[0] = local_10c[0];
    uStack_44 = uStack_104;
    break;
  case 6:
    FUN_00401de0(local_ec,"ui/job_janitor.dds",0xffffffff);
    local_4._0_1_ = 6;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_ec);
    local_4c[0] = local_ec[0];
    uStack_44 = uStack_e4;
    break;
  case 7:
    FUN_00401de0(local_ac,"ui/job_scientist.dds",0xffffffff);
    local_4._0_1_ = 7;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_ac);
    local_4c[0] = local_ac[0];
    uStack_44 = uStack_a4;
    break;
  case 8:
    FUN_00401de0(local_6c,"ui/button_dummy.dds",0xffffffff);
    local_4._0_1_ = 8;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_6c);
    local_4c[0] = local_6c[0];
    uStack_44 = uStack_64;
    break;
  default:
    goto switchD_007e621f_default;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
switchD_007e621f_default:
  (**(code **)(*param_1 + 0x88))();
LAB_007e65d2:
  param_1[0xe4] = *DAT_00f87b04;
  if (10 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007e6630 @ 007e6630 ////

void __fastcall FUN_007e6630(int *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 *local_14c;
  undefined4 local_148;
  uint local_144;
  undefined2 local_140 [10];
  void *local_12c [2];
  uint uStack_124;
  void *local_10c [2];
  uint uStack_104;
  void *local_ec [2];
  uint uStack_e4;
  void *local_cc [2];
  uint uStack_c4;
  void *local_ac [2];
  uint uStack_a4;
  void *local_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce12d5;
  pvStack_c = ExceptionList;
  iVar1 = param_1[0xe3];
  local_14c = local_140;
  local_140[0] = 0;
  local_148 = 0;
  local_144 = 10;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_14c,(wchar_t *)&lpCaption_00d16918,uVar3);
  iVar4 = iVar1 + -1;
  local_4 = 0;
  while ((iVar4 != iVar1 && (cVar2 = FUN_007e5290(iVar4), cVar2 != '\0'))) {
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) {
      iVar4 = 8;
    }
  }
  if (iVar4 < 0) {
    iVar4 = 7;
  }
  if (iVar4 == iVar1) goto LAB_007e6a9d;
  FUN_007e5120(iVar1,iVar4,(float)param_1[0xe6]);
  param_1[0xe3] = iVar4;
  switch(iVar4) {
  case 0:
    FUN_00401de0(local_4c,"ui/job_star.dds",0xffffffff);
    local_4._0_1_ = 1;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_4c);
    break;
  case 1:
    FUN_00401de0(local_2c,"ui/icon_stuntman.dds",0xffffffff);
    local_4._0_1_ = 9;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_2c);
    local_4c[0] = local_2c[0];
    uStack_44 = uStack_24;
    break;
  case 2:
    FUN_00401de0(local_8c,"ui/job_extras.dds",0xffffffff);
    local_4._0_1_ = 2;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_8c);
    local_4c[0] = local_8c[0];
    uStack_44 = uStack_84;
    break;
  case 3:
    FUN_00401de0(local_cc,"ui/job_writer.dds",0xffffffff);
    local_4._0_1_ = 3;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_cc);
    local_4c[0] = local_cc[0];
    uStack_44 = uStack_c4;
    break;
  case 4:
    FUN_00401de0(local_12c,"ui/job_builder.dds",0xffffffff);
    local_4._0_1_ = 4;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_12c);
    local_4c[0] = local_12c[0];
    uStack_44 = uStack_124;
    break;
  case 5:
    FUN_00401de0(local_10c,"ui/job_crew.dds",0xffffffff);
    local_4._0_1_ = 5;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_10c);
    local_4c[0] = local_10c[0];
    uStack_44 = uStack_104;
    break;
  case 6:
    FUN_00401de0(local_ec,"ui/job_janitor.dds",0xffffffff);
    local_4._0_1_ = 6;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_ec);
    local_4c[0] = local_ec[0];
    uStack_44 = uStack_e4;
    break;
  case 7:
    FUN_00401de0(local_ac,"ui/job_scientist.dds",0xffffffff);
    local_4._0_1_ = 7;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_ac);
    local_4c[0] = local_ac[0];
    uStack_44 = uStack_a4;
    break;
  case 8:
    FUN_00401de0(local_6c,"ui/button_dummy.dds",0xffffffff);
    local_4._0_1_ = 8;
    (**(code **)(*(int *)param_1[0xe2] + 0x100))(local_6c);
    local_4c[0] = local_6c[0];
    uStack_44 = uStack_64;
    break;
  default:
    goto switchD_007e66ea_default;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
switchD_007e66ea_default:
  (**(code **)(*param_1 + 0x88))();
LAB_007e6a9d:
  param_1[0xe4] = *DAT_00f87b04;
  if (10 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007e6b00 @ 007e6b00 ////

void __thiscall FUN_007e6b00(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d2dc04;
  *(int *)((int)this + 0x14) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_007e6b40 @ 007e6b40 ////

void __fastcall FUN_007e6b40(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce1312;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d593f4;
  param_1[0x14] = &PTR_LAB_00d593dc;
  puVar2 = (undefined4 *)param_1[0xd6];
  local_4 = 3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xd1] + 4))();
    param_1[0xd6] = 0;
    (**(code **)param_1[0xd1])();
  }
  puVar2 = (undefined4 *)param_1[0xdc];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xd7] + 4))();
    param_1[0xdc] = 0;
    (**(code **)param_1[0xd7])();
  }
  puVar2 = (undefined4 *)param_1[0xe2];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xdd] + 4))();
    param_1[0xe2] = 0;
    (**(code **)param_1[0xdd])();
  }
  puVar2 = (undefined4 *)param_1[0xd6];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xd1] + 4))();
    param_1[0xd6] = 0;
    (**(code **)param_1[0xd1])();
  }
  param_1[0xdd] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xd7] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd1] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd6] = 0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007e6e30 @ 007e6e30 ////

/* WARNING: Removing unreachable block (ram,0x007e7625) */
/* WARNING: Removing unreachable block (ram,0x007e75a1) */

int * __thiscall FUN_007e6e30(void *this,undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  uint unaff_EBX;
  uint *unaff_ESI;
  uint *_Dest;
  uint uStack_f0;
  char *pcStack_ec;
  uint uStack_e8;
  undefined1 *puStack_e4;
  uint *puStack_bc;
  undefined4 uStack_b8;
  char *pcStack_b4;
  uint uStack_b0;
  undefined1 *puStack_ac;
  char *pcVar7;
  undefined1 *puVar8;
  uint local_78;
  void *local_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  char acStack_60 [4];
  uint uStack_5c;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [4];
  undefined4 uStack_3c;
  void *pvStack_34;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1458;
  pvStack_c = ExceptionList;
  local_78 = 0;
  ExceptionList = &pvStack_c;
  local_74 = this;
  FUN_007432f0(this);
  piVar5 = (int *)((int)this + 0x344);
  *(undefined ***)this = &PTR_FUN_00d593f4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d593dc;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(int **)((int)this + 0x350) = piVar5;
  *piVar5 = (int)&PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x358) = 0;
  piVar1 = (int *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(int **)((int)this + 0x368) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 **)((int)this + 0x380) = (undefined4 *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x374) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x388) = 0;
  local_4 = 3;
  FUN_0073e4e0(this,0x42800000);
  *(undefined4 **)((int)this + 0x398) = param_1;
  *(undefined4 *)((int)this + 0x38c) = 0;
  if (DAT_0104d8e8 == 0) {
    (*(code *)DAT_0104ea48[1])();
    DAT_0104ea5c = this;
    (*(code *)*DAT_0104ea48)();
  }
  *(undefined1 *)((int)this + 0x39c) = 1;
  pvVar3 = operator_new(0x420);
  if (pvVar3 == (void *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"HUDCARDBUTTONS_PREV",0x13);
    uStack_48 = 0x13;
    pcStack_4c[0x13] = '\0';
    uStack_6c = acStack_60;
    acStack_60[0] = '\0';
    uStack_68 = 0;
    puStack_64 = &DAT_00000014;
    _strncpy(uStack_6c,"button_left.",0xc);
    uStack_68 = 0xc;
    uStack_6c[0xc] = '\0';
    local_4 = 6;
    local_78 = 3;
    puStack_ac = (undefined1 *)0x7e6fc8;
    puVar4 = FUN_009b5030(apvStack_2c,&pcStack_4c);
    puStack_70 = &stack0xffffff68;
    local_4 = 7;
    local_78 = 7;
    puStack_ac = (undefined1 *)0x7e700d;
    param_1 = FUN_0069fb10(pvVar3,&uStack_6c,puVar4,0x41c00000,0x41c00000,0,0,0x3f800000,0x3f800000)
    ;
  }
  local_4 = 10;
  (**(code **)(*piVar5 + 4))();
  *(undefined4 **)((int)this + 0x358) = param_1;
  (**(code **)*piVar5)();
  if (((local_78 & 4) != 0) && (local_78 = local_78 & 0xfffffffb, 10 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  if (((local_78 & 2) != 0) && (local_78 = local_78 & 0xfffffffd, &DAT_00000014 < puStack_64)) {
                    /* WARNING: Subroutine does not return */
    _free(uStack_6c);
  }
  local_4 = 3;
  if (((local_78 & 1) != 0) && (local_78 = local_78 & 0xfffffffe, 0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  (**(code **)(**(int **)((int)this + 0x358) + 0x5c))();
  puVar8 = this;
  (**(code **)(**(int **)((int)this + 0x358) + 0x68))();
  pcVar7 = "HUDBUTTONS_LEFTBUTTON";
  puStack_ac = &LAB_007e6db0;
  uStack_b0 = 0;
  pcStack_b4 = (char *)0x7e70fb;
  (**(code **)(**(int **)((int)this + 0x358) + 0x18))();
  pcStack_b4 = "HUDBUTTONS_LEFTBUTTON_MOUSEOVER";
  uStack_b8 = 0;
  puStack_bc = (uint *)&LAB_005f37f0;
  (**(code **)(**(int **)((int)this + 0x358) + 0x18))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x358));
  pvVar3 = operator_new(0x420);
  pvStack_34 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    pcVar7 = &stack0xffffff68;
    puVar8 = &DAT_00000014;
    _strncpy(pcVar7,"HUDCARDBUTTONS_NEXT",0x13);
    pcVar7[0x13] = '\0';
    unaff_ESI = &local_78;
    uStack_b0 = uStack_b0 | 8;
    local_78 = local_78 & 0xffffff00;
    unaff_EBX = 0x14;
    _strncpy((char *)unaff_ESI,"button_right.",0xd);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_6c._1_1_ = 0;
    uStack_3c = 0xd;
    uStack_b0 = uStack_b0 | 0x10;
    puStack_e4 = (undefined1 *)0x7e71da;
    puVar4 = FUN_009b5030(&puStack_64,(undefined4 *)&stack0xffffff5c);
    uStack_b0 = uStack_b0 | 0x20;
    uStack_3c = 0xe;
    puStack_e4 = (undefined1 *)0x7e7220;
    puVar4 = FUN_0069fb10(pvVar3,(int *)&stack0xffffff7c,puVar4,0x41c00000,0x41c00000,0,0,0x3f800000
                          ,0x3f800000);
  }
  uStack_3c = 0x11;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x370) = puVar4;
  (**(code **)*piVar1)();
  if (((uStack_b0 & 0x20) != 0) && (uStack_b0 = uStack_b0 & 0xffffffdf, 10 < uStack_5c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_64);
  }
  if (((uStack_b0 & 0x10) != 0) && (uStack_b0 = uStack_b0 & 0xffffffef, 0x14 < unaff_EBX)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  uStack_3c = 3;
  if (((uStack_b0 & 8) != 0) && (uStack_b0 = uStack_b0 & 0xfffffff7, &DAT_00000014 < puVar8)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar7);
  }
  (**(code **)(**(int **)((int)this + 0x370) + 0x5c))();
  puVar8 = this;
  (**(code **)(**(int **)((int)this + 0x370) + 0x68))();
  pcVar7 = "HUDBUTTONS_RIGHTBUTTON";
  puStack_e4 = &LAB_007e6df0;
  uStack_e8 = 0;
  pcStack_ec = (char *)0x7e7306;
  (**(code **)(**(int **)((int)this + 0x370) + 0x18))();
  pcStack_ec = "HUDBUTTONS_RIGHTBUTTON_MOUSEOVER";
  uStack_f0 = 0;
  (**(code **)(**(int **)((int)this + 0x370) + 0x18))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x370));
  pvVar3 = operator_new(0x360);
  uStack_6c = pvVar3;
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puStack_bc = &uStack_b0;
    uStack_b0 = uStack_b0 & 0xffffff00;
    uStack_b8 = 0;
    pcStack_b4 = (char *)0x14;
    _strncpy((char *)puStack_bc,"ui/job_star.dds",0xf);
    uStack_b8 = 0xf;
    *(char *)((int)puStack_bc + 0xf) = '\0';
    uStack_e8 = uStack_e8 | 0x40;
    local_74 = (void *)CONCAT31(local_74._1_3_,0x13);
    puVar4 = FUN_0069d820(pvVar3,&puStack_bc,0,0,0x3f800000,0x3f800000);
  }
  local_74 = (void *)0x14;
  (**(code **)(*(int *)((int)this + 0x374) + 4))();
  *(undefined4 **)((int)this + 0x388) = puVar4;
  (*(code *)**(undefined4 **)((int)this + 0x374))();
  local_74 = (void *)0x3;
  if (((uStack_e8 & 0x40) != 0) && (uStack_e8 = uStack_e8 & 0xffffffbf, (char *)0x14 < pcStack_b4))
  {
                    /* WARNING: Subroutine does not return */
    _free(puStack_bc);
  }
  (**(code **)(**(int **)((int)this + 0x388) + 0x74))();
  pvVar3 = this;
  (**(code **)(**(int **)((int)this + 0x388) + 0x5c))();
  bVar2 = (byte)pvVar3;
  (**(code **)(**(int **)((int)this + 0x388) + 0x68))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x388));
  FUN_0073f640(this);
  pvVar3 = operator_new(0x360);
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    pcVar7 = &stack0xffffff30;
    puVar8 = &DAT_00000014;
    _strncpy(pcVar7,"ui/jobs_bg.dds",0xe);
    pcVar7[0xe] = '\0';
    bVar2 = bVar2 | 0x80;
    piVar5 = FUN_0069d820(pvVar3,(undefined4 *)&stack0xffffff24,0,0,0x3f800000,0x3f800000);
  }
  if (((char)bVar2 < '\0') && (&DAT_00000014 < puVar8)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar7);
  }
  (**(code **)(*piVar5 + 0x74))();
  (**(code **)(*piVar5 + 0x5c))(1);
  (**(code **)(*piVar5 + 0x68))(2,this,0xc1700000);
  FUN_0073f6e0(this,piVar5);
  _Dest = &uStack_f0;
  uStack_f0 = uStack_f0 & 0xffffff00;
  _strncpy((char *)_Dest,"interface",9);
  *(char *)((int)_Dest + 9) = '\0';
  pcStack_b4._0_1_ = 0x18;
  FUN_00558a50(DAT_00f88624,(undefined4 *)&stack0xffffff04,(undefined4 *)0x1);
  uStack_f0 = uStack_f0 & 0xffffff00;
  pcVar7 = _malloc(0x20);
  _strncpy(pcVar7,"hudcards_tickstillchange",0x18);
  pcVar7[0x18] = '\0';
  pcStack_b4 = (char *)CONCAT31(pcStack_b4._1_3_,0x19);
  uVar6 = FUN_00558750(DAT_00f88624,(undefined4 *)&stack0xffffff04,0x50);
  *(undefined4 *)((int)this + 0x394) = uVar6;
                    /* WARNING: Subroutine does not return */
  _free(pcVar7);
}


//// FUNCTION FUN_007e7650 @ 007e7650 ////

undefined4 * __thiscall FUN_007e7650(void *this,byte param_1)

{
  FUN_007e6b40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007e7690 @ 007e7690 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007e7690(int param_1)

{
  float fVar1;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x454) == 1) {
    fVar1 = DAT_0104cce4 - (DAT_0104cd04 + _DAT_00e52ca4 * *(float *)(param_1 + 0x44c));
    *(float *)(param_1 + 0x448) =
         (DAT_0104cce0 - (DAT_0104cd00 + _DAT_00e52ca4 * *(float *)(param_1 + 0x448))) +
         *(float *)(param_1 + 0x448);
    *(float *)(param_1 + 0x44c) = fVar1 + *(float *)(param_1 + 0x44c);
    local_14 = DAT_0104cd00 + _DAT_00e52ca4 * *(float *)(param_1 + 0x448);
    local_10 = _DAT_00e52ca4 * *(float *)(param_1 + 0x44c) + DAT_0104cd04;
    FUN_00554d30(&local_14);
    local_c = local_14;
    local_8 = local_10;
    local_4 = 0;
    FUN_009aba80(&local_c);
  }
  FUN_0053d3a0();
  return;
}


//// FUNCTION FUN_007e7780 @ 007e7780 ////

undefined1 __thiscall FUN_007e7780(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  
  puVar1 = param_1;
  uVar2 = FUN_0089e1f0(this,param_1);
  param_1 = (undefined1 *)0x0;
  cVar3 = (**(code **)(*(int *)((int)this + -0x50) + 0x34))(&DAT_0104cce0,&param_1);
  if (cVar3 != '\0') {
    *(undefined1 *)((int)this + 0x2d4) = 1;
    *(undefined1 *)((int)this + 0x2d5) = 1;
    *puVar1 = 1;
    return 1;
  }
  return uVar2;
}


//// FUNCTION FUN_007e77d0 @ 007e77d0 ////

bool __fastcall FUN_007e77d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007e5510();
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_007e5510();
  iVar1 = FUN_007e4fe0(iVar1);
  return *(int *)(param_1 + 0x118) != iVar1;
}


//// FUNCTION FUN_007e7800 @ 007e7800 ////

undefined4 * __thiscall FUN_007e7800(void *this,int param_1)

{
  void *this_00;
  void *unaff_ESI;
  undefined4 *this_01;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce147b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0x3d4);
  this_01 = (undefined4 *)0x0;
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    this_01 = FUN_009001a0(this_00,param_1,0);
  }
  local_4 = 0xffffffff;
  FUN_008ff560(this_01,this);
  (**(code **)(**(int **)((int)this + 0x118) + 0xc))(this_01,1);
  ExceptionList = unaff_ESI;
  return this_01;
}


//// FUNCTION FUN_007e7880 @ 007e7880 ////

undefined4 * __thiscall FUN_007e7880(void *this,int param_1)

{
  void *this_00;
  void *unaff_ESI;
  undefined4 *this_01;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce149b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0x3d4);
  this_01 = (undefined4 *)0x0;
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    this_01 = FUN_009001a0(this_00,param_1,2);
  }
  local_4 = 0xffffffff;
  FUN_008ff560(this_01,this);
  (**(code **)(**(int **)((int)this + 0x118) + 0xc))(this_01,1);
  ExceptionList = unaff_ESI;
  return this_01;
}


//// FUNCTION FUN_007e7910 @ 007e7910 ////

undefined1 __fastcall FUN_007e7910(int param_1)

{
  return *(undefined1 *)(param_1 + 0x458);
}


//// FUNCTION FUN_007e7930 @ 007e7930 ////

undefined1 __fastcall FUN_007e7930(int param_1)

{
  return *(undefined1 *)(param_1 + 0x444);
}


//// FUNCTION FUN_007e7940 @ 007e7940 ////

void __fastcall FUN_007e7940(int param_1)

{
  *(undefined1 *)(param_1 + 0x444) = 1;
  return;
}


//// FUNCTION FUN_007e7970 @ 007e7970 ////

void __cdecl FUN_007e7970(undefined1 param_1)

{
  DAT_0104ea65 = param_1;
  return;
}


//// FUNCTION FUN_007e79a0 @ 007e79a0 ////

int * __thiscall FUN_007e79a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007e7a30 @ 007e7a30 ////

int * __thiscall FUN_007e7a30(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007e7aa0 @ 007e7aa0 ////

void __fastcall FUN_007e7aa0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00423320(DAT_00f87b04);
  if ((iVar1 == 0) || (DAT_0104d8e8 != 0)) {
    FUN_005e6f20((undefined4 *)param_1[300]);
    FUN_0073fb40(param_1);
    if (param_1[0xea] != 0) {
      FUN_005eb5a0(param_1[0x123]);
      (**(code **)(*(int *)param_1[0xea] + 0x2c))();
    }
    if ((int *)param_1[0xfc] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007e7afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)param_1[0xfc] + 0x2c))();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_007e7b00 @ 007e7b00 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007e7b00(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar5 = FUN_00539330(param_1);
  if (iVar5 == 0) {
    return;
  }
  iVar5 = FUN_00539330(param_1);
  uVar6 = FUN_00902380(iVar5);
  iVar5 = FUN_00539330(param_1);
  uVar7 = FUN_009023c0(iVar5);
  iVar5 = FUN_00539330(param_1);
  iVar5 = FUN_00902130(iVar5);
  iVar8 = FUN_00423320(DAT_00f87b04);
  if ((iVar8 == 0) || (iVar8 == 4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  cVar4 = (**(code **)(*(int *)this + 0x120))();
  if (((cVar4 == '\0') && (bVar3)) && (_DAT_00e5f204 != 0.0)) {
    puVar2 = *(undefined4 **)((int)this + 0x3f0);
    if ((char)uVar6 == '\0') {
      if ((char)uVar7 == '\0') {
        if ((char)iVar5 == '\0') {
          if (puVar2 != (undefined4 *)0x0) {
            FUN_00401440(puVar2);
            FUN_007e79a0((void *)((int)this + 0x3dc),0);
          }
        }
        else {
          if (puVar2 != (undefined4 *)0x0) {
            if (puVar2[0xf1] == 2) goto LAB_007e7cdb;
            if (puVar2 != (undefined4 *)0x0) {
              FUN_00401440(puVar2);
              FUN_007e79a0((void *)((int)this + 0x3dc),0);
            }
          }
          iVar5 = (**(code **)(*(int *)this + 0x11c))(2);
          FUN_007e79a0((void *)((int)this + 0x3dc),iVar5);
        }
      }
      else {
        if (puVar2 != (undefined4 *)0x0) {
          if (puVar2[0xf1] == 0) goto LAB_007e7cdb;
          if (puVar2 != (undefined4 *)0x0) {
            FUN_00401440(puVar2);
            FUN_007e79a0((void *)((int)this + 0x3dc),0);
          }
        }
        iVar5 = (**(code **)(*(int *)this + 0x11c))(0);
        FUN_007e79a0((void *)((int)this + 0x3dc),iVar5);
      }
    }
    else {
      if (puVar2 != (undefined4 *)0x0) {
        if (puVar2[0xf1] == 1) goto LAB_007e7cdb;
        if (puVar2 != (undefined4 *)0x0) {
          FUN_00401440(puVar2);
          FUN_007e79a0((void *)((int)this + 0x3dc),0);
        }
      }
      iVar5 = (**(code **)(*(int *)this + 0x11c))(1);
      FUN_007e79a0((void *)((int)this + 0x3dc),iVar5);
    }
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 0x3f0);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(*(int *)((int)this + 0x3dc) + 4))();
      *(undefined4 *)((int)this + 0x3f0) = 0;
      (*(code *)**(undefined4 **)((int)this + 0x3dc))();
    }
  }
LAB_007e7cdb:
  if (*(void **)((int)this + 0x3f0) == (void *)0x0) {
    return;
  }
  FUN_008ff560(*(void **)((int)this + 0x3f0),this);
                    /* WARNING: Could not recover jumptable at 0x007e7d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x3f0) + 0x50))();
  return;
}


//// FUNCTION FUN_007e7d10 @ 007e7d10 ////

void __fastcall FUN_007e7d10(int *param_1)

{
  FUN_00881c00((void *)param_1[0xd6],"hud_star",param_1[0x10a]);
  (**(code **)(*param_1 + 0x74))(DAT_00e5bd38,DAT_00e5bd34);
  *(undefined1 *)(param_1 + 0x116) = 1;
  return;
}


//// FUNCTION FUN_007e7d50 @ 007e7d50 ////

void __fastcall FUN_007e7d50(int *param_1)

{
  if ((char)param_1[0x116] != '\0') {
    FUN_00881c00((void *)param_1[0xd6],"hud_star",param_1[0x10b]);
    (**(code **)(*param_1 + 0x74))(DAT_00e5bd38,DAT_00e5bd34 * 0.4);
    *(undefined1 *)(param_1 + 0x116) = 0;
  }
  return;
}


//// FUNCTION FUN_007e7dc0 @ 007e7dc0 ////

void __fastcall FUN_007e7dc0(int *param_1)

{
  if ((char)param_1[0x116] == '\0') {
    FUN_00881b40((void *)param_1[0xd6],"hud_star",param_1[0x10c]);
    (**(code **)(*param_1 + 0x74))(DAT_00e5bd38,DAT_00e5bd34);
    *(undefined1 *)(param_1 + 0x116) = 1;
  }
  return;
}


//// FUNCTION FUN_007e7e10 @ 007e7e10 ////

void __fastcall FUN_007e7e10(int *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 uVar4;
  
  iVar1 = FUN_008819d0((void *)param_1[0xd6],"hud_star");
  FUN_00888870(*(int *)(iVar1 + 0x164));
  if ((char)param_1[0x116] != '\0') {
    uVar3 = param_1[0x10d];
    pvVar2 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
    FUN_008887b0(pvVar2,uVar3);
    FUN_00881b40((void *)param_1[0xd6],"hud_star",param_1[0x10d]);
    uVar4 = 7;
    uVar3 = 0x13;
    pvVar2 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
    FUN_0088fd50(pvVar2,uVar3,uVar4);
    (**(code **)(*param_1 + 0x74))(DAT_00e5bd38,DAT_00e5bd34 * 0.4);
    *(undefined1 *)(param_1 + 0x116) = 0;
  }
  return;
}


//// FUNCTION FUN_007e7ec0 @ 007e7ec0 ////

void __thiscall FUN_007e7ec0(void *this,int param_1)

{
  if ((*(char *)((int)this + 0x444) != '\0') && ((param_1 == 0 || (DAT_0104d524 != param_1)))) {
    *(undefined1 *)((int)this + 0x444) = 0;
  }
  return;
}


//// FUNCTION FUN_007e7ef0 @ 007e7ef0 ////

void __fastcall FUN_007e7ef0(int *param_1)

{
  int iVar1;
  int *local_4;
  
  local_4 = param_1;
  (**(code **)(*param_1 + 0x124))(&local_4);
  FUN_005e7160((undefined4 *)param_1[300]);
  iVar1 = FUN_005e6d60(param_1[300]);
  param_1[0x105] = iVar1;
  return;
}


//// FUNCTION FUN_007e7f30 @ 007e7f30 ////

void __fastcall FUN_007e7f30(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  void *this;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 local_28 [8];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce14b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = FUN_00881aa0(*(void **)(param_1 + 0x358),"star_rank");
  if (bVar1) {
    uStack_20 = 0x7e7f72;
    uVar2 = FUN_00883180(*(void **)(param_1 + 0x358),"star_rank","hide");
    if ((char)uVar2 != '\0') {
      puVar3 = local_28;
      local_28[0] = 0;
      uVar2 = 0;
      uVar4 = 0x14;
      FUN_004015d0(&stack0xffffffcc,"hide",4);
      local_4 = 0xffffffff;
      this = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"star_rank");
      uVar4 = FUN_0088a2b0(this,puVar3,uVar2,uVar4);
      uStack_20 = 0x7e7fd1;
      FUN_00881b40(*(void **)(param_1 + 0x358),"star_rank",uVar4);
    }
  }
  if (*(int **)(param_1 + 0x3a8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3a8) + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x4aa) = 1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007e8000 @ 007e8000 ////

void __fastcall FUN_007e8000(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  void *this;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 local_28 [8];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce14d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = FUN_00881aa0(*(void **)(param_1 + 0x358),"star_rank");
  if (bVar1) {
    uStack_20 = 0x7e8046;
    uVar2 = FUN_00883180(*(void **)(param_1 + 0x358),"star_rank","start");
    if ((char)uVar2 != '\0') {
      if ((*(char *)(param_1 + 0x4aa) == '\0') &&
         (iVar3 = FUN_008819d0(*(void **)(param_1 + 0x358),"star_rank"),
         *(int *)(iVar3 + 0x260) < 0x1a9)) {
        ExceptionList = local_c;
        return;
      }
      puVar4 = local_28;
      local_28[0] = 0;
      uVar2 = 0;
      uVar5 = 0x14;
      FUN_004015d0(&stack0xffffffcc,"start",5);
      local_4 = 0xffffffff;
      this = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"star_rank");
      uVar5 = FUN_0088a2b0(this,puVar4,uVar2,uVar5);
      uStack_20 = 0x7e80cf;
      FUN_00881c00(*(void **)(param_1 + 0x358),"star_rank",uVar5);
      if (*(int **)(param_1 + 0x3a8) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x3a8) + 0x20))();
      }
      *(undefined1 *)(param_1 + 0x4aa) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007e8100 @ 007e8100 ////

void __fastcall FUN_007e8100(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  void *this;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 local_28 [8];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce14f8;
  local_c = ExceptionList;
  if (DAT_00e5b97c == '\0') {
    *(undefined1 *)(param_1 + 0x4a9) = 1;
  }
  else {
    if ((*(char *)(param_1 + 0x4aa) != '\0') ||
       (ExceptionList = &local_c, *(char *)(param_1 + 0x4a9) == '\0')) {
      ExceptionList = &local_c;
      FUN_007e8000(param_1);
      *(undefined1 *)(param_1 + 0x4a9) = 1;
    }
    bVar1 = FUN_00881aa0(*(void **)(param_1 + 0x358),"star_rank");
    if (bVar1) {
      uStack_20 = 0x7e8175;
      uVar2 = FUN_00883180(*(void **)(param_1 + 0x358),"star_rank","change");
      if ((char)uVar2 != '\0') {
        puVar3 = local_28;
        local_28[0] = 0;
        uVar2 = 0;
        uVar4 = 0x14;
        FUN_004015d0(&stack0xffffffcc,"change",6);
        local_4 = 0xffffffff;
        this = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"star_rank");
        uVar4 = FUN_0088a2b0(this,puVar3,uVar2,uVar4);
        uStack_20 = 0x7e81d4;
        FUN_00881b40(*(void **)(param_1 + 0x358),"star_rank",uVar4);
        ExceptionList = local_c;
        return;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION WHudIcon_Tick @ 007e8200 ////

void __fastcall WHudIcon_Tick(int *param_1)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  if ((int *)param_1[0xea] != (int *)0x0) {
    if ((DAT_00e5b97c == '\0') || (*(char *)((int)param_1 + 0x4a9) == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((char)param_1[0x12a] != '\0') {
      (**(code **)(*(int *)param_1[0xea] + 0x20))(0);
      iVar4 = FUN_008819d0((void *)param_1[0xd6],"hud_star");
      if ((*(int *)(iVar4 + 0x260) == param_1[0x10b]) || (*(int *)(iVar4 + 0x260) == 7)) {
        *(undefined1 *)(param_1 + 0x12a) = 0;
      }
      else {
        bVar3 = false;
      }
    }
    FUN_008819d0((void *)param_1[0xd6],"star_rank");
    if (bVar3) {
      if ((*(char *)((int)param_1 + 0x4aa) != '\0') ||
         ((bVar3 = FUN_00881aa0((void *)param_1[0xd6],"star_rank"), bVar3 &&
          (iVar4 = FUN_008819d0((void *)param_1[0xd6],"star_rank"), 0x1a8 < *(int *)(iVar4 + 0x260))
          ))) {
        FUN_007e8000((int)param_1);
        WWindow_Tick(param_1);
        FUN_0053d480((int)param_1);
        return;
      }
      iVar4 = FUN_008819d0((void *)param_1[0xd6],"star_rank");
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x260) < 0x18)) {
        piVar2 = (int *)param_1[0xf0];
        fVar1 = (float)piVar2[0x27];
        param_1[0x11c] = (int)((float)piVar2[0x30] - (float)param_1[0x30]);
        param_1[0x11d] = (int)(fVar1 - (float)param_1[0x27]);
        fVar5 = (float10)(**(code **)(*piVar2 + 0x10))();
        param_1[0x11c] =
             (int)(float)((fVar5 * (float10)0.5 - (float10)1.0) + (float10)(float)param_1[0x11c]);
        fVar5 = (float10)(**(code **)(*(int *)param_1[0xf0] + 0x14))();
        param_1[0x11d] =
             (int)(float)(fVar5 * (float10)0.5 + (float10)(float)param_1[0x11d] + (float10)1.0);
        if (DAT_0104d8e8 != 0) {
          param_1[0x11c] = (int)((float)param_1[0x11c] + 2.0);
        }
        if (param_1[0x117] < 10) {
          if (*(char *)((int)param_1 + 0x4ab) == '\0') {
            uVar6 = 0xc0400000;
            param_1[0x11c] = (int)((float)param_1[0x11c] + 3.0);
          }
          else {
            uVar6 = 0xc0000000;
            param_1[0x11c] = (int)((float)param_1[0x11c] + 2.0);
          }
        }
        else {
          uVar6 = 0;
        }
        FUN_005eb3b0((void *)param_1[0x123],uVar6);
        iVar4 = *(int *)param_1[0xea];
        fVar5 = (float10)(**(code **)(iVar4 + 0x10))();
        (**(code **)(iVar4 + 0x5c))
                  (1,param_1,(float)((float10)(float)param_1[0x11c] - fVar5 * (float10)0.5));
        iVar4 = *(int *)param_1[0xea];
        fVar5 = (float10)(**(code **)(iVar4 + 0x14))();
        (**(code **)(iVar4 + 100))
                  (1,param_1,(float)((float10)(float)param_1[0x11d] - fVar5 * (float10)0.5));
        (**(code **)(*(int *)param_1[0xea] + 0x88))(0);
      }
    }
    else if (*(char *)((int)param_1 + 0x4aa) == '\0') {
      FUN_007e7f30((int)param_1);
      WWindow_Tick(param_1);
      FUN_0053d480((int)param_1);
      return;
    }
  }
  WWindow_Tick(param_1);
  FUN_0053d480((int)param_1);
  return;
}


//// FUNCTION FUN_007e8900 @ 007e8900 ////

bool __fastcall FUN_007e8900(int *param_1)

{
  wchar_t *pwVar1;
  wchar_t *_Format;
  uint uVar2;
  size_t sVar3;
  float *pfVar4;
  void *unaff_EBX;
  float10 fVar5;
  undefined4 uVar6;
  char acStack_c0 [7];
  undefined1 uStack_b9;
  undefined2 *puStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined2 auStack_a0 [10];
  wchar_t awStack_8c [60];
  undefined1 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1526;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  _Format = (wchar_t *)(**(code **)(*param_1 + 0x10c))();
  pwVar1 = (wchar_t *)param_1[0x117];
  if ((param_1[0xea] == 0) || ((int)_Format < 1)) goto LAB_007e8bb8;
  puStack_ac = auStack_a0;
  auStack_a0[0] = 0;
  uStack_a8 = 0;
  uStack_a4 = 10;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&puStack_ac,(wchar_t *)&lpCaption_00d16918,uVar2);
  uStack_4 = 0;
  sVar3 = _swprintf(awStack_8c,0xd18f7c,_Format);
  FUN_0040cae0(&puStack_ac,awStack_8c,sVar3);
  acStack_c0[0] = '\0';
  _strncpy(acStack_c0,"default",7);
  uStack_b9 = 0;
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  (**(code **)(*(int *)param_1[0xea] + 0xfc))();
  uStack_14 = 0;
  if (&DAT_00000014 < &stack0xffffff18) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  (**(code **)(*(int *)param_1[0xea] + 0x54))();
  fVar5 = (float10)(**(code **)(*(int *)param_1[0xea] + 0x14))();
  if ((float10)0.0 == fVar5) {
    FUN_00566700(*(void **)(param_1[0xea] + 0x348),(undefined4 *)&stack0xffffff18);
  }
  else {
    (**(code **)(*(int *)param_1[0xea] + 0x14))();
  }
  (**(code **)(*(int *)param_1[0xea] + 100))(1,param_1);
  (**(code **)(*(int *)param_1[0xea] + 0x8c))(0);
  (**(code **)(*(int *)param_1[0xea] + 0x88))(0);
  if ((int)_Format < 10) {
    if (*(float *)(param_1[0x123] + 0xb4) == 0.0) {
      uVar6 = 0xc0400000;
      param_1[0x11c] = (int)((float)param_1[0x11c] + 2.0);
      goto LAB_007e8b10;
    }
  }
  else {
    uVar6 = 0;
LAB_007e8b10:
    FUN_005eb3b0((void *)param_1[0x123],uVar6);
  }
  fVar5 = (float10)(**(code **)(*(int *)param_1[0xea] + 0x10))();
  if ((float10)0.0 == fVar5) {
    pfVar4 = (float *)FUN_00566700(*(void **)(param_1[0xea] + 0x348),(undefined4 *)&stack0xffffff04)
    ;
    fVar5 = (float10)*pfVar4;
  }
  else {
    fVar5 = (float10)(**(code **)(*(int *)param_1[0xea] + 0x10))();
  }
  (**(code **)(*(int *)param_1[0xea] + 0x5c))
            (1,param_1,(float)((float10)(float)param_1[0x11c] - fVar5 * (float10)0.5));
  *(undefined4 *)(param_1[0xea] + 0x350) = 0xff000000;
  (**(code **)(*(int *)param_1[0xea] + 0x50))(1);
  if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_ac);
  }
LAB_007e8bb8:
  param_1[0x117] = (int)_Format;
  ExceptionList = pvStack_c;
  return _Format != pwVar1;
}


//// FUNCTION FUN_007e8be0 @ 007e8be0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007e8be0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  char local_34 [8];
  undefined4 uStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce153b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  iVar1 = FUN_00880cb0("starrating_small",param_1);
  *(int *)(param_1 + 0x4ac) = iVar1;
  pvVar2 = operator_new(0x34);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    uStack_2c = 0x7e8c5d;
    piVar3 = FUN_005e7240(pvVar2,*(int *)(param_1 + 0x4ac),param_1,0);
  }
  *(int **)(param_1 + 0x4b0) = piVar3;
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x4ac) != 0) {
    pcVar4 = local_34;
    local_34[0] = '\0';
    uVar5 = 0;
    uVar6 = 0x14;
    FUN_004015d0(&stack0xffffffc0,"star_stars",10);
    FUN_00882830(*(void **)(param_1 + 0x358),pcVar4,uVar5,uVar6);
    pvVar2 = (void *)FUN_008819d0(*(void **)(param_1 + 0x4ac),"fg");
    if (pvVar2 != (void *)0x0) {
      *(undefined4 *)(param_1 + 0x410) = 0x10e;
      FUN_008887b0(pvVar2,5);
    }
  }
  FUN_007e7f30(param_1);
  FUN_0043b4d0((undefined4 *)(param_1 + 0x418),1);
  *(undefined4 *)(param_1 + 0x418) = 5;
  _DAT_0104ea60 = _DAT_0104ea60 + 1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007e8d80 @ 007e8d80 ////

void __fastcall FUN_007e8d80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d59628;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_007e8e20 @ 007e8e20 ////

void __fastcall FUN_007e8e20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d59638;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION MoodHUDCard_Constructor @ 007e8e70 ////

/* WARNING: Removing unreachable block (ram,0x007e9074) */

undefined4 * __thiscall MoodHUDCard_Constructor(void *this,undefined4 param_1)

{
  int iVar1;
  char local_20 [16];
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce15d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0089ea20(this);
  *(undefined ***)this = &PTR_FUN_00d59674;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d5965c;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 **)((int)this + 0x3a0) = (undefined4 *)((int)this + 0x394);
  *(undefined4 *)((int)this + 0x394) = &PTR_FUN_00d341fc;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 **)((int)this + 0x3b8) = (undefined4 *)((int)this + 0x3ac);
  *(undefined4 *)((int)this + 0x3ac) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 **)((int)this + 0x3d0) = (undefined4 *)((int)this + 0x3c4);
  *(undefined4 *)((int)this + 0x3c4) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 **)((int)this + 1000) = (undefined4 *)((int)this + 0x3dc);
  *(undefined4 *)((int)this + 0x3dc) = &PTR_LAB_00d59628;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 **)((int)this + 0x400) = (undefined4 *)((int)this + 0x3f4);
  *(undefined4 *)((int)this + 0x3f4) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x408) = 0;
  local_4._0_1_ = 5;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x40c) = param_1;
  FUN_0043b460((undefined4 *)((int)this + 0x418));
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  FUN_009aba60((undefined1 *)((int)this + 0x450));
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined1 *)((int)this + 0x458) = 0;
  *(undefined1 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 **)((int)this + 0x484) = (undefined4 *)((int)this + 0x478);
  *(undefined4 *)((int)this + 0x478) = &PTR_LAB_00d59638;
  *(undefined4 *)((int)this + 0x48c) = 0;
  *(undefined4 *)((int)this + 0x49c) = 0;
  *(undefined4 *)((int)this + 0x494) = 0;
  *(undefined4 *)((int)this + 0x498) = 0;
  *(undefined4 **)((int)this + 0x49c) = (undefined4 *)((int)this + 0x490);
  *(undefined4 *)((int)this + 0x490) = &PTR_LAB_00d2d80c;
  *(undefined4 *)((int)this + 0x4a4) = 0;
  local_4._0_1_ = 8;
  *(undefined1 *)((int)this + 0x4a8) = 1;
  *(undefined1 *)((int)this + 0x4a9) = 0;
  *(undefined1 *)((int)this + 0x4aa) = 1;
  *(undefined1 *)((int)this + 0x4ab) = 0;
  *(undefined4 *)((int)this + 0x4ac) = 0;
  *(undefined1 *)((int)this + 0x444) = 0;
  *(undefined1 *)((int)this + 0x445) = 0;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffff7 | 2;
  iVar1 = FUN_005389b0();
  *(int *)((int)this + 0x468) = iVar1;
  local_20[0] = '\0';
  _strncpy(local_20,"hudcard_showmood",0x10);
  local_10 = 0;
  local_4 = CONCAT31(local_4._1_3_,9);
  CVarSystem_Register_STUBBED();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007e90c0 @ 007e90c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007e90c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce1658;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d59674;
  param_1[0x14] = &PTR_LAB_00d5965c;
  puVar1 = (undefined4 *)param_1[0xfc];
  local_4 = 8;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = puVar1 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(param_1[0xf7] + 4))();
    param_1[0xfc] = 0;
    (**(code **)param_1[0xf7])();
  }
  puVar1 = (undefined4 *)param_1[0x129];
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = puVar1 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(param_1[0x124] + 4))();
    param_1[0x129] = 0;
    (**(code **)param_1[0x124])();
  }
  if (param_1[0xea] != 0) {
    FUN_0071b2a0();
    FUN_0071b530(((int *)param_1[0xea])[0x46],(int *)param_1[0xea]);
  }
  puVar1 = (undefined4 *)param_1[0x123];
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = puVar1 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(param_1[0x11e] + 4))();
    param_1[0x123] = 0;
    (**(code **)param_1[0x11e])();
  }
  piVar2 = (int *)param_1[300];
  if (piVar2 != (int *)0x0) {
    FUN_005e7000(piVar2);
                    /* WARNING: Subroutine does not return */
    _free(piVar2);
  }
  _DAT_0104ea60 = _DAT_0104ea60 + -1;
  puVar1 = (undefined4 *)param_1[299];
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[0x6a] == 0) {
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = puVar1 + 0x12;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar1)(1);
        }
        param_1[299] = 0;
      }
    }
    else {
      FUN_00874f90(puVar1[0x6a]);
    }
  }
  param_1[0x124] = &PTR_LAB_00d2d80c;
  if ((undefined4 *)param_1[0x126] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x126] = param_1[0x125];
  }
  if (param_1[0x125] != 0) {
    *(undefined4 *)(param_1[0x125] + 4) = param_1[0x126];
  }
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x129] = 0;
  if ((undefined4 *)param_1[0x126] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x126] = param_1[0x125];
  }
  if (param_1[0x125] != 0) {
    *(undefined4 *)(param_1[0x125] + 4) = param_1[0x126];
  }
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x11e] = &PTR_LAB_00d59638;
  if ((undefined4 *)param_1[0x120] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x120] = param_1[0x11f];
  }
  if (param_1[0x11f] != 0) {
    *(undefined4 *)(param_1[0x11f] + 4) = param_1[0x120];
  }
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x123] = 0;
  if ((undefined4 *)param_1[0x120] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x120] = param_1[0x11f];
  }
  if (param_1[0x11f] != 0) {
    *(undefined4 *)(param_1[0x11f] + 4) = param_1[0x120];
  }
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_009abe50((char *)(param_1 + 0x114));
  param_1[0xfd] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0xff] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xff] = param_1[0xfe];
  }
  if (param_1[0xfe] != 0) {
    *(undefined4 *)(param_1[0xfe] + 4) = param_1[0xff];
  }
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x102] = 0;
  if ((undefined4 *)param_1[0xff] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xff] = param_1[0xfe];
  }
  if (param_1[0xfe] != 0) {
    *(undefined4 *)(param_1[0xfe] + 4) = param_1[0xff];
  }
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0xf7] = &PTR_LAB_00d59628;
  if ((undefined4 *)param_1[0xf9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf9] = param_1[0xf8];
  }
  if (param_1[0xf8] != 0) {
    *(undefined4 *)(param_1[0xf8] + 4) = param_1[0xf9];
  }
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfc] = 0;
  if ((undefined4 *)param_1[0xf9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf9] = param_1[0xf8];
  }
  if (param_1[0xf8] != 0) {
    *(undefined4 *)(param_1[0xf8] + 4) = param_1[0xf9];
  }
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xf1] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xf3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf3] = param_1[0xf2];
  }
  if (param_1[0xf2] != 0) {
    *(undefined4 *)(param_1[0xf2] + 4) = param_1[0xf3];
  }
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf6] = 0;
  if ((undefined4 *)param_1[0xf3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf3] = param_1[0xf2];
  }
  if (param_1[0xf2] != 0) {
    *(undefined4 *)(param_1[0xf2] + 4) = param_1[0xf3];
  }
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xeb] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xed] = param_1[0xec];
  }
  if (param_1[0xec] != 0) {
    *(undefined4 *)(param_1[0xec] + 4) = param_1[0xed];
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xf0] = 0;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xed] = param_1[0xec];
  }
  if (param_1[0xec] != 0) {
    *(undefined4 *)(param_1[0xec] + 4) = param_1[0xed];
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xe5] = &PTR_FUN_00d341fc;
  if ((undefined4 *)param_1[0xe7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe7] = param_1[0xe6];
  }
  if (param_1[0xe6] != 0) {
    *(undefined4 *)(param_1[0xe6] + 4) = param_1[0xe7];
  }
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xea] = 0;
  if ((undefined4 *)param_1[0xe7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe7] = param_1[0xe6];
  }
  if (param_1[0xe6] != 0) {
    *(undefined4 *)(param_1[0xe6] + 4) = param_1[0xe7];
  }
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  local_4 = 0xffffffff;
  FUN_0089eb00(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007e9550 @ 007e9550 ////

void __thiscall FUN_007e9550(void *this,char param_1)

{
  if (param_1 == '\0') {
    FUN_007e7f30((int)this);
  }
  *(char *)((int)this + 0x4a9) = param_1;
  return;
}


//// FUNCTION FUN_007e9570 @ 007e9570 ////

undefined4 * __thiscall FUN_007e9570(void *this,byte param_1)

{
  FUN_007e90c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007e95a0 @ 007e95a0 ////

undefined4 __fastcall FUN_007e95a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c8);
}


//// FUNCTION FUN_007e9620 @ 007e9620 ////

void __fastcall FUN_007e9620(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = FUN_00539330(*(int **)(param_1 + 0x4c8));
  if (iVar1 != 0) {
    iVar1 = 3;
    this = (void *)FUN_00539330(*(int **)(param_1 + 0x4c8));
    FUN_009021d0(this,iVar1);
  }
  return;
}


//// FUNCTION FUN_007e9650 @ 007e9650 ////

void __fastcall FUN_007e9650(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puStack_1c;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = param_1[0x13f];
  if (iVar3 < 1) {
    param_1[0x13f] = iVar3 + 1;
  }
  else if (iVar3 == 1) {
    puStack_1c = (undefined4 *)0x7e9673;
    FUN_007e7e10(param_1);
  }
  local_10 = param_1[0x30];
  local_c = param_1[0x27];
  local_8 = param_1[0x42];
  local_4 = param_1[0x39];
  local_14 = 0;
  puStack_1c = (undefined4 *)0x7e96a8;
  piVar2 = (int *)FUN_007ea7b0();
  puStack_1c = &local_14;
  cVar1 = (**(code **)(*piVar2 + 0x34))(&local_10);
  if (cVar1 != '\0') {
    puStack_1c = (undefined4 *)0x0;
    piVar2 = (int *)FUN_007ea7b0();
    cVar1 = (**(code **)(*piVar2 + 0x34))(&local_10,&puStack_1c);
    if (cVar1 != '\0') goto LAB_007e96ec;
  }
  iVar3 = FUN_007ea7b0();
  if (param_1[0x46] != iVar3) {
    return;
  }
LAB_007e96ec:
  FUN_007e7aa0(param_1);
  return;
}


//// FUNCTION FUN_007e9740 @ 007e9740 ////

void __fastcall FUN_007e9740(int param_1)

{
  void *this;
  undefined4 *puVar1;
  char **ppcVar2;
  undefined4 local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1678;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"Lot",3);
  local_28 = 3;
  local_2c[3] = '\0';
  ppcVar2 = &local_2c;
  puVar1 = &local_34;
  local_4 = 0;
  this = (void *)FUN_00577370(*(int *)(param_1 + 0x4c8));
  FUN_00441750(this,puVar1,ppcVar2);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_30 = &stack0xffffffbc;
  (**(code **)(**(int **)(param_1 + 0x4f8) + 0x10c))();
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_007e9810 @ 007e9810 ////

void __fastcall FUN_007e9810(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint unaff_EBP;
  void *unaff_EDI;
  void **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20 [2];
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce16a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
  if (iVar1 != 0) {
    iVar1 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
    piVar2 = (int *)FUN_00401c30(iVar1);
    iVar1 = FUN_00ace790(piVar2,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                         &TM::DesireWaterGrass::RTTI_Type_Descriptor,0);
    iVar3 = FUN_00ace790(piVar2,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                         &TM::DesireTaskJanitor::RTTI_Type_Descriptor,0);
    if ((iVar3 != 0) || (iVar1 != 0)) {
      local_2c = local_20;
      local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
      local_28 = 0;
      local_24 = 0x20;
      local_2c = _malloc(0x20);
      _strncpy((char *)local_2c,"ui/activity_busy.dds",0x14);
      *(char *)(local_2c + 5) = '\0';
      local_4 = 0;
      goto LAB_007e9910;
    }
  }
  local_2c = local_20;
  local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy((char *)local_2c,"ui/activity_idle.dds",0x14);
  *(char *)(local_2c + 5) = '\0';
  local_4 = 1;
LAB_007e9910:
  local_28 = 0x14;
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_2c);
  uStack_18 = 0xffffffff;
  if (0x14 < unaff_EBP) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  FUN_0069ce60(*(void **)(param_1 + 0x4e0),0xffffffff);
  ExceptionList = local_20[0];
  return;
}


//// FUNCTION FUN_007e9990 @ 007e9990 ////

void __fastcall FUN_007e9990(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint **ppuVar7;
  uint **local_60;
  uint local_5c;
  undefined1 *puStack_58;
  uint *puStack_54;
  undefined4 uStack_50;
  void **ppvStack_4c;
  uint uStack_48;
  uint uStack_44;
  void *apvStack_40 [2];
  uint uStack_38;
  void **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20 [2];
  undefined1 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1747;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_5c = 0;
  local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy((char *)local_2c,"iconpanel2",10);
  local_28 = 10;
  *(char *)((int)local_2c + 10) = '\0';
  local_4 = 0;
  FUN_0089e070(param_1,&local_2c,1,0,'\x01');
  local_60 = (uint **)&stack0xffffff70;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Opening",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  local_60 = (uint **)&stack0xffffff70;
  param_1[0x10c] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Open",4);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  local_60 = (uint **)&stack0xffffff70;
  param_1[0x10a] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Closing",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  local_60 = (uint **)&stack0xffffff70;
  param_1[0x10d] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Closed",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  local_60 = (uint **)&stack0xffffff70;
  param_1[0x10b] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Pickup",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  local_60 = (uint **)&stack0xffffff70;
  param_1[0x10e] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"highlight",9);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  local_60 = (uint **)&stack0xffffff70;
  param_1[0x10f] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"normal",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x110] = iVar2;
  local_60 = operator_new(0x4dc);
  local_4._0_1_ = 8;
  if (local_60 == (uint **)0x0) {
    local_60 = (uint **)0x0;
  }
  else {
    local_60 = (uint **)FUN_007ac880(local_60,1,0,0,0);
  }
  local_4._0_1_ = 0;
  (**(code **)(param_1[0x139] + 4))();
  param_1[0x13e] = (int)local_60;
  (**(code **)param_1[0x139])();
  if (param_1[0x13e] != 0) {
    puStack_54 = (uint *)0x0;
    uStack_50 = 0;
    FUN_00882710(*(void **)(param_1[0x13e] + 0x358),(float *)&puStack_54);
    (**(code **)(*(int *)param_1[0x13e] + 0x74))();
    FUN_0089e5f0((void *)param_1[0x13e],'\x01');
    puStack_54 = &uStack_48;
    uStack_48 = uStack_48 & 0xffffff00;
    uStack_50 = 0;
    ppvStack_4c = (void **)0x14;
    _strncpy((char *)puStack_54,"Lot",3);
    uStack_50 = 3;
    *(char *)((int)puStack_54 + 3) = '\0';
    ppuVar7 = &puStack_54;
    puVar6 = (undefined4 *)&stack0xffffff98;
    pvStack_c._0_1_ = 9;
    pvVar1 = (void *)FUN_00577370(param_1[0x132]);
    FUN_00441750(pvVar1,puVar6,ppuVar7);
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    if ((void **)0x14 < ppvStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_54);
    }
    local_60 = (uint **)&stack0xffffff80;
    (**(code **)(*(int *)param_1[0x13e] + 0x10c))();
    ppvStack_4c = apvStack_40;
    apvStack_40[0] = (void *)((uint)apvStack_40[0] & 0xffffff00);
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy((char *)ppvStack_4c,"star_mood",9);
    uStack_48 = 9;
    *(char *)((int)ppvStack_4c + 9) = '\0';
    local_4._0_1_ = 10;
    FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x13e],&ppvStack_4c,1,0,
                 (undefined1 *)0x0);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(ppvStack_4c);
    }
    puStack_58 = &stack0xffffff70;
    puVar3 = &stack0xffffff7c;
    uVar4 = 0;
    uVar5 = 0x14;
    FUN_004015d0(&stack0xffffff70,"showmood",8);
    local_4._0_1_ = 0;
    pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_info");
    uVar5 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
    FUN_00881b40((void *)param_1[0xd6],"star_info",uVar5);
  }
  FUN_007e8be0((int)param_1);
  FUN_007e9550(param_1,'\0');
  FUN_007e7e10(param_1);
  FUN_007e9740((int)param_1);
  pvVar1 = operator_new(0x360);
  puStack_58 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    local_60 = (uint **)0x0;
  }
  else {
    ppvStack_4c = apvStack_40;
    apvStack_40[0] = (void *)((uint)apvStack_40[0] & 0xffffff00);
    uStack_48 = 0;
    uStack_44 = 0x20;
    ppvStack_4c = _malloc(0x20);
    _strncpy((char *)ppvStack_4c,"ui/activity_busyfilm.dds",0x18);
    uStack_48 = 0x18;
    *(char *)(ppvStack_4c + 6) = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xd);
    local_5c = 1;
    local_60 = (uint **)&stack0xffffff80;
    local_60 = (uint **)FUN_0069d820(pvVar1,&ppvStack_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xe;
  (**(code **)(param_1[0x133] + 4))();
  param_1[0x138] = (int)local_60;
  (**(code **)param_1[0x133])();
  local_4 = 0;
  if (((local_5c & 1) != 0) && (0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_4c);
  }
  ppvStack_4c = apvStack_40;
  apvStack_40[0] = (void *)((uint)apvStack_40[0] & 0xffffff00);
  uStack_48 = 0;
  uStack_44 = 0x14;
  _strncpy((char *)ppvStack_4c,"",0);
  uStack_48 = 0;
  *(char *)ppvStack_4c = '\0';
  puStack_58 = &stack0xffffff80;
  local_4 = CONCAT31(local_4._1_3_,0xf);
  (**(code **)(*(int *)param_1[0x138] + 0x100))();
  uStack_18 = 0;
  if (&DAT_00000014 < puStack_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  FUN_0069ce60((void *)param_1[0x138],0xffffff);
  local_60 = &puStack_54;
  puStack_54 = (uint *)((uint)puStack_54 & 0xffffff00);
  local_5c = 0;
  puStack_58 = (undefined1 *)0x14;
  _strncpy((char *)local_60,"star_job",8);
  local_5c = 8;
  *(char *)(local_60 + 2) = '\0';
  uStack_18 = 0x10;
  FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x138],&local_60,1,0,
               (undefined1 *)0x0);
  if (0x14 < puStack_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  if (0x14 < uStack_38) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_40[0]);
  }
  ExceptionList = local_20[0];
  return;
}


//// FUNCTION FUN_007ea020 @ 007ea020 ////

int * __thiscall FUN_007ea020(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1792;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MoodHUDCard_Constructor(this,param_2);
  *(undefined ***)this = &PTR_FUN_00d597cc;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d597b4;
  piVar1 = (int *)((int)this + 0x4b8);
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 **)((int)this + 0x4c0) = (undefined4 *)((int)this + 0x4b4);
  *(undefined4 *)((int)this + 0x4b4) = &PTR_FUN_00d18c4c;
  *(int *)((int)this + 0x4c8) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x4bc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 **)((int)this + 0x4d8) = (undefined4 *)((int)this + 0x4cc);
  *(undefined4 *)((int)this + 0x4cc) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 **)((int)this + 0x4f0) = (undefined4 *)((int)this + 0x4e4);
  *(undefined4 *)((int)this + 0x4e4) = &PTR_FUN_00d2d100;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  local_4 = 3;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  FUN_007e9990(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007ea130 @ 007ea130 ////

void __fastcall FUN_007ea130(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce17d2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d597cc;
  param_1[0x14] = &PTR_LAB_00d597b4;
  puVar2 = (undefined4 *)param_1[0x138];
  local_4 = 3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x133] + 4))();
    param_1[0x138] = 0;
    (**(code **)param_1[0x133])();
  }
  puVar2 = (undefined4 *)param_1[0x13e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x139] + 4))();
    param_1[0x13e] = 0;
    (**(code **)param_1[0x139])();
  }
  param_1[0x139] = &PTR_FUN_00d2d100;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13e] = 0;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x133] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x138] = 0;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x12d] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x132] = 0;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  local_4 = 0xffffffff;
  FUN_007e90c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007ea340 @ 007ea340 ////

void __fastcall FUN_007ea340(int *param_1)

{
  uint uVar1;
  int iVar2;
  void *this;
  int *piVar3;
  
  iVar2 = param_1[0x132];
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x814) != 6)) {
    piVar3 = param_1;
    this = (void *)FUN_007ea7b0();
    FUN_007eba80(this,piVar3);
  }
  else {
    FUN_007e7ec0(param_1,iVar2);
    FUN_007e7b00(param_1,(int *)param_1[0x132]);
    if ((char)param_1[0xc9] != '\0') {
      *(undefined1 *)(param_1[0x132] + 0x726) = 1;
    }
    uVar1 = FUN_0043b490((uint *)(param_1 + 0x106));
    if ((char)uVar1 != '\0') {
      FUN_007e9740((int)param_1);
      FUN_007e9810((int)param_1);
    }
    if ((DAT_0104d524 != param_1[0x132]) && (DAT_00f8860c != param_1[0x132])) {
      if (*(char *)((int)param_1 + 0x445) == '\0') {
        iVar2 = FUN_008819d0((void *)param_1[0xd6],"star_card");
        if (*(int *)(iVar2 + 0x260) != param_1[0x10f]) goto LAB_007ea449;
      }
      FUN_00881c00((void *)param_1[0xd6],"star_card",param_1[0x110]);
      *(undefined1 *)((int)param_1 + 0x445) = 0;
      WHudIcon_Tick(param_1);
      return;
    }
    if (*(char *)((int)param_1 + 0x445) == '\0') {
      *(undefined1 *)((int)param_1 + 0x445) = 1;
      FUN_00881c00((void *)param_1[0xd6],"star_card",param_1[0x10f]);
      WHudIcon_Tick(param_1);
      return;
    }
  }
LAB_007ea449:
  WHudIcon_Tick(param_1);
  return;
}


//// FUNCTION FUN_007ea460 @ 007ea460 ////

undefined4 * __thiscall FUN_007ea460(void *this,byte param_1)

{
  FUN_007ea130(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007ea510 @ 007ea510 ////

int * __thiscall FUN_007ea510(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007ea550 @ 007ea550 ////

int __fastcall FUN_007ea550(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007ea700 @ 007ea700 ////

int * __thiscall FUN_007ea700(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007ea730 @ 007ea730 ////

int * __cdecl FUN_007ea730(int param_1,int param_2,int *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    (**(code **)(*param_3 + 4))();
    param_3[5] = *(int *)(param_1 + 0x14);
    (**(code **)*param_3)();
    param_1 = param_1 + 0x18;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_007ea770 @ 007ea770 ////

undefined4 * __cdecl FUN_007ea770(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar1 = param_3 + -6;
    iVar2 = param_2 + -0x18;
    (**(code **)(param_3[-6] + 4))();
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    (**(code **)*puVar1)();
    param_3 = puVar1;
    param_2 = iVar2;
  } while (iVar2 != param_1);
  return puVar1;
}


//// FUNCTION FUN_007ea7b0 @ 007ea7b0 ////

undefined4 FUN_007ea7b0(void)

{
  return DAT_0104ea7c;
}


//// FUNCTION FUN_007ea7c0 @ 007ea7c0 ////

float10 __fastcall FUN_007ea7c0(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x35c) != 0) {
    iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
  }
  fVar2 = (float10)*(int *)(param_1 + 0x344);
  if (*(int *)(param_1 + 0x344) < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + (float10)4.2949673e+09;
  }
  return (float10)DAT_00e5bd34 * (float10)0.4 * fVar2 - fVar3 * (float10)10.0;
}


//// FUNCTION FUN_007ea9e0 @ 007ea9e0 ////

void __cdecl FUN_007ea9e0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_007eaa40 @ 007eaa40 ////

void __fastcall FUN_007eaa40(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d59908;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_007eaa90 @ 007eaa90 ////

void __fastcall FUN_007eaa90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d59908;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_007eab70 @ 007eab70 ////

void __fastcall FUN_007eab70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d59918;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_007eac50 @ 007eac50 ////

undefined4 * __thiscall FUN_007eac50(void *this,byte param_1)

{
  FUN_007eab70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007eac70 @ 007eac70 ////

void __fastcall FUN_007eac70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0.0 <= *(float *)(param_1 + 0xc0)) {
    iVar2 = 0;
    iVar3 = 0;
    while( true ) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x35c) != 0) {
        iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
      }
      if (iVar1 <= iVar2) break;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x35c) + iVar3 + 0x14) + 0x2c))();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    }
  }
  return;
}


//// FUNCTION FUN_007eace0 @ 007eace0 ////

void __thiscall FUN_007eace0(void *this,int param_1)

{
  char cVar1;
  int *this_00;
  float fVar2;
  
  if (param_1 == 0) {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14);
    (**(code **)(*this_00 + 100))(1,this,0xc1200000);
  }
  else {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14 + param_1 * 0x18);
    (**(code **)(*this_00 + 100))
              (2,*(undefined4 *)(*(int *)((int)this + 0x35c) + param_1 * 0x18 + -4),
               *(float *)((int)this + 0x378) + 10.0);
  }
  (**(code **)(*this_00 + 0x5c))(1,this,0);
  cVar1 = FUN_007e7910((int)this_00);
  fVar2 = DAT_00e5bd34;
  if (cVar1 == '\0') {
    fVar2 = DAT_00e5bd34 * 0.4;
  }
  (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,fVar2);
  cVar1 = (**(code **)(*this_00 + 0x100))();
  if (cVar1 == '\0') {
    FUN_0089e5f0(this_00,'\x01');
  }
  if ((this_00[0x58] == 0) && (this_00[0x54] == 0)) {
    (**(code **)(*(int *)this + 0xc))(this_00,1);
  }
  return;
}


//// FUNCTION FUN_007eadc0 @ 007eadc0 ////

undefined1 __thiscall FUN_007eadc0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1;
  
  local_1 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    while( true ) {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar1 = FUN_007e95a0(iVar2);
      if ((iVar1 != 0) && (iVar2 = FUN_007e95a0(iVar2), iVar2 == param_1)) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == *(int *)((int)this + 0x360)) {
        return 0;
      }
    }
    local_1 = 1;
  }
  return local_1;
}


//// FUNCTION FUN_007eae40 @ 007eae40 ////

void __fastcall FUN_007eae40(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x344) != 0) {
    iVar3 = *(int *)(param_1 + 0x35c);
    iVar4 = *(int *)(param_1 + 0x360);
    if (iVar3 != iVar4) {
      do {
        piVar2 = *(int **)(iVar3 + 0x14);
        iVar1 = iVar3 + 0x18;
        if (iVar1 != iVar4) {
          local_8 = 0;
          (**(code **)(**(int **)(iVar3 + 0x2c) + 0x34))(&DAT_0104cce0,&local_8);
        }
        uStack_4 = 0;
        (**(code **)(*piVar2 + 0x34))(&DAT_0104cce0,&uStack_4);
        iVar4 = *(int *)(param_1 + 0x360);
        iVar3 = iVar1;
      } while (iVar1 != iVar4);
    }
  }
  return;
}


//// FUNCTION FUN_007eaec0 @ 007eaec0 ////

int __thiscall FUN_007eaec0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x14);
      iVar2 = FUN_007e95a0(iVar1);
      if (iVar2 != 0) {
        iVar2 = FUN_007e95a0(iVar1);
        if (iVar2 == param_1) {
          return iVar1;
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0x360));
  }
  return 0;
}


//// FUNCTION FUN_007eaf60 @ 007eaf60 ////

uint __fastcall FUN_007eaf60(int *param_1)

{
  float fVar1;
  undefined2 extraout_var;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = FUN_007ea7c0((int)param_1);
  fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
  fVar5 = (float10)(float)fVar4 - fVar5;
  fVar4 = (float10)0.0;
  if (fVar5 < fVar4 != (fVar5 == fVar4)) {
    param_1[0xde] = 0;
    return CONCAT22(extraout_var,
                    (ushort)(fVar5 < fVar4) << 8 | (ushort)(NAN(fVar5) || NAN(fVar4)) << 10 |
                    (ushort)(fVar5 == fVar4) << 0xe);
  }
  uVar2 = 0;
  if (param_1[0xd7] != 0) {
    iVar3 = param_1[0xd8] - param_1[0xd7];
    uVar2 = iVar3 * 0x2aaaaaab;
    if (iVar3 / 0x18 != 0) {
      iVar3 = 0;
      if (param_1[0xd7] != 0) {
        iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
      }
      uVar2 = iVar3 + 1;
      fVar1 = (float)(int)uVar2;
      if ((int)uVar2 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      param_1[0xde] = (int)((float)fVar5 / fVar1 + 2.0);
    }
  }
  return uVar2;
}


//// FUNCTION FUN_007eb040 @ 007eb040 ////

void __fastcall FUN_007eb040(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0xd7] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      FUN_007eace0(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_007eb0b0 @ 007eb0b0 ////

void __cdecl FUN_007eb0b0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_3;
        *param_3 = &PTR_LAB_00d59918;
        iVar2 = *(int *)(param_1 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 0x18;
      param_3 = param_3 + 6;
      puVar3 = puVar3 + 6;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_007eb150 @ 007eb150 ////

void __cdecl FUN_007eb150(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    puVar3 = param_1 + 2;
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_1;
        *param_1 = &PTR_LAB_00d59918;
        iVar2 = *(int *)(param_3 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 6;
      puVar3 = puVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_007eb270 @ 007eb270 ////

void FUN_007eb270(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007eab70(param_1);
  }
  return;
}


//// FUNCTION FUN_007eb2a0 @ 007eb2a0 ////

void __fastcall FUN_007eb2a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007eab70(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007eb2f0 @ 007eb2f0 ////

undefined4 * FUN_007eb2f0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007eb150(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007eb320 @ 007eb320 ////

void FUN_007eb320(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce17e8;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_007eb390 @ 007eb390 ////

void __fastcall FUN_007eb390(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007eab70(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007eb3f0 @ 007eb3f0 ////

void __thiscall FUN_007eb3f0(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_007ea730((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007eab70(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007eb490 @ 007eb490 ////

void __thiscall FUN_007eb490(void *this,int *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined ***local_28;
  int local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ce1808;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d59918;
  ExceptionList = &local_10;
  if (local_20 != 0) {
    local_2c = (int *)(local_20 + 0x18);
    local_30 = *local_2c;
    ExceptionList = &local_10;
    *(int **)(*local_2c + 4) = &local_30;
    *local_2c = (int)&local_30;
  }
  iVar3 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar3 != 0) {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x18;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    local_18 = this;
    puVar1 = &stack0xffffffc0;
    if (0xaaaaaaaU - iVar2 < param_2) {
      FUN_007eb320();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0xaaaaaaa - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x18;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_007ea550((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007eb0b0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007eb150(puVar5,param_2,(int)&local_34);
      FUN_007eb0b0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_007eb270(puVar5,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 6;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 6;
      *(undefined4 **)((int)this + 4) = puVar4;
    }
    else {
      puVar5 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar5 - (int)param_1) / 0x18) < param_2) {
        FUN_007eb0b0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007eb2f0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007ea9e0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007eb0b0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007ea770((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007ea9e0(param_1,param_1 + param_2 * 6,(int)&local_34);
      }
    }
  }
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_007eb7c0 @ 007eb7c0 ////

void __fastcall FUN_007eb7c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce1844;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d59944;
  param_1[0x14] = &PTR_FUN_00d59928;
  local_4 = 2;
  FUN_004d9e90((int)(param_1 + 0xd2));
  while ((param_1[0xd7] != 0 && ((int)(param_1[0xd8] - param_1[0xd7]) / 0x18 != 0))) {
    puVar1 = *(undefined4 **)(param_1[0xd8] + -4);
    if ((param_1[0xd7] != 0) &&
       (puVar2 = (undefined4 *)param_1[0xd8], ((int)puVar2 - param_1[0xd7]) / 0x18 != 0)) {
      puVar4 = puVar2 + -6;
      if (puVar4 != puVar2) {
        piVar3 = puVar2 + -4;
        do {
          *puVar4 = &PTR_LAB_00d59918;
          if ((int *)*piVar3 != (int *)0x0) {
            *(int *)*piVar3 = piVar3[-1];
          }
          if (piVar3[-1] != 0) {
            *(int *)(piVar3[-1] + 4) = *piVar3;
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
          piVar3[3] = 0;
          if ((int *)*piVar3 != (int *)0x0) {
            *(int *)*piVar3 = piVar3[-1];
          }
          if (piVar3[-1] != 0) {
            *(int *)(piVar3[-1] + 4) = *piVar3;
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
          puVar4 = puVar4 + 6;
          piVar3 = piVar3 + 6;
        } while (puVar4 != puVar2);
      }
      param_1[0xd8] = param_1[0xd8] + -0x18;
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  FUN_007eb2a0((int)(param_1 + 0xd6));
  FUN_004d9e90((int)(param_1 + 0xd2));
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007eb930 @ 007eb930 ////

void __thiscall FUN_007eb930(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = param_1;
  if (param_1 != 0) {
    piVar5 = *(int **)((int)this + 0x34c);
    if (piVar5 != *(int **)((int)this + 0x350)) {
      do {
        if (piVar5[5] == param_1) {
          FUN_005ba670((void *)((int)this + 0x348),&param_1,piVar5);
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          break;
        }
        piVar5 = piVar5 + 6;
      } while (piVar5 != *(int **)((int)this + 0x350));
    }
    piVar5 = *(int **)((int)this + 0x35c);
    if (piVar5 != *(int **)((int)this + 0x360)) {
LAB_007eb991:
      puVar7 = (undefined4 *)piVar5[5];
      iVar6 = FUN_007e95a0((int)puVar7);
      if ((iVar6 == 0) || (iVar6 = FUN_007e95a0((int)puVar7), iVar6 != iVar8)) goto LAB_007eb9aa;
      if (puVar7 != (undefined4 *)0x0) {
        piVar1 = puVar7 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(1);
        }
      }
      piVar2 = *(int **)((int)this + 0x360);
      piVar1 = piVar5 + 6;
      while (piVar1 != piVar2) {
        (**(code **)(*piVar5 + 4))();
        piVar5[5] = piVar5[0xb];
        (**(code **)*piVar5)();
        piVar1 = piVar5 + 0xc;
        piVar5 = piVar5 + 6;
      }
      puVar3 = *(undefined4 **)((int)this + 0x360);
      for (puVar7 = puVar3 + -6; puVar7 != puVar3; puVar7 = puVar7 + 6) {
        FUN_007eab70(puVar7);
      }
      *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) + -0x18;
    }
LAB_007eba16:
    FUN_007eaf60(this);
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)((int)this + 0x360) - *(int *)((int)this + 0x35c)) / 0x18;
    }
    if (0 < iVar8) {
      iVar6 = 0;
      do {
        FUN_007eace0(this,iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar8);
    }
    do {
      cVar4 = (**(code **)(*(int *)this + 0x50))(1);
    } while (cVar4 != '\0');
  }
  return;
LAB_007eb9aa:
  piVar5 = piVar5 + 6;
  if (piVar5 == *(int **)((int)this + 0x360)) goto LAB_007eba16;
  goto LAB_007eb991;
}


//// FUNCTION FUN_007eba80 @ 007eba80 ////

void __thiscall FUN_007eba80(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar5 = *(int **)((int)this + 0x35c);
    if (piVar5 != *(int **)((int)this + 0x360)) {
      do {
        puVar2 = (undefined4 *)piVar5[5];
        if (puVar2 == param_1) {
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          if (puVar2 != (undefined4 *)0x0) {
            piVar1 = puVar2 + 0x12;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar2)(1);
            }
          }
          FUN_007eb3f0((void *)((int)this + 0x358),&param_1,piVar5);
          break;
        }
        piVar5 = piVar5 + 6;
      } while (piVar5 != *(int **)((int)this + 0x360));
    }
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)((int)this + 0x360) - *(int *)((int)this + 0x35c)) / 0x18;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        FUN_007eace0(this,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    do {
      cVar3 = (**(code **)(*(int *)this + 0x50))(1);
    } while (cVar3 != '\0');
  }
  return;
}


//// FUNCTION FUN_007ebb40 @ 007ebb40 ////

void __fastcall FUN_007ebb40(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_004d9e90(param_1 + 0x348);
  if (*(int *)(param_1 + 0x344) != 0) {
    while ((*(int *)(param_1 + 0x35c) != 0 &&
           ((*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18 != 0))) {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x360) + -4);
      if ((*(int *)(param_1 + 0x35c) != 0) &&
         (puVar3 = *(undefined4 **)(param_1 + 0x360),
         ((int)puVar3 - *(int *)(param_1 + 0x35c)) / 0x18 != 0)) {
        for (puVar4 = puVar3 + -6; puVar4 != puVar3; puVar4 = puVar4 + 6) {
          FUN_007eab70(puVar4);
        }
        *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + -0x18;
      }
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_007ebc20 @ 007ebc20 ////

void __thiscall FUN_007ebc20(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007ebc65;
    }
  }
  iVar1 = 0;
LAB_007ebc65:
  FUN_007eb490(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_007ebc90 @ 007ebc90 ////

undefined4 * __thiscall FUN_007ebc90(void *this,char param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1874;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d59944;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d59928;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  this_00 = (undefined4 *)((int)this + 0x368);
  local_4 = 2;
  FUN_0043b460(this_00);
  *(undefined4 *)((int)this + 0x378) = 0;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffff5;
  puVar2 = DAT_0104ea7c;
  if (param_1 != '\0') {
    if (DAT_0104ea7c != (undefined4 *)0x0) {
      iVar1 = DAT_0104ea7c[0x12];
      DAT_0104ea7c[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104ea68[1])();
      DAT_0104ea7c = (undefined4 *)0x0;
      (*(code *)*DAT_0104ea68)();
    }
    (*(code *)DAT_0104ea68[1])();
    DAT_0104ea7c = this;
    (*(code *)*DAT_0104ea68)();
  }
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0x14))();
  FUN_0073e4e0(this,DAT_00e5bd38);
  FUN_0043b4d0(this_00,1);
  *this_00 = 10;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007ebdd0 @ 007ebdd0 ////

undefined4 * __thiscall FUN_007ebdd0(void *this,byte param_1)

{
  FUN_007eb7c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007ebdf0 @ 007ebdf0 ////

void __thiscall FUN_007ebdf0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007eb150(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_007ebc20(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007ebe80 @ 007ebe80 ////

void __fastcall FUN_007ebe80(int *param_1)

{
  bool bVar1;
  char cVar2;
  void *this;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1893;
  local_c = ExceptionList;
  iVar5 = param_1[0xd3];
  bVar1 = false;
  local_2c = 0;
  ExceptionList = &local_c;
  if (iVar5 != param_1[0xd4]) {
    do {
      iVar4 = *(int *)(iVar5 + 0x14);
      if ((iVar4 != 0) && (cVar2 = FUN_007eadc0(param_1,iVar4), cVar2 == '\0')) {
        this = operator_new(0x500);
        local_4 = 0;
        if (this == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else if (param_1[0xd7] == 0) {
          piVar3 = FUN_007ea020(this,iVar4,0);
        }
        else {
          piVar3 = FUN_007ea020(this,iVar4,(param_1[0xd8] - param_1[0xd7]) / 0x18);
        }
        local_4 = 0xffffffff;
        FUN_007e7dc0(piVar3);
        local_18 = &local_24;
        local_20 = 0;
        local_1c = (int *)0x0;
        local_24 = &PTR_LAB_00d59918;
        if (piVar3 != (int *)0x0) {
          local_1c = piVar3 + 6;
          local_20 = *local_1c;
          *(int **)(*local_1c + 4) = &local_20;
          *local_1c = (int)&local_20;
        }
        local_4 = 1;
        local_10 = piVar3;
        FUN_007ebdf0(param_1 + 0xd6,(int)&local_24);
        local_4 = 0xffffffff;
        local_24 = &PTR_LAB_00d59918;
        if (local_1c != (int *)0x0) {
          *local_1c = local_20;
        }
        if (local_20 != 0) {
          *(int **)(local_20 + 4) = local_1c;
        }
        local_10 = (int *)0x0;
        local_20 = 0;
        local_1c = (int *)0x0;
        if (param_1[0xd7] == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
        }
        FUN_007eace0(param_1,iVar4 + -1);
        local_2c = local_2c + 1;
        bVar1 = true;
      }
      iVar5 = iVar5 + 0x18;
    } while (iVar5 != param_1[0xd4]);
    if ((bVar1) && (local_2c == 1)) {
      FUN_007eaf60(param_1);
      FUN_007eb040(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007ec050 @ 007ec050 ////

void __thiscall FUN_007ec050(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce18a8;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + 1;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d18c4c;
  local_10 = param_1;
  if (param_1 != 0) {
    local_1c = (int *)(param_1 + 0x18);
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  FUN_004db640((void *)((int)this + 0x348),(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_FUN_00d18c4c;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = 0;
  local_20 = 0;
  local_1c = (int *)0x0;
  FUN_007ebe80(this);
  FUN_007eaf60(this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007ec130 @ 007ec130 ////

void __fastcall FUN_007ec130(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce18c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xd1] = 0;
  FUN_004d9e90((int)(param_1 + 0xd2));
  puVar7 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      piVar2 = (int *)puVar7[2];
      if (piVar2 != (int *)0x0) {
        iVar3 = piVar2[0x205];
        cVar4 = (**(code **)(*piVar2 + 0x204))();
        if (cVar4 != '\0') {
          iVar5 = FUN_005773c0((int)piVar2);
          iVar6 = GetPlayerStudio();
          if ((iVar5 == iVar6) && (iVar3 == 6)) {
            pppuStack_18 = &ppuStack_24;
            piStack_1c = piVar2 + 6;
            param_1[0xd1] = param_1[0xd1] + 1;
            ppuStack_24 = &PTR_FUN_00d18c4c;
            iStack_20 = *piStack_1c;
            *(int **)(*piStack_1c + 4) = &iStack_20;
            *piStack_1c = (int)&iStack_20;
            uStack_4 = 0;
            piStack_10 = piVar2;
            FUN_004db640(param_1 + 0xd2,(int)&ppuStack_24);
            uStack_4 = 0xffffffff;
            FUN_00435ec0(&ppuStack_24);
          }
        }
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
  }
  FUN_007ddaf0((int *)param_1[0xd3],(int *)param_1[0xd4],(param_1[0xd4] - param_1[0xd3]) / 0x18,
               &LAB_007ea480);
  FUN_007eaf60(param_1);
  FUN_007ebe80(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007ec280 @ 007ec280 ////

void __fastcall FUN_007ec280(int *param_1)

{
  FUN_007ec130(param_1);
  FUN_007eae40((int)param_1);
  FUN_007eb040(param_1);
  return;
}


//// FUNCTION FUN_007ec2a0 @ 007ec2a0 ////

void __fastcall FUN_007ec2a0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0043b490((uint *)(param_1 + 0xda));
  if ((char)uVar1 != '\0') {
    FUN_007ec130(param_1);
    FUN_007eae40((int)param_1);
    FUN_007eb040(param_1);
    FUN_007ec130(param_1);
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_007ec370 @ 007ec370 ////

int * __thiscall FUN_007ec370(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007ec410 @ 007ec410 ////

undefined4 __fastcall FUN_007ec410(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c8);
}


//// FUNCTION FUN_007ec420 @ 007ec420 ////

void __fastcall FUN_007ec420(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_18;
  int *piStack_14;
  int local_4;
  
  piStack_14 = (int *)0x7ec431;
  local_4 = param_1;
  piVar2 = (int *)FUN_005b22a0(*(int *)(param_1 + 0x4c8));
  if (piVar2 != (int *)0x0) {
    piStack_14 = &local_4;
    uStack_18 = 0x7ec443;
    (**(code **)(*piVar2 + 0x38))();
  }
  iVar1 = **(int **)(param_1 + 0x510);
  piStack_14 = (int *)0x1;
  (**(code **)(*piVar2 + 0x38))(&uStack_18);
  (**(code **)(iVar1 + 0x10c))();
  return;
}


//// FUNCTION FUN_007ec470 @ 007ec470 ////

float * __thiscall FUN_007ec470(void *this,float *param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x4c8) != 0) {
    iVar1 = FUN_005b2130(*(int *)((int)this + 0x4c8));
    if (iVar1 != 0) {
      FUN_005b27d0(*(void **)((int)this + 0x4c8),param_1);
      return param_1;
    }
  }
  *param_1 = 0.0;
  return param_1;
}


//// FUNCTION FUN_007ec4b0 @ 007ec4b0 ////

undefined4 __fastcall FUN_007ec4b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int **)(param_1 + 0x4c8) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x20))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x4c8) + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x007ec4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*piVar2 + 0x28))();
      return uVar3;
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_007ec4f0 @ 007ec4f0 ////

void __fastcall FUN_007ec4f0(int param_1)

{
  FUN_007e7940(param_1);
  FUN_0053c900(*(int *)(*(int *)(param_1 + 0x4c8) + 0x210));
  return;
}


//// FUNCTION FUN_007ec540 @ 007ec540 ////

void __fastcall FUN_007ec540(int param_1)

{
  int *piVar1;
  int iVar2;
  void *this;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x4c8) + 0x210);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_00539330(piVar1);
    if (iVar2 != 0) {
      iVar2 = 3;
      this = (void *)FUN_00539330(*(int **)(*(int *)(param_1 + 0x4c8) + 0x210));
      FUN_009021d0(this,iVar2);
    }
  }
  return;
}


//// FUNCTION FUN_007ec580 @ 007ec580 ////

void __fastcall FUN_007ec580(int *param_1)

{
  FUN_007e7aa0(param_1);
  if ((int *)param_1[0x15a] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007ec595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[0x15a] + 0x2c))();
    return;
  }
  return;
}


//// FUNCTION FUN_007ec5a0 @ 007ec5a0 ////

void __thiscall FUN_007ec5a0(void *this,uint *param_1)

{
  if (*(void **)((int)this + 0x568) != (void *)0x0) {
    FUN_006b87f0(*(void **)((int)this + 0x568),param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_007ec600 @ 007ec600 ////

int __fastcall FUN_007ec600(int param_1)

{
  int *piVar1;
  char cVar2;
  uint3 extraout_var;
  
  cVar2 = FUN_004201b0(DAT_00f87b04);
  if (cVar2 != '\0') {
    return (uint)extraout_var << 8;
  }
  if ((*(int *)(param_1 + 0x4c8) != 0) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x4c8) + 0x210), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0xb8))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_007ec650 @ 007ec650 ////

void __thiscall FUN_007ec650(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  void *pvVar4;
  void *in_stack_ffffff74;
  undefined4 in_stack_ffffff78;
  uint in_stack_ffffff7c;
  uint *puVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  uint auStack_5c [10];
  uint auStack_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce18f0;
  local_c = ExceptionList;
  if (param_1 == param_2) {
    return;
  }
  if (param_1 < param_2) {
    ExceptionList = &local_c;
    piVar1 = (int *)FUN_005b22a0(*(int *)((int)this + 0x4c8));
    iVar2 = 0;
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x24))();
    }
    if ((*(char *)((int)this + 0x460) == '\0') || (iVar2 == 4)) {
      if (iVar2 == 2) {
        pfVar3 = (float *)(**(code **)(*piVar1 + 0x38))();
        if (1.0 <= *pfVar3) {
LAB_007ec6e3:
          if (*(char *)((int)this + 0x460) == '\0') {
            FUN_00401de0(&stack0xffffff74,"showstars",0xffffffff);
            uStack_4 = 0xffffffff;
            pvVar4 = (void *)FUN_008819d0(*(void **)((int)this + 0x358),"star_info");
            iVar2 = FUN_0088a2b0(pvVar4,in_stack_ffffff74,in_stack_ffffff78,in_stack_ffffff7c);
            FUN_00881b40(*(void **)((int)this + 0x358),"star_info",iVar2 + 1);
            *(undefined1 *)((int)this + 0x460) = 1;
          }
        }
      }
      else if (iVar2 != 4) goto LAB_007ec6e3;
    }
    else {
      *(undefined4 *)((int)this + 0x464) = 0;
    }
    if (param_2 != *(int *)((int)this + 0x410) + -1) {
      pcVar7 = "HUD_MOVIERATINGUP";
      goto LAB_007ec882;
    }
    FUN_0041c9c0(auStack_5c,"HUD_MOVIERATINGMAX");
  }
  else {
    if (param_1 <= param_2) {
      return;
    }
    ExceptionList = &local_c;
    piVar1 = (int *)FUN_005b22a0(*(int *)((int)this + 0x4c8));
    iVar2 = 0;
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x24))();
    }
    if ((*(char *)((int)this + 0x460) == '\0') || (iVar2 == 4)) {
      if (iVar2 == 2) {
        pfVar3 = (float *)(**(code **)(*piVar1 + 0x38))();
        if (*pfVar3 < 1.0) goto LAB_007ec7e7;
LAB_007ec7dd:
        if (*(char *)((int)this + 0x460) != '\0') goto LAB_007ec7e7;
      }
      else {
        if (iVar2 != 4) goto LAB_007ec7dd;
LAB_007ec7e7:
        if ((*(char *)((int)this + 0x460) != '\0') || (iVar2 != 7)) goto LAB_007ec849;
      }
      FUN_00401de0(&stack0xffffff74,"showstars",0xffffffff);
      uStack_4 = 0xffffffff;
      pvVar4 = (void *)FUN_008819d0(*(void **)((int)this + 0x358),"star_info");
      iVar2 = FUN_0088a2b0(pvVar4,in_stack_ffffff74,in_stack_ffffff78,in_stack_ffffff7c);
      FUN_00881b40(*(void **)((int)this + 0x358),"star_info",iVar2 + 1);
      *(undefined1 *)((int)this + 0x460) = 1;
    }
    else {
      *(undefined4 *)((int)this + 0x464) = 0;
    }
LAB_007ec849:
    if ((param_2 != 1) && (param_2 != 0)) {
      FUN_0041c9c0(auStack_34,"HUD_MOVIERATINGDOWN");
      auStack_34[0] = auStack_34[0] & 0xfffffffe;
      puVar5 = auStack_34;
      goto LAB_007ec898;
    }
    pcVar7 = "HUD_MOVIERATINGMIN";
LAB_007ec882:
    FUN_0041c9c0(auStack_5c,pcVar7);
  }
  puVar5 = auStack_5c;
  auStack_5c[0] = auStack_5c[0] & 0xfffffffe;
LAB_007ec898:
  puVar8 = &DAT_00d17518;
  iVar6 = 0;
  iVar2 = 2;
  pvVar4 = (void *)FUN_004f3b20();
  FUN_004f3270(pvVar4,iVar2,(byte *)puVar5,iVar6,puVar8);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007ec8c0 @ 007ec8c0 ////

void __fastcall FUN_007ec8c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *this;
  uint *puVar5;
  undefined1 *puVar6;
  uint auStack_28 [10];
  
  cVar1 = (**(code **)(*param_1 + 0x108))();
  if ((*(char *)((int)param_1 + 0x4a9) == '\0') && (0 < param_1[0x117])) {
    FUN_007e9550(param_1,'\x01');
  }
  if ((((int *)param_1[0x132] != (int *)0x0) &&
      (iVar2 = (**(code **)(*(int *)param_1[0x132] + 0x20))(), iVar2 != 0)) && (cVar1 != '\0')) {
    FUN_007e9550(param_1,'\x01');
    piVar3 = (int *)(**(code **)(*(int *)param_1[0x132] + 0x20))();
    iVar2 = (**(code **)(*piVar3 + 0x28))();
    piVar3 = (int *)(**(code **)(*(int *)param_1[0x132] + 0x20))();
    iVar4 = (**(code **)(*piVar3 + 0x2c))();
    if (iVar4 < iVar2) {
      FUN_0041c9c0(auStack_28,"HUD_LEAGUEPOSITION_MOVIEDOWN");
    }
    else {
      if (iVar4 <= iVar2) {
        return;
      }
      FUN_007e8100((int)param_1);
      FUN_0041c9c0(auStack_28,"HUD_LEAGUEPOSITION_MOVIEUP");
    }
    auStack_28[0] = auStack_28[0] & 0xfffffffe;
    puVar5 = auStack_28;
    puVar6 = &DAT_00d17518;
    iVar4 = 0;
    iVar2 = 2;
    this = (void *)FUN_004f3b20();
    FUN_004f3270(this,iVar2,(byte *)puVar5,iVar4,puVar6);
  }
  return;
}


//// FUNCTION FUN_007ec9b0 @ 007ec9b0 ////

void __thiscall FUN_007ec9b0(void *this,int param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  int in_stack_00000040;
  TypeDescriptor *pTVar6;
  void **ppvVar7;
  uint *puVar8;
  TypeDescriptor *pTVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined1 *puVar13;
  void *local_5c [2];
  uint local_54;
  uint local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce1918;
  local_c = ExceptionList;
  iVar3 = *(int *)((int)this + 0x550);
  local_4 = 0;
  if ((param_1 == iVar3) &&
     (ExceptionList = &local_c, in_stack_00000040 == *(int *)((int)this + 0x54c)))
  goto switchD_007eca01_default;
  ExceptionList = &local_c;
  switch(param_1 + -2) {
  case 0:
    ExceptionList = &local_c;
    if ((in_stack_00000040 != *(int *)((int)this + 0x54c)) &&
       (ExceptionList = &local_c, in_stack_00000040 == 1)) {
      ExceptionList = &local_c;
      FUN_0041c9c0(local_5c,"HUD_PROJECT_WRITING_IN_PROGRESS");
      puVar13 = &DAT_00d17518;
      iVar10 = 0;
      ppvVar7 = local_5c;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xfffffffe);
      iVar3 = 2;
      pvVar4 = (void *)FUN_004f3b20();
      FUN_004f3270(pvVar4,iVar3,(byte *)ppvVar7,iVar10,puVar13);
    }
    break;
  case 1:
    ExceptionList = &local_c;
    if ((in_stack_00000040 != *(int *)((int)this + 0x54c)) &&
       ((in_stack_00000040 == 4 || (ExceptionList = &local_c, in_stack_00000040 == 0)))) {
      ExceptionList = &local_c;
      FUN_0041c9c0(local_5c,"HUD_PROJECT_WRITING_COMPLETE");
      puVar13 = &DAT_00d17518;
      iVar10 = 0;
      ppvVar7 = local_5c;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xfffffffe);
      iVar3 = 2;
      pvVar4 = (void *)FUN_004f3b20();
      FUN_004f3270(pvVar4,iVar3,(byte *)ppvVar7,iVar10,puVar13);
    }
    break;
  case 2:
    if ((iVar3 == 3) && (*(char *)((int)this + 0x56d) == '\0')) {
      ExceptionList = &local_c;
      FUN_0041c9c0(local_5c,"HUD_PROJECT_CASTING_ACTIVATED");
      puVar13 = &DAT_00d17518;
      iVar10 = 0;
      ppvVar7 = local_5c;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xfffffffe);
      iVar3 = 2;
      pvVar4 = (void *)FUN_004f3b20();
      FUN_004f3270(pvVar4,iVar3,(byte *)ppvVar7,iVar10,puVar13);
    }
    else {
      ExceptionList = &local_c;
      if (iVar3 == 4) {
        ExceptionList = &local_c;
        uVar5 = FUN_00990ae0(4,param_1 + -2);
        iVar3 = *(int *)((int)this + 0x570);
        iVar11 = 0;
        pTVar9 = &TM::CPhasePreProduction::RTTI_Type_Descriptor;
        pTVar6 = &TM::CPhaseBase::RTTI_Type_Descriptor;
        iVar10 = 0;
        piVar1 = (int *)FUN_005b22a0(*(int *)((int)this + 0x4c8));
        piVar1 = (int *)FUN_00ace790(piVar1,iVar10,pTVar6,pTVar9,iVar11);
        if ((((piVar1 != (int *)0x0) && (in_stack_00000040 == 0)) &&
            (pfVar2 = (float *)(**(code **)(*piVar1 + 0x38))(&param_1), 1.0 <= *pfVar2)) &&
           ((2000 < (uint)((int)uVar5 - iVar3) || (*(char *)((int)this + 0x56c) == '\0')))) {
          FUN_0041c9c0(local_5c,"HUD_PROJECT_REHEARSAL_COMPLETE");
          puVar13 = &DAT_00d17518;
          iVar10 = 0;
          ppvVar7 = local_5c;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xfffffffe);
          iVar3 = 2;
          pvVar4 = (void *)FUN_004f3b20();
          FUN_004f3270(pvVar4,iVar3,(byte *)ppvVar7,iVar10,puVar13);
          *(undefined1 *)((int)this + 0x56c) = 1;
        }
      }
    }
    break;
  case 3:
    ExceptionList = &local_c;
    if (iVar3 != 4) break;
    ExceptionList = &local_c;
    FUN_00401de0(local_5c,"HUD_PROJECT_SHOOTING_IN_PROGRESS_",0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    goto LAB_007ecbf0;
  case 4:
    ExceptionList = &local_c;
    if (iVar3 != 5) break;
    ExceptionList = &local_c;
    FUN_00401de0(local_5c,"HUD_PROJECT_SHOOTING_COMPLETED_",0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
LAB_007ecbf0:
    iVar3 = FUN_005b2780(*(int *)((int)this + 0x4c8));
    if (iVar3 != 0) {
      iVar3 = FUN_005b2780(*(int *)((int)this + 0x4c8));
      if (*(int *)(iVar3 + 0x4a0) == 0) {
        pcVar12 = "M";
      }
      else {
        pcVar12 = "F";
      }
      FUN_00407630(local_5c,pcVar12);
      FUN_0041c9c0(local_34,local_5c[0]);
      puVar13 = &DAT_00d17518;
      puVar8 = local_34;
      iVar10 = 0;
      local_34[0] = local_34[0] & 0xfffffffe;
      iVar3 = 2;
      pvVar4 = (void *)FUN_004f3b20();
      FUN_004f3270(pvVar4,iVar3,(byte *)puVar8,iVar10,puVar13);
    }
    if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
      _free(local_5c[0]);
    }
  }
switchD_007eca01_default:
  local_4 = 0xffffffff;
  FUN_00526bb0((undefined4 *)&stack0x00000008);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007eccb0 @ 007eccb0 ////

void __fastcall FUN_007eccb0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1954;
  pvStack_c = ExceptionList;
  piVar2 = (int *)0x0;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x3d0);
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/dollar_HUD.dds",0x11);
    local_28 = 0x11;
    local_2c[0x11] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar2 = FUN_006b8d40(piVar1,&local_2c,0,0x3f800000,0x3f800000,param_1[0x132]);
  }
  local_4 = 2;
  (**(code **)(param_1[0x155] + 4))();
  param_1[0x15a] = (int)piVar2;
  (**(code **)param_1[0x155])();
  local_4 = 0xffffffff;
  if ((piVar1 != (int *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (DAT_0105be08 < 1) {
    iVar3 = *(int *)param_1[0x15a];
    (**(code **)(*param_1 + 0x14))();
    (**(code **)(*param_1 + 0x10))();
    (**(code **)(iVar3 + 0x74))();
    iVar3 = *(int *)param_1[0x15a];
    (**(code **)(*param_1 + 0x10))();
    (**(code **)(iVar3 + 0x5c))();
    iVar3 = *(int *)param_1[0x15a];
    fVar4 = (float10)(**(code **)(*param_1 + 0x14))();
    fVar4 = fVar4 * (float10)0.1;
  }
  else {
    (**(code **)(*(int *)param_1[0x15a] + 0x74))();
    iVar3 = *(int *)param_1[0x15a];
    (**(code **)(*param_1 + 0x10))();
    (**(code **)(iVar3 + 0x5c))();
    iVar3 = *(int *)param_1[0x15a];
    fVar4 = (float10)(**(code **)(*param_1 + 0x14))();
    fVar4 = fVar4 * (float10)0.25;
  }
  (**(code **)(iVar3 + 100))(1,param_1,(float)fVar4);
  (**(code **)(*param_1 + 0xc))(param_1[0x15a],1);
  ExceptionList = piVar1;
  return;
}


//// FUNCTION FUN_007ece90 @ 007ece90 ////

void __fastcall FUN_007ece90(int param_1)

{
  void *this;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined1 *puVar5;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x56c) == '\0') {
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_20 = 0xffffffff;
    local_24 = FUN_009b01a0("HUD_PROJECT_REHEARSAL_COMPLETE");
    puVar5 = &DAT_00d17518;
    iVar4 = 0;
    puVar3 = &local_28;
    local_28 = local_28 & 0xfffffffe;
    iVar2 = 2;
    this = (void *)FUN_004f3b20();
    FUN_004f3270(this,iVar2,(byte *)puVar3,iVar4,puVar5);
    *(undefined1 *)(param_1 + 0x56c) = 1;
    uVar1 = FUN_00990ae0(extraout_ECX,extraout_EDX);
    *(int *)(param_1 + 0x570) = (int)uVar1;
  }
  return;
}


//// FUNCTION FUN_007ecf20 @ 007ecf20 ////

void __fastcall FUN_007ecf20(int param_1)

{
  void *this;
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined1 *puVar4;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x56d) == '\0') {
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_20 = 0xffffffff;
    local_24 = FUN_009b01a0("HUD_PROJECT_CASTING_IN_PROGRESS");
    puVar4 = &DAT_00d17518;
    iVar3 = 0;
    puVar2 = &local_28;
    local_28 = local_28 & 0xfffffffe;
    iVar1 = 2;
    this = (void *)FUN_004f3b20();
    FUN_004f3270(this,iVar1,(byte *)puVar2,iVar3,puVar4);
    *(undefined1 *)(param_1 + 0x56d) = 1;
  }
  return;
}


//// FUNCTION FUN_007ed000 @ 007ed000 ////

void __fastcall FUN_007ed000(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d59bd4;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_007ed050 @ 007ed050 ////

void __fastcall FUN_007ed050(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce19bc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d59bfc;
  param_1[0x14] = &PTR_LAB_00d59be4;
  puVar2 = (undefined4 *)param_1[0x138];
  local_4 = 6;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x133] + 4))();
    param_1[0x138] = 0;
    (**(code **)param_1[0x133])();
  }
  puVar2 = (undefined4 *)param_1[0x13e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x139] + 4))();
    param_1[0x13e] = 0;
    (**(code **)param_1[0x139])();
  }
  puVar2 = (undefined4 *)param_1[0x144];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x13f] + 4))();
    param_1[0x144] = 0;
    (**(code **)param_1[0x13f])();
  }
  puVar2 = (undefined4 *)param_1[0x15a];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x155] + 4))();
    param_1[0x15a] = 0;
    (**(code **)param_1[0x155])();
  }
  param_1[0x155] = &PTR_LAB_00d59bd4;
  if ((undefined4 *)param_1[0x157] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x157] = param_1[0x156];
  }
  if (param_1[0x156] != 0) {
    *(undefined4 *)(param_1[0x156] + 4) = param_1[0x157];
  }
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x15a] = 0;
  if ((undefined4 *)param_1[0x157] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x157] = param_1[0x156];
  }
  if (param_1[0x156] != 0) {
    *(undefined4 *)(param_1[0x156] + 4) = param_1[0x157];
  }
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00526bb0(param_1 + 0x145);
  param_1[0x13f] = &PTR_LAB_00d2c758;
  if ((undefined4 *)param_1[0x141] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x141] = param_1[0x140];
  }
  if (param_1[0x140] != 0) {
    *(undefined4 *)(param_1[0x140] + 4) = param_1[0x141];
  }
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x144] = 0;
  if ((undefined4 *)param_1[0x141] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x141] = param_1[0x140];
  }
  if (param_1[0x140] != 0) {
    *(undefined4 *)(param_1[0x140] + 4) = param_1[0x141];
  }
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x139] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13e] = 0;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x133] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x138] = 0;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x12d] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x132] = 0;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  local_4 = 0xffffffff;
  FUN_007e90c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007ed3b0 @ 007ed3b0 ////

void __fastcall FUN_007ed3b0(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  char **ppcVar8;
  char *local_ac;
  undefined4 local_a8;
  uint local_a4;
  char local_a0 [20];
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [20];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1a3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_005b2770(*(int *)(param_1 + 0x4c8));
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return;
  }
  pcVar7 = "";
  puVar5 = (undefined4 *)FUN_00449b40(iVar4);
  bVar3 = FUN_00430950(puVar5,pcVar7);
  if (!bVar3) {
    ExceptionList = local_c;
    return;
  }
  puVar5 = (undefined4 *)FUN_00449b40(iVar4);
  puVar5 = FUN_0040d6b0(local_2c,"ui/",puVar5);
  FUN_004312e0(&local_6c,puVar5,".dds");
  local_4 = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_8c = local_80;
  local_80[0] = '\0';
  local_88 = 0;
  local_84 = 0x14;
  _strncpy(local_8c,"genre_war",9);
  local_88 = 9;
  local_8c[9] = '\0';
  ppcVar8 = &local_8c;
  local_4 = CONCAT31(local_4._1_3_,1);
  bVar2 = false;
  bVar3 = false;
  puVar5 = (undefined4 *)FUN_00449b40(iVar4);
  uVar6 = FUN_00401ec0(puVar5,ppcVar8);
  if ((char)uVar6 == '\0') {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"genre_western",0xd);
    local_48 = 0xd;
    local_4c[0xd] = '\0';
    ppcVar8 = &local_4c;
    local_4 = 2;
    bVar2 = true;
    bVar3 = false;
    puVar5 = (undefined4 *)FUN_00449b40(iVar4);
    uVar6 = FUN_00401ec0(puVar5,ppcVar8);
    if ((char)uVar6 == '\0') {
      local_ac = local_a0;
      local_a0[0] = '\0';
      local_a8 = 0;
      local_a4 = 0x14;
      _strncpy(local_ac,"genre_thriller",0xe);
      local_a8 = 0xe;
      local_ac[0xe] = '\0';
      ppcVar8 = &local_ac;
      local_4 = 3;
      bVar2 = true;
      bVar3 = true;
      puVar5 = (undefined4 *)FUN_00449b40(iVar4);
      uVar6 = FUN_00401ec0(puVar5,ppcVar8);
      bVar1 = false;
      if ((char)uVar6 == '\0') goto LAB_007ed5a0;
    }
  }
  bVar1 = true;
LAB_007ed5a0:
  if ((bVar3) && (0x14 < local_a4)) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  if ((bVar2) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4 = 0;
  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  if (bVar1) {
    if (local_64 < 0x14) {
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_64 = 0x20;
      local_6c = _malloc(0x20);
    }
    _strncpy(local_6c,"ui/genre_action.dds",0x13);
    local_68 = 0x13;
    local_6c[0x13] = '\0';
  }
  (**(code **)(**(int **)(param_1 + 0x4f8) + 0x100))(&local_6c);
  if (local_64 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_007ed6d0 @ 007ed6d0 ////

/* WARNING: Removing unreachable block (ram,0x007ee2e9) */
/* WARNING: Removing unreachable block (ram,0x007edd05) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007ed6d0(int *param_1)

{
  float fVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  size_t sVar7;
  int *piVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  undefined4 *puStack_104;
  char acStack_fc [7];
  undefined1 uStack_f5;
  undefined1 uStack_f0;
  undefined4 local_d8;
  float fStack_d4;
  float fStack_d0;
  char *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  char local_c0 [4];
  undefined2 *puStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined2 auStack_b0 [10];
  wchar_t awStack_9c [42];
  void *pvStack_48;
  undefined4 uStack_40;
  undefined1 uStack_24;
  undefined1 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1b90;
  pvStack_c = ExceptionList;
  local_cc = local_c0;
  local_d8 = 0;
  local_c0[0] = '\0';
  local_c8 = 0;
  local_c4 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_cc,"filmpanel2",10);
  local_c8 = 10;
  local_cc[10] = '\0';
  local_4 = 0;
  FUN_0089e070(param_1,&local_cc,1,0,'\x01');
  piVar2 = (int *)FUN_0071b2a0();
  iVar4 = param_1[0xd6];
  (**(code **)(*piVar2 + 0x14))();
  uVar10 = FUN_00acd42c();
  *(int *)(iVar4 + 0x68) = (int)uVar10;
  piVar2 = (int *)FUN_0071b2a0();
  iVar4 = param_1[0xd6];
  (**(code **)(*piVar2 + 0x10))();
  uVar10 = FUN_00acd42c();
  *(int *)(iVar4 + 0x6c) = (int)uVar10;
  puVar11 = &stack0xfffffed8;
  uVar12 = 0;
  uVar13 = 0x14;
  FUN_004015d0(&stack0xfffffecc,"Opening",7);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar4 = FUN_0088a2b0(pvVar3,puVar11,uVar12,uVar13);
  param_1[0x10c] = iVar4;
  puVar11 = &stack0xfffffed8;
  uVar12 = 0;
  uVar13 = 0x14;
  FUN_004015d0(&stack0xfffffecc,"Open",4);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar4 = FUN_0088a2b0(pvVar3,puVar11,uVar12,uVar13);
  param_1[0x10a] = iVar4;
  puVar11 = &stack0xfffffed8;
  uVar12 = 0;
  uVar13 = 0x14;
  FUN_004015d0(&stack0xfffffecc,"Closing",7);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar4 = FUN_0088a2b0(pvVar3,puVar11,uVar12,uVar13);
  param_1[0x10d] = iVar4;
  param_1[0x10b] = 0xe;
  puVar11 = &stack0xfffffed8;
  uVar12 = 0;
  uVar13 = 0x14;
  FUN_004015d0(&stack0xfffffecc,"Pickup",6);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar4 = FUN_0088a2b0(pvVar3,puVar11,uVar12,uVar13);
  param_1[0x10e] = iVar4;
  puVar11 = &stack0xfffffed8;
  uVar12 = 0;
  uVar13 = 0x14;
  FUN_004015d0(&stack0xfffffecc,"highlight",9);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar4 = FUN_0088a2b0(pvVar3,puVar11,uVar12,uVar13);
  param_1[0x10f] = iVar4;
  puVar11 = &stack0xfffffed8;
  uVar12 = 0;
  uVar13 = 0x14;
  FUN_004015d0(&stack0xfffffecc,"normal",6);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar4 = FUN_0088a2b0(pvVar3,puVar11,uVar12,uVar13);
  param_1[0x110] = iVar4;
  pvVar3 = operator_new(0x480);
  local_4._0_1_ = 7;
  if (pvVar3 == (void *)0x0) {
    puStack_104 = (undefined4 *)0x0;
  }
  else {
    puStack_104 = FUN_007ac3f0(pvVar3,3,0,0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(param_1[0x13f] + 4))();
  param_1[0x144] = (int)puStack_104;
  (**(code **)param_1[0x13f])();
  fStack_d4 = 0.0;
  fStack_d0 = 0.0;
  FUN_00882710(*(void **)(param_1[0x144] + 0x358),&fStack_d4);
  pvVar3 = (void *)(fStack_d0 * 0.6);
  (**(code **)(*(int *)param_1[0x144] + 0x74))();
  FUN_0089e5f0((void *)param_1[0x144],'\x01');
  piVar2 = (int *)FUN_005b22a0(param_1[0x132]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x38))();
    param_1[0x154] = 0;
    param_1[0x153] = 5;
  }
  (**(code **)(*(int *)param_1[0x144] + 0x10c))();
  if (param_1[0x144] != 0) {
    pcVar9 = &stack0xfffffec0;
    uVar12 = 0;
    uVar13 = 0x14;
    FUN_004015d0(&stack0xfffffeb4,"star_mood",9);
    FUN_00882830((void *)param_1[0xd6],pcVar9,uVar12,uVar13);
    iVar4 = (**(code **)(*piVar2 + 0x24))();
    if (((iVar4 == 7) || (iVar4 = (**(code **)(*piVar2 + 0x24))(), iVar4 == 3)) ||
       (_DAT_00e5b978 == 0.0)) {
      puVar11 = &stack0xfffffec8;
      uVar12 = 0;
      uVar13 = 0x14;
      FUN_004015d0(&stack0xfffffebc,"showstars",9);
      uStack_14 = 0;
      pvVar5 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_info");
      iVar4 = FUN_0088a2b0(pvVar5,puVar11,uVar12,uVar13);
      *(undefined1 *)(param_1 + 0x118) = 1;
    }
    else {
      puVar11 = &stack0xfffffec8;
      uVar12 = 0;
      uVar13 = 0x14;
      FUN_004015d0(&stack0xfffffebc,"showmood",8);
      uStack_14 = 0;
      pvVar5 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_info");
      iVar4 = FUN_0088a2b0(pvVar5,puVar11,uVar12,uVar13);
    }
    FUN_00881b40((void *)param_1[0xd6],"star_info",iVar4 + 1);
  }
  FUN_007e8be0((int)param_1);
  FUN_007e9550(param_1,'\0');
  puVar6 = operator_new(900);
  uStack_14 = 10;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_00737730(puVar6);
  }
  uStack_14 = 0;
  (**(code **)(param_1[0xe5] + 4))();
  param_1[0xea] = (int)puVar6;
  (**(code **)param_1[0xe5])();
  puVar6 = operator_new(0x344);
  uStack_14 = 0xb;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_007432f0(puVar6);
  }
  uStack_14 = 0;
  (**(code **)(param_1[0xeb] + 4))();
  param_1[0xf0] = (int)puVar6;
  (**(code **)param_1[0xeb])();
  *(uint *)(param_1[0xea] + 0x114) = *(uint *)(param_1[0xea] + 0x114) & 0xfffffffd;
  pvVar5 = operator_new(0xf8);
  uStack_14 = 0xc;
  if (pvVar5 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_005eb780(pvVar5,param_1[0xf0],param_1[0xea]);
  }
  uStack_14 = 0;
  (**(code **)(param_1[0x11e] + 4))();
  param_1[0x123] = (int)puVar6;
  (**(code **)param_1[0x11e])();
  *(int *)(param_1[0x123] + 0x48) = *(int *)(param_1[0x123] + 0x48) + 1;
  acStack_fc[0] = '\0';
  _strncpy(acStack_fc,"number_dummy",0xc);
  uStack_f0 = 0;
  uStack_14 = 0xd;
  FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0xf0],(undefined4 *)&stack0xfffffef8
               ,1,0,(undefined1 *)0x0);
  uStack_14 = 0;
  puVar6 = operator_new(0x7c);
  uStack_14 = 0xe;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_005efb20(puVar6);
  }
  uStack_14 = 0;
  (**(code **)(param_1[0x124] + 4))();
  param_1[0x129] = (int)puVar6;
  (**(code **)param_1[0x124])();
  if (DAT_0104d8e8 == 0) {
    FUN_00748590(*(void **)(param_1[0xea] + 0x2d4),param_1[0x123]);
  }
  param_1[0x11d] = 0x41900000;
  param_1[0x11c] = 0x41100000;
  iVar4 = (**(code **)(*param_1 + 0x10c))();
  param_1[0x117] = iVar4;
  if ((param_1[0xea] != 0) && (0 < iVar4)) {
    puStack_bc = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 0;
    uStack_b4 = 10;
    uVar13 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_bc,(wchar_t *)&lpCaption_00d16918,uVar13);
    sVar7 = _swprintf(awStack_9c,0xd18f7c,(wchar_t *)param_1[0x117]);
    FUN_0040cae0(&puStack_bc,awStack_9c,sVar7);
    acStack_fc[0] = '\0';
    _strncpy(acStack_fc,"default",7);
    uStack_f5 = 0;
    uStack_14 = 0x10;
    (**(code **)(*(int *)param_1[0xea] + 0xfc))();
    uStack_24 = 0xf;
    if (&DAT_00000014 < &stack0xfffffed8) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
    (**(code **)(*(int *)param_1[0xea] + 0x54))();
    (**(code **)(*(int *)param_1[0xea] + 0x8c))();
    (**(code **)(*(int *)param_1[0xea] + 0x88))();
    *(undefined4 *)(param_1[0xea] + 0x350) = 0xff000000;
    if ((param_1[0x117] < 10) && (*(float *)(param_1[0x123] + 0xb4) == 0.0)) {
      if (*(char *)((int)param_1 + 0x4ab) == '\0') {
        fVar1 = 3.0;
        uVar12 = 0xc0400000;
      }
      else {
        fVar1 = 2.0;
        uVar12 = 0xc0000000;
      }
      param_1[0x11c] = (int)((float)param_1[0x11c] + fVar1);
      FUN_005eb3b0((void *)param_1[0x123],uVar12);
    }
    uStack_14 = 0;
    if (10 < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_bc);
    }
  }
  piVar2 = (int *)param_1[0xea];
  iVar4 = *piVar2;
  (**(code **)(iVar4 + 0x10))();
  piVar14 = param_1;
  (**(code **)(iVar4 + 0x5c))();
  iVar4 = *(int *)param_1[0xea];
  (**(code **)(iVar4 + 0x14))();
  (**(code **)(iVar4 + 100))();
  piVar8 = (int *)FUN_007ef840();
  (**(code **)(*piVar8 + 0xc))();
  piVar8 = (int *)FUN_005b22a0(param_1[0x132]);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0x38))();
  }
  pcVar9 = (char *)param_1[0x144];
  (**(code **)(*piVar8 + 0x38))();
  (**(code **)(pcVar9 + 0x10c))();
  FUN_007e7ef0(param_1);
  pvVar3 = operator_new(0x360);
  if (pvVar3 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    pcVar9 = &stack0xfffffed8;
    piVar14 = (int *)&DAT_00000014;
    _strncpy(pcVar9,"ui/genre_action.dds",0x13);
    pcVar9[0x13] = '\0';
    uStack_40 = CONCAT31(uStack_40._1_3_,0x12);
    piVar2 = (int *)0x1;
    puVar6 = FUN_0069d820(pvVar3,(undefined4 *)&stack0xfffffecc,0,0,0x3f800000,0x3f800000);
  }
  uStack_40 = 0x13;
  (**(code **)(param_1[0x139] + 4))();
  param_1[0x13e] = (int)puVar6;
  (**(code **)param_1[0x139])();
  uStack_40 = 0;
  if ((((uint)piVar2 & 1) != 0) &&
     (piVar2 = (int *)((uint)piVar2 & 0xfffffffe), &DAT_00000014 < piVar14)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar9);
  }
  pcVar9 = &stack0xfffffed8;
  uVar13 = 0x14;
  _strncpy(pcVar9,"star_job",8);
  pcVar9[8] = '\0';
  uStack_40._0_1_ = 0x14;
  FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x13e],
               (undefined4 *)&stack0xfffffecc,1,0,(undefined1 *)0x0);
  uStack_40._0_1_ = 0;
  if (0x14 < uVar13) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar9);
  }
  FUN_007ed3b0((int)param_1);
  param_1[0x106] = 5;
  pvVar3 = operator_new(0x360);
  if (pvVar3 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar13 = 0x20;
    pcVar9 = _malloc(0x20);
    _strncpy(pcVar9,"ui/filmpro_1write.dds",0x15);
    pcVar9[0x15] = '\0';
    piVar2 = (int *)((uint)piVar2 | 2);
    uStack_40 = CONCAT31(uStack_40._1_3_,0x16);
    puVar6 = FUN_0069d820(pvVar3,(undefined4 *)&stack0xfffffecc,0,0,0x3f800000,0x3f800000);
  }
  uStack_40 = 0x17;
  (**(code **)(param_1[0x133] + 4))();
  param_1[0x138] = (int)puVar6;
  (**(code **)param_1[0x133])();
  uStack_40 = 0;
  if ((((uint)piVar2 & 2) != 0) && (0x14 < uVar13)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar9);
  }
  pcVar9 = &stack0xfffffed8;
  uVar13 = 0x14;
  _strncpy(pcVar9,"star_head",9);
  pcVar9[9] = '\0';
  uStack_40 = CONCAT31(uStack_40._1_3_,0x18);
  FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x138],
               (undefined4 *)&stack0xfffffecc,1,0,(undefined1 *)0x0);
  if (0x14 < uVar13) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar9);
  }
  ExceptionList = pvStack_48;
  return;
}


//// FUNCTION FUN_007ee310 @ 007ee310 ////

int * __thiscall FUN_007ee310(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1bfc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MoodHUDCard_Constructor(this,param_2);
  *(undefined ***)this = &PTR_FUN_00d59bfc;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d59be4;
  piVar1 = (int *)((int)this + 0x4b8);
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 **)((int)this + 0x4c0) = (undefined4 *)((int)this + 0x4b4);
  *(undefined4 *)((int)this + 0x4b4) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0x4c8) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x4bc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 **)((int)this + 0x4d8) = (undefined4 *)((int)this + 0x4cc);
  *(undefined4 *)((int)this + 0x4cc) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 **)((int)this + 0x4f0) = (undefined4 *)((int)this + 0x4e4);
  *(undefined4 *)((int)this + 0x4e4) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 **)((int)this + 0x508) = (undefined4 *)((int)this + 0x4fc);
  *(undefined4 *)((int)this + 0x4fc) = &PTR_LAB_00d2c758;
  *(undefined4 *)((int)this + 0x510) = 0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  FUN_00508d30((undefined4 *)((int)this + 0x514));
  *(undefined4 *)((int)this + 0x560) = 0;
  *(undefined4 *)((int)this + 0x558) = 0;
  *(undefined4 *)((int)this + 0x55c) = 0;
  *(undefined4 **)((int)this + 0x560) = (undefined4 *)((int)this + 0x554);
  *(undefined4 *)((int)this + 0x554) = &PTR_LAB_00d59bd4;
  *(undefined4 *)((int)this + 0x568) = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  *(undefined4 *)((int)this + 0x570) = 0;
  FUN_007ed6d0(this);
  *(undefined1 *)((int)this + 0x4ab) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007ee430 @ 007ee430 ////

undefined4 * __thiscall FUN_007ee430(void *this,byte param_1)

{
  FUN_007ed050(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007ee480 @ 007ee480 ////

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_007ee480(int *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  void *unaff_EBP;
  undefined **appuStack_344 [10];
  undefined4 uStack_31c;
  void **ppvStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  uint uVar8;
  void *apvStack_2c8 [2];
  uint uStack_2c0;
  undefined1 uStack_2bc;
  undefined1 uStack_2bb;
  void *pvStack_2a8;
  uint uStack_2a0;
  undefined1 auStack_294 [12];
  void *pvStack_288;
  uint uStack_280;
  undefined1 auStack_274 [12];
  void *pvStack_268;
  uint uStack_260;
  undefined1 auStack_254 [12];
  void *apvStack_248 [2];
  uint uStack_240;
  void *apvStack_228 [2];
  uint uStack_220;
  void *pvStack_208;
  uint uStack_200;
  undefined1 auStack_1f4 [12];
  void *apvStack_1e8 [2];
  uint uStack_1e0;
  void *pvStack_1c8;
  uint uStack_1c0;
  undefined1 auStack_1b8 [16];
  void *pvStack_1a8;
  uint uStack_1a0;
  undefined1 auStack_19c [40];
  undefined4 auStack_174 [14];
  undefined4 auStack_13c [11];
  undefined4 auStack_110 [19];
  undefined4 auStack_c4 [11];
  undefined4 auStack_98 [20];
  undefined4 auStack_48 [11];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1cd8;
  local_c = ExceptionList;
  if (param_1[0x132] == 0) {
    return;
  }
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_005b22a0(param_1[0x132]);
  uVar5 = (**(code **)(*piVar4 + 0x24))();
  switch(uVar5) {
  case 2:
    iVar7 = FUN_005b2130(param_1[0x132]);
    uVar5 = FUN_004bdc40(iVar7);
    if ((char)uVar5 == '\0') {
      FUN_00401de0(auStack_1f4,"ui/filmpro_1write.dds",0xffffffff);
      uStack_4 = 0;
      (**(code **)(*(int *)param_1[0x138] + 0x100))();
      unaff_EBP = pvStack_208;
      uStack_1c0 = uStack_200;
    }
    else {
      FUN_00401de0(auStack_274,"ui/filmpro_3writen.dds",0xffffffff);
      uStack_4 = 1;
      (**(code **)(*(int *)param_1[0x138] + 0x100))();
      unaff_EBP = pvStack_288;
      uStack_1c0 = uStack_280;
    }
    break;
  case 3:
    iVar7 = (**(code **)(*piVar4 + 0x1c))();
    uStack_18 = 2;
    uVar8 = 1;
    if (*(int *)(iVar7 + 0x38) == 4) {
LAB_007ee612:
      bVar1 = true;
    }
    else {
      iVar7 = (**(code **)(*piVar4 + 0x1c))();
      uVar8 = 3;
      bVar1 = false;
      if (*(int *)(iVar7 + 0x38) == 0) goto LAB_007ee612;
    }
    if ((uVar8 & 2) != 0) {
      uVar8 = uVar8 & 0xfffffffd;
      FUN_00526bb0(auStack_110);
    }
    uStack_18 = 0xffffffff;
    if ((uVar8 & 1) != 0) {
      FUN_00526bb0(auStack_98);
    }
    if (!bVar1) goto LAB_007eeb62;
    iVar7 = FUN_005b2130(param_1[0x132]);
    uVar5 = FUN_004bdc40(iVar7);
    if ((char)uVar5 == '\0') {
      uStack_310 = 0x7ee686;
      FUN_00401de0(apvStack_1e8,"ui/filmpro_1write.dds",0xffffffff);
      ppvStack_318 = apvStack_1e8;
      uStack_314 = 0;
      uStack_310 = 0;
      uStack_18 = 3;
      uStack_31c = 0x7ee6bc;
      (**(code **)(*(int *)param_1[0x138] + 0x100))();
      unaff_EBP = apvStack_1e8[0];
      uStack_1c0 = uStack_1e0;
    }
    else {
      uStack_310 = 0x7ee6f2;
      FUN_00401de0(apvStack_248,"ui/filmpro_3writen.dds",0xffffffff);
      ppvStack_318 = apvStack_248;
      uStack_314 = 0;
      uStack_310 = 0;
      uStack_18 = 4;
      uStack_31c = 0x7ee72c;
      (**(code **)(*(int *)param_1[0x138] + 0x100))();
      unaff_EBP = apvStack_248[0];
      uStack_1c0 = uStack_240;
    }
    break;
  case 4:
    iVar7 = (**(code **)(*piVar4 + 0x1c))();
    puStack_8 = (undefined1 *)0x5;
    bVar1 = false;
    if (*(int *)(iVar7 + 0x38) == 0) {
LAB_007ee799:
      bVar2 = true;
    }
    else {
      iVar7 = (**(code **)(*piVar4 + 0x1c))();
      bVar1 = true;
      bVar2 = false;
      if (*(int *)(iVar7 + 0x38) == 4) goto LAB_007ee799;
    }
    if (bVar1) {
      FUN_00526bb0(auStack_13c);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_00526bb0(auStack_c4);
    if (bVar2) {
      pfVar6 = (float *)(**(code **)(*piVar4 + 0x38))();
      if (*pfVar6 < 1.0) {
        FUN_00401de0(&uStack_2bc,"ui/filmpro_casting.dds",0xffffffff);
        local_c = (void *)0x7;
        uStack_310 = 0x7ee8b1;
        (**(code **)(*(int *)param_1[0x138] + 0x100))();
        unaff_EBP = apvStack_2c8[0];
        uStack_1c0 = uStack_2c0;
      }
      else {
        FUN_00401de0(auStack_19c,"ui/filmpro_castdone.dds",0xffffffff);
        local_c = (void *)0x6;
        uStack_310 = 0x7ee84b;
        (**(code **)(*(int *)param_1[0x138] + 0x100))();
        unaff_EBP = pvStack_1a8;
        uStack_1c0 = uStack_1a0;
      }
    }
    else {
      FUN_00401de0(auStack_1b8,"ui/filmpro_caststart.dds",0xffffffff);
      puStack_8 = (undefined1 *)0x8;
      (**(code **)(*(int *)param_1[0x138] + 0x100))();
      unaff_EBP = pvStack_1c8;
    }
    break;
  case 5:
    cVar3 = (**(code **)(*piVar4 + 0x28))();
    if (cVar3 != '\0') goto LAB_007eeb62;
    uStack_310 = 0x7ee95b;
    FUN_00401de0(apvStack_228,"ui/filmpro_4film.dds",0xffffffff);
    uStack_314 = 0;
    uStack_310 = 0;
    ppvStack_318 = apvStack_228;
    uStack_18 = 9;
    uStack_31c = 0x7ee995;
    (**(code **)(*(int *)param_1[0x138] + 0x100))();
    unaff_EBP = apvStack_228[0];
    uStack_1c0 = uStack_220;
    break;
  case 6:
    FUN_00401de0(auStack_294,"ui/filmpro_5filmed.dds",0xffffffff);
    uStack_4 = 10;
    (**(code **)(*(int *)param_1[0x138] + 0x100))();
    unaff_EBP = pvStack_2a8;
    uStack_1c0 = uStack_2a0;
    break;
  case 7:
    FUN_00401de0(auStack_254,"ui/filmpro_8release.dds",0xffffffff);
    uStack_4 = 0xb;
    (**(code **)(*(int *)param_1[0x138] + 0x100))();
    uStack_18 = 0xffffffff;
    if (0x14 < uStack_260) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_268);
    }
    if ((param_1[0x15a] == 0) && (iVar7 = FUN_005b2bc0(param_1[0x132]), iVar7 != 0)) {
      iVar7 = FUN_005b2bc0(param_1[0x132]);
      uVar5 = FUN_005ccce0(iVar7);
      if ((char)uVar5 == '\0') {
        FUN_007eccb0(param_1);
      }
    }
    goto LAB_007eeb62;
  default:
    apvStack_2c8[0] = (void *)((uint)apvStack_2c8[0] & 0xffffff00);
    _strncpy((char *)apvStack_2c8,"ui/filmTC.dds",0xd);
    uStack_2bb = 0;
    uStack_4 = 0xc;
    (**(code **)(*(int *)param_1[0x138] + 0x100))();
    uStack_18 = 0xffffffff;
    if (&stack0xfffffd00 <= &DAT_00000014) goto LAB_007eeb62;
    goto LAB_007eeb5a;
  }
  uStack_18 = 0xffffffff;
  if (0x14 < uStack_1c0) {
LAB_007eeb5a:
    uStack_18 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
LAB_007eeb62:
  iVar7 = (**(code **)(*piVar4 + 0x24))();
  (**(code **)(*piVar4 + 0x1c))();
  uStack_1c = 0xd;
  FUN_0043dd00(appuStack_344);
  appuStack_344[0] = &PTR_FUN_00d21284;
  FUN_007ec9b0(param_1,iVar7);
  iVar7 = (**(code **)(*piVar4 + 0x24))();
  param_1[0x154] = iVar7;
  uStack_310 = 0x7eebd1;
  iVar7 = (**(code **)(*piVar4 + 0x1c))();
  param_1[0x153] = *(int *)(iVar7 + 0x38);
  FUN_00526bb0(auStack_48);
  uStack_4 = 0xffffffff;
  FUN_00526bb0(auStack_174);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007ef2d0 @ 007ef2d0 ////

bool __cdecl FUN_007ef2d0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = (**(code **)(*param_1 + 0x10c))();
    if (0 < iVar1) {
      iVar1 = (**(code **)(*param_2 + 0x10c))();
      if (0 < iVar1) {
        iVar1 = (**(code **)(*param_1 + 0x10c))();
        iVar2 = (**(code **)(*param_2 + 0x10c))();
        return iVar1 < iVar2;
      }
    }
    iVar1 = (**(code **)(*param_1 + 0x10c))();
    if (0 < iVar1) {
      return true;
    }
  }
  return false;
}


//// FUNCTION FUN_007ef340 @ 007ef340 ////

int * __thiscall FUN_007ef340(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007ef380 @ 007ef380 ////

int __fastcall FUN_007ef380(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007ef470 @ 007ef470 ////

int __fastcall FUN_007ef470(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007ef680 @ 007ef680 ////

int * __thiscall FUN_007ef680(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007ef6b0 @ 007ef6b0 ////

int * __cdecl FUN_007ef6b0(int param_1,int param_2,int *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    (**(code **)(*param_3 + 4))();
    param_3[5] = *(int *)(param_1 + 0x14);
    (**(code **)*param_3)();
    param_1 = param_1 + 0x18;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_007ef700 @ 007ef700 ////

int * __cdecl FUN_007ef700(int param_1,int param_2,int *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    (**(code **)(*param_3 + 4))();
    param_3[5] = *(int *)(param_1 + 0x14);
    (**(code **)*param_3)();
    param_1 = param_1 + 0x18;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_007ef740 @ 007ef740 ////

undefined4 * __cdecl FUN_007ef740(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar1 = param_3 + -6;
    iVar2 = param_2 + -0x18;
    (**(code **)(param_3[-6] + 4))();
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    (**(code **)*puVar1)();
    param_3 = puVar1;
    param_2 = iVar2;
  } while (iVar2 != param_1);
  return puVar1;
}


//// FUNCTION FUN_007ef780 @ 007ef780 ////

undefined4 * __cdecl FUN_007ef780(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar1 = param_3 + -6;
    iVar2 = param_2 + -0x18;
    (**(code **)(param_3[-6] + 4))();
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    (**(code **)*puVar1)();
    param_3 = puVar1;
    param_2 = iVar2;
  } while (iVar2 != param_1);
  return puVar1;
}


//// FUNCTION FUN_007ef840 @ 007ef840 ////

undefined4 FUN_007ef840(void)

{
  return DAT_0104ea94;
}


//// FUNCTION FUN_007ef850 @ 007ef850 ////

float10 __fastcall FUN_007ef850(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x358) != 0) {
    iVar1 = (*(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0x358)) / 0x18;
  }
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return ((float10)*(int *)(param_1 + 0x390) * (float10)DAT_00e5bd34 +
         (float10)DAT_00e5bd34 * (float10)0.4 * (float10)*(int *)(param_1 + 0x394)) -
         fVar2 * (float10)10.0;
}


//// FUNCTION FUN_007ef8d0 @ 007ef8d0 ////

ulonglong __fastcall FUN_007ef8d0(int *param_1)

{
  ulonglong uVar1;
  
  (**(code **)(*param_1 + 0x14))();
  FUN_007ef850((int)param_1);
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_007ef910 @ 007ef910 ////

ulonglong __fastcall FUN_007ef910(int *param_1)

{
  undefined2 unaff_SI;
  float10 fVar1;
  float10 fVar2;
  ulonglong uVar3;
  
  fVar1 = FUN_007ef850((int)param_1);
  fVar2 = (float10)(**(code **)(*param_1 + 0x14))();
  FUN_00ad1180((double)(((float10)(float)fVar1 - fVar2) / ((float10)DAT_00e5bd34 * (float10)0.6)),
               unaff_SI);
  uVar3 = FUN_00acd42c();
  return uVar3;
}


//// FUNCTION FUN_007efbb0 @ 007efbb0 ////

void __cdecl FUN_007efbb0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_007efc10 @ 007efc10 ////

void __cdecl FUN_007efc10(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_007efc70 @ 007efc70 ////

void __fastcall FUN_007efc70(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d59df0;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_007efcc0 @ 007efcc0 ////

void __fastcall FUN_007efcc0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d59df0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_007efdc0 @ 007efdc0 ////

void __fastcall FUN_007efdc0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d59e00;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_007efef0 @ 007efef0 ////

undefined4 * __thiscall FUN_007efef0(void *this,byte param_1)

{
  FUN_00435e20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007eff10 @ 007eff10 ////

undefined4 * __thiscall FUN_007eff10(void *this,byte param_1)

{
  FUN_007efdc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007eff30 @ 007eff30 ////

void __cdecl FUN_007eff30(int *param_1,int *param_2)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce1d18;
  pvStack_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_10 = param_1[5];
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d59e00;
  ExceptionList = &pvStack_c;
  if (local_10 != 0) {
    local_1c = (int *)(local_10 + 0x18);
    local_20 = *local_1c;
    ExceptionList = &pvStack_c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  (**(code **)(*param_1 + 4))();
  param_1[5] = param_2[5];
  (**(code **)*param_1)();
  (**(code **)(*param_2 + 4))();
  param_2[5] = local_10;
  (**(code **)*param_2)();
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007f0000 @ 007f0000 ////

void __cdecl
FUN_007f0000(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined *param_10)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce1d38;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    iVar1 = param_1 + iVar4 * 0x18;
    cVar3 = (*(code *)param_10)(*(undefined4 *)(iVar1 + 0x14),param_9);
    if (cVar3 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
    (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
    puVar2[5] = *(undefined4 *)(iVar1 + 0x14);
    (**(code **)*puVar2)();
    param_2 = iVar4;
  }
  puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
  (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
  puVar2[5] = param_9;
  (**(code **)*puVar2)();
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007f00d0 @ 007f00d0 ////

void __cdecl FUN_007f00d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce1d58;
  local_c = ExceptionList;
  iVar1 = (param_3 - param_1) / 0x18;
  iVar2 = (param_2 - param_1) / 0x18;
  iVar5 = iVar2;
  local_38 = iVar1;
  while (iVar3 = iVar5, iVar3 != 0) {
    iVar5 = local_38 % iVar3;
    local_38 = iVar3;
  }
  if ((local_38 < iVar1) && (0 < local_38)) {
    piVar8 = (int *)(param_1 + local_38 * 0x18);
    param_2 = iVar2 * 0x18;
    ExceptionList = &local_c;
    do {
      local_18 = &local_24;
      iVar1 = param_2 + (int)piVar8;
      local_20 = 0;
      local_1c = (int *)0x0;
      local_24 = &PTR_LAB_00d59e00;
      local_10 = *(int *)(iVar2 * -0x18 + 0x14 + iVar1);
      if (local_10 != 0) {
        local_1c = (int *)(local_10 + 0x18);
        local_20 = *local_1c;
        *(int **)(*local_1c + 4) = &local_20;
        *local_1c = (int)&local_20;
      }
      local_4 = 0;
      if (iVar1 == param_3) {
        piVar7 = &param_1;
      }
      else {
        iStack_30 = iVar1;
        piVar7 = &iStack_30;
      }
      piVar6 = (int *)*piVar7;
      piVar7 = piVar8;
      while (piVar4 = piVar6, piVar4 != piVar8) {
        (**(code **)(*piVar7 + 4))();
        piVar7[5] = piVar4[5];
        (**(code **)*piVar7)();
        iVar1 = (param_3 - (int)piVar4) / 0x18;
        if (iVar2 < iVar1) {
          iStack_2c = param_2 + (int)piVar4;
          piVar7 = &iStack_2c;
        }
        else {
          iStack_28 = param_1 + (iVar2 - iVar1) * 0x18;
          piVar7 = &iStack_28;
        }
        piVar6 = (int *)*piVar7;
        piVar7 = piVar4;
      }
      (**(code **)(*piVar7 + 4))();
      piVar7[5] = local_10;
      (**(code **)*piVar7)();
      if (local_1c != (int *)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != 0) {
        *(int **)(local_20 + 4) = local_1c;
      }
      piVar8 = piVar8 + -6;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007f02b0 @ 007f02b0 ////

void __fastcall FUN_007f02b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0.0 <= *(float *)(param_1 + 0xc0)) {
    iVar2 = 0;
    iVar3 = 0;
    while( true ) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x358) != 0) {
        iVar1 = (*(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0x358)) / 0x18;
      }
      if (iVar1 <= iVar2) break;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x358) + iVar3 + 0x14) + 0x2c))();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    }
  }
  return;
}


//// FUNCTION FUN_007f0320 @ 007f0320 ////

undefined1 __thiscall FUN_007f0320(void *this,int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x358);
  if (iVar3 != *(int *)((int)this + 0x35c)) {
    while( true ) {
      iVar1 = FUN_007ec410(*(int *)(iVar3 + 0x14));
      if (iVar1 == param_1) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == *(int *)((int)this + 0x35c)) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


//// FUNCTION FUN_007f03e0 @ 007f03e0 ////

void __thiscall FUN_007f03e0(void *this,int param_1)

{
  int *this_00;
  char cVar1;
  int iVar2;
  
  if ((0 < param_1) && (iVar2 = *(int *)((int)this + 0x358), iVar2 != *(int *)((int)this + 0x35c)))
  {
    do {
      this_00 = *(int **)(iVar2 + 0x14);
      cVar1 = FUN_007e7910((int)this_00);
      if ((cVar1 != '\0') && (1 < *(int *)((int)this + 0x390))) {
        FUN_007e7e10(this_00);
        *(int *)((int)this + 0x390) = *(int *)((int)this + 0x390) + -1;
        *(int *)((int)this + 0x394) = *(int *)((int)this + 0x394) + 1;
        cVar1 = (**(code **)(*this_00 + 0x100))();
        if (cVar1 == '\0') {
          FUN_0089e5f0(this_00,'\x01');
        }
        param_1 = param_1 + -1;
        if (param_1 < 1) {
          return;
        }
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)((int)this + 0x35c));
  }
  return;
}


//// FUNCTION FUN_007f0470 @ 007f0470 ////

void __thiscall FUN_007f0470(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  
  if ((0 < param_1) && (iVar3 = *(int *)((int)this + 0x358), iVar3 != *(int *)((int)this + 0x35c)))
  {
    do {
      this_00 = *(int **)(iVar3 + 0x14);
      cVar2 = FUN_007e7910((int)this_00);
      iVar1 = DAT_0104ea94;
      if (cVar2 == '\0') {
        if (iVar3 == *(int *)((int)this + 0x358)) {
          (**(code **)(this_00[0x20] + 4))();
          this_00[0x25] = iVar1;
          (**(code **)this_00[0x20])();
        }
        FUN_007e7dc0(this_00);
        *(int *)((int)this + 0x394) = *(int *)((int)this + 0x394) + -1;
        *(int *)((int)this + 0x390) = *(int *)((int)this + 0x390) + 1;
        cVar2 = (**(code **)(*this_00 + 0x100))();
        if (cVar2 == '\0') {
          FUN_0089e5f0(this_00,'\x01');
        }
        param_1 = param_1 + -1;
        if (param_1 < 1) {
          return;
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0x35c));
  }
  return;
}


//// FUNCTION FUN_007f0540 @ 007f0540 ////

void __thiscall FUN_007f0540(void *this,int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x358);
  if (iVar3 != *(int *)((int)this + 0x35c)) {
    while( true ) {
      piVar1 = *(int **)(iVar3 + 0x14);
      cVar2 = FUN_007e7910((int)piVar1);
      if ((cVar2 != '\0') && (piVar1 != param_1)) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == *(int *)((int)this + 0x35c)) {
        return;
      }
    }
    FUN_007e7e10(piVar1);
    *(int *)((int)this + 0x390) = *(int *)((int)this + 0x390) + -1;
    *(int *)((int)this + 0x394) = *(int *)((int)this + 0x394) + 1;
  }
  return;
}


//// FUNCTION FUN_007f05b0 @ 007f05b0 ////

int __thiscall FUN_007f05b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x358);
  if (iVar3 != *(int *)((int)this + 0x35c)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x14);
      iVar2 = FUN_007ec410(iVar1);
      if (iVar2 != 0) {
        iVar2 = FUN_007ec410(iVar1);
        if (iVar2 == param_1) {
          return iVar1;
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0x35c));
  }
  return 0;
}


//// FUNCTION FUN_007f0610 @ 007f0610 ////

int __thiscall FUN_007f0610(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                       &TM::CProject::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00ace790(param_1,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                         &TM::CProjectObject::RTTI_Type_Descriptor,0);
    if (iVar1 != 0) {
      iVar1 = FUN_005d1940(iVar1);
      if (iVar1 != 0) goto LAB_007f0657;
    }
    return 0;
  }
LAB_007f0657:
  iVar1 = FUN_007f05b0(this,iVar1);
  return iVar1;
}


//// FUNCTION FUN_007f0670 @ 007f0670 ////

int __fastcall FUN_007f0670(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x358);
  iVar2 = 0;
  if (iVar3 != *(int *)(param_1 + 0x35c)) {
    do {
      cVar1 = FUN_007e7910(*(int *)(iVar3 + 0x14));
      if (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(param_1 + 0x35c));
  }
  return iVar2;
}


//// FUNCTION FUN_007f06b0 @ 007f06b0 ////

int __fastcall FUN_007f06b0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x358);
  iVar2 = 0;
  if (iVar3 != *(int *)(param_1 + 0x35c)) {
    do {
      cVar1 = FUN_007e7910(*(int *)(iVar3 + 0x14));
      if (cVar1 == '\0') {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(param_1 + 0x35c));
  }
  return iVar2;
}


//// FUNCTION FUN_007f06f0 @ 007f06f0 ////

void __fastcall FUN_007f06f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x358);
  if (iVar1 != *(int *)(param_1 + 0x35c)) {
    do {
      if (*(int **)(iVar1 + 0x14) != (int *)0x0) {
        FUN_007ec8c0(*(int **)(iVar1 + 0x14));
      }
      iVar1 = iVar1 + 0x18;
    } while (iVar1 != *(int *)(param_1 + 0x35c));
  }
  return;
}


//// FUNCTION FUN_007f0820 @ 007f0820 ////

void __cdecl FUN_007f0820(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_007eff30(param_2,param_1);
  }
  cVar1 = (*(code *)param_4)(param_3[5],param_2[5]);
  if (cVar1 != '\0') {
    FUN_007eff30(param_3,param_2);
  }
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_007eff30(param_2,param_1);
  }
  return;
}


//// FUNCTION FUN_007f0890 @ 007f0890 ////

void __cdecl
FUN_007f0890(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_stack_ffffffd4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce1d78;
  local_4 = 0;
  iVar4 = param_2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    in_stack_ffffffd4 = 0x7f08e3;
    cVar2 = (*(code *)param_10)();
    if (cVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    piVar5 = (int *)(param_1 + iVar4 * 0x18);
    (**(code **)(*piVar5 + 4))();
    piVar5[5] = *(int *)(param_1 + iVar3 * 0x18 + 0x14);
    (**(code **)*piVar5)();
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0x18);
    (**(code **)(*(int *)(param_1 + iVar4 * 0x18) + 4))();
    puVar1[5] = *(undefined4 *)(param_1 + param_3 * 0x18 + -4);
    (**(code **)*puVar1)();
    iVar4 = param_3 + -1;
  }
  iVar3 = 0;
  piVar5 = (int *)0x0;
  if (param_9 != 0) {
    piVar5 = (int *)(param_9 + 0x18);
    iVar3 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffffc8;
    *piVar5 = (int)&stack0xffffffc8;
  }
  FUN_007f0000(param_1,iVar4,param_2,&PTR_LAB_00d59e00,iVar3,piVar5,&stack0xffffffc4,
               in_stack_ffffffd4,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007f09f0 @ 007f09f0 ////

void __cdecl
FUN_007f09f0(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_ffffffe0;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce1d98;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_3 + 4))();
  param_3[5] = *(int *)(param_1 + 0x14);
  (**(code **)*param_3)();
  iVar1 = 0;
  piVar2 = (int *)0x0;
  if (param_9 != 0) {
    piVar2 = (int *)(param_9 + 0x18);
    iVar1 = *piVar2;
    *(undefined1 **)(*piVar2 + 4) = &stack0xffffffd4;
    *piVar2 = (int)&stack0xffffffd4;
  }
  FUN_007f0890(param_1,0,(param_2 - param_1) / 0x18,&PTR_LAB_00d59e00,iVar1,piVar2,&stack0xffffffd0,
               in_stack_ffffffe0,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007f0ad0 @ 007f0ad0 ////

void __thiscall FUN_007f0ad0(void *this,int param_1,char param_2)

{
  char cVar1;
  int *this_00;
  float10 fVar2;
  ulonglong uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  if (param_1 == 0) {
    this_00 = *(int **)(*(int *)((int)this + 0x358) + 0x14);
    (**(code **)(*this_00 + 100))(1,this,0xc1200000);
    (**(code **)(*this_00 + 0x5c))(1,this,0);
    cVar1 = FUN_007e7910((int)this_00);
    if (cVar1 == '\0') {
      uVar5 = DAT_00e5bd38;
      (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,DAT_00e5bd34 * 0.4);
      uVar4 = (undefined2)uVar5;
    }
    else {
      uVar5 = DAT_00e5bd38;
      (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,DAT_00e5bd34);
      uVar4 = (undefined2)uVar5;
    }
  }
  else {
    this_00 = *(int **)(*(int *)((int)this + 0x358) + 0x14 + param_1 * 0x18);
    if (param_2 == '\0') {
      fVar6 = *(float *)((int)this + 0x398) + 10.0;
    }
    else {
      fVar6 = 10.0;
    }
    (**(code **)(*this_00 + 100))
              (2,*(undefined4 *)(*(int *)((int)this + 0x358) + param_1 * 0x18 + -4),fVar6);
    (**(code **)(*this_00 + 0x5c))(1,this,0);
    cVar1 = FUN_007e7910((int)this_00);
    fVar6 = DAT_00e5bd34;
    if (cVar1 == '\0') {
      fVar6 = DAT_00e5bd34 * 0.4;
    }
    uVar5 = DAT_00e5bd38;
    (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,fVar6);
    uVar4 = (undefined2)uVar5;
  }
  cVar1 = (**(code **)(*this_00 + 0x100))();
  if (cVar1 == '\0') {
    FUN_0089e5f0(this_00,'\x01');
  }
  if ((this_00[0x58] == 0) && (this_00[0x54] == 0)) {
    (**(code **)(*(int *)this + 0xc))(this_00);
  }
  (**(code **)(*(int *)this + 0x14))();
  FUN_007ef850((int)this);
  uVar3 = FUN_00acd42c();
  FUN_007f0470(this,(int)uVar3);
  fVar2 = FUN_007ef850((int)this);
  fVar6 = (float)fVar2;
  fVar2 = (float10)(**(code **)(*(int *)this + 0x14))();
  FUN_00ad1180((double)(((float10)fVar6 - fVar2) / ((float10)DAT_00e5bd34 * (float10)0.6)),uVar4);
  uVar3 = FUN_00acd42c();
  FUN_007f03e0(this,(int)uVar3);
  return;
}


//// FUNCTION FUN_007f0c80 @ 007f0c80 ////

void __fastcall FUN_007f0c80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DI;
  float10 fVar4;
  float10 fVar5;
  ulonglong uVar6;
  
  iVar1 = param_1[0xe4];
  iVar2 = param_1[0xe5];
  iVar3 = FUN_007f0670((int)param_1);
  param_1[0xe4] = iVar3;
  iVar3 = FUN_007f06b0((int)param_1);
  param_1[0xe5] = iVar3;
  fVar4 = FUN_007ef850((int)param_1);
  fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
  fVar5 = (float10)(float)fVar4 - fVar5;
  if ((fVar5 < (float10)0.0 == (fVar5 == (float10)0.0)) &&
     ((param_1[0xe4] == iVar1 || (param_1[0xe5] == iVar2)))) {
    param_1[0xe6] = (int)((float)fVar5 / (float)(iVar2 + 1) + 2.0);
    fVar4 = FUN_007ef850((int)param_1);
    fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
    FUN_00ad1180((double)(((float10)(float)fVar4 - fVar5) / ((float10)DAT_00e5bd34 * (float10)0.6)),
                 unaff_DI);
    uVar6 = FUN_00acd42c();
    FUN_007f03e0(param_1,(int)uVar6);
    return;
  }
  param_1[0xe6] = 0;
  (**(code **)(*param_1 + 0x14))();
  FUN_007ef850((int)param_1);
  uVar6 = FUN_00acd42c();
  FUN_007f0470(param_1,(int)uVar6);
  return;
}


//// FUNCTION FUN_007f0db0 @ 007f0db0 ////

void __cdecl FUN_007f0db0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_3;
        *param_3 = &PTR_FUN_00d18c3c;
        iVar2 = *(int *)(param_1 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 0x18;
      param_3 = param_3 + 6;
      puVar3 = puVar3 + 6;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_007f0e20 @ 007f0e20 ////

void __cdecl FUN_007f0e20(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_3;
        *param_3 = &PTR_LAB_00d59e00;
        iVar2 = *(int *)(param_1 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 0x18;
      param_3 = param_3 + 6;
      puVar3 = puVar3 + 6;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_007f0e90 @ 007f0e90 ////

void __cdecl FUN_007f0e90(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_007f0820(param_1,param_1 + iVar1 * 6,param_1 + iVar1 * 0xc,param_4);
    FUN_007f0820(param_2 + iVar1 * -6,param_2,param_2 + iVar1 * 6,param_4);
    FUN_007f0820(param_3 + iVar1 * -0xc,param_3 + iVar1 * -6,param_3,param_4);
    FUN_007f0820(param_1 + iVar1 * 6,param_2,param_3 + iVar1 * -6,param_4);
    return;
  }
  FUN_007f0820(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_007f0f40 @ 007f0f40 ////

void __cdecl FUN_007f0f40(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_stack_ffffffe4;
  
  iVar2 = (param_2 - param_1) / 0x18;
  iVar3 = iVar2 / 2;
  if (0 < iVar3) {
    piVar4 = (int *)(param_1 + 0x14 + iVar3 * 0x18);
    do {
      iVar5 = 0;
      piVar6 = (int *)0x0;
      piVar4 = piVar4 + -6;
      iVar1 = *piVar4;
      iVar3 = iVar3 + -1;
      if (iVar1 != 0) {
        piVar6 = (int *)(iVar1 + 0x18);
        iVar5 = *piVar6;
        *(undefined1 **)(*piVar6 + 4) = &stack0xffffffd8;
        *piVar6 = (int)&stack0xffffffd8;
      }
      FUN_007f0890(param_1,iVar3,iVar2,&PTR_LAB_00d59e00,iVar5,piVar6,&stack0xffffffd4,
                   in_stack_ffffffe4,iVar1,param_3);
    } while (0 < iVar3);
  }
  return;
}


//// FUNCTION FUN_007f1010 @ 007f1010 ////

void __cdecl FUN_007f1010(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_ffffffec;
  
  iVar2 = 0;
  piVar3 = (int *)0x0;
  iVar1 = *(int *)(param_2 + -4);
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 0x18);
    iVar2 = *piVar3;
    *(undefined1 **)(*piVar3 + 4) = &stack0xffffffe0;
    *piVar3 = (int)&stack0xffffffe0;
  }
  FUN_007f09f0(param_1,param_2 + -0x18,(int *)(param_2 + -0x18),&PTR_LAB_00d59e00,iVar2,piVar3,
               &stack0xffffffdc,in_stack_ffffffec,iVar1,param_3);
  return;
}


//// FUNCTION FUN_007f1080 @ 007f1080 ////

void __fastcall FUN_007f1080(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0xd6] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (param_1[0xd7] - param_1[0xd6]) / 0x18;
  }
  iVar4 = 0;
  cVar1 = '\0';
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      FUN_007f0ad0(param_1,iVar4,cVar1);
      cVar1 = FUN_007e7910(*(int *)(param_1[0xd6] + 0x14 + iVar3));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 < iVar2);
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_007f1140 @ 007f1140 ////

void __cdecl FUN_007f1140(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    puVar3 = param_1 + 2;
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_1;
        *param_1 = &PTR_FUN_00d18c3c;
        iVar2 = *(int *)(param_3 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 6;
      puVar3 = puVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_007f11e0 @ 007f11e0 ////

void __cdecl FUN_007f11e0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    puVar3 = param_1 + 2;
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = param_1;
        *param_1 = &PTR_LAB_00d59e00;
        iVar2 = *(int *)(param_3 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 6;
      puVar3 = puVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_007f12b0 @ 007f12b0 ////

void __cdecl FUN_007f12b0(undefined4 *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_8;
  int *local_4;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  FUN_007f0e90(param_2,piVar4,param_3 + -6,param_4);
  piStack_8 = piVar4;
  while (((param_2 < piStack_8 &&
          (cVar2 = (*(code *)param_4)(piStack_8[-1],piStack_8[5]), cVar2 == '\0')) &&
         (cVar2 = (*(code *)param_4)(piStack_8[5],piStack_8[-1]), cVar2 == '\0'))) {
    piStack_8 = piStack_8 + -6;
  }
  do {
    piVar4 = piVar4 + 6;
    piVar1 = piVar4;
    local_4 = piVar4;
    piVar5 = piStack_8;
    if ((param_3 <= piVar4) || (cVar2 = (*(code *)param_4)(piVar4[5],piStack_8[5]), cVar2 != '\0'))
    break;
    cVar2 = (*(code *)param_4)(piStack_8[5],piVar4[5]);
  } while (cVar2 == '\0');
joined_r0x007f136a:
  do {
    if (param_3 <= piVar1) {
LAB_007f13b4:
      if (param_2 < piStack_8) {
        piVar3 = piStack_8 + -1;
        do {
          cVar2 = (*(code *)param_4)(*piVar3,piVar5[5]);
          piVar4 = local_4;
          if (cVar2 == '\0') {
            cVar2 = (*(code *)param_4)(piVar5[5],*piVar3);
            if (cVar2 != '\0') break;
            piVar5 = piVar5 + -6;
            FUN_007eff30(piVar5,piVar3 + -5);
          }
          piStack_8 = piStack_8 + -6;
          piVar3 = piVar3 + -6;
        } while (param_2 < piStack_8);
      }
      if (piStack_8 == param_2) {
        if (piVar1 == param_3) {
          *param_1 = piVar5;
          param_1[1] = piVar4;
          return;
        }
        if (piVar4 != piVar1) {
          FUN_007eff30(piVar5,piVar4);
        }
        piVar4 = piVar4 + 6;
        FUN_007eff30(piVar5,piVar1);
        piVar1 = piVar1 + 6;
        local_4 = piVar4;
        piVar5 = piVar5 + 6;
      }
      else {
        piStack_8 = piStack_8 + -6;
        if (piVar1 == param_3) {
          piVar5 = piVar5 + -6;
          if (piStack_8 != piVar5) {
            FUN_007eff30(piStack_8,piVar5);
          }
          piVar4 = piVar4 + -6;
          FUN_007eff30(piVar5,piVar4);
          local_4 = piVar4;
        }
        else {
          FUN_007eff30(piVar1,piStack_8);
          piVar1 = piVar1 + 6;
        }
      }
      goto joined_r0x007f136a;
    }
    cVar2 = (*(code *)param_4)(piVar5[5],piVar1[5]);
    local_4 = piVar4;
    if (cVar2 == '\0') {
      cVar2 = (*(code *)param_4)(piVar1[5],piVar5[5]);
      if (cVar2 != '\0') goto LAB_007f13b4;
      local_4 = piVar4 + 6;
      FUN_007eff30(piVar4,piVar1);
    }
    piVar4 = local_4;
    piVar1 = piVar1 + 6;
  } while( true );
}


//// FUNCTION FUN_007f1500 @ 007f1500 ////

void __cdecl FUN_007f1500(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar2 = param_1;
  if (param_1 != param_2) {
    while (iVar3 = iVar2, iVar2 = iVar3 + 0x18, iVar2 != param_2) {
      cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(param_1 + 0x14));
      if (cVar4 == '\0') {
        cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar3 + 0x14));
        iVar1 = iVar2;
        if (cVar4 != '\0') {
          do {
            iVar5 = iVar1 + -0x18;
            cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar1 + -0x1c))
            ;
            iVar1 = iVar5;
          } while (cVar4 != '\0');
          if ((iVar5 != iVar2) && (iVar2 != iVar3 + 0x30)) {
            FUN_007f00d0(iVar5,iVar2,iVar3 + 0x30);
          }
        }
      }
      else if ((param_1 != iVar2) && (iVar2 != iVar3 + 0x30)) {
        FUN_007f00d0(param_1,iVar2,iVar3 + 0x30);
      }
    }
  }
  return;
}


//// FUNCTION FUN_007f16f0 @ 007f16f0 ////

void __cdecl FUN_007f16f0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (1 < iVar1 / 0x18) {
    FUN_007f1010(param_1,param_2,param_3);
    param_2 = param_2 + -0x18;
    iVar1 = param_2 - param_1;
  }
  return;
}


//// FUNCTION FUN_007f1750 @ 007f1750 ////

void FUN_007f1750(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00435e20(param_1);
  }
  return;
}


//// FUNCTION FUN_007f1780 @ 007f1780 ////

void __fastcall FUN_007f1780(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_00435e20(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007f17d0 @ 007f17d0 ////

undefined4 * FUN_007f17d0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007f1140(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007f1800 @ 007f1800 ////

void FUN_007f1800(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007efdc0(param_1);
  }
  return;
}


//// FUNCTION FUN_007f1830 @ 007f1830 ////

void __fastcall FUN_007f1830(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007efdc0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007f1880 @ 007f1880 ////

undefined4 * FUN_007f1880(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007f11e0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007f18b0 @ 007f18b0 ////

void FUN_007f18b0(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1db8;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_007f1920 @ 007f1920 ////

void FUN_007f1920(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1dd8;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_007f1990 @ 007f1990 ////

void __cdecl FUN_007f1990(int *param_1,int *param_2,int param_3,undefined *param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 / 0x18;
    if (iVar2 < 0x21) {
LAB_007f1a70:
      if (1 < iVar2) {
        FUN_007f1500((int)param_1,(int)param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < ((int)param_2 - (int)param_1) / 0x18) {
          FUN_007f0f40((int)param_1,(int)param_2,param_4);
        }
        FUN_007f16f0((int)param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_007f1a70;
    }
    FUN_007f12b0(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)local_8 - (int)param_1) / 0x18 < ((int)param_2 - (int)local_4) / 0x18) {
      FUN_007f1990(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_007f1990(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_007f1ae0 @ 007f1ae0 ////

void __fastcall FUN_007f1ae0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_00435e20(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007f1af0 @ 007f1af0 ////

void __thiscall FUN_007f1af0(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_007ef6b0((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_00435e20(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007f1b50 @ 007f1b50 ////

void __fastcall FUN_007f1b50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007efdc0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007f1bb0 @ 007f1bb0 ////

void __thiscall FUN_007f1bb0(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_007ef700((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007efdc0(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007f1ca0 @ 007f1ca0 ////

void __thiscall FUN_007f1ca0(void *this,int *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined ***local_28;
  int local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ce1df8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d18c3c;
  ExceptionList = &local_10;
  if (local_20 != 0) {
    local_2c = (int *)(local_20 + 0x18);
    local_30 = *local_2c;
    ExceptionList = &local_10;
    *(int **)(*local_2c + 4) = &local_30;
    *local_2c = (int)&local_30;
  }
  iVar3 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar3 != 0) {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x18;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    local_18 = this;
    puVar1 = &stack0xffffffc0;
    if (0xaaaaaaaU - iVar2 < param_2) {
      FUN_007f18b0();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0xaaaaaaa - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x18;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_007ef470((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007f0db0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007f1140(puVar5,param_2,(int)&local_34);
      FUN_007f0db0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_007f1750(puVar5,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 6;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 6;
      *(undefined4 **)((int)this + 4) = puVar4;
    }
    else {
      puVar5 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar5 - (int)param_1) / 0x18) < param_2) {
        FUN_007f0db0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007f17d0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007efbb0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007f0db0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007ef740((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007efbb0(param_1,param_1 + param_2 * 6,(int)&local_34);
      }
    }
  }
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_007f1fd0 @ 007f1fd0 ////

void __thiscall FUN_007f1fd0(void *this,int *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined ***local_28;
  int local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ce1e18;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d59e00;
  ExceptionList = &local_10;
  if (local_20 != 0) {
    local_2c = (int *)(local_20 + 0x18);
    local_30 = *local_2c;
    ExceptionList = &local_10;
    *(int **)(*local_2c + 4) = &local_30;
    *local_2c = (int)&local_30;
  }
  iVar3 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar3 != 0) {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x18;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    local_18 = this;
    puVar1 = &stack0xffffffc0;
    if (0xaaaaaaaU - iVar2 < param_2) {
      FUN_007f1920();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x18;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0xaaaaaaa - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x18;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_007ef380((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007f0e20(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007f11e0(puVar5,param_2,(int)&local_34);
      FUN_007f0e20((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_007f1800(puVar5,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 6;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 6;
      *(undefined4 **)((int)this + 4) = puVar4;
    }
    else {
      puVar5 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar5 - (int)param_1) / 0x18) < param_2) {
        FUN_007f0e20((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007f1880(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007efc10(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007f0e20((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007ef780((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007efc10(param_1,param_1 + param_2 * 6,(int)&local_34);
      }
    }
  }
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_007f2340 @ 007f2340 ////

void __fastcall FUN_007f2340(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce1e62;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d59e2c;
  param_1[0x14] = &PTR_FUN_00d59e10;
  local_4 = 3;
  FUN_007f1780((int)(param_1 + 0xd1));
  while( true ) {
    if ((param_1[0xd6] == 0) || ((int)(param_1[0xd7] - param_1[0xd6]) / 0x18 == 0)) break;
    puVar1 = *(undefined4 **)(param_1[0xd7] + -4);
    if ((param_1[0xd6] != 0) &&
       (puVar2 = (undefined4 *)param_1[0xd7], ((int)puVar2 - param_1[0xd6]) / 0x18 != 0)) {
      puVar4 = puVar2 + -6;
      if (puVar4 != puVar2) {
        piVar3 = puVar2 + -4;
        do {
          *puVar4 = &PTR_LAB_00d59e00;
          if ((int *)*piVar3 != (int *)0x0) {
            *(int *)*piVar3 = piVar3[-1];
          }
          if (piVar3[-1] != 0) {
            *(int *)(piVar3[-1] + 4) = *piVar3;
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
          piVar3[3] = 0;
          if ((int *)*piVar3 != (int *)0x0) {
            *(int *)*piVar3 = piVar3[-1];
          }
          if (piVar3[-1] != 0) {
            *(int *)(piVar3[-1] + 4) = *piVar3;
          }
          piVar3[-1] = 0;
          *piVar3 = 0;
          puVar4 = puVar4 + 6;
          piVar3 = piVar3 + 6;
        } while (puVar4 != puVar2);
      }
      param_1[0xd7] = param_1[0xd7] + -0x18;
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  param_1[0xda] = &PTR_LAB_00d59e00;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdf] = 0;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  FUN_007f1830((int)(param_1 + 0xd5));
  FUN_007f1780((int)(param_1 + 0xd1));
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007f2530 @ 007f2530 ////

void __fastcall FUN_007f2530(int *param_1)

{
  FUN_007f1990((int *)param_1[0xd6],(int *)param_1[0xd7],(param_1[0xd7] - param_1[0xd6]) / 0x18,
               FUN_007ef2d0);
  FUN_007f1080(param_1);
  return;
}


//// FUNCTION FUN_007f2570 @ 007f2570 ////

void __thiscall FUN_007f2570(void *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  
  fVar4 = param_1;
  if (param_1 != 0.0) {
    piVar6 = *(int **)((int)this + 0x348);
    if (piVar6 != *(int **)((int)this + 0x34c)) {
      do {
        if ((float)piVar6[5] == param_1) {
          FUN_007f1af0((void *)((int)this + 0x344),&param_1,piVar6);
          *(int *)((int)this + 0x364) = *(int *)((int)this + 0x364) + -1;
          break;
        }
        piVar6 = piVar6 + 6;
      } while (piVar6 != *(int **)((int)this + 0x34c));
    }
    piVar6 = *(int **)((int)this + 0x358);
    if (piVar6 != *(int **)((int)this + 0x35c)) {
LAB_007f25d1:
      puVar9 = (undefined4 *)piVar6[5];
      iVar7 = FUN_007ec410((int)puVar9);
      if ((iVar7 == 0) || (fVar8 = (float)FUN_007ec410((int)puVar9), fVar8 != fVar4))
      goto LAB_007f25ea;
      cVar5 = FUN_007e7910((int)puVar9);
      if (cVar5 == '\0') {
        *(int *)((int)this + 0x394) = *(int *)((int)this + 0x394) + -1;
      }
      else {
        *(int *)((int)this + 0x390) = *(int *)((int)this + 0x390) + -1;
      }
      if (puVar9 != (undefined4 *)0x0) {
        piVar1 = puVar9 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar9)(1);
        }
      }
      piVar2 = *(int **)((int)this + 0x35c);
      piVar1 = piVar6 + 6;
      while (piVar1 != piVar2) {
        (**(code **)(*piVar6 + 4))();
        piVar6[5] = piVar6[0xb];
        (**(code **)*piVar6)();
        piVar1 = piVar6 + 0xc;
        piVar6 = piVar6 + 6;
      }
      puVar3 = *(undefined4 **)((int)this + 0x35c);
      for (puVar9 = puVar3 + -6; puVar9 != puVar3; puVar9 = puVar9 + 6) {
        FUN_007efdc0(puVar9);
      }
      *(int *)((int)this + 0x35c) = *(int *)((int)this + 0x35c) + -0x18;
    }
LAB_007f2676:
    FUN_007f0c80(this);
    if (*(int *)((int)this + 0x390) == 0) {
      FUN_007f0470(this,1);
      FUN_007f1080(this);
      return;
    }
    param_1 = DAT_00e5bd34 * 0.6;
    (**(code **)(*(int *)this + 0x14))();
    uVar10 = FUN_00acd42c();
    FUN_007f0470(this,(int)uVar10);
    FUN_007f1080(this);
  }
  return;
LAB_007f25ea:
  piVar6 = piVar6 + 6;
  if (piVar6 == *(int **)((int)this + 0x35c)) goto LAB_007f2676;
  goto LAB_007f25d1;
}


//// FUNCTION FUN_007f2740 @ 007f2740 ////

void __thiscall FUN_007f2740(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  float10 fVar5;
  ulonglong uVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar4 = *(int **)((int)this + 0x358);
    if (piVar4 != *(int **)((int)this + 0x35c)) {
      do {
        puVar2 = (undefined4 *)piVar4[5];
        if (puVar2 == param_1) {
          cVar3 = FUN_007e7910((int)puVar2);
          if (cVar3 == '\0') {
            *(int *)((int)this + 0x394) = *(int *)((int)this + 0x394) + -1;
          }
          else {
            *(int *)((int)this + 0x390) = *(int *)((int)this + 0x390) + -1;
          }
          *(int *)((int)this + 0x364) = *(int *)((int)this + 0x364) + -1;
          if (puVar2 != (undefined4 *)0x0) {
            piVar1 = puVar2 + 0x12;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar2)(1);
            }
          }
          FUN_007f1bb0((void *)((int)this + 0x354),&param_1,piVar4);
          break;
        }
        piVar4 = piVar4 + 6;
      } while (piVar4 != *(int **)((int)this + 0x35c));
    }
    FUN_007f0c80(this);
    if (*(int *)((int)this + 0x390) == 0) {
      FUN_007f0470(this,1);
      FUN_007f1080(this);
      return;
    }
    fVar5 = (float10)(**(code **)(*(int *)this + 0x14))();
    param_1 = (undefined4 *)(float)fVar5;
    FUN_007ef850((int)this);
    uVar6 = FUN_00acd42c();
    FUN_007f0470(this,(int)uVar6);
    FUN_007f1080(this);
  }
  return;
}


//// FUNCTION FUN_007f2830 @ 007f2830 ////

void __fastcall FUN_007f2830(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_007f1780(param_1 + 0x344);
  if (*(int *)(param_1 + 0x364) != 0) {
    while ((*(int *)(param_1 + 0x358) != 0 &&
           ((*(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0x358)) / 0x18 != 0))) {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x35c) + -4);
      if ((*(int *)(param_1 + 0x358) != 0) &&
         (puVar3 = *(undefined4 **)(param_1 + 0x35c),
         ((int)puVar3 - *(int *)(param_1 + 0x358)) / 0x18 != 0)) {
        for (puVar4 = puVar3 + -6; puVar4 != puVar3; puVar4 = puVar4 + 6) {
          FUN_007efdc0(puVar4);
        }
        *(int *)(param_1 + 0x35c) = *(int *)(param_1 + 0x35c) + -0x18;
      }
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  return;
}


//// FUNCTION FUN_007f2930 @ 007f2930 ////

void __thiscall FUN_007f2930(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007f2975;
    }
  }
  iVar1 = 0;
LAB_007f2975:
  FUN_007f1ca0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_007f29a0 @ 007f29a0 ////

void __thiscall FUN_007f29a0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007f29e5;
    }
  }
  iVar1 = 0;
LAB_007f29e5:
  FUN_007f1fd0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION MoviePlayback_Constructor @ 007f2a60 ////

/* WARNING: Removing unreachable block (ram,0x007f2bfa) */

undefined4 * __fastcall MoviePlayback_Constructor(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char acStack_20 [12];
  undefined1 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1eaa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d59e2c;
  param_1[0x14] = &PTR_FUN_00d59e10;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdd] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = param_1 + 0xda;
  param_1[0xda] = &PTR_LAB_00d59e00;
  param_1[0xdf] = 0;
  local_4 = 3;
  FUN_0043b460(param_1 + 0xe0);
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  param_1[0x45] = param_1[0x45] & 0xfffffff5;
  puVar2 = DAT_0104ea94;
  if (DAT_0104ea94 != (undefined4 *)0x0) {
    iVar1 = DAT_0104ea94[0x12];
    DAT_0104ea94[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104ea80[1])();
    DAT_0104ea94 = (undefined4 *)0x0;
    (*(code *)*DAT_0104ea80)();
  }
  (*(code *)DAT_0104ea80[1])();
  DAT_0104ea94 = param_1;
  (*(code *)*DAT_0104ea80)();
  piVar3 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar3 + 0x14))();
  FUN_0073e4e0(param_1,DAT_00e5bd38);
  param_1[0xe0] = 10;
  acStack_20[0] = '\0';
  _strncpy(acStack_20,"movie_update",0xc);
  uStack_14 = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_005434b0();
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_007f2c20 @ 007f2c20 ////

undefined4 * __thiscall FUN_007f2c20(void *this,byte param_1)

{
  FUN_007f2340(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007f2c40 @ 007f2c40 ////

void __thiscall FUN_007f2c40(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007f1140(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_007f2930(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007f2cd0 @ 007f2cd0 ////

void __thiscall FUN_007f2cd0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007f11e0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_007f29a0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007f2d60 @ 007f2d60 ////

void __fastcall FUN_007f2d60(int *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  void *this;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1ed3;
  local_c = ExceptionList;
  iVar5 = param_1[0xd2];
  iVar6 = 0;
  bVar2 = false;
  local_2c = 0;
  ExceptionList = &local_c;
  if (iVar5 != param_1[0xd3]) {
    do {
      iVar1 = *(int *)(iVar5 + 0x14);
      if ((iVar1 != 0) && (cVar3 = FUN_007f0320(param_1,iVar1), cVar3 == '\0')) {
        this = operator_new(0x574);
        local_4 = 0;
        if (this == (void *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = FUN_007ee310(this,iVar1,iVar6);
        }
        local_4 = 0xffffffff;
        FUN_007e7dc0(piVar4);
        local_18 = &local_24;
        param_1[0xe4] = param_1[0xe4] + 1;
        local_20 = 0;
        local_1c = (int *)0x0;
        local_24 = &PTR_LAB_00d59e00;
        if (piVar4 != (int *)0x0) {
          local_1c = piVar4 + 6;
          local_20 = *local_1c;
          *(int **)(*local_1c + 4) = &local_20;
          *local_1c = (int)&local_20;
        }
        local_4 = 1;
        local_10 = piVar4;
        FUN_007f2cd0(param_1 + 0xd5,(int)&local_24);
        local_4 = 0xffffffff;
        local_24 = &PTR_LAB_00d59e00;
        if (local_1c != (int *)0x0) {
          *local_1c = local_20;
        }
        if (local_20 != 0) {
          *(int **)(local_20 + 4) = local_1c;
        }
        local_10 = (int *)0x0;
        local_20 = 0;
        local_1c = (int *)0x0;
        FUN_007f0ad0(param_1,iVar6,'\0');
        local_2c = local_2c + 1;
        bVar2 = true;
      }
      iVar5 = iVar5 + 0x18;
      iVar6 = iVar6 + 1;
    } while (iVar5 != param_1[0xd3]);
    if ((bVar2) && (local_2c == 1)) {
      FUN_007f0c80(param_1);
      FUN_007f1080(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007f2ef0 @ 007f2ef0 ////

void __thiscall FUN_007f2ef0(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce1ee8;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x364) = *(int *)((int)this + 0x364) + 1;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d18c3c;
  local_10 = param_1;
  if (param_1 != 0) {
    local_1c = (int *)(param_1 + 0x18);
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  FUN_007f2c40((void *)((int)this + 0x344),(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_FUN_00d18c3c;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = 0;
  local_20 = 0;
  local_1c = (int *)0x0;
  FUN_007f2d60(this);
  FUN_007f0c80(this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007f2fd0 @ 007f2fd0 ////

void __fastcall FUN_007f2fd0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce1f08;
  local_c = ExceptionList;
  if ((char)param_1[0xe8] == '\0') {
    ExceptionList = &local_c;
    param_1[0xd9] = 0;
    FUN_007f1780((int)(param_1 + 0xd1));
    puVar7 = DAT_0104d688;
    if (DAT_0104d688 != &DAT_0104d694) {
      do {
        iVar2 = puVar7[2];
        piVar4 = (int *)FUN_005b22a0(iVar2);
        if ((iVar2 != 0) &&
           (((cVar3 = FUN_005b3c80(iVar2), cVar3 != '\0' ||
             ((iVar5 = (**(code **)(*piVar4 + 0x24))(), iVar5 == 7 && (*(int *)(iVar2 + 0x210) != 0)
              ))) && (uVar6 = FUN_005b3c00(iVar2), (char)uVar6 == '\0')))) {
          param_1[0xd9] = param_1[0xd9] + 1;
          piStack_1c = (int *)(iVar2 + 0x18);
          pppuStack_18 = &ppuStack_24;
          ppuStack_24 = &PTR_FUN_00d18c3c;
          iStack_20 = *piStack_1c;
          *(int **)(*piStack_1c + 4) = &iStack_20;
          *piStack_1c = (int)&iStack_20;
          uStack_4 = 0;
          iStack_10 = iVar2;
          FUN_007f2c40(param_1 + 0xd1,(int)&ppuStack_24);
          uStack_4 = 0xffffffff;
          FUN_00435e20(&ppuStack_24);
        }
        puVar1 = puVar7 + 1;
        puVar7 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != &DAT_0104d694);
    }
    FUN_007f0c80(param_1);
    if (DAT_0104d8e8 == 0) {
      FUN_007f2d60(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007f3100 @ 007f3100 ////

void __fastcall FUN_007f3100(int *param_1)

{
  int iVar1;
  int *this;
  char cVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if ((param_1[0xd9] != 0) && (iVar4 = param_1[0xd6], iVar4 != param_1[0xd7])) {
    while( true ) {
      this = *(int **)(iVar4 + 0x14);
      iVar1 = iVar4 + 0x18;
      cVar2 = '\0';
      if (iVar1 != param_1[0xd7]) {
        local_8 = 0;
        cVar2 = (**(code **)(**(int **)(iVar4 + 0x2c) + 0x34))(&DAT_0104cce0,&local_8);
      }
      uStack_4 = 0;
      cVar3 = (**(code **)(*this + 0x34))(&DAT_0104cce0,&uStack_4);
      if ((((cVar3 != '\0') && (cVar2 == '\0')) && (0 < param_1[0xe4])) &&
         (cVar2 = FUN_007e7910((int)this), cVar2 == '\0')) break;
      iVar4 = iVar1;
      if (iVar1 == param_1[0xd7]) {
        return;
      }
    }
    FUN_007e7dc0(this);
    param_1[0xe4] = param_1[0xe4] + 1;
    param_1[0xe5] = param_1[0xe5] + -1;
    cVar2 = (**(code **)(*this + 0x100))();
    if (cVar2 == '\0') {
      FUN_0089e5f0(this,'\x01');
    }
    uVar5 = FUN_007ef910(param_1);
    if (0 < (int)uVar5) {
      FUN_007f0540(param_1,this);
    }
    FUN_007f2fd0(param_1);
    do {
      cVar2 = (**(code **)(*param_1 + 0x50))(1);
    } while (cVar2 != '\0');
  }
  return;
}


//// FUNCTION FUN_007f3220 @ 007f3220 ////

void __fastcall FUN_007f3220(int *param_1)

{
  FUN_007f2fd0(param_1);
  FUN_007f3100(param_1);
  FUN_007f1080(param_1);
  return;
}


//// FUNCTION FUN_007f3240 @ 007f3240 ////

void __fastcall FUN_007f3240(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_1[0xe4];
  iVar2 = FUN_007f0670((int)param_1);
  iVar3 = FUN_00423320(DAT_00f87b04);
  if (iVar3 != 4) {
    uVar4 = FUN_0043b490((uint *)(param_1 + 0xe0));
    if ((char)uVar4 == '\0') {
      if (iVar1 != iVar2) {
        FUN_007f2fd0(param_1);
      }
    }
    else {
      FUN_007f2fd0(param_1);
      FUN_007f3100(param_1);
      FUN_007f1080(param_1);
      if (param_1[0xe7] == 0) {
        FUN_007f06f0((int)param_1);
        FUN_007f1080(param_1);
        WWindow_Tick(param_1);
        return;
      }
    }
  }
  FUN_007f1080(param_1);
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_007f3320 @ 007f3320 ////

undefined4 * __thiscall FUN_007f3320(void *this,undefined4 param_1)

{
  FUN_006899b0(this);
  *(undefined4 *)((int)this + 0x348) = param_1;
  *(undefined ***)this = &PTR_FUN_00d59f64;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d59f48;
  return this;
}


//// FUNCTION FUN_007f3350 @ 007f3350 ////

undefined4 * __thiscall FUN_007f3350(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007f3640 @ 007f3640 ////

void __fastcall FUN_007f3640(void *param_1)

{
  int iVar1;
  char *_Memory;
  undefined1 uVar2;
  void *pvVar3;
  int *piVar4;
  LONG LVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *local_154;
  undefined4 *local_150;
  uint *puStack_14c;
  char *local_148;
  uint local_144;
  uint local_140;
  char local_13c [16];
  char *pcStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  char acStack_120 [20];
  int *piStack_10c;
  char *local_108;
  undefined4 uStack_104;
  uint uStack_100;
  char acStack_fc [20];
  char *pcStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  char acStack_dc [20];
  char *pcStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  char acStack_bc [20];
  char *pcStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  char acStack_9c [20];
  char *pcStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  char acStack_7c [20];
  void *pvStack_68;
  char *local_64;
  uint local_60;
  undefined4 local_5c;
  char local_58 [16];
  char *pcStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  char acStack_3c [24];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2082;
  pvStack_c = ExceptionList;
  local_64 = local_58;
  local_58[0] = '\0';
  local_60 = 0;
  local_5c = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_64,"iconpanel2",10);
  local_60 = 10;
  local_64[10] = '\0';
  local_4 = 0;
  FUN_0089e070(param_1,&local_64,1,0,'\x01');
  puVar6 = &stack0xfffffe88;
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xfffffe7c,"Opening",7);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"hud_star");
  uVar7 = FUN_0088a2b0(pvVar3,puVar6,uVar7,uVar8);
  *(undefined4 *)((int)param_1 + 0x430) = uVar7;
  puVar6 = &stack0xfffffe88;
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xfffffe7c,"Open",4);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"hud_star");
  uVar7 = FUN_0088a2b0(pvVar3,puVar6,uVar7,uVar8);
  *(undefined4 *)((int)param_1 + 0x428) = uVar7;
  puVar6 = &stack0xfffffe88;
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xfffffe7c,"Closing",7);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"hud_star");
  uVar7 = FUN_0088a2b0(pvVar3,puVar6,uVar7,uVar8);
  *(undefined4 *)((int)param_1 + 0x434) = uVar7;
  puVar6 = &stack0xfffffe88;
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xfffffe7c,"Closed",6);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"hud_star");
  uVar7 = FUN_0088a2b0(pvVar3,puVar6,uVar7,uVar8);
  *(undefined4 *)((int)param_1 + 0x42c) = uVar7;
  puVar6 = &stack0xfffffe88;
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xfffffe7c,"Pickup",6);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"hud_star");
  uVar7 = FUN_0088a2b0(pvVar3,puVar6,uVar7,uVar8);
  *(undefined4 *)((int)param_1 + 0x438) = uVar7;
  puVar6 = &stack0xfffffe88;
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xfffffe7c,"highlight",9);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"star_card");
  uVar7 = FUN_0088a2b0(pvVar3,puVar6,uVar7,uVar8);
  *(undefined4 *)((int)param_1 + 0x43c) = uVar7;
  puVar6 = &stack0xfffffe88;
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xfffffe7c,"normal",6);
  local_4 = local_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"star_card");
  uVar7 = FUN_0088a2b0(pvVar3,puVar6,uVar7,uVar8);
  *(undefined4 *)((int)param_1 + 0x440) = uVar7;
  FUN_007e8be0((int)param_1);
  pvVar3 = operator_new(0x360);
  if (pvVar3 == (void *)0x0) {
    local_154 = (undefined4 *)0x0;
  }
  else {
    local_148 = local_13c;
    local_13c[0] = '\0';
    local_144 = 0;
    local_140 = 0x20;
    local_148 = _malloc(0x20);
    _strncpy(local_148,"ui/activity_busyfilm.dds",0x18);
    local_144 = 0x18;
    local_148[0x18] = '\0';
    local_4 = CONCAT31(local_4._1_3_,9);
    local_108 = &stack0xfffffe8c;
    local_154 = FUN_0069d820(pvVar3,&local_148,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 10;
  (**(code **)(*(int *)((int)param_1 + 0x4b8) + 4))();
  *(undefined4 **)((int)param_1 + 0x4cc) = local_154;
  (*(code *)**(undefined4 **)((int)param_1 + 0x4b8))();
  local_4 = 0;
  if ((pvVar3 != (void *)0x0) && (0x14 < local_140)) {
                    /* WARNING: Subroutine does not return */
    _free(local_148);
  }
  local_148 = local_13c;
  local_13c[0] = '\0';
  local_144 = 0;
  local_140 = 0x14;
  _strncpy(local_148,"star_job",8);
  local_144 = 8;
  local_148[8] = '\0';
  local_4._0_1_ = 0xb;
  FUN_0087ecc0(*(void **)(*(int *)((int)param_1 + 0x358) + 0x178),*(int **)((int)param_1 + 0x4cc),
               &local_148,1,0,(undefined1 *)0x0);
  local_4._0_1_ = 0;
  if (0x14 < local_140) {
                    /* WARNING: Subroutine does not return */
    _free(local_148);
  }
  local_108 = operator_new(0x3e4);
  local_4._0_1_ = 0xc;
  if (local_108 == (char *)0x0) {
    local_150 = (undefined4 *)0x0;
  }
  else {
    local_150 = FUN_0073d300((undefined4 *)local_108);
  }
  local_4._0_1_ = 0;
  (**(code **)(*(int *)((int)param_1 + 0x4e8) + 4))();
  *(undefined4 **)((int)param_1 + 0x4fc) = local_150;
  (*(code *)**(undefined4 **)((int)param_1 + 0x4e8))();
  local_148 = local_13c;
  local_13c[0] = '\0';
  local_144 = 0;
  local_140 = 0x14;
  _strncpy(local_148,"ai_staricon.flm",0xf);
  local_144 = 0xf;
  local_148[0xf] = '\0';
  local_4._0_1_ = 0xd;
  FUN_0073dda0(*(void **)((int)param_1 + 0x4fc),&local_148);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_140) {
                    /* WARNING: Subroutine does not return */
    _free(local_148);
  }
  uStack_18 = 0;
  uStack_14 = 0;
  pvStack_10 = (void *)0x3fb33333;
  uStack_24 = 0;
  uStack_20 = 0xbff33333;
  uStack_1c = 0x3fb33333;
  FUN_0073cb00(*(void **)((int)param_1 + 0x4fc),&uStack_24,&uStack_18,0x3f060a92);
  piVar4 = FUN_00433eb0();
  if (DAT_0104d8e8 == 0) {
    FUN_009de1d0("woodenman.msh",1);
    (**(code **)(*piVar4 + 0x18))();
    if (local_154 != (undefined4 *)0x0) {
      FUN_009de3b0(local_154);
    }
  }
  else {
    iVar1 = *piVar4;
    FUN_0097e350(*(void **)(DAT_0104d8e8 + 0x590),0);
    (**(code **)(iVar1 + 0x18))();
  }
  FUN_0097e2b0((int)piVar4);
  switch(*(undefined4 *)((int)param_1 + 0x4b4)) {
  case 0:
    pcStack_12c = acStack_120;
    acStack_120[0] = '\0';
    uStack_128 = 0;
    uStack_124 = 0x14;
    _strncpy(pcStack_12c,"woody_required.dds",0x12);
    uStack_128 = 0x12;
    pcStack_12c[0x12] = '\0';
    pcStack_88 = acStack_7c;
    acStack_7c[0] = '\0';
    uStack_84 = 0;
    uStack_80 = 0x14;
    _strncpy(pcStack_88,"woody.dds",9);
    uStack_84 = 9;
    pcStack_88[9] = '\0';
    puStack_8._0_1_ = 0x15;
    FUN_00981df0(piVar4,&pcStack_88,&pcStack_12c);
    _Memory = pcStack_12c;
    uVar8 = uStack_124;
    if (0x14 < uStack_80) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_88);
    }
    break;
  case 1:
    local_108 = acStack_fc;
    acStack_fc[0] = '\0';
    uStack_104 = 0;
    uStack_100 = 0x14;
    _strncpy(local_108,"woody_hero.dds",0xe);
    uStack_104 = 0xe;
    local_108[0xe] = '\0';
    puStack_14c = &local_140;
    local_140 = local_140 & 0xffffff00;
    local_148 = (char *)0x0;
    local_144 = 0x14;
    _strncpy((char *)puStack_14c,"woody.dds",9);
    local_148 = &DAT_00000009;
    *(char *)((int)puStack_14c + 9) = '\0';
    puStack_8._0_1_ = 0xf;
    FUN_00981df0(piVar4,&puStack_14c,&local_108);
    _Memory = local_108;
    uVar8 = uStack_100;
    if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_14c);
    }
    break;
  case 2:
    pcStack_48 = acStack_3c;
    acStack_3c[0] = '\0';
    uStack_44 = 0;
    uStack_40 = 0x14;
    _strncpy(pcStack_48,"woody_villan.dds",0x10);
    uStack_44 = 0x10;
    pcStack_48[0x10] = '\0';
    pcStack_a8 = acStack_9c;
    acStack_9c[0] = '\0';
    uStack_a4 = 0;
    uStack_a0 = 0x14;
    _strncpy(pcStack_a8,"woody.dds",9);
    uStack_a4 = 9;
    pcStack_a8[9] = '\0';
    puStack_8._0_1_ = 0x11;
    FUN_00981df0(piVar4,&pcStack_a8,&pcStack_48);
    _Memory = pcStack_48;
    uVar8 = uStack_40;
    if (0x14 < uStack_a0) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_a8);
    }
    break;
  case 3:
    pcStack_c8 = acStack_bc;
    acStack_bc[0] = '\0';
    uStack_c4 = 0;
    uStack_c0 = 0x14;
    _strncpy(pcStack_c8,"woody_love.dds",0xe);
    uStack_c4 = 0xe;
    pcStack_c8[0xe] = '\0';
    pcStack_e8 = acStack_dc;
    acStack_dc[0] = '\0';
    uStack_e4 = 0;
    uStack_e0 = 0x14;
    _strncpy(pcStack_e8,"woody.dds",9);
    uStack_e4 = 9;
    pcStack_e8[9] = '\0';
    puStack_8._0_1_ = 0x13;
    FUN_00981df0(piVar4,&pcStack_e8,&pcStack_c8);
    _Memory = pcStack_c8;
    uVar8 = uStack_c0;
    if (0x14 < uStack_e0) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_e8);
    }
    break;
  default:
    goto switchD_007f3ba9_default;
  }
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  if (0x14 < uVar8) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
switchD_007f3ba9_default:
  FUN_0073cbc0(*(void **)((int)param_1 + 0x4fc),piVar4,'\x01');
  LVar5 = InterlockedDecrement(piVar4 + 4);
  uVar2 = DAT_0105b588;
  if (LVar5 == 0) {
    DAT_0105b588 = 1;
    (**(code **)*piVar4)();
  }
  DAT_0105b588 = uVar2;
  if (DAT_0104d8e8 == 0) {
    pcStack_12c = acStack_120;
    acStack_120[0] = '\0';
    uStack_128 = 0;
    uStack_124 = 0x14;
    _strncpy(pcStack_12c,"star_head",9);
    uStack_128 = 9;
    pcStack_12c[9] = '\0';
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x18);
    FUN_0087ecc0(*(void **)(*(int *)((int)param_1 + 0x358) + 0x178),*(int **)((int)param_1 + 0x4fc),
                 &pcStack_12c,1,0,(undefined1 *)0x0);
  }
  else {
    piVar4 = operator_new(0x34c);
    puStack_8._0_1_ = 0x16;
    piStack_10c = piVar4;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x4b4);
      FUN_006899b0(piVar4);
      *piVar4 = (int)&PTR_FUN_00d59f64;
      piVar4[0x14] = (int)&PTR_FUN_00d59f48;
      piVar4[0xd2] = iVar1;
    }
    puStack_8._0_1_ = 0;
    (**(code **)(*piVar4 + 0xc))();
    (**(code **)(**(int **)((int)param_1 + 0x4fc) + 0x70))();
    pcStack_12c = acStack_120;
    acStack_120[0] = '\0';
    uStack_128 = 0;
    uStack_124 = 0x14;
    _strncpy(pcStack_12c,"star_head",9);
    uStack_128 = 9;
    pcStack_12c[9] = '\0';
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x17);
    FUN_0087ecc0(*(void **)(*(int *)((int)param_1 + 0x358) + 0x178),piVar4,&pcStack_12c,1,0,
                 (undefined1 *)0x0);
  }
  if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_12c);
  }
  if (0x14 < local_60) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_007f4130 @ 007f4130 ////

void __fastcall FUN_007f4130(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5a084;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_007f4180 @ 007f4180 ////

undefined4 * __fastcall FUN_007f4180(int param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce209b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x394);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_007f41f0(this,param_1,*(undefined4 *)(param_1 + 0x348));
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007f41f0 @ 007f41f0 ////

undefined4 * __thiscall FUN_007f41f0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *this_00;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce20d4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0068c340(this);
  piVar4 = (int *)((int)this + 0x360);
  *(undefined ***)this = &PTR_FUN_00d5a0ac;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5a094;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(int **)((int)this + 0x36c) = piVar4;
  *piVar4 = (int)&PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x374) = 0;
  piVar1 = (int *)((int)this + 0x378);
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(int **)((int)this + 900) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x38c) = 0;
  local_4 = 2;
  FUN_0073e4e0(this,0x42200000);
  *(undefined4 *)((int)this + 0x390) = param_2;
  (**(code **)(*piVar4 + 4))();
  *(int *)((int)this + 0x374) = param_1;
  (**(code **)*piVar4)();
  iVar2 = *(int *)((int)this + 0x374);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x124) != iVar2 + 0x130)) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x124) + 8);
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)((int)this + 0x38c) = uVar3;
    (**(code **)*piVar1)();
    iVar2 = *(int *)((int)this + 0x38c);
    piVar4 = (int *)(iVar2 + 0x150);
    if (*(int **)(iVar2 + 0x154) != (int *)0x0) {
      **(int **)(iVar2 + 0x154) = *piVar4;
    }
    if (*piVar4 != 0) {
      *(undefined4 *)(*piVar4 + 4) = *(undefined4 *)(iVar2 + 0x154);
    }
    *piVar4 = 0;
    *(undefined4 *)(iVar2 + 0x154) = 0;
    (**(code **)(**(int **)((int)this + 0x38c) + 0x70))(this,0);
    FUN_0073f6e0(this,*(int **)((int)this + 0x38c));
    this_00 = (void *)FUN_00ace790(*(int **)((int)this + 0x38c),0,&TM::WWindow::RTTI_Type_Descriptor
                                   ,&TM::WViewportCharacter::RTTI_Type_Descriptor,0);
    if (this_00 != (void *)0x0) {
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0x3f800000;
      uStack_18 = 0;
      uStack_14 = 0xc0200000;
      uStack_10 = 0x3f800000;
      FUN_0073cb00(this_00,&uStack_18,&uStack_24,0x3f060a92);
      FUN_0073b810(this_00,1);
    }
  }
  if (DAT_0104d8e8 != (void *)0x0) {
    FUN_005f5bb0(DAT_0104d8e8,this);
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007f43c0 @ 007f43c0 ////

void __fastcall FUN_007f43c0(int *param_1)

{
  FUN_00689830(param_1);
  param_1[0xd4] = 0x41a00000;
  param_1[0xd5] = 0x42200000;
  return;
}


//// FUNCTION FUN_007f4400 @ 007f4400 ////

undefined4 * __thiscall FUN_007f4400(void *this,byte param_1)

{
  FUN_007f4420(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007f4420 @ 007f4420 ////

void __fastcall FUN_007f4420(undefined4 *param_1)

{
  int iVar1;
  void *this;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2104;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5a0ac;
  param_1[0x14] = &PTR_FUN_00d5a094;
  local_4 = 2;
  if (DAT_0104d8e8 != (void *)0x0) {
    FUN_005f5bb0(DAT_0104d8e8,0);
  }
  iVar1 = param_1[0xe3];
  if ((iVar1 != 0) && (param_1[0xdd] != 0)) {
    if (*(undefined4 **)(iVar1 + 0x154) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar1 + 0x154) = *(undefined4 *)(iVar1 + 0x150);
    }
    if (*(int *)(iVar1 + 0x150) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x150) + 4) = *(undefined4 *)(iVar1 + 0x154);
    }
    *(undefined4 *)(iVar1 + 0x150) = 0;
    *(undefined4 *)(iVar1 + 0x154) = 0;
    (**(code **)(*(int *)param_1[0xe3] + 0x70))(param_1[0xdd],0);
    (**(code **)(*(int *)param_1[0xdd] + 0xc))(param_1[0xe3],1);
    this = (void *)FUN_00ace790((int *)param_1[0xe3],0,&TM::WWindow::RTTI_Type_Descriptor,
                                &TM::WViewportCharacter::RTTI_Type_Descriptor,0);
    if (this != (void *)0x0) {
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0x3fb33333;
      uStack_18 = 0;
      uStack_14 = 0xbff33333;
      uStack_10 = 0x3fb33333;
      FUN_0073cb00(this,&uStack_18,&uStack_24,0x3f060a92);
      FUN_0073b810(this,0);
    }
  }
  param_1[0xde] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xe0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe0] = param_1[0xdf];
  }
  if (param_1[0xdf] != 0) {
    *(undefined4 *)(param_1[0xdf] + 4) = param_1[0xe0];
  }
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe3] = 0;
  if ((undefined4 *)param_1[0xe0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe0] = param_1[0xdf];
  }
  if (param_1[0xdf] != 0) {
    *(undefined4 *)(param_1[0xdf] + 4) = param_1[0xe0];
  }
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xd8] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xda] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xda] = param_1[0xd9];
  }
  if (param_1[0xd9] != 0) {
    *(undefined4 *)(param_1[0xd9] + 4) = param_1[0xda];
  }
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdd] = 0;
  if ((undefined4 *)param_1[0xda] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xda] = param_1[0xd9];
  }
  if (param_1[0xd9] != 0) {
    *(undefined4 *)(param_1[0xd9] + 4) = param_1[0xda];
  }
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007f4650 @ 007f4650 ////

undefined4 * __thiscall FUN_007f4650(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  FUN_0053d690(this);
  *(undefined ***)this = &PTR_FUN_00d5a1b0;
  piVar1 = (int *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 **)((int)this + 0x5c) = (undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x50) = &PTR_LAB_00d5a084;
  *(int *)((int)this + 100) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x58) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return this;
}


//// FUNCTION FUN_007f46b0 @ 007f46b0 ////

undefined4 * __thiscall FUN_007f46b0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2142;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MoodHUDCard_Constructor(this,param_2);
  *(undefined ***)this = &PTR_FUN_00d5a1f4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d5a1d8;
  *(undefined4 *)((int)this + 0x4b4) = param_1;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 **)((int)this + 0x4c4) = (undefined4 *)((int)this + 0x4b8);
  *(undefined4 *)((int)this + 0x4b8) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x4cc) = 0;
  *(undefined4 *)((int)this + 0x4dc) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 **)((int)this + 0x4dc) = (undefined4 *)((int)this + 0x4d0);
  *(undefined4 *)((int)this + 0x4d0) = &PTR_FUN_00d2d100;
  *(undefined4 *)((int)this + 0x4e4) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 **)((int)this + 0x4f4) = (undefined4 *)((int)this + 0x4e8);
  *(undefined4 *)((int)this + 0x4e8) = &PTR_LAB_00d2dc14;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  local_4 = 3;
  *(undefined4 *)((int)this + 0x500) = 10;
  *(undefined4 *)((int)this + 0x504) = 0;
  iVar1 = FUN_00990d30(0x19,0x4b);
  *(int *)((int)this + 0x500) = iVar1;
  FUN_007f3640(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007f47e0 @ 007f47e0 ////

void __fastcall FUN_007f47e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2182;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5a1f4;
  param_1[0x14] = &PTR_LAB_00d5a1d8;
  piVar1 = (int *)param_1[0x141];
  local_4 = 3;
  if (piVar1 != (int *)0x0) {
    FUN_008df190(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  puVar2 = (undefined4 *)param_1[0x13f];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x13a] + 4))();
    param_1[0x13f] = 0;
    (**(code **)param_1[0x13a])();
  }
  puVar2 = (undefined4 *)param_1[0x133];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x12e] + 4))();
    param_1[0x133] = 0;
    (**(code **)param_1[0x12e])();
  }
  puVar2 = (undefined4 *)param_1[0x139];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x134] + 4))();
    param_1[0x139] = 0;
    (**(code **)param_1[0x134])();
  }
  param_1[0x13a] = &PTR_LAB_00d2dc14;
  if ((undefined4 *)param_1[0x13c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13c] = param_1[0x13b];
  }
  if (param_1[0x13b] != 0) {
    *(undefined4 *)(param_1[0x13b] + 4) = param_1[0x13c];
  }
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13f] = 0;
  if ((undefined4 *)param_1[0x13c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13c] = param_1[0x13b];
  }
  if (param_1[0x13b] != 0) {
    *(undefined4 *)(param_1[0x13b] + 4) = param_1[0x13c];
  }
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x134] = &PTR_FUN_00d2d100;
  if ((undefined4 *)param_1[0x136] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x136] = param_1[0x135];
  }
  if (param_1[0x135] != 0) {
    *(undefined4 *)(param_1[0x135] + 4) = param_1[0x136];
  }
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x139] = 0;
  if ((undefined4 *)param_1[0x136] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x136] = param_1[0x135];
  }
  if (param_1[0x135] != 0) {
    *(undefined4 *)(param_1[0x135] + 4) = param_1[0x136];
  }
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x12e] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x130] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x130] = param_1[0x12f];
  }
  if (param_1[0x12f] != 0) {
    *(undefined4 *)(param_1[0x12f] + 4) = param_1[0x130];
  }
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x133] = 0;
  if ((undefined4 *)param_1[0x130] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x130] = param_1[0x12f];
  }
  if (param_1[0x12f] != 0) {
    *(undefined4 *)(param_1[0x12f] + 4) = param_1[0x130];
  }
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  local_4 = 0xffffffff;
  FUN_007e90c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007f4f30 @ 007f4f30 ////

undefined4 * __thiscall FUN_007f4f30(void *this,byte param_1)

{
  FUN_007f4f50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007f4f50 @ 007f4f50 ////

void __fastcall FUN_007f4f50(undefined4 *param_1)

{
  param_1[0x14] = &PTR_LAB_00d5a084;
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x16] = param_1[0x15];
  }
  if (param_1[0x15] != 0) {
    *(undefined4 *)(param_1[0x15] + 4) = param_1[0x16];
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x16] = param_1[0x15];
  }
  if (param_1[0x15] != 0) {
    *(undefined4 *)(param_1[0x15] + 4) = param_1[0x16];
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_00d2c6a0;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_007f4fb0 @ 007f4fb0 ////

undefined4 * __thiscall FUN_007f4fb0(void *this,byte param_1)

{
  FUN_007f47e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007f5000 @ 007f5000 ////

int * __thiscall FUN_007f5000(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007f5040 @ 007f5040 ////

int __fastcall FUN_007f5040(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007f5280 @ 007f5280 ////

void __cdecl FUN_007f5280(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_007f52e0 @ 007f52e0 ////

int * __thiscall FUN_007f52e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007f5350 @ 007f5350 ////

undefined4 * __cdecl FUN_007f5350(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar1 = param_3 + -6;
    iVar2 = param_2 + -0x18;
    (**(code **)(param_3[-6] + 4))();
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    (**(code **)*puVar1)();
    param_3 = puVar1;
    param_2 = iVar2;
  } while (iVar2 != param_1);
  return puVar1;
}


