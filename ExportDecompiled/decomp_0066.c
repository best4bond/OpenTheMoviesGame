//// FUNCTION ScalarDeletingDtor_00c29bf0 @ 00c29bf0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c29bf0(void *this,byte param_1)

{
  SetVtable_00da17dc_00c29be0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00c29c20 @ 00c29c20 ////

void __fastcall Dtor_00c29c20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da652c;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c29d70 @ 00c29d70 ////

undefined4 * __thiscall ScalarDeletingDtor_00c29d70(void *this,byte param_1)

{
  SetVtable_00d9f9dc_00c29b00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00da652c_00c29d90 @ 00c29d90 ////

undefined4 * __fastcall Ctor_vt00da652c_00c29d90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da652c;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c29db0 @ 00c29db0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c29db0(void *this,byte param_1)

{
  Dtor_00c29c20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00c29dd0 @ 00c29dd0 ////

void __fastcall Dtor_00c29dd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da652c;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c29e00 @ 00c29e00 ////

void __thiscall FUN_00c29e00(void *this,undefined4 param_1)

{
  undefined **local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d045d8;
  local_c = ExceptionList;
  local_14 = &PTR_LAB_00da6554;
  local_10 = param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  RedBlackTree_ForEach(this,&local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00da655c_00c29e50 @ 00c29e50 ////

undefined4 * __fastcall Ctor_vt00da655c_00c29e50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da652c;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da655c;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c29e70 @ 00c29e70 ////

undefined4 * __thiscall ScalarDeletingDtor_00c29e70(void *this,byte param_1)

{
  Dtor_00c29dd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c29ec0 @ 00c29ec0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c29ec0(void *this,byte param_1)

{
  Dtor_00c29770(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00da6600_00c29ee0 @ 00c29ee0 ////

void __fastcall SetVtable_00da6600_00c29ee0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6600;
  return;
}


//// FUNCTION SetVtable_00da6610_00c29f40 @ 00c29f40 ////

void __fastcall SetVtable_00da6610_00c29f40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6610;
  return;
}


//// FUNCTION FUN_00c29f50 @ 00c29f50 ////

void __thiscall FUN_00c29f50(void *this,void *param_1)

{
  FUN_00c520e0((void *)((int)this + 0x68),param_1);
  return;
}


//// FUNCTION FUN_00c29f70 @ 00c29f70 ////

void __fastcall FUN_00c29f70(int *param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d045f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bec660((void *)param_1[0xb],param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c2a000 @ 00c2a000 ////

float10 __fastcall FUN_00c2a000(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(param_1 + 0x34);
  if (*(char *)(param_1 + 100) != '\0') {
    if ((float10)3.1415927 <= fVar1) {
      return fVar1 - (float10)6.2831855;
    }
    if (fVar1 < (float10)-3.1415927) {
      fVar1 = fVar1 + (float10)6.2831855;
    }
  }
  return fVar1;
}


//// FUNCTION FUN_00c2a040 @ 00c2a040 ////

void __fastcall FUN_00c2a040(int param_1)

{
  FUN_00bca3e0((void *)(param_1 + 0x34),
               1000.0 / *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 4) + 4) + 0x84));
  return;
}


//// FUNCTION FUN_00c2a070 @ 00c2a070 ////

void __thiscall FUN_00c2a070(void *this,float param_1,float param_2)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0460a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bca1a0((void *)((int)this + 0x34),param_1,0.0,param_2);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00da661c_00c2a0e0 @ 00c2a0e0 ////

undefined4 * __thiscall
Ctor_vt00da661c_00c2a0e0(void *this,undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0463d;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_00da661c;
  RedBlackTree_Node_Ctor((undefined4 *)((int)this + 4));
  local_4._0_1_ = 1;
  RedBlackTree_Node_Ctor((undefined4 *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(undefined4 *)((int)this + 0x2c) = param_1;
  local_4._0_1_ = 2;
  *(undefined1 *)((int)this + 100) = 0;
  FUN_00c52110((undefined4 *)((int)this + 0x68));
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar2 = (**(code **)**(undefined4 **)((int)this + 0x30))();
  *(undefined4 *)((int)this + 0x7c) = uVar2;
  FUN_00bca140((void *)((int)this + 0x34),param_3);
  FUN_00bcfac0((void *)(*(int *)((int)this + 0x2c) + 0xc),(int *)(*(int *)((int)this + 0x2c) + 8),
               (int)this);
  iVar1 = *(int *)(*(int *)((int)this + 0x2c) + 4);
  FUN_00bcfac0((void *)(iVar1 + 0x20),(int *)(iVar1 + 0x1c),(int)this);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION Dtor_00c2a1a0 @ 00c2a1a0 ////

void __fastcall Dtor_00c2a1a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d04670;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da661c;
  local_4 = 3;
  FUN_00bcff70((void *)(*(int *)(param_1[0xb] + 4) + 0x20),
               (int *)(*(int *)(param_1[0xb] + 4) + 0x1c),(int)param_1);
  FUN_00bcff70((void *)(param_1[0xb] + 0xc),(int *)(param_1[0xb] + 8),(int)param_1);
  param_1[0x1a] = &PTR_LAB_00da6610;
  local_4._0_1_ = 1;
  RedBlackTree_Node_Dtor(param_1 + 6);
  local_4 = (uint)local_4._1_3_ << 8;
  RedBlackTree_Node_Dtor(param_1 + 1);
  *param_1 = &PTR_LAB_00da6600;
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c2a300 @ 00c2a300 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2a300(void *this,byte param_1)

{
  Dtor_00c2a1a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c2a320 @ 00c2a320 ////

void __fastcall FUN_00c2a320(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00c2a340 @ 00c2a340 ////

void FUN_00c2a340(void)

{
  return;
}


//// FUNCTION FUN_00c2a350 @ 00c2a350 ////

void __thiscall FUN_00c2a350(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x34) = *param_1;
  *(undefined4 *)((int)this + 0x38) = param_1[1];
  *(undefined4 *)((int)this + 0x3c) = param_1[2];
  return;
}


//// FUNCTION Wrap_rand_00c2a370 @ 00c2a370 ////

void __fastcall Wrap_rand_00c2a370(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(param_1 + 0x34);
  iVar2 = _rand();
  *(float *)(param_1 + 0x44) =
       (float)iVar2 * *(float *)(param_1 + 0x34) * 3.051851e-05 + (1.0 - fVar1);
  return;
}


//// FUNCTION FUN_00c2a3b0 @ 00c2a3b0 ////

void __fastcall FUN_00c2a3b0(void *param_1)

{
  float fVar1;
  
  *(undefined4 *)((int)param_1 + 0x40) = 0x4b18967f;
  fVar1 = 1.0 - *(float *)((int)param_1 + 0x34) * 0.5;
  *(float *)((int)param_1 + 0x44) = fVar1;
  FUN_00bca140(param_1,fVar1);
  return;
}


//// FUNCTION FUN_00c2a3e0 @ 00c2a3e0 ////

float10 __fastcall FUN_00c2a3e0(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*param_1;
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (fVar1 < (float10)3.1415927) {
      if (fVar1 < (float10)-3.1415927) {
        fVar1 = fVar1 + (float10)6.2831855;
      }
    }
    else {
      fVar1 = fVar1 - (float10)6.2831855;
    }
  }
  if (fVar1 < (float10)0.0) {
    return (float10)0.0;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  return fVar1;
}


//// FUNCTION FUN_00c2a440 @ 00c2a440 ////

void * __fastcall FUN_00c2a440(void *param_1)

{
  *(undefined1 *)((int)param_1 + 0x30) = 0;
  FUN_00bca140(param_1,1.0);
  FUN_00c2a320((undefined4 *)((int)param_1 + 0x34));
  *(undefined4 *)((int)param_1 + 0x40) = 0x4b18967f;
  *(undefined4 *)((int)param_1 + 0x44) = 0x3f800000;
  return param_1;
}


//// FUNCTION FUN_00c2a470 @ 00c2a470 ////

void __thiscall FUN_00c2a470(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + *(float *)((int)this + 0x40);
  *(float *)((int)this + 0x40) = fVar1;
  if (*(float *)((int)this + 0x38) * 1000.0 < fVar1) {
    *(undefined4 *)((int)this + 0x40) = 0;
    Wrap_rand_00c2a370((int)this);
  }
  FUN_00bca1a0(this,*(float *)((int)this + 0x44),0.0,*(float *)((int)this + 0x3c));
  FUN_00bca3e0(this,param_1);
  return;
}


//// FUNCTION FUN_00c2a4c0 @ 00c2a4c0 ////

void __thiscall FUN_00c2a4c0(void *this,int param_1,int param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  float fVar6;
  ulonglong uVar7;
  
  fVar6 = param_3[1];
  bVar5 = SUB41(param_3[2],0);
  if ((((uint)param_3[2] & 2) != 0) || ((1.0 <= *param_3 && (fVar6 == 0.0)))) {
    fVar6 = 0.0;
  }
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(float *)((int)this + 4) = fVar6;
  *(char *)((int)this + 0x24) = '\x01' - ((bVar5 & 1) != 1);
  *(bool *)((int)this + 0x2c) = (bVar5 & 4) == 4;
  if (*(int *)(param_2 + 0x10) == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_2 + 0xc);
    iVar1 = *(int *)(param_2 + 0x10);
    *(int *)((int)this + 0x14) = iVar1;
    *(int *)((int)this + 0x18) = (*(int *)(param_2 + 8) - *(int *)((int)this + 0x10)) - iVar1;
  }
  uVar7 = FUN_00acd42c();
  uVar3 = (uint)uVar7;
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar3 < uVar2) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(uint *)((int)this + 8) = uVar3;
  }
  else if (uVar3 < uVar2 + *(int *)((int)this + 0x14)) {
    *(undefined4 *)((int)this + 0xc) = 1;
    *(uint *)((int)this + 8) = uVar3 - uVar2;
  }
  else if (uVar3 < *(int *)((int)this + 0x14) + uVar2 + *(int *)((int)this + 0x18)) {
    *(undefined4 *)((int)this + 0xc) = 2;
    *(uint *)((int)this + 8) = (uVar3 - *(int *)((int)this + 0x14)) - uVar2;
    if (fVar6 != 0.0) {
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  else {
    *(undefined4 *)((int)this + 0xc) = 3;
  }
  *(int *)((int)this + 0x28) = param_1;
  uVar4 = FUN_00bc30b0(param_1);
  *(undefined4 *)((int)this + 0x1c) = uVar4;
  return;
}


//// FUNCTION FUN_00c2a6c0 @ 00c2a6c0 ////

void __fastcall FUN_00c2a6c0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float *unaff_retaddr;
  
  (**(code **)*param_1)(0x3f800000);
  *unaff_retaddr = 0.0;
  unaff_retaddr[1] = 0.0;
  unaff_retaddr[2] = 0.0;
  if (*(char *)(param_1 + 9) != '\0') {
    unaff_retaddr[2] = 1.4013e-45;
  }
  if (*(char *)(param_1 + 0xb) != '\0') {
    unaff_retaddr[2] = (float)((uint)unaff_retaddr[2] | 4);
  }
  if ((*(char *)(param_1 + 9) == '\0') && (*(char *)(param_1 + 0xb) != '\0')) {
    unaff_retaddr[1] = 0.0;
    *unaff_retaddr = 1.0;
    unaff_retaddr[2] = (float)((uint)unaff_retaddr[2] | 2);
    return;
  }
  iVar3 = param_1[4];
  iVar4 = param_1[6] + iVar3 + param_1[5];
  fVar1 = (float)iVar4;
  if (iVar4 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar4 = param_1[3];
  if (iVar4 == 0) {
    unaff_retaddr[1] = (float)param_1[1];
    fVar2 = (float)(int)param_1[2];
    bVar5 = (int)param_1[2] < 0;
  }
  else if (iVar4 == 1) {
    iVar4 = param_1[2];
    fVar2 = (float)(iVar4 + iVar3);
    unaff_retaddr[1] = (float)param_1[1];
    bVar5 = iVar4 + iVar3 < 0;
  }
  else {
    if (iVar4 != 2) {
      unaff_retaddr[1] = 0.0;
      *unaff_retaddr = 1.0;
      return;
    }
    iVar3 = param_1[2] + iVar3 + param_1[5];
    fVar2 = (float)iVar3;
    unaff_retaddr[1] = 0.0;
    bVar5 = iVar3 < 0;
  }
  if (bVar5) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *unaff_retaddr = fVar2 / fVar1;
  return;
}


//// FUNCTION FUN_00c2a820 @ 00c2a820 ////

void __fastcall FUN_00c2a820(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00c2a850 @ 00c2a850 ////

uint __fastcall FUN_00c2a850(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  return uVar1 + 7 & 0xfffffff8;
}


//// FUNCTION PKAllocatorsCPresizedMemory_Ctor @ 00c2a870 ////

int * __thiscall PKAllocatorsCPresizedMemory_Ctor(void *this,int param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  LPCSTR pCVar3;
  undefined1 local_112;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0468b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(int *)((int)this + 8) = param_1;
  if (param_1 == 0) {
    LH_Assert(&local_111,"ObjectByteSize > 0\n");
    DebugBreak();
  }
  if (param_2 != 0) {
    uVar1 = FUN_00c2a850((int)this);
    pvVar2 = operator_new(uVar1 * param_2);
    *(void **)this = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = 0;
      LH_LogErrorMessage(&local_110,".\\PKAllocatorsCPresizedMemory.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0xb);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"EMEM");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_112,pCVar3);
      DebugBreak();
    }
    *(int *)((int)this + 4) = *(int *)this;
    *(undefined4 *)(*(int *)this + 4) = 0;
    **(int **)((int)this + 4) = param_2;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION PKAllocatorsCPresizedMemory_Allocate @ 00c2a990 ////

int * __fastcall PKAllocatorsCPresizedMemory_Allocate(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  LPCSTR pCVar4;
  int *extraout_EDX;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d046a0;
  local_c = ExceptionList;
  if (*(uint **)(param_1 + 4) == (uint *)0x0) {
    return (int *)0x0;
  }
  uVar1 = **(uint **)(param_1 + 4);
  if (1 < uVar1) {
    ExceptionList = &local_c;
    uVar3 = FUN_00c2a850(param_1);
    *extraout_EDX = uVar1 - 1;
    ExceptionList = local_c;
    return (int *)(uVar3 * (uVar1 - 1) + (int)extraout_EDX);
  }
  if (uVar1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKAllocatorsCPresizedMemory.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"No objects? This cannot be...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar4);
    DebugBreak();
  }
  piVar2 = *(int **)(param_1 + 4);
  *(int *)(param_1 + 4) = piVar2[1];
  ExceptionList = local_c;
  return piVar2;
}


//// FUNCTION PKAllocatorsCPresizedMemory_Free @ 00c2aab0 ////

void __thiscall PKAllocatorsCPresizedMemory_Free(void *this,undefined4 *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d046b5;
  local_c = ExceptionList;
  if (param_1 == (undefined4 *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKAllocatorsCPresizedMemory.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x39);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  param_1[1] = *(undefined4 *)((int)this + 4);
  *param_1 = 1;
  *(undefined4 **)((int)this + 4) = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c2ac30 @ 00c2ac30 ////

void __fastcall FUN_00c2ac30(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_00c2ac70 @ 00c2ac70 ////

void FUN_00c2ac70(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  param_1[2] = param_2 + -0x20;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0x4e;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  param_1[6] = param_3;
  param_1[7] = param_4;
  *param_1 = 0;
  if (param_3 != 0) {
    *(undefined4 **)(param_3 + 0x1c) = param_1;
  }
  if (param_4 != 0) {
    *(undefined4 **)(param_4 + 0x18) = param_1;
  }
  return;
}


//// FUNCTION FUN_00c2acc0 @ 00c2acc0 ////

void __thiscall FUN_00c2acc0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(int *)(param_1 + 8) + (int)*(short *)(param_1 + 0xc);
  uVar3 = uVar4 >> 9;
  *(uint *)(param_1 + 8) = uVar4;
  *(undefined2 *)(param_1 + 0xc) = 0;
  if (0xfe < uVar3) {
    uVar3 = 0xff;
  }
  piVar1 = (int *)((int)this + uVar3 * 4 + 0x3c);
  *(int **)(param_1 + 0x10) = piVar1;
  iVar2 = *piVar1;
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 != 0) {
    *(int **)(iVar2 + 0x10) = (int *)(param_1 + 0x14);
  }
  *piVar1 = param_1;
  if (*(int *)((int)this + 0x1c) < *(int *)(param_1 + 8)) {
    *(int *)((int)this + 0x1c) = *(int *)(param_1 + 8);
  }
  return;
}


//// FUNCTION FUN_00c2ad20 @ 00c2ad20 ////

void FUN_00c2ad20(int param_1)

{
  *(undefined1 *)(param_1 + 0xe) = 0;
  **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10) = *(undefined4 *)(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00c2ad50 @ 00c2ad50 ////

int __thiscall FUN_00c2ad50(void *this,int param_1,int param_2)

{
  int iVar1;
  
  FUN_00c2ad20(param_1);
  FUN_00c2ad20(param_2);
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x18) = param_1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_2 + 8) + 0x20;
  *(undefined1 *)(param_1 + 0xe) = 0x4e;
  FUN_00c2acc0(this,param_1);
  return param_1;
}


//// FUNCTION FUN_00c2ada0 @ 00c2ada0 ////

void __thiscall FUN_00c2ada0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = param_1 >> 9;
  iVar2 = 0;
  uVar5 = 0x7fffffff;
  if (uVar3 < 0xff) {
    if (0xff < uVar3) {
      return;
    }
  }
  else {
    uVar3 = 0xff;
  }
  piVar4 = (int *)((int)this + uVar3 * 4 + 0x3c);
  do {
    if (iVar2 != 0) {
      return;
    }
    uVar6 = uVar5;
    for (iVar1 = *piVar4;
        (uVar5 = uVar6, iVar1 != 0 &&
        (((uVar5 = *(uint *)(iVar1 + 8), (int)uVar5 < (int)param_1 || ((int)uVar6 <= (int)uVar5)) ||
         (iVar2 = iVar1, uVar6 = uVar5, uVar5 != param_1)))); iVar1 = *(int *)(iVar1 + 0x14)) {
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar3 < 0x100);
  return;
}


//// FUNCTION FUN_00c2ae20 @ 00c2ae20 ////

int __fastcall FUN_00c2ae20(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x1c) >> 9;
  if (0xfe < uVar2) {
    uVar2 = 0xff;
  }
  iVar1 = *(int *)(param_1 + 0x3c + uVar2 * 4);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(uint *)(iVar1 + 8) == *(uint *)(param_1 + 0x1c)) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}


//// FUNCTION FUN_00c2ae50 @ 00c2ae50 ////

void __fastcall FUN_00c2ae50(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 0x1c) >> 9;
  if (0xfe < uVar2) {
    uVar2 = 0xff;
  }
  piVar3 = (int *)(param_1 + 0x3c + uVar2 * 4);
  do {
    if (*piVar3 != 0) {
      iVar4 = 0;
      for (iVar1 = *(int *)(param_1 + 0x3c + uVar2 * 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14))
      {
        if (iVar4 < *(int *)(iVar1 + 8)) {
          iVar4 = *(int *)(iVar1 + 8);
        }
      }
      *(int *)(param_1 + 0x1c) = iVar4;
      return;
    }
    uVar2 = uVar2 - 1;
    piVar3 = piVar3 + -1;
  } while (-1 < (int)uVar2);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_00c2aef0 @ 00c2aef0 ////

undefined4 __thiscall FUN_00c2aef0(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)*(short *)(param_1 + 0xc) + *(int *)(param_1 + 8);
  if (param_2 <= iVar4) {
    return 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  puVar1 = (undefined4 *)(param_1 + 0x20);
  while ((puVar2 != (undefined4 *)0x0 &&
         ((*(char *)((int)puVar2 + 0xe) == 'N' ||
          ((*(char *)((int)puVar2 + 0xf) == '\0' &&
           (iVar3 = (**(code **)(*(int *)this + 4))(*puVar2,puVar2[1]), iVar3 != 0))))))) {
    puVar1 = puVar2 + 8;
    if (param_2 <= param_1 + 0x20 + (iVar4 - (int)puVar1)) {
      return 1;
    }
    puVar2 = (undefined4 *)puVar2[6];
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  while ((puVar2 != (undefined4 *)0x0 &&
         ((*(char *)((int)puVar2 + 0xe) == 'N' ||
          ((*(char *)((int)puVar2 + 0xf) == '\0' &&
           (iVar4 = (**(code **)(*(int *)this + 4))(*puVar2,puVar2[1]), iVar4 != 0))))))) {
    if (param_2 <= (((int)*(short *)(puVar2 + 3) + puVar2[2]) - (int)puVar1) + 0x20 + (int)puVar2) {
      return 1;
    }
    puVar2 = (undefined4 *)puVar2[7];
  }
  return 0;
}


//// FUNCTION FUN_00c2afd0 @ 00c2afd0 ////

void __fastcall FUN_00c2afd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x3c);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


//// FUNCTION FUN_00c2b010 @ 00c2b010 ////

void __thiscall FUN_00c2b010(void *this,int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_00c2ac30((int)this);
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x30) = param_2;
  pvVar1 = operator_new(param_1 + 0x10);
  *(void **)((int)this + 8) = pvVar1;
  puVar2 = (undefined4 *)((int)pvVar1 + 0xfU & 0xfffffff0);
  *(undefined4 **)((int)this + 4) = puVar2;
  iVar3 = FUN_00c2ac70(puVar2,*(int *)((int)this + 0xc),0,0);
  FUN_00c2acc0(this,iVar3);
  return;
}


//// FUNCTION FUN_00c2b060 @ 00c2b060 ////

void __thiscall FUN_00c2b060(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) - param_2;
  if (0x20 < iVar1) {
    iVar1 = FUN_00c2ac70((undefined4 *)(param_1 + 0x20 + param_2),iVar1,param_1,
                         *(int *)(param_1 + 0x1c));
    FUN_00c2acc0(this,iVar1);
    *(int *)(param_1 + 8) = param_2;
    return;
  }
  *(int *)(param_1 + 8) = param_2;
  *(short *)(param_1 + 0xc) = (short)iVar1;
  return;
}


//// FUNCTION FUN_00c2b0b0 @ 00c2b0b0 ////

int __thiscall FUN_00c2b0b0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == 'N')) {
    FUN_00c2ad50(this,param_1,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == 'N')) {
    iVar1 = FUN_00c2ad50(this,iVar1,param_1);
    return iVar1;
  }
  return param_1;
}


//// FUNCTION FUN_00c2b150 @ 00c2b150 ////

int __thiscall FUN_00c2b150(void *this,int param_1)

{
  return *(int *)(*(int *)((int)this + 0x440) + param_1 * 4) + 0x20;
}


//// FUNCTION FUN_00c2b190 @ 00c2b190 ////

void __thiscall FUN_00c2b190(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x440) + param_1 * 4);
  if (*(char *)(iVar1 + 0xf) == '\0') {
    *(undefined1 *)(iVar1 + 0xf) = 1;
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  }
  return;
}


//// FUNCTION FUN_00c2b1b0 @ 00c2b1b0 ////

void __thiscall FUN_00c2b1b0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x440) + param_1 * 4);
  if (*(char *)(iVar1 + 0xf) != '\0') {
    *(undefined1 *)(iVar1 + 0xf) = 0;
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return;
}


//// FUNCTION FUN_00c2b1d0 @ 00c2b1d0 ////

void __fastcall FUN_00c2b1d0(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_c;
  undefined4 *local_8;
  
  if ((int)param_1[6] < 1) {
    iVar7 = 0;
    local_8 = (undefined4 *)0x0;
    local_c = 0;
    puVar2 = (undefined4 *)param_1[1];
    puVar6 = local_8;
    while (puVar5 = puVar2, puVar5 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)puVar5[7];
      if (puVar5[4] == 0) {
        iVar3 = puVar5[2];
        uVar1 = *(undefined1 *)((int)puVar5 + 0xf);
        puVar8 = (undefined4 *)(param_1[1] + iVar7);
        if ((puVar5 != puVar8) || (local_8 = puVar6, *(short *)(puVar5 + 3) != 0)) {
          iVar7 = puVar5[1];
          uVar4 = *puVar5;
          *(undefined4 *)(param_1[0x110] + iVar7 * 4) = 0;
          (**(code **)*param_1)(uVar4,iVar7,puVar5 + 8,puVar8 + 8,iVar3);
          *(undefined4 **)(param_1[0x110] + iVar7 * 4) = puVar8;
          *(undefined1 *)((int)puVar8 + 0xf) = uVar1;
          *puVar8 = uVar4;
          puVar8[1] = iVar7;
          puVar8[2] = iVar3;
          *(undefined2 *)(puVar8 + 3) = 0;
          *(undefined1 *)((int)puVar8 + 0xe) = 0x54;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = puVar6;
          puVar8[7] = 0;
          iVar7 = local_c;
          local_8 = puVar8;
          if (puVar6 != (undefined4 *)0x0) {
            puVar6[7] = puVar8;
          }
        }
        iVar7 = iVar7 + 0x20 + iVar3;
        puVar6 = local_8;
        local_c = iVar7;
      }
    }
    param_1[4] = iVar7;
    FUN_00c2afd0((int)param_1);
    if (0x20 < param_1[3] - iVar7) {
      iVar7 = FUN_00c2ac70((undefined4 *)(param_1[1] + iVar7),param_1[3] - iVar7,(int)puVar6,0);
      FUN_00c2acc0(param_1,iVar7);
    }
  }
  return;
}


//// FUNCTION FUN_00c2b350 @ 00c2b350 ////

void __thiscall FUN_00c2b350(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  (*(code *)**(undefined4 **)this)(*param_1,param_1[1],param_1 + 8,param_2 + 8,iVar1);
  FUN_00c2ad20((int)param_2);
  FUN_00c2b060(this,(int)param_2,iVar1);
  *param_2 = *param_1;
  *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
  param_2[1] = param_1[1];
  *(undefined1 *)((int)param_2 + 0xf) = *(undefined1 *)((int)param_1 + 0xf);
  *(undefined4 **)(*(int *)((int)this + 0x440) + param_1[1] * 4) = param_2;
  *(int *)((int)this + 0x10) =
       *(int *)((int)this + 0x10) + ((int)*(short *)(param_2 + 3) - (int)*(short *)(param_1 + 3));
  *(undefined1 *)((int)param_1 + 0xe) = 0x4e;
  FUN_00c2acc0(this,(int)param_1);
  return;
}


//// FUNCTION FUN_00c2b3e0 @ 00c2b3e0 ////

void __thiscall FUN_00c2b3e0(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x440) + param_1 * 4);
  *puVar1 = 0;
  *puVar1 = *(undefined4 *)((int)this + 0x44c);
  *(int *)((int)this + 0x44c) = param_1;
  return;
}


//// FUNCTION FUN_00c2b410 @ 00c2b410 ////

void __fastcall FUN_00c2b410(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (param_1[0x110] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1[0x111] - param_1[0x110] >> 2;
    }
    if (iVar2 <= iVar3) break;
    puVar1 = *(undefined4 **)(param_1[0x110] + iVar3 * 4);
    if ((puVar1 != (undefined4 *)0x0) && (*(char *)((int)puVar1 + 0xe) == 'T')) {
      (**(code **)(*param_1 + 8))(*puVar1);
    }
    iVar3 = iVar3 + 1;
  }
  return;
}


//// FUNCTION FUN_00c2b460 @ 00c2b460 ////

void __thiscall FUN_00c2b460(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x440) + param_1 * 4);
  *(undefined1 *)(iVar1 + 0xe) = 0x4e;
  FUN_00c2acc0(this,iVar1);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  *(int *)((int)this + 0x10) =
       *(int *)((int)this + 0x10) + ((-0x20 - *(short *)(iVar1 + 0xc)) - *(int *)(iVar1 + 8));
  FUN_00c2b0b0(this,iVar1);
  FUN_00c2b3e0(this,param_1);
  return;
}


//// FUNCTION FUN_00c2b4c0 @ 00c2b4c0 ////

undefined4 __thiscall FUN_00c2b4c0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this_00;
  void *this_01;
  
  puVar1 = *(undefined4 **)(*param_1 + 0x1c);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)((int)puVar1 + 0xf) == '\0')) {
    iVar2 = (**(code **)(*(int *)this + 4))(*puVar1,puVar1[1]);
    if (iVar2 != 0) {
      FUN_00c2ad20(*param_1);
      puVar3 = (undefined4 *)FUN_00c2ada0(this,puVar1[2]);
      *(undefined1 *)(*param_1 + 0xe) = 0x4e;
      FUN_00c2acc0(this,*param_1);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_00c2b350(this_00,puVar1,puVar3);
        FUN_00c2b0b0(this,(int)puVar1);
        return 1;
      }
    }
  }
  puVar1 = *(undefined4 **)(*param_1 + 0x18);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)((int)puVar1 + 0xf) == '\0')) {
    iVar2 = (**(code **)(*(int *)this + 4))(*puVar1,puVar1[1]);
    if (iVar2 != 0) {
      FUN_00c2ad20(*param_1);
      puVar3 = (undefined4 *)FUN_00c2ada0(this,puVar1[2]);
      *(undefined1 *)(*param_1 + 0xe) = 0x4e;
      FUN_00c2acc0(this,*param_1);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_00c2b350(this_01,puVar1,puVar3);
        iVar2 = FUN_00c2b0b0(this,(int)puVar1);
        *param_1 = iVar2;
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00c2b5b0 @ 00c2b5b0 ////

void __fastcall FUN_00c2b5b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d046d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da6664;
  local_4 = 1;
  FUN_00c2ac30((int)param_1);
  PKStringsCHeapString_Dtor(param_1 + 0x114);
  if ((void *)param_1[0x110] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x110]);
  }
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0xd] = &PTR_LAB_00da1b28;
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00da6664_00c2b640 @ 00c2b640 ////

undefined4 * __fastcall Ctor_vt00da6664_00c2b640(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d046fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da6664;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xd] = &PTR_LAB_00da1b28;
  param_1[0xe] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  local_4 = 1;
  param_1[0x113] = 0xffffffff;
  Ctor_vt00d9feb8_00be1e00(param_1 + 0x114);
  FUN_00c2afd0((int)param_1);
  param_1[0xe] = param_1 + 0xd;
  param_1[8] = 0x80000;
  param_1[9] = 0x100000;
  param_1[10] = 1;
  param_1[0xb] = 0x10;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c2b6f0 @ 00c2b6f0 ////

int __thiscall FUN_00c2b6f0(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  void *this_01;
  int iVar5;
  void *_Memory;
  int local_30;
  uint local_2c;
  int *local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0470e;
  local_c = ExceptionList;
  local_24 = 0;
  ExceptionList = &local_c;
  iVar3 = FUN_00c2ae20((int)this);
  iVar2 = param_1;
  if ((iVar3 != 0) && (iVar3 = FUN_00c2aef0(this_00,iVar3,param_1), iVar3 != 0)) {
    iVar3 = *(int *)((int)this + 0x1c);
    while (((iVar3 < iVar2 && (param_1 = FUN_00c2ae20((int)this), param_1 != 0)) &&
           (iVar3 = FUN_00c2b4c0(this_01,&param_1), iVar3 != 0))) {
      iVar3 = *(int *)((int)this + 0x1c);
    }
  }
  if (iVar2 <= (int)*(uint *)((int)this + 0x1c)) {
    ExceptionList = local_c;
    return 1;
  }
  local_30 = 0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_2c = *(uint *)((int)this + 0x1c) >> 9;
  local_4 = 0;
  if (0xfe < local_2c) {
    local_2c = 0xff;
  }
  local_28 = (int *)((int)this + local_2c * 4 + 0x3c);
  _Memory = (void *)0x0;
  do {
    if ((local_24 != 0) || (*(int *)((int)this + 0x2c) <= local_30)) break;
    iVar3 = *local_28;
joined_r0x00c2b7d1:
    param_1 = iVar3;
    if (((iVar3 == 0) || (iVar2 <= *(int *)(iVar3 + 8))) || (*(int *)((int)this + 0x2c) <= local_30)
       ) goto LAB_00c2b8af;
    bVar1 = false;
    iVar5 = 0;
    while( true ) {
      if (_Memory == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = local_14 - (int)_Memory >> 2;
      }
      if (iVar4 <= iVar5) goto LAB_00c2b81d;
      if (iVar3 == *(int *)((int)_Memory + iVar5 * 4)) break;
      iVar5 = iVar5 + 1;
    }
    bVar1 = true;
LAB_00c2b81d:
    local_20 = iVar3;
    if (bVar1) {
LAB_00c2b896:
      iVar3 = *(int *)(iVar3 + 0x14);
      goto joined_r0x00c2b7d1;
    }
    local_30 = local_30 + 1;
    iVar5 = FUN_00c2aef0(this,iVar3,iVar2);
    if ((iVar5 == 0) || (iVar5 = FUN_00c2b4c0(this,&param_1), iVar3 = param_1, iVar5 == 0))
    goto LAB_00c2b896;
    iVar3 = *(int *)(param_1 + 8);
    while (iVar3 < iVar2) {
      iVar3 = FUN_00c2b4c0(this,&param_1);
      if (iVar3 == 0) {
        FUN_00c2ca70(local_1c,&local_20);
        _Memory = local_18;
        break;
      }
      iVar3 = *(int *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) < iVar2) {
      iVar3 = *local_28;
      goto joined_r0x00c2b7d1;
    }
    local_24 = 1;
LAB_00c2b8af:
    local_2c = local_2c - 1;
    local_28 = local_28 + -1;
  } while (-1 < (int)local_2c);
  FUN_00c2ae50((int)this);
  if (_Memory == (void *)0x0) {
    ExceptionList = local_c;
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00c2b900 @ 00c2b900 ////

int __fastcall FUN_00c2b900(int param_1)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x44c);
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(*(int *)(param_1 + 0x440) + iVar1 * 4);
    *(undefined4 *)(*(int *)(param_1 + 0x440) + iVar1 * 4) = 0xffffffff;
    return iVar1;
  }
  if (*(int *)(param_1 + 0x440) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x444) - *(int *)(param_1 + 0x440) >> 2;
  }
  local_4 = 0;
  FUN_00c2c9f0((void *)(param_1 + 0x43c),&local_4);
  return iVar1;
}


//// FUNCTION FUN_00c2b960 @ 00c2b960 ////

undefined4 __thiscall FUN_00c2b960(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_2 + 0xfU & 0xfffffff0;
  iVar2 = FUN_00c2ada0(this,uVar4);
  if (iVar2 != 0) {
    iVar3 = *(int *)((int)this + 0x1c);
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00c2ad20(iVar2);
    *(undefined1 *)(iVar2 + 0xe) = 0x54;
    FUN_00c2b060(this,iVar2,uVar4);
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
    *(int *)((int)this + 0x10) =
         *(int *)((int)this + 0x10) + *(short *)(iVar2 + 0xc) + 0x20 + *(int *)(iVar2 + 8);
    if (iVar1 == iVar3) {
      FUN_00c2ae50((int)this);
    }
    iVar3 = FUN_00c2b900((int)this);
    *param_1 = iVar3;
    *(int *)(*(int *)((int)this + 0x440) + iVar3 * 4) = iVar2;
    *(int *)(iVar2 + 4) = *param_1;
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00c2ba00 @ 00c2ba00 ////

undefined4 __thiscall FUN_00c2ba00(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0x38) != 0) {
    iVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 0x10);
    while (iVar1 < param_2) {
      iVar1 = (**(code **)(**(int **)((int)this + 0x38) + 4))(param_2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 0x10);
    }
    if (*(int *)((int)this + 0x1c) < param_2) {
      do {
        if ((*(int *)((int)this + 0x20) + param_2 <=
             *(int *)((int)this + 0xc) - *(int *)((int)this + 0x10)) ||
           (iVar1 = (**(code **)(**(int **)((int)this + 0x38) + 4))(param_2), iVar1 == 0)) break;
      } while (*(int *)((int)this + 0x1c) < param_2);
      if (((*(int *)((int)this + 0x1c) < param_2) &&
          (iVar1 = FUN_00c2b6f0(this,param_2), iVar1 == 0)) &&
         (*(int *)((int)this + 0x1c) < param_2)) {
        do {
          if ((*(int *)((int)this + 0x24) + param_2 <=
               *(int *)((int)this + 0xc) - *(int *)((int)this + 0x10)) ||
             (iVar1 = (**(code **)(**(int **)((int)this + 0x38) + 4))(param_2), iVar1 == 0)) break;
        } while (*(int *)((int)this + 0x1c) < param_2);
        if ((*(int *)((int)this + 0x1c) < param_2) &&
           (iVar1 = FUN_00c2b6f0(this,param_2), iVar1 == 0)) {
          if (*(int *)((int)this + 0x28) == 0) {
            return 0;
          }
          FUN_00c2b1d0(this);
        }
      }
    }
  }
  uVar2 = FUN_00c2b960(this,param_1,param_2);
  return uVar2;
}


//// FUNCTION FUN_00c2bca0 @ 00c2bca0 ////

void __fastcall FUN_00c2bca0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00c2bcc0 @ 00c2bcc0 ////

void __fastcall FUN_00c2bcc0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00c2bf50 @ 00c2bf50 ////

void __fastcall FUN_00c2bf50(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -4) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined4 *)(param_2 + -4);
  }
  return;
}


//// FUNCTION FUN_00c2bf90 @ 00c2bf90 ////

void __fastcall FUN_00c2bf90(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00c2c030 @ 00c2c030 ////

void __fastcall FUN_00c2c030(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00c2c0d0 @ 00c2c0d0 ////

void * FUN_00c2c0d0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00c2c100 @ 00c2c100 ////

void __fastcall FUN_00c2c100(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00c2c180 @ 00c2c180 ////

void __fastcall FUN_00c2c180(int param_1)

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


//// FUNCTION FUN_00c2c1b0 @ 00c2c1b0 ////

undefined4 * FUN_00c2c1b0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  return param_1 + param_2;
}


//// FUNCTION FUN_00c2c250 @ 00c2c250 ////

void __fastcall FUN_00c2c250(int param_1)

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


//// FUNCTION FUN_00c2c280 @ 00c2c280 ////

undefined4 * FUN_00c2c280(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00c2c100(param_1,param_2,param_3);
  return param_1 + param_2;
}


//// FUNCTION FUN_00c2c2c0 @ 00c2c2c0 ////

void __fastcall FUN_00c2c2c0(int param_1)

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


//// FUNCTION FUN_00c2c2f0 @ 00c2c2f0 ////

void __fastcall FUN_00c2c2f0(int param_1)

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


//// FUNCTION FUN_00c2c320 @ 00c2c320 ////

void __fastcall FUN_00c2c320(int param_1)

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


//// FUNCTION FUN_00c2c350 @ 00c2c350 ////

void __fastcall FUN_00c2c350(int param_1)

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


//// FUNCTION FUN_00c2c3a0 @ 00c2c3a0 ////

void FUN_00c2c3a0(void)

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
  puStack_8 = &LAB_00d04728;
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


//// FUNCTION FUN_00c2c410 @ 00c2c410 ////

void FUN_00c2c410(void)

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
  puStack_8 = &LAB_00d04748;
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


//// FUNCTION FUN_00c2c4d0 @ 00c2c4d0 ////

void __thiscall FUN_00c2c4d0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00d04760;
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
      uVar7 = FUN_00c2c3a0();
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
      puVar4 = (undefined4 *)FUN_00c2c030(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_00c2c100(puVar4,param_2,&param_3);
      FUN_00c2c030(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2);
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
      FUN_00c2c030(param_1,puVar3,param_1 + param_2);
      local_8 = 2;
      FUN_00c2c280(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar6 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar6;
      puVar3 = (undefined4 *)(iVar6 + param_2 * -4);
    }
    else {
      uVar5 = FUN_00c2c030(puVar3 + -param_2,puVar3,puVar3);
      *(undefined4 *)((int)this + 8) = uVar5;
      FUN_00c2bf50((int)param_1,(int)(puVar3 + -param_2),puVar3);
      puVar3 = param_1 + param_2;
    }
    FUN_00c2bca0(param_1,puVar3,&param_3);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00c2c740 @ 00c2c740 ////

void __thiscall FUN_00c2c740(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00c2c410();
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
      _Dst = FUN_00c2c1b0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00c2c0d0(param_1,iVar5,param_1 + param_2);
      FUN_00c2c1b0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00c2bcc0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00c2c0d0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00c2bf90(param_1,(int)pvVar3,iVar5);
    FUN_00c2bcc0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00c2c9f0 @ 00c2c9f0 ////

void __thiscall FUN_00c2c9f0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00c2c100(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_00c2c4d0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00c2ca70 @ 00c2ca70 ////

void __thiscall FUN_00c2ca70(void *this,undefined4 *param_1)

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
  FUN_00c2c740(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00c2cbe0 @ 00c2cbe0 ////

void __thiscall FUN_00c2cbe0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  float10 fVar1;
  
  *(int *)((int)this + 0x10) = param_2;
  *(int *)((int)this + 0xc) = param_1;
  *(int *)this = param_3;
  *(int *)((int)this + 4) = param_4;
  if ((param_3 != 0) && (param_3 != 2)) {
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  fVar1 = (float10)FUN_00ace9b0();
  *(float *)((int)this + 8) = (float)fVar1;
  return;
}


//// FUNCTION FUN_00c2cc40 @ 00c2cc40 ////

void * __fastcall FUN_00c2cc40(void *param_1)

{
  FUN_00c2cbe0(param_1,0,0,0,0);
  return param_1;
}


//// FUNCTION FUN_00c2cc90 @ 00c2cc90 ////

float10 __thiscall FUN_00c2cc90(int *param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    if (param_2 < (float)param_1[3] == (param_2 == (float)param_1[3])) {
      if (param_2 < (float)param_1[4]) {
        fVar2 = (float10)FUN_00ace9b0();
        return fVar2;
      }
      goto LAB_00c2ccf0;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (param_2 < (float)param_1[3] != (param_2 == (float)param_1[3])) goto LAB_00c2ccd9;
      if (param_2 < (float)param_1[4]) {
        fVar2 = (float10)FUN_00ace9b0();
        return fVar2;
      }
    }
LAB_00c2ccf0:
    return (float10)0.0;
  }
LAB_00c2ccd9:
  return (float10)1.0;
}


//// FUNCTION FUN_00c2cd30 @ 00c2cd30 ////

bool __fastcall FUN_00c2cd30(int param_1)

{
  return *(int *)(param_1 + 0x110) == 6;
}


//// FUNCTION FUN_00c2cd40 @ 00c2cd40 ////

bool __fastcall FUN_00c2cd40(int param_1)

{
  return *(int *)(param_1 + 0x110) == 0;
}


//// FUNCTION FUN_00c2cd50 @ 00c2cd50 ////

void __fastcall FUN_00c2cd50(int param_1)

{
  FUN_00c525b0((void *)(param_1 + 0x114),param_1);
  *(undefined4 *)(param_1 + 0x110) = 5;
  return;
}


//// FUNCTION FUN_00c2cd70 @ 00c2cd70 ////

void __thiscall FUN_00c2cd70(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1c4) = param_1;
  if (*(int **)((int)this + 0x1b4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2cd86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)((int)this + 0x1b4) + 0x14))();
    return;
  }
  return;
}


//// FUNCTION FUN_00c2cd90 @ 00c2cd90 ////

void __fastcall FUN_00c2cd90(int param_1)

{
  if (*(int **)(param_1 + 0x1b4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2cd9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x1b4) + 0x18))();
    return;
  }
  return;
}


//// FUNCTION FUN_00c2cdb0 @ 00c2cdb0 ////

void __thiscall
FUN_00c2cdb0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 *param_12,
            undefined4 param_13,undefined4 param_14,float param_15,float param_16)

{
  void *this_00;
  
  this_00 = (void *)((int)this + 0x14c);
  *(undefined4 *)((int)this + 0x1c8) = param_1;
  *(undefined1 *)((int)this + 0x1ec) = 0;
  FUN_00c2f3e0(this_00,0.0,0.0);
  FUN_00c2f3e0(this_00,param_15,param_16);
  FUN_00c2f400(this_00,0.0,0.0);
  FUN_00c2f400(this_00,param_15,param_16);
  FUN_00c52660((void *)((int)this + 0x114),param_2,param_3,param_4,param_5,param_6,param_7,param_12,
               param_13);
  FUN_00c52350((void *)((int)this + 0x114),param_9,param_10,param_11,(int)this + 0x28);
  *(undefined4 *)((int)this + 0x1bc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1b8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x110) = 1;
  return;
}


//// FUNCTION FUN_00c2ce90 @ 00c2ce90 ////

void __thiscall FUN_00c2ce90(void *this,int param_1,float param_2,float param_3)

{
  if (param_1 == *(int *)((int)this + 0x1c8)) {
    FUN_00c2f400((void *)((int)this + 0x14c),param_2,param_3);
  }
  return;
}


//// FUNCTION FUN_00c2cec0 @ 00c2cec0 ////

void __fastcall FUN_00c2cec0(int param_1)

{
  FUN_00c52860(param_1 + 0x114);
  return;
}


//// FUNCTION GetField_0x1c0_00c2cee0 @ 00c2cee0 ////

undefined4 __fastcall GetField_0x1c0_00c2cee0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c0);
}


//// FUNCTION GetField_0x1bc_00c2cef0 @ 00c2cef0 ////

undefined4 __fastcall GetField_0x1bc_00c2cef0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1bc);
}


//// FUNCTION GetField_0x1b8_00c2cf00 @ 00c2cf00 ////

undefined4 __fastcall GetField_0x1b8_00c2cf00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1b8);
}


//// FUNCTION FUN_00c2cf10 @ 00c2cf10 ////

void __thiscall
FUN_00c2cf10(void *this,int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == *(int *)((int)this + 0x1c8)) {
    *(undefined1 *)((int)this + 0x1ec) = 1;
    FUN_00bbfaa0((void *)((int)this + 0x1f0),param_2);
    *(undefined4 *)((int)this + 0x1f8) = param_3;
    *(undefined4 *)((int)this + 0x1fc) = param_4;
  }
  return;
}


//// FUNCTION CInstance_ServiceFrameStreamer @ 00c2cf50 ////

void __fastcall CInstance_ServiceFrameStreamer(int param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d049c6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x1b4) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &pvStack_c;
    LH_LogErrorMessage(&local_110,".\\CInstance.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(8);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null frame streamer");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (*(int *)(param_1 + 0x110) != 2) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\CInstance.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(9);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"ESTATE");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x1b4) + 4))();
  if (iVar2 == 0) {
    ExceptionList = pvStack_c;
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x1b4) + 0xc))();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Ctor_vt00da6774_00c2d100 @ 00c2d100 ////

undefined4 * __fastcall Ctor_vt00da6774_00c2d100(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04a42;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da66d0_00c2dc00(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c2eac0_00da6774;
  local_4 = 0;
  Ctor_vt00da66e4_00c2de10(param_1 + 10);
  param_1[10] = &PTR_ScalarDeletingDtor_00c2eae0_00da6788;
  local_4._0_1_ = 1;
  Ctor_vt00da66f8_00c2e040(param_1 + 0x16);
  param_1[0x16] = &PTR_ScalarDeletingDtor_00c2eb00_00da679c;
  local_4._0_1_ = 2;
  Ctor_vt00da670c_00c2e280(param_1 + 0x23);
  param_1[0x23] = &PTR_ScalarDeletingDtor_00c2eb20_00da67b0;
  local_4._0_1_ = 3;
  Ctor_vt00da6720_00c2e4c0(param_1 + 0x30);
  param_1[0x30] = &PTR_ScalarDeletingDtor_00c2eb40_00da67c4;
  local_4._0_1_ = 4;
  Ctor_vt00da6734_00c2e6d0(param_1 + 0x3a);
  param_1[0x3a] = &PTR_ScalarDeletingDtor_00c2eb60_00da67d8;
  local_4._0_1_ = 5;
  param_1[0x44] = 0;
  CASyncDecoder_Ctor(param_1 + 0x45);
  local_4._0_1_ = 6;
  FUN_00c2f560(param_1 + 0x53,0.0,0.0);
  local_4._0_1_ = 7;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0xffffffff;
  param_1[0x6f] = 0xffffffff;
  param_1[0x70] = 0xffffffff;
  param_1[0x71] = 0x3f800000;
  param_1[0x72] = 0xffffffff;
  param_1[0x73] = 0;
  FUN_00c53cc0(param_1 + 0x74);
  local_4 = CONCAT31(local_4._1_3_,8);
  param_1[0x7a] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  Ctor_vt00d9feb8_00be1e00(param_1 + 0x7c);
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c2d250 @ 00c2d250 ////

undefined4 __thiscall FUN_00c2d250(void *this,char *param_1,undefined4 *param_2)

{
  uint uVar1;
  char local_1c;
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00c2ee70((int *)((int)this + 0x8c));
  uVar1 = FUN_00c2ec80((int *)((int)this + 0x28));
  *param_1 = local_10;
  if ((local_10 != '\0') && (local_1c != '\0')) {
    *(undefined4 *)((int)this + 0x1bc) = local_18;
    *(undefined4 *)((int)this + 0x1c0) = local_14;
    *(undefined4 *)((int)this + 0x1b8) = local_4;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_c;
      param_2[1] = local_8;
    }
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00c2d2d0 @ 00c2d2d0 ////

void __thiscall FUN_00c2d2d0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00c2ed70((int *)((int)this + 0x58));
  *(undefined4 *)((int)this + 0x1bc) = local_8;
  *(undefined4 *)((int)this + 0x1c0) = local_4;
  *param_1 = local_10;
  *param_2 = local_c;
  return;
}


//// FUNCTION FUN_00c2d320 @ 00c2d320 ////

void __fastcall FUN_00c2d320(int param_1)

{
  FUN_00c2ef70((int *)(param_1 + 0xc0));
  return;
}


//// FUNCTION FUN_00c2d340 @ 00c2d340 ////

void __fastcall FUN_00c2d340(int *param_1)

{
  FUN_00c2eb80(param_1);
  return;
}


//// FUNCTION FUN_00c2d350 @ 00c2d350 ////

void __fastcall FUN_00c2d350(int *param_1)

{
  undefined4 uVar1;
  char local_19;
  int local_18;
  int *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d04acc;
  pvStack_c = ExceptionList;
  local_4 = 9;
  ExceptionList = &pvStack_c;
  local_14 = param_1;
  if (param_1[0x44] == 1) {
    ExceptionList = &pvStack_c;
    uVar1 = FUN_00c2d250(param_1,&local_19,(undefined4 *)0x0);
    if (((char)uVar1 != '\0') || (local_19 != '\0')) {
      FUN_00c527b0(param_1 + 0x45,param_1 + 0x30);
      FUN_00c2d320((int)param_1);
    }
    param_1[0x44] = 0;
  }
  if (param_1[0x44] == 3) {
    FUN_00c2d2d0(param_1,&local_18,&local_10);
    *(undefined4 *)(local_18 + 0x10) = 0;
    (*(code *)**(undefined4 **)param_1[0x6d])(local_18);
    param_1[0x44] = 2;
  }
  if (param_1[0x44] == 2) {
    FUN_00c527b0(param_1 + 0x45,param_1 + 0x30);
    param_1[0x44] = 4;
  }
  if (param_1[0x44] == 4) {
    FUN_00c2d320((int)param_1);
    if ((int *)param_1[0x6d] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x6d] + 0x1c))(1);
    }
    param_1[0x6d] = 0;
    param_1[0x44] = 0;
  }
  if (param_1[0x44] == 0) {
    FUN_00c525b0(param_1 + 0x45,param_1);
    param_1[0x44] = 5;
  }
  if (param_1[0x44] == 5) {
    FUN_00c2d340(param_1);
    param_1[0x44] = 6;
  }
  local_4._0_1_ = 8;
  PKStringsCHeapString_Dtor(param_1 + 0x7c);
  local_4._0_1_ = 7;
  Dtor_00c53bf0(param_1 + 0x74);
  local_4._0_1_ = 6;
  FUN_00c2f170();
  local_4._0_1_ = 5;
  FUN_00c52f80(param_1 + 0x45);
  local_4._0_1_ = 4;
  Dtor_00c2e770(param_1 + 0x3a);
  local_4._0_1_ = 3;
  Dtor_00c2e560(param_1 + 0x30);
  local_4._0_1_ = 2;
  Dtor_00c2e320(param_1 + 0x23);
  local_4._0_1_ = 1;
  Dtor_00c2e0e0(param_1 + 0x16);
  local_4 = (uint)local_4._1_3_ << 8;
  Dtor_00c2deb0(param_1 + 10);
  local_4 = 0xffffffff;
  Dtor_00c2dca0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION CInstance_UpdateState @ 00c2d540 ////

void __thiscall
CInstance_UpdateState(void *this,int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  LPCSTR pCVar5;
  undefined4 uVar6;
  int iVar7;
  void *this_00;
  undefined8 uVar8;
  char cStack_22c;
  undefined1 uStack_22b;
  undefined1 uStack_22a;
  undefined1 uStack_229;
  int *piStack_228;
  int *piStack_224;
  void *pvStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined **ppuStack_214;
  undefined1 uStack_210;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00d04afa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  do {
    switch(*(undefined4 *)((int)this + 0x110)) {
    default:
      ExceptionList = pvStack_c;
      return;
    case 1:
      cVar3 = (**(code **)(*(int *)((int)this + 0x8c) + 0xc))();
      if (cVar3 != '\0') {
        ExceptionList = pvStack_c;
        return;
      }
      cVar3 = (**(code **)(*(int *)((int)this + 0x28) + 0xc))();
      if (cVar3 != '\0') {
        ExceptionList = pvStack_c;
        return;
      }
      uVar6 = FUN_00c2d250(this,&cStack_22c,&uStack_21c);
      if ((char)uVar6 == '\0') {
        if (cStack_22c != '\0') {
          *(undefined4 *)((int)this + 0x110) = 4;
          FUN_00c527b0((void *)((int)this + 0x114),(int)this + 0xc0);
          ExceptionList = pvStack_c;
          return;
        }
        *(undefined4 *)((int)this + 0x110) = 0;
        ExceptionList = pvStack_c;
        return;
      }
      pvStack_220 = operator_new(0x54);
      uStack_4 = 0;
      if (pvStack_220 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = Ctor_vt00dad260_00c54320
                           (pvStack_220,param_1,uStack_21c,uStack_218,param_2,param_3,
                            *(undefined4 *)((int)this + 0x1c4));
      }
      uStack_4 = 0xffffffff;
      *(undefined4 **)((int)this + 0x1b4) = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        ppuStack_214 = &PTR_LAB_00d9db7c;
        uStack_210 = 0;
        uStack_111 = 0;
        uStack_4 = 1;
        LH_LogErrorMessage(&ppuStack_214,".\\CInstance.cpp");
        LH_LogErrorMessage(&ppuStack_214,"(");
        FUN_00bbe970(0xfa);
        LH_LogErrorMessage(&ppuStack_214,") : ");
        LH_LogErrorMessage(&ppuStack_214,"EMEM");
        LH_LogErrorMessage(&ppuStack_214,"\n");
        pCVar5 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_214);
        LH_Assert(&uStack_22b,pCVar5);
        uStack_4 = 0xffffffff;
        ppuStack_214 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      uVar1 = param_4;
      if (param_2 < param_4) {
        ppuStack_110 = &PTR_LAB_00d9db7c;
        uStack_10c = 0;
        uStack_d = 0;
        uStack_4 = 2;
        LH_LogErrorMessage(&ppuStack_110,".\\CInstance.cpp");
        LH_LogErrorMessage(&ppuStack_110,"(");
        FUN_00bbe970(0xfb);
        LH_LogErrorMessage(&ppuStack_110,") : ");
        LH_LogErrorMessage(&ppuStack_110,
                           "Cannot prime more than the streaming buffer count - it will block!");
        LH_LogErrorMessage(&ppuStack_110,"\n");
        pCVar5 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
        LH_Assert(&uStack_22a,pCVar5);
        uStack_4 = 0xffffffff;
        ppuStack_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        iVar7 = (**(code **)(**(int **)((int)this + 0x1b4) + 0xc))();
        FUN_00c53ba0(iVar7);
        (**(code **)**(undefined4 **)((int)this + 0x1b4))(iVar7);
      }
      *(undefined4 *)((int)this + 0x110) = 2;
      break;
    case 2:
      iVar7 = CInstance_ServiceFrameStreamer((int)this);
      if (iVar7 == 0) {
        ExceptionList = pvStack_c;
        return;
      }
      if (*(char *)((int)this + 0x1ec) != '\0') {
        FUN_00c52270((void *)((int)this + 0x114),(int)this + 0x1f0,*(int *)((int)this + 0x1f8),
                     *(int *)((int)this + 0x1fc));
        FUN_00c2f070((int *)((int)this + 0xe8));
        *(undefined1 *)((int)this + 0x1ec) = 0;
      }
      this_00 = (void *)0x0;
      if (*(int *)((int)this + 0x1cc) != 0) {
        this_00 = (void *)((int)this + 0x1d0);
        FUN_00c53f90(this_00,iVar7);
      }
      FUN_00c52420((void *)((int)this + 0x114),iVar7,this_00,*(undefined4 *)((int)this + 0x1cc),
                   (int)this + 0x58);
      *(undefined4 *)((int)this + 0x110) = 3;
      break;
    case 3:
      cVar3 = (**(code **)(*(int *)((int)this + 0x58) + 0xc))();
      if (cVar3 != '\0') {
        ExceptionList = pvStack_c;
        return;
      }
      FUN_00c2d2d0(this,&piStack_228,&piStack_224);
      piVar2 = piStack_228;
      if (piStack_228 == (int *)0x0) {
        LH_Assert(&uStack_229,"dry != NULL\n");
        DebugBreak();
      }
      if (piVar2[4] == 0) {
LAB_00c2d8f2:
        uVar8 = (**(code **)(**(int **)((int)this + 0x1b4) + 0x10))();
        FUN_00c2f2f0((void *)((int)this + 0x14c),(int)((ulonglong)uVar8 >> 0x20),piVar2,(float)uVar8
                    );
        *(undefined4 *)((int)this + 0x110) = 4;
        FUN_00c527b0((void *)((int)this + 0x114),(int)this + 0xc0);
        (**(code **)**(undefined4 **)((int)this + 0x1b4))(piVar2);
      }
      else {
        uVar6 = FUN_00c2f380((float *)((int)this + 0x14c));
        if ((char)uVar6 != '\0') goto LAB_00c2d8f2;
        uVar8 = (**(code **)(**(int **)((int)this + 0x1b4) + 0x10))();
        FUN_00c2f420((float *)((int)this + 0x14c),(int)((ulonglong)uVar8 >> 0x20),piVar2,piStack_224
                     ,*(undefined4 *)((int)this + 0x1e8),(float)uVar8);
        *(undefined4 *)((int)this + 0x110) = 2;
        (**(code **)**(undefined4 **)((int)this + 0x1b4))(piVar2);
      }
      break;
    case 4:
      cVar3 = (**(code **)(*(int *)((int)this + 0xc0) + 0xc))();
      if (cVar3 != '\0') {
        ExceptionList = pvStack_c;
        return;
      }
      if ((*(int **)((int)this + 0x1b4) != (int *)0x0) &&
         (iVar7 = (**(code **)(**(int **)((int)this + 0x1b4) + 8))(), iVar7 != 0)) {
        ExceptionList = pvStack_c;
        return;
      }
      FUN_00c2d320((int)this);
      if (*(int **)((int)this + 0x1b4) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x1b4) + 0x1c))(1);
        *(undefined4 *)((int)this + 0x1b4) = 0;
      }
      *(undefined4 *)((int)this + 0x110) = 0;
      *(undefined4 *)((int)this + 0x1bc) = 0xffffffff;
      *(undefined4 *)((int)this + 0x1c0) = 0xffffffff;
      *(undefined4 *)((int)this + 0x1b8) = 0xffffffff;
      ExceptionList = pvStack_c;
      return;
    case 5:
      cVar3 = (**(code **)(*(int *)this + 0xc))();
      if (cVar3 != '\0') {
        ExceptionList = pvStack_c;
        return;
      }
      FUN_00c2d340(this);
      *(undefined4 *)((int)this + 0x110) = 6;
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}


//// FUNCTION SetVtable_00da6670_00c2da20 @ 00c2da20 ////

void __fastcall SetVtable_00da6670_00c2da20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6670;
  return;
}


//// FUNCTION SetVtable_00da6680_00c2da30 @ 00c2da30 ////

void __fastcall SetVtable_00da6680_00c2da30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6680;
  return;
}


//// FUNCTION SetVtable_00da6690_00c2da40 @ 00c2da40 ////

void __fastcall SetVtable_00da6690_00c2da40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6690;
  return;
}


//// FUNCTION SetVtable_00da66a0_00c2da50 @ 00c2da50 ////

void __fastcall SetVtable_00da66a0_00c2da50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da66a0;
  return;
}


//// FUNCTION SetVtable_00da66b0_00c2da60 @ 00c2da60 ////

void __fastcall SetVtable_00da66b0_00c2da60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da66b0;
  return;
}


//// FUNCTION SetVtable_00da66c0_00c2da70 @ 00c2da70 ////

void __fastcall SetVtable_00da66c0_00c2da70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da66c0;
  return;
}


//// FUNCTION Ctor_vt00da66d0_00c2dc00 @ 00c2dc00 ////

undefined4 * __fastcall Ctor_vt00da66d0_00c2dc00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04783;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e8e0_00da66d0;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  PKCSemaphore_Create(param_1 + 7,0,1);
  *(undefined1 *)(param_1 + 9) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c2dc60 @ 00c2dc60 ////

uint __thiscall FUN_00c2dc60(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x10))(param_1);
  if ((char)uVar1 == '\0') {
    if (param_1 != 0) {
      return param_1 & 0xffffff00;
    }
    do {
      PKCSemaphore_Wait((undefined4 *)((int)this + 0x1c));
      uVar1 = (**(code **)(*(int *)this + 0x10))(0);
    } while ((char)uVar1 == '\0');
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION Dtor_00c2dca0 @ 00c2dca0 ////

void __fastcall Dtor_00c2dca0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d047a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e8e0_00da66d0;
  local_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  local_4 = local_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da6670;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c2dd00 @ 00c2dd00 ////

bool __fastcall FUN_00c2dd00(int param_1)

{
  char cVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)(param_1 + 4));
  cVar1 = *(char *)(param_1 + 0x24);
  PKCProtectionInstance_Leave(local_8);
  return cVar1 == '\0';
}


//// FUNCTION FUN_00c2dd30 @ 00c2dd30 ////

undefined4 __thiscall FUN_00c2dd30(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d047b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  if (*(char *)((int)this + 0x24) == '\0') {
    *(undefined4 *)((int)this + 0x20) = *param_1;
    *(undefined1 *)((int)this + 0x24) = 1;
    Wrap_ReleaseSemaphore_00bcead0((undefined4 *)((int)this + 0x1c));
    local_4 = 0xffffffff;
    uVar1 = PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  local_4 = 0xffffffff;
  uVar2 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00c2ddd0 @ 00c2ddd0 ////

bool __thiscall FUN_00c2ddd0(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)((int)this + 4));
  bVar1 = *(char *)((int)this + 0x24) != '\0';
  if (bVar1) {
    *param_1 = *(undefined4 *)((int)this + 0x20);
    *(undefined1 *)((int)this + 0x24) = 0;
  }
  PKCProtectionInstance_Leave(local_8);
  return bVar1;
}


//// FUNCTION Ctor_vt00da66e4_00c2de10 @ 00c2de10 ////

undefined4 * __fastcall Ctor_vt00da66e4_00c2de10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d047e3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e900_00da66e4;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  PKCSemaphore_Create(param_1 + 7,0,1);
  *(undefined1 *)(param_1 + 0xb) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c2de70 @ 00c2de70 ////

uint __thiscall FUN_00c2de70(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x10))(param_1);
  if ((char)uVar1 == '\0') {
    if (param_1 != 0) {
      return param_1 & 0xffffff00;
    }
    do {
      PKCSemaphore_Wait((undefined4 *)((int)this + 0x1c));
      uVar1 = (**(code **)(*(int *)this + 0x10))(0);
    } while ((char)uVar1 == '\0');
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION Dtor_00c2deb0 @ 00c2deb0 ////

void __fastcall Dtor_00c2deb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d04803;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e900_00da66e4;
  local_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  local_4 = local_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da6680;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c2df10 @ 00c2df10 ////

bool __fastcall FUN_00c2df10(int param_1)

{
  char cVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)(param_1 + 4));
  cVar1 = *(char *)(param_1 + 0x2c);
  PKCProtectionInstance_Leave(local_8);
  return cVar1 == '\0';
}


//// FUNCTION FUN_00c2df40 @ 00c2df40 ////

undefined4 __thiscall FUN_00c2df40(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  if (*(char *)((int)this + 0x2c) == '\0') {
    *(undefined4 *)((int)this + 0x20) = *param_1;
    *(undefined4 *)((int)this + 0x24) = param_1[1];
    *(undefined4 *)((int)this + 0x28) = param_1[2];
    *(undefined1 *)((int)this + 0x2c) = 1;
    Wrap_ReleaseSemaphore_00bcead0((undefined4 *)((int)this + 0x1c));
    local_4 = 0xffffffff;
    uVar1 = PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  local_4 = 0xffffffff;
  uVar2 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00c2dff0 @ 00c2dff0 ////

bool __thiscall FUN_00c2dff0(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)((int)this + 4));
  bVar1 = *(char *)((int)this + 0x2c) != '\0';
  if (bVar1) {
    *param_1 = *(undefined4 *)((int)this + 0x20);
    param_1[1] = *(undefined4 *)((int)this + 0x24);
    param_1[2] = *(undefined4 *)((int)this + 0x28);
    *(undefined1 *)((int)this + 0x2c) = 0;
  }
  PKCProtectionInstance_Leave(local_8);
  return bVar1;
}


//// FUNCTION Ctor_vt00da66f8_00c2e040 @ 00c2e040 ////

undefined4 * __fastcall Ctor_vt00da66f8_00c2e040(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04843;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e920_00da66f8;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  PKCSemaphore_Create(param_1 + 7,0,1);
  *(undefined1 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c2e0a0 @ 00c2e0a0 ////

uint __thiscall FUN_00c2e0a0(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x10))(param_1);
  if ((char)uVar1 == '\0') {
    if (param_1 != 0) {
      return param_1 & 0xffffff00;
    }
    do {
      PKCSemaphore_Wait((undefined4 *)((int)this + 0x1c));
      uVar1 = (**(code **)(*(int *)this + 0x10))(0);
    } while ((char)uVar1 == '\0');
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION Dtor_00c2e0e0 @ 00c2e0e0 ////

void __fastcall Dtor_00c2e0e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d04863;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e920_00da66f8;
  local_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  local_4 = local_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da6690;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c2e140 @ 00c2e140 ////

bool __fastcall FUN_00c2e140(int param_1)

{
  char cVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)(param_1 + 4));
  cVar1 = *(char *)(param_1 + 0x30);
  PKCProtectionInstance_Leave(local_8);
  return cVar1 == '\0';
}


//// FUNCTION FUN_00c2e170 @ 00c2e170 ////

undefined4 __thiscall FUN_00c2e170(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  if (*(char *)((int)this + 0x30) == '\0') {
    *(undefined4 *)((int)this + 0x20) = *param_1;
    *(undefined4 *)((int)this + 0x24) = param_1[1];
    *(undefined4 *)((int)this + 0x28) = param_1[2];
    *(undefined4 *)((int)this + 0x2c) = param_1[3];
    *(undefined1 *)((int)this + 0x30) = 1;
    Wrap_ReleaseSemaphore_00bcead0((undefined4 *)((int)this + 0x1c));
    local_4 = 0xffffffff;
    uVar1 = PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  local_4 = 0xffffffff;
  uVar2 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00c2e220 @ 00c2e220 ////

bool __thiscall FUN_00c2e220(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)((int)this + 4));
  bVar1 = *(char *)((int)this + 0x30) != '\0';
  if (bVar1) {
    *param_1 = *(undefined4 *)((int)this + 0x20);
    param_1[1] = *(undefined4 *)((int)this + 0x24);
    param_1[2] = *(undefined4 *)((int)this + 0x28);
    param_1[3] = *(undefined4 *)((int)this + 0x2c);
    *(undefined1 *)((int)this + 0x30) = 0;
  }
  PKCProtectionInstance_Leave(local_8);
  return bVar1;
}


//// FUNCTION Ctor_vt00da670c_00c2e280 @ 00c2e280 ////

undefined4 * __fastcall Ctor_vt00da670c_00c2e280(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d048a3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e940_00da670c;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  PKCSemaphore_Create(param_1 + 7,0,1);
  *(undefined1 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c2e2e0 @ 00c2e2e0 ////

uint __thiscall FUN_00c2e2e0(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x10))(param_1);
  if ((char)uVar1 == '\0') {
    if (param_1 != 0) {
      return param_1 & 0xffffff00;
    }
    do {
      PKCSemaphore_Wait((undefined4 *)((int)this + 0x1c));
      uVar1 = (**(code **)(*(int *)this + 0x10))(0);
    } while ((char)uVar1 == '\0');
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION Dtor_00c2e320 @ 00c2e320 ////

void __fastcall Dtor_00c2e320(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d048c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e940_00da670c;
  local_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  local_4 = local_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da66a0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c2e380 @ 00c2e380 ////

bool __fastcall FUN_00c2e380(int param_1)

{
  char cVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)(param_1 + 4));
  cVar1 = *(char *)(param_1 + 0x30);
  PKCProtectionInstance_Leave(local_8);
  return cVar1 == '\0';
}


//// FUNCTION FUN_00c2e3b0 @ 00c2e3b0 ////

undefined4 __thiscall FUN_00c2e3b0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d048d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  if (*(char *)((int)this + 0x30) == '\0') {
    *(undefined4 *)((int)this + 0x20) = *param_1;
    *(undefined4 *)((int)this + 0x24) = param_1[1];
    *(undefined4 *)((int)this + 0x28) = param_1[2];
    *(undefined4 *)((int)this + 0x2c) = param_1[3];
    *(undefined1 *)((int)this + 0x30) = 1;
    Wrap_ReleaseSemaphore_00bcead0((undefined4 *)((int)this + 0x1c));
    local_4 = 0xffffffff;
    uVar1 = PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  local_4 = 0xffffffff;
  uVar2 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00c2e460 @ 00c2e460 ////

bool __thiscall FUN_00c2e460(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)((int)this + 4));
  bVar1 = *(char *)((int)this + 0x30) != '\0';
  if (bVar1) {
    *param_1 = *(undefined4 *)((int)this + 0x20);
    param_1[1] = *(undefined4 *)((int)this + 0x24);
    param_1[2] = *(undefined4 *)((int)this + 0x28);
    param_1[3] = *(undefined4 *)((int)this + 0x2c);
    *(undefined1 *)((int)this + 0x30) = 0;
  }
  PKCProtectionInstance_Leave(local_8);
  return bVar1;
}


//// FUNCTION Ctor_vt00da6720_00c2e4c0 @ 00c2e4c0 ////

undefined4 * __fastcall Ctor_vt00da6720_00c2e4c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04903;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e960_00da6720;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  PKCSemaphore_Create(param_1 + 7,0,1);
  *(undefined1 *)(param_1 + 9) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c2e520 @ 00c2e520 ////

uint __thiscall FUN_00c2e520(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x10))(param_1);
  if ((char)uVar1 == '\0') {
    if (param_1 != 0) {
      return param_1 & 0xffffff00;
    }
    do {
      PKCSemaphore_Wait((undefined4 *)((int)this + 0x1c));
      uVar1 = (**(code **)(*(int *)this + 0x10))(0);
    } while ((char)uVar1 == '\0');
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION Dtor_00c2e560 @ 00c2e560 ////

void __fastcall Dtor_00c2e560(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d04923;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e960_00da6720;
  local_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  local_4 = local_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da66b0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c2e5c0 @ 00c2e5c0 ////

bool __fastcall FUN_00c2e5c0(int param_1)

{
  char cVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)(param_1 + 4));
  cVar1 = *(char *)(param_1 + 0x24);
  PKCProtectionInstance_Leave(local_8);
  return cVar1 == '\0';
}


//// FUNCTION FUN_00c2e5f0 @ 00c2e5f0 ////

undefined4 __thiscall FUN_00c2e5f0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  if (*(char *)((int)this + 0x24) == '\0') {
    *(undefined4 *)((int)this + 0x20) = *param_1;
    *(undefined1 *)((int)this + 0x24) = 1;
    Wrap_ReleaseSemaphore_00bcead0((undefined4 *)((int)this + 0x1c));
    local_4 = 0xffffffff;
    uVar1 = PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  local_4 = 0xffffffff;
  uVar2 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00c2e690 @ 00c2e690 ////

bool __thiscall FUN_00c2e690(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)((int)this + 4));
  bVar1 = *(char *)((int)this + 0x24) != '\0';
  if (bVar1) {
    *param_1 = *(undefined4 *)((int)this + 0x20);
    *(undefined1 *)((int)this + 0x24) = 0;
  }
  PKCProtectionInstance_Leave(local_8);
  return bVar1;
}


//// FUNCTION Ctor_vt00da6734_00c2e6d0 @ 00c2e6d0 ////

undefined4 * __fastcall Ctor_vt00da6734_00c2e6d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04963;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e980_00da6734;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  PKCSemaphore_Create(param_1 + 7,0,1);
  *(undefined1 *)(param_1 + 9) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c2e730 @ 00c2e730 ////

uint __thiscall FUN_00c2e730(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x10))(param_1);
  if ((char)uVar1 == '\0') {
    if (param_1 != 0) {
      return param_1 & 0xffffff00;
    }
    do {
      PKCSemaphore_Wait((undefined4 *)((int)this + 0x1c));
      uVar1 = (**(code **)(*(int *)this + 0x10))(0);
    } while ((char)uVar1 == '\0');
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION Dtor_00c2e770 @ 00c2e770 ////

void __fastcall Dtor_00c2e770(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d04983;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e980_00da6734;
  local_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  local_4 = local_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da66c0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c2e7d0 @ 00c2e7d0 ////

bool __fastcall FUN_00c2e7d0(int param_1)

{
  char cVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)(param_1 + 4));
  cVar1 = *(char *)(param_1 + 0x24);
  PKCProtectionInstance_Leave(local_8);
  return cVar1 == '\0';
}


//// FUNCTION FUN_00c2e800 @ 00c2e800 ////

undefined4 __thiscall FUN_00c2e800(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  if (*(char *)((int)this + 0x24) == '\0') {
    *(undefined4 *)((int)this + 0x20) = *param_1;
    *(undefined1 *)((int)this + 0x24) = 1;
    Wrap_ReleaseSemaphore_00bcead0((undefined4 *)((int)this + 0x1c));
    local_4 = 0xffffffff;
    uVar1 = PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  local_4 = 0xffffffff;
  uVar2 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00c2e8a0 @ 00c2e8a0 ////

bool __thiscall FUN_00c2e8a0(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)((int)this + 4));
  bVar1 = *(char *)((int)this + 0x24) != '\0';
  if (bVar1) {
    *param_1 = *(undefined4 *)((int)this + 0x20);
    *(undefined1 *)((int)this + 0x24) = 0;
  }
  PKCProtectionInstance_Leave(local_8);
  return bVar1;
}


//// FUNCTION ScalarDeletingDtor_00c2e8e0 @ 00c2e8e0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2e8e0(void *this,byte param_1)

{
  Dtor_00c2dca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c2e900 @ 00c2e900 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2e900(void *this,byte param_1)

{
  Dtor_00c2deb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c2e920 @ 00c2e920 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2e920(void *this,byte param_1)

{
  Dtor_00c2e0e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c2e940 @ 00c2e940 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2e940(void *this,byte param_1)

{
  Dtor_00c2e320(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c2e960 @ 00c2e960 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2e960(void *this,byte param_1)

{
  Dtor_00c2e560(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c2e980 @ 00c2e980 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2e980(void *this,byte param_1)

{
  Dtor_00c2e770(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00da6774_00c2e9a0 @ 00c2e9a0 ////

undefined4 * __fastcall Ctor_vt00da6774_00c2e9a0(undefined4 *param_1)

{
  Ctor_vt00da66d0_00c2dc00(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c2eac0_00da6774;
  return param_1;
}


//// FUNCTION Dtor_00c2e9c0 @ 00c2e9c0 ////

void __fastcall Dtor_00c2e9c0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_00d047a3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e8e0_00da66d0;
  uStack_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  uStack_4 = uStack_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da6670;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Ctor_vt00da6788_00c2e9d0 @ 00c2e9d0 ////

undefined4 * __fastcall Ctor_vt00da6788_00c2e9d0(undefined4 *param_1)

{
  Ctor_vt00da66e4_00c2de10(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c2eae0_00da6788;
  return param_1;
}


//// FUNCTION Dtor_00c2e9f0 @ 00c2e9f0 ////

void __fastcall Dtor_00c2e9f0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_00d04803;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e900_00da66e4;
  uStack_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  uStack_4 = uStack_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da6680;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Ctor_vt00da679c_00c2ea00 @ 00c2ea00 ////

undefined4 * __fastcall Ctor_vt00da679c_00c2ea00(undefined4 *param_1)

{
  Ctor_vt00da66f8_00c2e040(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c2eb00_00da679c;
  return param_1;
}


//// FUNCTION Dtor_00c2ea20 @ 00c2ea20 ////

void __fastcall Dtor_00c2ea20(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_00d04863;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e920_00da66f8;
  uStack_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  uStack_4 = uStack_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da6690;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Ctor_vt00da67b0_00c2ea30 @ 00c2ea30 ////

undefined4 * __fastcall Ctor_vt00da67b0_00c2ea30(undefined4 *param_1)

{
  Ctor_vt00da670c_00c2e280(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c2eb20_00da67b0;
  return param_1;
}


//// FUNCTION Dtor_00c2ea50 @ 00c2ea50 ////

void __fastcall Dtor_00c2ea50(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_00d048c3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e940_00da670c;
  uStack_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  uStack_4 = uStack_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da66a0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Ctor_vt00da67c4_00c2ea60 @ 00c2ea60 ////

undefined4 * __fastcall Ctor_vt00da67c4_00c2ea60(undefined4 *param_1)

{
  Ctor_vt00da6720_00c2e4c0(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c2eb40_00da67c4;
  return param_1;
}


//// FUNCTION Dtor_00c2ea80 @ 00c2ea80 ////

void __fastcall Dtor_00c2ea80(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_00d04923;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e960_00da6720;
  uStack_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  uStack_4 = uStack_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da66b0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Ctor_vt00da67d8_00c2ea90 @ 00c2ea90 ////

undefined4 * __fastcall Ctor_vt00da67d8_00c2ea90(undefined4 *param_1)

{
  Ctor_vt00da6734_00c2e6d0(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c2eb60_00da67d8;
  return param_1;
}


//// FUNCTION Dtor_00c2eab0 @ 00c2eab0 ////

void __fastcall Dtor_00c2eab0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_00d04983;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c2e980_00da6734;
  uStack_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  uStack_4 = uStack_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da66c0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c2eac0 @ 00c2eac0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2eac0(void *this,byte param_1)

{
  Dtor_00c2e9c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c2eae0 @ 00c2eae0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2eae0(void *this,byte param_1)

{
  Dtor_00c2e9f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c2eb00 @ 00c2eb00 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2eb00(void *this,byte param_1)

{
  Dtor_00c2ea20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c2eb20 @ 00c2eb20 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2eb20(void *this,byte param_1)

{
  Dtor_00c2ea50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c2eb40 @ 00c2eb40 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2eb40(void *this,byte param_1)

{
  Dtor_00c2ea80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c2eb60 @ 00c2eb60 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2eb60(void *this,byte param_1)

{
  Dtor_00c2eab0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c2eb80 @ 00c2eb80 ////

void __fastcall FUN_00c2eb80(int *param_1)

{
  LPCSTR pCVar1;
  undefined **ppuStack_118;
  char local_114 [255];
  char cStack_15;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00d04b1b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_114[0] = (**(code **)(*param_1 + 8))(local_114);
  if (local_114[0] == '\0') {
    ppuStack_118 = &PTR_LAB_00d9db7c;
    pvStack_c = (void *)0x0;
    cStack_15 = local_114[0];
    LH_LogErrorMessage(&ppuStack_118,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKMultithreadCMailbox.h")
    ;
    LH_LogErrorMessage(&ppuStack_118,"(");
    FUN_00bbe970(0x1e);
    LH_LogErrorMessage(&ppuStack_118,") : ");
    LH_LogErrorMessage(&ppuStack_118,"Mailbox shortcut went wrong");
    LH_LogErrorMessage(&ppuStack_118,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_118);
    LH_Assert(&stack0xfffffee3,pCVar1);
    DebugBreak();
    *puStack_4 = 0;
    ExceptionList = pvStack_14;
    return;
  }
  *puStack_4 = 0;
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00c2ec80 @ 00c2ec80 ////

void __fastcall FUN_00c2ec80(int *param_1)

{
  LPCSTR pCVar1;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined **ppuStack_118;
  char cStack_114;
  char cStack_15;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00d04b3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cStack_114 = (**(code **)(*param_1 + 8))(&local_11c);
  if (cStack_114 == '\0') {
    ppuStack_118 = &PTR_LAB_00d9db7c;
    pvStack_c = (void *)0x0;
    cStack_15 = cStack_114;
    LH_LogErrorMessage(&ppuStack_118,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKMultithreadCMailbox.h")
    ;
    LH_LogErrorMessage(&ppuStack_118,"(");
    FUN_00bbe970(0x1e);
    LH_LogErrorMessage(&ppuStack_118,") : ");
    LH_LogErrorMessage(&ppuStack_118,"Mailbox shortcut went wrong");
    LH_LogErrorMessage(&ppuStack_118,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_118);
    LH_Assert(&stack0xfffffedb,pCVar1);
    DebugBreak();
  }
  *puStack_4 = 0;
  puStack_4[1] = uStack_120;
  puStack_4[2] = local_11c;
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00c2ed70 @ 00c2ed70 ////

void __fastcall FUN_00c2ed70(int *param_1)

{
  LPCSTR pCVar1;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined **ppuStack_118;
  char cStack_114;
  char cStack_15;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00d04b5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cStack_114 = (**(code **)(*param_1 + 8))(&local_120);
  if (cStack_114 == '\0') {
    ppuStack_118 = &PTR_LAB_00d9db7c;
    pvStack_c = (void *)0x0;
    cStack_15 = cStack_114;
    LH_LogErrorMessage(&ppuStack_118,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKMultithreadCMailbox.h")
    ;
    LH_LogErrorMessage(&ppuStack_118,"(");
    FUN_00bbe970(0x1e);
    LH_LogErrorMessage(&ppuStack_118,") : ");
    LH_LogErrorMessage(&ppuStack_118,"Mailbox shortcut went wrong");
    LH_LogErrorMessage(&ppuStack_118,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_118);
    LH_Assert(&stack0xfffffed7,pCVar1);
    DebugBreak();
  }
  *puStack_4 = 0;
  puStack_4[1] = uStack_124;
  puStack_4[2] = local_120;
  puStack_4[3] = uStack_11c;
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00c2ee70 @ 00c2ee70 ////

void __fastcall FUN_00c2ee70(int *param_1)

{
  LPCSTR pCVar1;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined **ppuStack_118;
  char cStack_114;
  char cStack_15;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00d04b7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cStack_114 = (**(code **)(*param_1 + 8))(&local_120);
  if (cStack_114 == '\0') {
    ppuStack_118 = &PTR_LAB_00d9db7c;
    pvStack_c = (void *)0x0;
    cStack_15 = cStack_114;
    LH_LogErrorMessage(&ppuStack_118,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKMultithreadCMailbox.h")
    ;
    LH_LogErrorMessage(&ppuStack_118,"(");
    FUN_00bbe970(0x1e);
    LH_LogErrorMessage(&ppuStack_118,") : ");
    LH_LogErrorMessage(&ppuStack_118,"Mailbox shortcut went wrong");
    LH_LogErrorMessage(&ppuStack_118,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_118);
    LH_Assert(&stack0xfffffed7,pCVar1);
    DebugBreak();
  }
  *puStack_4 = 0;
  puStack_4[1] = uStack_124;
  puStack_4[2] = local_120;
  puStack_4[3] = uStack_11c;
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00c2ef70 @ 00c2ef70 ////

void __fastcall FUN_00c2ef70(int *param_1)

{
  LPCSTR pCVar1;
  undefined **ppuStack_118;
  char local_114 [255];
  char cStack_15;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00d04b9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_114[0] = (**(code **)(*param_1 + 8))(local_114);
  if (local_114[0] == '\0') {
    ppuStack_118 = &PTR_LAB_00d9db7c;
    pvStack_c = (void *)0x0;
    cStack_15 = local_114[0];
    LH_LogErrorMessage(&ppuStack_118,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKMultithreadCMailbox.h")
    ;
    LH_LogErrorMessage(&ppuStack_118,"(");
    FUN_00bbe970(0x1e);
    LH_LogErrorMessage(&ppuStack_118,") : ");
    LH_LogErrorMessage(&ppuStack_118,"Mailbox shortcut went wrong");
    LH_LogErrorMessage(&ppuStack_118,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_118);
    LH_Assert(&stack0xfffffee3,pCVar1);
    DebugBreak();
    *puStack_4 = 0;
    ExceptionList = pvStack_14;
    return;
  }
  *puStack_4 = 0;
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00c2f070 @ 00c2f070 ////

void __fastcall FUN_00c2f070(int *param_1)

{
  LPCSTR pCVar1;
  undefined **ppuStack_118;
  char local_114 [255];
  char cStack_15;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00d04bbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_114[0] = (**(code **)(*param_1 + 8))(local_114);
  if (local_114[0] == '\0') {
    ppuStack_118 = &PTR_LAB_00d9db7c;
    pvStack_c = (void *)0x0;
    cStack_15 = local_114[0];
    LH_LogErrorMessage(&ppuStack_118,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKMultithreadCMailbox.h")
    ;
    LH_LogErrorMessage(&ppuStack_118,"(");
    FUN_00bbe970(0x1e);
    LH_LogErrorMessage(&ppuStack_118,") : ");
    LH_LogErrorMessage(&ppuStack_118,"Mailbox shortcut went wrong");
    LH_LogErrorMessage(&ppuStack_118,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_118);
    LH_Assert(&stack0xfffffee3,pCVar1);
    DebugBreak();
    *puStack_4 = 0;
    ExceptionList = pvStack_14;
    return;
  }
  *puStack_4 = 0;
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00c2f170 @ 00c2f170 ////

void FUN_00c2f170(void)

{
  return;
}


//// FUNCTION FUN_00c2f1b0 @ 00c2f1b0 ////

void __thiscall FUN_00c2f1b0(void *this,int param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)this;
  if (*(char *)((int)this + 0x30) != '\0') {
    if (fVar1 < 3.1415927) {
      if (fVar1 < -3.1415927) {
        fVar1 = fVar1 + 6.2831855;
      }
    }
    else {
      fVar1 = fVar1 - 6.2831855;
    }
  }
  fVar2 = *(float *)((int)this + 0x34);
  if (*(char *)((int)this + 100) != '\0') {
    if (fVar2 < 3.1415927) {
      if (fVar2 < -3.1415927) {
        fVar2 = fVar2 + 6.2831855;
      }
    }
    else {
      fVar2 = fVar2 - 6.2831855;
    }
  }
  fVar2 = fVar2 * fVar1;
  *param_3 = fVar2;
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      *param_3 = 1.0;
    }
  }
  else {
    *param_3 = 0.0;
  }
  fVar1 = (float)param_1;
  if (param_1 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)param_2;
  if (param_2 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar2 = (fVar1 * 1000.0) / fVar2;
  FUN_00bca3e0(this,fVar2);
  FUN_00bca3e0((void *)((int)this + 0x34),fVar2);
  fVar1 = *(float *)this;
  if (*(char *)((int)this + 0x30) != '\0') {
    if (fVar1 < 3.1415927) {
      if (fVar1 < -3.1415927) {
        *param_4 = fVar1 + 6.2831855;
        return;
      }
      *param_4 = fVar1;
      return;
    }
    fVar1 = fVar1 - 6.2831855;
  }
  *param_4 = fVar1;
  return;
}


//// FUNCTION FUN_00c2f2f0 @ 00c2f2f0 ////

undefined8 __fastcall FUN_00c2f2f0(void *param_1,undefined4 param_2,int *param_3,float param_4)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  
  piVar2 = param_3;
  uVar5 = 0;
  if (param_3[4] != 0) {
    FUN_00c2f1b0(param_1,param_3[4],(int)param_4,(float *)&param_3,&param_4);
    psVar3 = (short *)(**(code **)(*piVar2 + 0x10))();
    iVar1 = piVar2[4];
    uVar9 = FUN_00acd42c();
    uVar4 = (uint)uVar9;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      iVar8 = piVar2[1];
      if (iVar8 != 0) {
        do {
          iVar6 = (int)*psVar3 * (uVar4 & 0xffff);
          iVar7 = iVar6 / 0x7fff + (iVar6 >> 0x1f);
          uVar9 = CONCAT44(iVar7,(int)((longlong)iVar6 * -0x7ffefffd));
          *psVar3 = (short)iVar7 - (short)((longlong)iVar6 * 0x80010003 >> 0x3f);
          psVar3 = psVar3 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    param_2 = (undefined4)(uVar9 >> 0x20);
    uVar5 = (undefined4)uVar9;
  }
  return CONCAT44(param_2,uVar5);
}


//// FUNCTION FUN_00c2f380 @ 00c2f380 ////

undefined4 __fastcall FUN_00c2f380(float *param_1)

{
  float fVar1;
  
  if (param_1[5] == param_1[6]) {
    fVar1 = *param_1;
    if (*(char *)(param_1 + 0xc) != '\0') {
      if (fVar1 < 3.1415927) {
        if (fVar1 < -3.1415927) {
          fVar1 = fVar1 + 6.2831855;
        }
      }
      else {
        fVar1 = fVar1 - 6.2831855;
      }
    }
    if (fVar1 == 0.0) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00c2f3e0 @ 00c2f3e0 ////

void __thiscall FUN_00c2f3e0(void *this,float param_1,float param_2)

{
  FUN_00bca1a0(this,param_1,0.0,param_2);
  return;
}


//// FUNCTION FUN_00c2f400 @ 00c2f400 ////

void __thiscall FUN_00c2f400(void *this,float param_1,float param_2)

{
  FUN_00bca1a0((void *)((int)this + 0x34),param_1,0.0,param_2);
  return;
}


//// FUNCTION FUN_00c2f420 @ 00c2f420 ////

undefined8 __fastcall
FUN_00c2f420(void *param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
            float param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  
  piVar1 = param_4;
  uVar7 = 0;
  if (param_3[4] == 0) goto LAB_00c2f556;
  if (param_4 == (int *)0x0) {
    uVar11 = FUN_00c2f2f0(param_1,param_2,param_3,param_6);
    return uVar11;
  }
  if (param_3[1] == param_4[1]) {
    iVar2 = (**(code **)(*param_3 + 0x14))();
    iVar3 = (**(code **)(*piVar1 + 0x14))();
    if (iVar2 != iVar3) goto LAB_00c2f46b;
  }
  else {
LAB_00c2f46b:
    LH_Assert(&param_4,
              "( DryFrame.NumChannels == WetFrame->NumChannels ) && ( DryFrame.GetByteSize () == WetFrame->GetByteSize ())\n"
             );
    DebugBreak();
  }
  FUN_00c2f1b0(param_1,param_3[4],(int)param_6,&param_6,(float *)&param_4);
  psVar4 = (short *)(**(code **)(*param_3 + 0x10))();
  psVar5 = (short *)(**(code **)(*piVar1 + 0x10))();
  iVar2 = param_3[4];
  uVar12 = FUN_00acd42c();
  param_4 = (int *)uVar12;
  uVar12 = FUN_00acd42c();
  uVar6 = (uint)uVar12;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    for (iVar3 = param_3[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
      iVar8 = (int)*psVar5 * ((uint)param_4 & 0xffff);
      iVar9 = (int)*psVar4 * (uVar6 & 0xffff);
      iVar10 = iVar9 / 0x7fff + (iVar9 >> 0x1f);
      uVar12 = CONCAT44(iVar10,(int)((longlong)iVar9 * -0x7ffefffd));
      *psVar4 = ((((short)(iVar8 / 0x7fff) + (*psVar5 >> 0xf)) -
                 (short)((longlong)iVar8 * 0x80010003 >> 0x3f)) + (short)iVar10) -
                (short)((longlong)iVar9 * 0x80010003 >> 0x3f);
      psVar4 = psVar4 + 1;
      psVar5 = psVar5 + 1;
    }
  }
  param_2 = (undefined4)(uVar12 >> 0x20);
  uVar7 = (undefined4)uVar12;
LAB_00c2f556:
  return CONCAT44(param_2,uVar7);
}


//// FUNCTION FUN_00c2f560 @ 00c2f560 ////

void * __thiscall FUN_00c2f560(void *this,float param_1,float param_2)

{
  *(undefined1 *)((int)this + 0x30) = 0;
  FUN_00bca140(this,0.0);
  *(undefined1 *)((int)this + 100) = 0;
  FUN_00c2f3e0(this,param_1,param_2);
  FUN_00c2f400(this,param_1,param_2);
  return this;
}


//// FUNCTION FUN_00c2f5a0 @ 00c2f5a0 ////

void FUN_00c2f5a0(void)

{
  return;
}


//// FUNCTION FUN_00c2f5b0 @ 00c2f5b0 ////

void __thiscall FUN_00c2f5b0(void *this,int param_1)

{
  *(int *)this = *(int *)this + *(int *)((int)this + 4) * param_1 * 2;
  return;
}


//// FUNCTION C16BitSamplePtr_Ctor @ 00c2f5e0 ////

int * __thiscall C16BitSamplePtr_Ctor(void *this,int param_1,int param_2)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04be6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_2;
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\C16BitSamplePtr.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(8);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null buffer");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (*(int *)((int)this + 4) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\C16BitSamplePtr.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(9);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Expecting at least 1 channel!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Ctor_vt00da68fc_00c2f760 @ 00c2f760 ////

undefined4 * __fastcall Ctor_vt00da68fc_00c2f760(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00c2f790_00da68fc;
  RedBlackTree_Node_Ctor(param_1 + 1);
  param_1[6] = 0;
  return param_1;
}


//// FUNCTION Dtor_00c2f780 @ 00c2f780 ////

void __fastcall Dtor_00c2f780(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00c2f790_00da68fc;
  RedBlackTree_Node_Dtor(param_1 + 1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c2f790 @ 00c2f790 ////

undefined4 * __thiscall ScalarDeletingDtor_00c2f790(void *this,byte param_1)

{
  Dtor_00c2f780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION vorbis_ilog2 @ 00c2f7b0 ////

int __fastcall vorbis_ilog2(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    for (uVar2 = param_1 - 1; uVar2 != 0; uVar2 = uVar2 >> 1) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


//// FUNCTION vorbis__v_writestring @ 00c2f7d0 ////

void __fastcall vorbis__v_writestring(char *param_1)

{
  int in_EAX;
  int *unaff_EBX;
  
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    oggpack_write(unaff_EBX,(int)*param_1,8);
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION vorbis__v_readstring @ 00c2f800 ////

void __fastcall vorbis__v_readstring(undefined1 *param_1)

{
  int in_EAX;
  uint uVar1;
  int *unaff_EBX;
  
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    uVar1 = oggpack_read(unaff_EBX,8);
    *param_1 = (char)uVar1;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION vorbis_comment_init @ 00c2f830 ////

void __fastcall vorbis_comment_init(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


//// FUNCTION vorbis_comment_add @ 00c2f840 ////

void __fastcall vorbis_comment_add(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  char *pcVar5;
  
  piVar3 = FUN_00ad58c5((int *)*param_1,(uint *)(param_1[2] * 4 + 8));
  *param_1 = (int)piVar3;
  piVar3 = FUN_00ad58c5((int *)param_1[1],(uint *)(param_1[2] * 4 + 8));
  param_1[1] = (int)piVar3;
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  piVar3[param_1[2]] = (int)pcVar5 - (int)(param_2 + 1);
  pvVar4 = _malloc(*(int *)(param_1[1] + param_1[2] * 4) + 1);
  *(void **)(*param_1 + param_1[2] * 4) = pvVar4;
  pcVar5 = *(char **)(*param_1 + param_1[2] * 4);
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  *(undefined4 *)(*param_1 + (iVar2 + 1) * 4) = 0;
  return;
}


//// FUNCTION vorbis_comment_add_tag @ 00c2f8e0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __fastcall vorbis_comment_add_tag(int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  undefined2 *puVar8;
  undefined4 local_18;
  
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar5 = param_3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_18 = 0xc2f91c;
  iVar2 = -((uint)(pcVar4 + (int)(pcVar5 + (-(int)(param_3 + 1) - (int)(param_2 + 1)) + 5)) &
           0xfffffffc);
  iVar3 = iVar2 - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)(&stack0xffffffec + iVar3)] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  puVar8 = (undefined2 *)((int)&local_18 + iVar2 + 3);
  do {
    pcVar4 = (char *)((int)puVar8 + 1);
    puVar8 = (undefined2 *)((int)puVar8 + 1);
  } while (*pcVar4 != '\0');
  *puVar8 = 0x3d;
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)((int)&local_18 + iVar2 + 3);
  do {
    pcVar7 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = param_3;
  for (uVar6 = (uint)((int)pcVar4 - (int)param_3) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar6 = (int)pcVar4 - (int)param_3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)((int)&local_18 + iVar2) = 0xc2f970;
  vorbis_comment_add(param_1,&stack0xffffffec + iVar2);
  return;
}


//// FUNCTION vorbis_tagcompare @ 00c2f980 ////

undefined4 __thiscall vorbis_tagcompare(void *this,int param_1)

{
  char *in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_1) {
    iVar3 = (int)this - (int)in_EAX;
    do {
      iVar1 = _toupper((int)in_EAX[iVar3]);
      iVar2 = _toupper((int)*in_EAX);
      if (iVar1 != iVar2) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      in_EAX = in_EAX + 1;
    } while (iVar4 < param_1);
  }
  return 0;
}


//// FUNCTION vorbis_comment_query @ 00c2f9d0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

char * __fastcall vorbis_comment_query(int *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  void *this;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int aiStack_24 [2];
  int local_8;
  
  local_8 = 0;
  pcVar1 = param_2 + 1;
  pcVar5 = param_2;
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  aiStack_24[1] = 0xc2fa0a;
  iVar4 = -((uint)(pcVar5 + (5 - (int)pcVar1)) & 0xfffffffc);
  iVar7 = iVar4 - (int)param_2;
  do {
    cVar3 = *param_2;
    param_2[(int)(&stack0xffffffe4 + iVar7)] = cVar3;
    param_2 = param_2 + 1;
  } while (cVar3 != '\0');
  puVar8 = (undefined2 *)((int)aiStack_24 + iVar4 + 7);
  do {
    pcVar2 = (char *)((int)puVar8 + 1);
    puVar8 = (undefined2 *)((int)puVar8 + 1);
  } while (*pcVar2 != '\0');
  *puVar8 = 0x3d;
  iVar7 = 0;
  if (0 < param_1[2]) {
    do {
      this = *(void **)(*param_1 + iVar7 * 4);
      *(char **)((int)aiStack_24 + iVar4 + 4) = pcVar5 + (1 - (int)pcVar1);
      *(undefined4 *)((int)aiStack_24 + iVar4) = 0xc2fa4e;
      iVar6 = vorbis_tagcompare(this,*(int *)((int)aiStack_24 + iVar4 + 4));
      if (iVar6 == 0) {
        if (param_3 == local_8) {
          return pcVar5 + (1 - (int)pcVar1) + *(int *)(*param_1 + iVar7 * 4);
        }
        local_8 = local_8 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1[2]);
  }
  return (char *)0x0;
}


//// FUNCTION vorbis_comment_query_count @ 00c2fa90 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __fastcall vorbis_comment_query_count(int *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  void *this;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int aiStack_24 [2];
  int local_8;
  
  local_8 = 0;
  pcVar1 = param_2 + 1;
  pcVar5 = param_2;
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  aiStack_24[1] = 0xc2fac8;
  iVar4 = -((uint)(pcVar5 + (5 - (int)pcVar1)) & 0xfffffffc);
  iVar7 = iVar4 - (int)param_2;
  do {
    cVar3 = *param_2;
    param_2[(int)(&stack0xffffffe4 + iVar7)] = cVar3;
    param_2 = param_2 + 1;
  } while (cVar3 != '\0');
  puVar8 = (undefined2 *)((int)aiStack_24 + iVar4 + 7);
  do {
    pcVar2 = (char *)((int)puVar8 + 1);
    puVar8 = (undefined2 *)((int)puVar8 + 1);
  } while (*pcVar2 != '\0');
  *puVar8 = 0x3d;
  iVar7 = 0;
  if (0 < param_1[2]) {
    do {
      iVar6 = *param_1;
      *(char **)((int)aiStack_24 + iVar4 + 4) = pcVar5 + (1 - (int)pcVar1);
      this = *(void **)(iVar6 + iVar7 * 4);
      *(undefined4 *)((int)aiStack_24 + iVar4) = 0xc2fb10;
      iVar6 = vorbis_tagcompare(this,*(int *)((int)aiStack_24 + iVar4 + 4));
      if (iVar6 == 0) {
        local_8 = local_8 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1[2]);
  }
  return local_8;
}


//// FUNCTION vorbis_comment_clear @ 00c2fb30 ////

void __fastcall vorbis_comment_clear(int *param_1)

{
  void *_Memory;
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    if (0 < param_1[2]) {
      do {
        _Memory = *(void **)(*param_1 + iVar1 * 4);
        if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[2]);
    }
    if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*param_1);
    }
    if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[1]);
    }
    if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[3]);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


//// FUNCTION vorbis_info_blocksize @ 00c2fba0 ////

undefined4 __fastcall vorbis_info_blocksize(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
  }
  return 0xffffffff;
}


//// FUNCTION vorbis_info_init @ 00c2fbb0 ////

void __fastcall vorbis_info_init(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  pvVar1 = _calloc(1,0xe80);
  param_1[7] = pvVar1;
  return;
}


//// FUNCTION vorbis_info_clear @ 00c2fbe0 ////

void __fastcall vorbis_info_clear(undefined4 *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  _Memory = (void *)param_1[7];
  if (_Memory == (void *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    return;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)_Memory + 8)) {
    puVar1 = (undefined4 *)((int)_Memory + 0x20);
    do {
      if ((void *)*puVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*puVar1);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)((int)_Memory + 8));
  }
  iVar2 = 0;
  if (0 < *(int *)((int)_Memory + 0xc)) {
    iVar3 = (int)_Memory + 0x220;
    do {
      (**(code **)((&PTR_PTR_00f7df9c)[*(int *)(iVar3 + -0x100)] + 8))();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)((int)_Memory + 0xc));
  }
  iVar2 = 0;
  if (0 < *(int *)((int)_Memory + 0x10)) {
    iVar3 = (int)_Memory + 0x420;
    do {
      (**(code **)((&PTR_DAT_00f7df88)[*(int *)(iVar3 + -0x100)] + 0xc))();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)((int)_Memory + 0x10));
  }
  iVar2 = 0;
  if (0 < *(int *)((int)_Memory + 0x14)) {
    iVar3 = (int)_Memory + 0x620;
    do {
      (**(code **)((&PTR_DAT_00f7df90)[*(int *)(iVar3 + -0x100)] + 0xc))();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)((int)_Memory + 0x14));
  }
  if (0 < *(int *)((int)_Memory + 0x18)) {
    iVar2 = 0;
    puVar1 = (undefined4 *)((int)_Memory + 0x720);
    iVar3 = 0;
    do {
      if ((undefined4 *)*puVar1 != (undefined4 *)0x0) {
        vorbis_staticbook_destroy((undefined4 *)*puVar1);
      }
      if (*(int *)((int)_Memory + 0xb20) != 0) {
        vorbis_book_clear((undefined4 *)(*(int *)((int)_Memory + 0xb20) + iVar2));
      }
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar3 < *(int *)((int)_Memory + 0x18));
  }
  if (*(void **)((int)_Memory + 0xb20) == (void *)0x0) {
    iVar2 = 0;
    if (0 < *(int *)((int)_Memory + 0x1c)) {
      puVar1 = (undefined4 *)((int)_Memory + 0xb24);
      do {
        FUN_00c556e0((undefined4 *)*puVar1);
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar2 < *(int *)((int)_Memory + 0x1c));
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)_Memory + 0xb20));
}


//// FUNCTION vorbis__vorbis_unpack_info @ 00c2fd50 ////

undefined4 vorbis__vorbis_unpack_info(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *unaff_ESI;
  uint *unaff_EDI;
  
  piVar1 = (int *)unaff_EDI[7];
  if (piVar1 == (int *)0x0) {
    return 0xffffff7f;
  }
  uVar2 = oggpack_read(unaff_ESI,0x20);
  *unaff_EDI = uVar2;
  if (uVar2 != 0) {
    return 0xffffff7a;
  }
  uVar2 = oggpack_read(unaff_ESI,8);
  unaff_EDI[1] = uVar2;
  uVar2 = oggpack_read(unaff_ESI,0x20);
  unaff_EDI[2] = uVar2;
  uVar2 = oggpack_read(unaff_ESI,0x20);
  unaff_EDI[3] = uVar2;
  uVar2 = oggpack_read(unaff_ESI,0x20);
  unaff_EDI[4] = uVar2;
  uVar2 = oggpack_read(unaff_ESI,0x20);
  unaff_EDI[5] = uVar2;
  uVar2 = oggpack_read(unaff_ESI,4);
  *piVar1 = 1 << ((byte)uVar2 & 0x1f);
  uVar2 = oggpack_read(unaff_ESI,4);
  iVar3 = 1 << ((byte)uVar2 & 0x1f);
  piVar1[1] = iVar3;
  if ((((0 < (int)unaff_EDI[2]) && (0 < (int)unaff_EDI[1])) && (7 < *piVar1)) && (*piVar1 <= iVar3))
  {
    uVar2 = oggpack_read(unaff_ESI,1);
    if (uVar2 == 1) {
      return 0;
    }
  }
  vorbis_info_clear(unaff_EDI);
  return 0xffffff7b;
}


//// FUNCTION vorbis__vorbis_unpack_comment @ 00c2fe30 ////

undefined4 vorbis__vorbis_unpack_comment(void)

{
  int *in_EAX;
  uint uVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int *unaff_ESI;
  int iVar4;
  
  uVar1 = oggpack_read(in_EAX,0x20);
  if (-1 < (int)uVar1) {
    puVar2 = _calloc(uVar1 + 1,1);
    unaff_ESI[3] = (int)puVar2;
    vorbis__v_readstring(puVar2);
    uVar1 = oggpack_read(in_EAX,0x20);
    unaff_ESI[2] = uVar1;
    if (-1 < (int)uVar1) {
      pvVar3 = _calloc(uVar1 + 1,4);
      *unaff_ESI = (int)pvVar3;
      pvVar3 = _calloc(unaff_ESI[2] + 1,4);
      unaff_ESI[1] = (int)pvVar3;
      if (0 < unaff_ESI[2]) {
        iVar4 = 0;
        do {
          uVar1 = oggpack_read(in_EAX,0x20);
          if ((int)uVar1 < 0) goto LAB_00c2fef0;
          *(uint *)(unaff_ESI[1] + iVar4 * 4) = uVar1;
          pvVar3 = _calloc(uVar1 + 1,1);
          *(void **)(*unaff_ESI + iVar4 * 4) = pvVar3;
          vorbis__v_readstring(*(undefined1 **)(*unaff_ESI + iVar4 * 4));
          iVar4 = iVar4 + 1;
        } while (iVar4 < unaff_ESI[2]);
      }
      uVar1 = oggpack_read(in_EAX,1);
      if (uVar1 == 1) {
        return 0;
      }
    }
  }
LAB_00c2fef0:
  vorbis_comment_clear(unaff_ESI);
  return 0xffffff7b;
}


//// FUNCTION vorbis__vorbis_unpack_books @ 00c2ff10 ////

undefined4 vorbis__vorbis_unpack_books(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  int *unaff_ESI;
  undefined4 *puVar8;
  int *piVar9;
  
  iVar1 = param_1[7];
  if (iVar1 == 0) {
    return 0xffffff7f;
  }
  uVar2 = oggpack_read(unaff_ESI,8);
  iVar7 = 0;
  *(uint *)(iVar1 + 0x18) = uVar2 + 1;
  if (0 < (int)(uVar2 + 1)) {
    puVar8 = (undefined4 *)(iVar1 + 0x720);
    do {
      puVar3 = _calloc(1,0x34);
      *puVar8 = puVar3;
      iVar4 = vorbis_staticbook_unpack(unaff_ESI,puVar3);
      if (iVar4 != 0) goto LAB_00c3017f;
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar7 < *(int *)(iVar1 + 0x18));
  }
  uVar2 = oggpack_read(unaff_ESI,6);
  iVar7 = 0;
  if (0 < (int)(uVar2 + 1)) {
    do {
      uVar5 = oggpack_read(unaff_ESI,0x10);
      if (((int)uVar5 < 0) || (0 < (int)uVar5)) goto LAB_00c3017f;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uVar2 + 1));
  }
  uVar2 = oggpack_read(unaff_ESI,6);
  iVar7 = 0;
  *(uint *)(iVar1 + 0x10) = uVar2 + 1;
  if (0 < (int)(uVar2 + 1)) {
    piVar9 = (int *)(iVar1 + 0x420);
    do {
      uVar2 = oggpack_read(unaff_ESI,0x10);
      piVar9[-0x40] = uVar2;
      if (((int)uVar2 < 0) || (1 < (int)uVar2)) goto LAB_00c3017f;
      iVar4 = (**(code **)((&PTR_DAT_00f7df88)[uVar2] + 4))();
      *piVar9 = iVar4;
      if (iVar4 == 0) goto LAB_00c3017f;
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < *(int *)(iVar1 + 0x10));
  }
  uVar2 = oggpack_read(unaff_ESI,6);
  iVar7 = 0;
  *(uint *)(iVar1 + 0x14) = uVar2 + 1;
  if (0 < (int)(uVar2 + 1)) {
    piVar9 = (int *)(iVar1 + 0x620);
    do {
      uVar2 = oggpack_read(unaff_ESI,0x10);
      piVar9[-0x40] = uVar2;
      if (((int)uVar2 < 0) || (2 < (int)uVar2)) goto LAB_00c3017f;
      iVar4 = (**(code **)((&PTR_DAT_00f7df90)[uVar2] + 4))();
      *piVar9 = iVar4;
      if (iVar4 == 0) goto LAB_00c3017f;
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < *(int *)(iVar1 + 0x14));
  }
  uVar2 = oggpack_read(unaff_ESI,6);
  iVar7 = 0;
  *(uint *)(iVar1 + 0xc) = uVar2 + 1;
  if (0 < (int)(uVar2 + 1)) {
    piVar9 = (int *)(iVar1 + 0x220);
    do {
      uVar2 = oggpack_read(unaff_ESI,0x10);
      piVar9[-0x40] = uVar2;
      if (((int)uVar2 < 0) || (0 < (int)uVar2)) goto LAB_00c3017f;
      iVar4 = (**(code **)((&PTR_PTR_00f7df9c)[uVar2] + 4))();
      *piVar9 = iVar4;
      if (iVar4 == 0) goto LAB_00c3017f;
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < *(int *)(iVar1 + 0xc));
  }
  uVar2 = oggpack_read(unaff_ESI,6);
  iVar7 = 0;
  *(uint *)(iVar1 + 8) = uVar2 + 1;
  if (0 < (int)(uVar2 + 1)) {
    piVar9 = (int *)(iVar1 + 0x20);
    do {
      pvVar6 = _calloc(1,0x10);
      *piVar9 = (int)pvVar6;
      uVar2 = oggpack_read(unaff_ESI,1);
      *(uint *)*piVar9 = uVar2;
      uVar2 = oggpack_read(unaff_ESI,0x10);
      *(uint *)(*piVar9 + 4) = uVar2;
      uVar2 = oggpack_read(unaff_ESI,0x10);
      *(uint *)(*piVar9 + 8) = uVar2;
      uVar2 = oggpack_read(unaff_ESI,8);
      *(uint *)(*piVar9 + 0xc) = uVar2;
      iVar4 = *piVar9;
      if (((0 < *(int *)(iVar4 + 4)) || (0 < *(int *)(iVar4 + 8))) ||
         (*(int *)(iVar1 + 0xc) <= *(int *)(iVar4 + 0xc))) goto LAB_00c3017f;
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < *(int *)(iVar1 + 8));
  }
  uVar2 = oggpack_read(unaff_ESI,1);
  if (uVar2 == 1) {
    return 0;
  }
LAB_00c3017f:
  vorbis_info_clear(param_1);
  return 0xffffff7b;
}


//// FUNCTION vorbis_synthesis_headerin @ 00c301a0 ////

undefined4 __fastcall vorbis_synthesis_headerin(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  bool bVar6;
  short local_1c [4];
  int local_14 [5];
  
  if (param_3 == (undefined4 *)0x0) {
    return 0xffffff7b;
  }
  oggpack_readinit(local_14,*param_3,param_3[1]);
  uVar1 = oggpack_read(local_14,8);
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  vorbis__v_readstring((undefined1 *)local_1c);
  iVar3 = 3;
  bVar6 = true;
  psVar4 = local_1c;
  psVar5 = (short *)"vorbis";
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *psVar4 == *psVar5;
    psVar4 = psVar4 + 1;
    psVar5 = psVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    return 0xffffff7c;
  }
  if (uVar1 == 1) {
    if ((param_3[2] != 0) && (param_1[2] == 0)) {
      uVar2 = vorbis__vorbis_unpack_info();
      return uVar2;
    }
  }
  else if (uVar1 == 3) {
    if (param_1[2] != 0) {
      uVar2 = vorbis__vorbis_unpack_comment();
      return uVar2;
    }
  }
  else if (((uVar1 == 5) && (param_1[2] != 0)) && (*(int *)(param_2 + 0xc) != 0)) {
    uVar2 = vorbis__vorbis_unpack_books(param_1);
    return uVar2;
  }
  return 0xffffff7b;
}


//// FUNCTION vorbis__vorbis_pack_info @ 00c302c0 ////

undefined4 vorbis__vorbis_pack_info(void)

{
  int *piVar1;
  int *in_EAX;
  uint uVar2;
  int unaff_ESI;
  int iVar3;
  
  piVar1 = *(int **)(unaff_ESI + 0x1c);
  if (piVar1 == (int *)0x0) {
    return 0xffffff7f;
  }
  oggpack_write(in_EAX,1,8);
  vorbis__v_writestring("vorbis");
  oggpack_write(in_EAX,0,0x20);
  oggpack_write(in_EAX,*(uint *)(unaff_ESI + 4),8);
  oggpack_write(in_EAX,*(uint *)(unaff_ESI + 8),0x20);
  oggpack_write(in_EAX,*(uint *)(unaff_ESI + 0xc),0x20);
  oggpack_write(in_EAX,*(uint *)(unaff_ESI + 0x10),0x20);
  oggpack_write(in_EAX,*(uint *)(unaff_ESI + 0x14),0x20);
  iVar3 = 4;
  uVar2 = vorbis_ilog2(*piVar1);
  oggpack_write(in_EAX,uVar2,iVar3);
  iVar3 = 4;
  uVar2 = vorbis_ilog2(piVar1[1]);
  oggpack_write(in_EAX,uVar2,iVar3);
  oggpack_write(in_EAX,1,1);
  return 0;
}


//// FUNCTION vorbis__vorbis_pack_comment @ 00c30370 ////

undefined4 vorbis__vorbis_pack_comment(int *param_1)

{
  char cVar1;
  int *in_EAX;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_20 [32];
  
  pcVar4 = "Xiph.Org libVorbis I 20030909";
  pcVar5 = local_20;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  pcVar2 = local_20;
  *(undefined2 *)pcVar5 = *(undefined2 *)pcVar4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  oggpack_write(in_EAX,3,8);
  vorbis__v_writestring("vorbis");
  oggpack_write(in_EAX,(int)pcVar2 - (int)(local_20 + 1),0x20);
  vorbis__v_writestring(local_20);
  oggpack_write(in_EAX,param_1[2],0x20);
  if ((param_1[2] != 0) && (iVar3 = 0, 0 < param_1[2])) {
    do {
      if (*(int *)(*param_1 + iVar3 * 4) == 0) {
        oggpack_write(in_EAX,0,0x20);
      }
      else {
        oggpack_write(in_EAX,*(uint *)(param_1[1] + iVar3 * 4),0x20);
        vorbis__v_writestring(*(char **)(*param_1 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[2]);
  }
  oggpack_write(in_EAX,1,1);
  return 0;
}


//// FUNCTION vorbis__vorbis_pack_books @ 00c30450 ////

undefined4 vorbis__vorbis_pack_books(int param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    return 0xffffff7f;
  }
  oggpack_write(in_EAX,5,8);
  vorbis__v_writestring("vorbis");
  oggpack_write(in_EAX,*(int *)(iVar1 + 0x18) - 1,8);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0x18)) {
    puVar3 = (undefined4 *)(iVar1 + 0x720);
    do {
      iVar2 = vorbis_staticbook_pack((uint *)*puVar3,in_EAX);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x18));
  }
  oggpack_write(in_EAX,0,6);
  oggpack_write(in_EAX,0,0x10);
  oggpack_write(in_EAX,*(int *)(iVar1 + 0x10) - 1,6);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0x10)) {
    puVar5 = (uint *)(iVar1 + 800);
    do {
      oggpack_write(in_EAX,*puVar5,0x10);
      if (*(code **)(&PTR_DAT_00f7df88)[*puVar5] == (code *)0x0) {
        return 0xffffffff;
      }
      (**(code **)(&PTR_DAT_00f7df88)[*puVar5])();
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x10));
  }
  oggpack_write(in_EAX,*(int *)(iVar1 + 0x14) - 1,6);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0x14)) {
    puVar5 = (uint *)(iVar1 + 0x520);
    do {
      oggpack_write(in_EAX,*puVar5,0x10);
      (**(code **)(&PTR_DAT_00f7df90)[*puVar5])();
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x14));
  }
  oggpack_write(in_EAX,*(int *)(iVar1 + 0xc) - 1,6);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0xc)) {
    puVar5 = (uint *)(iVar1 + 0x120);
    do {
      oggpack_write(in_EAX,*puVar5,0x10);
      (**(code **)(&PTR_PTR_00f7df9c)[*puVar5])();
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0xc));
  }
  oggpack_write(in_EAX,*(int *)(iVar1 + 8) - 1,6);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    piVar6 = (int *)(iVar1 + 0x20);
    do {
      oggpack_write(in_EAX,*(uint *)*piVar6,1);
      oggpack_write(in_EAX,*(uint *)(*piVar6 + 4),0x10);
      oggpack_write(in_EAX,*(uint *)(*piVar6 + 8),0x10);
      oggpack_write(in_EAX,*(uint *)(*piVar6 + 0xc),8);
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < *(int *)(iVar1 + 8));
  }
  oggpack_write(in_EAX,1,1);
  return 0;
}


//// FUNCTION vorbis_commentheader_out @ 00c30640 ////

undefined4 __fastcall vorbis_commentheader_out(int *param_1,undefined4 *param_2)

{
  int iVar1;
  size_t _Size;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_14 [2];
  undefined4 *local_c;
  
  oggpack_writeinit(local_14);
  iVar1 = vorbis__vorbis_pack_comment(param_1);
  if (iVar1 != 0) {
    return 0xffffff7e;
  }
  _Size = oggpack_bytes(local_14);
  pvVar2 = _malloc(_Size);
  *param_2 = pvVar2;
  uVar3 = oggpack_bytes(local_14);
  puVar5 = (undefined4 *)*param_2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = *local_c;
    local_c = local_c + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)local_c;
    local_c = (undefined4 *)((int)local_c + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  iVar1 = oggpack_bytes(local_14);
  param_2[1] = iVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return 0;
}


//// FUNCTION vorbis_analysis_headerout @ 00c306c0 ////

undefined4 __fastcall
vorbis_analysis_headerout
          (int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_20;
  int local_14 [2];
  undefined4 *local_c;
  
  iVar6 = *(int *)(param_1 + 0x68);
  iVar5 = *(int *)(param_1 + 4);
  local_20 = 0xffffff7e;
  if (iVar6 == 0) {
    local_20 = 0xffffff7f;
  }
  else {
    oggpack_writeinit(local_14);
    iVar1 = vorbis__vorbis_pack_info();
    if (iVar1 == 0) {
      if (*(void **)(iVar6 + 0x40) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(iVar6 + 0x40));
      }
      sVar2 = oggpack_bytes(local_14);
      pvVar3 = _malloc(sVar2);
      *(void **)(iVar6 + 0x40) = pvVar3;
      uVar4 = oggpack_bytes(local_14);
      puVar8 = local_c;
      puVar9 = *(undefined4 **)(iVar6 + 0x40);
      for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *param_3 = *(undefined4 *)(iVar6 + 0x40);
      iVar1 = oggpack_bytes(local_14);
      param_3[1] = iVar1;
      param_3[2] = 1;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      oggpack_reset(local_14);
      iVar1 = vorbis__vorbis_pack_comment(param_2);
      if (iVar1 == 0) {
        if (*(void **)(iVar6 + 0x44) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar6 + 0x44));
        }
        sVar2 = oggpack_bytes(local_14);
        pvVar3 = _malloc(sVar2);
        *(void **)(iVar6 + 0x44) = pvVar3;
        uVar4 = oggpack_bytes(local_14);
        puVar8 = local_c;
        puVar9 = *(undefined4 **)(iVar6 + 0x44);
        for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *param_4 = *(undefined4 *)(iVar6 + 0x44);
        iVar1 = oggpack_bytes(local_14);
        param_4[1] = iVar1;
        param_4[2] = 0;
        param_4[3] = 0;
        param_4[4] = 0;
        param_4[5] = 0;
        oggpack_reset(local_14);
        iVar5 = vorbis__vorbis_pack_books(iVar5);
        if (iVar5 == 0) {
          if (*(void **)(iVar6 + 0x48) == (void *)0x0) {
            sVar2 = oggpack_bytes(local_14);
            pvVar3 = _malloc(sVar2);
            *(void **)(iVar6 + 0x48) = pvVar3;
            uVar4 = oggpack_bytes(local_14);
            puVar8 = *(undefined4 **)(iVar6 + 0x48);
            for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar8 = *local_c;
              local_c = local_c + 1;
              puVar8 = puVar8 + 1;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined1 *)puVar8 = *(undefined1 *)local_c;
              local_c = (undefined4 *)((int)local_c + 1);
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
            *param_5 = *(undefined4 *)(iVar6 + 0x48);
            iVar6 = oggpack_bytes(local_14);
            param_5[1] = iVar6;
            param_5[2] = 0;
            param_5[3] = 0;
            param_5[4] = 0;
            param_5[5] = 0;
            oggpack_writeclear((int)local_14);
            return 0;
          }
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar6 + 0x48));
        }
      }
    }
  }
  oggpack_writeclear((int)local_14);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  param_5[4] = 0;
  param_5[5] = 0;
  param_5[6] = 0;
  param_5[7] = 0;
  if (*(void **)(iVar6 + 0x40) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar6 + 0x40));
  }
  if (*(void **)(iVar6 + 0x44) == (void *)0x0) {
    if (*(void **)(iVar6 + 0x48) == (void *)0x0) {
      *(undefined4 *)(iVar6 + 0x40) = 0;
      *(undefined4 *)(iVar6 + 0x44) = 0;
      *(undefined4 *)(iVar6 + 0x48) = 0;
      return local_20;
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar6 + 0x48));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(iVar6 + 0x44));
}


//// FUNCTION FUN_00c30970 @ 00c30970 ////

int __fastcall FUN_00c30970(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    for (uVar2 = param_1 - 1; uVar2 != 0; uVar2 = uVar2 >> 1) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00c30990 @ 00c30990 ////

undefined4 __fastcall FUN_00c30990(int *param_1,undefined4 *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_2[0x10] = param_1;
  param_2[0x13] = 0;
  param_2[0x11] = 0;
  if (*param_1 != 0) {
    pvVar1 = _calloc(1,0x48);
    param_2[0x1a] = pvVar1;
    oggpack_writeinit(param_2 + 1);
    *(undefined4 *)((int)pvVar1 + 4) = 0xc61c3c00;
  }
  return 0;
}


//// FUNCTION MemAllocator_Allocate @ 00c309e0 ////

int __fastcall MemAllocator_Allocate(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint _Size;
  
  _Size = param_2 + 7U & 0xfffffff8;
  if (*(int *)(param_1 + 0x4c) < (int)(*(int *)(param_1 + 0x48) + _Size)) {
    if (*(int *)(param_1 + 0x44) != 0) {
      puVar2 = _malloc(8);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x48);
      puVar2[1] = *(undefined4 *)(param_1 + 0x54);
      *puVar2 = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 **)(param_1 + 0x54) = puVar2;
    }
    *(uint *)(param_1 + 0x4c) = _Size;
    pvVar3 = _malloc(_Size);
    *(void **)(param_1 + 0x44) = pvVar3;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + _Size;
  return *(int *)(param_1 + 0x44) + iVar1;
}


//// FUNCTION FUN_00c30a50 @ 00c30a50 ////

void __fastcall FUN_00c30a50(int param_1)

{
  int *piVar1;
  
  if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)**(undefined4 **)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    piVar1 = FUN_00ad58c5(*(int **)(param_1 + 0x44),
                          (uint *)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x50)));
    *(int **)(param_1 + 0x44) = piVar1;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}


//// FUNCTION FUN_00c30ac0 @ 00c30ac0 ////

void __fastcall FUN_00c30ac0(undefined4 *param_1)

{
  int iVar1;
  
  if (((int *)param_1[0x10] != (int *)0x0) && (*(int *)param_1[0x10] != 0)) {
    oggpack_writeclear((int)(param_1 + 1));
  }
  FUN_00c30a50((int)param_1);
  if ((void *)param_1[0x11] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11]);
  }
  if ((void *)param_1[0x1a] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1a]);
  }
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00c30b10 @ 00c30b10 ////

undefined4 FUN_00c30b10(int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *unaff_EBX;
  int *piVar7;
  undefined4 *puVar8;
  int *local_8;
  int local_4;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    iVar4 = piVar1[0x39e];
    puVar8 = unaff_EBX;
    for (iVar6 = 0x1c; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    pvVar2 = _calloc(1,0xc0);
    unaff_EBX[1] = param_1;
    unaff_EBX[0x1a] = pvVar2;
    iVar6 = FUN_00c30970(piVar1[2]);
    *(int *)((int)pvVar2 + 0x2c) = iVar6;
    pvVar3 = _calloc(1,4);
    *(void **)((int)pvVar2 + 0xc) = pvVar3;
    pvVar3 = _calloc(1,4);
    *(void **)((int)pvVar2 + 0x10) = pvVar3;
    pvVar3 = _calloc(1,0x14);
    **(undefined4 **)((int)pvVar2 + 0xc) = pvVar3;
    pvVar3 = _calloc(1,0x14);
    **(undefined4 **)((int)pvVar2 + 0x10) = pvVar3;
    vorbis_mdct_init((int *)**(undefined4 **)((int)pvVar2 + 0xc),*piVar1 >> ((byte)iVar4 & 0x1f));
    vorbis_mdct_init((int *)**(undefined4 **)((int)pvVar2 + 0x10),piVar1[1] >> ((byte)iVar4 & 0x1f))
    ;
    iVar4 = FUN_00c30970(*piVar1);
    *(int *)((int)pvVar2 + 4) = iVar4 + -6;
    iVar4 = FUN_00c30970(piVar1[1]);
    *(int *)((int)pvVar2 + 8) = iVar4 + -6;
    if (param_2 == 0) {
      if (piVar1[0x2c8] == 0) {
        pvVar3 = _calloc(piVar1[6],0x2c);
        piVar1[0x2c8] = (int)pvVar3;
        param_2 = 0;
        if (0 < piVar1[6]) {
          local_4 = 0;
          piVar7 = piVar1 + 0x1c8;
          do {
            vorbis_book_init_decode((undefined4 *)(piVar1[0x2c8] + local_4),(undefined4 *)*piVar7);
            vorbis_staticbook_destroy((undefined4 *)*piVar7);
            *piVar7 = 0;
            param_2 = param_2 + 1;
            local_4 = local_4 + 0x2c;
            piVar7 = piVar7 + 1;
          } while (param_2 < piVar1[6]);
        }
      }
    }
    else {
      FUN_00c5fa90((int *)((int)pvVar2 + 0x14),*piVar1);
      FUN_00c5fa90((int *)((int)pvVar2 + 0x20),piVar1[1]);
      if (piVar1[0x2c8] == 0) {
        pvVar3 = _calloc(piVar1[6],0x2c);
        piVar1[0x2c8] = (int)pvVar3;
        param_2 = 0;
        if (0 < piVar1[6]) {
          local_8 = (int *)0x0;
          piVar7 = piVar1 + 0x1c8;
          do {
            vorbis_book_init_encode((int *)(piVar1[0x2c8] + (int)local_8),(int *)*piVar7);
            param_2 = param_2 + 1;
            local_8 = (int *)((int)local_8 + 0x2c);
            piVar7 = piVar7 + 1;
          } while (param_2 < piVar1[6]);
        }
      }
      pvVar3 = _calloc(piVar1[7],0x30);
      *(void **)((int)pvVar2 + 0x38) = pvVar3;
      param_2 = 0;
      if (0 < piVar1[7]) {
        local_8 = piVar1 + 0x2c9;
        local_4 = 0;
        do {
          FUN_00c56480((int *)(*(int *)((int)pvVar2 + 0x38) + local_4),*local_8,piVar1 + 0x2cd,
                       piVar1[*(int *)*local_8] / 2,*(int *)(param_1 + 8));
          param_2 = param_2 + 1;
          local_8 = local_8 + 1;
          local_4 = local_4 + 0x30;
        } while (param_2 < piVar1[7]);
      }
      *unaff_EBX = 1;
    }
    unaff_EBX[4] = piVar1[1];
    pvVar3 = _malloc(*(int *)(param_1 + 4) << 2);
    unaff_EBX[2] = pvVar3;
    pvVar3 = _malloc(*(int *)(param_1 + 4) << 2);
    unaff_EBX[3] = pvVar3;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        pvVar3 = _calloc(unaff_EBX[4],4);
        *(void **)(unaff_EBX[2] + iVar4 * 4) = pvVar3;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 4));
    }
    unaff_EBX[9] = 0;
    unaff_EBX[10] = 0;
    iVar4 = piVar1[1];
    unaff_EBX[0xc] = iVar4 / 2;
    unaff_EBX[5] = iVar4 / 2;
    pvVar3 = _calloc(piVar1[4],4);
    *(void **)((int)pvVar2 + 0x30) = pvVar3;
    pvVar3 = _calloc(piVar1[5],4);
    *(void **)((int)pvVar2 + 0x34) = pvVar3;
    param_2 = 0;
    if (0 < piVar1[4]) {
      piVar7 = piVar1 + 0x108;
      do {
        uVar5 = (**(code **)((&PTR_DAT_00f7df88)[piVar7[-0x40]] + 8))();
        *(undefined4 *)((int)piVar7 + *(int *)((int)pvVar2 + 0x30) + (-0x420 - (int)piVar1)) = uVar5
        ;
        param_2 = param_2 + 1;
        piVar7 = piVar7 + 1;
      } while (param_2 < piVar1[4]);
    }
    param_2 = 0;
    if (0 < piVar1[5]) {
      piVar7 = piVar1 + 0x188;
      do {
        uVar5 = (**(code **)((&PTR_DAT_00f7df90)[piVar7[-0x40]] + 8))();
        *(undefined4 *)((int)piVar7 + *(int *)((int)pvVar2 + 0x34) + (-0x620 - (int)piVar1)) = uVar5
        ;
        param_2 = param_2 + 1;
        piVar7 = piVar7 + 1;
      } while (param_2 < piVar1[5]);
    }
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00c30ec0 @ 00c30ec0 ////

undefined4 __fastcall FUN_00c30ec0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = FUN_00c30b10(param_2,1);
  if (iVar2 != 0) {
    return 1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x68);
  uVar3 = FUN_00c55660(param_2);
  puVar1[0xf] = uVar3;
  piVar4 = _calloc(1,0xb4);
  *puVar1 = piVar4;
  vorbis_init_window_tables(piVar4,param_2);
  FUN_00c335b0(param_2,puVar1 + 0x14);
  return 0;
}


//// FUNCTION FUN_00c30f20 @ 00c30f20 ////

void __fastcall FUN_00c30f20(undefined4 *param_1)

{
  int *_Memory;
  void *_Memory_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = param_1[1];
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x1c);
    }
    _Memory = (int *)param_1[0x1a];
    if (_Memory != (int *)0x0) {
      if (*_Memory != 0) {
        FUN_00c60b40(*_Memory);
                    /* WARNING: Subroutine does not return */
        _free((void *)*_Memory);
      }
      if ((undefined4 *)_Memory[3] != (undefined4 *)0x0) {
        vorbis_mdct_clear(*(undefined4 **)_Memory[3]);
                    /* WARNING: Subroutine does not return */
        _free(*(void **)_Memory[3]);
      }
      if ((undefined4 *)_Memory[4] != (undefined4 *)0x0) {
        vorbis_mdct_clear(*(undefined4 **)_Memory[4]);
                    /* WARNING: Subroutine does not return */
        _free(*(void **)_Memory[4]);
      }
      if (_Memory[0xc] != 0) {
        iVar1 = 0;
        if (0 < *(int *)(iVar2 + 0x10)) {
          piVar3 = (int *)(iVar2 + 800);
          do {
            (**(code **)((&PTR_DAT_00f7df88)[*piVar3] + 0x10))();
            iVar1 = iVar1 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar1 < *(int *)(iVar2 + 0x10));
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)_Memory[0xc]);
      }
      if (_Memory[0xd] != 0) {
        iVar1 = 0;
        if (0 < *(int *)(iVar2 + 0x14)) {
          piVar3 = (int *)(iVar2 + 0x520);
          do {
            (**(code **)((&PTR_DAT_00f7df90)[*piVar3] + 0x10))();
            iVar1 = iVar1 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar1 < *(int *)(iVar2 + 0x14));
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)_Memory[0xd]);
      }
      if (_Memory[0xe] != 0) {
        iVar1 = 0;
        if (0 < *(int *)(iVar2 + 0x1c)) {
          iVar4 = 0;
          do {
            FUN_00c56a10((undefined4 *)(_Memory[0xe] + iVar4));
            iVar1 = iVar1 + 1;
            iVar4 = iVar4 + 0x30;
          } while (iVar1 < *(int *)(iVar2 + 0x1c));
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)_Memory[0xe]);
      }
      if ((undefined4 *)_Memory[0xf] != (undefined4 *)0x0) {
        FUN_00c55690((undefined4 *)_Memory[0xf]);
      }
      FUN_00c337b0(_Memory + 0x14);
      FUN_00c5fad0(_Memory + 5);
      FUN_00c5fad0(_Memory + 8);
    }
    if (param_1[2] != 0) {
      iVar2 = 0;
      if (0 < *(int *)(iVar1 + 4)) {
        do {
          _Memory_00 = *(void **)(param_1[2] + iVar2 * 4);
          if (_Memory_00 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(_Memory_00);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(iVar1 + 4));
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[2]);
    }
    if (_Memory != (int *)0x0) {
      if ((void *)_Memory[0x10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)_Memory[0x10]);
      }
      if ((void *)_Memory[0x11] == (void *)0x0) {
        if ((void *)_Memory[0x12] == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)_Memory[0x12]);
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)_Memory[0x11]);
    }
    for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


//// FUNCTION Buffer_Reallocate @ 00c31140 ////

undefined4 __fastcall Buffer_Reallocate(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x68);
  if (*(void **)(iVar3 + 0x40) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar3 + 0x40));
  }
  *(undefined4 *)(iVar3 + 0x40) = 0;
  if (*(void **)(iVar3 + 0x44) == (void *)0x0) {
    *(undefined4 *)(iVar3 + 0x44) = 0;
    if (*(void **)(iVar3 + 0x48) == (void *)0x0) {
      *(undefined4 *)(iVar3 + 0x48) = 0;
      if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x14) + param_2) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x14) + param_2 * 2;
        iVar3 = 0;
        if (0 < *(int *)(iVar1 + 4)) {
          do {
            piVar2 = FUN_00ad58c5(*(int **)(*(int *)(param_1 + 8) + iVar3 * 4),
                                  (uint *)(*(int *)(param_1 + 0x10) << 2));
            *(int **)(*(int *)(param_1 + 8) + iVar3 * 4) = piVar2;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar1 + 4));
        }
      }
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 4)) {
        do {
          *(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) =
               *(int *)(*(int *)(param_1 + 8) + iVar3 * 4) + *(int *)(param_1 + 0x14) * 4;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar1 + 4));
      }
      return *(undefined4 *)(param_1 + 0xc);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar3 + 0x48));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(iVar3 + 0x44));
}


//// FUNCTION FUN_00c31210 @ 00c31210 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_00c31210(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  undefined1 auStack_118 [112];
  int aiStack_a8 [35];
  undefined4 uStack_1c;
  int local_10;
  int local_8;
  
  uStack_1c = 0xc31222;
  iVar1 = *(int *)(unaff_ESI + 0x14);
  aiStack_a8[3] = 0xc3123a;
  *(undefined4 *)(unaff_ESI + 0x1c) = 1;
  if ((0x40 < iVar1 - *(int *)(unaff_ESI + 0x30)) &&
     (local_10 = 0, 0 < *(int *)(*(int *)(unaff_ESI + 4) + 4))) {
    local_8 = 0;
    do {
      iVar3 = 0;
      if (0 < *(int *)(unaff_ESI + 0x14)) {
        do {
          aiStack_a8[(iVar3 - iVar1) + 4] =
               *(int *)(*(int *)(*(int *)(unaff_ESI + 8) + local_8) + -4 +
                       (*(int *)(unaff_ESI + 0x14) - iVar3) * 4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(unaff_ESI + 0x14));
      }
      iVar3 = *(int *)(unaff_ESI + 0x30);
      iVar2 = *(int *)(unaff_ESI + 0x14);
      aiStack_a8[3 - iVar1] = 0x20;
      aiStack_a8[2 - iVar1] = iVar2 - iVar3;
      aiStack_a8[1 - iVar1] = 0xc3129f;
      FUN_00c61410((int)(aiStack_a8 + (4 - iVar1)),aiStack_a8 + 4,aiStack_a8[2 - iVar1],
                   aiStack_a8[3 - iVar1]);
      iVar3 = *(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0x30);
      aiStack_a8[3 - iVar1] = *(int *)(unaff_ESI + 0x30);
      aiStack_a8[2 - iVar1] = (int)(aiStack_a8 + (iVar3 - iVar1) + 4);
      aiStack_a8[1 - iVar1] = 0x20;
      aiStack_a8[-iVar1] = 0xc312bc;
      FUN_00c61730((int)(aiStack_a8 + 4),(int)(auStack_118 + iVar3 * 4 + iVar1 * -4),
                   aiStack_a8[1 - iVar1],aiStack_a8[2 - iVar1],aiStack_a8[3 - iVar1]);
      iVar3 = 0;
      if (0 < *(int *)(unaff_ESI + 0x14)) {
        do {
          *(int *)(*(int *)(*(int *)(unaff_ESI + 8) + local_8) + -4 +
                  (*(int *)(unaff_ESI + 0x14) - iVar3) * 4) = aiStack_a8[(iVar3 - iVar1) + 4];
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(unaff_ESI + 0x14));
      }
      local_10 = local_10 + 1;
      local_8 = local_8 + 4;
    } while (local_10 < *(int *)(*(int *)(unaff_ESI + 4) + 4));
  }
  return;
}


//// FUNCTION FUN_00c31310 @ 00c31310 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 __fastcall FUN_00c31310(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 auStack_9c [31];
  undefined4 uStack_20;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0x1c);
  if (param_2 < 1) {
    uStack_20 = 0xc31339;
    if (*(int *)(param_1 + 0x1c) == 0) {
      FUN_00c31210();
    }
    Buffer_Reallocate(param_1,*(int *)(iVar2 + 4) * 3);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) =
         *(int *)(param_1 + 0x14) + *(int *)(iVar2 + 4) * 2 + *(int *)(iVar2 + 4);
    iVar6 = 0;
    if (0 < *(int *)(iVar1 + 4)) {
      do {
        iVar5 = *(int *)(param_1 + 0x20);
        if (iVar5 < 0x41) {
          puVar7 = (undefined4 *)(*(int *)(*(int *)(param_1 + 8) + iVar6 * 4) + iVar5 * 4);
          for (uVar4 = *(int *)(param_1 + 0x14) - iVar5 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1)
          {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined1 *)puVar7 = 0;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
        }
        else {
          iVar3 = iVar5;
          if (*(int *)(iVar2 + 4) < iVar5) {
            iVar3 = *(int *)(iVar2 + 4);
          }
          FUN_00c61410(*(int *)(*(int *)(param_1 + 8) + iVar6 * 4) + (iVar5 - iVar3) * 4,auStack_9c,
                       iVar3,0x20);
          iVar5 = *(int *)(*(int *)(param_1 + 8) + iVar6 * 4);
          iVar3 = *(int *)(param_1 + 0x20);
          FUN_00c61730((int)auStack_9c,iVar5 + -0x80 + iVar3 * 4,0x20,iVar5 + iVar3 * 4,
                       *(int *)(param_1 + 0x14) - iVar3);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar1 + 4));
      return 0;
    }
  }
  else {
    iVar1 = param_2 + *(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x10) < iVar1) {
      return 0xffffff7d;
    }
    *(int *)(param_1 + 0x14) = iVar1;
    if ((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(iVar2 + 4) < iVar1 - *(int *)(param_1 + 0x30)))
    {
      uStack_20 = 0xc31437;
      FUN_00c31210();
    }
  }
  return 0;
}


//// FUNCTION FUN_00c31450 @ 00c31450 ////

undefined4 __fastcall FUN_00c31450(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  int *piVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float10 fVar13;
  int local_1c;
  
  iVar7 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar7 + 0x1c);
  piVar2 = *(int **)(param_1 + 0x68);
  pfVar3 = (float *)piVar2[0xf];
  iVar5 = *(int *)(param_1 + 0x30) - piVar1[*(int *)(param_1 + 0x28)] / 2;
  piVar4 = (int *)param_2[0x1a];
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x20) == -1) {
    return 0;
  }
  iVar6 = FUN_00c610c0(param_1);
  if (iVar6 == -1) {
    if (*(int *)(param_1 + 0x20) == 0) {
      return 0;
    }
  }
  else if (*piVar1 != piVar1[1]) {
    *(int *)(param_1 + 0x2c) = iVar6;
    goto LAB_00c314d1;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
LAB_00c314d1:
  iVar6 = piVar1[*(int *)(param_1 + 0x2c)];
  iVar8 = ((int)(piVar1[*(int *)(param_1 + 0x28)] + (piVar1[*(int *)(param_1 + 0x28)] >> 0x1f & 3U))
          >> 2) + ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) + *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x14) < iVar6 / 2 + iVar8) {
    return 0;
  }
  FUN_00c30a50((int)param_2);
  param_2[6] = *(int *)(param_1 + 0x24);
  param_2[7] = *(int *)(param_1 + 0x28);
  param_2[8] = *(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar6 = FUN_00c612e0(param_1);
    piVar4[2] = (uint)(iVar6 == 0);
  }
  else if ((*(int *)(param_1 + 0x24) == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
    piVar4[2] = 0;
  }
  else {
    piVar4[2] = 1;
  }
  param_2[0x10] = param_1;
  param_2[0xe] = *(int *)(param_1 + 0x40);
  param_2[0xf] = *(int *)(param_1 + 0x44);
  uVar9 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = uVar9 + 1;
  *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (uint)(0xfffffffe < uVar9);
  param_2[0xc] = *(int *)(param_1 + 0x38);
  param_2[0xd] = *(int *)(param_1 + 0x3c);
  param_2[9] = piVar1[*(int *)(param_1 + 0x28)];
  if (*pfVar3 < (float)piVar4[1]) {
    *pfVar3 = (float)piVar4[1];
  }
  fVar13 = FUN_00c57fd0(param_1,*pfVar3);
  *pfVar3 = (float)fVar13;
  piVar4[1] = (int)(float)fVar13;
  iVar6 = MemAllocator_Allocate((int)param_2,*(int *)(iVar7 + 4) << 2);
  *param_2 = iVar6;
  iVar6 = MemAllocator_Allocate((int)param_2,*(int *)(iVar7 + 4) << 2);
  *piVar4 = iVar6;
  local_1c = 0;
  if (0 < *(int *)(iVar7 + 4)) {
    do {
      iVar6 = MemAllocator_Allocate((int)param_2,(param_2[9] + iVar5) * 4);
      *(int *)(*piVar4 + local_1c * 4) = iVar6;
      puVar11 = *(undefined4 **)(*(int *)(param_1 + 8) + local_1c * 4);
      puVar12 = *(undefined4 **)(*piVar4 + local_1c * 4);
      for (uVar9 = param_2[9] + iVar5 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(int *)(*param_2 + local_1c * 4) = *(int *)(*piVar4 + local_1c * 4) + iVar5 * 4;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(iVar7 + 4));
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x30))) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    param_2[0xb] = 1;
    return 1;
  }
  iVar5 = piVar1[1] / 2;
  uVar9 = iVar8 - iVar5;
  if (0 < (int)uVar9) {
    FUN_00c613a0(*piVar2,uVar9);
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - uVar9;
    iVar6 = 0;
    if (0 < *(int *)(iVar7 + 4)) {
      do {
        _Dst = *(void **)(*(int *)(param_1 + 8) + iVar6 * 4);
        _memmove(_Dst,(void *)((int)_Dst + uVar9 * 4),*(int *)(param_1 + 0x14) << 2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar7 + 4));
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x30) = iVar5;
    if (*(int *)(param_1 + 0x20) == 0) {
      uVar10 = *(uint *)(param_1 + 0x38);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x20) - uVar9;
      *(int *)(param_1 + 0x20) = iVar7;
      if (iVar7 < 1) {
        *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      }
      uVar10 = *(uint *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x20) <= iVar5) {
        uVar9 = (*(int *)(param_1 + 0x20) - iVar5) + uVar9;
      }
    }
    *(uint *)(param_1 + 0x38) = uVar10 + uVar9;
    *(uint *)(param_1 + 0x3c) =
         *(int *)(param_1 + 0x3c) + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar10,uVar9);
  }
  return 1;
}


//// FUNCTION FUN_00c31750 @ 00c31750 ////

undefined4 __fastcall FUN_00c31750(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (((iVar1 != 0) && (*(int *)(param_1 + 4) != 0)) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x1c), iVar3 != 0)) {
    bVar2 = (byte)*(undefined4 *)(iVar3 + 0xe78);
    iVar3 = *(int *)(iVar3 + 4) >> (bVar2 + 1 & 0x1f);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(int *)(param_1 + 0x30) = iVar3;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(int *)(param_1 + 0x14) = iVar3 >> (bVar2 & 0x1f);
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0xb8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0xbc) = 0xffffffff;
    return 0;
  }
  return 0xffffffff;
}


//// FUNCTION FUN_00c317b0 @ 00c317b0 ////

undefined4 __fastcall FUN_00c317b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c30b10(param_2,0);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_00c31750(param_1);
  return 0;
}


//// FUNCTION FUN_00c317e0 @ 00c317e0 ////

longlong __fastcall FUN_00c317e0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined *puVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  float *pfVar24;
  undefined8 uVar25;
  int local_38;
  uint local_34;
  undefined4 *local_30;
  int local_1c;
  uint local_14;
  float *local_10;
  float *local_c;
  
  iVar13 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x68);
  piVar2 = *(int **)(iVar13 + 0x1c);
  iVar3 = piVar2[0x39e];
  if (param_2 == (int *)0x0) {
    return 0xffffff7d;
  }
  if ((*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x18) != -1)) {
    return CONCAT44(param_2,0xffffff7d);
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = param_2[7];
  uVar19 = *(uint *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  if ((((uVar19 & *(uint *)(param_1 + 0x44)) == 0xffffffff) || (uVar19 + 1 != param_2[0xe])) ||
     (*(uint *)(param_1 + 0x44) + (uint)(0xfffffffe < uVar19) != param_2[0xf])) {
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0xb8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0xbc) = 0xffffffff;
  }
  *(int *)(param_1 + 0x40) = param_2[0xe];
  *(int *)(param_1 + 0x44) = param_2[0xf];
  bVar5 = (byte)iVar3;
  if (*param_2 != 0) {
    bVar15 = bVar5 + 1;
    iVar6 = piVar2[*(int *)(param_1 + 0x28)] >> (bVar15 & 0x1f);
    iVar23 = *piVar2 >> (bVar15 & 0x1f);
    uVar20 = piVar2[1] >> (bVar15 & 0x1f);
    uVar19 = param_2[0x16];
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x4c) + ((int)uVar19 >> 0x1f) +
         (uint)CARRY4(*(uint *)(param_1 + 0x48),uVar19);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) + uVar19;
    uVar19 = param_2[0x17];
    uVar14 = *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = uVar14 + uVar19;
    uVar4 = *(uint *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + ((int)uVar19 >> 0x1f) + (uint)CARRY4(uVar14,uVar19);
    uVar19 = param_2[0x18];
    *(uint *)(param_1 + 0x58) = uVar4 + uVar19;
    uVar14 = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x5c) =
         *(int *)(param_1 + 0x5c) + ((int)uVar19 >> 0x1f) + (uint)CARRY4(uVar4,uVar19);
    uVar19 = param_2[0x19];
    *(uint *)(param_1 + 0x60) = uVar14 + uVar19;
    *(uint *)(param_1 + 100) =
         *(int *)(param_1 + 100) + ((int)uVar19 >> 0x1f) + (uint)CARRY4(uVar14,uVar19);
    if (*(int *)(param_1 + 0x30) == 0) {
      local_14 = 0;
      local_34 = uVar20;
    }
    else {
      local_34 = 0;
      local_14 = uVar20;
    }
    local_38 = 0;
    if (0 < *(int *)(iVar13 + 4)) {
      do {
        if (*(int *)(param_1 + 0x24) == 0) {
          if (*(int *)(param_1 + 0x28) == 0) {
            puVar7 = FUN_00c618b0(*(int *)(iVar1 + 4) - iVar3);
            iVar17 = *(int *)(*(int *)(param_1 + 8) + local_38 * 4) + local_34 * 4;
            iVar22 = *(int *)(*param_2 + local_38 * 4);
            iVar18 = 0;
            if (3 < iVar23) {
              pfVar10 = (float *)(iVar17 + 4);
              pfVar9 = (float *)(puVar7 + iVar23 * 4 + -8);
              pfVar24 = (float *)(puVar7 + 8);
              do {
                iVar16 = iVar18 * 4;
                pfVar8 = (float *)(((int)puVar7 - iVar17) + (int)pfVar10);
                iVar18 = iVar18 + 4;
                pfVar10[-1] = pfVar9[1] * pfVar10[-1] + *(float *)(iVar22 + iVar16) * pfVar24[-2];
                *pfVar10 = *pfVar9 * *pfVar10 +
                           *(float *)((iVar22 - (int)puVar7) + (int)pfVar8) * *pfVar8;
                pfVar10[1] = pfVar9[-1] * pfVar10[1] +
                             *(float *)((iVar22 - (int)puVar7) + -0x10 + (int)(pfVar24 + 4)) *
                             *pfVar24;
                pfVar10[2] = pfVar9[-2] * pfVar10[2] +
                             *(float *)(iVar22 + -4 + iVar18 * 4) * pfVar24[1];
                pfVar10 = pfVar10 + 4;
                pfVar9 = pfVar9 + -4;
                pfVar24 = pfVar24 + 4;
              } while (iVar18 < iVar23 + -3);
            }
            if (iVar18 < iVar23) {
              iVar16 = iVar23 - iVar18;
              pfVar10 = (float *)(iVar17 + iVar18 * 4);
              local_c = (float *)(puVar7 + (iVar23 - iVar18) * 4 + -4);
              do {
                pfVar9 = (float *)(((int)puVar7 - iVar17) + (int)pfVar10);
                iVar16 = iVar16 + -1;
                *pfVar10 = *pfVar10 * *local_c +
                           *(float *)((iVar22 - (int)puVar7) + (int)pfVar9) * *pfVar9;
                pfVar10 = pfVar10 + 1;
                local_c = local_c + -1;
              } while (iVar16 != 0);
            }
          }
          else {
            puVar7 = FUN_00c618b0(*(int *)(iVar1 + 4) - iVar3);
            iVar17 = *(int *)(*(int *)(param_1 + 8) + local_38 * 4) + local_34 * 4;
            iVar22 = *(int *)(*param_2 + local_38 * 4) + ((int)uVar20 / 2 - iVar23 / 2) * 4;
            iVar18 = 0;
            if (3 < iVar23) {
              pfVar10 = (float *)(iVar17 + 4);
              pfVar9 = (float *)(puVar7 + iVar23 * 4 + -8);
              pfVar24 = (float *)(puVar7 + 8);
              do {
                iVar16 = iVar18 * 4;
                pfVar8 = (float *)(((int)puVar7 - iVar17) + (int)pfVar10);
                iVar18 = iVar18 + 4;
                pfVar10[-1] = pfVar9[1] * pfVar10[-1] + *(float *)(iVar22 + iVar16) * pfVar24[-2];
                *pfVar10 = *pfVar9 * *pfVar10 +
                           *(float *)((iVar22 - (int)puVar7) + (int)pfVar8) * *pfVar8;
                pfVar10[1] = pfVar9[-1] * pfVar10[1] +
                             *(float *)((iVar22 - (int)puVar7) + -0x10 + (int)(pfVar24 + 4)) *
                             *pfVar24;
                pfVar10[2] = pfVar9[-2] * pfVar10[2] +
                             *(float *)(iVar22 + -4 + iVar18 * 4) * pfVar24[1];
                pfVar10 = pfVar10 + 4;
                pfVar9 = pfVar9 + -4;
                pfVar24 = pfVar24 + 4;
              } while (iVar18 < iVar23 + -3);
            }
            if (iVar18 < iVar23) {
              iVar11 = iVar23 - iVar18;
              iVar21 = iVar23 - iVar18;
              iVar16 = iVar18 * 4;
              iVar18 = iVar18 + iVar21;
              pfVar10 = (float *)(iVar17 + iVar16);
              local_10 = (float *)(puVar7 + iVar11 * 4 + -4);
              do {
                pfVar9 = (float *)(((int)puVar7 - iVar17) + (int)pfVar10);
                iVar21 = iVar21 + -1;
                *pfVar10 = *pfVar10 * *local_10 +
                           *(float *)((iVar22 - (int)puVar7) + (int)pfVar9) * *pfVar9;
                pfVar10 = pfVar10 + 1;
                local_10 = local_10 + -1;
              } while (iVar21 != 0);
            }
            iVar16 = (int)uVar20 / 2 + iVar23 / 2;
            if (iVar18 < iVar16) {
              puVar12 = (undefined4 *)(iVar17 + iVar18 * 4);
              iVar16 = iVar16 - iVar18;
              do {
                *puVar12 = *(undefined4 *)((iVar22 - iVar17) + (int)puVar12);
                puVar12 = puVar12 + 1;
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
          }
        }
        else if (*(int *)(param_1 + 0x28) == 0) {
          puVar7 = FUN_00c618b0(*(int *)(iVar1 + 4) - iVar3);
          iVar17 = *(int *)(*(int *)(param_1 + 8) + local_38 * 4) +
                   (((int)uVar20 / 2 - iVar23 / 2) + local_34) * 4;
          iVar22 = *(int *)(*param_2 + local_38 * 4);
          iVar18 = 0;
          if (3 < iVar23) {
            pfVar10 = (float *)(iVar17 + 4);
            pfVar9 = (float *)(puVar7 + 8);
            pfVar24 = (float *)(puVar7 + iVar23 * 4 + -8);
            do {
              iVar16 = iVar18 * 4;
              pfVar8 = (float *)(((int)puVar7 - iVar17) + (int)pfVar10);
              iVar18 = iVar18 + 4;
              pfVar10[-1] = pfVar24[1] * pfVar10[-1] + *(float *)(iVar22 + iVar16) * pfVar9[-2];
              *pfVar10 = *pfVar24 * *pfVar10 +
                         *(float *)((iVar22 - (int)puVar7) + (int)pfVar8) * *pfVar8;
              pfVar10[1] = pfVar24[-1] * pfVar10[1] +
                           *(float *)((iVar22 - (int)puVar7) + -0x10 + (int)(pfVar9 + 4)) * *pfVar9;
              pfVar10[2] = pfVar24[-2] * pfVar10[2] +
                           *(float *)(iVar22 + -4 + iVar18 * 4) * pfVar9[1];
              pfVar10 = pfVar10 + 4;
              pfVar9 = pfVar9 + 4;
              pfVar24 = pfVar24 + -4;
            } while (iVar18 < iVar23 + -3);
          }
          if (iVar18 < iVar23) {
            iVar16 = iVar23 - iVar18;
            pfVar10 = (float *)(iVar17 + iVar18 * 4);
            local_10 = (float *)(puVar7 + (iVar23 - iVar18) * 4 + -4);
            do {
              pfVar9 = (float *)((int)pfVar10 + ((int)puVar7 - iVar17));
              iVar16 = iVar16 + -1;
              *pfVar10 = *pfVar10 * *local_10 +
                         *(float *)((int)pfVar9 + (iVar22 - (int)puVar7)) * *pfVar9;
              pfVar10 = pfVar10 + 1;
              local_10 = local_10 + -1;
            } while (iVar16 != 0);
          }
        }
        else {
          puVar7 = FUN_00c618b0(*(int *)(iVar1 + 8) - iVar3);
          iVar17 = *(int *)(*(int *)(param_1 + 8) + local_38 * 4) + local_34 * 4;
          iVar22 = *(int *)(*param_2 + local_38 * 4);
          iVar18 = 0;
          if (3 < (int)uVar20) {
            pfVar10 = (float *)(puVar7 + uVar20 * 4 + -8);
            pfVar9 = (float *)(iVar17 + 4);
            pfVar24 = (float *)(puVar7 + 8);
            do {
              iVar16 = iVar18 * 4;
              iVar18 = iVar18 + 4;
              pfVar8 = (float *)(((int)puVar7 - iVar17) + (int)pfVar9);
              pfVar9[-1] = pfVar10[1] * pfVar9[-1] + *(float *)(iVar22 + iVar16) * pfVar24[-2];
              *pfVar9 = *pfVar10 * *pfVar9 +
                        *(float *)((int)pfVar8 + (iVar22 - (int)puVar7)) * *pfVar8;
              pfVar9[1] = pfVar10[-1] * pfVar9[1] +
                          *(float *)((iVar22 - (int)puVar7) + -0x10 + (int)(pfVar24 + 4)) * *pfVar24
              ;
              pfVar9[2] = pfVar10[-2] * pfVar9[2] +
                          *(float *)(iVar22 + -4 + iVar18 * 4) * pfVar24[1];
              pfVar10 = pfVar10 + -4;
              pfVar9 = pfVar9 + 4;
              pfVar24 = pfVar24 + 4;
            } while (iVar18 < (int)(uVar20 - 3));
          }
          if (iVar18 < (int)uVar20) {
            iVar16 = uVar20 - iVar18;
            pfVar10 = (float *)(iVar17 + iVar18 * 4);
            local_10 = (float *)(puVar7 + (uVar20 - iVar18) * 4 + -4);
            do {
              pfVar9 = (float *)(((int)puVar7 - iVar17) + (int)pfVar10);
              iVar16 = iVar16 + -1;
              *pfVar10 = *pfVar10 * *local_10 +
                         *(float *)((int)pfVar9 + (iVar22 - (int)puVar7)) * *pfVar9;
              pfVar10 = pfVar10 + 1;
              local_10 = local_10 + -1;
            } while (iVar16 != 0);
          }
        }
        iVar17 = *(int *)(*(int *)(param_1 + 8) + local_38 * 4) + local_14 * 4;
        iVar22 = *(int *)(*param_2 + local_38 * 4) + iVar6 * 4;
        local_1c = 0;
        if (3 < iVar6) {
          local_30 = (undefined4 *)(iVar22 + 0xc);
          iVar18 = (iVar6 - 4U >> 2) + 1;
          local_1c = iVar18 * 4;
          puVar12 = (undefined4 *)(iVar17 + 4);
          do {
            puVar12[-1] = local_30[-3];
            *puVar12 = *(undefined4 *)((iVar22 - iVar17) + (int)puVar12);
            puVar12[1] = local_30[-1];
            puVar12[2] = *local_30;
            local_30 = local_30 + 4;
            puVar12 = puVar12 + 4;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        if (local_1c < iVar6) {
          puVar12 = (undefined4 *)(iVar17 + local_1c * 4);
          local_1c = iVar6 - local_1c;
          do {
            *puVar12 = *(undefined4 *)((int)puVar12 + (iVar22 - iVar17));
            puVar12 = puVar12 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        local_38 = local_38 + 1;
      } while (local_38 < *(int *)(iVar13 + 4));
    }
    *(uint *)(param_1 + 0x30) = (*(int *)(param_1 + 0x30) != 0) - 1 & uVar20;
    if (*(int *)(param_1 + 0x18) == -1) {
      *(uint *)(param_1 + 0x18) = local_14;
      *(uint *)(param_1 + 0x14) = local_14;
    }
    else {
      *(uint *)(param_1 + 0x18) = local_34;
      *(uint *)(param_1 + 0x14) =
           (((int)(piVar2[*(int *)(param_1 + 0x28)] +
                  (piVar2[*(int *)(param_1 + 0x28)] >> 0x1f & 3U)) >> 2) +
            ((int)(piVar2[*(int *)(param_1 + 0x24)] +
                  (piVar2[*(int *)(param_1 + 0x24)] >> 0x1f & 3U)) >> 2) >> (bVar5 & 0x1f)) +
           local_34;
    }
  }
  uVar19 = *(uint *)(iVar1 + 0xb8);
  if ((uVar19 & *(uint *)(iVar1 + 0xbc)) == 0xffffffff) {
    iVar13 = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0;
  }
  else {
    uVar14 = ((int)(piVar2[*(int *)(param_1 + 0x24)] +
                   (piVar2[*(int *)(param_1 + 0x24)] >> 0x1f & 3U)) >> 2) +
             ((int)(piVar2[*(int *)(param_1 + 0x28)] +
                   (piVar2[*(int *)(param_1 + 0x28)] >> 0x1f & 3U)) >> 2);
    iVar13 = uVar14 + uVar19;
    *(uint *)(iVar1 + 0xbc) =
         ((int)uVar14 >> 0x1f) + *(int *)(iVar1 + 0xbc) + (uint)CARRY4(uVar14,uVar19);
  }
  *(int *)(iVar1 + 0xb8) = iVar13;
  uVar19 = *(uint *)(param_1 + 0x38);
  if ((uVar19 & *(uint *)(param_1 + 0x3c)) == 0xffffffff) {
    uVar19 = param_2[0xd];
    if ((param_2[0xc] & uVar19) != 0xffffffff) {
      *(int *)(param_1 + 0x38) = param_2[0xc];
      uVar14 = *(uint *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x3c) = uVar19;
      uVar19 = *(uint *)(iVar1 + 0xbc);
      uVar4 = *(uint *)(iVar1 + 0xb8);
      iVar13 = *(int *)(param_1 + 0x3c);
      if ((iVar13 <= (int)uVar19) && ((iVar13 < (int)uVar19 || (uVar14 < uVar4)))) {
        if (param_2[0xb] == 0) {
          uVar25 = __allshr(bVar5,(uVar19 - iVar13) - (uint)(uVar4 < uVar14));
          uVar19 = (uint)((ulonglong)uVar25 >> 0x20);
          iVar13 = *(int *)(param_1 + 0x18) + (int)uVar25;
          *(int *)(param_1 + 0x18) = iVar13;
          if (*(int *)(param_1 + 0x14) < iVar13) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
          }
        }
        else {
          uVar25 = __allshr(bVar5,(uVar19 - iVar13) - (uint)(uVar4 < uVar14));
          uVar19 = (uint)((ulonglong)uVar25 >> 0x20);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (int)uVar25;
        }
      }
    }
  }
  else {
    uVar14 = ((int)(piVar2[*(int *)(param_1 + 0x24)] +
                   (piVar2[*(int *)(param_1 + 0x24)] >> 0x1f & 3U)) >> 2) +
             ((int)(piVar2[*(int *)(param_1 + 0x28)] +
                   (piVar2[*(int *)(param_1 + 0x28)] >> 0x1f & 3U)) >> 2);
    *(uint *)(param_1 + 0x3c) =
         ((int)uVar14 >> 0x1f) + *(uint *)(param_1 + 0x3c) + (uint)CARRY4(uVar14,uVar19);
    *(uint *)(param_1 + 0x38) = uVar14 + uVar19;
    uVar14 = param_2[0xc];
    uVar4 = param_2[0xd];
    uVar19 = uVar14 & uVar4;
    if (uVar19 != 0xffffffff) {
      uVar19 = *(uint *)(param_1 + 0x38);
      uVar20 = *(uint *)(param_1 + 0x3c);
      if ((uVar19 != uVar14) || (uVar20 != uVar4)) {
        if (((((int)uVar4 <= (int)uVar20) && (((int)uVar4 < (int)uVar20 || (uVar14 < uVar19)))) &&
            (iVar13 = *(int *)(param_1 + 0x38) - param_2[0xc], iVar13 != 0)) && (param_2[0xb] != 0))
        {
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (iVar13 >> (bVar5 & 0x1f));
        }
        *(int *)(param_1 + 0x38) = param_2[0xc];
        *(int *)(param_1 + 0x3c) = param_2[0xd];
      }
    }
  }
  if (param_2[0xb] != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return (ulonglong)uVar19 << 0x20;
}


//// FUNCTION FUN_00c32190 @ 00c32190 ////

int __fastcall FUN_00c32190(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((-1 < *(int *)(param_1 + 0x18)) && (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x14))) {
    if (param_2 != (undefined4 *)0x0) {
      iVar2 = 0;
      if (0 < *(int *)(iVar1 + 4)) {
        do {
          *(int *)(*(int *)(param_1 + 0xc) + iVar2 * 4) =
               *(int *)(*(int *)(param_1 + 8) + iVar2 * 4) + *(int *)(param_1 + 0x18) * 4;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(iVar1 + 4));
      }
      *param_2 = *(undefined4 *)(param_1 + 0xc);
    }
    return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
  }
  return 0;
}


//// FUNCTION FUN_00c321e0 @ 00c321e0 ////

undefined4 __fastcall FUN_00c321e0(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x18) + param_2)) {
    return 0xffffff7d;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  return 0;
}


//// FUNCTION FUN_00c32200 @ 00c32200 ////

int __fastcall FUN_00c32200(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int local_28;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar3 = *(int **)(iVar2 + 0x1c);
  iVar4 = piVar3[*(int *)(param_1 + 0x28)];
  bVar9 = (char)piVar3[0x39e] + 1;
  uVar13 = *piVar3 >> (bVar9 & 0x1f);
  iVar14 = piVar3[1] >> (bVar9 & 0x1f);
  if (*(int *)(param_1 + 0x18) < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30) == iVar14) {
    local_28 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        iVar10 = *(int *)(*(int *)(param_1 + 8) + local_28 * 4);
        iVar12 = 0;
        if (3 < iVar14) {
          puVar7 = (undefined4 *)(iVar10 + iVar14 * 4);
          iVar15 = (iVar14 - 4U >> 2) + 1;
          puVar8 = (undefined4 *)(iVar10 + 8);
          iVar12 = iVar15 * 4;
          do {
            uVar1 = puVar8[-2];
            puVar8[-2] = *puVar7;
            *puVar7 = uVar1;
            uVar1 = puVar8[-1];
            puVar8[-1] = puVar7[1];
            puVar7[1] = uVar1;
            uVar1 = *puVar8;
            *puVar8 = puVar7[2];
            puVar7[2] = uVar1;
            uVar1 = puVar8[1];
            puVar8[1] = puVar7[3];
            puVar7[3] = uVar1;
            puVar7 = puVar7 + 4;
            puVar8 = puVar8 + 4;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        if (iVar12 < iVar14) {
          puVar8 = (undefined4 *)(iVar10 + (iVar12 + iVar14) * 4);
          do {
            uVar1 = *(undefined4 *)(iVar10 + iVar12 * 4);
            *(undefined4 *)(iVar10 + iVar12 * 4) = *puVar8;
            *puVar8 = uVar1;
            iVar12 = iVar12 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar12 < iVar14);
        }
        local_28 = local_28 + 1;
      } while (local_28 < *(int *)(iVar2 + 4));
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - iVar14;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar14;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(uint *)(param_1 + 0x28) ^ *(uint *)(param_1 + 0x24)) == 1) {
    local_28 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      iVar10 = ((int)(iVar14 - uVar13) / 2) * 4;
      uVar6 = (int)(iVar14 + uVar13) / 2;
      iVar12 = uVar6 - 1;
      do {
        iVar5 = *(int *)(*(int *)(param_1 + 8) + local_28 * 4);
        iVar15 = iVar5 + iVar10;
        iVar11 = iVar12;
        if (3 < (int)uVar6) {
          puVar8 = (undefined4 *)(iVar15 + -4 + iVar12 * 4);
          uVar16 = uVar6 >> 2;
          puVar7 = (undefined4 *)(iVar5 + -0xc + iVar12 * 4);
          iVar11 = iVar12 + uVar16 * -4;
          do {
            puVar8[1] = puVar7[3];
            *puVar8 = *(undefined4 *)((iVar5 - iVar15) + (int)puVar8);
            puVar8[-1] = puVar7[1];
            puVar8[-2] = *puVar7;
            puVar8 = puVar8 + -4;
            puVar7 = puVar7 + -4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        if (-1 < iVar11) {
          iVar15 = iVar5 + iVar10;
          puVar8 = (undefined4 *)(iVar15 + iVar11 * 4);
          iVar11 = iVar11 + 1;
          do {
            *puVar8 = *(undefined4 *)((int)puVar8 + (iVar5 - iVar15));
            puVar8 = puVar8 + -1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        local_28 = local_28 + 1;
      } while (local_28 < *(int *)(iVar2 + 4));
    }
    iVar12 = (int)(iVar14 - uVar13) / 2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar12;
  }
  else {
    if (*(uint *)(param_1 + 0x24) != 0) goto LAB_00c324dc;
    local_28 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        iVar15 = *(int *)(*(int *)(param_1 + 8) + local_28 * 4);
        iVar10 = uVar13 - 1;
        iVar12 = (iVar14 - uVar13) * 4 + iVar15;
        if (3 < (int)uVar13) {
          uVar6 = uVar13 >> 2;
          puVar8 = (undefined4 *)(iVar15 + -0xc + iVar10 * 4);
          puVar7 = (undefined4 *)(iVar12 + -4 + iVar10 * 4);
          iVar10 = iVar10 + uVar6 * -4;
          do {
            puVar7[1] = puVar8[3];
            *puVar7 = *(undefined4 *)((int)puVar7 + (iVar15 - iVar12));
            puVar7[-1] = puVar8[1];
            puVar7[-2] = *puVar8;
            puVar7 = puVar7 + -4;
            puVar8 = puVar8 + -4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (-1 < iVar10) {
          puVar8 = (undefined4 *)(iVar12 + iVar10 * 4);
          iVar10 = iVar10 + 1;
          do {
            *puVar8 = *(undefined4 *)((int)puVar8 + (iVar15 - iVar12));
            puVar8 = puVar8 + -1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        local_28 = local_28 + 1;
      } while (local_28 < *(int *)(iVar2 + 4));
    }
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (iVar14 - uVar13);
    iVar12 = iVar14 - uVar13;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar12;
LAB_00c324dc:
  if (param_2 != (undefined4 *)0x0) {
    iVar12 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        *(int *)(*(int *)(param_1 + 0xc) + iVar12 * 4) =
             *(int *)(*(int *)(param_1 + 8) + iVar12 * 4) + *(int *)(param_1 + 0x18) * 4;
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(iVar2 + 4));
    }
    *param_2 = *(undefined4 *)(param_1 + 0xc);
  }
  return (iVar14 - *(int *)(param_1 + 0x18)) + (iVar4 >> (bVar9 & 0x1f));
}


//// FUNCTION FUN_00c32530 @ 00c32530 ////

undefined * __fastcall FUN_00c32530(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 4 + param_2 * 4);
  if (iVar1 + -1 < 0) {
    return (undefined *)0x0;
  }
  puVar2 = FUN_00c618b0(iVar1 - *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 0xe78));
  return puVar2;
}


//// FUNCTION ogg_page_version @ 00c32560 ////

undefined1 __fastcall ogg_page_version(int *param_1)

{
  return *(undefined1 *)(*param_1 + 4);
}


//// FUNCTION ogg_page_continued @ 00c32570 ////

byte __fastcall ogg_page_continued(int *param_1)

{
  return *(byte *)(*param_1 + 5) & 1;
}


//// FUNCTION ogg_page_bos @ 00c32580 ////

byte __fastcall ogg_page_bos(int *param_1)

{
  return *(byte *)(*param_1 + 5) & 2;
}


//// FUNCTION ogg_page_eos @ 00c32590 ////

byte __fastcall ogg_page_eos(int *param_1)

{
  return *(byte *)(*param_1 + 5) & 4;
}


//// FUNCTION ogg_page_granulepos @ 00c325a0 ////

undefined8 __fastcall ogg_page_granulepos(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 10);
  return CONCAT44((((uint)*(byte *)(iVar1 + 0xd) << 8 | (uVar2 & 0xffffff) >> 0x10) << 8 |
                  (uVar2 & 0xffff) >> 8) << 8 | (uint)*(byte *)(iVar1 + 10),
                  *(undefined4 *)(iVar1 + 6));
}


//// FUNCTION ogg_page_serialno @ 00c32630 ////

undefined4 __fastcall ogg_page_serialno(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0xe);
}


//// FUNCTION ogg_page_pageno @ 00c32650 ////

undefined4 __fastcall ogg_page_pageno(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x12);
}


//// FUNCTION ogg_stream_init @ 00c32690 ////

undefined4 __fastcall ogg_stream_init(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = param_1;
    for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    param_1[1] = 0x4000;
    pvVar1 = _malloc(0x4000);
    *param_1 = pvVar1;
    param_1[6] = 0x400;
    pvVar1 = _malloc(0x1000);
    param_1[4] = pvVar1;
    pvVar1 = _malloc(param_1[6] << 3);
    param_1[5] = pvVar1;
    param_1[0x54] = param_2;
    return 0;
  }
  return 0xffffffff;
}


//// FUNCTION ogg_stream_clear @ 00c32700 ////

undefined4 __fastcall ogg_stream_clear(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*param_1);
    }
    if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[4]);
    }
    if ((void *)param_1[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[5]);
    }
    for (iVar1 = 0x5a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return 0;
}


//// FUNCTION ogg_stream_destroy @ 00c32750 ////

undefined4 __fastcall ogg_stream_destroy(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    ogg_stream_clear(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return 0;
}


//// FUNCTION ogg__os_body_expand @ 00c32770 ////

void __fastcall ogg__os_body_expand(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *unaff_ESI;
  
  if ((int)unaff_ESI[1] <= unaff_ESI[2] + param_1) {
    puVar1 = (uint *)(unaff_ESI[1] + 0x400 + param_1);
    unaff_ESI[1] = puVar1;
    piVar2 = FUN_00ad58c5((int *)*unaff_ESI,puVar1);
    *unaff_ESI = piVar2;
  }
  return;
}


//// FUNCTION ogg__os_lacing_expand @ 00c327a0 ////

void __fastcall ogg__os_lacing_expand(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x18) <= *(int *)(unaff_ESI + 0x1c) + param_1) {
    iVar1 = *(int *)(unaff_ESI + 0x18) + 0x20 + param_1;
    *(int *)(unaff_ESI + 0x18) = iVar1;
    piVar2 = FUN_00ad58c5(*(int **)(unaff_ESI + 0x10),(uint *)(iVar1 * 4));
    *(int **)(unaff_ESI + 0x10) = piVar2;
    piVar2 = FUN_00ad58c5(*(int **)(unaff_ESI + 0x14),(uint *)(*(int *)(unaff_ESI + 0x18) << 3));
    *(int **)(unaff_ESI + 0x14) = piVar2;
  }
  return;
}


//// FUNCTION ogg_page_checksum_set @ 00c327e0 ////

void __fastcall ogg_page_checksum_set(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
    *(undefined1 *)(*param_1 + 0x16) = 0;
    *(undefined1 *)(*param_1 + 0x17) = 0;
    *(undefined1 *)(*param_1 + 0x18) = 0;
    *(undefined1 *)(*param_1 + 0x19) = 0;
    uVar1 = 0;
    if (0 < param_1[1]) {
      do {
        uVar1 = uVar1 << 8 ^
                *(uint *)(&DAT_00ea7b68 + ((uint)*(byte *)(*param_1 + iVar2) ^ uVar1 >> 0x18) * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[1]);
    }
    iVar2 = 0;
    if (0 < param_1[3]) {
      do {
        uVar1 = uVar1 << 8 ^
                *(uint *)(&DAT_00ea7b68 + ((uint)*(byte *)(param_1[2] + iVar2) ^ uVar1 >> 0x18) * 4)
        ;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[3]);
    }
    *(char *)(*param_1 + 0x16) = (char)uVar1;
    *(char *)(*param_1 + 0x17) = (char)(uVar1 >> 8);
    *(char *)(*param_1 + 0x18) = (char)(uVar1 >> 0x10);
    *(char *)(*param_1 + 0x19) = (char)(uVar1 >> 0x18);
  }
  return;
}


//// FUNCTION ogg_stream_packetin @ 00c32890 ////

undefined4 __fastcall ogg_stream_packetin(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  size_t _Size;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar3 = (int)param_2[1] / 0xff;
  iVar6 = param_1[3];
  if (iVar6 != 0) {
    _Size = param_1[2] - iVar6;
    param_1[2] = _Size;
    if (_Size != 0) {
      _memmove((void *)*param_1,(void *)(*param_1 + iVar6),_Size);
    }
    param_1[3] = 0;
  }
  ogg__os_body_expand(param_2[1]);
  ogg__os_lacing_expand(iVar3 + 1);
  uVar5 = param_2[1];
  puVar8 = (undefined4 *)*param_2;
  puVar9 = (undefined4 *)(param_1[2] + *param_1);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  iVar6 = 0;
  param_1[2] = param_1[2] + param_2[1];
  if (0 < iVar3) {
    do {
      *(undefined4 *)(param_1[4] + (param_1[7] + iVar6) * 4) = 0xff;
      iVar2 = param_1[5];
      iVar7 = param_1[7] + iVar6;
      *(int *)(iVar2 + iVar7 * 8) = param_1[0x58];
      iVar6 = iVar6 + 1;
      *(int *)(iVar2 + 4 + iVar7 * 8) = param_1[0x59];
    } while (iVar6 < iVar3);
  }
  *(int *)(param_1[4] + (param_1[7] + iVar6) * 4) = (int)param_2[1] % 0xff;
  iVar2 = param_1[7];
  iVar7 = param_1[5];
  *(undefined4 *)(iVar7 + (iVar2 + iVar6) * 8) = param_2[4];
  *(undefined4 *)(iVar7 + 4 + (iVar2 + iVar6) * 8) = param_2[5];
  iVar6 = iVar6 + param_1[7];
  param_1[0x58] = *(int *)(param_1[5] + iVar6 * 8);
  puVar1 = (uint *)(param_1[4] + param_1[7] * 4);
  param_1[0x59] = *(int *)(param_1[5] + 4 + iVar6 * 8);
  *puVar1 = *puVar1 | 0x100;
  uVar5 = param_1[0x56];
  param_1[0x56] = uVar5 + 1;
  param_1[7] = param_1[7] + iVar3 + 1;
  param_1[0x57] = param_1[0x57] + (uint)(0xfffffffe < uVar5);
  if (param_2[3] != 0) {
    param_1[0x52] = 1;
  }
  return 0;
}


//// FUNCTION ogg_stream_flush @ 00c329f0 ////

undefined4 __fastcall ogg_stream_flush(int *param_1,int *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int local_c;
  int local_8;
  
  iVar8 = param_1[7];
  if (0xff < iVar8) {
    iVar8 = 0xff;
  }
  puVar5 = (undefined4 *)param_1[5];
  uVar3 = *puVar5;
  uVar2 = (undefined1)uVar3;
  iVar6 = puVar5[1];
  iVar7 = 0;
  local_8 = 0;
  local_c = 0;
  if (iVar8 == 0) {
    return 0;
  }
  if (param_1[0x53] == 0) {
    uVar2 = 0;
    iVar6 = 0;
    if (0 < iVar8) {
      puVar4 = (uint *)param_1[4];
      do {
        iVar7 = iVar7 + 1;
        if ((*puVar4 & 0xff) < 0xff) break;
        puVar4 = puVar4 + 1;
      } while (iVar7 < iVar8);
    }
  }
  else {
    iVar7 = 0;
    if (0 < iVar8) {
      do {
        uVar2 = (undefined1)uVar3;
        if (0x1000 < local_c) break;
        local_c = local_c + (*(uint *)(param_1[4] + iVar7 * 4) & 0xff);
        iVar6 = puVar5[1];
        uVar3 = *puVar5;
        uVar2 = (undefined1)uVar3;
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 2;
      } while (iVar7 < iVar8);
    }
  }
  param_1[10] = 0x5367674f;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  if ((*(byte *)(param_1[4] + 1) & 1) == 0) {
    *(undefined1 *)((int)param_1 + 0x2d) = 1;
  }
  if (param_1[0x53] == 0) {
    *(byte *)((int)param_1 + 0x2d) = *(byte *)((int)param_1 + 0x2d) | 2;
  }
  if ((param_1[0x52] != 0) && (param_1[7] == iVar7)) {
    *(byte *)((int)param_1 + 0x2d) = *(byte *)((int)param_1 + 0x2d) | 4;
  }
  param_1[0x53] = 1;
  *(undefined1 *)((int)param_1 + 0x2e) = uVar2;
  uVar9 = __allshr(8,iVar6);
  *(char *)((int)param_1 + 0x2f) = (char)uVar9;
  uVar9 = __allshr(8,(int)((ulonglong)uVar9 >> 0x20));
  *(char *)(param_1 + 0xc) = (char)uVar9;
  uVar9 = __allshr(8,(int)((ulonglong)uVar9 >> 0x20));
  *(char *)((int)param_1 + 0x31) = (char)uVar9;
  uVar9 = __allshr(8,(int)((ulonglong)uVar9 >> 0x20));
  *(char *)((int)param_1 + 0x32) = (char)uVar9;
  uVar9 = __allshr(8,(int)((ulonglong)uVar9 >> 0x20));
  *(char *)((int)param_1 + 0x33) = (char)uVar9;
  uVar9 = __allshr(8,(int)((ulonglong)uVar9 >> 0x20));
  *(char *)(param_1 + 0xd) = (char)uVar9;
  uVar9 = __allshr(8,(int)((ulonglong)uVar9 >> 0x20));
  *(char *)((int)param_1 + 0x35) = (char)uVar9;
  iVar8 = param_1[0x54];
  *(char *)((int)param_1 + 0x36) = (char)iVar8;
  *(char *)((int)param_1 + 0x37) = (char)((uint)iVar8 >> 8);
  *(char *)(param_1 + 0xe) = (char)((uint)iVar8 >> 0x10);
  *(char *)((int)param_1 + 0x39) = (char)((uint)iVar8 >> 0x18);
  if (param_1[0x55] == -1) {
    param_1[0x55] = 0;
  }
  iVar8 = param_1[0x55];
  param_1[0x55] = iVar8 + 1;
  *(char *)((int)param_1 + 0x3a) = (char)iVar8;
  *(char *)((int)param_1 + 0x3b) = (char)((uint)iVar8 >> 8);
  *(char *)(param_1 + 0xf) = (char)((uint)iVar8 >> 0x10);
  *(char *)((int)param_1 + 0x3d) = (char)((uint)iVar8 >> 0x18);
  iVar8 = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  *(undefined1 *)((int)param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  *(char *)((int)param_1 + 0x42) = (char)iVar7;
  if (0 < iVar7) {
    do {
      bVar1 = *(byte *)(param_1[4] + iVar8 * 4);
      *(byte *)((int)param_1 + iVar8 + 0x43) = bVar1;
      local_8 = local_8 + (uint)bVar1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  *param_2 = (int)(param_1 + 10);
  param_1[0x51] = iVar7 + 0x1b;
  param_2[1] = iVar7 + 0x1b;
  param_2[2] = param_1[3] + *param_1;
  param_2[3] = local_8;
  iVar8 = param_1[7];
  param_1[7] = iVar8 - iVar7;
  _memmove((void *)param_1[4],(void *)(param_1[4] + iVar7 * 4),(iVar8 - iVar7) * 4);
  _memmove((void *)param_1[5],(void *)(param_1[5] + iVar7 * 8),param_1[7] << 3);
  param_1[3] = param_1[3] + local_8;
  ogg_page_checksum_set(param_2);
  return 1;
}


//// FUNCTION ogg_stream_pageout @ 00c32c20 ////

undefined4 __fastcall ogg_stream_pageout(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((((param_1[0x52] == 0) || (param_1[7] == 0)) && (param_1[2] - param_1[3] < 0x1001)) &&
     ((param_1[7] < 0xff && ((param_1[7] == 0 || (param_1[0x53] != 0)))))) {
    return 0;
  }
  uVar1 = ogg_stream_flush(param_1,param_2);
  return uVar1;
}


//// FUNCTION ogg_sync_init @ 00c32c70 ////

void __fastcall ogg_sync_init(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return;
}


//// FUNCTION ogg_sync_clear @ 00c32c90 ////

undefined4 __fastcall ogg_sync_clear(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*param_1);
    }
    ogg_sync_init(param_1);
  }
  return 0;
}


//// FUNCTION ogg_sync_destroy @ 00c32cc0 ////

undefined4 __fastcall ogg_sync_destroy(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    ogg_sync_clear(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return 0;
}


//// FUNCTION ogg_sync_buffer @ 00c32ce0 ////

int __fastcall ogg_sync_buffer(int *param_1,int param_2)

{
  uint *_Size;
  int iVar1;
  int *piVar2;
  void *pvVar3;
  size_t _Size_00;
  
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    _Size_00 = param_1[2] - iVar1;
    param_1[2] = _Size_00;
    if (0 < (int)_Size_00) {
      _memmove((void *)*param_1,(void *)(iVar1 + *param_1),_Size_00);
    }
    param_1[3] = 0;
  }
  if (param_1[1] - param_1[2] < param_2) {
    _Size = (uint *)(param_1[2] + 0x1000 + param_2);
    if ((int *)*param_1 != (int *)0x0) {
      piVar2 = FUN_00ad58c5((int *)*param_1,_Size);
      param_1[1] = (int)_Size;
      *param_1 = (int)piVar2;
      return (int)piVar2 + param_1[2];
    }
    pvVar3 = _malloc((size_t)_Size);
    *param_1 = (int)pvVar3;
    param_1[1] = (int)_Size;
  }
  return *param_1 + param_1[2];
}


//// FUNCTION ogg_sync_wrote @ 00c32d60 ////

undefined4 __fastcall ogg_sync_wrote(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + param_2;
  if (*(int *)(param_1 + 4) < iVar1) {
    return 0xffffffff;
  }
  *(int *)(param_1 + 8) = iVar1;
  return 0;
}


//// FUNCTION ogg_sync_pageseek @ 00c32d80 ////

int __fastcall ogg_sync_pageseek(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int *local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar5 = (int *)(*param_1 + param_1[3]);
  iVar4 = param_1[2] - param_1[3];
  if (param_1[5] == 0) {
    if (iVar4 < 0x1b) {
      return 0;
    }
    if (*piVar5 != 0x5367674f) goto LAB_00c32e3b;
    iVar1 = *(byte *)((int)piVar5 + 0x1a) + 0x1b;
    iVar2 = 0;
    if (iVar4 < iVar1) {
      return 0;
    }
    if (*(byte *)((int)piVar5 + 0x1a) != 0) {
      do {
        param_1[6] = param_1[6] + (uint)*(byte *)((int)piVar5 + iVar2 + 0x1b);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(byte *)((int)piVar5 + 0x1a));
    }
    param_1[5] = iVar1;
  }
  if (iVar4 < param_1[5] + param_1[6]) {
    return 0;
  }
  iVar1 = *(int *)((int)piVar5 + 0x16);
  *(undefined4 *)((int)piVar5 + 0x16) = 0;
  local_c = param_1[5];
  local_4 = param_1[6];
  local_8 = local_c + (int)piVar5;
  local_10 = piVar5;
  ogg_page_checksum_set((int *)&local_10);
  if (iVar1 == *(int *)((int)piVar5 + 0x16)) {
    iVar4 = *param_1;
    iVar1 = param_1[3];
    if (param_2 != (int *)0x0) {
      *param_2 = iVar4 + iVar1;
      param_2[1] = param_1[5];
      param_2[2] = param_1[5] + iVar4 + iVar1;
      param_2[3] = param_1[6];
    }
    iVar4 = param_1[5];
    iVar1 = param_1[6];
    param_1[4] = 0;
    param_1[3] = param_1[3] + iVar4 + iVar1;
    param_1[5] = 0;
    param_1[6] = 0;
    return iVar4 + iVar1;
  }
  *(int *)((int)piVar5 + 0x16) = iVar1;
LAB_00c32e3b:
  param_1[5] = 0;
  param_1[6] = 0;
  pvVar3 = _memchr((void *)((int)piVar5 + 1),0x4f,iVar4 - 1);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)(param_1[2] + *param_1);
  }
  param_1[3] = (int)pvVar3 - *param_1;
  return (int)piVar5 - (int)pvVar3;
}


//// FUNCTION ogg_stream_pagein @ 00c32f00 ////

undefined4 __fastcall ogg_stream_pagein(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  size_t _Size;
  uint *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined4 *local_2c;
  uint local_28;
  int local_20;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *param_2;
  local_2c = (undefined4 *)param_2[2];
  local_28 = param_2[3];
  iVar12 = 0;
  uVar2 = ogg_page_version(param_2);
  bVar3 = ogg_page_continued(extraout_ECX);
  bVar4 = ogg_page_bos(extraout_ECX_00);
  local_20 = CONCAT31(extraout_var_01,bVar4);
  bVar4 = ogg_page_eos(extraout_ECX_01);
  uVar14 = ogg_page_granulepos(extraout_ECX_02);
  iVar5 = ogg_page_serialno(param_2);
  iVar6 = ogg_page_pageno(param_2);
  iVar11 = param_1[9];
  uVar7 = (uint)*(byte *)(iVar1 + 0x1a);
  iVar8 = param_1[3];
  if (iVar8 != 0) {
    _Size = param_1[2] - iVar8;
    param_1[2] = _Size;
    if (_Size != 0) {
      _memmove((void *)*param_1,(void *)(*param_1 + iVar8),_Size);
    }
    param_1[3] = 0;
  }
  if (iVar11 != 0) {
    if (param_1[7] - iVar11 != 0) {
      _memmove((void *)param_1[4],(void *)(param_1[4] + iVar11 * 4),(param_1[7] - iVar11) * 4);
      _memmove((void *)param_1[5],(void *)(param_1[5] + iVar11 * 8),(param_1[7] - iVar11) * 8);
    }
    param_1[7] = param_1[7] - iVar11;
    param_1[8] = param_1[8] - iVar11;
    param_1[9] = 0;
  }
  if ((iVar5 != param_1[0x54]) || (0 < CONCAT31(extraout_var,uVar2))) {
    return 0xffffffff;
  }
  ogg__os_lacing_expand(uVar7 + 1);
  if (iVar6 != param_1[0x55]) {
    iVar11 = param_1[8];
    if (iVar11 < param_1[7]) {
      puVar10 = (uint *)(param_1[4] + iVar11 * 4);
      iVar8 = iVar11;
      do {
        param_1[2] = param_1[2] - (*puVar10 & 0xff);
        iVar8 = iVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar8 < param_1[7]);
    }
    param_1[7] = iVar11;
    if (param_1[0x55] != -1) {
      *(undefined4 *)(param_1[4] + iVar11 * 4) = 0x400;
      param_1[7] = param_1[7] + 1;
      param_1[8] = param_1[8] + 1;
    }
    if ((CONCAT31(extraout_var_00,bVar3) != 0) && (local_20 = 0, uVar7 != 0)) {
      do {
        uVar9 = (uint)*(byte *)(iVar1 + 0x1b + iVar12);
        local_2c = (undefined4 *)((int)local_2c + uVar9);
        local_28 = local_28 - uVar9;
        iVar12 = iVar12 + 1;
        if (uVar9 < 0xff) break;
      } while (iVar12 < (int)uVar7);
    }
  }
  if (local_28 != 0) {
    ogg__os_body_expand(local_28);
    puVar13 = (undefined4 *)(param_1[2] + *param_1);
    for (uVar9 = local_28 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar13 = *local_2c;
      local_2c = local_2c + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar9 = local_28 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)local_2c;
      local_2c = (undefined4 *)((int)local_2c + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    param_1[2] = param_1[2] + local_28;
  }
  iVar11 = -1;
  if (iVar12 < (int)uVar7) {
    do {
      uVar9 = (uint)*(byte *)(iVar1 + 0x1b + iVar12);
      *(uint *)(param_1[4] + param_1[7] * 4) = uVar9;
      iVar8 = param_1[7];
      iVar5 = param_1[5];
      *(undefined4 *)(iVar5 + iVar8 * 8) = 0xffffffff;
      *(undefined4 *)(iVar5 + 4 + iVar8 * 8) = 0xffffffff;
      if (local_20 != 0) {
        puVar10 = (uint *)(param_1[4] + param_1[7] * 4);
        *puVar10 = *puVar10 | 0x100;
        local_20 = 0;
      }
      if (uVar9 < 0xff) {
        iVar11 = param_1[7];
      }
      iVar8 = param_1[7];
      iVar12 = iVar12 + 1;
      param_1[7] = iVar8 + 1;
      if (uVar9 < 0xff) {
        param_1[8] = iVar8 + 1;
      }
    } while (iVar12 < (int)uVar7);
    if (iVar11 != -1) {
      iVar1 = param_1[5];
      local_8 = (undefined4)uVar14;
      *(undefined4 *)(iVar1 + iVar11 * 8) = local_8;
      local_4 = (undefined4)((ulonglong)uVar14 >> 0x20);
      *(undefined4 *)(iVar1 + 4 + iVar11 * 8) = local_4;
    }
  }
  if (CONCAT31(extraout_var_02,bVar4) != 0) {
    iVar1 = param_1[7];
    param_1[0x52] = 1;
    if (0 < iVar1) {
      *(uint *)(param_1[4] + -4 + iVar1 * 4) = *(uint *)(param_1[4] + -4 + iVar1 * 4) | 0x200;
    }
  }
  param_1[0x55] = iVar6 + 1;
  return 0;
}


//// FUNCTION ogg_sync_reset @ 00c331c0 ////

void __fastcall ogg_sync_reset(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


//// FUNCTION ogg_stream_reset @ 00c331e0 ////

void __fastcall ogg_stream_reset(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  return;
}


//// FUNCTION ogg_stream_reset_serialno @ 00c33230 ////

undefined4 __fastcall ogg_stream_reset_serialno(int param_1)

{
  int extraout_ECX;
  undefined4 extraout_EDX;
  
  ogg_stream_reset(param_1);
  *(undefined4 *)(extraout_ECX + 0x150) = extraout_EDX;
  return 0;
}


//// FUNCTION ogg__packetout @ 00c33240 ////

undefined4 __thiscall ogg__packetout(void *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *in_EAX;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint local_8;
  
  iVar5 = in_EAX[9];
  if (in_EAX[8] <= iVar5) {
    return 0;
  }
  puVar6 = (uint *)(in_EAX[4] + iVar5 * 4);
  if ((*puVar6 & 0x400) != 0) {
    uVar2 = in_EAX[0x56];
    in_EAX[9] = iVar5 + 1;
    in_EAX[0x56] = uVar2 + 1;
    in_EAX[0x57] = in_EAX[0x57] + (uint)(0xfffffffe < uVar2);
    return 0xffffffff;
  }
  if ((this != (void *)0x0) || (param_1 != 0)) {
    uVar2 = *puVar6;
    uVar7 = uVar2 & 0xff;
    local_8 = uVar2 & 0x200;
    uVar4 = uVar7;
    while (uVar4 == 0xff) {
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + 1;
      uVar4 = *puVar1 & 0xff;
      if ((*puVar1 & 0x200) != 0) {
        local_8 = 0x200;
      }
      uVar7 = uVar7 + uVar4;
    }
    if (this != (void *)0x0) {
      *(uint *)((int)this + 0xc) = local_8;
      *(uint *)((int)this + 8) = uVar2 & 0x100;
      *(int *)this = in_EAX[3] + *in_EAX;
      *(int *)((int)this + 0x18) = in_EAX[0x56];
      *(int *)((int)this + 0x1c) = in_EAX[0x57];
      iVar3 = in_EAX[5];
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar3 + iVar5 * 8);
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(iVar3 + 4 + iVar5 * 8);
      *(uint *)((int)this + 4) = uVar7;
    }
    if (param_1 != 0) {
      uVar2 = in_EAX[0x56];
      in_EAX[3] = in_EAX[3] + uVar7;
      in_EAX[9] = iVar5 + 1;
      in_EAX[0x56] = uVar2 + 1;
      in_EAX[0x57] = in_EAX[0x57] + (uint)(0xfffffffe < uVar2);
    }
  }
  return 1;
}


//// FUNCTION ogg_stream_packetout @ 00c33380 ////

void __fastcall ogg_stream_packetout(undefined4 param_1,void *param_2)

{
  ogg__packetout(param_2,1);
  return;
}


//// FUNCTION ogg_stream_packetpeek @ 00c33390 ////

void __fastcall ogg_stream_packetpeek(undefined4 param_1,void *param_2)

{
  ogg__packetout(param_2,0);
  return;
}


//// FUNCTION FUN_00c333a0 @ 00c333a0 ////

void __fastcall FUN_00c333a0(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00c333d0 @ 00c333d0 ////

undefined4 __fastcall FUN_00c333d0(undefined4 param_1,int param_2,int param_3)

{
  int *in_EAX;
  
  return *(undefined4 *)(*in_EAX + (in_EAX[4] * param_3 + param_2) * 4);
}


//// FUNCTION FUN_00c333f0 @ 00c333f0 ////

int __fastcall FUN_00c333f0(int param_1)

{
  return param_1 / 0xff + 1 + param_1;
}


//// FUNCTION FUN_00c33410 @ 00c33410 ////

int FUN_00c33410(int param_1,double param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  int unaff_ESI;
  undefined2 unaff_DI;
  ulonglong uVar6;
  
  FUN_00acf400(*(double *)(unaff_ESI + 0x58) + 0.5,unaff_DI);
  uVar6 = FUN_00acd42c();
  iVar4 = (int)uVar6;
  dVar2 = (double)*(int *)(unaff_ESI + 0x24);
  piVar5 = (int *)(*(int *)(unaff_ESI + 0x14) + iVar4 * 4);
  if (*(int *)(unaff_ESI + 0x24) < 0) {
    dVar2 = dVar2 + 4294967296.0;
  }
  iVar1 = *piVar5;
  for (; (dVar3 = ((double)(iVar1 << 3) / dVar2) * (double)*(int *)(param_1 + 8), param_2 < dVar3 &&
         (0 < iVar4)); iVar4 = iVar4 + -1) {
    iVar1 = piVar5[-1];
    piVar5 = piVar5 + -1;
  }
  if ((iVar4 + 1 < *(int *)(unaff_ESI + 0x10)) &&
     (ABS(((double)(*(int *)(*(int *)(unaff_ESI + 0x14) + 4 + iVar4 * 4) << 3) / dVar2) *
          (double)*(int *)(param_1 + 8) - param_2) < ABS(dVar3 - param_2))) {
    return iVar4 + 1;
  }
  return iVar4;
}


//// FUNCTION Array_LinearSearch @ 00c334f0 ////

void Array_LinearSearch(int param_1)

{
  int iVar1;
  int unaff_EBX;
  int *local_10;
  
  iVar1 = *(int *)(unaff_EBX + 0x3c);
  if (0 < iVar1) {
    local_10 = (int *)(*(int *)(unaff_EBX + 0x38) + iVar1 * 4);
    do {
      local_10 = local_10 + -1;
      iVar1 = iVar1 + -1;
      if (*local_10 <= param_1) {
        return;
      }
    } while (0 < iVar1);
  }
  return;
}


//// FUNCTION FUN_00c335b0 @ 00c335b0 ////

void __fastcall FUN_00c335b0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  size_t _NumOfElements;
  ulonglong uVar8;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  puVar7 = param_2;
  for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if ((double *)(piVar1 + 0x348) != (double *)0x0) {
    uVar8 = FUN_00acd42c();
    param_2[10] = (int)uVar8;
    uVar8 = FUN_00acd42c();
    param_2[0xb] = (int)uVar8;
    uVar8 = FUN_00acd42c();
    uVar3 = (uint)uVar8;
    uVar6 = param_2[10] - param_2[0xb];
    param_2[0x13] = uVar3;
    if (uVar3 < uVar6) {
      uVar3 = uVar6;
    }
    iVar5 = param_2[0xb] + uVar3;
    if ((iVar5 < 1) ||
       ((((*(double *)(piVar1 + 0x352) <= 0.0 && (*(double *)(piVar1 + 0x354) <= 0.0)) &&
         (*(double *)(piVar1 + 0x350) <= 0.0)) && (*(double *)(piVar1 + 0x34e) <= 0.0)))) {
      pvVar4 = _calloc(1,0x14);
      param_2[0x18] = pvVar4;
      pvVar4 = _calloc(1,0x20);
      param_2[0x19] = pvVar4;
      oggpack_writeinit((undefined4 *)param_2[0x18]);
      return;
    }
    iVar2 = *piVar1;
    param_2[4] = 0xf;
    _NumOfElements = iVar5 / (iVar2 >> 1) + 3;
    param_2[2] = _NumOfElements;
    pvVar4 = _calloc(_NumOfElements,0x3c);
    *param_2 = pvVar4;
    pvVar4 = _calloc(_NumOfElements,4);
    param_2[1] = pvVar4;
    if (((*(double *)(piVar1 + 0x352) <= 0.0) && (*(double *)(piVar1 + 0x354) <= 0.0)) ||
       (*(double *)(piVar1 + 0x348) <= 0.0)) {
      param_2[7] = 0xffffffff;
    }
    else {
      pvVar4 = _calloc(0xf,4);
      *(undefined8 *)(param_2 + 0x16) = 0x401c000000000000;
      param_2[5] = pvVar4;
    }
    if (((*(double *)(piVar1 + 0x34e) <= 0.0) && (*(double *)(piVar1 + 0x350) <= 0.0)) ||
       (*(double *)(piVar1 + 0x34c) <= 0.0)) {
      param_2[0x11] = 0xffffffff;
    }
    else {
      pvVar4 = _calloc(0x3a2,4);
      param_2[0xc] = pvVar4;
      pvVar4 = _calloc(0x1f,4);
      param_2[0xd] = pvVar4;
      pvVar4 = _calloc(0x1f,4);
      param_2[0xe] = pvVar4;
    }
    pvVar4 = _calloc(_NumOfElements,0x14);
    param_2[0x18] = pvVar4;
    pvVar4 = _calloc(_NumOfElements,0x20);
    param_2[0x19] = pvVar4;
    if (0 < (int)_NumOfElements) {
      iVar5 = 0;
      do {
        oggpack_writeinit((undefined4 *)(param_2[0x18] + iVar5));
        iVar5 = iVar5 + 0x14;
        _NumOfElements = _NumOfElements - 1;
      } while (_NumOfElements != 0);
    }
  }
  return;
}


//// FUNCTION FUN_00c337b0 @ 00c337b0 ////

void __fastcall FUN_00c337b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*param_1);
    }
    if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[1]);
    }
    if ((void *)param_1[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[5]);
    }
    if ((void *)param_1[0xc] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0xc]);
    }
    if ((void *)param_1[0xd] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0xd]);
    }
    if ((void *)param_1[0xe] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0xe]);
    }
    if (param_1[0x18] != 0) {
      if (param_1[2] == 0) {
        oggpack_writeclear(param_1[0x18]);
      }
      else {
        iVar2 = 0;
        if (0 < (int)param_1[2]) {
          iVar1 = 0;
          do {
            oggpack_writeclear(param_1[0x18] + iVar1);
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + 0x14;
          } while (iVar2 < (int)param_1[2]);
        }
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x18]);
    }
    if ((void *)param_1[0x19] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x19]);
    }
    for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00c33880 @ 00c33880 ////

bool __fastcall FUN_00c33880(int param_1)

{
  return *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x68) + 0x50) != 0;
}


//// FUNCTION FUN_00c338a0 @ 00c338a0 ////

undefined4 __fastcall FUN_00c338a0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined4 unaff_EDI;
  uint uVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  undefined2 uVar25;
  int local_5c;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_40;
  int local_3c;
  
  iVar13 = *(int *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x68);
  iVar16 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  iVar4 = *(int *)(iVar16 + 0x1c);
  uVar5 = *(uint *)(iVar3 + 0x60);
  local_5c = *(int *)(iVar3 + 0x5c);
  iVar14 = *(int *)(iVar3 + 0x50);
  local_40 = local_5c + 1;
  if (iVar14 == 0) {
    if (local_5c == 0) {
      piVar15 = (int *)(param_1 + 4);
      *(undefined4 *)(iVar3 + 0x5c) = 1;
      uVar12 = GetField_8_00c55620((int)piVar15);
      **(undefined4 **)(iVar3 + 0xb4) = uVar12;
      iVar13 = oggpack_bytes(piVar15);
      *(int *)(*(int *)(iVar3 + 0xb4) + 4) = iVar13;
      *(undefined4 *)(*(int *)(iVar3 + 0xb4) + 8) = 0;
      *(undefined4 *)(*(int *)(iVar3 + 0xb4) + 0xc) = *(undefined4 *)(param_1 + 0x2c);
      iVar13 = *(int *)(iVar3 + 0xb4);
      *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(iVar13 + 0x14) = *(undefined4 *)(param_1 + 0x34);
      iVar13 = *(int *)(iVar3 + 0xb4);
      *(undefined4 *)(iVar13 + 0x18) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(iVar13 + 0x1c) = *(undefined4 *)(param_1 + 0x3c);
      piVar6 = *(int **)(iVar3 + 0xb0);
      iVar13 = *piVar6;
      iVar2 = piVar6[1];
      iVar3 = piVar6[2];
      iVar16 = piVar6[3];
      iVar4 = piVar6[4];
      *piVar6 = *piVar15;
      piVar6[1] = *(int *)(param_1 + 8);
      piVar6[2] = *(int *)(param_1 + 0xc);
      piVar6[3] = *(int *)(param_1 + 0x10);
      piVar6[4] = *(int *)(param_1 + 0x14);
      *piVar15 = iVar13;
      *(int *)(param_1 + 8) = iVar2;
      *(int *)(param_1 + 0xc) = iVar3;
      *(int *)(param_1 + 0x10) = iVar16;
      *(int *)(param_1 + 0x14) = iVar4;
      return 0;
    }
  }
  else {
    if (*(int *)(iVar3 + 0x58) <= local_40) {
      local_40 = 0;
    }
    puVar23 = (undefined4 *)(iVar14 + uVar5 * local_5c * 4);
    if ((local_40 != *(int *)(iVar3 + 0x6c)) && (local_40 != *(int *)(iVar3 + 0x94))) {
      *(int *)(iVar3 + 0x5c) = local_40;
      piVar15 = (int *)(param_1 + 4);
      *(uint *)(*(int *)(iVar3 + 0x54) + local_5c * 4) =
           -(uint)(*(int *)(param_1 + 0x1c) != 0) & 0x80000000;
      iVar21 = local_5c * 0x20;
      uVar12 = GetField_8_00c55620((int)piVar15);
      *(undefined4 *)(iVar21 + *(int *)(iVar3 + 0xb4)) = uVar12;
      iVar14 = oggpack_bytes(piVar15);
      uVar25 = (undefined2)unaff_EDI;
      *(int *)(iVar21 + 4 + *(int *)(iVar3 + 0xb4)) = iVar14;
      *(undefined4 *)(iVar21 + 8 + *(int *)(iVar3 + 0xb4)) = 0;
      *(undefined4 *)(iVar21 + 0xc + *(int *)(iVar3 + 0xb4)) = *(undefined4 *)(param_1 + 0x2c);
      iVar14 = *(int *)(iVar3 + 0xb4);
      *(undefined4 *)(iVar21 + 0x10 + iVar14) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(iVar21 + 0x14 + iVar14) = *(undefined4 *)(param_1 + 0x34);
      iVar14 = *(int *)(iVar3 + 0xb4);
      *(undefined4 *)(iVar21 + 0x18 + iVar14) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(iVar21 + 0x1c + iVar14) = *(undefined4 *)(param_1 + 0x3c);
      piVar6 = (int *)(*(int *)(iVar3 + 0xb0) + local_5c * 0x14);
      iVar14 = *piVar6;
      iVar21 = piVar6[1];
      iVar17 = piVar6[2];
      iVar18 = piVar6[3];
      iVar7 = piVar6[4];
      *piVar6 = *piVar15;
      piVar6[1] = *(int *)(param_1 + 8);
      piVar6[2] = *(int *)(param_1 + 0xc);
      piVar6[3] = *(int *)(param_1 + 0x10);
      piVar6[4] = *(int *)(param_1 + 0x14);
      *piVar15 = iVar14;
      *(int *)(param_1 + 8) = iVar21;
      *(int *)(param_1 + 0xc) = iVar17;
      *(int *)(param_1 + 0x10) = iVar18;
      *(int *)(param_1 + 0x14) = iVar7;
      *puVar23 = *(undefined4 *)(iVar13 + 0xc);
      iVar14 = 1;
      piVar15 = (int *)(iVar13 + 0x10);
      do {
        puVar23[iVar14] = *piVar15 - piVar15[-1];
        puVar23[iVar14 + 1] = piVar15[1] - *piVar15;
        iVar14 = iVar14 + 2;
        piVar15 = piVar15 + 2;
      } while (iVar14 < 0xf);
      iVar13 = 0;
      if (*(int *)(iVar3 + 100) == 0) {
        *(uint *)(*(int *)(iVar3 + 0x54) + local_5c * 4) =
             *(uint *)(*(int *)(iVar3 + 0x54) + local_5c * 4) | 7;
        local_54 = local_40;
      }
      else {
        local_5c = *(int *)(iVar3 + 0x68);
        local_50 = *(uint *)(iVar3 + 0x7c);
        if (iVar2 != 0) {
          local_50 = 0;
        }
        if (0 < (int)uVar5) {
          do {
            piVar15 = (int *)(*(int *)(iVar3 + 100) + iVar13 * 4);
            iVar14 = FUN_00c333f0(puVar23[iVar13]);
            uVar25 = (undefined2)unaff_EDI;
            iVar13 = iVar13 + 1;
            *piVar15 = *piVar15 + iVar14;
          } while (iVar13 < (int)uVar5);
        }
        *(int *)(iVar3 + 0x74) =
             *(int *)(iVar3 + 0x74) + (*(int *)(iVar4 + *(int *)(param_1 + 0x1c) * 4) >> 1);
        uVar19 = *(int *)(iVar3 + 0x70) + (*(int *)(iVar4 + *(int *)(param_1 + 0x1c) * 4) >> 1);
        *(uint *)(iVar3 + 0x70) = uVar19;
        local_54 = local_5c;
        if ((*(uint *)(iVar3 + 0x78) < *(uint *)(iVar3 + 0x74)) || (iVar2 != 0)) {
          if (local_50 < uVar19) {
            iVar13 = *(int *)(iVar4 + *(int *)(param_1 + 0x1c) * 4);
            iVar14 = FUN_00c33410(iVar16,*(double *)(iVar4 + 0xd50));
            iVar21 = FUN_00c33410(iVar16,*(double *)(iVar4 + 0xd48));
            dVar8 = 7.5;
            if ((double)iVar14 < 7.5) {
              dVar8 = (double)iVar14;
            }
            if (dVar8 < (double)iVar21) {
              dVar8 = (double)iVar21;
            }
            dVar10 = (double)(iVar13 >> 1);
            dVar11 = (double)*(int *)(iVar16 + 8);
            dVar9 = ((dVar8 - *(double *)(iVar3 + 0xa8)) / dVar10) * dVar11;
            if (dVar9 < *(double *)(iVar4 + 0xd58)) {
              dVar8 = (dVar10 / dVar11) * *(double *)(iVar4 + 0xd58) + *(double *)(iVar3 + 0xa8);
            }
            if (*(double *)(iVar4 + 0xd60) < dVar9) {
              dVar8 = (dVar10 / dVar11) * *(double *)(iVar4 + 0xd60) + *(double *)(iVar3 + 0xa8);
            }
            *(double *)(iVar3 + 0xa8) = dVar8;
            FUN_00acf400(dVar8 + 0.5,uVar25);
            uVar24 = FUN_00acd42c();
            uVar19 = *(uint *)(iVar3 + 0x70);
            while (local_50 < uVar19) {
              puVar1 = (uint *)(*(int *)(iVar3 + 0x54) + *(int *)(iVar3 + 0x68) * 4);
              iVar13 = *(int *)(iVar4 + ((int)*puVar1 >> 0x1f) * -4);
              *puVar1 = *puVar1 | (uint)uVar24;
              *(int *)(iVar3 + 0x70) = *(int *)(iVar3 + 0x70) - (iVar13 >> 1);
              iVar13 = *(int *)(iVar3 + 0x68) + 1;
              *(int *)(iVar3 + 0x68) = iVar13;
              if (*(int *)(iVar3 + 0x58) <= iVar13) {
                *(undefined4 *)(iVar3 + 0x68) = 0;
              }
              uVar19 = *(uint *)(iVar3 + 0x70);
            }
            local_54 = *(int *)(iVar3 + 0x68);
          }
          if (*(uint *)(iVar3 + 0x78) < *(uint *)(iVar3 + 0x74)) {
            do {
              iVar13 = *(int *)(iVar4 + (*(int *)(*(int *)(iVar3 + 0x54) +
                                                 *(int *)(iVar3 + 0x6c) * 4) >> 0x1f) * -4);
              iVar14 = 0;
              if (0 < *(int *)(iVar3 + 0x60)) {
                do {
                  piVar15 = (int *)(*(int *)(iVar3 + 100) + iVar14 * 4);
                  iVar21 = FUN_00c333f0(*(int *)(*(int *)(iVar3 + 0x50) +
                                                (*(int *)(iVar3 + 0x6c) * uVar5 + iVar14) * 4));
                  *piVar15 = *piVar15 - iVar21;
                  iVar14 = iVar14 + 1;
                } while (iVar14 < *(int *)(iVar3 + 0x60));
              }
              iVar14 = *(int *)(iVar3 + 0x6c) + 1;
              *(int *)(iVar3 + 0x74) = *(int *)(iVar3 + 0x74) - (iVar13 >> 1);
              *(int *)(iVar3 + 0x6c) = iVar14;
              if (*(int *)(iVar3 + 0x58) <= iVar14) {
                *(undefined4 *)(iVar3 + 0x6c) = 0;
              }
            } while (*(uint *)(iVar3 + 0x78) < *(uint *)(iVar3 + 0x74));
          }
        }
      }
      if (*(int *)(iVar3 + 0x80) == 0) {
        *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x68);
      }
      else {
        if (iVar2 == 0) {
          local_48 = *(uint *)(iVar3 + 0x9c);
        }
        else {
          local_48 = 0;
        }
        while (local_5c != local_54) {
          uVar19 = *(uint *)(*(int *)(iVar3 + 0x54) + local_5c * 4);
          iVar13 = *(int *)(iVar4 + ((int)uVar19 >> 0x1f) * -4);
          uVar19 = uVar19 & 0x7fffffff;
          uVar22 = 0;
          if (uVar5 != 0) {
            do {
              uVar20 = uVar19;
              if (uVar19 <= uVar22) {
                uVar20 = uVar22;
              }
              piVar15 = (int *)(*(int *)(iVar3 + 0x80) +
                               ((*(int *)(iVar3 + 0x8c) * 2 + 1) * uVar5 + uVar22) * 4);
              iVar14 = FUN_00c333d0(local_5c,uVar20,local_5c);
              iVar14 = FUN_00c333f0(iVar14);
              *piVar15 = *piVar15 + iVar14;
              uVar20 = uVar19;
              if (uVar22 <= uVar19) {
                uVar20 = uVar22;
              }
              piVar15 = (int *)(*(int *)(iVar3 + 0x80) +
                               (uVar22 + *(int *)(iVar3 + 0x8c) * uVar5 * 2) * 4);
              iVar14 = FUN_00c333d0(local_5c,uVar20,local_5c);
              iVar14 = FUN_00c333f0(iVar14);
              uVar22 = uVar22 + 1;
              *piVar15 = *piVar15 + iVar14;
            } while (uVar22 < uVar5);
          }
          *(int *)(*(int *)(iVar3 + 0x84) + *(int *)(iVar3 + 0x8c) * 4) = local_5c;
          *(undefined4 *)(*(int *)(iVar3 + 0x88) + *(int *)(iVar3 + 0x8c) * 4) = 0;
          iVar13 = *(int *)(iVar3 + 0x98) + (iVar13 >> 1);
          *(int *)(iVar3 + 0x98) = iVar13;
          iVar13 = FUN_00c333d0(iVar13,uVar19,local_5c);
          iVar13 = FUN_00c333f0(iVar13);
          local_5c = local_5c + 1;
          *(int *)(iVar3 + 0x90) = *(int *)(iVar3 + 0x90) + iVar13;
          if (*(int *)(iVar3 + 0x58) <= local_5c) {
            local_5c = 0;
          }
        }
        uVar19 = *(uint *)(iVar3 + 0x98);
        if (local_48 < uVar19) {
          dVar8 = (double)(int)uVar19;
          if ((int)uVar19 < 0) {
            dVar8 = dVar8 + 4294967296.0;
          }
          dVar9 = (double)*(int *)(iVar16 + 8);
          local_5c = 0;
          dVar10 = ((double)(*(int *)(iVar3 + 0x90) << 3) / dVar8) * dVar9;
          if (((0.0 < *(double *)(iVar4 + 0xd40)) && (*(double *)(iVar4 + 0xd40) < dVar10)) ||
             ((0.0 < *(double *)(iVar4 + 0xd38) && (dVar10 < *(double *)(iVar4 + 0xd38))))) {
            if ((*(double *)(iVar4 + 0xd40) <= 0.0) || (dVar10 <= *(double *)(iVar4 + 0xd40))) {
              if (dVar10 < *(double *)(iVar4 + 0xd38)) {
                iVar13 = 1;
                local_5c = 1;
                if (1 < (int)(uVar5 - 1)) {
                  do {
                    iVar16 = Array_LinearSearch(iVar13);
                    dVar10 = ((double)(iVar16 << 3) / dVar8) * dVar9;
                    local_5c = iVar13;
                    if (*(double *)(iVar4 + 0xd38) <= dVar10) break;
                    iVar13 = iVar13 + 1;
                    local_5c = iVar13;
                  } while (iVar13 < (int)(uVar5 - 1));
                }
                if (*(double *)(iVar4 + 0xd40) < dVar10) {
                  local_5c = local_5c + -1;
                }
              }
            }
            else {
              iVar13 = -1;
              local_5c = -1;
              if ((int)(1 - uVar5) < -1) {
                do {
                  iVar16 = Array_LinearSearch(iVar13);
                  dVar10 = ((double)(iVar16 << 3) / dVar8) * dVar9;
                  local_5c = iVar13;
                  if (dVar10 < *(double *)(iVar4 + 0xd40) != (dVar10 == *(double *)(iVar4 + 0xd40)))
                  break;
                  iVar13 = iVar13 + -1;
                  local_5c = iVar13;
                } while ((int)(1 - uVar5) < iVar13);
              }
            }
            iVar16 = *(int *)(iVar3 + 0x8c);
            iVar13 = iVar16 + -1;
            if (-1 < iVar13) {
              piVar15 = (int *)(*(int *)(iVar3 + 0x88) + iVar13 * 4);
              do {
                if (*piVar15 < local_5c) break;
                iVar13 = iVar13 + -1;
                piVar15 = piVar15 + -1;
              } while (-1 < iVar13);
            }
            if (iVar13 < iVar16) {
              local_54 = (iVar16 + 1) * uVar5 * 8;
              local_50 = (iVar16 * 2 + 1) * uVar5;
              iVar14 = iVar16 * uVar5 * 8;
              iVar21 = uVar5 * -8;
              local_4c = (local_50 + local_5c) * 4;
              do {
                *(int *)(iVar3 + 0x90) =
                     *(int *)(iVar3 + 0x90) -
                     *(int *)(*(int *)(iVar3 + 0x80) +
                             (*(int *)(*(int *)(iVar3 + 0x88) + iVar16 * 4) + local_50) * 4);
                *(int *)(iVar3 + 0x90) =
                     *(int *)(*(int *)(iVar3 + 0x80) + local_4c) + *(int *)(iVar3 + 0x90);
                if ((iVar16 < *(int *)(iVar3 + 0x8c)) && (iVar17 = uVar5 * 2, 0 < iVar17)) {
                  local_40 = local_54;
                  iVar18 = iVar14;
                  do {
                    piVar15 = (int *)(*(int *)(iVar3 + 0x80) + iVar18);
                    *piVar15 = *piVar15 + *(int *)(*(int *)(iVar3 + 0x80) + local_40);
                    local_40 = local_40 + 4;
                    iVar18 = iVar18 + 4;
                    iVar17 = iVar17 + -1;
                  } while (iVar17 != 0);
                }
                local_4c = local_4c + iVar21;
                local_50 = local_50 + uVar5 * -2;
                iVar16 = iVar16 + -1;
                iVar14 = iVar14 + iVar21;
                local_54 = local_54 + iVar21;
              } while (iVar13 < iVar16);
            }
            *(undefined4 *)(*(int *)(iVar3 + 0x84) + 4 + iVar16 * 4) =
                 *(undefined4 *)(*(int *)(iVar3 + 0x84) + *(int *)(iVar3 + 0x8c) * 4);
            *(int *)(*(int *)(iVar3 + 0x88) + (iVar16 + 1) * 4) = local_5c;
            iVar16 = iVar16 + 2;
            *(int *)(iVar3 + 0x8c) = iVar16;
            puVar23 = (undefined4 *)(*(int *)(iVar3 + 0x80) + iVar16 * uVar5 * 8);
            for (iVar13 = uVar5 * 2; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar23 = 0;
              puVar23 = puVar23 + 1;
            }
            *(undefined4 *)(*(int *)(iVar3 + 0x88) + iVar16 * 4) = 0;
            *(undefined4 *)(*(int *)(iVar3 + 0x84) + iVar16 * 4) = 0xffffffff;
          }
        }
        uVar19 = *(uint *)(iVar3 + 0x98);
        while (local_48 < uVar19) {
          uVar19 = *(uint *)(*(int *)(iVar3 + 0x54) + *(int *)(iVar3 + 0x94) * 4);
          iVar13 = *(int *)(iVar4 + ((int)uVar19 >> 0x1f) * -4);
          uVar19 = uVar19 & 0x7fffffff;
          uVar22 = 0;
          if (0 < (int)uVar5) {
            local_3c = uVar5 * 4;
            do {
              uVar20 = uVar19;
              if ((int)uVar19 <= (int)uVar22) {
                uVar20 = uVar22;
              }
              piVar15 = (int *)(*(int *)(iVar3 + 0x80) + local_3c);
              iVar16 = FUN_00c333d0(*(undefined4 *)(iVar3 + 0x94),uVar20,
                                    *(undefined4 *)(iVar3 + 0x94));
              iVar16 = FUN_00c333f0(iVar16);
              *piVar15 = *piVar15 - iVar16;
              uVar20 = uVar19;
              if ((int)uVar22 <= (int)uVar19) {
                uVar20 = uVar22;
              }
              piVar15 = (int *)(*(int *)(iVar3 + 0x80) + uVar22 * 4);
              iVar16 = FUN_00c333d0(piVar15,uVar20,*(int *)(iVar3 + 0x94));
              iVar16 = FUN_00c333f0(iVar16);
              *piVar15 = *piVar15 - iVar16;
              uVar22 = uVar22 + 1;
              local_3c = local_3c + 4;
            } while ((int)uVar22 < (int)uVar5);
          }
          uVar22 = **(uint **)(iVar3 + 0x88);
          if ((int)uVar19 < (int)uVar22) {
            uVar19 = uVar22;
          }
          if ((int)(uVar22 + uVar5) < (int)uVar19) {
            uVar19 = uVar22 + uVar5;
          }
          iVar16 = *(int *)(iVar3 + 0x94);
          iVar14 = FUN_00c333d0(*(uint **)(iVar3 + 0x88),uVar19,iVar16);
          iVar14 = FUN_00c333f0(iVar14);
          *(int *)(iVar3 + 0x98) = *(int *)(iVar3 + 0x98) - (iVar13 >> 1);
          *(int *)(iVar3 + 0x90) = *(int *)(iVar3 + 0x90) - iVar14;
          *(uint *)(*(int *)(iVar3 + 0x54) + iVar16 * 4) =
               *(uint *)(*(int *)(iVar3 + 0x54) + iVar16 * 4) & 0x80000000;
          *(uint *)(*(int *)(iVar3 + 0x54) + *(int *)(iVar3 + 0x94) * 4) =
               *(uint *)(*(int *)(iVar3 + 0x54) + *(int *)(iVar3 + 0x94) * 4) | uVar19;
          if (*(int *)(iVar3 + 0x94) == **(int **)(iVar3 + 0x84)) {
            _memmove(*(void **)(iVar3 + 0x80),(void *)((int)*(void **)(iVar3 + 0x80) + uVar5 * 8),
                     *(int *)(iVar3 + 0x8c) * uVar5 * 8);
            _memmove(*(void **)(iVar3 + 0x84),(void *)((int)*(void **)(iVar3 + 0x84) + 4),
                     *(int *)(iVar3 + 0x8c) << 2);
            _memmove(*(void **)(iVar3 + 0x88),(void *)((int)*(void **)(iVar3 + 0x88) + 4),
                     *(int *)(iVar3 + 0x8c) << 2);
            *(int *)(iVar3 + 0x8c) = *(int *)(iVar3 + 0x8c) + -1;
          }
          iVar13 = *(int *)(iVar3 + 0x94) + 1;
          *(int *)(iVar3 + 0x94) = iVar13;
          if (*(int *)(iVar3 + 0x58) <= iVar13) {
            *(undefined4 *)(iVar3 + 0x94) = 0;
          }
          uVar19 = *(uint *)(iVar3 + 0x98);
        }
        *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x94);
      }
      if (iVar2 != 0) {
        *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x5c);
      }
      return 0;
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_00c34330 @ 00c34330 ////

undefined4 __fastcall FUN_00c34330(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  
  iVar2 = *(int *)(param_1 + 0x68);
  if (*(int *)(iVar2 + 0x58) == 0) {
    if (*(int *)(iVar2 + 0x5c) != 0) {
      piVar8 = *(int **)(iVar2 + 0xb4);
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *param_2 = *piVar8;
        piVar8 = piVar8 + 1;
        param_2 = param_2 + 1;
      }
      *(undefined4 *)(iVar2 + 0x5c) = 0;
      return 1;
    }
  }
  else {
    iVar5 = *(int *)(iVar2 + 0xa0);
    if (iVar5 != *(int *)(iVar2 + 0xa4)) {
      uVar3 = *(uint *)(*(int *)(iVar2 + 0x54) + iVar5 * 4);
      iVar1 = *(int *)(iVar2 + 0x50) + *(int *)(iVar2 + 0x60) * iVar5 * 4;
      uVar7 = uVar3 & 0x7fffffff;
      iVar4 = *(int *)(iVar1 + uVar3 * 4);
      piVar8 = (int *)(iVar5 * 0x20 + *(int *)(iVar2 + 0xb4));
      piVar9 = param_2;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      iVar5 = 0;
      if (uVar7 != 0) {
        do {
          iVar6 = iVar5 * 4;
          iVar5 = iVar5 + 1;
          *param_2 = *param_2 + *(int *)(iVar1 + iVar6);
        } while (iVar5 < (int)uVar7);
      }
      param_2[1] = iVar4;
      iVar5 = *(int *)(iVar2 + 0xa0) + 1;
      *(int *)(iVar2 + 0xa0) = iVar5;
      if (*(int *)(iVar2 + 0x58) <= iVar5) {
        *(undefined4 *)(iVar2 + 0xa0) = 0;
      }
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00c343f0 @ 00c343f0 ////

float10 FUN_00c343f0(void)

{
  uint *in_EAX;
  
  return (float10)(*in_EAX & 0x7fffffff) * (float10)7.1771143e-07 - (float10)764.2712;
}


//// FUNCTION FUN_00c34410 @ 00c34410 ////

int __fastcall FUN_00c34410(int param_1,undefined4 *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  
  piVar1 = (int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  oggpack_reset(piVar1);
  iVar3 = (**(code **)(PTR_PTR_00f7df9c + 0xc))();
  if (iVar3 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      bVar2 = FUN_00c33880(param_1);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        return -0x83;
      }
      uVar4 = GetField_8_00c55620((int)piVar1);
      *param_2 = uVar4;
      iVar3 = oggpack_bytes(piVar1);
      param_2[1] = iVar3;
      param_2[2] = 0;
      param_2[3] = *(undefined4 *)(param_1 + 0x2c);
      param_2[4] = *(undefined4 *)(param_1 + 0x30);
      param_2[5] = *(undefined4 *)(param_1 + 0x34);
      param_2[6] = *(undefined4 *)(param_1 + 0x38);
      param_2[7] = *(undefined4 *)(param_1 + 0x3c);
    }
    iVar3 = 0;
  }
  return iVar3;
}


//// FUNCTION FUN_00c344a0 @ 00c344a0 ////

void __thiscall
FUN_00c344a0(void *this,float *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  FILE *_File;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  uint local_64;
  char local_58 [84];
  
  _sprintf(local_58,"%s_%d.m",this);
  _File = _fopen(local_58,"w");
  if (_File == (FILE *)0x0) {
    _perror("failed to open data dump file");
  }
  local_64 = 0;
  if (0 < param_2) {
    do {
      if (param_3 == 0) {
        if (param_5 == 0 && param_6 == 0) {
          fVar1 = (float10)(int)local_64;
        }
        else {
          fVar1 = (float10)CONCAT44(((int)local_64 >> 0x1f) + param_6 +
                                    (uint)CARRY4(local_64,param_5),local_64 + param_5) *
                  (float10)0.000125;
        }
      }
      else {
        fVar1 = ((float10)(int)local_64 * (float10)4000.0) / (float10)param_2 + (float10)0.25;
        fVar2 = (float10)fpatan(fVar1 * fVar1 * (float10)1.8499999754340024e-08,(float10)1);
        fVar3 = (float10)fpatan(fVar1 * (float10)0.0007399999885819852,(float10)1);
        fVar1 = fVar1 * (float10)9.999999747378752e-05 +
                fVar3 * (float10)13.100000381469727 + fVar2 * (float10)2.240000009536743;
      }
      FID_conflict__fwprintf(_File,"%f ",(double)fVar1);
      fVar1 = (float10)*param_1;
      if (param_4 != 0) {
        if ((float10)0.0 == fVar1) {
          fVar1 = (float10)-140.0;
        }
        else {
          fVar1 = FUN_00c343f0();
        }
      }
      FID_conflict__fwprintf(_File,"%f\n",(double)fVar1);
      local_64 = local_64 + 1;
      param_1 = param_1 + 1;
    } while ((int)local_64 < param_2);
  }
  _fclose(_File);
  return;
}


//// FUNCTION FUN_00c34620 @ 00c34620 ////

undefined4 __fastcall FUN_00c34620(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_EAX;
  
  if ((in_EAX != (undefined4 *)0x0) && (in_EAX[7] != 0)) {
    *in_EAX = 0;
    in_EAX[1] = param_3;
    in_EAX[2] = param_2;
    return 0;
  }
  return 0xffffff7d;
}


//// FUNCTION FUN_00c34650 @ 00c34650 ////

void FUN_00c34650(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  
  uVar9 = FUN_00acd42c();
  piVar3 = _calloc(1,0x460);
  iVar1 = param_1[7];
  piVar6 = (int *)(*(int *)(param_7 + (int)uVar9 * 4) * 0x460 + param_6);
  piVar8 = piVar3;
  for (iVar5 = 0x118; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  piVar3[0x117] = *(int *)(iVar1 + param_4 * 4) >> 1;
  iVar5 = *piVar3;
  iVar7 = -1;
  iVar4 = -1;
  piVar6 = piVar3;
  if (0 < iVar5) {
    do {
      iVar2 = piVar6[1];
      if (iVar7 < iVar2) {
        iVar7 = iVar2;
      }
      iVar5 = iVar5 + -1;
      piVar6 = piVar6 + 1;
    } while (iVar5 != 0);
  }
  if (-1 < iVar7) {
    param_1 = piVar3 + 0x50;
    param_6 = iVar7 + 1;
    piVar6 = piVar3 + 0x40;
    do {
      iVar5 = *piVar6;
      if (iVar4 < iVar5) {
        iVar4 = iVar5;
      }
      *piVar6 = *(int *)(iVar1 + 0x18) + iVar5;
      iVar5 = 0;
      piVar8 = param_1;
      if (0 < 1 << ((byte)piVar6[-0x10] & 0x1f)) {
        do {
          iVar7 = *piVar8;
          if (iVar4 < iVar7) {
            iVar4 = iVar7;
          }
          if (-1 < iVar7) {
            *piVar8 = *(int *)(iVar1 + 0x18) + iVar7;
          }
          iVar5 = iVar5 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar5 < 1 << ((byte)piVar6[-0x10] & 0x1f));
      }
      param_1 = param_1 + 8;
      piVar6 = piVar6 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  iVar5 = 0;
  if (-1 < iVar4) {
    do {
      *(undefined4 *)(iVar1 + 0x720 + *(int *)(iVar1 + 0x18) * 4) =
           *(undefined4 *)(*(int *)(param_5 + *(int *)(param_7 + (int)uVar9 * 4) * 4) + iVar5 * 4);
      iVar5 = iVar5 + 1;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
    } while (iVar5 <= iVar4);
  }
  *(undefined4 *)(iVar1 + 800 + *(int *)(iVar1 + 0x10) * 4) = 1;
  *(int **)(iVar1 + 0x420 + *(int *)(iVar1 + 0x10) * 4) = piVar3;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  return;
}


//// FUNCTION FUN_00c347b0 @ 00c347b0 ////

void FUN_00c347b0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 fVar6;
  ulonglong uVar7;
  
  FUN_00acd42c();
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar7 = FUN_00acd42c();
  puVar3 = (undefined4 *)((int)uVar7 * 0x1ec + unaff_EBX);
  puVar4 = (undefined4 *)(iVar1 + 0xb34);
  for (iVar2 = 0x7b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar7 = FUN_00acd42c();
  iVar2 = (int)uVar7;
  fVar5 = extraout_ST0 - (float10)iVar2;
  if ((fVar5 == (float10)0.0) && (0 < iVar2)) {
    iVar2 = iVar2 + -1;
    fVar5 = (float10)1.0;
  }
  fVar6 = (float10)1.0 - fVar5;
  *(float *)(iVar1 + 0xb38) =
       (float)((float10)*(float *)(unaff_EBX + 0x1f0 + iVar2 * 0x1ec) * fVar5 +
              (float10)*(float *)(unaff_EBX + 4 + iVar2 * 0x1ec) * fVar6);
  *(float *)(iVar1 + 0xb54) =
       (float)((float10)*(float *)(unaff_EBX + 0x20c + iVar2 * 0x1ec) * fVar5 +
              (float10)*(float *)(unaff_EBX + 0x20 + iVar2 * 0x1ec) * fVar6);
  *(float *)(iVar1 + 0xb3c) =
       (float)((float10)*(float *)(unaff_EBX + 500 + iVar2 * 0x1ec) * fVar5 +
              (float10)*(float *)(unaff_EBX + 8 + iVar2 * 0x1ec) * fVar6);
  *(float *)(iVar1 + 0xb58) =
       (float)((float10)*(float *)(unaff_EBX + 0x210 + iVar2 * 0x1ec) * fVar5 +
              (float10)*(float *)(unaff_EBX + 0x24 + iVar2 * 0x1ec) * fVar6);
  *(float *)(iVar1 + 0xb40) =
       (float)((float10)*(float *)(unaff_EBX + 0x1f8 + iVar2 * 0x1ec) * fVar5 +
              (float10)*(float *)(unaff_EBX + 0xc + iVar2 * 0x1ec) * fVar6);
  *(float *)(iVar1 + 0xb5c) =
       (float)((float10)*(float *)(unaff_EBX + 0x214 + iVar2 * 0x1ec) * fVar5 +
              (float10)*(float *)(unaff_EBX + 0x28 + iVar2 * 0x1ec) * fVar6);
  *(float *)(iVar1 + 0xb44) =
       (float)((float10)*(float *)(unaff_EBX + 0x1fc + iVar2 * 0x1ec) * fVar5 +
              (float10)*(float *)(unaff_EBX + 0x10 + iVar2 * 0x1ec) * fVar6);
  *(float *)(iVar1 + 0xb60) =
       (float)((float10)*(float *)(unaff_EBX + 0x218 + iVar2 * 0x1ec) * fVar5 +
              (float10)*(float *)(unaff_EBX + 0x2c + iVar2 * 0x1ec) * fVar6);
  *(float *)(iVar1 + 0xb78) = (float)*(double *)(iVar1 + 0xde8);
  return;
}


//// FUNCTION FUN_00c34910 @ 00c34910 ////

void FUN_00c34910(int param_1,int param_2)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = FUN_00acd42c();
  puVar4 = *(undefined4 **)(param_1 + 0x1c);
  iVar3 = 0xf;
  if (in_EAX == 0) {
    puVar2 = puVar4 + 0x339;
    do {
      puVar2[-0xf] = *puVar4;
      *puVar2 = puVar4[1];
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return;
  }
  puVar1 = (undefined4 *)((int)uVar6 * 0xf0 + in_EAX);
  puVar2 = puVar1;
  puVar5 = puVar4 + 0x30c;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = puVar1 + 0xf;
  puVar5 = puVar4 + 0x31b;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    puVar4 = puVar4 + 0x2fd;
    param_2 = 0xf;
    do {
      uVar6 = FUN_00acd42c();
      puVar4[-0xf] = (int)uVar6;
      uVar6 = FUN_00acd42c();
      *puVar4 = (int)uVar6;
      uVar6 = FUN_00acd42c();
      puVar4[-0x1e] = (int)uVar6;
      uVar6 = FUN_00acd42c();
      puVar4[0x2d] = (int)uVar6;
      uVar6 = FUN_00acd42c();
      puVar4[0x3c] = (int)uVar6;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return;
  }
  uVar6 = FUN_00acd42c();
  puVar2 = puVar4 + 0x2fd;
  iVar3 = 0xf;
  do {
    uVar7 = FUN_00acd42c();
    puVar2[-0xf] = (int)uVar7;
    uVar7 = FUN_00acd42c();
    *puVar2 = (int)uVar7;
    puVar2[-0x1e] = (int)uVar6;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar4 = puVar4 + 0x339;
  iVar3 = 0xf;
  do {
    uVar6 = FUN_00acd42c();
    puVar4[-0xf] = (int)uVar6;
    uVar6 = FUN_00acd42c();
    *puVar4 = (int)uVar6;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


//// FUNCTION FUN_00c34b10 @ 00c34b10 ////

void FUN_00c34b10(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  
  iVar1 = *(int *)(in_EAX + 0x1c);
  piVar3 = *(int **)(iVar1 + 0xb24 + param_6 * 4);
  uVar7 = FUN_00acd42c();
  iVar2 = (int)uVar7;
  if (*(int *)(iVar1 + 0x1c) <= param_6) {
    *(int *)(iVar1 + 0x1c) = param_6 + 1;
  }
  if (piVar3 == (int *)0x0) {
    piVar3 = _calloc(1,0x210);
    *(int **)(iVar1 + 0xb24 + param_6 * 4) = piVar3;
  }
  piVar5 = &DAT_00f3f800;
  piVar6 = piVar3;
  for (iVar4 = 0x84; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  *piVar3 = param_6 >> 1;
  if (*(int *)(iVar1 + 0xdc4) != 0) {
    piVar3[0x7d] = 1;
    piVar3[0x7e] = 1;
    piVar3[0x7f] = *(int *)(param_3 + iVar2 * 4);
    piVar3[0x80] = *(int *)(param_4 + iVar2 * 4);
    *(undefined8 *)(piVar3 + 0x82) = *(undefined8 *)(param_5 + iVar2 * 8);
  }
  return;
}


//// FUNCTION FUN_00c34bc0 @ 00c34bc0 ////

void FUN_00c34bc0(int param_1,double param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int unaff_EBX;
  int iVar7;
  ulonglong uVar8;
  
  uVar8 = FUN_00acd42c();
  iVar4 = (int)uVar8;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xb24 + param_3 * 4);
  piVar5 = (int *)(param_4 + iVar4 * 0x14);
  iVar7 = 2;
  fVar2 = (float)param_2 - (float)iVar4;
  fVar3 = 1.0 - fVar2;
  *(float *)(iVar1 + 0xc) = (float)*piVar5 * fVar3 + (float)piVar5[5] * fVar2;
  *(float *)(iVar1 + 0x10) = (float)piVar5[1] * fVar3 + (float)piVar5[6] * fVar2;
  *(float *)(iVar1 + 0x14) = (float)piVar5[2] * fVar3 + (float)piVar5[7] * fVar2;
  *(float *)(iVar1 + 0x18) = (float)piVar5[3] * fVar3 + (float)piVar5[8] * fVar2;
  *(float *)(iVar1 + 0x1c) = (float)piVar5[4] * fVar3 + (float)piVar5[9] * fVar2;
  *(float *)(iVar1 + 0x1f0) =
       (float)*(int *)(in_EAX + iVar4 * 4) * fVar3 + (float)*(int *)(in_EAX + 4 + iVar4 * 4) * fVar2
  ;
  piVar5 = (int *)((iVar4 + 1) * 0x44 + unaff_EBX);
  pfVar6 = (float *)(iVar1 + 0x28);
  do {
    iVar7 = iVar7 + -1;
    pfVar6[-1] = (float)*piVar5 * fVar2 + (float)piVar5[-0x11] * fVar3;
    *pfVar6 = (float)piVar5[-0x10] * fVar3 + (float)piVar5[1] * fVar2;
    pfVar6[1] = (float)piVar5[-0xf] * fVar3 + (float)piVar5[2] * fVar2;
    pfVar6[2] = (float)piVar5[-0xe] * fVar3 + (float)piVar5[3] * fVar2;
    pfVar6[3] = (float)piVar5[-0xd] * fVar3 + (float)piVar5[4] * fVar2;
    pfVar6[4] = (float)piVar5[-0xc] * fVar3 + (float)piVar5[5] * fVar2;
    pfVar6[5] = (float)piVar5[-0xb] * fVar3 + (float)piVar5[6] * fVar2;
    pfVar6[6] = (float)piVar5[-10] * fVar3 + (float)piVar5[7] * fVar2;
    piVar5 = piVar5 + 8;
    pfVar6 = pfVar6 + 8;
  } while (iVar7 != 0);
  iVar7 = 1;
  piVar5 = (int *)(iVar4 * 0x44 + 0x84 + unaff_EBX);
  pfVar6 = (float *)(iVar1 + 100);
  do {
    iVar7 = iVar7 + -1;
    *pfVar6 = (float)*piVar5 * fVar2 + (float)piVar5[-0x11] * fVar3;
    piVar5 = piVar5 + 1;
    pfVar6 = pfVar6 + 1;
  } while (iVar7 != 0);
  return;
}


//// FUNCTION FUN_00c34d30 @ 00c34d30 ////

void FUN_00c34d30(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float10 extraout_ST0;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  
  FUN_00acd42c();
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xb24 + param_4 * 4);
  uVar8 = FUN_00acd42c();
  iVar4 = (int)uVar8;
  fVar6 = extraout_ST0 - (float10)iVar4;
  if ((fVar6 == (float10)0.0) && (0 < iVar4)) {
    iVar4 = iVar4 + -1;
    fVar6 = (float10)1.0;
  }
  fVar7 = (float10)1.0 - fVar6;
  iVar5 = 4;
  piVar2 = (int *)((iVar4 * 5 + 5) * 0x20 + param_5);
  pfVar3 = (float *)(iVar1 + 0x154);
  do {
    iVar5 = iVar5 + -1;
    pfVar3[-1] = (float)((float10)*piVar2 * fVar6 + (float10)piVar2[-0x28] * fVar7);
    *pfVar3 = (float)((float10)piVar2[-0x27] * fVar7 + (float10)piVar2[1] * fVar6);
    pfVar3[1] = (float)((float10)piVar2[-0x26] * fVar7 + (float10)piVar2[2] * fVar6);
    pfVar3[2] = (float)((float10)piVar2[-0x25] * fVar7 + (float10)piVar2[3] * fVar6);
    pfVar3[3] = (float)((float10)piVar2[-0x24] * fVar7 + (float10)piVar2[4] * fVar6);
    pfVar3[4] = (float)((float10)piVar2[-0x23] * fVar7 + (float10)piVar2[5] * fVar6);
    pfVar3[5] = (float)((float10)piVar2[-0x22] * fVar7 + (float10)piVar2[6] * fVar6);
    pfVar3[6] = (float)((float10)piVar2[-0x21] * fVar7 + (float10)piVar2[7] * fVar6);
    pfVar3[7] = (float)((float10)piVar2[-0x20] * fVar7 + (float10)piVar2[8] * fVar6);
    pfVar3[8] = (float)((float10)piVar2[-0x1f] * fVar7 + (float10)piVar2[9] * fVar6);
    piVar2 = piVar2 + 10;
    pfVar3 = pfVar3 + 10;
  } while (iVar5 != 0);
  return;
}


//// FUNCTION FUN_00c34e90 @ 00c34e90 ////

void FUN_00c34e90(int param_1,double param_2,int param_3)

{
  int iVar1;
  int unaff_ESI;
  ulonglong uVar2;
  
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xb24 + param_3 * 4) + 0x20) =
       (float)*(int *)(unaff_ESI + 4 + iVar1 * 4) * ((float)param_2 - (float)iVar1) +
       (1.0 - ((float)param_2 - (float)iVar1)) * (float)*(int *)(unaff_ESI + iVar1 * 4);
  return;
}


//// FUNCTION FUN_00c34ee0 @ 00c34ee0 ////

void __thiscall
FUN_00c34ee0(int param_1,int *param_2,double param_3,int param_4,int param_5,double param_6)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  ulonglong uVar11;
  
  uVar11 = FUN_00acd42c();
  iVar4 = (int)uVar11;
  iVar9 = *(int *)(param_2[7] + 0xb24 + param_1 * 4);
  puVar1 = (undefined4 *)(param_5 + param_1 * 0xc);
  fVar2 = (float)param_3 - (float)iVar4;
  pfVar7 = (float *)(iVar9 + 0xc4);
  param_5 = 3;
  fVar3 = 1.0 - fVar2;
  pfVar10 = (float *)(iVar9 + 0x88);
  *(float *)(iVar9 + 0x6c) =
       (float)*(int *)(in_EAX + iVar4 * 4) * fVar3 + (float)*(int *)(in_EAX + 4 + iVar4 * 4) * fVar2
  ;
  *(undefined4 *)(iVar9 + 0x78) = *puVar1;
  *(undefined4 *)(iVar9 + 0x7c) = puVar1[1];
  *(undefined4 *)(iVar9 + 0x80) = puVar1[2];
  iVar4 = iVar4 * 0xcc + param_4;
  piVar8 = (int *)(iVar4 + 0xcc);
  param_2 = (int *)(iVar4 + 0x10c);
  do {
    iVar4 = 2;
    piVar5 = piVar8;
    pfVar6 = pfVar10;
    do {
      iVar4 = iVar4 + -1;
      pfVar6[-1] = (float)*piVar5 * fVar2 + (float)piVar5[-0x33] * fVar3;
      *pfVar6 = (float)piVar5[-0x32] * fVar3 + (float)piVar5[1] * fVar2;
      pfVar6[1] = (float)piVar5[-0x31] * fVar3 + (float)piVar5[2] * fVar2;
      pfVar6[2] = (float)piVar5[-0x30] * fVar3 + (float)piVar5[3] * fVar2;
      pfVar6[3] = (float)piVar5[-0x2f] * fVar3 + (float)piVar5[4] * fVar2;
      pfVar6[4] = (float)piVar5[-0x2e] * fVar3 + (float)piVar5[5] * fVar2;
      pfVar6[5] = (float)piVar5[-0x2d] * fVar3 + (float)piVar5[6] * fVar2;
      pfVar6[6] = (float)piVar5[-0x2c] * fVar3 + (float)piVar5[7] * fVar2;
      piVar5 = piVar5 + 8;
      pfVar6 = pfVar6 + 8;
    } while (iVar4 != 0);
    iVar4 = 1;
    piVar5 = param_2;
    pfVar6 = pfVar7;
    do {
      iVar4 = iVar4 + -1;
      *pfVar6 = (float)*piVar5 * fVar2 + (float)piVar5[-0x33] * fVar3;
      piVar5 = piVar5 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar4 != 0);
    param_2 = param_2 + 0x11;
    pfVar10 = pfVar10 + 0x11;
    piVar8 = piVar8 + 0x11;
    pfVar7 = pfVar7 + 0x11;
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  pfVar7 = (float *)(iVar9 + 0x84);
  iVar9 = 3;
  do {
    fVar2 = *pfVar7;
    iVar4 = 0x11;
    do {
      fVar3 = *pfVar7;
      *pfVar7 = fVar3 + (float)param_6;
      if (fVar3 + (float)param_6 < fVar2 + 6.0) {
        *pfVar7 = fVar2 + 6.0;
      }
      pfVar7 = pfVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return;
}


//// FUNCTION FUN_00c350c0 @ 00c350c0 ////

void __fastcall FUN_00c350c0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x1c);
  iVar2 = *(int *)(iVar1 + 0xb24 + param_1 * 4);
  *(float *)(iVar2 + 4) = (float)*(double *)(iVar1 + 0xdd8);
  *(float *)(iVar2 + 8) = (float)*(double *)(iVar1 + 0xde0);
  return;
}


//// FUNCTION FUN_00c350e0 @ 00c350e0 ////

int __fastcall FUN_00c350e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)(param_1 + 0x720);
    do {
      if (*piVar3 == unaff_EDI) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  return iVar1;
}


//// FUNCTION FUN_00c35110 @ 00c35110 ////

void FUN_00c35110(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_EAX;
  ulonglong uVar3;
  
  puVar1 = *(undefined4 **)(in_EAX + 0x1c);
  uVar3 = FUN_00acd42c();
  uVar2 = *(undefined4 *)(param_4 + (int)uVar3 * 4);
  *puVar1 = *(undefined4 *)(param_3 + (int)uVar3 * 4);
  puVar1[1] = uVar2;
  return;
}


//// FUNCTION FUN_00c35140 @ 00c35140 ////

void FUN_00c35140(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  ulonglong uVar10;
  int local_14;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  puVar2 = _malloc(0x714);
  *(undefined4 **)(iVar1 + 0x620 + param_2 * 4) = puVar2;
  puVar7 = (undefined4 *)param_4[2];
  puVar8 = puVar2;
  for (iVar4 = 0x1c5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  if (*(int *)(iVar1 + 0x14) <= param_2) {
    *(int *)(iVar1 + 0x14) = param_2 + 1;
  }
  iVar4 = *(int *)(iVar1 + param_3 * 4);
  if (((iVar4 == 0x40) || (iVar4 == 0x80)) || (iVar4 == 0x100)) {
    puVar2[2] = 0x10;
  }
  else {
    puVar2[2] = 0x20;
  }
  *(int *)(iVar1 + 0x520 + param_2 * 4) = *param_4;
  iVar4 = *(int *)(iVar1 + param_3 * 4) >> 1;
  puVar2[1] = iVar4;
  if (*param_4 == 2) {
    puVar2[1] = *(int *)(param_1 + 4) * iVar4;
  }
  iVar4 = 0;
  iVar9 = 0;
  param_2 = 0;
  if (*(int *)(iVar1 + 0xd90) == 0) {
    if (0 < (int)puVar2[3]) {
      puVar6 = puVar2 + 5;
      do {
        if (*(int *)(iVar4 + param_4[5]) != 0) {
          *puVar6 = *puVar6 | 1;
        }
        if (*(int *)(param_4[5] + 4 + iVar4) != 0) {
          *puVar6 = *puVar6 | 2;
        }
        if (*(int *)(param_4[5] + 8 + iVar4) != 0) {
          *puVar6 = *puVar6 | 4;
        }
        iVar9 = iVar9 + 1;
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar9 < (int)puVar2[3]);
    }
    iVar4 = FUN_00c350e0(iVar1);
    puVar2[4] = iVar4;
    *(int *)(iVar1 + 0x720 + iVar4 * 4) = param_4[3];
    iVar4 = 0;
    local_14 = 0;
    if (0 < (int)puVar2[3]) {
      do {
        piVar5 = puVar2 + param_2 + 0x45;
        iVar9 = 3;
        do {
          if (*(int *)(iVar4 + param_4[5]) != 0) {
            iVar3 = FUN_00c350e0(iVar1);
            *piVar5 = iVar3;
            param_2 = param_2 + 1;
            piVar5 = piVar5 + 1;
            *(undefined4 *)(iVar1 + 0x720 + iVar3 * 4) = *(undefined4 *)(iVar4 + param_4[5]);
          }
          iVar4 = iVar4 + 4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        local_14 = local_14 + 1;
      } while (local_14 < (int)puVar2[3]);
    }
  }
  else {
    if (0 < (int)puVar2[3]) {
      puVar6 = puVar2 + 5;
      do {
        if (*(int *)(iVar4 + param_4[6]) != 0) {
          *puVar6 = *puVar6 | 1;
        }
        if (*(int *)(param_4[6] + 4 + iVar4) != 0) {
          *puVar6 = *puVar6 | 2;
        }
        if (*(int *)(param_4[6] + 8 + iVar4) != 0) {
          *puVar6 = *puVar6 | 4;
        }
        iVar9 = iVar9 + 1;
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar9 < (int)puVar2[3]);
    }
    iVar4 = FUN_00c350e0(iVar1);
    puVar2[4] = iVar4;
    *(int *)(iVar1 + 0x720 + iVar4 * 4) = param_4[4];
    iVar4 = 0;
    local_14 = 0;
    if (0 < (int)puVar2[3]) {
      do {
        piVar5 = puVar2 + param_2 + 0x45;
        iVar9 = 3;
        do {
          if (*(int *)(iVar4 + param_4[6]) != 0) {
            iVar3 = FUN_00c350e0(iVar1);
            *piVar5 = iVar3;
            param_2 = param_2 + 1;
            piVar5 = piVar5 + 1;
            *(undefined4 *)(iVar1 + 0x720 + iVar3 * 4) = *(undefined4 *)(iVar4 + param_4[6]);
          }
          iVar4 = iVar4 + 4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        local_14 = local_14 + 1;
      } while (local_14 < (int)puVar2[3]);
    }
  }
  iVar1 = *(int *)(iVar1 + 0x420 + param_3 * 4);
  uVar10 = FUN_00acd42c();
  *(int *)(iVar1 + 0x45c) = (int)uVar10;
  iVar1 = puVar2[2];
  uVar10 = FUN_00acd42c();
  puVar2[1] = (int)uVar10 * iVar1;
  return;
}


//// FUNCTION FUN_00c35490 @ 00c35490 ////

void FUN_00c35490(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  ulonglong uVar10;
  int *piStack00000008;
  undefined4 *local_10;
  int local_c;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar10 = FUN_00acd42c();
  iVar2 = *(int *)(in_EAX + 4 + (int)uVar10 * 8);
  piVar7 = *(int **)(in_EAX + (int)uVar10 * 8);
  local_c = 2;
  if (*piVar1 == piVar1[1]) {
    local_c = 1;
  }
  iVar6 = 0;
  if (local_c != 0) {
    piVar9 = piVar1 + 0x88;
    local_10 = &DAT_00ea7f70;
    do {
      piStack00000008 = piVar9;
      pvVar3 = _calloc(1,0xc88);
      *piVar9 = (int)pvVar3;
      puVar4 = _calloc(1,0x10);
      piVar9[-0x80] = (int)puVar4;
      *puVar4 = *local_10;
      puVar4[1] = local_10[1];
      puVar4[2] = local_10[2];
      puVar4[3] = local_10[3];
      if (piVar1[2] <= iVar6) {
        piVar1[2] = iVar6 + 1;
      }
      piVar9[-0x40] = 0;
      piVar8 = piVar7;
      piVar9 = (int *)*piVar9;
      for (iVar5 = 0x322; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      if (piVar1[3] <= iVar6) {
        piVar1[3] = iVar6 + 1;
      }
      iVar5 = 0;
      if (0 < *piVar7) {
        piVar9 = piVar7 + 0x111;
        do {
          FUN_00c35140(param_1,*piVar9,iVar6,(int *)(*piVar9 * 0x1c + iVar2));
          iVar5 = iVar5 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar5 < *piVar7);
      }
      iVar6 = iVar6 + 1;
      piVar9 = piStack00000008 + 1;
      local_10 = local_10 + 4;
      piVar7 = piVar7 + 0x322;
    } while (iVar6 < local_c);
  }
  return;
}


//// FUNCTION FUN_00c355e0 @ 00c355e0 ////

float10 FUN_00c355e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  float10 fVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(unaff_EDI + 0x1c);
  uVar5 = FUN_00acd42c();
  iVar3 = (int)uVar5;
  iVar2 = *(int *)(*(int *)(iVar1 + 0xd68) + 4);
  fVar4 = (float10)*(double *)(iVar1 + 0xd70) - (float10)iVar3;
  if (iVar2 == 0) {
    return (float10)-1.0;
  }
  return (fVar4 * (float10)*(double *)(iVar2 + 8 + iVar3 * 8) +
         ((float10)1.0 - fVar4) * (float10)*(double *)(iVar2 + iVar3 * 8)) *
         (float10)*(int *)(unaff_EDI + 4);
}


//// FUNCTION FUN_00c35630 @ 00c35630 ////

void __fastcall FUN_00c35630(undefined4 param_1,int param_2,int param_3,int param_4,double param_5)

{
  undefined **ppuVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  int in_EAX;
  int iVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  
  iVar2 = *(int *)(in_EAX + 0x1c);
  iVar8 = 0;
  puVar5 = PTR_DAT_00f77e80;
  if (param_2 != 0) {
    param_5 = param_5 / (double)param_3;
  }
  do {
    if (puVar5 == (undefined *)0x0) {
      *(undefined4 *)(iVar2 + 0xd68) = 0;
      return;
    }
    piVar3 = (int *)(&PTR_DAT_00f77e80)[iVar8];
    if ((((piVar3[3] == -1) || (piVar3[3] == param_3)) && (piVar3[4] <= param_4)) &&
       (param_4 <= piVar3[5])) {
      iVar4 = *piVar3;
      if (param_2 == 0) {
        pdVar9 = (double *)piVar3[2];
      }
      else {
        pdVar9 = (double *)piVar3[1];
      }
      if ((*pdVar9 <= param_5) && (param_5 <= pdVar9[iVar4])) {
        iVar6 = 0;
        param_3 = 0;
        if (iVar4 < 4) goto joined_r0x00c35731;
        pdVar7 = pdVar9 + 2;
        break;
      }
    }
    ppuVar1 = &PTR_DAT_00f77e84 + iVar8;
    iVar8 = iVar8 + 1;
    puVar5 = *ppuVar1;
  } while( true );
  while( true ) {
    if ((*pdVar7 <= param_5) && (param_5 < pdVar7[1])) {
      param_3 = iVar6 + 2;
      goto LAB_00c3575e;
    }
    if ((pdVar7[1] <= param_5) && (param_5 < pdVar7[2])) {
      param_3 = iVar6 + 3;
      goto LAB_00c3575e;
    }
    iVar6 = iVar6 + 4;
    pdVar7 = pdVar7 + 4;
    param_3 = iVar6;
    if (iVar4 + -3 <= iVar6) break;
    if ((pdVar7[-2] <= param_5) && (param_3 = iVar6, param_5 < pdVar7[-1])) goto LAB_00c3575e;
    if ((pdVar7[-1] <= param_5) && (param_5 < *pdVar7)) {
      param_3 = iVar6 + 1;
      goto LAB_00c3575e;
    }
  }
joined_r0x00c35731:
  for (; (param_3 < iVar4 && ((param_5 < pdVar9[param_3] || (pdVar9[param_3 + 1] <= param_5))));
      param_3 = param_3 + 1) {
  }
LAB_00c3575e:
  *(undefined4 *)(iVar2 + 0xd68) = (&PTR_DAT_00f77e80)[iVar8];
  if (param_3 != iVar4) {
    *(double *)(iVar2 + 0xd70) =
         (param_5 - pdVar9[param_3]) / (pdVar9[param_3 + 1] - (double)(float)pdVar9[param_3]) +
         (double)param_3;
    return;
  }
  *(double *)(iVar2 + 0xd70) = (double)param_3 - 0.001;
  return;
}


//// FUNCTION FUN_00c357b0 @ 00c357b0 ////

ulonglong __fastcall FUN_00c357b0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  double dVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  uint local_14;
  
  piVar3 = (int *)param_1[7];
  piVar1 = piVar3 + 0x35a;
  if (piVar3 != (int *)0x0) {
    local_14 = (uint)(piVar3[0x370] == 0);
    if (-80.0 < *(double *)(piVar3 + 0x376)) {
      piVar3[0x376] = 0;
      piVar3[0x377] = -0x3fac0000;
    }
    if (*(double *)(piVar3 + 0x376) < -200.0) {
      piVar3[0x376] = 0;
      piVar3[0x377] = -0x3f970000;
    }
    if (0.0 < *(double *)(piVar3 + 0x37a)) {
      piVar3[0x37a] = 0;
      piVar3[0x37b] = 0;
    }
    if (*(double *)(piVar3 + 0x37a) < -99999.0) {
      piVar3[0x37a] = 0;
      piVar3[0x37b] = -0x3f079610;
    }
    iVar4 = *piVar1;
    if (iVar4 != 0) {
      piVar3[0x35b] = 1;
      FUN_00c35110((int)*(undefined8 *)(piVar3 + 0x35c),
                   (int)((ulonglong)*(undefined8 *)(piVar3 + 0x35c) >> 0x20),*(int *)(iVar4 + 0x18),
                   *(int *)(iVar4 + 0x1c));
      bVar5 = *piVar3 != piVar3[1];
      FUN_00c34650(param_1,(int)*(undefined8 *)(piVar3 + 0x360),
                   (int)((ulonglong)*(undefined8 *)(piVar3 + 0x360) >> 0x20),0,
                   *(int *)(iVar4 + 0x88),*(int *)(iVar4 + 0x8c),*(int *)(iVar4 + 0x90));
      if (bVar5) {
        FUN_00c34650(param_1,(int)*(undefined8 *)(piVar3 + 0x35e),
                     (int)((ulonglong)*(undefined8 *)(piVar3 + 0x35e) >> 0x20),1,
                     *(int *)(iVar4 + 0x88),*(int *)(iVar4 + 0x8c),*(int *)(iVar4 + 0x94));
      }
      FUN_00c347b0((int)param_1);
      FUN_00c34910((int)param_1,(int)piVar1);
      FUN_00c34b10((int)*(undefined8 *)(piVar3 + 0x360),
                   (int)((ulonglong)*(undefined8 *)(piVar3 + 0x360) >> 0x20),*(int *)(iVar4 + 0x5c),
                   *(int *)(iVar4 + 100),*(int *)(iVar4 + 0x6c),0);
      FUN_00c34b10((int)*(undefined8 *)(piVar3 + 0x360),
                   (int)((ulonglong)*(undefined8 *)(piVar3 + 0x360) >> 0x20),*(int *)(iVar4 + 0x5c),
                   *(int *)(iVar4 + 100),*(int *)(iVar4 + 0x6c),1);
      if (bVar5) {
        FUN_00c34b10((int)*(undefined8 *)(piVar3 + 0x35e),
                     (int)((ulonglong)*(undefined8 *)(piVar3 + 0x35e) >> 0x20),
                     *(int *)(iVar4 + 0x60),*(int *)(iVar4 + 0x68),*(int *)(iVar4 + 0x6c),2);
        FUN_00c34b10((int)*(undefined8 *)(piVar3 + 0x35e),
                     (int)((ulonglong)*(undefined8 *)(piVar3 + 0x35e) >> 0x20),
                     *(int *)(iVar4 + 0x60),*(int *)(iVar4 + 0x68),*(int *)(iVar4 + 0x6c),3);
      }
      FUN_00c34bc0((int)param_1,*(double *)(piVar1 + local_14 * 8 + 0x24),0,*(int *)(iVar4 + 0x20));
      FUN_00c34bc0((int)param_1,*(double *)(piVar3 + 0x386),1,*(int *)(iVar4 + 0x20));
      if (bVar5) {
        FUN_00c34bc0((int)param_1,*(double *)(piVar3 + 0x38e),2,*(int *)(iVar4 + 0x20));
        FUN_00c34bc0((int)param_1,*(double *)(piVar3 + 0x396),3,*(int *)(iVar4 + 0x20));
      }
      FUN_00c34d30((int)param_1,(int)*(undefined8 *)(piVar1 + local_14 * 8 + 0x2a),
                   (int)((ulonglong)*(undefined8 *)(piVar1 + local_14 * 8 + 0x2a) >> 0x20),0,
                   *(int *)(iVar4 + 0x50));
      FUN_00c34d30((int)param_1,(int)*(undefined8 *)(piVar3 + 0x38c),
                   (int)((ulonglong)*(undefined8 *)(piVar3 + 0x38c) >> 0x20),1,
                   *(int *)(iVar4 + 0x50));
      if (bVar5) {
        FUN_00c34d30((int)param_1,(int)*(undefined8 *)(piVar3 + 0x394),
                     (int)((ulonglong)*(undefined8 *)(piVar3 + 0x394) >> 0x20),2,
                     *(int *)(iVar4 + 0x50));
        FUN_00c34d30((int)param_1,(int)*(undefined8 *)(piVar3 + 0x39c),
                     (int)((ulonglong)*(undefined8 *)(piVar3 + 0x39c) >> 0x20),3,
                     *(int *)(iVar4 + 0x50));
      }
      FUN_00c34e90((int)param_1,*(double *)(piVar1 + local_14 * 8 + 0x26),0);
      FUN_00c34e90((int)param_1,*(double *)(piVar3 + 0x388),1);
      if (bVar5) {
        FUN_00c34e90((int)param_1,*(double *)(piVar3 + 0x390),2);
        FUN_00c34e90((int)param_1,*(double *)(piVar3 + 0x398),3);
      }
      if (local_14 == 0) {
        dVar2 = *(double *)(piVar3 + 0x362);
      }
      else {
        dVar2 = 0.0;
      }
      FUN_00c34ee0(0,param_1,*(double *)(piVar3 + (local_14 + 5) * 8 + 0x35a),*(int *)(iVar4 + 0x3c)
                   ,*(int *)(iVar4 + 0x38),dVar2);
      FUN_00c34ee0(1,param_1,*(double *)(piVar3 + 0x38a),*(int *)(iVar4 + 0x40),
                   *(int *)(iVar4 + 0x38),0.0);
      if (bVar5) {
        FUN_00c34ee0(2,param_1,*(double *)(piVar3 + 0x392),*(int *)(iVar4 + 0x44),
                     *(int *)(iVar4 + 0x38),0.0);
        FUN_00c34ee0(3,param_1,*(double *)(piVar3 + 0x39a),*(int *)(iVar4 + 0x48),
                     *(int *)(iVar4 + 0x38),0.0);
      }
      FUN_00c350c0(0);
      FUN_00c350c0(1);
      if (bVar5) {
        FUN_00c350c0(2);
        FUN_00c350c0(3);
      }
      FUN_00c35490((int)param_1);
      FUN_00c355e0();
      uVar6 = FUN_00acd42c();
      param_1[4] = (int)uVar6;
      param_1[5] = piVar3[0x365];
      param_1[3] = piVar3[0x368];
      uVar6 = FUN_00acd42c();
      param_1[6] = (int)uVar6;
      if (piVar3[0x364] != 0) {
        *(undefined8 *)(piVar3 + 0x348) = *(undefined8 *)(piVar3 + 0x36c);
        *(undefined8 *)(piVar3 + 0x34a) = *(undefined8 *)(piVar3 + 0x36e);
        *(undefined8 *)(piVar3 + 0x34c) = *(undefined8 *)(piVar3 + 0x36a);
        *(double *)(piVar3 + 0x34e) = (double)piVar3[0x365];
        *(double *)(piVar3 + 0x350) = (double)piVar3[0x368];
        *(double *)(piVar3 + 0x352) = (double)piVar3[0x366];
        *(double *)(piVar3 + 0x354) = (double)piVar3[0x367];
        piVar3[0x356] = 0;
        piVar3[0x357] = -0x3ed17b82;
        piVar3[0x358] = 0;
        piVar3[0x359] = 0x412e847e;
      }
      return uVar6 & 0xffffffff00000000;
    }
  }
  return CONCAT44(param_2,0xffffff7d);
}


//// FUNCTION FUN_00c35cc0 @ 00c35cc0 ////

int __fastcall FUN_00c35cc0(undefined4 param_1,undefined4 param_2)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *(int *)(in_EAX + 0x1c);
  iVar3 = *(int *)(iVar2 + 0xd68);
  iVar6 = FUN_00c34620(param_1,param_2,param_1);
  if (iVar6 == 0) {
    uVar8 = FUN_00acd42c();
    iVar7 = (int)uVar8;
    *(undefined4 *)(iVar2 + 0xd90) = 0;
    *(undefined4 *)(iVar2 + 0xdc0) = 1;
    *(undefined4 *)(iVar2 + 0xdc4) = 1;
    dVar4 = *(double *)(iVar2 + 0xd70) - (double)iVar7;
    *(undefined8 *)(iVar2 + 0xd80) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xd78) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xdc8) = *(undefined8 *)(iVar2 + 0xd70);
    pdVar1 = (double *)(*(int *)(iVar3 + 0x78) + iVar7 * 8);
    dVar5 = 1.0 - dVar4;
    *(double *)(iVar2 + 0xdd0) = dVar5 * *pdVar1 + dVar4 * pdVar1[1];
    *(double *)(iVar2 + 0xdd8) =
         (double)*(int *)(*(int *)(iVar3 + 0x70) + iVar7 * 4) * dVar5 +
         (double)*(int *)(*(int *)(iVar3 + 0x70) + 4 + iVar7 * 4) * dVar4;
    iVar6 = 0;
    *(double *)(iVar2 + 0xde0) =
         (double)*(int *)(*(int *)(iVar3 + 0x74) + iVar7 * 4) * dVar5 +
         (double)*(int *)(*(int *)(iVar3 + 0x74) + 4 + iVar7 * 4) * dVar4;
    *(undefined8 *)(iVar2 + 0xde8) = 0xc018000000000000;
    *(undefined8 *)(iVar2 + 0xdf0) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xdf8) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe00) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe08) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe10) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe18) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe20) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe28) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe30) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe38) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe40) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe48) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe50) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe58) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe60) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe68) = *(undefined8 *)(iVar2 + 0xd70);
    *(undefined8 *)(iVar2 + 0xe70) = *(undefined8 *)(iVar2 + 0xd70);
  }
  return iVar6;
}


//// FUNCTION FUN_00c35e10 @ 00c35e10 ////

int __fastcall FUN_00c35e10(int param_1,int param_2,int param_3,float param_4)

{
  float fVar1;
  int iVar2;
  
  fVar1 = param_4 + 1e-05;
  iVar2 = *(int *)(param_1 + 0x1c);
  if (1.0 <= fVar1) {
    fVar1 = 0.9999;
  }
  FUN_00c35630(param_1,0,param_2,param_3,(double)fVar1);
  if (*(int *)(iVar2 + 0xd68) == 0) {
    return -0x82;
  }
  iVar2 = FUN_00c35cc0(param_2,param_3);
  return iVar2;
}


//// FUNCTION FUN_00c35ec0 @ 00c35ec0 ////

int __fastcall
FUN_00c35ec0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  iVar1 = param_1[7];
  puVar3 = param_1;
  if ((double)param_5 < 0.0 != ((double)param_5 == 0.0)) {
    if ((double)param_4 <= 0.0) {
      param_5 = param_6;
      if ((double)param_6 <= 0.0) {
        return -0x83;
      }
    }
    else {
      uVar4 = FUN_00acd42c();
      param_5 = (int)uVar4;
      puVar3 = extraout_ECX;
    }
  }
  FUN_00c35630(puVar3,1,param_2,param_3,(double)param_5);
  if (*(int *)(iVar1 + 0xd68) != 0) {
    iVar2 = FUN_00c35cc0(param_2,param_3);
    if (iVar2 == 0) {
      *(undefined8 *)(iVar1 + 0xdb0) = 0x4010000000000000;
      *(undefined4 *)(iVar1 + 0xd90) = 1;
      *(undefined8 *)(iVar1 + 0xdb8) = 0x3fe0000000000000;
      *(int *)(iVar1 + 0xd94) = param_6;
      *(int *)(iVar1 + 0xda0) = param_4;
      *(undefined8 *)(iVar1 + 0xda8) = 0x4000000000000000;
      uVar4 = FUN_00acd42c();
      *(int *)(iVar1 + 0xd98) = (int)uVar4;
      *(int *)(iVar1 + 0xd9c) = (int)uVar4;
      return 0;
    }
    vorbis_info_clear(param_1);
    return iVar2;
  }
  return -0x82;
}


//// FUNCTION FUN_00c36010 @ 00c36010 ////

undefined4 __fastcall FUN_00c36010(int param_1,uint param_2,double *param_3)

{
  double dVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     ((iVar2 = *(int *)(param_1 + 0x1c), (param_2 & 0xf) == 0 || (*(int *)(iVar2 + 0xd6c) == 0)))) {
    switch(param_2) {
    case 0x10:
      *(undefined4 *)param_3 = *(undefined4 *)(iVar2 + 0xd90);
      param_3[4] = *(double *)(iVar2 + 0xdb0);
      param_3[5] = *(double *)(iVar2 + 0xdb8);
      param_3[2] = *(double *)(iVar2 + 0xda8);
      *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)(iVar2 + 0xd94);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(iVar2 + 0xda0);
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)(iVar2 + 0xd98);
      *(undefined4 *)((int)param_3 + 0x1c) = *(undefined4 *)(iVar2 + 0xd9c);
      return 0;
    case 0x11:
      goto switchD_00c36048_caseD_11;
    case 0x12:
      if (param_3 == (double *)0x0) {
        *(undefined4 *)(iVar2 + 0xd98) = 0;
        *(undefined8 *)(iVar2 + 0xdb0) = 0;
        *(undefined4 *)(iVar2 + 0xd9c) = 0;
      }
      else {
        *(double *)(iVar2 + 0xdb0) = param_3[4];
        *(double *)(iVar2 + 0xdb8) = param_3[5];
        *(undefined4 *)(iVar2 + 0xd98) = *(undefined4 *)(param_3 + 3);
        *(undefined4 *)(iVar2 + 0xd9c) = *(undefined4 *)((int)param_3 + 0x1c);
      }
      if (*(double *)(iVar2 + 0xdb0) < 0.25) {
        *(undefined8 *)(iVar2 + 0xdb0) = 0x3fd0000000000000;
      }
      if (10.0 < *(double *)(iVar2 + 0xdb0)) {
        *(undefined8 *)(iVar2 + 0xdb0) = 0x4024000000000000;
      }
      if (*(double *)(iVar2 + 0xdb8) < 0.0) {
        *(undefined8 *)(iVar2 + 0xdb0) = 0;
      }
      if (1.0 < *(double *)(iVar2 + 0xdb8)) {
        *(undefined8 *)(iVar2 + 0xdb0) = 0x3ff0000000000000;
      }
      if ((((*(int *)(iVar2 + 0xd98) < 1) && (*(int *)(iVar2 + 0xd9c) < 1)) ||
          (*(double *)(iVar2 + 0xdb0) < 0.0 != (*(double *)(iVar2 + 0xdb0) == 0.0))) &&
         (((*(int *)(iVar2 + 0xd94) < 1 && (*(int *)(iVar2 + 0xda0) < 1)) ||
          (*(double *)(iVar2 + 0xda8) < 0.0 != (*(double *)(iVar2 + 0xda8) == 0.0))))) {
        *(undefined4 *)(iVar2 + 0xd90) = 0;
      }
      return 0;
    case 0x13:
      if (param_3 == (double *)0x0) {
        *(undefined4 *)(iVar2 + 0xd94) = 0;
        *(undefined8 *)(iVar2 + 0xda8) = 0;
        *(undefined4 *)(iVar2 + 0xda0) = 0;
      }
      else {
        *(double *)(iVar2 + 0xda8) = param_3[2];
        *(undefined4 *)(iVar2 + 0xd94) = *(undefined4 *)((int)param_3 + 4);
        *(undefined4 *)(iVar2 + 0xda0) = *(undefined4 *)(param_3 + 1);
      }
      if (*(double *)(iVar2 + 0xda8) < 0.0) {
        *(undefined8 *)(iVar2 + 0xda8) = 0;
      }
      if (10.0 < *(double *)(iVar2 + 0xda8)) {
        *(undefined8 *)(iVar2 + 0xda8) = 0x4024000000000000;
      }
      if ((((*(int *)(iVar2 + 0xd98) < 1) && (*(int *)(iVar2 + 0xd9c) < 1)) ||
          (*(double *)(iVar2 + 0xdb0) < 0.0 != (*(double *)(iVar2 + 0xdb0) == 0.0))) &&
         (((*(int *)(iVar2 + 0xd94) < 1 && (*(int *)(iVar2 + 0xda0) < 1)) ||
          (*(double *)(iVar2 + 0xda8) < 0.0 != (*(double *)(iVar2 + 0xda8) == 0.0))))) {
        *(undefined4 *)(iVar2 + 0xd90) = 0;
      }
      return 0;
    default:
      return 0xffffff7e;
    case 0x20:
      *param_3 = *(double *)(iVar2 + 0xdd0);
      return 0;
    case 0x21:
      dVar1 = *param_3;
      *(double *)(iVar2 + 0xdd0) = dVar1;
      if (dVar1 < 2.0) {
        *(undefined8 *)(iVar2 + 0xdd0) = 0x4000000000000000;
      }
      if (99.0 < *(double *)(iVar2 + 0xdd0)) {
        *(undefined8 *)(iVar2 + 0xdd0) = 0x4058c00000000000;
      }
      return 0;
    case 0x30:
      *param_3 = *(double *)(iVar2 + 0xd88);
      return 0;
    case 0x31:
      dVar1 = *param_3;
      *(double *)(iVar2 + 0xd88) = dVar1;
      if (0.0 < dVar1) {
        *(undefined8 *)(iVar2 + 0xd88) = 0;
      }
      if (*(double *)(iVar2 + 0xd88) < -15.0) {
        *(undefined8 *)(iVar2 + 0xd88) = 0xc02e000000000000;
      }
      return 0;
    }
  }
  return 0xffffff7d;
switchD_00c36048_caseD_11:
  if (param_3 == (double *)0x0) {
    *(undefined4 *)(iVar2 + 0xd90) = 0;
    return 0;
  }
  *(undefined4 *)(iVar2 + 0xd90) = *(undefined4 *)param_3;
  FUN_00c36010(param_1,0x12,param_3);
  FUN_00c36010(param_1,0x13,param_3);
  return 0;
}


//// FUNCTION Ctor_vt00da6a10_00c36330 @ 00c36330 ////

undefined4 * __fastcall Ctor_vt00da6a10_00c36330(undefined4 *param_1)

{
  FUN_00be8750(param_1);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_LAB_00da6a10;
  return param_1;
}


//// FUNCTION Dtor_00c36350 @ 00c36350 ////

void __fastcall Dtor_00c36350(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6a10;
  SetVtable_00da14e0_00be87b0(param_1);
  return;
}


//// FUNCTION FUN_00c36370 @ 00c36370 ////

void __thiscall FUN_00c36370(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0x20) + 0x2c))(*(undefined4 *)((int)this + 4),param_1,param_2)
  ;
  return;
}


//// FUNCTION FUN_00c36390 @ 00c36390 ////

void __thiscall
FUN_00c36390(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(**(int **)((int)this + 0x20) + 0x30))
            (*(undefined4 *)((int)this + 4),param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_00c363e0 @ 00c363e0 ////

void __thiscall FUN_00c363e0(void *this,undefined4 *param_1)

{
  FUN_00be8720(this,*param_1,param_1[1],param_1[2],param_1[3]);
  *(undefined4 *)((int)this + 0x18) = param_1[4];
  *(undefined4 *)((int)this + 0x1c) = param_1[5];
  *(undefined4 *)((int)this + 0x20) = param_1[6];
  return;
}


//// FUNCTION ScalarDeletingDtor_00c36420 @ 00c36420 ////

undefined4 * __thiscall ScalarDeletingDtor_00c36420(void *this,byte param_1)

{
  Dtor_00c36350(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c364d0 @ 00c364d0 ////

void __thiscall FUN_00c364d0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1[1] == 0) {
    LH_Assert(&param_1,"Options.ResourceParams != NULL\n");
    DebugBreak();
  }
  FUN_00be7090(this,*puVar1,(undefined4 *)puVar1[1]);
  *(undefined4 *)((int)this + 0x30) = puVar1[2];
  return;
}


//// FUNCTION FUN_00c36520 @ 00c36520 ////

void __thiscall FUN_00c36520(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_00be87f0(this,param_2);
  *(undefined4 *)((int)this + 0x24) = param_1;
  return;
}


//// FUNCTION Ctor_vt00da6a48_00c36550 @ 00c36550 ////

undefined4 * __thiscall Ctor_vt00da6a48_00c36550(void *this,undefined4 param_1)

{
  FUN_00c61a40(this,param_1);
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00c36980_00da6a48;
  FUN_00c36830((undefined4 *)((int)this + 8));
  return this;
}


//// FUNCTION Dtor_00c36580 @ 00c36580 ////

void __fastcall Dtor_00c36580(undefined4 *param_1)

{
  undefined4 *this;
  int iVar1;
  undefined4 *this_00;
  uint uVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d04c03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c36980_00da6a48;
  this = param_1 + 2;
  local_4 = 1;
  uVar3 = 0;
  iVar1 = GetField_8_00bdbad0((int)this);
  if (iVar1 != 0) {
    do {
      this_00 = (undefined4 *)LH_Array_GetAt_00bdbae0(this,uVar3);
      if (this_00 != (undefined4 *)0x0) {
        LH_Array_SetFilledSize_00be8b60(this_00,0);
        LH_Array_FreeBuffer_00be8ba0(this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
      uVar3 = uVar3 + 1;
      uVar2 = GetField_8_00bdbad0((int)this);
    } while (uVar3 < uVar2);
  }
  LH_Array_SetFilledSize_00c36800(this,0);
  local_4 = local_4 & 0xffffff00;
  LH_Array_FreeBuffer_00c36840(this);
  local_4 = 0xffffffff;
  SetVtable_00dad3f8_00c61a60(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c36640 @ 00c36640 ////

uint __thiscall FUN_00c36640(void *this,int param_1)

{
  void *this_00;
  bool bVar1;
  int iVar2;
  void *this_01;
  void *this_02;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  this_00 = (void *)((int)this + 8);
  uVar4 = 0;
  iVar2 = GetField_8_00bdbad0((int)this_00);
  uVar5 = 0;
  if (iVar2 != 0) {
    do {
      this_01 = (void *)LH_Array_GetAt_00bdbae0(this_00,uVar4);
      if (this_01 != (void *)0x0) {
        uVar5 = 0;
        iVar2 = GetField_8_00bdbac0((int)this_01);
        if (iVar2 != 0) {
          do {
            this_02 = (void *)LH_Array_GetAt_00bdba80(this_01,uVar5);
            if (this_02 != (void *)0x0) {
              bVar1 = FUN_00be7070(this_02,param_1);
              if (bVar1) {
                return CONCAT31(extraout_var,1);
              }
            }
            uVar5 = uVar5 + 1;
            uVar3 = GetField_8_00bdbac0((int)this_01);
          } while (uVar5 < uVar3);
        }
      }
      uVar4 = uVar4 + 1;
      uVar5 = GetField_8_00bdbad0((int)this_00);
    } while (uVar4 < uVar5);
  }
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_00c366c0 @ 00c366c0 ////

undefined4 __thiscall FUN_00c366c0(void *this,uint param_1)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  
  this_00 = (void *)LH_Array_GetAt_00bdbae0((void *)((int)this + 8),param_1);
  if (this_00 != (void *)0x0) {
    iVar1 = GetField_8_00bdbac0((int)this_00);
    if (iVar1 != 0) {
      uVar2 = LH_Array_GetAt_00bdba80(this_00,0);
      FUN_00c36950(this_00);
      return uVar2;
    }
  }
  return 0;
}


//// FUNCTION LH_Array_SetAt_00c367c0 @ 00c367c0 ////

void __thiscall LH_Array_SetAt_00c367c0(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    *(undefined4 *)(*(int *)this + uVar1 * 4) = param_2;
    return;
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


//// FUNCTION LH_Array_SetFilledSize_00c36800 @ 00c36800 ////

void __thiscall LH_Array_SetFilledSize_00c36800(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) < param_1) {
    LH_Assert(&param_1,"NewSize <= FilledSize\n");
    DebugBreak();
  }
  *(uint *)((int)this + 8) = uVar1;
  return;
}


//// FUNCTION FUN_00c36830 @ 00c36830 ////

void __fastcall FUN_00c36830(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00c36840 @ 00c36840 ////

void __fastcall LH_Array_FreeBuffer_00c36840(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00c368f0 @ 00c368f0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c368f0(void *this,byte param_1)

{
  LH_Array_FreeBuffer_00be8ba0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c36910 @ 00c36910 ////

void __thiscall FUN_00c36910(void *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = LH_Array_GetAt_00bdba80(this,param_1);
  uVar2 = LH_Array_GetAt_00bdba80(this,param_2);
  LH_Array_SetAt_00be8b20(this,param_1,uVar2);
  LH_Array_SetAt_00be8b20(this,param_2,uVar1);
  return;
}


//// FUNCTION FUN_00c36950 @ 00c36950 ////

void __fastcall FUN_00c36950(void *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = GetField_8_00bdbac0((int)param_1);
  if (1 < uVar1) {
    GetField_8_00bdbac0((int)param_1);
    uVar2 = FUN_00c61a90();
    FUN_00c36910(param_1,(int)uVar2 + 1,0);
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00c36980 @ 00c36980 ////

undefined4 * __thiscall ScalarDeletingDtor_00c36980(void *this,byte param_1)

{
  Dtor_00c36580(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00da6a68_00c369a0 @ 00c369a0 ////

undefined4 * __thiscall Ctor_vt00da6a68_00c369a0(void *this,undefined4 param_1)

{
  FUN_00c61a40(this,param_1);
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00c36a80_00da6a68;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}


//// FUNCTION Dtor_00c369c0 @ 00c369c0 ////

void __fastcall Dtor_00c369c0(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00c36a80_00da6a68;
  param_1[2] = 0;
  SetVtable_00dad3f8_00c61a60(param_1);
  return;
}


//// FUNCTION FUN_00c36a00 @ 00c36a00 ////

void * __thiscall FUN_00c36a00(void *this,void *param_1,void *param_2,int *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if (*(int *)((int)this + 8) == 0) {
    return (void *)0x0;
  }
  if (param_3 != (int *)0x0) {
    puVar1 = (undefined4 *)FUN_00be7050(*(int *)((int)this + 8));
    (**(code **)(*param_3 + 4))(1,*puVar1);
  }
  pvVar2 = FUN_00bc66e0(param_1,*(int **)((int)this + 8),0,param_2,(int *)0x0,(int *)0x0);
  if (pvVar2 != (void *)0x0) {
    *(void **)((int)pvVar2 + 0x58) = this;
  }
  return pvVar2;
}


//// FUNCTION ScalarDeletingDtor_00c36a80 @ 00c36a80 ////

undefined4 * __thiscall ScalarDeletingDtor_00c36a80(void *this,byte param_1)

{
  Dtor_00c369c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00da6a88_00c36ab0 @ 00c36ab0 ////

undefined4 * __thiscall Ctor_vt00da6a88_00c36ab0(void *this,undefined4 param_1)

{
  FUN_00c61a40(this,param_1);
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00c36c50_00da6a88;
  FUN_00be8b90((undefined4 *)((int)this + 8));
  return this;
}


//// FUNCTION Dtor_00c36ae0 @ 00c36ae0 ////

void __fastcall Dtor_00c36ae0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d04c23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c36c50_00da6a88;
  local_4 = 1;
  LH_Array_SetFilledSize_00be8b60(param_1 + 2,0);
  local_4 = local_4 & 0xffffff00;
  LH_Array_FreeBuffer_00be8ba0(param_1 + 2);
  local_4 = 0xffffffff;
  SetVtable_00dad3f8_00c61a60(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c36ba0 @ 00c36ba0 ////

undefined4 __fastcall FUN_00c36ba0(int param_1)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (void *)(param_1 + 8);
  iVar1 = GetField_8_00bdbac0((int)this);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = LH_Array_GetAt_00bdba80(this,0);
  FUN_00c36950(this);
  return uVar2;
}


//// FUNCTION ScalarDeletingDtor_00c36c50 @ 00c36c50 ////

undefined4 * __thiscall ScalarDeletingDtor_00c36c50(void *this,byte param_1)

{
  Dtor_00c36ae0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c36c70 @ 00c36c70 ////

uint __fastcall FUN_00c36c70(int param_1)

{
  switch(*(undefined2 *)(param_1 + 0x16)) {
  case 2:
  case 0x11:
  case 0x50:
  case 0x69:
    return (uint)(*(int *)(param_1 + 0xc) * 1000) /
           (((uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x18) * 9 & 0x3fffffff) >> 4);
  default:
    return (uint)(*(int *)(param_1 + 0xc) * 1000) /
           ((uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x18) * 2);
  }
}


//// FUNCTION FUN_00c36d40 @ 00c36d40 ////

uint __fastcall FUN_00c36d40(int param_1)

{
  if ((-1 < *(int *)(param_1 + 0x1c)) && (-1 < *(int *)(param_1 + 0x20))) {
    return (uint)(*(int *)(param_1 + 0x1c) * 1000) / *(uint *)(param_1 + 0x18);
  }
  return 0;
}


//// FUNCTION FUN_00c36d60 @ 00c36d60 ////

uint __fastcall FUN_00c36d60(int param_1)

{
  if ((-1 < *(int *)(param_1 + 0x1c)) && (-1 < *(int *)(param_1 + 0x20))) {
    return (uint)(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) + 1) * 1000) /
           *(uint *)(param_1 + 0x18);
  }
  return 0;
}


//// FUNCTION FUN_00c36db0 @ 00c36db0 ////

undefined4 * __fastcall FUN_00c36db0(undefined4 *param_1)

{
  *param_1 = 0;
  Ctor_vt00d9feb8_00be1e00(param_1 + 1);
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}


//// FUNCTION FUN_00c36de0 @ 00c36de0 ////

void __fastcall FUN_00c36de0(int param_1)

{
  PKStringsCHeapString_Dtor((undefined4 *)(param_1 + 4));
  return;
}


//// FUNCTION FUN_00c36df0 @ 00c36df0 ////

undefined4 __thiscall FUN_00c36df0(void *this,int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = LH_Archive_TransferU32(param_1);
  if (cVar1 != '\0') {
    bVar2 = LH_Archive_SerializeString(param_1,(int *)((int)this + 4));
    if (bVar2) {
      cVar1 = LH_Archive_TransferU32(param_1);
      if (cVar1 != '\0') {
        cVar1 = LH_Archive_TransferU32(param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_00be65c0(param_1);
          if (cVar1 != '\0') {
            cVar1 = FUN_00be65c0(param_1);
            if (cVar1 != '\0') {
              cVar1 = LH_Archive_TransferU32(param_1);
              if (cVar1 != '\0') {
                cVar1 = FUN_00be65a0(param_1);
                if (cVar1 != '\0') {
                  cVar1 = FUN_00be65a0(param_1);
                  if (cVar1 != '\0') {
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


//// FUNCTION Ctor_vt00da6aa8_00c36e90 @ 00c36e90 ////

undefined4 * __thiscall Ctor_vt00da6aa8_00c36e90(void *this,undefined4 param_1)

{
  FUN_00c61a40(this,param_1);
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00c36f30_00da6aa8;
  return this;
}


//// FUNCTION Dtor_00c36eb0 @ 00c36eb0 ////

void __fastcall Dtor_00c36eb0(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00c36f30_00da6aa8;
  SetVtable_00dad3f8_00c61a60(param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c36f30 @ 00c36f30 ////

undefined4 * __thiscall ScalarDeletingDtor_00c36f30(void *this,byte param_1)

{
  Dtor_00c36eb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c36fc0 @ 00c36fc0 ////

undefined2 * __fastcall FUN_00c36fc0(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  Ctor_vt00d9feb8_00be1e00((undefined4 *)(param_1 + 6));
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return param_1;
}


//// FUNCTION FUN_00c37020 @ 00c37020 ////

void __fastcall FUN_00c37020(int param_1)

{
  PKStringsCHeapString_Dtor((undefined4 *)(param_1 + 0xc));
  return;
}


//// FUNCTION FUN_00c37030 @ 00c37030 ////

undefined4 __thiscall FUN_00c37030(void *this,int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = LH_Archive_TransferU32(param_1);
  if (cVar1 != '\0') {
    cVar1 = LH_Archive_TransferU32(param_1);
    if (cVar1 != '\0') {
      bVar2 = LH_Archive_SerializeString(param_1,(int *)((int)this + 0xc));
      if (bVar2) {
        cVar1 = FUN_00be65c0(param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_00be65c0(param_1);
          if (cVar1 != '\0') {
            cVar1 = LH_Archive_TransferU32(param_1);
            if (cVar1 != '\0') {
              cVar1 = FUN_00be65a0(param_1);
              if (cVar1 != '\0') {
                cVar1 = FUN_00be65c0(param_1);
                if (cVar1 != '\0') {
                  cVar1 = FUN_00be65c0(param_1);
                  if (cVar1 != '\0') {
                    cVar1 = FUN_00be65c0(param_1);
                    if (cVar1 != '\0') {
                      cVar1 = FUN_00be65c0(param_1);
                      if (cVar1 != '\0') {
                        cVar1 = LH_Archive_TransferU32(param_1);
                        if (cVar1 != '\0') {
                          cVar1 = FUN_00be65c0(param_1);
                          if (cVar1 != '\0') {
                            cVar1 = FUN_00be65c0(param_1);
                            if (cVar1 != '\0') {
                              cVar1 = FUN_00be65e0(param_1);
                              if (cVar1 != '\0') {
                                cVar1 = FUN_00be65e0(param_1);
                                if (cVar1 != '\0') {
                                  cVar1 = FUN_00be65a0(param_1);
                                  if (cVar1 != '\0') {
                                    cVar1 = FUN_00be65c0(param_1);
                                    if (cVar1 != '\0') {
                                      cVar1 = FUN_00be65d0(param_1);
                                      if (cVar1 != '\0') {
                                        cVar1 = FUN_00be65e0(param_1);
                                        if (cVar1 != '\0') {
                                          cVar1 = FUN_00be65e0(param_1);
                                          if (cVar1 != '\0') {
                                            cVar1 = FUN_00be65e0(param_1);
                                            if (cVar1 != '\0') {
                                              return 1;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00c371f0 @ 00c371f0 ////

undefined4 * __fastcall FUN_00c371f0(undefined4 *param_1)

{
  Ctor_vt00d9feb8_00be1e00(param_1);
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}


//// FUNCTION Dtor_00c37210 @ 00c37210 ////

void __fastcall Dtor_00c37210(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04c38;
  local_c = ExceptionList;
  pvVar1 = (void *)param_1[2];
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),FUN_00c01b80);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  PKStringsCHeapString_Dtor(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c37290 @ 00c37290 ////

void * __thiscall FUN_00c37290(void *this,int param_1)

{
  void *this_00;
  void *this_01;
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04c55;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9feb8_00be2070(this,param_1);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 1;
  PKCAutoDeleteArray_Resize_00c042d0((undefined4 *)((int)this + 8),*(uint *)(param_1 + 0xc));
  local_14 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    ExceptionList = local_c;
    return this;
  }
  do {
    this_00 = (void *)PKCAutoDeleteArray_At_00bd4820((void *)(param_1 + 8),local_14);
    this_01 = (void *)PKCAutoDeleteArray_At_00bd4820((void *)((int)this + 8),local_14);
    PKCAutoDeleteArray_Resize_00bd45c0(this_01,*(uint *)((int)this_00 + 4));
    uVar3 = 0;
    if (*(int *)((int)this_00 + 4) != 0) {
      do {
        puVar1 = (undefined4 *)PKCAutoDeleteArray_At_00bd4710(this_01,uVar3);
        puVar2 = (undefined4 *)PKCAutoDeleteArray_At_00bd4710(this_00,uVar3);
        *puVar1 = *puVar2;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this_00 + 4));
    }
    local_14 = local_14 + 1;
  } while (local_14 < *(uint *)(param_1 + 0xc));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c37390 @ 00c37390 ////

undefined4 __fastcall FUN_00c37390(uint param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = LH_Archive_SerializeString(param_1,param_2);
  if (bVar1) {
    cVar2 = FUN_00c37470(param_1,param_2 + 2);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00c373c0 @ 00c373c0 ////

void __fastcall FUN_00c373c0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),FUN_00c01b80);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  return;
}


//// FUNCTION FUN_00c373f0 @ 00c373f0 ////

uint __thiscall FUN_00c373f0(void *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  
  bVar1 = LH_Archive_IsLoading(param_1);
  if (bVar1) {
    uVar2 = LH_Archive_TransferU32(param_1);
    if ((char)uVar2 == '\0') {
LAB_00c3745f:
      return uVar2 & 0xffffff00;
    }
    PKCAutoDeleteArray_Resize_00c042d0(this,param_1);
  }
  else {
    uVar2 = LH_Archive_TransferU32(param_1);
    if ((char)uVar2 == '\0') goto LAB_00c3745f;
  }
  uVar4 = 0;
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    do {
      pvVar3 = (void *)PKCAutoDeleteArray_At_00bd4820(this,uVar4);
      uVar2 = FUN_00bd5530(param_1,pvVar3);
      if ((char)uVar2 == '\0') {
        return uVar2 & 0xffffff00;
      }
      uVar2 = *(uint *)((int)this + 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION FUN_00c37470 @ 00c37470 ////

void __fastcall FUN_00c37470(uint param_1,void *param_2)

{
  FUN_00c373f0(param_2,param_1);
  return;
}


//// FUNCTION FUN_00c37480 @ 00c37480 ////

undefined4 __thiscall FUN_00c37480(void *this,int param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = LH_Archive_SerializeString(param_1,this);
  if (bVar1) {
    cVar2 = LH_Archive_TransferU32(param_1);
    if (cVar2 != '\0') {
      cVar2 = LH_Archive_TransferU32(param_1);
      if (cVar2 != '\0') {
        cVar2 = FUN_00be65a0(param_1);
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}


//// FUNCTION Ctor_vt00da6ac8_00c374d0 @ 00c374d0 ////

undefined4 * __fastcall Ctor_vt00da6ac8_00c374d0(undefined4 *param_1)

{
  FUN_00c101c0(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c37540_00da6ac8;
  param_1[3] = 0;
  return param_1;
}


//// FUNCTION Dtor_00c37500 @ 00c37500 ////

void __fastcall Dtor_00c37500(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00c37540_00da6ac8;
  Dtor_00c101e0(param_1);
  return;
}


//// FUNCTION FUN_00c37510 @ 00c37510 ////

uint __fastcall FUN_00c37510(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) != -1) {
    iVar1 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = iVar1;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  uVar2 = FUN_00c37ce0(&DAT_010da230,-6);
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00c37530 @ 00c37530 ////

void __fastcall FUN_00c37530(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00c37540 @ 00c37540 ////

undefined4 * __thiscall ScalarDeletingDtor_00c37540(void *this,byte param_1)

{
  Dtor_00c37500(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00da326c_00c375a0 @ 00c375a0 ////

undefined4 * __fastcall Ctor_vt00da326c_00c375a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04c68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da325c_00c19300(param_1);
  local_4 = 0;
  *param_1 = &PTR_LAB_00da326c;
  FUN_00c61b10(param_1 + 0xc);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c375f0 @ 00c375f0 ////

int __thiscall FUN_00c375f0(void *this,int *param_1)

{
  int iVar1;
  
  if (6 < (uint)param_1[1]) {
    return -3;
  }
  iVar1 = FUN_00c19330(this,param_1);
  if ((((-1 < iVar1) && (DAT_010d5dc4 != 0)) && (*(int *)(DAT_010d5dc4 + 0x1d4) != 0)) &&
     ((uint)param_1[1] < 3)) {
    iVar1 = CAudioBuffer_Create((void *)((int)this + 0x30),(int *)((int)this + 0x10));
    if (iVar1 < 0) {
      FUN_00c193a0((int)this);
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00c37660 @ 00c37660 ////

void __fastcall FUN_00c37660(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00c193a0(param_1);
    if ((DAT_010d5dc4 != 0) && (*(int *)(DAT_010d5dc4 + 0x1d4) != 0)) {
      Audio_DeleteBuffers((undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00c37690 @ 00c37690 ////

undefined4 __fastcall FUN_00c37690(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  if (((DAT_010d5dc4 != 0) && (*(int *)(DAT_010d5dc4 + 0x1d4) != 0)) &&
     ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
    iVar2 = FUN_00c193f0(param_1);
    if (2 < *(uint *)(iVar2 + 4)) {
      return 0xfffffff2;
    }
    piVar3 = (int *)FUN_00c193f0(param_1);
    uVar1 = CAudioBuffer_Create((void *)(param_1 + 0x30),piVar3);
  }
  return uVar1;
}


//// FUNCTION FUN_00c376e0 @ 00c376e0 ////

int __thiscall FUN_00c376e0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c19430(this,param_1);
  if (iVar1 < 0) {
    return iVar1;
  }
  if ((DAT_010d5dc4 != 0) && (*(int *)(DAT_010d5dc4 + 0x1d4) != 0)) {
    if (((*(byte *)((int)this + 0x38) & 1) != 0) && (2 < (uint)param_1[1])) {
      Audio_DeleteBuffers((undefined4 *)((int)this + 0x30));
      return iVar1;
    }
    iVar1 = FUN_00c622d0((void *)((int)this + 0x30),(int *)((int)this + 0x10));
    if (iVar1 < 0) {
      FUN_00c193a0((int)this);
      return iVar1;
    }
  }
  return 0;
}


//// FUNCTION ScalarDeletingDtor_00c37750 @ 00c37750 ////

undefined4 * __thiscall ScalarDeletingDtor_00c37750(void *this,byte param_1)

{
  Dtor_00c0e2a0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION Dtor_00c37770 @ 00c37770 ////

void __fastcall Dtor_00c37770(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d04cb4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c377f0_00da6ad0;
  local_4 = 4;
  FUN_00c37db0((int)param_1);
  local_4._0_1_ = 3;
  Dtor_00c0f200(param_1 + 0x16);
  local_4._0_1_ = 2;
  Dtor_00c0f200(param_1 + 0x11);
  local_4._0_1_ = 1;
  Dtor_00c0f200(param_1 + 0xc);
  local_4 = (uint)local_4._1_3_ << 8;
  Dtor_00c0f200(param_1 + 7);
  *param_1 = &PTR_LAB_00d9fbe8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c377f0 @ 00c377f0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c377f0(void *this,byte param_1)

{
  Dtor_00c37770(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c37940 @ 00c37940 ////

undefined4 * __cdecl FUN_00c37940(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04ccb;
  local_c = ExceptionList;
  if (DAT_010da2e4 < 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_00c0ef90(0x40);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = Ctor_vt00da326c_00c375a0(puVar1);
    }
    local_4 = 0xffffffff;
  }
  else {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)GetField_8_00c0f100(0x10da2d8);
  }
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_00c375f0(puVar1,param_1);
    if (iVar2 != 0) {
      FUN_00c37ce0(&DAT_010da230,iVar2);
    }
    if (-1 < iVar2) {
      if (-1 < DAT_010da2e4) {
        FUN_00c0f190(0x10da2d8);
      }
      FUN_00c0f110(&DAT_010da2d8,puVar1);
      ExceptionList = local_c;
      return puVar1;
    }
    if ((DAT_010da2e4 < 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00c37a20 @ 00c37a20 ////

void __cdecl FUN_00c37a20(int *param_1)

{
  FUN_00c0f140(&DAT_010da2d8,(int)param_1);
  if (-1 < DAT_010da2e4) {
    (**(code **)(*param_1 + 4))();
    FUN_00c0f160(&DAT_010da2d8,param_1);
    return;
  }
  if (param_1 != (int *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}


//// FUNCTION Ctor_vt00da6ce0_00c37a90 @ 00c37a90 ////

undefined4 * __fastcall Ctor_vt00da6ce0_00c37a90(undefined4 *param_1)

{
  FUN_00c101c0(param_1);
  *param_1 = &PTR_LAB_00da6ce0;
  param_1[0x12] = 0x80000000;
  return param_1;
}


//// FUNCTION Ctor_vt00da6ce4_00c37ae0 @ 00c37ae0 ////

undefined4 * __fastcall Ctor_vt00da6ce4_00c37ae0(undefined4 *param_1)

{
  FUN_00c101c0(param_1);
  *param_1 = &PTR_LAB_00da6ce4;
  param_1[0x1f] = 0;
  return param_1;
}


//// FUNCTION FUN_00c37b00 @ 00c37b00 ////

void __fastcall FUN_00c37b00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da6ce4;
  local_4 = 0;
  FUN_00c62420((int)param_1);
  local_4 = 0xffffffff;
  Dtor_00c101e0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Dtor_00c37b80 @ 00c37b80 ////

void __fastcall Dtor_00c37b80(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d04d13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_ScalarDeletingDtor_00c37c10_00da6ce8;
  local_4 = 1;
  FUN_00c4ab50(param_1);
  local_4 = local_4 & 0xffffff00;
  FUN_00c4af10(param_1 + 0x15);
  local_4 = 0xffffffff;
  Dtor_00c101e0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c37c10 @ 00c37c10 ////

int * __thiscall ScalarDeletingDtor_00c37c10(void *this,byte param_1)

{
  Dtor_00c37b80(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c37c30 @ 00c37c30 ////

undefined8 __fastcall FUN_00c37c30(int param_1)

{
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  return CONCAT44((local_8.field0.HighPart - *(int *)(param_1 + 0x194)) -
                  (uint)(local_8.field0.LowPart < *(uint *)(param_1 + 400)),
                  local_8.field0.LowPart - *(uint *)(param_1 + 400));
}


//// FUNCTION FUN_00c37ce0 @ 00c37ce0 ////

void __thiscall FUN_00c37ce0(void *this,int param_1)

{
  if (DAT_010da220 == 0) {
    DAT_010da220 = param_1;
    if (*(code **)((int)this + 0x7c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c37cfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((int)this + 0x7c))();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00c37db0 @ 00c37db0 ////

void __fastcall FUN_00c37db0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    LinkedList_ClearAndDestructor(param_1 + 0x1c);
    LinkedList_ClearAndDestructor(param_1 + 0x30);
    LinkedList_ClearAndDestructor(param_1 + 0x44);
    LinkedList_ClearAndDestructor(param_1 + 0x58);
    puVar1 = *(undefined4 **)(param_1 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
        _free(puVar1 + -1);
      }
      (**(code **)*puVar1)(3);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
        _free(puVar1 + -1);
      }
      (**(code **)*puVar1)(3);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
        _free(puVar1 + -1);
      }
      (**(code **)*puVar1)(3);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
        _free(puVar1 + -1);
      }
      (**(code **)*puVar1)(3);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    uVar4 = FUN_00c0f0e0(0x10da2d8);
    piVar2 = DAT_010da2dc;
    if ((char)uVar4 != '\0') {
      while (piVar3 = piVar2, piVar3 != (int *)0x0) {
        piVar2 = (int *)piVar3[2];
        if (((uint)piVar3[0xb] >> 2 & 1) != 0) {
          FUN_00c37a20(piVar3);
        }
      }
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00c44e20(*(int *)(param_1 + 0x18));
      if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00c37ee0 @ 00c37ee0 ////

undefined8 __fastcall FUN_00c37ee0(int param_1)

{
  int iVar1;
  LARGE_INTEGER local_8;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    QueryPerformanceCounter(&local_8);
    return CONCAT44((local_8.field0.HighPart - *(int *)(iVar1 + 0x194)) -
                    (uint)(local_8.field0.LowPart < *(uint *)(iVar1 + 400)),
                    local_8.field0.LowPart - *(uint *)(iVar1 + 400));
  }
  return 0;
}


//// FUNCTION FUN_00c37f20 @ 00c37f20 ////

void __thiscall FUN_00c37f20(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *(undefined4 *)((int)this + 0x80);
  *param_2 = *(undefined4 *)((int)this + 0x84);
  return;
}


//// FUNCTION FUN_00c37f60 @ 00c37f60 ////

void __thiscall FUN_00c37f60(void *this,int param_1)

{
  float fVar1;
  
  if (param_1 == 1) {
    fVar1 = -1.0;
  }
  else {
    fVar1 = 1.0;
  }
  if (fVar1 != *(float *)((int)this + 0x8c)) {
    *(float *)((int)this + 0x8c) = fVar1;
    *(uint *)((int)this + 0xa4) = *(uint *)((int)this + 0xa4) | 0xbf8000;
    return;
  }
  return;
}


//// FUNCTION FUN_00c38030 @ 00c38030 ////

void __thiscall FUN_00c38030(void *this,float param_1)

{
  if (*(float *)((int)this + 0x9c) != param_1) {
    *(float *)((int)this + 0x9c) = param_1;
    *(uint *)((int)this + 0xa4) = *(uint *)((int)this + 0xa4) | 0x800000;
  }
  return;
}


//// FUNCTION FUN_00c380b0 @ 00c380b0 ////

void __fastcall FUN_00c380b0(int param_1)

{
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 0x80000000;
  return;
}


//// FUNCTION FUN_00c380c0 @ 00c380c0 ////

void __fastcall FUN_00c380c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  bool bVar5;
  bool bVar6;
  int *this;
  void *this_00;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float local_10;
  LARGE_INTEGER local_8;
  
  uVar1 = *(uint *)(param_1 + 0xa4);
  if ((int)uVar1 < 0) {
    *(uint *)(param_1 + 0xa4) = uVar1 & 0x7fffffff;
    iVar8 = *(int *)(param_1 + 0x48);
    while (iVar8 != 0) {
      iVar9 = *(int *)(iVar8 + 8);
      FUN_00c39220(iVar8);
      iVar8 = iVar9;
    }
    local_10 = (float)(DAT_010daa08 | DAT_010da2ec | *(uint *)(param_1 + 0xa4));
  }
  else {
    local_10 = 0.0;
  }
  cVar7 = FUN_00bdff10(*(int *)(param_1 + 4));
  bVar6 = true;
  while (cVar7 != '\0') {
    bVar5 = false;
    if (bVar6) {
      iVar8 = *(int *)(param_1 + 4);
      QueryPerformanceCounter(&local_8);
      uVar2 = *(uint *)(iVar8 + 400);
      iVar9 = local_8.field0.LowPart - uVar2;
      iVar8 = (local_8.field0.HighPart - *(int *)(iVar8 + 0x194)) -
              (uint)(local_8.field0.LowPart < uVar2);
      bVar5 = false;
      piVar3 = *(int **)(param_1 + 0x34);
      while (this = piVar3, this != (int *)0x0) {
        piVar3 = (int *)this[2];
        if ((int)uVar1 < 0) {
          iVar11 = param_1 + 0x58;
          iVar10 = param_1 + 0x44;
          fVar12 = local_10;
          cVar7 = (**(code **)(*this + 4))();
          FUN_00c63ba0((void *)(-(uint)(cVar7 != '\0') & (uint)this),iVar10,iVar11,fVar12);
        }
        if ((this[4] & 0x217U) != 0) {
          FUN_00c4a3f0(this,iVar9,iVar8);
          bVar5 = true;
        }
      }
      Audio_ProcessMixingIfNeeded(*(int *)(param_1 + 4));
      pvVar4 = *(void **)(param_1 + 0x20);
      while (this_00 = pvVar4, this_00 != (void *)0x0) {
        pvVar4 = *(void **)((int)this_00 + 8);
        if ((*(uint *)((int)this_00 + 0x10) & 0x217) != 0) {
          FUN_00c4a3f0(this_00,iVar9,iVar8);
          bVar5 = true;
        }
      }
    }
    iVar8 = *(int *)(param_1 + 0x5c);
    while (iVar8 != 0) {
      iVar9 = *(int *)(iVar8 + 8);
      if ((int)uVar1 < 0) {
        NormalizeVectorPair(iVar8);
      }
      FUN_00c62a40(iVar8);
      iVar8 = iVar9;
    }
    FUN_00be0090(*(int *)(param_1 + 4));
    DAT_010da2ec = 0;
    DAT_010daa08 = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    cVar7 = FUN_00bdff10(*(int *)(param_1 + 4));
    bVar6 = bVar5;
  }
  return;
}


//// FUNCTION FUN_00c38260 @ 00c38260 ////

void __thiscall FUN_00c38260(void *this,int *param_1)

{
  char cVar1;
  void *this_00;
  
  (**(code **)(*param_1 + 0x10))();
  cVar1 = (**(code **)(*param_1 + 4))();
  if (cVar1 == '\0') {
    this_00 = (void *)((int)this + 0x1c);
  }
  else {
    this_00 = (void *)((int)this + 0x30);
  }
  FUN_00c0f140(this_00,(int)param_1);
  if (-1 < *(int *)((int)this_00 + 0xc)) {
    FUN_00c0f160(this_00,param_1);
    return;
  }
  (**(code **)*param_1)(1);
  return;
}


//// FUNCTION FUN_00c382b0 @ 00c382b0 ////

void __thiscall FUN_00c382b0(void *this,undefined4 *param_1)

{
  param_1[0x12] = 0x80000000;
  FUN_00c0f140((void *)((int)this + 0x44),(int)param_1);
  if (-1 < *(int *)((int)this + 0x50)) {
    FUN_00c0f160((void *)((int)this + 0x44),param_1);
    return;
  }
  (**(code **)*param_1)(1);
  return;
}


//// FUNCTION FUN_00c382f0 @ 00c382f0 ////

void __thiscall FUN_00c382f0(void *this,undefined4 *param_1)

{
  FUN_00c62420((int)param_1);
  FUN_00c0f140((void *)((int)this + 0x58),(int)param_1);
  if (-1 < *(int *)((int)this + 100)) {
    FUN_00c0f160((void *)((int)this + 0x58),param_1);
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}


//// FUNCTION FUN_00c38400 @ 00c38400 ////

void __fastcall FUN_00c38400(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6ce0;
  param_1[0x12] = 0x80000000;
  Dtor_00c101e0(param_1);
  return;
}


//// FUNCTION Ctor_vt00da6ad0_00c38420 @ 00c38420 ////

undefined4 * __fastcall Ctor_vt00da6ad0_00c38420(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04d49;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c377f0_00da6ad0;
  FUN_00c0f000(param_1 + 7);
  local_4._0_1_ = 1;
  FUN_00c0f000(param_1 + 0xc);
  local_4._0_1_ = 2;
  FUN_00c0f000(param_1 + 0x11);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00c0f000(param_1 + 0x16);
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x29] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0x3f800000;
  param_1[0x27] = 0x3f800000;
  param_1[0x28] = 0x3f800000;
  param_1[0x1e] = 1;
  param_1[0x22] = 5000;
  param_1[0x26] = 0x3b46980c;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION Ctor_vt00da6d10_00c385c0 @ 00c385c0 ////

undefined4 * __fastcall Ctor_vt00da6d10_00c385c0(undefined4 *param_1)

{
  Ctor_vt00da6ce8_00c49740(param_1);
  *param_1 = &PTR_LAB_00da6d10;
  return param_1;
}


//// FUNCTION FUN_00c386b0 @ 00c386b0 ////

int * __thiscall FUN_00c386b0(void *this,undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04d6b;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x6c) < 1) {
    ExceptionList = &local_c;
    if (*(int *)((int)this + 0x6c) != -1) goto LAB_00c3874e;
    ExceptionList = &local_c;
    local_10 = (undefined4 *)FUN_00c0ef90(0x1bc);
    local_4 = 0;
    if (local_10 == (undefined4 *)0x0) {
      local_4 = 0xffffffff;
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = Ctor_vt00dad424_00c641d0(local_10);
      local_4 = 0xffffffff;
    }
  }
  else {
    ExceptionList = &local_c;
    piVar2 = (int *)GetField_8_00c0f100((int)this + 0x1c);
    if (piVar2 == (int *)0x0) {
LAB_00c3874e:
      if (DAT_010da220 != 0) {
        ExceptionList = local_c;
        return (int *)0x0;
      }
      DAT_010da220 = 0xfffffff7;
      if (DAT_010da2ac == (code *)0x0) {
        DAT_010da220 = 0xfffffff7;
        ExceptionList = local_c;
        return (int *)0x0;
      }
      (*DAT_010da2ac)(0xfffffff7);
      ExceptionList = this;
      return (int *)0x0;
    }
    cVar1 = (**(code **)(*piVar2 + 4))();
    piVar2 = (int *)((uint)piVar2 & ~-(uint)(cVar1 != '\0'));
    local_10 = this;
  }
  if (piVar2 == (int *)0x0) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  cVar1 = (**(code **)(*piVar2 + 0xc))(param_1);
  if (cVar1 == '\0') {
    FUN_00c38260(this,piVar2);
    piVar2 = (int *)0x0;
  }
  if (0 < *(int *)((int)this + 0x6c)) {
    FUN_00c0f190((int)this + 0x1c);
  }
  FUN_00c0f110((void *)((int)this + 0x1c),piVar2);
  ExceptionList = local_10;
  return piVar2;
}


//// FUNCTION FUN_00c387d0 @ 00c387d0 ////

int * __thiscall FUN_00c387d0(void *this,uint param_1)

{
  char cVar1;
  int *piVar2;
  void *unaff_EBX;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04d8b;
  local_c = ExceptionList;
  if ((~(DAT_00ea7a50 | DAT_00ea7a80) & param_1) == 0) {
    if (*(int *)((int)this + 0x70) < 1) {
      ExceptionList = &local_c;
      if (*(int *)((int)this + 0x70) != -1) goto LAB_00c388f4;
      ExceptionList = &local_c;
      piVar2 = (int *)FUN_00c0ef90(0x1dc);
      local_4 = 0;
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
        local_4 = 0xffffffff;
      }
      else {
        Ctor_vt00da6ce8_00c49740(piVar2);
        *piVar2 = (int)&PTR_LAB_00da6d10;
        local_4 = 0xffffffff;
      }
    }
    else {
      ExceptionList = &local_c;
      piVar2 = (int *)GetField_8_00c0f100((int)this + 0x30);
      if (piVar2 == (int *)0x0) {
LAB_00c388f4:
        if (DAT_010da220 != 0) {
          ExceptionList = local_c;
          return (int *)0x0;
        }
        DAT_010da220 = -9;
        if (DAT_010da2ac == (code *)0x0) {
          DAT_010da220 = 0xfffffff7;
          ExceptionList = local_c;
          return (int *)0x0;
        }
        uVar3 = 0xfffffff7;
        goto LAB_00c38821;
      }
      cVar1 = (**(code **)(*piVar2 + 4))();
      piVar2 = (int *)((uint)piVar2 & -(uint)(cVar1 != '\0'));
    }
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 0xc))(param_1);
      if (cVar1 == '\0') {
        FUN_00c38260(this,piVar2);
        piVar2 = (int *)0x0;
      }
      if (0 < *(int *)((int)this + 0x70)) {
        FUN_00c0f190((int)this + 0x30);
      }
      FUN_00c0f110((void *)((int)this + 0x30),piVar2);
      ExceptionList = unaff_EBX;
      return piVar2;
    }
  }
  else {
    if (DAT_010da220 != 0) {
      return (int *)0x0;
    }
    DAT_010da220 = -8;
    if (DAT_010da2ac == (code *)0x0) {
      DAT_010da220 = 0xfffffff8;
      return (int *)0x0;
    }
    uVar3 = 0xfffffff8;
    ExceptionList = &local_c;
LAB_00c38821:
    (*DAT_010da2ac)(uVar3);
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_00c38920 @ 00c38920 ////

undefined4 * __fastcall FUN_00c38920(void *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04dab;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0x74) < 1) {
    if (*(int *)((int)param_1 + 0x74) != -1) {
      if (DAT_010da220 != 0) {
        return (undefined4 *)0x0;
      }
      DAT_010da220 = 0xfffffff7;
      if (DAT_010da2ac == (code *)0x0) {
        DAT_010da220 = 0xfffffff7;
        return (undefined4 *)0x0;
      }
      ExceptionList = &local_c;
      (*DAT_010da2ac)(0xfffffff7);
      ExceptionList = param_1;
      return (undefined4 *)0x0;
    }
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_00c0ef90(0x4c);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
      local_4 = 0xffffffff;
    }
    else {
      FUN_00c101c0(puVar1);
      *puVar1 = &PTR_LAB_00da6ce0;
      puVar1[0x12] = 0x80000000;
      local_4 = 0xffffffff;
    }
  }
  else {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)GetField_8_00c0f100((int)param_1 + 0x44);
  }
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  uVar2 = FUN_00c390a0((int)puVar1);
  if ((char)uVar2 == '\0') {
    FUN_00c382b0(param_1,puVar1);
    puVar1 = (undefined4 *)0x0;
  }
  if (0 < *(int *)((int)param_1 + 0x74)) {
    FUN_00c0f190((int)param_1 + 0x44);
  }
  FUN_00c0f110((void *)((int)param_1 + 0x44),puVar1);
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_00c38a30 @ 00c38a30 ////

undefined4 * __fastcall FUN_00c38a30(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04dcb;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0x78) < 1) {
    if (*(int *)((int)param_1 + 0x78) != -1) {
      if (DAT_010da220 != 0) {
        return (undefined4 *)0x0;
      }
      DAT_010da220 = 0xfffffff7;
      if (DAT_010da2ac == (code *)0x0) {
        DAT_010da220 = 0xfffffff7;
        return (undefined4 *)0x0;
      }
      ExceptionList = &local_c;
      (*DAT_010da2ac)(0xfffffff7);
      ExceptionList = param_1;
      return (undefined4 *)0x0;
    }
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_00c0ef90(0x80);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
      local_4 = 0xffffffff;
    }
    else {
      FUN_00c101c0(puVar1);
      *puVar1 = &PTR_LAB_00da6ce4;
      puVar1[0x1f] = 0;
      local_4 = 0xffffffff;
    }
  }
  else {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)GetField_8_00c0f100((int)param_1 + 0x58);
  }
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  iVar2 = FUN_00c62370((int)puVar1);
  if (iVar2 != 0) {
    if ((DAT_010da220 == 0) && (DAT_010da220 = iVar2, DAT_010da2ac != (code *)0x0)) {
      (*DAT_010da2ac)(iVar2);
    }
    FUN_00c382f0(param_1,puVar1);
    puVar1 = (undefined4 *)0x0;
  }
  if (0 < *(int *)((int)param_1 + 0x78)) {
    FUN_00c0f190((int)param_1 + 0x58);
  }
  FUN_00c0f110((void *)((int)param_1 + 0x58),puVar1);
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_00c38b60 @ 00c38b60 ////

undefined4 * __fastcall FUN_00c38b60(int param_1)

{
  bool bVar1;
  void *this;
  undefined4 *puVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04deb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)FUN_00c0ef90(0xf0);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    bVar1 = FUN_00be03e0(*(int *)(param_1 + 4));
    puVar2 = (undefined4 *)FUN_00c44df0(this,bVar1);
  }
  local_4 = 0xffffffff;
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar2;
  piVar3 = FUN_00c49390((int)puVar2);
  if (piVar3 != (int *)0x0) {
    if (DAT_010da220 == (int *)0x0) {
      DAT_010da220 = piVar3;
      if (DAT_010da2ac != (code *)0x0) {
        (*DAT_010da2ac)(piVar3);
      }
    }
    FUN_00c44e20((int)puVar2);
    (**(code **)*puVar2)(1);
    puVar2 = (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00c38c20 @ 00c38c20 ////

uint __thiscall FUN_00c38c20(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04e2c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00c0f620(param_1,param_2,(undefined4 *)((int)this + 4));
  if (uVar2 != 0) {
    if (DAT_010da220 == 0) {
      DAT_010da220 = uVar2;
      if (DAT_010da2ac != (code *)0x0) {
        uVar2 = (*DAT_010da2ac)(uVar2);
      }
    }
LAB_00c38c70:
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  uVar4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x6c) = *param_1;
    uVar4 = param_1[1];
    *(undefined4 *)((int)this + 0x70) = uVar4;
    *(undefined4 *)((int)this + 0x74) = param_1[2];
    *(undefined4 *)((int)this + 0x78) = param_1[3];
  }
  iVar1 = *(int *)((int)this + 0x6c);
  if (0 < iVar1) {
    if (iVar1 == 0) {
      piVar3 = operator_new(4);
    }
    else {
      piVar3 = (int *)FUN_00c0ef90(iVar1 * 0x1bc + 4);
    }
    local_4 = 0;
    if (piVar3 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = piVar3 + 1;
      *piVar3 = iVar1;
      _eh_vector_constructor_iterator_(piVar5,0x1bc,iVar1,Ctor_vt00dad424_00c641d0,Dtor_00c37b80);
    }
    local_4 = 0xffffffff;
    *(int **)((int)this + 8) = piVar5;
    uVar2 = 0;
    if (piVar5 == (int *)0x0) goto LAB_00c38c70;
    uVar4 = FUN_00c0f020((void *)((int)this + 0x1c),piVar5,0x1bc,*(int *)((int)this + 0x6c));
  }
  iVar1 = *(int *)((int)this + 0x70);
  if (0 < iVar1) {
    if (iVar1 == 0) {
      piVar3 = operator_new(4);
    }
    else {
      piVar3 = (int *)FUN_00c0ef90(iVar1 * 0x1dc + 4);
    }
    local_4 = 1;
    if (piVar3 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = piVar3 + 1;
      *piVar3 = iVar1;
      _eh_vector_constructor_iterator_(piVar5,0x1dc,iVar1,Ctor_vt00da6d10_00c385c0,Dtor_00c37b80);
    }
    local_4 = 0xffffffff;
    *(int **)((int)this + 0xc) = piVar5;
    uVar2 = 0;
    if (piVar5 == (int *)0x0) goto LAB_00c38c70;
    uVar4 = FUN_00c0f020((void *)((int)this + 0x30),piVar5,0x1dc,*(int *)((int)this + 0x70));
  }
  iVar1 = *(int *)((int)this + 0x74);
  if (0 < iVar1) {
    if (iVar1 == 0) {
      piVar3 = operator_new(4);
    }
    else {
      piVar3 = (int *)FUN_00c0ef90(iVar1 * 0x4c + 4);
    }
    local_4 = 2;
    if (piVar3 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = piVar3 + 1;
      *piVar3 = iVar1;
      _eh_vector_constructor_iterator_(piVar5,0x4c,iVar1,Ctor_vt00da6ce0_00c37a90,FUN_00c38400);
    }
    local_4 = 0xffffffff;
    *(int **)((int)this + 0x10) = piVar5;
    uVar2 = 0;
    if (piVar5 == (int *)0x0) goto LAB_00c38c70;
    uVar4 = FUN_00c0f020((void *)((int)this + 0x44),piVar5,0x4c,*(int *)((int)this + 0x74));
  }
  iVar1 = *(int *)((int)this + 0x78);
  if (0 < iVar1) {
    if (iVar1 == 0) {
      piVar3 = operator_new(4);
    }
    else {
      piVar3 = (int *)FUN_00c0ef90(iVar1 * 0x80 + 4);
    }
    local_4 = 3;
    if (piVar3 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = piVar3 + 1;
      *piVar3 = iVar1;
      _eh_vector_constructor_iterator_(piVar5,0x80,iVar1,Ctor_vt00da6ce4_00c37ae0,FUN_00c37b00);
    }
    local_4 = 0xffffffff;
    *(int **)((int)this + 0x14) = piVar5;
    uVar2 = 0;
    if (piVar5 == (int *)0x0) goto LAB_00c38c70;
    uVar4 = FUN_00c0f020((void *)((int)this + 0x58),piVar5,0x80,*(int *)((int)this + 0x78));
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION Vector3_Normalize @ 00c38fb0 ////

float10 __fastcall Vector3_Normalize(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  if (((*param_1 == 0.0) && (param_1[1] == 0.0)) && (param_1[2] == 0.0)) {
    return (float10)0.0;
  }
  fVar1 = SQRT((float10)*param_1 * (float10)*param_1 +
               (float10)param_1[1] * (float10)param_1[1] + (float10)param_1[2] * (float10)param_1[2]
              );
  if ((float10)1.0 != fVar1) {
    fVar2 = (float10)1.0 / fVar1;
    *param_1 = (float)(fVar2 * (float10)*param_1);
    param_1[1] = (float)(fVar2 * (float10)param_1[1]);
    param_1[2] = (float)(fVar2 * (float10)param_1[2]);
  }
  return fVar1;
}


//// FUNCTION FUN_00c39040 @ 00c39040 ////

void __thiscall FUN_00c39040(void *this,float *param_1,float *param_2)

{
  *(float *)this = param_2[1] * param_1[2] - param_1[1] * param_2[2];
  *(float *)((int)this + 4) = *param_1 * param_2[2] - *param_2 * param_1[2];
  *(float *)((int)this + 8) = param_1[1] * *param_2 - *param_1 * param_2[1];
  return;
}


//// FUNCTION FUN_00c390a0 @ 00c390a0 ////

undefined4 __fastcall FUN_00c390a0(int param_1)

{
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0x7fffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  return 1;
}


//// FUNCTION FUN_00c390e0 @ 00c390e0 ////

void __thiscall FUN_00c390e0(void *this,float *param_1)

{
  if (((*(float *)((int)this + 0xc) != *param_1) || (*(float *)((int)this + 0x10) != param_1[1])) ||
     (*(float *)((int)this + 0x14) != param_1[2])) {
    *(float *)((int)this + 0xc) = *param_1;
    *(float *)((int)this + 0x10) = param_1[1];
    *(float *)((int)this + 0x14) = param_1[2];
    *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) | 0x8000;
  }
  return;
}


//// FUNCTION FUN_00c39130 @ 00c39130 ////

void __thiscall FUN_00c39130(void *this,float *param_1)

{
  if (((*(float *)((int)this + 0x18) != *param_1) || (*(float *)((int)this + 0x1c) != param_1[1]))
     || (*(float *)((int)this + 0x20) != param_1[2])) {
    *(float *)((int)this + 0x18) = *param_1;
    *(float *)((int)this + 0x1c) = param_1[1];
    *(float *)((int)this + 0x20) = param_1[2];
    *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) | 0x10000;
  }
  return;
}


//// FUNCTION FUN_00c39180 @ 00c39180 ////

void __thiscall FUN_00c39180(void *this,float *param_1,float *param_2)

{
  if (((*(float *)((int)this + 0x24) != *param_1) || (*(float *)((int)this + 0x28) != param_1[1]))
     || (*(float *)((int)this + 0x2c) != param_1[2])) {
    *(float *)((int)this + 0x24) = *param_1;
    *(float *)((int)this + 0x28) = param_1[1];
    *(float *)((int)this + 0x2c) = param_1[2];
    *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) | 0x20000;
  }
  if (((*(float *)((int)this + 0x30) != *param_2) || (*(float *)((int)this + 0x34) != param_2[1]))
     || (*(float *)((int)this + 0x38) != param_2[2])) {
    *(float *)((int)this + 0x30) = *param_2;
    *(float *)((int)this + 0x34) = param_2[1];
    *(float *)((int)this + 0x38) = param_2[2];
    *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) | 0x20000;
  }
  return;
}


//// FUNCTION FUN_00c39220 @ 00c39220 ////

void __fastcall FUN_00c39220(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
  DAT_010da2ec = DAT_010da2ec | *(uint *)(param_1 + 0x48) & 0x38000;
  if ((*(uint *)(param_1 + 0x48) & 0x20000) != 0) {
    pfVar1 = (float *)(param_1 + 0x24);
    Vector3_Normalize(pfVar1);
    pfVar2 = (float *)(param_1 + 0x30);
    Vector3_Normalize(pfVar2);
    fVar3 = *pfVar2 * *pfVar1 +
            *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x28) +
            *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x2c);
    if ((fVar3 <= 0.05) && (-0.05 <= fVar3)) {
      FUN_00c39040((void *)(param_1 + 0x3c),pfVar1,pfVar2);
      *(undefined4 *)(param_1 + 0x48) = 0;
      return;
    }
    *pfVar2 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x44) -
              *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x34) =
         *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x2c) -
         *pfVar1 * *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x38) =
         *pfVar1 * *(float *)(param_1 + 0x40) -
         *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}


//// FUNCTION Dtor_00c39400 @ 00c39400 ////

void __fastcall Dtor_00c39400(undefined4 *param_1)

{
  param_1[0xb] = &PTR_LAB_00da6d74;
  param_1[9] = &PTR_LAB_00da6d7c;
  *param_1 = &PTR_LAB_00da6d38;
  return;
}


//// FUNCTION FUN_00c39470 @ 00c39470 ////

int __fastcall FUN_00c39470(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_00c64a60(*(int *)(param_1 + 0xc));
  iVar2 = CONCAT31(extraout_var,bVar1);
  if ((iVar2 == 0) &&
     (iVar2 = CONCAT31(extraout_var,*(char *)(param_1 + 0x1c)), *(char *)(param_1 + 0x1c) == '\0'))
  {
    return (uint)extraout_var << 8;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_00c394b0 @ 00c394b0 ////

void __thiscall FUN_00c394b0(void *this,undefined4 *param_1)

{
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x14) = param_1[1];
  *(undefined4 *)((int)this + 0x18) = *param_1;
  *(undefined4 *)((int)this + 0x10) = param_1[2];
  *(undefined1 *)((int)this + 0x1c) = *(undefined1 *)((int)param_1 + 0x21);
  return;
}


//// FUNCTION FUN_00c394e0 @ 00c394e0 ////

void __thiscall FUN_00c394e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x18))(*(undefined4 *)(param_1 + 0x14));
  (**(code **)(*(int *)this + 0x1c))(*(undefined4 *)(param_1 + 0x18));
  (**(code **)(*(int *)this + 0x24))(*(undefined4 *)(param_1 + 0x1c));
  FUN_00c0e770();
  return;
}


//// FUNCTION Ctor_vt00da6d84_00c39520 @ 00c39520 ////

undefined4 * __fastcall Ctor_vt00da6d84_00c39520(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04e53;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c39b00_00da6d84;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  FUN_00c64db0(param_1 + 9);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00c64c80(param_1 + 0xb);
  param_1[10] = param_1;
  param_1[0xc] = param_1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION LLACodaCChannel_CreateSource @ 00c396c0 ////

void __fastcall LLACodaCChannel_CreateSource(int param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04e88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xc) != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\LLACodaCChannel.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0xb9);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Resource leak: Coda source (");
    FUN_00bbf310(&local_110,*(undefined4 *)(param_1 + 0xc));
    LH_LogErrorMessage(&local_110,") not released.");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    iVar2 = FUN_00c654e0(0x10813);
  }
  else {
    iVar2 = FUN_00c64fe0((uint)(&DAT_00400813 +
                               (-(uint)(*(char *)(*(int *)(param_1 + 4) + 0x50) != '\0') &
                               0xffd00000)));
  }
  *(int *)(param_1 + 0xc) = iVar2;
  if (iVar2 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\LLACodaCChannel.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0xd6);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Error: could not create source");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_00c65140(*(int **)(param_1 + 0xc),&LAB_00c39ae0,0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION LLACodaCChannel_DestroySource @ 00c39890 ////

void __fastcall LLACodaCChannel_DestroySource(int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04e9d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\LLACodaCChannel.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0xe0);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Error: coda source should not be invalid");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  FUN_00c64740(*(int **)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c39970 @ 00c39970 ////

void __thiscall FUN_00c39970(void *this,int param_1,undefined4 *param_2)

{
  FUN_00c394b0(this,param_2);
  *(undefined1 *)((int)this + 0x1f) = 1;
  *(bool *)((int)this + 0x20) = *(int *)((int)this + 0x14) == 1;
  LLACodaCChannel_CreateSource((int)this);
  if ((*(char *)((int)this + 0x20) != '\0') && (*(char *)(param_1 + 0xc) != '\0')) {
    FUN_00c65170(*(int **)((int)this + 0xc),1);
  }
  (**(code **)(*(int *)((int)this + 0x24) + 4))(param_1);
  if ((*(char *)((int)this + 0x20) != '\0') && (*(char *)((int)this + 0x21) != '\0')) {
    FUN_00c65400(*(int **)((int)this + 0xc),0);
  }
  FUN_00c394e0(this,(int)param_2);
  return;
}


//// FUNCTION FUN_00c399f0 @ 00c399f0 ////

void __thiscall FUN_00c399f0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int extraout_ECX;
  
  FUN_00c394b0(this,param_2);
  *(undefined1 *)((int)this + 0x1f) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  LLACodaCChannel_CreateSource(extraout_ECX);
  (**(code **)(*(int *)((int)this + 0x2c) + 4))(*param_1);
  FUN_00c394e0(this,(int)param_2);
  return;
}


//// FUNCTION SetVtable_00da6d38_00c39a30 @ 00c39a30 ////

void __fastcall SetVtable_00da6d38_00c39a30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6d38;
  return;
}


//// FUNCTION SetVtable_00da6d7c_00c39ac0 @ 00c39ac0 ////

void __fastcall SetVtable_00da6d7c_00c39ac0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6d7c;
  return;
}


//// FUNCTION SetVtable_00da6d74_00c39ad0 @ 00c39ad0 ////

void __fastcall SetVtable_00da6d74_00c39ad0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6d74;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c39b00 @ 00c39b00 ////

undefined4 * __thiscall ScalarDeletingDtor_00c39b00(void *this,byte param_1)

{
  Dtor_00c39400(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00da6e68_00c39b30 @ 00c39b30 ////

void __fastcall SetVtable_00da6e68_00c39b30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6e68;
  return;
}


//// FUNCTION FUN_00c39b40 @ 00c39b40 ////

int __fastcall FUN_00c39b40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c64a80(*(int *)(*(int *)(param_1 + 4) + 0xc));
  return iVar1 + *(int *)(param_1 + 0x20);
}


//// FUNCTION FUN_00c39b60 @ 00c39b60 ////

void __fastcall FUN_00c39b60(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  
  bVar2 = FUN_00c64a60(*(int *)(*(int *)(param_1 + 4) + 0xc));
  if (CONCAT31(extraout_var,bVar2) != 0) {
    uVar3 = FUN_00c39b40(param_1);
    if (*(char *)(param_1 + 0x14) == '\0') {
      if (uVar3 < *(uint *)(param_1 + 0x18)) {
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
    }
    else if (*(uint *)(param_1 + 0x18) < uVar3) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        FUN_00c64ba0(*(void **)(*(int *)(param_1 + 4) + 0xc),0);
      }
      else if (0 < iVar1) {
        *(int *)(param_1 + 0x10) = iVar1 + -1;
        *(undefined1 *)(param_1 + 0x14) = 0;
        return;
      }
      *(undefined1 *)(param_1 + 0x14) = 0;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00c39bc0 @ 00c39bc0 ////

char __fastcall FUN_00c39bc0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00c39470(*(int *)(param_1 + 4));
  return '\x01' - ((char)uVar1 != '\0');
}


//// FUNCTION FUN_00c39bd0 @ 00c39bd0 ////

void __fastcall FUN_00c39bd0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00c64ba0(*(void **)(*(int *)(param_1 + 4) + 0xc),0);
  }
  return;
}


//// FUNCTION FUN_00c39bf0 @ 00c39bf0 ////

void __fastcall FUN_00c39bf0(int param_1)

{
  FUN_00c649f0(*(void **)(*(int *)(param_1 + 4) + 0xc),0,0);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c) + 1;
  return;
}


//// FUNCTION FUN_00c39c20 @ 00c39c20 ////

void __thiscall FUN_00c39c20(void *this,int param_1)

{
  uint uVar1;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  if (*(char *)(*(int *)((int)this + 4) + 0x1c) == '\0') {
    uVar1 = FUN_00c64a50(*(int *)(*(int *)((int)this + 4) + 0xc));
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 1) != 0) goto LAB_00c39c41;
      local_4 = (float)param_1;
      local_14 = *(undefined4 *)((int)this + 0xc);
      local_c = 0;
      local_18 = 0.0;
      local_10 = 0;
      local_8 = 0x3f800000;
      if (param_1 < 0) {
        local_4 = local_4 + 4.2949673e+09;
      }
      local_4 = local_4 * 0.001;
      FUN_00c648f0(*(void **)(*(int *)((int)this + 4) + 0xc),&local_18);
      FUN_00c64a10(*(void **)(*(int *)((int)this + 4) + 0xc),0,0);
    }
    return;
  }
LAB_00c39c41:
  FUN_00c39bf0((int)this);
  return;
}


//// FUNCTION FUN_00c39cc0 @ 00c39cc0 ////

void __fastcall FUN_00c39cc0(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00c3a4a0_00da6e70;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


//// FUNCTION FUN_00c39ce0 @ 00c39ce0 ////

void __fastcall FUN_00c39ce0(int param_1)

{
  FUN_00c39bf0(param_1);
  FUN_00c64750(*(void **)(*(int *)(param_1 + 4) + 0xc),0);
  FUN_00c656b0(*(int **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION LLACodaCOneShot_Create @ 00c39d10 ////

void __thiscall LLACodaCOneShot_Create(void *this,int *param_1,undefined4 *param_2)

{
  uint uVar1;
  LPCSTR pCVar2;
  int iVar3;
  code *pcVar4;
  undefined1 local_14d;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  uint local_140;
  int local_13c;
  uint local_138;
  int local_134;
  uint local_12c;
  float local_128;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04ef2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x10) = param_1[5];
  local_12c = FUN_00c65a20(param_2,param_1[4]);
  if (local_12c == 0) {
    local_124 = 0.0;
  }
  else {
    local_124 = (float)(int)param_2[3];
    if ((int)param_2[3] < 0) {
      local_124 = local_124 + 4.2949673e+09;
    }
    local_124 = local_124 * 0.001;
  }
  *(float *)((int)this + 0xc) = local_124;
  local_114 = (float)(int)param_2[4];
  local_11c = 0;
  local_128 = 0.0;
  local_120 = 0;
  local_118 = 0x3f800000;
  if ((int)param_2[4] < 0) {
    local_114 = local_114 + 4.2949673e+09;
  }
  local_114 = local_114 * 0.001;
  FUN_00c648f0(*(void **)(*(int *)((int)this + 4) + 0xc),&local_128);
  if (param_2[2] != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\LLACodaCOneShot.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5b);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Incorrect format");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_14d,pCVar2);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  local_148 = param_2[1];
  local_144 = *param_2;
  local_14c = 1;
  if (param_1[3] == 0) {
    local_13c = 0;
    local_138 = 0;
  }
  else {
    local_13c = FUN_00c65a20(param_2,param_1[2]);
    local_138 = FUN_00c65a20(param_2,param_1[3] + -1 + param_1[2]);
    if ((uint)param_1[1] < local_138) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = 1;
      LH_LogErrorMessage(&local_110,".\\LLACodaCOneShot.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x6c);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"Loop details are out of range bytes...");
      LH_PrintResourceID(&local_110,local_13c);
      LH_LogErrorMessage(&local_110," to ");
      LH_PrintResourceID(&local_110,local_138);
      LH_LogErrorMessage(&local_110,": total ");
      LH_PrintResourceID(&local_110,param_1[1]);
      LH_LogErrorMessage(&local_110," resetting...");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_14d,pCVar2);
      local_4 = 0xffffffff;
      local_13c = 0;
      local_138 = 0;
    }
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  if (local_138 == 0) {
    *(uint *)((int)this + 0x18) = (uint)param_1[1] >> 1;
  }
  else {
    *(uint *)((int)this + 0x18) = (local_138 - local_13c >> 1) + local_13c;
  }
  *(undefined1 *)((int)this + 0x14) = 1;
  *(int *)((int)this + 0x1c) = param_1[1];
  local_140 = param_1[1];
  local_134 = *param_1;
  pcVar4 = DebugBreak_exref;
  if (local_134 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 2;
    LH_LogErrorMessage(&local_110,".\\LLACodaCOneShot.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x89);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null memory pointer in OneShotInitParams");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_14d,pCVar2);
    pcVar4 = DebugBreak_exref;
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (local_140 < local_138) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 3;
    LH_LogErrorMessage(&local_110,".\\LLACodaCOneShot.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x8a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Buffer loop end (");
    LH_PrintResourceID(&local_110,local_138);
    LH_LogErrorMessage(&local_110,") is out of range (");
    LH_PrintResourceID(&local_110,local_140);
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_14d,pCVar2);
    local_4 = 0xffffffff;
    (*pcVar4)();
  }
  if (*(int *)((int)this + 8) != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 4;
    LH_LogErrorMessage(&local_110,".\\LLACodaCOneShot.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x8b);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Resource leak: buffer not freed");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_14d,pCVar2);
    local_4 = 0xffffffff;
    (*pcVar4)();
  }
  iVar3 = FUN_00c656a0(&local_14c);
  *(int *)((int)this + 8) = iVar3;
  if (iVar3 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 5;
    LH_LogErrorMessage(&local_110,".\\LLACodaCOneShot.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x90);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Error: could not create buffer");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_14d,pCVar2);
    (*pcVar4)();
  }
  uVar1 = local_12c;
  *(bool *)(*(int *)((int)this + 4) + 0x1e) = *(int *)((int)this + 0x10) != 0;
  if (local_12c < *(uint *)((int)this + 0x1c)) {
    FUN_00c64750(*(void **)(*(int *)((int)this + 4) + 0xc),*(int *)((int)this + 8));
    FUN_00c64c00(*(void **)(*(int *)((int)this + 4) + 0xc),uVar1);
    FUN_00c0e770();
    iVar3 = *(int *)((int)this + 4);
    if (*(char *)(iVar3 + 0x1c) == '\0') {
      FUN_00c64ba0(*(void **)(iVar3 + 0xc),(uint)*(byte *)(iVar3 + 0x1e));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c3a4a0 @ 00c3a4a0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c3a4a0(void *this,byte param_1)

{
  SetVtable_00da6e68_00c39b30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c3a4d0 @ 00c3a4d0 ////

bool __fastcall FUN_00c3a4d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00c39470(*(int *)(param_1 + 4));
  return (char)uVar1 != '\0';
}


//// FUNCTION FUN_00c3a4e0 @ 00c3a4e0 ////

void __fastcall FUN_00c3a4e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00c39470(*(int *)(param_1 + 4));
  if ((char)uVar1 != '\0') {
    FUN_00c649f0(*(void **)(*(int *)(param_1 + 4) + 0xc),0,0);
  }
  return;
}


//// FUNCTION FUN_00c3a510 @ 00c3a510 ////

void __fastcall FUN_00c3a510(int param_1)

{
  FUN_00c3a4e0(param_1);
  return;
}


//// FUNCTION Ctor_vt00da6fd8_00c3a540 @ 00c3a540 ////

undefined4 * __fastcall Ctor_vt00da6fd8_00c3a540(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04f68;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c3aee0_00da6fd8;
  param_1[1] = 0;
  FUN_00c3acf0(param_1 + 2,(PRTL_CRITICAL_SECTION_DEBUG)&DAT_00000010);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION Dtor_00c3a590 @ 00c3a590 ////

void __fastcall Dtor_00c3a590(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04f7a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c3aee0_00da6fd8;
  local_4 = 0;
  FUN_00c3ad60((int)(param_1 + 2));
  *param_1 = &PTR_LAB_00da6fc8;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c3a5e0 @ 00c3a5e0 ////

void __fastcall FUN_00c3a5e0(int param_1)

{
  FUN_00c3a4e0(param_1);
  FUN_00c64b20(*(void **)(*(int *)(param_1 + 4) + 0xc));
  return;
}


//// FUNCTION LLACodaCStreamed_SubmitFrame @ 00c3a620 ////

void LLACodaCStreamed_SubmitFrame(int *param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_135;
  int local_134;
  int *local_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04fc6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == (int *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &pvStack_c;
    LH_LogErrorMessage(&local_110,".\\LLACodaCStreamed.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x38);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null frame");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_135,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  local_130 = operator_new(8);
  if (local_130 == (int *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\LLACodaCStreamed.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x3b);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"EMEM");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_135,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  iVar2 = (**(code **)(*param_1 + 4))();
  if (iVar2 != *(int *)(*(int *)(local_134 + 4) + 0x14)) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 2;
    LH_LogErrorMessage(&local_110,".\\LLACodaCStreamed.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x3c);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Incompatible number of channel");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_135,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 != *(int *)(*(int *)(local_134 + 4) + 0x10)) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 3;
    LH_LogErrorMessage(&local_110,".\\LLACodaCStreamed.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x3d);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Incompatible format");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_135,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  uStack_120 = (**(code **)(*param_1 + 0x14))();
  uStack_11c = 0;
  uStack_118 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 4;
    LH_LogErrorMessage(&local_110,".\\LLACodaCStreamed.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x45);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Incorrect frame format");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_135,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  iStack_12c = 1;
  uStack_128 = (**(code **)(*param_1 + 4))();
  uStack_124 = *(undefined4 *)(*(int *)(local_134 + 4) + 0x18);
  uStack_114 = (**(code **)(*param_1 + 0x10))();
  iVar2 = FUN_00c656a0(&iStack_12c);
  *local_130 = iVar2;
  if (iVar2 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 5;
    LH_LogErrorMessage(&local_110,".\\LLACodaCStreamed.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x4e);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Error: could not create coda buffer");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_135,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  local_130[1] = (int)param_1;
  FUN_00c647d0(*(void **)(*(int *)(local_134 + 4) + 0xc),*local_130,0,0);
  FUN_00c3ad80((void *)(local_134 + 8),local_130);
  uVar3 = FUN_00c39470(*(int *)(local_134 + 4));
  if ((char)uVar3 == '\0') {
    FUN_00c64ba0(*(void **)(*(int *)(local_134 + 4) + 0xc),1);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION LLACodaCStreamed_SetCallback @ 00c3abc0 ////

void __thiscall LLACodaCStreamed_SetCallback(void *this,int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04ff0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\LLACodaCStreamed.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x14);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null streamed callback");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)((int)this + 0x30) = *param_1;
  FUN_00c647a0(*(void **)(*(int *)((int)this + 4) + 0xc),0x10,&LAB_00c3aab0,this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION SetVtable_00da6fc8_00c3acb0 @ 00c3acb0 ////

void __fastcall SetVtable_00da6fc8_00c3acb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6fc8;
  return;
}


//// FUNCTION FUN_00c3acf0 @ 00c3acf0 ////

LPCRITICAL_SECTION __thiscall FUN_00c3acf0(void *this,PRTL_CRITICAL_SECTION_DEBUG param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04f28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Wrap_InitializeCriticalSection_00bcea70(this);
  *(PRTL_CRITICAL_SECTION_DEBUG *)((int)this + 0x18) = param_1;
  local_4 = 0;
  pvVar1 = operator_new((int)param_1 << 2);
  *(void **)((int)this + 0x1c) = pvVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c3ad60 @ 00c3ad60 ////

void __fastcall FUN_00c3ad60(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x1c));
}


//// FUNCTION FUN_00c3ad80 @ 00c3ad80 ////

void __thiscall FUN_00c3ad80(void *this,undefined4 param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04f48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,this);
  local_4 = 0xffffffff;
  if (*(int *)((int)this + 0x20) != *(int *)((int)this + 0x18)) {
    *(undefined4 *)(*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x24) * 4) = param_1;
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
    *(int *)((int)this + 0x24) = (*(int *)((int)this + 0x24) + 1) % *(int *)((int)this + 0x18);
  }
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c3adf0 @ 00c3adf0 ////

LONG __fastcall FUN_00c3adf0(LPCRITICAL_SECTION param_1)

{
  LONG LVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,param_1);
  LVar1 = param_1[1].RecursionCount;
  PKCProtectionInstance_Leave(local_8);
  return LVar1;
}


//// FUNCTION FUN_00c3ae20 @ 00c3ae20 ////

int __fastcall FUN_00c3ae20(LPCRITICAL_SECTION param_1)

{
  int iVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,param_1);
  iVar1 = (int)param_1[1].OwningThread - param_1[1].RecursionCount;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (int)param_1[1].DebugInfo;
  }
  PKCProtectionInstance_Leave(local_8);
  return iVar1;
}


//// FUNCTION FUN_00c3ae50 @ 00c3ae50 ////

undefined4 __fastcall FUN_00c3ae50(LPCRITICAL_SECTION param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,param_1);
  local_4 = 0;
  if (param_1[1].RecursionCount == 0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = FUN_00c3ae20(param_1);
  uVar1 = *(undefined4 *)(param_1[1].LockCount + iVar2 * 4);
  param_1[1].RecursionCount = param_1[1].RecursionCount + -1;
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION ScalarDeletingDtor_00c3aee0 @ 00c3aee0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c3aee0(void *this,byte param_1)

{
  Dtor_00c3a590(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00da70a8_00c3afc0 @ 00c3afc0 ////

undefined4 * __fastcall Ctor_vt00da70a8_00c3afc0(undefined4 *param_1)

{
  Ctor_vt00dad4fc_00c65ec0(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c3b000_00da70a8;
  return param_1;
}


//// FUNCTION Dtor_00c3afe0 @ 00c3afe0 ////

void __fastcall Dtor_00c3afe0(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00c3b000_00da70a8;
  FUN_00c65ef0(param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c3b000 @ 00c3b000 ////

undefined4 * __thiscall ScalarDeletingDtor_00c3b000(void *this,byte param_1)

{
  Dtor_00c3afe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00da70ac_00c3b080 @ 00c3b080 ////

undefined4 * __fastcall Ctor_vt00da70ac_00c3b080(undefined4 *param_1)

{
  Ctor_vt00dad4fc_00c65ec0(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c3b0e0_00da70ac;
  return param_1;
}


//// FUNCTION Dtor_00c3b0a0 @ 00c3b0a0 ////

void __fastcall Dtor_00c3b0a0(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00c3b0e0_00da70ac;
  FUN_00c65ef0(param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c3b0e0 @ 00c3b0e0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c3b0e0(void *this,byte param_1)

{
  Dtor_00c3b0a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00da70b0_00c3b100 @ 00c3b100 ////

undefined4 * __fastcall Ctor_vt00da70b0_00c3b100(undefined4 *param_1)

{
  Ctor_vt00dad4fc_00c65ec0(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c3b160_00da70b0;
  return param_1;
}


//// FUNCTION Dtor_00c3b120 @ 00c3b120 ////

void __fastcall Dtor_00c3b120(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00c3b160_00da70b0;
  FUN_00c65ef0(param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c3b160 @ 00c3b160 ////

undefined4 * __thiscall ScalarDeletingDtor_00c3b160(void *this,byte param_1)

{
  Dtor_00c3b120(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00da34b0_00c3b1d0 @ 00c3b1d0 ////

void __fastcall SetVtable_00da34b0_00c3b1d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da34b0;
  return;
}


//// FUNCTION Ctor_vt00da70b8_00c3b1e0 @ 00c3b1e0 ////

undefined4 * __fastcall Ctor_vt00da70b8_00c3b1e0(undefined4 *param_1)

{
  Ctor_vt00dad4fc_00c65ec0(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c3b350_00da70b8;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c3b210 @ 00c3b210 ////

undefined4 * __thiscall ScalarDeletingDtor_00c3b210(void *this,byte param_1)

{
  SetVtable_00da34b0_00c3b1d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00da70bc_00c3b230 @ 00c3b230 ////

undefined4 * __fastcall Ctor_vt00da70bc_00c3b230(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00dad4fc_00c65ec0(param_1);
  local_4 = 0;
  *param_1 = &PTR_ScalarDeletingDtor_00c3b370_00da70bc;
  Ctor_vt00dad4fc_00c65ec0(param_1 + 1);
  param_1[1] = &PTR_ScalarDeletingDtor_00c3b000_00da70a8;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION Dtor_00c3b290 @ 00c3b290 ////

void __fastcall Dtor_00c3b290(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05048;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  param_1[1] = &PTR_ScalarDeletingDtor_00c3b000_00da70a8;
  FUN_00c65ef0(param_1 + 1);
  local_4 = 0xffffffff;
  FUN_00c65ef0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Dtor_00c3b2f0 @ 00c3b2f0 ////

void __fastcall Dtor_00c3b2f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05068;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  param_1[4] = &PTR_ScalarDeletingDtor_00c3b000_00da70a8;
  FUN_00c65ef0(param_1 + 4);
  local_4 = 0xffffffff;
  FUN_00c65ef0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c3b350 @ 00c3b350 ////

undefined4 * __thiscall ScalarDeletingDtor_00c3b350(void *this,byte param_1)

{
  thunk_FUN_00c65ef0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c3b370 @ 00c3b370 ////

undefined4 * __thiscall ScalarDeletingDtor_00c3b370(void *this,byte param_1)

{
  Dtor_00c3b290(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c3b3d0 @ 00c3b3d0 ////

void __thiscall FUN_00c3b3d0(void *this,int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar2 = *(int *)(param_1 + 0xc) + 3;
  uVar3 = uVar2 & 0xfffffffc;
  if (*param_2 != 0) {
    *(int *)((int)this + 0x54) = *param_2;
    *(uint *)((int)this + 0x58) = uVar3;
    *(undefined4 *)((int)this + 0x5c) = 0;
    puVar4 = *(undefined4 **)((int)this + 0x54);
    for (uVar2 = uVar2 & 0x3ffffffc; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *param_2 = *param_2 + uVar3 * 4;
  }
  *param_3 = *param_3 + uVar3 * 4;
  uVar2 = *(int *)(param_1 + 0x14) + 3 + *(int *)(param_1 + 0x10);
  uVar3 = uVar2 & 0xfffffffc;
  if (*param_2 != 0) {
    *(int *)((int)this + 0x60) = *param_2;
    *(uint *)((int)this + 100) = uVar3;
    *(undefined4 *)((int)this + 0x68) = 0;
    puVar4 = *(undefined4 **)((int)this + 0x60);
    for (uVar2 = uVar2 & 0x3ffffffc; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *param_2 = *param_2 + uVar3 * 4;
  }
  *param_3 = *param_3 + uVar3 * 4;
  if (*param_2 != 0) {
    *(int *)((int)this + 0x288) = *param_2;
    *param_2 = *param_2 + 0x200;
    puVar4 = *(undefined4 **)((int)this + 0x288);
    for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *param_3 = *param_3 + 0x200;
  return;
}


//// FUNCTION FUN_00c3b4c0 @ 00c3b4c0 ////

void __fastcall FUN_00c3b4c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x280) != 0) {
    FUN_00c65f70(param_1 + 0x6c);
    FUN_00c65f70(param_1 + 0x80);
    puVar4 = *(undefined4 **)(param_1 + 0x54);
    for (uVar1 = *(uint *)(param_1 + 0x58) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar4 = *(undefined4 **)(param_1 + 0x60);
    for (uVar1 = *(uint *)(param_1 + 100) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar4 = *(undefined4 **)(param_1 + 0x288);
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = *(undefined4 **)(param_1 + 0x24c);
    for (uVar1 = *(uint *)(param_1 + 0x250) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar4 = *(undefined4 **)(param_1 + 0x1e4);
    for (uVar1 = *(uint *)(param_1 + 0x1e8) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar4 = (undefined4 *)(param_1 + 0x1fc);
    iVar2 = 4;
    do {
      puVar5 = (undefined4 *)*puVar4;
      for (uVar1 = puVar4[1] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      puVar4 = puVar4 + 5;
      iVar2 = iVar2 + -1;
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    } while (iVar2 != 0);
    FUN_00c67730(param_1 + 0x94);
    FUN_00c67100(param_1 + 0x144);
    FUN_00c66aa0(param_1 + 0x25c);
    return;
  }
  return;
}


//// FUNCTION FUN_00c3b5c0 @ 00c3b5c0 ////

void __thiscall FUN_00c3b5c0(void *this,float *param_1,char param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *local_8;
  
  pfVar5 = param_3;
  pfVar2 = *(float **)((int)this + 8);
  pfVar8 = *(float **)((int)this + 4);
  if ((param_2 == '\0') && (*(char *)((int)this + 0x28c) != '\0')) {
    pfVar7 = param_3;
    if ((float *)pfVar8[0xe] < param_3) {
      pfVar7 = (float *)pfVar8[0xe];
    }
    if (pfVar7 != (float *)0x0) {
      if (*(float **)((int)this + 0x5c) < pfVar7) {
        iVar6 = *(int *)((int)this + 0x58) - (int)pfVar7;
      }
      else {
        iVar6 = -(int)pfVar7;
      }
      iVar6 = (int)*(float **)((int)this + 0x5c) + iVar6;
      param_3 = pfVar7;
      if (*(uint *)((int)this + 0x58) < (uint)(iVar6 + (int)pfVar7)) {
        param_3 = (float *)(*(uint *)((int)this + 0x58) - iVar6);
      }
      fVar3 = (float)(int)pfVar7;
      if ((int)pfVar7 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      local_8 = (float *)(-1.0 / fVar3);
      (**(code **)(*DAT_010daa0c + 8))
                (*(int *)((int)this + 0x54) + iVar6 * 4,0x3f800000,local_8,param_3);
      if (param_3 < pfVar7) {
        fVar4 = (float)(int)param_3;
        if ((int)param_3 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        (**(code **)(*DAT_010daa0c + 8))
                  (*(undefined4 *)((int)this + 0x54),1.0 - fVar4 / fVar3,local_8,
                   (int)pfVar7 - (int)param_3);
      }
    }
    FUN_00c65f70((int)this + 0x6c);
    FUN_00c65f70((int)this + 0x80);
  }
  if ((*(char *)((int)this + 0x14) == '\0') ||
     (*(int *)((int)this + 0x18) != *(int *)((int)this + 0x290))) {
    iVar6 = *(int *)((int)this + 0x5c);
    pfVar7 = pfVar5;
    if (*(uint *)((int)this + 0x58) < (uint)(iVar6 + (int)pfVar5)) {
      pfVar7 = (float *)(*(uint *)((int)this + 0x58) - iVar6);
    }
    FUN_00c66770((void *)((int)this + 0x6c),(int *)pfVar8,param_1,
                 (float *)(*(int *)((int)this + 0x54) + iVar6 * 4),param_2,(uint)pfVar7);
    pfVar1 = (float *)(*(int *)((int)this + 0x54) + *(int *)((int)this + 0x5c) * 4);
    FUN_00c66770((void *)((int)this + 0x80),(int *)(pfVar8 + 7),pfVar1,pfVar1,'\x01',(uint)pfVar7);
    if (pfVar7 < pfVar5) {
      FUN_00c66770((void *)((int)this + 0x6c),(int *)pfVar8,param_1 + (int)pfVar7,
                   *(float **)((int)this + 0x54),param_2,(int)pfVar5 - (int)pfVar7);
      FUN_00c66770((void *)((int)this + 0x80),(int *)(pfVar8 + 7),*(float **)((int)this + 0x54),
                   *(float **)((int)this + 0x54),'\x01',(int)pfVar5 - (int)pfVar7);
    }
  }
  else {
    iVar6 = *(int *)((int)this + 0x5c);
    pfVar7 = pfVar5;
    if (*(uint *)((int)this + 0x58) < (uint)(iVar6 + (int)pfVar5)) {
      pfVar7 = (float *)(*(uint *)((int)this + 0x58) - iVar6);
    }
    FUN_00c667c0((void *)((int)this + 0x6c),pfVar8,pfVar2,param_1,
                 (float *)(*(int *)((int)this + 0x54) + iVar6 * 4),param_2,pfVar7,
                 *(float **)((int)this + 0x1c));
    pfVar1 = (float *)(*(int *)((int)this + 0x54) + *(int *)((int)this + 0x5c) * 4);
    local_8 = pfVar2 + 7;
    FUN_00c667c0((void *)((int)this + 0x80),pfVar8 + 7,local_8,pfVar1,pfVar1,'\x01',pfVar7,
                 *(float **)((int)this + 0x1c));
    if (pfVar7 < pfVar5) {
      FUN_00c667c0((void *)((int)this + 0x6c),pfVar8,pfVar2,param_1 + (int)pfVar7,
                   *(float **)((int)this + 0x54),param_2,(float *)((int)pfVar5 - (int)pfVar7),
                   (float *)(*(int *)((int)this + 0x1c) - (int)pfVar7));
      FUN_00c667c0((void *)((int)this + 0x80),pfVar8 + 7,local_8,*(float **)((int)this + 0x54),
                   *(float **)((int)this + 0x54),'\x01',(float *)((int)pfVar5 - (int)pfVar7),
                   (float *)(*(int *)((int)this + 0x1c) - (int)pfVar7));
    }
  }
  if ((param_2 != '\0') && (*(char *)((int)this + 0x28c) == '\0')) {
    iVar6 = *(int *)((int)this + 0x5c);
    pfVar8 = pfVar5;
    if (*(uint *)((int)this + 0x58) < (uint)(iVar6 + (int)pfVar5)) {
      pfVar8 = (float *)(*(uint *)((int)this + 0x58) - iVar6);
    }
    fVar3 = (float)(int)pfVar5;
    if ((int)pfVar5 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    (**(code **)(*DAT_010daa0c + 8))(*(int *)((int)this + 0x54) + iVar6 * 4,0,1.0 / fVar3,pfVar8);
    if (pfVar8 < pfVar5) {
      fVar3 = (float)(int)pfVar8;
      if ((int)pfVar8 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      (**(code **)(*DAT_010daa0c + 8))
                (*(undefined4 *)((int)this + 0x54),fVar3 / (float)pfVar2,local_8,
                 (int)pfVar5 - (int)pfVar8);
    }
  }
  uVar9 = *(int *)((int)this + 0x5c) + (int)pfVar5;
  *(uint *)((int)this + 0x5c) = uVar9;
  if (*(uint *)((int)this + 0x58) <= uVar9) {
    *(uint *)((int)this + 0x5c) = uVar9 - *(uint *)((int)this + 0x58);
  }
  return;
}


//// FUNCTION FUN_00c3b910 @ 00c3b910 ////

void __thiscall FUN_00c3b910(void *this,int param_1,uint param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *this_00;
  float *pfVar4;
  uint *puVar5;
  int local_8;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)((int)this + 8);
  pfVar4 = param_3;
  for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pfVar4 = 0.0;
    pfVar4 = pfVar4 + 1;
  }
  uVar3 = 0;
  puVar5 = (uint *)(iVar1 + 0x38);
  this_00 = (void *)((int)this + 0x1f8);
  local_8 = 4;
  do {
    if ((*(char *)((int)this + 0x14) == '\0') ||
       (*(int *)((int)this + 0x18) != *(int *)((int)this_00 + 0x10))) {
      FUN_00c67a80(this_00,puVar5,(int *)((int)this + 0x54),param_3,
                   *(undefined4 *)(param_1 + uVar3 * 4),param_2);
    }
    else {
      FUN_00c67bb0(this_00,puVar5,(uint *)((iVar2 - iVar1) + (int)puVar5),(int *)((int)this + 0x54),
                   param_3,*(float **)(param_1 + uVar3 * 4),param_2,*(uint *)((int)this + 0x1c));
    }
    uVar3 = uVar3 + 1;
    if (*(uint *)((int)this + 0x2c) <= uVar3) {
      uVar3 = 0;
    }
    puVar5 = puVar5 + 5;
    this_00 = (void *)((int)this_00 + 0x14);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}


//// FUNCTION FUN_00c3b9e0 @ 00c3b9e0 ////

void __thiscall FUN_00c3b9e0(void *this,uint param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float local_210 [131];
  
  iVar1 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  if (*(int *)((int)this + 0x18) == *(int *)((int)this + 500)) {
    FUN_00c68b40((void *)((int)this + 0x1e0),(float *)(iVar2 + 0x220),(float *)(iVar1 + 0x220),
                 param_2,(int)local_210,param_1,*(uint *)((int)this + 0x1c));
  }
  else {
    FUN_00c68920((void *)((int)this + 0x1e0),(float *)(iVar2 + 0x220),param_2,(int)local_210,param_1
                );
  }
  if (*(int *)((int)this + 0x18) == *(int *)((int)this + 600)) {
    FUN_00c686b0((void *)((int)this + 0x248),(uint *)(iVar2 + 0x228),(uint *)(iVar1 + 0x228),
                 local_210,local_210,param_1,*(uint *)((int)this + 0x1c));
  }
  else {
    FUN_00c685f0((void *)((int)this + 0x248),(uint *)(iVar2 + 0x228),local_210,local_210,param_1);
  }
  FUN_00c66bd0((void *)((int)this + 0x25c),local_210,param_1);
  FUN_00c67ef0((int *)((int)this + 0x60),*(int *)((int)this + 0x68),local_210,param_1);
  uVar3 = *(int *)((int)this + 0x68) + param_1;
  *(uint *)((int)this + 0x68) = uVar3;
  if (*(uint *)((int)this + 100) <= uVar3) {
    *(uint *)((int)this + 0x68) = uVar3 - *(uint *)((int)this + 100);
  }
  return;
}


//// FUNCTION FUN_00c3bae0 @ 00c3bae0 ////

void __thiscall FUN_00c3bae0(void *this,int param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x18);
  if ((*(int *)((int)this + 0x13c) <= iVar1) && (iVar1 < *(int *)((int)this + 0x140))) {
    FUN_00c67920((void *)((int)this + 0x94),(float *)(*(int *)((int)this + 4) + 0x88),
                 *(int *)((int)this + 8) + 0x88,(int *)((int)this + 0x60),
                 *(int *)((int)this + 0x288),param_1,iVar1,param_2,*(float **)((int)this + 0x1c));
    return;
  }
  FUN_00c67770((void *)((int)this + 0x94),*(int *)((int)this + 4) + 0x88,(int *)((int)this + 0x60),
               *(int *)((int)this + 0x288),param_1,(uint)param_2);
  return;
}


//// FUNCTION FUN_00c3bb60 @ 00c3bb60 ////

void __thiscall FUN_00c3bb60(void *this,int param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x18);
  if ((*(int *)((int)this + 0x1d8) <= iVar1) && (iVar1 < *(int *)((int)this + 0x1dc))) {
    FUN_00c67540((void *)((int)this + 0x144),*(int *)((int)this + 4) + 0x148,
                 *(int *)((int)this + 8) + 0x148,(int *)((int)this + 0x60),
                 *(float **)((int)this + 0x288),param_1,iVar1,param_2,*(float **)((int)this + 0x1c))
    ;
    return;
  }
  FUN_00c674b0((void *)((int)this + 0x144),*(int *)((int)this + 4) + 0x148,(int *)((int)this + 0x60)
               ,*(undefined4 **)((int)this + 0x288),param_1,param_2);
  return;
}


//// FUNCTION Ctor_vt00da70c0_00c3bbe0 @ 00c3bbe0 ////

undefined4 * __fastcall Ctor_vt00da70c0_00c3bbe0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05088;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00dad4fc_00c65ec0(param_1);
  local_4 = 0;
  *param_1 = &PTR_ScalarDeletingDtor_00c3bd10_00da70c0;
  _eh_vector_constructor_iterator_(param_1 + 1,0x28,4,Ctor_vt00da70bc_00c3b230,Dtor_00c3b290);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION Dtor_00c3bc40 @ 00c3bc40 ////

void __fastcall Dtor_00c3bc40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d050a8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_(param_1 + 1,0x28,4,Dtor_00c3b290);
  local_4 = 0xffffffff;
  FUN_00c65ef0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Dtor_00c3bca0 @ 00c3bca0 ////

void __fastcall Dtor_00c3bca0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d050de;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_(param_1 + 0x10,0x28,2,Dtor_00c3b2f0);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 1,0x14,3,Dtor_00c3afe0);
  local_4 = 0xffffffff;
  FUN_00c65ef0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c3bd10 @ 00c3bd10 ////

undefined4 * __thiscall ScalarDeletingDtor_00c3bd10(void *this,byte param_1)

{
  Dtor_00c3bc40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c3bd30 @ 00c3bd30 ////

void __fastcall FUN_00c3bd30(int param_1)

{
  *(undefined1 *)(param_1 + 0x294) = 0;
  if (*(int *)(param_1 + 0x280) != 0) {
    FUN_00c0efa0(*(int *)(param_1 + 0x280));
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  FUN_00c68f00(param_1);
  FUN_00c66a90(param_1 + 0x25c);
  return;
}


//// FUNCTION FUN_00c3bdc0 @ 00c3bdc0 ////

void __thiscall FUN_00c3bdc0(void *this,int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  int local_8;
  uint local_4;
  
  iVar3 = param_1;
  piVar1 = (int *)((int)this + 0x18);
  *piVar1 = 0;
  local_8 = 0;
  FUN_00c3b3d0(this,param_1,&param_2,&local_8);
  FUN_00c65f70((int)this + 0x6c);
  FUN_00c65f70((int)this + 0x80);
  *(int *)((int)this + 0x290) = *piVar1;
  *piVar1 = *piVar1 + 1;
  fVar2 = (float)*(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  iVar4 = (int)ROUND(fVar2 * 0.2 - 0.5);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1;
  }
  local_4 = iVar4 + 0x83U & 0xfffffffc;
  this_00 = (void *)((int)this + 0x1f8);
  param_1 = 4;
  do {
    FUN_00c67a10(this_00,local_4,&param_2,&local_8,*piVar1);
    this_00 = (void *)((int)this_00 + 0x14);
    param_1 = param_1 + -1;
    *piVar1 = *piVar1 + 1;
  } while (param_1 != 0);
  FUN_00c676c0((void *)((int)this + 0x94),*(undefined4 *)(iVar3 + 4),iVar3 + 0x1c,&param_2,&local_8,
               piVar1);
  FUN_00c67040((void *)((int)this + 0x144),iVar3,&param_2,&local_8,piVar1);
  FUN_00c68540((void *)((int)this + 0x248),*(int *)(iVar3 + 8),&param_2,&local_8,*piVar1);
  iVar4 = *piVar1;
  *piVar1 = iVar4 + 1;
  FUN_00c68860((void *)((int)this + 0x1e0),*(int *)(iVar3 + 8),&param_2,&local_8,iVar4 + 1);
  *piVar1 = *piVar1 + 1;
  FUN_00c66ae0((void *)((int)this + 0x25c),*(int *)(iVar3 + 8),&param_2,&local_8);
  *param_3 = local_8;
  return;
}


//// FUNCTION FUN_00c3bf30 @ 00c3bf30 ////

uint __thiscall FUN_00c3bf30(void *this,float *param_1,char param_2,int param_3,float *param_4)

{
  uint in_EAX;
  undefined4 uVar1;
  float local_210 [131];
  
  if (*(char *)((int)this + 0x294) == '\0') {
    return in_EAX & 0xffffff00;
  }
  FUN_00c3b5c0(this,param_1,param_2,param_4);
  FUN_00c3b910(this,param_3,(uint)param_4,local_210);
  FUN_00c3b9e0(this,(uint)param_4,local_210);
  FUN_00c3bae0(this,param_3,param_4);
  uVar1 = FUN_00c3bb60(this,param_3,param_4);
  *(char *)((int)this + 0x28c) = param_2;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION Ctor_vt00da70c4_00c3bfb0 @ 00c3bfb0 ////

undefined4 * __fastcall Ctor_vt00da70c4_00c3bfb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0516c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00dad560_00c68ed0(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00c3c350_00da70c4;
  param_1[0xc] = 48000;
  param_1[0xb] = 2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[10] = &PTR_ScalarDeletingDtor_00c3b210_00da70b4;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  Ctor_vt00dad4fc_00c65ec0(param_1 + 0x1b);
  param_1[0x1b] = &PTR_ScalarDeletingDtor_00c3b000_00da70a8;
  local_4._0_1_ = 2;
  Ctor_vt00dad4fc_00c65ec0(param_1 + 0x20);
  param_1[0x20] = &PTR_ScalarDeletingDtor_00c3b000_00da70a8;
  local_4._0_1_ = 3;
  Ctor_vt00da70c0_00c3bbe0(param_1 + 0x25);
  local_4._0_1_ = 4;
  Ctor_vt00dad51c_00c67410(param_1 + 0x51);
  local_4._0_1_ = 5;
  Ctor_vt00dad4fc_00c65ec0(param_1 + 0x78);
  param_1[0x78] = &PTR_ScalarDeletingDtor_00c3b160_00da70b0;
  local_4._0_1_ = 6;
  _eh_vector_constructor_iterator_
            (param_1 + 0x7e,0x14,4,Ctor_vt00da70b8_00c3b1e0,thunk_FUN_00c65ef0);
  local_4._0_1_ = 7;
  Ctor_vt00dad4fc_00c65ec0(param_1 + 0x92);
  param_1[0x92] = &PTR_ScalarDeletingDtor_00c3b0e0_00da70ac;
  local_4 = CONCAT31(local_4._1_3_,8);
  Ctor_vt00dad514_00c66ea0(param_1 + 0x97);
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  param_1[4] = 0x234;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION Dtor_00c3c0e0 @ 00c3c0e0 ////

void __fastcall Dtor_00c3c0e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0520a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00c3c350_00da70c4;
  local_4 = 9;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  if (param_1[0xa0] != 0) {
    FUN_00c0efa0(param_1[0xa0]);
    param_1[0xa0] = 0;
  }
  FUN_00c68f00((int)param_1);
  FUN_00c66a90((int)(param_1 + 0x97));
  local_4._0_1_ = 8;
  Dtor_00c66ed0(param_1 + 0x97);
  local_4._0_1_ = 7;
  param_1[0x92] = &PTR_ScalarDeletingDtor_00c3b0e0_00da70ac;
  FUN_00c65ef0(param_1 + 0x92);
  local_4._0_1_ = 6;
  _eh_vector_destructor_iterator_(param_1 + 0x7e,0x14,4,thunk_FUN_00c65ef0);
  local_4._0_1_ = 5;
  param_1[0x78] = &PTR_ScalarDeletingDtor_00c3b160_00da70b0;
  FUN_00c65ef0(param_1 + 0x78);
  local_4._0_1_ = 4;
  Dtor_00c3bca0(param_1 + 0x51);
  local_4._0_1_ = 3;
  Dtor_00c3bc40(param_1 + 0x25);
  local_4._0_1_ = 2;
  param_1[0x20] = &PTR_ScalarDeletingDtor_00c3b000_00da70a8;
  FUN_00c65ef0(param_1 + 0x20);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x1b] = &PTR_ScalarDeletingDtor_00c3b000_00da70a8;
  FUN_00c65ef0(param_1 + 0x1b);
  param_1[10] = &PTR_LAB_00da34b0;
  local_4 = 0xffffffff;
  Dtor_00c69030(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c3c210 @ 00c3c210 ////

uint __thiscall FUN_00c3c210(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_1;
  if ((((0 < DAT_010daa10) && (*(int *)(param_1 + 8) == *(int *)((int)this + 0x30))) &&
      (*(int *)(param_1 + 4) == *(int *)((int)this + 0x2c))) &&
     (((*(int *)(param_1 + 0xc) == *(int *)((int)this + 0x34) &&
       (*(int *)(param_1 + 0x10) == *(int *)((int)this + 0x38))) &&
      ((*(int *)(param_1 + 0x14) == *(int *)((int)this + 0x3c) &&
       (*(int *)(param_1 + 0x18) == *(int *)((int)this + 0x40))))))) {
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),1);
  }
  *(undefined1 *)((int)this + 0x294) = 0;
  FUN_00c66a90((int)this + 0x25c);
  if (*(int *)((int)this + 0x280) != 0) {
    FUN_00c0efa0(*(int *)((int)this + 0x280));
    *(undefined4 *)((int)this + 0x280) = 0;
  }
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(iVar2 + 4);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(iVar2 + 8);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(iVar2 + 0x28);
  (**(code **)*DAT_010daa0c)();
  uVar3 = FUN_00c69070((int)this);
  if ((char)uVar3 != '\0') {
    param_1 = 0;
    FUN_00c3bdc0(this,iVar2,0,&param_1);
    iVar4 = FUN_00c0ef90(param_1 + 0xf);
    *(int *)((int)this + 0x280) = iVar4;
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = iVar4 + 0xfU & 0xfffffff0;
      *(uint *)((int)this + 0x284) = uVar3;
      FUN_00c3bdc0(this,iVar2,uVar3,&param_1);
      uVar1 = *(undefined4 *)((int)this + 0x18);
      *(undefined4 *)((int)this + 0x20) = uVar1;
      *(undefined4 *)((int)this + 0x18) = 0xffffffff;
      *(undefined1 *)((int)this + 0x294) = 1;
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION ScalarDeletingDtor_00c3c350 @ 00c3c350 ////

undefined4 * __thiscall ScalarDeletingDtor_00c3c350(void *this,byte param_1)

{
  Dtor_00c3c0e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c3c370 @ 00c3c370 ////

void __cdecl FUN_00c3c370(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined2 in_AX;
  ulonglong uVar3;
  
  uVar2 = CONCAT26(in_AX,CONCAT24(in_AX,CONCAT22(in_AX,in_AX)));
  do {
    uVar3 = pmulhw(*param_1,uVar2);
    uVar1 = (uint)(ushort)(uVar3 >> 0x20);
    *param_3 = CONCAT44((int)((longlong)((uVar3 >> 0x10) << 0x30) >> 0x2f) +
                        (int)((ulonglong)*param_3 >> 0x20),
                        ((int)((uint)(ushort)uVar3 << 0x10) >> 0xf) + (int)*param_3);
    param_3[1] = CONCAT44((int)((int6)CONCAT24((short)(uVar3 >> 0x30),uVar1) >> 0x1f) +
                          (int)((ulonglong)param_3[1] >> 0x20),
                          ((int)(uVar1 << 0x10) >> 0xf) + (int)param_3[1]);
    uVar3 = pmulhw(param_1[1],uVar2);
    uVar1 = (uint)(ushort)(uVar3 >> 0x20);
    param_3[2] = CONCAT44((int)((longlong)((uVar3 >> 0x10) << 0x30) >> 0x2f) +
                          (int)((ulonglong)param_3[2] >> 0x20),
                          ((int)((uint)(ushort)uVar3 << 0x10) >> 0xf) + (int)param_3[2]);
    param_1 = param_1 + 2;
    param_3[3] = CONCAT44((int)((int6)CONCAT24((short)(uVar3 >> 0x30),uVar1) >> 0x1f) +
                          (int)((ulonglong)param_3[3] >> 0x20),
                          ((int)(uVar1 << 0x10) >> 0xf) + (int)param_3[3]);
    param_3 = param_3 + 4;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


//// FUNCTION FUN_00c3c420 @ 00c3c420 ////

void __thiscall FUN_00c3c420(short param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  short in_AX;
  short sVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  sVar3 = in_AX << 2;
  uVar5 = CONCAT26(param_1 + in_AX * 3,
                   CONCAT24(param_1 + in_AX * 2,CONCAT22(param_1 + in_AX,param_1)));
  uVar2 = CONCAT26(sVar3,CONCAT24(sVar3,CONCAT22(sVar3,sVar3)));
  do {
    uVar4 = pmulhw(*param_2,uVar5);
    uVar5 = paddsw(uVar5,uVar2);
    uVar1 = (uint)(ushort)(uVar4 >> 0x20);
    *param_4 = CONCAT44((int)((longlong)((uVar4 >> 0x10) << 0x30) >> 0x2f) +
                        (int)((ulonglong)*param_4 >> 0x20),
                        ((int)((uint)(ushort)uVar4 << 0x10) >> 0xf) + (int)*param_4);
    param_4[1] = CONCAT44((int)((int6)CONCAT24((short)(uVar4 >> 0x30),uVar1) >> 0x1f) +
                          (int)((ulonglong)param_4[1] >> 0x20),
                          ((int)(uVar1 << 0x10) >> 0xf) + (int)param_4[1]);
    uVar4 = pmulhw(param_2[1],uVar5);
    uVar5 = paddsw(uVar5,uVar2);
    uVar1 = (uint)(ushort)(uVar4 >> 0x20);
    param_4[2] = CONCAT44((int)((longlong)((uVar4 >> 0x10) << 0x30) >> 0x2f) +
                          (int)((ulonglong)param_4[2] >> 0x20),
                          ((int)((uint)(ushort)uVar4 << 0x10) >> 0xf) + (int)param_4[2]);
    param_2 = param_2 + 2;
    param_4[3] = CONCAT44((int)((int6)CONCAT24((short)(uVar4 >> 0x30),uVar1) >> 0x1f) +
                          (int)((ulonglong)param_4[3] >> 0x20),
                          ((int)(uVar1 << 0x10) >> 0xf) + (int)param_4[3]);
    param_4 = param_4 + 4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}


//// FUNCTION SetVtable_00d9fbe8_00c3c540 @ 00c3c540 ////

void __fastcall SetVtable_00d9fbe8_00c3c540(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fbe8;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c3c550 @ 00c3c550 ////

undefined4 * __thiscall ScalarDeletingDtor_00c3c550(void *this,byte param_1)

{
  SetVtable_00d9fbe8_00c3c540(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9fbe8_00c3c570 @ 00c3c570 ////

void __fastcall SetVtable_00d9fbe8_00c3c570(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fbe8;
  return;
}


//// FUNCTION FUN_00c3c580 @ 00c3c580 ////

void __thiscall FUN_00c3c580(void *this,undefined8 *param_1,short param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)((int)this + 8) = 1;
    FUN_00c3c370(param_1,0x10,*(undefined8 **)((int)this + 0x21c));
  }
  return;
}


//// FUNCTION FUN_00c3c5b0 @ 00c3c5b0 ////

void __thiscall FUN_00c3c5b0(void *this,undefined8 *param_1,short param_2)

{
  *(undefined1 *)((int)this + 8) = 1;
  FUN_00c3c420(param_2,param_1,0x10,*(undefined8 **)((int)this + 0x21c));
  return;
}


//// FUNCTION FUN_00c3c5e0 @ 00c3c5e0 ////

void __thiscall FUN_00c3c5e0(void *this,undefined8 *param_1,uint param_2,ushort param_3)

{
  if ((short)(param_3 / param_2) != 0) {
    *(undefined1 *)((int)this + 8) = 1;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      FUN_00c3c370(param_1,0x10,*(undefined8 **)((int)this + 0x21c));
      param_1 = param_1 + 0x20;
    }
  }
  return;
}


//// FUNCTION FUN_00c3c630 @ 00c3c630 ////

void __thiscall FUN_00c3c630(void *this,undefined8 *param_1,uint param_2,ushort param_3)

{
  uint uVar1;
  
  uVar1 = param_3 / param_2;
  *(undefined1 *)((int)this + 8) = 1;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_00c3c420((short)uVar1,param_1,0x10,*(undefined8 **)((int)this + 0x21c));
    param_1 = param_1 + 0x20;
  }
  return;
}


//// FUNCTION FUN_00c3c690 @ 00c3c690 ////

void __fastcall FUN_00c3c690(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00c3c6b0_00da70f4;
  param_1[0x87] = (int)param_1 + 0x1bU & 0xfffffff0;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c3c6b0 @ 00c3c6b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c3c6b0(void *this,byte param_1)

{
  SetVtable_00d9fbe8_00c3c570(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c3c6d0 @ 00c3c6d0 ////

void __fastcall FUN_00c3c6d0(undefined4 *param_1)

{
  param_1[4] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[1] = 0xffffd8f0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0x3f000000;
  param_1[7] = 0x43480000;
  param_1[8] = 0x459c4000;
  param_1[9] = 0x3d4bfb16;
  param_1[10] = 0x3c343958;
  param_1[0xb] = 0x3fa126e9;
  param_1[0xc] = 0x3d23d70a;
  param_1[0xf] = 0x3d99999a;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3d23d70a;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x40f00000;
  *param_1 = 0x1fffff;
  return;
}


//// FUNCTION FUN_00c3c7b0 @ 00c3c7b0 ////

void __fastcall FUN_00c3c7b0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d0523c;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_00c3bd30(param_1 + 0x28c);
  local_4 = local_4 & 0xffffff00;
  Dtor_00c3c0e0((undefined4 *)(param_1 + 0x28c));
  *(undefined ***)(param_1 + 0x234) = &PTR_LAB_00da34b0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c3c810 @ 00c3c810 ////

void __thiscall FUN_00c3c810(void *this,uint *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  
  FUN_00c69e80((void *)((int)this + 0x260),this,param_1);
  (**(code **)(*(int *)((int)this + 0x28c) + 4))(this,param_2);
  fVar1 = (float)*(int *)((int)this + 0x23c);
  if (*(int *)((int)this + 0x23c) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar2 = (int)ROUND(fVar1 * (float)param_1[4] - 0.5);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  *(int *)((int)this + 0x524) = iVar2;
  return;
}


//// FUNCTION FUN_00c3c880 @ 00c3c880 ////

uint __thiscall
FUN_00c3c880(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*(int *)((int)this + 0x28c) + 8))(param_1,param_2,param_3,param_4);
  if (((char)uVar1 == '\0') || ((char)param_2 != '\0')) {
    *(undefined4 *)((int)this + 0x528) = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x528) + param_4;
    *(int *)((int)this + 0x528) = iVar2;
    if (*(int *)((int)this + 0x524) < iVar2) {
      return uVar1 & 0xffffff00;
    }
  }
  return uVar1;
}


//// FUNCTION FUN_00c3c8f0 @ 00c3c8f0 ////

int __fastcall FUN_00c3c8f0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0525e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x23c) = 48000;
  *(undefined4 *)(param_1 + 0x238) = 2;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined ***)(param_1 + 0x234) = &PTR_ScalarDeletingDtor_00c3b210_00da70b4;
  local_4 = 0;
  FUN_00c69200(param_1 + 0x260);
  Ctor_vt00da70c4_00c3bfb0((undefined4 *)(param_1 + 0x28c));
  *(undefined4 *)(param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0x528) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c3c980 @ 00c3c980 ////

undefined4 __thiscall FUN_00c3c980(void *this,float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  uint local_68 [2];
  float fStack_60;
  
  fVar3 = (float)(int)param_1[2];
  if ((int)param_1[2] < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar3 = (float)(int)ROUND(fVar3 * 0.5404 - 0.5);
  if ((int)fVar3 < 0) {
    fVar3 = (float)((int)fVar3 + 1);
  }
  fVar2 = (float)(int)param_1[2];
  param_1[3] = fVar3;
  if ((int)param_1[2] < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)(int)ROUND(fVar2 * 0.1 - 0.5);
  if ((int)fVar3 < 0) {
    fVar3 = (float)((int)fVar3 + 1);
  }
  fVar2 = (float)(int)param_1[2];
  param_1[4] = fVar3;
  if ((int)param_1[2] < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)(int)ROUND(fVar2 - 0.5);
  if ((int)fVar3 < 0) {
    fVar3 = (float)((int)fVar3 + 1);
  }
  fVar2 = (float)(int)param_1[2];
  param_1[5] = fVar3;
  if ((int)param_1[2] < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)(int)ROUND(fVar2 * 0.5 - 0.5);
  if ((int)fVar3 < 0) {
    fVar3 = (float)((int)fVar3 + 1);
  }
  pfVar1 = (float *)((int)this + 0x234);
  param_1[6] = fVar3;
  pfVar7 = pfVar1;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = *param_1;
    param_1 = param_1 + 1;
    pfVar7 = pfVar7 + 1;
  }
  piVar6 = (int *)((int)this + 0x250);
  uVar4 = 0;
  do {
    fVar3 = (float)*(int *)((int)this + 0x23c);
    if (*(int *)((int)this + 0x23c) < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    iVar5 = (int)ROUND(fVar3 * *(float *)((int)&DAT_00da7120 + uVar4) - 0.5);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 1;
    }
    *piVar6 = iVar5;
    uVar4 = uVar4 + 4;
    piVar6 = piVar6 + 1;
  } while (uVar4 < 0x10);
  FUN_00c69210((void *)((int)this + 0x260),pfVar1);
  uVar4 = FUN_00c3c210((int *)((int)this + 0x28c),(int)pfVar1);
  FUN_00c3c6d0(local_68);
  FUN_00c69e80((void *)((int)this + 0x260),this,local_68);
  (**(code **)(*(int *)((int)this + 0x28c) + 4))(this,1);
  fVar3 = (float)*(int *)((int)this + 0x23c);
  if (*(int *)((int)this + 0x23c) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  iVar5 = (int)ROUND(fVar3 * fStack_60 - 0.5);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  *(int *)((int)this + 0x524) = iVar5;
  return CONCAT31((int3)((uint)iVar5 >> 8),(char)uVar4);
}


//// FUNCTION FUN_00c3cb70 @ 00c3cb70 ////

int __cdecl FUN_00c3cb70(float param_1)

{
  return (int)ROUND(param_1);
}


//// FUNCTION FloatToLongConvert_Vectorized @ 00c3cb90 ////

void __cdecl FloatToLongConvert_Vectorized(int *param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  int *extraout_EDX;
  int iVar21;
  
  if (DAT_010d5e10 == '\0') {
    CPU_InitCapabilities();
  }
  if (DAT_010d5e15 != '\0') {
    iVar20 = 8;
    do {
      fVar4 = param_2[1];
      fVar5 = param_2[2];
      fVar6 = param_2[3];
      fVar7 = param_2[4];
      fVar8 = param_2[5];
      fVar9 = param_2[6];
      fVar10 = param_2[7];
      fVar11 = param_2[8];
      fVar12 = param_2[9];
      fVar13 = param_2[10];
      fVar14 = param_2[0xb];
      fVar15 = param_2[0xc];
      fVar16 = param_2[0xd];
      fVar17 = param_2[0xe];
      fVar18 = param_2[0xf];
      *param_1 = (int)*param_2;
      param_1[1] = (int)fVar4;
      param_1[2] = (int)fVar5;
      param_1[3] = (int)fVar6;
      param_1[4] = (int)fVar7;
      param_1[5] = (int)fVar8;
      param_1[6] = (int)fVar9;
      param_1[7] = (int)fVar10;
      param_1[8] = (int)fVar11;
      param_1[9] = (int)fVar12;
      param_1[10] = (int)fVar13;
      param_1[0xb] = (int)fVar14;
      param_1[0xc] = (int)fVar15;
      param_1[0xd] = (int)fVar16;
      param_1[0xe] = (int)fVar17;
      param_1[0xf] = (int)fVar18;
      param_2 = param_2 + 0x10;
      param_1 = param_1 + 0x10;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    return;
  }
  if (DAT_010d5e14 != '\0') {
    iVar20 = 0x10;
    do {
      uVar1 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)(param_2 + 4);
      uVar3 = *(undefined8 *)(param_2 + 6);
      *(ulonglong *)param_1 =
           CONCAT44(ROUND((float)((ulonglong)*(undefined8 *)param_2 >> 0x20)),
                    ROUND((float)*(undefined8 *)param_2));
      *(ulonglong *)(param_1 + 2) =
           CONCAT44(ROUND((float)((ulonglong)uVar1 >> 0x20)),ROUND((float)uVar1));
      *(ulonglong *)(param_1 + 4) =
           CONCAT44(ROUND((float)((ulonglong)uVar2 >> 0x20)),ROUND((float)uVar2));
      *(ulonglong *)(param_1 + 6) =
           CONCAT44(ROUND((float)((ulonglong)uVar3 >> 0x20)),ROUND((float)uVar3));
      param_2 = param_2 + 8;
      param_1 = param_1 + 8;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    return;
  }
  iVar20 = (int)param_2 - (int)param_1;
  iVar21 = 0x80;
  do {
    iVar19 = FUN_00c3cb70(*(float *)(iVar20 + (int)param_1));
    *extraout_EDX = iVar19;
    param_1 = extraout_EDX + 1;
    iVar21 = iVar21 + -1;
  } while (iVar21 != 0);
  return;
}


//// FUNCTION LongToFloatConvert_Vectorized @ 00c3ccd0 ////

void __cdecl LongToFloatConvert_Vectorized(float *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  int *piVar21;
  
  if (DAT_010d5e10 == '\0') {
    CPU_InitCapabilities();
  }
  if (DAT_010d5e15 != '\0') {
    iVar20 = 8;
    do {
      iVar4 = param_2[1];
      iVar5 = param_2[2];
      iVar6 = param_2[3];
      iVar7 = param_2[4];
      iVar8 = param_2[5];
      iVar9 = param_2[6];
      iVar10 = param_2[7];
      iVar11 = param_2[8];
      iVar12 = param_2[9];
      iVar13 = param_2[10];
      iVar14 = param_2[0xb];
      iVar15 = param_2[0xc];
      iVar16 = param_2[0xd];
      iVar17 = param_2[0xe];
      iVar18 = param_2[0xf];
      *param_1 = (float)*param_2;
      param_1[1] = (float)iVar4;
      param_1[2] = (float)iVar5;
      param_1[3] = (float)iVar6;
      param_1[4] = (float)iVar7;
      param_1[5] = (float)iVar8;
      param_1[6] = (float)iVar9;
      param_1[7] = (float)iVar10;
      param_1[8] = (float)iVar11;
      param_1[9] = (float)iVar12;
      param_1[10] = (float)iVar13;
      param_1[0xb] = (float)iVar14;
      param_1[0xc] = (float)iVar15;
      param_1[0xd] = (float)iVar16;
      param_1[0xe] = (float)iVar17;
      param_1[0xf] = (float)iVar18;
      param_2 = param_2 + 0x10;
      param_1 = param_1 + 0x10;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    return;
  }
  if (DAT_010d5e14 != '\0') {
    iVar20 = 0x10;
    do {
      uVar1 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)(param_2 + 4);
      uVar3 = *(undefined8 *)(param_2 + 6);
      *(ulonglong *)param_1 =
           CONCAT44((float)(int)((ulonglong)*(undefined8 *)param_2 >> 0x20),
                    (float)(int)*(undefined8 *)param_2);
      *(ulonglong *)(param_1 + 2) =
           CONCAT44((float)(int)((ulonglong)uVar1 >> 0x20),(float)(int)uVar1);
      *(ulonglong *)(param_1 + 4) =
           CONCAT44((float)(int)((ulonglong)uVar2 >> 0x20),(float)(int)uVar2);
      *(ulonglong *)(param_1 + 6) =
           CONCAT44((float)(int)((ulonglong)uVar3 >> 0x20),(float)(int)uVar3);
      param_2 = param_2 + 8;
      param_1 = param_1 + 8;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    return;
  }
  iVar20 = 0x10;
  pfVar19 = param_1 + 1;
  piVar21 = param_2 + 3;
  do {
    iVar20 = iVar20 + -1;
    pfVar19[-1] = (float)piVar21[-3];
    *pfVar19 = (float)*(int *)((int)param_2 + (-0x20 - (int)param_1) + (int)(pfVar19 + 8));
    pfVar19[1] = (float)piVar21[-1];
    pfVar19[2] = (float)*piVar21;
    pfVar19[3] = (float)piVar21[1];
    pfVar19[4] = (float)piVar21[2];
    pfVar19[5] = (float)piVar21[3];
    pfVar19[6] = (float)piVar21[4];
    pfVar19 = pfVar19 + 8;
    piVar21 = piVar21 + 8;
  } while (iVar20 != 0);
  return;
}


//// FUNCTION FloatArrayRound_CPU @ 00c3cdc0 ////

void __cdecl FloatArrayRound_CPU(float *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int extraout_EDX;
  
  if (DAT_010d5e10 == '\0') {
    CPU_InitCapabilities();
  }
  if (DAT_010d5e15 != '\0') {
    iVar2 = 8;
    do {
      *param_1 = (float)(int)*param_1;
      param_1[1] = (float)(int)param_1[1];
      param_1[2] = (float)(int)param_1[2];
      param_1[3] = (float)(int)param_1[3];
      param_1[4] = (float)(int)param_1[4];
      param_1[5] = (float)(int)param_1[5];
      param_1[6] = (float)(int)param_1[6];
      param_1[7] = (float)(int)param_1[7];
      param_1[8] = (float)(int)param_1[8];
      param_1[9] = (float)(int)param_1[9];
      param_1[10] = (float)(int)param_1[10];
      param_1[0xb] = (float)(int)param_1[0xb];
      param_1[0xc] = (float)(int)param_1[0xc];
      param_1[0xd] = (float)(int)param_1[0xd];
      param_1[0xe] = (float)(int)param_1[0xe];
      param_1[0xf] = (float)(int)param_1[0xf];
      param_1 = param_1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return;
  }
  if (DAT_010d5e14 != '\0') {
    iVar2 = 0x10;
    do {
      *(ulonglong *)param_1 =
           CONCAT44(ROUND((float)((ulonglong)*(undefined8 *)param_1 >> 0x20)),
                    ROUND((float)*(undefined8 *)param_1));
      *(ulonglong *)(param_1 + 2) =
           CONCAT44(ROUND((float)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20)),
                    ROUND((float)*(undefined8 *)(param_1 + 2)));
      *(ulonglong *)(param_1 + 4) =
           CONCAT44(ROUND((float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20)),
                    ROUND((float)*(undefined8 *)(param_1 + 4)));
      *(ulonglong *)(param_1 + 6) =
           CONCAT44(ROUND((float)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20)),
                    ROUND((float)*(undefined8 *)(param_1 + 6)));
      param_1 = param_1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return;
  }
  uVar3 = 0;
  do {
    fVar1 = (float)FUN_00c3cb70(param_1[uVar3]);
    param_1[extraout_EDX] = fVar1;
    uVar3 = extraout_EDX + 1;
  } while (uVar3 < 0x80);
  return;
}


//// FUNCTION Math_ConvertFloatsToIntegers @ 00c3cf00 ////

void __cdecl Math_ConvertFloatsToIntegers(float *param_1)

{
  float *pfVar1;
  int iVar2;
  
  if (DAT_010d5e10 == '\0') {
    CPU_InitCapabilities();
  }
  if (DAT_010d5e15 != '\0') {
    iVar2 = 8;
    do {
      *param_1 = (float)(int)*param_1;
      param_1[1] = (float)(int)param_1[1];
      param_1[2] = (float)(int)param_1[2];
      param_1[3] = (float)(int)param_1[3];
      param_1[4] = (float)(int)param_1[4];
      param_1[5] = (float)(int)param_1[5];
      param_1[6] = (float)(int)param_1[6];
      param_1[7] = (float)(int)param_1[7];
      param_1[8] = (float)(int)param_1[8];
      param_1[9] = (float)(int)param_1[9];
      param_1[10] = (float)(int)param_1[10];
      param_1[0xb] = (float)(int)param_1[0xb];
      param_1[0xc] = (float)(int)param_1[0xc];
      param_1[0xd] = (float)(int)param_1[0xd];
      param_1[0xe] = (float)(int)param_1[0xe];
      param_1[0xf] = (float)(int)param_1[0xf];
      param_1 = param_1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return;
  }
  if (DAT_010d5e14 != '\0') {
    iVar2 = 0x10;
    do {
      *(ulonglong *)param_1 =
           CONCAT44((float)(int)((ulonglong)*(undefined8 *)param_1 >> 0x20),
                    (float)(int)*(undefined8 *)param_1);
      *(ulonglong *)(param_1 + 2) =
           CONCAT44((float)(int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20),
                    (float)(int)*(undefined8 *)(param_1 + 2));
      *(ulonglong *)(param_1 + 4) =
           CONCAT44((float)(int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20),
                    (float)(int)*(undefined8 *)(param_1 + 4));
      *(ulonglong *)(param_1 + 6) =
           CONCAT44((float)(int)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20),
                    (float)(int)*(undefined8 *)(param_1 + 6));
      param_1 = param_1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return;
  }
  iVar2 = 0x10;
  pfVar1 = param_1 + 2;
  do {
    iVar2 = iVar2 + -1;
    pfVar1[-2] = (float)(int)pfVar1[-2];
    pfVar1[-1] = (float)(int)pfVar1[-1];
    *pfVar1 = (float)(int)*pfVar1;
    pfVar1[1] = (float)(int)pfVar1[1];
    pfVar1[2] = (float)(int)pfVar1[2];
    pfVar1[3] = (float)(int)pfVar1[3];
    pfVar1[4] = (float)(int)pfVar1[4];
    pfVar1[5] = (float)(int)pfVar1[5];
    pfVar1 = pfVar1 + 8;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_00c3d050 @ 00c3d050 ////

void __fastcall FUN_00c3d050(undefined4 *param_1)

{
  *param_1 = param_1[3];
  param_1[1] = param_1[4];
  param_1[2] = param_1[5];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}


//// FUNCTION FUN_00c3d0f0 @ 00c3d0f0 ////

void __thiscall FUN_00c3d0f0(void *this,int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = 0;
  if (param_2 != 0) {
    do {
      iVar9 = *(int *)((int)this + 0x20) + uVar8;
      fVar1 = (float)iVar9;
      if (iVar9 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      fVar2 = (float)DAT_00ea7a98;
      if (DAT_00ea7a98 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      fVar1 = fVar1 / fVar2;
      fVar3 = (float)(int)*(short *)(param_1 + uVar8 * 2);
      fVar2 = 1.0 - fVar1;
      fVar6 = fVar2 * *(float *)this + fVar1 * *(float *)((int)this + 0xc);
      fVar7 = fVar1 * *(float *)((int)this + 0x10) + fVar2 * *(float *)((int)this + 4);
      fVar4 = (fVar3 - *(float *)((int)this + 0x1c)) - fVar7 * *(float *)((int)this + 0x18);
      fVar5 = fVar4 * fVar6 + *(float *)((int)this + 0x18);
      *(float *)((int)this + 0x18) = fVar5;
      *(float *)((int)this + 0x1c) = fVar5 * fVar6 + *(float *)((int)this + 0x1c);
      iVar9 = (int)ROUND(((fVar1 * *(float *)((int)this + 0x14) + fVar2 * *(float *)((int)this + 8))
                          * fVar4 * fVar7 + fVar3) - 0.5);
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      if (iVar9 < 0x8000) {
        if (iVar9 < -0x8000) {
          iVar9 = -0x8000;
        }
      }
      else {
        iVar9 = 0x7fff;
      }
      *(short *)(param_1 + uVar8 * 2) = (short)iVar9;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_2);
  }
  return;
}


//// FUNCTION FUN_00c3d1f0 @ 00c3d1f0 ////

void __thiscall FUN_00c3d1f0(void *this,int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      iVar4 = *(int *)((int)this + 0x20) + uVar3;
      fVar1 = (float)iVar4;
      if (iVar4 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      fVar2 = (float)DAT_00ea7a98;
      if (DAT_00ea7a98 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      fVar1 = fVar1 / fVar2;
      fVar2 = fVar1 * *(float *)((int)this + 0xc) + (1.0 - fVar1) * *(float *)this;
      fVar1 = (((float)(int)*(short *)(param_1 + uVar3 * 2) - *(float *)((int)this + 0x1c)) -
              (fVar1 * *(float *)((int)this + 0x10) + (1.0 - fVar1) * *(float *)((int)this + 4)) *
              *(float *)((int)this + 0x18)) * fVar2 + *(float *)((int)this + 0x18);
      *(float *)((int)this + 0x18) = fVar1;
      fVar1 = fVar1 * fVar2 + *(float *)((int)this + 0x1c);
      *(float *)((int)this + 0x1c) = fVar1;
      iVar4 = (int)ROUND(fVar1 - 0.5);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      if (iVar4 < 0x8000) {
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
      }
      else {
        iVar4 = 0x7fff;
      }
      *(short *)(param_1 + uVar3 * 2) = (short)iVar4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return;
}


//// FUNCTION FUN_00c3d2d0 @ 00c3d2d0 ////

void __fastcall FUN_00c3d2d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}


//// FUNCTION FUN_00c3d300 @ 00c3d300 ////

void __thiscall FUN_00c3d300(void *this,int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (((*(float *)this != *(float *)((int)this + 0xc)) ||
      (*(float *)((int)this + 8) != *(float *)((int)this + 0x14))) ||
     (*(float *)((int)this + 4) != *(float *)((int)this + 0x10))) {
    uVar5 = DAT_00ea7a98 - *(int *)((int)this + 0x20);
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    FUN_00c3d0f0(this,param_1,uVar5);
    iVar4 = *(int *)((int)this + 0x20) + uVar5;
    *(int *)((int)this + 0x20) = iVar4;
    if (iVar4 == DAT_00ea7a98) {
      *(undefined4 *)this = *(undefined4 *)((int)this + 0xc);
      *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0x14);
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  for (; uVar5 < param_2; uVar5 = uVar5 + 1) {
    fVar2 = (float)(int)*(short *)(param_1 + uVar5 * 2);
    fVar1 = (fVar2 - *(float *)((int)this + 0x1c)) -
            *(float *)((int)this + 4) * *(float *)((int)this + 0x18);
    fVar3 = fVar1 * *(float *)this + *(float *)((int)this + 0x18);
    *(float *)((int)this + 0x18) = fVar3;
    *(float *)((int)this + 0x1c) = fVar3 * *(float *)this + *(float *)((int)this + 0x1c);
    iVar4 = (int)ROUND((*(float *)((int)this + 8) * *(float *)((int)this + 4) * fVar1 + fVar2) - 0.5
                      );
    if (iVar4 < 0) {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 < 0x8000) {
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
    }
    else {
      iVar4 = 0x7fff;
    }
    *(short *)(param_1 + uVar5 * 2) = (short)iVar4;
  }
  return;
}


//// FUNCTION FUN_00c3d410 @ 00c3d410 ////

void __thiscall FUN_00c3d410(void *this,int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((*(float *)this != *(float *)((int)this + 0xc)) ||
     (*(float *)((int)this + 4) != *(float *)((int)this + 0x10))) {
    uVar3 = DAT_00ea7a98 - *(int *)((int)this + 0x20);
    if (param_2 < uVar3) {
      uVar3 = param_2;
    }
    FUN_00c3d1f0(this,param_1,uVar3);
    iVar2 = *(int *)((int)this + 0x20) + uVar3;
    *(int *)((int)this + 0x20) = iVar2;
    if (iVar2 == DAT_00ea7a98) {
      *(undefined4 *)this = *(undefined4 *)((int)this + 0xc);
      *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0x14);
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  for (; uVar3 < param_2; uVar3 = uVar3 + 1) {
    fVar1 = (((float)(int)*(short *)(param_1 + uVar3 * 2) - *(float *)((int)this + 0x1c)) -
            *(float *)((int)this + 0x18) * *(float *)((int)this + 4)) * *(float *)this +
            *(float *)((int)this + 0x18);
    *(float *)((int)this + 0x18) = fVar1;
    fVar1 = fVar1 * *(float *)this + *(float *)((int)this + 0x1c);
    *(float *)((int)this + 0x1c) = fVar1;
    iVar2 = (int)ROUND(fVar1 - 0.5);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    if (iVar2 < 0x8000) {
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
    }
    else {
      iVar2 = 0x7fff;
    }
    *(short *)(param_1 + uVar3 * 2) = (short)iVar2;
  }
  return;
}


//// FUNCTION FUN_00c3d500 @ 00c3d500 ////

void __thiscall FUN_00c3d500(void *this,int param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_1;
  if (param_1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  fVar2 = fVar2 * (float10)param_2;
  if ((float10)200.0 <= fVar2) {
    if ((float10)8000.0 < fVar2) {
      fVar2 = (float10)8000.0;
    }
  }
  else {
    fVar2 = (float10)200.0;
  }
  fVar2 = (float10)fsin(fVar2 * (float10)7.123793e-05);
  *(float *)((int)this + 0xc) = (float)(fVar2 + fVar2);
  if ((float10)1.0 < fVar2 + fVar2) {
    *(undefined4 *)((int)this + 0xc) = 0x3f800000;
  }
  if ((1.0 < *(float *)((int)this + 0x10) * *(float *)((int)this + 0xc)) &&
     (fVar1 = 1.0 / *(float *)((int)this + 0x10), *(float *)((int)this + 0x10) = fVar1,
     1.0 < fVar1 * *(float *)((int)this + 0xc))) {
    *(float *)((int)this + 0x10) = 1.0 / *(float *)((int)this + 0xc);
  }
  return;
}


//// FUNCTION FUN_00c3d5b0 @ 00c3d5b0 ////

void __thiscall FUN_00c3d5b0(void *this,int *param_1,float param_2)

{
  float fVar1;
  undefined4 *extraout_ECX;
  int extraout_EDX;
  
  FUN_00c3d500(this,*param_1,param_2);
  fVar1 = 1.0 / *(float *)(extraout_EDX + 4);
  extraout_ECX[4] = fVar1;
  if (1.0 < fVar1 * (float)extraout_ECX[3]) {
    extraout_ECX[4] = 1.0 / (float)extraout_ECX[3];
  }
  if (((float)extraout_ECX[6] == 0.0) && ((float)extraout_ECX[7] == 0.0)) {
    *extraout_ECX = extraout_ECX[3];
    extraout_ECX[1] = extraout_ECX[4];
    extraout_ECX[2] = extraout_ECX[5];
  }
  return;
}


//// FUNCTION FUN_00c3d630 @ 00c3d630 ////

void __thiscall FUN_00c3d630(void *this,int *param_1,float param_2)

{
  float fVar1;
  undefined4 *extraout_ECX;
  int extraout_EDX;
  
  FUN_00c3d500(this,*param_1,param_2);
  if (0.09 <= *(float *)(extraout_EDX + 4)) {
    extraout_ECX[5] = (*(float *)(extraout_EDX + 4) - 1.0) * 1.1;
  }
  else {
    extraout_ECX[5] = 0xbf8020c5;
  }
  fVar1 = 1.0 / *(float *)(extraout_EDX + 8);
  extraout_ECX[4] = fVar1;
  if (1.0 < fVar1 * (float)extraout_ECX[3]) {
    extraout_ECX[4] = 1.0 / (float)extraout_ECX[3];
  }
  if (((float)extraout_ECX[6] == 0.0) && ((float)extraout_ECX[7] == 0.0)) {
    *extraout_ECX = extraout_ECX[3];
    extraout_ECX[1] = extraout_ECX[4];
    extraout_ECX[2] = extraout_ECX[5];
  }
  return;
}


//// FUNCTION FUN_00c3d6f0 @ 00c3d6f0 ////

undefined1 __cdecl FUN_00c3d6f0(float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int local_4;
  
  if (0.0 <= param_1) {
    fVar1 = param_1 * 0.33333334 + 0.5;
  }
  else {
    fVar1 = 0.5 - param_1 * 0.33333334;
  }
  local_4 = (int)ROUND(fVar1 - 0.5);
  if (local_4 < 0) {
    local_4 = local_4 + 1;
  }
  iVar2 = (int)ROUND(((param_2 - -90.0) * 0.16666667 + 0.5) - 0.5);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  return (&DAT_00da7140)[iVar2 + local_4 * 0x1f];
}


