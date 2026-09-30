//// FUNCTION FUN_00aac950 @ 00aac950 ////

undefined1 * __fastcall FUN_00aac950(undefined1 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  param_1[2] = (char)iVar1;
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  param_1[1] = (char)iVar1;
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  *param_1 = (char)iVar1;
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    param_1[3] = 0;
    return param_1;
  }
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  param_1[3] = (char)iVar1;
  return param_1;
}


//// FUNCTION FUN_00aaca80 @ 00aaca80 ////

void __thiscall FUN_00aaca80(void *this,float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = (float10)fsin((float10)*(float *)this);
  fVar1 = -(fVar1 * (float10)*(float *)((int)this + 8));
  fVar2 = (float10)fcos((float10)*(float *)this);
  local_4 = (float)(fVar2 * (float10)*(float *)((int)this + 8));
  if (*(int *)((int)this + 0xc) == 0) {
    local_c = (float)fVar1;
    local_8 = local_4;
    local_4 = 0.0;
  }
  else if (*(int *)((int)this + 0xc) == 1) {
    local_8 = 0.0;
    local_c = local_4;
    local_4 = (float)fVar1;
  }
  else {
    local_8 = (float)fVar1;
    local_c = 0.0;
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}


//// FUNCTION FUN_00aacb20 @ 00aacb20 ////

void __fastcall FUN_00aacb20(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x120) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x120) + 0x9c);
    *puVar1 = *puVar1 | 0x400000;
    (**(code **)(**(int **)(param_1 + 0x120) + 0x10))(0,1);
  }
  return;
}


//// FUNCTION FUN_00aacb50 @ 00aacb50 ////

void __fastcall FUN_00aacb50(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  fVar2 = (float)param_1[0x21];
  iVar5 = *param_1;
  fVar3 = *(float *)(iVar5 + 0x30);
  fVar4 = *(float *)(iVar5 + 0x34);
  pfVar1 = (float *)(param_1 + 0x24);
  *pfVar1 = fVar2 * *(float *)(iVar5 + 0x2c);
  param_1[0x25] = (int)(fVar2 * fVar3);
  param_1[0x26] = (int)(fVar2 * fVar4);
  if ((char)param_1[0x19] == '\0') {
    fVar2 = *pfVar1;
    fVar3 = (float)param_1[0x25];
    fVar4 = (float)param_1[0x26];
    *pfVar1 = fVar2 * (float)param_1[0xd] +
              fVar3 * (float)param_1[0x10] + fVar4 * (float)param_1[0x13];
    param_1[0x25] =
         (int)(fVar2 * (float)param_1[0xe] +
              fVar3 * (float)param_1[0x11] + fVar4 * (float)param_1[0x14]);
    param_1[0x26] =
         (int)(fVar2 * (float)param_1[0xf] +
              fVar3 * (float)param_1[0x12] + fVar4 * (float)param_1[0x15]);
  }
  fVar2 = *(float *)(*param_1 + 0x24);
  *pfVar1 = *pfVar1 * 15.0;
  param_1[0x25] = (int)((float)param_1[0x25] * 15.0);
  param_1[0x26] = (int)((fVar2 * -9.8 + (float)param_1[0x26]) * 15.0);
  return;
}


//// FUNCTION FUN_00aacc40 @ 00aacc40 ////

void __thiscall FUN_00aacc40(void *this,int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float afStack_80 [12];
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar5 = *(int *)this;
  fVar1 = *(float *)(iVar5 + 0xfc);
  fVar2 = *(float *)(iVar5 + 0xf8);
  fVar3 = param_2[0x13];
  pfVar6 = local_30;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *param_2;
    param_2 = param_2 + 1;
    pfVar6 = pfVar6 + 1;
  }
  fVar1 = (fVar1 - fVar2) * fVar3 + *(float *)(iVar5 + 0xf8);
  local_30[0] = local_30[0] * fVar1;
  local_30[1] = local_30[1] * fVar1;
  local_30[2] = local_30[2] * fVar1;
  local_30[3] = local_30[3] * fVar1;
  local_20 = local_20 * fVar1;
  local_1c = local_1c * fVar1;
  local_18 = local_18 * fVar1;
  local_14 = local_14 * fVar1;
  local_10 = local_10 * fVar1;
  if (*(char *)(iVar5 + 0x12) != '\0') {
    local_c = local_c * *(float *)(iVar5 + 4) + *(float *)((int)this + 0x58);
    local_8 = local_8 * *(float *)(iVar5 + 8) + *(float *)((int)this + 0x5c);
    local_4 = local_4 * *(float *)(iVar5 + 0xc) + *(float *)((int)this + 0x60);
  }
  pfVar6 = local_30;
  pfVar7 = afStack_80;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  (**(code **)(*param_1 + 0x24))();
  return;
}


//// FUNCTION FUN_00aacd40 @ 00aacd40 ////

uint __thiscall FUN_00aacd40(void *this,float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  ulonglong uVar11;
  undefined1 local_1c [4];
  undefined4 local_18;
  float local_10;
  float local_c [3];
  
  iVar6 = param_2;
  pfVar4 = param_1;
  fVar2 = param_1[0xc];
  param_1[0xc] = (float)((uint)fVar2 & 0xfffffeff);
  iVar3 = *(int *)this;
  pfVar5 = (float *)(param_2 + 0x24);
  if (*(char *)(iVar3 + 0x12) != '\0') {
    fVar1 = *pfVar5;
    pfVar5 = local_c;
    local_10 = *(float *)(iVar3 + 0xc) * *(float *)(param_2 + 0x2c);
    local_c[0] = *(float *)(iVar3 + 4) * fVar1 + *(float *)((int)this + 0x58);
    local_c[1] = *(float *)(iVar3 + 8) * *(float *)(param_2 + 0x28) + *(float *)((int)this + 0x5c);
    local_c[2] = local_10 + *(float *)((int)this + 0x60);
  }
  *param_1 = *pfVar5;
  param_1[1] = pfVar5[1];
  param_1[2] = pfVar5[2];
  param_1[10] = *(float *)(param_2 + 0x48);
  iVar3 = *(int *)this;
  fVar1 = (*(float *)(iVar3 + 0xfc) - *(float *)(iVar3 + 0xf8)) * *(float *)(param_2 + 0x4c) +
          *(float *)(iVar3 + 0xf8);
  param_1[9] = fVar1;
  param_1[9] = fVar1 * *(float *)((int)this + 0xac);
  if (*(int *)(*(int *)this + 0x118) == 0xc0) {
    param_1[0xc] = (float)((uint)fVar2 & 0xfffffeff | 0x800);
    param_1[3] = *(float *)(param_2 + 0x18);
    param_1[4] = *(float *)(param_2 + 0x1c);
    param_1[5] = *(float *)(param_2 + 0x20);
  }
  iVar3 = *(int *)this;
  bVar8 = *(char *)(iVar3 + 0x10c) != '\0';
  local_c[0] = -NAN;
  local_c[1] = -NAN;
  local_c[2] = -NAN;
  if (bVar8) {
    local_c[0] = *(float *)(iVar3 + 0x100);
  }
  uVar7 = (uint)bVar8;
  if (*(char *)(iVar3 + 0x10d) != '\0') {
    local_c[uVar7] = *(float *)(iVar3 + 0x104);
    uVar7 = uVar7 + 1;
  }
  if (*(char *)(iVar3 + 0x10e) != '\0') {
    local_c[uVar7] = *(float *)(iVar3 + 0x108);
    uVar7 = uVar7 + 1;
  }
  local_18 = -NAN;
  if (uVar7 == 1) {
    local_18 = local_c[0];
  }
  else if (uVar7 == 2) {
    pfVar5 = FUN_006a47d0(local_1c);
    local_18 = *pfVar5;
  }
  else if (uVar7 == 3) {
    if (0.5 <= *(float *)(param_2 + 0x4c)) {
      pfVar5 = FUN_006a47d0(&param_2);
      local_18 = *pfVar5;
    }
    else {
      pfVar5 = FUN_006a47d0(&param_1);
      local_18 = *pfVar5;
    }
  }
  iVar3 = *(int *)this;
  if ((*(char *)(iVar3 + 0xec) != '\0') || (*(char *)(iVar3 + 0xed) != '\0')) {
    if (*(float *)((int)this + 0xa4) <= *(float *)(iVar6 + 0x4c)) {
      fVar9 = (float10)1.0;
    }
    else {
      fVar9 = (float10)fcos(((float10)*(float *)(iVar6 + 0x4c) /
                            (float10)*(float *)((int)this + 0xa4)) * (float10)3.1415927);
      fVar9 = ((float10)1.0 - fVar9) * (float10)0.5;
    }
    fVar10 = (float10)1.0 - (float10)*(float *)(iVar6 + 0x4c);
    if (fVar10 < (float10)*(float *)((int)this + 0xa8)) {
      fVar10 = (float10)fcos((fVar10 / (float10)*(float *)((int)this + 0xa8)) * (float10)3.1415927);
      fVar9 = ((float10)1.0 - fVar10) * fVar9 * (float10)0.5;
    }
    if (*(char *)(iVar3 + 0xec) != '\0') {
      param_1 = (float *)((uint)local_18 >> 0x18);
      uVar11 = FUN_00acd42c();
      iVar6 = (int)uVar11;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      local_18 = (float)CONCAT13((char)iVar6,(undefined3)local_18);
      fVar9 = extraout_ST0;
    }
    if (*(char *)(iVar3 + 0xed) != '\0') {
      pfVar4[9] = (float)((((float10)1.0 - (float10)*(float *)(iVar3 + 0xf4)) * fVar9 +
                          (float10)*(float *)(iVar3 + 0xf4)) * (float10)pfVar4[9]);
    }
  }
  if (2 < *(int *)(*(int *)this + 0x110)) {
    param_1 = (float *)((uint)local_18 >> 0x18);
    FUN_00aac950((undefined1 *)&local_18);
  }
  pfVar4[0xb] = local_18;
  uVar7 = CONCAT31((int3)((uint)local_18 >> 8),*(char *)((int)this + 0xb0));
  if (*(char *)((int)this + 0xb0) != '\0') {
    uVar11 = FUN_00acd42c();
    uVar7 = (uint)((uVar11 & 0xffffffff) / (ulonglong)*(uint *)((int)this + 0xb8));
    *(char *)(pfVar4 + 0xc) = (char)((uVar11 & 0xffffffff) % (ulonglong)*(uint *)((int)this + 0xb8))
    ;
  }
  return uVar7;
}


//// FUNCTION FUN_00aad070 @ 00aad070 ////

void __cdecl FUN_00aad070(float *param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = FUN_00990e30(-1.0,1.0);
  fVar1 = (float)SQRT((float10)1.0 - fVar2 * (float10)(float)fVar2);
  fVar3 = FUN_00990e30(0.0,6.2831855);
  fVar4 = (float10)fsin(fVar3);
  param_1[2] = (float)fVar2;
  *param_1 = (float)(fVar4 * (float10)fVar1);
  fVar2 = (float10)fcos(fVar3);
  param_1[1] = (float)(fVar2 * (float10)fVar1);
  return;
}


//// FUNCTION FUN_00aad0d0 @ 00aad0d0 ////

void __fastcall FUN_00aad0d0(int *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00aad120 @ 00aad120 ////

int * __thiscall FUN_00aad120(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = *(undefined4 **)this;
  if (puVar1 == (undefined4 *)0x0) {
    *(int *)this = param_1;
    return this;
  }
  LVar3 = InterlockedDecrement(puVar1 + 4);
  uVar2 = DAT_0105b588;
  if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  DAT_0105b588 = uVar2;
  *(undefined4 *)this = 0;
  *(int *)this = param_1;
  return this;
}


//// FUNCTION FUN_00aad180 @ 00aad180 ////

void __fastcall FUN_00aad180(int *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00aad1d0 @ 00aad1d0 ////

int * __thiscall FUN_00aad1d0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = *(undefined4 **)this;
  if (puVar1 == (undefined4 *)0x0) {
    *(int *)this = param_1;
    return this;
  }
  LVar3 = InterlockedDecrement(puVar1 + 4);
  uVar2 = DAT_0105b588;
  if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  DAT_0105b588 = uVar2;
  *(undefined4 *)this = 0;
  *(int *)this = param_1;
  return this;
}


//// FUNCTION FUN_00aad3a0 @ 00aad3a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00aad3a0(void *this,void *param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar5;
  int iVar4;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(float *)((int)param_1 + 0x50) = param_2 + *(float *)((int)param_1 + 0x50);
  fVar2 = param_2 / *(float *)((int)this + 0xa0) + *(float *)((int)param_1 + 0x4c);
  *(float *)((int)param_1 + 0x4c) = fVar2;
  if (1.0 < fVar2) {
    if (*(char *)(*(uint *)this + 0x10) != '\0') {
      return *(uint *)this & 0xffffff00;
    }
    *(undefined4 *)((int)param_1 + 0x4c) = 0x3f800000;
  }
  pfVar1 = (float *)((int)param_1 + 0x24);
  if (*(float *)((int)this + 0x9c) == 0.0) {
    *pfVar1 = param_2 * *(float *)((int)param_1 + 0x30) + *pfVar1;
    *(float *)((int)param_1 + 0x28) =
         param_2 * *(float *)((int)param_1 + 0x34) + *(float *)((int)param_1 + 0x28);
    *(float *)((int)param_1 + 0x2c) =
         param_2 * *(float *)((int)param_1 + 0x38) + *(float *)((int)param_1 + 0x2c);
  }
  else {
    fVar7 = (float10)FUN_00ace9b0();
    pfVar6 = (float *)((int)param_1 + 0x30);
    fVar8 = (fVar7 - (float10)1.0) / (float10)*(float *)((int)this + 0x9c);
    *pfVar1 = (float)(fVar8 * (float10)*pfVar6 + (float10)*pfVar1);
    *(float *)((int)param_1 + 0x28) =
         (float)(fVar8 * (float10)*(float *)((int)param_1 + 0x34)) + *(float *)((int)param_1 + 0x28)
    ;
    *(float *)((int)param_1 + 0x2c) =
         (float)(fVar8 * (float10)*(float *)((int)param_1 + 0x38)) + *(float *)((int)param_1 + 0x2c)
    ;
    local_40 = (float)(fVar7 * (float10)*pfVar6);
    *pfVar6 = local_40;
    *(float *)((int)param_1 + 0x34) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x34));
    *(float *)((int)param_1 + 0x38) = (float)(fVar7 * (float10)*(float *)((int)param_1 + 0x38));
  }
  pfVar6 = (float *)((int)param_1 + 0x30);
  fVar2 = param_2 * param_2;
  local_3c = fVar2 * *(float *)((int)param_1 + 0x40);
  *pfVar1 = fVar2 * *(float *)((int)param_1 + 0x3c) * 0.5 + *pfVar1;
  *(float *)((int)param_1 + 0x28) = local_3c * 0.5 + *(float *)((int)param_1 + 0x28);
  *(float *)((int)param_1 + 0x2c) =
       fVar2 * *(float *)((int)param_1 + 0x44) * 0.5 + *(float *)((int)param_1 + 0x2c);
  local_38 = param_2 * *(float *)((int)param_1 + 0x44);
  *pfVar6 = param_2 * *(float *)((int)param_1 + 0x3c) + *pfVar6;
  *(float *)((int)param_1 + 0x34) =
       param_2 * *(float *)((int)param_1 + 0x40) + *(float *)((int)param_1 + 0x34);
  *(float *)((int)param_1 + 0x38) = local_38 + *(float *)((int)param_1 + 0x38);
  iVar4 = *(int *)this;
  if ((*(char *)(iVar4 + 0x134) == '\0') && (*(int *)(iVar4 + 0x118) != 0xc0)) {
    *(float *)((int)param_1 + 0x48) =
         param_2 * *(float *)((int)param_1 + 0x54) + *(float *)((int)param_1 + 0x48);
  }
  else if (*(char *)(iVar4 + 0x135) == '\0') {
    FUN_009a9bb0(&local_40,param_2 * *(float *)((int)param_1 + 0x54),(float *)((int)this + 0x124));
    FUN_009aa380(&local_30,&local_40);
    FUN_009ab130(param_1,&local_30);
  }
  else {
    local_40 = *pfVar1;
    local_3c = *(float *)((int)param_1 + 0x28);
    local_38 = *(float *)((int)param_1 + 0x2c);
    FUN_009ab5f0(param_1,(float *)((int)this + 0x124),
                 (local_38 - *(float *)((int)this + 0x68)) * *(float *)((int)param_1 + 0x54) *
                 _DAT_00e6e49c);
    fVar7 = (float10)fcos((float10)*(float *)((int)param_1 + 0x48));
    local_4 = 0;
    local_8 = 0;
    local_c = 0;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    local_28 = 0;
    local_10 = 0x3f800000;
    local_20 = (float)fVar7;
    local_30 = (float)fVar7;
    fVar7 = (float10)fsin((float10)*(float *)((int)param_1 + 0x48));
    local_2c = (float)fVar7;
    local_24 = (float)-fVar7;
    FUN_009aafb0(param_1,&local_30);
    *pfVar1 = local_40;
    *(float *)((int)param_1 + 0x28) = local_3c;
    *(float *)((int)param_1 + 0x2c) = local_38;
  }
  iVar4 = *(int *)this;
  if (*(char *)(iVar4 + 0x13) != '\0') {
    fVar2 = *(float *)((int)param_1 + 0x2c);
    fVar3 = *(float *)((int)this + 0x68);
    uVar5 = (undefined2)((uint)iVar4 >> 0x10);
    iVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar3) << 8 | (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                           (ushort)(fVar2 == fVar3) << 0xe);
    if (fVar2 < fVar3) {
      fVar2 = *(float *)((int)param_1 + 0x38);
      iVar4 = CONCAT22(uVar5,(ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                             (ushort)(fVar2 == 0.0) << 0xe);
      if (fVar2 < 0.0) {
        *(undefined4 *)((int)param_1 + 0x2c) = *(undefined4 *)((int)this + 0x68);
        *(float *)((int)param_1 + 0x38) = -*(float *)((int)param_1 + 0x38);
        fVar2 = *(float *)(*(int *)this + 0x58);
        *pfVar6 = fVar2 * *pfVar6;
        *(float *)((int)param_1 + 0x34) = fVar2 * *(float *)((int)param_1 + 0x34);
        *(float *)((int)param_1 + 0x38) = fVar2 * *(float *)((int)param_1 + 0x38);
        fVar2 = *(float *)((int)param_1 + 0x38);
        iVar4 = CONCAT22(uVar5,(ushort)(fVar2 < 0.001) << 8 | (ushort)NAN(fVar2) << 10 |
                               (ushort)(fVar2 == 0.001) << 0xe);
        if (fVar2 < 0.001) {
          iVar4 = 0;
          *(undefined4 *)((int)param_1 + 0x38) = 0;
          *(undefined4 *)((int)param_1 + 0x34) = 0;
          *pfVar6 = 0.0;
          *(undefined4 *)((int)param_1 + 0x44) = 0;
          *(undefined4 *)((int)param_1 + 0x40) = 0;
          *(undefined4 *)((int)param_1 + 0x3c) = 0;
          *(undefined4 *)((int)param_1 + 0x54) = 0;
        }
      }
    }
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}


//// FUNCTION FUN_00aad6f0 @ 00aad6f0 ////

uint __thiscall FUN_00aad6f0(void *this,uint param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  
  if (*(char *)(*(int *)this + 0x134) != '\0') {
    return CONCAT31((int3)((uint)*(int *)this >> 8),1);
  }
  if (param_1 != *(uint *)((int)this + 0xd4)) {
    iVar9 = param_1 * 0x34;
    if (*(int *)((int)this + 0xcc) == 0) {
      iVar6 = *(int *)(*(int *)((int)this + 0xd0) + 0x20);
    }
    else {
      iVar6 = *(int *)(*(int *)((int)this + 0xcc) + 0x20);
    }
    FUN_00aacd40(this,(float *)(iVar6 + iVar9),param_2);
    iVar6 = 0;
    if (*(int *)((int)this + 0xd0) != 0) {
      pfVar7 = (float *)(*(int *)(*(int *)((int)this + 0xd0) + 0x20) + iVar9);
      if (*(int *)((int)this + 0xcc) != 0) {
        pfVar8 = (float *)(*(int *)(*(int *)((int)this + 0xcc) + 0x20) + iVar9);
        pfVar10 = pfVar7;
        for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar10 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar10 = pfVar10 + 1;
        }
      }
      pfVar7[0xc] = (float)((uint)pfVar7[0xc] | 0x1000);
      fVar1 = (float)*(int *)(*(int *)this + 300);
      if (*(int *)(*(int *)this + 300) < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      fVar1 = fVar1 * 6.666667e-05;
      if (*(float *)(param_2 + 0x50) <= fVar1) {
        fVar1 = *(float *)(param_2 + 0x50);
      }
      fVar2 = *(float *)(param_2 + 0x40);
      fVar3 = *(float *)(param_2 + 0x44);
      fVar4 = *(float *)(param_2 + 0x34);
      fVar5 = *(float *)(param_2 + 0x38);
      pfVar7[6] = (*pfVar7 - fVar1 * *(float *)(param_2 + 0x30)) +
                  fVar1 * *(float *)(param_2 + 0x3c) * fVar1 * 0.5;
      pfVar7[7] = (pfVar7[1] - fVar1 * fVar4) + fVar1 * fVar2 * fVar1 * 0.5;
      pfVar7[8] = (pfVar7[2] - fVar1 * fVar5) + fVar1 * fVar3 * fVar1 * 0.5;
      iVar6 = *(int *)this;
      fVar1 = *(float *)(iVar6 + 0x128);
      *(undefined1 *)(pfVar7 + 0xc) = 0;
      pfVar7[9] = fVar1 * 0.5;
    }
    return CONCAT31((int3)((uint)iVar6 >> 8),1);
  }
  return *(uint *)((int)this + 0xd4) & 0xffffff00;
}


//// FUNCTION FUN_00aad880 @ 00aad880 ////

float * __cdecl
FUN_00aad880(float *param_1,float *param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,char param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float local_30 [9];
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = param_6 * param_3;
  fVar3 = param_7 * param_4;
  fVar4 = param_8 * param_5;
  if (param_9 != '\0') {
    FUN_00a7be50(param_1,fVar2 + param_2[9],fVar3 + param_2[10],fVar4 + param_2[0xb]);
    return param_1;
  }
  fVar1 = param_2[3];
  pfVar6 = param_2;
  pfVar7 = local_30;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  local_c = local_c + fVar2 * *param_2 + fVar4 * param_2[6] + fVar3 * fVar1;
  local_8 = local_8 + fVar4 * param_2[7] + fVar3 * param_2[4] + fVar2 * param_2[1];
  local_4 = local_4 + fVar4 * param_2[8] + fVar2 * param_2[2] + fVar3 * param_2[5];
  pfVar6 = local_30;
  pfVar7 = param_1;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_00aada40 @ 00aada40 ////

void __cdecl FUN_00aada40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
    }
    param_3 = param_3 + 5;
  }
  return;
}


//// FUNCTION FUN_00aada90 @ 00aada90 ////

void __thiscall FUN_00aada90(void *this,float *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_30 [12];
  
  iVar3 = *(int *)this;
  *(undefined1 *)((int)this + 100) = 0;
  iVar2 = *(int *)this;
  pfVar1 = FUN_00aad880(local_30,param_1,*(float *)(iVar2 + 0x18),*(float *)(iVar2 + 0x1c),
                        *(float *)(iVar2 + 0x20),*(float *)(iVar3 + 4),*(float *)(iVar3 + 8),
                        *(float *)(iVar3 + 0xc),'\0');
  pfVar5 = (float *)((int)this + 4);
  iVar3 = *(int *)this;
  pfVar4 = pfVar5;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar4 = pfVar4 + 1;
  }
  pfVar1 = pfVar5;
  if (**(char **)(iVar3 + 0xd8) == '\0') {
    pfVar1 = param_1;
  }
  pfVar4 = (float *)((int)this + 0x34);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar4 = pfVar4 + 1;
  }
  if ((*(char *)(iVar3 + 0x135) != '\0') && (**(char **)(iVar3 + 0x60) == '\0')) {
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *param_1;
      param_1 = param_1 + 1;
      pfVar5 = pfVar5 + 1;
    }
  }
  FUN_00aacb50(this);
  return;
}


//// FUNCTION FUN_00aadb40 @ 00aadb40 ////

void __thiscall FUN_00aadb40(void *this,float *param_1)

{
  float *this_00;
  float *pfVar1;
  float *this_01;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  this_00 = *(float **)((int)this + 0xc0);
  FUN_00aaca80(this_00,&local_54);
  if ((this_00 != (float *)0x0) && ((*(int *)((int)this + 0xc4) - (int)this_00) / 0x14 == 1)) {
    *param_1 = local_54;
    param_1[1] = local_50;
    param_1[2] = local_4c;
    return;
  }
  local_6c = 0.0;
  local_68 = 0.0;
  local_64 = 0.0;
  FUN_00aaca80(this_00 + 5,&local_60);
  if ((*(int *)((int)this + 0xc0) == 0) ||
     ((*(int *)((int)this + 0xc4) - *(int *)((int)this + 0xc0)) / 0x14 != 3)) {
    this_01 = (float *)0x0;
LAB_00aadc21:
    if (*(char *)(this_00 + 9) == '\0') {
      *param_1 = local_60 + local_54 + local_6c;
      param_1[1] = local_5c + local_50 + local_68;
      param_1[2] = local_58 + local_4c + local_64;
      return;
    }
  }
  else {
    this_01 = this_00 + 10;
    if (this_01 == (float *)0x0) goto LAB_00aadc21;
    pfVar1 = (float *)FUN_00aaca80(this_01,&local_3c);
    local_6c = *pfVar1;
    local_68 = pfVar1[1];
    local_64 = pfVar1[2];
    if (*(char *)(this_00 + 0xe) == '\0') goto LAB_00aadc21;
  }
  if ((this_01 != (float *)0x0) && (*(char *)(this_01 + 4) != '\0')) {
    if (this_00[8] == 0.0) {
      local_40 = 0x3f800000;
      local_48 = 0.0;
LAB_00aadcb7:
      local_44 = 0;
    }
    else {
      local_40 = 0;
      if (this_00[8] != 1.4013e-45) {
        local_48 = 1.0;
        goto LAB_00aadcb7;
      }
      local_44 = 0x3f800000;
      local_48 = 0.0;
    }
    local_3c = local_48;
    local_38 = local_44;
    local_34 = local_40;
    FUN_0040b670(&local_30);
    FUN_009ab5f0(&local_30,&local_3c,this_00[5]);
    FUN_00a42de0(&local_30,&local_6c);
    local_6c = local_60 + local_6c;
    local_68 = local_5c + local_68;
    local_64 = local_58 + local_64;
  }
  if (*(char *)(this_00 + 9) == '\0') goto LAB_00aaddfb;
  if (this_00[3] == 0.0) {
    local_34 = 0x3f800000;
    local_3c = 0.0;
LAB_00aadd64:
    local_38 = 0;
  }
  else {
    local_34 = 0;
    if (this_00[3] != 1.4013e-45) {
      local_3c = 1.0;
      goto LAB_00aadd64;
    }
    local_38 = 0x3f800000;
    local_3c = 0.0;
  }
  local_10 = 0x3f800000;
  local_20 = 0x3f800000;
  local_30 = 0x3f800000;
  local_48 = local_3c;
  local_44 = local_38;
  local_40 = local_34;
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  FUN_009ab5f0(&local_30,&local_48,*this_00);
  FUN_00a42de0(&local_30,&local_6c);
LAB_00aaddfb:
  if ((this_01 == (float *)0x0) || (*(char *)(this_01 + 4) == '\0')) {
    local_6c = local_60 + local_6c;
    local_68 = local_5c + local_68;
    local_64 = local_58 + local_64;
  }
  *param_1 = local_54 + local_6c;
  param_1[1] = local_50 + local_68;
  param_1[2] = local_4c + local_64;
  return;
}


//// FUNCTION FUN_00aade90 @ 00aade90 ////

void __cdecl FUN_00aade90(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      param_1[4] = param_3[4];
    }
    param_1 = param_1 + 5;
  }
  return;
}


//// FUNCTION FUN_00aadf10 @ 00aadf10 ////

undefined4 * __cdecl FUN_00aadf10(void *param_1,char *param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd5f0;
  local_c = ExceptionList;
  iVar5 = 7;
  bVar8 = true;
  pcVar6 = "(None)";
  pcVar7 = param_2;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar8 = *pcVar6 == *pcVar7;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_c;
  puVar2 = FUN_0040a690(param_3,'\0');
  *(byte *)((int)puVar2 + 0x16) = *(byte *)((int)puVar2 + 0x16) & 0xfd;
  if (param_5 == 2) {
    cVar1 = '*';
  }
  else if (param_5 == 3) {
    cVar1 = '+';
  }
  else {
    cVar1 = (param_4 != 0) + ',';
  }
  local_6c = local_60;
  *(char *)((int)param_1 + 0xc) = cVar1;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"FX\\",3);
  local_68 = 3;
  local_6c[3] = '\0';
  local_4 = 0;
  puVar3 = FUN_004312e0(local_2c,&local_6c,param_2);
  puVar3 = FUN_004312e0(local_4c,puVar3,".dds");
  local_4._0_1_ = 2;
  pvVar4 = FUN_0099bb50((char *)*puVar3,0,0,0,'\0');
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if ((pvVar4 != (void *)0x0) && (*(void **)((int)param_1 + 0x18) != pvVar4)) {
    Engine_SetResourceReference(param_1,(int)pvVar4);
  }
  local_4 = 0xffffffff;
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  *(uint *)((int)param_1 + 0x10) = *(uint *)((int)param_1 + 0x10) & 0xbfffffff;
  *(byte *)((int)puVar2 + 0x26) = *(byte *)((int)puVar2 + 0x26) | 2;
  puVar2[6] = param_1;
  puVar2[0xb] = 0xbdcccccd;
  FUN_0040a6f0((int)puVar2);
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00aae0c0 @ 00aae0c0 ////

float * __thiscall FUN_00aae0c0(void *this,void *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  float *this_00;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  this_00 = (float *)FUN_00aac520(param_1,(int *)((int)this + 0x6c));
  if (this_00 == (float *)0x0) {
    return (float *)0x0;
  }
  if (*(char *)(*(int *)this + 0x11) == '\0') {
    param_1 = *(void **)(*(int *)this + 0x38);
  }
  else {
    fVar7 = FUN_00990e30(-3.1415927,3.1415927);
    param_1 = (void *)(float)fVar7;
  }
  iVar2 = *(int *)this;
  if ((*(char *)(iVar2 + 0x134) == '\0') && (*(int *)(iVar2 + 0x118) != 0xc0)) {
    this_00[0x12] = (float)param_1;
  }
  else if (*(char *)(iVar2 + 0x135) == '\0') {
    FUN_009ab5f0(this_00,(float *)((int)this + 0x124),(float)param_1);
  }
  else {
    fVar7 = (float10)fcos((float10)(float)param_1);
    this_00[0x12] = (float)param_1;
    this_00[0xb] = 0.0;
    this_00[10] = 0.0;
    this_00[9] = 0.0;
    this_00[7] = 0.0;
    this_00[6] = 0.0;
    this_00[5] = 0.0;
    this_00[2] = 0.0;
    this_00[8] = 1.0;
    this_00[4] = (float)fVar7;
    *this_00 = (float)fVar7;
    fVar7 = (float10)fsin((float10)(float)param_1);
    this_00[1] = (float)fVar7;
    this_00[3] = (float)-fVar7;
  }
  iVar2 = *(int *)(*(int *)this + 0x98);
  pfVar6 = this_00 + 9;
  bVar4 = false;
  if (iVar2 == 0) {
    local_18 = 0.0;
    *pfVar6 = 0.0;
    local_14 = 0.0;
    local_10 = 0.0;
    this_00[10] = 0.0;
    this_00[0xb] = 0.0;
  }
  else if (iVar2 == 1) {
    fVar7 = FUN_00990e30(0.0,6.2831855);
    fVar8 = (float10)fsin(fVar7);
    local_10 = *(float *)(*(int *)this + 0x94);
    fVar7 = (float10)fcos(fVar7);
    local_20 = (float)fVar7;
    local_18 = (float)(fVar8 * (float10)local_10);
    local_14 = local_20 * local_10;
    local_10 = local_10 * 0.0;
    fVar7 = FUN_00990e30(0.0,0.5);
    bVar4 = true;
    local_24 = (float)((float10)local_18 * fVar7);
    *pfVar6 = local_24;
    local_20 = (float)((float10)local_14 * fVar7);
    this_00[10] = local_20;
    local_1c = (float)((float10)local_10 * fVar7);
    this_00[0xb] = local_1c;
  }
  else {
    if (iVar2 != 2) {
      return (float *)0x0;
    }
    fVar3 = *(float *)(*(int *)this + 0x94);
    pfVar5 = (float *)FUN_00aad070(local_c);
    local_24 = fVar3 * *pfVar5;
    local_20 = fVar3 * pfVar5[1];
    local_1c = fVar3 * pfVar5[2];
    fVar7 = FUN_00990e30(0.0,0.5);
    local_18 = (float)((float10)local_24 * fVar7);
    *pfVar6 = local_18;
    local_14 = (float)((float10)local_20 * fVar7);
    this_00[10] = local_14;
    local_10 = (float)((float10)local_1c * fVar7);
    this_00[0xb] = local_10;
    iVar2 = *(int *)this;
    if (((0.01 < ABS(*(float *)(iVar2 + 0xc0) - *(float *)(iVar2 + 0xc4))) ||
        (0.01 < ABS(*(float *)(iVar2 + 0xc4) - *(float *)(iVar2 + 200)))) ||
       (0.01 < ABS(*(float *)(iVar2 + 200) - *(float *)(iVar2 + 0xc0)))) {
      bVar4 = true;
    }
  }
  if ((*(char *)(*(int *)this + 0x135) != '\0') && (*(char *)(*(int *)this + 0x5f) == '\0')) {
    pfVar5 = (float *)FUN_00aadb40(this,local_c);
    *pfVar6 = *pfVar6 + *pfVar5;
    this_00[10] = pfVar5[1] + this_00[10];
    this_00[0xb] = pfVar5[2] + this_00[0xb];
  }
  *pfVar6 = *(float *)(*(int *)this + 0xc0) * *pfVar6;
  this_00[10] = *(float *)(*(int *)this + 0xc4) * this_00[10];
  this_00[0xb] = *(float *)(*(int *)this + 200) * this_00[0xb];
  if ((bVar4) && (*(char *)((int)this + 100) == '\0')) {
    FUN_00a42de0((void *)((int)this + 0x34),pfVar6);
  }
  if (*(char *)(*(int *)this + 0x12) == '\0') {
    *pfVar6 = *pfVar6 + *(float *)((int)this + 0x58);
    this_00[10] = *(float *)((int)this + 0x5c) + this_00[10];
    this_00[0xb] = *(float *)((int)this + 0x60) + this_00[0xb];
  }
  iVar2 = *(int *)this;
  if ((*(char *)(iVar2 + 0xd1) == '\0') && (*(char *)(iVar2 + 0xd0) == '\0')) {
    pfVar6 = this_00 + 0xc;
    *pfVar6 = *(float *)(iVar2 + 0xb4);
    this_00[0xd] = *(float *)(iVar2 + 0xb8);
    this_00[0xe] = *(float *)(iVar2 + 0xbc);
    iVar2 = *(int *)(*(int *)this + 0xd4);
    if (iVar2 != 0) {
      fVar3 = (float)iVar2;
      if (iVar2 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      fVar3 = fVar3 * 0.001;
      fVar7 = FUN_00990e30(0.0,1.0);
      fVar1 = (float)fVar7;
      pfVar5 = (float *)FUN_00aad070(local_c);
      local_24 = fVar1 * *pfVar5;
      local_20 = fVar1 * pfVar5[1];
      local_1c = fVar1 * pfVar5[2];
      FUN_004130d0(&local_24,pfVar6);
      local_10 = local_1c * fVar3;
      *pfVar6 = local_24 * fVar3 + *pfVar6;
      this_00[0xd] = local_20 * fVar3 + this_00[0xd];
      this_00[0xe] = local_10 + this_00[0xe];
      FUN_00412e20(pfVar6);
    }
    if (*(char *)((int)this + 100) == '\0') {
      FUN_00a42de0((void *)((int)this + 0x34),pfVar6);
    }
  }
  else {
    pfVar6 = (float *)FUN_00aad070(local_c);
    this_00[0xc] = *pfVar6;
    this_00[0xd] = pfVar6[1];
    this_00[0xe] = pfVar6[2];
    if (*(char *)(*(int *)this + 0xd0) != '\0') {
      this_00[0xe] = 0.0;
      FUN_00412e20(this_00 + 0xc);
    }
  }
  fVar7 = FUN_00990e30(*(float *)((int)this + 0x88),*(float *)((int)this + 0x8c));
  fVar7 = fVar7 * (float10)15.0;
  this_00[0xc] = (float)(fVar7 * (float10)this_00[0xc]);
  this_00[0xd] = (float)(fVar7 * (float10)this_00[0xd]);
  this_00[0xe] = (float)(fVar7 * (float10)this_00[0xe]);
  this_00[0xf] = *(float *)((int)this + 0x90);
  this_00[0x10] = *(float *)((int)this + 0x94);
  this_00[0x11] = *(float *)((int)this + 0x98);
  this_00[0x14] = 0.0;
  this_00[0x13] = 0.0;
  fVar7 = FUN_00990e30(*(float *)(*(int *)this + 0x50),*(float *)(*(int *)this + 0x54));
  this_00[0x15] = (float)(fVar7 * (float10)94.2);
  return this_00;
}


//// FUNCTION FUN_00aae600 @ 00aae600 ////

uint __thiscall FUN_00aae600(void *this,void *param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(*(int *)this + 0xcc) != 0) {
    do {
      pfVar1 = FUN_00aae0c0(this,param_1);
      if ((pfVar1 == (float *)0x0) ||
         (uVar2 = FUN_00aad6f0(this,uVar3,(int)pfVar1), (char)uVar2 == '\0')) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != *(uint *)(*(int *)this + 0xcc));
  }
  return *(uint *)(*(int *)this + 0xcc);
}


//// FUNCTION FUN_00aae660 @ 00aae660 ////

void __fastcall FUN_00aae660(int param_1)

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


//// FUNCTION FUN_00aae690 @ 00aae690 ////

undefined4 * FUN_00aae690(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00aade90(param_1,param_2,param_3);
  return param_1 + param_2 * 5;
}


//// FUNCTION FUN_00aae6c0 @ 00aae6c0 ////

uint __thiscall FUN_00aae6c0(void *this,float param_1,void *param_2,undefined4 *param_3)

{
  float *pfVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  undefined1 uVar10;
  void *pvVar11;
  undefined4 *puVar12;
  undefined4 in_EAX;
  float *pfVar13;
  uint uVar14;
  LONG LVar15;
  undefined4 **ppuVar16;
  int iVar17;
  int iVar18;
  float10 fVar19;
  float10 fVar20;
  float local_60;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_1c;
  float local_10;
  float local_c [3];
  
  pvVar11 = param_2;
  bVar9 = false;
  if (0.0 < *(float *)((int)this + 0x70)) {
    fVar5 = *(float *)((int)this + 0x70) - param_1;
    *(float *)((int)this + 0x70) = fVar5;
    if (fVar5 < 0.0 == 0 && (fVar5 == 0.0) == 0) {
      return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                      (ushort)(fVar5 < 0.0) << 8 | (ushort)NAN(fVar5) << 10 |
                                      (ushort)(fVar5 == 0.0) << 0xe) >> 8),1);
    }
    param_1 = -fVar5;
    FUN_00aae600(this,param_2);
  }
  if (*(char *)(*(int *)this + 0x135) != '\0') {
    pfVar1 = *(float **)((int)this + 0xc4);
    for (pfVar13 = *(float **)((int)this + 0xc0); pfVar13 != pfVar1; pfVar13 = pfVar13 + 5) {
      *pfVar13 = param_1 * pfVar13[1] + *pfVar13;
    }
    pfVar13 = (float *)FUN_00aadb40(this,local_c);
    local_48 = *pfVar13;
    local_44 = pfVar13[1];
    local_40 = pfVar13[2];
    if (*(char *)(*(int *)this + 0x12) == '\0') {
      FUN_0040b490((void *)((int)this + 4),&local_48);
    }
  }
  pvVar2 = *(void **)((int)this + 0x6c);
  param_2 = (void *)0x0;
  for (; pvVar2 != (void *)0x0; pvVar2 = *(void **)((int)pvVar2 + 0x58)) {
    uVar14 = FUN_00aad3a0(this,pvVar2,param_1);
    if ((char)uVar14 == '\0') {
      if (*(int *)((int)pvVar2 + 0x58) != 0) {
        *(undefined4 *)(*(int *)((int)pvVar2 + 0x58) + 0x5c) = *(undefined4 *)((int)pvVar2 + 0x5c);
      }
      if (*(int *)((int)pvVar2 + 0x5c) != 0) {
        *(undefined4 *)(*(int *)((int)pvVar2 + 0x5c) + 0x58) = *(undefined4 *)((int)pvVar2 + 0x58);
      }
      *(undefined4 *)((int)pvVar2 + 0x5c) = *(undefined4 *)((int)pvVar11 + 4);
      *(void **)((int)pvVar11 + 4) = pvVar2;
      *(int *)((int)pvVar11 + 8) = *(int *)((int)pvVar11 + 8) + -1;
      if (pvVar2 == *(void **)((int)this + 0x6c)) {
        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)pvVar2 + 0x58);
      }
    }
    else {
      iVar18 = *(int *)this;
      if ((*(char *)(iVar18 + 0x135) != '\0') && (*(char *)(iVar18 + 0x5f) != '\0')) {
        fVar5 = local_48 - *(float *)((int)pvVar2 + 0x24);
        fVar6 = local_44 - *(float *)((int)pvVar2 + 0x28);
        fVar7 = local_40 - *(float *)((int)pvVar2 + 0x2c);
        fVar8 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5;
        if (fVar8 < *(float *)(iVar18 + 0x88) * *(float *)(iVar18 + 0x88)) {
          if (param_1 <= 0.5) {
            local_60 = param_1;
          }
          else {
            local_60 = 0.5;
          }
          fVar19 = (float10)FUN_00ace9b0();
          fVar19 = ((float10)*(float *)(iVar18 + 0x8c) / (float10)SQRT(fVar8)) * fVar19;
          local_38 = (float)((float10)fVar6 * fVar19);
          local_34 = (float)((float10)fVar7 * fVar19);
          fVar20 = (float10)local_60 * (float10)param_1;
          local_2c = (float)((float10)local_38 * fVar20);
          local_28 = (float)((float10)local_34 * fVar20);
          local_1c = local_28 * 7.5;
          *(float *)((int)pvVar2 + 0x24) =
               (float)((float10)fVar5 * fVar19 * fVar20 * (float10)7.5 +
                      (float10)*(float *)((int)pvVar2 + 0x24));
          *(float *)((int)pvVar2 + 0x28) = local_2c * 7.5 + *(float *)((int)pvVar2 + 0x28);
          *(float *)((int)pvVar2 + 0x2c) = local_1c + *(float *)((int)pvVar2 + 0x2c);
          local_10 = local_34 * local_60;
          local_c[0] = (float)((float10)fVar5 * fVar19 * (float10)local_60 * (float10)15.0);
          *(float *)((int)pvVar2 + 0x30) = local_c[0] + *(float *)((int)pvVar2 + 0x30);
          *(float *)((int)pvVar2 + 0x34) =
               local_38 * local_60 * 15.0 + *(float *)((int)pvVar2 + 0x34);
          *(float *)((int)pvVar2 + 0x38) = local_10 * 15.0 + *(float *)((int)pvVar2 + 0x38);
          if (((*(float *)((int)pvVar2 + 0x3c) == 0.0) && (*(float *)((int)pvVar2 + 0x40) == 0.0))
             && (*(float *)((int)pvVar2 + 0x44) == 0.0)) {
            *(undefined4 *)((int)pvVar2 + 0x3c) = *(undefined4 *)((int)this + 0x90);
            *(undefined4 *)((int)pvVar2 + 0x40) = *(undefined4 *)((int)this + 0x94);
            *(undefined4 *)((int)pvVar2 + 0x44) = *(undefined4 *)((int)this + 0x98);
            fVar19 = FUN_00990e30(*(float *)(*(int *)this + 0x50),*(float *)(*(int *)this + 0x54));
            *(float *)((int)pvVar2 + 0x54) = (float)(fVar19 * (float10)94.2);
          }
        }
      }
      if (((char)param_3 == '\0') ||
         (uVar14 = FUN_00aad6f0(this,(uint)param_2,(int)pvVar2), (char)uVar14 != '\0')) {
        param_2 = (void *)((int)param_2 + 1);
      }
    }
  }
  if (0.0 < *(float *)((int)this + 0x74)) {
    if (*(char *)((int)this + 0x78) != '\0') {
      *(float *)((int)this + 0x74) = *(float *)((int)this + 0x74) - param_1;
    }
    if ((*(float *)((int)this + 0x7c) != 0.0) &&
       (fVar5 = param_1 + *(float *)((int)this + 0x80), *(float *)((int)this + 0x80) = fVar5,
       *(float *)((int)this + 0x7c) < fVar5)) {
      do {
        fVar5 = *(float *)((int)this + 0x80) - *(float *)((int)this + 0x7c);
        *(float *)((int)this + 0x80) = fVar5;
        if ((fVar5 < *(float *)((int)this + 0xa0)) &&
           (pfVar13 = FUN_00aae0c0(this,pvVar11), pfVar13 != (float *)0x0)) {
          FUN_00aad3a0(this,pfVar13,*(float *)((int)this + 0x80));
          if (((char)param_3 == '\0') ||
             (uVar14 = FUN_00aad6f0(this,(uint)param_2,(int)pfVar13), (char)uVar14 != '\0')) {
            param_2 = (void *)((int)param_2 + 1);
          }
        }
      } while (*(float *)((int)this + 0x7c) < *(float *)((int)this + 0x80));
    }
  }
  if ((char)param_3 != '\0') {
    ppuVar16 = (undefined4 **)((int)this + 0xcc);
    if ((((*(int *)((int)this + 0xcc) == 0) ||
         (iVar18 = *(int *)(*(int *)((int)this + 0xcc) + 0x18), iVar18 == 0)) ||
        (iVar18 = *(int *)(iVar18 + 0x18), iVar18 == 0)) || ((*(byte *)(iVar18 + 0x54) & 8) == 0)) {
      param_3 = (undefined4 *)0x0;
      ppuVar16 = &param_3;
      bVar9 = true;
    }
    puVar12 = param_3;
    piVar3 = *ppuVar16;
    if (((bVar9) && (param_3 != (undefined4 *)0x0)) &&
       (LVar15 = InterlockedDecrement(param_3 + 4), uVar10 = DAT_0105b588, DAT_0105b588 = uVar10,
       LVar15 == 0)) {
      DAT_0105b588 = 1;
      (**(code **)*puVar12)(1);
      DAT_0105b588 = uVar10;
    }
    bVar9 = false;
    ppuVar16 = (undefined4 **)((int)this + 0xd0);
    if (((*(int *)((int)this + 0xd0) == 0) ||
        (iVar18 = *(int *)(*(int *)((int)this + 0xd0) + 0x18), iVar18 == 0)) ||
       ((iVar18 = *(int *)(iVar18 + 0x18), iVar18 == 0 || ((*(byte *)(iVar18 + 0x54) & 8) == 0)))) {
      bVar9 = true;
      param_3 = (undefined4 *)0x0;
      ppuVar16 = &param_3;
    }
    puVar12 = param_3;
    piVar4 = *ppuVar16;
    if (((bVar9) && (param_3 != (undefined4 *)0x0)) &&
       (LVar15 = InterlockedDecrement(param_3 + 4), uVar10 = DAT_0105b588, DAT_0105b588 = uVar10,
       LVar15 == 0)) {
      DAT_0105b588 = 1;
      (**(code **)*puVar12)(1);
      DAT_0105b588 = uVar10;
    }
    if (((piVar3 != (int *)0x0) || (piVar4 != (int *)0x0)) &&
       (*(char *)(*(int *)this + 0x134) == '\0')) {
      if (param_2 != *(void **)((int)this + 0xd4)) {
        iVar18 = (int)param_2 * 0x34;
        do {
          if (piVar3 == (int *)0x0) {
            iVar17 = piVar4[8];
          }
          else {
            iVar17 = piVar3[8];
          }
          uVar14 = *(uint *)(iVar17 + 0x30 + iVar18);
          if ((uVar14 >> 8 & 1) != 0) break;
          *(uint *)(iVar17 + iVar18 + 0x30) = uVar14 | 0x100;
          if ((piVar3 != (int *)0x0) && (piVar4 != (int *)0x0)) {
            *(uint *)(piVar4[8] + iVar18 + 0x30) = *(uint *)(piVar4[8] + 0x30 + iVar18) | 0x100;
          }
          param_2 = (void *)((int)param_2 + 1);
          iVar18 = iVar18 + 0x34;
        } while (param_2 != *(void **)((int)this + 0xd4));
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
    }
  }
  return (uint)(*(int *)((int)this + 0x6c) != 0);
}


//// FUNCTION FUN_00aaecb0 @ 00aaecb0 ////

void __fastcall FUN_00aaecb0(int param_1)

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


//// FUNCTION FUN_00aaece0 @ 00aaece0 ////

void __fastcall FUN_00aaece0(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cfd654;
  pvStack_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x120) != 0) {
    ExceptionList = &pvStack_c;
    FUN_00a4ca50(*(int *)(param_1 + 0x120),0);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x120);
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  local_4._0_1_ = 3;
  FUN_00990ec0(param_1 + 0xfc);
  local_4._0_1_ = 2;
  FUN_00990ec0(param_1 + 0xd8);
  puVar1 = *(undefined4 **)(param_1 + 0xd0);
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xcc);
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  if (*(void **)(param_1 + 0xc0) == (void *)0x0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0xc0));
}


//// FUNCTION FUN_00aaee40 @ 00aaee40 ////

void FUN_00aaee40(void)

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
  puStack_8 = &LAB_00cfd668;
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


//// FUNCTION FUN_00aaef00 @ 00aaef00 ////

void __thiscall FUN_00aaef00(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfd680;
  local_10 = ExceptionList;
  local_28 = *param_3;
  local_24 = param_3[1];
  iVar3 = *(int *)((int)this + 4);
  local_20 = param_3[2];
  local_1c = param_3[3];
  local_18 = param_3[4];
  local_14 = &stack0xffffffcc;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x14;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x14;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffcc;
    if (0xcccccccU - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_00aaee40();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x14;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0xccccccc - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x14;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_00aac5c0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x14);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_00aada40(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00aade90(puVar5,param_2,&local_28);
      FUN_00aada40(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 5);
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x14;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 5;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 5;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 0x14) < param_2) {
      FUN_00aada40(param_1,puVar4,param_1 + param_2 * 5);
      local_8 = 2;
      FUN_00aae690(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x14,&local_28)
      ;
      iVar3 = *(int *)((int)this + 8) + param_2 * 0x14;
      *(int *)((int)this + 8) = iVar3;
      FUN_00aac7f0(param_1,(undefined4 *)(iVar3 + param_2 * -0x14),&local_28);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00aada40(puVar4 + param_2 * -5,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00aac8f0(param_1,puVar4 + param_2 * -5,puVar4);
    FUN_00aac7f0(param_1,param_1 + param_2 * 5,&local_28);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00aaf1e0 @ 00aaf1e0 ////

void __thiscall FUN_00aaf1e0(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x14 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x14;
      goto LAB_00aaf225;
    }
  }
  iVar1 = 0;
LAB_00aaf225:
  FUN_00aaef00(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x14;
  return;
}


//// FUNCTION FUN_00aaf250 @ 00aaf250 ////

void __thiscall FUN_00aaf250(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x14) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x14))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00aade90(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 5;
    return;
  }
  FUN_00aaf1e0(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00aaf2e0 @ 00aaf2e0 ////

float * __thiscall
FUN_00aaf2e0(void *this,float param_1,float *param_2,char param_3,float param_4,float param_5,
            float param_6,void *param_7)

{
  void *pvVar1;
  int *this_00;
  undefined4 uVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  float *pfVar7;
  long lVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  float *pfVar15;
  float10 fVar16;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd704;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(float *)this = param_1;
  FUN_00aad880((float *)((int)this + 4),param_2,*(float *)((int)param_1 + 0x18),
               *(float *)((int)param_1 + 0x1c),*(float *)((int)param_1 + 0x20),
               *(float *)((int)param_1 + 4),*(float *)((int)param_1 + 8),
               *(float *)((int)param_1 + 0xc),param_3);
  pfVar7 = (float *)((int)this + 4);
  if (**(char **)((int)param_1 + 0xd8) == '\0') {
    pfVar7 = param_2;
  }
  pfVar15 = (float *)((int)this + 0x34);
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *pfVar15 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar15 = pfVar15 + 1;
  }
  *(char *)((int)this + 100) = param_3;
  *(float *)((int)this + 0x68) = param_5;
  *(undefined4 *)((int)this + 0x6c) = 0;
  if ((*(char *)(*(int *)this + 0x9c) == '\0') && (param_4 == 0.0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)((int)this + 0x78) = uVar6;
  if (*(float *)((int)param_1 + 0xa8) == 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 1.0 / *(float *)((int)param_1 + 0xa8);
  }
  *(float *)((int)this + 0x7c) = fVar3;
  fVar16 = FUN_00990e30(0.0,fVar3);
  *(float *)((int)this + 0x80) = (float)fVar16;
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)((int)param_1 + 0xac);
  if (*(float *)((int)param_1 + 0xac) <= *(float *)((int)param_1 + 0xb0)) {
    uVar2 = *(undefined4 *)((int)param_1 + 0xb0);
  }
  else {
    uVar2 = *(undefined4 *)((int)param_1 + 0xac);
  }
  *(undefined4 *)((int)this + 0x8c) = uVar2;
  iVar12 = *(int *)this;
  fVar16 = (float10)log2((float10)1.0 - (float10)*(float *)((int)param_1 + 0x28));
  *(float *)((int)this + 0x9c) = (float)((float10)0.6931471805599453 * fVar16);
  if (*(float *)(iVar12 + 0x14) <= 0.06) {
    uVar2 = 0x3d75c28f;
  }
  else {
    uVar2 = *(undefined4 *)(iVar12 + 0x14);
  }
  *(undefined4 *)((int)this + 0xa0) = uVar2;
  fVar3 = (float)*(int *)(iVar12 + 0xe4);
  if (*(int *)(iVar12 + 0xe4) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)((int)this + 0xa4) = fVar3 * 0.001;
  iVar12 = 1000 - *(int *)(iVar12 + 0xe8);
  fVar3 = (float)iVar12;
  if (iVar12 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)((int)this + 0xa8) = fVar3 * 0.001;
  if (*(float *)((int)param_1 + 8) <= *(float *)((int)param_1 + 0xc)) {
    fVar3 = *(float *)((int)param_1 + 0xc);
  }
  else {
    fVar3 = *(float *)((int)param_1 + 8);
  }
  if (*(float *)((int)param_1 + 4) <= fVar3) {
    if (*(float *)((int)param_1 + 8) <= *(float *)((int)param_1 + 0xc)) {
      uVar2 = *(undefined4 *)((int)param_1 + 0xc);
    }
    else {
      uVar2 = *(undefined4 *)((int)param_1 + 8);
    }
  }
  else {
    uVar2 = *(undefined4 *)((int)param_1 + 4);
  }
  pvVar1 = (void *)((int)this + 0xbc);
  *(undefined4 *)((int)this + 0xac) = uVar2;
  *(undefined1 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_009910f0((undefined4 *)((int)this + 0xd8));
  local_4._0_1_ = 3;
  FUN_009910f0((undefined4 *)((int)this + 0xfc));
  *(undefined4 *)((int)this + 0x120) = 0;
  iVar12 = *(int *)this;
  local_4 = CONCAT31(local_4._1_3_,5);
  if (*(char *)(iVar12 + 0x135) != '\0') {
    if (*(char *)(iVar12 + 0x5c) != '\0') {
      pfVar7 = FUN_00aac4d0(&local_6c,*(float *)(iVar12 + 0x68),*(float *)(iVar12 + 100),
                            *(uint *)(iVar12 + 0x6c));
      FUN_00aaf250(pvVar1,pfVar7);
    }
    iVar12 = *(int *)this;
    if (*(char *)(iVar12 + 0x5d) != '\0') {
      pfVar7 = FUN_00aac4d0(&local_6c,*(float *)(iVar12 + 0x74),*(float *)(iVar12 + 0x70),
                            *(uint *)(iVar12 + 0x78));
      FUN_00aaf250(pvVar1,pfVar7);
    }
    iVar12 = *(int *)this;
    if (*(char *)(iVar12 + 0x5e) != '\0') {
      pfVar7 = FUN_00aac4d0(&local_6c,*(float *)(iVar12 + 0x80),*(float *)(iVar12 + 0x7c),
                            *(uint *)(iVar12 + 0x84));
      FUN_00aaf250(pvVar1,pfVar7);
    }
    iVar12 = *(int *)this;
    if (**(char **)(iVar12 + 0x60) == '\0') {
      pfVar7 = this;
      for (iVar13 = 0xc; pfVar7 = pfVar7 + 1, iVar13 != 0; iVar13 = iVar13 + -1) {
        *pfVar7 = *param_2;
        param_2 = param_2 + 1;
      }
    }
  }
  *(undefined4 *)((int)this + 0x84) = 0x3f800000;
  if (**(char **)(iVar12 + 0xdc) == 'X') {
    lVar8 = _atol(*(char **)(iVar12 + 0xdc) + 1);
    fVar3 = (float)lVar8;
    if (fVar3 != 0.0) {
      *(float *)((int)this + 0x84) = *(float *)((int)this + 0x84) / (fVar3 * fVar3);
      *(float *)((int)this + 0x88) = (1.0 / fVar3) * *(float *)((int)this + 0x88);
      *(float *)((int)this + 0x8c) = (1.0 / fVar3) * *(float *)((int)this + 0x8c);
    }
  }
  iVar12 = *(int *)this;
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar12 + 0xa4);
  if (param_4 == 0.0) {
    if (*(char *)(iVar12 + 0x9c) == '\0') {
      param_4 = 1.0;
      goto LAB_00aaf6d1;
    }
  }
  else if ((*(char *)(iVar12 + 0x9c) == '\0') || (param_4 < *(float *)(iVar12 + 0xa0)))
  goto LAB_00aaf6d1;
  param_4 = *(float *)(iVar12 + 0xa0);
LAB_00aaf6d1:
  *(float *)((int)this + 0x74) = param_4;
  FUN_00aacb50(this);
  iVar12 = *(int *)this;
  if ((*(char *)(iVar12 + 0x134) != '\0') || (*(int *)(iVar12 + 0x118) == 0xc0)) {
    if (*(char *)(iVar12 + 0x11) == '\0') {
      pfVar7 = (float *)((int)this + 0x124);
      *pfVar7 = *(float *)(iVar12 + 0x44);
      *(undefined4 *)((int)this + 0x128) = *(undefined4 *)(iVar12 + 0x48);
      *(undefined4 *)((int)this + 300) = *(undefined4 *)(iVar12 + 0x4c);
      FUN_00412e20(pfVar7);
      if (*(char *)((int)this + 100) == '\0') {
        FUN_00a42de0((void *)((int)this + 0x34),pfVar7);
      }
    }
    else {
      puVar9 = (undefined4 *)FUN_00aad070((float *)&local_6c);
      *(undefined4 *)((int)this + 0x124) = *puVar9;
      *(undefined4 *)((int)this + 0x128) = puVar9[1];
      *(undefined4 *)((int)this + 300) = puVar9[2];
    }
  }
  iVar12 = *(int *)this;
  if (*(char *)(iVar12 + 0x134) == '\0') {
    *(float *)((int)this + 0xd4) = param_6;
    puVar9 = FUN_00aadf10((void *)((int)this + 0xd8),*(char **)(iVar12 + 0xe0),(uint)param_6,
                          *(int *)(iVar12 + 0x114),*(int *)(iVar12 + 0x110));
    FUN_00aad120((undefined4 *)((int)this + 0xcc),(int)puVar9);
    pvVar1 = *(void **)((int)this + 0xcc);
    if (pvVar1 != (void *)0x0) {
      pcVar14 = *(char **)(*(int *)this + 0xe0);
      pcVar11 = pcVar14;
      do {
        cVar4 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar4 != '\0');
      if (2 < (uint)((int)pcVar11 - (int)(pcVar14 + 1))) {
        cVar4 = pcVar14[2];
        while (cVar4 != '\0') {
          if (((('/' < *pcVar14) && (*pcVar14 < ':')) && (pcVar14[1] == 'x')) &&
             (('/' < cVar4 && (cVar4 < ':')))) {
            *(undefined1 *)((int)this + 0xb0) = 1;
            cVar4 = *pcVar14;
            cVar5 = pcVar14[2];
            iVar12 = (cVar5 + -0x30) * (cVar4 + -0x30);
            *(int *)((int)this + 0xb8) = iVar12;
            fVar3 = (float)iVar12;
            if (iVar12 < 0) {
              fVar3 = fVar3 + 4.2949673e+09;
            }
            *(float *)((int)this + 0xb4) = 1.0 / fVar3;
            FUN_0099a250(pvVar1,(byte)(cVar4 + -0x30),(byte)(cVar5 + -0x30),'\x01');
            break;
          }
          pcVar11 = pcVar14 + 3;
          pcVar14 = pcVar14 + 1;
          cVar4 = *pcVar11;
        }
      }
    }
    iVar12 = *(int *)this;
    puVar9 = FUN_00aadf10((void *)((int)this + 0xfc),*(char **)(iVar12 + 0x11c),
                          *(uint *)((int)this + 0xd4),*(int *)(iVar12 + 0x124),
                          *(int *)(iVar12 + 0x120));
    FUN_00aad120((int *)((int)this + 0xd0),(int)puVar9);
    if ((*(int *)((int)this + 0xcc) == 0) && (*(int *)((int)this + 0xd0) == 0)) {
      *(undefined4 *)((int)this + 0x74) = 0;
      *(undefined4 *)((int)this + 0x70) = 0;
      ExceptionList = local_c;
      return this;
    }
  }
  else {
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"FX\\",3);
    local_68 = 3;
    local_6c[3] = '\0';
    puVar9 = FUN_004312e0(local_2c,&local_6c,*(char **)((int)param_1 + 0x130));
    puVar9 = FUN_004312e0(local_4c,puVar9,".msh");
    local_4._0_1_ = 8;
    pbVar10 = FUN_009de1d0((char *)*puVar9,1);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_4._0_1_ = 10;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    puVar9 = FUN_00433eb0();
    this_00 = (int *)((int)this + 0x120);
    FUN_00aad1d0(this_00,(int)puVar9);
    (**(code **)(*(int *)*this_00 + 0x18))();
    FUN_00a4ca50(*this_00,(int)this);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (pbVar10 != (byte *)0x0) {
      FUN_009de3b0(pbVar10);
    }
  }
  if (*(float *)((int)this + 0x70) == 0.0) {
    FUN_00aae600(this,param_7);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00aaf9d0 @ 00aaf9d0 ////

void __fastcall FUN_00aaf9d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00aafa80 @ 00aafa80 ////

uint __cdecl FUN_00aafa80(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  uVar1 = FUN_009d3720(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  if (DAT_010ca03c == (undefined4 *)0x0) {
    if ((int)DAT_00e6e4a0 < (int)uVar1) {
      uVar5 = FUN_00acd42c();
      DAT_00e6e4a0 = (uint)uVar5;
    }
    FID_conflict__wprintf
              ((wchar_t *)"Creating temp buffer: %dKB\n",
               (int)(DAT_00e6e4a0 + ((int)DAT_00e6e4a0 >> 0x1f & 0x3ffU)) >> 10);
    DAT_010ca03c = operator_new(DAT_00e6e4a0);
  }
  else if ((int)DAT_00e6e4a0 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010ca03c);
  }
  uVar3 = DAT_00e6e4a0;
  puVar4 = DAT_010ca03c;
  for (uVar2 = DAT_00e6e4a0 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  FUN_009d3ca0(param_1,DAT_010ca03c,uVar1,(undefined1 *)0x0);
  return uVar1;
}


//// FUNCTION FUN_00aafb90 @ 00aafb90 ////

undefined4 __cdecl FUN_00aafb90(void *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfd718;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00aafa80(&param_1);
  if (uVar1 != 0) {
    _Memory = (undefined4 *)FUN_00afb8b0(DAT_010ca03c,uVar1);
    FUN_00afb6d0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00aafc30 @ 00aafc30 ////

uint __cdecl FUN_00aafc30(char *param_1)

{
  void *pvVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *this;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *local_54;
  undefined4 *local_50;
  char *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40 [20];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd74b;
  local_c = ExceptionList;
  local_2c = local_20;
  local_54 = (int *)0x0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = 0;
  uVar4 = FUN_009d3de0(&local_2c,&local_54,'\0');
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  uVar7 = local_24;
  if ((uVar4 == 0) || (uVar7 = 0, local_54 == (int *)0x0)) {
    ExceptionList = local_c;
    return uVar7 & 0xffffff00;
  }
  if (uVar4 < 0x34) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  local_50 = operator_new(0x34);
  local_4 = 1;
  if (local_50 == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    this = FUN_00a9b2d0(local_50);
  }
  local_4 = 0xffffffff;
  iVar5 = FUN_00a9b6b0(this,local_54);
  if (iVar5 == 0) {
    if (this != (undefined4 *)0x0) {
      FUN_00a9b2f0((int)this);
                    /* WARNING: Subroutine does not return */
      _free(this);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  iVar5 = this[1];
  local_4c = local_40;
  pvVar1 = (void *)(iVar5 + (int)local_54);
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"",0);
  local_48 = 0;
  *local_4c = '\0';
  local_4 = 2;
  uVar6 = FUN_009d4750(&local_4c);
  if ((char)uVar6 != '\0') {
    uVar6 = FUN_009d4370(&local_4c,pvVar1,uVar4 - iVar5);
    if ((char)uVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
      _free(local_54);
    }
  }
  FUN_00a9b2f0((int)this);
                    /* WARNING: Subroutine does not return */
  _free(this);
}


//// FUNCTION FUN_00aafeb0 @ 00aafeb0 ////

uint __cdecl FUN_00aafeb0(uint *param_1,undefined4 *param_2,int param_3)

{
  size_t sVar1;
  uint uVar2;
  uint *puVar3;
  FILE *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *_Dest;
  LPCSTR *_Format;
  undefined4 uVar8;
  int *local_64;
  char *local_60;
  undefined4 local_5c;
  uint local_58;
  char local_54 [20];
  char local_40 [64];
  
  if (DAT_010b9360 == 0xfff) {
    local_60 = local_54;
    local_54[0] = '\0';
    local_5c = 0;
    local_58 = 0x14;
    _strncpy(local_60,"Too many pak files\n",0x13);
    uVar8 = 0xffe;
    _Dest = local_40;
    _Format = &param_2_00d1b93c;
    local_5c = 0x13;
    local_60[0x13] = '\0';
    sVar1 = _sprintf(_Dest,(char *)_Format,uVar8);
    FUN_004073f0(&local_60,local_40,sVar1);
    uVar2 = FUN_004073f0(&local_60,"is the maximum",0xe);
    if (local_58 < 0x15) {
      return uVar2 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  local_64 = (int *)0x0;
  puVar3 = FUN_00ace080(param_1,".cpak");
  if (puVar3 == (uint *)0x0) {
    local_64 = (int *)FUN_00a9be50((char *)param_1);
    if (local_64 == (int *)0x0) {
      return 0;
    }
    puVar3 = param_1;
    do {
      uVar2 = *puVar3;
      puVar3 = (uint *)((int)puVar3 + 1);
    } while ((char)uVar2 != '\0');
    FUN_004015d0((void *)(param_3 + 4),(char *)param_1,(int)puVar3 - ((int)param_1 + 1));
    pFVar4 = FUN_00a10060((char *)param_1,"r");
    *(FILE **)(param_3 + 0x28) = pFVar4;
    *(undefined4 *)(param_3 + 0x24) = 1;
    if (*local_64 == 6) {
      *(undefined4 *)(param_3 + 0x24) = 2;
    }
    if (pFVar4 == (FILE *)0x0) {
      FUN_00a9b2f0((int)local_64);
                    /* WARNING: Subroutine does not return */
      _free(local_64);
    }
  }
  else {
    uVar2 = FUN_00aafc30((char *)param_1);
    if ((char)uVar2 == '\0') {
      return uVar2;
    }
  }
  local_64[2] = DAT_010b9360;
  DAT_010b9360 = DAT_010b9360 + 1;
  iVar5 = local_64[3];
  iVar6 = 0;
  if (0 < iVar5) {
    iVar7 = 0;
    do {
      uVar2 = *(uint *)(local_64[10] + 0x14 + iVar7);
      *(uint *)(local_64[10] + 0x14 + iVar7) = uVar2 ^ (local_64[2] << 0xf ^ uVar2) & 0x7ff8000;
      iVar5 = local_64[3];
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x38;
    } while (iVar6 < iVar5);
  }
  *param_2 = local_64;
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}


//// FUNCTION FUN_00ab0060 @ 00ab0060 ////

undefined4 * __cdecl FUN_00ab0060(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *local_40;
  uint local_3c;
  uint local_38;
  char local_34 [20];
  void *local_20 [2];
  uint local_18;
  
  local_40 = local_34;
  local_34[0] = '\0';
  local_3c = 0;
  local_38 = 0x14;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_40,param_2,(int)pcVar2 - (int)(param_2 + 1));
  FUN_0048ad50((int *)&local_40);
  uVar3 = FUN_00413450(&local_40,"data\\",0,5);
  if (uVar3 == 0xffffffff) {
    iVar4 = FUN_004302c0(&local_40,&DAT_00d1835c,0xffffffff,1);
    if (iVar4 == -1) goto LAB_00ab0111;
    uVar3 = iVar4 + 1;
  }
  puVar5 = FUN_00430770(&local_40,local_20,uVar3,local_3c);
  FUN_004015d0(&local_40,(char *)*puVar5,puVar5[1]);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
LAB_00ab0111:
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_40,local_3c);
  if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  return param_1;
}


//// FUNCTION FUN_00ab0150 @ 00ab0150 ////

uint __cdecl FUN_00ab0150(char *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  undefined1 *local_368;
  uint local_364;
  uint local_360;
  undefined1 local_35c [20];
  char *local_348;
  uint local_344;
  uint local_340;
  void *local_328 [2];
  uint local_320;
  char local_308 [253];
  char acStack_20b [263];
  char local_104 [260];
  
  FUN_00ab0060(&local_348,param_1);
  __splitpath(local_348,(char *)0x0,local_104,acStack_20b + 3,local_308);
  local_368 = local_35c;
  local_35c[0] = 0;
  local_364 = 0;
  local_360 = 0x14;
  FUN_004015d0(&local_368,local_348,local_344);
  uVar2 = FUN_004302c0(&local_368,&DAT_00d1835c,0xffffffff,1);
  if (uVar2 != 0xffffffff) {
    puVar3 = FUN_00430770(&local_368,local_328,uVar2 + 1,local_364);
    uVar2 = FUN_004015d0(&local_368,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_320) {
                    /* WARNING: Subroutine does not return */
      _free(local_328[0]);
    }
  }
  if (local_364 < 4) {
    if (0x14 < local_360) {
                    /* WARNING: Subroutine does not return */
      _free(local_368);
    }
    if (0x14 < local_340) {
                    /* WARNING: Subroutine does not return */
      _free(local_348);
    }
    return uVar2 & 0xffffff00;
  }
  iVar6 = 5;
  bVar8 = true;
  pcVar4 = local_308;
  pcVar5 = ".msh";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar8 = *pcVar4 == *pcVar5;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar8);
  if (bVar8) {
    pcVar4 = acStack_20b + 3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar6 = _strncmp(acStack_20b + 3,"head_",5);
    if (iVar6 == 0) {
      if (0x14 < local_360) {
                    /* WARNING: Subroutine does not return */
        _free(local_368);
      }
      pcVar5 = (char *)0x0;
      if (0x14 < local_340) {
                    /* WARNING: Subroutine does not return */
        _free(local_348);
      }
      goto LAB_00ab0465;
    }
    iVar6 = _strncmp(acStack_20b + 3,"cos_",4);
    if ((iVar6 == 0) && (9 < (int)pcVar4 - (int)(acStack_20b + 4))) {
      pcVar4 = local_308 + ((int)pcVar4 - (int)(acStack_20b + 4)) + 0xfc;
      iVar6 = 5;
      bVar8 = true;
      pcVar5 = pcVar4;
      pcVar7 = "_fat";
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      pcVar5 = pcVar4;
      if (!bVar8) {
        iVar6 = 5;
        pcVar5 = (char *)0x0;
        bVar8 = true;
        pcVar7 = "_enh";
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar8 = *pcVar4 == *pcVar7;
          pcVar4 = pcVar4 + 1;
          pcVar7 = pcVar7 + 1;
        } while (bVar8);
        if (!bVar8) goto LAB_00ab0345;
      }
      if (0x14 < local_360) {
                    /* WARNING: Subroutine does not return */
        _free(local_368);
      }
      if (0x14 < local_340) {
                    /* WARNING: Subroutine does not return */
        _free(local_348);
      }
      goto LAB_00ab0465;
    }
  }
LAB_00ab0345:
  iVar6 = 5;
  bVar8 = true;
  pcVar4 = local_308;
  pcVar5 = ".pak";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar8 = *pcVar4 == *pcVar5;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar8);
  if (!bVar8) {
    iVar6 = 6;
    bVar8 = true;
    pcVar4 = local_308;
    pcVar5 = ".cpak";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar8 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar6 = 5;
      bVar8 = true;
      pcVar4 = local_308;
      pcVar5 = ".exe";
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar8 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar6 = 5;
        bVar8 = true;
        pcVar4 = local_308;
        pcVar5 = ".avi";
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar8 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar8);
        if (!bVar8) {
          iVar6 = 5;
          bVar8 = true;
          pcVar4 = local_308;
          pcVar5 = ".wmv";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar8 = *pcVar4 == *pcVar5;
            pcVar4 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
          } while (bVar8);
          if (!bVar8) {
            iVar6 = 5;
            bVar8 = true;
            pcVar4 = local_308;
            pcVar5 = ".fnt";
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar8 = *pcVar4 == *pcVar5;
              pcVar4 = pcVar4 + 1;
              pcVar5 = pcVar5 + 1;
            } while (bVar8);
            if (!bVar8) {
              iVar6 = 5;
              bVar8 = true;
              pcVar4 = local_308;
              pcVar5 = ".lug";
              do {
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                bVar8 = *pcVar4 == *pcVar5;
                pcVar4 = pcVar4 + 1;
                pcVar5 = pcVar5 + 1;
              } while (bVar8);
              if (!bVar8) {
                iVar6 = 5;
                bVar8 = true;
                pcVar4 = local_308;
                pcVar5 = ".ogg";
                do {
                  if (iVar6 == 0) break;
                  iVar6 = iVar6 + -1;
                  bVar8 = *pcVar4 == *pcVar5;
                  pcVar4 = pcVar4 + 1;
                  pcVar5 = pcVar5 + 1;
                } while (bVar8);
                if (!bVar8) {
                  iVar6 = 5;
                  bVar8 = true;
                  pcVar4 = local_308;
                  pcVar5 = ".wav";
                  do {
                    if (iVar6 == 0) break;
                    iVar6 = iVar6 + -1;
                    bVar8 = *pcVar4 == *pcVar5;
                    pcVar4 = pcVar4 + 1;
                    pcVar5 = pcVar5 + 1;
                  } while (bVar8);
                  if (!bVar8) {
                    if (0x14 < local_360) {
                    /* WARNING: Subroutine does not return */
                      _free(local_368);
                    }
                    if (0x14 < local_340) {
                    /* WARNING: Subroutine does not return */
                      _free(local_348);
                    }
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
  pcVar5 = (char *)0x0;
  if (0x14 < local_360) {
                    /* WARNING: Subroutine does not return */
    _free(local_368);
  }
  if (0x14 < local_340) {
                    /* WARNING: Subroutine does not return */
    _free(local_348);
  }
LAB_00ab0465:
  return (uint)pcVar5 & 0xffffff00;
}


//// FUNCTION FUN_00ab0480 @ 00ab0480 ////

uint __cdecl FUN_00ab0480(uint *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  void *_Memory;
  void *pvVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  void *local_60;
  int local_5c;
  char *local_58;
  undefined4 local_54;
  uint local_50;
  char local_4c [20];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd770;
  local_c = ExceptionList;
  DAT_010b9360 = 0;
  local_60 = (void *)0x0;
  ExceptionList = &local_c;
  FUN_00a10b50(local_38);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  uVar4 = FUN_00aafeb0(param_1,&local_60,(int)local_38);
  if ((char)uVar4 == '\0') {
    FID_conflict__wprintf((wchar_t *)"Error: can\'t open pak file\n");
    local_4 = 0xffffffff;
    uVar4 = FUN_00a10740((int)local_38);
    ExceptionList = local_c;
    return uVar4 & 0xffffff00;
  }
  FID_conflict__wprintf(L"\n");
  _Memory = local_60;
  local_5c = 0;
  if (0 < *(int *)((int)local_60 + 0xc)) {
    local_60 = (void *)0x0;
    do {
      pvVar3 = local_60;
      iVar2 = *(int *)((int)_Memory + 0x28);
      local_58 = local_4c;
      pcVar6 = (char *)((*(uint *)(iVar2 + 0x14 + (int)local_60) >> 1 & 0x3fff) +
                       *(int *)((int)_Memory + 0x30));
      local_4c[0] = '\0';
      local_54 = 0;
      local_50 = 0x14;
      _strncpy(local_58,"",0);
      local_54 = 0;
      *local_58 = '\0';
      local_4._0_1_ = 1;
      pcVar5 = param_2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_58,param_2,(int)pcVar5 - (int)(param_2 + 1));
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_58,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
      pcVar5 = (char *)((int)pvVar3 + iVar2 + 0x18);
      pcVar6 = pcVar5;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_58,pcVar5,(int)pcVar6 - ((int)pvVar3 + iVar2 + 0x19));
      FID_conflict__wprintf((wchar_t *)"Deleting %s\n",local_58);
      FUN_009d3580(&local_58);
      local_4._0_1_ = 0;
      if (0x14 < local_50) {
                    /* WARNING: Subroutine does not return */
        _free(local_58);
      }
      local_5c = local_5c + 1;
      local_60 = (void *)((int)local_60 + 0x38);
    } while (local_5c < *(int *)((int)_Memory + 0xc));
  }
  FID_conflict__wprintf(L"\n");
  FUN_00a9b2f0((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00ab0670 @ 00ab0670 ////

void __cdecl FUN_00ab0670(int *param_1)

{
  char *_Source;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint _Size;
  void *pvVar4;
  void *local_60 [2];
  uint local_58;
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  uVar1 = FUN_00448220(param_1,&DAT_00d722c8,0,4);
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return;
    }
    puVar2 = FUN_00430770(param_1,local_20,uVar1 + 1,0xffffffff);
    puVar3 = FUN_00430770(param_1,local_40,0,uVar1);
    puVar2 = FUN_0047aee0(local_60,puVar3,puVar2);
    uVar1 = puVar2[1];
    _Source = (char *)*puVar2;
    if ((uint)param_1[2] <= uVar1) {
      if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      _Size = uVar1 + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar4 = _malloc(_Size);
      *param_1 = (int)pvVar4;
    }
    _strncpy((char *)*param_1,_Source,uVar1);
    param_1[1] = uVar1;
    *(undefined1 *)(uVar1 + *param_1) = 0;
    if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_60[0]);
    }
    if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
      _free(local_40[0]);
    }
    if (0x14 < local_18) break;
    uVar1 = FUN_00448220(param_1,&DAT_00d722c8,0,4);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20[0]);
}


//// FUNCTION FUN_00ab0780 @ 00ab0780 ////

void __cdecl FUN_00ab0780(void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_20 [2];
  uint local_18;
  
  uVar1 = FUN_00448220(param_1,&DAT_00d24480,0,2);
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return;
    }
    puVar2 = FUN_00430770(param_1,local_20,0,uVar1);
    FUN_00acf917((LPCSTR)*puVar2);
    if (0x14 < local_18) break;
    uVar1 = FUN_00448220(param_1,&DAT_00d24480,uVar1 + 1,2);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20[0]);
}


//// FUNCTION FUN_00ab07f0 @ 00ab07f0 ////

void FUN_00ab07f0(void)

{
  uint uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *_Dest;
  int iVar4;
  uint _Size;
  int *local_54;
  undefined1 *local_50;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd790;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FID_conflict__wprintf((wchar_t *)"Calculating compressed file sizes\n");
  local_54 = (int *)*DAT_010ca04c;
  if (local_54 != DAT_010ca04c) {
    do {
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      uVar1 = local_54[4];
      pcVar2 = (char *)local_54[3];
      if (0x13 < uVar1) {
        local_44 = uVar1 + 0x20 & 0xffffffe0;
        local_4c = _malloc(local_44);
      }
      _strncpy(local_4c,pcVar2,uVar1);
      local_4c[uVar1] = '\0';
      _Dest = &stack0xffffff88;
      local_4 = 0;
      local_48 = uVar1;
      FUN_00ab0060(local_2c,local_4c);
      local_4 = CONCAT31(local_4._1_3_,1);
      FID_conflict__wprintf((wchar_t *)"Test Z size of %s [%d/%d]\n");
      uVar1 = local_48;
      pcVar2 = local_4c;
      local_50 = &stack0xffffff7c;
      _Size = 0x14;
      puVar3 = &stack0xffffff7c;
      if (0x13 < local_48) {
        _Size = local_48 + 0x20 & 0xffffffe0;
        _Dest = _malloc(_Size);
        puVar3 = local_50;
      }
      local_50 = puVar3;
      _strncpy(_Dest,pcVar2,uVar1);
      _Dest[uVar1] = '\0';
      iVar4 = FUN_00aafb90(_Dest,uVar1,_Size);
      local_54[0xb] = iVar4;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      FUN_00420690((int *)&local_54);
    } while (local_54 != DAT_010ca04c);
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_010ca03c);
}


//// FUNCTION FUN_00ab09b0 @ 00ab09b0 ////

uint __cdecl FUN_00ab09b0(uint *param_1,char *param_2,char param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  void *pvVar5;
  int iVar6;
  void *_Memory;
  char *pcVar7;
  int iVar8;
  void *local_64;
  int local_60;
  int local_5c;
  char *local_58;
  undefined4 local_54;
  undefined4 local_50;
  char local_4c [20];
  undefined1 local_38 [40];
  FILE *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd7b0;
  local_c = ExceptionList;
  DAT_010b9360 = 0;
  local_64 = (void *)0x0;
  ExceptionList = &local_c;
  FUN_00a10b50(local_38);
  local_4 = 0;
  uVar3 = FUN_00aafeb0(param_1,&local_64,(int)local_38);
  if ((char)uVar3 == '\0') {
    FID_conflict__wprintf((wchar_t *)"Error: can\'t open pak file\n");
    local_4 = 0xffffffff;
    uVar3 = FUN_00a10740((int)local_38);
    ExceptionList = local_c;
    return uVar3 & 0xffffff00;
  }
  FID_conflict__wprintf(L"\n");
  local_5c = 0;
  if (0 < *(int *)((int)local_64 + 0xc)) {
    local_60 = 0;
    do {
      iVar8 = *(int *)((int)local_64 + 0x28) + local_60;
      pcVar1 = (char *)(iVar8 + 0x18);
      pcVar7 = (char *)((*(uint *)(*(int *)((int)local_64 + 0x28) + 0x14 + local_60) >> 1 & 0x3fff)
                       + *(int *)((int)local_64 + 0x30));
      FID_conflict__wprintf((wchar_t *)"%s%s\n",pcVar7,pcVar1);
      if (((param_3 == '\0') && (*(int *)(iVar8 + 0xc) != 0)) && (*(int *)(iVar8 + 0x10) != 0)) {
        local_58 = local_4c;
        local_4c[0] = '\0';
        local_54 = 0;
        local_50 = 0x14;
        _strncpy(local_58,"",0);
        local_54 = 0;
        *local_58 = '\0';
        local_4 = CONCAT31(local_4._1_3_,1);
        pcVar4 = param_2;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        FUN_004073f0(&local_58,param_2,(int)pcVar4 - (int)(param_2 + 1));
        pcVar4 = pcVar7;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        FUN_004073f0(&local_58,pcVar7,(int)pcVar4 - (int)(pcVar7 + 1));
        pcVar7 = pcVar1;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        FUN_004073f0(&local_58,pcVar1,(int)pcVar7 - (iVar8 + 0x19));
        pvVar5 = operator_new(*(uint *)(iVar8 + 0xc));
        iVar6 = FUN_00a10150(local_10,*(long *)(iVar8 + 8),0);
        if (iVar6 == 0) {
          FUN_00a100f0(pvVar5,*(size_t *)(iVar8 + 0xc),1,local_10);
          _Memory = (void *)FUN_00afb9d0((int)pvVar5);
          if (_Memory == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(pvVar5);
          }
          FUN_00ab0780(&local_58);
          FUN_009d4370(&local_58,_Memory,*(size_t *)(iVar8 + 0x10));
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        FID_conflict__wprintf((wchar_t *)"SEEK ERROR!\n");
                    /* WARNING: Subroutine does not return */
        _free(pvVar5);
      }
      local_60 = local_60 + 0x38;
      local_5c = local_5c + 1;
    } while (local_5c < *(int *)((int)local_64 + 0xc));
  }
  pvVar5 = local_64;
  FID_conflict__wprintf(L"\n");
  FUN_00a9b2f0((int)pvVar5);
                    /* WARNING: Subroutine does not return */
  _free(pvVar5);
}


//// FUNCTION FUN_00ab0c40 @ 00ab0c40 ////

uint __cdecl FUN_00ab0c40(void *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int local_4;
  
  if (DAT_010ca05c == 0) {
    uVar2 = 0;
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
  }
  else {
    FUN_0048ad50((int *)&param_1);
    piVar1 = (int *)FUN_0048f4b0(&DAT_010ca054,&local_4,&param_1);
    if (*piVar1 != DAT_010ca058) {
      if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
      return CONCAT31((int3)(param_3 >> 8),1);
    }
    uVar2 = param_3;
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00ab0cc0 @ 00ab0cc0 ////

void FUN_00ab0cc0(void)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint *_Dest;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint local_5c;
  int *local_38;
  undefined1 *local_34;
  undefined1 local_30 [4];
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd7c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FID_conflict__wprintf((wchar_t *)"Removing illegal files\n");
  local_38 = (int *)*DAT_010ca04c;
  if (local_38 != DAT_010ca04c) {
    do {
      piVar3 = local_38;
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      uVar1 = local_38[4];
      pcVar2 = (char *)local_38[3];
      if (0x13 < uVar1) {
        local_24 = uVar1 + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24);
      }
      _strncpy(local_2c,pcVar2,uVar1);
      local_2c[uVar1] = '\0';
      local_4 = 0;
      local_5c = 0xab0d62;
      local_28 = uVar1;
      uVar5 = FUN_00ab0150(local_2c);
      uVar1 = local_28;
      pcVar2 = local_2c;
      if ((char)uVar5 == '\0') {
LAB_00ab0dd9:
        puVar7 = (undefined4 *)FUN_004238d0(&DAT_010ca048,local_30,piVar3);
        local_38 = (int *)*puVar7;
      }
      else {
        local_34 = &stack0xffffff98;
        _Dest = &local_5c;
        local_5c = local_5c & 0xffffff00;
        uVar5 = 0x14;
        puVar4 = &stack0xffffff98;
        if (0x13 < local_28) {
          uVar5 = local_28 + 0x20 & 0xffffffe0;
          _Dest = _malloc(uVar5);
          puVar4 = local_34;
        }
        local_34 = puVar4;
        _strncpy((char *)_Dest,pcVar2,uVar1);
        *(undefined1 *)((int)_Dest + uVar1) = 0;
        uVar6 = FUN_00ab0c40(_Dest,uVar1,uVar5);
        if ((char)uVar6 != '\0') goto LAB_00ab0dd9;
        FUN_00420690((int *)&local_38);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    } while (local_38 != DAT_010ca04c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00ab0e30 @ 00ab0e30 ////

uint __cdecl FUN_00ab0e30(char *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  char *local_1d0;
  uint local_1cc;
  uint local_1c8;
  char local_1c4 [20];
  undefined4 auStack_1b0 [2];
  int local_1a8 [2];
  uint local_1a0 [8];
  int aiStack_180 [15];
  undefined **local_144 [13];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd7f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00aab260(local_1a8,param_1,1,0x1b6,1);
  local_4 = 0;
  if ((*(byte *)((int)local_1a0 + *(int *)(local_1a8[0] + 4)) & 6) != 0) {
    local_4 = 0xffffffff;
    FUN_00aab3a0((int)local_144);
    local_144[0] = &PTR_FUN_00d74f2c;
    uVar3 = FUN_00acc705((ios_base *)local_144);
    ExceptionList = local_c;
    return uVar3 & 0xffffff00;
  }
  local_1d0 = local_1c4;
  local_1c4[0] = '\0';
  local_1cc = 0;
  local_1c8 = 0x14;
  iVar5 = *(int *)(local_1a8[0] + 4);
  bVar2 = *(byte *)((int)local_1a0 + iVar5);
  local_4 = 1;
  while ((bVar2 & 1) == 0) {
    bVar2 = FUN_00a18a80((void *)((int)local_1a8 + iVar5),10);
    FUN_00aaaf10(local_1a8,local_110,0x104,bVar2);
    pcVar4 = local_110;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar4 - (int)(local_110 + 1);
    if (local_1c8 <= uVar3) {
      if (0x14 < local_1c8) {
                    /* WARNING: Subroutine does not return */
        _free(local_1d0);
      }
      local_1c8 = uVar3 + 0x20 & 0xffffffe0;
      local_1d0 = _malloc(local_1c8);
    }
    _strncpy(local_1d0,local_110,uVar3);
    local_1d0[uVar3] = '\0';
    uVar8 = 0;
    local_1cc = uVar3;
    if (uVar3 != 0) {
      do {
        iVar5 = _tolower((int)local_1d0[uVar8]);
        local_1d0[uVar8] = (char)iVar5;
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_1cc);
    }
    FUN_00ab0670((int *)&local_1d0);
    if ((local_1cc != 0) && (*local_1d0 != ';')) {
      FUN_0048fab0(&DAT_010ca054,auStack_1b0,&local_1d0);
    }
    iVar5 = *(int *)(local_1a8[0] + 4);
    bVar2 = *(byte *)((int)local_1a0 + iVar5);
  }
  piVar6 = FUN_00a1bb20((int *)local_1a0);
  if (piVar6 == (int *)0x0) {
    iVar5 = *(int *)(local_1a8[0] + 4);
    uVar3 = *(uint *)((int)local_1a0 + iVar5) | 2;
    if (*(int *)((int)aiStack_180 + iVar5) == 0) {
      uVar3 = *(uint *)((int)local_1a0 + iVar5) | 6;
    }
    std::ios_base::clear((ios_base *)((int)local_1a8 + iVar5),uVar3,false);
  }
  if (0x14 < local_1c8) {
                    /* WARNING: Subroutine does not return */
    _free(local_1d0);
  }
  local_4 = 0xffffffff;
  FUN_00aab3a0((int)local_144);
  local_144[0] = &PTR_FUN_00d74f2c;
  uVar7 = FUN_00acc705((ios_base *)local_144);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar7 >> 8),1);
}


//// FUNCTION FUN_00ab1090 @ 00ab1090 ////

void __cdecl FUN_00ab1090(char *param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char *in_stack_ffffff80;
  uint in_stack_ffffff84;
  char *_Memory;
  undefined1 *local_44;
  char cStack_3d;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
  puStack_8 = &LAB_00cfd818;
  local_c = ExceptionList;
  local_4 = (void *)0x0;
  ExceptionList = &local_c;
  FUN_0048ad50((int *)&param_1);
  FUN_00ab0670((int *)&param_1);
  _Memory = param_1;
  uVar5 = param_3;
  if ((param_2 != 0) && (*param_1 != ';')) {
    bVar1 = false;
    if (*param_1 == '-') {
      puVar2 = FUN_00430770(&param_1,&local_2c,1,param_2);
      FUN_004015d0(&param_1,(char *)*puVar2,puVar2[1]);
      if (&DAT_00000014 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      bVar1 = true;
    }
    iVar3 = FUN_00448220(&param_1,&DAT_00d1e554,0,1);
    if (iVar3 == -1) {
      if (bVar1) {
        puVar2 = (undefined4 *)FUN_00591010(&DAT_010ca048,(int *)&local_44,&param_1);
        _Memory = param_1;
        uVar5 = param_3;
        if ((int *)*puVar2 != DAT_010ca04c) {
          FUN_004238d0(&DAT_010ca048,&local_44,(int *)*puVar2);
          _Memory = param_1;
          uVar5 = param_3;
        }
      }
      else {
        piVar4 = FUN_00593a30(&DAT_010ca048,&param_1);
        *piVar4 = 0;
        _Memory = param_1;
        uVar5 = param_3;
      }
    }
    else {
      local_38 = 0;
      local_34 = 0;
      local_30 = (undefined4 *)0x0;
      _Memory = (char *)0x0;
      local_44 = &stack0xffffff80;
      local_4 = (void *)CONCAT31(local_4._1_3_,1);
      FUN_00403de0(&stack0xffffff80,&param_1);
      FUN_009c9850(in_stack_ffffff80,in_stack_ffffff84);
      uVar5 = 0;
      iVar3 = 0;
      while (local_30 != (undefined4 *)0x0) {
        if ((uint)((int)local_2c - (int)local_30 >> 5) <= uVar5) {
          FUN_00405fe0(local_30,local_2c);
                    /* WARNING: Subroutine does not return */
          _free(local_30);
        }
        local_24 = auStack_18;
        auStack_18[0] = 0;
        uStack_20 = 0;
        uStack_1c = 0x14;
        _Memory = (char *)0xab1215;
        FUN_004015d0(&local_24,*(char **)(iVar3 + (int)local_30),
                     *(uint *)(iVar3 + 4 + (int)local_30));
        param_1 = (char *)CONCAT31(param_1._1_3_,2);
        if (cStack_3d == '\0') {
          piVar4 = FUN_00593a30(&DAT_010ca048,&local_24);
          *piVar4 = 0;
        }
        else {
          _Memory = (char *)0xab1234;
          puVar2 = (undefined4 *)FUN_00591010(&DAT_010ca048,&local_3c,&local_24);
          if ((int *)*puVar2 != DAT_010ca04c) {
            _Memory = (char *)0xab124e;
            FUN_004238d0(&DAT_010ca048,&local_38,(int *)*puVar2);
          }
        }
        param_1 = (char *)CONCAT31(param_1._1_3_,1);
        if (0x14 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
          _free(local_24);
        }
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 0x20;
      }
      local_30 = (undefined4 *)0x0;
      local_2c = (undefined4 *)0x0;
      uStack_28 = 0;
      uVar5 = param_5;
    }
  }
  if (uVar5 < 0x15) {
    ExceptionList = local_4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00ab12d0 @ 00ab12d0 ////

int __cdecl FUN_00ab12d0(void *param_1)

{
  int iVar1;
  uint _Count;
  char *_Source;
  int *piVar2;
  int iVar3;
  int local_34;
  int *local_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd838;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FID_conflict__wprintf((wchar_t *)"Spanning data into %dMB chunks\n",0xc3);
  local_30 = (int *)*DAT_010ca04c;
  iVar3 = 0;
  local_34 = 1;
  if (local_30 != DAT_010ca04c) {
    do {
      iVar1 = local_30[0xb];
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _Count = local_30[4];
      _Source = (char *)local_30[3];
      if (0x13 < _Count) {
        local_24 = _Count + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24);
      }
      _strncpy(local_2c,_Source,_Count);
      local_2c[_Count] = '\0';
      local_4 = 0;
      local_28 = _Count;
      if (0xc2fffff < iVar3 + iVar1) {
        FID_conflict__wprintf((wchar_t *)"Pakfile %d = %d bytes\n",local_34,iVar3);
        local_34 = local_34 + 1;
        iVar3 = 0;
      }
      iVar3 = iVar3 + iVar1;
      piVar2 = FUN_00593a30(param_1,&local_2c);
      *piVar2 = local_34;
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      FUN_00420690((int *)&local_30);
    } while (local_30 != DAT_010ca04c);
    if ((1 < local_34) && (iVar3 < 0x4100000)) {
      FID_conflict__wprintf((wchar_t *)"Last file a bit small %d\n",iVar3);
      goto LAB_00ab1429;
    }
  }
  FID_conflict__wprintf((wchar_t *)"Pakfile %d = %d bytes\n",local_34,iVar3);
LAB_00ab1429:
  FID_conflict__wprintf((wchar_t *)"Finished spanning data\n\n");
  ExceptionList = local_c;
  return local_34;
}


//// FUNCTION FUN_00ab1450 @ 00ab1450 ////

undefined4 __cdecl FUN_00ab1450(undefined4 param_1,void *param_2)

{
  char cVar1;
  byte bVar2;
  uint _Count;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  undefined4 *_Memory;
  size_t sVar6;
  size_t sVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  int local_1ac;
  int local_1a4;
  int local_1a0;
  char *local_19c;
  uint local_198;
  uint local_194;
  char local_190 [20];
  uint local_17c;
  byte *local_178 [2];
  uint local_170;
  char *local_158;
  undefined4 local_154;
  uint local_150;
  char local_14c [20];
  char *local_138;
  undefined4 local_134;
  uint local_130;
  char local_12c [20];
  uint local_118 [67];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd87c;
  local_c = ExceptionList;
  if (DAT_010ca038 == (FILE *)0x0) {
    return 0;
  }
  local_19c = local_190;
  local_190[0] = '\0';
  local_198 = 0;
  local_194 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_19c,"",0);
  local_198 = 0;
  *local_19c = '\0';
  local_4 = 0;
  if (DAT_010c9f9c == 0) {
    local_1ac = 0;
  }
  else {
    local_1ac = DAT_010c9fa0 - DAT_010c9f9c >> 5;
  }
  if (0 < local_1ac) {
    local_1a4 = 1;
    local_1a0 = 0;
    do {
      _Count = *(uint *)(local_1a0 + 4 + DAT_010c9f9c);
      pcVar5 = *(char **)(local_1a0 + DAT_010c9f9c);
      if (local_194 <= _Count) {
        if (0x14 < local_194) {
                    /* WARNING: Subroutine does not return */
          _free(local_19c);
        }
        local_194 = _Count + 0x20 & 0xffffffe0;
        local_19c = _malloc(local_194);
      }
      _strncpy(local_19c,pcVar5,_Count);
      local_19c[_Count] = '\0';
      uVar9 = 0;
      local_198 = _Count;
      if (_Count != 0) {
        do {
          iVar3 = _tolower((int)local_19c[uVar9]);
          local_19c[uVar9] = (char)iVar3;
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_198);
      }
      FUN_00ab0060(local_178,local_19c);
      local_4._0_1_ = 1;
      FUN_00a9c980((int *)local_118,(char *)local_178[0]);
      puVar4 = FUN_00a9b5a0(param_2,local_118);
      if (puVar4 == (uint *)0x0) {
        local_138 = local_12c;
        local_12c[0] = '\0';
        local_134 = 0;
        local_130 = 0x14;
        _strncpy(local_138,"",0);
        local_134 = 0;
        *local_138 = '\0';
        local_4._0_1_ = 2;
        FUN_004073f0(&local_138,"FAIL FIND CELL: ",0x10);
        pcVar5 = local_19c;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_004073f0(&local_138,local_19c,(int)pcVar5 - (int)(local_19c + 1));
        FUN_0043a2d0(&DAT_010ca060,&local_138);
        if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
          _free(local_138);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (0x14 < local_170) {
                    /* WARNING: Subroutine does not return */
          _free(local_178[0]);
        }
      }
      else {
        FID_conflict__wprintf((wchar_t *)"Compressing %s...",local_178[0]);
        local_17c = FUN_00aafa80(&local_19c);
        pbVar8 = PTR_DAT_00e6e4a8;
        pbVar10 = local_178[0];
        if (local_17c == 0) {
          FID_conflict__wprintf((wchar_t *)"FAILED!!!!\n");
          local_158 = local_14c;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          local_14c[0] = '\0';
          local_154 = 0;
          local_150 = 0x14;
          _strncpy(local_158,"",0);
          local_154 = 0;
          *local_158 = '\0';
          local_4._0_1_ = 3;
          FUN_004073f0(&local_158,"FAIL LOAD: ",0xb);
          pcVar5 = local_19c;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_004073f0(&local_158,local_19c,(int)pcVar5 - (int)(local_19c + 1));
          FUN_0043a2d0(&DAT_010ca060,&local_158);
          if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
            _free(local_158);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          if (0x14 < local_170) {
                    /* WARNING: Subroutine does not return */
            _free(local_178[0]);
          }
        }
        else {
          do {
            bVar2 = *pbVar10;
            bVar11 = bVar2 < *pbVar8;
            if (bVar2 != *pbVar8) {
LAB_00ab17c5:
              iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ab17ca;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar10[1];
            bVar11 = bVar2 < pbVar8[1];
            if (bVar2 != pbVar8[1]) goto LAB_00ab17c5;
            pbVar8 = pbVar8 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
LAB_00ab17ca:
          if (iVar3 != 0) {
            _Memory = (undefined4 *)FUN_00afb8b0(DAT_010ca03c,local_17c);
            sVar6 = FUN_00afb6d0(_Memory);
            puVar4[2] = *(uint *)((int)param_2 + 4);
            puVar4[3] = sVar6;
            puVar4[4] = local_17c;
            sVar7 = FUN_00a10110(_Memory,1,sVar6,DAT_010ca038);
            if (sVar7 != sVar6) {
                    /* WARNING: Subroutine does not return */
              _free(DAT_010ca03c);
            }
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
          puVar4[2] = *(uint *)((int)param_2 + 4);
          puVar4[3] = 0xffffffff;
          puVar4[4] = local_17c;
          FUN_00a10110(DAT_010ca03c,1,local_17c,DAT_010ca038);
          local_4 = (uint)local_4._1_3_ << 8;
          if (0x14 < local_170) {
                    /* WARNING: Subroutine does not return */
            _free(local_178[0]);
          }
        }
      }
      local_1a0 = local_1a0 + 0x20;
      bVar11 = local_1a4 < local_1ac;
      local_1a4 = local_1a4 + 1;
    } while (bVar11);
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_010ca03c);
}


//// FUNCTION FUN_00ab19e0 @ 00ab19e0 ////

uint __cdecl FUN_00ab19e0(uint *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *_Memory;
  size_t sVar11;
  uint *puVar12;
  int **ppiVar13;
  uint *puVar14;
  void *pvVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  char *pcVar19;
  byte *pbVar20;
  int iVar21;
  bool bVar22;
  uint *in_stack_00000024;
  uint in_stack_0000002c;
  char *in_stack_00000044;
  uint in_stack_0000004c;
  int *local_1f4;
  undefined4 *local_1f0;
  byte *local_1ec;
  uint local_1e8;
  uint local_1e4;
  byte local_1e0 [20];
  void *local_1cc;
  undefined1 local_1c8 [4];
  int *local_1c4;
  void *local_1bc;
  undefined1 local_1b8 [4];
  int *local_1b4;
  int *local_1ac;
  int *piStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  uint local_198 [2];
  byte *pbStack_190;
  uint uStack_18c;
  uint uStack_188;
  byte abStack_184 [20];
  int *piStack_170;
  int *piStack_16c;
  undefined1 local_168 [44];
  undefined1 local_13c [304];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfd921;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  cVar5 = FUN_00a99520();
  if (cVar5 == '\0') {
    FID_conflict__wprintf((wchar_t *)"Couldn\'t open MV::CPak::CLoader\n");
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    if (in_stack_0000002c < 0x15) {
      if (in_stack_0000004c < 0x15) {
        ExceptionList = local_c;
        return param_3 & 0xffffff00;
      }
                    /* WARNING: Subroutine does not return */
      _free(in_stack_00000044);
    }
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000024);
  }
  FID_conflict__wprintf((wchar_t *)"\tCombine: CLoader Initialised\n");
  DAT_010b9360 = 0;
  local_1cc = (void *)0x0;
  local_1bc = (void *)0x0;
  FUN_00a10b50(local_13c);
  local_4._0_1_ = 3;
  FUN_00a10b50(local_168);
  local_4._0_1_ = 4;
  uVar6 = FUN_00aafeb0(param_1,&local_1cc,(int)local_13c);
  if ((char)uVar6 == '\0') {
    FID_conflict__wprintf((wchar_t *)"Error: can\'t open pak file\n");
    local_4._0_1_ = 3;
    FUN_00a10740((int)local_168);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00a10740((int)local_13c);
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    if (in_stack_0000002c < 0x15) {
      if (in_stack_0000004c < 0x15) {
        ExceptionList = local_c;
        return param_3 & 0xffffff00;
      }
                    /* WARNING: Subroutine does not return */
      _free(in_stack_00000044);
    }
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000024);
  }
  FID_conflict__wprintf((wchar_t *)"\tCombine: PAK A opended\n");
  uVar6 = FUN_00aafeb0(in_stack_00000024,&local_1bc,(int)local_168);
  pvVar15 = local_1cc;
  if ((char)uVar6 == '\0') {
    if (local_1cc != (void *)0x0) {
      FUN_00a9b2f0((int)local_1cc);
                    /* WARNING: Subroutine does not return */
      _free(pvVar15);
    }
    FID_conflict__wprintf((wchar_t *)"Error: can\'t open pak file\n");
    local_4._0_1_ = 3;
    FUN_00a10740((int)local_168);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00a10740((int)local_13c);
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    if (0x14 < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
      _free(in_stack_00000024);
    }
    if (in_stack_0000004c < 0x15) {
      ExceptionList = local_c;
      return param_3 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000044);
  }
  FID_conflict__wprintf((wchar_t *)"\tCombine: PAK B opended\n");
  FUN_00490090((int)local_1c8);
  local_4._0_1_ = 5;
  FUN_00490090((int)local_1b8);
  pvVar15 = local_1cc;
  local_1f4 = (int *)0x0;
  if (0 < *(int *)((int)local_1cc + 0xc)) {
    iVar17 = 0;
    do {
      local_4._0_1_ = 6;
      iVar21 = *(int *)((int)pvVar15 + 0x28) + iVar17;
      pcVar19 = (char *)((*(uint *)(*(int *)((int)pvVar15 + 0x28) + 0x14 + iVar17) >> 1 & 0x3fff) +
                        *(int *)((int)pvVar15 + 0x30));
      local_1ec = local_1e0;
      local_1e0[0] = 0;
      local_1e8 = 0;
      local_1e4 = 0x14;
      _strncpy((char *)local_1ec,"",0);
      local_1e8 = 0;
      *local_1ec = 0;
      local_4._0_1_ = 7;
      pcVar7 = pcVar19;
      do {
        cVar5 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar5 != '\0');
      FUN_004073f0(&local_1ec,pcVar19,(int)pcVar7 - (int)(pcVar19 + 1));
      pcVar19 = (char *)(iVar21 + 0x18);
      pcVar7 = pcVar19;
      do {
        cVar5 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar5 != '\0');
      FUN_004073f0(&local_1ec,pcVar19,(int)pcVar7 - (iVar21 + 0x19));
      FUN_0048fab0(local_1c8,local_198,&local_1ec);
      local_4._0_1_ = 6;
      if (0x14 < local_1e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1ec);
      }
      local_1f4 = (int *)((int)local_1f4 + 1);
      iVar17 = iVar17 + 0x38;
    } while ((int)local_1f4 < *(int *)((int)pvVar15 + 0xc));
  }
  pvVar15 = local_1bc;
  iVar17 = 0;
  local_1f4 = (int *)0x0;
  if (0 < *(int *)((int)local_1bc + 0xc)) {
    do {
      local_4._0_1_ = 6;
      iVar21 = *(int *)((int)pvVar15 + 0x28) + iVar17;
      pcVar19 = (char *)((*(uint *)(*(int *)((int)pvVar15 + 0x28) + 0x14 + iVar17) >> 1 & 0x3fff) +
                        *(int *)((int)pvVar15 + 0x30));
      local_1ec = local_1e0;
      local_1e0[0] = 0;
      local_1e8 = 0;
      local_1e4 = 0x14;
      _strncpy((char *)local_1ec,"",0);
      local_1e8 = 0;
      *local_1ec = 0;
      local_4._0_1_ = 8;
      pcVar7 = pcVar19;
      do {
        cVar5 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar5 != '\0');
      FUN_004073f0(&local_1ec,pcVar19,(int)pcVar7 - (int)(pcVar19 + 1));
      pcVar19 = (char *)(iVar21 + 0x18);
      pcVar7 = pcVar19;
      do {
        cVar5 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar5 != '\0');
      FUN_004073f0(&local_1ec,pcVar19,(int)pcVar7 - (iVar21 + 0x19));
      FUN_0048fab0(local_1b8,local_198,&local_1ec);
      local_4._0_1_ = 6;
      if (0x14 < local_1e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1ec);
      }
      local_1f4 = (int *)((int)local_1f4 + 1);
      iVar17 = iVar17 + 0x38;
    } while ((int)local_1f4 < *(int *)((int)pvVar15 + 0xc));
  }
  local_4._0_1_ = 6;
  FID_conflict__wprintf((wchar_t *)"\tCombine: File lists created\n");
  piVar10 = (int *)*local_1c4;
  uVar3 = (undefined1)local_4;
  if (piVar10 != local_1c4) {
    do {
      local_4._0_1_ = uVar3;
      local_1ec = local_1e0;
      local_1e0[0] = 0;
      local_1e8 = 0;
      local_1e4 = 0x14;
      uVar6 = piVar10[4];
      pcVar7 = (char *)piVar10[3];
      if (0x13 < uVar6) {
        local_1e4 = uVar6 + 0x20 & 0xffffffe0;
        local_1ec = _malloc(local_1e4);
      }
      _strncpy((char *)local_1ec,pcVar7,uVar6);
      local_1ec[uVar6] = 0;
      local_4 = CONCAT31(local_4._1_3_,9);
      local_1e8 = uVar6;
      local_1ac = FUN_0048f2c0(local_1b8,&local_1ec);
      if (local_1ac == local_1b4) {
LAB_00ab1f49:
        local_1f4 = local_1b4;
        ppiVar13 = &local_1f4;
      }
      else {
        pbVar20 = (byte *)local_1ac[3];
        pbVar8 = local_1ec;
        do {
          bVar1 = *pbVar8;
          bVar22 = bVar1 < *pbVar20;
          if (bVar1 != *pbVar20) {
LAB_00ab1f3a:
            iVar17 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
            goto LAB_00ab1f3f;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar22 = bVar1 < pbVar20[1];
          if (bVar1 != pbVar20[1]) goto LAB_00ab1f3a;
          pbVar8 = pbVar8 + 2;
          pbVar20 = pbVar20 + 2;
        } while (bVar1 != 0);
        iVar17 = 0;
LAB_00ab1f3f:
        if (iVar17 < 0) goto LAB_00ab1f49;
        ppiVar13 = &local_1ac;
      }
      if (*ppiVar13 == local_1b4) {
        if (*(char *)((int)piVar10 + 0x2d) == '\0') {
          piVar2 = (int *)piVar10[2];
          if (*(char *)((int)piVar2 + 0x2d) == '\0') {
            cVar5 = *(char *)(*piVar2 + 0x2d);
            piVar10 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar5 == '\0') {
              cVar5 = *(char *)(*piVar2 + 0x2d);
              piVar10 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar5 = *(char *)(piVar10[1] + 0x2d);
            piVar4 = (int *)piVar10[1];
            piVar2 = piVar10;
            while ((piVar10 = piVar4, cVar5 == '\0' && (piVar2 == (int *)piVar10[2]))) {
              cVar5 = *(char *)(piVar10[1] + 0x2d);
              piVar4 = (int *)piVar10[1];
              piVar2 = piVar10;
            }
          }
        }
      }
      else {
        puVar9 = (undefined4 *)FUN_0048f7e0(local_1c8,&local_1f0,piVar10);
        piVar10 = (int *)*puVar9;
      }
      local_4._0_1_ = 6;
      uVar3 = (undefined1)local_4;
      local_4._0_1_ = 6;
      if (0x14 < local_1e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1ec);
      }
    } while (piVar10 != local_1c4);
  }
  FID_conflict__wprintf((wchar_t *)"\tCombine: Copies removed\n");
  DAT_010ca038 = FUN_00a10060(in_stack_00000044,"w");
  if (DAT_010ca038 == (FILE *)0x0) {
    FID_conflict__wprintf((wchar_t *)"Couldn\'t open temp file to write into\n");
    pvVar15 = local_1cc;
    FUN_00a9b2f0((int)local_1cc);
                    /* WARNING: Subroutine does not return */
    _free(pvVar15);
  }
  FID_conflict__wprintf((wchar_t *)"\tCombine: Output file opened\n");
  piVar10 = (int *)*local_1c4;
  uVar3 = (undefined1)local_4;
  if (piVar10 != local_1c4) {
    do {
      local_4._0_1_ = uVar3;
      uVar6 = piVar10[4];
      pcVar7 = (char *)piVar10[3];
      local_1ec = local_1e0;
      local_1e0[0] = 0;
      local_1e8 = 0;
      local_1e4 = 0x14;
      if (0x13 < uVar6) {
        local_1e4 = uVar6 + 0x20 & 0xffffffe0;
        local_1ec = _malloc(local_1e4);
      }
      _strncpy((char *)local_1ec,pcVar7,uVar6);
      piVar2 = DAT_010c9fa0;
      local_1ec[uVar6] = 0;
      local_4 = CONCAT31(local_4._1_3_,10);
      local_1e8 = uVar6;
      if ((DAT_010c9f9c == 0) ||
         ((uint)(DAT_010c9fa4 - DAT_010c9f9c >> 5) <= (uint)((int)DAT_010c9fa0 - DAT_010c9f9c >> 5))
         ) {
        FUN_00439fd0(&DAT_010c9f98,DAT_010c9fa0,1,&local_1ec);
      }
      else {
        FUN_00439ea0(DAT_010c9fa0,1,&local_1ec);
        DAT_010c9fa0 = piVar2 + 8;
      }
      local_4._0_1_ = 6;
      uVar3 = (undefined1)local_4;
      local_4._0_1_ = 6;
      if (0x14 < local_1e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1ec);
      }
      if (*(char *)((int)piVar10 + 0x2d) == '\0') {
        piVar2 = (int *)piVar10[2];
        if (*(char *)((int)piVar2 + 0x2d) == '\0') {
          cVar5 = *(char *)(*piVar2 + 0x2d);
          piVar10 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar5 == '\0') {
            cVar5 = *(char *)(*piVar2 + 0x2d);
            piVar10 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar5 = *(char *)(piVar10[1] + 0x2d);
          piVar4 = (int *)piVar10[1];
          piVar2 = piVar10;
          while ((piVar10 = piVar4, cVar5 == '\0' && (piVar2 == (int *)piVar10[2]))) {
            cVar5 = *(char *)(piVar10[1] + 0x2d);
            piVar4 = (int *)piVar10[1];
            piVar2 = piVar10;
          }
        }
      }
    } while (piVar10 != local_1c4);
  }
  piVar10 = (int *)*local_1b4;
  uVar3 = (undefined1)local_4;
  if (piVar10 != local_1b4) {
    do {
      local_4._0_1_ = uVar3;
      uVar6 = piVar10[4];
      pcVar7 = (char *)piVar10[3];
      local_1ec = local_1e0;
      local_1e0[0] = 0;
      local_1e8 = 0;
      local_1e4 = 0x14;
      if (0x13 < uVar6) {
        local_1e4 = uVar6 + 0x20 & 0xffffffe0;
        local_1ec = _malloc(local_1e4);
      }
      _strncpy((char *)local_1ec,pcVar7,uVar6);
      piVar2 = DAT_010c9fa0;
      local_1ec[uVar6] = 0;
      local_4 = CONCAT31(local_4._1_3_,0xb);
      local_1e8 = uVar6;
      if ((DAT_010c9f9c == 0) ||
         ((uint)(DAT_010c9fa4 - DAT_010c9f9c >> 5) <= (uint)((int)DAT_010c9fa0 - DAT_010c9f9c >> 5))
         ) {
        FUN_00439fd0(&DAT_010c9f98,DAT_010c9fa0,1,&local_1ec);
      }
      else {
        FUN_00439ea0(DAT_010c9fa0,1,&local_1ec);
        DAT_010c9fa0 = piVar2 + 8;
      }
      local_4._0_1_ = 6;
      uVar3 = (undefined1)local_4;
      local_4._0_1_ = 6;
      if (0x14 < local_1e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1ec);
      }
      if (*(char *)((int)piVar10 + 0x2d) == '\0') {
        piVar2 = (int *)piVar10[2];
        if (*(char *)((int)piVar2 + 0x2d) == '\0') {
          cVar5 = *(char *)(*piVar2 + 0x2d);
          piVar10 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar5 == '\0') {
            cVar5 = *(char *)(*piVar2 + 0x2d);
            piVar10 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar5 = *(char *)(piVar10[1] + 0x2d);
          piVar4 = (int *)piVar10[1];
          piVar2 = piVar10;
          while ((piVar10 = piVar4, cVar5 == '\0' && (piVar2 == (int *)piVar10[2]))) {
            cVar5 = *(char *)(piVar10[1] + 0x2d);
            piVar4 = (int *)piVar10[1];
            piVar2 = piVar10;
          }
        }
      }
    } while (piVar10 != local_1b4);
  }
  FID_conflict__wprintf((wchar_t *)"\tCombine: Merged list created\n");
  FUN_00a99740();
  FUN_00a99d60();
  piVar10 = FUN_00a97e00();
  local_1f4 = piVar10;
  FID_conflict__wprintf((wchar_t *)"\tCombine: header created\n");
  _Memory = operator_new(piVar10[1]);
  uVar6 = piVar10[1];
  puVar9 = _Memory;
  for (uVar16 = uVar6 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  local_1f0 = _Memory;
  sVar11 = FUN_00a10110(_Memory,1,piVar10[1],DAT_010ca038);
  if (sVar11 != piVar10[1]) {
    FUN_00a100d0(DAT_010ca038);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FID_conflict__wprintf((wchar_t *)"\tCombine: header saved\n");
  pbStack_190 = abStack_184;
  iStack_1a0 = 0;
  abStack_184[0] = 0;
  uStack_18c = 0;
  uStack_188 = 0x14;
  _strncpy((char *)pbStack_190,"",0);
  uStack_18c = 0;
  *pbStack_190 = 0;
  local_4 = CONCAT31(local_4._1_3_,0xc);
  if (DAT_010c9f9c == 0) {
    piStack_1a8 = (int *)0x0;
  }
  else {
    piStack_1a8 = (int *)((int)DAT_010c9fa0 - DAT_010c9f9c >> 5);
  }
  if (0 < (int)piStack_1a8) {
    iStack_19c = 0;
    iStack_1a4 = 1;
    local_1ac = piStack_1a8;
    do {
      uVar6 = *(uint *)(DAT_010c9f9c + 4 + iStack_19c);
      pcVar7 = *(char **)(DAT_010c9f9c + iStack_19c);
      if (uStack_188 <= uVar6) {
        if (0x14 < uStack_188) {
                    /* WARNING: Subroutine does not return */
          _free(pbStack_190);
        }
        uStack_188 = uVar6 + 0x20 & 0xffffffe0;
        pbStack_190 = _malloc(uStack_188);
      }
      _strncpy((char *)pbStack_190,pcVar7,uVar6);
      pbStack_190[uVar6] = 0;
      uVar16 = 0;
      uStack_18c = uVar6;
      if (uVar6 != 0) {
        do {
          iVar17 = _tolower((int)(char)pbStack_190[uVar16]);
          pbStack_190[uVar16] = (byte)iVar17;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uStack_18c);
      }
      FUN_00ab0060(&local_1ec,(char *)pbStack_190);
      local_4._0_1_ = 0xd;
      FUN_00a9c980((int *)local_198,(char *)local_1ec);
      puVar12 = FUN_00a9b5a0(local_1f4,local_198);
      if (puVar12 != (uint *)0x0) {
        piStack_16c = FUN_0048f2c0(local_1c8,&pbStack_190);
        if (piStack_16c == local_1c4) goto LAB_00ab274a;
        pbVar20 = (byte *)piStack_16c[3];
        pbVar8 = pbStack_190;
        goto LAB_00ab2710;
      }
      local_4 = CONCAT31(local_4._1_3_,0xc);
      if (0x14 < local_1e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1ec);
      }
      iStack_19c = iStack_19c + 0x20;
      iStack_1a4 = iStack_1a4 + 1;
      local_1ac = (int *)((int)local_1ac + -1);
    } while (local_1ac != (int *)0x0);
  }
  FUN_009d9820();
  FUN_00a10150(DAT_010ca038,0,0);
  puVar9 = local_1f0;
  piVar10 = local_1f4;
  FUN_00a9b440(local_1f4,local_1f0);
  sVar11 = FUN_00a10110(puVar9,1,piVar10[1],DAT_010ca038);
  if (sVar11 != piVar10[1]) {
    FID_conflict__wprintf((wchar_t *)"Error writing to file\n");
  }
  FUN_00a100d0(DAT_010ca038);
                    /* WARNING: Subroutine does not return */
  _free(puVar9);
  while( true ) {
    bVar1 = pbVar8[1];
    bVar22 = bVar1 < pbVar20[1];
    if (bVar1 != pbVar20[1]) goto LAB_00ab2738;
    pbVar8 = pbVar8 + 2;
    pbVar20 = pbVar20 + 2;
    if (bVar1 == 0) break;
LAB_00ab2710:
    bVar1 = *pbVar8;
    bVar22 = bVar1 < *pbVar20;
    if (bVar1 != *pbVar20) {
LAB_00ab2738:
      iVar17 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
      goto LAB_00ab273d;
    }
    if (bVar1 == 0) break;
  }
  iVar17 = 0;
LAB_00ab273d:
  if (iVar17 < 0) {
LAB_00ab274a:
    piStack_170 = local_1c4;
    ppiVar13 = &piStack_170;
  }
  else {
    ppiVar13 = &piStack_16c;
  }
  if (*ppiVar13 == local_1c4) {
    puVar14 = FUN_00a9b5a0(local_1bc,local_198);
    puVar18 = local_168;
  }
  else {
    puVar14 = FUN_00a9b5a0(local_1cc,local_198);
    puVar18 = local_13c;
  }
  if (puVar14 == (uint *)0x0) {
    FID_conflict__wprintf((wchar_t *)"FAILED to find %s\n",local_1ec);
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
  }
  FID_conflict__wprintf((wchar_t *)"Merging %s...",local_1ec);
  pvVar15 = operator_new(puVar14[3]);
  iVar17 = FUN_00a10150(*(FILE **)(puVar18 + 0x28),puVar14[2],0);
  if (iVar17 == 0) {
    FUN_00a100f0(pvVar15,puVar14[3],1,*(FILE **)(puVar18 + 0x28));
    puVar12[2] = local_1f4[1] + iStack_1a0;
    puVar12[3] = puVar14[3];
    puVar12[4] = puVar14[4];
    iStack_1a0 = iStack_1a0 + puVar14[3];
    FUN_00a10110(pvVar15,1,puVar14[3],DAT_010ca038);
                    /* WARNING: Subroutine does not return */
    _free(pvVar15);
  }
  FID_conflict__wprintf((wchar_t *)"failed to seed\n");
                    /* WARNING: Subroutine does not return */
  _free(pvVar15);
}


//// FUNCTION FUN_00ab2c30 @ 00ab2c30 ////

uint __cdecl FUN_00ab2c30(int param_1,uint *param_2,char *param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *this;
  undefined4 *_Memory;
  size_t sVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int local_198;
  int local_194;
  char *local_190;
  uint local_188;
  char local_184 [20];
  char *local_170;
  uint local_16c;
  uint local_168;
  char local_164 [20];
  undefined4 *local_150;
  uint *local_14c;
  uint local_144 [2];
  undefined1 local_13c [304];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cfd964;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  cVar3 = FUN_00a99520();
  if (cVar3 == '\0') {
    FID_conflict__wprintf((wchar_t *)"Couldn\'t open MV::CPak::CLoader\n");
    if (param_5 < 0x15) {
      ExceptionList = local_c;
      return param_5 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  DAT_010b9360 = 0;
  FUN_00a10b50(local_13c);
  local_4._0_1_ = 1;
  DAT_010ca038 = FUN_00a10060(param_3,"w");
  if (DAT_010ca038 == (FILE *)0x0) {
    FID_conflict__wprintf((wchar_t *)"Couldn\'t open temp file to write into\n");
    local_4 = (uint)local_4._1_3_ << 8;
    uVar4 = FUN_00a10740((int)local_13c);
    if (param_5 < 0x15) {
      ExceptionList = local_c;
      return uVar4 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  local_198 = 0;
  puVar6 = param_2;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      uVar4 = *puVar6;
      local_16c = 0;
      local_170 = local_164;
      local_164[0] = '\0';
      local_168 = 0x14;
      puVar8 = puVar6 + 1;
      do {
        uVar10 = *puVar8;
        puVar8 = (uint *)((int)puVar8 + 1);
      } while ((char)uVar10 != '\0');
      uVar10 = (int)puVar8 - ((int)puVar6 + 5);
      if (0x13 < uVar10) {
        local_168 = uVar10 + 0x20 & 0xffffffe0;
        local_170 = _malloc(local_168);
      }
      _strncpy(local_170,(char *)(puVar6 + 1),uVar10);
      local_170[uVar10] = '\0';
      local_4._0_1_ = 2;
      local_16c = uVar10;
      FUN_0043a2d0(&DAT_010c9f98,&local_170);
      puVar6 = (uint *)((int)puVar6 + uVar10 + uVar4 + 5);
      local_4._0_1_ = 1;
      uVar2 = (undefined1)local_4;
      local_4._0_1_ = 1;
      if (0x14 < local_168) {
                    /* WARNING: Subroutine does not return */
        _free(local_170);
      }
      local_198 = local_198 + 1;
      local_4._0_1_ = uVar2;
    } while (local_198 < *(int *)(param_1 + 0xc));
  }
  FUN_00a99740();
  FUN_00a99d60();
  this = FUN_00a97e00();
  _Memory = operator_new(this[1]);
  uVar4 = this[1];
  puVar9 = _Memory;
  for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  local_150 = _Memory;
  sVar5 = FUN_00a10110(_Memory,1,this[1],DAT_010ca038);
  if (sVar5 != this[1]) {
    FUN_00a100d0(DAT_010ca038);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_190 = local_184;
  local_184[0] = '\0';
  local_188 = 0x14;
  _strncpy(local_190,"",0);
  local_184[0] = '\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0 < *(int *)(param_1 + 0xc)) {
    local_194 = 1;
    do {
      uVar4 = *param_2;
      puVar6 = param_2 + 1;
      do {
        uVar10 = *puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
      } while ((char)uVar10 != '\0');
      uVar10 = (int)puVar6 - ((int)param_2 + 5);
      if (local_188 <= uVar10) {
        if (0x14 < local_188) {
                    /* WARNING: Subroutine does not return */
          _free(local_190);
        }
        local_188 = uVar10 + 0x20 & 0xffffffe0;
        local_190 = _malloc(local_188);
      }
      _strncpy(local_190,(char *)(param_2 + 1),uVar10);
      local_190[uVar10] = '\0';
      puVar6 = (uint *)((int)param_2 + uVar10 + 5);
      local_14c = (uint *)((int)puVar6 + uVar4);
      uVar11 = 0;
      if (uVar10 != 0) {
        do {
          iVar7 = _tolower((int)local_190[uVar11]);
          local_190[uVar11] = (char)iVar7;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar10);
      }
      FUN_00ab0060(&local_170,local_190);
      local_4._0_1_ = 4;
      FUN_00a9c980((int *)local_144,local_170);
      puVar8 = FUN_00a9b5a0(this,local_144);
      if (puVar8 != (uint *)0x0) {
        FID_conflict__wprintf((wchar_t *)"Writing %s...",local_170);
        puVar9 = (undefined4 *)FUN_00afb8b0(puVar6,uVar4);
        sVar5 = FUN_00afb6d0(puVar9);
        puVar8[2] = this[1];
        puVar8[3] = sVar5;
        puVar8[4] = uVar4;
        FUN_00a10110(puVar9,1,sVar5,DAT_010ca038);
                    /* WARNING: Subroutine does not return */
        _free(puVar9);
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0x14 < local_168) {
                    /* WARNING: Subroutine does not return */
        _free(local_170);
      }
      bVar1 = local_194 < *(int *)(param_1 + 0xc);
      param_2 = local_14c;
      local_194 = local_194 + 1;
    } while (bVar1);
  }
  FUN_009d9820();
  FUN_00a10150(DAT_010ca038,0,0);
  puVar9 = local_150;
  FUN_00a9b440(this,local_150);
  sVar5 = FUN_00a10110(puVar9,1,this[1],DAT_010ca038);
  if (sVar5 != this[1]) {
    FID_conflict__wprintf((wchar_t *)"Error writing to file\n");
  }
  FUN_00a100d0(DAT_010ca038);
                    /* WARNING: Subroutine does not return */
  _free(puVar9);
}


//// FUNCTION FUN_00ab3350 @ 00ab3350 ////

uint __cdecl FUN_00ab3350(uint *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  uint **ppuVar10;
  undefined4 *puVar11;
  int **ppiVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  char *pcVar19;
  byte *pbVar20;
  undefined4 *puVar21;
  int iVar22;
  int *piVar23;
  undefined4 *puVar24;
  bool bVar25;
  uint *in_stack_00000024;
  uint in_stack_0000002c;
  void *in_stack_00000044;
  uint in_stack_0000004c;
  undefined4 auStack_118 [3];
  int local_e8;
  byte *local_e4;
  uint local_e0;
  uint local_dc;
  byte local_d8 [20];
  int *local_c4;
  void *local_c0;
  void *local_bc;
  int local_b8;
  undefined1 local_b4 [4];
  int *local_b0;
  undefined1 local_a8 [4];
  uint *local_a4;
  uint *local_9c;
  uint *local_98;
  undefined4 *puStack_94;
  uint local_90 [2];
  byte *pbStack_88;
  uint uStack_84;
  uint uStack_80;
  byte abStack_7c [20];
  int *piStack_68;
  undefined4 local_64 [11];
  undefined4 local_38 [11];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfd9fb;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FID_conflict__wprintf((wchar_t *)"Merging: %s + %s to %s\n");
  cVar6 = FUN_00a99520();
  if (cVar6 == '\0') {
    FID_conflict__wprintf((wchar_t *)"Couldn\'t open MV::CPak::CLoader\n");
  }
  else {
    iVar16 = 0;
    local_e8 = 0;
    DAT_010b9360 = 0;
    local_c0 = (void *)0x0;
    local_bc = (void *)0x0;
    FUN_00a10b50((undefined1 *)local_38);
    local_4._0_1_ = 3;
    FUN_00a10b50((undefined1 *)local_64);
    local_4._0_1_ = 4;
    uVar7 = FUN_00aafeb0(param_1,&local_c0,(int)local_38);
    if ((char)uVar7 != '\0') {
      uVar7 = FUN_00aafeb0(in_stack_00000024,&local_bc,(int)local_64);
      pvVar3 = local_c0;
      if ((char)uVar7 != '\0') {
        if (DAT_00e6e4a4 < *(int *)((int)local_bc + 0x1c)) {
          DAT_00e6e4a4 = *(int *)((int)local_bc + 0x1c);
        }
        if (DAT_00e6e4a4 < *(int *)((int)local_c0 + 0x1c)) {
          DAT_00e6e4a4 = *(int *)((int)local_c0 + 0x1c);
        }
        FUN_00490090((int)local_b4);
        local_4._0_1_ = 5;
        FUN_00490090((int)local_a8);
        if (0 < *(int *)((int)pvVar3 + 0xc)) {
          iVar18 = 0;
          do {
            local_4._0_1_ = 6;
            iVar22 = *(int *)((int)local_c0 + 0x28) + iVar18;
            local_e4 = local_d8;
            pcVar19 = (char *)((*(uint *)(*(int *)((int)local_c0 + 0x28) + 0x14 + iVar18) >> 1 &
                               0x3fff) + *(int *)((int)local_c0 + 0x30));
            local_d8[0] = 0;
            local_e0 = 0;
            local_dc = 0x14;
            _strncpy((char *)local_e4,"",0);
            local_e0 = 0;
            *local_e4 = 0;
            local_4._0_1_ = 7;
            pcVar8 = pcVar19;
            do {
              cVar6 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar6 != '\0');
            FUN_004073f0(&local_e4,pcVar19,(int)pcVar8 - (int)(pcVar19 + 1));
            pcVar8 = (char *)(iVar22 + 0x18);
            do {
              cVar6 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar6 != '\0');
            FUN_004073f0(&local_e4,(char *)(iVar22 + 0x18),(int)pcVar8 - (iVar22 + 0x19));
            local_e8 = local_e8 + 0x10 + *(int *)(iVar22 + 0xc);
            FUN_0048fab0(local_b4,local_90,&local_e4);
            local_4._0_1_ = 6;
            if (0x14 < local_dc) {
                    /* WARNING: Subroutine does not return */
              _free(local_e4);
            }
            iVar16 = iVar16 + 1;
            iVar18 = iVar18 + 0x38;
          } while (iVar16 < *(int *)((int)local_c0 + 0xc));
        }
        pvVar3 = local_bc;
        local_b8 = 0;
        if (0 < *(int *)((int)local_bc + 0xc)) {
          iVar16 = 0;
          do {
            local_4._0_1_ = 6;
            iVar18 = *(int *)((int)pvVar3 + 0x28) + iVar16;
            local_e4 = local_d8;
            pcVar19 = (char *)((*(uint *)(*(int *)((int)pvVar3 + 0x28) + 0x14 + iVar16) >> 1 &
                               0x3fff) + *(int *)((int)pvVar3 + 0x30));
            local_d8[0] = 0;
            local_e0 = 0;
            local_dc = 0x14;
            _strncpy((char *)local_e4,"",0);
            local_e0 = 0;
            *local_e4 = 0;
            local_4._0_1_ = 8;
            pcVar8 = pcVar19;
            do {
              cVar6 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar6 != '\0');
            FUN_004073f0(&local_e4,pcVar19,(int)pcVar8 - (int)(pcVar19 + 1));
            pcVar8 = (char *)(iVar18 + 0x18);
            do {
              cVar6 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar6 != '\0');
            FUN_004073f0(&local_e4,(char *)(iVar18 + 0x18),(int)pcVar8 - (iVar18 + 0x19));
            local_e8 = local_e8 + 0x10 + *(int *)(iVar18 + 0xc);
            FUN_0048fab0(local_a8,local_90,&local_e4);
            local_4._0_1_ = 6;
            if (0x14 < local_dc) {
                    /* WARNING: Subroutine does not return */
              _free(local_e4);
            }
            local_b8 = local_b8 + 1;
            iVar16 = iVar16 + 0x38;
          } while (local_b8 < *(int *)((int)pvVar3 + 0xc));
        }
        piVar23 = (int *)*local_b0;
        if (piVar23 != local_b0) {
          do {
            local_4._0_1_ = 6;
            local_e4 = local_d8;
            local_d8[0] = 0;
            local_e0 = 0;
            local_dc = 0x14;
            uVar7 = piVar23[4];
            pcVar8 = (char *)piVar23[3];
            if (0x13 < uVar7) {
              local_dc = uVar7 + 0x20 & 0xffffffe0;
              local_e4 = _malloc(local_dc);
            }
            _strncpy((char *)local_e4,pcVar8,uVar7);
            local_e4[uVar7] = 0;
            local_4 = CONCAT31(local_4._1_3_,9);
            local_e0 = uVar7;
            local_9c = FUN_0048f2c0(local_a8,&local_e4);
            if (local_9c == local_a4) {
LAB_00ab37d3:
              local_98 = local_a4;
              ppuVar10 = &local_98;
            }
            else {
              pbVar20 = (byte *)local_9c[3];
              pbVar9 = local_e4;
              do {
                bVar1 = *pbVar9;
                bVar25 = bVar1 < *pbVar20;
                if (bVar1 != *pbVar20) {
LAB_00ab37c4:
                  iVar16 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
                  goto LAB_00ab37c9;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar25 = bVar1 < pbVar20[1];
                if (bVar1 != pbVar20[1]) goto LAB_00ab37c4;
                pbVar9 = pbVar9 + 2;
                pbVar20 = pbVar20 + 2;
              } while (bVar1 != 0);
              iVar16 = 0;
LAB_00ab37c9:
              if (iVar16 < 0) goto LAB_00ab37d3;
              ppuVar10 = &local_9c;
            }
            if (*ppuVar10 == local_a4) {
              if (*(char *)((int)piVar23 + 0x2d) == '\0') {
                piVar2 = (int *)piVar23[2];
                if (*(char *)((int)piVar2 + 0x2d) == '\0') {
                  cVar6 = *(char *)(*piVar2 + 0x2d);
                  piVar23 = piVar2;
                  piVar2 = (int *)*piVar2;
                  while (cVar6 == '\0') {
                    cVar6 = *(char *)(*piVar2 + 0x2d);
                    piVar23 = piVar2;
                    piVar2 = (int *)*piVar2;
                  }
                }
                else {
                  cVar6 = *(char *)(piVar23[1] + 0x2d);
                  piVar4 = (int *)piVar23[1];
                  piVar2 = piVar23;
                  while ((piVar23 = piVar4, cVar6 == '\0' && (piVar2 == (int *)piVar23[2]))) {
                    cVar6 = *(char *)(piVar23[1] + 0x2d);
                    piVar4 = (int *)piVar23[1];
                    piVar2 = piVar23;
                  }
                }
              }
            }
            else {
              puVar11 = (undefined4 *)FUN_0048f7e0(local_b4,&local_c4,piVar23);
              piVar23 = (int *)*puVar11;
            }
            local_4._0_1_ = 6;
            if (0x14 < local_dc) {
                    /* WARNING: Subroutine does not return */
              _free(local_e4);
            }
          } while (piVar23 != local_b0);
        }
        piVar23 = (int *)*local_b0;
        if (piVar23 != local_b0) {
          do {
            local_4._0_1_ = 6;
            uVar7 = piVar23[4];
            pcVar8 = (char *)piVar23[3];
            local_e4 = local_d8;
            local_d8[0] = 0;
            local_e0 = 0;
            local_dc = 0x14;
            if (0x13 < uVar7) {
              local_dc = uVar7 + 0x20 & 0xffffffe0;
              local_e4 = _malloc(local_dc);
            }
            _strncpy((char *)local_e4,pcVar8,uVar7);
            piVar2 = DAT_010c9fa0;
            local_e4[uVar7] = 0;
            local_4 = CONCAT31(local_4._1_3_,10);
            local_e0 = uVar7;
            if ((DAT_010c9f9c == 0) ||
               ((uint)(DAT_010c9fa4 - DAT_010c9f9c >> 5) <=
                (uint)((int)DAT_010c9fa0 - DAT_010c9f9c >> 5))) {
              FUN_00439fd0(&DAT_010c9f98,DAT_010c9fa0,1,&local_e4);
            }
            else {
              auStack_118[2] = 0xab3913;
              FUN_00439ea0(DAT_010c9fa0,1,&local_e4);
              DAT_010c9fa0 = piVar2 + 8;
            }
            local_4._0_1_ = 6;
            if (0x14 < local_dc) {
                    /* WARNING: Subroutine does not return */
              _free(local_e4);
            }
            if (*(char *)((int)piVar23 + 0x2d) == '\0') {
              piVar2 = (int *)piVar23[2];
              if (*(char *)((int)piVar2 + 0x2d) == '\0') {
                cVar6 = *(char *)(*piVar2 + 0x2d);
                piVar23 = piVar2;
                piVar2 = (int *)*piVar2;
                while (cVar6 == '\0') {
                  cVar6 = *(char *)(*piVar2 + 0x2d);
                  piVar23 = piVar2;
                  piVar2 = (int *)*piVar2;
                }
              }
              else {
                cVar6 = *(char *)(piVar23[1] + 0x2d);
                piVar4 = (int *)piVar23[1];
                piVar2 = piVar23;
                while ((piVar23 = piVar4, cVar6 == '\0' && (piVar2 == (int *)piVar23[2]))) {
                  cVar6 = *(char *)(piVar23[1] + 0x2d);
                  piVar4 = (int *)piVar23[1];
                  piVar2 = piVar23;
                }
              }
            }
          } while (piVar23 != local_b0);
        }
        puVar15 = (uint *)*local_a4;
        if (puVar15 != local_a4) {
          do {
            local_4._0_1_ = 6;
            uVar7 = puVar15[4];
            pcVar8 = (char *)puVar15[3];
            local_e4 = local_d8;
            local_d8[0] = 0;
            local_e0 = 0;
            local_dc = 0x14;
            if (0x13 < uVar7) {
              local_dc = uVar7 + 0x20 & 0xffffffe0;
              local_e4 = _malloc(local_dc);
            }
            _strncpy((char *)local_e4,pcVar8,uVar7);
            piVar23 = DAT_010c9fa0;
            local_e4[uVar7] = 0;
            local_4 = CONCAT31(local_4._1_3_,0xb);
            local_e0 = uVar7;
            if ((DAT_010c9f9c == 0) ||
               ((uint)(DAT_010c9fa4 - DAT_010c9f9c >> 5) <=
                (uint)((int)DAT_010c9fa0 - DAT_010c9f9c >> 5))) {
              FUN_00439fd0(&DAT_010c9f98,DAT_010c9fa0,1,&local_e4);
            }
            else {
              auStack_118[2] = 0xab3a52;
              FUN_00439ea0(DAT_010c9fa0,1,&local_e4);
              DAT_010c9fa0 = piVar23 + 8;
            }
            local_4._0_1_ = 6;
            if (0x14 < local_dc) {
                    /* WARNING: Subroutine does not return */
              _free(local_e4);
            }
            if (*(char *)((int)puVar15 + 0x2d) == '\0') {
              puVar13 = (uint *)puVar15[2];
              if (*(char *)((int)puVar13 + 0x2d) == '\0') {
                cVar6 = *(char *)((int)*puVar13 + 0x2d);
                puVar15 = puVar13;
                puVar13 = (uint *)*puVar13;
                while (cVar6 == '\0') {
                  cVar6 = *(char *)((int)*puVar13 + 0x2d);
                  puVar15 = puVar13;
                  puVar13 = (uint *)*puVar13;
                }
              }
              else {
                cVar6 = *(char *)((int)puVar15[1] + 0x2d);
                puVar5 = (uint *)puVar15[1];
                puVar13 = puVar15;
                while ((puVar15 = puVar5, cVar6 == '\0' && (puVar13 == (uint *)puVar15[2]))) {
                  cVar6 = *(char *)((int)puVar15[1] + 0x2d);
                  puVar5 = (uint *)puVar15[1];
                  puVar13 = puVar15;
                }
              }
            }
          } while (puVar15 != local_a4);
        }
        local_4._0_1_ = 6;
        FUN_00a99740();
        FUN_00a99d60();
        puVar11 = FUN_00a97e00();
        uVar7 = local_e8 + puVar11[1];
        puStack_94 = puVar11;
        local_9c = operator_new(uVar7);
        if (local_9c == (uint *)0x0) {
          puVar21 = &stack0x00000044;
          puVar24 = auStack_118;
          for (iVar16 = 8; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar24 = *puVar21;
            puVar21 = puVar21 + 1;
            puVar24 = puVar24 + 1;
          }
          FID_conflict__wprintf((wchar_t *)"Error writing to file: %s\n");
          _eh_vector_destructor_iterator_(puVar11,0x34,puVar11[-1],FUN_00a9b2f0);
                    /* WARNING: Subroutine does not return */
          _free(puVar11 + -1);
        }
        puVar15 = local_9c;
        for (uVar14 = uVar7 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar15 = 0;
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        pbStack_88 = abStack_7c;
        puVar17 = (undefined1 *)(puStack_94[1] + (int)local_9c);
        local_b8 = 0;
        abStack_7c[0] = 0;
        uStack_84 = 0;
        uStack_80 = 0x14;
        _strncpy((char *)pbStack_88,"",0);
        uStack_84 = 0;
        *pbStack_88 = 0;
        local_4 = CONCAT31(local_4._1_3_,0xc);
        if (DAT_010c9f9c == 0) {
          puVar15 = (uint *)0x0;
        }
        else {
          puVar15 = (uint *)((int)DAT_010c9fa0 - DAT_010c9f9c >> 5);
        }
        if (0 < (int)puVar15) {
          local_e8 = 0;
          local_98 = puVar15;
          do {
            uVar7 = *(uint *)(local_e8 + 4 + DAT_010c9f9c);
            pcVar8 = *(char **)(local_e8 + DAT_010c9f9c);
            if (uStack_80 <= uVar7) {
              if (0x14 < uStack_80) {
                    /* WARNING: Subroutine does not return */
                _free(pbStack_88);
              }
              uStack_80 = uVar7 + 0x20 & 0xffffffe0;
              pbStack_88 = _malloc(uStack_80);
            }
            _strncpy((char *)pbStack_88,pcVar8,uVar7);
            pbStack_88[uVar7] = 0;
            uVar14 = 0;
            uStack_84 = uVar7;
            if (uVar7 != 0) {
              do {
                iVar16 = _tolower((int)(char)pbStack_88[uVar14]);
                pbStack_88[uVar14] = (byte)iVar16;
                uVar14 = uVar14 + 1;
              } while (uVar14 < uStack_84);
            }
            FUN_00ab0060(&local_e4,(char *)pbStack_88);
            local_4 = CONCAT31(local_4._1_3_,0xd);
            FUN_00a9c980((int *)local_90,(char *)local_e4);
            puVar15 = FUN_00a9b5a0(puStack_94,local_90);
            if (puVar15 == (uint *)0x0) {
LAB_00ab3ee5:
            }
            else {
              puVar15[2] = 0;
              puVar15[3] = 0;
              puVar15[4] = 0;
              piStack_68 = FUN_0048f2c0(local_b4,&pbStack_88);
              if (piStack_68 == local_b0) {
LAB_00ab3e47:
                local_c4 = local_b0;
                ppiVar12 = &local_c4;
              }
              else {
                pbVar20 = (byte *)piStack_68[3];
                pbVar9 = pbStack_88;
                do {
                  bVar1 = *pbVar9;
                  bVar25 = bVar1 < *pbVar20;
                  if (bVar1 != *pbVar20) {
LAB_00ab3e35:
                    iVar16 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
                    goto LAB_00ab3e3a;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar9[1];
                  bVar25 = bVar1 < pbVar20[1];
                  if (bVar1 != pbVar20[1]) goto LAB_00ab3e35;
                  pbVar9 = pbVar9 + 2;
                  pbVar20 = pbVar20 + 2;
                } while (bVar1 != 0);
                iVar16 = 0;
LAB_00ab3e3a:
                if (iVar16 < 0) goto LAB_00ab3e47;
                ppiVar12 = &piStack_68;
              }
              if (*ppiVar12 == local_b0) {
                puVar13 = FUN_00a9b5a0(local_bc,local_90);
                puVar11 = local_64;
              }
              else {
                puVar13 = FUN_00a9b5a0(local_c0,local_90);
                puVar11 = local_38;
              }
              if (puVar13 == (uint *)0x0) {
                FID_conflict__wprintf((wchar_t *)"FAILED to find %s\n");
                puVar15[5] = puVar15[5] | 1;
              }
              else {
                iVar16 = FUN_00a10150((FILE *)puVar11[10],puVar13[2],0);
                if (iVar16 != 0) {
                  puVar21 = (undefined4 *)&stack0xfffffee4;
                  for (iVar16 = 8; puVar11 = puVar11 + 1, iVar16 != 0; iVar16 = iVar16 + -1) {
                    *puVar21 = *puVar11;
                    puVar21 = puVar21 + 1;
                  }
                  FID_conflict__wprintf((wchar_t *)"FAILED seek: %s (%s)\n");
                  puVar15[5] = puVar15[5] | 1;
                  goto LAB_00ab3ee5;
                }
                FUN_00a100f0(puVar17,puVar13[3],1,(FILE *)puVar11[10]);
                puVar17 = puVar17 + puVar13[3];
                puVar15[2] = puStack_94[1] + local_b8;
                puVar15[3] = puVar13[3];
                puVar15[4] = puVar13[4];
                local_b8 = local_b8 + puVar13[3];
              }
            }
            local_4 = CONCAT31(local_4._1_3_,0xc);
            if (0x14 < local_dc) {
                    /* WARNING: Subroutine does not return */
              _free(local_e4);
            }
            local_e8 = local_e8 + 0x20;
            local_98 = (uint *)((int)local_98 + -1);
          } while (local_98 != (uint *)0x0);
        }
        FID_conflict__wprintf((wchar_t *)"Written %d bytes to disk\n");
        puVar15 = local_9c;
        uVar7 = (int)puVar17 - (int)local_9c;
        FUN_00a9b440(puStack_94,local_9c);
        FUN_009d4d90(&stack0x00000044,puVar15,uVar7);
                    /* WARNING: Subroutine does not return */
        _free(puVar15);
      }
      if (local_c0 != (void *)0x0) {
        FUN_00a9b2f0((int)local_c0);
                    /* WARNING: Subroutine does not return */
        _free(pvVar3);
      }
    }
    FID_conflict__wprintf((wchar_t *)"Error: can\'t open pak file (%s)\n");
    local_4._0_1_ = 3;
    FUN_00a10740((int)local_64);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00a10740((int)local_38);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  if (in_stack_0000002c < 0x15) {
    if (in_stack_0000004c < 0x15) {
      ExceptionList = local_c;
      return param_3 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000044);
  }
                    /* WARNING: Subroutine does not return */
  _free(in_stack_00000024);
}


//// FUNCTION FUN_00ab4270 @ 00ab4270 ////

uint __cdecl FUN_00ab4270(int param_1,uint *param_2,void *param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *_Memory;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iStack_19c;
  int iStack_194;
  char *pcStack_190;
  uint uStack_188;
  char acStack_184 [20];
  char *pcStack_170;
  uint uStack_16c;
  uint uStack_168;
  char acStack_164 [20];
  uint *puStack_150;
  uint *puStack_14c;
  uint auStack_144 [2];
  undefined1 auStack_13c [304];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cfda44;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  cVar2 = FUN_00a99520();
  if (cVar2 == '\0') {
    FID_conflict__wprintf((wchar_t *)"Couldn\'t open MV::CPak::CLoader\n");
    if (param_5 < 0x15) {
      ExceptionList = local_c;
      return param_5 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  DAT_010b9360 = 0;
  FUN_00a10b50(auStack_13c);
  iVar11 = 0;
  iStack_19c = 0;
  puVar6 = param_2;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      local_4._0_1_ = 1;
      uVar4 = *puVar6;
      pcStack_170 = acStack_164;
      uStack_16c = 0;
      acStack_164[0] = '\0';
      uStack_168 = 0x14;
      puVar9 = puVar6 + 1;
      do {
        uVar10 = *puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
      } while ((char)uVar10 != '\0');
      uVar10 = (int)puVar9 - ((int)puVar6 + 5);
      if (0x13 < uVar10) {
        uStack_168 = uVar10 + 0x20 & 0xffffffe0;
        pcStack_170 = _malloc(uStack_168);
      }
      _strncpy(pcStack_170,(char *)(puVar6 + 1),uVar10);
      pcStack_170[uVar10] = '\0';
      local_4 = CONCAT31(local_4._1_3_,2);
      uStack_16c = uVar10;
      uVar3 = FUN_00ab0150(pcStack_170);
      if ((char)uVar3 != '\0') {
        FUN_0043a2d0(&DAT_010c9f98,&pcStack_170);
      }
      iVar11 = uVar4 + 0x10 + iVar11;
      local_4._0_1_ = 1;
      if (0x14 < uStack_168) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_170);
      }
      iStack_19c = iStack_19c + 1;
      puVar6 = (uint *)((int)puVar6 + uVar4 + uVar10 + 5);
    } while (iStack_19c < *(int *)(param_1 + 0xc));
  }
  local_4._0_1_ = 1;
  if ((DAT_010c9f9c == 0) || (DAT_010c9fa0 - DAT_010c9f9c >> 5 == 0)) {
    FUN_00a990d0();
    FID_conflict__wprintf((wchar_t *)"No loose file to pak!\n");
    local_4 = (uint)local_4._1_3_ << 8;
    uVar4 = FUN_00a10740((int)auStack_13c);
    if (param_5 < 0x15) {
      ExceptionList = local_c;
      return uVar4 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  FUN_00a99740();
  FUN_00a99d60();
  puVar5 = FUN_00a97e00();
  uVar4 = iVar11 + puVar5[1];
  puVar6 = operator_new(uVar4);
  puStack_150 = puVar6;
  if (puVar6 == (uint *)0x0) {
    FUN_00a100d0(DAT_010ca038);
    _eh_vector_destructor_iterator_(puVar5,0x34,puVar5[-1],FUN_00a9b2f0);
                    /* WARNING: Subroutine does not return */
    _free(puVar5 + -1);
  }
  puVar9 = puVar6;
  for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (uint *)((int)puVar9 + 1);
  }
  iVar11 = puVar5[1];
  pcStack_190 = acStack_184;
  acStack_184[0] = '\0';
  uStack_188 = 0x14;
  _strncpy(pcStack_190,"",0);
  acStack_184[0] = '\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  puVar9 = puVar6;
  if (0 < *(int *)(param_1 + 0xc)) {
    iStack_194 = 1;
    do {
      uVar4 = *param_2;
      puVar9 = param_2 + 1;
      puVar7 = puVar9;
      do {
        uVar10 = *puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
      } while ((char)uVar10 != '\0');
      uVar10 = (int)puVar7 - ((int)param_2 + 5);
      if (uStack_188 <= uVar10) {
        if (0x14 < uStack_188) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_190);
        }
        uStack_188 = uVar10 + 0x20 & 0xffffffe0;
        pcStack_190 = _malloc(uStack_188);
      }
      _strncpy(pcStack_190,(char *)puVar9,uVar10);
      pcStack_190[uVar10] = '\0';
      puVar9 = (uint *)(uVar10 + 1 + (int)puVar9);
      puStack_14c = (uint *)((int)puVar9 + uVar4);
      uVar3 = 0;
      if (uVar10 != 0) {
        do {
          iVar8 = _tolower((int)pcStack_190[uVar3]);
          pcStack_190[uVar3] = (char)iVar8;
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar10);
      }
      FUN_00ab0060(&pcStack_170,pcStack_190);
      local_4._0_1_ = 4;
      FUN_00a9c980((int *)auStack_144,pcStack_170);
      puVar7 = FUN_00a9b5a0(puVar5,auStack_144);
      if (puVar7 != (uint *)0x0) {
        FID_conflict__wprintf((wchar_t *)"Writing %s...",pcStack_170);
        _Memory = (undefined4 *)FUN_00afb8b0(puVar9,uVar4);
        uVar10 = FUN_00afb6d0(_Memory);
        puVar7[2] = puVar5[1];
        puVar7[4] = uVar4;
        puVar7[3] = uVar10;
        puVar5 = _Memory;
        puVar12 = (undefined4 *)(iVar11 + (int)puVar6);
        for (uVar4 = uVar10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar12 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0x14 < uStack_168) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_170);
      }
      bVar1 = iStack_194 < *(int *)(param_1 + 0xc);
      param_2 = puStack_14c;
      puVar9 = puStack_150;
      iStack_194 = iStack_194 + 1;
    } while (bVar1);
  }
  FUN_009d9820();
  FUN_00a9b440(puVar5,puVar9);
  FUN_009d4d90(&param_3,puVar9,(iVar11 + (int)puVar6) - (int)puVar9);
                    /* WARNING: Subroutine does not return */
  _free(puVar9);
}


//// FUNCTION FUN_00ab42df @ 00ab42df ////

uint FUN_00ab42df(void)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *_Memory;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *unaff_EDI;
  undefined4 *puVar10;
  undefined4 *puStack00000008;
  int iStack0000000c;
  char *pcStack00000010;
  uint uStack00000014;
  uint uStack00000018;
  char cStack0000001c;
  char *in_stack_00000030;
  uint *in_stack_00000034;
  uint in_stack_00000038;
  char in_stack_0000003c;
  uint *puStack00000050;
  uint *in_stack_00000054;
  void *in_stack_00000194;
  undefined1 uStack0000019c;
  int in_stack_000001a4;
  uint *in_stack_000001a8;
  void *in_stack_000001ac;
  uint in_stack_000001b4;
  
  puVar9 = in_stack_000001a8;
  DAT_010b9360 = unaff_EDI;
  FUN_00a10b50(&stack0x00000064);
  iVar8 = 0;
  puVar3 = unaff_EDI;
  if ((int)unaff_EDI < *(int *)(in_stack_000001a4 + 0xc)) {
    do {
      uStack0000019c = 1;
      uVar4 = *puVar9;
      in_stack_00000030 = &stack0x0000003c;
      in_stack_0000003c = '\0';
      in_stack_00000038 = 0x14;
      puVar6 = puVar9 + 1;
      do {
        uVar7 = *puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
      } while ((char)uVar7 != '\0');
      uVar7 = (int)puVar6 - ((int)puVar9 + 5);
      in_stack_00000034 = unaff_EDI;
      if (0x13 < uVar7) {
        in_stack_00000038 = uVar7 + 0x20 & 0xffffffe0;
        in_stack_00000030 = _malloc(in_stack_00000038);
      }
      _strncpy(in_stack_00000030,(char *)(puVar9 + 1),uVar7);
      in_stack_00000030[uVar7] = '\0';
      uStack0000019c = 2;
      in_stack_00000034 = (uint *)uVar7;
      uVar2 = FUN_00ab0150(in_stack_00000030);
      if ((char)uVar2 != '\0') {
        FUN_0043a2d0(&DAT_010c9f98,&stack0x00000030);
      }
      puVar9 = (uint *)((int)puVar9 + uVar4 + uVar7 + 5);
      iVar8 = uVar4 + 0x10 + iVar8;
      uStack0000019c = 1;
      if (0x14 < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        _free(in_stack_00000030);
      }
      puVar3 = (uint *)((int)puVar3 + 1);
      unaff_EDI = (uint *)0x0;
    } while ((int)puVar3 < *(int *)(in_stack_000001a4 + 0xc));
  }
  uStack0000019c = 1;
  if ((DAT_010c9f9c == unaff_EDI) || ((uint *)(DAT_010c9fa0 - (int)DAT_010c9f9c >> 5) == unaff_EDI))
  {
    FUN_00a990d0();
    FID_conflict__wprintf((wchar_t *)"No loose file to pak!\n");
    uStack0000019c = 0;
    uVar4 = FUN_00a10740((int)&stack0x00000064);
    if (in_stack_000001b4 < 0x15) {
      ExceptionList = in_stack_00000194;
      return uVar4 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    _free(in_stack_000001ac);
  }
  FUN_00a99740();
  FUN_00a99d60();
  puVar5 = FUN_00a97e00();
  uVar4 = iVar8 + puVar5[1];
  puVar9 = operator_new(uVar4);
  puStack00000050 = puVar9;
  if (puVar9 == unaff_EDI) {
    FUN_00a100d0(DAT_010ca038);
    _eh_vector_destructor_iterator_(puVar5,0x34,puVar5[-1],FUN_00a9b2f0);
                    /* WARNING: Subroutine does not return */
    _free(puVar5 + -1);
  }
  puVar3 = puVar9;
  for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  iVar8 = puVar5[1];
  pcStack00000010 = &stack0x0000001c;
  cStack0000001c = '\0';
  uStack00000014 = 0;
  uStack00000018 = 0x14;
  puStack00000008 = (undefined4 *)(iVar8 + (int)puVar9);
  _strncpy(pcStack00000010,"",0);
  uStack00000014 = 0;
  *pcStack00000010 = '\0';
  puVar10 = (undefined4 *)(iVar8 + (int)puVar9);
  if (0 < *(int *)(in_stack_000001a4 + 0xc)) {
    iStack0000000c = 1;
    do {
      uStack0000019c = 3;
      uVar4 = *in_stack_000001a8;
      puVar9 = in_stack_000001a8 + 1;
      puVar3 = puVar9;
      do {
        uVar7 = *puVar3;
        puVar3 = (uint *)((int)puVar3 + 1);
      } while ((char)uVar7 != '\0');
      uVar7 = (int)puVar3 - ((int)in_stack_000001a8 + 5);
      if (uStack00000018 <= uVar7) {
        if (0x14 < uStack00000018) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack00000010);
        }
        uStack00000018 = uVar7 + 0x20 & 0xffffffe0;
        pcStack00000010 = _malloc(uStack00000018);
      }
      _strncpy(pcStack00000010,(char *)puVar9,uVar7);
      pcStack00000010[uVar7] = '\0';
      puVar9 = (uint *)(uVar7 + 1 + (int)puVar9);
      in_stack_00000054 = (uint *)((int)puVar9 + uVar4);
      uVar2 = 0;
      uStack00000014 = uVar7;
      if (uVar7 != 0) {
        do {
          iVar8 = _tolower((int)pcStack00000010[uVar2]);
          pcStack00000010[uVar2] = (char)iVar8;
          uVar2 = uVar2 + 1;
        } while (uVar2 < uStack00000014);
      }
      FUN_00ab0060(&stack0x00000030,pcStack00000010);
      uStack0000019c = 4;
      FUN_00a9c980((int *)&stack0x0000005c,in_stack_00000030);
      puVar3 = FUN_00a9b5a0(puVar5,(uint *)&stack0x0000005c);
      if (puVar3 != (uint *)0x0) {
        FID_conflict__wprintf((wchar_t *)"Writing %s...",in_stack_00000030);
        _Memory = (undefined4 *)FUN_00afb8b0(puVar9,uVar4);
        uVar7 = FUN_00afb6d0(_Memory);
        puVar3[2] = puVar5[1];
        puVar3[4] = uVar4;
        puVar3[3] = uVar7;
        puVar5 = _Memory;
        puVar10 = puStack00000008;
        for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar10 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puStack00000008 = (undefined4 *)((int)puStack00000008 + uVar7);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      uStack0000019c = 3;
      if (0x14 < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        _free(in_stack_00000030);
      }
      bVar1 = iStack0000000c < *(int *)(in_stack_000001a4 + 0xc);
      in_stack_000001a8 = in_stack_00000054;
      puVar9 = puStack00000050;
      puVar10 = puStack00000008;
      iStack0000000c = iStack0000000c + 1;
    } while (bVar1);
  }
  uStack0000019c = 3;
  FUN_009d9820();
  FUN_00a9b440(puVar5,puVar9);
  FUN_009d4d90(&stack0x000001ac,puVar9,(int)puVar10 - (int)puVar9);
                    /* WARNING: Subroutine does not return */
  _free(puVar9);
}


//// FUNCTION FUN_00ab4950 @ 00ab4950 ////

uint __cdecl FUN_00ab4950(char *param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  uint _Count;
  char *_Dest;
  int *piVar5;
  undefined4 uVar6;
  uint _Size;
  uint uVar7;
  uint uVar8;
  int local_1a8 [2];
  uint local_1a0 [8];
  int aiStack_180 [15];
  undefined **local_144 [13];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cfda63;
  local_c = ExceptionList;
  local_4 = 0;
  uVar7 = 0xab4991;
  ExceptionList = &local_c;
  FUN_00aab260(local_1a8,param_1,1,0x1b6,1);
  iVar3 = *(int *)(local_1a8[0] + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((*(uint *)((int)local_1a0 + iVar3) & 6) != 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00aab3a0((int)local_144);
    local_144[0] = &PTR_FUN_00d74f2c;
    uVar7 = FUN_00acc705((ios_base *)local_144);
    if (param_3 < 0x15) {
      ExceptionList = local_c;
      return uVar7 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  if ((*(uint *)((int)local_1a0 + iVar3) & 1) == 0) {
    do {
      bVar2 = FUN_00a18a80((void *)((int)local_1a8 + iVar3),10);
      uVar8 = 0xab4a22;
      FUN_00aaaf10(local_1a8,local_110,0x104,bVar2);
      _Dest = &stack0xfffffe34;
      uVar7 = uVar7 & 0xffffff00;
      pcVar4 = local_110;
      _Size = 0x14;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      _Count = (int)pcVar4 - (int)(local_110 + 1);
      if (0x13 < _Count) {
        _Size = _Count + 0x20 & 0xffffffe0;
        _Dest = _malloc(_Size);
      }
      _strncpy(_Dest,local_110,_Count);
      _Dest[_Count] = '\0';
      FUN_00ab1090(_Dest,_Count,_Size,uVar7,uVar8);
      iVar3 = *(int *)(local_1a8[0] + 4);
    } while ((*(byte *)((int)local_1a0 + iVar3) & 1) == 0);
  }
  piVar5 = FUN_00a1bb20((int *)local_1a0);
  if (piVar5 == (int *)0x0) {
    iVar3 = *(int *)(local_1a8[0] + 4);
    uVar7 = *(uint *)((int)local_1a0 + iVar3) | 2;
    if (*(int *)((int)aiStack_180 + iVar3) == 0) {
      uVar7 = *(uint *)((int)local_1a0 + iVar3) | 6;
    }
    std::ios_base::clear((ios_base *)((int)local_1a8 + iVar3),uVar7,false);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00aab3a0((int)local_144);
  local_144[0] = &PTR_FUN_00d74f2c;
  uVar6 = FUN_00acc705((ios_base *)local_144);
  if (param_3 < 0x15) {
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00ab4b30 @ 00ab4b30 ////

void __cdecl FUN_00ab4b30(char *param_1,size_t param_2,uint param_3)

{
  char *in_stack_00000024;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  size_t sVar4;
  int *local_70;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  size_t local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfda80;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  AllocConsole();
  _freopen("CONOUT$","w+",(FILE *)&DAT_00e99dd0);
  SetConsoleTitleA("Copy Build Files");
  FID_conflict__wprintf((wchar_t *)"The Movies Build Copy\n");
  FID_conflict__wprintf((wchar_t *)"---------------------------------\n\n");
  FID_conflict__wprintf((wchar_t *)"Reading copy data\n");
  local_70 = (int *)&stack0xffffff60;
  pcVar1 = &stack0xffffff6c;
  uVar2 = 0;
  uVar3 = 0x14;
  FUN_004015d0(&stack0xffffff60,in_stack_00000024,in_stack_00000028);
  uVar2 = FUN_00ab4950(pcVar1,uVar2,uVar3);
  if ((char)uVar2 != '\0') {
    local_70 = (int *)*DAT_010ca04c;
    if (local_70 != DAT_010ca04c) {
      do {
        local_4c = local_40;
        local_40[0] = '\0';
        local_48 = 0;
        local_44 = 0x14;
        uVar3 = local_70[4];
        pcVar1 = (char *)local_70[3];
        if (0x13 < uVar3) {
          local_44 = uVar3 + 0x20 & 0xffffffe0;
          local_4c = _malloc(local_44);
        }
        _strncpy(local_4c,pcVar1,uVar3);
        local_4c[uVar3] = '\0';
        local_48 = uVar3;
        FUN_00ab0060(&local_2c,local_4c);
        local_6c = local_60;
        local_60[0] = '\0';
        local_68 = 0;
        local_64 = 0x14;
        _strncpy(local_6c,"",0);
        local_68 = 0;
        sVar4 = 3;
        *local_6c = '\0';
        FUN_004073f0(&local_6c,"C:\\",sVar4);
        FUN_004073f0(&local_6c,param_1,param_2);
        FUN_004073f0(&local_6c,"\\",1);
        FUN_004073f0(&local_6c,local_2c,local_28);
        FID_conflict__wprintf((wchar_t *)"%s [%d/%d]\n");
        FUN_00ab0780(&local_6c);
        CopyFileA(local_4c,local_6c,0);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        FUN_00420690((int *)&local_70);
      } while (local_70 != DAT_010ca04c);
    }
    MessageBoxA((HWND)0x0,"Finished Copying File(s)","Pak File",0);
    FUN_00423710((void *)DAT_010ca04c[1]);
    DAT_010ca04c[1] = (int)DAT_010ca04c;
    DAT_010ca050 = 0;
    *DAT_010ca04c = (int)DAT_010ca04c;
    DAT_010ca04c[2] = (int)DAT_010ca04c;
    FreeConsole();
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  if (in_stack_0000002c < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(in_stack_00000024);
}


//// FUNCTION FUN_00ab4df0 @ 00ab4df0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00ab4df0(void *param_1,undefined4 param_2,uint param_3)

{
  undefined1 *puVar1;
  void *_Memory;
  char cVar2;
  undefined4 *this;
  undefined4 *_Memory_00;
  size_t sVar3;
  undefined4 *puVar4;
  FILE *_File;
  char *pcVar5;
  uint uVar6;
  char *in_stack_00000024;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  undefined4 uVar7;
  uint uVar8;
  undefined1 *local_268;
  undefined1 auStack_264 [4];
  int *piStack_260;
  undefined4 uStack_25c;
  char *pcStack_258;
  uint uStack_254;
  uint uStack_250;
  char acStack_24c [20];
  int *piStack_238;
  char *pcStack_234;
  uint uStack_230;
  uint uStack_22c;
  char acStack_228 [20];
  char acStack_214 [260];
  char acStack_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfdacc;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  AllocConsole();
  _freopen("CONOUT$","w+",(FILE *)&DAT_00e99dd0);
  SetConsoleTitleA("Creating Mega Pack File");
  FID_conflict__wprintf((wchar_t *)"The Movies Pak File Writer\n");
  FID_conflict__wprintf((wchar_t *)"---------------------------------\n\n");
  DAT_010ca040 = 0;
  DAT_010ca044 = 0;
  if (DAT_010ca064 != (undefined4 *)0x0) {
    FUN_00405fe0(DAT_010ca064,DAT_010ca068);
                    /* WARNING: Subroutine does not return */
    _free(DAT_010ca064);
  }
  DAT_010ca064 = (undefined4 *)0x0;
  DAT_010ca068 = (undefined4 *)0x0;
  _DAT_010ca06c = 0;
  FUN_00a10b90();
  cVar2 = FUN_00a99520();
  if (cVar2 == '\0') {
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
  }
  else {
    FID_conflict__wprintf((wchar_t *)"Reading copy data\n");
    local_268 = &stack0xfffffd64;
    pcVar5 = &stack0xfffffd70;
    uVar7 = 0;
    uVar8 = 0x14;
    FUN_004015d0(&stack0xfffffd64,in_stack_00000024,in_stack_00000028);
    uVar7 = FUN_00ab4950(pcVar5,uVar7,uVar8);
    if ((char)uVar7 != '\0') {
      FUN_00ab0cc0();
      FUN_00ab07f0();
      piStack_260 = (int *)FUN_004220b0();
      *(undefined1 *)((int)piStack_260 + 0x31) = 1;
      piStack_260[1] = (int)piStack_260;
      *piStack_260 = (int)piStack_260;
      piStack_260[2] = (int)piStack_260;
      uStack_25c = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      DAT_010ca040 = FUN_00ab12d0(auStack_264);
      FUN_00a60930();
      __getcwd(acStack_110,0x104);
      DAT_010ca044 = 0;
      if (0 < DAT_010ca040) {
        _sprintf(acStack_214,"%s\\%s%s%04d.pak");
        pcStack_258 = acStack_24c;
        pcVar5 = acStack_214;
        acStack_24c[0] = '\0';
        uStack_254 = 0;
        uStack_250 = 0x14;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        uVar8 = (int)pcVar5 - (int)(acStack_214 + 1);
        if (0x13 < uVar8) {
          uStack_250 = uVar8 + 0x20 & 0xffffffe0;
          pcStack_258 = _malloc(uStack_250);
        }
        _strncpy(pcStack_258,acStack_214,uVar8);
        pcStack_258[uVar8] = '\0';
        local_4._0_1_ = 3;
        uStack_254 = uVar8;
        FUN_009b9360(&pcStack_258);
        local_4 = CONCAT31(local_4._1_3_,2);
        if (0x14 < uStack_250) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_258);
        }
        FUN_00a628d0((undefined4 *)acStack_214);
        DAT_010ca038 = FUN_00a10060(acStack_214,"w");
        if (DAT_010ca038 != (FILE *)0x0) {
          local_268 = (undefined1 *)(DAT_010ca044 + 1);
          piStack_238 = (int *)*piStack_260;
          if (piStack_238 != piStack_260) {
            do {
              puVar1 = (undefined1 *)piStack_238[0xb];
              pcStack_234 = acStack_228;
              acStack_228[0] = '\0';
              uStack_230 = 0;
              uStack_22c = 0x14;
              uVar8 = piStack_238[4];
              pcVar5 = (char *)piStack_238[3];
              if (0x13 < uVar8) {
                uStack_22c = uVar8 + 0x20 & 0xffffffe0;
                pcStack_234 = _malloc(uStack_22c);
              }
              _strncpy(pcStack_234,pcVar5,uVar8);
              pcStack_234[uVar8] = '\0';
              local_4._0_1_ = 4;
              uStack_230 = uVar8;
              if (puVar1 == local_268) {
                FUN_0043a2d0(&DAT_010c9f98,&pcStack_234);
              }
              local_4 = CONCAT31(local_4._1_3_,2);
              if (0x14 < uStack_22c) {
                    /* WARNING: Subroutine does not return */
                _free(pcStack_234);
              }
              FUN_00420690((int *)&piStack_238);
            } while (piStack_238 != piStack_260);
          }
          FUN_00a99740();
          FUN_00a99d60();
          this = FUN_00a97e00();
          _Memory_00 = operator_new(this[1]);
          uVar8 = this[1];
          puVar4 = _Memory_00;
          for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          sVar3 = FUN_00a10110(_Memory_00,1,this[1],DAT_010ca038);
          if (sVar3 == this[1]) {
            uVar7 = FUN_00ab1450(&local_268,this);
            if ((char)uVar7 != '\0') {
              FUN_00a10150(DAT_010ca038,0,0);
              FUN_00a9b440(this,_Memory_00);
              FUN_00a10110(_Memory_00,1,this[1],DAT_010ca038);
              FUN_00a100d0(DAT_010ca038);
                    /* WARNING: Subroutine does not return */
              _free(_Memory_00);
            }
            FUN_00a100d0(DAT_010ca038);
                    /* WARNING: Subroutine does not return */
            _free(_Memory_00);
          }
          FUN_00a100d0(DAT_010ca038);
                    /* WARNING: Subroutine does not return */
          _free(_Memory_00);
        }
        DAT_010ca038 = (FILE *)0x0;
      }
      _Memory = *(void **)(DAT_010ca04c + 4);
      if (*(char *)((int)_Memory + 0x31) == '\0') {
        FUN_00423710(*(void **)((int)_Memory + 8));
        if (0x14 < *(uint *)((int)_Memory + 0x14)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)_Memory + 0xc));
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(int *)(DAT_010ca04c + 4) = DAT_010ca04c;
      DAT_010ca050 = 0;
      *(int *)DAT_010ca04c = DAT_010ca04c;
      *(int *)(DAT_010ca04c + 8) = DAT_010ca04c;
      FUN_00a62130();
      FUN_00a990d0();
      FUN_00a10b90();
      if ((DAT_010ca064 != (undefined4 *)0x0) && ((int)DAT_010ca068 - (int)DAT_010ca064 >> 5 != 0))
      {
        pcStack_258 = acStack_24c;
        acStack_24c[0] = '\0';
        uStack_254 = 0;
        uStack_250 = 0x14;
        _strncpy(pcStack_258,"",0);
        uStack_254 = 0;
        *pcStack_258 = '\0';
        local_4 = CONCAT31(local_4._1_3_,5);
        uVar7 = FUN_009d4750(&pcStack_258);
        if ((char)uVar7 != '\0') {
          puVar4 = FUN_00430770(&pcStack_258,&pcStack_234,0,uStack_254 - 4);
          uVar8 = puVar4[1];
          pcVar5 = (char *)*puVar4;
          if (uStack_250 <= uVar8) {
            if (0x14 < uStack_250) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_258);
            }
            uStack_250 = uVar8 + 0x20 & 0xffffffe0;
            pcStack_258 = _malloc(uStack_250);
          }
          _strncpy(pcStack_258,pcVar5,uVar8);
          pcStack_258[uVar8] = '\0';
          uStack_254 = uVar8;
          if (0x14 < uStack_22c) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_234);
          }
          FUN_004073f0(&pcStack_258,".txt",4);
          _File = _fopen(pcStack_258,"w");
          if (_File != (FILE *)0x0) {
            for (uVar8 = 0;
                (DAT_010ca064 != (undefined4 *)0x0 &&
                (uVar8 < (uint)((int)DAT_010ca068 - (int)DAT_010ca064 >> 5))); uVar8 = uVar8 + 1) {
              FID_conflict__fwprintf(_File,"%s\n");
            }
            _fclose(_File);
            ShellExecuteA((HWND)0x0,(LPCSTR)&lpOperation_00d31dc8,pcStack_258,(LPCSTR)0x0,
                          (LPCSTR)0x0,1);
          }
          puVar4 = DAT_010ca064;
          if (DAT_010ca064 != (undefined4 *)0x0) {
            while( true ) {
              if (puVar4 == DAT_010ca068) {
                    /* WARNING: Subroutine does not return */
                _free(DAT_010ca064);
              }
              if (0x14 < (uint)puVar4[2]) break;
              puVar4 = puVar4 + 8;
            }
                    /* WARNING: Subroutine does not return */
            _free((void *)*puVar4);
          }
          DAT_010ca064 = (undefined4 *)0x0;
          DAT_010ca068 = (undefined4 *)0x0;
          _DAT_010ca06c = 0;
        }
        if (0x14 < uStack_250) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_258);
        }
      }
      MessageBoxA((HWND)0x0,"Finished Creating Pak File","Pak File",0);
      FreeConsole();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00423c20(auStack_264,&local_268,(int *)*piStack_260,piStack_260);
                    /* WARNING: Subroutine does not return */
      _free(piStack_260);
    }
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
  }
  if (in_stack_0000002c < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(in_stack_00000024);
}


//// FUNCTION FUN_00ab5640 @ 00ab5640 ////

void __fastcall FUN_00ab5640(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00ab5650 @ 00ab5650 ////

void __fastcall FUN_00ab5650(undefined4 *param_1)

{
  if (0 < DAT_010ca0b0) {
    FID_conflict__wprintf((wchar_t *)s__VarArray__d__d_00e6e4c8,param_1[1],*param_1);
  }
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  return;
}


//// FUNCTION FUN_00ab5690 @ 00ab5690 ////

int __fastcall FUN_00ab5690(uint *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((int)*param_1 <= (int)param_1[1]) {
    uVar3 = (int)(*param_1 * 3 + 0x96) / 2;
    puVar1 = operator_new(uVar3 * 4);
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)param_1[2];
      for (uVar3 = *param_1 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar1 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[2]);
    }
    param_1[2] = (uint)puVar1;
    *param_1 = uVar3;
    if (1 < DAT_010ca0b0) {
      FID_conflict__wprintf((wchar_t *)s_VarArray_extend__d_00e6e4dc,uVar3);
    }
  }
  uVar3 = param_1[1];
  param_1[1] = uVar3 + 1;
  return param_1[2] + uVar3 * 4;
}


//// FUNCTION FUN_00ab5720 @ 00ab5720 ////

int __cdecl FUN_00ab5720(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = param_2 + 1;
  if ((&DAT_00d7bec4)[*param_1] == (&DAT_00d7bec4)[*param_2]) {
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      if (bVar1 == 0) {
        return 0;
      }
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while ((&DAT_00d7bec4)[*param_1] == (&DAT_00d7bec4)[bVar1]);
  }
  return (uint)(byte)(&DAT_00d7bec4)[*param_1] - (uint)(byte)(&DAT_00d7bec4)[pbVar2[-1]];
}


//// FUNCTION FUN_00ab5810 @ 00ab5810 ////

void __fastcall FUN_00ab5810(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_00d7bfd8;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_1 + 1;
  }
  if ((undefined1 *)*puVar1 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)*puVar1);
  }
  return;
}


//// FUNCTION FUN_00ab5840 @ 00ab5840 ////

undefined4 * __thiscall FUN_00ab5840(void *this,byte param_1)

{
  FUN_00ab5810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ab5860 @ 00ab5860 ////

undefined * FUN_00ab5860(void)

{
  return &DAT_00e6e4f4;
}


//// FUNCTION FUN_00ab5870 @ 00ab5870 ////

undefined4 * __cdecl FUN_00ab5870(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint *this;
  uint uVar3;
  char *pcVar4;
  char **ppcVar5;
  char *local_8;
  int local_4;
  
  ppcVar5 = &local_8;
  switch(param_1) {
  case 0:
    puVar2 = operator_new(0x10);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[1] = &DAT_010b9370;
      *puVar2 = &PTR_LAB_00d7c028;
      return puVar2;
    }
    break;
  case 1:
    puVar2 = operator_new(0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[1] = &DAT_010b9370;
      *puVar2 = &PTR_FUN_00d7c000;
      return puVar2;
    }
    break;
  case 2:
    puVar2 = operator_new(0x10);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[1] = &DAT_010b9370;
      *puVar2 = &PTR_FUN_00d7c014;
      return puVar2;
    }
    break;
  case 3:
    puVar2 = operator_new(0x10);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[1] = &DAT_010b9370;
      *puVar2 = &PTR_FUN_00d7bfec;
      return puVar2;
    }
    break;
  default:
    uVar3 = 0xffffffff;
    local_8 = s_current_00e6e504;
    pcVar4 = s_current_00e6e504;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_4 = ~uVar3 - 1;
    this = FUN_00a10f50(&DAT_010ca0d0,(int *)&DAT_00e6dec0);
    FUN_00a10fe0(this,ppcVar5);
    FUN_00abded0((int *)&DAT_010ca0d0);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00ab59a0 @ 00ab59a0 ////

undefined4 * __thiscall FUN_00ab59a0(void *this,byte param_1)

{
  FUN_00ab5810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ab59c0 @ 00ab59c0 ////

undefined4 * __thiscall FUN_00ab59c0(void *this,byte param_1)

{
  FUN_00ab5810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ab59e0 @ 00ab59e0 ////

undefined4 * __thiscall FUN_00ab59e0(void *this,byte param_1)

{
  FUN_00ab5810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ab5a00 @ 00ab5a00 ////

void FUN_00ab5a00(void)

{
  FUN_00ab5870(2);
  return;
}


//// FUNCTION FUN_00ab5a10 @ 00ab5a10 ////

undefined4 * __cdecl FUN_00ab5a10(undefined4 *param_1,void *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint *this;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined **ppuVar7;
  bool bVar8;
  
  pbVar6 = &DAT_00e6e4fc;
  iVar5 = 0;
  ppuVar7 = &PTR_DAT_00d7bfc4;
  pbVar2 = (byte *)*param_1;
LAB_00ab5a2d:
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 == *pbVar6) {
      if (bVar1 != 0) {
        bVar1 = pbVar2[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00ab5a51;
        pbVar6 = pbVar6 + 2;
        pbVar2 = pbVar2 + 2;
        if (bVar1 != 0) goto LAB_00ab5a2d;
      }
      iVar3 = 0;
    }
    else {
LAB_00ab5a51:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (iVar3 == 0) {
      puVar4 = FUN_00ab5870(iVar5);
      return puVar4;
    }
    pbVar6 = ppuVar7[1];
    ppuVar7 = ppuVar7 + 1;
    iVar5 = iVar5 + 1;
    pbVar2 = (byte *)*param_1;
    if (pbVar6 == (byte *)0x0) {
      this = FUN_00a10f50(param_2,(int *)&DAT_00e6dec0);
      FUN_00a10fe0(this,param_1);
      return (undefined4 *)0x0;
    }
  } while( true );
}


//// FUNCTION FUN_00ab5aa0 @ 00ab5aa0 ////

void __fastcall FUN_00ab5aa0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[3] = 0x67452301;
  param_1[4] = 0xefcdab89;
  param_1[5] = 0x98badcfe;
  param_1[6] = 0x10325476;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00ab5ad0 @ 00ab5ad0 ////

void __thiscall FUN_00ab5ad0(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar3 = param_1[1];
  param_1 = (uint *)*param_1;
  iVar1 = *(int *)((int)this + 8);
  uVar2 = *(uint *)this;
  *(uint *)this = uVar2 + uVar3 * 8;
  *(uint *)((int)this + 8) = iVar1 + uVar3 & 0x3f;
  *(uint *)((int)this + 4) = *(int *)((int)this + 4) + (uint)CARRY4(uVar2,uVar3 * 8);
  if (iVar1 != 0) {
    puVar6 = (uint *)(iVar1 + 0x5c + (int)this);
    uVar2 = 0x40 - iVar1;
    if (uVar3 < uVar2) {
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *param_1;
        param_1 = param_1 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)puVar6 = (char)*param_1;
        param_1 = (uint *)((int)param_1 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
      }
      return;
    }
    puVar5 = param_1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar6 = (char)*puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    FUN_00ab5bc0((undefined4 *)((int)this + 0x1c),(undefined4 *)((int)this + 0x5c),0x10);
    FUN_00ab5cf0((int)this);
    param_1 = (uint *)((int)param_1 + uVar2);
    uVar3 = uVar3 - uVar2;
  }
  if (0x3f < uVar3) {
    uVar2 = uVar3 >> 6;
    do {
      FUN_00ab5bc0((undefined4 *)((int)this + 0x1c),param_1,0x10);
      FUN_00ab5cf0((int)this);
      uVar3 = uVar3 - 0x40;
      param_1 = param_1 + 0x10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  puVar6 = (uint *)((int)this + 0x5c);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar6 = (char)*param_1;
    param_1 = (uint *)((int)param_1 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  return;
}


//// FUNCTION FUN_00ab5bc0 @ 00ab5bc0 ////

void __cdecl FUN_00ab5bc0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return;
}


//// FUNCTION FUN_00ab5c00 @ 00ab5c00 ////

void __thiscall FUN_00ab5c00(void *this,undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)((int)this + 8);
  *(undefined1 *)((int)this + iVar3 + 0x5c) = 0x80;
  uVar1 = -*(int *)((int)this + 8) + 0x3f;
  puVar4 = (undefined4 *)((int)this + iVar3 + 0x5d);
  if (uVar1 < 8) {
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_00ab5bc0((undefined4 *)((int)this + 0x1c),(undefined4 *)((int)this + 0x5c),0x10);
    FUN_00ab5cf0((int)this);
    puVar4 = (undefined4 *)((int)this + 0x5c);
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    uVar2 = -*(int *)((int)this + 8) + 0x37;
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  FUN_00ab5bc0((undefined4 *)((int)this + 0x1c),(undefined4 *)((int)this + 0x5c),0xe);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)this;
  uVar5 = __allshr(0x20,*(int *)((int)this + 4));
  *(int *)((int)this + 0x58) = (int)uVar5;
  FUN_00ab5cf0((int)this);
  FUN_00ab5cb0(param_1,(undefined4 *)((int)this + 0xc),4);
  return;
}


//// FUNCTION FUN_00ab5cb0 @ 00ab5cb0 ////

void __cdecl FUN_00ab5cb0(undefined1 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = (char)uVar1;
    param_1[1] = (char)((uint)uVar1 >> 8);
    param_1[2] = (char)((uint)uVar1 >> 0x10);
    param_1[3] = (char)((uint)uVar1 >> 0x18);
    param_1 = param_1 + 4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}


//// FUNCTION FUN_00ab5cf0 @ 00ab5cf0 ////

void __fastcall FUN_00ab5cf0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar1 = *(int *)(param_1 + 0xc) + -0x28955b88 +
          ((uVar6 ^ uVar2) & uVar3 ^ uVar6) + *(int *)(param_1 + 0x1c);
  uVar4 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar3;
  uVar1 = uVar6 + 0xe8c7b756 + ((uVar2 ^ uVar3) & uVar4 ^ uVar2) + *(int *)(param_1 + 0x20);
  uVar5 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar4;
  uVar1 = uVar2 + 0x242070db + ((uVar3 ^ uVar4) & uVar5 ^ uVar3) + *(int *)(param_1 + 0x24);
  uVar6 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar5;
  uVar1 = uVar3 + 0xc1bdceee + ((uVar5 ^ uVar4) & uVar6 ^ uVar4) + *(int *)(param_1 + 0x28);
  uVar6 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar6;
  uVar1 = uVar4 + 0xf57c0faf + ((uVar5 ^ uVar6) & uVar6 ^ uVar5) + *(int *)(param_1 + 0x2c);
  uVar6 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar6;
  uVar1 = uVar5 + 0x4787c62a + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x30);
  uVar6 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar6;
  uVar1 = uVar6 + 0xa8304613 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x34);
  uVar6 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar6;
  uVar1 = uVar6 + 0xfd469501 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x38);
  uVar6 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar6;
  uVar1 = uVar6 + 0x698098d8 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x3c);
  uVar6 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar6;
  uVar1 = uVar6 + 0x8b44f7af + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x40);
  uVar6 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar6;
  uVar1 = (uVar6 - 0xa44f) + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x44);
  uVar6 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar6;
  uVar1 = uVar6 + 0x895cd7be + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x48);
  uVar6 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar6;
  uVar1 = uVar6 + 0x6b901122 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x4c);
  uVar6 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar6;
  uVar1 = uVar6 + 0xfd987193 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x50);
  uVar6 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar6;
  uVar1 = uVar6 + 0xa679438e + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x54);
  uVar6 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar6;
  uVar1 = uVar6 + 0x49b40821 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x58);
  uVar6 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar6;
  uVar1 = uVar6 + 0xf61e2562 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x20);
  uVar6 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar6;
  uVar6 = ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x34) + -0x3fbf4cc0 + uVar6;
  uVar6 = (uVar6 >> 0x17 | uVar6 * 0x200) + uVar6;
  uVar1 = uVar6 + 0x265e5a51 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x48);
  uVar6 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar6;
  uVar1 = uVar6 + 0xe9b6c7aa + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x1c);
  uVar6 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar6;
  uVar1 = uVar6 + 0xd62f105d + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x30);
  uVar6 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar6;
  uVar1 = uVar6 + 0x2441453 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x44);
  uVar6 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar6;
  uVar1 = uVar6 + 0xd8a1e681 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x58);
  uVar6 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar6;
  uVar1 = uVar6 + 0xe7d3fbc8 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x2c);
  uVar6 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar6;
  uVar1 = uVar6 + 0x21e1cde6 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x40);
  uVar6 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar6;
  uVar1 = uVar6 + 0xc33707d6 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x54);
  uVar6 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar6;
  uVar1 = uVar6 + 0xf4d50d87 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x28);
  uVar6 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar6;
  uVar1 = uVar6 + 0x455a14ed + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x3c);
  uVar6 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar6;
  uVar1 = uVar6 + 0xa9e3e905 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x50);
  uVar6 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar6;
  uVar1 = uVar6 + 0xfcefa3f8 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x24);
  uVar6 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar6;
  uVar1 = uVar6 + 0x676f02d9 + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x38);
  uVar6 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar6;
  uVar1 = uVar6 + 0x8d2a4c8a + ((uVar6 ^ uVar6) & uVar6 ^ uVar6) + *(int *)(param_1 + 0x4c);
  uVar6 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar6;
  uVar1 = (uVar6 - 0x5c6be) + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x30);
  uVar6 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar6;
  uVar1 = uVar6 + 0x8771f681 + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x3c);
  uVar6 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar6;
  uVar6 = (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x48) + 0x6d9d6122 + uVar6;
  uVar6 = (uVar6 >> 0x10 | uVar6 * 0x10000) + uVar6;
  uVar1 = uVar6 + 0xfde5380c + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x54);
  uVar6 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar6;
  uVar1 = uVar6 + 0xa4beea44 + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x20);
  uVar6 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar6;
  uVar1 = uVar6 + 0x4bdecfa9 + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x2c);
  uVar6 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar6;
  uVar1 = uVar6 + 0xf6bb4b60 + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x38);
  uVar6 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar6;
  uVar1 = uVar6 + 0xbebfbc70 + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x44);
  uVar6 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar6;
  uVar1 = uVar6 + 0x289b7ec6 + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x50);
  uVar6 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar6;
  uVar1 = uVar6 + 0xeaa127fa + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x1c);
  uVar6 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar6;
  uVar1 = uVar6 + 0xd4ef3085 + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x28);
  uVar6 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar6;
  uVar1 = uVar6 + 0x4881d05 + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x34);
  uVar6 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar6;
  uVar1 = uVar6 + 0xd9d4d039 + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x40);
  uVar6 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar6;
  uVar1 = uVar6 + 0xe6db99e5 + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x4c);
  uVar6 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar6;
  uVar1 = uVar6 + 0x1fa27cf8 + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x58);
  uVar6 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar6;
  uVar1 = uVar6 + 0xc4ac5665 + (uVar6 ^ uVar6 ^ uVar6) + *(int *)(param_1 + 0x24);
  uVar6 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar6;
  uVar1 = uVar6 + 0xf4292244 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x1c);
  uVar6 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar6;
  uVar1 = uVar6 + 0x432aff97 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x38);
  uVar6 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar6;
  uVar1 = uVar6 + 0xab9423a7 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x54);
  uVar6 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar6;
  uVar1 = uVar6 + 0xfc93a039 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x30);
  uVar6 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar6;
  uVar1 = uVar6 + 0x655b59c3 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x4c);
  uVar6 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar6;
  uVar1 = uVar6 + 0x8f0ccc92 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x28);
  uVar6 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar6;
  uVar1 = (uVar6 - 0x100b83) + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x44);
  uVar6 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar6;
  uVar1 = uVar6 + 0x85845dd1 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x20);
  uVar6 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar6;
  uVar1 = uVar6 + 0x6fa87e4f + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x3c);
  uVar6 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar6;
  uVar1 = uVar6 + 0xfe2ce6e0 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x58);
  uVar6 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar6;
  uVar1 = uVar6 + 0xa3014314 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x34);
  uVar6 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar6;
  uVar1 = uVar6 + 0x4e0811a1 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x50);
  uVar6 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar6;
  uVar1 = uVar6 + 0xf7537e82 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x2c);
  uVar6 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar6;
  uVar1 = uVar6 + 0xbd3af235 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x48);
  uVar6 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar6;
  uVar1 = uVar6 + 0x2ad7d2bb + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x24);
  uVar6 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar6;
  uVar1 = uVar6 + 0xeb86d391 + ((~uVar6 | uVar6) ^ uVar6) + *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar6;
  *(uint *)(param_1 + 0x10) = (uVar1 * 0x200000 | uVar1 >> 0xb) + *(int *)(param_1 + 0x10) + uVar6;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar6;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar6;
  return;
}


//// FUNCTION FUN_00ab64e0 @ 00ab64e0 ////

void __thiscall FUN_00ab64e0(void *this,int *param_1)

{
  undefined1 local_10 [16];
  
  FUN_00ab5c00(this,local_10);
  param_1[1] = 0;
  FUN_00a9cf60((int)local_10,0x10,param_1);
  return;
}


//// FUNCTION FUN_00ab6510 @ 00ab6510 ////

int * __thiscall FUN_00ab6510(void *this,int *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    puVar1 = operator_new(0x1028);
    if (puVar1 == (undefined4 *)0x0) {
LAB_00ab65c8:
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00ab7090(puVar1 + 1);
      *puVar1 = &PTR_LAB_00d7c054;
    }
    break;
  case 1:
    puVar1 = operator_new(0x1028);
    if (puVar1 == (undefined4 *)0x0) goto LAB_00ab65c8;
    FUN_00ab7090(puVar1 + 1);
    *puVar1 = &PTR_LAB_00d7c04c;
    break;
  case 2:
    puVar1 = operator_new(0x1028);
    if (puVar1 == (undefined4 *)0x0) goto LAB_00ab65c8;
    FUN_00ab7090(puVar1 + 1);
    *puVar1 = &PTR_LAB_00d7c044;
    break;
  case 3:
    puVar1 = operator_new(0x1028);
    if (puVar1 == (undefined4 *)0x0) goto LAB_00ab65c8;
    FUN_00ab7090(puVar1 + 1);
    *puVar1 = &PTR_LAB_00d7c03c;
    break;
  default:
    goto switchD_00ab6535_default;
  }
  *(undefined4 **)((int)this + 0x10) = puVar1;
switchD_00ab6535_default:
  *(void **)(*(int *)((int)this + 0x10) + 0x1024) = this;
  FUN_00ab70a0((void *)(*(int *)((int)this + 0x10) + 4),param_1,param_3);
  if (*param_3 < 2) {
    FUN_00ab66c0(this);
    *(undefined4 *)(*(int *)this + 4) = 0;
    *(undefined4 *)(*(int *)this + 0xc) = 0;
    (**(code **)(**(int **)((int)this + 0x10) + 4))();
  }
  return this;
}


//// FUNCTION FUN_00ab6630 @ 00ab6630 ////

void __fastcall FUN_00ab6630(undefined4 *param_1)

{
  void *_Memory;
  
  FUN_00ab70e0((int *)(param_1[4] + 4));
  _Memory = (void *)param_1[4];
  if (_Memory != (void *)0x0) {
    FUN_00ab70e0((int *)((int)_Memory + 4));
    FUN_00a10ef0((int)_Memory + 0x14);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00ab6680 @ 00ab6680 ////

void __thiscall FUN_00ab6680(void *this,undefined4 param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 8) <= *(int *)((int)this + 4) + 1) {
    FUN_00ab66c0(this);
  }
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 4) * 8) = param_1;
  *(undefined4 *)(*(int *)this + 0xc + *(int *)((int)this + 4) * 8) = param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


//// FUNCTION FUN_00ab66c0 @ 00ab66c0 ////

void __fastcall FUN_00ab66c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[3];
  param_1[3] = iVar2 + 1;
  if (iVar2 == 0) {
    iVar2 = (*(uint *)(param_1[4] + 0x10) >> 5) + 200;
  }
  else {
    if (iVar2 == 1) {
      param_1[2] = (int)((ulonglong)((*(uint *)(param_1[4] + 0x10) / 10) * 0xd) /
                        ((ulonglong)*(uint *)(*param_1 + 4 + param_1[1] * 8) /
                        (ulonglong)(uint)param_1[1]));
      goto LAB_00ab6719;
    }
    iVar2 = param_1[2] << 1;
  }
  param_1[2] = iVar2;
LAB_00ab6719:
  if ((int *)*param_1 == (int *)0x0) {
    piVar1 = _malloc(param_1[2] << 3);
  }
  else {
    piVar1 = FUN_00ad58c5((int *)*param_1,(uint *)(param_1[2] << 3));
  }
  *param_1 = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    FID_conflict__fwprintf((FILE *)&DAT_00e99df0,s_out_of_memory__00e6e50c);
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  return;
}


//// FUNCTION FUN_00ab6760 @ 00ab6760 ////

void __thiscall
FUN_00ab6760(void *this,int *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (*(int *)((int)this + 4) < param_2) {
    param_2 = *(int *)((int)this + 4);
  }
  iVar1 = *(int *)((int)this + 0x10);
  FUN_00ab7380((void *)(iVar1 + 4),param_3,param_4,
               ((*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 0x20)) - *(int *)(iVar1 + 8)) +
               *(int *)(*(int *)this + 4 + param_2 * 8),param_5);
  iVar1 = *(int *)((int)this + 0x10);
  if (((*(int *)(*(int *)this + 4 + param_2 * 8) - *(int *)(iVar1 + 0x20)) - *(int *)(iVar1 + 8)) +
      *(int *)(iVar1 + 0xc) == 0) {
    *param_1 = param_2;
  }
  return;
}


//// FUNCTION FUN_00ab67d0 @ 00ab67d0 ////

void __thiscall FUN_00ab67d0(void *this,FILE *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  size_t _Count;
  char local_400 [1024];
  
  iVar2 = param_4;
  iVar1 = param_3;
  _Count = FUN_00ab6760(this,&param_2,param_3,local_400,0x400,param_4);
  while (_Count != 0) {
    _fwrite(local_400,1,_Count,param_1);
    _Count = FUN_00ab6760(this,&param_2,iVar1,local_400,0x400,iVar2);
  }
  return;
}


//// FUNCTION FUN_00ab6850 @ 00ab6850 ////

void __thiscall FUN_00ab6850(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_00ab6960(this,(int)local_14,param_1,param_2,param_3,param_4);
  if ((param_1 < local_10) && (param_2 < local_8)) {
    FUN_00ab6850(this,param_1,param_2,local_10,local_8);
  }
  iVar3 = local_10;
  iVar4 = local_8;
  if (local_10 < local_c) {
    do {
      local_10 = iVar3;
      local_8 = iVar4;
      if (iVar3 < local_c) {
        do {
          if ((*(int *)(**(int **)((int)this + 4) + iVar3 * 8) !=
               *(int *)(**(int **)((int)this + 8) + iVar4 * 8)) ||
             (iVar1 = (*(code *)**(undefined4 **)(*(int **)((int)this + 4))[4])
                                (iVar3,*(int **)((int)this + 8),iVar4), iVar1 == 0)) break;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar3 < local_c);
        if (local_10 < iVar3) {
          puVar2 = operator_new(0x14);
          *puVar2 = 0;
          puVar2[1] = local_10;
          puVar2[3] = local_8;
          puVar2[2] = iVar3;
          puVar2[4] = iVar4;
          if (*(int *)((int)this + 0xc) == 0) {
            *(undefined4 **)((int)this + 0x10) = puVar2;
            *(undefined4 **)((int)this + 0xc) = puVar2;
          }
          else {
            **(undefined4 **)((int)this + 0x10) = puVar2;
            *(undefined4 **)((int)this + 0x10) = puVar2;
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar3 < local_c);
  }
  if ((local_c < param_3) && (local_4 < param_4)) {
    FUN_00ab6850(this,local_c,local_4,param_3,param_4);
  }
  return;
}


//// FUNCTION FUN_00ab6960 @ 00ab6960 ////

void __thiscall FUN_00ab6960(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar6 = param_5 - param_3;
  iVar1 = param_4 - param_2;
  uVar2 = iVar1 - iVar6;
  uVar3 = uVar2 & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  *(int *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 4) = param_2;
  **(int **)((int)this + 0x18) = param_2;
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0xc) = param_3;
  iVar4 = *(int *)(param_1 + 8);
  while (((iVar4 < param_4 && (*(int *)(param_1 + 0x10) < param_5)) &&
         (*(int *)(**(int **)((int)this + 4) + iVar4 * 8) ==
          *(int *)(**(int **)((int)this + 8) + *(int *)(param_1 + 0x10) * 8)))) {
    *(int *)(param_1 + 8) = iVar4 + 1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    iVar4 = *(int *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 8) = param_4;
    *(int *)(param_1 + 4) = param_4;
    **(int **)((int)this + 0x20) = param_4;
    *(int *)(param_1 + 0x10) = param_5;
    *(int *)(param_1 + 0xc) = param_5;
    iVar4 = *(int *)(param_1 + 4);
    while (((param_2 < iVar4 && (param_3 < *(int *)(param_1 + 0xc))) &&
           (*(int *)(**(int **)((int)this + 4) + -8 + iVar4 * 8) ==
            *(int *)(**(int **)((int)this + 8) + -8 + *(int *)(param_1 + 0xc) * 8)))) {
      *(int *)(param_1 + 4) = iVar4 + -1;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      iVar4 = *(int *)(param_1 + 4);
    }
    if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
      local_1c = 1;
      if (0 < *(int *)this) {
        local_18 = -1;
        do {
          iVar4 = local_18;
          if (iVar6 < local_1c) {
            iVar4 = local_1c + iVar6 * -2;
          }
          local_20 = local_1c;
          if (iVar1 < local_1c) {
            local_20 = iVar1 * 2 - local_1c;
          }
          iVar9 = -local_20;
          iVar5 = -iVar4;
          if (iVar4 <= local_20) {
            iVar10 = iVar4 * 4;
            iVar11 = iVar4;
            do {
              if ((iVar11 == iVar4) ||
                 ((iVar11 != local_20 &&
                  (*(int *)(iVar10 + -4 + *(int *)((int)this + 0x18)) <
                   *(int *)(iVar10 + 4 + *(int *)((int)this + 0x18)))))) {
                iVar7 = *(int *)(iVar10 + 4 + *(int *)((int)this + 0x18));
              }
              else {
                iVar7 = *(int *)(iVar10 + -4 + *(int *)((int)this + 0x18)) + 1;
              }
              *(int *)(param_1 + 4) = iVar7;
              *(int *)(param_1 + 8) = iVar7;
              *(int *)(param_1 + 0x10) = ((iVar7 - iVar11) - param_2) + param_3;
              iVar7 = *(int *)(param_1 + 8);
              while (((iVar7 < param_4 && (*(int *)(param_1 + 0x10) < param_5)) &&
                     (*(int *)(**(int **)((int)this + 4) + iVar7 * 8) ==
                      *(int *)(**(int **)((int)this + 8) + *(int *)(param_1 + 0x10) * 8)))) {
                *(int *)(param_1 + 8) = iVar7 + 1;
                *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
                iVar7 = *(int *)(param_1 + 8);
              }
              if (uVar3 != 0) {
                iVar7 = local_1c + -1;
                if (iVar1 < iVar7) {
                  iVar8 = iVar7 + iVar1 * -2;
                }
                else {
                  iVar8 = local_18 + 1;
                }
                if (iVar6 < iVar7) {
                  iVar7 = iVar6 * 2 - iVar7;
                }
                if (((iVar8 <= (int)(iVar11 - uVar2)) && ((int)(iVar11 - uVar2) <= iVar7)) &&
                   (*(int *)(iVar10 + uVar2 * -4 + *(int *)((int)this + 0x20)) <=
                    *(int *)(param_1 + 8))) {
                  *(int *)(param_1 + 0xc) = ((*(int *)(param_1 + 4) - iVar11) - param_2) + param_3;
                  return;
                }
              }
              iVar11 = iVar11 + 2;
              *(undefined4 *)(iVar10 + *(int *)((int)this + 0x18)) = *(undefined4 *)(param_1 + 8);
              iVar10 = iVar10 + 8;
            } while (iVar11 <= local_20);
          }
          if (iVar9 <= iVar5) {
            local_28 = (uVar2 + iVar9) * 4;
            iVar10 = iVar9;
            do {
              if ((iVar10 == iVar5) ||
                 ((iVar10 != iVar9 &&
                  (*(int *)(*(int *)((int)this + 0x20) + -4 + iVar10 * 4) <
                   *(int *)(*(int *)((int)this + 0x20) + 4 + iVar10 * 4))))) {
                iVar11 = *(int *)(*(int *)((int)this + 0x20) + -4 + iVar10 * 4);
              }
              else {
                iVar11 = *(int *)(*(int *)((int)this + 0x20) + 4 + iVar10 * 4) + -1;
              }
              *(int *)(param_1 + 8) = iVar11;
              *(int *)(param_1 + 4) = iVar11;
              *(int *)(param_1 + 0xc) = ((iVar11 - iVar10) - param_4) + param_5;
              iVar11 = *(int *)(param_1 + 4);
              while (((param_2 < iVar11 && (param_3 < *(int *)(param_1 + 0xc))) &&
                     (*(int *)(**(int **)((int)this + 4) + -8 + iVar11 * 8) ==
                      *(int *)(**(int **)((int)this + 8) + -8 + *(int *)(param_1 + 0xc) * 8)))) {
                *(int *)(param_1 + 4) = iVar11 + -1;
                *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
                iVar11 = *(int *)(param_1 + 4);
              }
              if (((uVar3 == 0) && (iVar4 <= (int)(uVar2 + iVar10))) &&
                 (((int)(uVar2 + iVar10) <= local_20 &&
                  (*(int *)(param_1 + 4) <= *(int *)(local_28 + *(int *)((int)this + 0x18)))))) {
                *(int *)(param_1 + 0x10) = ((*(int *)(param_1 + 8) - iVar10) - param_4) + param_5;
                return;
              }
              *(undefined4 *)(*(int *)((int)this + 0x20) + iVar10 * 4) =
                   *(undefined4 *)(param_1 + 4);
              iVar10 = iVar10 + 2;
              local_28 = local_28 + 8;
            } while (iVar10 <= iVar5);
          }
          local_1c = local_1c + 1;
          local_18 = local_18 + -1;
        } while (local_1c <= *(int *)this);
      }
      iVar1 = iVar1 / 2 + param_2;
      *(int *)(param_1 + 8) = iVar1;
      *(int *)(param_1 + 4) = iVar1;
      iVar1 = iVar6 / 2 + param_3;
      *(int *)(param_1 + 0x10) = iVar1;
      *(int *)(param_1 + 0xc) = iVar1;
      iVar1 = *(int *)(param_1 + 4);
      while (((param_2 < iVar1 && (param_3 < *(int *)(param_1 + 0xc))) &&
             (*(int *)(**(int **)((int)this + 4) + -8 + iVar1 * 8) ==
              *(int *)(**(int **)((int)this + 8) + -8 + *(int *)(param_1 + 0xc) * 8)))) {
        *(int *)(param_1 + 4) = iVar1 + -1;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        iVar1 = *(int *)(param_1 + 4);
      }
      iVar1 = *(int *)(param_1 + 8);
      while (((iVar1 < param_4 && (*(int *)(param_1 + 0x10) < param_5)) &&
             (*(int *)(**(int **)((int)this + 4) + iVar1 * 8) ==
              *(int *)(**(int **)((int)this + 8) + *(int *)(param_1 + 0x10) * 8)))) {
        *(int *)(param_1 + 8) = iVar1 + 1;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        iVar1 = *(int *)(param_1 + 8);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00ab6de0 @ 00ab6de0 ////

void __fastcall FUN_00ab6de0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 4) != 0)) || (*(int *)(iVar1 + 0xc) != 0)) {
    piVar4 = operator_new(0x14);
    piVar4[4] = 0;
    piVar4[3] = 0;
    piVar4[2] = 0;
    piVar4[1] = 0;
    *piVar4 = iVar1;
    if (iVar1 == 0) {
      *(int **)(param_1 + 0x10) = piVar4;
    }
    *(int **)(param_1 + 0xc) = piVar4;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (((int)puVar2[2] < *(int *)(*(int *)(param_1 + 4) + 4)) ||
     ((int)puVar2[4] < *(int *)(*(int *)(param_1 + 8) + 4))) {
    puVar5 = operator_new(0x14);
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
    puVar5[2] = uVar3;
    puVar5[1] = uVar3;
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
    *puVar5 = 0;
    puVar5[4] = uVar3;
    puVar5[3] = uVar3;
    *puVar2 = puVar5;
    *(undefined4 **)(param_1 + 0x10) = puVar5;
  }
  return;
}


//// FUNCTION FUN_00ab6e70 @ 00ab6e70 ////

void __fastcall FUN_00ab6e70(int param_1)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  _Memory = (undefined4 *)**(undefined4 **)(param_1 + 0xc);
  do {
    if (_Memory == (undefined4 *)0x0) {
      return;
    }
    if ((puVar1[2] == _Memory[1]) || (puVar1[4] == _Memory[3])) {
      while( true ) {
        if ((*(int *)(**(int **)(param_1 + 4) + puVar1[2] * 8) !=
             *(int *)(**(int **)(param_1 + 8) + puVar1[4] * 8)) ||
           (iVar2 = (**(code **)**(undefined4 **)(*(int *)(param_1 + 4) + 0x10))
                              (puVar1[2],*(int **)(param_1 + 8),puVar1[4]), iVar2 == 0)) break;
        puVar1[2] = puVar1[2] + 1;
        puVar1[4] = puVar1[4] + 1;
        iVar2 = _Memory[1];
        _Memory[1] = iVar2 + 1;
        _Memory[3] = _Memory[3] + 1;
        if (((int)_Memory[2] <= iVar2 + 1) && (_Memory != *(undefined4 **)(param_1 + 0x10))) {
          *puVar1 = *_Memory;
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
    }
    puVar1 = _Memory;
    _Memory = (undefined4 *)*_Memory;
  } while( true );
}


//// FUNCTION FUN_00ab6f30 @ 00ab6f30 ////

int * __thiscall FUN_00ab6f30(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  iVar2 = (*(int *)(param_1 + 4) + *(int *)(param_2 + 4)) / 2;
  iVar3 = iVar2;
  if (iVar2 == 0) {
    iVar3 = 1;
  }
  iVar3 = (int)(10000000 / (longlong)iVar3);
  *(int *)this = iVar3;
  if (iVar2 < iVar3) {
    *(int *)this = iVar2;
  }
  if (*(int *)this < 0x2a) {
    *(undefined4 *)this = 0x2a;
  }
  if (*(int *)((int)this + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x14) * -4));
  }
  *(int *)((int)this + 0x14) = *(int *)this;
  pvVar1 = operator_new(*(int *)this * 8 + 4);
  *(void **)((int)this + 0x18) = (void *)((int)pvVar1 + *(int *)((int)this + 0x14) * 4);
  if (*(int *)((int)this + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c) * -4));
  }
  *(int *)((int)this + 0x1c) = *(int *)this;
  pvVar1 = operator_new(*(int *)this * 8 + 4);
  *(void **)((int)this + 0x20) = (void *)((int)pvVar1 + *(int *)((int)this + 0x1c) * 4);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  iVar3 = *(int *)(*(int *)((int)this + 4) + 4);
  if ((0 < iVar3) && (iVar2 = *(int *)(*(int *)((int)this + 8) + 4), 0 < iVar2)) {
    FUN_00ab6850(this,0,0,iVar3,iVar2);
  }
  FUN_00ab6de0((int)this);
  FUN_00ab6e70((int)this);
  return this;
}


//// FUNCTION FUN_00ab7030 @ 00ab7030 ////

void __fastcall FUN_00ab7030(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * -4));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14) * -4));
  }
  return;
}


//// FUNCTION FUN_00ab7090 @ 00ab7090 ////

void __fastcall FUN_00ab7090(undefined4 *param_1)

{
  param_1[6] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00ab70a0 @ 00ab70a0 ////

void __thiscall FUN_00ab70a0(void *this,int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  *(int **)this = param_1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(int *)((int)this + 4) = (int)this + 0x20;
  *(int *)((int)this + 8) = (int)this + 0x20;
  (**(code **)(*param_1 + 0x10))(0,param_2);
  if (*param_2 < 2) {
    uVar1 = (**(code **)(*param_1 + 0x40))();
    *(undefined4 *)((int)this + 0xc) = uVar1;
  }
  return;
}


//// FUNCTION FUN_00ab70e0 @ 00ab70e0 ////

void __fastcall FUN_00ab70e0(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x1c))(param_1 + 4);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00ab7100 @ 00ab7100 ////

void __fastcall FUN_00ab7100(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 8;
  iVar2 = (**(code **)(*(int *)*param_1 + 0x18))(puVar1,0x1000,param_1 + 4);
  if (1 < (int)param_1[4]) {
    iVar2 = 0;
  }
  param_1[1] = puVar1;
  param_1[2] = (int)puVar1 + iVar2;
  param_1[7] = param_1[7] + iVar2;
  return;
}


//// FUNCTION FUN_00ab7140 @ 00ab7140 ////

void __thiscall FUN_00ab7140(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1c) - param_1;
  if ((-1 < iVar1) && (iVar1 <= (*(int *)((int)this + 8) - (int)this) + -0x20)) {
    *(int *)((int)this + 4) = *(int *)((int)this + 8) - iVar1;
    return;
  }
  (**(code **)(**(int **)this + 0x44))(param_1);
  *(int *)((int)this + 0x1c) = param_1;
  *(int *)((int)this + 4) = (int)this + 0x20;
  *(int *)((int)this + 8) = (int)this + 0x20;
  return;
}


//// FUNCTION FUN_00ab7180 @ 00ab7180 ////

int __thiscall FUN_00ab7180(void *this,undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  while ((0 < param_2 &&
         ((param_2 = param_2 + -1, *(uint *)((int)this + 4) < *(uint *)((int)this + 8) ||
          (iVar2 = FUN_00ab7100(this), iVar2 != 0))))) {
    *puVar1 = **(undefined1 **)((int)this + 4);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    puVar1 = puVar1 + 1;
  }
  return (int)puVar1 - (int)param_1;
}


//// FUNCTION FUN_00ab71d0 @ 00ab71d0 ////

int __thiscall FUN_00ab71d0(void *this,char *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar2 = param_1;
  while( true ) {
    pcVar4 = pcVar2;
    if ((param_3 < 1) ||
       ((param_3 = param_3 + -1, *(uint *)((int)this + 8) <= *(uint *)((int)this + 4) &&
        (iVar3 = FUN_00ab7100(this), iVar3 == 0)))) goto LAB_00ab7222;
    pcVar4 = pcVar2 + 1;
    cVar1 = **(char **)((int)this + 4);
    *pcVar2 = cVar1;
    if (cVar1 == param_2) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    pcVar2 = pcVar4;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
LAB_00ab7222:
  return (int)pcVar4 - (int)param_1;
}


//// FUNCTION FUN_00ab72c0 @ 00ab72c0 ////

int __thiscall FUN_00ab72c0(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    if (((*(uint *)((int)this + 8) <= *(uint *)((int)this + 4)) &&
        (iVar1 = FUN_00ab7100(this), iVar1 == 0)) ||
       (((uint)param_1[2] <= (uint)param_1[1] && (iVar1 = FUN_00ab7100(param_1), iVar1 == 0))))
    break;
    iVar1 = (uint)**(byte **)((int)this + 4) - (uint)*(byte *)param_1[1];
    if (iVar1 != 0) {
      return iVar1;
    }
    *(byte **)((int)this + 4) = *(byte **)((int)this + 4) + 1;
    param_1[1] = param_1[1] + 1;
  }
  if (((uint)param_1[1] < (uint)param_1[2]) || (iVar1 = FUN_00ab7100(param_1), iVar1 != 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  if ((*(uint *)((int)this + 8) <= *(uint *)((int)this + 4)) &&
     (iVar2 = FUN_00ab7100(this), iVar2 == 0)) {
    return iVar1 + -1;
  }
  return iVar1;
}


//// FUNCTION FUN_00ab7380 @ 00ab7380 ////

int __thiscall FUN_00ab7380(void *this,char *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  
  if (param_4 == 1) {
    pcVar2 = param_1;
    if (param_3 < param_2) {
      param_2 = param_3;
    }
    while ((param_2 != 0 && (iVar1 = FUN_00ab71d0(this,pcVar2,0xd,param_2), iVar1 != 0))) {
      pcVar2 = pcVar2 + iVar1;
      param_2 = param_2 - iVar1;
      if (pcVar2[-1] == '\r') {
        pcVar2[-1] = '\n';
      }
    }
    return (int)pcVar2 - (int)param_1;
  }
  if ((param_4 < 2) || (pcVar2 = param_1, 3 < param_4)) {
    if (param_3 <= param_2) {
      param_2 = param_3;
    }
    iVar1 = FUN_00ab7180(this,param_1,param_2);
    return iVar1;
  }
  while ((param_2 != 0 && (0 < param_3))) {
    iVar1 = param_2;
    if (param_3 <= param_2) {
      iVar1 = param_3;
    }
    iVar1 = FUN_00ab71d0(this,pcVar2,0xd,iVar1);
    if (iVar1 == 0) break;
    pcVar2 = pcVar2 + iVar1;
    param_2 = param_2 - iVar1;
    param_3 = param_3 - iVar1;
    if ((pcVar2[-1] == '\r') &&
       (((*(uint *)((int)this + 4) < *(uint *)((int)this + 8) ||
         (iVar1 = FUN_00ab7100(this), iVar1 != 0)) && (**(char **)((int)this + 4) == '\n')))) {
      param_3 = param_3 + -1;
      *(char **)((int)this + 4) = *(char **)((int)this + 4) + 1;
      pcVar2[-1] = '\n';
    }
  }
  return (int)pcVar2 - (int)param_1;
}


//// FUNCTION FUN_00ab7480 @ 00ab7480 ////

void * __cdecl FUN_00ab7480(int param_1,int param_2)

{
  void *_Memory;
  int iVar1;
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_10 = &PTR_FUN_00d7c080;
  _Memory = FUN_00ac2570(&local_10,param_1,param_2);
  iVar1 = FUN_00ac24c0((int)&local_10);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_00ac2240(&local_10);
  return _Memory;
}


//// FUNCTION FUN_00ab74f0 @ 00ab74f0 ////

undefined4 * __thiscall FUN_00ab74f0(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ab7510 @ 00ab7510 ////

undefined4 * __fastcall FUN_00ab7510(undefined4 *param_1)

{
  FUN_00a9f380(param_1);
  *param_1 = &PTR_FUN_00d7c0a8;
  if ((int)DAT_00e6e53c < 0) {
    DAT_00e6e53c = FUN_00c9b7e5(0);
    FUN_00c9b7e5(DAT_00e6e53c);
  }
  return param_1;
}


//// FUNCTION FUN_00ab7540 @ 00ab7540 ////

undefined4 * __thiscall FUN_00ab7540(void *this,byte param_1)

{
  FUN_00a9f3d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ab7640 @ 00ab7640 ////

void __cdecl FUN_00ab7640(LPCSTR param_1,LPCSTR param_2)

{
  char cVar1;
  LPCWSTR pWVar2;
  int iVar3;
  LPCWSTR _Memory;
  uint uVar4;
  LPCSTR pCVar5;
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_010c9fc4 == 1) {
    uVar4 = 0xffffffff;
    pCVar5 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pCVar5;
      pCVar5 = pCVar5 + 1;
    } while (cVar1 != '\0');
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_10 = &PTR_FUN_00d7c080;
    pWVar2 = (LPCWSTR)FUN_00ac2670(&local_10,(int)param_1,~uVar4 - 1);
    iVar3 = FUN_00ac24c0((int)&local_10);
    if (iVar3 == 0) {
      uVar4 = 0xffffffff;
      pCVar5 = param_2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pCVar5;
        pCVar5 = pCVar5 + 1;
      } while (cVar1 != '\0');
      _Memory = FUN_00ab7480((int)param_2,~uVar4 - 1);
      if (_Memory != (LPCWSTR)0x0) {
        FUN_00ad5aa0(pWVar2,_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
    FUN_00ac2240(&local_10);
  }
  FUN_00ad5a72(param_1,param_2);
  return;
}


//// FUNCTION FUN_00ab7780 @ 00ab7780 ////

int __cdecl FUN_00ab7780(char *param_1,time_t *param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_010c9fc4 == 1) {
    uVar5 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_10 = &PTR_FUN_00d7c080;
    pwVar2 = (wchar_t *)FUN_00ac2670(&local_10,(int)param_1,~uVar5 - 1);
    iVar3 = FUN_00ac24c0((int)&local_10);
    if (iVar3 == 0) {
      iVar3 = FID_conflict___utime(pwVar2,param_2);
      if (-1 < iVar3) {
LAB_00ab77ef:
        FUN_00ac2240(&local_10);
        return iVar3;
      }
      piVar4 = FUN_00ad4b6c();
      if (*piVar4 != 2) goto LAB_00ab77ef;
    }
    FUN_00ac2240(&local_10);
  }
  iVar3 = FID_conflict___utime(param_1,param_2);
  return iVar3;
}


//// FUNCTION FUN_00ab7820 @ 00ab7820 ////

void __thiscall FUN_00ab7820(void *this,void *param_1)

{
  int _FileHandle;
  
  _FileHandle = FUN_00ab7860(*(char **)((int)this + 0x10),0x201,0x180);
  if (-1 < _FileHandle) {
    __close(_FileHandle);
    return;
  }
  FUN_00a9f950(param_1,s_truncate_00e6e578,*(char **)((int)this + 0x10));
  return;
}


//// FUNCTION FUN_00ab7860 @ 00ab7860 ////

int __cdecl FUN_00ab7860(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  wchar_t *_Filename;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_010c9fc4 == 1) {
    uVar3 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_10 = &PTR_FUN_00d7c080;
    _Filename = (wchar_t *)FUN_00ac2670(&local_10,(int)param_1,~uVar3 - 1);
    iVar2 = FUN_00ac24c0((int)&local_10);
    if (iVar2 == 0) {
      iVar2 = __wopen(_Filename,param_2,param_3);
      FUN_00ac2240(&local_10);
      return iVar2;
    }
    FUN_00ac2240(&local_10);
  }
  iVar2 = __open(param_1,param_2,param_3);
  return iVar2;
}


//// FUNCTION FUN_00ab7960 @ 00ab7960 ////

int __cdecl FUN_00ab7960(uchar *param_1,int *param_2)

{
  uchar uVar1;
  wchar_t *pwVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uchar *puVar6;
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_010c9fc4 == 1) {
    uVar5 = 0xffffffff;
    puVar6 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (uVar1 != '\0');
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_10 = &PTR_FUN_00d7c080;
    pwVar2 = (wchar_t *)FUN_00ac2670(&local_10,(int)param_1,~uVar5 - 1);
    iVar3 = FUN_00ac24c0((int)&local_10);
    if (iVar3 == 0) {
      iVar3 = __wstat(pwVar2,param_2);
      if (-1 < iVar3) {
LAB_00ab79cf:
        FUN_00ac2240(&local_10);
        return iVar3;
      }
      piVar4 = FUN_00ad4b6c();
      if (*piVar4 != 2) goto LAB_00ab79cf;
    }
    FUN_00ac2240(&local_10);
  }
  iVar3 = __stat(param_1,param_2);
  return iVar3;
}


//// FUNCTION FUN_00ab7a80 @ 00ab7a80 ////

int __cdecl FUN_00ab7a80(LPCSTR param_1)

{
  char cVar1;
  LPCWSTR pWVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  LPCSTR pCVar6;
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_010c9fc4 == 1) {
    uVar5 = 0xffffffff;
    pCVar6 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pCVar6;
      pCVar6 = pCVar6 + 1;
    } while (cVar1 != '\0');
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_10 = &PTR_FUN_00d7c080;
    pWVar2 = (LPCWSTR)FUN_00ac2670(&local_10,(int)param_1,~uVar5 - 1);
    iVar3 = FUN_00ac24c0((int)&local_10);
    if (iVar3 == 0) {
      iVar3 = thunk_FUN_00ad3daf(pWVar2);
      if (-1 < iVar3) {
LAB_00ab7af6:
        FUN_00ac2240(&local_10);
        return iVar3;
      }
      piVar4 = FUN_00ad4b6c();
      if (*piVar4 != 2) goto LAB_00ab7af6;
    }
    FUN_00ac2240(&local_10);
  }
  iVar3 = thunk_FUN_00ad30d4(param_1);
  return iVar3;
}


//// FUNCTION FUN_00ab7b20 @ 00ab7b20 ////

int __cdecl FUN_00ab7b20(LPCSTR param_1,byte param_2)

{
  char cVar1;
  LPCWSTR pWVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  LPCSTR pCVar6;
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_010c9fc4 == 1) {
    uVar5 = 0xffffffff;
    pCVar6 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pCVar6;
      pCVar6 = pCVar6 + 1;
    } while (cVar1 != '\0');
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_10 = &PTR_FUN_00d7c080;
    pWVar2 = (LPCWSTR)FUN_00ac2670(&local_10,(int)param_1,~uVar5 - 1);
    iVar3 = FUN_00ac24c0((int)&local_10);
    if (iVar3 == 0) {
      iVar3 = FUN_00ad3093(pWVar2,param_2);
      if (-1 < iVar3) {
LAB_00ab7b8f:
        FUN_00ac2240(&local_10);
        return iVar3;
      }
      piVar4 = FUN_00ad4b6c();
      if (*piVar4 != 2) goto LAB_00ab7b8f;
    }
    FUN_00ac2240(&local_10);
  }
  iVar3 = FUN_00ad3052(param_1,param_2);
  return iVar3;
}


//// FUNCTION FUN_00ab7ca0 @ 00ab7ca0 ////

void __fastcall FUN_00ab7ca0(int *param_1)

{
  *param_1 = (int)&PTR_FUN_00d7b0ec;
  FUN_00a9f400(param_1);
  FUN_00a9f3d0(param_1);
  return;
}


//// FUNCTION FUN_00ab7cc0 @ 00ab7cc0 ////

void __thiscall FUN_00ab7cc0(void *this,int param_1,void *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
  *(int *)((int)this + 4) = param_1;
  uVar3 = *(uint *)(&DAT_00d7c064 + param_1 * 0x10);
  if ((*(byte *)((int)this + 0x1c) & 0x20) != 0) {
    uVar3 = uVar3 | 0x400;
  }
  pcVar1 = *(char **)((int)this + 0x10);
  if ((*pcVar1 == '-') && (pcVar1[1] == '\0')) {
    if (param_1 == 1) {
      _fflush((FILE *)&DAT_00e99dd0);
    }
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(&DAT_00d7c06c + param_1 * 0x10);
    return;
  }
  iVar2 = FUN_00ab7860(pcVar1,uVar3,0x180);
  *(int *)((int)this + 0x24) = iVar2;
  if (iVar2 < 0) {
    FUN_00a9f950(param_2,(&PTR_s_open_for_read_00d7c060)[param_1 * 4],*(char **)((int)this + 0x10));
  }
  return;
}


//// FUNCTION FUN_00ab7d50 @ 00ab7d50 ////

void __thiscall FUN_00ab7d50(void *this,void *param_1)

{
  int iVar1;
  
  if (1 < *(int *)((int)this + 0x24)) {
    iVar1 = __close(*(int *)((int)this + 0x24));
    if (iVar1 < 0) {
      FUN_00a9f950(param_1,s_close_00e6e594,*(char **)((int)this + 0x10));
    }
    *(undefined4 *)((int)this + 0x24) = 0xffffffff;
    if (*(int *)((int)this + 4) == 1) {
      if (*(int *)((int)this + 0xc) != 0) {
        (**(code **)(*(int *)this + 0x48))(*(int *)((int)this + 0xc),param_1);
      }
      if (*(int *)((int)this + 4) == 1) {
        (**(code **)(*(int *)this + 0x34))(*(undefined4 *)((int)this + 8),param_1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00ab7dc0 @ 00ab7dc0 ////

void __thiscall FUN_00ab7dc0(void *this,void *param_1,uint param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = __write(*(int *)((int)this + 0x24),param_1,param_2);
  if (iVar1 < 0) {
    FUN_00a9f950(param_3,s_write_00e6dbf0,*(char **)((int)this + 0x10));
  }
  return;
}


//// FUNCTION FUN_00ab7e00 @ 00ab7e00 ////

int __thiscall FUN_00ab7e00(void *this,void *param_1,uint param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = __read(*(int *)((int)this + 0x24),param_1,param_2);
  if (iVar1 < 0) {
    FUN_00a9f950(param_3,&DAT_00e6e59c,*(char **)((int)this + 0x10));
  }
  return iVar1;
}


//// FUNCTION FUN_00ab7e40 @ 00ab7e40 ////

long __fastcall FUN_00ab7e40(int param_1)

{
  long _Offset;
  long lVar1;
  
  _Offset = __lseek(*(int *)(param_1 + 0x24),0,1);
  lVar1 = __lseek(*(int *)(param_1 + 0x24),0,2);
  __lseek(*(int *)(param_1 + 0x24),_Offset,0);
  return lVar1;
}


//// FUNCTION FUN_00ab7ec0 @ 00ab7ec0 ////

void __thiscall FUN_00ab7ec0(void *this,void *param_1)

{
  FUN_00ab7dc0(this,(void *)((int)this + 0x38),*(uint *)((int)this + 0x30),param_1);
  *(undefined4 *)((int)this + 0x30) = 0;
  return;
}


//// FUNCTION FUN_00ab7ef0 @ 00ab7ef0 ////

void __thiscall FUN_00ab7ef0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x30);
  while ((iVar1 != 0 && (*param_1 < 2))) {
    (**(code **)(*(int *)this + 0x4c))(param_1);
    iVar1 = *(int *)((int)this + 0x30);
  }
  FUN_00ab7d50(this,param_1);
  return;
}


//// FUNCTION FUN_00ab8060 @ 00ab8060 ////

void __thiscall FUN_00ab8060(void *this,void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ab7e00(this,(void *)((int)this + 0x38),0x1000,param_1);
  *(int *)((int)this + 0x2c) = iVar1;
  return;
}


//// FUNCTION FUN_00ab84c0 @ 00ab84c0 ////

void __thiscall FUN_00ab84c0(void *this,void *param_1,uint param_2,void *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00ac38a0(*(int *)((int)this + 0x24),2);
  if ((int)uVar1 < 0) {
    FUN_00a9f950(param_3,&DAT_00e6e5ac,*(char **)((int)this + 0x10));
    return;
  }
  FUN_00ab7dc0(this,param_1,param_2,param_3);
  uVar1 = FUN_00ac38a0(*(int *)((int)this + 0x24),0);
  if ((int)uVar1 < 0) {
    FUN_00a9f950(param_3,s_unlock_00e6e5a4,*(char **)((int)this + 0x10));
  }
  return;
}


//// FUNCTION FUN_00ab8570 @ 00ab8570 ////

void __fastcall FUN_00ab8570(int *param_1)

{
  *param_1 = (int)&PTR_FUN_00d7b1d8;
  FUN_00a9f400(param_1);
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
  }
  FUN_00ab7ca0(param_1);
  return;
}


//// FUNCTION FUN_00ab85a0 @ 00ab85a0 ////

void __thiscall FUN_00ab85a0(void *this,int param_1,void *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1014);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00ac3940(puVar1);
    *puVar1 = &PTR_FUN_00d7c0f4;
  }
  *(undefined4 **)((int)this + 0x28) = puVar1;
  puVar1[0x404] = this;
  FUN_00ab7cc0(this,param_1,param_2);
  return;
}


//// FUNCTION FUN_00ab85f0 @ 00ab85f0 ////

undefined4 * __thiscall FUN_00ab85f0(void *this,byte param_1)

{
  FUN_00ac39a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ab8650 @ 00ab8650 ////

void __thiscall FUN_00ab8650(void *this,int *param_1)

{
  if ((*(void **)((int)this + 0x28) != (void *)0x0) && (*(int *)((int)this + 4) == 1)) {
    FUN_00ac39e0(*(void **)((int)this + 0x28),(byte *)0x0,0,param_1);
  }
  if (*(undefined4 **)((int)this + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x28))(1);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  FUN_00ab7d50(this,param_1);
  return;
}


//// FUNCTION FUN_00ab8690 @ 00ab8690 ////

undefined4 * __fastcall FUN_00ab8690(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_00ab7510(param_1);
  *param_1 = &PTR_FUN_00d7c100;
  pvVar1 = operator_new(0x38);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00ac3e20((int)pvVar1);
  }
  param_1[9] = uVar2;
  puVar3 = operator_new(0x30);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00ac4240(puVar3);
  }
  param_1[10] = puVar3;
  puVar3 = operator_new(0x28);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00ab7510(puVar3);
    *puVar3 = &PTR_FUN_00d7b0ec;
    puVar3[9] = 0xffffffff;
  }
  param_1[0xd] = puVar3;
  puVar3 = operator_new(0x28);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00ab7510(puVar3);
    *puVar3 = &PTR_FUN_00d7b0ec;
    puVar3[9] = 0xffffffff;
    param_1[0xc] = puVar3;
    param_1[0xb] = 0;
    return param_1;
  }
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  return param_1;
}


//// FUNCTION FUN_00ab8750 @ 00ab8750 ////

int * __thiscall FUN_00ab8750(void *this,byte param_1)

{
  FUN_00ab8770(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ab8770 @ 00ab8770 ////

void __fastcall FUN_00ab8770(int *param_1)

{
  void *_Memory;
  
  *param_1 = (int)&PTR_FUN_00d7c100;
  FUN_00a9f400(param_1);
  _Memory = (void *)param_1[9];
  if (_Memory == (void *)0x0) {
    if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[10])(1);
    }
    if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xd])(1);
    }
    if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xc])(1);
    }
    if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xb])(1);
    }
    FUN_00a9f3d0(param_1);
    return;
  }
  if (*(undefined1 **)((int)_Memory + 0x18) != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(*(undefined1 **)((int)_Memory + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00ab88d0 @ 00ab88d0 ////

int __fastcall FUN_00ab88d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x24))();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x34) + 0x24))();
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}


//// FUNCTION FUN_00ab88f0 @ 00ab88f0 ////

void __thiscall FUN_00ab88f0(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x30) + 0x28))(param_1);
  (**(code **)(**(int **)((int)this + 0x34) + 0x28))(param_1);
  return;
}


//// FUNCTION FUN_00ab8910 @ 00ab8910 ////

void __thiscall FUN_00ab8910(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0x30) + 0x34))(param_1,param_2);
  (**(code **)(**(int **)((int)this + 0x34) + 0x34))(param_1,param_2);
  return;
}


//// FUNCTION FUN_00ab8940 @ 00ab8940 ////

void __thiscall FUN_00ab8940(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0x30) + 0x48))(param_1,param_2);
  (**(code **)(**(int **)((int)this + 0x34) + 0x48))(param_1,param_2);
  return;
}


//// FUNCTION FUN_00ab8970 @ 00ab8970 ////

void __thiscall FUN_00ab8970(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x30) + 0x2c))(param_1);
  (**(code **)(**(int **)((int)this + 0x34) + 0x2c))(param_1);
  return;
}


//// FUNCTION FUN_00ab8990 @ 00ab8990 ////

void __thiscall FUN_00ab8990(void *this,int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0x30) + 0x30))(*(undefined4 *)(param_1 + 0x30),param_2);
  (**(code **)(**(int **)((int)this + 0x34) + 0x30))(*(undefined4 *)(param_1 + 0x34),param_2);
  return;
}


//// FUNCTION FUN_00ab8bc0 @ 00ab8bc0 ////

undefined4 * __thiscall FUN_00ab8bc0(void *this,byte param_1)

{
  FUN_00ac3df0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ab8cc0 @ 00ab8cc0 ////

uint __cdecl FUN_00ab8cc0(int *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    if (param_1[1] < 1) {
      bVar1 = 0;
    }
    else {
      bVar1 = *(char *)*param_1 - (((*(char *)*param_1 < ':') - 1U & 7) + 0x30);
    }
    if (param_1[1] < 2) {
      cVar2 = '\0';
    }
    else {
      cVar2 = *(char *)(*param_1 + 1) - (((*(char *)(*param_1 + 1) < ':') - 1U & 7) + 0x30);
    }
    switch(bVar1 & 0xfd) {
    case 0:
      uVar3 = 1;
      break;
    default:
      uVar3 = 2;
      break;
    case 4:
      uVar3 = 6;
      break;
    case 5:
      uVar3 = 7;
      break;
    case 8:
      uVar3 = 0xc;
      break;
    case 9:
      uVar3 = 0x1001;
      break;
    case 0xc:
      uVar3 = 0x201;
      break;
    case 0xd:
      uVar3 = 0x202;
    }
    if ((bVar1 & 2) != 0) {
      uVar3 = uVar3 | 0x100;
    }
    if ((uVar3 & 0xf000) == 0) {
      switch(cVar2) {
      case '\x01':
        return uVar3 | 0x1000;
      case '\x02':
        return uVar3 | 0x2000;
      case '\x03':
        return uVar3 | 0x3000;
      case '\x04':
        uVar3 = uVar3 | 0x4000;
      }
    }
    return uVar3;
  }
  return 1;
}


//// FUNCTION FUN_00ab8dd0 @ 00ab8dd0 ////

void __thiscall FUN_00ab8dd0(void *this,int *param_1)

{
  if (1 < *param_1) {
    *(int *)((int)this + 0xe8) = *(int *)((int)this + 0xe8) + 1;
    (**(code **)(**(int **)((int)this + *(int *)((int)this + 0xcc) * 4 + 0xbc) + 8))(param_1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00ab9160 @ 00ab9160 ////

undefined4 * __thiscall FUN_00ab9160(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00d7cc68;
  if (*(undefined4 **)((int)this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0xc))(1);
  }
  if (*(undefined4 **)((int)this + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x10))(1);
  }
  if (*(undefined1 **)((int)this + 0x24) != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(*(undefined1 **)((int)this + 0x24));
  }
  if (*(undefined1 **)((int)this + 0x18) != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(*(undefined1 **)((int)this + 0x18));
  }
  FUN_00abad10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ab91d0 @ 00ab91d0 ////

int * __cdecl FUN_00ab91d0(void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar2 = FUN_00a12cc0(*(void **)((int)param_1 + 0xa8),&DAT_00e6edcc);
  piVar3 = (int *)FUN_00a12c90(param_1,&DAT_00e6edd4);
  if (1 < *param_2) {
    return (int *)0x0;
  }
  iVar1 = **(int **)((int)param_1 + *(int *)((int)param_1 + 0xcc) * 4 + 0xbc);
  uVar4 = FUN_00ab8cc0(piVar3);
  piVar3 = (int *)(**(code **)(iVar1 + 0x40))(uVar4);
  (**(code **)(*piVar3 + 4))(iVar2);
  return piVar3;
}


//// FUNCTION FUN_00ab9240 @ 00ab9240 ////

void __cdecl FUN_00ab9240(void *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_00a12cc0(param_1,s_handle_00e6edc4);
  puVar2 = (undefined4 *)FUN_00a12cc0(param_1,&DAT_00e6eddc);
  if (*param_2 < 2) {
    iVar3 = FUN_00abae70((void *)((int)param_1 + 0x54),puVar1,param_2);
    if ((*param_2 < 2) && (*(int *)(iVar3 + 8) == 0)) {
      (**(code **)(**(int **)(iVar3 + 0xc) + 0x14))(*puVar2,puVar2[1],param_2);
      if (1 < *param_2) {
        *(undefined4 *)(iVar3 + 8) = 1;
      }
      FUN_00ab8dd0(param_1,param_2);
    }
  }
  return;
}


//// FUNCTION FUN_00ab92c0 @ 00ab92c0 ////

void __cdecl FUN_00ab92c0(void *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)FUN_00a12cc0(param_1,s_handle_00e6edc4);
  iVar2 = FUN_00a12c90(param_1,s_commit_00e6ede4);
  if (1 < *param_2) {
    return;
  }
  puVar1 = (undefined4 *)FUN_00abae70((void *)((int)param_1 + 0x54),puVar1,param_2);
  if (1 < *param_2) {
    return;
  }
  if ((int *)puVar1[3] != (int *)0x0) {
    (**(code **)(*(int *)puVar1[3] + 0x1c))(param_2);
  }
  if (*param_2 < 2) {
    if (puVar1[2] == 0) {
      if (puVar1[5] == 0) {
        if (iVar2 != 0) {
          if (puVar1[4] == 0) {
            ((int *)puVar1[3])[8] = 0;
          }
          else {
            (**(code **)(*(int *)puVar1[3] + 0x30))(puVar1[4],param_2);
            if (1 < *param_2) goto LAB_00ab93b7;
            *(undefined4 *)(puVar1[3] + 0x20) = 0;
          }
        }
      }
      else {
        piVar3 = (int *)(**(code **)(**(int **)((int)param_1 +
                                               *(int *)((int)param_1 + 0xcc) * 4 + 0xbc) + 0x40))
                                  (*(undefined4 *)(puVar1[3] + 0x1c));
        (**(code **)(*piVar3 + 4))(puVar1 + 6);
        (**(code **)(**(int **)((int)param_1 + *(int *)((int)param_1 + 0xcc) * 4 + 0xbc) + 0x30))
                  (puVar1[3],piVar3,0,puVar1[9],param_2);
        if (piVar3 != (int *)0x0) {
          (**(code **)*piVar3)(1);
        }
      }
    }
    if (*param_2 < 2) goto LAB_00ab93be;
  }
LAB_00ab93b7:
  puVar1[2] = 1;
LAB_00ab93be:
  FUN_00ab8dd0(param_1,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}


//// FUNCTION FUN_00ab9530 @ 00ab9530 ////

undefined4 * __thiscall FUN_00ab9530(void *this,byte param_1)

{
  FUN_00abad10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ab9550 @ 00ab9550 ////

void __cdecl FUN_00ab9550(void *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *this;
  long lVar3;
  
  FUN_00aa00f0((int)param_1);
  FUN_00a12cc0(*(void **)((int)param_1 + 0xa8),&DAT_00e6edcc);
  puVar1 = (undefined4 *)FUN_00a12cc0(param_1,s_perms_00e6eda8);
  FUN_00a12c90(param_1,&DAT_00e6edd4);
  puVar2 = (undefined4 *)FUN_00a12c90(param_1,&DAT_00e6edbc);
  if ((*param_2 < 2) || (*param_2 == 4)) {
    this = FUN_00ab91d0(param_1,param_2);
    if (1 < *param_2) {
      return;
    }
    if (puVar2 != (undefined4 *)0x0) {
      lVar3 = _atol((char *)*puVar2);
      this[3] = lVar3;
      (**(code **)(*this + 0x38))(param_2);
    }
    if (*param_2 < 2) {
      FUN_00a9f740(this,(byte *)*puVar1,param_2);
    }
    if (this != (int *)0x0) {
      (**(code **)*this)(1);
    }
  }
  FUN_00ab8dd0(param_1,param_2);
  return;
}


//// FUNCTION FUN_00ab9be0 @ 00ab9be0 ////

void __cdecl FUN_00ab9be0(void *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)FUN_00a12cc0(param_1,s_handle_00e6edc4);
  iVar2 = FUN_00a12cc0(param_1,&DAT_00e6eddc);
  uVar3 = FUN_00a12c90(param_1,&DAT_00e6eeb4);
  if (*param_2 < 2) {
    piVar4 = (int *)FUN_00abae70((void *)((int)param_1 + 0x54),puVar1,param_2);
    if ((*param_2 < 2) && (piVar4[2] == 0)) {
      (**(code **)(*piVar4 + 0x40))(iVar2,uVar3,param_2);
      if (1 < *param_2) {
        piVar4[2] = 1;
      }
      FUN_00ab8dd0(param_1,param_2);
    }
  }
  return;
}


//// FUNCTION FUN_00aba700 @ 00aba700 ////

void __cdecl FUN_00aba700(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  FUN_00aa00f0(param_1);
  puVar1 = (undefined4 *)FUN_00a12cc0(*(void **)(param_1 + 0xa4),&DAT_00e6eddc);
  if (*param_2 < 2) {
    (**(code **)(**(int **)(param_1 + 0xbc + *(int *)(param_1 + 0xcc) * 4) + 0x28))(*puVar1,param_2)
    ;
  }
  return;
}


//// FUNCTION FUN_00aba9d0 @ 00aba9d0 ////

void __cdecl FUN_00aba9d0(void *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00a12cc0(param_1,&DAT_00e6eddc);
  if (*param_2 < 2) {
    (**(code **)(**(int **)((int)param_1 + *(int *)((int)param_1 + 0xcc) * 4 + 0xbc) + 0x18))
              (*puVar1,puVar1[1]);
  }
  return;
}


//// FUNCTION FUN_00abaa10 @ 00abaa10 ////

void __cdecl FUN_00abaa10(int param_1)

{
  FUN_00aa00f0(param_1);
  (**(code **)(**(int **)(param_1 + 0xbc + *(int *)(param_1 + 0xcc) * 4) + 0x20))
            (*(undefined4 *)(param_1 + 0xa4));
  return;
}


//// FUNCTION FUN_00abaa40 @ 00abaa40 ////

void __cdecl FUN_00abaa40(void *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)FUN_00a12cc0(param_1,s_confirm_00e6ee50);
  puVar2 = (undefined4 *)FUN_00a12c90(param_1,s_decline_00e6ef38);
  puVar3 = (undefined4 *)FUN_00a12c90(param_1,s_handle_00e6edc4);
  if (*param_2 < 2) {
    if (puVar3 != (undefined4 *)0x0) {
      iVar4 = FUN_00abaee0((void *)((int)param_1 + 0x54),puVar3);
      if (iVar4 != 0) {
        puVar1 = puVar2;
      }
    }
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00aa00c0(param_1,puVar1);
    }
  }
  return;
}


//// FUNCTION FUN_00abac50 @ 00abac50 ////

void __cdecl FUN_00abac50(void *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_00a12c90(param_1,"xfiles");
  if (puVar1 != (undefined4 *)0x0) {
    lVar2 = _atol((char *)*puVar1);
    *(long *)((int)param_1 + 0xac) = lVar2;
  }
  puVar1 = (undefined4 *)FUN_00a12c90(param_1,"server2");
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00a12c90(param_1,"server");
    if (puVar1 == (undefined4 *)0x0) goto LAB_00abaca7;
  }
  lVar2 = _atol((char *)*puVar1);
  *(long *)((int)param_1 + 0xb0) = lVar2;
LAB_00abaca7:
  iVar3 = FUN_00a12c90(param_1,"nocase");
  *(uint *)((int)param_1 + 0xb4) = (uint)(iVar3 != 0);
  return;
}


//// FUNCTION FUN_00abad10 @ 00abad10 ////

void __fastcall FUN_00abad10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7cc6c;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    if (0 < DAT_010ca098) {
      FID_conflict__wprintf((wchar_t *)s_finish_handle__s_00e6ef74,*(undefined4 *)param_1[1]);
    }
    *(undefined4 *)(param_1[1] + 0x10) = 0;
    *(uint *)(param_1[1] + 0xc) = *(uint *)(param_1[1] + 0xc) | param_1[2];
  }
  return;
}


//// FUNCTION FUN_00abad50 @ 00abad50 ////

void __fastcall FUN_00abad50(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 3;
  puVar1 = param_1 + 1;
  do {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = &DAT_010b9370;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00abad80 @ 00abad80 ////

void __fastcall FUN_00abad80(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      puVar2 = (undefined4 *)piVar3[5];
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 5;
    } while (iVar4 < *param_1);
  }
  piVar3 = param_1 + 0x10;
  iVar4 = 3;
  do {
    piVar1 = piVar3 + -5;
    piVar3 = piVar3 + -5;
    if ((undefined1 *)*piVar1 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
      _free((undefined1 *)*piVar1);
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


//// FUNCTION FUN_00abadd0 @ 00abadd0 ////

void __thiscall FUN_00abadd0(void *this,undefined4 *param_1,int param_2,void *param_3)

{
  void *this_00;
  int iVar1;
  uint *this_01;
  int *piVar2;
  int iVar3;
  
  if (0 < DAT_010ca098) {
    FID_conflict__wprintf((wchar_t *)s_set_handle__s_00e6ef88,*param_1);
  }
  iVar1 = *(int *)this;
  iVar3 = 0;
  piVar2 = this;
  if (0 < iVar1) {
    do {
      if (piVar2[5] == 0) break;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 5;
    } while (iVar3 < iVar1);
  }
  if (iVar3 == iVar1) {
    if (iVar3 == 3) {
      this_01 = FUN_00a10f50(param_3,(int *)&DAT_00e6e648);
      FUN_00a10fe0(this_01,param_1);
      return;
    }
    *(int *)this = iVar1 + 1;
    *(undefined4 *)((int)this + iVar3 * 0x14 + 0x10) = 0;
  }
  this_00 = (void *)((int)this + iVar3 * 0x14 + 4);
  *(undefined4 *)((int)this_00 + 4) = 0;
  FUN_00a10df0(this_00,param_1);
  *(int *)((int)this + (iVar3 * 5 + 5) * 4) = param_2;
  *(void **)(param_2 + 4) = this_00;
  *(int *)((int)this_00 + 0x10) = param_2;
  return;
}


//// FUNCTION FUN_00abae70 @ 00abae70 ////

int __thiscall FUN_00abae70(void *this,undefined4 *param_1,void *param_2)

{
  int *piVar1;
  uint *this_00;
  
  if (0 < DAT_010ca098) {
    FID_conflict__wprintf((wchar_t *)s_get_handle__s_00e6ef98,*param_1);
  }
  piVar1 = FUN_00abaf20(this,param_1,param_2);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar1[4] == 0) {
    piVar1[3] = piVar1[3] + 1;
    this_00 = FUN_00a10f50(param_2,(int *)&DAT_00e6e650);
    FUN_00a10fe0(this_00,param_1);
  }
  return piVar1[4];
}


//// FUNCTION FUN_00abaee0 @ 00abaee0 ////

int __thiscall FUN_00abaee0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = FUN_00abaf20(this,param_1,(void *)0x0);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[3];
    piVar1[3] = 0;
  }
  if (0 < DAT_010ca098) {
    FID_conflict__wprintf((wchar_t *)s_anyError_handle__s____d_00e6efa8,*param_1,iVar2);
  }
  return iVar2;
}


//// FUNCTION FUN_00abaf20 @ 00abaf20 ////

int * __thiscall FUN_00abaf20(void *this,undefined4 *param_1,void *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint *this_00;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  iVar4 = 0;
  if (0 < *(int *)this) {
    puVar6 = (undefined4 *)((int)this + 4);
    do {
      pbVar2 = (byte *)*puVar6;
      pbVar5 = (byte *)*param_1;
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00abaf6c:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00abaf71;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00abaf6c;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00abaf71:
      if (iVar3 == 0) {
        return (int *)((int)this + iVar4 * 0x14 + 4);
      }
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 5;
    } while (iVar4 < *(int *)this);
  }
  if (param_2 != (void *)0x0) {
    this_00 = FUN_00a10f50(param_2,(int *)&DAT_00e6e658);
    FUN_00a10fe0(this_00,param_1);
  }
  return (int *)0x0;
}


//// FUNCTION FUN_00abafc0 @ 00abafc0 ////

undefined4 * __thiscall FUN_00abafc0(void *this,undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  
  FUN_00abd0e0(this);
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(int **)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 **)((int)this + 0x20) = &DAT_010b9370;
  *(undefined ***)this = &PTR_FUN_00d7cc70;
  uVar1 = (**(code **)(*param_2 + 8))();
  *(undefined4 *)((int)this + 0x18) = uVar1;
  return this;
}


//// FUNCTION FUN_00abb000 @ 00abb000 ////

undefined4 * __thiscall FUN_00abb000(void *this,byte param_1)

{
  FUN_00abb020(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abb020 @ 00abb020 ////

void __fastcall FUN_00abb020(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7cc70;
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[5])(1);
  }
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
  }
  if ((undefined1 *)param_1[8] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[8]);
  }
  FUN_00abd1b0(param_1);
  return;
}


//// FUNCTION FUN_00abb190 @ 00abb190 ////

int __thiscall FUN_00abb190(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = (**(code **)(**(int **)((int)this + 0x10) + 0x10))(param_1,param_2,param_3);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)(**(code **)(*(int *)this + 4))(param_2);
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    uVar1 = puVar3[1];
    *param_3 = *puVar3;
    param_3[1] = uVar1;
  }
  return iVar2;
}


//// FUNCTION FUN_00abb270 @ 00abb270 ////

undefined4 * __cdecl FUN_00abb270(int param_1,int param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if (param_1 == param_2) {
    puVar1 = operator_new(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = &PTR_FUN_00d7ce40;
      return puVar1;
    }
  }
  else {
    switch(param_1) {
    case 1:
      if (param_2 == 3) {
        puVar1 = operator_new(0x10);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = &PTR_FUN_00d7c080;
          return puVar1;
        }
      }
      else if (param_2 == 2) {
        puVar1 = operator_new(0x10);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = &PTR_FUN_00d7ce18;
          return puVar1;
        }
      }
      else if (param_2 == 4) {
        puVar1 = operator_new(0x10);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = &PTR_FUN_00d7cdf0;
          return puVar1;
        }
      }
      else if (param_2 == 5) {
        puVar1 = operator_new(0x10);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = &PTR_FUN_00d7cdc8;
          return puVar1;
        }
      }
      else if (param_2 == 6) {
        puVar1 = operator_new(0x10);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = &PTR_FUN_00d7cda0;
          return puVar1;
        }
      }
      else if (param_2 == 7) {
        pvVar2 = operator_new(0x14);
        if (pvVar2 != (void *)0x0) {
          puVar1 = FUN_00ac3110(pvVar2,0x1b5);
          return puVar1;
        }
      }
      else if ((param_2 == 8) && (puVar1 = operator_new(0x10), puVar1 != (undefined4 *)0x0)) {
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = &PTR_FUN_00d7cd78;
        return puVar1;
      }
      break;
    case 2:
      if ((param_2 == 1) && (puVar1 = operator_new(0x10), puVar1 != (undefined4 *)0x0)) {
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = &PTR_FUN_00d7cd28;
        return puVar1;
      }
      break;
    case 3:
      if ((param_2 == 1) && (puVar1 = operator_new(0x10), puVar1 != (undefined4 *)0x0)) {
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = &PTR_FUN_00d7cd50;
        return puVar1;
      }
      break;
    case 4:
      if ((param_2 == 1) && (puVar1 = operator_new(0x10), puVar1 != (undefined4 *)0x0)) {
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = &PTR_FUN_00d7cd00;
        return puVar1;
      }
      break;
    case 5:
      if ((param_2 == 1) && (puVar1 = operator_new(0x10), puVar1 != (undefined4 *)0x0)) {
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = &PTR_FUN_00d7ccd8;
        return puVar1;
      }
      break;
    case 6:
      if ((param_2 == 1) && (puVar1 = operator_new(0x10), puVar1 != (undefined4 *)0x0)) {
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = &PTR_FUN_00d7ccb0;
        return puVar1;
      }
      break;
    case 7:
      if ((param_2 == 1) && (pvVar2 = operator_new(0x14), pvVar2 != (void *)0x0)) {
        puVar1 = FUN_00ac2f20(pvVar2,0x1b5);
        return puVar1;
      }
      break;
    case 8:
      if (param_2 == 1) {
        puVar1 = operator_new(0x10);
        if (puVar1 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        FUN_00abb520(puVar1);
        *puVar1 = &PTR_FUN_00d7cc88;
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00abb520 @ 00abb520 ////

void __fastcall FUN_00abb520(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d7ce40;
  return;
}


//// FUNCTION FUN_00abb540 @ 00abb540 ////

undefined4 * __thiscall FUN_00abb540(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abb560 @ 00abb560 ////

undefined4 * __thiscall FUN_00abb560(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abb580 @ 00abb580 ////

undefined4 * __thiscall FUN_00abb580(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abb5a0 @ 00abb5a0 ////

undefined4 * __thiscall FUN_00abb5a0(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abb5c0 @ 00abb5c0 ////

undefined4 * __thiscall FUN_00abb5c0(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abb5e0 @ 00abb5e0 ////

undefined4 * __thiscall FUN_00abb5e0(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abb600 @ 00abb600 ////

undefined4 * __thiscall FUN_00abb600(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abb620 @ 00abb620 ////

undefined4 * __thiscall FUN_00abb620(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abb640 @ 00abb640 ////

undefined4 * __thiscall FUN_00abb640(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abb660 @ 00abb660 ////

undefined4 * __thiscall FUN_00abb660(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abb680 @ 00abb680 ////

undefined4 * __thiscall FUN_00abb680(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abb6a0 @ 00abb6a0 ////

undefined4 * __thiscall FUN_00abb6a0(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abba40 @ 00abba40 ////

undefined4 __thiscall
FUN_00abba40(void *this,int *param_1,byte *param_2,uint *param_3,byte *param_4)

{
  bool bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  
  if ((byte *)*param_1 < param_2) {
    while ((byte *)*param_3 < param_4) {
      bVar1 = false;
      bVar5 = *(byte *)*param_1;
      uVar6 = (uint)bVar5;
      if (((bVar5 & 0x80) != 0) && ((uVar6 < 0xa1 || (0xdf < uVar6)))) {
        pbVar3 = (byte *)*param_1 + 1;
        if (param_2 <= pbVar3) {
          *(undefined4 *)((int)this + 4) = 2;
          return 0;
        }
        *param_1 = (int)pbVar3;
        bVar1 = true;
        uVar6 = (uint)CONCAT11(bVar5,*pbVar3);
      }
      uVar7 = uVar6;
      if (0x20 < uVar6) {
        uVar8 = 0xfffc;
        iVar4 = FUN_00ac58f0();
        uVar2 = FUN_00ac2c60((ushort)uVar6,0xe77394,iVar4,uVar8);
        uVar7 = (uint)uVar2;
      }
      if (uVar7 == 0xfffc) {
        uVar7 = uVar6 & 0xff;
        uVar6 = uVar6 >> 8;
        if ((((uVar6 < 0xf0) || (0xf9 < uVar6)) || (uVar7 < 0x40)) ||
           ((0xfc < uVar7 || (uVar7 == 0x7f)))) {
          *(undefined4 *)((int)this + 4) = 1;
          if (!bVar1) {
            return 0;
          }
          *param_1 = *param_1 + -1;
          return 0;
        }
        uVar7 = (uVar6 * 0xbc - (uint)(0x7f < uVar7)) + 0x2f80 + uVar7;
      }
      if (uVar7 < 0x800) {
        pbVar3 = (byte *)*param_3;
        if (0x7f < uVar7) {
          if (param_4 <= pbVar3 + 1) {
            *(undefined4 *)((int)this + 4) = 2;
            if (!bVar1) {
              return 0;
            }
            *param_1 = *param_1 + -1;
            return 0;
          }
          bVar5 = (byte)(uVar7 >> 6) | 0xc0;
          goto LAB_00abbb91;
        }
      }
      else {
        if (param_4 <= (byte *)*param_3 + 2) {
          *(undefined4 *)((int)this + 4) = 2;
          if (!bVar1) {
            return 0;
          }
          *param_1 = *param_1 + -1;
          return 0;
        }
        *(byte *)*param_3 = (byte)(uVar7 >> 0xc) | 0xe0;
        pbVar3 = (byte *)(*param_3 + 1);
        *param_3 = (uint)pbVar3;
        bVar5 = (byte)(uVar7 >> 6) & 0x3f | 0x80;
LAB_00abbb91:
        *pbVar3 = bVar5;
        pbVar3 = (byte *)(*param_3 + 1);
        *param_3 = (uint)pbVar3;
        uVar7 = (uint)((byte)uVar7 & 0x3f | 0x80);
      }
      *pbVar3 = (byte)uVar7;
      *param_3 = *param_3 + 1;
      *param_1 = *param_1 + 1;
      if (param_2 <= (byte *)*param_1) {
        return 0;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00abbf10 @ 00abbf10 ////

undefined4 __thiscall
FUN_00abbf10(void *this,int *param_1,byte *param_2,uint *param_3,byte *param_4)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  undefined2 uVar9;
  
  puVar1 = param_3;
  if ((byte *)*param_1 < param_2) {
    while ((byte *)*puVar1 < param_4) {
      pbVar7 = (byte *)*param_1;
      iVar8 = 0;
      param_3 = (uint *)0x0;
      uVar5 = (uint)*pbVar7;
      if (0x7e < uVar5) {
        if (uVar5 == 0x8e) {
          iVar8 = 2;
        }
        else {
          iVar8 = (-(uint)(uVar5 != 0x8f) & 0xfffffffe) + 3;
        }
        param_3 = (uint *)((iVar8 == 3) + 1);
        if (param_2 <= (byte *)((int)param_3 + (int)pbVar7)) {
          *(undefined4 *)((int)this + 4) = 2;
          return 0;
        }
        if (1 < iVar8) {
          *param_1 = (int)(pbVar7 + 1);
          uVar5 = (uint)pbVar7[1];
        }
        if ((iVar8 == 1) || (iVar8 == 3)) {
          iVar3 = *param_1;
          *param_1 = iVar3 + 1;
          uVar5 = uVar5 << 8 | (uint)*(byte *)(iVar3 + 1);
          if (iVar8 == 3) {
            uVar5 = uVar5 - 0x8080;
          }
        }
      }
      uVar6 = uVar5;
      if (0x20 < uVar5) {
        uVar9 = 0xfffc;
        iVar3 = FUN_00ac5910();
        uVar2 = FUN_00ac2c60((ushort)uVar5,0xe8be4c,iVar3,uVar9);
        uVar6 = (uint)uVar2;
      }
      if (uVar6 == 0xfffc) {
        if (iVar8 == 3) {
          uVar5 = uVar5 + 0x8080;
        }
        uVar6 = uVar5 & 0xff;
        uVar5 = uVar5 >> 8;
        if ((((uVar5 < 0xf5) || (0xfe < uVar5)) || (uVar6 < 0xa1)) || (0xfe < uVar6)) {
          *(undefined4 *)((int)this + 4) = 1;
          if (param_3 == (uint *)0x0) {
            return 0;
          }
          do {
            param_3 = (uint *)((int)param_3 + -1);
            *param_1 = *param_1 + -1;
          } while (param_3 != (uint *)0x0);
          return 0;
        }
        uVar6 = uVar6 + 0x8569 + uVar5 * 0x5e;
        if (iVar8 == 3) {
          uVar6 = uVar6 + 0x3ac;
        }
      }
      if (uVar6 < 0x800) {
        pbVar7 = (byte *)*puVar1;
        if (0x7f < uVar6) {
          if (param_4 <= pbVar7 + 1) {
            *(undefined4 *)((int)this + 4) = 2;
            for (; param_3 != (uint *)0x0; param_3 = (uint *)((int)param_3 + -1)) {
              *param_1 = *param_1 + -1;
            }
            return 0;
          }
          bVar4 = (byte)(uVar6 >> 6) | 0xc0;
          goto LAB_00abc0b9;
        }
      }
      else {
        if (param_4 <= (byte *)*puVar1 + 2) {
          *(undefined4 *)((int)this + 4) = 2;
          if (param_3 == (uint *)0x0) {
            return 0;
          }
          do {
            param_3 = (uint *)((int)param_3 + -1);
            *param_1 = *param_1 + -1;
          } while (param_3 != (uint *)0x0);
          return 0;
        }
        *(byte *)*puVar1 = (byte)(uVar6 >> 0xc) | 0xe0;
        pbVar7 = (byte *)(*puVar1 + 1);
        *puVar1 = (uint)pbVar7;
        bVar4 = (byte)(uVar6 >> 6) & 0x3f | 0x80;
LAB_00abc0b9:
        *pbVar7 = bVar4;
        pbVar7 = (byte *)(*puVar1 + 1);
        *puVar1 = (uint)pbVar7;
        uVar6 = (uint)((byte)uVar6 & 0x3f | 0x80);
      }
      *pbVar7 = (byte)uVar6;
      *puVar1 = *puVar1 + 1;
      iVar8 = *param_1;
      *param_1 = (int)(iVar8 + 1U);
      if (param_2 <= (byte *)(iVar8 + 1U)) {
        return 0;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00abc1e0 @ 00abc1e0 ////

undefined * __cdecl FUN_00abc1e0(ushort param_1)

{
  if ((0x7f < param_1) && (param_1 < 0x8000)) {
    if (param_1 < 0x100) {
      _sprintf(&DAT_010ca070,s_8e_2x_00e6f090,param_1);
      return &DAT_010ca070;
    }
    _sprintf(&DAT_010ca070,s_8f_4x_00e6f088,param_1 ^ 0x8080);
    return &DAT_010ca070;
  }
  _sprintf(&DAT_010ca070,&DAT_00e6f084,param_1);
  return &DAT_010ca070;
}


//// FUNCTION FUN_00abc260 @ 00abc260 ////

void FUN_00abc260(ushort param_1,uint param_2,ushort param_3)

{
  uint uVar1;
  undefined *puVar2;
  
  if (param_3 == 0xfffe) {
    uVar1 = param_2 & 0xffff;
    puVar2 = FUN_00abc1e0(param_1);
    FID_conflict__wprintf((wchar_t *)s__s__>_U__04x__>_unknown_00e6f0b0,puVar2,uVar1);
    return;
  }
  puVar2 = FUN_00abc1e0(param_1);
  FID_conflict__wprintf((wchar_t *)&DAT_00e6f0ac,puVar2);
  puVar2 = FUN_00abc1e0(param_3);
  FID_conflict__wprintf((wchar_t *)s__>_U__04x__>__s_00e6f098,param_2 & 0xffff,puVar2);
  return;
}


//// FUNCTION FUN_00abc330 @ 00abc330 ////

undefined4 FUN_00abc330(undefined4 *param_1)

{
  char cVar1;
  undefined4 *this;
  int iVar2;
  WINBOOL WVar3;
  char *pcVar4;
  uint uVar5;
  
  this = param_1;
  param_1[1] = 0x40;
  if ((int)param_1[2] < 0x40) {
    FUN_00a10e50(param_1,0);
  }
  iVar2 = gethostname((char *)*this,this[1]);
  if (iVar2 < 0) {
    param_1 = (undefined4 *)this[1];
    WVar3 = GetComputerNameA((LPSTR)*this,(LPDWORD)&param_1);
    if (WVar3 == 0) {
      pcVar4 = _getenv(s_COMPUTERNAME_00e6f0ec);
      if (pcVar4 != (char *)0x0) {
        this[1] = 0;
        FUN_00a10d90(this,pcVar4);
        return 1;
      }
      return 0;
    }
    uVar5 = 0xffffffff;
    pcVar4 = (char *)*this;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    this[1] = ~uVar5 - 1;
    return 1;
  }
  uVar5 = 0xffffffff;
  pcVar4 = (char *)*this;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  this[1] = ~uVar5 - 1;
  return 1;
}


//// FUNCTION FUN_00abc3e0 @ 00abc3e0 ////

/* WARNING: Removing unreachable block (ram,0x00abc461) */

undefined4 FUN_00abc3e0(undefined4 *param_1)

{
  char *pcVar1;
  char *local_c;
  int _SizeInBytes;
  
  pcVar1 = _getenv(&DAT_00e6f0fc);
  if (pcVar1 == (char *)0x0) {
    local_c = &DAT_010b9370;
    _SizeInBytes = 0x100;
    FUN_00a10e50(&local_c,0);
    __getcwd(local_c,_SizeInBytes);
    FUN_00ac60d0(local_c,param_1);
                    /* WARNING: Subroutine does not return */
    local_c = &UNK_00abc45e;
    _free((void *)0x0);
  }
  param_1[1] = 0;
  FUN_00a10d90(param_1,pcVar1);
  return 1;
}


//// FUNCTION FUN_00abc470 @ 00abc470 ////

undefined4 FUN_00abc470(undefined4 *param_1)

{
  char cVar1;
  undefined4 *this;
  char *pcVar2;
  WINBOOL WVar3;
  uint uVar4;
  
  this = param_1;
  param_1[1] = 0x80;
  if ((int)param_1[2] < 0x80) {
    FUN_00a10e50(param_1,0);
  }
  pcVar2 = _getenv(s_USERNAME_00e6f100);
  if (pcVar2 != (char *)0x0) {
    this[1] = 0;
    FUN_00a10d90(this,pcVar2);
    return 1;
  }
  param_1 = (undefined4 *)this[1];
  WVar3 = GetUserNameA((LPSTR)*this,(LPDWORD)&param_1);
  if (WVar3 == 0) {
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar2 = (char *)*this;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  this[1] = ~uVar4 - 1;
  return 1;
}


//// FUNCTION FUN_00abc500 @ 00abc500 ////

void __cdecl FUN_00abc500(void *param_1,int *param_2)

{
  FUN_00aa10f0(param_1,"compress2");
  FUN_00aa1630(param_1,param_2);
  FUN_00aa1620(param_1,param_2);
  return;
}


//// FUNCTION FUN_00abc590 @ 00abc590 ////

void __cdecl FUN_00abc590(void *param_1)

{
  FUN_00aa10d0((int)param_1);
  FUN_00aa10f0(param_1,"flush2");
  return;
}


//// FUNCTION FUN_00abc5e0 @ 00abc5e0 ////

undefined4 * __fastcall FUN_00abc5e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_00ab5640(puVar1);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


//// FUNCTION FUN_00abc610 @ 00abc610 ////

void __fastcall FUN_00abc610(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00ab5650(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00abc630 @ 00abc630 ////

void __thiscall FUN_00abc630(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00ab5690(*(uint **)this);
  *puVar1 = param_1;
  return;
}


//// FUNCTION FUN_00abc640 @ 00abc640 ////

int * __thiscall FUN_00abc640(void *this,byte *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  bool bVar9;
  
  iVar3 = *(int *)(*(int *)this + 4);
  iVar6 = iVar3;
  do {
    if (iVar6 == 0) {
      return (int *)0x0;
    }
    iVar6 = iVar6 + -1;
    if (iVar6 < iVar3) {
      piVar8 = *(int **)(*(int *)(*(int *)this + 8) + iVar6 * 4);
    }
    else {
      piVar8 = (int *)0x0;
    }
    pbVar7 = (byte *)*piVar8;
    while (pbVar4 = param_1, pbVar7 != (byte *)0x0) {
      do {
        bVar2 = *pbVar4;
        bVar9 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_00abc69d:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00abc6a2;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar9 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_00abc69d;
        pbVar7 = pbVar7 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_00abc6a2:
      if (iVar5 == 0) break;
      piVar1 = piVar8 + 2;
      piVar8 = piVar8 + 2;
      pbVar7 = (byte *)*piVar1;
    }
    if (*piVar8 != 0) {
      return piVar8;
    }
  } while( true );
}


//// FUNCTION FUN_00abc6e0 @ 00abc6e0 ////

undefined4 * __cdecl FUN_00abc6e0(uint *param_1,void *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint *puVar5;
  
  puVar1 = FUN_00acecd0(param_1,':');
  puVar5 = param_1;
  if (((puVar1 == (uint *)0x0) ||
      (puVar5 = (uint *)((int)puVar1 + 1), puVar1 == (uint *)((int)param_1 + 3))) &&
     (iVar2 = _strncmp((char *)param_1,&DAT_00e6f114,3), iVar2 == 0)) {
    puVar3 = operator_new(0x2c);
    if (puVar3 != (undefined4 *)0x0) {
      FUN_00ac6870(puVar3,param_2);
      puVar3[10] = 0;
      puVar3[9] = 0;
      puVar3[8] = &DAT_010b9370;
      *puVar3 = &PTR_FUN_00d7ceb8;
      puVar3[2] = 0;
      FUN_00a10d90(puVar3 + 1,(char *)puVar5);
      return puVar3;
    }
  }
  else {
    if (((puVar1 != (uint *)0x0) && (puVar1 != (uint *)((int)param_1 + 3))) ||
       (iVar2 = _strncmp((char *)param_1,(char *)&proto_00e6f110,3), iVar2 != 0)) {
      pvVar4 = operator_new(0x20);
      if (pvVar4 == (void *)0x0) {
        uRam00000008 = 0;
        FUN_00a10d90((void *)0x4,(char *)param_1);
        return (undefined4 *)0x0;
      }
      puVar3 = FUN_00ac6870(pvVar4,param_2);
      puVar3[2] = 0;
      FUN_00a10d90(puVar3 + 1,(char *)param_1);
      return puVar3;
    }
    pvVar4 = operator_new(0x20);
    if (pvVar4 != (void *)0x0) {
      puVar3 = FUN_00ac6870(pvVar4,param_2);
      puVar3[2] = 0;
      FUN_00a10d90(puVar3 + 1,(char *)puVar5);
      return puVar3;
    }
  }
  uRam00000008 = 0;
  FUN_00a10d90((void *)0x4,(char *)puVar5);
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00abc820 @ 00abc820 ////

undefined4 * __thiscall FUN_00abc820(void *this,byte param_1)

{
  FUN_00ac61b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abc840 @ 00abc840 ////

void __fastcall FUN_00abc840(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7cedc;
  return;
}


//// FUNCTION FUN_00abc850 @ 00abc850 ////

undefined4 * __thiscall FUN_00abc850(void *this,byte param_1)

{
  FUN_00abc840(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abc870 @ 00abc870 ////

void __fastcall FUN_00abc870(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7cef8;
  if ((undefined1 *)param_1[1] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_00abc890 @ 00abc890 ////

undefined4 * __thiscall FUN_00abc890(void *this,byte param_1)

{
  FUN_00abc870(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abc8b0 @ 00abc8b0 ////

void __fastcall FUN_00abc8b0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *local_10;
  int local_c;
  char *local_8;
  int local_4;
  
  param_1[9] = 0;
  param_1[6] = 0;
  pcVar2 = (char *)*param_1;
  iVar3 = param_1[1];
  pcVar6 = pcVar2;
  do {
    local_8 = pcVar6;
    if (pcVar2 + iVar3 <= local_8) {
      return;
    }
    uVar5 = 0xffffffff;
    pcVar6 = local_8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    local_4 = uVar5 - 1;
    local_10 = local_8 + uVar5 + 4;
    local_c = (((uint)(byte)local_8[uVar5 + 3] * 0x100 + (uint)(byte)local_8[uVar5 + 2]) * 0x100 +
              (uint)(byte)local_10[-3]) * 0x100 + (uint)(byte)local_10[-4];
    pcVar6 = local_10 + local_c + 1;
    if (local_4 == 0) {
      FUN_00abcdb0(param_1 + 7,&local_10);
    }
    else {
      (**(code **)(param_1[3] + 8))(&local_8,&local_10);
    }
    if (2 < DAT_010ca0b4) {
      pcVar4 = local_10;
      if (0x6d < local_c) {
        pcVar4 = s_<big>_00e6f420;
      }
      FID_conflict__wprintf((wchar_t *)s_RpcRecvBuffer__s____s_00e6f408,local_8,pcVar4);
    }
  } while( true );
}


//// FUNCTION FUN_00abc980 @ 00abc980 ////

void __thiscall FUN_00abc980(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *this_00;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = param_2[1];
  puVar5 = (undefined4 *)*param_2;
  this_00 = FUN_00abca20(this,param_1);
  uVar1 = this_00[1];
  this_00[1] = uVar1 + uVar4;
  if (this_00[2] < (int)(uVar1 + uVar4)) {
    FUN_00a10e50(this_00,uVar1);
  }
  puVar6 = (undefined4 *)(*this_00 + uVar1);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  FUN_00abca70(this);
  if (2 < DAT_010ca0b4) {
    if ((int)param_2[1] < 0x6e) {
      pcVar2 = (char *)*param_2;
    }
    else {
      pcVar2 = s_<big>_00e6f420;
    }
    FID_conflict__wprintf((wchar_t *)s_RpcSendBuffer__s____s_00e6f428,*param_1,pcVar2);
  }
  return;
}


//// FUNCTION FUN_00abca20 @ 00abca20 ////

int * __thiscall FUN_00abca20(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    FUN_00abca70(this);
  }
  FUN_00a10df0(this,param_1);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)((int)this + 4) = uVar1 + 5;
  if (*(int *)((int)this + 8) < (int)(uVar1 + 5)) {
    FUN_00a10e50(this,uVar1);
  }
  *(undefined1 *)(*(int *)this + uVar1) = 0;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 4);
  return this;
}


//// FUNCTION FUN_00abca70 @ 00abca70 ////

void __fastcall FUN_00abca70(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[1] - param_1[3];
  iVar1 = param_1[3] + *param_1;
  *(char *)(iVar1 + -4) = (char)iVar2;
  uVar3 = iVar2 >> 0x1f;
  *(char *)(iVar1 + -3) = (char)(iVar2 + (uVar3 & 0xff) >> 8);
  *(char *)(iVar1 + -2) = (char)(iVar2 + (uVar3 & 0xffff) >> 0x10);
  *(char *)(iVar1 + -1) = (char)(iVar2 + (uVar3 & 0xffffff) >> 0x18);
  uVar3 = param_1[1];
  param_1[1] = uVar3 + 1;
  if (param_1[2] < (int)(uVar3 + 1)) {
    FUN_00a10e50(param_1,uVar3);
  }
  *(undefined1 *)(*param_1 + uVar3) = 0;
  param_1[3] = 0;
  return;
}


//// FUNCTION FUN_00abcb20 @ 00abcb20 ////

void FUN_00abcb20(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *unaff_EBP;
  void *unaff_ESI;
  byte *pbVar5;
  bool bVar6;
  undefined4 local_14;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  iVar4 = 0;
  iVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0x10))(0,local_10,local_8);
  do {
    if (iVar2 == 0) {
      return;
    }
    pbVar5 = &DAT_00e6eddc;
    pbVar3 = unaff_EBP;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00abcb7e:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00abcb83;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00abcb7e;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_00abcb83:
    if (iVar2 != 0) {
      pbVar5 = &DAT_00e68b40;
      pbVar3 = unaff_EBP;
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00abcbb2:
          iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00abcbb7;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00abcbb2;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_00abcbb7:
      if (iVar2 == 0) {
        return;
      }
      FUN_00abc980(unaff_ESI,(undefined4 *)&stack0xffffffe4,&local_14);
    }
    iVar4 = iVar4 + 1;
    iVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0x10))(iVar4,&stack0xffffffe4,&local_14);
  } while( true );
}


//// FUNCTION FUN_00abcc00 @ 00abcc00 ////

undefined4 * __fastcall FUN_00abcc00(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_00ab5640(puVar1);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


//// FUNCTION FUN_00abcc30 @ 00abcc30 ////

void __fastcall FUN_00abcc30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 4)) {
    if (*(int *)(iVar2 + 4) < 1) goto LAB_00abcc69;
    do {
      puVar1 = *(undefined4 **)(*(int *)(iVar2 + 8) + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        if ((undefined1 *)*puVar1 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
          _free((undefined1 *)*puVar1);
        }
                    /* WARNING: Subroutine does not return */
        _free(puVar1);
      }
LAB_00abcc69:
      iVar2 = *param_1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 4));
  }
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00ab5650(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  return;
}


//// FUNCTION FUN_00abcc90 @ 00abcc90 ////

undefined4 __thiscall FUN_00abcc90(void *this,int param_1)

{
  if (param_1 < *(int *)(*(int *)this + 4)) {
    return *(undefined4 *)(*(int *)(*(int *)this + 8) + param_1 * 4);
  }
  return 0;
}


//// FUNCTION FUN_00abccb0 @ 00abccb0 ////

undefined4 * __fastcall FUN_00abccb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = operator_new(0xc);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = &DAT_010b9370;
    puVar2 = puVar1;
  }
  puVar1 = (undefined4 *)FUN_00ab5690((uint *)*param_1);
  *puVar1 = puVar2;
  return puVar2;
}


//// FUNCTION FUN_00abcce0 @ 00abcce0 ////

undefined4 __fastcall FUN_00abcce0(int *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}


//// FUNCTION FUN_00abccf0 @ 00abccf0 ////

int __cdecl FUN_00abccf0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = *(byte **)*param_2;
  pbVar2 = *(byte **)*param_1;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar4) - (uint)(bVar4 != 0);
}


//// FUNCTION FUN_00abcd40 @ 00abcd40 ////

void __cdecl FUN_00abcd40(undefined4 *param_1,undefined4 *param_2)

{
  FUN_00ab5720(*(byte **)*param_1,*(byte **)*param_2);
  return;
}


//// FUNCTION FUN_00abcd60 @ 00abcd60 ////

void __thiscall FUN_00abcd60(void *this,int param_1)

{
  code *_PtFuncCompare;
  
  _PtFuncCompare = FUN_00abcd40;
  if (param_1 == 0) {
    _PtFuncCompare = FUN_00abccf0;
  }
  _qsort(*(void **)(*(int *)this + 8),*(size_t *)(*(int *)this + 4),4,_PtFuncCompare);
  return;
}


//// FUNCTION FUN_00abcd90 @ 00abcd90 ////

void __fastcall FUN_00abcd90(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00abcda0 @ 00abcda0 ////

void __fastcall FUN_00abcda0(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00abcdb0 @ 00abcdb0 ////

void __thiscall FUN_00abcdb0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  
  if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
    iVar6 = *(int *)((int)this + 4) + 10;
    pvVar5 = operator_new(iVar6 * 8);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    if (*(int *)this != 0) {
      iVar6 = 0;
      if (0 < *(int *)((int)this + 4)) {
        do {
          iVar3 = *(int *)this;
          iVar2 = iVar6 * 8;
          iVar6 = iVar6 + 1;
          *(undefined4 *)(iVar2 + (int)pvVar5) = *(undefined4 *)(iVar2 + iVar3);
          *(undefined4 *)(iVar2 + 4 + (int)pvVar5) = ((undefined4 *)(iVar2 + iVar3))[1];
        } while (iVar6 < *(int *)((int)this + 4));
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    *(void **)this = pvVar5;
    *(int *)((int)this + 4) = iVar6;
  }
  puVar1 = (undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 8);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  uVar4 = param_1[1];
  *puVar1 = *param_1;
  puVar1[1] = uVar4;
  return;
}


//// FUNCTION FUN_00abce50 @ 00abce50 ////

undefined4 * __fastcall FUN_00abce50(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *param_1 = &PTR_FUN_00d7cf1c;
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00ab5640(puVar1);
  }
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}


//// FUNCTION FUN_00abce90 @ 00abce90 ////

undefined4 * __thiscall FUN_00abce90(void *this,byte param_1)

{
  FUN_00abceb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abceb0 @ 00abceb0 ////

void __fastcall FUN_00abceb0(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *_Memory_00;
  
  *param_1 = &PTR_FUN_00d7cf1c;
  if (0 < (int)param_1[2]) {
    if (*(int *)(param_1[1] + 4) < 1) {
      _Memory_00 = (void *)0x0;
    }
    else {
      _Memory_00 = (void *)**(undefined4 **)(param_1[1] + 8);
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  _Memory = (undefined4 *)param_1[1];
  if (_Memory != (undefined4 *)0x0) {
    FUN_00ab5650(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_00a12850(param_1);
  return;
}


//// FUNCTION FUN_00abcfe0 @ 00abcfe0 ////

void __thiscall FUN_00abcfe0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this + 0xc) == *(int *)((int)this + 8)) {
    pvVar2 = operator_new(0x10);
    puVar3 = (undefined4 *)FUN_00ab5690(*(uint **)((int)this + 4));
    *puVar3 = pvVar2;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  iVar1 = *(int *)((int)this + 0xc);
  *(int *)((int)this + 0xc) = iVar1 + 1;
  if (iVar1 < *(int *)(*(int *)((int)this + 4) + 4)) {
    puVar3 = *(undefined4 **)(*(int *)(*(int *)((int)this + 4) + 8) + iVar1 * 4);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  *puVar3 = *param_1;
  puVar3[1] = param_1[1];
  puVar3[2] = *param_2;
  puVar3[3] = param_2[1];
  return;
}


//// FUNCTION FUN_00abd0e0 @ 00abd0e0 ////

undefined4 * __fastcall FUN_00abd0e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *param_1 = &PTR_FUN_00d7cf34;
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00ab5640(puVar1);
  }
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}


//// FUNCTION FUN_00abd120 @ 00abd120 ////

undefined4 * __thiscall FUN_00abd120(void *this,byte param_1)

{
  FUN_00abd1b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abd140 @ 00abd140 ////

undefined4 * __thiscall FUN_00abd140(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *(undefined ***)this = &PTR_FUN_00d7cf34;
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00ab5640(puVar1);
  }
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_00abd230(this,param_1);
  return this;
}


//// FUNCTION FUN_00abd1b0 @ 00abd1b0 ////

void __fastcall FUN_00abd1b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_1 = &PTR_FUN_00d7cf34;
  if (0 < (int)param_1[2]) {
    do {
      if ((iVar2 < *(int *)(param_1[1] + 4)) &&
         (puVar1 = *(undefined4 **)(*(int *)(param_1[1] + 8) + iVar2 * 4),
         puVar1 != (undefined4 *)0x0)) {
        if ((undefined1 *)puVar1[3] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
          _free((undefined1 *)puVar1[3]);
        }
        if ((undefined1 *)*puVar1 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
          _free((undefined1 *)*puVar1);
        }
                    /* WARNING: Subroutine does not return */
        _free(puVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[2]);
  }
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00ab5650(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  FUN_00a12850(param_1);
  return;
}


//// FUNCTION FUN_00abd230 @ 00abd230 ////

void __thiscall FUN_00abd230(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  puStack_24 = local_8;
  iVar2 = 0;
  puStack_20 = local_10;
  *(undefined4 *)((int)this + 0xc) = 0;
  iVar1 = (**(code **)(*param_1 + 0x10))(0);
  while (iVar1 != 0) {
    (**(code **)(*(int *)this + 8))(&stack0xffffffec,&stack0xffffffe4);
    iVar2 = iVar2 + 1;
    iVar1 = (**(code **)(*param_1 + 0x10))(iVar2,&stack0xffffffe4,&puStack_24);
  }
  return;
}


//// FUNCTION FUN_00abd290 @ 00abd290 ////

undefined4 * __thiscall FUN_00abd290(void *this,undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      if (iVar4 < *(int *)(*(int *)((int)this + 4) + 4)) {
        puVar6 = *(undefined4 **)(*(int *)(*(int *)((int)this + 4) + 8) + iVar4 * 4);
      }
      else {
        puVar6 = (undefined4 *)0x0;
      }
      pbVar2 = (byte *)*puVar6;
      pbVar5 = (byte *)*param_1;
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00abd2e8:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00abd2ed;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00abd2e8;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00abd2ed:
      if (iVar3 == 0) {
        return puVar6 + 3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0xc));
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00abd360 @ 00abd360 ////

void __thiscall FUN_00abd360(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *this_00;
  
  if (*(int *)((int)this + 0xc) == *(int *)((int)this + 8)) {
    puVar2 = operator_new(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = &DAT_010b9370;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[3] = &DAT_010b9370;
    }
    puVar3 = (undefined4 *)FUN_00ab5690(*(uint **)((int)this + 4));
    *puVar3 = puVar2;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  iVar1 = *(int *)((int)this + 0xc);
  *(int *)((int)this + 0xc) = iVar1 + 1;
  if (iVar1 < *(int *)(*(int *)((int)this + 4) + 4)) {
    this_00 = *(void **)(*(int *)(*(int *)((int)this + 4) + 8) + iVar1 * 4);
  }
  else {
    this_00 = (void *)0x0;
  }
  *(undefined4 *)((int)this_00 + 4) = 0;
  FUN_00a10df0(this_00,param_1);
  *(undefined4 *)((int)this_00 + 0x10) = 0;
  FUN_00a10df0((void *)((int)this_00 + 0xc),param_2);
  return;
}


//// FUNCTION FUN_00abd480 @ 00abd480 ////

void __thiscall FUN_00abd480(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_00d7cf4c;
  *(int *)((int)this + 0xc) = (int)this + 0x1014;
  *(int *)((int)this + 0x10) = (int)this + 0x1014;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x2014) = 0;
  *(undefined4 *)((int)this + 0x2018) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_00abd4b0 @ 00abd4b0 ////

undefined4 * __thiscall FUN_00abd4b0(void *this,byte param_1)

{
  FUN_00abd4d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00abd4d0 @ 00abd4d0 ////

void __fastcall FUN_00abd4d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7cf4c;
  if (param_1[0x805] != 0) {
    FUN_00a394c0(param_1[0x805]);
  }
  if (param_1[0x806] != 0) {
    FUN_00ac7870(param_1[0x806]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x805]);
}


//// FUNCTION FUN_00abd540 @ 00abd540 ////

void __thiscall FUN_00abd540(void *this,int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x2018) == 0) {
    if (4 < DAT_010ca0a8) {
      FID_conflict__wprintf((wchar_t *)s_NetBuffer_send_compressing_00e6f440);
    }
    FUN_00abda00(this,param_1);
    pvVar1 = operator_new(0x38);
    *(void **)((int)this + 0x2018) = pvVar1;
    *(undefined4 *)((int)pvVar1 + 0x20) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x2018) + 0x24) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x2018) + 0x28) = 0;
    iVar2 = FUN_00ac70d0(*(int *)((int)this + 0x2018),-1,8,-0xf,8,0,s_1_0_4_00e692dc,0x38);
    if (iVar2 != 0) {
      FUN_00a10f50(param_1,(int *)&DAT_00e6ded8);
      return;
    }
    *(int *)(*(int *)((int)this + 0x2018) + 0xc) = (int)this + 0x14;
    *(undefined4 *)(*(int *)((int)this + 0x2018) + 0x10) = 0x1000;
  }
  return;
}


//// FUNCTION FUN_00abd600 @ 00abd600 ////

void __thiscall FUN_00abd600(void *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x2014) == 0) {
    if (4 < DAT_010ca0a8) {
      FID_conflict__wprintf((wchar_t *)s_NetBuffer_recv_compressing_00e6f45c);
    }
    pvVar1 = operator_new(0x38);
    *(void **)((int)this + 0x2014) = pvVar1;
    *(undefined4 *)((int)pvVar1 + 0x20) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x2014) + 0x24) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x2014) + 0x28) = 0;
    iVar2 = FUN_00a39510(*(int *)((int)this + 0x2014),-0xf,s_1_0_4_00e692dc,0x38);
    if (iVar2 != 0) {
      FUN_00a10f50(param_1,(int *)&DAT_00e6dee8);
      return;
    }
    **(undefined4 **)((int)this + 0x2014) = *(undefined4 *)((int)this + 0xc);
    *(int *)(*(int *)((int)this + 0x2014) + 4) =
         *(int *)((int)this + 0x10) - *(int *)((int)this + 0xc);
  }
  return;
}


//// FUNCTION FUN_00abd6b0 @ 00abd6b0 ////

/* WARNING: Variable defined which should be unmapped: param_3 */

undefined4 * __thiscall
FUN_00abd6b0(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_8;
  undefined4 *puStack_4;
  
  puVar1 = param_2;
  puVar8 = param_3;
  if (*(int *)(param_1 + 0x2014) == 0) {
    while (puVar8 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc));
      local_8 = puVar8;
      if (puVar5 == (undefined4 *)0x0) {
        if (puVar8 < (undefined4 *)0x1000) {
          iVar4 = param_1 + 0x1014;
          puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 0x14))(iVar4,0x1000,param_4)
          ;
          if ((int)puVar5 < 1) {
            return param_3;
          }
          *(int *)(param_1 + 0xc) = iVar4;
          *(int *)(param_1 + 0x10) = iVar4 + (int)puVar5;
          goto LAB_00abd7db;
        }
        puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar1,0x1000,param_4);
        if ((int)puVar5 < 1) {
          return param_3;
        }
        puVar8 = (undefined4 *)((int)puVar8 - (int)puVar5);
      }
      else {
LAB_00abd7db:
        if ((int)puVar8 < (int)puVar5) {
          puVar5 = puVar8;
        }
        puVar7 = *(undefined4 **)(param_1 + 0xc);
        puVar9 = puVar1;
        for (uVar6 = (uint)puVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar8 = (undefined4 *)((int)local_8 - (int)puVar5);
        for (uVar6 = (uint)puVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (int)puVar5;
      }
      puVar1 = (undefined4 *)((int)puVar1 + (int)puVar5);
    }
    local_8 = (undefined4 *)0x0;
  }
  else {
    *(undefined4 **)(*(int *)(param_1 + 0x2014) + 0xc) = param_2;
    *(undefined4 **)(*(int *)(param_1 + 0x2014) + 0x10) = param_3;
    piVar3 = *(int **)(param_1 + 0x2014);
    iVar4 = piVar3[4];
    while (iVar4 != 0) {
      if (piVar3[1] == 0) {
        *piVar3 = param_1 + 0x1014;
        uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_1 + 0x1014,0x1000,param_4);
        *(undefined4 *)(*(int *)(param_1 + 0x2014) + 4) = uVar2;
        if (1 < *param_4) {
          return param_3;
        }
        piVar3 = *(int **)(param_1 + 0x2014);
        if (piVar3[1] == 0) {
          return param_3;
        }
      }
      iVar4 = FUN_00a39640(piVar3,0);
      if (iVar4 == 1) break;
      if (iVar4 != 0) {
        FUN_00a10f50(param_4,(int *)&DAT_00e6dee0);
        return param_3;
      }
      piVar3 = *(int **)(param_1 + 0x2014);
      iVar4 = piVar3[4];
    }
  }
  if (3 < DAT_010ca0a8) {
    FID_conflict__wprintf((wchar_t *)s_NetBuffer_rcv__d__00e6f478,param_3);
    local_8 = param_2;
    puStack_4 = param_3;
    FUN_00a9cae0(&local_8);
  }
  return param_3;
}


//// FUNCTION FUN_00abd860 @ 00abd860 ////

void __thiscall FUN_00abd860(void *this,undefined4 *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_8;
  uint local_4;
  
  if (3 < DAT_010ca0a8) {
    FID_conflict__wprintf((wchar_t *)s_NetBuffer_snd__d__00e6f48c,param_2);
    local_8 = param_1;
    local_4 = param_2;
    FUN_00a9cae0(&local_8);
  }
  if (*(undefined4 **)((int)this + 0x2018) == (undefined4 *)0x0) {
    do {
      if (param_2 == 0) {
        return;
      }
      if (*(int *)((int)this + 8) == 0x1000) {
        (**(code **)(**(int **)((int)this + 4) + 0x10))((int)this + 0x14,0x1000,param_3);
        if (1 < *param_3) {
          return;
        }
        *(undefined4 *)((int)this + 8) = 0;
      }
      iVar1 = *(int *)((int)this + 8);
      if ((iVar1 == 0) && (0xfff < param_2)) {
        (**(code **)(**(int **)((int)this + 4) + 0x10))(param_1,0x1000,param_3);
        if (1 < *param_3) {
          return;
        }
        param_1 = param_1 + 0x400;
        iVar1 = -0x1000;
      }
      else {
        uVar3 = 0x1000U - iVar1;
        if ((int)param_2 < (int)(0x1000U - iVar1)) {
          uVar3 = param_2;
        }
        puVar5 = param_1;
        puVar6 = (undefined4 *)(iVar1 + 0x14 + (int)this);
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        param_1 = (undefined4 *)((int)param_1 + uVar3);
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        iVar1 = -uVar3;
        *(uint *)((int)this + 8) = *(int *)((int)this + 8) + uVar3;
      }
      param_2 = param_2 + iVar1;
    } while( true );
  }
  **(undefined4 **)((int)this + 0x2018) = param_1;
  *(uint *)(*(int *)((int)this + 0x2018) + 4) = param_2;
  iVar1 = *(int *)((int)this + 0x2018);
  iVar2 = *(int *)(iVar1 + 4);
  while ((iVar2 != 0 && (*param_3 < 2))) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      (**(code **)(**(int **)((int)this + 4) + 0x10))((int)this + 0x14,0x1000,param_3);
      *(int *)(*(int *)((int)this + 0x2018) + 0xc) = (int)this + 0x14;
      *(undefined4 *)(*(int *)((int)this + 0x2018) + 0x10) = 0x1000;
    }
    uVar3 = FUN_00ac7510(*(int **)((int)this + 0x2018),0);
    if (uVar3 != 0) {
      FUN_00a10f50(param_3,(int *)&DAT_00e6dec8);
    }
    iVar1 = *(int *)((int)this + 0x2018);
    iVar2 = *(int *)(iVar1 + 4);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00abda00 @ 00abda00 ////

void __thiscall FUN_00abda00(void *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 8) != 0) {
    if (4 < DAT_010ca0a8) {
      FID_conflict__wprintf((wchar_t *)s_NetBuffer_flush_00e6f4a0);
    }
    if (*(undefined4 **)((int)this + 0x2018) == (undefined4 *)0x0) {
      (**(code **)(**(int **)((int)this + 4) + 0x10))
                ((int)this + 0x14,*(undefined4 *)((int)this + 8),param_1);
    }
    else {
      bVar2 = false;
      **(undefined4 **)((int)this + 0x2018) = 0;
      *(undefined4 *)(*(int *)((int)this + 0x2018) + 4) = 0;
      if (*param_1 < 2) {
        do {
          iVar1 = *(int *)(*(int *)((int)this + 0x2018) + 0x10);
          if ((iVar1 == 0) || (bVar2)) {
            (**(code **)(**(int **)((int)this + 4) + 0x10))((int)this + 0x14,0x1000 - iVar1,param_1)
            ;
            *(int *)(*(int *)((int)this + 0x2018) + 0xc) = (int)this + 0x14;
            *(undefined4 *)(*(int *)((int)this + 0x2018) + 0x10) = 0x1000;
            if (bVar2) break;
          }
          uVar3 = FUN_00ac7510(*(int **)((int)this + 0x2018),3);
          if (uVar3 != 0) {
            FUN_00a10f50(param_1,(int *)&DAT_00e6dec8);
          }
          if (*(int *)(*(int *)((int)this + 0x2018) + 0x10) != 0) {
            bVar2 = true;
          }
          if (1 < *param_1) {
            *(undefined4 *)((int)this + 8) = 0;
            return;
          }
        } while( true );
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
  }
  return;
}


//// FUNCTION FUN_00abdb00 @ 00abdb00 ////

void __fastcall FUN_00abdb00(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 4))();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}


//// FUNCTION FUN_00abdb20 @ 00abdb20 ////

void FUN_00abdb20(undefined4 *param_1,int *param_2)

{
  int iVar1;
  void *in_ECX;
  uint uVar2;
  byte bStack_8;
  byte bStack_7;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  
  iVar1 = param_1[1];
  if (0x1ffffffe < iVar1) {
    FUN_00a10f50(param_2,(int *)&DAT_00e6f190);
    return;
  }
  bStack_7 = (byte)iVar1;
  uVar2 = iVar1 >> 0x1f;
  bStack_6 = (byte)(iVar1 + (uVar2 & 0xff) >> 8);
  bStack_5 = (byte)(iVar1 + (uVar2 & 0xffff) >> 0x10);
  bStack_4 = (byte)(iVar1 + (uVar2 & 0xffffff) >> 0x18);
  bStack_8 = bStack_4 ^ bStack_5 ^ bStack_6 ^ bStack_7;
  FUN_00abd860(in_ECX,(undefined4 *)&bStack_8,5,param_2);
  if (*param_2 < 2) {
    FUN_00abd860(in_ECX,(undefined4 *)*param_1,param_1[1],param_2);
  }
  return;
}


//// FUNCTION FUN_00abdb4e @ 00abdb4e ////

void __thiscall FUN_00abdb4e(void *this)

{
  uint uVar1;
  undefined4 *unaff_EBP;
  void *unaff_EDI;
  byte bStack0000000c;
  byte bStack0000000d;
  byte bStack0000000e;
  byte bStack0000000f;
  byte bStack00000010;
  int *in_stack_0000001c;
  
  bStack0000000d = (byte)this;
  uVar1 = (int)this >> 0x1f;
  bStack0000000e = (byte)((int)this + (uVar1 & 0xff) >> 8);
  bStack0000000f = (byte)((int)this + (uVar1 & 0xffff) >> 0x10);
  bStack00000010 = (byte)((int)this + (uVar1 & 0xffffff) >> 0x18);
  bStack0000000c = bStack00000010 ^ bStack0000000f ^ bStack0000000e ^ bStack0000000d;
  FUN_00abd860(unaff_EDI,(undefined4 *)&stack0x0000000c,5,in_stack_0000001c);
  if (*in_stack_0000001c < 2) {
    FUN_00abd860(unaff_EDI,(undefined4 *)*unaff_EBP,unaff_EBP[1],in_stack_0000001c);
  }
  return;
}


//// FUNCTION FUN_00abdc10 @ 00abdc10 ////

int __thiscall FUN_00abdc10(void *this,int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int extraout_EAX;
  int extraout_EAX_00;
  undefined4 *puVar3;
  byte local_8;
  byte bStack_7;
  byte bStack_6;
  byte local_5;
  byte bStack_4;
  
  FUN_00abd6b0((int)this,(undefined4 *)&local_8,(undefined4 *)0x5,param_2);
  if (extraout_EAX == 0) {
    return 0;
  }
  if (1 < *param_2) {
    return -1;
  }
  if (local_8 != (byte)(bStack_4 ^ local_5 ^ bStack_6 ^ bStack_7)) {
    FUN_00a10f50(param_2,(int *)&DAT_00e6f130);
    return -1;
  }
  uVar2 = param_1[1];
  puVar3 = (undefined4 *)
           ((((uint)bStack_4 * 0x100 + (CONCAT11(bStack_4,local_5) & 0xff)) * 0x100 +
            (CONCAT12(bStack_4,CONCAT11(local_5,bStack_6)) & 0xff)) * 0x100 +
           (CONCAT12(local_5,CONCAT11(bStack_6,bStack_7)) & 0xff));
  iVar1 = uVar2 + (int)puVar3;
  param_1[1] = iVar1;
  if (param_1[2] < iVar1) {
    FUN_00a10e50(param_1,uVar2);
  }
  FUN_00abd6b0((int)this,(undefined4 *)(*param_1 + uVar2),puVar3,param_2);
  if (extraout_EAX_00 == 0) {
    FUN_00a10f50(param_2,(int *)&DAT_00e6f140);
    return -1;
  }
  return ((*param_2 < 2) - 1 & 0xfffffffe) + 1;
}


//// FUNCTION FUN_00abde20 @ 00abde20 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00abde20(void)

{
  _DAT_010ca0d8 = 0;
  _DAT_010ca0d0 = 0;
  return;
}


//// FUNCTION FUN_00abde30 @ 00abde30 ////

void FUN_00abde30(void)

{
  _atexit(FUN_00abde40);
  return;
}


//// FUNCTION FUN_00abde40 @ 00abde40 ////

void FUN_00abde40(void)

{
  FUN_00a10ef0(0x10ca0d0);
  return;
}


//// FUNCTION FUN_00abde50 @ 00abde50 ////

void __cdecl FUN_00abde50(int *param_1)

{
  undefined1 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((1 < *param_1) || (*param_1 == 1)) {
    local_4 = 0;
    local_8 = 0;
    local_c = &DAT_010b9370;
    FUN_00a110b0(param_1,&local_c,3);
    FID_conflict__fwprintf
              ((FILE *)PTR_DAT_00e6f50c,s__s__s___s_00e6f51c,PTR_s_Error_00e6f510,
               (&PTR_s_empty_00e68a48)[*param_1],local_c);
    _fflush((FILE *)PTR_DAT_00e6f50c);
    if (local_c != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
      _free(local_c);
    }
  }
  return;
}


//// FUNCTION FUN_00abded0 @ 00abded0 ////

void __cdecl FUN_00abded0(int *param_1)

{
  if (1 < *param_1) {
    FUN_00abde50(param_1);
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  return;
}


//// FUNCTION FUN_00abdef0 @ 00abdef0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00abdef0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  FILE *pFVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar5 = &DAT_00e6f52c;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00abdf26:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00abdf2b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00abdf26;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00abdf2b:
  if (iVar3 == 0) {
    _DAT_010ca0dc = 1;
    return;
  }
  pFVar4 = _fopen((char *)param_1,&DAT_00e6f528);
  if (pFVar4 == (FILE *)0x0) {
    FUN_00a9f950(&DAT_010ca0d0,&DAT_00e6ef40,(char *)param_1);
    FUN_00abded0((int *)&DAT_010ca0d0);
  }
  PTR_DAT_00e6f50c = (undefined *)pFVar4;
  return;
}


//// FUNCTION FUN_00abdfb0 @ 00abdfb0 ////

void __cdecl
FUN_00abdfb0(float param_1,float param_2,float param_3,float param_4,float *param_5,float *param_6,
            float *param_7,float *param_8)

{
  float fVar1;
  
  fVar1 = param_1 - param_2;
  *param_5 = fVar1 + fVar1 + param_3 + param_4;
  *param_6 = (-param_4 - (param_3 + param_3)) - fVar1 * 3.0;
  *param_7 = param_3;
  *param_8 = param_1;
  return;
}


//// FUNCTION FUN_00abe000 @ 00abe000 ////

uint __cdecl FUN_00abe000(float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
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
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  
  pfVar15 = param_1;
  fVar5 = *param_1;
  iVar23 = param_3 + -1;
  fVar3 = param_1[(int)param_2 * iVar23];
  fVar12 = (float)(iVar23 * iVar23);
  param_1 = (float *)0x0;
  fVar9 = fVar12 * fVar12;
  fVar10 = fVar9 * fVar12;
  fVar14 = 0.0;
  fVar13 = 0.0;
  fVar11 = 0.0;
  if (3 < param_3) {
    pfVar16 = pfVar15 + (int)param_2 * 3;
    pfVar21 = pfVar15 + (int)param_2 * 2;
    pfVar19 = pfVar15 + (int)param_2;
    iVar22 = 2;
    pfVar20 = pfVar15;
    fVar11 = 0.0;
    do {
      fVar6 = (float)(iVar22 + -1);
      pfVar18 = param_1 + 1;
      fVar7 = (float)iVar22;
      fVar8 = (float)(iVar22 + 1);
      fVar4 = *pfVar19;
      pfVar19 = pfVar19 + (int)param_2 * 4;
      fVar11 = fVar8 * fVar8 * fVar8 * *pfVar16 +
               fVar7 * *pfVar21 * fVar7 * fVar7 +
               fVar6 * fVar6 * fVar6 * fVar4 +
               (float)(int)param_1 * (float)(int)param_1 * (float)(int)param_1 * *pfVar20 + fVar11;
      pfVar20 = pfVar20 + (int)param_2 * 4;
      pfVar21 = pfVar21 + (int)param_2 * 4;
      pfVar16 = pfVar16 + (int)param_2 * 4;
      iVar22 = iVar22 + 4;
      param_1 = pfVar18;
    } while ((int)pfVar18 <= param_3 + -4);
  }
  if ((int)param_1 <= iVar23) {
    pfVar16 = pfVar15 + (int)param_1 * (int)param_2;
    do {
      fVar6 = (float)(int)param_1;
      param_1 = (float *)((int)param_1 + 1);
      fVar4 = *pfVar16;
      pfVar16 = pfVar16 + (int)param_2;
      fVar11 = fVar6 * fVar6 * fVar6 * fVar4 + fVar11;
    } while ((int)param_1 <= iVar23);
  }
  param_1 = (float *)0x0;
  if (3 < param_3) {
    pfVar16 = pfVar15 + (int)param_2 * 3;
    pfVar21 = pfVar15 + (int)param_2 * 2;
    pfVar19 = pfVar15 + (int)param_2;
    iVar22 = 2;
    pfVar20 = pfVar15;
    do {
      pfVar18 = param_1 + 1;
      fVar4 = *pfVar19;
      pfVar19 = pfVar19 + (int)param_2 * 4;
      fVar13 = (float)(iVar22 + 1) * (float)(iVar22 + 1) * *pfVar16 +
               (float)iVar22 * (float)iVar22 * *pfVar21 +
               (float)(iVar22 + -1) * (float)(iVar22 + -1) * fVar4 +
               (float)(int)param_1 * *pfVar20 * (float)(int)param_1 + fVar13;
      pfVar20 = pfVar20 + (int)param_2 * 4;
      pfVar21 = pfVar21 + (int)param_2 * 4;
      pfVar16 = pfVar16 + (int)param_2 * 4;
      iVar22 = iVar22 + 4;
      param_1 = pfVar18;
    } while ((int)pfVar18 <= param_3 + -4);
  }
  if ((int)param_1 <= iVar23) {
    pfVar16 = pfVar15 + (int)param_1 * (int)param_2;
    do {
      fVar6 = (float)(int)param_1;
      param_1 = (float *)((int)param_1 + 1);
      fVar4 = *pfVar16;
      pfVar16 = pfVar16 + (int)param_2;
      fVar13 = fVar6 * fVar6 * fVar4 + fVar13;
    } while ((int)param_1 <= iVar23);
  }
  param_1 = (float *)0x0;
  if (3 < param_3) {
    pfVar16 = pfVar15 + (int)param_2 * 3;
    pfVar21 = pfVar15 + (int)param_2 * 2;
    iVar22 = 2;
    pfVar19 = pfVar15 + (int)param_2;
    pfVar20 = pfVar15;
    do {
      fVar6 = (float)(int)param_1;
      param_1 = param_1 + 1;
      iVar1 = iVar22 + -1;
      fVar4 = *pfVar19;
      fVar7 = (float)iVar22;
      iVar2 = iVar22 + 1;
      iVar22 = iVar22 + 4;
      pfVar19 = pfVar19 + (int)param_2 * 4;
      fVar14 = (float)iVar2 * *pfVar16 +
               fVar7 * *pfVar21 + (float)iVar1 * fVar4 + fVar6 * *pfVar20 + fVar14;
      pfVar20 = pfVar20 + (int)param_2 * 4;
      pfVar21 = pfVar21 + (int)param_2 * 4;
      pfVar16 = pfVar16 + (int)param_2 * 4;
    } while ((int)param_1 <= param_3 + -4);
  }
  pfVar16 = param_2;
  if ((int)param_1 <= iVar23) {
    pfVar16 = pfVar15 + (int)param_1 * (int)param_2;
    do {
      fVar6 = (float)(int)param_1;
      param_1 = (float *)((int)param_1 + 1);
      fVar4 = *pfVar16;
      pfVar16 = pfVar16 + (int)param_2;
      fVar14 = fVar6 * fVar4 + fVar14;
    } while ((int)param_1 <= iVar23);
  }
  fVar13 = fVar13 * (float)iVar23;
  fVar4 = fVar13 * 600.0;
  fVar6 = (((fVar11 * fVar12 * 420.0 +
            (((fVar14 * fVar9 * 240.0 +
              ((fVar14 * fVar10 * 240.0 +
               fVar5 * 77.0 * fVar9 +
               ((fVar5 * 13.0 * fVar10 +
                (fVar11 * 420.0 + fVar3 * 28.0) * fVar9 +
                (((fVar3 + fVar3) - fVar5 * 7.0) * fVar9 * fVar9 - fVar3 * 13.0 * fVar10)) -
               fVar13 * fVar9 * 660.0)) - fVar5 * 63.0 * fVar12)) - fVar13 * fVar12 * 660.0) -
            fVar3 * 37.0 * fVar12)) - fVar5 * 20.0) + fVar3 * 20.0 + fVar4) -
          fVar14 * fVar12 * 600.0;
  if (4.440892e-16 <= ABS(fVar6)) {
    fVar9 = (((fVar10 + fVar9 * fVar9) - fVar9 * 21.0) - fVar12) + 20.0;
    fVar10 = ABS(fVar9);
    uVar17 = CONCAT22((short)((uint)pfVar16 >> 0x10),
                      (ushort)(fVar10 < 2.220446e-16) << 8 | (ushort)NAN(fVar10) << 10 |
                      (ushort)(fVar10 == 2.220446e-16) << 0xe);
    if (fVar10 < 2.220446e-16) goto LAB_00abe503;
    fVar6 = fVar6 / fVar9;
  }
  else {
    fVar6 = 0.0;
  }
  *param_4 = fVar6;
  uVar17 = __isnan((double)fVar6);
  if (uVar17 == 0) {
    fVar12 = (float)(iVar23 * iVar23);
    fVar9 = fVar12 * fVar12;
    fVar10 = fVar9 * fVar12;
    fVar3 = (((((((fVar5 * 28.0 + fVar4) * fVar9 +
                 (((fVar3 * fVar9 * 77.0 +
                    fVar3 * 13.0 * fVar10 +
                    ((fVar13 * fVar12 * 600.0 + ((fVar5 + fVar5) - fVar3 * 7.0) * fVar9 * fVar9) -
                    fVar5 * 13.0 * fVar10) + fVar4 + fVar5 * 20.0) - fVar10 * fVar14 * 180.0) -
                 fVar9 * fVar11 * 420.0)) - fVar3 * 63.0 * fVar12) - fVar5 * 37.0 * fVar12) -
              fVar12 * fVar11 * 420.0) - fVar12 * fVar14 * 600.0) - fVar9 * fVar14 * 180.0) -
            fVar3 * 20.0;
    if (ABS(fVar3) < 4.440892e-16) {
      fVar3 = 0.0;
    }
    else {
      fVar5 = (((fVar10 + fVar9 * fVar9) - fVar9 * 21.0) - fVar12) + 20.0;
      fVar11 = ABS(fVar5);
      uVar17 = (uint)(ushort)((ushort)(fVar11 < 2.220446e-16) << 8 | (ushort)NAN(fVar11) << 10 |
                             (ushort)(fVar11 == 2.220446e-16) << 0xe);
      if (fVar11 < 2.220446e-16) goto LAB_00abe503;
      fVar3 = (-1.0 / fVar5) * fVar3;
    }
    *param_5 = fVar3;
    iVar23 = __isnan((double)fVar3);
    return CONCAT31((int3)((uint)-iVar23 >> 8),'\x01' - (iVar23 != 0));
  }
LAB_00abe503:
  return uVar17 & 0xffffff00;
}


//// FUNCTION FUN_00abe6a0 @ 00abe6a0 ////

int __fastcall FUN_00abe6a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;
}


//// FUNCTION FUN_00abe760 @ 00abe760 ////

void __cdecl FUN_00abe760(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
  }
  return;
}


//// FUNCTION FUN_00abe7d0 @ 00abe7d0 ////

void __cdecl FUN_00abe7d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-5] = param_2[-5];
    param_3[-4] = param_2[-4];
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -5;
    param_3 = param_3 + -5;
  }
  return;
}


//// FUNCTION FUN_00abe9f0 @ 00abe9f0 ////

void __cdecl FUN_00abe9f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
    }
    param_3 = param_3 + 5;
  }
  return;
}


//// FUNCTION FUN_00abea40 @ 00abea40 ////

void __cdecl FUN_00abea40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
    }
    param_3 = param_3 + 5;
  }
  return;
}


//// FUNCTION FUN_00abead0 @ 00abead0 ////

void __cdecl FUN_00abead0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      param_1[4] = param_3[4];
    }
    param_1 = param_1 + 5;
  }
  return;
}


//// FUNCTION FUN_00abebd0 @ 00abebd0 ////

void __fastcall FUN_00abebd0(int param_1)

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


//// FUNCTION FUN_00abec00 @ 00abec00 ////

undefined4 * FUN_00abec00(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00abead0(param_1,param_2,param_3);
  return param_1 + param_2 * 5;
}


//// FUNCTION FUN_00abec30 @ 00abec30 ////

void __fastcall FUN_00abec30(int param_1)

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


//// FUNCTION FUN_00abec60 @ 00abec60 ////

void FUN_00abec60(void)

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
  puStack_8 = &LAB_00cfdae8;
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


//// FUNCTION FUN_00abed20 @ 00abed20 ////

void __thiscall FUN_00abed20(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfdb00;
  local_10 = ExceptionList;
  local_28 = *param_3;
  local_24 = param_3[1];
  iVar3 = *(int *)((int)this + 4);
  local_20 = param_3[2];
  local_1c = param_3[3];
  local_18 = param_3[4];
  local_14 = &stack0xffffffcc;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x14;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x14;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffcc;
    if (0xcccccccU - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_00abec60();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x14;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0xccccccc - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x14;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_00abe6a0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x14);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_00abea40(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00abead0(puVar5,param_2,&local_28);
      FUN_00abea40(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 5);
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x14;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 5;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 5;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 0x14) < param_2) {
      FUN_00abea40(param_1,puVar4,param_1 + param_2 * 5);
      local_8 = 2;
      FUN_00abec00(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x14,&local_28)
      ;
      iVar3 = *(int *)((int)this + 8) + param_2 * 0x14;
      *(int *)((int)this + 8) = iVar3;
      FUN_00abe760(param_1,(undefined4 *)(iVar3 + param_2 * -0x14),&local_28);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00abea40(puVar4 + param_2 * -5,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00abe7d0(param_1,puVar4 + param_2 * -5,puVar4);
    FUN_00abe760(param_1,param_1 + param_2 * 5,&local_28);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00abf000 @ 00abf000 ////

int __thiscall FUN_00abf000(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfdb10;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0xccccccc < uVar1) {
      uVar1 = FUN_00abec60();
    }
    puVar2 = operator_new(uVar1 * 0x14);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1 * 5;
    local_8 = 0;
    uVar3 = FUN_00abe9f0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),puVar2);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_00abf0d0 @ 00abf0d0 ////

void __thiscall FUN_00abf0d0(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x14 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x14;
      goto LAB_00abf115;
    }
  }
  iVar1 = 0;
LAB_00abf115:
  FUN_00abed20(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x14;
  return;
}


//// FUNCTION FUN_00abf140 @ 00abf140 ////

void __thiscall FUN_00abf140(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x14) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x14))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00abead0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 5;
    return;
  }
  FUN_00abf0d0(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00abf1d0 @ 00abf1d0 ////

void * __cdecl FUN_00abf1d0(void *param_1,float *param_2,float *param_3,uint param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float10 fVar13;
  float10 fVar14;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float10 fVar15;
  ulonglong uVar16;
  int *piVar17;
  int local_cc;
  float *local_c8;
  int local_c0;
  float *local_bc;
  float *local_b8;
  float *local_b0;
  int local_ac;
  float local_a8;
  uint local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float *local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float *local_80;
  float *local_7c;
  float *local_78;
  int local_74;
  float local_70;
  float local_6c;
  float *local_68;
  undefined1 local_64 [4];
  void *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [4];
  int *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  float *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  float local_30;
  float *local_2c;
  float local_28;
  undefined1 local_24;
  undefined1 local_23;
  int local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfdb38;
  local_c = ExceptionList;
  local_70 = 0.0;
  local_60 = (void *)0x0;
  local_5c = 0;
  local_58 = 0;
  local_98 = *param_2;
  local_cc = 0;
  local_50 = (int *)0x0;
  local_4c = 0;
  local_48 = 0;
  local_40 = (float *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_00567490(local_44,param_4);
  if (0 < (int)param_4) {
    local_c0 = 2;
    local_a4 = param_4;
    pfVar12 = local_40;
    do {
      iVar10 = local_c0 + -4;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      if ((int)param_4 <= iVar10) {
        iVar10 = param_4 - 1;
      }
      iVar11 = local_c0;
      if (local_c0 < 0) {
        iVar11 = 0;
      }
      if ((int)param_4 <= iVar11) {
        iVar11 = param_4 - 1;
      }
      iVar6 = (iVar11 - iVar10) + 1;
      if (3 < iVar6) {
        local_b8 = param_2 + iVar10 * (int)param_3;
        local_c8 = param_2 + (iVar10 + 3) * (int)param_3;
        local_bc = param_2 + (iVar10 + 2) * (int)param_3;
        local_b0 = param_2 + (iVar10 + 1) * (int)param_3;
        iVar7 = ((iVar11 - iVar10) - 3U >> 2) + 1;
        iVar10 = iVar10 + iVar7 * 4;
        do {
          fVar1 = *local_b8;
          fVar2 = *pfVar12;
          *pfVar12 = fVar1 + fVar2;
          fVar1 = fVar1 + fVar2 + *local_b0;
          *pfVar12 = fVar1;
          fVar1 = fVar1 + *local_bc;
          *pfVar12 = fVar1;
          local_b8 = local_b8 + (int)param_3 * 4;
          *pfVar12 = fVar1 + *local_c8;
          local_b0 = local_b0 + (int)param_3 * 4;
          local_bc = local_bc + (int)param_3 * 4;
          local_c8 = local_c8 + (int)param_3 * 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (iVar10 <= iVar11) {
        pfVar8 = param_2 + iVar10 * (int)param_3;
        iVar10 = (iVar11 - iVar10) + 1;
        do {
          fVar1 = *pfVar8;
          pfVar8 = pfVar8 + (int)param_3;
          iVar10 = iVar10 + -1;
          *pfVar12 = fVar1 + *pfVar12;
        } while (iVar10 != 0);
      }
      local_c0 = local_c0 + 1;
      local_a4 = local_a4 - 1;
      *pfVar12 = *pfVar12 / (float)iVar6;
      pfVar12 = pfVar12 + 1;
    } while (local_a4 != 0);
    local_a4 = 0;
  }
  local_a0 = (float)(param_4 - 1);
  local_90 = local_a0;
  FUN_0040ec60(local_54,(undefined4 *)0x0,1,&local_a0);
  fVar1 = param_5 * param_5;
  if (0 < (int)local_90) {
    local_c8 = (float *)local_50;
    do {
      if ((float)local_cc == *local_c8) {
        local_c8 = local_c8 + 1;
      }
      iVar10 = local_cc + 1;
      local_78 = (float *)0x0;
      local_a0 = 0.0;
      local_ac = iVar10;
      local_a4 = iVar10;
      local_74 = iVar10;
      if (iVar10 <= (int)*local_c8) {
        local_84 = (float)local_cc;
        local_68 = param_2 + local_cc * (int)param_3;
        iVar11 = iVar10 - local_cc;
        local_b8 = param_2 + iVar10 * (int)param_3;
LAB_00abf480:
        fVar2 = *local_b8;
        fVar5 = (float)iVar10 - local_84;
        iVar6 = local_cc + 1;
        fVar3 = 0.0;
        local_a8 = fVar5;
        if (3 < iVar11 + -1) {
          local_9c = 1.0 / fVar5;
          pfVar12 = param_2 + iVar6 * (int)param_3;
          local_8c = (float)((iVar6 - local_cc) + 2);
          fVar3 = 0.0;
          local_94 = param_2 + (local_cc + 4) * (int)param_3;
          local_80 = param_2 + (local_cc + 3) * (int)param_3;
          local_7c = param_2 + (local_cc + 2) * (int)param_3;
          do {
            fVar4 = (float)((int)local_8c + -2) * local_9c;
            fVar4 = *pfVar12 - (fVar4 * fVar2 + (1.0 - fVar4) * local_98);
            fVar4 = fVar4 * fVar4;
            if (fVar1 < fVar4) goto LAB_00abf6c3;
            fVar3 = fVar4 + fVar3;
            fVar4 = (float)((int)local_8c + -1) * local_9c;
            fVar4 = *local_7c - (fVar4 * fVar2 + (1.0 - fVar4) * local_98);
            fVar4 = fVar4 * fVar4;
            if (fVar1 < fVar4) {
              iVar6 = iVar6 + 1;
              goto LAB_00abf6c3;
            }
            fVar3 = fVar4 + fVar3;
            fVar4 = *local_80 -
                    ((float)(int)local_8c * local_9c * fVar2 +
                    (1.0 - (float)(int)local_8c * local_9c) * local_98);
            fVar4 = fVar4 * fVar4;
            if (fVar1 < fVar4) {
              iVar6 = iVar6 + 2;
              goto LAB_00abf6c3;
            }
            fVar3 = fVar4 + fVar3;
            fVar4 = (float)((int)local_8c + 1) * local_9c;
            fVar4 = *local_94 - (fVar4 * fVar2 + (1.0 - fVar4) * local_98);
            fVar4 = fVar4 * fVar4;
            if (fVar1 < fVar4) {
              iVar6 = iVar6 + 3;
              goto LAB_00abf6c3;
            }
            fVar3 = fVar4 + fVar3;
            pfVar12 = pfVar12 + (int)param_3 * 4;
            local_7c = local_7c + (int)param_3 * 4;
            local_80 = local_80 + (int)param_3 * 4;
            local_94 = local_94 + (int)param_3 * 4;
            local_8c = (float)((int)local_8c + 4);
            iVar6 = iVar6 + 4;
          } while (iVar6 < iVar11 + -3 + local_cc);
        }
        if (iVar6 < iVar10) {
          local_a8 = (float)(iVar6 - local_cc);
          pfVar12 = param_2 + iVar6 * (int)param_3;
          do {
            fVar4 = (float)(int)local_a8 * (1.0 / fVar5);
            fVar4 = *pfVar12 - (fVar4 * fVar2 + (1.0 - fVar4) * local_98);
            fVar4 = fVar4 * fVar4;
            if (fVar1 < fVar4) goto LAB_00abf6c3;
            iVar6 = iVar6 + 1;
            fVar3 = fVar4 + fVar3;
            local_a8 = (float)((int)local_a8 + 1);
            pfVar12 = pfVar12 + (int)param_3;
          } while (iVar6 < iVar10);
          goto LAB_00abf6cb;
        }
        goto LAB_00abf6cf;
      }
LAB_00abf888:
      if (((int)local_a4 < local_74 + -1) && (2 < local_74 - local_cc)) {
        local_23 = (float)local_74 == *local_c8;
        local_30 = param_2[local_74 * (int)param_3];
        local_2c = local_78;
        piVar17 = &local_34;
        local_28 = local_a0;
        local_24 = 0;
        local_cc = local_74;
        local_34 = local_74;
      }
      else {
        local_1c = param_2[local_a4 * (int)param_3];
        piVar17 = &local_20;
        local_18 = param_2[((int)(local_a4 + local_cc) / 2) * (int)param_3 + (int)param_3 / 2];
        local_f = (float)local_a4 == *local_c8;
        local_cc = local_a4;
        local_20 = local_a4;
        local_14 = 0;
        local_10 = 1;
      }
      FUN_00abf140(local_64,piVar17);
    } while (local_cc < (int)local_90);
  }
  FUN_00abf000(param_1,(int)local_64);
  if (local_40 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if (local_50 == (int *)0x0) {
    if (local_60 == (void *)0x0) {
      ExceptionList = local_c;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_50);
LAB_00abf6c3:
  local_9c = 1.0 / fVar5;
  if (iVar10 <= iVar6) {
LAB_00abf6cb:
    local_9c = 1.0 / fVar5;
LAB_00abf6cf:
    if (fVar3 < (float)iVar11 * fVar1 * 0.5) {
      local_a4 = iVar10;
    }
  }
  local_6c = *local_68;
  local_70 = *local_b8;
  local_ac = iVar10;
  uVar9 = FUN_00abe000(local_68,param_3,iVar11 + 1,(float *)&local_b0,&local_88);
  if ((char)uVar9 != '\0') {
    fVar2 = local_6c - local_70;
    local_8c = fVar2 + fVar2 + (float)local_b0 + local_88;
    local_94 = (float *)((-local_88 - ((float)local_b0 + (float)local_b0)) - fVar2 * 3.0);
    fVar13 = (float10)0.0;
    fVar14 = (float10)local_84;
    if (fVar14 < (float10)iVar10) {
      local_a8 = (float)iVar11;
      do {
        fVar13 = fVar14;
        uVar16 = FUN_00acd42c();
        iVar6 = (int)uVar16;
        fVar14 = (extraout_ST1 - (float10)local_84) / (float10)local_a8;
        fVar15 = ((extraout_ST1 - (float10)iVar6) * (float10)param_2[(iVar6 + 1) * (int)param_3] +
                 ((float10)1.0 - (extraout_ST1 - (float10)iVar6)) *
                 (float10)param_2[iVar6 * (int)param_3]) -
                 (((fVar14 * (float10)local_8c + (float10)(float)local_94) * fVar14 +
                  (float10)(float)local_b0) * fVar14 + (float10)local_6c);
        fVar15 = fVar15 * fVar15;
        fVar14 = extraout_ST1;
        if (extraout_ST0 < fVar15) break;
        fVar13 = fVar15 * (float10)0.25 + fVar13;
        fVar14 = extraout_ST1 + (float10)0.25;
      } while (fVar14 < (float10)iVar10);
    }
    if (((float10)iVar10 <= fVar14) && (fVar13 < (float10)iVar11 * (float10)fVar1 * (float10)0.5)) {
      local_78 = local_b0;
      local_a0 = local_88;
      local_74 = iVar10;
    }
  }
  local_b8 = local_b8 + (int)param_3;
  iVar10 = iVar10 + 1;
  iVar11 = iVar11 + 1;
  local_ac = iVar10;
  if ((int)*local_c8 < iVar10) goto LAB_00abf888;
  goto LAB_00abf480;
}


//// FUNCTION FUN_00abf9e0 @ 00abf9e0 ////

int __cdecl FUN_00abf9e0(int *param_1,uint *param_2,uint *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00abfa40(param_1,0x13,0x13,0,0,param_3,param_2,param_4);
  if (iVar1 == -3) {
    *(char **)(param_4 + 0x18) = s_oversubscribed_dynamic_bit_lengt_00e6f558;
    return -3;
  }
  if (iVar1 == -5) {
    FUN_00ac0150(*param_3,param_4);
    *(char **)(param_4 + 0x18) = s_incomplete_dynamic_bit_lengths_t_00e6f534;
    iVar1 = -3;
  }
  return iVar1;
}


//// FUNCTION FUN_00abfa40 @ 00abfa40 ////

undefined4 __cdecl
FUN_00abfa40(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint *param_6,
            uint *param_7,int param_8)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  uint local_578;
  uint local_574;
  int local_570;
  uint *local_56c;
  undefined4 uStack_568;
  uint uStack_564;
  uint local_560;
  uint *local_558;
  uint local_554;
  int local_548;
  uint local_544;
  uint local_53c [31];
  uint auStack_4c0 [16];
  uint local_480 [288];
  
  uVar18 = 0;
  local_53c[0] = 0;
  local_53c[1] = 0;
  local_53c[2] = 0;
  local_53c[3] = 0;
  local_53c[4] = 0;
  local_53c[5] = 0;
  local_53c[6] = 0;
  local_53c[7] = 0;
  local_53c[8] = 0;
  local_53c[9] = 0;
  local_53c[10] = 0;
  local_53c[0xb] = 0;
  local_53c[0xc] = 0;
  local_53c[0xd] = 0;
  local_53c[0xe] = 0;
  local_53c[0xf] = 0;
  piVar9 = param_1;
  uVar14 = param_2;
  do {
    iVar17 = *piVar9;
    piVar9 = piVar9 + 1;
    uVar14 = uVar14 - 1;
    local_53c[iVar17] = local_53c[iVar17] + 1;
  } while (uVar14 != 0);
  if (local_53c[0] == param_2) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    local_574 = 1;
    puVar16 = local_53c;
    do {
      puVar16 = puVar16 + 1;
      if (*puVar16 != 0) break;
      local_574 = local_574 + 1;
    } while (local_574 < 0x10);
    local_578 = *param_7;
    if (*param_7 < local_574) {
      local_578 = local_574;
    }
    uVar14 = 0xf;
    puVar16 = local_53c + 0xf;
    do {
      if (*puVar16 != 0) break;
      uVar14 = uVar14 - 1;
      puVar16 = puVar16 + -1;
    } while (uVar14 != 0);
    if (uVar14 < local_578) {
      local_578 = uVar14;
    }
    *param_7 = local_578;
    iVar17 = 1 << ((byte)local_574 & 0x1f);
    if (local_574 < uVar14) {
      puVar16 = local_53c + local_574;
      uVar10 = local_574;
      do {
        uVar15 = *puVar16;
        if ((int)(iVar17 - uVar15) < 0) {
          return 0xfffffffd;
        }
        uVar10 = uVar10 + 1;
        puVar16 = puVar16 + 1;
        iVar17 = (iVar17 - uVar15) * 2;
      } while (uVar10 < uVar14);
    }
    iVar17 = iVar17 - local_53c[uVar14];
    if (iVar17 < 0) {
      return 0xfffffffd;
    }
    local_53c[0x11] = 0;
    local_53c[uVar14] = local_53c[uVar14] + iVar17;
    iVar11 = 0;
    iVar5 = uVar14 - 1;
    if (iVar5 != 0) {
      iVar12 = 0;
      do {
        iVar11 = iVar11 + *(int *)((int)local_53c + iVar12 + 4);
        iVar5 = iVar5 + -1;
        *(int *)((int)local_53c + iVar12 + 0x48) = iVar11;
        iVar12 = iVar12 + 4;
      } while (iVar5 != 0);
    }
    uVar10 = 0;
    do {
      iVar5 = *param_1;
      param_1 = param_1 + 1;
      if (iVar5 != 0) {
        uVar15 = local_53c[iVar5 + 0x10];
        local_480[uVar15] = uVar10;
        local_53c[iVar5 + 0x10] = uVar15 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_2);
    local_56c = local_480;
    uVar10 = 0;
    iVar5 = -local_578;
    local_560 = 0;
    local_53c[0x10] = 0;
    local_570 = -1;
    auStack_4c0[1] = 0;
    local_544 = 0;
    if ((int)local_574 <= (int)uVar14) {
      local_548 = local_574 - 1;
      local_558 = local_53c + local_574;
      do {
        uVar15 = *local_558;
        uVar2 = uStack_568;
        while (uVar15 != 0) {
          uStack_568._2_2_ = (undefined2)((uint)uVar2 >> 0x10);
          local_554 = uVar15 - 1;
          uVar3 = uStack_568._2_2_;
          iVar11 = iVar5;
          while (uStack_568 = uVar2, iVar11 = iVar11 + local_578, iVar11 < (int)local_574) {
            iVar5 = iVar5 + local_578;
            iVar12 = local_570 + 1;
            uVar18 = uVar14 - iVar5;
            if (local_578 < uVar14 - iVar5) {
              uVar18 = local_578;
            }
            uVar10 = local_574 - iVar5;
            uVar6 = 1 << ((byte)uVar10 & 0x1f);
            if ((uVar15 < uVar6) &&
               (iVar7 = uVar6 + (-1 - local_554), puVar16 = local_558, uVar10 < uVar18)) {
              while (uVar10 = uVar10 + 1, uVar10 < uVar18) {
                uVar6 = puVar16[1];
                uVar8 = iVar7 * 2;
                if (uVar8 < uVar6 || uVar8 - uVar6 == 0) break;
                iVar7 = uVar8 - uVar6;
                puVar16 = puVar16 + 1;
              }
            }
            uVar18 = 1 << ((byte)uVar10 & 0x1f);
            iVar7 = (**(code **)(param_8 + 0x20))(*(undefined4 *)(param_8 + 0x28),uVar18 + 1,8);
            if (iVar7 == 0) {
              if (iVar12 != 0) {
                FUN_00ac0150(auStack_4c0[1],param_8);
              }
              return 0xfffffffc;
            }
            local_544 = iVar7 + 8;
            *param_6 = local_544;
            *(uint *)(iVar7 + 4) = 0;
            auStack_4c0[local_570 + 2] = local_544;
            if (iVar12 != 0) {
              local_53c[local_570 + 0x11] = local_560;
              uStack_568._2_2_ = (undefined2)((uint)uStack_568 >> 0x10);
              uStack_568._0_2_ = CONCAT11((char)local_578,(byte)uVar10);
              uVar10 = auStack_4c0[iVar12];
              uVar6 = local_560 >> ((char)iVar5 - (char)local_578 & 0x1fU);
              *(undefined4 *)(uVar10 + uVar6 * 8) = uStack_568;
              *(uint *)(uVar10 + 4 + uVar6 * 8) = local_544;
              uStack_564 = local_544;
            }
            uVar10 = local_560;
            param_6 = (uint *)(iVar7 + 4);
            local_570 = iVar12;
            uVar2 = uStack_568;
            uVar3 = uStack_568._2_2_;
          }
          bVar4 = (byte)iVar5;
          if (local_56c < local_480 + param_2) {
            uStack_564 = *local_56c;
            if (uStack_564 < param_3) {
              uStack_568._0_1_ = (-(uStack_564 < 0x100) & 0xa0U) + 0x60;
            }
            else {
              iVar11 = (uStack_564 - param_3) * 4;
              uStack_568._0_1_ = *(char *)(iVar11 + param_5) + 'P';
              uStack_564 = *(uint *)(iVar11 + param_4);
            }
            local_56c = local_56c + 1;
          }
          else {
            uStack_568._0_1_ = -0x40;
          }
          uStack_568 = CONCAT31(CONCAT21(uVar3,(char)local_574 - bVar4),(char)uStack_568);
          iVar11 = 1 << ((char)local_574 - bVar4 & 0x1f);
          uVar15 = uVar10 >> (bVar4 & 0x1f);
          if (uVar15 < uVar18) {
            puVar13 = (undefined4 *)(local_544 + uVar15 * 8);
            do {
              uVar15 = uVar15 + iVar11;
              *puVar13 = uStack_568;
              puVar13[1] = uStack_564;
              puVar13 = puVar13 + iVar11 * 2;
              uVar10 = local_560;
            } while (uVar15 < uVar18);
          }
          uVar6 = 1 << ((byte)local_548 & 0x1f);
          uVar15 = uVar10 & uVar6;
          while (uVar15 != 0) {
            uVar10 = uVar10 ^ uVar6;
            uVar6 = uVar6 >> 1;
            uVar15 = uVar10 & uVar6;
          }
          uVar10 = uVar10 ^ uVar6;
          puVar16 = local_53c + local_570 + 0x10;
          uVar15 = local_554;
          uVar2 = uStack_568;
          local_560 = uVar10;
          if (((1 << (bVar4 & 0x1f)) - 1U & uVar10) != local_53c[local_570 + 0x10]) {
            do {
              iVar5 = iVar5 - local_578;
              local_570 = local_570 + -1;
              puVar1 = puVar16 + -1;
              puVar16 = puVar16 + -1;
            } while (((1 << ((byte)iVar5 & 0x1f)) - 1U & uVar10) != *puVar1);
          }
        }
        local_558 = local_558 + 1;
        local_574 = local_574 + 1;
        local_548 = local_548 + 1;
        uStack_568 = uVar2;
      } while ((int)local_574 <= (int)uVar14);
    }
    if ((iVar17 != 0) && (uVar14 != 1)) {
      return 0xfffffffb;
    }
  }
  return 0;
}


//// FUNCTION FUN_00abff00 @ 00abff00 ////

int __cdecl
FUN_00abff00(uint param_1,uint param_2,int *param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,int param_8)

{
  int iVar1;
  
  iVar1 = FUN_00abfa40(param_3,param_1,0x101,0xd7d020,0xd7d09c,param_6,param_4,param_8);
  if (iVar1 == 0) {
    iVar1 = FUN_00abfa40(param_3 + param_1,param_2,0,0xd7d118,0xd7d190,param_7,param_5,param_8);
    if (iVar1 != 0) {
      if (iVar1 == -3) {
        *(char **)(param_8 + 0x18) = s_oversubscribed_literal_length_tr_00e6f5a0;
      }
      else if (iVar1 == -5) {
        FUN_00ac0150(*param_7,param_8);
        *(char **)(param_8 + 0x18) = s_incomplete_literal_length_tree_00e6f580;
        iVar1 = -3;
      }
      FUN_00ac0150(*param_6,param_8);
      return iVar1;
    }
    iVar1 = 0;
  }
  else {
    if (iVar1 == -3) {
      *(char **)(param_8 + 0x18) = s_oversubscribed_literal_length_tr_00e6f5a0;
      return -3;
    }
    if (iVar1 == -5) {
      FUN_00ac0150(*param_6,param_8);
      *(char **)(param_8 + 0x18) = s_incomplete_literal_length_tree_00e6f580;
      return -3;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00abfff0 @ 00abfff0 ////

undefined4 __cdecl
FUN_00abfff0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_4bc;
  undefined1 local_4b8 [32];
  undefined1 *local_498;
  undefined4 local_494;
  undefined1 *local_490;
  int local_480 [144];
  undefined4 local_240 [112];
  undefined4 local_80 [24];
  undefined4 local_20 [8];
  
  local_490 = (undefined1 *)&local_4bc;
  if (DAT_010cb180 == 0) {
    piVar3 = local_480;
    for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 8;
      piVar3 = piVar3 + 1;
    }
    puVar2 = local_240;
    for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 9;
      puVar2 = puVar2 + 1;
    }
    local_4bc = 0x212;
    puVar2 = local_80;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 7;
      puVar2 = puVar2 + 1;
    }
    local_498 = &LAB_00ac0130;
    puVar2 = local_20;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 8;
      puVar2 = puVar2 + 1;
    }
    local_494 = 0;
    DAT_010cb17c = 7;
    FUN_00abfa40(local_480,0x120,0x101,0xd7d020,0xd7d09c,&DAT_010ca0e4,&DAT_010cb17c,(int)local_4b8)
    ;
    DAT_010cb178 = 5;
    piVar3 = local_480;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 5;
      piVar3 = piVar3 + 1;
    }
    FUN_00abfa40(local_480,0x1e,0,0xd7d118,0xd7d190,&DAT_010ca0e0,&DAT_010cb178,(int)local_4b8);
    DAT_010cb180 = 1;
  }
  *param_1 = DAT_010cb17c;
  *param_2 = DAT_010cb178;
  *param_3 = DAT_010ca0e4;
  *param_4 = DAT_010ca0e0;
  return 0;
}


//// FUNCTION FUN_00ac0150 @ 00ac0150 ////

undefined4 __cdecl FUN_00ac0150(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    do {
      iVar2 = param_1;
      param_1 = *(int *)(iVar2 + -4);
      *(int *)(iVar2 + -4) = iVar1;
      iVar1 = iVar2;
    } while (param_1 != 0);
    if (iVar2 != 0) {
      do {
        iVar1 = *(int *)(iVar2 + -4);
        (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),iVar2 + -8);
        iVar2 = iVar1;
      } while (iVar1 != 0);
      return 0;
    }
  }
  return 0;
}


//// FUNCTION FUN_00ac0190 @ 00ac0190 ////

void __cdecl
FUN_00ac0190(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(param_5 + 0x20))(*(undefined4 *)(param_5 + 0x28),1,0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 4) = param_1;
    *(undefined1 *)((int)puVar1 + 0x11) = param_2;
    *puVar1 = 0;
    puVar1[5] = param_3;
    puVar1[6] = param_4;
  }
  return;
}


//// FUNCTION FUN_00ac01d0 @ 00ac01d0 ////

void __cdecl FUN_00ac01d0(uint param_1,int *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  byte *pbVar11;
  uint local_c;
  byte *local_8;
  undefined1 *local_4;
  
  piVar5 = param_2;
  uVar4 = param_1;
  piVar2 = *(int **)(param_1 + 0xc);
  local_c = param_2[1];
  pbVar11 = (byte *)*param_2;
  uVar10 = *(uint *)(param_1 + 0x1c);
  puVar9 = *(undefined1 **)(param_1 + 0x30);
  if (puVar9 < *(undefined1 **)(param_1 + 0x2c)) {
    param_2 = (int *)(*(undefined1 **)(param_1 + 0x2c) + (-1 - (int)puVar9));
    param_1 = *(uint *)(param_1 + 0x20);
  }
  else {
    param_2 = (int *)(*(int *)(param_1 + 0x28) - (int)puVar9);
    param_1 = *(uint *)(param_1 + 0x20);
  }
  do {
    switch(*piVar2) {
    case 0:
      if (((int *)0x101 < param_2) && (9 < local_c)) {
        *(uint *)(uVar4 + 0x20) = param_1;
        *(uint *)(uVar4 + 0x1c) = uVar10;
        iVar6 = *piVar5;
        piVar5[1] = local_c;
        *piVar5 = (int)pbVar11;
        piVar5[2] = (int)(pbVar11 + (piVar5[2] - iVar6));
        *(undefined1 **)(uVar4 + 0x30) = puVar9;
        param_3 = FUN_00ac8360((uint)*(byte *)(piVar2 + 4),(uint)*(byte *)((int)piVar2 + 0x11),
                               piVar2[5],piVar2[6],uVar4,piVar5);
        local_c = piVar5[1];
        param_1 = *(uint *)(uVar4 + 0x20);
        pbVar11 = (byte *)*piVar5;
        uVar10 = *(uint *)(uVar4 + 0x1c);
        puVar9 = *(undefined1 **)(uVar4 + 0x30);
        if (puVar9 < *(undefined1 **)(uVar4 + 0x2c)) {
          param_2 = (int *)(*(undefined1 **)(uVar4 + 0x2c) + (-1 - (int)puVar9));
        }
        else {
          param_2 = (int *)(*(int *)(uVar4 + 0x28) - (int)puVar9);
        }
        if (param_3 != 0) {
          *piVar2 = (-(uint)(param_3 != 1) & 2) + 7;
          break;
        }
      }
      *piVar2 = 1;
      piVar2[3] = (uint)*(byte *)(piVar2 + 4);
      piVar2[2] = piVar2[5];
    case 1:
      for (; uVar10 < (uint)piVar2[3]; uVar10 = uVar10 + 8) {
        if (local_c == 0) {
LAB_00ac0772:
          *(uint *)(uVar4 + 0x1c) = uVar10;
          *(uint *)(uVar4 + 0x20) = param_1;
          iVar6 = *piVar5;
          piVar5[1] = 0;
          *piVar5 = (int)pbVar11;
          piVar5[2] = (int)(pbVar11 + (piVar5[2] - iVar6));
          *(undefined1 **)(uVar4 + 0x30) = puVar9;
          FUN_00ac0980(uVar4,(int)piVar5,param_3);
          return;
        }
        local_c = local_c - 1;
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar11 << ((byte)uVar10 & 0x1f);
        pbVar11 = pbVar11 + 1;
      }
      local_8 = (byte *)(piVar2[2] + (*(uint *)(&DAT_00d7d208 + piVar2[3] * 4) & param_1) * 8);
      param_1 = param_1 >> (local_8[1] & 0x1f);
      uVar10 = uVar10 - local_8[1];
      bVar1 = *local_8;
      uVar7 = (uint)bVar1;
      if (uVar7 == 0) {
        piVar2[2] = *(int *)(local_8 + 4);
        *piVar2 = 6;
      }
      else if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) == 0) {
LAB_00ac03a4:
          piVar2[3] = uVar7;
          piVar2[2] = *(int *)(local_8 + 4);
        }
        else {
          if ((bVar1 & 0x20) == 0) {
            *piVar2 = 9;
            piVar5[6] = (int)s_invalid_literal_length_code_00e6f5dc;
LAB_00ac07be:
            *(uint *)(uVar4 + 0x20) = param_1;
            *(uint *)(uVar4 + 0x1c) = uVar10;
            piVar5[1] = local_c;
            piVar5[2] = (int)(pbVar11 + (piVar5[2] - *piVar5));
            *piVar5 = (int)pbVar11;
            *(undefined1 **)(uVar4 + 0x30) = puVar9;
            FUN_00ac0980(uVar4,(int)piVar5,-3);
            return;
          }
          *piVar2 = 7;
        }
      }
      else {
        piVar2[2] = bVar1 & 0xf;
        iVar6 = *(int *)(local_8 + 4);
        *piVar2 = 2;
        piVar2[1] = iVar6;
      }
      break;
    case 2:
      uVar7 = piVar2[2];
      for (; uVar10 < uVar7; uVar10 = uVar10 + 8) {
        if (local_c == 0) goto LAB_00ac0772;
        local_c = local_c - 1;
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar11 << ((byte)uVar10 & 0x1f);
        pbVar11 = pbVar11 + 1;
      }
      piVar2[1] = piVar2[1] + (*(uint *)(&DAT_00d7d208 + uVar7 * 4) & param_1);
      param_1 = param_1 >> ((byte)uVar7 & 0x1f);
      uVar10 = uVar10 - uVar7;
      *piVar2 = 3;
      piVar2[3] = (uint)*(byte *)((int)piVar2 + 0x11);
      piVar2[2] = piVar2[6];
    case 3:
      for (; uVar10 < (uint)piVar2[3]; uVar10 = uVar10 + 8) {
        if (local_c == 0) goto LAB_00ac0772;
        local_c = local_c - 1;
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar11 << ((byte)uVar10 & 0x1f);
        pbVar11 = pbVar11 + 1;
      }
      local_8 = (byte *)(piVar2[2] + (*(uint *)(&DAT_00d7d208 + piVar2[3] * 4) & param_1) * 8);
      param_1 = param_1 >> (local_8[1] & 0x1f);
      uVar10 = uVar10 - local_8[1];
      bVar1 = *local_8;
      uVar7 = (uint)bVar1;
      if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) != 0) {
          *piVar2 = 9;
          piVar5[6] = (int)s_invalid_distance_code_00e6f5c4;
          goto LAB_00ac07be;
        }
        goto LAB_00ac03a4;
      }
      piVar2[2] = bVar1 & 0xf;
      iVar6 = *(int *)(local_8 + 4);
      *piVar2 = 4;
      piVar2[3] = iVar6;
      break;
    case 4:
      uVar7 = piVar2[2];
      for (; uVar10 < uVar7; uVar10 = uVar10 + 8) {
        if (local_c == 0) goto LAB_00ac0772;
        local_c = local_c - 1;
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar11 << ((byte)uVar10 & 0x1f);
        pbVar11 = pbVar11 + 1;
      }
      piVar2[3] = piVar2[3] + (*(uint *)(&DAT_00d7d208 + uVar7 * 4) & param_1);
      param_1 = param_1 >> ((byte)uVar7 & 0x1f);
      uVar10 = uVar10 - uVar7;
      *piVar2 = 5;
    case 5:
      if ((uint)((int)puVar9 - *(int *)(uVar4 + 0x24)) < (uint)piVar2[3]) {
        iVar6 = (*(int *)(uVar4 + 0x28) - *(int *)(uVar4 + 0x24)) - piVar2[3];
      }
      else {
        iVar6 = -piVar2[3];
      }
      local_4 = puVar9 + iVar6;
      iVar6 = piVar2[1];
      while (iVar6 != 0) {
        puVar8 = puVar9;
        if (param_2 == (int *)0x0) {
          if (puVar9 == *(undefined1 **)(uVar4 + 0x28)) {
            puVar3 = *(undefined1 **)(uVar4 + 0x2c);
            puVar8 = *(undefined1 **)(uVar4 + 0x24);
            if (puVar3 != puVar8) {
              if (puVar8 < puVar3) {
                param_2 = (int *)(puVar3 + (-1 - (int)puVar8));
              }
              else {
                param_2 = (int *)(*(undefined1 **)(uVar4 + 0x28) + -(int)puVar8);
              }
              puVar9 = puVar8;
              if (param_2 != (int *)0x0) goto LAB_00ac0654;
            }
          }
          *(undefined1 **)(uVar4 + 0x30) = puVar9;
          param_3 = FUN_00ac0980(uVar4,(int)piVar5,param_3);
          puVar8 = *(undefined1 **)(uVar4 + 0x30);
          puVar9 = *(undefined1 **)(uVar4 + 0x2c);
          if (puVar8 < puVar9) {
            param_2 = (int *)(puVar9 + (-1 - (int)puVar8));
          }
          else {
            param_2 = (int *)(*(int *)(uVar4 + 0x28) - (int)puVar8);
          }
          if ((puVar8 == *(undefined1 **)(uVar4 + 0x28)) &&
             (puVar3 = *(undefined1 **)(uVar4 + 0x24), puVar9 != puVar3)) {
            puVar8 = puVar3;
            if (puVar3 < puVar9) {
              param_2 = (int *)(puVar9 + (-1 - (int)puVar3));
            }
            else {
              param_2 = (int *)(*(undefined1 **)(uVar4 + 0x28) + -(int)puVar3);
            }
          }
          if (param_2 == (int *)0x0) goto LAB_00ac07f6;
        }
LAB_00ac0654:
        puVar9 = puVar8 + 1;
        param_3 = 0;
        *puVar8 = *local_4;
        local_4 = local_4 + 1;
        param_2 = (int *)((int)param_2 + -1);
        if (local_4 == *(undefined1 **)(uVar4 + 0x28)) {
          local_4 = *(undefined1 **)(uVar4 + 0x24);
        }
        iVar6 = piVar2[1] + -1;
        piVar2[1] = iVar6;
      }
      *piVar2 = 0;
      break;
    case 6:
      puVar8 = puVar9;
      if (param_2 == (int *)0x0) {
        if (puVar9 == *(undefined1 **)(uVar4 + 0x28)) {
          puVar3 = *(undefined1 **)(uVar4 + 0x2c);
          puVar8 = *(undefined1 **)(uVar4 + 0x24);
          if (puVar3 != puVar8) {
            if (puVar8 < puVar3) {
              param_2 = (int *)(puVar3 + (-1 - (int)puVar8));
            }
            else {
              param_2 = (int *)(*(undefined1 **)(uVar4 + 0x28) + -(int)puVar8);
            }
            puVar9 = puVar8;
            if (param_2 != (int *)0x0) goto LAB_00ac0741;
          }
        }
        *(undefined1 **)(uVar4 + 0x30) = puVar9;
        param_3 = FUN_00ac0980(uVar4,(int)piVar5,param_3);
        puVar8 = *(undefined1 **)(uVar4 + 0x30);
        puVar9 = *(undefined1 **)(uVar4 + 0x2c);
        if (puVar8 < puVar9) {
          param_2 = (int *)(puVar9 + (-1 - (int)puVar8));
        }
        else {
          param_2 = (int *)(*(int *)(uVar4 + 0x28) - (int)puVar8);
        }
        if ((puVar8 == *(undefined1 **)(uVar4 + 0x28)) &&
           (puVar3 = *(undefined1 **)(uVar4 + 0x24), puVar9 != puVar3)) {
          puVar8 = puVar3;
          if (puVar3 < puVar9) {
            param_2 = (int *)(puVar9 + (-1 - (int)puVar3));
          }
          else {
            param_2 = (int *)(*(undefined1 **)(uVar4 + 0x28) + -(int)puVar3);
          }
        }
        if (param_2 == (int *)0x0) {
LAB_00ac07f6:
          *(uint *)(uVar4 + 0x20) = param_1;
          *(uint *)(uVar4 + 0x1c) = uVar10;
          iVar6 = *piVar5;
          piVar5[1] = local_c;
          *piVar5 = (int)pbVar11;
          piVar5[2] = (int)(pbVar11 + (piVar5[2] - iVar6));
          *(undefined1 **)(uVar4 + 0x30) = puVar8;
          FUN_00ac0980(uVar4,(int)piVar5,param_3);
          return;
        }
      }
LAB_00ac0741:
      param_3 = 0;
      *puVar8 = (char)piVar2[2];
      puVar9 = puVar8 + 1;
      param_2 = (int *)((int)param_2 + -1);
      *piVar2 = 0;
      break;
    case 7:
      *(undefined1 **)(uVar4 + 0x30) = puVar9;
      iVar6 = FUN_00ac0980(uVar4,(int)piVar5,param_3);
      puVar9 = *(undefined1 **)(uVar4 + 0x30);
      if (*(undefined1 **)(uVar4 + 0x2c) != puVar9) {
        *(uint *)(uVar4 + 0x1c) = uVar10;
        *(uint *)(uVar4 + 0x20) = param_1;
        piVar5[1] = local_c;
        piVar5[2] = (int)(pbVar11 + (piVar5[2] - *piVar5));
        *piVar5 = (int)pbVar11;
        *(undefined1 **)(uVar4 + 0x30) = puVar9;
        FUN_00ac0980(uVar4,(int)piVar5,iVar6);
        return;
      }
      *piVar2 = 8;
    case 8:
      goto switchD_00ac021c_caseD_8;
    case 9:
      *(uint *)(uVar4 + 0x20) = param_1;
      *(uint *)(uVar4 + 0x1c) = uVar10;
      piVar5[1] = local_c;
      piVar5[2] = (int)(pbVar11 + (piVar5[2] - *piVar5));
      *piVar5 = (int)pbVar11;
      *(undefined1 **)(uVar4 + 0x30) = puVar9;
      FUN_00ac0980(uVar4,(int)piVar5,-3);
      return;
    default:
      *(uint *)(uVar4 + 0x20) = param_1;
      *(uint *)(uVar4 + 0x1c) = uVar10;
      piVar5[1] = local_c;
      piVar5[2] = (int)(pbVar11 + (piVar5[2] - *piVar5));
      *piVar5 = (int)pbVar11;
      *(undefined1 **)(uVar4 + 0x30) = puVar9;
      FUN_00ac0980(uVar4,(int)piVar5,-2);
      return;
    }
  } while( true );
switchD_00ac021c_caseD_8:
  *(uint *)(uVar4 + 0x20) = param_1;
  *(uint *)(uVar4 + 0x1c) = uVar10;
  piVar5[1] = local_c;
  piVar5[2] = (int)(pbVar11 + (piVar5[2] - *piVar5));
  *piVar5 = (int)pbVar11;
  *(undefined1 **)(uVar4 + 0x30) = puVar9;
  FUN_00ac0980(uVar4,(int)piVar5,1);
  return;
}


//// FUNCTION FUN_00ac0960 @ 00ac0960 ////

void __cdecl FUN_00ac0960(undefined4 param_1,int param_2)

{
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return;
}


//// FUNCTION FUN_00ac0980 @ 00ac0980 ////

int __cdecl FUN_00ac0980(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  puVar6 = *(undefined4 **)(param_1 + 0x2c);
  local_4 = *(undefined4 **)(param_2 + 0xc);
  if (puVar4 < puVar6) {
    puVar4 = *(undefined4 **)(param_1 + 0x28);
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar5 = (int)puVar4 - (int)puVar6;
  if (uVar3 < (uint)((int)puVar4 - (int)puVar6)) {
    uVar5 = uVar3;
  }
  if ((uVar5 != 0) && (param_3 == -5)) {
    param_3 = 0;
  }
  *(uint *)(param_2 + 0x10) = uVar3 - uVar5;
  *(uint *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar5;
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x34))(*(undefined4 *)(param_1 + 0x38),puVar6,uVar5);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    *(undefined4 *)(param_2 + 0x30) = uVar1;
  }
  puVar4 = puVar6;
  puVar7 = local_4;
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar2 = (undefined1 *)((int)puVar6 + uVar5);
  for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  local_4 = (undefined4 *)((int)local_4 + uVar5);
  if (puVar2 == *(undefined1 **)(param_1 + 0x28)) {
    puVar4 = *(undefined4 **)(param_1 + 0x24);
    if (*(undefined1 **)(param_1 + 0x30) == *(undefined1 **)(param_1 + 0x28)) {
      *(undefined4 **)(param_1 + 0x30) = puVar4;
    }
    uVar5 = *(int *)(param_1 + 0x30) - (int)puVar4;
    uVar3 = *(uint *)(param_2 + 0x10);
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
    if ((uVar5 != 0) && (param_3 == -5)) {
      param_3 = 0;
    }
    *(uint *)(param_2 + 0x10) = uVar3 - uVar5;
    *(uint *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar5;
    if (*(code **)(param_1 + 0x34) != (code *)0x0) {
      uVar1 = (**(code **)(param_1 + 0x34))(*(undefined4 *)(param_1 + 0x38),puVar4,uVar5);
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      *(undefined4 *)(param_2 + 0x30) = uVar1;
    }
    puVar6 = puVar4;
    puVar7 = local_4;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_4 = (undefined4 *)((int)local_4 + uVar5);
    puVar2 = (undefined1 *)((int)puVar4 + uVar5);
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  *(undefined4 **)(param_2 + 0xc) = local_4;
  *(undefined1 **)(param_1 + 0x2c) = puVar2;
  return param_3;
}


//// FUNCTION FUN_00ac0bc0 @ 00ac0bc0 ////

undefined4 __cdecl FUN_00ac0bc0(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)*param_1;
  cVar2 = *pcVar5;
  while (cVar2 != '\0') {
    iVar3 = _tolower((int)cVar2);
    iVar4 = _tolower((int)*param_2);
    if (iVar3 != iVar4) break;
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    param_2 = param_2 + 1;
    cVar2 = *pcVar1;
  }
  if ((*param_2 == '\0') &&
     (((param_2[-1] == ':' || (cVar2 = *pcVar5, cVar2 == '\0')) ||
      (pcVar5 = pcVar5 + 1, cVar2 == ':')))) {
    iVar3 = *param_1;
    *param_1 = (int)pcVar5;
    param_1[1] = param_1[1] + (iVar3 - (int)pcVar5);
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00ac0df0 @ 00ac0df0 ////

void __fastcall FUN_00ac0df0(int param_1)

{
  uint *_Str2;
  uint *puVar1;
  int iVar2;
  
  _Str2 = FUN_00acecd0(*(uint **)(param_1 + 4),'[');
  if (_Str2 != (uint *)0x0) {
    puVar1 = FUN_00acecd0(_Str2,']');
    if (puVar1 != (uint *)0x0) {
      *(int *)(param_1 + 0x10) = (int)_Str2 - *(int *)(param_1 + 4);
      *(int *)(param_1 + 0x14) = (int)puVar1 - *(int *)(param_1 + 4);
      if ((int)puVar1 - (int)_Str2 == 7) {
        iVar2 = _strncmp(s__000000__00e6f600,(char *)_Str2,8);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x18) = 1;
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}


//// FUNCTION FUN_00ac0e70 @ 00ac0e70 ////

void __fastcall FUN_00ac0e70(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0x10);
    FUN_00a10d90((void *)(param_1 + 4),s__000000__00e6f600);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 8) + -1;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}


//// FUNCTION FUN_00ac0ea0 @ 00ac0ea0 ////

void __thiscall FUN_00ac0ea0(void *this,undefined4 *param_1,uint param_2)

{
  if (*(int *)((int)this + 0x10) < 0) {
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 8);
    FUN_00a10d90((void *)((int)this + 4),&DAT_00e6f610);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  else if (*(int *)((int)this + 0x18) == 0) {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0x14);
    FUN_00a10d90((void *)((int)this + 4),&DAT_00e6dd38);
  }
  else {
    *(int *)((int)this + 8) = *(int *)((int)this + 0x10) + 1;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  FUN_00a10d40((void *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 8);
  FUN_00a10d90((void *)((int)this + 4),&DAT_00e6f60c);
  return;
}


//// FUNCTION FUN_00ac0f20 @ 00ac0f20 ////

void __thiscall FUN_00ac0f20(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00ac0df0((int)this);
  if (param_1 != (void *)0x0) {
    iVar1 = *(int *)((int)this + 0x14);
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)((int)param_1 + 4) = 0;
    FUN_00a10d90(param_1,(char *)(iVar1 + 1 + iVar2));
  }
  FUN_00ac0f60((int)this);
  return;
}


//// FUNCTION FUN_00ac0f60 @ 00ac0f60 ////

undefined4 __fastcall FUN_00ac0f60(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x18) != 0)) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  if (iVar3 < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = iVar3;
    uVar2 = *(uint *)(param_1 + 8);
    *(uint *)(param_1 + 8) = uVar2 + 1;
    if (*(int *)(param_1 + 0xc) < (int)(uVar2 + 1)) {
      FUN_00a10e50((int *)(param_1 + 4),uVar2);
    }
    *(undefined1 *)(*(int *)(param_1 + 4) + uVar2) = 0;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    return 1;
  }
  iVar3 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar3;
  if (iVar1 < iVar3) {
    do {
      if (*(char *)(*(int *)(param_1 + 4) + iVar3) == '.') break;
      iVar3 = iVar3 + -1;
      *(int *)(param_1 + 0x14) = iVar3;
    } while (iVar1 < iVar3);
  }
  if (iVar1 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0x14);
    FUN_00a10d90((void *)(param_1 + 4),&DAT_00e6f60c);
    return 1;
  }
  FUN_00ac0e70(param_1);
  return 1;
}


//// FUNCTION FUN_00ac1480 @ 00ac1480 ////

void FUN_00ac1480(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *_Memory;
  
  _Memory = FUN_00ac87f0(param_1,DAT_010c9fc4);
  uVar1 = _Memory[1];
  while (uVar1 < (uint)(param_1 + param_2)) {
    (**(code **)*_Memory)();
    uVar1 = _Memory[1];
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00ac14e0 @ 00ac14e0 ////

void FUN_00ac14e0(int *param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *_Memory;
  int iVar6;
  int iVar7;
  
  puVar5 = FUN_00ac87f0(*param_1,DAT_010c9fc4);
  _Memory = FUN_00ac87f0(param_2,DAT_010c9fc4);
  pbVar3 = (byte *)puVar5[1];
  bVar4 = false;
  bVar1 = *pbVar3;
  while (bVar1 != 0) {
    if ((bVar1 & 0x80) == 0) {
      iVar7 = _tolower((int)(char)*pbVar3);
    }
    else {
      iVar7 = (int)(char)bVar1;
    }
    bVar1 = *(byte *)_Memory[1];
    if ((bVar1 & 0x80) == 0) {
      iVar6 = _tolower((int)(char)*(byte *)_Memory[1]);
    }
    else {
      iVar6 = (int)(char)bVar1;
    }
    if ((iVar7 != iVar6) &&
       (((*(char *)puVar5[1] != '/' && (*(char *)puVar5[1] != '\\')) ||
        ((*(char *)_Memory[1] != '/' && (*(char *)_Memory[1] != '\\')))))) break;
    if ((*(char *)_Memory[1] == '/') || (*(char *)_Memory[1] == '\\')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    (**(code **)*puVar5)();
    (**(code **)*_Memory)();
    pbVar3 = (byte *)puVar5[1];
    bVar1 = *pbVar3;
  }
  if (*(char *)_Memory[1] != '\0') {
LAB_00ac15ee:
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  cVar2 = *(char *)puVar5[1];
  if ((cVar2 == '\0') || (bVar4)) {
LAB_00ac15b6:
    if ((cVar2 != '/') && (cVar2 != '\\')) goto LAB_00ac15c4;
  }
  else if (cVar2 != '/') {
    if (cVar2 != '\\') goto LAB_00ac15ee;
    goto LAB_00ac15b6;
  }
  (**(code **)*puVar5)();
LAB_00ac15c4:
  iVar7 = *param_1;
  iVar6 = puVar5[1];
  *param_1 = iVar6;
  param_1[1] = param_1[1] + (iVar7 - iVar6);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00ac19b0 @ 00ac19b0 ////

undefined4 __cdecl FUN_00ac19b0(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)*param_1;
  cVar2 = *pcVar3;
  pcVar4 = pcVar3;
  while ((cVar2 != '\0' && (cVar2 == *param_2))) {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    param_2 = param_2 + 1;
    cVar2 = *pcVar1;
  }
  if ((*param_2 == '\0') &&
     (((param_2[-1] == '/' || (cVar2 = *pcVar4, cVar2 == '\0')) ||
      (pcVar4 = pcVar4 + 1, cVar2 == '/')))) {
    *param_1 = pcVar4;
    param_1[1] = pcVar3 + (param_1[1] - (int)pcVar4);
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00ac1ff0 @ 00ac1ff0 ////

void __fastcall FUN_00ac1ff0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar1 = (undefined4 *)(param_1 + 4);
  if ((*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) ||
     (iVar2 = FUN_00ab7100(puVar1), iVar2 != 0)) {
    while( true ) {
      cVar3 = **(char **)(param_1 + 8);
      while (((*(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1, cVar3 == ' ' || (cVar3 == '\t'))
             && ((*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc) ||
                 (iVar2 = FUN_00ab7100(puVar1), iVar2 != 0))))) {
        cVar3 = **(char **)(param_1 + 8);
      }
      iVar4 = iVar4 * 3 + (int)cVar3;
      if ((*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 8)) &&
         (iVar2 = FUN_00ab7100(puVar1), iVar2 == 0)) break;
      if (cVar3 == '\n') {
        FUN_00ab6680(*(void **)(param_1 + 0x1024),iVar4,
                     (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0xc)) + *(int *)(param_1 + 8));
        iVar4 = 0;
      }
    }
    FUN_00ab6680(*(void **)(param_1 + 0x1024),iVar4,
                 (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0xc)) + *(int *)(param_1 + 8));
  }
  return;
}


//// FUNCTION FUN_00ac2240 @ 00ac2240 ////

void __fastcall FUN_00ac2240(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7ce40;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[2]);
}


//// FUNCTION FUN_00ac2260 @ 00ac2260 ////

int __cdecl FUN_00ac2260(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  pbVar4 = &DAT_00e6fd1c;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00ac2296:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00ac229b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00ac2296;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00ac229b:
  if (iVar3 == 0) {
    return 1;
  }
  pbVar4 = &DAT_00e6fd14;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00ac22d7:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00ac22dc;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00ac22d7;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00ac22dc:
  if (iVar3 == 0) {
    return 3;
  }
  pbVar4 = &DAT_00e6fd08;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00ac2318:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00ac231d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00ac2318;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00ac231d:
  if (iVar3 == 0) {
    return 2;
  }
  pcVar5 = s_shiftjis_00e6fcfc;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00ac2359:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00ac235e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00ac2359;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00ac235e:
  if (iVar3 == 0) {
    return 4;
  }
  pbVar4 = &DAT_00e6fcf4;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00ac239a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00ac239f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00ac239a;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00ac239f:
  if (iVar3 == 0) {
    return 5;
  }
  pcVar5 = s_winansi_00e6fcec;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00ac23db:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00ac23e0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00ac23db;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00ac23e0:
  if (iVar3 == 0) {
    return 6;
  }
  pbVar4 = &DAT_00e6fce4;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00ac241c:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00ac2421;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00ac241c;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00ac2421:
  if (iVar3 == 0) {
    return 7;
  }
  pcVar5 = s_macosroman_00e6fcd8;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00ac245d:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00ac2462;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00ac245d;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00ac2462:
  if (iVar3 == 0) {
    return 8;
  }
  pbVar2 = &DAT_00e6fcd0;
  while( true ) {
    bVar1 = *param_1;
    bVar6 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = param_1[1];
    bVar6 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    param_1 = param_1 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)(1 - bVar6 != (uint)(bVar6 != 0));
}


//// FUNCTION FUN_00ac24c0 @ 00ac24c0 ////

undefined4 __fastcall FUN_00ac24c0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


//// FUNCTION FUN_00ac2570 @ 00ac2570 ////

void * __thiscall FUN_00ac2570(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  void *_Memory;
  undefined1 *unaff_EDI;
  void *pvStack_8;
  int *local_4;
  
  iVar2 = param_2;
  local_4 = (int *)0x0;
  pvVar1 = (void *)(param_1 + param_2);
  (**(code **)(*(int *)this + 0x14))();
  _Memory = operator_new(iVar2 + 2);
  param_2 = param_1;
  pvStack_8 = _Memory;
  (**(code **)(*(int *)this + 0xc))(&param_2,pvVar1,&pvStack_8,(int)_Memory + iVar2);
  if (pvStack_8 != pvVar1) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (local_4 != (int *)0x0) {
    *local_4 = (int)unaff_EDI - (int)_Memory;
  }
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  return _Memory;
}


//// FUNCTION FUN_00ac2670 @ 00ac2670 ////

int __thiscall FUN_00ac2670(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  undefined1 *unaff_EDI;
  undefined1 *puVar3;
  int iStack_8;
  int *local_4;
  
  local_4 = (int *)0x0;
  if (*(int *)((int)this + 0xc) < param_2 + 2) {
    *(int *)((int)this + 0xc) = param_2 + 2;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = param_2 + param_1;
  (**(code **)(*(int *)this + 0x14))();
  iStack_8 = *(int *)((int)this + 8);
  puVar3 = (undefined1 *)(iVar1 + -2 + iStack_8);
  param_2 = param_1;
  (**(code **)(*(int *)this + 0xc))(&param_2,iVar2,&iStack_8,puVar3);
  if (iStack_8 != iVar2) {
    iVar1 = (**(code **)(*(int *)this + 0x10))();
    if ((iVar1 != 1) &&
       ((iVar1 = (**(code **)(*(int *)this + 0x10))(), iVar1 != 2 ||
        ((puVar3 <= unaff_EDI + 10 && (unaff_ESI != iStack_8)))))) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 8));
    }
    return 0;
  }
  if (local_4 != (int *)0x0) {
    *local_4 = (int)unaff_EDI - *(int *)((int)this + 8);
  }
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  return *(int *)((int)this + 8);
}


//// FUNCTION FUN_00ac2c60 @ 00ac2c60 ////

undefined2 __cdecl FUN_00ac2c60(ushort param_1,uint param_2,int param_3,undefined2 param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_2 + param_3 * 4;
  if (param_2 < uVar3) {
    do {
      iVar2 = ((int)(uVar3 - param_2) >> 2) - ((int)(uVar3 - param_2) >> 0x1f) >> 1;
      uVar1 = *(ushort *)(param_2 + iVar2 * 4);
      uVar4 = param_2 + iVar2 * 4;
      if (uVar1 == param_1) {
        return *(undefined2 *)(uVar4 + 2);
      }
      if (uVar1 < param_1) {
        param_2 = uVar4 + 4;
        uVar4 = uVar3;
      }
      uVar3 = uVar4;
    } while (param_2 < uVar4);
  }
  return param_4;
}


//// FUNCTION FUN_00ac2f20 @ 00ac2f20 ////

undefined4 * __thiscall FUN_00ac2f20(void *this,int param_1)

{
  UINT UVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 0x10) = param_1;
  *(undefined ***)this = &PTR_FUN_00d7d24c;
  if (param_1 == 0) {
    UVar1 = GetACP();
    *(UINT *)((int)this + 0x10) = UVar1;
  }
  return this;
}


//// FUNCTION FUN_00ac2f50 @ 00ac2f50 ////

undefined4 * __thiscall FUN_00ac2f50(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ac2f70 @ 00ac2f70 ////

undefined4 * __fastcall FUN_00ac2f70(int param_1)

{
  void *this;
  undefined4 *puVar1;
  
  this = operator_new(0x14);
  if (this != (void *)0x0) {
    puVar1 = FUN_00ac2f20(this,*(int *)(param_1 + 0x10));
    return puVar1;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00ac2fa0 @ 00ac2fa0 ////

undefined4 * __fastcall FUN_00ac2fa0(int param_1)

{
  void *this;
  undefined4 *puVar1;
  
  this = operator_new(0x14);
  if (this != (void *)0x0) {
    puVar1 = FUN_00ac3110(this,*(int *)(param_1 + 0x10));
    return puVar1;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00ac3000 @ 00ac3000 ////

undefined4 __thiscall
FUN_00ac3000(void *this,int *param_1,byte *param_2,int *param_3,byte *param_4,uint param_5,
            int param_6)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  
  pbVar4 = (byte *)*param_1;
  if (pbVar4 < param_2) {
    while ((byte *)*param_3 < param_4) {
      bVar1 = *pbVar4;
      uVar5 = (uint)bVar1;
      if ((bVar1 & 0x80) == 0) {
        *(byte *)*param_3 = bVar1;
      }
      else {
        iVar6 = (int)(char)(&DAT_00e99400)[uVar5];
        if (param_2 <= pbVar4 + iVar6) {
          *(undefined4 *)((int)this + 4) = 2;
          return 0;
        }
        if (iVar6 != 1) {
          if (iVar6 != 2) goto LAB_00ac30f1;
          *param_1 = (int)(pbVar4 + 1);
          uVar5 = uVar5 * 0x40 + (uint)pbVar4[1];
        }
        iVar2 = *param_1;
        *param_1 = iVar2 + 1;
        uVar5 = ((uint)*(byte *)(iVar2 + 1) - *(int *)(&DAT_00e993e8 + iVar6 * 4)) + uVar5 * 0x40;
        if (0x7f < uVar5) {
          uVar3 = FUN_00ac2c60((ushort)uVar5,param_5,param_6,0xfffc);
          uVar5 = (uint)uVar3;
        }
        if (0xff < uVar5) {
LAB_00ac30f1:
          *(undefined4 *)((int)this + 4) = 1;
          return 0;
        }
        *(char *)*param_3 = (char)uVar5;
      }
      *param_1 = *param_1 + 1;
      *param_3 = *param_3 + 1;
      pbVar4 = (byte *)*param_1;
      if (param_2 <= pbVar4) {
        return 0;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00ac3110 @ 00ac3110 ////

undefined4 * __thiscall FUN_00ac3110(void *this,int param_1)

{
  UINT UVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 0x10) = param_1;
  *(undefined ***)this = &PTR_FUN_00d7d274;
  if (param_1 == 0) {
    UVar1 = GetACP();
    *(UINT *)((int)this + 0x10) = UVar1;
  }
  return this;
}


//// FUNCTION FUN_00ac3140 @ 00ac3140 ////

undefined4 * __thiscall FUN_00ac3140(void *this,byte param_1)

{
  FUN_00ac2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ac3160 @ 00ac3160 ////

undefined4 * __fastcall FUN_00ac3160(int param_1)

{
  void *this;
  undefined4 *puVar1;
  
  this = operator_new(0x14);
  if (this != (void *)0x0) {
    puVar1 = FUN_00ac3110(this,*(int *)(param_1 + 0x10));
    return puVar1;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00ac3190 @ 00ac3190 ////

undefined4 * __fastcall FUN_00ac3190(int param_1)

{
  void *this;
  undefined4 *puVar1;
  
  this = operator_new(0x14);
  if (this != (void *)0x0) {
    puVar1 = FUN_00ac2f20(this,*(int *)(param_1 + 0x10));
    return puVar1;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00ac31f0 @ 00ac31f0 ////

undefined4 __thiscall
FUN_00ac31f0(void *this,uint *param_1,uint param_2,int *param_3,byte *param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  
  if (*param_1 < param_2) {
    while (pbVar3 = (byte *)*param_3, pbVar3 < param_4) {
      bVar1 = *(byte *)*param_1;
      if ((bVar1 & 0x80) == 0) {
        *pbVar3 = bVar1;
      }
      else {
        uVar2 = *(ushort *)(param_5 + (bVar1 & 0x7f) * 2);
        if (uVar2 < 0x800) {
          if (param_4 <= pbVar3 + 1) {
            *(undefined4 *)((int)this + 4) = 2;
            return 0;
          }
          *pbVar3 = (byte)(uVar2 >> 6) | 0xc0;
          iVar4 = *param_3;
          *param_3 = iVar4 + 1;
          *(byte *)(iVar4 + 1) = (byte)uVar2 & 0x3f | 0x80;
        }
        else {
          if (param_4 <= pbVar3 + 2) {
            *(undefined4 *)((int)this + 4) = 2;
            return 0;
          }
          *pbVar3 = (byte)(uVar2 >> 0xc) | 0xe0;
          iVar4 = *param_3;
          *param_3 = iVar4 + 1;
          *(byte *)(iVar4 + 1) = (byte)(uVar2 >> 6) & 0x3f | 0x80;
          iVar4 = *param_3;
          *param_3 = iVar4 + 1;
          *(byte *)(iVar4 + 1) = (byte)uVar2 & 0x3f | 0x80;
        }
      }
      *param_3 = *param_3 + 1;
      uVar5 = *param_1;
      *param_1 = uVar5 + 1;
      if (param_2 <= uVar5 + 1) {
        return 0;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00ac3400 @ 00ac3400 ////

int __cdecl FUN_00ac3400(undefined4 *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 0;
  cVar1 = *(char *)*param_1;
  while (((cVar1 != '\0' && ((*(byte *)*param_1 & 0x80) == 0)) &&
         (iVar2 = _isdigit((int)(char)*(byte *)*param_1), iVar2 != 0))) {
    cVar1 = *(char *)*param_1;
    if (cVar1 == param_2) break;
    pcVar3 = (char *)*param_1 + 1;
    *param_1 = pcVar3;
    iVar4 = cVar1 + -0x30 + iVar4 * 10;
    cVar1 = *pcVar3;
  }
  if ((param_2 != '\0') && (*(char *)*param_1 == param_2)) {
    *param_1 = (char *)*param_1 + 1;
  }
  return iVar4;
}


//// FUNCTION FUN_00ac35f0 @ 00ac35f0 ////

void __fastcall FUN_00ac35f0(undefined4 *param_1)

{
  time_t tVar1;
  
  tVar1 = _time((time_t *)0x0);
  *param_1 = (int)tVar1;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00ac3700 @ 00ac3700 ////

void __thiscall FUN_00ac3700(void *this,char *param_1)

{
  char cVar1;
  tm *ptVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  time_t tVar10;
  
  ptVar2 = _localtime(this);
  if (ptVar2 != (tm *)0x0) {
    iVar6 = ptVar2->tm_isdst;
    ptVar2 = _gmtime(this);
    ptVar2->tm_isdst = iVar6;
    if (ptVar2 != (tm *)0x0) {
      tVar10 = _mktime(ptVar2);
      iVar4 = (*(int *)this - (int)tVar10) / 0x3c;
      _sprintf(param_1,s___05d_00e6fda8,iVar4 + (iVar4 / 0x3c) * 0x28);
      if ((*(&lpMultiByteStr_00e9a2e0)[iVar6] & 0x80) == 0) {
        uVar3 = 0xffffffff;
        pcVar7 = &DAT_00e68b3c;
        do {
          pcVar8 = pcVar7;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar4 = -1;
        pcVar7 = param_1;
        do {
          pcVar9 = pcVar7;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar9 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar1 != '\0');
        pcVar7 = pcVar8 + -uVar3;
        pcVar8 = pcVar9 + -1;
        for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        uVar3 = 0xffffffff;
        pcVar7 = (&lpMultiByteStr_00e9a2e0)[iVar6];
        do {
          pcVar8 = pcVar7;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar6 = -1;
        do {
          pcVar7 = param_1;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar7 = param_1 + 1;
          cVar1 = *param_1;
          param_1 = pcVar7;
        } while (cVar1 != '\0');
        pcVar8 = pcVar8 + -uVar3;
        pcVar7 = pcVar7 + -1;
        for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar7 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00ac37e0 @ 00ac37e0 ////

int __cdecl FUN_00ac37e0(int param_1)

{
  if (DAT_010cb188 == 0) {
    FUN_00ac3800();
  }
  return param_1 - DAT_010cb184;
}


//// FUNCTION FUN_00ac3800 @ 00ac3800 ////

void FUN_00ac3800(void)

{
  tm *_Tm;
  time_t tVar1;
  undefined4 local_28;
  tm local_24;
  
  local_24.tm_year = 0x46;
  local_24.tm_mon = 0;
  local_24.tm_hour = 0;
  local_24.tm_min = 0;
  local_24.tm_sec = 0;
  local_24.tm_isdst = 0;
  local_24.tm_mday = 2;
  tVar1 = _mktime(&local_24);
  DAT_010cb184 = (int)tVar1;
  local_28 = 0x15180;
  _Tm = _gmtime((time_t *)&local_28);
  tVar1 = _mktime(_Tm);
  DAT_010cb188 = 1;
  DAT_010cb184 = DAT_010cb184 - (int)tVar1;
  return;
}


//// FUNCTION FUN_00ac3870 @ 00ac3870 ////

int __cdecl FUN_00ac3870(int param_1)

{
  if (DAT_010cb188 == 0) {
    FUN_00ac3800();
    return param_1 + DAT_010cb184;
  }
  return DAT_010cb184 + param_1;
}


//// FUNCTION FUN_00ac38a0 @ 00ac38a0 ////

uint __cdecl FUN_00ac38a0(int param_1,int param_2)

{
  HANDLE hFile;
  WINBOOL WVar1;
  _OVERLAPPED local_14;
  
  hFile = (HANDLE)__get_osfhandle(param_1);
  local_14.Internal = 0;
  local_14.InternalHigh = 0;
  local_14.field2_0x8.field0.Offset = 0xffffffff;
  local_14.field2_0x8.field0.OffsetHigh = 0xffffffff;
  local_14.hEvent = (HANDLE)0x0;
  if (param_2 == 0) {
    WVar1 = UnlockFileEx(hFile,0,1,0,&local_14);
    return (uint)(WVar1 == 0);
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      return 0xffffffff;
    }
    WVar1 = LockFileEx(hFile,2,0,1,0,&local_14);
    return (uint)(WVar1 == 0);
  }
  WVar1 = LockFileEx(hFile,0,0,1,0,&local_14);
  return (uint)(WVar1 == 0);
}


//// FUNCTION FUN_00ac3940 @ 00ac3940 ////

undefined4 * __fastcall FUN_00ac3940(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00d7d2a8;
  pvVar1 = operator_new(0x38);
  param_1[1] = pvVar1;
  *(undefined4 *)((int)pvVar1 + 0x20) = 0;
  *(undefined4 *)(param_1[1] + 0x24) = 0;
  *(undefined4 *)(param_1[1] + 0x28) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  return param_1;
}


//// FUNCTION FUN_00ac3980 @ 00ac3980 ////

undefined4 * __thiscall FUN_00ac3980(void *this,byte param_1)

{
  FUN_00ac39a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ac39a0 @ 00ac39a0 ////

void __fastcall FUN_00ac39a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7d2a8;
  if (*(short *)(param_1 + 2) != 0) {
    FUN_00a394c0(param_1[1]);
  }
  if (*(short *)((int)param_1 + 10) != 0) {
    FUN_00ac7870(param_1[1]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[1]);
}


//// FUNCTION FUN_00ac39e0 @ 00ac39e0 ////

void __thiscall FUN_00ac39e0(void *this,byte *param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (*(short *)((int)this + 10) == 0) {
    iVar3 = FUN_00ac70d0(*(int *)((int)this + 4),-1,8,-0xf,8,0,s_1_0_4_00e692dc,0x38);
    if (iVar3 != 0) {
      FUN_00a10f50(param_3,(int *)&DAT_00e6ded8);
      return;
    }
    *(undefined2 *)((int)this + 10) = 1;
    *(int *)(*(int *)((int)this + 4) + 0xc) = (int)this + 0xc;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x10) = 0x1000;
    (**(code **)(*(int *)this + 4))(&DAT_00d7d29c,10,param_3);
    uVar4 = FUN_00ac8880(0,(byte *)0x0,0);
    *(uint *)((int)this + 0x100c) = uVar4;
  }
  if (param_2 == 0) {
    bVar2 = false;
    **(undefined4 **)((int)this + 4) = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 4) = 0;
    iVar3 = *param_3;
    while (iVar3 < 2) {
      iVar3 = *(int *)(*(int *)((int)this + 4) + 0x10);
      if ((iVar3 == 0) || (bVar2)) {
        (**(code **)(*(int *)this + 4))((int)this + 0xc,0x1000 - iVar3,param_3);
        *(int *)(*(int *)((int)this + 4) + 0xc) = (int)this + 0xc;
        *(undefined4 *)(*(int *)((int)this + 4) + 0x10) = 0x1000;
        if (bVar2) break;
      }
      uVar4 = FUN_00ac7510(*(int **)((int)this + 4),4);
      if (uVar4 == 1) {
        bVar2 = true;
      }
      else if (uVar4 != 0) {
        FUN_00a10f50(param_3,(int *)&DAT_00e6dec8);
      }
      iVar3 = *param_3;
    }
    uVar4 = FUN_00ac7870(*(int *)((int)this + 4));
    if (uVar4 != 0) {
      FUN_00a10f50(param_3,(int *)&DAT_00e6ded0);
    }
    *(undefined1 *)((int)this + 0xc) = *(undefined1 *)((int)this + 0x100c);
    uVar1 = *(undefined4 *)((int)this + 0x100c);
    *(char *)((int)this + 0xf) = (char)((uint)uVar1 >> 0x18);
    iVar3 = *(int *)((int)this + 4);
    *(char *)((int)this + 0xd) = (char)((uint)uVar1 >> 8);
    *(char *)((int)this + 0xe) = (char)((uint)uVar1 >> 0x10);
    *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(iVar3 + 8);
    *(char *)((int)this + 0x11) = (char)((uint)*(undefined4 *)(iVar3 + 8) >> 8);
    *(char *)((int)this + 0x12) = (char)((uint)*(undefined4 *)(iVar3 + 8) >> 0x10);
    *(char *)((int)this + 0x13) = (char)((uint)*(undefined4 *)(iVar3 + 8) >> 0x18);
    (**(code **)(*(int *)this + 4))((undefined1 *)((int)this + 0xc),8,param_3);
  }
  else {
    uVar4 = FUN_00ac8880(*(uint *)((int)this + 0x100c),param_1,param_2);
    *(uint *)((int)this + 0x100c) = uVar4;
    **(undefined4 **)((int)this + 4) = param_1;
    *(uint *)(*(int *)((int)this + 4) + 4) = param_2;
    iVar3 = *(int *)((int)this + 4);
    if (*(int *)(iVar3 + 4) != 0) {
      while (*param_3 < 2) {
        if (*(int *)(iVar3 + 0x10) == 0) {
          (**(code **)(*(int *)this + 4))((int)this + 0xc,0x1000,param_3);
          *(int *)(*(int *)((int)this + 4) + 0xc) = (int)this + 0xc;
          *(undefined4 *)(*(int *)((int)this + 4) + 0x10) = 0x1000;
        }
        uVar4 = FUN_00ac7510(*(int **)((int)this + 4),0);
        if (uVar4 != 0) {
          FUN_00a10f50(param_3,(int *)&DAT_00e6dec8);
        }
        iVar3 = *(int *)((int)this + 4);
        if (*(int *)(iVar3 + 4) == 0) {
          return;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00ac3bf0 @ 00ac3bf0 ////

uint __thiscall FUN_00ac3bf0(void *this,byte *param_1,int param_2,int *param_3)

{
  char *pcVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  
  if (*(short *)((int)this + 8) != 0) {
LAB_00ac3d56:
    *(byte **)(*(int *)((int)this + 4) + 0xc) = param_1;
    *(int *)(*(int *)((int)this + 4) + 0x10) = param_2;
    piVar3 = *(int **)((int)this + 4);
    iVar4 = piVar3[4];
    while ((iVar4 != 0 && (*param_3 < 2))) {
      if (piVar3[1] == 0) {
        *piVar3 = (int)this + 0xc;
        uVar6 = (**(code **)(*(int *)this + 8))((int)this + 0xc,0x1000,param_3);
        *(undefined4 *)(*(int *)((int)this + 4) + 4) = uVar6;
      }
      iVar4 = FUN_00a39640(*(int **)((int)this + 4),0);
      if (iVar4 == 1) break;
      if (iVar4 != 0) {
        FUN_00a10f50(param_3,(int *)&DAT_00e6dee0);
      }
      piVar3 = *(int **)((int)this + 4);
      iVar4 = piVar3[4];
    }
    uVar9 = param_2 - *(int *)(*(int *)((int)this + 4) + 0x10);
    uVar5 = FUN_00ac8880(*(uint *)((int)this + 0x100c),param_1,uVar9);
    *(uint *)((int)this + 0x100c) = uVar5;
    return uVar9;
  }
  iVar4 = FUN_00a39510(*(int *)((int)this + 4),-0xf,s_1_0_4_00e692dc,0x38);
  if (iVar4 != 0) {
    FUN_00a10f50(param_3,(int *)&DAT_00e6dee8);
    return 0;
  }
  *(undefined2 *)((int)this + 8) = 1;
  pcVar1 = (char *)((int)this + 0xc);
  *(undefined4 *)(*(int *)((int)this + 4) + 4) = 0;
  iVar4 = (**(code **)(*(int *)this + 8))(pcVar1,10,param_3);
  if (iVar4 != 0) {
    iVar4 = 3;
    bVar10 = true;
    pcVar7 = pcVar1;
    pcVar8 = &DAT_00d7d29c;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar10 = *pcVar7 == *pcVar8;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar10);
    if (bVar10) {
      bVar2 = *(byte *)((int)this + 0xf);
      if ((((bVar2 & 4) != 0) &&
          (iVar4 = (**(code **)(*(int *)this + 8))(pcVar1,2,param_3), iVar4 == 2)) &&
         (uVar5 = (int)*(char *)((int)this + 0xd) << 8 | (int)*pcVar1, uVar5 < 0x1000)) {
        (**(code **)(*(int *)this + 8))(pcVar1,uVar5,param_3);
      }
      if ((bVar2 & 8) != 0) {
        iVar4 = (**(code **)(*(int *)this + 8))(pcVar1,1,param_3);
        while ((iVar4 != 0 && (*pcVar1 != '\0'))) {
          iVar4 = (**(code **)(*(int *)this + 8))(pcVar1,1,param_3);
        }
      }
      if ((bVar2 & 0x10) != 0) {
        iVar4 = (**(code **)(*(int *)this + 8))(pcVar1,1,param_3);
        while ((iVar4 != 0 && (*pcVar1 != '\0'))) {
          iVar4 = (**(code **)(*(int *)this + 8))(pcVar1,1,param_3);
        }
      }
      if ((bVar2 & 2) != 0) {
        (**(code **)(*(int *)this + 8))(pcVar1,2,param_3);
      }
      uVar5 = FUN_00ac8880(0,(byte *)0x0,0);
      *(uint *)((int)this + 0x100c) = uVar5;
      goto LAB_00ac3d56;
    }
  }
  FUN_00a10f50(param_3,(int *)&DAT_00e6def0);
  return 0;
}


//// FUNCTION FUN_00ac3df0 @ 00ac3df0 ////

void __fastcall FUN_00ac3df0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7d2b4;
  return;
}


//// FUNCTION FUN_00ac3e00 @ 00ac3e00 ////

undefined4 * __thiscall FUN_00ac3e00(void *this,byte param_1)

{
  FUN_00ac3df0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ac3e20 @ 00ac3e20 ////

void __fastcall FUN_00ac3e20(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 **)(param_1 + 0x18) = &DAT_010b9370;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x1a;
  return;
}


//// FUNCTION FUN_00ac3e40 @ 00ac3e40 ////

void __thiscall FUN_00ac3e40(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + *(int *)((int)this + 0x14) * 4) = param_1;
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  return;
}


//// FUNCTION FUN_00ac3e60 @ 00ac3e60 ////

void __thiscall FUN_00ac3e60(void *this,undefined4 *param_1,uint param_2,int *param_3)

{
  int *this_00;
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iStack_8;
  char *pcStack_4;
  
  if (1 < *param_3) {
    return;
  }
switchD_00ac3e7f_default:
  switch(*(undefined4 *)((int)this + 0x34)) {
  case 0:
    uVar7 = *(uint *)((int)this + 0x24);
    if ((int)param_2 < (int)uVar7) {
      uVar7 = param_2;
    }
    uVar9 = *(uint *)((int)this + 0x1c);
    this_00 = (int *)((int)this + 0x18);
    *(uint *)((int)this + 0x1c) = uVar9 + uVar7;
    if (*(int *)((int)this + 0x20) < (int)(uVar9 + uVar7)) {
      FUN_00a10e50(this_00,uVar9);
    }
    puVar10 = param_1;
    puVar12 = (undefined4 *)(*this_00 + uVar9);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    param_1 = (undefined4 *)((int)param_1 + uVar7);
    for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    param_2 = param_2 - uVar7;
    iVar6 = *(int *)((int)this + 0x24) - uVar7;
    *(int *)((int)this + 0x24) = iVar6;
    if (iVar6 != 0) {
      return;
    }
    pbVar1 = (byte *)*this_00;
    bVar2 = pbVar1[4];
    iVar6 = (((uint)pbVar1[1] + (uint)*pbVar1 * 0x100) * 0x100 + (uint)pbVar1[2]) * 0x100 +
            (uint)pbVar1[3];
    bVar3 = pbVar1[5];
    bVar4 = pbVar1[6];
    bVar5 = pbVar1[7];
    iStack_8 = CONCAT31(iStack_8._1_3_,bVar5);
    uVar7 = (uint)pbVar1[0x19] + (uint)pbVar1[0x18] * 0x100;
    *(uint *)((int)this + 0x28) = uVar7;
    if (((((uint)bVar2 * 0x100 + (uint)bVar3) * 0x100 + (uint)bVar4) * 0x100 + (uint)bVar5 !=
         0x20000) || (((iVar6 != 0x51600 && (iVar6 != 0x51607)) || (1000 < uVar7)))) {
      iStack_8 = 0x30000000;
      pcStack_4 = s_Bad_AppleSingle_Double_header__00e6fdf4;
      FUN_00a10f50(param_3,&iStack_8);
      return;
    }
    *(undefined4 *)((int)this + 0x34) = 1;
    *(uint *)((int)this + 0x24) = uVar7 * 0xc;
    break;
  case 2:
    goto switchD_00ac3e7f_caseD_2;
  case 3:
    goto switchD_00ac3e7f_caseD_3;
  default:
    goto switchD_00ac3e7f_default;
  }
  uVar7 = *(uint *)((int)this + 0x24);
  if ((int)param_2 < (int)*(uint *)((int)this + 0x24)) {
    uVar7 = param_2;
  }
  uVar9 = *(uint *)((int)this + 0x1c);
  *(uint *)((int)this + 0x1c) = uVar9 + uVar7;
  if (*(int *)((int)this + 0x20) < (int)(uVar9 + uVar7)) {
    FUN_00a10e50((int *)((int)this + 0x18),uVar9);
  }
  puVar10 = param_1;
  puVar12 = (undefined4 *)(*(int *)((int)this + 0x18) + uVar9);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  param_2 = param_2 - uVar7;
  iVar6 = *(int *)((int)this + 0x24) - uVar7;
  *(int *)((int)this + 0x24) = iVar6;
  if (iVar6 != 0) {
    return;
  }
  *(undefined4 *)((int)this + 0x34) = 2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  param_1 = (undefined4 *)((int)param_1 + uVar7);
switchD_00ac3e7f_caseD_2:
  if (*(int *)((int)this + 0x28) <= *(int *)((int)this + 0x2c)) {
    if (param_2 == 0) {
      return;
    }
    iStack_8 = 0x30000000;
    pcStack_4 = s_AppleSingle_Double_corrupted__00e6fdd4;
    FUN_00a10f50(param_3,&iStack_8);
    return;
  }
  iVar6 = *(int *)((int)this + 0x2c) * 0xc;
  pbVar1 = (byte *)(*(int *)((int)this + 0x18) + 0x1a + iVar6);
  iVar13 = 0;
  iVar11 = (((uint)*(byte *)(*(int *)((int)this + 0x18) + 0x1b + iVar6) + (uint)*pbVar1 * 0x100) *
            0x100 + (uint)pbVar1[2]) * 0x100 + (uint)pbVar1[3];
  pbVar1 = (byte *)(iVar6 + 0x22 + *(int *)((int)this + 0x18));
  *(uint *)((int)this + 0x24) =
       (((uint)*pbVar1 * 0x100 + (uint)pbVar1[1]) * 0x100 + (uint)pbVar1[2]) * 0x100 +
       (uint)pbVar1[3];
  *(undefined4 *)((int)this + 0x30) = 0;
  puVar10 = this;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      iVar6 = (**(code **)(*(int *)*puVar10 + 4))(iVar11);
      if (iVar6 != 0) {
        *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((int)this + iVar13 * 4);
        break;
      }
      iVar13 = iVar13 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar13 < *(int *)((int)this + 0x14));
  }
  if (*(int **)((int)this + 0x30) == (int *)0x0) {
    iStack_8 = 0x40000000;
    pcStack_4 = s_Missing_AppleSingle_Double_handl_00e6fdb0;
    FUN_00a10f50(param_3,&iStack_8);
    return;
  }
  (**(code **)(**(int **)((int)this + 0x30) + 8))(iVar11,param_3);
  if (1 < *param_3) {
    return;
  }
  *(undefined4 *)((int)this + 0x34) = 3;
switchD_00ac3e7f_caseD_3:
  uVar7 = param_2;
  if ((int)*(uint *)((int)this + 0x24) <= (int)param_2) {
    uVar7 = *(uint *)((int)this + 0x24);
  }
  (**(code **)(**(int **)((int)this + 0x30) + 0xc))(param_1,uVar7,param_3);
  iStack_8 = (int)param_1 + uVar7;
  pcStack_4 = (char *)((int)pcStack_4 - uVar7);
  iVar6 = *(int *)((int)this + 0x24) - uVar7;
  *(int *)((int)this + 0x24) = iVar6;
  if (iVar6 != 0) {
    return;
  }
  if (1 < *param_3) {
    return;
  }
  (**(code **)(**(int **)((int)this + 0x30) + 0x10))(param_3);
  if (1 < *param_3) {
    return;
  }
  *(undefined4 *)((int)this + 0x34) = 2;
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  goto switchD_00ac3e7f_default;
}


//// FUNCTION FUN_00ac4200 @ 00ac4200 ////

void __thiscall FUN_00ac4200(void *this,int *param_1)

{
  if ((*param_1 < 2) && (*(int *)((int)this + 0x34) == 3)) {
    (**(code **)(**(int **)((int)this + 0x30) + 0x10))(param_1);
    FUN_00a10f50(param_1,(int *)&stack0xfffffff4);
  }
  return;
}


//// FUNCTION FUN_00ac4240 @ 00ac4240 ////

undefined4 * __fastcall FUN_00ac4240(undefined4 *param_1)

{
  int *this;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  this = param_1 + 1;
  param_1[3] = 0;
  param_1[2] = 0;
  *this = (int)&DAT_010b9370;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = &DAT_010b9370;
  *param_1 = &PTR_FUN_00d7d2c8;
  uVar1 = param_1[2];
  iVar2 = uVar1 + 0x1a;
  param_1[2] = iVar2;
  if ((int)param_1[3] < iVar2) {
    FUN_00a10e50(this,uVar1);
  }
  puVar3 = (undefined4 *)*this;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)*this = 0;
  *(undefined1 *)(*this + 1) = 5;
  *(undefined1 *)(*this + 2) = 0x16;
  *(undefined1 *)(*this + 3) = 7;
  *(undefined1 *)(*this + 4) = 0;
  *(undefined1 *)(*this + 5) = 2;
  *(undefined1 *)(*this + 6) = 0;
  *(undefined1 *)(*this + 7) = 0;
  *(undefined1 *)(*this + 0x18) = 0;
  *(undefined1 *)(*this + 0x19) = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  return param_1;
}


//// FUNCTION FUN_00ac42e0 @ 00ac42e0 ////

undefined4 * __thiscall FUN_00ac42e0(void *this,byte param_1)

{
  FUN_00ac4300(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ac4300 @ 00ac4300 ////

void __fastcall FUN_00ac4300(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7d2c8;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
  }
  if ((undefined1 *)param_1[4] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[4]);
  }
  if ((undefined1 *)param_1[1] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[1]);
  }
  FUN_00ac3df0(param_1);
  return;
}


//// FUNCTION FUN_00ac4360 @ 00ac4360 ////

void __thiscall FUN_00ac4360(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)((int)this + 0x1c);
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | (uint)(param_1 == 1);
  uVar3 = *(uint *)((int)this + 8);
  this_00 = (int *)((int)this + 4);
  iVar1 = uVar3 + 0xc;
  *(int *)((int)this + 8) = iVar1;
  if (*(int *)((int)this + 0xc) < iVar1) {
    FUN_00a10e50(this_00,uVar3);
  }
  uVar3 = param_1 >> 0x1f;
  iVar2 = iVar2 * 0xc;
  *(char *)(*this_00 + 0x1a + iVar2) = (char)(param_1 + (uVar3 & 0xffffff) >> 0x18);
  *(char *)(*this_00 + 0x1b + iVar2) = (char)(param_1 + (uVar3 & 0xffff) >> 0x10);
  *(char *)(*this_00 + 0x1c + iVar2) = (char)(param_1 + (uVar3 & 0xff) >> 8);
  *(char *)(*this_00 + 0x1d + iVar2) = (char)param_1;
  *(undefined1 *)(*this_00 + 0x1e + iVar2) = 0;
  *(undefined1 *)(*this_00 + 0x1f + iVar2) = 0;
  *(undefined1 *)(*this_00 + 0x20 + iVar2) = 0;
  *(undefined1 *)(*this_00 + 0x21 + iVar2) = 0;
  *(undefined1 *)(*this_00 + 0x22 + iVar2) = 0;
  *(undefined1 *)(*this_00 + 0x23 + iVar2) = 0;
  *(undefined1 *)(*this_00 + 0x24 + iVar2) = 0;
  *(undefined1 *)(*this_00 + 0x25 + iVar2) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  return;
}


//// FUNCTION FUN_00ac45d0 @ 00ac45d0 ////

int __thiscall FUN_00ac45d0(void *this,undefined4 *param_1,uint param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_8;
  
  puVar3 = param_1;
switchD_00ac45e9_switchD:
  switch(*(undefined4 *)((int)this + 0x2c)) {
  case 0:
    iVar8 = *(int *)((int)this + 8);
    local_8 = 0;
    if (0 < *(int *)((int)this + 0x1c)) {
      iVar6 = 0x22;
      do {
        FUN_00ac47d0((int *)((int)this + 4),iVar6 + -4,iVar8);
        iVar2 = *(int *)((int)this + 4);
        pbVar1 = (byte *)(iVar6 + iVar2);
        iVar2 = iVar6 + iVar2;
        iVar6 = iVar6 + 0xc;
        local_8 = local_8 + 1;
        iVar8 = (uint)*(byte *)(iVar2 + 3) + iVar8 +
                (((uint)*pbVar1 * 0x100 + (uint)*(byte *)(iVar2 + 1)) * 0x100 +
                (uint)*(byte *)(iVar2 + 2)) * 0x100;
      } while (local_8 < *(int *)((int)this + 0x1c));
    }
    iVar8 = *(int *)((int)this + 0x1c);
    *(char *)(*(int *)((int)this + 4) + 0x18) = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8);
    *(char *)(*(int *)((int)this + 4) + 0x19) = (char)iVar8;
    if (*(int *)((int)this + 0x24) != 0) {
      **(undefined1 **)((int)this + 4) = 0;
      *(undefined1 *)(*(int *)((int)this + 4) + 1) = 5;
      *(undefined1 *)(*(int *)((int)this + 4) + 2) = 0x16;
      *(undefined1 *)(*(int *)((int)this + 4) + 3) = 0;
    }
    if (*(int **)((int)this + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x28) + 0x1c))(param_3);
      (**(code **)(**(int **)((int)this + 0x28) + 0x10))(0,param_3);
      if (1 < *param_3) {
        return 0;
      }
    }
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x2c) = 1;
switchD_00ac45e9_caseD_1:
    uVar4 = *(int *)((int)this + 8) - *(int *)((int)this + 0x20);
    if ((int)param_2 < (int)uVar4) {
      uVar4 = param_2;
    }
    param_2 = param_2 - uVar4;
    puVar7 = (undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 0x20));
    puVar9 = param_1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    param_1 = (undefined4 *)((int)param_1 + uVar4);
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(uint *)((int)this + 0x20) = *(int *)((int)this + 0x20) + uVar4;
    if (param_2 != 0) {
      *(undefined4 *)((int)this + 0x20) = 0;
      *(undefined4 *)((int)this + 0x2c) = 2;
LAB_00ac4745:
      if (*(int **)((int)this + 0x28) == (int *)0x0) {
        uVar4 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x20);
        if ((int)param_2 < (int)uVar4) {
          uVar4 = param_2;
        }
        puVar7 = (undefined4 *)(*(int *)((int)this + 0x10) + *(int *)((int)this + 0x20));
        puVar9 = param_1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      else {
        uVar4 = (**(code **)(**(int **)((int)this + 0x28) + 0x18))(param_1,param_2,param_3);
        if (1 < *param_3) {
          return 0;
        }
      }
      param_1 = (undefined4 *)((int)param_1 + uVar4);
      *(uint *)((int)this + 0x20) = *(int *)((int)this + 0x20) + uVar4;
      if (uVar4 == 0) {
        *(undefined4 *)((int)this + 0x2c) = 3;
      }
    }
switchD_00ac45e9_caseD_3:
    return (int)param_1 - (int)puVar3;
  case 1:
    goto switchD_00ac45e9_caseD_1;
  case 2:
    goto LAB_00ac4745;
  case 3:
    goto switchD_00ac45e9_caseD_3;
  default:
    goto switchD_00ac45e9_switchD;
  }
}


//// FUNCTION FUN_00ac47d0 @ 00ac47d0 ////

void __thiscall FUN_00ac47d0(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 0x1f;
  *(char *)(*(int *)this + param_1) = (char)(param_2 + (uVar1 & 0xffffff) >> 0x18);
  *(char *)(*(int *)this + 1 + param_1) = (char)(param_2 + (uVar1 & 0xffff) >> 0x10);
  *(char *)(*(int *)this + 2 + param_1) = (char)(param_2 + (uVar1 & 0xff) >> 8);
  *(char *)(*(int *)this + 3 + param_1) = (char)param_2;
  return;
}


//// FUNCTION FUN_00ac4860 @ 00ac4860 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

uint __fastcall FUN_00ac4860(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  int unaff_EDI;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  byte *pbStack_1030;
  uint *puStack_102c;
  int iStack_1018;
  uint auStack_1014 [3];
  undefined4 auStack_1008 [252];
  byte abStack_c18 [3072];
  undefined1 auStack_18 [20];
  undefined4 uStack_4;
  
  uStack_4 = 0xac486a;
  puStack_102c = (uint *)0xac4875;
  auStack_1014[0] = (**(code **)(*param_1 + 0x20))();
  if ((auStack_1014[0] & 8) != 0) {
    return 6;
  }
  if ((auStack_1014[0] & 1) == 0) {
    return 9;
  }
  if ((auStack_1014[0] & 4) != 0) {
    return 5;
  }
  if ((auStack_1014[0] & 0x10) != 0) {
    return 8;
  }
  if ((auStack_1014[0] & 0x40) == 0) {
    auStack_1014[0] = auStack_1014[0] & 0x20;
    puStack_102c = auStack_1014 + 1;
    pbStack_1030 = (byte *)0x0;
    auStack_1008[0] = 0;
    auStack_1014[1] = 0;
    (**(code **)(*param_1 + 0x10))();
    if (1 < iStack_1018) {
      FUN_00a10ef0((int)&iStack_1018);
      return 10;
    }
    iVar2 = (**(code **)(*param_1 + 0x18))(auStack_1008,0x400,&iStack_1018);
    puStack_102c = auStack_1014;
    (**(code **)(*param_1 + 0x1c))(&stack0xffffefdc);
    if ((unaff_EDI < 2) && (iVar2 != 0)) {
      bVar7 = 0;
      iVar6 = iVar2 + -1;
      do {
        bVar1 = *pbStack_1030;
        bVar7 = bVar7 | bVar1 & 0x80;
        if ((bVar1 & 0x80) == 0) {
          iVar3 = _iscntrl((int)(char)bVar1);
          if (iVar3 != 0) {
            iVar3 = iVar6;
            if ((*pbStack_1030 & 0x80) != 0) break;
            iVar4 = _isspace((int)(char)*pbStack_1030);
            if (iVar4 == 0) break;
          }
        }
        pbStack_1030 = pbStack_1030 + 1;
        iVar3 = iVar6 + -1;
        bVar10 = iVar6 != 0;
        iVar6 = iVar3;
      } while (bVar10);
      if (iVar3 < 0) {
        if (4 < iVar2) {
          iVar6 = 5;
          bVar10 = true;
          piVar5 = &iStack_1018;
          pcVar9 = &DAT_00e6fe40;
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar10 = (char)*piVar5 == *pcVar9;
            piVar5 = (int *)((int)piVar5 + 1);
            pcVar9 = pcVar9 + 1;
          } while (bVar10);
          if (bVar10) goto LAB_00ac4a61;
        }
        uVar8 = 1;
        if ((bVar7 != 0) && (DAT_010c9fc4 != 0)) {
          piVar5 = FUN_00abb270(DAT_010c9fc4,1);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0x14))();
            pbStack_1030 = abStack_c18;
            iVar2 = (**(code **)(*piVar5 + 0xc))
                              (&stack0xffffefe4,(int)&iStack_1018 + iVar2,&pbStack_1030,auStack_18);
            if (iVar2 == 0) {
              iVar2 = (**(code **)(*piVar5 + 0x10))();
              if (iVar2 != 1) {
                uVar8 = 0xc;
              }
            }
            (**(code **)*piVar5)(1);
          }
        }
        if (puStack_102c != (uint *)0x0) {
          uVar8 = uVar8 | 0x100;
        }
        FUN_00a10ef0((int)&stack0xffffefd8);
        return uVar8;
      }
LAB_00ac4a61:
      if ((puStack_102c == (uint *)0x0) && (4 < iVar2)) {
        iVar2 = 3;
        bVar10 = true;
        piVar5 = &iStack_1018;
        pcVar9 = &DAT_00e6fe48;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar10 = (char)*piVar5 == *pcVar9;
          piVar5 = (int *)((int)piVar5 + 1);
          pcVar9 = pcVar9 + 1;
        } while (bVar10);
        if (((((bVar10) || (iStack_1018 == DAT_00e6fe4c)) || (iStack_1018 == DAT_00e6fe50)) ||
            (((short)iStack_1018 == DAT_00e6fe54 || ((short)iStack_1018 == DAT_00e6fe58)))) ||
           ((short)iStack_1018 == DAT_00e6fe5c)) {
          FUN_00a10ef0((int)&stack0xffffefd8);
          return 0x402;
        }
      }
      FUN_00a10ef0((int)&stack0xffffefd8);
      return (-(uint)(puStack_102c != (uint *)0x0) & 0x100) + 2;
    }
    FUN_00a10ef0((int)&stack0xffffefd8);
  }
  return 0xb;
}


//// FUNCTION FUN_00ac4b40 @ 00ac4b40 ////

undefined4 * __cdecl FUN_00ac4b40(int *param_1,undefined4 param_2,int param_3)

{
  void *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_3 == 0) {
    puVar1 = operator_new(0x18);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_FUN_00d7d2dc;
      puVar1[3] = param_1;
      uVar2 = (**(code **)(*param_1 + 0x40))(param_2);
      puVar1[4] = uVar2;
      iVar3 = (**(code **)(*param_1 + 0x40))(param_2);
      puVar1[5] = iVar3;
      *(undefined4 *)(iVar3 + 0x20) = 1;
      return puVar1;
    }
  }
  else if (param_3 == 2) {
    puVar1 = operator_new(0xb8);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00ac89c0(puVar1,param_1,param_2);
      *puVar1 = &PTR_FUN_00d7d32c;
      return puVar1;
    }
  }
  else {
    this = operator_new(0xb8);
    if (this != (void *)0x0) {
      puVar1 = FUN_00ac89c0(this,param_1,param_2);
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00ac4cc0 @ 00ac4cc0 ////

undefined4 * __thiscall FUN_00ac4cc0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00d7d2dc;
  if (*(undefined4 **)((int)this + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x10))(1);
  }
  if (*(undefined4 **)((int)this + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x14))(1);
  }
  FUN_00ac4dd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ac4db0 @ 00ac4db0 ////

undefined4 * __thiscall FUN_00ac4db0(void *this,byte param_1)

{
  FUN_00ac8b20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ac4dd0 @ 00ac4dd0 ////

void __fastcall FUN_00ac4dd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7d37c;
  FUN_00abad10(param_1);
  return;
}


//// FUNCTION FUN_00ac4de0 @ 00ac4de0 ////

undefined4 * __thiscall FUN_00ac4de0(void *this,byte param_1)

{
  FUN_00ac4dd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ac4e00 @ 00ac4e00 ////

undefined4 __thiscall FUN_00ac4e00(void *this,void *param_1,int *param_2)

{
  int iVar1;
  undefined1 *_Memory;
  undefined1 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  local_c = &DAT_010b9370;
  FUN_00a110b0(param_1,&local_c,0);
  _Memory = (undefined1 *)0x0;
  (**(code **)(**(int **)((int)this + 0xc) + 0x24))(&local_c,&local_c);
  iVar1 = *param_2;
  while (iVar1 < 2) {
    switch(*_Memory) {
    case 0x4e:
    case 0x6e:
      if (_Memory == &DAT_010b9370) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    default:
      (**(code **)(**(int **)((int)this + 0xc) + 0x24))(&stack0xffffffe4,&stack0xffffffe4,0,param_2)
      ;
      iVar1 = *param_2;
      break;
    case 0x59:
    case 0x79:
      if (_Memory != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      return 1;
    }
  }
  if (_Memory == &DAT_010b9370) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00ac4f20 @ 00ac4f20 ////

undefined4 * __fastcall FUN_00ac4f20(int param_1)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  undefined4 *this;
  int iVar3;
  LPCSTR local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118 [5];
  char local_104;
  char local_103;
  char local_102;
  
  local_11c = 0;
  local_120 = 0;
  local_124 = &DAT_010b9370;
  FUN_00a10df0(&local_124,(undefined4 *)(param_1 + 0x10));
  FUN_00a10d90(&local_124,&DAT_00e6fe60);
  puVar1 = operator_new(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00abcc00(puVar1);
  }
  pvVar2 = __findfirst(local_124,local_118);
  if (-1 < (int)pvVar2) {
    do {
      if ((local_104 != '.') || ((local_103 != '\0' && ((local_103 != '.' || (local_102 != '\0')))))
         ) {
        this = FUN_00abccb0(puVar1);
        this[1] = 0;
        FUN_00a10d90(this,&local_104);
      }
      iVar3 = __findnext(pvVar2,local_118);
    } while (iVar3 == 0);
  }
  FUN_00acee8d(pvVar2);
  if (local_124 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  return puVar1;
}


//// FUNCTION FUN_00ac5000 @ 00ac5000 ////

void __cdecl FUN_00ac5000(int *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined1 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = FUN_00acecd0((uint *)(*param_1 + param_2),'%');
  while( true ) {
    if (puVar2 == (uint *)0x0) {
      return;
    }
    local_4 = 0;
    local_c = &DAT_010b9370;
    local_8 = 0;
    FUN_00a10d90(&local_c,(char *)puVar2);
    iVar1 = *param_1;
    param_1[1] = (int)((int)puVar2 + (1 - iVar1));
    FUN_00a10df0(param_1,&local_c);
    if (local_c != &DAT_010b9370) break;
    puVar2 = FUN_00acecd0((uint *)((int)puVar2 + *param_1 + (2 - iVar1)),'%');
  }
                    /* WARNING: Subroutine does not return */
  _free(local_c);
}


//// FUNCTION FUN_00ac51a0 @ 00ac51a0 ////

void __thiscall FUN_00ac51a0(void *this,int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  char *pcVar13;
  int *local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint *local_74;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60 [8];
  int local_40 [16];
  
  *(undefined4 *)this = 0;
  local_80 = *param_1;
  local_7c = param_1[1];
  if (*(int *)((int)this + 8) == 0) {
    puVar3 = operator_new(0x114);
    if (puVar3 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00a111a0(puVar3);
    }
    *(undefined4 *)((int)this + 8) = uVar4;
  }
  local_70 = FUN_00a9d250(&local_80);
  if (local_70 != 0) {
    local_6c = FUN_00a9d250(&local_80);
    iVar5 = FUN_00a9d250(&local_80);
    local_64 = iVar5;
    if (0 < iVar5) {
      piVar12 = local_60;
      piVar10 = local_40;
      local_84 = (int *)iVar5;
      do {
        iVar6 = FUN_00a9d250(&local_80);
        *piVar10 = iVar6;
        iVar6 = FUN_00a9d250(&local_80);
        *piVar12 = iVar6;
        piVar10 = piVar10 + 2;
        piVar12 = piVar12 + 1;
        local_84 = (int *)((int)local_84 + -1);
      } while (local_84 != (int *)0x0);
    }
    FUN_00a9d390(&local_80,(void *)(*(int *)((int)this + 8) + 0x4c));
    *(undefined4 *)(*(int *)((int)this + 8) + 0x5c) = 0;
    if (0 < iVar5) {
      local_84 = local_60;
      local_78 = iVar5;
      do {
        iVar5 = *(int *)((int)this + 8);
        puVar11 = (uint *)(*local_84 + *(int *)(iVar5 + 0x4c));
        uVar8 = 0xffffffff;
        puVar7 = puVar11;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          uVar2 = *puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
        } while ((char)uVar2 != '\0');
        iVar6 = *(int *)(iVar5 + 0x4c);
        pcVar9 = (char *)(~uVar8 + (int)puVar11);
        *local_84 = *(int *)(iVar5 + 0x5c);
        if (pcVar9 <= (char *)(*(int *)(iVar5 + 0x50) + iVar6)) {
          do {
            puVar7 = FUN_00acecd0(puVar11,'%');
            local_74 = puVar7;
            if (puVar7 == (uint *)0x0) break;
            if (*(char *)((int)puVar7 + 1) == '%') {
              FUN_00a10d40((void *)(*(int *)((int)this + 8) + 0x58),puVar11,
                           (int)puVar7 + (1 - (int)puVar11));
            }
            else {
              uVar8 = 0xffffffff;
              pcVar13 = pcVar9;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + 1;
              } while (cVar1 != '\0');
              FUN_00a10d40((void *)(*(int *)((int)this + 8) + 0x58),puVar11,
                           (int)puVar7 - (int)puVar11);
              FUN_00a10d40((void *)(*(int *)((int)this + 8) + 0x58),(undefined4 *)pcVar9,~uVar8 - 1)
              ;
              pcVar9 = pcVar9 + ~uVar8;
              puVar7 = local_74;
            }
            puVar11 = (uint *)((int)puVar7 + 2);
          } while (pcVar9 <= (char *)(*(int *)(*(int *)((int)this + 8) + 0x50) +
                                     *(int *)(*(int *)((int)this + 8) + 0x4c)));
        }
        FUN_00a10d90((void *)(*(int *)((int)this + 8) + 0x58),(char *)puVar11);
        FUN_00ac5000((int *)(*(int *)((int)this + 8) + 0x58),*local_84);
        iVar5 = *(int *)((int)this + 8);
        uVar8 = *(uint *)(iVar5 + 0x5c);
        *(uint *)(iVar5 + 0x5c) = uVar8 + 1;
        if (*(int *)(iVar5 + 0x60) < (int)(uVar8 + 1)) {
          FUN_00a10e50((int *)(iVar5 + 0x58),uVar8);
        }
        local_84 = local_84 + 1;
        local_78 = local_78 + -1;
        *(undefined1 *)(*(int *)(iVar5 + 0x58) + uVar8) = 0;
      } while (local_78 != 0);
      if (0 < local_64) {
        piVar12 = local_60;
        uVar8 = local_70 << 0xc | local_6c;
        local_78 = 0;
        iVar5 = local_64;
        do {
          local_68 = *(int *)(*(int *)((int)this + 8) + 0x58) + *piVar12;
          local_6c = uVar8 << 0x10;
          FUN_00a10f50(this,(int *)&local_6c);
          piVar12 = piVar12 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00ac54c0 @ 00ac54c0 ////

void __thiscall FUN_00ac54c0(void *this,void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *local_10;
  int local_c;
  undefined1 *local_8;
  int local_4;
  
  if (*(int *)((int)this + 8) == 0) {
    puVar4 = operator_new(0x114);
    if (puVar4 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00a111a0(puVar4);
    }
    *(undefined4 *)((int)this + 8) = uVar5;
  }
  iVar2 = *(int *)((int)this + 8);
  *(undefined4 *)this = 0;
  uVar7 = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined4 *)(iVar2 + 100) = 0;
  *(int *)(iVar2 + 4) = iVar2;
  local_10 = &DAT_00e6fe68;
  pcVar8 = &DAT_00e6fe68;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_c = ~uVar7 - 1;
  puVar4 = (undefined4 *)FUN_00a12c30(param_1,&local_10,*(int *)(*(int *)((int)this + 8) + 8));
  if (puVar4 == (undefined4 *)0x0) {
    *(void **)(*(int *)((int)this + 8) + 4) = param_1;
    return;
  }
  do {
    uVar7 = 0xffffffff;
    local_8 = &DAT_00e6fe64;
    pcVar8 = &DAT_00e6fe64;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_4 = ~uVar7 - 1;
    puVar6 = (undefined4 *)FUN_00a12c30(param_1,&local_8,*(int *)(*(int *)((int)this + 8) + 8));
    if (puVar6 == (undefined4 *)0x0) {
      *(void **)(*(int *)((int)this + 8) + 4) = param_1;
      return;
    }
    iVar2 = *(int *)((int)this + 8);
    iVar3 = *(int *)(iVar2 + 8);
    *(int *)(iVar2 + 8) = iVar3 + 1;
    uVar7 = _atol((char *)*puVar4);
    *(uint *)(iVar2 + 0xc + iVar3 * 8) = uVar7;
    *(undefined4 *)(iVar2 + 0x10 + iVar3 * 8) = *puVar6;
    if (*(int *)this <= (int)((int)uVar7 >> 0x1c & 0xfU)) {
      *(uint *)((int)this + 4) = uVar7 >> 0x10 & 0xff;
      *(uint *)this = *(int *)(iVar2 + 0xc + iVar3 * 8) >> 0x1c & 0xf;
    }
    uVar7 = 0xffffffff;
    local_10 = &DAT_00e6fe68;
    pcVar8 = &DAT_00e6fe68;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_c = ~uVar7 - 1;
    puVar4 = (undefined4 *)FUN_00a12c30(param_1,&local_10,*(int *)(*(int *)((int)this + 8) + 8));
    if (puVar4 == (undefined4 *)0x0) {
      *(void **)(*(int *)((int)this + 8) + 4) = param_1;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00ac58e0 @ 00ac58e0 ////

undefined4 FUN_00ac58e0(void)

{
  return 0x1d49;
}


//// FUNCTION FUN_00ac58f0 @ 00ac58f0 ////

undefined4 FUN_00ac58f0(void)

{
  return 0x1ecf;
}


//// FUNCTION FUN_00ac5900 @ 00ac5900 ////

undefined4 FUN_00ac5900(void)

{
  return 0x33df;
}


//// FUNCTION FUN_00ac5910 @ 00ac5910 ////

undefined4 FUN_00ac5910(void)

{
  return 0x3567;
}


//// FUNCTION FUN_00ac5ab0 @ 00ac5ab0 ////

undefined4 __cdecl FUN_00ac5ab0(undefined4 *param_1,ushort *param_2,int *param_3,byte *param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_8;
  
  pbVar2 = (byte *)*param_3;
  local_8 = 0;
  puVar1 = (ushort *)*param_1;
  do {
    if (param_2 <= puVar1) {
LAB_00ac5c2a:
      *param_1 = puVar1;
      *param_3 = (int)pbVar2;
      return local_8;
    }
    uVar6 = (uint)*puVar1;
    puVar3 = puVar1 + 1;
    if ((((0xd7ff < uVar6) && (uVar6 < 0xdc00)) && (puVar3 < param_2)) &&
       ((uVar4 = (uint)*puVar3, 0xdbff < uVar4 && (uVar4 < 0xe000)))) {
      uVar6 = (uVar6 - 0xd800) * 0x400 + 0x2400 + uVar4;
      puVar3 = puVar1 + 2;
    }
    if (uVar6 < 0x80) {
      iVar5 = 1;
    }
    else if (uVar6 < 0x800) {
      iVar5 = 2;
    }
    else if (uVar6 < 0x10000) {
      iVar5 = 3;
    }
    else if (uVar6 < 0x200000) {
      iVar5 = 4;
    }
    else if (uVar6 < 0x4000000) {
      iVar5 = 5;
    }
    else if (uVar6 < 0x80000000) {
      iVar5 = 6;
    }
    else {
      uVar6 = 0xfffd;
      iVar5 = 2;
    }
    pbVar2 = pbVar2 + iVar5;
    if (param_4 < pbVar2) {
      pbVar2 = pbVar2 + -iVar5;
      local_8 = 2;
      goto LAB_00ac5c2a;
    }
    switch(iVar5) {
    case 6:
      pbVar2 = pbVar2 + -1;
      *pbVar2 = (byte)uVar6 & 0x3f | 0x80;
      uVar6 = uVar6 >> 6;
    case 5:
      pbVar2 = pbVar2 + -1;
      *pbVar2 = (byte)uVar6 & 0x3f | 0x80;
      uVar6 = uVar6 >> 6;
    case 4:
      pbVar2 = pbVar2 + -1;
      *pbVar2 = (byte)uVar6 & 0x3f | 0x80;
      uVar6 = uVar6 >> 6;
    case 3:
      pbVar2 = pbVar2 + -1;
      *pbVar2 = (byte)uVar6 & 0x3f | 0x80;
      uVar6 = uVar6 >> 6;
    case 2:
      pbVar2 = pbVar2 + -1;
      *pbVar2 = (byte)uVar6 & 0x3f | 0x80;
      uVar6 = uVar6 >> 6;
    case 1:
      pbVar2 = pbVar2 + -1;
      *pbVar2 = *(byte *)(iVar5 + 0xe99500) | (byte)uVar6;
    default:
      pbVar2 = pbVar2 + iVar5;
      puVar1 = puVar3;
    }
  } while( true );
}


//// FUNCTION FUN_00ac5c60 @ 00ac5c60 ////

undefined4 __cdecl FUN_00ac5c60(undefined4 *param_1,byte *param_2,int *param_3,short *param_4)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  short *psVar10;
  short *psVar11;
  
  pbVar9 = (byte *)*param_1;
  uVar2 = 0;
  psVar10 = (short *)*param_3;
  psVar1 = psVar10;
  if (param_2 <= pbVar9) {
LAB_00ac5d9d:
    *param_1 = pbVar9;
    *param_3 = (int)psVar10;
    return uVar2;
  }
  do {
    psVar6 = psVar1 + 1;
    iVar4 = 0;
    uVar5 = (uint)(ushort)(short)(char)(&DAT_00e99400)[*pbVar9];
    if (param_2 <= pbVar9 + uVar5) {
      *param_1 = pbVar9;
      *param_3 = (int)psVar10;
      return 1;
    }
    pbVar7 = pbVar9;
    pbVar8 = pbVar9;
    switch(uVar5) {
    case 5:
      pbVar7 = pbVar9 + 1;
      iVar4 = (uint)*pbVar9 << 6;
    case 4:
      pbVar8 = pbVar7 + 1;
      iVar4 = (iVar4 + (uint)*pbVar7) * 0x40;
    case 3:
      pbVar7 = pbVar8 + 1;
      iVar4 = (iVar4 + (uint)*pbVar8) * 0x40;
    case 2:
      pbVar8 = pbVar7 + 1;
      iVar4 = (iVar4 + (uint)*pbVar7) * 0x40;
    case 1:
      pbVar7 = pbVar8 + 1;
      iVar4 = (iVar4 + (uint)*pbVar8) * 0x40;
    case 0:
      iVar4 = iVar4 + (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
    }
    uVar5 = iVar4 - *(int *)(&DAT_00e993e8 + uVar5 * 4);
    if (param_4 <= psVar10) {
LAB_00ac5d96:
      uVar2 = 2;
      goto LAB_00ac5d9d;
    }
    psVar11 = psVar10;
    if (uVar5 < 0x10000) {
      *psVar10 = (short)uVar5;
    }
    else {
      if (uVar5 < 0x110000) {
        if (param_4 <= psVar6) goto LAB_00ac5d96;
        psVar11 = psVar10 + 1;
        psVar6 = psVar1 + 2;
        *psVar10 = (short)(uVar5 - 0x10000 >> 10) + -0x2800;
        sVar3 = ((ushort)(uVar5 - 0x10000) & 0x3ff) + 0xdc00;
      }
      else {
        sVar3 = -3;
      }
      *psVar11 = sVar3;
    }
    psVar10 = psVar11 + 1;
    pbVar9 = pbVar7;
    psVar1 = psVar6;
    if (param_2 <= pbVar7) {
      *param_1 = pbVar7;
      *param_3 = (int)psVar10;
      return 0;
    }
  } while( true );
}


//// FUNCTION FUN_00ac60d0 @ 00ac60d0 ////

void FUN_00ac60d0(char *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *_Memory;
  char *pcVar4;
  HANDLE hFindFile;
  _WIN32_FIND_DATAA _Stack_140;
  
  _Memory = FUN_00ac87f0(param_1,DAT_010c9fc4);
  param_2[1] = 0;
  cVar1 = *param_1;
  if (('@' < cVar1) && (cVar1 < '[')) {
    *param_1 = cVar1 + ' ';
  }
  pcVar2 = (char *)_Memory[1];
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    iVar3 = param_2[1];
    while ((cVar1 != '\\' && (pcVar4 = (char *)(**(code **)*_Memory)(), *pcVar4 != '\0'))) {
      cVar1 = *(char *)_Memory[1];
    }
    FUN_00a10d40(param_2,(undefined4 *)pcVar2,_Memory[1] - (int)pcVar2);
    if ((iVar3 != 0) &&
       (hFindFile = FindFirstFileA((LPCSTR)*param_2,&_Stack_140), hFindFile != (HANDLE)0xffffffff))
    {
      param_2[1] = iVar3;
      FUN_00a10d90(param_2,_Stack_140.cFileName);
      FindClose(hFindFile);
    }
    if (*(char *)_Memory[1] != '\0') {
      (**(code **)*_Memory)();
      FUN_00a10d40(param_2,(undefined4 *)&DAT_00e6f614,1);
    }
    pcVar2 = (char *)_Memory[1];
    cVar1 = *pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00ac61b0 @ 00ac61b0 ////

void __fastcall FUN_00ac61b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7ceb8;
  if ((undefined1 *)param_1[8] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[8]);
  }
  FUN_00ac6910(param_1);
  return;
}


//// FUNCTION FUN_00ac6280 @ 00ac6280 ////

int * __thiscall FUN_00ac6280(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_LAB_00d7d3f8;
  FUN_00ac64b0((int)this);
  *(undefined ***)this = &PTR_LAB_00d7d414;
  FUN_00ac6f90(this);
  if (*(undefined1 **)((int)this + 0x14) != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(*(undefined1 **)((int)this + 0x14));
  }
  if (*(undefined1 **)((int)this + 8) != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(*(undefined1 **)((int)this + 8));
  }
  FUN_00abc840(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ac62e0 @ 00ac62e0 ////

int * __thiscall FUN_00ac62e0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_LAB_00d7d414;
  FUN_00ac6f90(this);
  if (*(undefined1 **)((int)this + 0x14) != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(*(undefined1 **)((int)this + 0x14));
  }
  if (*(undefined1 **)((int)this + 8) != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(*(undefined1 **)((int)this + 8));
  }
  FUN_00abc840(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ac64b0 @ 00ac64b0 ////

void __fastcall FUN_00ac64b0(int param_1)

{
  int _FileHandle;
  
  if (-1 < *(int *)(param_1 + 0x24)) {
    __close(*(int *)(param_1 + 0x24));
  }
  _FileHandle = *(int *)(param_1 + 0x28);
  if ((_FileHandle != *(int *)(param_1 + 0x24)) && (-1 < _FileHandle)) {
    __close(_FileHandle);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}


//// FUNCTION FUN_00ac65b0 @ 00ac65b0 ////

void __cdecl FUN_00ac65b0(uint *param_1,int param_2,char *param_3,void *param_4)

{
  char cVar1;
  short sVar2;
  u_short uVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  servent *psVar7;
  u_long uVar8;
  ulong uVar9;
  hostent *phVar10;
  uint uVar11;
  char *pcVar12;
  char *name;
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  local_c = &DAT_010b9370;
  local_10 = 0;
  local_14 = 0;
  local_18 = &DAT_010b9370;
  puVar4 = FUN_00acecd0(param_1,':');
  if (puVar4 == (uint *)0x0) {
    local_8 = 0;
    if (param_2 == 1) {
      FUN_00a10d90(&local_c,(char *)param_1);
      param_1 = (uint *)&DAT_00e9956c;
    }
    else {
      FUN_00a10d90(&local_c,&DAT_010b9374);
    }
  }
  else {
    local_8 = 0;
    FUN_00a10d40(&local_c,param_1,(int)puVar4 - (int)param_1);
    param_1 = (uint *)((int)puVar4 + 1);
  }
  local_14 = 0;
  FUN_00a10d90(&local_18,(char *)param_1);
  name = local_c;
  pcVar12 = local_18;
  param_3[0] = '\0';
  param_3[1] = '\0';
  param_3[2] = '\0';
  param_3[3] = '\0';
  param_3[4] = '\0';
  param_3[5] = '\0';
  param_3[6] = '\0';
  param_3[7] = '\0';
  param_3[8] = '\0';
  param_3[9] = '\0';
  param_3[10] = '\0';
  param_3[0xb] = '\0';
  param_3[0xc] = '\0';
  param_3[0xd] = '\0';
  param_3[0xe] = '\0';
  param_3[0xf] = '\0';
  param_3[0] = '\x02';
  param_3[1] = '\0';
  if (*local_18 != '\0') {
    iVar5 = _isdigit((int)*local_18);
    if (iVar5 == 0) {
      psVar7 = getservbyname(pcVar12,(char *)&proto_00e6f110);
      if (psVar7 == (servent *)0x0) {
        puVar4 = FUN_00a10f50(param_4,(int *)&DAT_00e6f188);
        FUN_00a11000(puVar4,pcVar12);
        if (local_18 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
          _free(local_18);
        }
        if (local_c == &DAT_010b9370) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_c);
      }
      *(short *)(param_3 + 2) = psVar7->s_port;
    }
    else {
      lVar6 = _atol(pcVar12);
      uVar3 = htons((u_short)lVar6);
      *(u_short *)(param_3 + 2) = uVar3;
    }
  }
  cVar1 = *name;
  if (cVar1 == '\0') {
    uVar8 = htonl((param_2 != 2) - 1 & 0x7f000001);
    *(u_long *)(param_3 + 4) = uVar8;
  }
  else if ((cVar1 < '0') || ('9' < cVar1)) {
    phVar10 = gethostbyname(name);
    if (phVar10 == (hostent *)0x0) {
      puVar4 = FUN_00a10f50(param_4,(int *)&DAT_00e6f168);
      FUN_00a11000(puVar4,name);
      if (local_18 != &DAT_010b9370) goto LAB_00ac6732;
      goto LAB_00ac673b;
    }
    sVar2 = phVar10->h_length;
    pcVar12 = *phVar10->h_addr_list;
    for (uVar11 = (uint)(int)sVar2 >> 2; param_3 = param_3 + 4, uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)param_3 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar11 = (int)sVar2 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *param_3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      param_3 = param_3 + 1;
    }
  }
  else {
    uVar9 = inet_addr(name);
    *(ulong *)(param_3 + 4) = uVar9;
  }
  if (local_18 != &DAT_010b9370) {
LAB_00ac6732:
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
LAB_00ac673b:
  if (local_c == &DAT_010b9370) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_c);
}


//// FUNCTION FUN_00ac67a0 @ 00ac67a0 ////

void __cdecl FUN_00ac67a0(int param_1,byte param_2,void *param_3)

{
  u_short uVar1;
  hostent *phVar2;
  void *pvVar3;
  
  phVar2 = (hostent *)0x0;
  if ((param_2 & 1) != 0) {
    phVar2 = gethostbyaddr((char *)(param_1 + 4),4,2);
  }
  *(undefined4 *)((int)param_3 + 4) = 0;
  if ((phVar2 == (hostent *)0x0) || (phVar2->h_name == (char *)0x0)) {
    pvVar3 = FUN_00a10ec0(param_3,(uint)*(byte *)(param_1 + 4));
    FUN_00a10d90(pvVar3,&DAT_00e6dd38);
    pvVar3 = FUN_00a10ec0(pvVar3,(uint)*(byte *)(param_1 + 5));
    FUN_00a10d90(pvVar3,&DAT_00e6dd38);
    pvVar3 = FUN_00a10ec0(pvVar3,(uint)*(byte *)(param_1 + 6));
    FUN_00a10d90(pvVar3,&DAT_00e6dd38);
    FUN_00a10ec0(pvVar3,(uint)*(byte *)(param_1 + 7));
  }
  else {
    FUN_00a10d90(param_3,phVar2->h_name);
  }
  if ((param_2 & 2) != 0) {
    FUN_00a10d90(param_3,&DAT_00e6f5f8);
    uVar1 = ntohs(*(u_short *)(param_1 + 2));
    FUN_00a10ec0(param_3,(uint)uVar1);
  }
  return;
}


//// FUNCTION FUN_00ac6870 @ 00ac6870 ////

undefined4 * __thiscall FUN_00ac6870(void *this,void *param_1)

{
  int iVar1;
  WSAData local_190;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 **)((int)this + 4) = &DAT_010b9370;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 **)((int)this + 0x14) = &DAT_010b9370;
  *(undefined ***)this = &PTR_FUN_00d7d430;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  iVar1 = WSAStartup(0x101,&local_190);
  if (iVar1 != 0) {
    FUN_00a9f9d0(param_1,s_WSAStartup_failure_00e99570,&DAT_010b9374);
  }
  return this;
}


//// FUNCTION FUN_00ac68f0 @ 00ac68f0 ////

undefined4 * __thiscall FUN_00ac68f0(void *this,byte param_1)

{
  FUN_00ac6910(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ac6910 @ 00ac6910 ////

void __fastcall FUN_00ac6910(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7d430;
  FUN_00ac6b90((int)param_1);
  WSACleanup();
  if ((undefined1 *)param_1[5] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[5]);
  }
  FUN_00abc870(param_1);
  return;
}


//// FUNCTION FUN_00ac6a10 @ 00ac6a10 ////

undefined4 __thiscall FUN_00ac6a10(void *this,uint *param_1)

{
  u_short uVar1;
  uint *puVar2;
  long lVar3;
  undefined4 local_1c [2];
  undefined4 local_14;
  char local_10 [2];
  u_short local_e;
  
  local_14 = 0;
  local_1c[0] = 0;
  FUN_00ac65b0(*(uint **)((int)this + 4),1,local_10,local_1c);
  puVar2 = FUN_00acecd0(param_1,':');
  if (puVar2 != (uint *)0x0) {
    param_1 = (uint *)((int)puVar2 + 1);
  }
  lVar3 = _atol((char *)param_1);
  if (local_e != 0) {
    uVar1 = htons((u_short)lVar3);
    if (local_e != uVar1) {
      FUN_00a10ef0((int)local_1c);
      return 1;
    }
  }
  FUN_00a10ef0((int)local_1c);
  return 0;
}


//// FUNCTION FUN_00ac6b20 @ 00ac6b20 ////

void * __thiscall FUN_00ac6b20(void *this,byte param_1)

{
  int iVar1;
  int local_14;
  sockaddr local_10;
  
  local_14 = 0x10;
  iVar1 = getsockname(*(SOCKET *)((int)this + 0x10),&local_10,&local_14);
  if ((-1 < iVar1) && (local_14 == 0x10)) {
    FUN_00ac67a0((int)&local_10,param_1,(void *)((int)this + 0x14));
    return (void *)((int)this + 0x14);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_00a10d90((void *)((int)this + 0x14),s_unknown_00e995ac);
  return (void *)((int)this + 0x14);
}


//// FUNCTION FUN_00ac6b90 @ 00ac6b90 ////

void __fastcall FUN_00ac6b90(int param_1)

{
  if (-1 < (int)*(SOCKET *)(param_1 + 0x10)) {
    closesocket(*(SOCKET *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return;
}


//// FUNCTION FUN_00ac6d60 @ 00ac6d60 ////

undefined4 * __thiscall FUN_00ac6d60(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 **)((int)this + 8) = &DAT_010b9370;
  *(undefined1 **)((int)this + 0x14) = &DAT_010b9370;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)this = &PTR_LAB_00d7d414;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  if (0 < DAT_010ca0a8) {
    puVar2 = FUN_00ac6e40(this,2);
    uVar1 = *puVar2;
    puVar2 = FUN_00ac6dd0(this,2);
    FID_conflict__wprintf((wchar_t *)s_NetTcpTransport__s_connected_to___00e99604,*puVar2,uVar1);
    return this;
  }
  return this;
}


//// FUNCTION FUN_00ac6dd0 @ 00ac6dd0 ////

void * __thiscall FUN_00ac6dd0(void *this,byte param_1)

{
  int iVar1;
  int local_14;
  sockaddr local_10;
  
  local_14 = 0x10;
  iVar1 = getsockname(*(SOCKET *)((int)this + 4),&local_10,&local_14);
  if ((-1 < iVar1) && (local_14 == 0x10)) {
    FUN_00ac67a0((int)&local_10,param_1,(void *)((int)this + 8));
    return (void *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_00a10d90((void *)((int)this + 8),s_unknown_00e995ac);
  return (void *)((int)this + 8);
}


//// FUNCTION FUN_00ac6e40 @ 00ac6e40 ////

void * __thiscall FUN_00ac6e40(void *this,byte param_1)

{
  int iVar1;
  int local_14;
  sockaddr local_10;
  
  local_14 = 0x10;
  iVar1 = getpeername(*(SOCKET *)((int)this + 4),&local_10,&local_14);
  if ((-1 < iVar1) && (local_14 == 0x10)) {
    FUN_00ac67a0((int)&local_10,param_1,(void *)((int)this + 0x14));
    return (void *)((int)this + 0x14);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_00a10d90((void *)((int)this + 0x14),s_unknown_00e995ac);
  return (void *)((int)this + 0x14);
}


//// FUNCTION FUN_00ac6eb0 @ 00ac6eb0 ////

void __thiscall FUN_00ac6eb0(void *this,char *param_1,int param_2,void *param_3)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x20) = 0;
  if (4 < DAT_010ca0a8) {
    FID_conflict__wprintf((wchar_t *)s_NetTcpTransport_send__d_bytes_00e99628,param_2);
  }
  iVar1 = send(*(SOCKET *)((int)this + 4),param_1,param_2,0);
  if (iVar1 != param_2) {
    FUN_00a9f9d0(param_3,s_write_00e6dbf0,s_socket_00e99518);
    FUN_00a10f50(param_3,(int *)&DAT_00e6f180);
  }
  return;
}


//// FUNCTION FUN_00ac6f90 @ 00ac6f90 ////

void __fastcall FUN_00ac6f90(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_4;
  
  if (-1 < param_1[1]) {
    uStack_4 = param_1;
    if (0 < DAT_010ca0a8) {
      puVar2 = (undefined4 *)(**(code **)(*param_1 + 0xc))(2);
      uVar1 = *puVar2;
      puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(2);
      FID_conflict__wprintf((wchar_t *)s_NetTcpTransport__s_closing__s_00e99688,*puVar2,uVar1);
    }
    if (4 < DAT_010ca0a8) {
      FID_conflict__wprintf((wchar_t *)s_NetTcpTransport_lastRead__d_00e99668,param_1[8]);
    }
    if (param_1[8] != 0) {
      recv(param_1[1],(char *)((int)&uStack_4 + 3),1,0);
    }
    closesocket(param_1[1]);
  }
  param_1[1] = -1;
  return;
}


//// FUNCTION FUN_00ac70d0 @ 00ac70d0 ////

undefined4 __cdecl
FUN_00ac70d0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char *param_7,
            int param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  if (((param_7 == (char *)0x0) || (*param_7 != s_1_0_4_00e692dc[0])) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = FUN_00aa7840;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined **)(param_1 + 0x24) = &DAT_00aa7860;
    }
    if (param_2 == -1) {
      param_2 = 6;
    }
    bVar5 = param_4 < 0;
    if (bVar5) {
      param_4 = -param_4;
    }
    if (((((0 < param_5) && (param_5 < 10)) &&
         ((param_3 == 8 && ((7 < param_4 && (param_4 < 0x10)))))) && (-1 < param_2)) &&
       (((param_2 < 10 && (-1 < param_6)) && (param_6 < 3)))) {
      piVar1 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16b8);
      if (piVar1 == (int *)0x0) {
        return 0xfffffffc;
      }
      *(int **)(param_1 + 0x1c) = piVar1;
      piVar1[5] = (uint)bVar5;
      piVar1[9] = param_4;
      iVar4 = 1 << ((byte)param_4 & 0x1f);
      iVar2 = 1 << ((byte)(param_5 + 7) & 0x1f);
      piVar1[0x11] = param_5 + 7;
      *piVar1 = param_1;
      piVar1[8] = iVar4;
      piVar1[0x10] = iVar2;
      piVar1[0x12] = iVar2 + -1;
      piVar1[10] = iVar4 + -1;
      piVar1[0x13] = (param_5 + 9U) / 3;
      iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar4,2);
      piVar1[0xb] = iVar2;
      iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar1[8],2);
      piVar1[0xd] = iVar2;
      iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar1[0x10],2);
      piVar1[0xe] = iVar2;
      iVar2 = 1 << ((char)param_5 + 6U & 0x1f);
      piVar1[0x5a4] = iVar2;
      iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar2,4);
      piVar1[2] = iVar2;
      if (((piVar1[0xb] != 0) && (piVar1[0xd] != 0)) && ((piVar1[0xe] != 0 && (iVar2 != 0)))) {
        *(undefined1 *)((int)piVar1 + 0x19) = 8;
        piVar1[0x5a6] = iVar2 + (piVar1[0x5a4] & 0xfffffffeU);
        piVar1[0x5a3] = iVar2 + piVar1[0x5a4] * 3;
        piVar1[0x1f] = param_6;
        piVar1[0x1e] = param_2;
        uVar3 = FUN_00ac73c0(param_1);
        return uVar3;
      }
      *(char **)(param_1 + 0x18) = s_insufficient_memory_00e6e3a8;
      FUN_00ac7870(param_1);
      return 0xfffffffc;
    }
  }
  return 0xfffffffe;
}


//// FUNCTION FUN_00ac73c0 @ 00ac73c0 ////

undefined4 __cdecl FUN_00ac73c0(int param_1)

{
  int iVar1;
  
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
      (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x14) < 0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
    *(uint *)(iVar1 + 4) = (-(uint)(*(int *)(iVar1 + 0x14) != 0) & 0x47) + 0x2a;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    FUN_00ac9cf0(iVar1);
    FUN_00ac7930(iVar1);
    return 0;
  }
  return 0xfffffffe;
}


//// FUNCTION FUN_00ac7510 @ 00ac7510 ////

uint __cdecl FUN_00ac7510(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if ((((param_1 == (int *)0x0) || (puVar1 = (undefined4 *)param_1[7], puVar1 == (undefined4 *)0x0))
      || (4 < param_2)) || (param_2 < 0)) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
     ((puVar1[1] == 0x29a && (param_2 != 4)))) {
    param_1[6] = (int)s_stream_error_00e6e3c8;
    return 0xfffffffe;
  }
  if (param_1[4] == 0) {
    param_1[6] = (int)s_buffer_error_00e6e398;
    return 0xfffffffb;
  }
  iVar3 = puVar1[7];
  *puVar1 = param_1;
  puVar1[7] = param_2;
  if (puVar1[1] == 0x2a) {
    uVar2 = puVar1[0x1e] + -1 >> 1;
    if (3 < uVar2) {
      uVar2 = 3;
    }
    uVar2 = puVar1[9] * 0x1000 - 0x7800U | uVar2 << 6;
    if (puVar1[0x18] != 0) {
      uVar2 = uVar2 | 0x20;
    }
    puVar1[1] = 0x71;
    FUN_00ac77c0((int)puVar1,(uVar2 - uVar2 % 0x1f) + 0x1f);
    if (puVar1[0x18] != 0) {
      FUN_00ac77c0((int)puVar1,(uint)param_1[0xc] >> 0x10);
      FUN_00ac77c0((int)puVar1,param_1[0xc] & 0xffff);
    }
    param_1[0xc] = 1;
  }
  if (puVar1[4] == 0) {
    if (((param_1[1] == 0) && (param_2 <= iVar3)) && (param_2 != 4)) {
      param_1[6] = (int)s_buffer_error_00e6e398;
      return 0xfffffffb;
    }
  }
  else {
    FUN_00ac77f0((int)param_1);
    if (param_1[4] == 0) {
      puVar1[7] = 0xffffffff;
      return 0;
    }
  }
  if (puVar1[1] == 0x29a) {
    if (param_1[1] != 0) {
      param_1[6] = (int)s_buffer_error_00e6e398;
      return 0xfffffffb;
    }
LAB_00ac7682:
    if ((puVar1[0x1a] == 0) && ((param_2 == 0 || (puVar1[1] == 0x29a)))) goto LAB_00ac773c;
  }
  else if (param_1[1] == 0) goto LAB_00ac7682;
  iVar3 = (**(code **)(&DAT_00d7d498 + puVar1[0x1e] * 0xc))(puVar1,param_2);
  if ((iVar3 == 2) || (iVar3 == 3)) {
    puVar1[1] = 0x29a;
  }
  if ((iVar3 == 0) || (iVar3 == 2)) {
    if (param_1[4] == 0) {
      puVar1[7] = 0xffffffff;
    }
    return 0;
  }
  if (iVar3 == 1) {
    if (param_2 == 1) {
      FUN_00aca140((int)puVar1);
    }
    else {
      FUN_00aca080((int)puVar1,(undefined1 *)0x0,0,0);
      if (param_2 == 3) {
        *(undefined2 *)(puVar1[0xe] + -2 + puVar1[0x10] * 2) = 0;
        uVar2 = puVar1[0x10] * 2 - 2;
        puVar5 = (undefined4 *)puVar1[0xe];
        for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
    }
    FUN_00ac77f0((int)param_1);
    if (param_1[4] == 0) {
      puVar1[7] = 0xffffffff;
      return 0;
    }
  }
LAB_00ac773c:
  if (param_2 != 4) {
    return 0;
  }
  if (puVar1[5] == 0) {
    FUN_00ac77c0((int)puVar1,(uint)param_1[0xc] >> 0x10);
    FUN_00ac77c0((int)puVar1,param_1[0xc] & 0xffff);
    FUN_00ac77f0((int)param_1);
    puVar1[5] = 0xffffffff;
    return (uint)(puVar1[4] == 0);
  }
  return 1;
}


//// FUNCTION FUN_00ac77c0 @ 00ac77c0 ////

void __cdecl FUN_00ac77c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) = (char)((uint)param_2 >> 8);
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}


//// FUNCTION FUN_00ac77f0 @ 00ac77f0 ////

void __cdecl FUN_00ac77f0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x10);
  if (*(uint *)(param_1 + 0x10) < uVar3) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  if (uVar3 != 0) {
    puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + 0xc);
    puVar5 = *(undefined4 **)(param_1 + 0xc);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar3;
    *(uint *)(*(int *)(param_1 + 0x1c) + 0xc) = *(int *)(*(int *)(param_1 + 0x1c) + 0xc) + uVar3;
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar3;
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar3;
    *(uint *)(*(int *)(param_1 + 0x1c) + 0x10) = *(int *)(*(int *)(param_1 + 0x1c) + 0x10) - uVar3;
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar1 + 0x10) == 0) {
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 8);
    }
  }
  return;
}


//// FUNCTION FUN_00ac7870 @ 00ac7870 ////

uint __cdecl FUN_00ac7870(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2c);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return (iVar1 != 0x71) - 1 & 0xfffffffd;
  }
  return 0xfffffffe;
}


//// FUNCTION FUN_00ac7930 @ 00ac7930 ////

void __cdecl FUN_00ac7930(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x20) << 1;
  *(undefined2 *)(*(int *)(param_1 + 0x38) + -2 + *(int *)(param_1 + 0x40) * 2) = 0;
  uVar4 = *(int *)(param_1 + 0x40) * 2 - 2;
  puVar5 = *(undefined4 **)(param_1 + 0x38);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  iVar2 = *(int *)(param_1 + 0x78) * 0xc;
  *(uint *)(param_1 + 0x74) = (uint)*(ushort *)(&DAT_00d7d492 + iVar2);
  *(uint *)(param_1 + 0x80) = (uint)*(ushort *)(&DAT_00d7d490 + iVar2);
  *(uint *)(param_1 + 0x84) = (uint)*(ushort *)(&DAT_00d7d494 + iVar2);
  uVar1 = *(ushort *)(&DAT_00d7d496 + iVar2);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(uint *)(param_1 + 0x70) = (uint)uVar1;
  *(undefined4 *)(param_1 + 0x6c) = 2;
  *(undefined4 *)(param_1 + 0x54) = 2;
  return;
}


//// FUNCTION FUN_00ac7ae0 @ 00ac7ae0 ////

void __cdecl FUN_00ac7ae0(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  uVar1 = param_1[8];
  do {
    uVar3 = param_1[0x18];
    uVar5 = (param_1[0xc] - uVar3) - param_1[0x1a];
    if (uVar5 == 0) {
      if ((uVar3 != 0) || (uVar6 = uVar1, param_1[0x1a] != 0)) {
LAB_00ac7b15:
        uVar6 = uVar5;
        if (param_1[8] + -0x106 + uVar1 <= uVar3) {
          puVar7 = (undefined4 *)(param_1[0xb] + uVar1);
          puVar9 = (undefined4 *)param_1[0xb];
          for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          param_1[0x19] = param_1[0x19] - uVar1;
          iVar8 = param_1[0x10];
          param_1[0x18] = param_1[0x18] - uVar1;
          param_1[0x14] = param_1[0x14] - uVar1;
          puVar4 = (ushort *)(param_1[0xe] + iVar8 * 2);
          do {
            puVar4 = puVar4 + -1;
            if (*puVar4 < uVar1) {
              uVar2 = 0;
            }
            else {
              uVar2 = *puVar4 - (short)uVar1;
            }
            iVar8 = iVar8 + -1;
            *puVar4 = uVar2;
          } while (iVar8 != 0);
          puVar4 = (ushort *)(param_1[0xd] + uVar1 * 2);
          uVar3 = uVar1;
          do {
            puVar4 = puVar4 + -1;
            if (*puVar4 < uVar1) {
              uVar2 = 0;
            }
            else {
              uVar2 = *puVar4 - (short)uVar1;
            }
            uVar3 = uVar3 - 1;
            *puVar4 = uVar2;
          } while (uVar3 != 0);
          uVar6 = uVar5 + uVar1;
        }
      }
    }
    else {
      if (uVar5 != 0xffffffff) goto LAB_00ac7b15;
      uVar6 = 0xfffffffe;
    }
    if (((int *)*param_1)[1] == 0) {
      return;
    }
    uVar3 = FUN_00ac7c10((int *)*param_1,
                         (undefined4 *)(param_1[0x1a] + param_1[0x18] + param_1[0xb]),uVar6);
    uVar3 = param_1[0x1a] + uVar3;
    param_1[0x1a] = uVar3;
    if (2 < uVar3) {
      uVar5 = (uint)*(byte *)(param_1[0x18] + param_1[0xb]);
      param_1[0xf] = uVar5;
      param_1[0xf] = (uVar5 << ((byte)param_1[0x13] & 0x1f) ^
                     (uint)((byte *)(param_1[0x18] + param_1[0xb]))[1]) & param_1[0x12];
    }
    if (0x105 < uVar3) {
      return;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00ac7c10 @ 00ac7c10 ////

uint __cdecl FUN_00ac7c10(int *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if (param_3 < uVar1) {
    uVar2 = param_3;
  }
  if (uVar2 == 0) {
    return 0;
  }
  param_1[1] = uVar1 - uVar2;
  if (*(int *)(param_1[7] + 0x14) == 0) {
    uVar1 = FUN_00aa7700(param_1[0xc],(byte *)*param_1,uVar2);
    param_1[0xc] = uVar1;
  }
  puVar3 = (undefined4 *)*param_1;
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar1 = uVar2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  *param_1 = *param_1 + uVar2;
  param_1[2] = param_1[2] + uVar2;
  return uVar2;
}


//// FUNCTION FUN_00ac7c90 @ 00ac7c90 ////

uint __cdecl FUN_00ac7c90(int *param_1,int param_2)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar6;
  
  uVar9 = 0;
  do {
    uVar8 = param_1[0x1a];
    if (uVar8 < 0x106) {
      FUN_00ac7ae0(param_1);
      uVar8 = param_1[0x1a];
      if ((uVar8 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar8 == 0) {
        iVar6 = param_1[0x14];
        if (iVar6 < 0) {
          puVar7 = (undefined1 *)0x0;
        }
        else {
          puVar7 = (undefined1 *)(param_1[0xb] + iVar6);
        }
        FUN_00aca3c0(param_1,puVar7,param_1[0x18] - iVar6,(uint)(param_2 == 4));
        param_1[0x14] = param_1[0x18];
        FUN_00ac77f0(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return (param_2 != 4) - 1 & 2;
        }
        return (-(uint)(param_2 != 4) & 0xfffffffe) + 3;
      }
    }
    if (2 < uVar8) {
      uVar9 = (param_1[0xf] << ((byte)param_1[0x13] & 0x1f) ^
              (uint)*(byte *)(param_1[0xb] + 2 + param_1[0x18])) & param_1[0x12];
      param_1[0xf] = uVar9;
      uVar2 = *(ushort *)(param_1[0xe] + uVar9 * 2);
      uVar9 = (uint)uVar2;
      *(ushort *)(param_1[0xd] + (param_1[10] & param_1[0x18]) * 2) = uVar2;
      *(short *)(param_1[0xe] + param_1[0xf] * 2) = (short)param_1[0x18];
    }
    if (((uVar9 != 0) && (param_1[0x18] - uVar9 <= param_1[8] - 0x106U)) && (param_1[0x1f] != 2)) {
      pcVar5 = FUN_00ac7ee0((int)param_1,uVar9);
      param_1[0x15] = (int)pcVar5;
    }
    if ((uint)param_1[0x15] < 3) {
      bVar4 = FUN_00acb490((int)param_1,0,(uint)*(byte *)(param_1[0x18] + param_1[0xb]));
      iVar6 = CONCAT31(extraout_var_00,bVar4);
      param_1[0x1a] = param_1[0x1a] + -1;
LAB_00ac7e1e:
      param_1[0x18] = param_1[0x18] + 1;
    }
    else {
      bVar4 = FUN_00acb490((int)param_1,param_1[0x18] - param_1[0x19],param_1[0x15] - 3);
      iVar6 = CONCAT31(extraout_var,bVar4);
      uVar8 = param_1[0x15];
      iVar3 = param_1[0x1a];
      param_1[0x1a] = iVar3 - uVar8;
      if ((uVar8 <= (uint)param_1[0x1d]) && (2 < iVar3 - uVar8)) {
        param_1[0x15] = uVar8 - 1;
        do {
          iVar3 = param_1[0x18];
          uVar8 = iVar3 + 1;
          param_1[0x18] = uVar8;
          uVar9 = ((uint)*(byte *)(iVar3 + 3 + param_1[0xb]) ^
                  param_1[0xf] << ((byte)param_1[0x13] & 0x1f)) & param_1[0x12];
          param_1[0xf] = uVar9;
          uVar2 = *(ushort *)(param_1[0xe] + uVar9 * 2);
          uVar9 = (uint)uVar2;
          *(ushort *)(param_1[0xd] + (param_1[10] & uVar8) * 2) = uVar2;
          *(short *)(param_1[0xe] + param_1[0xf] * 2) = (short)param_1[0x18];
          iVar3 = param_1[0x15];
          param_1[0x15] = iVar3 + -1;
        } while (iVar3 + -1 != 0);
        goto LAB_00ac7e1e;
      }
      iVar3 = param_1[0x18];
      param_1[0x15] = 0;
      param_1[0x18] = iVar3 + uVar8;
      pbVar1 = (byte *)(iVar3 + uVar8 + param_1[0xb]);
      uVar8 = (uint)*pbVar1;
      param_1[0xf] = uVar8;
      param_1[0xf] = (uVar8 << ((byte)param_1[0x13] & 0x1f) ^ (uint)pbVar1[1]) & param_1[0x12];
    }
    if (iVar6 != 0) {
      iVar6 = param_1[0x14];
      if (iVar6 < 0) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        puVar7 = (undefined1 *)(iVar6 + param_1[0xb]);
      }
      FUN_00aca3c0(param_1,puVar7,param_1[0x18] - iVar6,0);
      param_1[0x14] = param_1[0x18];
      FUN_00ac77f0(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}


//// FUNCTION FUN_00ac7ee0 @ 00ac7ee0 ////

char * __cdecl FUN_00ac7ee0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char local_11;
  uint local_10;
  char *local_c;
  uint local_8;
  
  iVar4 = param_1;
  local_10 = *(uint *)(param_1 + 0x70);
  uVar3 = *(uint *)(param_1 + 0x60);
  pcVar10 = *(char **)(param_1 + 0x6c);
  puVar1 = (undefined4 *)(param_1 + 0x84);
  pcVar6 = (char *)(*(int *)(param_1 + 0x2c) + uVar3);
  if (*(int *)(param_1 + 0x20) - 0x106U < uVar3) {
    local_8 = (uVar3 - *(int *)(param_1 + 0x20)) + 0x106;
  }
  else {
    local_8 = 0;
  }
  pcVar2 = pcVar6 + 0x102;
  param_1 = (int)(byte)(pcVar6 + -1)[(int)pcVar10];
  local_11 = pcVar6[(int)pcVar10];
  if (*(char **)(iVar4 + 0x80) <= pcVar10) {
    local_10 = local_10 >> 2;
  }
  pcVar5 = *(char **)(iVar4 + 0x68);
  local_c = (char *)*puVar1;
  if (pcVar5 < (char *)*puVar1) {
    local_c = pcVar5;
  }
  do {
    pcVar9 = (char *)(*(int *)(iVar4 + 0x2c) + param_2);
    if ((((pcVar9[(int)pcVar10] == local_11) && ((pcVar9 + -1)[(int)pcVar10] == (char)param_1)) &&
        (*pcVar9 == *pcVar6)) && (pcVar9[1] == pcVar6[1])) {
      pcVar9 = pcVar9 + 2;
      pcVar7 = pcVar6 + 2;
      while (((((pcVar8 = pcVar7 + 1, pcVar7[1] == pcVar9[1] &&
                (pcVar8 = pcVar7 + 2, pcVar7[2] == pcVar9[2])) &&
               ((pcVar8 = pcVar7 + 3, pcVar7[3] == pcVar9[3] &&
                ((pcVar8 = pcVar7 + 4, pcVar7[4] == pcVar9[4] &&
                 (pcVar8 = pcVar7 + 5, pcVar7[5] == pcVar9[5])))))) &&
              (pcVar8 = pcVar7 + 6, pcVar7[6] == pcVar9[6])) &&
             (pcVar8 = pcVar7 + 7, pcVar7[7] == pcVar9[7]))) {
        pcVar8 = pcVar7 + 8;
        pcVar9 = pcVar9 + 8;
        if ((pcVar7[8] != *pcVar9) || (pcVar7 = pcVar8, pcVar2 <= pcVar8)) break;
      }
      pcVar9 = pcVar8 + (0x102 - (int)pcVar2);
      if ((int)pcVar10 < (int)pcVar9) {
        *(uint *)(iVar4 + 100) = param_2;
        if ((int)local_c <= (int)pcVar9) {
LAB_00ac803d:
          if (pcVar9 <= pcVar5) {
            pcVar5 = pcVar9;
          }
          return pcVar5;
        }
        local_11 = pcVar9[(int)pcVar6];
        param_1 = (int)(byte)pcVar6[(int)(pcVar8 + (0x101 - (int)pcVar2))];
        pcVar10 = pcVar9;
      }
    }
    pcVar9 = pcVar10;
    param_2 = (uint)*(ushort *)(*(int *)(iVar4 + 0x34) + (*(uint *)(iVar4 + 0x28) & param_2) * 2);
    if ((param_2 <= local_8) || (local_10 = local_10 - 1, pcVar10 = pcVar9, local_10 == 0))
    goto LAB_00ac803d;
  } while( true );
}


//// FUNCTION FUN_00ac8050 @ 00ac8050 ////

uint __cdecl FUN_00ac8050(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  undefined3 extraout_var;
  undefined1 *puVar7;
  undefined3 extraout_var_00;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  do {
    uVar8 = param_1[0x1a];
    if (uVar8 < 0x106) {
      FUN_00ac7ae0(param_1);
      uVar8 = param_1[0x1a];
      if ((uVar8 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar8 == 0) {
        if (param_1[0x17] != 0) {
          FUN_00acb490((int)param_1,0,(uint)*(byte *)(param_1[0x18] + -1 + param_1[0xb]));
          param_1[0x17] = 0;
        }
        iVar2 = param_1[0x14];
        if (iVar2 < 0) {
          puVar7 = (undefined1 *)0x0;
        }
        else {
          puVar7 = (undefined1 *)(param_1[0xb] + iVar2);
        }
        FUN_00aca3c0(param_1,puVar7,param_1[0x18] - iVar2,(uint)(param_2 == 4));
        param_1[0x14] = param_1[0x18];
        FUN_00ac77f0(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return (param_2 != 4) - 1 & 2;
        }
        return (-(uint)(param_2 != 4) & 0xfffffffe) + 3;
      }
    }
    if (2 < uVar8) {
      uVar9 = (param_1[0xf] << ((byte)param_1[0x13] & 0x1f) ^
              (uint)*(byte *)(param_1[0xb] + 2 + param_1[0x18])) & param_1[0x12];
      param_1[0xf] = uVar9;
      uVar1 = *(ushort *)(param_1[0xe] + uVar9 * 2);
      uVar9 = (uint)uVar1;
      *(ushort *)(param_1[0xd] + (param_1[10] & param_1[0x18]) * 2) = uVar1;
      *(short *)(param_1[0xe] + param_1[0xf] * 2) = (short)param_1[0x18];
    }
    uVar8 = param_1[0x15];
    param_1[0x1b] = uVar8;
    param_1[0x16] = param_1[0x19];
    param_1[0x15] = 2;
    if (((uVar9 != 0) && (uVar8 < (uint)param_1[0x1d])) &&
       (param_1[0x18] - uVar9 <= param_1[8] - 0x106U)) {
      if (param_1[0x1f] != 2) {
        pcVar6 = FUN_00ac7ee0((int)param_1,uVar9);
        param_1[0x15] = (int)pcVar6;
      }
      if (((uint)param_1[0x15] < 6) &&
         ((param_1[0x1f] == 1 ||
          ((param_1[0x15] == 3 && (0x1000 < (uint)(param_1[0x18] - param_1[0x19]))))))) {
        param_1[0x15] = 2;
      }
    }
    uVar8 = param_1[0x1b];
    if ((uVar8 < 3) || (uVar8 < (uint)param_1[0x15])) {
      if (param_1[0x17] == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[0x18] + 1;
        param_1[0x1a] = param_1[0x1a] + -1;
      }
      else {
        bVar5 = FUN_00acb490((int)param_1,0,(uint)*(byte *)(param_1[0x18] + -1 + param_1[0xb]));
        if (CONCAT31(extraout_var_00,bVar5) != 0) {
          iVar2 = param_1[0x14];
          if (iVar2 < 0) {
            puVar7 = (undefined1 *)0x0;
          }
          else {
            puVar7 = (undefined1 *)(iVar2 + param_1[0xb]);
          }
          FUN_00aca3c0(param_1,puVar7,param_1[0x18] - iVar2,0);
          param_1[0x14] = param_1[0x18];
          FUN_00ac77f0(*param_1);
        }
        param_1[0x18] = param_1[0x18] + 1;
        param_1[0x1a] = param_1[0x1a] + -1;
        if (*(int *)(*param_1 + 0x10) == 0) {
          return 0;
        }
      }
    }
    else {
      iVar2 = param_1[0x18];
      iVar3 = param_1[0x1a];
      bVar5 = FUN_00acb490((int)param_1,(iVar2 - param_1[0x16]) + -1,uVar8 - 3);
      param_1[0x1a] = param_1[0x1a] + (1 - param_1[0x1b]);
      param_1[0x1b] = param_1[0x1b] + -2;
      do {
        uVar8 = param_1[0x18] + 1;
        param_1[0x18] = uVar8;
        if (uVar8 <= (uint)(iVar2 + -3 + iVar3)) {
          uVar9 = (param_1[0xf] << ((byte)param_1[0x13] & 0x1f) ^
                  (uint)*(byte *)(param_1[0xb] + 2 + uVar8)) & param_1[0x12];
          param_1[0xf] = uVar9;
          uVar1 = *(ushort *)(param_1[0xe] + uVar9 * 2);
          uVar9 = (uint)uVar1;
          *(ushort *)(param_1[0xd] + (param_1[10] & uVar8) * 2) = uVar1;
          *(short *)(param_1[0xe] + param_1[0xf] * 2) = (short)param_1[0x18];
        }
        iVar4 = param_1[0x1b];
        param_1[0x1b] = iVar4 + -1;
      } while (iVar4 + -1 != 0);
      iVar2 = param_1[0x18];
      param_1[0x17] = 0;
      param_1[0x15] = 2;
      param_1[0x18] = iVar2 + 1;
      if (CONCAT31(extraout_var,bVar5) != 0) {
        iVar3 = param_1[0x14];
        if (iVar3 < 0) {
          puVar7 = (undefined1 *)0x0;
        }
        else {
          puVar7 = (undefined1 *)(param_1[0xb] + iVar3);
        }
        FUN_00aca3c0(param_1,puVar7,(iVar2 + 1) - iVar3,0);
        param_1[0x14] = param_1[0x18];
        FUN_00ac77f0(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return 0;
        }
      }
    }
  } while( true );
}


//// FUNCTION FUN_00ac8360 @ 00ac8360 ////

undefined4 __cdecl
FUN_00ac8360(uint param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  uint local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  
  local_10 = *(undefined1 **)(param_5 + 0x30);
  uVar6 = *(uint *)(param_5 + 0x20);
  local_14 = param_6[1];
  pbVar9 = (byte *)*param_6;
  uVar5 = *(uint *)(param_5 + 0x1c);
  if (local_10 < *(undefined1 **)(param_5 + 0x2c)) {
    local_c = *(undefined1 **)(param_5 + 0x2c) + (-1 - (int)local_10);
  }
  else {
    local_c = (undefined1 *)(*(int *)(param_5 + 0x28) - (int)local_10);
  }
  uVar3 = *(uint *)(&DAT_00d7d208 + param_1 * 4);
  uVar4 = *(uint *)(&DAT_00d7d208 + param_2 * 4);
  do {
    for (; uVar5 < 0x14; uVar5 = uVar5 + 8) {
      local_14 = local_14 - 1;
      uVar6 = uVar6 | (uint)*pbVar9 << ((byte)uVar5 & 0x1f);
      pbVar9 = pbVar9 + 1;
    }
    bVar2 = *(byte *)(param_3 + (uVar3 & uVar6) * 8);
    uVar8 = (uint)bVar2;
    iVar13 = param_3 + (uVar3 & uVar6) * 8;
    if (uVar8 == 0) {
LAB_00ac8594:
      uVar6 = uVar6 >> (*(byte *)(iVar13 + 1) & 0x1f);
      uVar5 = uVar5 - *(byte *)(iVar13 + 1);
      *local_10 = *(undefined1 *)(iVar13 + 4);
      local_10 = local_10 + 1;
      local_c = local_c + -1;
    }
    else {
      uVar6 = uVar6 >> (*(byte *)(iVar13 + 1) & 0x1f);
      uVar5 = uVar5 - *(byte *)(iVar13 + 1);
      while ((bVar2 & 0x10) == 0) {
        if ((uVar8 & 0x40) != 0) {
          if ((uVar8 & 0x20) != 0) {
            *(uint *)(param_5 + 0x20) = uVar6;
            iVar10 = (int)pbVar9 - (uVar5 >> 3);
            *(uint *)(param_5 + 0x1c) = uVar5 & 7;
            iVar13 = *param_6;
            param_6[1] = (uVar5 >> 3) + local_14;
            *param_6 = iVar10;
            param_6[2] = param_6[2] + (iVar10 - iVar13);
            *(undefined1 **)(param_5 + 0x30) = local_10;
            return 1;
          }
          param_6[6] = (int)s_invalid_literal_length_code_00e6f5dc;
          goto LAB_00ac8661;
        }
        iVar10 = uVar8 * 4;
        bVar2 = *(byte *)(*(int *)(iVar13 + 4) + (*(uint *)(&DAT_00d7d208 + iVar10) & uVar6) * 8);
        uVar8 = (uint)bVar2;
        iVar13 = *(int *)(iVar13 + 4) + (*(uint *)(&DAT_00d7d208 + iVar10) & uVar6) * 8;
        if (uVar8 == 0) goto LAB_00ac8594;
        uVar6 = uVar6 >> (*(byte *)(iVar13 + 1) & 0x1f);
        uVar5 = uVar5 - *(byte *)(iVar13 + 1);
      }
      uVar8 = uVar8 & 0xf;
      param_1 = (*(uint *)(&DAT_00d7d208 + uVar8 * 4) & uVar6) + *(int *)(iVar13 + 4);
      uVar7 = uVar6 >> (sbyte)uVar8;
      for (uVar5 = uVar5 - uVar8; uVar5 < 0xf; uVar5 = uVar5 + 8) {
        local_14 = local_14 - 1;
        uVar7 = uVar7 | (uint)*pbVar9 << ((byte)uVar5 & 0x1f);
        pbVar9 = pbVar9 + 1;
      }
      iVar13 = param_4 + (uVar4 & uVar7) * 8;
      uVar6 = uVar7 >> (*(byte *)(iVar13 + 1) & 0x1f);
      uVar5 = uVar5 - *(byte *)(iVar13 + 1);
      bVar2 = *(byte *)(param_4 + (uVar4 & uVar7) * 8);
      while ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) != 0) {
          param_6[6] = (int)s_invalid_distance_code_00e6f5c4;
LAB_00ac8661:
          *(uint *)(param_5 + 0x20) = uVar6;
          iVar10 = (int)pbVar9 - (uVar5 >> 3);
          *(uint *)(param_5 + 0x1c) = uVar5 & 7;
          iVar13 = *param_6;
          param_6[1] = (uVar5 >> 3) + local_14;
          *param_6 = iVar10;
          param_6[2] = param_6[2] + (iVar10 - iVar13);
          *(undefined1 **)(param_5 + 0x30) = local_10;
          return 0xfffffffd;
        }
        piVar1 = (int *)(iVar13 + 4);
        uVar8 = *(uint *)(&DAT_00d7d208 + (uint)bVar2 * 4) & uVar6;
        iVar13 = *piVar1 + uVar8 * 8;
        uVar6 = uVar6 >> (*(byte *)(iVar13 + 1) & 0x1f);
        uVar5 = uVar5 - *(byte *)(iVar13 + 1);
        bVar2 = *(byte *)(*piVar1 + uVar8 * 8);
      }
      uVar8 = bVar2 & 0xf;
      for (; uVar5 < uVar8; uVar5 = uVar5 + 8) {
        local_14 = local_14 - 1;
        uVar6 = uVar6 | (uint)*pbVar9 << ((byte)uVar5 & 0x1f);
        pbVar9 = pbVar9 + 1;
      }
      uVar7 = (*(uint *)(&DAT_00d7d208 + uVar8 * 4) & uVar6) + *(int *)(iVar13 + 4);
      uVar6 = uVar6 >> (sbyte)uVar8;
      uVar5 = uVar5 - uVar8;
      local_c = local_c + -param_1;
      if ((uint)((int)local_10 - *(int *)(param_5 + 0x24)) < uVar7) {
        uVar7 = (*(int *)(param_5 + 0x24) - (int)local_10) + uVar7;
        puVar12 = (undefined1 *)(*(int *)(param_5 + 0x28) - uVar7);
        if (uVar7 < param_1) {
          param_1 = param_1 - uVar7;
          do {
            *local_10 = *puVar12;
            local_10 = local_10 + 1;
            puVar12 = puVar12 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
          puVar12 = *(undefined1 **)(param_5 + 0x24);
        }
      }
      else {
        puVar11 = local_10 + -uVar7;
        *local_10 = *puVar11;
        puVar12 = puVar11 + 2;
        local_10[1] = puVar11[1];
        param_1 = param_1 - 2;
        local_10 = local_10 + 2;
      }
      do {
        *local_10 = *puVar12;
        local_10 = local_10 + 1;
        puVar12 = puVar12 + 1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    if ((local_c < (undefined1 *)0x102) || (local_14 < 10)) {
      *(uint *)(param_5 + 0x20) = uVar6;
      iVar10 = (int)pbVar9 - (uVar5 >> 3);
      *(uint *)(param_5 + 0x1c) = uVar5 & 7;
      iVar13 = *param_6;
      param_6[1] = (uVar5 >> 3) + local_14;
      *param_6 = iVar10;
      param_6[2] = param_6[2] + (iVar10 - iVar13);
      *(undefined1 **)(param_5 + 0x30) = local_10;
      return 0;
    }
  } while( true );
}


//// FUNCTION FUN_00ac87f0 @ 00ac87f0 ////

undefined4 * __cdecl FUN_00ac87f0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 1) {
    puVar1 = operator_new(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &PTR_LAB_00d7d508;
      puVar1[1] = param_1;
      return puVar1;
    }
  }
  else if (param_2 == 4) {
    puVar1 = operator_new(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &PTR_LAB_00d7d50c;
      puVar1[1] = param_1;
      return puVar1;
    }
  }
  else if (param_2 == 5) {
    puVar1 = operator_new(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &PTR_LAB_00d7d510;
      puVar1[1] = param_1;
      return puVar1;
    }
  }
  else {
    puVar1 = operator_new(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &PTR_LAB_00d7d514;
      puVar1[1] = param_1;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00ac8880 @ 00ac8880 ////

uint __cdecl FUN_00ac8880(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  uVar1 = ~param_1;
  if (7 < param_3) {
    uVar2 = param_3 >> 3;
    do {
      param_3 = param_3 - 8;
      uVar1 = *(uint *)(&DAT_00d7d518 + (uVar1 & 0xff ^ (uint)*param_2) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_00d7d518 + (uVar1 & 0xff ^ (uint)param_2[1]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_00d7d518 + (uVar1 & 0xff ^ (uint)param_2[2]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_00d7d518 + (uVar1 & 0xff ^ (uint)param_2[3]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_00d7d518 + (uVar1 & 0xff ^ (uint)param_2[4]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_00d7d518 + (uVar1 & 0xff ^ (uint)param_2[5]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(&DAT_00d7d518 + (uVar1 & 0xff ^ (uint)param_2[6]) * 4) ^ uVar1 >> 8;
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00d7d518 + (uVar1 & 0xff ^ (uint)param_2[7]) * 4);
      param_2 = param_2 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00d7d518 + (uVar1 & 0xff ^ (uint)*param_2) * 4);
    param_2 = param_2 + 1;
  }
  return ~uVar1;
}


//// FUNCTION FUN_00ac89c0 @ 00ac89c0 ////

undefined4 * __thiscall FUN_00ac89c0(void *this,int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 5;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_00d7d37c;
  puVar2 = (undefined4 *)((int)this + 0x10);
  do {
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = &DAT_010b9370;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 **)((int)this + 0x68) = &DAT_010b9370;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined1 **)((int)this + 0x74) = &DAT_010b9370;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined1 **)((int)this + 0x80) = &DAT_010b9370;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 **)((int)this + 0xac) = &DAT_010b9370;
  *(undefined ***)this = &PTR_FUN_00d7d98c;
  *(int **)((int)this + 0xc) = param_1;
  uVar1 = (**(code **)(*param_1 + 0x40))(param_2);
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x40))(param_2);
  *(undefined4 *)((int)this + 0x50) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x40))(param_2);
  *(undefined4 *)((int)this + 0x54) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x40))(param_2);
  *(undefined4 *)((int)this + 0x58) = uVar1;
  *(undefined4 *)(*(int *)((int)this + 0x50) + 0x20) = 1;
  *(undefined4 *)(*(int *)((int)this + 0x54) + 0x20) = 1;
  *(undefined4 *)(*(int *)((int)this + 0x58) + 0x20) = 1;
  puVar2 = operator_new(0xa0);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00ab5aa0(puVar2);
  }
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  puVar2 = operator_new(0xa0);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00ab5aa0(puVar2);
  }
  *(undefined4 *)((int)this + 0x60) = uVar1;
  puVar2 = operator_new(0xa0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = FUN_00ab5aa0(puVar2);
    *(undefined4 *)((int)this + 100) = uVar1;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return this;
  }
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  return this;
}


//// FUNCTION FUN_00ac8b00 @ 00ac8b00 ////

undefined4 * __thiscall FUN_00ac8b00(void *this,byte param_1)

{
  FUN_00ac8b20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ac8b20 @ 00ac8b20 ////

void __fastcall FUN_00ac8b20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7d98c;
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x13])(1);
  }
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x15])(1);
  }
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16])(1);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x17]);
}


//// FUNCTION FUN_00ac8cf0 @ 00ac8cf0 ////

void __thiscall FUN_00ac8cf0(void *this,int *param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x14) == 0) {
    (**(code **)(*(int *)this + 0x30))(0,0,0);
  }
  piVar1 = param_1;
  (**(code **)(**(int **)((int)this + 0x4c) + 4))(param_1);
  FUN_00a9ef00(*(void **)((int)this + 0x50),(char *)*param_1);
  FUN_00a9ef00(*(void **)((int)this + 0x54),(char *)*param_1);
  FUN_00a9ef00(*(void **)((int)this + 0x58),(char *)*param_1);
  (**(code **)(**(int **)((int)this + 0x50) + 0x10))(1,param_1);
  if (*param_1 < 2) {
    *(undefined4 *)(*(int *)((int)this + 0x58) + 8) = 1;
    (**(code **)(**(int **)((int)this + 0x54) + 0x10))(1,param_1);
    (**(code **)(**(int **)((int)this + 0x58) + 0x10))(1,param_1);
    (**(code **)(**(int **)((int)this + 0x50) + 0xc))(piVar1);
    (**(code **)(**(int **)((int)this + 0x54) + 0xc))(piVar1);
    (**(code **)(**(int **)((int)this + 0x58) + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined4 *)((int)this + 0x94) = 0;
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0x8c) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0;
    *(undefined4 *)((int)this + 0xa0) = 0;
    *(undefined4 *)((int)this + 0xa8) = 0;
  }
  return;
}


//// FUNCTION FUN_00ac8fa0 @ 00ac8fa0 ////

void __thiscall FUN_00ac8fa0(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x50) + 0x1c))(param_1);
  (**(code **)(**(int **)((int)this + 0x54) + 0x1c))(param_1);
  (**(code **)(**(int **)((int)this + 0x58) + 0x1c))(param_1);
  FUN_00ab64e0(*(void **)((int)this + 0x60),(int *)((int)this + 0x74));
  FUN_00ab64e0(*(void **)((int)this + 0x5c),(int *)((int)this + 0x68));
  FUN_00ab64e0(*(void **)((int)this + 100),(int *)((int)this + 0x80));
  return;
}


//// FUNCTION FUN_00ac97e0 @ 00ac97e0 ////

bool FUN_00ac97e0(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 *unaff_EBP;
  int iVar6;
  int unaff_ESI;
  byte *pbVar7;
  undefined4 *puVar8;
  bool bVar9;
  int *unaff_retaddr;
  byte *local_14;
  int local_10;
  undefined1 *local_c;
  undefined4 local_8;
  int *local_4;
  
  iVar6 = 0;
  local_4 = (int *)0x0;
  local_8 = 0;
  local_c = &DAT_010b9370;
  local_14 = (byte *)0x0;
  (**(code **)(*param_1 + 0x10))(0,param_2);
  if (1 < *param_2) {
    if (local_14 == &DAT_010b9370) {
      return false;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_14);
  }
  do {
    iVar2 = FUN_00a9e0e0(param_1,(int *)&local_14,param_2);
    if (iVar2 == 0) break;
    if ((local_10 != 0) &&
       (puVar3 = FUN_00acecd0((uint *)&DAT_00e99b20,*local_14), puVar3 != (uint *)0x0)) {
      iVar2 = 5;
      puVar8 = (undefined4 *)(unaff_EBP + 0x10);
      iVar6 = unaff_ESI;
      do {
        pbVar7 = (byte *)*puVar8;
        pbVar4 = local_14;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00ac98a5:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00ac98aa;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00ac98a5;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00ac98aa:
        if (iVar5 == 0) {
          iVar6 = iVar6 + 1;
        }
        puVar8 = puVar8 + 3;
        iVar2 = iVar2 + -1;
        param_1 = local_4;
        param_2 = unaff_retaddr;
        unaff_ESI = iVar6;
      } while (iVar2 != 0);
    }
  } while (iVar6 == 0);
  (**(code **)(*param_1 + 0x1c))(param_2);
  if (unaff_EBP == &DAT_010b9370) {
    return 0 < iVar6;
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_EBP);
}


//// FUNCTION FUN_00ac9940 @ 00ac9940 ////

void __thiscall FUN_00ac9940(void *this,undefined4 *param_1)

{
  undefined4 unaff_retaddr;
  
  (**(code **)(**(int **)((int)this + 0x10) + 4))(param_1);
  FUN_00a9ef00(*(void **)((int)this + 0x14),(char *)*param_1);
  *(undefined4 *)(*(int *)((int)this + 0x14) + 8) = 1;
  (**(code **)(**(int **)((int)this + 0x14) + 0x10))(1,param_1);
  (**(code **)(**(int **)((int)this + 0x14) + 0xc))(unaff_retaddr);
  return;
}


//// FUNCTION FUN_00ac9cf0 @ 00ac9cf0 ////

void __cdecl FUN_00ac9cf0(int param_1)

{
  FUN_00ac9d70();
  *(undefined4 *)(param_1 + 0x16a4) = 0;
  *(int *)(param_1 + 0xb0c) = param_1 + 0x88;
  *(int *)(param_1 + 0xb18) = param_1 + 0x97c;
  *(undefined ***)(param_1 + 0xb14) = &PTR_DAT_00d7db80;
  *(undefined ***)(param_1 + 0xb20) = &PTR_DAT_00d7db98;
  *(int *)(param_1 + 0xb24) = param_1 + 0xa70;
  *(undefined **)(param_1 + 0xb2c) = &DAT_00d7dbb0;
  *(undefined2 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 0;
  *(undefined4 *)(param_1 + 0x16ac) = 8;
  FUN_00ac9f90(param_1);
  return;
}


//// FUNCTION FUN_00ac9d70 @ 00ac9d70 ////

void FUN_00ac9d70(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_24;
  undefined4 local_20 [3];
  short local_12;
  short local_10;
  short local_e;
  
  if (DAT_010cba70 == 0) {
    iVar2 = 0;
    local_24 = 0;
    iVar5 = 0;
    do {
      uVar6 = 1 << ((byte)(&DAT_00d7da30)[iVar5] & 0x1f);
      (&DAT_010cb28c)[iVar5] = iVar2;
      if (0 < (int)uVar6) {
        uVar1 = (undefined1)iVar5;
        puVar7 = (undefined4 *)((int)&DAT_010cb18c + iVar2);
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = uVar1;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar2 = local_24 + uVar6;
        local_24 = iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1c);
    *(char *)((int)&DAT_010cb188 + iVar2 + 3) = (char)iVar5;
    iVar5 = 0;
    iVar2 = 0;
    do {
      uVar6 = 1 << ((byte)(&DAT_00d7daa4)[iVar2] & 0x1f);
      (&DAT_010cb9f8)[iVar2] = iVar5;
      if (0 < (int)uVar6) {
        uVar1 = (undefined1)iVar2;
        puVar7 = (undefined4 *)((int)&DAT_010cb300 + iVar5);
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = uVar1;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar5 = iVar5 + uVar6;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    iVar5 = iVar5 >> 7;
    for (; iVar2 < 0x1e; iVar2 = iVar2 + 1) {
      (&DAT_010cb9f8)[iVar2] = iVar5 << 7;
      uVar6 = 1 << ((char)(&DAT_00d7daa4)[iVar2] - 7U & 0x1f);
      if (0 < (int)uVar6) {
        uVar1 = (undefined1)iVar2;
        puVar7 = (undefined4 *)(&DAT_010cb400 + iVar5);
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = uVar1;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar5 = iVar5 + uVar6;
      }
    }
    puVar7 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    puVar3 = &DAT_010cb502;
    do {
      *puVar3 = 8;
      puVar3 = puVar3 + 2;
      local_10 = local_10 + 1;
    } while ((int)puVar3 < 0x10cb73f);
    puVar3 = &DAT_010cb742;
    do {
      *puVar3 = 9;
      puVar3 = puVar3 + 2;
      local_e = local_e + 1;
    } while ((int)puVar3 < 0x10cb8ff);
    puVar3 = (undefined2 *)((int)&DAT_010cb900 + 2);
    do {
      *puVar3 = 7;
      puVar3 = puVar3 + 2;
      local_12 = local_12 + 1;
    } while ((int)puVar3 < 0x10cb95f);
    puVar3 = &DAT_010cb962;
    do {
      *puVar3 = 8;
      puVar3 = puVar3 + 2;
      local_10 = local_10 + 1;
    } while ((int)puVar3 < 0x10cb97f);
    FUN_00aca000((undefined2 *)&DAT_010cb500,0x11f,(int)local_20);
    uVar6 = 0;
    puVar3 = &DAT_010cb980;
    do {
      puVar3[1] = 5;
      uVar4 = FUN_00acba80(uVar6,5);
      *puVar3 = (short)uVar4;
      puVar3 = puVar3 + 2;
      uVar6 = uVar6 + 1;
    } while ((int)puVar3 < 0x10cb9f8);
    DAT_010cba70 = 1;
  }
  return;
}


//// FUNCTION FUN_00ac9f90 @ 00ac9f90 ////

void __cdecl FUN_00ac9f90(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0x11e;
  puVar1 = (undefined2 *)(param_1 + 0x88);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0x97c);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0xa70);
  iVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  *(undefined4 *)(param_1 + 0x169c) = 0;
  *(undefined4 *)(param_1 + 0x16a8) = 0;
  *(undefined4 *)(param_1 + 0x1694) = 0;
  *(undefined2 *)(param_1 + 0x488) = 1;
  return;
}


//// FUNCTION FUN_00aca000 @ 00aca000 ////

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00aca000(undefined2 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  ushort auStack_20 [16];
  
  uVar1 = 0;
  puVar3 = auStack_20;
  iVar4 = 0xf;
  do {
    puVar3 = (ushort *)((int)puVar3 + 2);
    uVar1 = (*(short *)((param_3 - (int)(auStack_20 + 1)) + (int)puVar3) + uVar1) * 2;
    iVar4 = iVar4 + -1;
    *puVar3 = uVar1;
  } while (iVar4 != 0);
  if (-1 < param_2) {
    iVar4 = param_2 + 1;
    do {
      uVar2 = (uint)(ushort)param_1[1];
      if (uVar2 != 0) {
        uVar1 = auStack_20[uVar2];
        auStack_20[uVar2] = uVar1 + 1;
        uVar2 = FUN_00acba80((uint)uVar1,uVar2);
        *param_1 = (short)uVar2;
      }
      param_1 = param_1 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


//// FUNCTION FUN_00aca080 @ 00aca080 ////

void __cdecl FUN_00aca080(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x16b4);
  if (iVar1 < 0xe) {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
    *(int *)(param_1 + 0x16b4) = iVar1 + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar1 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b1);
    iVar1 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x16b4) = iVar1 + -0xd;
    *(ushort *)(param_1 + 0x16b0) = (ushort)param_4 >> (0x10U - (char)iVar1 & 0x1f);
  }
  *(uint *)(param_1 + 0x16a4) = (*(int *)(param_1 + 0x16a4) + 10U & 0xfffffff8) + 0x20 + param_3 * 8
  ;
  FUN_00acbbb0(param_1,param_2,param_3,1);
  return;
}


//// FUNCTION FUN_00aca140 @ 00aca140 ////

void __cdecl FUN_00aca140(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x16b4);
  if (iVar3 < 0xe) {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(2 << ((byte)iVar3 & 0x1f));
    *(int *)(param_1 + 0x16b4) = iVar3 + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(2 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar3 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b1);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    iVar3 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x16b4) = iVar3 + -0xd;
    *(ushort *)(param_1 + 0x16b0) = 2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  uVar2 = DAT_010cb900;
  iVar3 = *(int *)(param_1 + 0x16b4);
  uVar1 = DAT_010cb900 >> 0x10;
  if ((int)(0x10 - uVar1) < iVar3) {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)((DAT_010cb900 & 0xffff) << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar3 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b1);
    iVar3 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(uint *)(param_1 + 0x16b4) = iVar3 + -0x10 + uVar1;
    *(ushort *)(param_1 + 0x16b0) = (ushort)uVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  else {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(DAT_010cb900 << ((byte)iVar3 & 0x1f));
    *(uint *)(param_1 + 0x16b4) = iVar3 + uVar1;
  }
  *(int *)(param_1 + 0x16a4) = *(int *)(param_1 + 0x16a4) + 10;
  FUN_00acbaa0(param_1);
  iVar3 = *(int *)(param_1 + 0x16b4);
  if ((*(int *)(param_1 + 0x16ac) - iVar3) + 0xb < 9) {
    if (iVar3 < 0xe) {
      *(ushort *)(param_1 + 0x16b0) =
           *(ushort *)(param_1 + 0x16b0) | (ushort)(2 << ((byte)iVar3 & 0x1f));
      *(int *)(param_1 + 0x16b4) = iVar3 + 3;
    }
    else {
      *(ushort *)(param_1 + 0x16b0) =
           *(ushort *)(param_1 + 0x16b0) | (ushort)(2 << ((byte)iVar3 & 0x1f));
      *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
           *(undefined1 *)(param_1 + 0x16b0);
      iVar3 = *(int *)(param_1 + 0x10) + 1;
      *(int *)(param_1 + 0x10) = iVar3;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b1);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      iVar3 = *(int *)(param_1 + 0x16b4);
      *(int *)(param_1 + 0x16b4) = iVar3 + -0xd;
      *(ushort *)(param_1 + 0x16b0) = 2 >> (0x10U - (char)iVar3 & 0x1f);
    }
    uVar2 = DAT_010cb900;
    iVar3 = *(int *)(param_1 + 0x16b4);
    uVar1 = DAT_010cb900 >> 0x10;
    if ((int)(0x10 - uVar1) < iVar3) {
      *(ushort *)(param_1 + 0x16b0) =
           *(ushort *)(param_1 + 0x16b0) | (ushort)((DAT_010cb900 & 0xffff) << ((byte)iVar3 & 0x1f))
      ;
      *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
           *(undefined1 *)(param_1 + 0x16b0);
      iVar3 = *(int *)(param_1 + 0x10) + 1;
      *(int *)(param_1 + 0x10) = iVar3;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b1);
      iVar3 = *(int *)(param_1 + 0x16b4);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *(uint *)(param_1 + 0x16b4) = iVar3 + -0x10 + uVar1;
      *(ushort *)(param_1 + 0x16b0) = (ushort)uVar2 >> (0x10U - (char)iVar3 & 0x1f);
    }
    else {
      *(ushort *)(param_1 + 0x16b0) =
           *(ushort *)(param_1 + 0x16b0) | (ushort)(DAT_010cb900 << ((byte)iVar3 & 0x1f));
      *(uint *)(param_1 + 0x16b4) = iVar3 + uVar1;
    }
    *(int *)(param_1 + 0x16a4) = *(int *)(param_1 + 0x16a4) + 10;
    FUN_00acbaa0(param_1);
  }
  *(undefined4 *)(param_1 + 0x16ac) = 7;
  return;
}


//// FUNCTION FUN_00aca3c0 @ 00aca3c0 ////

uint __cdecl FUN_00aca3c0(int *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = 0;
  if (param_1[0x1e] < 1) {
    uVar5 = param_3 + 5;
  }
  else {
    if ((char)param_1[6] == '\x02') {
      FUN_00acba00((int)param_1);
    }
    FUN_00aca5f0(param_1,param_1 + 0x2c3);
    FUN_00aca5f0(param_1,param_1 + 0x2c6);
    iVar3 = FUN_00acab40(param_1);
    uVar6 = param_1[0x5a7] + 10U >> 3;
    uVar5 = param_1[0x5a8] + 10U >> 3;
    if (uVar6 < uVar5) goto LAB_00aca42a;
  }
  uVar6 = uVar5;
LAB_00aca42a:
  if ((uVar6 < param_3 + 4U) || (param_2 == (undefined1 *)0x0)) {
    iVar2 = param_1[0x5ad];
    bVar4 = (byte)iVar2;
    if (uVar5 == uVar6) {
      iVar3 = param_4 + 2;
      if (iVar2 < 0xe) {
        *(ushort *)(param_1 + 0x5ac) =
             *(ushort *)(param_1 + 0x5ac) | (ushort)(iVar3 << (bVar4 & 0x1f));
        param_1[0x5ad] = iVar2 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ac) =
             *(ushort *)(param_1 + 0x5ac) | (ushort)(iVar3 << (bVar4 & 0x1f));
        *(char *)(param_1[2] + param_1[4]) = (char)param_1[0x5ac];
        iVar2 = param_1[4];
        param_1[4] = iVar2 + 1;
        *(undefined1 *)(param_1[2] + iVar2 + 1) = *(undefined1 *)((int)param_1 + 0x16b1);
        iVar2 = param_1[0x5ad];
        param_1[4] = param_1[4] + 1;
        param_1[0x5ad] = iVar2 + -0xd;
        *(ushort *)(param_1 + 0x5ac) = (ushort)iVar3 >> (0x10U - (char)iVar2 & 0x1f);
      }
      FUN_00acb5c0((int)param_1,0x10cb500,0x10cb980);
      iVar3 = param_1[0x5a8];
    }
    else {
      iVar1 = param_4 + 4;
      if (iVar2 < 0xe) {
        *(ushort *)(param_1 + 0x5ac) =
             *(ushort *)(param_1 + 0x5ac) | (ushort)(iVar1 << (bVar4 & 0x1f));
        param_1[0x5ad] = iVar2 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ac) =
             *(ushort *)(param_1 + 0x5ac) | (ushort)(iVar1 << (bVar4 & 0x1f));
        *(char *)(param_1[4] + param_1[2]) = (char)param_1[0x5ac];
        iVar2 = param_1[4];
        param_1[4] = iVar2 + 1;
        *(undefined1 *)(iVar2 + 1 + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b1);
        iVar2 = param_1[0x5ad];
        param_1[4] = param_1[4] + 1;
        param_1[0x5ad] = iVar2 + -0xd;
        *(ushort *)(param_1 + 0x5ac) = (ushort)iVar1 >> (0x10U - (char)iVar2 & 0x1f);
      }
      FUN_00acaca0((int)param_1,param_1[0x2c4] + 1,param_1[0x2c7] + 1,iVar3 + 1);
      FUN_00acb5c0((int)param_1,(int)(param_1 + 0x22),(int)(param_1 + 0x25f));
      iVar3 = param_1[0x5a7];
    }
    param_1[0x5a9] = param_1[0x5a9] + iVar3 + 3;
  }
  else {
    FUN_00aca080((int)param_1,param_2,param_3,param_4);
  }
  FUN_00ac9f90((int)param_1);
  if (param_4 != 0) {
    FUN_00acbb30((int)param_1);
    param_1[0x5a9] = param_1[0x5a9] + 7;
  }
  return (uint)param_1[0x5a9] >> 3;
}


//// FUNCTION FUN_00aca5f0 @ 00aca5f0 ////

void __cdecl FUN_00aca5f0(int *param_1,int *param_2)

{
  byte bVar1;
  short *psVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_8;
  int local_4;
  
  piVar3 = param_1;
  psVar2 = (short *)*param_2;
  iVar8 = -1;
  iVar7 = *(int *)param_2[2];
  local_4 = ((int *)param_2[2])[3];
  iVar5 = 0;
  local_8 = -1;
  param_1[0x511] = 0;
  param_1[0x512] = 0x23d;
  psVar6 = psVar2;
  if (0 < local_4) {
    do {
      if (*psVar6 == 0) {
        psVar6[1] = 0;
      }
      else {
        iVar8 = param_1[0x511];
        param_1[0x511] = iVar8 + 1;
        param_1[iVar8 + 0x2d5] = iVar5;
        *(undefined1 *)(iVar5 + 0x144c + (int)param_1) = 0;
        iVar8 = iVar5;
        local_8 = iVar5;
      }
      iVar5 = iVar5 + 1;
      psVar6 = psVar6 + 2;
    } while (iVar5 < local_4);
  }
  iVar5 = param_1[0x511];
  while (iVar5 < 2) {
    if (iVar8 < 2) {
      iVar9 = iVar8 + 1;
      iVar8 = iVar9;
    }
    else {
      iVar9 = 0;
    }
    param_1[0x511] = iVar5 + 1;
    param_1[iVar5 + 0x2d5] = iVar9;
    psVar2[iVar9 * 2] = 1;
    *(undefined1 *)((int)param_1 + iVar9 + 0x144c) = 0;
    param_1[0x5a7] = param_1[0x5a7] + -1;
    if (iVar7 != 0) {
      param_1[0x5a8] = param_1[0x5a8] - (uint)*(ushort *)(iVar7 + 2 + iVar9 * 4);
    }
    local_8 = iVar8;
    iVar5 = param_1[0x511];
  }
  param_2[1] = iVar8;
  for (iVar7 = param_1[0x511] / 2; 0 < iVar7; iVar7 = iVar7 + -1) {
    FUN_00aca830((int)param_1,(int)psVar2,iVar7);
  }
  param_1 = (int *)(psVar2 + local_4 * 2);
  do {
    iVar7 = piVar3[0x2d5];
    piVar3[0x2d5] = piVar3[piVar3[0x511] + 0x2d4];
    piVar3[0x511] = piVar3[0x511] + -1;
    FUN_00aca830((int)piVar3,(int)psVar2,1);
    iVar8 = piVar3[0x512];
    iVar5 = piVar3[0x2d5];
    piVar3[0x512] = iVar8 + -1;
    piVar3[iVar8 + 0x2d3] = iVar7;
    iVar8 = piVar3[0x512];
    piVar3[0x512] = iVar8 + -1;
    piVar3[iVar8 + 0x2d3] = iVar5;
    *(short *)param_1 = psVar2[iVar5 * 2] + psVar2[iVar7 * 2];
    bVar1 = *(byte *)((int)piVar3 + iVar7 + 0x144c);
    bVar4 = *(byte *)((int)piVar3 + iVar5 + 0x144c);
    if (bVar4 <= bVar1) {
      bVar4 = bVar1;
    }
    *(byte *)((int)piVar3 + local_4 + 0x144c) = bVar4 + 1;
    psVar2[iVar5 * 2 + 1] = (short)local_4;
    psVar2[iVar7 * 2 + 1] = (short)local_4;
    piVar3[0x2d5] = local_4;
    local_4 = local_4 + 1;
    param_1 = param_1 + 1;
    FUN_00aca830((int)piVar3,(int)psVar2,1);
  } while (1 < piVar3[0x511]);
  iVar7 = piVar3[0x512];
  piVar3[0x512] = iVar7 + -1;
  piVar3[iVar7 + 0x2d3] = piVar3[0x2d5];
  FUN_00aca910(piVar3,param_2);
  FUN_00aca000(psVar2,local_8,(int)(piVar3 + 0x2cc));
  return;
}


//// FUNCTION FUN_00aca830 @ 00aca830 ////

void __cdecl FUN_00aca830(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar6 = *(int *)(param_1 + 0x1444);
  iVar3 = *(int *)(param_1 + 0xb50 + param_3 * 4);
  iVar7 = param_3 * 2;
  bVar8 = SBORROW4(iVar7,iVar6);
  iVar5 = iVar7 - iVar6;
  if (iVar6 < iVar7) {
    *(int *)(param_1 + 0xb50 + param_3 * 4) = iVar3;
    return;
  }
  do {
    iVar6 = iVar7;
    if (bVar8 != iVar5 < 0) {
      iVar5 = *(int *)(param_1 + 0xb54 + iVar7 * 4);
      iVar4 = *(int *)(param_1 + 0xb50 + iVar7 * 4);
      uVar1 = *(ushort *)(param_2 + iVar5 * 4);
      uVar2 = *(ushort *)(param_2 + iVar4 * 4);
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(iVar5 + 0x144c + param_1) <= *(byte *)(param_1 + 0x144c + iVar4))))) {
        iVar6 = iVar7 + 1;
      }
    }
    iVar5 = *(int *)(param_1 + 0xb50 + iVar6 * 4);
    uVar1 = *(ushort *)(param_2 + iVar3 * 4);
    uVar2 = *(ushort *)(param_2 + iVar5 * 4);
    if (uVar1 < uVar2) break;
    if ((uVar1 == uVar2) &&
       (*(byte *)(param_1 + 0x144c + iVar3) <= *(byte *)(iVar5 + 0x144c + param_1))) {
      *(int *)(param_1 + 0xb50 + param_3 * 4) = iVar3;
      return;
    }
    iVar7 = iVar6 * 2;
    *(int *)(param_1 + 0xb50 + param_3 * 4) = iVar5;
    iVar4 = *(int *)(param_1 + 0x1444);
    bVar8 = SBORROW4(iVar7,iVar4);
    iVar5 = iVar7 - iVar4;
    param_3 = iVar6;
  } while (iVar5 == 0 || iVar7 < iVar4);
  *(int *)(param_1 + 0xb50 + param_3 * 4) = iVar3;
  return;
}


//// FUNCTION FUN_00aca910 @ 00aca910 ////

void __cdecl FUN_00aca910(int *param_1,int *param_2)

{
  ushort *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  short *psVar12;
  ushort *puVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int local_1c;
  int local_14;
  
  piVar7 = param_1;
  iVar3 = *param_2;
  iVar4 = param_2[1];
  piVar15 = (int *)param_2[2];
  iVar9 = *piVar15;
  iVar5 = piVar15[1];
  uVar18 = piVar15[4];
  iVar6 = piVar15[2];
  local_1c = 0;
  piVar15 = param_1 + 0x2cc;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar15 = 0;
    piVar15 = piVar15 + 1;
  }
  *(undefined2 *)(iVar3 + 2 + param_1[param_1[0x512] + 0x2d4] * 4) = 0;
  iVar11 = param_1[0x512] + 1;
  if (iVar11 < 0x23d) {
    param_1 = param_1 + param_1[0x512] + 0x2d5;
    local_14 = 0x23d - iVar11;
    piVar15 = (int *)(iVar11 + local_14);
    do {
      iVar11 = *param_1;
      uVar8 = *(ushort *)(iVar3 + 2 + (uint)*(ushort *)(iVar3 + 2 + iVar11 * 4) * 4) + 1;
      if ((int)uVar18 < (int)uVar8) {
        local_1c = local_1c + 1;
        uVar8 = uVar18;
      }
      *(short *)(iVar3 + 2 + iVar11 * 4) = (short)uVar8;
      if (iVar11 <= iVar4) {
        psVar12 = (short *)((int)piVar7 + uVar8 * 2 + 0xb30);
        *psVar12 = *psVar12 + 1;
        iVar17 = 0;
        if (iVar6 <= iVar11) {
          iVar17 = *(int *)(iVar5 + (iVar11 - iVar6) * 4);
        }
        uVar16 = (uint)*(ushort *)(iVar3 + iVar11 * 4);
        piVar7[0x5a7] = piVar7[0x5a7] + (uVar8 + iVar17) * uVar16;
        if (iVar9 != 0) {
          piVar7[0x5a8] =
               piVar7[0x5a8] + ((uint)*(ushort *)(iVar9 + 2 + iVar11 * 4) + iVar17) * uVar16;
        }
      }
      param_1 = param_1 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (local_1c != 0) {
      do {
        iVar9 = uVar18 - 1;
        psVar12 = (short *)((int)piVar7 + iVar9 * 2 + 0xb30);
        sVar2 = *(short *)((int)piVar7 + iVar9 * 2 + 0xb30);
        while (sVar2 == 0) {
          psVar12 = psVar12 + -1;
          iVar9 = iVar9 + -1;
          sVar2 = *psVar12;
        }
        psVar12 = (short *)((int)piVar7 + iVar9 * 2 + 0xb30);
        *psVar12 = *psVar12 + -1;
        psVar12 = (short *)((int)piVar7 + iVar9 * 2 + 0xb32);
        *psVar12 = *psVar12 + 2;
        psVar12 = (short *)((int)piVar7 + uVar18 * 2 + 0xb30);
        *psVar12 = *psVar12 + -1;
        local_1c = local_1c + -2;
      } while (0 < local_1c);
      if (uVar18 != 0) {
        puVar13 = (ushort *)((int)piVar7 + uVar18 * 2 + 0xb30);
        param_2 = piVar15;
        do {
          piVar10 = (int *)(uint)*puVar13;
          if (piVar10 != (int *)0x0) {
            piVar14 = piVar7 + (int)(piVar15 + 0xb5);
            param_1 = piVar10;
            do {
              iVar9 = piVar14[-1];
              piVar15 = (int *)((int)param_2 + -1);
              piVar14 = piVar14 + -1;
              if (iVar9 <= iVar4) {
                puVar1 = (ushort *)(iVar3 + 2 + iVar9 * 4);
                uVar8 = (uint)*puVar1;
                if (uVar8 != uVar18) {
                  piVar7[0x5a7] =
                       piVar7[0x5a7] + (uVar18 - uVar8) * (uint)*(ushort *)(iVar3 + iVar9 * 4);
                  *puVar1 = (ushort)uVar18;
                }
                piVar10 = (int *)((int)param_1 - 1);
                param_1 = piVar10;
              }
              param_2 = piVar15;
            } while (piVar10 != (int *)0x0);
          }
          uVar18 = uVar18 - 1;
          puVar13 = puVar13 + -1;
        } while (uVar18 != 0);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00acab40 @ 00acab40 ////

void __cdecl FUN_00acab40(int *param_1)

{
  int iVar1;
  
  FUN_00acabb0((int)param_1,(int)(param_1 + 0x22),param_1[0x2c4]);
  FUN_00acabb0((int)param_1,(int)(param_1 + 0x25f),param_1[0x2c7]);
  FUN_00aca5f0(param_1,param_1 + 0x2c9);
  iVar1 = 0x12;
  do {
    if (*(short *)((int)param_1 + (uint)(byte)(&DAT_00d7db68)[iVar1] * 4 + 0xa72) != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  param_1[0x5a7] = param_1[0x5a7] + iVar1 * 3 + 0x11;
  return;
}


//// FUNCTION FUN_00acabb0 @ 00acabb0 ////

void __cdecl FUN_00acabb0(int param_1,int param_2,int param_3)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  uint local_4;
  
  uVar2 = *(ushort *)(param_2 + 2);
  iVar8 = 0;
  local_4 = 0xffffffff;
  iVar5 = 7;
  iVar7 = 4;
  if (uVar2 == 0) {
    iVar5 = 0x8a;
    iVar7 = 3;
  }
  *(undefined2 *)(param_2 + 6 + param_3 * 4) = 0xffff;
  if (-1 < param_3) {
    puVar6 = (ushort *)(param_2 + 6);
    uVar3 = (uint)uVar2;
    param_2 = param_3 + 1;
    do {
      uVar4 = (uint)*puVar6;
      iVar8 = iVar8 + 1;
      if ((iVar5 <= iVar8) || (uVar3 != uVar4)) {
        if (iVar8 < iVar7) {
          psVar1 = (short *)(param_1 + 0xa70 + uVar3 * 4);
          *psVar1 = *psVar1 + (short)iVar8;
        }
        else if (uVar3 == 0) {
          if (iVar8 < 0xb) {
            *(short *)(param_1 + 0xab4) = *(short *)(param_1 + 0xab4) + 1;
          }
          else {
            *(short *)(param_1 + 0xab8) = *(short *)(param_1 + 0xab8) + 1;
          }
        }
        else {
          if (uVar3 != local_4) {
            psVar1 = (short *)(param_1 + 0xa70 + uVar3 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xab0) = *(short *)(param_1 + 0xab0) + 1;
        }
        iVar8 = 0;
        local_4 = uVar3;
        if (uVar4 == 0) {
          iVar5 = 0x8a;
          iVar7 = 3;
        }
        else if (uVar3 == uVar4) {
          iVar5 = 6;
          iVar7 = 3;
        }
        else {
          iVar5 = 7;
          iVar7 = 4;
        }
      }
      puVar6 = puVar6 + 2;
      param_2 = param_2 + -1;
      uVar3 = uVar4;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_00acaca0 @ 00acaca0 ////

void __cdecl FUN_00acaca0(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x16b4);
  if (iVar2 < 0xc) {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(param_2 + -0x101 << ((byte)iVar2 & 0x1f));
    *(int *)(param_1 + 0x16b4) = iVar2 + 5;
  }
  else {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(param_2 + -0x101 << ((byte)iVar2 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar2 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
    iVar2 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x16b4) = iVar2 + -0xb;
    *(ushort *)(param_1 + 0x16b0) = (ushort)(param_2 + -0x101) >> (0x10U - (char)iVar2 & 0x1f);
  }
  iVar2 = *(int *)(param_1 + 0x16b4);
  if (iVar2 < 0xc) {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(param_3 + -1 << ((byte)iVar2 & 0x1f));
    *(int *)(param_1 + 0x16b4) = iVar2 + 5;
  }
  else {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(param_3 + -1 << ((byte)iVar2 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar2 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
    iVar2 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x16b4) = iVar2 + -0xb;
    *(ushort *)(param_1 + 0x16b0) = (ushort)(param_3 + -1) >> (0x10U - (char)iVar2 & 0x1f);
  }
  iVar3 = *(int *)(param_1 + 0x16b4);
  iVar2 = param_4 + -4;
  if (iVar3 < 0xd) {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar2 << ((byte)iVar3 & 0x1f));
    *(int *)(param_1 + 0x16b4) = iVar3 + 4;
  }
  else {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar2 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar3 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined1 *)(iVar3 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
    iVar3 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x16b4) = iVar3 + -0xc;
    *(ushort *)(param_1 + 0x16b0) = (ushort)iVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar2 = 0;
  if (0 < param_4) {
    do {
      iVar3 = *(int *)(param_1 + 0x16b4);
      if (iVar3 < 0xe) {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) |
             *(short *)(param_1 + 0xa72 + (uint)(byte)(&DAT_00d7db68)[iVar2] * 4) <<
             ((byte)iVar3 & 0x1f);
        *(int *)(param_1 + 0x16b4) = iVar3 + 3;
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0xa72 + (uint)(byte)(&DAT_00d7db68)[iVar2] * 4);
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar3 & 0x1f);
        *(undefined1 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)) =
             *(undefined1 *)(param_1 + 0x16b0);
        iVar3 = *(int *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x10) = iVar3;
        *(undefined1 *)(iVar3 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
        iVar3 = *(int *)(param_1 + 0x16b4);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x16b4) = iVar3 + -0xd;
        *(ushort *)(param_1 + 0x16b0) = uVar1 >> (0x10U - (char)iVar3 & 0x1f);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  FUN_00acaf10(param_1,param_1 + 0x88,(ushort *)(param_2 + -1));
  FUN_00acaf10(param_1,param_1 + 0x97c,(ushort *)(param_3 + -1));
  return;
}


//// FUNCTION FUN_00acaf10 @ 00acaf10 ////

void __cdecl FUN_00acaf10(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_8;
  int local_4;
  
  local_8 = 0xffffffff;
  iVar2 = 7;
  iVar7 = 4;
  if (*(ushort *)(param_2 + 2) == 0) {
    iVar2 = 0x8a;
    iVar7 = 3;
  }
  if (-1 < (int)param_3) {
    local_4 = (int)param_3 + 1;
    iVar3 = 0;
    uVar5 = (uint)*(ushort *)(param_2 + 2);
    param_3 = (ushort *)(param_2 + 6);
    do {
      iVar4 = iVar3 + 1;
      uVar6 = (uint)*param_3;
      if ((iVar2 <= iVar4) || (uVar5 != uVar6)) {
        if (iVar4 < iVar7) {
          do {
            iVar2 = *(int *)(param_1 + 0x16b4);
            uVar8 = (uint)*(ushort *)(param_1 + 0xa72 + uVar5 * 4);
            if ((int)(0x10 - uVar8) < iVar2) {
              uVar1 = *(ushort *)(param_1 + 0xa70 + uVar5 * 4);
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar2 & 0x1f);
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
                   *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x10) + 1;
              *(int *)(param_1 + 0x10) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
              *(ushort *)(param_1 + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
              *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar8;
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   *(short *)(param_1 + 0xa70 + uVar5 * 4) << ((byte)iVar2 & 0x1f);
              *(uint *)(param_1 + 0x16b4) = iVar2 + uVar8;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        else if (uVar5 == 0) {
          if (iVar4 < 0xb) {
            iVar2 = *(int *)(param_1 + 0x16b4);
            uVar8 = (uint)*(ushort *)(param_1 + 0xab6);
            if ((int)(0x10 - uVar8) < iVar2) {
              uVar1 = *(ushort *)(param_1 + 0xab4);
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar2 & 0x1f);
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
                   *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x10) + 1;
              *(int *)(param_1 + 0x10) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
              *(ushort *)(param_1 + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
              *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar8;
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   *(short *)(param_1 + 0xab4) << ((byte)iVar2 & 0x1f);
              *(uint *)(param_1 + 0x16b4) = iVar2 + uVar8;
            }
            iVar2 = *(int *)(param_1 + 0x16b4);
            if (iVar2 < 0xe) {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar3 + -2 << ((byte)iVar2 & 0x1f));
              iVar2 = iVar2 + 3;
LAB_00acb429:
              *(int *)(param_1 + 0x16b4) = iVar2;
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar3 + -2 << ((byte)iVar2 & 0x1f));
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
                   *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x10) + 1;
              *(int *)(param_1 + 0x10) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
              iVar2 = *(int *)(param_1 + 0x16b4);
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
              *(int *)(param_1 + 0x16b4) = iVar2 + -0xd;
              *(ushort *)(param_1 + 0x16b0) = (ushort)(iVar3 + -2) >> (0x10U - (char)iVar2 & 0x1f);
            }
          }
          else {
            iVar2 = *(int *)(param_1 + 0x16b4);
            uVar8 = (uint)*(ushort *)(param_1 + 0xaba);
            if ((int)(0x10 - uVar8) < iVar2) {
              uVar1 = *(ushort *)(param_1 + 0xab8);
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar2 & 0x1f);
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
                   *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x10) + 1;
              *(int *)(param_1 + 0x10) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
              *(ushort *)(param_1 + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
              *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar8;
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   *(short *)(param_1 + 0xab8) << ((byte)iVar2 & 0x1f);
              *(uint *)(param_1 + 0x16b4) = iVar2 + uVar8;
            }
            iVar2 = *(int *)(param_1 + 0x16b4);
            if (iVar2 < 10) {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar3 + -10 << ((byte)iVar2 & 0x1f));
              iVar2 = iVar2 + 7;
              goto LAB_00acb429;
            }
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar3 + -10 << ((byte)iVar2 & 0x1f));
            *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x16b0);
            iVar2 = *(int *)(param_1 + 0x10) + 1;
            *(int *)(param_1 + 0x10) = iVar2;
            *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
            iVar2 = *(int *)(param_1 + 0x16b4);
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
            *(int *)(param_1 + 0x16b4) = iVar2 + -9;
            *(ushort *)(param_1 + 0x16b0) = (ushort)(iVar3 + -10) >> (0x10U - (char)iVar2 & 0x1f);
          }
        }
        else {
          if (uVar5 != local_8) {
            iVar2 = *(int *)(param_1 + 0x16b4);
            uVar8 = (uint)*(ushort *)(param_1 + 0xa72 + uVar5 * 4);
            iVar4 = iVar3;
            if ((int)(0x10 - uVar8) < iVar2) {
              uVar1 = *(ushort *)(param_1 + 0xa70 + uVar5 * 4);
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar2 & 0x1f);
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
                   *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x10) + 1;
              *(int *)(param_1 + 0x10) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
              *(ushort *)(param_1 + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
              *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar8;
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   *(short *)(param_1 + 0xa70 + uVar5 * 4) << ((byte)iVar2 & 0x1f);
              *(uint *)(param_1 + 0x16b4) = iVar2 + uVar8;
            }
          }
          iVar2 = *(int *)(param_1 + 0x16b4);
          uVar8 = (uint)*(ushort *)(param_1 + 0xab2);
          if ((int)(0x10 - uVar8) < iVar2) {
            uVar1 = *(ushort *)(param_1 + 0xab0);
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar2 & 0x1f);
            *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x16b0);
            iVar2 = *(int *)(param_1 + 0x10) + 1;
            *(int *)(param_1 + 0x10) = iVar2;
            *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
            *(ushort *)(param_1 + 0x16b0) =
                 uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
            *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar8;
          }
          else {
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) | *(short *)(param_1 + 0xab0) << ((byte)iVar2 & 0x1f)
            ;
            *(uint *)(param_1 + 0x16b4) = iVar2 + uVar8;
          }
          iVar2 = *(int *)(param_1 + 0x16b4);
          if (iVar2 < 0xf) {
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar4 + -3 << ((byte)iVar2 & 0x1f));
            iVar2 = iVar2 + 2;
            goto LAB_00acb429;
          }
          *(ushort *)(param_1 + 0x16b0) =
               *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar4 + -3 << ((byte)iVar2 & 0x1f));
          *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x16b0);
          iVar2 = *(int *)(param_1 + 0x10) + 1;
          *(int *)(param_1 + 0x10) = iVar2;
          *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
          iVar2 = *(int *)(param_1 + 0x16b4);
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          *(int *)(param_1 + 0x16b4) = iVar2 + -0xe;
          *(ushort *)(param_1 + 0x16b0) = (ushort)(iVar4 + -3) >> (0x10U - (char)iVar2 & 0x1f);
        }
        iVar4 = 0;
        local_8 = uVar5;
        if (uVar6 == 0) {
          iVar2 = 0x8a;
          iVar7 = 3;
        }
        else if (uVar5 == uVar6) {
          iVar2 = 6;
          iVar7 = 3;
        }
        else {
          iVar2 = 7;
          iVar7 = 4;
        }
      }
      param_3 = param_3 + 2;
      local_4 = local_4 + -1;
      iVar3 = iVar4;
      uVar5 = uVar6;
    } while (local_4 != 0);
  }
  return;
}


//// FUNCTION FUN_00acb490 @ 00acb490 ////

bool __cdecl FUN_00acb490(int param_1,int param_2,int param_3)

{
  short *psVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  uint uVar7;
  
  *(short *)(*(int *)(param_1 + 0x1698) + *(int *)(param_1 + 0x1694) * 2) = (short)param_2;
  *(char *)(*(int *)(param_1 + 0x168c) + *(int *)(param_1 + 0x1694)) = (char)param_3;
  *(int *)(param_1 + 0x1694) = *(int *)(param_1 + 0x1694) + 1;
  if (param_2 == 0) {
    psVar1 = (short *)(param_1 + 0x88 + param_3 * 4);
    *psVar1 = *psVar1 + 1;
  }
  else {
    *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + 1;
    psVar1 = (short *)(param_1 + 0x48c + (uint)*(byte *)((int)&DAT_010cb18c + param_3) * 4);
    *psVar1 = *psVar1 + 1;
    if (param_2 - 1U < 0x100) {
      bVar2 = (&DAT_010cb2ff)[param_2];
    }
    else {
      bVar2 = (&DAT_010cb400)[param_2 - 1U >> 7];
    }
    psVar1 = (short *)(param_1 + 0x97c + (uint)bVar2 * 4);
    *psVar1 = *psVar1 + 1;
  }
  if (2 < *(int *)(param_1 + 0x78)) {
    uVar3 = *(uint *)(param_1 + 0x1694);
    if ((uVar3 & 0xfff) == 0) {
      uVar7 = uVar3 * 8;
      piVar5 = &DAT_00d7daa4;
      puVar6 = (ushort *)(param_1 + 0x97c);
      do {
        iVar4 = *piVar5;
        piVar5 = piVar5 + 1;
        uVar7 = uVar7 + (iVar4 + 5) * (uint)*puVar6;
        puVar6 = puVar6 + 2;
      } while ((int)piVar5 < 0xd7db1c);
      if ((*(uint *)(param_1 + 0x16a8) < uVar3 >> 1) &&
         ((uVar7 >> 2 & 0x3ffffffe) <
          (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x50) & 0xfffffffeU))) {
        return true;
      }
    }
  }
  return *(int *)(param_1 + 0x1694) == *(int *)(param_1 + 0x1690) + -1;
}


//// FUNCTION FUN_00acb5c0 @ 00acb5c0 ////

void __cdecl FUN_00acb5c0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x1694) != 0) {
    do {
      uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x1698) + uVar3 * 2);
      uVar10 = (uint)*(byte *)(uVar3 + *(int *)(param_1 + 0x168c));
      uVar3 = uVar3 + 1;
      if (uVar8 == 0) {
        uVar8 = (uint)*(ushort *)(param_2 + 2 + uVar10 * 4);
        iVar4 = *(int *)(param_1 + 0x16b4);
        if ((int)(0x10 - uVar8) < iVar4) {
          uVar1 = *(ushort *)(param_2 + uVar10 * 4);
          *(ushort *)(param_1 + 0x16b0) =
               *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar4 & 0x1f);
          *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x16b0);
          iVar5 = *(int *)(param_1 + 0x10) + 1;
          *(int *)(param_1 + 0x10) = iVar5;
          *(undefined1 *)(iVar5 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          iVar4 = *(int *)(param_1 + 0x16b4) + -0x10 + uVar8;
          *(ushort *)(param_1 + 0x16b0) = uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f)
          ;
        }
        else {
          *(ushort *)(param_1 + 0x16b0) =
               *(ushort *)(param_1 + 0x16b0) |
               *(short *)(param_2 + uVar10 * 4) << ((byte)iVar4 & 0x1f);
          iVar4 = iVar4 + uVar8;
        }
LAB_00acb937:
        *(int *)(param_1 + 0x16b4) = iVar4;
      }
      else {
        uVar7 = (uint)*(byte *)((int)&DAT_010cb18c + uVar10);
        uVar9 = (uint)*(ushort *)(param_2 + 0x406 + uVar7 * 4);
        bVar2 = (byte)*(int *)(param_1 + 0x16b4);
        if ((int)(0x10 - uVar9) < *(int *)(param_1 + 0x16b4)) {
          uVar1 = *(ushort *)(param_2 + 0x404 + uVar7 * 4);
          *(ushort *)(param_1 + 0x16b0) = *(ushort *)(param_1 + 0x16b0) | uVar1 << (bVar2 & 0x1f);
          *(undefined1 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)) =
               *(undefined1 *)(param_1 + 0x16b0);
          iVar5 = *(int *)(param_1 + 0x10) + 1;
          *(int *)(param_1 + 0x10) = iVar5;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar5) = *(undefined1 *)(param_1 + 0x16b1);
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          *(ushort *)(param_1 + 0x16b0) = uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f)
          ;
          *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar9;
        }
        else {
          *(ushort *)(param_1 + 0x16b0) =
               *(ushort *)(param_1 + 0x16b0) |
               *(short *)(param_2 + 0x404 + uVar7 * 4) << (bVar2 & 0x1f);
          *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + uVar9;
        }
        iVar5 = (&DAT_00d7da30)[uVar7];
        if (iVar5 != 0) {
          iVar6 = uVar10 - (&DAT_010cb28c)[uVar7];
          iVar4 = *(int *)(param_1 + 0x16b4);
          if (0x10 - iVar5 < iVar4) {
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar6 << ((byte)iVar4 & 0x1f));
            *(undefined1 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)) =
                 *(undefined1 *)(param_1 + 0x16b0);
            iVar4 = *(int *)(param_1 + 0x10) + 1;
            *(int *)(param_1 + 0x10) = iVar4;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar4) = *(undefined1 *)(param_1 + 0x16b1);
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
            *(ushort *)(param_1 + 0x16b0) =
                 (ushort)iVar6 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
            *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + iVar5;
          }
          else {
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar6 << ((byte)iVar4 & 0x1f));
            *(int *)(param_1 + 0x16b4) = iVar4 + iVar5;
          }
        }
        uVar10 = uVar8 - 1;
        if (uVar10 < 0x100) {
          bVar2 = (&DAT_010cb2ff)[uVar8];
        }
        else {
          bVar2 = (&DAT_010cb400)[uVar10 >> 7];
        }
        uVar8 = (uint)bVar2;
        iVar5 = *(int *)(param_1 + 0x16b4);
        uVar7 = (uint)*(ushort *)(param_3 + 2 + uVar8 * 4);
        if ((int)(0x10 - uVar7) < iVar5) {
          uVar1 = *(ushort *)(param_3 + uVar8 * 4);
          *(ushort *)(param_1 + 0x16b0) =
               *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar5 & 0x1f);
          *(undefined1 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)) =
               *(undefined1 *)(param_1 + 0x16b0);
          iVar5 = *(int *)(param_1 + 0x10) + 1;
          *(int *)(param_1 + 0x10) = iVar5;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar5) = *(undefined1 *)(param_1 + 0x16b1);
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          *(ushort *)(param_1 + 0x16b0) = uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f)
          ;
          *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar7;
        }
        else {
          *(ushort *)(param_1 + 0x16b0) =
               *(ushort *)(param_1 + 0x16b0) |
               *(short *)(param_3 + uVar8 * 4) << ((byte)iVar5 & 0x1f);
          *(uint *)(param_1 + 0x16b4) = iVar5 + uVar7;
        }
        iVar5 = (&DAT_00d7daa4)[uVar8];
        if (iVar5 != 0) {
          iVar6 = uVar10 - (&DAT_010cb9f8)[uVar8];
          iVar4 = *(int *)(param_1 + 0x16b4);
          if (iVar4 <= 0x10 - iVar5) {
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar6 << ((byte)iVar4 & 0x1f));
            iVar4 = iVar4 + iVar5;
            goto LAB_00acb937;
          }
          *(ushort *)(param_1 + 0x16b0) =
               *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar6 << ((byte)iVar4 & 0x1f));
          *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x16b0);
          iVar4 = *(int *)(param_1 + 0x10) + 1;
          *(int *)(param_1 + 0x10) = iVar4;
          *(undefined1 *)(iVar4 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
          iVar4 = *(int *)(param_1 + 0x16b4);
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          *(int *)(param_1 + 0x16b4) = iVar4 + -0x10 + iVar5;
          *(ushort *)(param_1 + 0x16b0) = (ushort)iVar6 >> (0x10U - (char)iVar4 & 0x1f);
        }
      }
    } while (uVar3 < *(uint *)(param_1 + 0x1694));
  }
  iVar5 = *(int *)(param_1 + 0x16b4);
  uVar3 = (uint)*(ushort *)(param_2 + 0x402);
  if ((int)(0x10 - uVar3) < iVar5) {
    uVar1 = *(ushort *)(param_2 + 0x400);
    *(ushort *)(param_1 + 0x16b0) = *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar5 & 0x1f);
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar5 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar5;
    *(undefined1 *)(iVar5 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(ushort *)(param_1 + 0x16b0) = uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
    *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar3;
  }
  else {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | *(short *)(param_2 + 0x400) << ((byte)iVar5 & 0x1f);
    *(uint *)(param_1 + 0x16b4) = iVar5 + uVar3;
  }
  *(uint *)(param_1 + 0x16ac) = (uint)*(ushort *)(param_2 + 0x402);
  return;
}


//// FUNCTION FUN_00acba00 @ 00acba00 ////

void __cdecl FUN_00acba00(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  puVar2 = (ushort *)(param_1 + 0x88);
  iVar3 = 7;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar4 = uVar4 + uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (ushort *)(param_1 + 0xa4);
  iVar3 = 0x79;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar5 = uVar5 + uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (ushort *)(param_1 + 0x288);
  iVar3 = 0x80;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar4 = uVar4 + uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(bool *)(param_1 + 0x18) = uVar4 <= uVar5 >> 2;
  return;
}


//// FUNCTION FUN_00acba80 @ 00acba80 ////

uint __cdecl FUN_00acba80(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar3 = param_1 & 1;
    param_1 = param_1 >> 1;
    param_2 = param_2 + -1;
    uVar1 = (uVar2 | uVar3) << 1;
  } while (0 < param_2);
  return uVar2 & 0x7fffffff | uVar3;
}


//// FUNCTION FUN_00acbaa0 @ 00acbaa0 ////

void __cdecl FUN_00acbaa0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16b4) == 0x10) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar1 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b1);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(undefined2 *)(param_1 + 0x16b0) = 0;
    *(undefined4 *)(param_1 + 0x16b4) = 0;
    return;
  }
  if (7 < *(int *)(param_1 + 0x16b4)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x16b0);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(ushort *)(param_1 + 0x16b0) = (ushort)*(byte *)(param_1 + 0x16b1);
    *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -8;
  }
  return;
}


//// FUNCTION FUN_00acbb30 @ 00acbb30 ////

void __cdecl FUN_00acbb30(int param_1)

{
  int iVar1;
  
  if (8 < *(int *)(param_1 + 0x16b4)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar1 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b1);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(undefined2 *)(param_1 + 0x16b0) = 0;
    *(undefined4 *)(param_1 + 0x16b4) = 0;
    return;
  }
  if (0 < *(int *)(param_1 + 0x16b4)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x16b0);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  *(undefined2 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 0;
  return;
}


//// FUNCTION FUN_00acbbb0 @ 00acbbb0 ////

void __cdecl FUN_00acbbb0(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  FUN_00acbb30(param_1);
  *(undefined4 *)(param_1 + 0x16ac) = 8;
  if (param_4 != 0) {
    *(byte *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)) = (byte)param_3;
    iVar2 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar2;
    bVar1 = (byte)((uint)param_3 >> 8);
    *(byte *)(iVar2 + *(int *)(param_1 + 8)) = bVar1;
    iVar2 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar2;
    *(byte *)(iVar2 + *(int *)(param_1 + 8)) = ~(byte)param_3;
    iVar2 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar2;
    *(byte *)(iVar2 + *(int *)(param_1 + 8)) = ~bVar1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)) = *param_2;
    param_2 = param_2 + 1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}


//// FUNCTION operator_new @ 00acbc50 ////

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  int iVar1;
  void *pvVar2;
  
  while( true ) {
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) break;
    iVar1 = __callnewh(param_1);
    if (iVar1 == 0) {
      FUN_00acd18e();
    }
  }
  return pvVar2;
}


//// FUNCTION FUN_00acbc74 @ 00acbc74 ////

void FUN_00acbc74(void)

{
  int unaff_EBP;
  
  FUN_00ad6930();
  FUN_00406070((void *)(unaff_EBP + -0x28),"invalid string position");
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00405f00((void *)(unaff_EBP + -0x50),unaff_EBP + -0x28);
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_00d16dc0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_00ddd664);
}


//// FUNCTION FUN_00acbcb4 @ 00acbcb4 ////

void FUN_00acbcb4(void)

{
  int unaff_EBP;
  
  FUN_00ad6930();
  FUN_00406070((void *)(unaff_EBP + -0x28),"string too long");
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00405f00((void *)(unaff_EBP + -0x50),unaff_EBP + -0x28);
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x50,&DAT_00ddceb4);
}


//// FUNCTION __Tolower_lk @ 00acbcf9 ////

/* Library Function - Single Match
    __Tolower_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __Tolower_lk(uint param_1,LCID *param_2)

{
  LCID *pLVar1;
  uint *puVar2;
  UINT UVar3;
  int iVar4;
  undefined *puVar5;
  size_t sVar6;
  uint uVar7;
  LCID local_10;
  byte local_c;
  byte local_8;
  undefined1 local_7;
  
  pLVar1 = param_2;
  if (param_2 == (LCID *)0x0) {
    puVar2 = ____lc_handle_func();
    local_10 = puVar2[2];
    UVar3 = ____lc_codepage_func();
  }
  else {
    local_10 = *param_2;
    UVar3 = param_2[1];
  }
  if (local_10 != 0) {
    if (param_1 < 0x100) {
      if (pLVar1 == (LCID *)0x0) {
        iVar4 = _isupper(param_1);
        if (iVar4 == 0) {
          return param_1;
        }
      }
      else if ((*(byte *)(pLVar1[2] + param_1 * 2) & 1) == 0) {
        return param_1;
      }
    }
    puVar5 = FUN_00ad6d2d();
    pLVar1 = param_2;
    local_c = (byte)(param_1 >> 8);
    if ((puVar5[(uint)local_c * 2 + 1] & 0x80) == 0) {
      param_2._0_2_ = (ushort)(byte)param_1;
      sVar6 = 1;
    }
    else {
      param_2._0_2_ = CONCAT11((byte)param_1,local_c);
      param_2._3_1_ = SUB41(pLVar1,3);
      param_2._0_3_ = (uint3)(ushort)param_2;
      sVar6 = 2;
    }
    uVar7 = FUN_00ad696b(local_10,0x100,(LPCSTR)&param_2,sVar6,(LPSTR)&local_8,3,UVar3,1);
    if (uVar7 != 0) {
      if (uVar7 == 1) {
        param_1 = (uint)local_8;
      }
      else {
        param_1 = (uint)CONCAT11(local_8,local_7);
      }
    }
    return param_1;
  }
  if ((int)param_1 < 0x41) {
    return param_1;
  }
  if (0x5a < (int)param_1) {
    return param_1;
  }
  return param_1 + 0x20;
}


//// FUNCTION __Getctype @ 00acbde2 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __Getctype
   
   Library: Visual Studio 2003 Release */

_Ctypevec * __cdecl __Getctype(_Ctypevec *__return_storage_ptr__)

{
  uint uVar1;
  LONG *pLVar2;
  int iVar3;
  uint *puVar4;
  short *psVar5;
  undefined *_Src;
  bool bVar6;
  size_t _Size;
  undefined *local_28;
  wchar_t *local_24;
  
  pLVar2 = (LONG *)FUN_00ad7110();
  InterlockedIncrement(pLVar2);
  iVar3 = FUN_00ad710a();
  if (iVar3 != 0) {
    pLVar2 = (LONG *)FUN_00ad7110();
    InterlockedDecrement(pLVar2);
    __lock(0xc);
  }
  puVar4 = ____lc_handle_func();
  uVar1 = puVar4[1];
  psVar5 = (short *)____lc_codepage_func();
  local_28 = _malloc(0x200);
  bVar6 = local_28 == (undefined *)0x0;
  if (bVar6) {
    local_28 = FUN_00ad6d2d();
  }
  else {
    _Size = 0x200;
    _Src = FUN_00ad6d2d();
    _memcpy(local_28,_Src,_Size);
  }
  local_24 = (wchar_t *)(uint)!bVar6;
  FUN_00acbe90();
  __return_storage_ptr__->_Page = uVar1;
  __return_storage_ptr__->_Table = psVar5;
  __return_storage_ptr__->_Delfl = (int)local_28;
  __return_storage_ptr__->_LocaleName = local_24;
  return __return_storage_ptr__;
}


//// FUNCTION FUN_00acbe90 @ 00acbe90 ////

void FUN_00acbe90(void)

{
  LONG *lpAddend;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    lpAddend = (LONG *)FUN_00ad7110();
    InterlockedDecrement(lpAddend);
  }
  else {
    FUN_00ad700c(0xc);
  }
  return;
}


//// FUNCTION __Tolower @ 00acbead ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __Tolower
   
   Library: Visual Studio 2003 Release */

int __cdecl __Tolower(int param_1,_Ctypevec *param_2)

{
  uint *puVar1;
  uint uVar2;
  LONG *pLVar3;
  int iVar4;
  
  if (param_2 == (_Ctypevec *)0x0) {
    puVar1 = ____lc_handle_func();
    uVar2 = puVar1[2];
  }
  else {
    uVar2 = param_2->_Page;
  }
  if (uVar2 == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    pLVar3 = (LONG *)FUN_00ad7110();
    InterlockedIncrement(pLVar3);
    iVar4 = FUN_00ad710a();
    if (iVar4 != 0) {
      pLVar3 = (LONG *)FUN_00ad7110();
      InterlockedDecrement(pLVar3);
      __lock(0xc);
    }
    param_1 = __Tolower_lk(param_1,&param_2->_Page);
    FUN_00acbf3c();
  }
  return param_1;
}


//// FUNCTION FUN_00acbf3c @ 00acbf3c ////

void FUN_00acbf3c(void)

{
  LONG *lpAddend;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    lpAddend = (LONG *)FUN_00ad7110();
    InterlockedDecrement(lpAddend);
  }
  else {
    FUN_00ad700c(0xc);
  }
  return;
}


//// FUNCTION _Init_locks @ 00acbf59 ////

/* Library Function - Single Match
    public: __thiscall std::_Init_locks::_Init_locks(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  LONG LVar1;
  LPCRITICAL_SECTION p_Var2;
  
  LVar1 = InterlockedIncrement((LONG *)&lpAddend_00e99be8);
  if (LVar1 == 0) {
    p_Var2 = (LPCRITICAL_SECTION)&DAT_010cba78;
    do {
      FUN_00acd226(p_Var2);
      p_Var2 = p_Var2 + 1;
    } while ((int)p_Var2 < 0x10cbad8);
  }
  return this;
}


//// FUNCTION FUN_00acbf88 @ 00acbf88 ////

void FUN_00acbf88(void)

{
  LONG LVar1;
  LPCRITICAL_SECTION p_Var2;
  
  LVar1 = InterlockedDecrement((LONG *)&lpAddend_00e99be8);
  if (LVar1 < 0) {
    p_Var2 = (LPCRITICAL_SECTION)&DAT_010cba78;
    do {
      FUN_00acd231(p_Var2);
      p_Var2 = p_Var2 + 1;
    } while ((int)p_Var2 < 0x10cbad8);
  }
  return;
}


//// FUNCTION FUN_00acbfb1 @ 00acbfb1 ////

undefined4 * __fastcall FUN_00acbfb1(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00acd23c((LPCRITICAL_SECTION)&DAT_010cba78);
  return param_1;
}


//// FUNCTION FUN_00acbfc6 @ 00acbfc6 ////

uint * __thiscall FUN_00acbfc6(void *this,uint param_1)

{
  *(uint *)this = param_1 & 3;
  FUN_00acd23c((LPCRITICAL_SECTION)(&DAT_010cba78 + (param_1 & 3) * 0x18));
  return this;
}


//// FUNCTION FUN_00acbfe9 @ 00acbfe9 ////

void __fastcall FUN_00acbfe9(int *param_1)

{
  FUN_00acd247((LPCRITICAL_SECTION)(&DAT_010cba78 + *param_1 * 0x18));
  return;
}


//// FUNCTION FUN_00acc01f @ 00acc01f ////

void __fastcall FUN_00acc01f(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00a15fe0(*(uint *)(param_1 + 4));
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}


//// FUNCTION FUN_00acc034 @ 00acc034 ////

void * __thiscall FUN_00acc034(void *this,byte param_1)

{
  FUN_00acc01f((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION __Deletegloballocale @ 00acc050 ////

/* Library Function - Single Match
    __Deletegloballocale
   
   Library: Visual Studio 2003 Release */

void __cdecl __Deletegloballocale(uint *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)FUN_00a15fe0(*param_1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


//// FUNCTION tidy_global @ 00acc06c ////

/* Library Function - Single Match
    _tidy_global
   
   Library: Visual Studio 2003 Release */

void __cdecl tidy_global(void)

{
  int local_8;
  
  FUN_00acbfc6(&local_8,0);
  __Deletegloballocale(&DAT_010cbae0);
  FUN_00acbfe9(&local_8);
  return;
}


//// FUNCTION __Setgloballocale @ 00acc095 ////

/* Library Function - Single Match
    __Setgloballocale
   
   Library: Visual Studio 2003 Release */

void __cdecl __Setgloballocale(undefined4 param_1)

{
  if (DAT_010cbb04 == '\0') {
    DAT_010cbb04 = '\x01';
    __Atexit(tidy_global);
  }
  DAT_010cbae0 = param_1;
  return;
}


//// FUNCTION _Getfacet @ 00acc0ba ////

/* Library Function - Single Match
    public: class std::locale::facet const * __thiscall std::locale::_Getfacet(unsigned int)const 
   
   Library: Visual Studio 2003 Release */

facet * __thiscall std::locale::_Getfacet(locale *this,uint param_1)

{
  int iVar1;
  facet *pfVar2;
  
  iVar1 = *(int *)this;
  if (param_1 < *(uint *)(iVar1 + 0xc)) {
    pfVar2 = *(facet **)(*(int *)(iVar1 + 8) + param_1 * 4);
  }
  else {
    pfVar2 = (facet *)0x0;
  }
  if ((pfVar2 == (facet *)0x0) && (*(char *)(iVar1 + 0x14) != '\0')) {
    if (param_1 < *(uint *)(DAT_010cbae0 + 0xc)) {
      pfVar2 = *(facet **)(*(int *)(DAT_010cbae0 + 8) + param_1 * 4);
    }
    else {
      pfVar2 = (facet *)0x0;
    }
  }
  return pfVar2;
}


//// FUNCTION FUN_00acc0ef @ 00acc0ef ////

void FUN_00acc0ef(void)

{
  undefined4 *_Memory;
  int local_8;
  
  FUN_00acbfc6(&local_8,0);
  _Memory = DAT_010cbadc;
  if (DAT_010cbadc != (undefined4 *)0x0) {
    DAT_010cbadc = (undefined4 *)*DAT_010cbadc;
    FUN_00acc01f((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_00acbfe9(&local_8);
  return;
}


//// FUNCTION _Register @ 00acc132 ////

/* Library Function - Single Match
    public: void __thiscall std::locale::facet::_Register(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::locale::facet::_Register(facet *this)

{
  int *piVar1;
  
  if (DAT_010cbadc == (int *)0x0) {
    __Atexit(FUN_00acc0ef);
  }
  piVar1 = operator_new(8);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)DAT_010cbadc;
    piVar1[1] = (int)this;
  }
  DAT_010cbadc = piVar1;
  return;
}


//// FUNCTION compare @ 00acc16b ////

/* Library Function - Single Match
    public: int __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::compare(char const *)const 
   
   Library: Visual Studio 2003 Release */

int __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1)

{
  size_t sVar1;
  uint uVar2;
  
  sVar1 = _strlen(param_1);
  uVar2 = FUN_0096a0f0(this,0,*(uint *)(this + 0x14),(byte *)param_1,sVar1);
  return uVar2;
}


//// FUNCTION FUN_00acc18d @ 00acc18d ////

void FUN_00acc18d(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  int iVar3;
  
  FUN_00ad6930();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_00d7dc14;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00acbfc6((void *)(unaff_EBP + -0x10),0);
  iVar3 = extraout_ECX[3];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    uVar1 = *(uint *)(extraout_ECX[2] + iVar3 * 4);
    if (uVar1 != 0) {
      puVar2 = (undefined4 *)FUN_00a15fe0(uVar1);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)extraout_ECX[2]);
}


//// FUNCTION ~_Locinfo @ 00acc215 ////

/* Library Function - Single Match
    public: __thiscall std::_Locinfo::~_Locinfo(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::_Locinfo::~_Locinfo(_Locinfo *this)

{
  _Locinfo *p_Var1;
  
  if (*(int *)(this + 0x50) != 0) {
    if (*(uint *)(this + 0x54) < 0x10) {
      p_Var1 = this + 0x40;
    }
    else {
      p_Var1 = *(_Locinfo **)(this + 0x40);
    }
    FUN_00ad7ab6(0,(char *)p_Var1);
  }
  FUN_00404e00(this + 0x58,'\x01',0);
  FUN_00404e00(this + 0x3c,'\x01',0);
  FUN_00404e00(this + 0x20,'\x01',0);
  FUN_00404e00(this + 4,'\x01',0);
  FUN_00acbfe9((int *)this);
  return;
}


//// FUNCTION FUN_00acc26c @ 00acc26c ////

void * __thiscall FUN_00acc26c(void *this,byte param_1)

{
  FUN_00acc18d();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION name @ 00acc288 ////

/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __thiscall std::locale::name(void)const 
   
   Library: Visual Studio 2003 Release */

void * __thiscall std::locale::name(locale *this)

{
  void *in_stack_00000004;
  
  FUN_00405e70(in_stack_00000004,(void *)(*(int *)this + 0x18));
  return in_stack_00000004;
}


//// FUNCTION operator== @ 00acc2a5 ////

/* Library Function - Single Match
    public: bool __thiscall std::locale::operator==(class std::locale const &)const 
   
   Library: Visual Studio 2003 Release */

bool __thiscall std::locale::operator==(locale *this,locale *param_1)

{
  locale *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_01;
  int iVar1;
  void *this_02;
  locale *this_03;
  int unaff_EBP;
  
  FUN_00ad6930();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  this_00 = *(locale **)(unaff_EBP + 8);
  if (*(int *)this_03 == *(int *)this_00) {
LAB_00acc329:
    *(undefined1 *)(unaff_EBP + 0xb) = 1;
  }
  else {
    this_01 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)name(this_03);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    iVar1 = basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare(this_01,"*");
    if (iVar1 != 0) {
      iVar1 = name(this_00);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      *(undefined4 *)(unaff_EBP + -0x10) = 3;
      this_02 = (void *)name(this_03);
      *(undefined4 *)(unaff_EBP + -4) = 2;
      *(undefined4 *)(unaff_EBP + -0x10) = 7;
      iVar1 = FUN_0096a410(this_02,iVar1);
      if (iVar1 == 0) goto LAB_00acc329;
    }
    *(undefined1 *)(unaff_EBP + 0xb) = 0;
  }
  if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    FUN_00404e00((void *)(unaff_EBP + -0x2c),'\x01',0);
  }
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00404e00((void *)(unaff_EBP + -0x48),'\x01',0);
  }
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00404e00((void *)(unaff_EBP + -100),'\x01',0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return (bool)*(undefined1 *)(unaff_EBP + 0xb);
}


//// FUNCTION _Locimp @ 00acc37a ////

/* Library Function - Single Match
    private: __thiscall std::locale::_Locimp::_Locimp(bool)
   
   Library: Visual Studio 2003 Release */

undefined4 * __thiscall std::locale::_Locimp::_Locimp(_Locimp *this,bool param_1)

{
  undefined1 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00ad6930();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  uVar1 = *(undefined1 *)(unaff_EBP + 8);
  *extraout_ECX = &PTR_FUN_00d7dc14;
  *(undefined1 *)(extraout_ECX + 5) = uVar1;
  FUN_00406070(extraout_ECX + 6,"*");
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


//// FUNCTION _Locinfo @ 00acc3ca ////

/* Library Function - Single Match
    public: __thiscall std::_Locinfo::_Locinfo(char const *)
   
   Library: Visual Studio 2003 Release */

void * __thiscall std::_Locinfo::_Locinfo(_Locinfo *this,char *param_1)

{
  uint *puVar1;
  void *this_00;
  int unaff_EBP;
  
  FUN_00ad6930();
  *(void **)(unaff_EBP + -0x10) = this_00;
  FUN_00acbfc6(this_00,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00963e80((int)this_00 + 4);
  FUN_00963e80((int)this_00 + 0x20);
  FUN_00963e80((int)this_00 + 0x3c);
  FUN_00963e80((int)this_00 + 0x58);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puVar1 = FUN_00ad7ab6(0,(char *)0x0);
  FUN_00405ed0((void *)((int)this_00 + 0x3c),(char *)puVar1);
  if (*(int *)(unaff_EBP + 8) != 0) {
    puVar1 = FUN_00ad7ab6(0,*(char **)(unaff_EBP + 8));
    if (puVar1 != (uint *)0x0) goto LAB_00acc438;
  }
  puVar1 = (uint *)&DAT_00d1e554;
LAB_00acc438:
  FUN_00405ed0((void *)((int)this_00 + 0x58),(char *)puVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_00;
}


//// FUNCTION _Init @ 00acc454 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    private: static class std::locale::_Locimp * __cdecl std::locale::_Init(void)
   
   Library: Visual Studio 2003 Release */

_Locimp * __cdecl std::locale::_Init(void)

{
  _Locimp *p_Var1;
  int unaff_EBP;
  
  FUN_00ad6930();
  p_Var1 = DAT_010cbae0;
  if (DAT_010cbae0 == (_Locimp *)0x0) {
    FUN_00acbfc6((void *)(unaff_EBP + -0x10),0);
    p_Var1 = DAT_010cbae0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (p_Var1 == (_Locimp *)0x0) {
      p_Var1 = operator_new(0x34);
      *(_Locimp **)(unaff_EBP + -0x14) = p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (p_Var1 == (_Locimp *)0x0) {
        p_Var1 = (_Locimp *)0x0;
      }
      else {
        p_Var1 = (_Locimp *)_Locimp::_Locimp(p_Var1,false);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      __Setgloballocale(p_Var1);
      *(undefined4 *)(p_Var1 + 0x10) = 0x3f;
      FUN_00405ed0(p_Var1 + 0x18,"C");
      DAT_010cbae4 = p_Var1;
      FUN_00a15fb0((int)p_Var1);
      _DAT_010cbaec = DAT_010cbae4;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00acbfe9((int *)(unaff_EBP + -0x10));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return p_Var1;
}


//// FUNCTION locale @ 00acc4f6 ////

/* Library Function - Single Match
    public: __thiscall std::locale::locale(void)
   
   Library: Visual Studio 2003 Release */

locale * __thiscall std::locale::locale(locale *this)

{
  _Locimp *p_Var1;
  
  p_Var1 = _Init();
  *(_Locimp **)this = p_Var1;
  FUN_00a15fb0(DAT_010cbae0);
  return this;
}


//// FUNCTION operator= @ 00acc561 ////

/* Library Function - Single Match
    public: class std::locale & __thiscall std::locale::operator=(class std::locale const &)
   
   Library: Visual Studio 2003 Release */

locale * __thiscall std::locale::operator=(locale *this,locale *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(uint *)this != *(uint *)param_1) {
    puVar2 = (undefined4 *)FUN_00a15fe0(*(uint *)this);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    iVar1 = *(int *)param_1;
    *(int *)this = iVar1;
    FUN_00a15fb0(iVar1);
  }
  return this;
}


//// FUNCTION _Callfns @ 00acc5f0 ////

/* Library Function - Single Match
    private: void __thiscall std::ios_base::_Callfns(enum std::ios_base::event)
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __thiscall std::ios_base::_Callfns(ios_base *this,event param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(this + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_1,this,puVar1[1]);
  }
  return;
}


//// FUNCTION _Addstd @ 00acc612 ////

/* Library Function - Single Match
    public: void __thiscall std::ios_base::_Addstd(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::ios_base::_Addstd(ios_base *this)

{
  ios_base *piVar1;
  ios_base *local_8;
  
  local_8 = this;
  FUN_00acbfc6(&local_8,2);
  *(undefined4 *)(this + 4) = 1;
  do {
    piVar1 = *(ios_base **)(*(int *)(this + 4) * 4 + 0x10cbb14);
    if ((piVar1 == (ios_base *)0x0) || (piVar1 == this)) break;
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
  } while (*(uint *)(this + 4) < 8);
  *(ios_base **)(*(int *)(this + 4) * 4 + 0x10cbb14) = this;
  (&DAT_010cbb3c)[*(int *)(this + 4)] = (&DAT_010cbb3c)[*(int *)(this + 4)] + '\x01';
  FUN_00acbfe9((int *)&local_8);
  return;
}


//// FUNCTION FUN_00acc663 @ 00acc663 ////

void __fastcall FUN_00acc663(ios_base *param_1)

{
  std::ios_base::_Callfns(param_1,0);
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


//// FUNCTION FUN_00acc705 @ 00acc705 ////

void __fastcall FUN_00acc705(ios_base *param_1)

{
  uint *_Memory;
  
  *(undefined ***)param_1 = &PTR_FUN_00d74eb8;
  if ((*(int *)(param_1 + 4) == 0) ||
     ((&DAT_010cbb3c)[*(int *)(param_1 + 4)] = (&DAT_010cbb3c)[*(int *)(param_1 + 4)] + -1,
     (char)(&DAT_010cbb3c)[*(int *)(param_1 + 4)] < '\x01')) {
    FUN_00acc663(param_1);
    _Memory = *(uint **)(param_1 + 0x24);
    if (_Memory != (uint *)0x0) {
      FUN_00a16070(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return;
}


//// FUNCTION FUN_00acc745 @ 00acc745 ////

void __fastcall FUN_00acc745(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7dc20;
  FUN_00404e00(param_1 + 3,'\x01',0);
  FUN_00ace1d8(param_1);
  return;
}


//// FUNCTION FUN_00acc770 @ 00acc770 ////

undefined4 * __thiscall FUN_00acc770(void *this,byte param_1)

{
  FUN_00acc745(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION runtime_error @ 00acc78c ////

/* Library Function - Single Match
    public: __thiscall std::runtime_error::runtime_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall
std::runtime_error::runtime_error
          (runtime_error *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  void *pvVar1;
  exception *this_00;
  int unaff_EBP;
  
  FUN_00ad6930();
  *(exception **)(unaff_EBP + -0x10) = this_00;
  exception::exception(this_00);
  pvVar1 = *(void **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this_00 = &PTR_FUN_00d7dc20;
  FUN_00405e70(this_00 + 0xc,pvVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_00;
}


//// FUNCTION FUN_00acc7e0 @ 00acc7e0 ////

undefined4 * __thiscall FUN_00acc7e0(void *this,byte param_1)

{
  FUN_00acc7fc(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00acc7fc @ 00acc7fc ////

void __fastcall FUN_00acc7fc(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7dc2c;
  FUN_00acc745(param_1);
  return;
}


//// FUNCTION clear @ 00acc807 ////

/* Library Function - Single Match
    public: void __thiscall std::ios_base::clear(int,bool)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::ios_base::clear(ios_base *this,int param_1,bool param_2)

{
  uint uVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iVar2;
  undefined *puVar3;
  
  FUN_00ad6930();
  uVar1 = *(uint *)(unaff_EBP + 8) & 0x17;
  *(uint *)(extraout_ECX + 8) = uVar1;
  uVar1 = *(uint *)(extraout_ECX + 0xc) & uVar1;
  if (uVar1 == 0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  if (*(char *)(unaff_EBP + 0xc) != '\0') {
    puVar3 = (undefined *)0x0;
    iVar2 = 0;
    goto LAB_00acc8ba;
  }
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 2) != 0) {
      FUN_00406070((void *)(unaff_EBP + -0x50),"ios_base::failbit set");
      *(undefined4 *)(unaff_EBP + -4) = 1;
      goto LAB_00acc84e;
    }
    FUN_00406070((void *)(unaff_EBP + -0x94),"ios_base::eofbit set");
    *(undefined4 *)(unaff_EBP + -4) = 2;
    runtime_error::runtime_error
              ((runtime_error *)(unaff_EBP + -0x78),
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x94));
    *(undefined ***)(unaff_EBP + -0x78) = &PTR_FUN_00d7dc2c;
    iVar2 = unaff_EBP + -0x78;
  }
  else {
    FUN_00406070((void *)(unaff_EBP + -0x50),"ios_base::badbit set");
    *(undefined4 *)(unaff_EBP + -4) = 0;
LAB_00acc84e:
    runtime_error::runtime_error
              ((runtime_error *)(unaff_EBP + -0x34),
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x50));
    *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_00d7dc2c;
    iVar2 = unaff_EBP + -0x34;
  }
  puVar3 = &DAT_00e3ed44;
LAB_00acc8ba:
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(iVar2,puVar3);
}


//// FUNCTION FUN_00acc8cd @ 00acc8cd ////

exception * FUN_00acc8cd(void)

{
  exception *peVar1;
  exception *this;
  int unaff_EBP;
  
  FUN_00ad6930();
  peVar1 = *(exception **)(unaff_EBP + 8);
  *(exception **)(unaff_EBP + -0x10) = this;
  exception::exception(this,peVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this = &PTR_FUN_00d7dc20;
  FUN_00405e70(this + 0xc,peVar1 + 0xc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


//// FUNCTION _Findarr @ 00acc966 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    private: struct std::ios_base::_Iosarray & __thiscall std::ios_base::_Findarr(int)
   
   Library: Visual Studio 2003 Release */

_Iosarray * __thiscall std::ios_base::_Findarr(ios_base *this,int param_1)

{
  _Iosarray *p_Var1;
  _Iosarray *p_Var2;
  
  if ((_DAT_010cbb58 & 1) == 0) {
    _DAT_010cbb58 = _DAT_010cbb58 | 1;
    _DAT_010cbb48 = 0;
    _DAT_010cbb4c = 0;
    _DAT_010cbb50 = 0;
    _DAT_010cbb54 = 0;
  }
  if (param_1 < 0) {
    clear(this,*(uint *)(this + 8) | 4,false);
    p_Var1 = (_Iosarray *)&DAT_010cbb48;
  }
  else {
    p_Var1 = *(_Iosarray **)(this + 0x1c);
    p_Var2 = (_Iosarray *)0x0;
    if (p_Var1 != (_Iosarray *)0x0) {
      do {
        if (*(int *)(p_Var1 + 4) == param_1) {
          return p_Var1;
        }
        if (((p_Var2 == (_Iosarray *)0x0) && (*(int *)(p_Var1 + 8) == 0)) &&
           (*(int *)(p_Var1 + 0xc) == 0)) {
          p_Var2 = p_Var1;
        }
        p_Var1 = *(_Iosarray **)p_Var1;
      } while (p_Var1 != (_Iosarray *)0x0);
      if (p_Var2 != (_Iosarray *)0x0) {
        *(int *)(p_Var2 + 4) = param_1;
        return p_Var2;
      }
    }
    p_Var1 = operator_new(0x10);
    if (p_Var1 == (_Iosarray *)0x0) {
      p_Var1 = (_Iosarray *)0x0;
    }
    else {
      *(undefined4 *)p_Var1 = *(undefined4 *)(this + 0x1c);
      *(int *)(p_Var1 + 4) = param_1;
      *(undefined4 *)(p_Var1 + 8) = 0;
      *(undefined4 *)(p_Var1 + 0xc) = 0;
    }
    *(_Iosarray **)(this + 0x1c) = p_Var1;
  }
  return p_Var1;
}


//// FUNCTION _Init @ 00acca09 ////

/* Library Function - Single Match
    protected: void __thiscall std::ios_base::_Init(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::ios_base::_Init(ios_base *this)

{
  locale *this_00;
  undefined4 uVar1;
  
  this_00 = operator_new(4);
  if (this_00 == (locale *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = locale::locale(this_00);
  }
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x201;
  *(undefined4 *)(this + 0x14) = 6;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  clear(this,0,false);
  return;
}


//// FUNCTION FUN_00accb0c @ 00accb0c ////

undefined4 * __fastcall FUN_00accb0c(undefined4 *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  p_Var1 = operator_new(0x18);
  *param_1 = p_Var1;
  FUN_00acd226(p_Var1);
  return param_1;
}


//// FUNCTION FUN_00accb24 @ 00accb24 ////

void __fastcall FUN_00accb24(undefined4 *param_1)

{
  FUN_00acd231((LPCRITICAL_SECTION)*param_1);
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00accb39 @ 00accb39 ////

void __fastcall FUN_00accb39(undefined4 *param_1)

{
  FUN_00acd23c((LPCRITICAL_SECTION)*param_1);
  return;
}


//// FUNCTION FUN_00accb42 @ 00accb42 ////

void __fastcall FUN_00accb42(undefined4 *param_1)

{
  FUN_00acd247((LPCRITICAL_SECTION)*param_1);
  return;
}


//// FUNCTION __Toupper_lk @ 00accb4b ////

/* Library Function - Single Match
    __Toupper_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __Toupper_lk(uint param_1,LCID *param_2)

{
  LCID *pLVar1;
  uint *puVar2;
  UINT UVar3;
  int iVar4;
  undefined *puVar5;
  size_t sVar6;
  uint uVar7;
  bool bVar8;
  byte local_c;
  byte local_8;
  undefined1 local_7;
  
  pLVar1 = param_2;
  if (param_2 == (LCID *)0x0) {
    puVar2 = ____lc_handle_func();
    uVar7 = puVar2[2];
    UVar3 = ____lc_codepage_func();
  }
  else {
    uVar7 = *param_2;
    UVar3 = param_2[1];
  }
  if (uVar7 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      param_1 = param_1 - 0x20;
    }
  }
  else {
    if (param_1 < 0x100) {
      if (pLVar1 == (LCID *)0x0) {
        iVar4 = _islower(param_1);
        bVar8 = iVar4 == 0;
      }
      else {
        bVar8 = (*(byte *)(pLVar1[2] + param_1 * 2) & 2) == 0;
      }
      if (bVar8) {
        return param_1;
      }
    }
    puVar5 = FUN_00ad6d2d();
    pLVar1 = param_2;
    local_c = (byte)(param_1 >> 8);
    if ((puVar5[(uint)local_c * 2 + 1] & 0x80) == 0) {
      param_2._0_2_ = (ushort)(byte)param_1;
      sVar6 = 1;
    }
    else {
      param_2._0_2_ = CONCAT11((byte)param_1,local_c);
      param_2._3_1_ = SUB41(pLVar1,3);
      param_2._0_3_ = (uint3)(ushort)param_2;
      sVar6 = 2;
    }
    uVar7 = FUN_00ad696b(uVar7,0x200,(LPCSTR)&param_2,sVar6,(LPSTR)&local_8,3,UVar3,1);
    if (uVar7 != 0) {
      if (uVar7 == 1) {
        param_1 = (uint)local_8;
      }
      else {
        param_1 = (uint)CONCAT11(local_8,local_7);
      }
    }
  }
  return param_1;
}


//// FUNCTION __Toupper @ 00accc2b ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __Toupper
   
   Library: Visual Studio 2003 Release */

int __cdecl __Toupper(int param_1,_Ctypevec *param_2)

{
  uint *puVar1;
  uint uVar2;
  LONG *pLVar3;
  int iVar4;
  
  if (param_2 == (_Ctypevec *)0x0) {
    puVar1 = ____lc_handle_func();
    uVar2 = puVar1[2];
  }
  else {
    uVar2 = param_2->_Page;
  }
  if (uVar2 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      param_1 = param_1 - 0x20;
    }
  }
  else {
    pLVar3 = (LONG *)FUN_00ad7110();
    InterlockedIncrement(pLVar3);
    iVar4 = FUN_00ad710a();
    if (iVar4 != 0) {
      pLVar3 = (LONG *)FUN_00ad7110();
      InterlockedDecrement(pLVar3);
      __lock(0xc);
    }
    param_1 = __Toupper_lk(param_1,&param_2->_Page);
    FUN_00acccba();
  }
  return param_1;
}


//// FUNCTION FUN_00acccba @ 00acccba ////

void FUN_00acccba(void)

{
  LONG *lpAddend;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    lpAddend = (LONG *)FUN_00ad7110();
    InterlockedDecrement(lpAddend);
  }
  else {
    FUN_00ad700c(0xc);
  }
  return;
}


//// FUNCTION _Fiopen @ 00acccdc ////

/* Library Function - Single Match
    struct _iobuf * __cdecl std::_Fiopen(char const *,int,int)
   
   Library: Visual Studio 2003 Release */

_iobuf * __cdecl std::_Fiopen(char *param_1,int param_2,int param_3)

{
  int iVar1;
  FILE *_File;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_2 & 4;
  uVar4 = param_2 & 0x80;
  if ((param_2 & 0x40U) != 0) {
    param_2 = param_2 | 1;
  }
  iVar1 = 0;
  uVar2 = 1;
  do {
    if (uVar2 == (param_2 & 0xffffff3bU)) break;
    uVar2 = (&DAT_00d7dca8)[iVar1];
    iVar1 = iVar1 + 1;
  } while (uVar2 != 0);
  if (*(int *)(&UNK_00d7dca4 + iVar1 * 4) != 0) {
    if (((uVar4 == 0) || ((param_2 & 1U) == 0)) ||
       (_File = _fopen(param_1,"r"), _File == (FILE *)0x0)) {
      _File = _fopen(param_1,*(char **)(iVar1 * 4 + 0xe99c54));
      if (_File == (FILE *)0x0) {
        return (_iobuf *)0x0;
      }
      if (uVar3 == 0) {
        return _File;
      }
      iVar1 = _fseek(_File,0,2);
      if (iVar1 == 0) {
        return _File;
      }
    }
    _fclose(_File);
  }
  return (_iobuf *)0x0;
}


//// FUNCTION ___Wcrtomb_lk @ 00accd7e ////

/* Library Function - Single Match
    ___Wcrtomb_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl ___Wcrtomb_lk(LPSTR param_1,WCHAR param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  UINT CodePage;
  int iVar2;
  int *piVar3;
  uint uVar4;
  LPCCH lpDefaultChar;
  uint **lpUsedDefaultChar;
  
  if (param_4 == (uint *)0x0) {
    puVar1 = ____lc_handle_func();
    uVar4 = puVar1[2];
    CodePage = ____lc_codepage_func();
  }
  else {
    uVar4 = *param_4;
    CodePage = param_4[1];
  }
  if (uVar4 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_4 = (uint *)0x0;
    lpUsedDefaultChar = &param_4;
    lpDefaultChar = (LPCCH)0x0;
    iVar2 = FUN_00ad6f1d();
    iVar2 = WideCharToMultiByte(CodePage,0,&param_2,1,param_1,iVar2,lpDefaultChar,
                                (LPBOOL)lpUsedDefaultChar);
    if ((iVar2 != 0) && (param_4 == (uint *)0x0)) {
      return iVar2;
    }
  }
  piVar3 = FUN_00ad4b6c();
  *piVar3 = 0x2a;
  return -1;
}


//// FUNCTION __Getcvt @ 00accdf6 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __Getcvt
   
   Library: Visual Studio 2003 Release */

_Cvtvec * __cdecl __Getcvt(_Cvtvec *__return_storage_ptr__)

{
  _Cvtvec *p_Var1;
  LONG *pLVar2;
  int iVar3;
  uint *puVar4;
  
  pLVar2 = (LONG *)FUN_00ad7110();
  InterlockedIncrement(pLVar2);
  iVar3 = FUN_00ad710a();
  if (iVar3 != 0) {
    pLVar2 = (LONG *)FUN_00ad7110();
    InterlockedDecrement(pLVar2);
    __lock(0xc);
  }
  puVar4 = ____lc_handle_func();
  p_Var1 = (_Cvtvec *)puVar4[2];
  ____lc_codepage_func();
  FUN_00acce64();
  return p_Var1;
}


//// FUNCTION FUN_00acce64 @ 00acce64 ////

void FUN_00acce64(void)

{
  LONG *lpAddend;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    lpAddend = (LONG *)FUN_00ad7110();
    InterlockedDecrement(lpAddend);
  }
  else {
    FUN_00ad700c(0xc);
  }
  return;
}


//// FUNCTION __Wcrtomb @ 00accfef ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __Wcrtomb
   
   Library: Visual Studio 2003 Release */

int __cdecl __Wcrtomb(char *param_1,wchar_t param_2,mbstate_t *param_3,_Cvtvec *param_4)

{
  LONG *pLVar1;
  int iVar2;
  
  pLVar1 = (LONG *)FUN_00ad7110();
  InterlockedIncrement(pLVar1);
  iVar2 = FUN_00ad710a();
  if (iVar2 != 0) {
    pLVar1 = (LONG *)FUN_00ad7110();
    InterlockedDecrement(pLVar1);
    __lock(0xc);
  }
  iVar2 = ___Wcrtomb_lk(param_1,param_2,0,&param_4->_Page);
  FUN_00acd05d();
  return iVar2;
}


//// FUNCTION FUN_00acd05d @ 00acd05d ////

void FUN_00acd05d(void)

{
  LONG *lpAddend;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    lpAddend = (LONG *)FUN_00ad7110();
    InterlockedDecrement(lpAddend);
  }
  else {
    FUN_00ad700c(0xc);
  }
  return;
}


//// FUNCTION _wctob @ 00acd097 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _wctob
   
   Library: Visual Studio 2003 Release */

int __cdecl _wctob(wint_t _WCh)

{
  int iVar1;
  char local_10 [8];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  if ((_WCh != 0xffff) &&
     (iVar1 = __Wcrtomb(local_10,_WCh,(mbstate_t *)0x0,(_Cvtvec *)0x0), iVar1 == 1)) {
    return (int)local_10[0];
  }
  return -1;
}


//// FUNCTION __Stod @ 00acd0d8 ////

/* Library Function - Single Match
    __Stod
   
   Library: Visual Studio 2003 Release */

double __cdecl __Stod(char *param_1,char **param_2,long param_3)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  
  dVar4 = _strtod(param_1,param_2);
  bVar3 = param_3 < 0;
  lVar1 = param_3;
  if (0 < param_3) {
    lVar1 = 0;
    do {
      param_3 = param_3 + -1;
      dVar4 = dVar4 * 10.0;
    } while (param_3 != 0);
    bVar3 = false;
  }
  if (bVar3) {
    iVar2 = -lVar1;
    do {
      iVar2 = iVar2 + -1;
      dVar4 = dVar4 * 0.1;
    } while (iVar2 != 0);
  }
  return dVar4;
}


//// FUNCTION FUN_00acd10c @ 00acd10c ////

float10 __cdecl FUN_00acd10c(char *param_1,char **param_2,long param_3)

{
  double dVar1;
  
  dVar1 = __Stod(param_1,param_2,param_3);
  return (float10)dVar1;
}


//// FUNCTION FUN_00acd121 @ 00acd121 ////

float10 __cdecl FUN_00acd121(char *param_1,char **param_2,long param_3)

{
  double dVar1;
  
  dVar1 = __Stod(param_1,param_2,param_3);
  return (float10)dVar1;
}


//// FUNCTION FUN_00acd14f @ 00acd14f ////

void __fastcall FUN_00acd14f(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7dd1c;
  FUN_00ace1d8(param_1);
  return;
}


//// FUNCTION FUN_00acd15a @ 00acd15a ////

undefined4 * __thiscall FUN_00acd15a(void *this,byte param_1)

{
  FUN_00acd14f(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00acd18e @ 00acd18e ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00acd18e(void)

{
  undefined **local_14 [3];
  char *local_8;
  
  if ((_DAT_010cbb68 & 1) == 0) {
    _DAT_010cbb68 = _DAT_010cbb68 | 1;
    local_8 = "bad allocation";
    exception::exception((exception *)&DAT_010cbb5c,&local_8);
    _DAT_010cbb5c = &PTR_FUN_00d7dd1c;
    _atexit(FUN_00d153be);
  }
  exception::exception((exception *)local_14,(exception *)&DAT_010cbb5c);
  local_14[0] = &PTR_FUN_00d7dd1c;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_00e3edd4);
}


//// FUNCTION FUN_00acd226 @ 00acd226 ////

void __cdecl FUN_00acd226(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}


//// FUNCTION FUN_00acd231 @ 00acd231 ////

void __cdecl FUN_00acd231(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}


//// FUNCTION FUN_00acd23c @ 00acd23c ////

void __cdecl FUN_00acd23c(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}


//// FUNCTION FUN_00acd247 @ 00acd247 ////

void __cdecl FUN_00acd247(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}


//// FUNCTION __Atexit @ 00acd252 ////

/* Library Function - Single Match
    __Atexit
   
   Library: Visual Studio 2003 Release */

void __cdecl __Atexit(_func_9331 *param_1)

{
  if (DAT_00e99cb0 == 0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  DAT_00e99cb0 = DAT_00e99cb0 + -1;
  *(_func_9331 **)(DAT_00e99cb0 * 4 + 0x10cbb8c) = param_1;
  return;
}


//// FUNCTION FUN_00acd288 @ 00acd288 ////

void FUN_00acd288(void)

{
  int iVar1;
  
  while (DAT_00e99cb0 < 10) {
    iVar1 = DAT_00e99cb0 * 4;
    DAT_00e99cb0 = DAT_00e99cb0 + 1;
    (**(code **)(iVar1 + 0x10cbb8c))();
  }
  return;
}


//// FUNCTION _strncpy @ 00acd2a0 ////

/* Library Function - Single Match
    _strncpy
   
   Library: Visual Studio */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x00acd2ec;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_00acd333;
        goto LAB_00acd3a9;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x00acd3a5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_00acd3a9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_00acd333;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x00acd3a5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x00acd3a5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x00acd3a5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x00acd2ec:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_00acd333:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


//// FUNCTION FUN_00acd3c4 @ 00acd3c4 ////

void FUN_00acd3c4(void)

{
  return;
}


//// FUNCTION FUN_00acd3c5 @ 00acd3c5 ////

void FUN_00acd3c5(void)

{
  PTR_FUN_00e9a604 = __cfltcvt;
  PTR_FUN_00e9a608 = &LAB_00ad8948;
  PTR_FUN_00e9a60c = __fassign;
  PTR_FUN_00e9a610 = __forcdecpt;
  PTR_FUN_00e9a614 = &LAB_00ad8993;
  PTR_FUN_00e9a618 = __cfltcvt;
  return;
}


//// FUNCTION __fpmath @ 00acd40d ////

/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2003 Release */

void __cdecl __fpmath(int param_1)

{
  FUN_00acd3c5();
  DAT_010cbbbc = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}


//// FUNCTION FUN_00acd42c @ 00acd42c ////

ulonglong FUN_00acd42c(void)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = (ulonglong)ROUND(in_ST0);
  local_20 = (uint)uVar1;
  uStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((local_20 != 0) || (fVar3 = uStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)uStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
    }
  }
  return uVar1;
}


//// FUNCTION _free @ 00acd4a1 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2003 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  
  if (_Memory != (void *)0x0) {
    if (DAT_010dadec == 3) {
      __lock(4);
      puVar1 = (uint *)___sbh_find_block((int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_00acd4f4();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    HeapFree(hHeap_010dade8,0,_Memory);
  }
  return;
}


//// FUNCTION FUN_00acd4f4 @ 00acd4f4 ////

void FUN_00acd4f4(void)

{
  FUN_00ad700c(4);
  return;
}


//// FUNCTION __heap_alloc @ 00acd512 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __heap_alloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __heap_alloc(size_t _Size)

{
  int *piVar1;
  LPVOID pvVar2;
  
  if ((DAT_010dadec == 3) && (_Size <= DAT_010dadd8)) {
    __lock(4);
    piVar1 = ___sbh_alloc_block((uint *)_Size);
    FUN_00acd584();
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (_Size == 0) {
    _Size = 1;
  }
  if (DAT_010dadec != 1) {
    _Size = _Size + 0xf & 0xfffffff0;
  }
  pvVar2 = HeapAlloc(hHeap_010dade8,0,_Size);
  return pvVar2;
}


//// FUNCTION FUN_00acd584 @ 00acd584 ////

void FUN_00acd584(void)

{
  FUN_00ad700c(4);
  return;
}


//// FUNCTION __nh_malloc @ 00acd58d ////

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = __heap_alloc(_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}


//// FUNCTION _malloc @ 00acd5b9 ////

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_010cbdbc);
  return pvVar1;
}


//// FUNCTION _JumpToContinuation @ 00acd5d0 ////

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Library: Visual Studio 2003 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x00acd5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}


//// FUNCTION _CallMemberFunction0 @ 00acd600 ////

/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Library: Visual Studio 2003 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00acd605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}


//// FUNCTION FID_conflict:_CallMemberFunction1 @ 00acd607 ////

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Library: Visual Studio 2003 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00acd60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


//// FUNCTION FID_conflict:_CallMemberFunction1 @ 00acd60e ////

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Library: Visual Studio 2003 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00acd613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


//// FUNCTION _UnwindNestedFrames @ 00acd615 ////

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2003 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0xacd63e,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


//// FUNCTION ___CxxFrameHandler @ 00acd667 ////

/* Library Function - Single Match
    ___CxxFrameHandler
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl
___CxxFrameHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                  void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}


//// FUNCTION _CallSETranslator @ 00acd6f2 ////

/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2003 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  EHExceptionRecord **ppEVar3;
  int local_38;
  EHExceptionRecord *local_34;
  void *local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffc4;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0xacd78d;
    local_38 = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_00e9a098;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = ExceptionList;
    ExceptionList = &local_2c;
    local_34 = param_1;
    local_30 = param_3;
    ppEVar3 = &local_34;
    uVar2 = *(undefined4 *)param_1;
    p_Var1 = __getptd();
    (*(code *)p_Var1->_NLG_dwCode)(uVar2,ppEVar3);
    local_38 = 0;
    if (local_8 != 0) {
      *local_2c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_38;
}


//// FUNCTION TranslatorGuardHandler @ 00acd7b9 ////

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Library: Visual Studio 2003 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  if (*(int *)(param_2 + 8) == DAT_00e9a098) {
    if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
      ___InternalCxxFrameHandler
                (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
                 *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
                 *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
      if (*(int *)(param_2 + 0x24) == 0) {
        _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
      }
      _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                        (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00acd863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _Var1 = (*local_8)();
      return _Var1;
    }
    *(undefined4 *)(param_2 + 0x24) = 1;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  }
  return 1;
}


//// FUNCTION _GetRangeOfTrysToCheck @ 00acd86b ////

/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2003 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  TryBlockMapEntry *pTVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1->nTryBlocks;
  pTVar2 = param_1->pTryBlockMap;
  uVar5 = uVar1;
  uVar4 = uVar1;
  while (uVar3 = uVar5, -1 < param_2) {
    if (uVar1 == 0xffffffff) {
      _inconsistency();
    }
    uVar1 = uVar1 - 1;
    if (((pTVar2[uVar1].tryHigh < param_3) && (param_3 <= pTVar2[uVar1].catchHigh)) ||
       (uVar5 = uVar3, uVar1 == -1)) {
      param_2 = param_2 + -1;
      uVar5 = uVar1;
      uVar4 = uVar3;
    }
  }
  uVar1 = uVar1 + 1;
  *param_4 = uVar1;
  *param_5 = uVar4;
  if ((param_1->nTryBlocks < uVar4) || (uVar4 < uVar1)) {
    _inconsistency();
  }
  return pTVar2 + uVar1;
}


//// FUNCTION _CreateFrameInfo @ 00acd8e5 ////

/* Library Function - Single Match
    struct FrameInfo * __cdecl _CreateFrameInfo(struct FrameInfo *,void *)
   
   Library: Visual Studio 2003 Release */

FrameInfo * __cdecl _CreateFrameInfo(FrameInfo *param_1,void *param_2)

{
  _ptiddata p_Var1;
  
  *(void **)param_1 = param_2;
  p_Var1 = __getptd();
  *(void **)(param_1 + 4) = p_Var1->_curexception;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  return param_1;
}


//// FUNCTION IsExceptionObjectToBeDestroyed @ 00acd90d ////

/* Library Function - Single Match
    int __cdecl IsExceptionObjectToBeDestroyed(void *)
   
   Library: Visual Studio 2003 Release */

int __cdecl IsExceptionObjectToBeDestroyed(void *param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_curexception;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if ((void *)*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}


//// FUNCTION _FindAndUnlinkFrame @ 00acd92e ////

/* Library Function - Single Match
    void __cdecl _FindAndUnlinkFrame(struct FrameInfo *)
   
   Library: Visual Studio 2003 Release */

void __cdecl _FindAndUnlinkFrame(FrameInfo *param_1)

{
  FrameInfo *pFVar1;
  _ptiddata p_Var2;
  FrameInfo *pFVar3;
  
  p_Var2 = __getptd();
  if (param_1 == p_Var2->_curexception) {
    p_Var2 = __getptd();
    p_Var2->_curexception = *(void **)(param_1 + 4);
    return;
  }
  p_Var2 = __getptd();
  pFVar1 = p_Var2->_curexception;
  do {
    pFVar3 = pFVar1;
    if (*(int *)(pFVar3 + 4) == 0) {
      _inconsistency();
      return;
    }
    pFVar1 = *(FrameInfo **)(pFVar3 + 4);
  } while (param_1 != *(FrameInfo **)(pFVar3 + 4));
  *(undefined4 *)(pFVar3 + 4) = *(undefined4 *)(param_1 + 4);
  return;
}


//// FUNCTION _CallCatchBlock2 @ 00acd97a ////

/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Library: Visual Studio 2003 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_00e9a098;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_00acd6b7;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}


//// FUNCTION __global_unwind2 @ 00acd9d4 ////

/* Library Function - Single Match
    __global_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0xacd9ec,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


//// FUNCTION __local_unwind2 @ 00acda16 ////

/* Library Function - Single Match
    __local_unwind2
   
   Library: Visual Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_00acd9f4;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_00acdaaa();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}


//// FUNCTION __abnormal_termination @ 00acda7e ////

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio 2003 Release */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_00acd9f4) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}


//// FUNCTION __NLG_Notify1 @ 00acdaa1 ////

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_00e99d3c = param_1;
  DAT_00e99d38 = in_EAX;
  DAT_00e99d40 = unaff_EBP;
  return;
}


//// FUNCTION FUN_00acdaaa @ 00acdaaa ////

void FUN_00acdaaa(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_00e99d3c = *(undefined4 *)(unaff_EBP + 8);
  DAT_00e99d38 = in_EAX;
  DAT_00e99d40 = unaff_EBP;
  return;
}


//// FUNCTION FUN_00acdae6 @ 00acdae6 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __fastcall FUN_00acdae6(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  __lock(0xe);
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  FUN_00acdb23();
  return;
}


//// FUNCTION FUN_00acdb23 @ 00acdb23 ////

void FUN_00acdb23(void)

{
  FUN_00ad700c(0xe);
  return;
}


//// FUNCTION FUN_00acdb2c @ 00acdb2c ////

undefined4 * __thiscall FUN_00acdb2c(void *this,byte param_1)

{
  FUN_00acdae6(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00acdb9e @ 00acdb9e ////

int __fastcall FUN_00acdb9e(int param_1)

{
  return param_1 + 8;
}


//// FUNCTION __ArrayUnwind @ 00acdbc4 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Library: Visual Studio 2003 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(unaff_EDI);
  }
  return;
}


//// FUNCTION `eh_vector_destructor_iterator' @ 00acdc22 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Library: Visual Studio 2003 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(unaff_EDI);
  }
  FUN_00acdc6a();
  return;
}


//// FUNCTION FUN_00acdc6a @ 00acdc6a ////

void FUN_00acdc6a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


//// FUNCTION `eh_vector_constructor_iterator' @ 00acdc82 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Library: Visual Studio 2003 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *unaff_EDI;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)(unaff_EDI);
  }
  FUN_00acdccc();
  return;
}


//// FUNCTION FUN_00acdccc @ 00acdccc ////

void FUN_00acdccc(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}


//// FUNCTION _memmove @ 00acdcf0 ////

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar3 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = _Size >> 2;
      uVar2 = _Size & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_00acdeab_caseD_2;
        case 3:
          goto switchD_00acdeab_caseD_3;
        }
        goto switchD_00acdeab_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_00acdeab_caseD_0;
      case 1:
        goto switchD_00acdeab_caseD_1;
      case 2:
        goto switchD_00acdeab_caseD_2;
      case 3:
        goto switchD_00acdeab_caseD_3;
      default:
        uVar1 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00acdeab_caseD_2;
            case 3:
              goto switchD_00acdeab_caseD_3;
            }
            goto switchD_00acdeab_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00acdeab_caseD_2;
            case 3:
              goto switchD_00acdeab_caseD_3;
            }
            goto switchD_00acdeab_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00acdeab_caseD_2;
            case 3:
              goto switchD_00acdeab_caseD_3;
            }
            goto switchD_00acdeab_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_00acdeab_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_00acdeab_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_00acdeab_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_00acdeab_caseD_0:
    return _Dst;
  }
  puVar3 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar1 = _Size >> 2;
    uVar2 = _Size & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_00acdd25_caseD_2;
      case 3:
        goto switchD_00acdd25_caseD_3;
      }
      goto switchD_00acdd25_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_00acdd25_caseD_0;
    case 1:
      goto switchD_00acdd25_caseD_1;
    case 2:
      goto switchD_00acdd25_caseD_2;
    case 3:
      goto switchD_00acdd25_caseD_3;
    default:
      uVar1 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar3 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00acdd25_caseD_2;
          case 3:
            goto switchD_00acdd25_caseD_3;
          }
          goto switchD_00acdd25_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar3 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00acdd25_caseD_2;
          case 3:
            goto switchD_00acdd25_caseD_3;
          }
          goto switchD_00acdd25_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00acdd25_caseD_2;
          case 3:
            goto switchD_00acdd25_caseD_3;
          }
          goto switchD_00acdd25_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = *(undefined4 *)((int)_Src + (uVar1 - 7) * 4);
  case 6:
    puVar3[uVar1 - 6] = *(undefined4 *)((int)_Src + (uVar1 - 6) * 4);
  case 5:
    puVar3[uVar1 - 5] = *(undefined4 *)((int)_Src + (uVar1 - 5) * 4);
  case 4:
    puVar3[uVar1 - 4] = *(undefined4 *)((int)_Src + (uVar1 - 4) * 4);
  case 3:
    puVar3[uVar1 - 3] = *(undefined4 *)((int)_Src + (uVar1 - 3) * 4);
  case 2:
    puVar3[uVar1 - 2] = *(undefined4 *)((int)_Src + (uVar1 - 2) * 4);
  case 1:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)_Src + (uVar1 - 1) * 4);
    _Src = (void *)((int)_Src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_00acdd25_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_00acdd25_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_00acdd25_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_00acdd25_caseD_0:
  return _Dst;
}


