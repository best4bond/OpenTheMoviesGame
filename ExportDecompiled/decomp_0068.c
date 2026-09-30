//// FUNCTION FUN_00c64ef0 @ 00c64ef0 ////

undefined4 * __thiscall FUN_00c64ef0(void *this,byte param_1)

{
  FUN_00c39ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c64fe0 @ 00c64fe0 ////

void FUN_00c64fe0(uint param_1)

{
  if ((param_1 & 0xfe0fc000) != 0) {
    FUN_00c37ce0(&DAT_010da230,-3);
  }
  if (((param_1 & 0x2000) != 0) && ((char)param_1 < '\0')) {
    FUN_00c37ce0(&DAT_010da230,-3);
  }
  if (((param_1 & 0x2000) != 0) && ((param_1 & 0x1000) != 0)) {
    FUN_00c37ce0(&DAT_010da230,-3);
  }
  FUN_00c387d0(&DAT_010da230,param_1);
  return;
}


//// FUNCTION FUN_00c65140 @ 00c65140 ////

void FUN_00c65140(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  FUN_00c63390((void *)(-(uint)(cVar1 != '\0') & (uint)param_1),param_2,param_3);
  return;
}


//// FUNCTION FUN_00c65170 @ 00c65170 ////

void FUN_00c65170(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  FUN_00c633e0((void *)(-(uint)(cVar1 != '\0') & (uint)param_1),param_2 != 0);
  return;
}


//// FUNCTION FUN_00c651f0 @ 00c651f0 ////

void FUN_00c651f0(int *param_1,float *param_2)

{
  char cVar1;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  fStack_c = *param_2;
  fStack_8 = param_2[1];
  fStack_4 = param_2[2];
  FUN_00c62f10((void *)(-(uint)(cVar1 != '\0') & (uint)param_1),&fStack_c);
  return;
}


//// FUNCTION FUN_00c65230 @ 00c65230 ////

void FUN_00c65230(int *param_1,float *param_2)

{
  char cVar1;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  fStack_c = *param_2;
  fStack_8 = param_2[1];
  fStack_4 = param_2[2];
  FUN_00c62f70((void *)(-(uint)(cVar1 != '\0') & (uint)param_1),&fStack_c);
  return;
}


//// FUNCTION FUN_00c65270 @ 00c65270 ////

void FUN_00c65270(int *param_1,float param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  FUN_00c63030((void *)(-(uint)(cVar1 != '\0') & (uint)param_1),param_2);
  return;
}


//// FUNCTION FUN_00c65360 @ 00c65360 ////

void FUN_00c65360(int *param_1,float *param_2)

{
  char cVar1;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  fStack_c = *param_2;
  fStack_8 = param_2[1];
  fStack_4 = param_2[2];
  FUN_00c62fd0((void *)(-(uint)(cVar1 != '\0') & (uint)param_1),&fStack_c);
  return;
}


//// FUNCTION FUN_00c653a0 @ 00c653a0 ////

void FUN_00c653a0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  void *this;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  this = (void *)((uint)param_1 & -(uint)(cVar1 != '\0'));
  FUN_00c63120(this,param_2);
  FUN_00c63140(this,param_3);
  return;
}


//// FUNCTION FUN_00c65400 @ 00c65400 ////

void FUN_00c65400(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  FUN_00c63190((void *)(-(uint)(cVar1 != '\0') & (uint)param_1),param_2);
  return;
}


//// FUNCTION FUN_00c654e0 @ 00c654e0 ////

void FUN_00c654e0(uint param_1)

{
  if ((param_1 & 0xfff8c000) != 0) {
    FUN_00c37ce0(&DAT_010da230,-3);
  }
  if (((param_1 & 0x2000) != 0) && ((char)param_1 < '\0')) {
    FUN_00c37ce0(&DAT_010da230,-3);
  }
  if (((param_1 & 0x2000) != 0) && ((param_1 & 0x1000) != 0)) {
    FUN_00c37ce0(&DAT_010da230,-3);
  }
  FUN_00c386b0(&DAT_010da230,param_1);
  return;
}


//// FUNCTION FUN_00c656a0 @ 00c656a0 ////

void FUN_00c656a0(int *param_1)

{
  FUN_00c37940(param_1);
  return;
}


//// FUNCTION FUN_00c656b0 @ 00c656b0 ////

void FUN_00c656b0(int *param_1)

{
  FUN_00c37a20(param_1);
  return;
}


//// FUNCTION FUN_00c65750 @ 00c65750 ////

undefined4 __fastcall FUN_00c65750(int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05d9b;
  local_c = ExceptionList;
  if (1 < *(uint *)(param_1 + 8)) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\LLAChannelCInitParams.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x16);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Format out of range (");
    FUN_00bbe970(*(undefined4 *)(param_1 + 8));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
    ExceptionList = local_c;
    return *(undefined4 *)(&DAT_00dad494 + *(int *)(param_1 + 8) * 8);
  }
  return *(undefined4 *)(&DAT_00dad494 + *(int *)(param_1 + 8) * 8);
}


//// FUNCTION FUN_00c65860 @ 00c65860 ////

undefined4 __fastcall FUN_00c65860(int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05db0;
  local_c = ExceptionList;
  if (1 < *(uint *)(param_1 + 8)) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\LLAChannelCInitParams.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x1c);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Format out of range (");
    FUN_00bbe970(*(undefined4 *)(param_1 + 8));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
    ExceptionList = local_c;
    return *(undefined4 *)(&DAT_00dad498 + *(int *)(param_1 + 8) * 8);
  }
  return *(undefined4 *)(&DAT_00dad498 + *(int *)(param_1 + 8) * 8);
}


//// FUNCTION FUN_00c65970 @ 00c65970 ////

int __fastcall FUN_00c65970(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c65750(param_1);
  return iVar1 * *(int *)(param_1 + 4);
}


//// FUNCTION FUN_00c65990 @ 00c65990 ////

float10 __fastcall FUN_00c65990(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00c65860(param_1);
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar2 = FUN_00c65750(param_1);
  fVar3 = (float10)iVar2;
  if (iVar2 < 0) {
    fVar3 = fVar3 + (float10)4.2949673e+09;
  }
  return (float10)fVar1 / fVar3;
}


//// FUNCTION FUN_00c659e0 @ 00c659e0 ////

int __fastcall FUN_00c659e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c65860(param_1);
  return iVar1 * *(int *)(param_1 + 4);
}


//// FUNCTION FUN_00c659f0 @ 00c659f0 ////

uint __thiscall FUN_00c659f0(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_00c65750((int)this);
  return param_1 / uVar1;
}


//// FUNCTION FUN_00c65a10 @ 00c65a10 ////

int __thiscall FUN_00c65a10(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c659e0((int)this);
  return iVar1 * param_1;
}


//// FUNCTION FUN_00c65a20 @ 00c65a20 ////

void __thiscall FUN_00c65a20(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00c659f0(this,param_1);
  FUN_00c65a10(this,uVar1);
  return;
}


//// FUNCTION FUN_00c65e00 @ 00c65e00 ////

undefined4 FUN_00c65e00(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05dcb;
  local_c = ExceptionList;
  if (DAT_010d5e14 == '\0') {
    ExceptionList = &local_c;
    DAT_010daa0c = (undefined4 *)thunk_FUN_00c0ef90(4);
    if (DAT_010daa0c != (undefined4 *)0x0) {
      *DAT_010daa0c = &PTR_LAB_00dad4d8;
      goto LAB_00c65e57;
    }
  }
  else {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)thunk_FUN_00c0ef90(4);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      DAT_010daa0c = (undefined4 *)FUN_00c82d20(puVar1);
      goto LAB_00c65e57;
    }
  }
  DAT_010daa0c = (undefined4 *)0x0;
LAB_00c65e57:
  if (DAT_010daa0c == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  DAT_010daa10 = 1;
  ExceptionList = local_c;
  return 1;
}


//// FUNCTION FUN_00c65ec0 @ 00c65ec0 ////

undefined4 * __fastcall FUN_00c65ec0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad4fc;
  if (DAT_010daa0c == 0) {
    FUN_00c65e00();
    return param_1;
  }
  DAT_010daa10 = DAT_010daa10 + 1;
  return param_1;
}


//// FUNCTION FUN_00c65ef0 @ 00c65ef0 ////

void __fastcall FUN_00c65ef0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad4fc;
  DAT_010daa10 = DAT_010daa10 + -1;
  if (DAT_010daa10 == 0) {
    thunk_FUN_00c0efa0(DAT_010daa0c);
    DAT_010daa0c = 0;
  }
  return;
}


//// FUNCTION FUN_00c65f20 @ 00c65f20 ////

undefined4 * __thiscall FUN_00c65f20(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00dad4fc;
  DAT_010daa10 = DAT_010daa10 + -1;
  if (DAT_010daa10 == 0) {
    thunk_FUN_00c0efa0(DAT_010daa0c);
    DAT_010daa0c = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c65f70 @ 00c65f70 ////

void __fastcall FUN_00c65f70(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  return;
}


//// FUNCTION FUN_00c65fa0 @ 00c65fa0 ////

void FUN_00c65fa0(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 char param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = param_2[1];
  fVar5 = *param_2;
  fVar6 = param_2[2];
  if ((fVar2 != 0.0) || (fVar6 != 0.0)) {
    if (param_6 != '\0') {
      (**(code **)(*DAT_010daa0c + 0x20))(param_5,param_4,param_1,param_2,param_3,param_7);
      return;
    }
    fVar1 = *param_3;
    fVar7 = param_3[1];
    for (; fVar8 = fVar1, param_7 != 0; param_7 = param_7 - 1) {
      fVar1 = fVar8 * fVar3 + fVar7 * fVar2 + (1.0 - (fVar2 + fVar3));
      *param_5 = fVar1 * fVar5 + fVar8 * fVar4 + fVar7 * fVar6 + -(fVar6 + fVar4 + fVar5);
      fVar7 = fVar8;
      param_5 = param_5 + 1;
    }
    param_3[1] = fVar7;
    *param_3 = fVar8;
    return;
  }
  fVar2 = 1.0 - fVar3;
  fVar6 = -(fVar4 + fVar5);
  if (param_6 == '\0') {
    fVar1 = *param_3;
    for (; param_7 != 0; param_7 = param_7 - 1) {
      fVar7 = fVar4 * fVar1;
      fVar1 = fVar1 * fVar3 + fVar2;
      *param_5 = fVar1 * fVar5 + fVar7 + fVar6;
      param_5 = param_5 + 1;
    }
    *param_3 = fVar1;
    return;
  }
  if ((fVar3 == 0.0) && (fVar4 == 0.0)) {
    if (fVar5 == 1.0) {
      uVar12 = param_7;
      pfVar9 = param_5;
      if (param_5 != param_4) {
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pfVar9 = *param_4;
          param_4 = param_4 + 1;
          pfVar9 = pfVar9 + 1;
        }
        *param_3 = param_5[param_7 - 1];
        return;
      }
    }
    else {
      (**(code **)(*DAT_010daa0c + 0xc))(param_5,param_4,fVar5,param_7);
    }
    *param_3 = param_5[param_7 - 1];
    return;
  }
  fVar1 = *param_3;
  uVar12 = 0;
  if (3 < (int)param_7) {
    iVar11 = (param_7 - 4 >> 2) + 1;
    uVar12 = iVar11 * 4;
    pfVar9 = param_4;
    pfVar10 = param_5;
    do {
      param_4 = pfVar9 + 4;
      param_5 = pfVar10 + 4;
      iVar11 = iVar11 + -1;
      fVar7 = fVar1 * fVar3 + *pfVar9 + fVar2;
      *pfVar10 = fVar5 * fVar7 + fVar4 * fVar1 + fVar6;
      fVar1 = fVar7 * fVar3 + pfVar9[1] + fVar2;
      pfVar10[1] = fVar1 * fVar5 + fVar4 * fVar7 + fVar6;
      fVar7 = fVar1 * fVar3 + pfVar9[2] + fVar2;
      pfVar10[2] = fVar7 * fVar5 + fVar1 * fVar4 + fVar6;
      fVar1 = fVar7 * fVar3 + pfVar9[3] + fVar2;
      pfVar10[3] = fVar5 * fVar1 + fVar7 * fVar4 + fVar6;
      pfVar9 = param_4;
      pfVar10 = param_5;
    } while (iVar11 != 0);
  }
  if (uVar12 < param_7) {
    iVar11 = param_7 - uVar12;
    do {
      fVar7 = fVar4 * fVar1;
      iVar11 = iVar11 + -1;
      fVar1 = fVar1 * fVar3 + *param_4 + fVar2;
      *param_5 = fVar1 * fVar5 + fVar7 + fVar6;
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
    } while (iVar11 != 0);
  }
  *param_3 = fVar1;
  return;
}


//// FUNCTION FUN_00c662e0 @ 00c662e0 ////

void __thiscall
FUN_00c662e0(void *this,float param_1,float param_2,float param_3,float param_4,int param_5)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 local_8;
  
  if (50.0 < param_1) {
    param_1 = 50.0;
  }
  if (50.0 < param_3) {
    param_3 = 50.0;
  }
  if (param_1 < 1e-05) {
    param_1 = 1e-05;
  }
  if (param_3 < 1e-05) {
    param_3 = 1e-05;
  }
  local_8 = 1.0;
  fVar1 = SQRT(param_2 * param_4);
  if (param_1 == 1.0) {
    fVar2 = (float10)param_5;
    if (param_5 < 0) {
      fVar2 = fVar2 + (float10)4.2949673e+09;
    }
    fVar4 = (float10)1.4426950408889634 *
            ((SQRT((float10)fVar1 * (float10)param_2) * (float10)-3.1415927) / fVar2);
    fVar3 = ROUND(fVar4);
    fVar4 = (float10)f2xm1(fVar4 - fVar3);
    fVar4 = (float10)fscale((float10)1 + fVar4,fVar3);
    fVar3 = fVar4;
  }
  else {
    fVar2 = (float10)param_5;
    if (param_5 < 0) {
      fVar2 = fVar2 + (float10)4.2949673e+09;
    }
    fVar4 = (float10)1.4426950408889634 *
            ((((float10)SQRT(fVar1 * param_2) / (float10)SQRT(param_1)) * (float10)-3.1415927) /
            fVar2);
    fVar3 = ROUND(fVar4);
    fVar4 = (float10)f2xm1(fVar4 - fVar3);
    fVar3 = (float10)fscale((float10)1 + fVar4,fVar3);
    fVar5 = (float10)1.4426950408889634 *
            (((float10)SQRT(fVar1 * param_2) * (float10)SQRT(param_1) * (float10)-3.1415927) / fVar2
            );
    fVar4 = ROUND(fVar5);
    fVar5 = (float10)f2xm1(fVar5 - fVar4);
    fVar4 = (float10)fscale((float10)1 + fVar5,fVar4);
  }
  param_1 = (float)fVar3;
  if (param_3 == 1.0) {
    fVar3 = (float10)1.4426950408889634 *
            ((SQRT((float10)fVar1 * (float10)param_4) * (float10)-3.1415927) / fVar2);
    fVar2 = ROUND(fVar3);
    fVar3 = (float10)f2xm1(fVar3 - fVar2);
    fVar3 = (float10)fscale((float10)1 + fVar3,fVar2);
    fVar2 = fVar3;
  }
  else {
    fVar5 = (float10)1.4426950408889634 *
            ((SQRT((float10)fVar1 * (float10)param_4) * SQRT((float10)param_3) * (float10)-3.1415927
             ) / fVar2);
    fVar3 = ROUND(fVar5);
    fVar5 = (float10)f2xm1(fVar5 - fVar3);
    fVar3 = (float10)fscale((float10)1 + fVar5,fVar3);
    fVar5 = (float10)1.4426950408889634 *
            (((SQRT((float10)fVar1 * (float10)param_4) / SQRT((float10)param_3)) *
             (float10)-3.1415927) / fVar2);
    fVar2 = ROUND(fVar5);
    fVar5 = (float10)f2xm1(fVar5 - fVar2);
    fVar5 = (float10)fscale((float10)1 + fVar5,fVar2);
    local_8 = -((1.0 - (float)fVar3) / ((float)fVar5 - 1.0));
    fVar2 = (float10)(float)fVar3;
    fVar3 = (float10)(float)fVar5;
  }
  *(undefined4 *)((int)this + 4) = 0x3f800000;
  *(float *)((int)this + 0x10) = local_8;
  *(float *)((int)this + 8) = (float)(fVar2 + (float10)param_1);
  *(float *)((int)this + 0xc) = (float)-(fVar2 * (float10)param_1);
  *(float *)((int)this + 0x14) = (float)-(((float10)(float)fVar4 + fVar3) * (float10)local_8);
  *(float *)((int)this + 0x18) = (float)(fVar3 * (float10)(float)fVar4 * (float10)local_8);
  return;
}


//// FUNCTION FUN_00c66540 @ 00c66540 ////

void __thiscall FUN_00c66540(void *this,int param_1,float param_2,int param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 4) = 0x3f800000;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0x3f800000;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    return;
  }
  fVar2 = (float10)FUN_00ace9b0();
  fVar2 = fVar2 * (float10)param_2;
  fVar1 = (float)param_3;
  if (param_3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  if ((float10)(fVar1 * 0.495) < fVar2) {
    fVar2 = (float10)(fVar1 * 0.495);
  }
  *(undefined4 *)((int)this + 4) = 0x3f800000;
  fVar2 = (float10)fptan((fVar2 * (float10)3.1415927) / (float10)fVar1);
  fVar3 = fVar2 * fVar2;
  fVar2 = fVar2 * (float10)1.4142135 + fVar3 + (float10)1.0;
  fVar1 = (float)(((float10)1.0 - fVar3) / fVar2);
  fVar3 = (fVar3 + fVar3) / (fVar2 * fVar2);
  fVar2 = (((float10)1.0 - (float10)fVar1) * ((float10)1.0 - (float10)fVar1) + fVar3) *
          (float10)0.25;
  *(float *)((int)this + 8) = fVar1 + fVar1;
  *(float *)((int)this + 0xc) = (float)-((float10)fVar1 * (float10)fVar1 + fVar3);
  *(float *)((int)this + 0x10) = (float)fVar2;
  *(float *)((int)this + 0x14) = (float)(fVar2 + fVar2);
  *(float *)((int)this + 0x18) = (float)fVar2;
  return;
}


//// FUNCTION FUN_00c66640 @ 00c66640 ////

void __thiscall FUN_00c66640(void *this,float param_1,float param_2,int param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_1 != 0.0) {
    fVar2 = (float10)FUN_00ace9b0();
    fVar2 = fVar2 * (float10)param_2;
    fVar1 = (float)param_3;
    if (param_3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if ((float10)(fVar1 * 0.495) < fVar2) {
      fVar2 = (float10)(fVar1 * 0.495);
    }
    fVar2 = (float10)fcos((fVar2 * (float10)6.2831855) / (float10)fVar1);
    fVar4 = ((float10)1.0 - (float10)0.5 * fVar2) / (fVar2 - (float10)0.5);
    fVar2 = SQRT(fVar4 * fVar4 - (float10)1.0);
    fVar3 = fVar4 - fVar2;
    param_1 = (float)fVar3;
    if (((float10)1.0 < fVar3) || (param_1 < -1.0)) {
      param_1 = (float)(fVar2 + fVar4);
    }
    fVar1 = 2.0 / (param_1 + 1.0);
    if (10.0 < fVar1) {
      fVar1 = 10.0;
    }
    *(float *)((int)this + 0x10) = fVar1;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(float *)((int)this + 0x14) = -fVar1;
    *(undefined4 *)((int)this + 4) = 0x3f800000;
    *(float *)((int)this + 8) = param_1;
    return;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 4) = 0x3f800000;
  *(undefined4 *)((int)this + 0x10) = 0x3f800000;
  return;
}


//// FUNCTION FUN_00c66770 @ 00c66770 ////

void __thiscall
FUN_00c66770(void *this,int *param_1,float *param_2,float *param_3,char param_4,uint param_5)

{
  FUN_00c65fa0((int)(param_1 + 1),(float *)(param_1 + 4),(float *)((int)this + 4),param_2,param_3,
               param_4,param_5);
  if (*param_1 != 0x3f800000) {
    (**(code **)(*DAT_010daa0c + 0x10))(param_3,*param_1,param_5);
  }
  return;
}


//// FUNCTION FUN_00c667c0 @ 00c667c0 ////

void __thiscall
FUN_00c667c0(void *this,float *param_1,float *param_2,float *param_3,float *param_4,char param_5,
            float *param_6,float *param_7)

{
  int iVar1;
  float unaff_ESI;
  float *pfVar2;
  float *pfVar3;
  undefined1 auStack_220 [4];
  float local_21c;
  float *local_218;
  float *local_214;
  float local_210 [131];
  
  if (param_7 == (float *)0x200) {
    *(undefined4 *)((int)this + 0xc) = 0x3f800000;
    *(undefined4 *)((int)this + 0x10) = 0x3f800000;
  }
  local_218 = (float *)((int)this + 0xc);
  FUN_00c65fa0((int)(param_2 + 1),param_2 + 4,local_218,param_3,local_210,param_5,(uint)param_6);
  local_214 = (float *)((int)this + 4);
  FUN_00c65fa0((int)(param_1 + 1),param_1 + 4,local_214,param_3,param_4,param_5,(uint)param_6);
  local_21c = (float)(int)param_7;
  if ((int)param_7 < 0) {
    local_21c = local_21c + 4.2949673e+09;
  }
  local_21c = local_21c * 0.001953125;
  pfVar3 = param_4;
  (**(code **)(*DAT_010daa0c + 8))(param_4,local_21c * *param_1,*param_1 * -0.001953125,param_6);
  pfVar2 = param_6;
  (**(code **)(*DAT_010daa0c + 8))(auStack_220,(1.0 - unaff_ESI) * *param_2,*param_2 * 0.001953125);
  (**(code **)(*DAT_010daa0c + 0x14))(param_4,&stack0xfffffdd0,param_6);
  if (param_7 <= param_6) {
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    *pfVar3 = *pfVar2;
    pfVar3[1] = pfVar2[1];
  }
  return;
}


//// FUNCTION FUN_00c66970 @ 00c66970 ////

undefined4 FUN_00c66970(void)

{
  float fVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  uint unaff_EBX;
  
  if (unaff_EBX < 4) {
LAB_00c66978:
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
  if ((unaff_EBX & 1) != 0) {
    fVar1 = (float)(int)unaff_EBX;
    uVar3 = 3;
    if ((int)unaff_EBX < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    while( true ) {
      iVar2 = (int)ROUND(SQRT(fVar1) - 0.5);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      in_EAX = iVar2 + 1;
      if (in_EAX <= uVar3) goto LAB_00c66978;
      in_EAX = unaff_EBX / uVar3;
      if (unaff_EBX % uVar3 == 0) break;
      uVar3 = uVar3 + 2;
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00c669f0 @ 00c669f0 ////

void __fastcall FUN_00c669f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad510;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00c66a90 @ 00c66a90 ////

void __fastcall FUN_00c66a90(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_00c66aa0 @ 00c66aa0 ////

void __fastcall FUN_00c66aa0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)(param_1 + 8);
  iVar4 = 2;
  do {
    if ((undefined4 *)*puVar3 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)*puVar3;
      for (uVar1 = puVar3[1] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    puVar3[2] = 0;
    puVar3 = puVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


//// FUNCTION FUN_00c66ae0 @ 00c66ae0 ////

void __thiscall FUN_00c66ae0(void *this,int param_1,int *param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar4 = (undefined4 *)*param_2;
  if (puVar4 == (undefined4 *)0x0) {
    uVar5 = (uint)(param_1 * 0x41b) / 48000 | 1;
    uVar2 = FUN_00c66970();
    cVar1 = (char)uVar2;
    while (cVar1 == '\0') {
      uVar5 = uVar5 + 2;
      uVar2 = FUN_00c66970();
      cVar1 = (char)uVar2;
    }
    *(uint *)((int)this + 0xc) = uVar5;
    uVar5 = (uint)(param_1 * 0x151) / 48000 | 1;
    uVar2 = FUN_00c66970();
    cVar1 = (char)uVar2;
    while (cVar1 == '\0') {
      uVar5 = uVar5 + 2;
      uVar2 = FUN_00c66970();
      cVar1 = (char)uVar2;
    }
    *(uint *)((int)this + 0x1c) = uVar5;
  }
  else {
    *(undefined4 **)((int)this + 8) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      for (uVar5 = *(uint *)((int)this + 0xc) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    *(undefined4 *)((int)this + 0x10) = 0;
    puVar4 = (undefined4 *)(*param_2 + *(int *)((int)this + 0xc) * 4);
    *param_2 = (int)puVar4;
    *(undefined4 **)((int)this + 0x18) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      for (uVar5 = *(uint *)((int)this + 0x1c) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    *(undefined4 *)((int)this + 0x20) = 0;
    *param_2 = *param_2 + *(int *)((int)this + 0x1c) * 4;
  }
  *param_3 = *param_3 + (*(int *)((int)this + 0x1c) + *(int *)((int)this + 0xc)) * 4;
  return;
}


//// FUNCTION FUN_00c66bd0 @ 00c66bd0 ////

void __thiscall FUN_00c66bd0(void *this,float *param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  if (3 < (int)param_2) {
    iVar8 = (param_2 - 4 >> 2) + 1;
    uVar6 = iVar8 * 4;
    pfVar5 = param_1;
    do {
      pfVar1 = (float *)(*(int *)((int)this + 8) + *(int *)((int)this + 0x10) * 4);
      fVar3 = *pfVar1;
      fVar4 = fVar3 * 0.7 + *pfVar5;
      *pfVar1 = fVar4;
      iVar7 = *(int *)((int)this + 0x10) + 1;
      *(int *)((int)this + 0x10) = iVar7;
      if (iVar7 == *(int *)((int)this + 0xc)) {
        *(undefined4 *)((int)this + 0x10) = 0;
      }
      fVar2 = *(float *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x20) * 4);
      fVar3 = fVar2 * 0.7 + (fVar3 - fVar4 * 0.7);
      *(float *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x20) * 4) = fVar3;
      iVar7 = *(int *)((int)this + 0x20) + 1;
      *(int *)((int)this + 0x20) = iVar7;
      if (iVar7 == *(int *)((int)this + 0x1c)) {
        *(undefined4 *)((int)this + 0x20) = 0;
      }
      *pfVar5 = fVar2 - fVar3 * 0.7;
      pfVar1 = (float *)(*(int *)((int)this + 8) + *(int *)((int)this + 0x10) * 4);
      fVar3 = *pfVar1;
      fVar4 = fVar3 * 0.7 + pfVar5[1];
      *pfVar1 = fVar4;
      iVar7 = *(int *)((int)this + 0x10) + 1;
      *(int *)((int)this + 0x10) = iVar7;
      if (iVar7 == *(int *)((int)this + 0xc)) {
        *(undefined4 *)((int)this + 0x10) = 0;
      }
      fVar2 = *(float *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x20) * 4);
      fVar3 = fVar2 * 0.7 + (fVar3 - fVar4 * 0.7);
      *(float *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x20) * 4) = fVar3;
      iVar7 = *(int *)((int)this + 0x20) + 1;
      *(int *)((int)this + 0x20) = iVar7;
      if (iVar7 == *(int *)((int)this + 0x1c)) {
        *(undefined4 *)((int)this + 0x20) = 0;
      }
      pfVar5[1] = fVar2 - fVar3 * 0.7;
      pfVar1 = (float *)(*(int *)((int)this + 8) + *(int *)((int)this + 0x10) * 4);
      fVar3 = *pfVar1;
      fVar4 = fVar3 * 0.7 + pfVar5[2];
      *pfVar1 = fVar4;
      iVar7 = *(int *)((int)this + 0x10) + 1;
      *(int *)((int)this + 0x10) = iVar7;
      if (iVar7 == *(int *)((int)this + 0xc)) {
        *(undefined4 *)((int)this + 0x10) = 0;
      }
      fVar2 = *(float *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x20) * 4);
      fVar3 = fVar2 * 0.7 + (fVar3 - fVar4 * 0.7);
      *(float *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x20) * 4) = fVar3;
      iVar7 = *(int *)((int)this + 0x20) + 1;
      *(int *)((int)this + 0x20) = iVar7;
      if (iVar7 == *(int *)((int)this + 0x1c)) {
        *(undefined4 *)((int)this + 0x20) = 0;
      }
      pfVar5[2] = fVar2 - fVar3 * 0.7;
      pfVar1 = (float *)(*(int *)((int)this + 8) + *(int *)((int)this + 0x10) * 4);
      fVar3 = *pfVar1;
      fVar4 = fVar3 * 0.7 + pfVar5[3];
      *pfVar1 = fVar4;
      iVar7 = *(int *)((int)this + 0x10) + 1;
      *(int *)((int)this + 0x10) = iVar7;
      if (iVar7 == *(int *)((int)this + 0xc)) {
        *(undefined4 *)((int)this + 0x10) = 0;
      }
      fVar2 = *(float *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x20) * 4);
      fVar3 = fVar2 * 0.7 + (fVar3 - fVar4 * 0.7);
      *(float *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x20) * 4) = fVar3;
      iVar7 = *(int *)((int)this + 0x20) + 1;
      *(int *)((int)this + 0x20) = iVar7;
      if (iVar7 == *(int *)((int)this + 0x1c)) {
        *(undefined4 *)((int)this + 0x20) = 0;
      }
      param_1 = pfVar5 + 4;
      iVar8 = iVar8 + -1;
      pfVar5[3] = fVar2 - fVar3 * 0.7;
      pfVar5 = param_1;
    } while (iVar8 != 0);
  }
  if (uVar6 < param_2) {
    iVar8 = param_2 - uVar6;
    do {
      pfVar5 = (float *)(*(int *)((int)this + 8) + *(int *)((int)this + 0x10) * 4);
      fVar3 = *pfVar5;
      fVar4 = fVar3 * 0.7 + *param_1;
      *pfVar5 = fVar4;
      iVar7 = *(int *)((int)this + 0x10) + 1;
      *(int *)((int)this + 0x10) = iVar7;
      if (iVar7 == *(int *)((int)this + 0xc)) {
        *(undefined4 *)((int)this + 0x10) = 0;
      }
      fVar2 = *(float *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x20) * 4);
      fVar3 = fVar2 * 0.7 + (fVar3 - fVar4 * 0.7);
      *(float *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x20) * 4) = fVar3;
      iVar7 = *(int *)((int)this + 0x20) + 1;
      *(int *)((int)this + 0x20) = iVar7;
      if (iVar7 == *(int *)((int)this + 0x1c)) {
        *(undefined4 *)((int)this + 0x20) = 0;
      }
      iVar8 = iVar8 + -1;
      *param_1 = fVar2 - fVar3 * 0.7;
      param_1 = param_1 + 1;
    } while (iVar8 != 0);
  }
  return;
}


//// FUNCTION FUN_00c66e90 @ 00c66e90 ////

void __fastcall FUN_00c66e90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad510;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00c66ea0 @ 00c66ea0 ////

undefined4 * __fastcall FUN_00c66ea0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad514;
  _eh_vector_constructor_iterator_(param_1 + 1,0x10,2,FUN_00c669f0,FUN_00c66e90);
  return param_1;
}


//// FUNCTION FUN_00c66ed0 @ 00c66ed0 ////

void __fastcall FUN_00c66ed0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad514;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  _eh_vector_destructor_iterator_(param_1 + 1,0x10,2,FUN_00c66e90);
  return;
}


//// FUNCTION FUN_00c66f30 @ 00c66f30 ////

undefined4 * __thiscall FUN_00c66f30(void *this,byte param_1)

{
  FUN_00c66ed0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c66fc0 @ 00c66fc0 ////

undefined4 * __fastcall FUN_00c66fc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05de8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c65ec0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00dad518;
  FUN_00c65ec0(param_1 + 4);
  param_1[4] = &PTR_FUN_00da70a8;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c67020 @ 00c67020 ////

undefined4 * __thiscall FUN_00c67020(void *this,byte param_1)

{
  FUN_00c3b2f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c67040 @ 00c67040 ////

void __thiscall FUN_00c67040(void *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  
  if (*param_2 != 0) {
    *(int *)((int)this + 0x90) = param_1;
    iVar4 = (int)this + 4;
    iVar3 = 3;
    do {
      FUN_00c65f70(iVar4);
      iVar4 = iVar4 + 0x14;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)((int)this + 0x94) = *param_4;
  *param_4 = *param_4 + 1;
  fVar2 = (float)*(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  iVar4 = (int)ROUND(fVar2 - 0.5);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1;
  }
  this_00 = (void *)((int)this + 0x40);
  iVar3 = 2;
  do {
    FUN_00c83400(this_00,iVar4,param_2,param_3,*param_4);
    iVar1 = *param_4;
    this_00 = (void *)((int)this_00 + 0x28);
    iVar3 = iVar3 + -1;
    *param_4 = iVar1 + 1;
  } while (iVar3 != 0);
  *(int *)((int)this + 0x98) = iVar1 + 1;
  return;
}


//// FUNCTION FUN_00c67100 @ 00c67100 ////

void __fastcall FUN_00c67100(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar2 = param_1 + 4;
  iVar4 = 3;
  do {
    FUN_00c65f70(iVar2);
    iVar2 = iVar2 + 0x14;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = (undefined4 *)(param_1 + 0x44);
  iVar2 = 2;
  do {
    puVar5 = (undefined4 *)*puVar3;
    for (uVar1 = puVar3[1] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_00c65f70((int)(puVar3 + 3));
    puVar3 = puVar3 + 10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_00c67150 @ 00c67150 ////

void __thiscall FUN_00c67150(void *this,int param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = *param_3;
  if ((uint)param_3[2] < param_4) {
    iVar5 = param_3[1] - param_4;
  }
  else {
    iVar5 = -param_4;
  }
  uVar2 = param_3[2] + iVar5;
  uVar7 = *(uint *)(param_2 + param_1 * 4);
  if (uVar2 < uVar7) {
    iVar5 = param_3[1] - uVar7;
  }
  else {
    iVar5 = -uVar7;
  }
  uVar7 = uVar2 + iVar5;
  uVar6 = ((uint)((param_1 + 1) * *(int *)(*(int *)((int)this + 0x90) + 0x14)) >> 2) + 3 +
          *(int *)(*(int *)((int)this + 0x90) + 0x10) & 0xfffffffc;
  if (uVar2 < uVar6) {
    iVar5 = param_3[1] - uVar6;
  }
  else {
    iVar5 = -uVar6;
  }
  uVar2 = uVar2 + iVar5;
  uVar6 = param_3[1];
  if ((uVar2 + param_4 < uVar6) && (uVar7 + param_4 < uVar6)) {
    FUN_00c66770((void *)((int)this + param_1 * 0x14 + 4),(int *)(param_1 * 0x1c + 0xc + param_2),
                 (float *)(iVar1 + uVar7 * 4),(float *)(iVar1 + uVar2 * 4),'\x01',param_4);
    return;
  }
  do {
    uVar4 = param_4;
    if (uVar6 < uVar7 + param_4) {
      uVar4 = uVar6 - uVar7;
    }
    uVar3 = param_4;
    if (uVar6 < uVar2 + param_4) {
      uVar3 = uVar6 - uVar2;
    }
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    FUN_00c66770((void *)((int)this + param_1 * 0x14 + 4),(int *)(param_1 * 0x1c + 0xc + param_2),
                 (float *)(iVar1 + uVar7 * 4),(float *)(iVar1 + uVar2 * 4),'\x01',uVar3);
    uVar6 = param_3[1];
    uVar4 = uVar3 + uVar7;
    if (uVar6 <= uVar4) {
      uVar4 = uVar7 + (uVar3 - uVar6);
    }
    uVar7 = uVar3 + uVar2;
    if (uVar6 <= uVar7) {
      uVar7 = uVar2 + (uVar3 - uVar6);
    }
    param_4 = param_4 - uVar3;
    uVar2 = uVar7;
    uVar7 = uVar4;
  } while (param_4 != 0);
  return;
}


//// FUNCTION FUN_00c672b0 @ 00c672b0 ////

void __thiscall
FUN_00c672b0(void *this,int param_1,int param_2,int param_3,int *param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float local_210 [131];
  
  if ((float *)param_4[2] < param_5) {
    iVar3 = param_4[1] - (int)param_5;
  }
  else {
    iVar3 = -(int)param_5;
  }
  uVar4 = param_4[2] + iVar3;
  fVar1 = (float)(int)param_6;
  if ((int)param_6 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  uVar2 = *(uint *)(param_2 + param_1 * 4);
  if (uVar4 < uVar2) {
    iVar3 = param_4[1] - uVar2;
  }
  else {
    iVar3 = -uVar2;
  }
  FUN_00c67ff0(DAT_010daa0c,local_210,param_4,uVar4 + iVar3,fVar1 * 0.001953125,0xbb000000,
               (int)param_5);
  uVar2 = *(uint *)(param_3 + param_1 * 4);
  if (uVar4 < uVar2) {
    iVar3 = param_4[1] - uVar2;
  }
  else {
    iVar3 = -uVar2;
  }
  FUN_00c68270(DAT_010daa0c,local_210,param_4,uVar4 + iVar3,1.0 - fVar1 * 0.001953125,0x3b000000,
               (int)param_5);
  FUN_00c667c0((void *)((int)this + param_1 * 0x14 + 4),(float *)(param_1 * 0x1c + 0xc + param_2),
               (float *)(param_1 * 0x1c + 0xc + param_3),local_210,local_210,'\x01',param_5,param_6)
  ;
  uVar2 = ((uint)((param_1 + 1) * *(int *)(*(int *)((int)this + 0x90) + 0x14)) >> 2) +
          *(int *)(*(int *)((int)this + 0x90) + 0x10);
  if (uVar4 < uVar2) {
    iVar3 = param_4[1] - uVar2;
  }
  else {
    iVar3 = -uVar2;
  }
  FUN_00c67ef0(param_4,uVar4 + iVar3,local_210,(int)param_5);
  if (param_6 <= param_5) {
    *(undefined4 *)(param_2 + param_1 * 4) = *(undefined4 *)(param_3 + param_1 * 4);
  }
  return;
}


//// FUNCTION FUN_00c67410 @ 00c67410 ////

undefined4 * __fastcall FUN_00c67410(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05e1e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c65ec0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00dad51c;
  _eh_vector_constructor_iterator_(param_1 + 1,0x14,3,FUN_00c3afc0,FUN_00c3afe0);
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_constructor_iterator_(param_1 + 0x10,0x28,2,FUN_00c66fc0,FUN_00c3b2f0);
  param_1[0x24] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c67490 @ 00c67490 ////

undefined4 * __thiscall FUN_00c67490(void *this,byte param_1)

{
  FUN_00c3bca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c674b0 @ 00c674b0 ////

void __thiscall
FUN_00c674b0(void *this,int param_1,int *param_2,undefined4 *param_3,int param_4,float *param_5)

{
  float *pfVar1;
  void *this_00;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  uVar2 = 0;
  do {
    FUN_00c67150(this,uVar2,param_1,param_2,(uint)param_5);
    uVar2 = uVar2 + 1;
    pfVar1 = param_5;
    puVar3 = param_3;
  } while (uVar2 < 3);
  for (; pfVar1 != (float *)0x0; pfVar1 = (float *)((int)pfVar1 + -1)) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar2 = 0;
  this_00 = (void *)((int)this + 0x40);
  puVar4 = (uint *)(param_1 + 0x60);
  do {
    FUN_00c83490(this_00,puVar4,param_2,(int)param_3,
                 *(undefined4 *)(param_4 + (uVar2 % *(uint *)(*(int *)((int)this + 0x90) + 4)) * 4),
                 param_5);
    uVar2 = uVar2 + 1;
    puVar4 = puVar4 + 0xf;
    this_00 = (void *)((int)this_00 + 0x28);
  } while (uVar2 < 2);
  return;
}


//// FUNCTION FUN_00c67540 @ 00c67540 ////

void __thiscall
FUN_00c67540(void *this,int param_1,int param_2,int *param_3,float *param_4,int param_5,int param_6,
            float *param_7,float *param_8)

{
  float *pfVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  float *pfVar6;
  uint *puVar7;
  void *this_00;
  
  pfVar1 = param_7;
  uVar5 = 0;
  pfVar6 = param_4;
  if (param_6 == *(int *)((int)this + 0x94)) {
    do {
      FUN_00c672b0(this,uVar5,param_1,param_2,param_3,param_7,param_8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
  }
  else {
    do {
      FUN_00c67150(this,uVar5,param_1,param_3,(uint)param_7);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
  }
  for (; param_7 != (float *)0x0; param_7 = (float *)((int)param_7 + -1)) {
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 1;
  }
  this_00 = (void *)((int)this + 0x40);
  param_7 = (float *)0x0;
  puVar3 = (uint *)(param_1 + 0x60);
  do {
    uVar5 = (uint)param_7 % *(uint *)(*(int *)((int)this + 0x90) + 4);
    if (param_6 == *(int *)((int)this_00 + 0x24)) {
      puVar4 = (uint *)((param_2 - param_1) + (int)puVar3);
      FUN_00c83640(this_00,puVar3,puVar4,param_3,param_4,*(undefined4 *)(param_5 + uVar5 * 4),pfVar1
                   ,param_8);
      if (param_8 <= pfVar1) {
        puVar7 = puVar3;
        for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
      }
    }
    else {
      FUN_00c83490(this_00,puVar3,param_3,(int)param_4,*(undefined4 *)(param_5 + uVar5 * 4),pfVar1);
    }
    param_7 = (float *)((int)param_7 + 1);
    this_00 = (void *)((int)this_00 + 0x28);
    puVar3 = puVar3 + 0xf;
  } while (param_7 < (float *)0x2);
  return;
}


//// FUNCTION FUN_00c676c0 @ 00c676c0 ////

void __thiscall
FUN_00c676c0(void *this,undefined4 param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  
  if (*param_3 != 0) {
    *(undefined4 *)((int)this + 0xa4) = param_1;
  }
  *(int *)((int)this + 0xa8) = *param_5;
  uVar2 = 0;
  this_00 = (void *)((int)this + 4);
  do {
    FUN_00c839b0(this_00,*(int *)(param_2 + uVar2 * 4),param_3,param_4,*param_5);
    iVar1 = *param_5;
    uVar2 = uVar2 + 1;
    this_00 = (void *)((int)this_00 + 0x28);
    *param_5 = iVar1 + 1;
  } while (uVar2 < 4);
  *(int *)((int)this + 0xac) = iVar1 + 1;
  return;
}


//// FUNCTION FUN_00c67730 @ 00c67730 ////

void __fastcall FUN_00c67730(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)(param_1 + 0x1c);
  iVar3 = 4;
  do {
    puVar5 = (undefined4 *)*puVar4;
    for (uVar1 = puVar4[1] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_00c65f70((int)(puVar4 + -5));
    puVar4 = puVar4 + 10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


//// FUNCTION FUN_00c67770 @ 00c67770 ////

void __thiscall
FUN_00c67770(void *this,int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  float *pfVar3;
  void *pvStack_840;
  float *pfStack_83c;
  int local_838;
  void *pvStack_834;
  int aiStack_830 [4];
  int aiStack_820 [4];
  float afStack_810 [515];
  
  iVar1 = (**(code **)*DAT_010daa0c)();
  if (iVar1 == 1) {
    this_00 = (void *)((int)this + 4);
    pvStack_840 = (void *)(param_1 + 0x10);
    pfStack_83c = afStack_810;
    uVar2 = 0;
    do {
      *(void **)((int)aiStack_830 + uVar2) = pvStack_840;
      *(int *)((int)aiStack_820 + uVar2) = (int)this_00 + 8;
      FUN_00c83e30(this_00,pfStack_83c,param_5);
      pvStack_840 = (void *)((int)pvStack_840 + 0x30);
      uVar2 = uVar2 + 4;
      pfStack_83c = pfStack_83c + 0x80;
      this_00 = (void *)((int)this_00 + 0x28);
    } while (uVar2 < 0x10);
    FUN_00c83150(afStack_810,afStack_810,aiStack_820,aiStack_830,param_5);
    uVar2 = 0;
    pfStack_83c = (float *)param_1;
    pfVar3 = afStack_810;
    do {
      FUN_00c83e50((int)pfStack_83c,param_2,pfVar3,
                   *(undefined4 *)(param_4 + (uVar2 % *(uint *)((int)this + 0xa4)) * 4),param_5);
      uVar2 = uVar2 + 1;
      pfStack_83c = (float *)((int)pfStack_83c + 0x30);
      pfVar3 = pfVar3 + 0x80;
    } while (uVar2 < 4);
  }
  else {
    pvStack_840 = (void *)((int)this + 4);
    uVar2 = 0;
    pfStack_83c = (float *)param_1;
    pfVar3 = afStack_810;
    do {
      FUN_00c83a40(pvStack_840,(int)pfStack_83c,param_2,pfVar3,
                   *(undefined4 *)(param_4 + (uVar2 % *(uint *)((int)this + 0xa4)) * 4),param_5);
      uVar2 = uVar2 + 1;
      pfStack_83c = (float *)((int)pfStack_83c + 0x30);
      pvStack_840 = (void *)((int)pvStack_840 + 0x28);
      pfVar3 = pfVar3 + 0x80;
    } while (uVar2 < 4);
  }
  pvStack_834 = (void *)((int)this + 4);
  pfVar3 = (float *)&DAT_00dad520;
  local_838 = 4;
  do {
    FUN_00c83d90(pvStack_834,(int)afStack_810,param_3,pfVar3,param_5);
    pfVar3 = pfVar3 + 4;
    pvStack_834 = (void *)((int)pvStack_834 + 0x28);
    local_838 = local_838 + -1;
  } while (local_838 != 0);
  return;
}


//// FUNCTION FUN_00c67920 @ 00c67920 ////

void __thiscall
FUN_00c67920(void *this,float *param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,
            float *param_7,float *param_8)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  void *this_00;
  void *this_01;
  uint local_820;
  float local_810 [515];
  
  this_01 = (void *)((int)this + 4);
  iVar1 = param_2 - (int)param_1;
  local_820 = 0;
  pfVar3 = local_810;
  this_00 = this_01;
  do {
    uVar2 = local_820 % *(uint *)((int)this + 0xa4);
    if (param_6 == *(int *)((int)this_00 + 0x24)) {
      FUN_00c83b40(this_00,param_1,(float *)(iVar1 + (int)param_1),param_3,pfVar3,
                   *(undefined4 *)(param_5 + uVar2 * 4),param_7,param_8);
    }
    else {
      FUN_00c83a40(this_00,(int)param_1,param_3,pfVar3,*(undefined4 *)(param_5 + uVar2 * 4),
                   (uint)param_7);
    }
    local_820 = local_820 + 1;
    pfVar3 = pfVar3 + 0x80;
    param_1 = param_1 + 0xc;
    this_00 = (void *)((int)this_00 + 0x28);
  } while (local_820 < 4);
  pfVar3 = (float *)&DAT_00dad520;
  iVar1 = 4;
  do {
    FUN_00c83d90(this_01,(int)local_810,param_4,pfVar3,(uint)param_7);
    pfVar3 = pfVar3 + 4;
    this_01 = (void *)((int)this_01 + 0x28);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


//// FUNCTION FUN_00c67a10 @ 00c67a10 ////

void __thiscall FUN_00c67a10(void *this,uint param_1,int *param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    *param_2 = iVar2 + param_1 * 4;
    *(int *)((int)this + 4) = iVar2;
    *(uint *)((int)this + 8) = param_1;
    *(undefined4 *)((int)this + 0xc) = 0;
    puVar3 = *(undefined4 **)((int)this + 4);
    for (uVar1 = param_1 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(undefined4 *)((int)this + 0x10) = param_4;
    *param_3 = *param_3 + param_1 * 4;
    return;
  }
  *param_3 = *param_3 + param_1 * 4;
  return;
}


//// FUNCTION FUN_00c67a80 @ 00c67a80 ////

void __thiscall
FUN_00c67a80(void *this,uint *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  uint uVar5;
  uint uVar6;
  undefined4 local_210 [131];
  
  uVar1 = *(uint *)((int)this + 0xc);
  uVar5 = param_1[2];
  if (uVar1 < uVar5) {
    iVar4 = *(int *)((int)this + 8) - uVar5;
  }
  else {
    iVar4 = -uVar5;
  }
  if ((uint)param_2[2] < param_5) {
    iVar3 = param_2[1] - param_5;
  }
  else {
    iVar3 = -param_5;
  }
  uVar6 = param_2[2] + iVar3;
  uVar5 = *param_1;
  if (uVar6 < uVar5) {
    iVar3 = param_2[1] - uVar5;
  }
  else {
    iVar3 = -uVar5;
  }
  FUN_00c68110(DAT_010daa0c,param_3,param_2,uVar6 + iVar3,param_5);
  FUN_00c67f70(DAT_010daa0c,local_210,(int *)((int)this + 4),uVar1 + iVar4,param_1[3],param_5);
  uVar5 = 0;
  do {
    uVar2 = param_1[uVar5];
    if (uVar6 < uVar2) {
      iVar4 = param_2[1] - uVar2;
    }
    else {
      iVar4 = -uVar2;
    }
    FUN_00c68110(DAT_010daa0c,local_210,param_2,uVar6 + iVar4,param_5);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  FUN_00c67ef0((int *)((int)this + 4),uVar1,local_210,param_5);
  (**(code **)(*DAT_010daa0c + 0x1c))(param_4,local_210,param_1[4],param_5);
  if (uVar1 + param_5 < *(uint *)(unaff_EBX + 8)) {
    *(uint *)(unaff_EBX + 0xc) = uVar1 + param_5;
    return;
  }
  *(uint *)(unaff_EBX + 0xc) = (uVar1 - *(uint *)(unaff_EBX + 8)) + param_5;
  return;
}


//// FUNCTION FUN_00c67bb0 @ 00c67bb0 ////

void __thiscall
FUN_00c67bb0(void *this,uint *param_1,uint *param_2,int *param_3,float *param_4,float *param_5,
            uint param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  uint *local_14;
  uint *local_10;
  
  puVar11 = param_1;
  iVar3 = *(int *)((int)this + 4);
  puVar4 = *(uint **)((int)this + 0xc);
  iVar5 = *param_3;
  puVar16 = (uint *)param_1[2];
  if (puVar4 < puVar16) {
    iVar17 = *(int *)((int)this + 8) - (int)puVar16;
  }
  else {
    iVar17 = -(int)puVar16;
  }
  puVar15 = (uint *)((int)puVar4 + iVar17);
  puVar16 = (uint *)param_2[2];
  if (puVar4 < puVar16) {
    iVar17 = *(int *)((int)this + 8) - (int)puVar16;
  }
  else {
    iVar17 = -(int)puVar16;
  }
  puVar16 = (uint *)((int)puVar4 + iVar17);
  if ((uint)param_3[2] < param_6) {
    iVar17 = param_3[1] - param_6;
  }
  else {
    iVar17 = -param_6;
  }
  uVar13 = param_3[2] + iVar17;
  fVar7 = (float)(int)param_7;
  if ((int)param_7 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  fVar7 = fVar7 * 0.001953125;
  fVar8 = 1.0 - fVar7;
  uVar10 = param_6;
  if (param_7 < param_6) {
    uVar10 = param_7;
  }
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    uVar14 = *puVar11;
    if (uVar13 < uVar14) {
      iVar17 = param_3[1] - uVar14;
    }
    else {
      iVar17 = -uVar14;
    }
    uVar14 = *param_2;
    if (uVar13 < uVar14) {
      iVar12 = param_3[1] - uVar14;
    }
    else {
      iVar12 = -uVar14;
    }
    fVar1 = *(float *)(iVar5 + (uVar13 + iVar17) * 4);
    fVar2 = *(float *)(iVar5 + (uVar13 + iVar12) * 4);
    *param_4 = fVar1 * fVar7 + fVar2 * fVar8 + *param_4;
    uVar14 = puVar11[1];
    if (uVar13 < uVar14) {
      iVar17 = param_3[1] - uVar14;
    }
    else {
      iVar17 = -uVar14;
    }
    uVar14 = param_2[1];
    if (uVar13 < uVar14) {
      iVar12 = param_3[1] - uVar14;
    }
    else {
      iVar12 = -uVar14;
    }
    fVar9 = *(float *)(iVar3 + (int)puVar15 * 4) * (float)puVar11[3] +
            fVar1 + *(float *)(iVar5 + (uVar13 + iVar17) * 4);
    fVar1 = *(float *)(iVar3 + (int)puVar16 * 4) * (float)param_2[3] +
            fVar2 + *(float *)(iVar5 + (uVar13 + iVar12) * 4);
    *(float *)(iVar3 + (int)puVar4 * 4) = fVar9 * fVar7 + fVar1 * fVar8;
    local_10 = (uint *)((int)puVar15 + 1);
    *param_5 = fVar1 * (float)param_2[4] * fVar8 + fVar9 * (float)puVar11[4] * fVar7 + *param_5;
    puVar6 = *(uint **)((int)this + 8);
    if (puVar6 <= local_10) {
      local_10 = (uint *)((int)puVar15 + (1 - (int)puVar6));
    }
    param_1 = (uint *)((int)puVar16 + 1);
    if (puVar6 <= param_1) {
      param_1 = (uint *)((int)puVar16 + (1 - (int)puVar6));
    }
    local_14 = (uint *)((int)puVar4 + 1);
    if (puVar6 <= local_14) {
      local_14 = (uint *)((int)puVar4 + (1 - (int)puVar6));
    }
    uVar14 = uVar13 + 1;
    if ((uint)param_3[1] <= uVar14) {
      uVar14 = uVar13 + (1 - param_3[1]);
    }
    if (0.001953125 < fVar7) {
      fVar8 = fVar8 + 0.001953125;
      fVar7 = fVar7 - 0.001953125;
    }
    puVar4 = local_14;
    param_4 = param_4 + 1;
    param_5 = param_5 + 1;
    uVar13 = uVar14;
    puVar16 = param_1;
    puVar15 = local_10;
  }
  *(uint **)((int)this + 0xc) = puVar4;
  if (param_7 <= param_6) {
    *puVar11 = *param_2;
    puVar11[1] = param_2[1];
    puVar11[2] = param_2[2];
    puVar11[3] = param_2[3];
    puVar11[4] = param_2[4];
  }
  return;
}


//// FUNCTION FUN_00c67e70 @ 00c67e70 ////

void FUN_00c67e70(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((uint)(param_3 + param_4) <= (uint)param_2[1]) {
    puVar4 = (undefined4 *)(*param_2 + param_3 * 4);
    for (; param_4 != 0; param_4 = param_4 + -1) {
      *param_1 = *puVar4;
      puVar4 = puVar4 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  uVar1 = param_2[1] - param_3;
  puVar4 = (undefined4 *)(*param_2 + param_3 * 4);
  puVar5 = param_1;
  for (uVar2 = uVar1 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  puVar4 = (undefined4 *)*param_2;
  puVar5 = param_1 + uVar1;
  for (uVar2 = param_4 - uVar1 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return;
}


//// FUNCTION FUN_00c67ef0 @ 00c67ef0 ////

void FUN_00c67ef0(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((uint)(param_2 + param_4) <= (uint)param_1[1]) {
    puVar4 = (undefined4 *)(*param_1 + param_2 * 4);
    for (; param_4 != 0; param_4 = param_4 + -1) {
      *puVar4 = *param_3;
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 1;
    }
    return;
  }
  uVar1 = param_1[1] - param_2;
  puVar4 = param_3;
  puVar5 = (undefined4 *)(*param_1 + param_2 * 4);
  for (uVar2 = uVar1 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  puVar4 = param_3 + uVar1;
  puVar5 = (undefined4 *)*param_1;
  for (uVar2 = param_4 - uVar1 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return;
}


//// FUNCTION FUN_00c67f70 @ 00c67f70 ////

void __thiscall
FUN_00c67f70(void *this,undefined4 param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  
  if ((uint)(param_3 + param_5) <= (uint)param_2[1]) {
    (**(code **)(*(int *)this + 0xc))(param_1,*param_2 + param_3 * 4,param_4,param_5);
    return;
  }
  iVar1 = param_2[1] - param_3;
  (**(code **)(*(int *)this + 0xc))(param_1,*param_2 + param_3 * 4,param_4,iVar1);
  (**(code **)(*(int *)this + 0xc))(unaff_EDI + iVar1 * 4,*param_2,unaff_retaddr,param_5 - iVar1);
  return;
}


//// FUNCTION FUN_00c67ff0 @ 00c67ff0 ////

void __thiscall
FUN_00c67ff0(void *this,undefined4 param_1,int *param_2,int param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  int iVar1;
  int unaff_EBX;
  float unaff_EBP;
  int unaff_EDI;
  float unaff_retaddr;
  
  if ((uint)(param_3 + param_6) <= (uint)param_2[1]) {
    (**(code **)(*(int *)this + 4))(param_1,*param_2 + param_3 * 4,param_4,param_5,param_6);
    return;
  }
  iVar1 = param_2[1] - param_3;
  (**(code **)(*(int *)this + 4))(param_1,*param_2 + param_3 * 4,param_4,param_5,iVar1);
  (**(code **)(*(int *)this + 4))
            (unaff_EBX + iVar1 * 4,*param_2,(float)unaff_EDI * unaff_retaddr + unaff_EBP,
             unaff_retaddr,param_6 - iVar1);
  return;
}


//// FUNCTION FUN_00c68110 @ 00c68110 ////

void __thiscall FUN_00c68110(void *this,undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_ESI;
  
  if ((uint)(param_3 + param_4) <= (uint)param_2[1]) {
    (**(code **)(*(int *)this + 0x14))(param_1,*param_2 + param_3 * 4,param_4);
    return;
  }
  iVar1 = param_2[1] - param_3;
  (**(code **)(*(int *)this + 0x14))(param_1,*param_2 + param_3 * 4,iVar1);
  (**(code **)(*(int *)this + 0x14))(unaff_ESI + iVar1 * 4,*param_2,param_4 - iVar1);
  return;
}


//// FUNCTION FUN_00c68180 @ 00c68180 ////

void __thiscall FUN_00c68180(void *this,int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int unaff_retaddr;
  
  if ((uint)(param_2 + param_4) <= (uint)param_1[1]) {
    (**(code **)(*(int *)this + 0x14))(*param_1 + param_2 * 4,param_3,param_4);
    return;
  }
  iVar1 = param_1[1] - param_2;
  (**(code **)(*(int *)this + 0x14))(*param_1 + param_2 * 4,param_3,iVar1);
  (**(code **)(*(int *)this + 0x14))(*param_1,unaff_retaddr + iVar1 * 4,param_4 - iVar1);
  return;
}


//// FUNCTION FUN_00c681f0 @ 00c681f0 ////

void __thiscall
FUN_00c681f0(void *this,undefined4 param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  
  if ((uint)(param_3 + param_5) <= (uint)param_2[1]) {
    (**(code **)(*(int *)this + 0x1c))(param_1,*param_2 + param_3 * 4,param_4,param_5);
    return;
  }
  iVar1 = param_2[1] - param_3;
  (**(code **)(*(int *)this + 0x1c))(param_1,*param_2 + param_3 * 4,param_4,iVar1);
  (**(code **)(*(int *)this + 0x1c))(unaff_EDI + iVar1 * 4,*param_2,unaff_retaddr,param_5 - iVar1);
  return;
}


//// FUNCTION FUN_00c68270 @ 00c68270 ////

void __thiscall
FUN_00c68270(void *this,undefined4 param_1,int *param_2,int param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  int iVar1;
  int unaff_EBX;
  float unaff_EBP;
  int unaff_EDI;
  float unaff_retaddr;
  
  if ((uint)(param_3 + param_6) <= (uint)param_2[1]) {
    (**(code **)(*(int *)this + 0x18))(param_1,*param_2 + param_3 * 4,param_4,param_5,param_6);
    return;
  }
  iVar1 = param_2[1] - param_3;
  (**(code **)(*(int *)this + 0x18))(param_1,*param_2 + param_3 * 4,param_4,param_5,iVar1);
  (**(code **)(*(int *)this + 0x18))
            (unaff_EBX + iVar1 * 4,*param_2,(float)unaff_EDI * unaff_retaddr + unaff_EBP,
             unaff_retaddr,param_6 - iVar1);
  return;
}


//// FUNCTION FUN_00c68310 @ 00c68310 ////

void FUN_00c68310(float *param_1,float *param_2,float param_3,float *param_4,float *param_5,
                 uint param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  
  fVar2 = *(float *)((int)param_3 + 8);
  fVar3 = *(float *)((int)param_3 + 4);
  fVar1 = param_5[1];
  fVar4 = *param_4;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar9 = 1.0 - (fVar2 + fVar3);
  param_3 = *param_5;
  uVar14 = 0;
  fVar10 = -(fVar6 + fVar5 + fVar4);
  if (3 < (int)param_6) {
    iVar13 = (param_6 - 4 >> 2) + 1;
    uVar14 = iVar13 * 4;
    pfVar11 = param_1;
    pfVar12 = param_2;
    do {
      param_1 = pfVar11 + 4;
      param_2 = pfVar12 + 4;
      iVar13 = iVar13 + -1;
      fVar8 = param_3 * fVar3 + fVar1 * fVar2 + *pfVar12 + fVar9;
      *pfVar11 = fVar8 * fVar4 + param_3 * fVar5 + fVar1 * fVar6 + fVar10;
      fVar7 = fVar8 * fVar3 + param_3 * fVar2 + pfVar12[1] + fVar9;
      pfVar11[1] = fVar7 * fVar4 + fVar8 * fVar5 + param_3 * fVar6 + fVar10;
      fVar1 = fVar7 * fVar3 + fVar8 * fVar2 + pfVar12[2] + fVar9;
      pfVar11[2] = fVar1 * fVar4 + fVar7 * fVar5 + fVar8 * fVar6 + fVar10;
      param_3 = fVar1 * fVar3 + fVar7 * fVar2 + pfVar12[3] + fVar9;
      pfVar11[3] = param_3 * fVar4 + fVar1 * fVar5 + fVar7 * fVar6 + fVar10;
      pfVar11 = param_1;
      pfVar12 = param_2;
    } while (iVar13 != 0);
  }
  if (uVar14 < param_6) {
    iVar13 = param_6 - uVar14;
    do {
      iVar13 = iVar13 + -1;
      fVar7 = param_3 * fVar3 + fVar1 * fVar2 + *param_2 + fVar9;
      *param_1 = fVar7 * fVar4 + param_3 * fVar5 + fVar1 * fVar6 + fVar10;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      fVar1 = param_3;
      param_3 = fVar7;
    } while (iVar13 != 0);
  }
  param_5[1] = fVar1;
  *param_5 = param_3;
  return;
}


//// FUNCTION FUN_00c68540 @ 00c68540 ////

void __thiscall FUN_00c68540(void *this,int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  fVar1 = (float)param_1;
  if (param_1 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar2 = (int)ROUND(fVar1 * 0.25 - 0.5);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  uVar4 = iVar2 + 3U & 0xfffffffc;
  if (*param_2 != 0) {
    *(int *)((int)this + 4) = *param_2;
    *(uint *)((int)this + 8) = uVar4;
    *(undefined4 *)((int)this + 0xc) = 0;
    puVar5 = *(undefined4 **)((int)this + 4);
    for (uVar3 = iVar2 + 3U & 0x3ffffffc; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(undefined4 *)((int)this + 0x10) = param_4;
    *param_2 = *param_2 + uVar4 * 4;
    *param_3 = *param_3 + uVar4 * 4;
    return;
  }
  *param_3 = *param_3 + uVar4 * 4;
  return;
}


//// FUNCTION FUN_00c685f0 @ 00c685f0 ////

void __thiscall
FUN_00c685f0(void *this,uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_210 [524];
  
  uVar4 = *param_1;
  uVar2 = *(uint *)((int)this + 0xc);
  if (uVar2 < uVar4) {
    iVar3 = *(int *)((int)this + 8) - uVar4;
  }
  else {
    iVar3 = -uVar4;
  }
  piVar1 = (int *)((int)this + 4);
  FUN_00c67f70(DAT_010daa0c,local_210,piVar1,uVar2 + iVar3,param_1[1],param_4);
  FUN_00c67ef0(piVar1,uVar2,param_2,param_4);
  FUN_00c68180(DAT_010daa0c,piVar1,uVar2,local_210,param_4);
  if ((float)param_1[2] != 0.0) {
    (**(code **)(*DAT_010daa0c + 0x1c))(param_3,local_210,param_1[2],param_4);
  }
  uVar4 = *(int *)((int)this + 0xc) + param_4;
  *(uint *)((int)this + 0xc) = uVar4;
  if (*(uint *)((int)this + 8) <= uVar4) {
    *(uint *)((int)this + 0xc) = uVar4 - *(uint *)((int)this + 8);
  }
  return;
}


//// FUNCTION FUN_00c686b0 @ 00c686b0 ////

void __thiscall
FUN_00c686b0(void *this,uint *param_1,uint *param_2,undefined4 *param_3,undefined4 param_4,
            uint param_5,uint param_6)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_210 [524];
  
  uVar6 = *(uint *)((int)this + 0xc);
  uVar2 = *param_1;
  if (uVar6 < uVar2) {
    iVar5 = *(int *)((int)this + 8) - uVar2;
  }
  else {
    iVar5 = -uVar2;
  }
  uVar2 = *param_2;
  if (uVar6 < uVar2) {
    iVar7 = *(int *)((int)this + 8) - uVar2;
  }
  else {
    iVar7 = -uVar2;
  }
  fVar3 = (float)(int)param_6;
  if ((int)param_6 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  piVar1 = (int *)((int)this + 4);
  FUN_00c67ff0(DAT_010daa0c,local_210,piVar1,uVar6 + iVar5,fVar3 * 0.001953125 * (float)param_1[1],
               (float)param_1[1] * -0.001953125,param_5);
  FUN_00c68270(DAT_010daa0c,local_210,piVar1,uVar6 + iVar7,
               (1.0 - fVar3 * 0.001953125) * (float)param_2[1],(float)param_2[1] * 0.001953125,
               param_5);
  FUN_00c67ef0(piVar1,uVar6,param_3,param_5);
  FUN_00c68180(DAT_010daa0c,piVar1,uVar6,local_210,param_5);
  fVar3 = ((float)param_2[2] - (float)param_1[2]) * 0.001953125;
  fVar4 = (float)(int)(0x200 - param_6);
  if ((int)(0x200 - param_6) < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  (**(code **)(*DAT_010daa0c + 0x18))
            (param_4,local_210,fVar4 * fVar3 + (float)param_1[2],fVar3,param_5);
  uVar6 = *(int *)((int)this + 0xc) + param_5;
  *(uint *)((int)this + 0xc) = uVar6;
  if (*(uint *)((int)this + 8) <= uVar6) {
    *(uint *)((int)this + 0xc) = uVar6 - *(uint *)((int)this + 8);
  }
  if (param_6 <= param_5) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}


//// FUNCTION FUN_00c68860 @ 00c68860 ////

void __thiscall FUN_00c68860(void *this,int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  fVar1 = (float)param_1;
  if (param_1 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar3 = (int)ROUND(fVar1 * 0.5 - 0.5);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 1;
  }
  uVar4 = iVar3 + 3U & 0xfffffffc;
  if (*param_2 != 0) {
    *(int *)((int)this + 4) = *param_2;
    *(uint *)((int)this + 8) = uVar4;
    *(undefined4 *)((int)this + 0xc) = 0;
    puVar5 = *(undefined4 **)((int)this + 4);
    for (uVar2 = iVar3 + 3U & 0x3ffffffc; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(undefined4 *)((int)this + 0x14) = param_4;
    *(undefined4 *)((int)this + 0x10) = 0;
    *param_2 = *param_2 + uVar4 * 4;
    *param_3 = *param_3 + uVar4 * 4;
    return;
  }
  *param_3 = *param_3 + uVar4 * 4;
  return;
}


//// FUNCTION FUN_00c68920 @ 00c68920 ////

void __thiscall FUN_00c68920(void *this,float *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  float local_1c;
  
  puVar2 = *(undefined4 **)((int)this + 4);
  uVar11 = *(uint *)((int)this + 0xc);
  uVar4 = param_4;
  if (*(uint *)((int)this + 8) < uVar11 + param_4) {
    uVar4 = *(uint *)((int)this + 8) - uVar11;
  }
  puVar8 = param_2;
  puVar10 = puVar2 + uVar11;
  for (uVar5 = uVar4 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  if (uVar4 < param_4) {
    puVar8 = param_2 + uVar4;
    puVar10 = puVar2;
    for (uVar5 = param_4 - uVar4 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
  }
  if (*param_1 <= 1.0) {
    local_1c = 1.0;
  }
  else {
    local_1c = 1.0 / *param_1;
  }
  uVar4 = 0;
  if (param_4 == 0) {
    *(uint *)((int)this + 0xc) = uVar11;
    return;
  }
  do {
    fVar1 = *(float *)((int)this + 0x10);
    if (0.25 <= *(float *)((int)this + 0x10)) {
      fVar1 = (8.0 - fVar1 * 8.0) * *(float *)((int)this + 0x10) - 1.0;
    }
    else {
      fVar1 = fVar1 * fVar1 * 8.0;
    }
    fVar3 = (float)(int)uVar11;
    if ((int)uVar11 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    param_2 = (undefined4 *)(fVar3 - fVar1 * param_1[1]);
    if ((float)param_2 < 0.0) {
      fVar1 = (float)*(int *)((int)this + 8);
      if (*(int *)((int)this + 8) < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      param_2 = (undefined4 *)(fVar1 + (float)param_2);
    }
    fVar1 = (float)param_2 - 0.5;
    iVar6 = (int)ROUND(fVar1);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 1;
    }
    iVar6 = iVar6 + -1;
    iVar7 = (int)ROUND(fVar1);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 1;
    }
    if (iVar6 == -1) {
      iVar6 = *(int *)((int)this + 8) + -1;
    }
    iVar9 = (int)ROUND(fVar1);
    if (iVar9 < 0) {
      iVar9 = iVar9 + 1;
    }
    *(float *)(param_3 + uVar4 * 4) =
         ((float)param_2 - (float)iVar9) * (float)puVar2[iVar7] +
         (1.0 - ((float)param_2 - (float)iVar9)) * (float)puVar2[iVar6];
    fVar1 = local_1c + *(float *)((int)this + 0x10);
    *(float *)((int)this + 0x10) = fVar1;
    if (0.75 <= fVar1) {
      *(float *)((int)this + 0x10) = fVar1 - 1.0;
    }
    uVar5 = uVar11 + 1;
    if (*(uint *)((int)this + 8) <= uVar5) {
      uVar5 = uVar11 + (1 - *(uint *)((int)this + 8));
    }
    uVar4 = uVar4 + 1;
    uVar11 = uVar5;
  } while (uVar4 < param_4);
  *(uint *)((int)this + 0xc) = uVar5;
  return;
}


//// FUNCTION FUN_00c68b40 @ 00c68b40 ////

void __thiscall
FUN_00c68b40(void *this,float *param_1,float *param_2,undefined4 *param_3,int param_4,uint param_5,
            uint param_6)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  float local_3c;
  float local_34;
  
  puVar2 = *(undefined4 **)((int)this + 4);
  uVar15 = *(uint *)((int)this + 0xc);
  uVar7 = param_5;
  if (*(uint *)((int)this + 8) < uVar15 + param_5) {
    uVar7 = *(uint *)((int)this + 8) - uVar15;
  }
  puVar14 = param_3;
  puVar16 = puVar2 + uVar15;
  for (uVar8 = uVar7 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar16 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar16 = puVar16 + 1;
  }
  for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined1 *)puVar16 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  if (uVar7 < param_5) {
    puVar14 = param_3 + uVar7;
    puVar16 = puVar2;
    for (uVar8 = param_5 - uVar7 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
    }
    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined1 *)puVar16 = *(undefined1 *)puVar14;
      puVar14 = (undefined4 *)((int)puVar14 + 1);
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    }
  }
  fVar1 = (float)(int)param_6;
  if ((int)param_6 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  param_3 = (undefined4 *)(fVar1 * 0.001953125);
  uVar8 = 0;
  local_3c = 1.0 - (float)param_3;
  local_34 = 1.0 / (local_3c * *param_2 + (float)param_3 * *param_1);
  uVar7 = uVar15;
  if (param_5 != 0) {
    do {
      fVar1 = *(float *)((int)this + 0x10);
      if (0.25 <= *(float *)((int)this + 0x10)) {
        fVar1 = (8.0 - fVar1 * 8.0) * *(float *)((int)this + 0x10) - 1.0;
      }
      else {
        fVar1 = fVar1 * fVar1 * 8.0;
      }
      fVar3 = (float)(int)uVar7;
      if ((int)uVar7 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      fVar4 = fVar3 - fVar1 * param_1[1];
      if (fVar3 < fVar1 * param_1[1]) {
        fVar5 = (float)*(int *)((int)this + 8);
        if (*(int *)((int)this + 8) < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar4 = fVar5 + fVar4;
      }
      fVar5 = fVar4 - 0.5;
      iVar9 = (int)ROUND(fVar5);
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      iVar9 = iVar9 + -1;
      iVar10 = (int)ROUND(fVar5);
      if (iVar10 < 0) {
        iVar10 = iVar10 + 1;
      }
      if (iVar9 == -1) {
        iVar9 = *(int *)((int)this + 8) + -1;
      }
      iVar12 = (int)ROUND(fVar5);
      if (iVar12 < 0) {
        iVar12 = iVar12 + 1;
      }
      fVar5 = fVar3 - fVar1 * param_2[1];
      if (fVar3 < fVar1 * param_2[1]) {
        fVar1 = (float)*(int *)((int)this + 8);
        if (*(int *)((int)this + 8) < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar5 = fVar1 + fVar5;
      }
      fVar1 = fVar5 - 0.5;
      iVar6 = (int)ROUND(fVar1);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      iVar6 = iVar6 + -1;
      iVar11 = (int)ROUND(fVar1);
      if (iVar11 < 0) {
        iVar11 = iVar11 + 1;
      }
      if (iVar6 == -1) {
        iVar6 = *(int *)((int)this + 8) + -1;
      }
      iVar13 = (int)ROUND(fVar1);
      if (iVar13 < 0) {
        iVar13 = iVar13 + 1;
      }
      *(float *)(param_4 + uVar8 * 4) =
           ((fVar4 - (float)iVar12) * (float)puVar2[iVar10] +
           (1.0 - (fVar4 - (float)iVar12)) * (float)puVar2[iVar9]) * (float)param_3 +
           ((fVar5 - (float)iVar13) * (float)puVar2[iVar11] +
           (1.0 - (fVar5 - (float)iVar13)) * (float)puVar2[iVar6]) * local_3c;
      fVar1 = local_34 + *(float *)((int)this + 0x10);
      *(float *)((int)this + 0x10) = fVar1;
      if (0.75 <= fVar1) {
        *(float *)((int)this + 0x10) = fVar1 - 1.0;
      }
      uVar15 = uVar7 + 1;
      if (*(uint *)((int)this + 8) <= uVar15) {
        uVar15 = uVar7 + (1 - *(uint *)((int)this + 8));
      }
      if (0.0 < (float)param_3) {
        param_3 = (undefined4 *)((float)param_3 - 0.001953125);
        local_3c = 1.0 - (float)param_3;
        local_34 = 1.0 / (local_3c * *param_2 + (float)param_3 * *param_1);
      }
      uVar8 = uVar8 + 1;
      uVar7 = uVar15;
    } while (uVar8 < param_5);
  }
  *(uint *)((int)this + 0xc) = uVar15;
  if (param_6 <= param_5) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}


//// FUNCTION FUN_00c68ed0 @ 00c68ed0 ////

undefined4 * __fastcall FUN_00c68ed0(undefined4 *param_1)

{
  FUN_00c65ec0(param_1);
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_00dad560;
  return param_1;
}


//// FUNCTION FUN_00c68f00 @ 00c68f00 ////

void __fastcall FUN_00c68f00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00c0efa0(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


//// FUNCTION FUN_00c69030 @ 00c69030 ////

void __fastcall FUN_00c69030(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad560;
  if (param_1[1] != 0) {
    FUN_00c0efa0(param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  FUN_00c65ef0(param_1);
  return;
}


//// FUNCTION FUN_00c69070 @ 00c69070 ////

undefined4 __fastcall FUN_00c69070(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00c0efa0(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  puVar2 = (undefined4 *)FUN_00c0ef90(*(int *)(param_1 + 0x10) * 3);
  *(undefined4 **)(param_1 + 4) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 8) = (undefined1 *)(iVar1 + (int)puVar2);
  *(undefined1 **)(param_1 + 0xc) = (undefined1 *)((int)puVar2 + iVar1 * 2);
  for (uVar3 = (uint)(iVar1 * 3) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (uVar3 = iVar1 * 3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return 1;
}


//// FUNCTION FUN_00c690e0 @ 00c690e0 ////

undefined4 * __thiscall FUN_00c690e0(void *this,byte param_1)

{
  FUN_00c69030(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c69120 @ 00c69120 ////

float10 __cdecl FUN_00c69120(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fscale((float10)1,ROUND((float10)3.321928 * (float10)param_1));
  fVar2 = (float10)f2xm1((float10)3.321928 * (float10)param_1 -
                         (float10)(float)ROUND((float10)3.321928 * (float10)param_1));
  return (float10)(float)((fVar2 + (float10)1.0) * fVar1);
}


//// FUNCTION FUN_00c69190 @ 00c69190 ////

float10 __cdecl FUN_00c69190(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  if (param_1 < -9999) {
    return (float10)0.0;
  }
  fVar1 = ROUND((float10)3.321928 * (float10)((float)param_1 * 0.0005));
  fVar2 = (float10)fscale((float10)1,fVar1);
  fVar1 = (float10)f2xm1((float10)3.321928 * (float10)((float)param_1 * 0.0005) -
                         (float10)(float)fVar1);
  return (float10)(float)((fVar1 + (float10)1.0) * fVar2);
}


//// FUNCTION FUN_00c69200 @ 00c69200 ////

void __fastcall FUN_00c69200(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


//// FUNCTION FUN_00c69210 @ 00c69210 ////

void __thiscall FUN_00c69210(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x28) = param_1;
  return;
}


//// FUNCTION FUN_00c69290 @ 00c69290 ////

void __thiscall FUN_00c69290(void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  uint local_10;
  int local_c;
  
  fVar1 = (float)*(int *)(*(int *)((int)this + 0x28) + 8);
  if (*(int *)(*(int *)((int)this + 0x28) + 8) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  uVar7 = 0x1c;
  pfVar4 = (float *)(param_1 + 0x98);
  fVar1 = fVar1 * *(float *)(param_2 + 0x10) * 0.14476484;
  fVar3 = (*(float *)(param_2 + 0x14) - 1.0) / (fVar1 * *(float *)(param_2 + 0x14));
  fVar2 = (*(float *)(param_2 + 0x18) - 1.0) / (fVar1 * *(float *)(param_2 + 0x18));
  fVar1 = 1.0 / fVar1;
  do {
    fVar8 = (float10)*(int *)(*(int *)((int)this + 0x28) + uVar7);
    if (*(int *)(*(int *)((int)this + 0x28) + uVar7) < 0) {
      fVar8 = fVar8 + (float10)4.2949673e+09;
    }
    fVar10 = (float10)1.4426950408889634 * -((float10)fVar1 * fVar8);
    fVar9 = ROUND(fVar10);
    fVar10 = (float10)f2xm1(fVar10 - fVar9);
    fVar9 = (float10)fscale((float10)1 + fVar10,fVar9);
    *pfVar4 = (float)fVar9;
    fVar10 = (float10)1.4426950408889634 * (float10)fVar2 * fVar8;
    fVar9 = ROUND(fVar10);
    fVar10 = (float10)f2xm1(fVar10 - fVar9);
    fVar9 = (float10)fscale((float10)1 + fVar10,fVar9);
    fVar10 = (float10)1.4426950408889634 * fVar8 * (float10)fVar3;
    fVar8 = ROUND(fVar10);
    fVar10 = (float10)f2xm1(fVar10 - fVar8);
    fVar8 = (float10)fscale((float10)1 + fVar10,fVar8);
    FUN_00c662e0(pfVar4,(float)fVar8,*(float *)(param_2 + 0x1c),(float)fVar9,
                 *(float *)(param_2 + 0x20),*(int *)(*(int *)((int)this + 0x28) + 8));
    uVar7 = uVar7 + 4;
    pfVar4 = pfVar4 + 0xc;
  } while (uVar7 < 0x2c);
  pfVar4 = (float *)(param_1 + 0x1c0);
  iVar5 = 2;
  do {
    fVar8 = (float10)(int)pfVar4[7];
    if ((int)pfVar4[7] < 0) {
      fVar8 = fVar8 + (float10)4.2949673e+09;
    }
    fVar10 = (float10)1.4426950408889634 * -((float10)fVar1 * fVar8);
    fVar9 = ROUND(fVar10);
    fVar10 = (float10)f2xm1(fVar10 - fVar9);
    fVar9 = (float10)fscale((float10)1 + fVar10,fVar9);
    *pfVar4 = (float)fVar9;
    fVar10 = (float10)1.4426950408889634 * (float10)fVar2 * fVar8;
    fVar9 = ROUND(fVar10);
    fVar10 = (float10)f2xm1(fVar10 - fVar9);
    fVar9 = (float10)fscale((float10)1 + fVar10,fVar9);
    fVar10 = (float10)1.4426950408889634 * fVar8 * (float10)fVar3;
    fVar8 = ROUND(fVar10);
    fVar10 = (float10)f2xm1(fVar10 - fVar8);
    fVar8 = (float10)fscale((float10)1 + fVar10,fVar8);
    FUN_00c662e0(pfVar4,(float)fVar8,*(float *)(param_2 + 0x1c),(float)fVar9,
                 *(float *)(param_2 + 0x20),*(int *)(*(int *)((int)this + 0x28) + 8));
    pfVar4 = pfVar4 + 0xf;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar7 = *(uint *)(*(int *)((int)this + 0x28) + 0x14) >> 2;
  pfVar4 = (float *)(param_1 + 0x154);
  piVar6 = (int *)(param_1 + 0x1ac);
  local_c = 3;
  local_10 = uVar7;
  do {
    iVar5 = (((uint)(piVar6[0xf] + *piVar6) >> 1) - *(int *)(*(int *)((int)this + 0x28) + 0x10)) -
            local_10;
    fVar8 = (float10)iVar5;
    if (iVar5 < 0) {
      fVar8 = fVar8 + (float10)4.2949673e+09;
    }
    fVar10 = (float10)1.4426950408889634 * -((float10)fVar1 * fVar8);
    fVar9 = ROUND(fVar10);
    fVar10 = (float10)f2xm1(fVar10 - fVar9);
    fVar9 = (float10)fscale((float10)1 + fVar10,fVar9);
    *pfVar4 = (float)fVar9;
    fVar10 = (float10)1.4426950408889634 * (float10)fVar2 * fVar8;
    fVar9 = ROUND(fVar10);
    fVar10 = (float10)f2xm1(fVar10 - fVar9);
    fVar9 = (float10)fscale((float10)1 + fVar10,fVar9);
    fVar10 = (float10)1.4426950408889634 * fVar8 * (float10)fVar3;
    fVar8 = ROUND(fVar10);
    fVar10 = (float10)f2xm1(fVar10 - fVar8);
    fVar8 = (float10)fscale((float10)1 + fVar10,fVar8);
    FUN_00c662e0(pfVar4,(float)fVar8,*(float *)(param_2 + 0x1c),(float)fVar9,
                 *(float *)(param_2 + 0x20),*(int *)(*(int *)((int)this + 0x28) + 8));
    local_10 = local_10 + uVar7;
    piVar6 = piVar6 + 1;
    pfVar4 = pfVar4 + 7;
    local_c = local_c + -1;
  } while (local_c != 0);
  fVar8 = (float10)*(int *)(*(int *)((int)this + 0x28) + 8);
  if (*(int *)(*(int *)((int)this + 0x28) + 8) < 0) {
    fVar8 = fVar8 + (float10)4.2949673e+09;
  }
  fVar9 = (float10)1.4426950408889634 *
          -(fVar8 * (float10)*(float *)(param_2 + 0x3c) * (float10)fVar1);
  fVar8 = ROUND(fVar9);
  fVar9 = (float10)f2xm1(fVar9 - fVar8);
  fVar8 = (float10)fscale((float10)1 + fVar9,fVar8);
  *(float *)(param_1 + 0x22c) = (float)fVar8;
  return;
}


//// FUNCTION FUN_00c69570 @ 00c69570 ////

void __thiscall FUN_00c69570(void *this,int param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x24) + *(float *)(param_2 + 0x24);
  *(float *)(param_1 + 0x48) = fVar1 * *(float *)this * 1.05;
  *(float *)(param_1 + 0x5c) = fVar1 * *(float *)((int)this + 4) * 1.14;
  *(float *)(param_1 + 0x70) = fVar1 * *(float *)((int)this + 8) * 0.84;
  *(float *)(param_1 + 0x84) = fVar1 * *(float *)((int)this + 0xc) * 0.93;
  return;
}


//// FUNCTION FUN_00c695c0 @ 00c695c0 ////

void __thiscall FUN_00c695c0(void *this,int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  fVar1 = (float)*(int *)(*(int *)((int)this + 0x28) + 8);
  if (*(int *)(*(int *)((int)this + 0x28) + 8) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar2 = (int)ROUND(fVar1 * *(float *)(param_2 + 0x28) - 0.5);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  puVar5 = (uint *)(param_1 + 0x38);
  puVar6 = (uint *)(param_1 + 0x3c);
  uVar4 = iVar2 + 3U & 0xfffffffc;
  uVar3 = 4;
  do {
    *puVar5 = uVar4;
    iVar2 = *(int *)(*(int *)((int)this + 0x28) + 8);
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    iVar2 = (int)ROUND(fVar1 * (*(float *)(param_2 + 0x30) * 20.0 + 1.0) *
                               *(float *)(&UNK_00dad584 + uVar3) * 0.1 - 0.5);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    *puVar6 = uVar4 + 3 + iVar2 & 0xfffffffc;
    uVar3 = uVar3 + 0x14;
    puVar5 = puVar5 + 5;
    puVar6 = puVar6 + 5;
  } while (uVar3 < 0x54);
  return;
}


//// FUNCTION FUN_00c69690 @ 00c69690 ////

void __thiscall FUN_00c69690(void *this,int param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x2c) * 0.3;
  *(float *)(param_1 + 0xb4) = fVar1 * *(float *)((int)this + 0x10);
  *(float *)(param_1 + 0xe4) = fVar1 * *(float *)((int)this + 0x14);
  *(float *)(param_1 + 0x114) = fVar1 * *(float *)((int)this + 0x18);
  *(float *)(param_1 + 0x144) = fVar1 * *(float *)((int)this + 0x1c);
  *(float *)(param_1 + 0x1e0) = fVar1 * *(float *)((int)this + 0x20);
  *(float *)(param_1 + 0x21c) = fVar1 * *(float *)((int)this + 0x24);
  fVar1 = (2.0 - *(float *)(param_2 + 0x34)) * *(float *)(param_2 + 0x40);
  *(float *)(param_1 + 0x230) = fVar1;
  if (1.0 < fVar1) {
    *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
  }
  return;
}


//// FUNCTION FUN_00c69710 @ 00c69710 ////

void __thiscall FUN_00c69710(void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  fVar1 = *(float *)(param_2 + 0x30);
  fVar2 = *(float *)(param_2 + 0x30);
  puVar6 = (uint *)(param_1 + 0x40);
  uVar4 = 0;
  do {
    puVar6[1] = *(uint *)((int)&DAT_00dad57c + uVar4);
    iVar8 = *(int *)(*(int *)((int)this + 0x28) + 8);
    fVar3 = (float)iVar8;
    if (iVar8 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    iVar8 = (int)ROUND(fVar3 * *(float *)((int)&DAT_00dad580 + uVar4) * (fVar1 * 20.0 + 1.0) * 0.001
                       - 0.5);
    if (iVar8 < 0) {
      iVar8 = iVar8 + 1;
    }
    *puVar6 = iVar8 + 3U & 0xfffffffc;
    uVar4 = uVar4 + 0x14;
    puVar6 = puVar6 + 5;
  } while (uVar4 < 0x50);
  pfVar5 = (float *)&DAT_00dad610;
  puVar6 = (uint *)(param_1 + 0x88);
  iVar8 = 4;
  do {
    iVar10 = 2;
    puVar7 = puVar6;
    do {
      iVar9 = *(int *)(*(int *)((int)this + 0x28) + 8);
      fVar1 = (float)iVar9;
      if (iVar9 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      iVar9 = (int)ROUND(fVar1 * (fVar2 + *pfVar5) - 0.5);
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      *puVar7 = iVar9 + 3U & 0xfffffffc;
      pfVar5 = pfVar5 + 1;
      puVar7 = puVar7 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    puVar6 = puVar6 + 0xc;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return;
}


//// FUNCTION FUN_00c69820 @ 00c69820 ////

void __cdecl FUN_00c69820(float *param_1,int param_2,uint param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  float local_10;
  
  fVar8 = param_4;
  if (param_3 < (uint)param_4) {
    fVar8 = (float)param_3;
  }
  fVar1 = *param_1;
  if (fVar8 == 2.8026e-45) {
    uVar6 = 0;
    if (param_3 != 0) {
      do {
        uVar6 = uVar6 + 2;
        *(float *)(param_2 + -8 + uVar6 * 4) = (1.0 - fVar1) * 0.5;
        *(float *)(param_2 + -4 + uVar6 * 4) = (fVar1 + 1.0) * 0.5;
      } while (uVar6 < param_3);
      return;
    }
  }
  else {
    local_10 = 0.0;
    fVar2 = 0.707 - param_1[2];
    fVar5 = param_1[2] + 0.707;
    fVar2 = fVar2 * fVar2;
    fVar3 = (fVar1 + 0.707) * (fVar1 + 0.707);
    fVar4 = fVar2 + fVar3;
    fVar1 = (0.707 - fVar1) * (0.707 - fVar1);
    fVar2 = fVar1 + fVar2;
    fVar5 = fVar5 * fVar5;
    param_4 = 0.0;
    fVar3 = fVar5 + fVar3;
    fVar5 = fVar5 + fVar1;
    param_1 = (float *)0x0;
    fVar1 = 0.0;
    if (fVar4 == 0.0) {
      param_4 = 1.0;
    }
    else {
      fVar1 = 0.0;
      if (fVar2 == 0.0) {
        param_1 = (float *)0x3f800000;
      }
      else {
        fVar1 = 0.0;
        if (fVar3 == 0.0) {
          local_10 = 1.0;
        }
        else {
          fVar1 = 1.0;
          if (fVar5 != 0.0) {
            fVar4 = 1.0 / fVar4;
            fVar2 = 1.0 / fVar2;
            fVar3 = 1.0 / fVar3;
            fVar5 = 1.0 / fVar5;
            fVar1 = 1.0 / (fVar5 + fVar3 + fVar2 + fVar4);
            param_4 = fVar1 * fVar4;
            param_1 = (float *)(fVar1 * fVar2);
            local_10 = fVar1 * fVar3;
            fVar1 = fVar1 * fVar5;
          }
        }
      }
    }
    uVar6 = 0;
    if (param_3 != 0) {
      pfVar7 = (float *)(param_2 + 8);
      do {
        pfVar7[1] = fVar1;
        pfVar7[-2] = param_4;
        pfVar7[-1] = (float)param_1;
        *pfVar7 = local_10;
        uVar6 = uVar6 + (int)fVar8;
        pfVar7 = pfVar7 + (int)fVar8;
      } while (uVar6 < param_3);
    }
  }
  return;
}


//// FUNCTION FUN_00c69a50 @ 00c69a50 ////

void __thiscall FUN_00c69a50(void *this,int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)*(int *)(*(int *)((int)this + 0x28) + 8);
  if (*(int *)(*(int *)((int)this + 0x28) + 8) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar2 = (int)ROUND(fVar1 * *(float *)(param_2 + 0x3c) - 0.5);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  *(uint *)(param_1 + 0x228) = iVar2 + 3U & 0xfffffffc;
  return;
}


//// FUNCTION FUN_00c69ad0 @ 00c69ad0 ////

void __thiscall FUN_00c69ad0(void *this,int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((int)this + 0x28);
  fVar2 = (float)*(int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 8) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar2 = fVar2 * *(float *)(param_2 + 0x48) * *(float *)(param_2 + 0x44) * 0.035014085;
  fVar3 = (float)*(int *)(iVar1 + 0x18);
  if (*(int *)(iVar1 + 0x18) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  if (fVar3 < fVar2) {
    fVar2 = (float)*(int *)(*(int *)((int)this + 0x28) + 0x18);
    if (*(int *)(*(int *)((int)this + 0x28) + 0x18) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0x224) = fVar2;
    return;
  }
  *(float *)(param_1 + 0x224) = fVar2;
  return;
}


//// FUNCTION FUN_00c69b50 @ 00c69b50 ////

void FUN_00c69b50(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  
  pfVar7 = (float *)&DAT_00dad5f0;
  uVar3 = 4;
  pfVar5 = (float *)(param_1 + 0x90);
  pfVar6 = (float *)(param_1 + 0x94);
  do {
    fVar1 = *pfVar7;
    uVar4 = uVar3 + 8;
    pfVar7 = pfVar7 + 2;
    *pfVar5 = fVar1 * *(float *)(param_2 + 0x34);
    *pfVar6 = *(float *)(param_2 + 0x38) * *(float *)(param_2 + 0x34) *
              *(float *)((int)&DAT_00dad5f0 + uVar3);
    uVar3 = uVar4;
    pfVar5 = pfVar5 + 0xc;
    pfVar6 = pfVar6 + 0xc;
  } while (uVar4 < 0x24);
  fVar1 = 1.0 - *(float *)(param_2 + 0x34);
  fVar2 = fVar1 * *(float *)(param_2 + 0x34);
  fVar2 = fVar2 + fVar2;
  *(float *)(param_1 + 0x1bc) = fVar2;
  *(float *)(param_1 + 0x1b8) = fVar1 * 0.52;
  *(float *)(param_1 + 0x1f8) = fVar2;
  *(float *)(param_1 + 500) = fVar1 * 0.55;
  return;
}


//// FUNCTION FUN_00c69be0 @ 00c69be0 ////

void __thiscall FUN_00c69be0(void *this,int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  uint *puVar12;
  float local_20;
  uint local_1c;
  int local_18;
  
  fVar2 = *(float *)((int)param_2 + 100);
  if (0.90000004 <= fVar2) {
    if (2.5 <= fVar2) {
      local_20 = 1.0;
    }
    else {
      local_20 = (fVar2 - 0.8) * 0.58823526;
    }
  }
  else {
    local_20 = 0.05882354;
  }
  fVar2 = (float)*(int *)(*(int *)((int)this + 0x28) + 8);
  if (*(int *)(*(int *)((int)this + 0x28) + 8) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  iVar6 = (int)ROUND(fVar2 * local_20 - 0.5);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 1;
  }
  iVar8 = *(int *)(*(int *)((int)this + 0x28) + 0x10);
  uVar7 = iVar6 + 3U & 0xfffffffc;
  uVar11 = *(uint *)(*(int *)((int)this + 0x28) + 0x14) >> 2;
  uVar9 = 0;
  fVar2 = (float)iVar8;
  local_1c = 0;
  *(uint *)(param_1 + 0x1dc) = uVar7;
  *(uint *)(param_1 + 0x218) = uVar7;
  param_2 = 0.0;
  if (iVar8 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  do {
    iVar6 = uVar9 * uVar11;
    pfVar10 = (float *)(&DAT_00dad5d0 + uVar9);
    puVar12 = (uint *)(param_1 + 0x1a8 + uVar9 * 4);
    local_18 = 2;
    do {
      fVar3 = (float)*(int *)(*(int *)((int)this + 0x28) + 8);
      if (*(int *)(*(int *)((int)this + 0x28) + 8) < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      uVar7 = (uint)ROUND(fVar3 * (*pfVar10 - param_2) * local_20 - 0.5);
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 1;
      }
      uVar1 = uVar11 - 0x80;
      if (uVar1 < uVar7) {
        uVar7 = uVar1;
      }
      fVar3 = local_20;
      if (uVar9 != 0) {
        fVar3 = 1.0;
      }
      fVar5 = (float)(int)uVar7;
      if ((int)uVar7 < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      fVar4 = (float)iVar6;
      if (iVar6 < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
      }
      iVar8 = (int)ROUND((fVar4 + fVar5 + fVar2 * fVar3) - 0.5);
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1;
      }
      uVar7 = iVar8 + 3U & 0xfffffffc;
      *puVar12 = uVar7;
      if ((uVar9 < 3) && (local_1c < uVar7)) {
        *(uint *)(param_1 + 0x148 + uVar9 * 4) = uVar7;
        local_1c = uVar7;
      }
      pfVar10 = pfVar10 + 4;
      puVar12 = puVar12 + 0xf;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    param_2 = 0.0;
    if (0.0 < (float)(&DAT_00dad5d0)[uVar9]) {
      param_2 = (float)(&DAT_00dad5d0)[uVar9];
    }
    if (param_2 < (float)(&DAT_00dad5e0)[uVar9]) {
      param_2 = (float)(&DAT_00dad5e0)[uVar9];
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  return;
}


//// FUNCTION FUN_00c69e40 @ 00c69e40 ////

void __thiscall FUN_00c69e40(void *this,int param_1)

{
  FUN_00c69820((float *)(param_1 + 0x58),(int)this + 0x10,4,
               *(float *)(*(int *)((int)this + 0x28) + 4));
  FUN_00c69820((float *)(param_1 + 0x58),(int)this + 0x20,2,
               *(float *)(*(int *)((int)this + 0x28) + 4));
  return;
}


//// FUNCTION FUN_00c69e80 @ 00c69e80 ////

void __thiscall FUN_00c69e80(void *this,float *param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  if (*param_2 != 0) {
    if ((*param_2 & 1) != 0) {
      FUN_00c69be0(this,(int)param_1,(float)param_2);
      *param_2 = *param_2 | 0x9106;
    }
    if ((*param_2 & 2) != 0) {
      uVar2 = *param_2 | 4;
      if (uVar2 == 0) {
        FUN_00c69b50((int)param_1,(int)param_2);
      }
      else {
        *param_2 = uVar2;
      }
    }
    if ((*param_2 & 4) != 0) {
      FUN_00c69b50((int)param_1,(int)param_2);
      *param_2 = *param_2 | 0x9000;
    }
    if ((*param_2 & 0x48) != 0) {
      param_1[7] = 1.0;
      FUN_00c66640(param_1 + 7,(float)param_2[2],(float)param_2[7],
                   *(int *)(*(int *)((int)this + 0x28) + 8));
    }
    if ((*param_2 & 0x90) != 0) {
      FUN_00c66540(param_1,param_2[3],(float)param_2[8],*(int *)(*(int *)((int)this + 0x28) + 8));
    }
    if ((*param_2 & 0x20000) != 0) {
      FUN_00c69a50(this,(int)param_1,(int)param_2);
      *param_2 = *param_2 | 0x100;
    }
    if ((*param_2 & 0x40000) != 0) {
      *param_2 = *param_2 | 0x8000;
    }
    if ((*param_2 & 0x718) != 0) {
      FUN_00c69290(this,(int)param_1,(int)param_2);
    }
    if ((*param_2 & 0x80000) != 0) {
      fVar1 = (float)*(int *)(*(int *)((int)this + 0x28) + 8);
      if (*(int *)(*(int *)((int)this + 0x28) + 8) < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      param_1[0x88] = fVar1 * (float)param_2[0x11];
    }
    if ((*param_2 & 0x180000) != 0) {
      FUN_00c69ad0(this,(int)param_1,(int)param_2);
    }
    if ((*param_2 & 0x10000) != 0) {
      FUN_00c69710(this,(int)param_1,(int)param_2);
    }
    if ((*param_2 & 0x12000) != 0) {
      FUN_00c695c0(this,(int)param_1,(int)param_2);
      FUN_00c69710(this,(int)param_1,(int)param_2);
    }
    if ((*param_2 & 0x800) != 0) {
      FUN_00c69820((float *)(param_2 + 0x13),(int)this,4,*(float *)(*(int *)((int)this + 0x28) + 4))
      ;
    }
    if ((*param_2 & 0x1800) != 0) {
      FUN_00c69570(this,(int)param_1,(int)param_2);
    }
    if ((*param_2 & 0x4000) != 0) {
      FUN_00c69e40(this,(int)param_2);
    }
    if ((*param_2 & 0xc000) != 0) {
      FUN_00c69690(this,(int)param_1,(int)param_2);
    }
    if ((*param_2 & 0x20) != 0) {
      fVar3 = FUN_00c69190(param_2[1]);
      *param_1 = (float)fVar3;
    }
    *param_2 = 0;
  }
  return;
}


//// FUNCTION FUN_00c6a060 @ 00c6a060 ////

void __thiscall FUN_00c6a060(void *this,undefined8 *param_1)

{
  *(ulonglong *)this =
       CONCAT44((int)((ulonglong)*(undefined8 *)this >> 0x20) + (int)((ulonglong)*param_1 >> 0x20),
                (int)*(undefined8 *)this + (int)*param_1);
  return;
}


//// FUNCTION FUN_00c6a080 @ 00c6a080 ////

void __thiscall FUN_00c6a080(void *this,undefined8 *param_1,uint param_2)

{
  *param_1 = CONCAT44((int)((ulonglong)*(undefined8 *)this >> 0x20) >> (ulonglong)param_2,
                      (int)*(undefined8 *)this >> (ulonglong)param_2);
  return;
}


//// FUNCTION FUN_00c6a0a0 @ 00c6a0a0 ////

void __thiscall FUN_00c6a0a0(void *this,uint param_1)

{
  *(ulonglong *)this =
       CONCAT44((int)((ulonglong)*(undefined8 *)this >> 0x20) >> (ulonglong)param_1,
                (int)*(undefined8 *)this >> (ulonglong)param_1);
  return;
}


//// FUNCTION FUN_00c6a0c0 @ 00c6a0c0 ////

void __cdecl FUN_00c6a0c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_1 = CONCAT44((int)*param_3,(int)*param_2);
  return;
}


//// FUNCTION FUN_00c6a0e0 @ 00c6a0e0 ////

undefined8 __cdecl FUN_00c6a0e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_1 = CONCAT44((int)((ulonglong)uVar1 >> 0x20),(int)((ulonglong)*param_2 >> 0x20));
  return uVar1;
}


//// FUNCTION FUN_00c6a130 @ 00c6a130 ////

void __cdecl FUN_00c6a130(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = paddsw(*param_2,*param_3);
  *param_1 = uVar1;
  return;
}


//// FUNCTION FUN_00c6a150 @ 00c6a150 ////

void __cdecl FUN_00c6a150(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = pmulhw(*param_2,*param_3);
  *param_1 = uVar1;
  return;
}


//// FUNCTION FUN_00c6a170 @ 00c6a170 ////

void __cdecl FUN_00c6a170(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = pmaddwd(*param_2,*param_3);
  *param_1 = uVar1;
  return;
}


//// FUNCTION FUN_00c6a190 @ 00c6a190 ////

void __cdecl FUN_00c6a190(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = packssdw(*param_2,*param_3);
  *param_1 = uVar1;
  return;
}


//// FUNCTION FUN_00c6a1b0 @ 00c6a1b0 ////

void __cdecl FUN_00c6a1b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_1 = CONCAT44((int)((ulonglong)*param_2 >> 0x20) + (int)((ulonglong)*param_3 >> 0x20),
                      (int)*param_2 + (int)*param_3);
  return;
}


//// FUNCTION FUN_00c6a230 @ 00c6a230 ////

void __cdecl FUN_00c6a230(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  short *psVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = param_3;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)((int)param_3 + (4 - param_2) * 2);
  psVar3 = (short *)(param_1 + 0x30);
  iVar1 = 0x19;
  puVar2 = puVar4;
  do {
    *(short *)puVar2 =
         (short)((int)(*psVar3 * param_4 + (*psVar3 * param_4 >> 0x1f & 0x7fffU)) >> 0xf);
    puVar2 = (undefined4 *)((int)puVar2 + 2);
    psVar3 = psVar3 + -1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = puVar4;
  puVar5 = (undefined4 *)((int)param_3 + (0x25 - param_2) * 2);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  puVar2 = puVar4;
  puVar5 = (undefined4 *)((int)param_3 + (0x46 - param_2) * 2);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  puVar2 = (undefined4 *)((int)param_3 + (0x67 - param_2) * 2);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)puVar4;
  return;
}


//// FUNCTION FUN_00c6a2d0 @ 00c6a2d0 ////

void __cdecl
FUN_00c6a2d0(int param_1,undefined8 *param_2,undefined4 param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  puVar2 = (undefined8 *)(param_1 + -0x40);
  switch(param_3) {
  case 0:
    if (param_4 != 0) {
      puVar2 = (undefined8 *)(param_1 + -0x10);
      do {
        uVar1 = puVar2[1];
        uVar7 = *puVar2;
        uVar8 = puVar2[-1];
        uVar9 = puVar2[-2];
        uVar10 = puVar2[-3];
        uVar11 = puVar2[-4];
        uVar5 = puVar2[-5];
        uVar4 = pmaddwd(uVar1,param_2[7]);
        uVar12 = pmaddwd(uVar7,param_2[6]);
        uVar15 = pmaddwd(uVar8,param_2[5]);
        uVar18 = pmaddwd(uVar9,param_2[4]);
        uVar21 = pmaddwd(uVar10,param_2[3]);
        uVar24 = pmaddwd(uVar11,param_2[2]);
        uVar27 = pmaddwd(uVar5,param_2[1]);
        uVar13 = pmaddwd(uVar1,param_2[0xf]);
        uVar16 = pmaddwd(uVar7,param_2[0xe]);
        uVar19 = pmaddwd(uVar8,param_2[0xd]);
        uVar22 = pmaddwd(uVar9,param_2[0xc]);
        uVar25 = pmaddwd(uVar10,param_2[0xb]);
        uVar28 = pmaddwd(uVar11,param_2[10]);
        uVar30 = pmaddwd(uVar5,param_2[9]);
        uVar14 = pmaddwd(uVar1,param_2[0x17]);
        uVar17 = pmaddwd(uVar7,param_2[0x16]);
        uVar20 = pmaddwd(uVar8,param_2[0x15]);
        uVar23 = pmaddwd(uVar9,param_2[0x14]);
        uVar26 = pmaddwd(uVar10,param_2[0x13]);
        uVar29 = pmaddwd(uVar11,param_2[0x12]);
        uVar31 = pmaddwd(uVar5,param_2[0x11]);
        uVar6 = pmaddwd(uVar1,param_2[0x1f]);
        uVar7 = pmaddwd(uVar7,param_2[0x1e]);
        uVar8 = pmaddwd(uVar8,param_2[0x1d]);
        uVar9 = pmaddwd(uVar9,param_2[0x1c]);
        uVar10 = pmaddwd(uVar10,param_2[0x1b]);
        uVar11 = pmaddwd(uVar11,param_2[0x1a]);
        uVar5 = pmaddwd(uVar5,param_2[0x19]);
        *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) +
                            ((int)uVar30 + (int)uVar28 + (int)uVar25 + (int)uVar22 + (int)uVar19 +
                             (int)uVar16 + (int)uVar13 +
                             (int)((ulonglong)uVar30 >> 0x20) + (int)((ulonglong)uVar28 >> 0x20) +
                             (int)((ulonglong)uVar25 >> 0x20) + (int)((ulonglong)uVar22 >> 0x20) +
                             (int)((ulonglong)uVar19 >> 0x20) + (int)((ulonglong)uVar16 >> 0x20) +
                             (int)((ulonglong)uVar13 >> 0x20) >> 0xe),
                            (int)*param_5 +
                            ((int)uVar27 + (int)uVar24 + (int)uVar21 + (int)uVar18 + (int)uVar15 +
                             (int)uVar12 + (int)uVar4 +
                             (int)((ulonglong)uVar27 >> 0x20) + (int)((ulonglong)uVar24 >> 0x20) +
                             (int)((ulonglong)uVar21 >> 0x20) + (int)((ulonglong)uVar18 >> 0x20) +
                             (int)((ulonglong)uVar15 >> 0x20) + (int)((ulonglong)uVar12 >> 0x20) +
                             (int)((ulonglong)uVar4 >> 0x20) >> 0xe));
        puVar3 = param_5 + 1;
        uVar1 = *puVar3;
        param_5 = param_5 + 2;
        puVar2 = puVar2 + 1;
        param_4 = param_4 + -1;
        *puVar3 = CONCAT44((int)((ulonglong)uVar1 >> 0x20) +
                           ((int)uVar5 + (int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 +
                            (int)uVar7 + (int)uVar6 +
                            (int)((ulonglong)uVar5 >> 0x20) + (int)((ulonglong)uVar11 >> 0x20) +
                            (int)((ulonglong)uVar10 >> 0x20) + (int)((ulonglong)uVar9 >> 0x20) +
                            (int)((ulonglong)uVar8 >> 0x20) + (int)((ulonglong)uVar7 >> 0x20) +
                            (int)((ulonglong)uVar6 >> 0x20) >> 0xe),
                           (int)uVar1 +
                           ((int)uVar31 + (int)uVar29 + (int)uVar26 + (int)uVar23 + (int)uVar20 +
                            (int)uVar17 + (int)uVar14 +
                            (int)((ulonglong)uVar31 >> 0x20) + (int)((ulonglong)uVar29 >> 0x20) +
                            (int)((ulonglong)uVar26 >> 0x20) + (int)((ulonglong)uVar23 >> 0x20) +
                            (int)((ulonglong)uVar20 >> 0x20) + (int)((ulonglong)uVar17 >> 0x20) +
                            (int)((ulonglong)uVar14 >> 0x20) >> 0xe));
      } while (param_4 != 0);
      return;
    }
    break;
  case 1:
    if (param_4 != 0) {
      do {
        uVar1 = puVar2[6];
        uVar7 = puVar2[5];
        uVar8 = puVar2[4];
        uVar9 = puVar2[3];
        uVar10 = puVar2[2];
        uVar11 = puVar2[1];
        uVar4 = pmaddwd(uVar1,param_2[6]);
        uVar13 = pmaddwd(uVar7,param_2[5]);
        uVar15 = pmaddwd(uVar8,param_2[4]);
        uVar18 = pmaddwd(uVar9,param_2[3]);
        uVar21 = pmaddwd(uVar10,param_2[2]);
        uVar24 = pmaddwd(uVar11,param_2[1]);
        uVar29 = pmaddwd(*puVar2,*param_2);
        uVar5 = puVar2[7];
        uVar6 = pmaddwd(uVar5,param_2[0xf]);
        uVar16 = pmaddwd(uVar1,param_2[0xe]);
        uVar19 = pmaddwd(uVar7,param_2[0xd]);
        uVar22 = pmaddwd(uVar8,param_2[0xc]);
        uVar25 = pmaddwd(uVar9,param_2[0xb]);
        uVar27 = pmaddwd(uVar10,param_2[10]);
        uVar30 = pmaddwd(uVar11,param_2[9]);
        uVar14 = pmaddwd(uVar5,param_2[0x17]);
        uVar17 = pmaddwd(uVar1,param_2[0x16]);
        uVar20 = pmaddwd(uVar7,param_2[0x15]);
        uVar23 = pmaddwd(uVar8,param_2[0x14]);
        uVar26 = pmaddwd(uVar9,param_2[0x13]);
        uVar28 = pmaddwd(uVar10,param_2[0x12]);
        uVar31 = pmaddwd(uVar11,param_2[0x11]);
        uVar5 = pmaddwd(uVar5,param_2[0x1f]);
        uVar12 = pmaddwd(uVar1,param_2[0x1e]);
        uVar7 = pmaddwd(uVar7,param_2[0x1d]);
        uVar8 = pmaddwd(uVar8,param_2[0x1c]);
        uVar9 = pmaddwd(uVar9,param_2[0x1b]);
        uVar10 = pmaddwd(uVar10,param_2[0x1a]);
        uVar11 = pmaddwd(uVar11,param_2[0x19]);
        *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) +
                            ((int)uVar30 + (int)uVar27 + (int)uVar25 + (int)uVar22 + (int)uVar19 +
                             (int)uVar16 + (int)uVar6 +
                             (int)((ulonglong)uVar30 >> 0x20) + (int)((ulonglong)uVar27 >> 0x20) +
                             (int)((ulonglong)uVar25 >> 0x20) + (int)((ulonglong)uVar22 >> 0x20) +
                             (int)((ulonglong)uVar19 >> 0x20) + (int)((ulonglong)uVar16 >> 0x20) +
                             (int)((ulonglong)uVar6 >> 0x20) >> 0xe),
                            (int)*param_5 +
                            ((int)uVar29 + (int)uVar24 + (int)uVar21 + (int)uVar18 + (int)uVar15 +
                             (int)uVar13 + (int)uVar4 +
                             (int)((ulonglong)uVar29 >> 0x20) + (int)((ulonglong)uVar24 >> 0x20) +
                             (int)((ulonglong)uVar21 >> 0x20) + (int)((ulonglong)uVar18 >> 0x20) +
                             (int)((ulonglong)uVar15 >> 0x20) + (int)((ulonglong)uVar13 >> 0x20) +
                             (int)((ulonglong)uVar4 >> 0x20) >> 0xe));
        puVar3 = param_5 + 1;
        uVar1 = *puVar3;
        param_5 = param_5 + 2;
        puVar2 = puVar2 + 1;
        param_4 = param_4 + -1;
        *puVar3 = CONCAT44((int)((ulonglong)uVar1 >> 0x20) +
                           ((int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 + (int)uVar7 +
                            (int)uVar12 + (int)uVar5 +
                            (int)((ulonglong)uVar11 >> 0x20) + (int)((ulonglong)uVar10 >> 0x20) +
                            (int)((ulonglong)uVar9 >> 0x20) + (int)((ulonglong)uVar8 >> 0x20) +
                            (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar12 >> 0x20) +
                            (int)((ulonglong)uVar5 >> 0x20) >> 0xe),
                           (int)uVar1 +
                           ((int)uVar31 + (int)uVar28 + (int)uVar26 + (int)uVar23 + (int)uVar20 +
                            (int)uVar17 + (int)uVar14 +
                            (int)((ulonglong)uVar31 >> 0x20) + (int)((ulonglong)uVar28 >> 0x20) +
                            (int)((ulonglong)uVar26 >> 0x20) + (int)((ulonglong)uVar23 >> 0x20) +
                            (int)((ulonglong)uVar20 >> 0x20) + (int)((ulonglong)uVar17 >> 0x20) +
                            (int)((ulonglong)uVar14 >> 0x20) >> 0xe));
      } while (param_4 != 0);
      return;
    }
    break;
  case 2:
    if (param_4 != 0) {
      do {
        uVar1 = puVar2[6];
        uVar7 = puVar2[5];
        uVar8 = puVar2[4];
        uVar9 = puVar2[3];
        uVar10 = puVar2[2];
        uVar11 = puVar2[1];
        uVar5 = pmaddwd(uVar1,param_2[6]);
        uVar14 = pmaddwd(uVar7,param_2[5]);
        uVar16 = pmaddwd(uVar8,param_2[4]);
        uVar19 = pmaddwd(uVar9,param_2[3]);
        uVar22 = pmaddwd(uVar10,param_2[2]);
        uVar25 = pmaddwd(uVar11,param_2[1]);
        uVar28 = pmaddwd(*puVar2,*param_2);
        uVar15 = pmaddwd(uVar1,param_2[0xe]);
        uVar17 = pmaddwd(uVar7,param_2[0xd]);
        uVar20 = pmaddwd(uVar8,param_2[0xc]);
        uVar23 = pmaddwd(uVar9,param_2[0xb]);
        uVar26 = pmaddwd(uVar10,param_2[10]);
        uVar29 = pmaddwd(uVar11,param_2[9]);
        uVar4 = pmaddwd(*puVar2,param_2[8]);
        uVar6 = pmaddwd(puVar2[7],param_2[0x17]);
        uVar18 = pmaddwd(uVar1,param_2[0x16]);
        uVar21 = pmaddwd(uVar7,param_2[0x15]);
        uVar24 = pmaddwd(uVar8,param_2[0x14]);
        uVar27 = pmaddwd(uVar9,param_2[0x13]);
        uVar30 = pmaddwd(uVar10,param_2[0x12]);
        uVar31 = pmaddwd(uVar11,param_2[0x11]);
        uVar12 = pmaddwd(puVar2[7],param_2[0x1f]);
        uVar13 = pmaddwd(uVar1,param_2[0x1e]);
        uVar7 = pmaddwd(uVar7,param_2[0x1d]);
        uVar8 = pmaddwd(uVar8,param_2[0x1c]);
        uVar9 = pmaddwd(uVar9,param_2[0x1b]);
        uVar10 = pmaddwd(uVar10,param_2[0x1a]);
        uVar11 = pmaddwd(uVar11,param_2[0x19]);
        *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) +
                            ((int)uVar4 + (int)uVar29 + (int)uVar26 + (int)uVar23 + (int)uVar20 +
                             (int)uVar17 + (int)uVar15 +
                             (int)((ulonglong)uVar4 >> 0x20) + (int)((ulonglong)uVar29 >> 0x20) +
                             (int)((ulonglong)uVar26 >> 0x20) + (int)((ulonglong)uVar23 >> 0x20) +
                             (int)((ulonglong)uVar20 >> 0x20) + (int)((ulonglong)uVar17 >> 0x20) +
                             (int)((ulonglong)uVar15 >> 0x20) >> 0xe),
                            (int)*param_5 +
                            ((int)uVar28 + (int)uVar25 + (int)uVar22 + (int)uVar19 + (int)uVar16 +
                             (int)uVar14 + (int)uVar5 +
                             (int)((ulonglong)uVar28 >> 0x20) + (int)((ulonglong)uVar25 >> 0x20) +
                             (int)((ulonglong)uVar22 >> 0x20) + (int)((ulonglong)uVar19 >> 0x20) +
                             (int)((ulonglong)uVar16 >> 0x20) + (int)((ulonglong)uVar14 >> 0x20) +
                             (int)((ulonglong)uVar5 >> 0x20) >> 0xe));
        puVar3 = param_5 + 1;
        uVar1 = *puVar3;
        param_5 = param_5 + 2;
        puVar2 = puVar2 + 1;
        param_4 = param_4 + -1;
        *puVar3 = CONCAT44((int)((ulonglong)uVar1 >> 0x20) +
                           ((int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 + (int)uVar7 +
                            (int)uVar13 + (int)uVar12 +
                            (int)((ulonglong)uVar11 >> 0x20) + (int)((ulonglong)uVar10 >> 0x20) +
                            (int)((ulonglong)uVar9 >> 0x20) + (int)((ulonglong)uVar8 >> 0x20) +
                            (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar13 >> 0x20) +
                            (int)((ulonglong)uVar12 >> 0x20) >> 0xe),
                           (int)uVar1 +
                           ((int)uVar31 + (int)uVar30 + (int)uVar27 + (int)uVar24 + (int)uVar21 +
                            (int)uVar18 + (int)uVar6 +
                            (int)((ulonglong)uVar31 >> 0x20) + (int)((ulonglong)uVar30 >> 0x20) +
                            (int)((ulonglong)uVar27 >> 0x20) + (int)((ulonglong)uVar24 >> 0x20) +
                            (int)((ulonglong)uVar21 >> 0x20) + (int)((ulonglong)uVar18 >> 0x20) +
                            (int)((ulonglong)uVar6 >> 0x20) >> 0xe));
      } while (param_4 != 0);
      return;
    }
    break;
  case 3:
    for (; param_4 != 0; param_4 = param_4 + -1) {
      uVar1 = puVar2[6];
      uVar7 = puVar2[5];
      uVar8 = puVar2[4];
      uVar9 = puVar2[3];
      uVar10 = puVar2[2];
      uVar11 = puVar2[1];
      uVar5 = *puVar2;
      uVar4 = pmaddwd(uVar1,param_2[6]);
      uVar12 = pmaddwd(uVar7,param_2[5]);
      uVar16 = pmaddwd(uVar8,param_2[4]);
      uVar19 = pmaddwd(uVar9,param_2[3]);
      uVar22 = pmaddwd(uVar10,param_2[2]);
      uVar25 = pmaddwd(uVar11,param_2[1]);
      uVar28 = pmaddwd(uVar5,*param_2);
      uVar13 = pmaddwd(uVar1,param_2[0xe]);
      uVar17 = pmaddwd(uVar7,param_2[0xd]);
      uVar20 = pmaddwd(uVar8,param_2[0xc]);
      uVar23 = pmaddwd(uVar9,param_2[0xb]);
      uVar26 = pmaddwd(uVar10,param_2[10]);
      uVar29 = pmaddwd(uVar11,param_2[9]);
      uVar31 = pmaddwd(uVar5,param_2[8]);
      uVar14 = pmaddwd(uVar1,param_2[0x16]);
      uVar18 = pmaddwd(uVar7,param_2[0x15]);
      uVar21 = pmaddwd(uVar8,param_2[0x14]);
      uVar24 = pmaddwd(uVar9,param_2[0x13]);
      uVar27 = pmaddwd(uVar10,param_2[0x12]);
      uVar30 = pmaddwd(uVar11,param_2[0x11]);
      uVar5 = pmaddwd(uVar5,param_2[0x10]);
      uVar15 = pmaddwd(puVar2[7],param_2[0x1f]);
      uVar6 = pmaddwd(uVar1,param_2[0x1e]);
      uVar7 = pmaddwd(uVar7,param_2[0x1d]);
      uVar8 = pmaddwd(uVar8,param_2[0x1c]);
      uVar9 = pmaddwd(uVar9,param_2[0x1b]);
      uVar10 = pmaddwd(uVar10,param_2[0x1a]);
      uVar11 = pmaddwd(uVar11,param_2[0x19]);
      *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) +
                          ((int)uVar31 + (int)uVar29 + (int)uVar26 + (int)uVar23 + (int)uVar20 +
                           (int)uVar17 + (int)uVar13 +
                           (int)((ulonglong)uVar31 >> 0x20) + (int)((ulonglong)uVar29 >> 0x20) +
                           (int)((ulonglong)uVar26 >> 0x20) + (int)((ulonglong)uVar23 >> 0x20) +
                           (int)((ulonglong)uVar20 >> 0x20) + (int)((ulonglong)uVar17 >> 0x20) +
                           (int)((ulonglong)uVar13 >> 0x20) >> 0xe),
                          (int)*param_5 +
                          ((int)uVar28 + (int)uVar25 + (int)uVar22 + (int)uVar19 + (int)uVar16 +
                           (int)uVar12 + (int)uVar4 +
                           (int)((ulonglong)uVar28 >> 0x20) + (int)((ulonglong)uVar25 >> 0x20) +
                           (int)((ulonglong)uVar22 >> 0x20) + (int)((ulonglong)uVar19 >> 0x20) +
                           (int)((ulonglong)uVar16 >> 0x20) + (int)((ulonglong)uVar12 >> 0x20) +
                           (int)((ulonglong)uVar4 >> 0x20) >> 0xe));
      puVar3 = param_5 + 1;
      uVar1 = *puVar3;
      param_5 = param_5 + 2;
      puVar2 = puVar2 + 1;
      *puVar3 = CONCAT44((int)((ulonglong)uVar1 >> 0x20) +
                         ((int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 + (int)uVar7 +
                          (int)uVar6 + (int)uVar15 +
                          (int)((ulonglong)uVar11 >> 0x20) + (int)((ulonglong)uVar10 >> 0x20) +
                          (int)((ulonglong)uVar9 >> 0x20) + (int)((ulonglong)uVar8 >> 0x20) +
                          (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar6 >> 0x20) +
                          (int)((ulonglong)uVar15 >> 0x20) >> 0xe),
                         (int)uVar1 +
                         ((int)uVar5 + (int)uVar30 + (int)uVar27 + (int)uVar24 + (int)uVar21 +
                          (int)uVar18 + (int)uVar14 +
                          (int)((ulonglong)uVar5 >> 0x20) + (int)((ulonglong)uVar30 >> 0x20) +
                          (int)((ulonglong)uVar27 >> 0x20) + (int)((ulonglong)uVar24 >> 0x20) +
                          (int)((ulonglong)uVar21 >> 0x20) + (int)((ulonglong)uVar18 >> 0x20) +
                          (int)((ulonglong)uVar14 >> 0x20) >> 0xe));
    }
  }
  return;
}


//// FUNCTION FUN_00c6acd0 @ 00c6acd0 ////

void __cdecl
FUN_00c6acd0(int param_1,undefined8 *param_2,undefined4 param_3,int param_4,undefined8 *param_5,
            short param_6,short param_7)

{
  short sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 local_90;
  
  sVar1 = param_7 << 2;
  puVar2 = (undefined8 *)(param_1 + -0x40);
  local_90 = CONCAT26(param_6 + param_7 * 3,
                      CONCAT24(param_6 + param_7 * 2,CONCAT22(param_6 + param_7,param_6)));
  switch(param_3) {
  case 0:
    if (param_4 != 0) {
      puVar2 = (undefined8 *)(param_1 + -0x10);
      do {
        uVar6 = puVar2[1];
        uVar7 = *puVar2;
        uVar8 = puVar2[-1];
        uVar9 = puVar2[-2];
        uVar10 = puVar2[-3];
        uVar11 = puVar2[-4];
        uVar5 = puVar2[-5];
        uVar4 = pmaddwd(uVar6,param_2[7]);
        uVar12 = pmaddwd(uVar7,param_2[6]);
        uVar15 = pmaddwd(uVar8,param_2[5]);
        uVar18 = pmaddwd(uVar9,param_2[4]);
        uVar21 = pmaddwd(uVar10,param_2[3]);
        uVar24 = pmaddwd(uVar11,param_2[2]);
        uVar27 = pmaddwd(uVar5,param_2[1]);
        uVar13 = pmaddwd(uVar6,param_2[0xf]);
        uVar16 = pmaddwd(uVar7,param_2[0xe]);
        uVar19 = pmaddwd(uVar8,param_2[0xd]);
        uVar22 = pmaddwd(uVar9,param_2[0xc]);
        uVar25 = pmaddwd(uVar10,param_2[0xb]);
        uVar28 = pmaddwd(uVar11,param_2[10]);
        uVar30 = pmaddwd(uVar5,param_2[9]);
        uVar14 = pmaddwd(uVar6,param_2[0x17]);
        uVar17 = pmaddwd(uVar7,param_2[0x16]);
        uVar20 = pmaddwd(uVar8,param_2[0x15]);
        uVar23 = pmaddwd(uVar9,param_2[0x14]);
        uVar26 = pmaddwd(uVar10,param_2[0x13]);
        uVar29 = pmaddwd(uVar11,param_2[0x12]);
        uVar31 = pmaddwd(uVar5,param_2[0x11]);
        uVar6 = pmaddwd(uVar6,param_2[0x1f]);
        uVar7 = pmaddwd(uVar7,param_2[0x1e]);
        uVar8 = pmaddwd(uVar8,param_2[0x1d]);
        uVar9 = pmaddwd(uVar9,param_2[0x1c]);
        uVar10 = pmaddwd(uVar10,param_2[0x1b]);
        uVar11 = pmaddwd(uVar11,param_2[0x1a]);
        uVar5 = pmaddwd(uVar5,param_2[0x19]);
        uVar6 = packssdw(CONCAT44((int)uVar30 + (int)uVar28 + (int)uVar25 + (int)uVar22 +
                                  (int)uVar19 + (int)uVar16 + (int)uVar13 +
                                  (int)((ulonglong)uVar30 >> 0x20) +
                                  (int)((ulonglong)uVar28 >> 0x20) +
                                  (int)((ulonglong)uVar25 >> 0x20) +
                                  (int)((ulonglong)uVar22 >> 0x20) +
                                  (int)((ulonglong)uVar19 >> 0x20) +
                                  (int)((ulonglong)uVar16 >> 0x20) +
                                  (int)((ulonglong)uVar13 >> 0x20) >> 0xf,
                                  (int)uVar27 + (int)uVar24 + (int)uVar21 + (int)uVar18 +
                                  (int)uVar15 + (int)uVar12 + (int)uVar4 +
                                  (int)((ulonglong)uVar27 >> 0x20) +
                                  (int)((ulonglong)uVar24 >> 0x20) +
                                  (int)((ulonglong)uVar21 >> 0x20) +
                                  (int)((ulonglong)uVar18 >> 0x20) +
                                  (int)((ulonglong)uVar15 >> 0x20) +
                                  (int)((ulonglong)uVar12 >> 0x20) + (int)((ulonglong)uVar4 >> 0x20)
                                  >> 0xf),
                         CONCAT44((int)uVar5 + (int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 +
                                  (int)uVar7 + (int)uVar6 +
                                  (int)((ulonglong)uVar5 >> 0x20) + (int)((ulonglong)uVar11 >> 0x20)
                                  + (int)((ulonglong)uVar10 >> 0x20) +
                                  (int)((ulonglong)uVar9 >> 0x20) + (int)((ulonglong)uVar8 >> 0x20)
                                  + (int)((ulonglong)uVar7 >> 0x20) +
                                  (int)((ulonglong)uVar6 >> 0x20) >> 0xf,
                                  (int)uVar31 + (int)uVar29 + (int)uVar26 + (int)uVar23 +
                                  (int)uVar20 + (int)uVar17 + (int)uVar14 +
                                  (int)((ulonglong)uVar31 >> 0x20) +
                                  (int)((ulonglong)uVar29 >> 0x20) +
                                  (int)((ulonglong)uVar26 >> 0x20) +
                                  (int)((ulonglong)uVar23 >> 0x20) +
                                  (int)((ulonglong)uVar20 >> 0x20) +
                                  (int)((ulonglong)uVar17 >> 0x20) +
                                  (int)((ulonglong)uVar14 >> 0x20) >> 0xf));
        uVar7 = pmulhw(uVar6,local_90);
        local_90 = paddsw(local_90,CONCAT26(sVar1,CONCAT24(sVar1,CONCAT22(sVar1,sVar1))));
        puVar3 = param_5 + 1;
        *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) +
                            ((int)((uint)(ushort)((ulonglong)uVar7 >> 0x10) << 0x10) >> 0xe),
                            (int)*param_5 + ((int)((uint)(ushort)uVar7 << 0x10) >> 0xe));
        uVar6 = *puVar3;
        param_5 = param_5 + 2;
        puVar2 = puVar2 + 1;
        *puVar3 = CONCAT44((int)((ulonglong)uVar6 >> 0x20) +
                           ((int)((uint)((ulonglong)uVar7 >> 0x20) & 0xffff0000) >> 0xe),
                           (int)uVar6 +
                           ((int)((uint)(ushort)((ulonglong)uVar7 >> 0x20) << 0x10) >> 0xe));
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 1:
    if (param_4 != 0) {
      do {
        uVar6 = puVar2[6];
        uVar7 = puVar2[5];
        uVar8 = puVar2[4];
        uVar9 = puVar2[3];
        uVar10 = puVar2[2];
        uVar11 = puVar2[1];
        uVar4 = pmaddwd(uVar6,param_2[6]);
        uVar13 = pmaddwd(uVar7,param_2[5]);
        uVar15 = pmaddwd(uVar8,param_2[4]);
        uVar18 = pmaddwd(uVar9,param_2[3]);
        uVar21 = pmaddwd(uVar10,param_2[2]);
        uVar24 = pmaddwd(uVar11,param_2[1]);
        uVar29 = pmaddwd(*puVar2,*param_2);
        uVar5 = puVar2[7];
        uVar12 = pmaddwd(uVar5,param_2[0xf]);
        uVar16 = pmaddwd(uVar6,param_2[0xe]);
        uVar19 = pmaddwd(uVar7,param_2[0xd]);
        uVar22 = pmaddwd(uVar8,param_2[0xc]);
        uVar25 = pmaddwd(uVar9,param_2[0xb]);
        uVar27 = pmaddwd(uVar10,param_2[10]);
        uVar30 = pmaddwd(uVar11,param_2[9]);
        uVar14 = pmaddwd(uVar5,param_2[0x17]);
        uVar17 = pmaddwd(uVar6,param_2[0x16]);
        uVar20 = pmaddwd(uVar7,param_2[0x15]);
        uVar23 = pmaddwd(uVar8,param_2[0x14]);
        uVar26 = pmaddwd(uVar9,param_2[0x13]);
        uVar28 = pmaddwd(uVar10,param_2[0x12]);
        uVar31 = pmaddwd(uVar11,param_2[0x11]);
        uVar5 = pmaddwd(uVar5,param_2[0x1f]);
        uVar6 = pmaddwd(uVar6,param_2[0x1e]);
        uVar7 = pmaddwd(uVar7,param_2[0x1d]);
        uVar8 = pmaddwd(uVar8,param_2[0x1c]);
        uVar9 = pmaddwd(uVar9,param_2[0x1b]);
        uVar10 = pmaddwd(uVar10,param_2[0x1a]);
        uVar11 = pmaddwd(uVar11,param_2[0x19]);
        uVar6 = packssdw(CONCAT44((int)uVar30 + (int)uVar27 + (int)uVar25 + (int)uVar22 +
                                  (int)uVar19 + (int)uVar16 + (int)uVar12 +
                                  (int)((ulonglong)uVar30 >> 0x20) +
                                  (int)((ulonglong)uVar27 >> 0x20) +
                                  (int)((ulonglong)uVar25 >> 0x20) +
                                  (int)((ulonglong)uVar22 >> 0x20) +
                                  (int)((ulonglong)uVar19 >> 0x20) +
                                  (int)((ulonglong)uVar16 >> 0x20) +
                                  (int)((ulonglong)uVar12 >> 0x20) >> 0xf,
                                  (int)uVar29 + (int)uVar24 + (int)uVar21 + (int)uVar18 +
                                  (int)uVar15 + (int)uVar13 + (int)uVar4 +
                                  (int)((ulonglong)uVar29 >> 0x20) +
                                  (int)((ulonglong)uVar24 >> 0x20) +
                                  (int)((ulonglong)uVar21 >> 0x20) +
                                  (int)((ulonglong)uVar18 >> 0x20) +
                                  (int)((ulonglong)uVar15 >> 0x20) +
                                  (int)((ulonglong)uVar13 >> 0x20) + (int)((ulonglong)uVar4 >> 0x20)
                                  >> 0xf),
                         CONCAT44((int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 + (int)uVar7 +
                                  (int)uVar6 + (int)uVar5 +
                                  (int)((ulonglong)uVar11 >> 0x20) +
                                  (int)((ulonglong)uVar10 >> 0x20) + (int)((ulonglong)uVar9 >> 0x20)
                                  + (int)((ulonglong)uVar8 >> 0x20) +
                                  (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar6 >> 0x20)
                                  + (int)((ulonglong)uVar5 >> 0x20) >> 0xf,
                                  (int)uVar31 + (int)uVar28 + (int)uVar26 + (int)uVar23 +
                                  (int)uVar20 + (int)uVar17 + (int)uVar14 +
                                  (int)((ulonglong)uVar31 >> 0x20) +
                                  (int)((ulonglong)uVar28 >> 0x20) +
                                  (int)((ulonglong)uVar26 >> 0x20) +
                                  (int)((ulonglong)uVar23 >> 0x20) +
                                  (int)((ulonglong)uVar20 >> 0x20) +
                                  (int)((ulonglong)uVar17 >> 0x20) +
                                  (int)((ulonglong)uVar14 >> 0x20) >> 0xf));
        uVar7 = pmulhw(uVar6,local_90);
        local_90 = paddsw(local_90,CONCAT26(sVar1,CONCAT24(sVar1,CONCAT22(sVar1,sVar1))));
        puVar3 = param_5 + 1;
        *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) +
                            ((int)((uint)(ushort)((ulonglong)uVar7 >> 0x10) << 0x10) >> 0xe),
                            (int)*param_5 + ((int)((uint)(ushort)uVar7 << 0x10) >> 0xe));
        uVar6 = *puVar3;
        param_5 = param_5 + 2;
        puVar2 = puVar2 + 1;
        *puVar3 = CONCAT44((int)((ulonglong)uVar6 >> 0x20) +
                           ((int)((uint)((ulonglong)uVar7 >> 0x20) & 0xffff0000) >> 0xe),
                           (int)uVar6 +
                           ((int)((uint)(ushort)((ulonglong)uVar7 >> 0x20) << 0x10) >> 0xe));
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 2:
    if (param_4 != 0) {
      do {
        uVar6 = puVar2[6];
        uVar7 = puVar2[5];
        uVar8 = puVar2[4];
        uVar9 = puVar2[3];
        uVar10 = puVar2[2];
        uVar11 = puVar2[1];
        uVar5 = pmaddwd(uVar6,param_2[6]);
        uVar14 = pmaddwd(uVar7,param_2[5]);
        uVar16 = pmaddwd(uVar8,param_2[4]);
        uVar19 = pmaddwd(uVar9,param_2[3]);
        uVar22 = pmaddwd(uVar10,param_2[2]);
        uVar25 = pmaddwd(uVar11,param_2[1]);
        uVar28 = pmaddwd(*puVar2,*param_2);
        uVar15 = pmaddwd(uVar6,param_2[0xe]);
        uVar17 = pmaddwd(uVar7,param_2[0xd]);
        uVar20 = pmaddwd(uVar8,param_2[0xc]);
        uVar23 = pmaddwd(uVar9,param_2[0xb]);
        uVar26 = pmaddwd(uVar10,param_2[10]);
        uVar29 = pmaddwd(uVar11,param_2[9]);
        uVar4 = pmaddwd(*puVar2,param_2[8]);
        uVar12 = pmaddwd(puVar2[7],param_2[0x17]);
        uVar18 = pmaddwd(uVar6,param_2[0x16]);
        uVar21 = pmaddwd(uVar7,param_2[0x15]);
        uVar24 = pmaddwd(uVar8,param_2[0x14]);
        uVar27 = pmaddwd(uVar9,param_2[0x13]);
        uVar30 = pmaddwd(uVar10,param_2[0x12]);
        uVar31 = pmaddwd(uVar11,param_2[0x11]);
        uVar13 = pmaddwd(puVar2[7],param_2[0x1f]);
        uVar6 = pmaddwd(uVar6,param_2[0x1e]);
        uVar7 = pmaddwd(uVar7,param_2[0x1d]);
        uVar8 = pmaddwd(uVar8,param_2[0x1c]);
        uVar9 = pmaddwd(uVar9,param_2[0x1b]);
        uVar10 = pmaddwd(uVar10,param_2[0x1a]);
        uVar11 = pmaddwd(uVar11,param_2[0x19]);
        uVar6 = packssdw(CONCAT44((int)uVar4 + (int)uVar29 + (int)uVar26 + (int)uVar23 + (int)uVar20
                                  + (int)uVar17 + (int)uVar15 +
                                  (int)((ulonglong)uVar4 >> 0x20) + (int)((ulonglong)uVar29 >> 0x20)
                                  + (int)((ulonglong)uVar26 >> 0x20) +
                                  (int)((ulonglong)uVar23 >> 0x20) +
                                  (int)((ulonglong)uVar20 >> 0x20) +
                                  (int)((ulonglong)uVar17 >> 0x20) +
                                  (int)((ulonglong)uVar15 >> 0x20) >> 0xf,
                                  (int)uVar28 + (int)uVar25 + (int)uVar22 + (int)uVar19 +
                                  (int)uVar16 + (int)uVar14 + (int)uVar5 +
                                  (int)((ulonglong)uVar28 >> 0x20) +
                                  (int)((ulonglong)uVar25 >> 0x20) +
                                  (int)((ulonglong)uVar22 >> 0x20) +
                                  (int)((ulonglong)uVar19 >> 0x20) +
                                  (int)((ulonglong)uVar16 >> 0x20) +
                                  (int)((ulonglong)uVar14 >> 0x20) + (int)((ulonglong)uVar5 >> 0x20)
                                  >> 0xf),
                         CONCAT44((int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 + (int)uVar7 +
                                  (int)uVar6 + (int)uVar13 +
                                  (int)((ulonglong)uVar11 >> 0x20) +
                                  (int)((ulonglong)uVar10 >> 0x20) + (int)((ulonglong)uVar9 >> 0x20)
                                  + (int)((ulonglong)uVar8 >> 0x20) +
                                  (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar6 >> 0x20)
                                  + (int)((ulonglong)uVar13 >> 0x20) >> 0xf,
                                  (int)uVar31 + (int)uVar30 + (int)uVar27 + (int)uVar24 +
                                  (int)uVar21 + (int)uVar18 + (int)uVar12 +
                                  (int)((ulonglong)uVar31 >> 0x20) +
                                  (int)((ulonglong)uVar30 >> 0x20) +
                                  (int)((ulonglong)uVar27 >> 0x20) +
                                  (int)((ulonglong)uVar24 >> 0x20) +
                                  (int)((ulonglong)uVar21 >> 0x20) +
                                  (int)((ulonglong)uVar18 >> 0x20) +
                                  (int)((ulonglong)uVar12 >> 0x20) >> 0xf));
        uVar7 = pmulhw(uVar6,local_90);
        local_90 = paddsw(local_90,CONCAT26(sVar1,CONCAT24(sVar1,CONCAT22(sVar1,sVar1))));
        puVar3 = param_5 + 1;
        *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) +
                            ((int)((uint)(ushort)((ulonglong)uVar7 >> 0x10) << 0x10) >> 0xe),
                            (int)*param_5 + ((int)((uint)(ushort)uVar7 << 0x10) >> 0xe));
        uVar6 = *puVar3;
        param_5 = param_5 + 2;
        *puVar3 = CONCAT44((int)((ulonglong)uVar6 >> 0x20) +
                           ((int)((uint)((ulonglong)uVar7 >> 0x20) & 0xffff0000) >> 0xe),
                           (int)uVar6 +
                           ((int)((uint)(ushort)((ulonglong)uVar7 >> 0x20) << 0x10) >> 0xe));
        puVar2 = puVar2 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 3:
    for (; param_4 != 0; param_4 = param_4 + -1) {
      uVar6 = puVar2[6];
      uVar7 = puVar2[5];
      uVar8 = puVar2[4];
      uVar9 = puVar2[3];
      uVar10 = puVar2[2];
      uVar11 = puVar2[1];
      uVar5 = *puVar2;
      uVar4 = pmaddwd(uVar6,param_2[6]);
      uVar12 = pmaddwd(uVar7,param_2[5]);
      uVar16 = pmaddwd(uVar8,param_2[4]);
      uVar19 = pmaddwd(uVar9,param_2[3]);
      uVar22 = pmaddwd(uVar10,param_2[2]);
      uVar25 = pmaddwd(uVar11,param_2[1]);
      uVar28 = pmaddwd(uVar5,*param_2);
      uVar13 = pmaddwd(uVar6,param_2[0xe]);
      uVar17 = pmaddwd(uVar7,param_2[0xd]);
      uVar20 = pmaddwd(uVar8,param_2[0xc]);
      uVar23 = pmaddwd(uVar9,param_2[0xb]);
      uVar26 = pmaddwd(uVar10,param_2[10]);
      uVar29 = pmaddwd(uVar11,param_2[9]);
      uVar31 = pmaddwd(uVar5,param_2[8]);
      uVar14 = pmaddwd(uVar6,param_2[0x16]);
      uVar18 = pmaddwd(uVar7,param_2[0x15]);
      uVar21 = pmaddwd(uVar8,param_2[0x14]);
      uVar24 = pmaddwd(uVar9,param_2[0x13]);
      uVar27 = pmaddwd(uVar10,param_2[0x12]);
      uVar30 = pmaddwd(uVar11,param_2[0x11]);
      uVar5 = pmaddwd(uVar5,param_2[0x10]);
      uVar15 = pmaddwd(puVar2[7],param_2[0x1f]);
      uVar6 = pmaddwd(uVar6,param_2[0x1e]);
      uVar7 = pmaddwd(uVar7,param_2[0x1d]);
      uVar8 = pmaddwd(uVar8,param_2[0x1c]);
      uVar9 = pmaddwd(uVar9,param_2[0x1b]);
      uVar10 = pmaddwd(uVar10,param_2[0x1a]);
      uVar11 = pmaddwd(uVar11,param_2[0x19]);
      uVar6 = packssdw(CONCAT44((int)uVar31 + (int)uVar29 + (int)uVar26 + (int)uVar23 + (int)uVar20
                                + (int)uVar17 + (int)uVar13 +
                                (int)((ulonglong)uVar31 >> 0x20) + (int)((ulonglong)uVar29 >> 0x20)
                                + (int)((ulonglong)uVar26 >> 0x20) +
                                (int)((ulonglong)uVar23 >> 0x20) + (int)((ulonglong)uVar20 >> 0x20)
                                + (int)((ulonglong)uVar17 >> 0x20) +
                                (int)((ulonglong)uVar13 >> 0x20) >> 0xf,
                                (int)uVar28 + (int)uVar25 + (int)uVar22 + (int)uVar19 + (int)uVar16
                                + (int)uVar12 + (int)uVar4 +
                                (int)((ulonglong)uVar28 >> 0x20) + (int)((ulonglong)uVar25 >> 0x20)
                                + (int)((ulonglong)uVar22 >> 0x20) +
                                (int)((ulonglong)uVar19 >> 0x20) + (int)((ulonglong)uVar16 >> 0x20)
                                + (int)((ulonglong)uVar12 >> 0x20) + (int)((ulonglong)uVar4 >> 0x20)
                                >> 0xf),
                       CONCAT44((int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 + (int)uVar7 +
                                (int)uVar6 + (int)uVar15 +
                                (int)((ulonglong)uVar11 >> 0x20) + (int)((ulonglong)uVar10 >> 0x20)
                                + (int)((ulonglong)uVar9 >> 0x20) + (int)((ulonglong)uVar8 >> 0x20)
                                + (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar6 >> 0x20)
                                + (int)((ulonglong)uVar15 >> 0x20) >> 0xf,
                                (int)uVar5 + (int)uVar30 + (int)uVar27 + (int)uVar24 + (int)uVar21 +
                                (int)uVar18 + (int)uVar14 +
                                (int)((ulonglong)uVar5 >> 0x20) + (int)((ulonglong)uVar30 >> 0x20) +
                                (int)((ulonglong)uVar27 >> 0x20) + (int)((ulonglong)uVar24 >> 0x20)
                                + (int)((ulonglong)uVar21 >> 0x20) +
                                (int)((ulonglong)uVar18 >> 0x20) + (int)((ulonglong)uVar14 >> 0x20)
                                >> 0xf));
      uVar7 = pmulhw(uVar6,local_90);
      local_90 = paddsw(local_90,CONCAT26(sVar1,CONCAT24(sVar1,CONCAT22(sVar1,sVar1))));
      puVar3 = param_5 + 1;
      *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) +
                          ((int)((uint)(ushort)((ulonglong)uVar7 >> 0x10) << 0x10) >> 0xe),
                          (int)*param_5 + ((int)((uint)(ushort)uVar7 << 0x10) >> 0xe));
      uVar6 = *puVar3;
      param_5 = param_5 + 2;
      puVar2 = puVar2 + 1;
      *puVar3 = CONCAT44((int)((ulonglong)uVar6 >> 0x20) +
                         ((int)((uint)((ulonglong)uVar7 >> 0x20) & 0xffff0000) >> 0xe),
                         (int)uVar6 +
                         ((int)((uint)(ushort)((ulonglong)uVar7 >> 0x20) << 0x10) >> 0xe));
    }
  }
  return;
}


//// FUNCTION FUN_00c6b810 @ 00c6b810 ////

void __cdecl
FUN_00c6b810(int param_1,undefined8 *param_2,undefined4 param_3,int param_4,undefined8 *param_5,
            undefined8 *param_6,ushort param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar13;
  undefined8 uVar12;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  puVar1 = (undefined8 *)(param_1 + -0x40);
  switch(param_3) {
  case 0:
    if (param_4 != 0) {
      puVar1 = (undefined8 *)(param_1 + -0x10);
      do {
        uVar12 = puVar1[1];
        uVar7 = *puVar1;
        uVar8 = puVar1[-1];
        uVar9 = puVar1[-2];
        uVar10 = puVar1[-3];
        uVar11 = puVar1[-4];
        uVar5 = puVar1[-5];
        uVar4 = pmaddwd(uVar12,param_2[7]);
        uVar14 = pmaddwd(uVar7,param_2[6]);
        uVar17 = pmaddwd(uVar8,param_2[5]);
        uVar20 = pmaddwd(uVar9,param_2[4]);
        uVar23 = pmaddwd(uVar10,param_2[3]);
        uVar26 = pmaddwd(uVar11,param_2[2]);
        uVar29 = pmaddwd(uVar5,param_2[1]);
        uVar15 = pmaddwd(uVar12,param_2[0xf]);
        uVar18 = pmaddwd(uVar7,param_2[0xe]);
        uVar21 = pmaddwd(uVar8,param_2[0xd]);
        uVar24 = pmaddwd(uVar9,param_2[0xc]);
        uVar27 = pmaddwd(uVar10,param_2[0xb]);
        uVar30 = pmaddwd(uVar11,param_2[10]);
        uVar32 = pmaddwd(uVar5,param_2[9]);
        uVar16 = pmaddwd(uVar12,param_2[0x17]);
        uVar19 = pmaddwd(uVar7,param_2[0x16]);
        uVar22 = pmaddwd(uVar8,param_2[0x15]);
        uVar25 = pmaddwd(uVar9,param_2[0x14]);
        uVar28 = pmaddwd(uVar10,param_2[0x13]);
        uVar31 = pmaddwd(uVar11,param_2[0x12]);
        uVar33 = pmaddwd(uVar5,param_2[0x11]);
        uVar6 = pmaddwd(uVar12,param_2[0x1f]);
        uVar7 = pmaddwd(uVar7,param_2[0x1e]);
        uVar8 = pmaddwd(uVar8,param_2[0x1d]);
        uVar9 = pmaddwd(uVar9,param_2[0x1c]);
        uVar10 = pmaddwd(uVar10,param_2[0x1b]);
        uVar11 = pmaddwd(uVar11,param_2[0x1a]);
        uVar5 = pmaddwd(uVar5,param_2[0x19]);
        iVar3 = (int)uVar29 + (int)uVar26 + (int)uVar23 + (int)uVar20 + (int)uVar17 + (int)uVar14 +
                (int)uVar4 +
                (int)((ulonglong)uVar29 >> 0x20) + (int)((ulonglong)uVar26 >> 0x20) +
                (int)((ulonglong)uVar23 >> 0x20) + (int)((ulonglong)uVar20 >> 0x20) +
                (int)((ulonglong)uVar17 >> 0x20) + (int)((ulonglong)uVar14 >> 0x20) +
                (int)((ulonglong)uVar4 >> 0x20);
        iVar13 = (int)uVar32 + (int)uVar30 + (int)uVar27 + (int)uVar24 + (int)uVar21 + (int)uVar18 +
                 (int)uVar15 +
                 (int)((ulonglong)uVar32 >> 0x20) + (int)((ulonglong)uVar30 >> 0x20) +
                 (int)((ulonglong)uVar27 >> 0x20) + (int)((ulonglong)uVar24 >> 0x20) +
                 (int)((ulonglong)uVar21 >> 0x20) + (int)((ulonglong)uVar18 >> 0x20) +
                 (int)((ulonglong)uVar15 >> 0x20);
        *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) + (iVar13 >> 0xe),
                            (int)*param_5 + (iVar3 >> 0xe));
        uVar12 = pmaddwd(CONCAT44(iVar13 >> 0xf,iVar3 >> 0xf),
                         (ulonglong)CONCAT24(param_7,(uint)param_7));
        *param_6 = CONCAT44((int)((ulonglong)*param_6 >> 0x20) + (int)((longlong)uVar12 >> 0x2e),
                            (int)*param_6 + ((int)uVar12 >> 0xe));
        uVar12 = param_5[1];
        iVar3 = (int)uVar33 + (int)uVar31 + (int)uVar28 + (int)uVar25 + (int)uVar22 + (int)uVar19 +
                (int)uVar16 +
                (int)((ulonglong)uVar33 >> 0x20) + (int)((ulonglong)uVar31 >> 0x20) +
                (int)((ulonglong)uVar28 >> 0x20) + (int)((ulonglong)uVar25 >> 0x20) +
                (int)((ulonglong)uVar22 >> 0x20) + (int)((ulonglong)uVar19 >> 0x20) +
                (int)((ulonglong)uVar16 >> 0x20);
        iVar13 = (int)uVar5 + (int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 + (int)uVar7 +
                 (int)uVar6 +
                 (int)((ulonglong)uVar5 >> 0x20) + (int)((ulonglong)uVar11 >> 0x20) +
                 (int)((ulonglong)uVar10 >> 0x20) + (int)((ulonglong)uVar9 >> 0x20) +
                 (int)((ulonglong)uVar8 >> 0x20) + (int)((ulonglong)uVar7 >> 0x20) +
                 (int)((ulonglong)uVar6 >> 0x20);
        puVar2 = param_6 + 1;
        param_5[1] = CONCAT44((int)((ulonglong)uVar12 >> 0x20) + (iVar13 >> 0xe),
                              (int)uVar12 + (iVar3 >> 0xe));
        param_5 = param_5 + 2;
        uVar7 = pmaddwd(CONCAT44(iVar13 >> 0xf,iVar3 >> 0xf),
                        (ulonglong)CONCAT24(param_7,(uint)param_7));
        param_6 = param_6 + 2;
        uVar12 = *puVar2;
        puVar1 = puVar1 + 1;
        param_4 = param_4 + -1;
        *puVar2 = CONCAT44((int)((ulonglong)uVar12 >> 0x20) + (int)((longlong)uVar7 >> 0x2e),
                           (int)uVar12 + ((int)uVar7 >> 0xe));
      } while (param_4 != 0);
      return;
    }
    break;
  case 1:
    if (param_4 != 0) {
      do {
        uVar12 = puVar1[6];
        uVar7 = puVar1[5];
        uVar8 = puVar1[4];
        uVar9 = puVar1[3];
        uVar10 = puVar1[2];
        uVar11 = puVar1[1];
        uVar4 = pmaddwd(uVar12,param_2[6]);
        uVar15 = pmaddwd(uVar7,param_2[5]);
        uVar17 = pmaddwd(uVar8,param_2[4]);
        uVar20 = pmaddwd(uVar9,param_2[3]);
        uVar23 = pmaddwd(uVar10,param_2[2]);
        uVar26 = pmaddwd(uVar11,param_2[1]);
        uVar31 = pmaddwd(*puVar1,*param_2);
        uVar5 = puVar1[7];
        uVar6 = pmaddwd(uVar5,param_2[0xf]);
        uVar18 = pmaddwd(uVar12,param_2[0xe]);
        uVar21 = pmaddwd(uVar7,param_2[0xd]);
        uVar24 = pmaddwd(uVar8,param_2[0xc]);
        uVar27 = pmaddwd(uVar9,param_2[0xb]);
        uVar29 = pmaddwd(uVar10,param_2[10]);
        uVar32 = pmaddwd(uVar11,param_2[9]);
        uVar16 = pmaddwd(uVar5,param_2[0x17]);
        uVar19 = pmaddwd(uVar12,param_2[0x16]);
        uVar22 = pmaddwd(uVar7,param_2[0x15]);
        uVar25 = pmaddwd(uVar8,param_2[0x14]);
        uVar28 = pmaddwd(uVar9,param_2[0x13]);
        uVar30 = pmaddwd(uVar10,param_2[0x12]);
        uVar33 = pmaddwd(uVar11,param_2[0x11]);
        uVar5 = pmaddwd(uVar5,param_2[0x1f]);
        uVar14 = pmaddwd(uVar12,param_2[0x1e]);
        uVar7 = pmaddwd(uVar7,param_2[0x1d]);
        uVar8 = pmaddwd(uVar8,param_2[0x1c]);
        uVar9 = pmaddwd(uVar9,param_2[0x1b]);
        uVar10 = pmaddwd(uVar10,param_2[0x1a]);
        uVar11 = pmaddwd(uVar11,param_2[0x19]);
        iVar3 = (int)uVar31 + (int)uVar26 + (int)uVar23 + (int)uVar20 + (int)uVar17 + (int)uVar15 +
                (int)uVar4 +
                (int)((ulonglong)uVar31 >> 0x20) + (int)((ulonglong)uVar26 >> 0x20) +
                (int)((ulonglong)uVar23 >> 0x20) + (int)((ulonglong)uVar20 >> 0x20) +
                (int)((ulonglong)uVar17 >> 0x20) + (int)((ulonglong)uVar15 >> 0x20) +
                (int)((ulonglong)uVar4 >> 0x20);
        iVar13 = (int)uVar32 + (int)uVar29 + (int)uVar27 + (int)uVar24 + (int)uVar21 + (int)uVar18 +
                 (int)uVar6 +
                 (int)((ulonglong)uVar32 >> 0x20) + (int)((ulonglong)uVar29 >> 0x20) +
                 (int)((ulonglong)uVar27 >> 0x20) + (int)((ulonglong)uVar24 >> 0x20) +
                 (int)((ulonglong)uVar21 >> 0x20) + (int)((ulonglong)uVar18 >> 0x20) +
                 (int)((ulonglong)uVar6 >> 0x20);
        *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) + (iVar13 >> 0xe),
                            (int)*param_5 + (iVar3 >> 0xe));
        uVar12 = pmaddwd(CONCAT44(iVar13 >> 0xf,iVar3 >> 0xf),
                         (ulonglong)CONCAT24(param_7,(uint)param_7));
        *param_6 = CONCAT44((int)((ulonglong)*param_6 >> 0x20) + (int)((longlong)uVar12 >> 0x2e),
                            (int)*param_6 + ((int)uVar12 >> 0xe));
        uVar12 = param_5[1];
        iVar3 = (int)uVar33 + (int)uVar30 + (int)uVar28 + (int)uVar25 + (int)uVar22 + (int)uVar19 +
                (int)uVar16 +
                (int)((ulonglong)uVar33 >> 0x20) + (int)((ulonglong)uVar30 >> 0x20) +
                (int)((ulonglong)uVar28 >> 0x20) + (int)((ulonglong)uVar25 >> 0x20) +
                (int)((ulonglong)uVar22 >> 0x20) + (int)((ulonglong)uVar19 >> 0x20) +
                (int)((ulonglong)uVar16 >> 0x20);
        iVar13 = (int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 + (int)uVar7 + (int)uVar14 +
                 (int)uVar5 +
                 (int)((ulonglong)uVar11 >> 0x20) + (int)((ulonglong)uVar10 >> 0x20) +
                 (int)((ulonglong)uVar9 >> 0x20) + (int)((ulonglong)uVar8 >> 0x20) +
                 (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar14 >> 0x20) +
                 (int)((ulonglong)uVar5 >> 0x20);
        puVar2 = param_6 + 1;
        param_5[1] = CONCAT44((int)((ulonglong)uVar12 >> 0x20) + (iVar13 >> 0xe),
                              (int)uVar12 + (iVar3 >> 0xe));
        param_5 = param_5 + 2;
        uVar7 = pmaddwd(CONCAT44(iVar13 >> 0xf,iVar3 >> 0xf),
                        (ulonglong)CONCAT24(param_7,(uint)param_7));
        param_6 = param_6 + 2;
        uVar12 = *puVar2;
        puVar1 = puVar1 + 1;
        param_4 = param_4 + -1;
        *puVar2 = CONCAT44((int)((ulonglong)uVar12 >> 0x20) + (int)((longlong)uVar7 >> 0x2e),
                           (int)uVar12 + ((int)uVar7 >> 0xe));
      } while (param_4 != 0);
      return;
    }
    break;
  case 2:
    if (param_4 != 0) {
      do {
        uVar12 = puVar1[6];
        uVar7 = puVar1[5];
        uVar8 = puVar1[4];
        uVar9 = puVar1[3];
        uVar10 = puVar1[2];
        uVar11 = puVar1[1];
        uVar5 = pmaddwd(uVar12,param_2[6]);
        uVar16 = pmaddwd(uVar7,param_2[5]);
        uVar18 = pmaddwd(uVar8,param_2[4]);
        uVar21 = pmaddwd(uVar9,param_2[3]);
        uVar24 = pmaddwd(uVar10,param_2[2]);
        uVar27 = pmaddwd(uVar11,param_2[1]);
        uVar30 = pmaddwd(*puVar1,*param_2);
        uVar17 = pmaddwd(uVar12,param_2[0xe]);
        uVar19 = pmaddwd(uVar7,param_2[0xd]);
        uVar22 = pmaddwd(uVar8,param_2[0xc]);
        uVar25 = pmaddwd(uVar9,param_2[0xb]);
        uVar28 = pmaddwd(uVar10,param_2[10]);
        uVar31 = pmaddwd(uVar11,param_2[9]);
        uVar4 = pmaddwd(*puVar1,param_2[8]);
        uVar6 = pmaddwd(puVar1[7],param_2[0x17]);
        uVar20 = pmaddwd(uVar12,param_2[0x16]);
        uVar23 = pmaddwd(uVar7,param_2[0x15]);
        uVar26 = pmaddwd(uVar8,param_2[0x14]);
        uVar29 = pmaddwd(uVar9,param_2[0x13]);
        uVar32 = pmaddwd(uVar10,param_2[0x12]);
        uVar33 = pmaddwd(uVar11,param_2[0x11]);
        uVar14 = pmaddwd(puVar1[7],param_2[0x1f]);
        uVar15 = pmaddwd(uVar12,param_2[0x1e]);
        uVar7 = pmaddwd(uVar7,param_2[0x1d]);
        uVar8 = pmaddwd(uVar8,param_2[0x1c]);
        uVar9 = pmaddwd(uVar9,param_2[0x1b]);
        uVar10 = pmaddwd(uVar10,param_2[0x1a]);
        uVar11 = pmaddwd(uVar11,param_2[0x19]);
        iVar3 = (int)uVar30 + (int)uVar27 + (int)uVar24 + (int)uVar21 + (int)uVar18 + (int)uVar16 +
                (int)uVar5 +
                (int)((ulonglong)uVar30 >> 0x20) + (int)((ulonglong)uVar27 >> 0x20) +
                (int)((ulonglong)uVar24 >> 0x20) + (int)((ulonglong)uVar21 >> 0x20) +
                (int)((ulonglong)uVar18 >> 0x20) + (int)((ulonglong)uVar16 >> 0x20) +
                (int)((ulonglong)uVar5 >> 0x20);
        iVar13 = (int)uVar4 + (int)uVar31 + (int)uVar28 + (int)uVar25 + (int)uVar22 + (int)uVar19 +
                 (int)uVar17 +
                 (int)((ulonglong)uVar4 >> 0x20) + (int)((ulonglong)uVar31 >> 0x20) +
                 (int)((ulonglong)uVar28 >> 0x20) + (int)((ulonglong)uVar25 >> 0x20) +
                 (int)((ulonglong)uVar22 >> 0x20) + (int)((ulonglong)uVar19 >> 0x20) +
                 (int)((ulonglong)uVar17 >> 0x20);
        *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) + (iVar13 >> 0xe),
                            (int)*param_5 + (iVar3 >> 0xe));
        uVar12 = pmaddwd(CONCAT44(iVar13 >> 0xf,iVar3 >> 0xf),
                         (ulonglong)CONCAT24(param_7,(uint)param_7));
        *param_6 = CONCAT44((int)((ulonglong)*param_6 >> 0x20) + (int)((longlong)uVar12 >> 0x2e),
                            (int)*param_6 + ((int)uVar12 >> 0xe));
        uVar12 = param_5[1];
        iVar3 = (int)uVar33 + (int)uVar32 + (int)uVar29 + (int)uVar26 + (int)uVar23 + (int)uVar20 +
                (int)uVar6 +
                (int)((ulonglong)uVar33 >> 0x20) + (int)((ulonglong)uVar32 >> 0x20) +
                (int)((ulonglong)uVar29 >> 0x20) + (int)((ulonglong)uVar26 >> 0x20) +
                (int)((ulonglong)uVar23 >> 0x20) + (int)((ulonglong)uVar20 >> 0x20) +
                (int)((ulonglong)uVar6 >> 0x20);
        iVar13 = (int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 + (int)uVar7 + (int)uVar15 +
                 (int)uVar14 +
                 (int)((ulonglong)uVar11 >> 0x20) + (int)((ulonglong)uVar10 >> 0x20) +
                 (int)((ulonglong)uVar9 >> 0x20) + (int)((ulonglong)uVar8 >> 0x20) +
                 (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar15 >> 0x20) +
                 (int)((ulonglong)uVar14 >> 0x20);
        puVar2 = param_6 + 1;
        param_5[1] = CONCAT44((int)((ulonglong)uVar12 >> 0x20) + (iVar13 >> 0xe),
                              (int)uVar12 + (iVar3 >> 0xe));
        param_5 = param_5 + 2;
        uVar7 = pmaddwd(CONCAT44(iVar13 >> 0xf,iVar3 >> 0xf),
                        (ulonglong)CONCAT24(param_7,(uint)param_7));
        param_6 = param_6 + 2;
        uVar12 = *puVar2;
        puVar1 = puVar1 + 1;
        param_4 = param_4 + -1;
        *puVar2 = CONCAT44((int)((ulonglong)uVar12 >> 0x20) + (int)((longlong)uVar7 >> 0x2e),
                           (int)uVar12 + ((int)uVar7 >> 0xe));
      } while (param_4 != 0);
      return;
    }
    break;
  case 3:
    for (; param_4 != 0; param_4 = param_4 + -1) {
      uVar12 = puVar1[6];
      uVar7 = puVar1[5];
      uVar8 = puVar1[4];
      uVar9 = puVar1[3];
      uVar10 = puVar1[2];
      uVar11 = puVar1[1];
      uVar5 = *puVar1;
      uVar4 = pmaddwd(uVar12,param_2[6]);
      uVar14 = pmaddwd(uVar7,param_2[5]);
      uVar18 = pmaddwd(uVar8,param_2[4]);
      uVar21 = pmaddwd(uVar9,param_2[3]);
      uVar24 = pmaddwd(uVar10,param_2[2]);
      uVar27 = pmaddwd(uVar11,param_2[1]);
      uVar30 = pmaddwd(uVar5,*param_2);
      uVar15 = pmaddwd(uVar12,param_2[0xe]);
      uVar19 = pmaddwd(uVar7,param_2[0xd]);
      uVar22 = pmaddwd(uVar8,param_2[0xc]);
      uVar25 = pmaddwd(uVar9,param_2[0xb]);
      uVar28 = pmaddwd(uVar10,param_2[10]);
      uVar31 = pmaddwd(uVar11,param_2[9]);
      uVar33 = pmaddwd(uVar5,param_2[8]);
      uVar16 = pmaddwd(uVar12,param_2[0x16]);
      uVar20 = pmaddwd(uVar7,param_2[0x15]);
      uVar23 = pmaddwd(uVar8,param_2[0x14]);
      uVar26 = pmaddwd(uVar9,param_2[0x13]);
      uVar29 = pmaddwd(uVar10,param_2[0x12]);
      uVar32 = pmaddwd(uVar11,param_2[0x11]);
      uVar5 = pmaddwd(uVar5,param_2[0x10]);
      uVar17 = pmaddwd(puVar1[7],param_2[0x1f]);
      uVar6 = pmaddwd(uVar12,param_2[0x1e]);
      uVar7 = pmaddwd(uVar7,param_2[0x1d]);
      uVar8 = pmaddwd(uVar8,param_2[0x1c]);
      uVar9 = pmaddwd(uVar9,param_2[0x1b]);
      uVar10 = pmaddwd(uVar10,param_2[0x1a]);
      uVar11 = pmaddwd(uVar11,param_2[0x19]);
      iVar3 = (int)uVar30 + (int)uVar27 + (int)uVar24 + (int)uVar21 + (int)uVar18 + (int)uVar14 +
              (int)uVar4 +
              (int)((ulonglong)uVar30 >> 0x20) + (int)((ulonglong)uVar27 >> 0x20) +
              (int)((ulonglong)uVar24 >> 0x20) + (int)((ulonglong)uVar21 >> 0x20) +
              (int)((ulonglong)uVar18 >> 0x20) + (int)((ulonglong)uVar14 >> 0x20) +
              (int)((ulonglong)uVar4 >> 0x20);
      iVar13 = (int)uVar33 + (int)uVar31 + (int)uVar28 + (int)uVar25 + (int)uVar22 + (int)uVar19 +
               (int)uVar15 +
               (int)((ulonglong)uVar33 >> 0x20) + (int)((ulonglong)uVar31 >> 0x20) +
               (int)((ulonglong)uVar28 >> 0x20) + (int)((ulonglong)uVar25 >> 0x20) +
               (int)((ulonglong)uVar22 >> 0x20) + (int)((ulonglong)uVar19 >> 0x20) +
               (int)((ulonglong)uVar15 >> 0x20);
      *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) + (iVar13 >> 0xe),
                          (int)*param_5 + (iVar3 >> 0xe));
      uVar12 = pmaddwd(CONCAT44(iVar13 >> 0xf,iVar3 >> 0xf),
                       (ulonglong)CONCAT24(param_7,(uint)param_7));
      *param_6 = CONCAT44((int)((ulonglong)*param_6 >> 0x20) + (int)((longlong)uVar12 >> 0x2e),
                          (int)*param_6 + ((int)uVar12 >> 0xe));
      uVar12 = param_5[1];
      iVar3 = (int)uVar5 + (int)uVar32 + (int)uVar29 + (int)uVar26 + (int)uVar23 + (int)uVar20 +
              (int)uVar16 +
              (int)((ulonglong)uVar5 >> 0x20) + (int)((ulonglong)uVar32 >> 0x20) +
              (int)((ulonglong)uVar29 >> 0x20) + (int)((ulonglong)uVar26 >> 0x20) +
              (int)((ulonglong)uVar23 >> 0x20) + (int)((ulonglong)uVar20 >> 0x20) +
              (int)((ulonglong)uVar16 >> 0x20);
      iVar13 = (int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 + (int)uVar7 + (int)uVar6 +
               (int)uVar17 +
               (int)((ulonglong)uVar11 >> 0x20) + (int)((ulonglong)uVar10 >> 0x20) +
               (int)((ulonglong)uVar9 >> 0x20) + (int)((ulonglong)uVar8 >> 0x20) +
               (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar6 >> 0x20) +
               (int)((ulonglong)uVar17 >> 0x20);
      puVar2 = param_6 + 1;
      param_5[1] = CONCAT44((int)((ulonglong)uVar12 >> 0x20) + (iVar13 >> 0xe),
                            (int)uVar12 + (iVar3 >> 0xe));
      uVar12 = *puVar2;
      param_5 = param_5 + 2;
      uVar7 = pmaddwd(CONCAT44(iVar13 >> 0xf,iVar3 >> 0xf),
                      (ulonglong)CONCAT24(param_7,(uint)param_7));
      param_6 = param_6 + 2;
      puVar1 = puVar1 + 1;
      *puVar2 = CONCAT44((int)((ulonglong)uVar12 >> 0x20) + (int)((longlong)uVar7 >> 0x2e),
                         (int)uVar12 + ((int)uVar7 >> 0xe));
    }
  }
  return;
}


//// FUNCTION FUN_00c6c320 @ 00c6c320 ////

void __cdecl
FUN_00c6c320(int param_1,undefined8 *param_2,undefined4 param_3,int param_4,undefined8 *param_5,
            undefined8 *param_6,ushort param_7,short param_8,short param_9)

{
  short sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar13;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 local_a0;
  
  sVar1 = param_9 << 2;
  puVar2 = (undefined8 *)(param_1 + -0x40);
  local_a0 = CONCAT26(param_8 + param_9 * 3,
                      CONCAT24(param_8 + param_9 * 2,CONCAT22(param_8 + param_9,param_8)));
  switch(param_3) {
  case 0:
    if (param_4 != 0) {
      puVar2 = (undefined8 *)(param_1 + -0x10);
      do {
        uVar7 = puVar2[1];
        uVar8 = *puVar2;
        uVar9 = puVar2[-1];
        uVar10 = puVar2[-2];
        uVar11 = puVar2[-3];
        uVar12 = puVar2[-4];
        uVar6 = puVar2[-5];
        uVar5 = pmaddwd(uVar7,param_2[7]);
        uVar14 = pmaddwd(uVar8,param_2[6]);
        uVar17 = pmaddwd(uVar9,param_2[5]);
        uVar20 = pmaddwd(uVar10,param_2[4]);
        uVar24 = pmaddwd(uVar11,param_2[3]);
        uVar27 = pmaddwd(uVar12,param_2[2]);
        uVar30 = pmaddwd(uVar6,param_2[1]);
        uVar15 = pmaddwd(uVar7,param_2[0xf]);
        uVar18 = pmaddwd(uVar8,param_2[0xe]);
        uVar22 = pmaddwd(uVar9,param_2[0xd]);
        uVar25 = pmaddwd(uVar10,param_2[0xc]);
        uVar28 = pmaddwd(uVar11,param_2[0xb]);
        uVar31 = pmaddwd(uVar12,param_2[10]);
        uVar33 = pmaddwd(uVar6,param_2[9]);
        uVar16 = pmaddwd(uVar7,param_2[0x17]);
        uVar19 = pmaddwd(uVar8,param_2[0x16]);
        uVar23 = pmaddwd(uVar9,param_2[0x15]);
        uVar26 = pmaddwd(uVar10,param_2[0x14]);
        uVar29 = pmaddwd(uVar11,param_2[0x13]);
        uVar32 = pmaddwd(uVar12,param_2[0x12]);
        uVar34 = pmaddwd(uVar6,param_2[0x11]);
        uVar7 = pmaddwd(uVar7,param_2[0x1f]);
        uVar8 = pmaddwd(uVar8,param_2[0x1e]);
        uVar9 = pmaddwd(uVar9,param_2[0x1d]);
        uVar10 = pmaddwd(uVar10,param_2[0x1c]);
        uVar11 = pmaddwd(uVar11,param_2[0x1b]);
        uVar12 = pmaddwd(uVar12,param_2[0x1a]);
        uVar6 = pmaddwd(uVar6,param_2[0x19]);
        uVar7 = packssdw(CONCAT44((int)uVar33 + (int)uVar31 + (int)uVar28 + (int)uVar25 +
                                  (int)uVar22 + (int)uVar18 + (int)uVar15 +
                                  (int)((ulonglong)uVar33 >> 0x20) +
                                  (int)((ulonglong)uVar31 >> 0x20) +
                                  (int)((ulonglong)uVar28 >> 0x20) +
                                  (int)((ulonglong)uVar25 >> 0x20) +
                                  (int)((ulonglong)uVar22 >> 0x20) +
                                  (int)((ulonglong)uVar18 >> 0x20) +
                                  (int)((ulonglong)uVar15 >> 0x20) >> 0xf,
                                  (int)uVar30 + (int)uVar27 + (int)uVar24 + (int)uVar20 +
                                  (int)uVar17 + (int)uVar14 + (int)uVar5 +
                                  (int)((ulonglong)uVar30 >> 0x20) +
                                  (int)((ulonglong)uVar27 >> 0x20) +
                                  (int)((ulonglong)uVar24 >> 0x20) +
                                  (int)((ulonglong)uVar20 >> 0x20) +
                                  (int)((ulonglong)uVar17 >> 0x20) +
                                  (int)((ulonglong)uVar14 >> 0x20) + (int)((ulonglong)uVar5 >> 0x20)
                                  >> 0xf),
                         CONCAT44((int)uVar6 + (int)uVar12 + (int)uVar11 + (int)uVar10 + (int)uVar9
                                  + (int)uVar8 + (int)uVar7 +
                                  (int)((ulonglong)uVar6 >> 0x20) + (int)((ulonglong)uVar12 >> 0x20)
                                  + (int)((ulonglong)uVar11 >> 0x20) +
                                  (int)((ulonglong)uVar10 >> 0x20) + (int)((ulonglong)uVar9 >> 0x20)
                                  + (int)((ulonglong)uVar8 >> 0x20) +
                                  (int)((ulonglong)uVar7 >> 0x20) >> 0xf,
                                  (int)uVar34 + (int)uVar32 + (int)uVar29 + (int)uVar26 +
                                  (int)uVar23 + (int)uVar19 + (int)uVar16 +
                                  (int)((ulonglong)uVar34 >> 0x20) +
                                  (int)((ulonglong)uVar32 >> 0x20) +
                                  (int)((ulonglong)uVar29 >> 0x20) +
                                  (int)((ulonglong)uVar26 >> 0x20) +
                                  (int)((ulonglong)uVar23 >> 0x20) +
                                  (int)((ulonglong)uVar19 >> 0x20) +
                                  (int)((ulonglong)uVar16 >> 0x20) >> 0xf));
        uVar8 = pmulhw(uVar7,local_a0);
        local_a0 = paddsw(local_a0,CONCAT26(sVar1,CONCAT24(sVar1,CONCAT22(sVar1,sVar1))));
        iVar21 = (uint)(ushort)((ulonglong)uVar8 >> 0x10) << 0x10;
        iVar4 = (uint)(ushort)uVar8 << 0x10;
        *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) + (iVar21 >> 0xe),
                            (int)*param_5 + (iVar4 >> 0xe));
        uVar7 = pmaddwd(CONCAT44(iVar21 >> 0xf,iVar4 >> 0xf),
                        (ulonglong)CONCAT24(param_7,(uint)param_7));
        puVar3 = param_6 + 1;
        *param_6 = CONCAT44((int)((ulonglong)*param_6 >> 0x20) + (int)((longlong)uVar7 >> 0x2e),
                            (int)*param_6 + ((int)uVar7 >> 0xe));
        iVar21 = (uint)(ushort)((ulonglong)uVar8 >> 0x20) << 0x10;
        uVar13 = (uint)((ulonglong)uVar8 >> 0x20) & 0xffff0000;
        uVar7 = param_5[1];
        param_5[1] = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + ((int)uVar13 >> 0xe),
                              (int)uVar7 + (iVar21 >> 0xe));
        uVar7 = *puVar3;
        uVar8 = pmaddwd(CONCAT44((int)uVar13 >> 0xf,iVar21 >> 0xf),
                        (ulonglong)CONCAT24(param_7,(uint)param_7));
        param_5 = param_5 + 2;
        param_6 = param_6 + 2;
        puVar2 = puVar2 + 1;
        param_4 = param_4 + -1;
        *puVar3 = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + (int)((longlong)uVar8 >> 0x2e),
                           (int)uVar7 + ((int)uVar8 >> 0xe));
      } while (param_4 != 0);
      return;
    }
    break;
  case 1:
    if (param_4 != 0) {
      do {
        uVar7 = puVar2[6];
        uVar8 = puVar2[5];
        uVar9 = puVar2[4];
        uVar10 = puVar2[3];
        uVar11 = puVar2[2];
        uVar12 = puVar2[1];
        uVar5 = pmaddwd(uVar7,param_2[6]);
        uVar15 = pmaddwd(uVar8,param_2[5]);
        uVar17 = pmaddwd(uVar9,param_2[4]);
        uVar20 = pmaddwd(uVar10,param_2[3]);
        uVar24 = pmaddwd(uVar11,param_2[2]);
        uVar27 = pmaddwd(uVar12,param_2[1]);
        uVar32 = pmaddwd(*puVar2,*param_2);
        uVar6 = puVar2[7];
        uVar14 = pmaddwd(uVar6,param_2[0xf]);
        uVar18 = pmaddwd(uVar7,param_2[0xe]);
        uVar22 = pmaddwd(uVar8,param_2[0xd]);
        uVar25 = pmaddwd(uVar9,param_2[0xc]);
        uVar28 = pmaddwd(uVar10,param_2[0xb]);
        uVar30 = pmaddwd(uVar11,param_2[10]);
        uVar33 = pmaddwd(uVar12,param_2[9]);
        uVar16 = pmaddwd(uVar6,param_2[0x17]);
        uVar19 = pmaddwd(uVar7,param_2[0x16]);
        uVar23 = pmaddwd(uVar8,param_2[0x15]);
        uVar26 = pmaddwd(uVar9,param_2[0x14]);
        uVar29 = pmaddwd(uVar10,param_2[0x13]);
        uVar31 = pmaddwd(uVar11,param_2[0x12]);
        uVar34 = pmaddwd(uVar12,param_2[0x11]);
        uVar6 = pmaddwd(uVar6,param_2[0x1f]);
        uVar7 = pmaddwd(uVar7,param_2[0x1e]);
        uVar8 = pmaddwd(uVar8,param_2[0x1d]);
        uVar9 = pmaddwd(uVar9,param_2[0x1c]);
        uVar10 = pmaddwd(uVar10,param_2[0x1b]);
        uVar11 = pmaddwd(uVar11,param_2[0x1a]);
        uVar12 = pmaddwd(uVar12,param_2[0x19]);
        uVar7 = packssdw(CONCAT44((int)uVar33 + (int)uVar30 + (int)uVar28 + (int)uVar25 +
                                  (int)uVar22 + (int)uVar18 + (int)uVar14 +
                                  (int)((ulonglong)uVar33 >> 0x20) +
                                  (int)((ulonglong)uVar30 >> 0x20) +
                                  (int)((ulonglong)uVar28 >> 0x20) +
                                  (int)((ulonglong)uVar25 >> 0x20) +
                                  (int)((ulonglong)uVar22 >> 0x20) +
                                  (int)((ulonglong)uVar18 >> 0x20) +
                                  (int)((ulonglong)uVar14 >> 0x20) >> 0xf,
                                  (int)uVar32 + (int)uVar27 + (int)uVar24 + (int)uVar20 +
                                  (int)uVar17 + (int)uVar15 + (int)uVar5 +
                                  (int)((ulonglong)uVar32 >> 0x20) +
                                  (int)((ulonglong)uVar27 >> 0x20) +
                                  (int)((ulonglong)uVar24 >> 0x20) +
                                  (int)((ulonglong)uVar20 >> 0x20) +
                                  (int)((ulonglong)uVar17 >> 0x20) +
                                  (int)((ulonglong)uVar15 >> 0x20) + (int)((ulonglong)uVar5 >> 0x20)
                                  >> 0xf),
                         CONCAT44((int)uVar12 + (int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8
                                  + (int)uVar7 + (int)uVar6 +
                                  (int)((ulonglong)uVar12 >> 0x20) +
                                  (int)((ulonglong)uVar11 >> 0x20) +
                                  (int)((ulonglong)uVar10 >> 0x20) + (int)((ulonglong)uVar9 >> 0x20)
                                  + (int)((ulonglong)uVar8 >> 0x20) +
                                  (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar6 >> 0x20)
                                  >> 0xf,(int)uVar34 + (int)uVar31 + (int)uVar29 + (int)uVar26 +
                                         (int)uVar23 + (int)uVar19 + (int)uVar16 +
                                         (int)((ulonglong)uVar34 >> 0x20) +
                                         (int)((ulonglong)uVar31 >> 0x20) +
                                         (int)((ulonglong)uVar29 >> 0x20) +
                                         (int)((ulonglong)uVar26 >> 0x20) +
                                         (int)((ulonglong)uVar23 >> 0x20) +
                                         (int)((ulonglong)uVar19 >> 0x20) +
                                         (int)((ulonglong)uVar16 >> 0x20) >> 0xf));
        uVar8 = pmulhw(uVar7,local_a0);
        local_a0 = paddsw(local_a0,CONCAT26(sVar1,CONCAT24(sVar1,CONCAT22(sVar1,sVar1))));
        iVar21 = (uint)(ushort)((ulonglong)uVar8 >> 0x10) << 0x10;
        iVar4 = (uint)(ushort)uVar8 << 0x10;
        *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) + (iVar21 >> 0xe),
                            (int)*param_5 + (iVar4 >> 0xe));
        uVar7 = pmaddwd(CONCAT44(iVar21 >> 0xf,iVar4 >> 0xf),
                        (ulonglong)CONCAT24(param_7,(uint)param_7));
        puVar3 = param_6 + 1;
        *param_6 = CONCAT44((int)((ulonglong)*param_6 >> 0x20) + (int)((longlong)uVar7 >> 0x2e),
                            (int)*param_6 + ((int)uVar7 >> 0xe));
        iVar21 = (uint)(ushort)((ulonglong)uVar8 >> 0x20) << 0x10;
        uVar13 = (uint)((ulonglong)uVar8 >> 0x20) & 0xffff0000;
        uVar7 = param_5[1];
        param_5[1] = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + ((int)uVar13 >> 0xe),
                              (int)uVar7 + (iVar21 >> 0xe));
        uVar7 = *puVar3;
        uVar8 = pmaddwd(CONCAT44((int)uVar13 >> 0xf,iVar21 >> 0xf),
                        (ulonglong)CONCAT24(param_7,(uint)param_7));
        param_5 = param_5 + 2;
        param_6 = param_6 + 2;
        puVar2 = puVar2 + 1;
        param_4 = param_4 + -1;
        *puVar3 = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + (int)((longlong)uVar8 >> 0x2e),
                           (int)uVar7 + ((int)uVar8 >> 0xe));
      } while (param_4 != 0);
      return;
    }
    break;
  case 2:
    if (param_4 != 0) {
      do {
        uVar7 = puVar2[6];
        uVar8 = puVar2[5];
        uVar9 = puVar2[4];
        uVar10 = puVar2[3];
        uVar11 = puVar2[2];
        uVar12 = puVar2[1];
        uVar6 = pmaddwd(uVar7,param_2[6]);
        uVar16 = pmaddwd(uVar8,param_2[5]);
        uVar18 = pmaddwd(uVar9,param_2[4]);
        uVar22 = pmaddwd(uVar10,param_2[3]);
        uVar25 = pmaddwd(uVar11,param_2[2]);
        uVar28 = pmaddwd(uVar12,param_2[1]);
        uVar31 = pmaddwd(*puVar2,*param_2);
        uVar17 = pmaddwd(uVar7,param_2[0xe]);
        uVar19 = pmaddwd(uVar8,param_2[0xd]);
        uVar23 = pmaddwd(uVar9,param_2[0xc]);
        uVar26 = pmaddwd(uVar10,param_2[0xb]);
        uVar29 = pmaddwd(uVar11,param_2[10]);
        uVar32 = pmaddwd(uVar12,param_2[9]);
        uVar5 = pmaddwd(*puVar2,param_2[8]);
        uVar14 = pmaddwd(puVar2[7],param_2[0x17]);
        uVar20 = pmaddwd(uVar7,param_2[0x16]);
        uVar24 = pmaddwd(uVar8,param_2[0x15]);
        uVar27 = pmaddwd(uVar9,param_2[0x14]);
        uVar30 = pmaddwd(uVar10,param_2[0x13]);
        uVar33 = pmaddwd(uVar11,param_2[0x12]);
        uVar34 = pmaddwd(uVar12,param_2[0x11]);
        uVar15 = pmaddwd(puVar2[7],param_2[0x1f]);
        uVar7 = pmaddwd(uVar7,param_2[0x1e]);
        uVar8 = pmaddwd(uVar8,param_2[0x1d]);
        uVar9 = pmaddwd(uVar9,param_2[0x1c]);
        uVar10 = pmaddwd(uVar10,param_2[0x1b]);
        uVar11 = pmaddwd(uVar11,param_2[0x1a]);
        uVar12 = pmaddwd(uVar12,param_2[0x19]);
        uVar7 = packssdw(CONCAT44((int)uVar5 + (int)uVar32 + (int)uVar29 + (int)uVar26 + (int)uVar23
                                  + (int)uVar19 + (int)uVar17 +
                                  (int)((ulonglong)uVar5 >> 0x20) + (int)((ulonglong)uVar32 >> 0x20)
                                  + (int)((ulonglong)uVar29 >> 0x20) +
                                  (int)((ulonglong)uVar26 >> 0x20) +
                                  (int)((ulonglong)uVar23 >> 0x20) +
                                  (int)((ulonglong)uVar19 >> 0x20) +
                                  (int)((ulonglong)uVar17 >> 0x20) >> 0xf,
                                  (int)uVar31 + (int)uVar28 + (int)uVar25 + (int)uVar22 +
                                  (int)uVar18 + (int)uVar16 + (int)uVar6 +
                                  (int)((ulonglong)uVar31 >> 0x20) +
                                  (int)((ulonglong)uVar28 >> 0x20) +
                                  (int)((ulonglong)uVar25 >> 0x20) +
                                  (int)((ulonglong)uVar22 >> 0x20) +
                                  (int)((ulonglong)uVar18 >> 0x20) +
                                  (int)((ulonglong)uVar16 >> 0x20) + (int)((ulonglong)uVar6 >> 0x20)
                                  >> 0xf),
                         CONCAT44((int)uVar12 + (int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8
                                  + (int)uVar7 + (int)uVar15 +
                                  (int)((ulonglong)uVar12 >> 0x20) +
                                  (int)((ulonglong)uVar11 >> 0x20) +
                                  (int)((ulonglong)uVar10 >> 0x20) + (int)((ulonglong)uVar9 >> 0x20)
                                  + (int)((ulonglong)uVar8 >> 0x20) +
                                  (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar15 >> 0x20)
                                  >> 0xf,(int)uVar34 + (int)uVar33 + (int)uVar30 + (int)uVar27 +
                                         (int)uVar24 + (int)uVar20 + (int)uVar14 +
                                         (int)((ulonglong)uVar34 >> 0x20) +
                                         (int)((ulonglong)uVar33 >> 0x20) +
                                         (int)((ulonglong)uVar30 >> 0x20) +
                                         (int)((ulonglong)uVar27 >> 0x20) +
                                         (int)((ulonglong)uVar24 >> 0x20) +
                                         (int)((ulonglong)uVar20 >> 0x20) +
                                         (int)((ulonglong)uVar14 >> 0x20) >> 0xf));
        uVar8 = pmulhw(uVar7,local_a0);
        local_a0 = paddsw(local_a0,CONCAT26(sVar1,CONCAT24(sVar1,CONCAT22(sVar1,sVar1))));
        iVar21 = (uint)(ushort)((ulonglong)uVar8 >> 0x10) << 0x10;
        iVar4 = (uint)(ushort)uVar8 << 0x10;
        *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) + (iVar21 >> 0xe),
                            (int)*param_5 + (iVar4 >> 0xe));
        uVar7 = pmaddwd(CONCAT44(iVar21 >> 0xf,iVar4 >> 0xf),
                        (ulonglong)CONCAT24(param_7,(uint)param_7));
        puVar3 = param_6 + 1;
        *param_6 = CONCAT44((int)((ulonglong)*param_6 >> 0x20) + (int)((longlong)uVar7 >> 0x2e),
                            (int)*param_6 + ((int)uVar7 >> 0xe));
        iVar21 = (uint)(ushort)((ulonglong)uVar8 >> 0x20) << 0x10;
        uVar13 = (uint)((ulonglong)uVar8 >> 0x20) & 0xffff0000;
        uVar7 = param_5[1];
        param_5[1] = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + ((int)uVar13 >> 0xe),
                              (int)uVar7 + (iVar21 >> 0xe));
        uVar7 = *puVar3;
        uVar8 = pmaddwd(CONCAT44((int)uVar13 >> 0xf,iVar21 >> 0xf),
                        (ulonglong)CONCAT24(param_7,(uint)param_7));
        param_5 = param_5 + 2;
        param_6 = param_6 + 2;
        puVar2 = puVar2 + 1;
        param_4 = param_4 + -1;
        *puVar3 = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + (int)((longlong)uVar8 >> 0x2e),
                           (int)uVar7 + ((int)uVar8 >> 0xe));
      } while (param_4 != 0);
      return;
    }
    break;
  case 3:
    for (; param_4 != 0; param_4 = param_4 + -1) {
      uVar7 = puVar2[6];
      uVar8 = puVar2[5];
      uVar9 = puVar2[4];
      uVar10 = puVar2[3];
      uVar11 = puVar2[2];
      uVar12 = puVar2[1];
      uVar6 = *puVar2;
      uVar5 = pmaddwd(uVar7,param_2[6]);
      uVar14 = pmaddwd(uVar8,param_2[5]);
      uVar18 = pmaddwd(uVar9,param_2[4]);
      uVar22 = pmaddwd(uVar10,param_2[3]);
      uVar25 = pmaddwd(uVar11,param_2[2]);
      uVar28 = pmaddwd(uVar12,param_2[1]);
      uVar31 = pmaddwd(uVar6,*param_2);
      uVar15 = pmaddwd(uVar7,param_2[0xe]);
      uVar19 = pmaddwd(uVar8,param_2[0xd]);
      uVar23 = pmaddwd(uVar9,param_2[0xc]);
      uVar26 = pmaddwd(uVar10,param_2[0xb]);
      uVar29 = pmaddwd(uVar11,param_2[10]);
      uVar32 = pmaddwd(uVar12,param_2[9]);
      uVar34 = pmaddwd(uVar6,param_2[8]);
      uVar16 = pmaddwd(uVar7,param_2[0x16]);
      uVar20 = pmaddwd(uVar8,param_2[0x15]);
      uVar24 = pmaddwd(uVar9,param_2[0x14]);
      uVar27 = pmaddwd(uVar10,param_2[0x13]);
      uVar30 = pmaddwd(uVar11,param_2[0x12]);
      uVar33 = pmaddwd(uVar12,param_2[0x11]);
      uVar6 = pmaddwd(uVar6,param_2[0x10]);
      uVar17 = pmaddwd(puVar2[7],param_2[0x1f]);
      uVar7 = pmaddwd(uVar7,param_2[0x1e]);
      uVar8 = pmaddwd(uVar8,param_2[0x1d]);
      uVar9 = pmaddwd(uVar9,param_2[0x1c]);
      uVar10 = pmaddwd(uVar10,param_2[0x1b]);
      uVar11 = pmaddwd(uVar11,param_2[0x1a]);
      uVar12 = pmaddwd(uVar12,param_2[0x19]);
      uVar7 = packssdw(CONCAT44((int)uVar34 + (int)uVar32 + (int)uVar29 + (int)uVar26 + (int)uVar23
                                + (int)uVar19 + (int)uVar15 +
                                (int)((ulonglong)uVar34 >> 0x20) + (int)((ulonglong)uVar32 >> 0x20)
                                + (int)((ulonglong)uVar29 >> 0x20) +
                                (int)((ulonglong)uVar26 >> 0x20) + (int)((ulonglong)uVar23 >> 0x20)
                                + (int)((ulonglong)uVar19 >> 0x20) +
                                (int)((ulonglong)uVar15 >> 0x20) >> 0xf,
                                (int)uVar31 + (int)uVar28 + (int)uVar25 + (int)uVar22 + (int)uVar18
                                + (int)uVar14 + (int)uVar5 +
                                (int)((ulonglong)uVar31 >> 0x20) + (int)((ulonglong)uVar28 >> 0x20)
                                + (int)((ulonglong)uVar25 >> 0x20) +
                                (int)((ulonglong)uVar22 >> 0x20) + (int)((ulonglong)uVar18 >> 0x20)
                                + (int)((ulonglong)uVar14 >> 0x20) + (int)((ulonglong)uVar5 >> 0x20)
                                >> 0xf),
                       CONCAT44((int)uVar12 + (int)uVar11 + (int)uVar10 + (int)uVar9 + (int)uVar8 +
                                (int)uVar7 + (int)uVar17 +
                                (int)((ulonglong)uVar12 >> 0x20) + (int)((ulonglong)uVar11 >> 0x20)
                                + (int)((ulonglong)uVar10 >> 0x20) + (int)((ulonglong)uVar9 >> 0x20)
                                + (int)((ulonglong)uVar8 >> 0x20) + (int)((ulonglong)uVar7 >> 0x20)
                                + (int)((ulonglong)uVar17 >> 0x20) >> 0xf,
                                (int)uVar6 + (int)uVar33 + (int)uVar30 + (int)uVar27 + (int)uVar24 +
                                (int)uVar20 + (int)uVar16 +
                                (int)((ulonglong)uVar6 >> 0x20) + (int)((ulonglong)uVar33 >> 0x20) +
                                (int)((ulonglong)uVar30 >> 0x20) + (int)((ulonglong)uVar27 >> 0x20)
                                + (int)((ulonglong)uVar24 >> 0x20) +
                                (int)((ulonglong)uVar20 >> 0x20) + (int)((ulonglong)uVar16 >> 0x20)
                                >> 0xf));
      uVar8 = pmulhw(uVar7,local_a0);
      local_a0 = paddsw(local_a0,CONCAT26(sVar1,CONCAT24(sVar1,CONCAT22(sVar1,sVar1))));
      iVar21 = (uint)(ushort)((ulonglong)uVar8 >> 0x10) << 0x10;
      iVar4 = (uint)(ushort)uVar8 << 0x10;
      *param_5 = CONCAT44((int)((ulonglong)*param_5 >> 0x20) + (iVar21 >> 0xe),
                          (int)*param_5 + (iVar4 >> 0xe));
      uVar7 = pmaddwd(CONCAT44(iVar21 >> 0xf,iVar4 >> 0xf),
                      (ulonglong)CONCAT24(param_7,(uint)param_7));
      puVar3 = param_6 + 1;
      *param_6 = CONCAT44((int)((ulonglong)*param_6 >> 0x20) + (int)((longlong)uVar7 >> 0x2e),
                          (int)*param_6 + ((int)uVar7 >> 0xe));
      iVar21 = (uint)(ushort)((ulonglong)uVar8 >> 0x20) << 0x10;
      uVar13 = (uint)((ulonglong)uVar8 >> 0x20) & 0xffff0000;
      uVar7 = param_5[1];
      param_5[1] = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + ((int)uVar13 >> 0xe),
                            (int)uVar7 + (iVar21 >> 0xe));
      uVar7 = *puVar3;
      uVar8 = pmaddwd(CONCAT44((int)uVar13 >> 0xf,iVar21 >> 0xf),
                      (ulonglong)CONCAT24(param_7,(uint)param_7));
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      puVar2 = puVar2 + 1;
      *puVar3 = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + (int)((longlong)uVar8 >> 0x2e),
                         (int)uVar7 + ((int)uVar8 >> 0xe));
    }
  }
  return;
}


//// FUNCTION FUN_00c6d040 @ 00c6d040 ////

void __thiscall FUN_00c6d040(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  *(int *)this = *(int *)this + *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + iVar1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + iVar2;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + iVar3;
  return;
}


//// FUNCTION FUN_00c6d070 @ 00c6d070 ////

void __thiscall FUN_00c6d070(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)((int)this + 8);
  iVar3 = *(int *)((int)this + 0xc);
  *param_1 = *(int *)this >> param_2;
  param_1[1] = iVar1 >> param_2;
  param_1[2] = iVar2 >> param_2;
  param_1[3] = iVar3 >> param_2;
  return;
}


//// FUNCTION FUN_00c6d090 @ 00c6d090 ////

void __thiscall FUN_00c6d090(void *this,int param_1)

{
  *(int *)this = *(int *)this >> param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) >> param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) >> param_1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) >> param_1;
  return;
}


//// FUNCTION FUN_00c6d140 @ 00c6d140 ////

void __cdecl FUN_00c6d140(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  short *psVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = param_3;
  for (iVar1 = 0xa0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)((int)param_3 + (8 - param_2) * 2);
  psVar3 = (short *)(param_1 + 0x30);
  iVar1 = 0x19;
  puVar2 = puVar4;
  do {
    *(short *)puVar2 =
         (short)((int)(*psVar3 * param_4 + (*psVar3 * param_4 >> 0x1f & 0x7fffU)) >> 0xf);
    puVar2 = (undefined4 *)((int)puVar2 + 2);
    psVar3 = psVar3 + -1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = puVar4;
  puVar5 = (undefined4 *)((int)param_3 + (0x31 - param_2) * 2);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  puVar2 = puVar4;
  puVar5 = (undefined4 *)((int)param_3 + (0x5a - param_2) * 2);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  puVar2 = puVar4;
  puVar5 = (undefined4 *)((int)param_3 + (0x83 - param_2) * 2);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  puVar2 = puVar4;
  puVar5 = (undefined4 *)((int)param_3 + (0xac - param_2) * 2);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  puVar2 = puVar4;
  puVar5 = (undefined4 *)((int)param_3 + (0xd5 - param_2) * 2);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  puVar2 = puVar4;
  puVar5 = (undefined4 *)((int)param_3 + (0xfe - param_2) * 2);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  puVar2 = (undefined4 *)((int)param_3 + (0x127 - param_2) * 2);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)puVar4;
  return;
}


//// FUNCTION PolyphaseFIR_Resample8Phase @ 00c6d230 ////

void __cdecl
PolyphaseFIR_Resample8Phase
          (int param_1,undefined1 (*param_2) [16],undefined4 param_3,int param_4,int *param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  pauVar1 = (undefined1 (*) [16])(param_1 + -0x50);
  switch(param_3) {
  case 0:
    if (param_4 != 0) {
      pauVar1 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar2 = *pauVar1;
        auVar3 = pauVar1[-1];
        auVar4 = pauVar1[-2];
        auVar6 = pauVar1[-3];
        auVar10 = pmaddwd(auVar2,param_2[0x18]);
        auVar13 = pmaddwd(auVar3,param_2[0x17]);
        auVar16 = pmaddwd(auVar4,param_2[0x16]);
        auVar7 = pmaddwd(auVar6,param_2[0x15]);
        auVar8 = pmaddwd(auVar2,param_2[0x1d]);
        auVar11 = pmaddwd(auVar3,param_2[0x1c]);
        auVar14 = pmaddwd(auVar4,param_2[0x1b]);
        auVar17 = pmaddwd(auVar6,param_2[0x1a]);
        auVar9 = pmaddwd(auVar2,param_2[0x22]);
        auVar12 = pmaddwd(auVar3,param_2[0x21]);
        auVar15 = pmaddwd(auVar4,param_2[0x20]);
        auVar18 = pmaddwd(auVar6,param_2[0x1f]);
        auVar2 = pmaddwd(auVar2,param_2[0x27]);
        auVar5 = pmaddwd(auVar3,param_2[0x26]);
        auVar4 = pmaddwd(auVar4,param_2[0x25]);
        auVar3 = pmaddwd(auVar6,param_2[0x24]);
        *param_5 = *param_5 +
                   (auVar7._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ +
                    auVar7._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ +
                    auVar7._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ +
                    auVar7._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ >> 0xe);
        param_5[1] = param_5[1] +
                     (auVar17._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar17._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar17._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar17._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[2] = param_5[2] +
                     (auVar18._0_4_ + auVar15._0_4_ + auVar12._0_4_ + auVar9._0_4_ +
                      auVar18._8_4_ + auVar15._8_4_ + auVar12._8_4_ + auVar9._8_4_ +
                      auVar18._4_4_ + auVar15._4_4_ + auVar12._4_4_ + auVar9._4_4_ +
                      auVar18._12_4_ + auVar15._12_4_ + auVar12._12_4_ + auVar9._12_4_ >> 0xe);
        param_5[3] = param_5[3] +
                     (auVar3._0_4_ + auVar4._0_4_ + auVar5._0_4_ + auVar2._0_4_ +
                      auVar3._8_4_ + auVar4._8_4_ + auVar5._8_4_ + auVar2._8_4_ +
                      auVar3._4_4_ + auVar4._4_4_ + auVar5._4_4_ + auVar2._4_4_ +
                      auVar3._12_4_ + auVar4._12_4_ + auVar5._12_4_ + auVar2._12_4_ >> 0xe);
        auVar2 = pauVar1[1];
        auVar3 = *pauVar1;
        auVar4 = pauVar1[-1];
        auVar6 = pauVar1[-2];
        auVar10 = pmaddwd(auVar2,param_2[4]);
        auVar13 = pmaddwd(auVar3,param_2[3]);
        auVar16 = pmaddwd(auVar4,param_2[2]);
        auVar7 = pmaddwd(auVar6,param_2[1]);
        auVar8 = pmaddwd(auVar2,param_2[9]);
        auVar11 = pmaddwd(auVar3,param_2[8]);
        auVar14 = pmaddwd(auVar4,param_2[7]);
        auVar17 = pmaddwd(auVar6,param_2[6]);
        auVar9 = pmaddwd(auVar2,param_2[0xe]);
        auVar12 = pmaddwd(auVar3,param_2[0xd]);
        auVar15 = pmaddwd(auVar4,param_2[0xc]);
        auVar18 = pmaddwd(auVar6,param_2[0xb]);
        auVar2 = pmaddwd(auVar2,param_2[0x13]);
        auVar5 = pmaddwd(auVar3,param_2[0x12]);
        auVar4 = pmaddwd(auVar4,param_2[0x11]);
        auVar3 = pmaddwd(auVar6,param_2[0x10]);
        pauVar1 = pauVar1 + 1;
        param_4 = param_4 + -1;
        param_5[4] = param_5[4] +
                     (auVar7._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ +
                      auVar7._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ +
                      auVar7._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ +
                      auVar7._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ >> 0xe);
        param_5[5] = param_5[5] +
                     (auVar17._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar17._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar17._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar17._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[6] = param_5[6] +
                     (auVar18._0_4_ + auVar15._0_4_ + auVar12._0_4_ + auVar9._0_4_ +
                      auVar18._8_4_ + auVar15._8_4_ + auVar12._8_4_ + auVar9._8_4_ +
                      auVar18._4_4_ + auVar15._4_4_ + auVar12._4_4_ + auVar9._4_4_ +
                      auVar18._12_4_ + auVar15._12_4_ + auVar12._12_4_ + auVar9._12_4_ >> 0xe);
        param_5[7] = param_5[7] +
                     (auVar3._0_4_ + auVar4._0_4_ + auVar5._0_4_ + auVar2._0_4_ +
                      auVar3._8_4_ + auVar4._8_4_ + auVar5._8_4_ + auVar2._8_4_ +
                      auVar3._4_4_ + auVar4._4_4_ + auVar5._4_4_ + auVar2._4_4_ +
                      auVar3._12_4_ + auVar4._12_4_ + auVar5._12_4_ + auVar2._12_4_ >> 0xe);
        param_5 = param_5 + 8;
      } while (param_4 != 0);
      return;
    }
    break;
  case 1:
    if (param_4 != 0) {
      pauVar1 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar2 = *pauVar1;
        auVar3 = pauVar1[-1];
        auVar4 = pauVar1[-2];
        auVar6 = pauVar1[-3];
        auVar10 = pmaddwd(auVar2,param_2[0x18]);
        auVar13 = pmaddwd(auVar3,param_2[0x17]);
        auVar16 = pmaddwd(auVar4,param_2[0x16]);
        auVar7 = pmaddwd(auVar6,param_2[0x15]);
        auVar8 = pmaddwd(auVar2,param_2[0x1d]);
        auVar11 = pmaddwd(auVar3,param_2[0x1c]);
        auVar14 = pmaddwd(auVar4,param_2[0x1b]);
        auVar17 = pmaddwd(auVar6,param_2[0x1a]);
        auVar9 = pmaddwd(auVar2,param_2[0x22]);
        auVar12 = pmaddwd(auVar3,param_2[0x21]);
        auVar15 = pmaddwd(auVar4,param_2[0x20]);
        auVar18 = pmaddwd(auVar6,param_2[0x1f]);
        auVar2 = pmaddwd(auVar2,param_2[0x27]);
        auVar5 = pmaddwd(auVar3,param_2[0x26]);
        auVar4 = pmaddwd(auVar4,param_2[0x25]);
        auVar3 = pmaddwd(auVar6,param_2[0x24]);
        *param_5 = *param_5 +
                   (auVar7._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ +
                    auVar7._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ +
                    auVar7._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ +
                    auVar7._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ >> 0xe);
        param_5[1] = param_5[1] +
                     (auVar17._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar17._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar17._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar17._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[2] = param_5[2] +
                     (auVar18._0_4_ + auVar15._0_4_ + auVar12._0_4_ + auVar9._0_4_ +
                      auVar18._8_4_ + auVar15._8_4_ + auVar12._8_4_ + auVar9._8_4_ +
                      auVar18._4_4_ + auVar15._4_4_ + auVar12._4_4_ + auVar9._4_4_ +
                      auVar18._12_4_ + auVar15._12_4_ + auVar12._12_4_ + auVar9._12_4_ >> 0xe);
        param_5[3] = param_5[3] +
                     (auVar3._0_4_ + auVar4._0_4_ + auVar5._0_4_ + auVar2._0_4_ +
                      auVar3._8_4_ + auVar4._8_4_ + auVar5._8_4_ + auVar2._8_4_ +
                      auVar3._4_4_ + auVar4._4_4_ + auVar5._4_4_ + auVar2._4_4_ +
                      auVar3._12_4_ + auVar4._12_4_ + auVar5._12_4_ + auVar2._12_4_ >> 0xe);
        auVar2 = *pauVar1;
        auVar3 = pauVar1[-1];
        auVar4 = pauVar1[-2];
        auVar7 = pmaddwd(auVar2,param_2[3]);
        auVar9 = pmaddwd(auVar3,param_2[2]);
        auVar12 = pmaddwd(auVar4,param_2[1]);
        auVar15 = pmaddwd(pauVar1[-3],*param_2);
        auVar6 = pauVar1[1];
        auVar5 = pmaddwd(auVar6,param_2[9]);
        auVar10 = pmaddwd(auVar2,param_2[8]);
        auVar13 = pmaddwd(auVar3,param_2[7]);
        auVar16 = pmaddwd(auVar4,param_2[6]);
        auVar8 = pmaddwd(auVar6,param_2[0xe]);
        auVar11 = pmaddwd(auVar2,param_2[0xd]);
        auVar14 = pmaddwd(auVar3,param_2[0xc]);
        auVar17 = pmaddwd(auVar4,param_2[0xb]);
        auVar6 = pmaddwd(auVar6,param_2[0x13]);
        auVar2 = pmaddwd(auVar2,param_2[0x12]);
        auVar3 = pmaddwd(auVar3,param_2[0x11]);
        auVar4 = pmaddwd(auVar4,param_2[0x10]);
        pauVar1 = pauVar1 + 1;
        param_4 = param_4 + -1;
        param_5[4] = param_5[4] +
                     (auVar15._0_4_ + auVar12._0_4_ + auVar9._0_4_ + auVar7._0_4_ +
                      auVar15._8_4_ + auVar12._8_4_ + auVar9._8_4_ + auVar7._8_4_ +
                      auVar15._4_4_ + auVar12._4_4_ + auVar9._4_4_ + auVar7._4_4_ +
                      auVar15._12_4_ + auVar12._12_4_ + auVar9._12_4_ + auVar7._12_4_ >> 0xe);
        param_5[5] = param_5[5] +
                     (auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ + auVar5._0_4_ +
                      auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ + auVar5._8_4_ +
                      auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ + auVar5._4_4_ +
                      auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ + auVar5._12_4_ >> 0xe);
        param_5[6] = param_5[6] +
                     (auVar17._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar17._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar17._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar17._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[7] = param_5[7] +
                     (auVar4._0_4_ + auVar3._0_4_ + auVar2._0_4_ + auVar6._0_4_ +
                      auVar4._8_4_ + auVar3._8_4_ + auVar2._8_4_ + auVar6._8_4_ +
                      auVar4._4_4_ + auVar3._4_4_ + auVar2._4_4_ + auVar6._4_4_ +
                      auVar4._12_4_ + auVar3._12_4_ + auVar2._12_4_ + auVar6._12_4_ >> 0xe);
        param_5 = param_5 + 8;
      } while (param_4 != 0);
      return;
    }
    break;
  case 2:
    if (param_4 != 0) {
      pauVar1 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar2 = *pauVar1;
        auVar3 = pauVar1[-1];
        auVar4 = pauVar1[-2];
        auVar6 = pauVar1[-3];
        auVar10 = pmaddwd(auVar2,param_2[0x18]);
        auVar13 = pmaddwd(auVar3,param_2[0x17]);
        auVar16 = pmaddwd(auVar4,param_2[0x16]);
        auVar7 = pmaddwd(auVar6,param_2[0x15]);
        auVar8 = pmaddwd(auVar2,param_2[0x1d]);
        auVar11 = pmaddwd(auVar3,param_2[0x1c]);
        auVar14 = pmaddwd(auVar4,param_2[0x1b]);
        auVar17 = pmaddwd(auVar6,param_2[0x1a]);
        auVar9 = pmaddwd(auVar2,param_2[0x22]);
        auVar12 = pmaddwd(auVar3,param_2[0x21]);
        auVar15 = pmaddwd(auVar4,param_2[0x20]);
        auVar18 = pmaddwd(auVar6,param_2[0x1f]);
        auVar2 = pmaddwd(auVar2,param_2[0x27]);
        auVar5 = pmaddwd(auVar3,param_2[0x26]);
        auVar4 = pmaddwd(auVar4,param_2[0x25]);
        auVar3 = pmaddwd(auVar6,param_2[0x24]);
        *param_5 = *param_5 +
                   (auVar7._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ +
                    auVar7._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ +
                    auVar7._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ +
                    auVar7._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ >> 0xe);
        param_5[1] = param_5[1] +
                     (auVar17._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar17._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar17._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar17._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[2] = param_5[2] +
                     (auVar18._0_4_ + auVar15._0_4_ + auVar12._0_4_ + auVar9._0_4_ +
                      auVar18._8_4_ + auVar15._8_4_ + auVar12._8_4_ + auVar9._8_4_ +
                      auVar18._4_4_ + auVar15._4_4_ + auVar12._4_4_ + auVar9._4_4_ +
                      auVar18._12_4_ + auVar15._12_4_ + auVar12._12_4_ + auVar9._12_4_ >> 0xe);
        param_5[3] = param_5[3] +
                     (auVar3._0_4_ + auVar4._0_4_ + auVar5._0_4_ + auVar2._0_4_ +
                      auVar3._8_4_ + auVar4._8_4_ + auVar5._8_4_ + auVar2._8_4_ +
                      auVar3._4_4_ + auVar4._4_4_ + auVar5._4_4_ + auVar2._4_4_ +
                      auVar3._12_4_ + auVar4._12_4_ + auVar5._12_4_ + auVar2._12_4_ >> 0xe);
        auVar2 = *pauVar1;
        auVar3 = pauVar1[-1];
        auVar4 = pauVar1[-2];
        auVar10 = pmaddwd(auVar2,param_2[3]);
        auVar13 = pmaddwd(auVar3,param_2[2]);
        auVar16 = pmaddwd(auVar4,param_2[1]);
        auVar6 = pmaddwd(pauVar1[-3],*param_2);
        auVar8 = pmaddwd(auVar2,param_2[8]);
        auVar11 = pmaddwd(auVar3,param_2[7]);
        auVar14 = pmaddwd(auVar4,param_2[6]);
        auVar5 = pmaddwd(pauVar1[-3],param_2[5]);
        auVar7 = pmaddwd(pauVar1[1],param_2[0xe]);
        auVar12 = pmaddwd(auVar2,param_2[0xd]);
        auVar15 = pmaddwd(auVar3,param_2[0xc]);
        auVar17 = pmaddwd(auVar4,param_2[0xb]);
        auVar9 = pmaddwd(pauVar1[1],param_2[0x13]);
        auVar2 = pmaddwd(auVar2,param_2[0x12]);
        auVar3 = pmaddwd(auVar3,param_2[0x11]);
        auVar4 = pmaddwd(auVar4,param_2[0x10]);
        pauVar1 = pauVar1 + 1;
        param_4 = param_4 + -1;
        param_5[4] = param_5[4] +
                     (auVar6._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ +
                      auVar6._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ +
                      auVar6._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ +
                      auVar6._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ >> 0xe);
        param_5[5] = param_5[5] +
                     (auVar5._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar5._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar5._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar5._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[6] = param_5[6] +
                     (auVar17._0_4_ + auVar15._0_4_ + auVar12._0_4_ + auVar7._0_4_ +
                      auVar17._8_4_ + auVar15._8_4_ + auVar12._8_4_ + auVar7._8_4_ +
                      auVar17._4_4_ + auVar15._4_4_ + auVar12._4_4_ + auVar7._4_4_ +
                      auVar17._12_4_ + auVar15._12_4_ + auVar12._12_4_ + auVar7._12_4_ >> 0xe);
        param_5[7] = param_5[7] +
                     (auVar4._0_4_ + auVar3._0_4_ + auVar2._0_4_ + auVar9._0_4_ +
                      auVar4._8_4_ + auVar3._8_4_ + auVar2._8_4_ + auVar9._8_4_ +
                      auVar4._4_4_ + auVar3._4_4_ + auVar2._4_4_ + auVar9._4_4_ +
                      auVar4._12_4_ + auVar3._12_4_ + auVar2._12_4_ + auVar9._12_4_ >> 0xe);
        param_5 = param_5 + 8;
      } while (param_4 != 0);
      return;
    }
    break;
  case 3:
    if (param_4 != 0) {
      pauVar1 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar2 = *pauVar1;
        auVar3 = pauVar1[-1];
        auVar4 = pauVar1[-2];
        auVar6 = pauVar1[-3];
        auVar10 = pmaddwd(auVar2,param_2[0x18]);
        auVar13 = pmaddwd(auVar3,param_2[0x17]);
        auVar16 = pmaddwd(auVar4,param_2[0x16]);
        auVar7 = pmaddwd(auVar6,param_2[0x15]);
        auVar8 = pmaddwd(auVar2,param_2[0x1d]);
        auVar11 = pmaddwd(auVar3,param_2[0x1c]);
        auVar14 = pmaddwd(auVar4,param_2[0x1b]);
        auVar17 = pmaddwd(auVar6,param_2[0x1a]);
        auVar9 = pmaddwd(auVar2,param_2[0x22]);
        auVar12 = pmaddwd(auVar3,param_2[0x21]);
        auVar15 = pmaddwd(auVar4,param_2[0x20]);
        auVar18 = pmaddwd(auVar6,param_2[0x1f]);
        auVar2 = pmaddwd(auVar2,param_2[0x27]);
        auVar5 = pmaddwd(auVar3,param_2[0x26]);
        auVar4 = pmaddwd(auVar4,param_2[0x25]);
        auVar3 = pmaddwd(auVar6,param_2[0x24]);
        *param_5 = *param_5 +
                   (auVar7._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ +
                    auVar7._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ +
                    auVar7._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ +
                    auVar7._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ >> 0xe);
        param_5[1] = param_5[1] +
                     (auVar17._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar17._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar17._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar17._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[2] = param_5[2] +
                     (auVar18._0_4_ + auVar15._0_4_ + auVar12._0_4_ + auVar9._0_4_ +
                      auVar18._8_4_ + auVar15._8_4_ + auVar12._8_4_ + auVar9._8_4_ +
                      auVar18._4_4_ + auVar15._4_4_ + auVar12._4_4_ + auVar9._4_4_ +
                      auVar18._12_4_ + auVar15._12_4_ + auVar12._12_4_ + auVar9._12_4_ >> 0xe);
        param_5[3] = param_5[3] +
                     (auVar3._0_4_ + auVar4._0_4_ + auVar5._0_4_ + auVar2._0_4_ +
                      auVar3._8_4_ + auVar4._8_4_ + auVar5._8_4_ + auVar2._8_4_ +
                      auVar3._4_4_ + auVar4._4_4_ + auVar5._4_4_ + auVar2._4_4_ +
                      auVar3._12_4_ + auVar4._12_4_ + auVar5._12_4_ + auVar2._12_4_ >> 0xe);
        auVar2 = *pauVar1;
        auVar3 = pauVar1[-1];
        auVar4 = pauVar1[-2];
        auVar6 = pauVar1[-3];
        auVar9 = pmaddwd(auVar2,param_2[3]);
        auVar13 = pmaddwd(auVar3,param_2[2]);
        auVar16 = pmaddwd(auVar4,param_2[1]);
        auVar5 = pmaddwd(auVar6,*param_2);
        auVar7 = pmaddwd(auVar2,param_2[8]);
        auVar10 = pmaddwd(auVar3,param_2[7]);
        auVar14 = pmaddwd(auVar4,param_2[6]);
        auVar17 = pmaddwd(auVar6,param_2[5]);
        auVar8 = pmaddwd(auVar2,param_2[0xd]);
        auVar11 = pmaddwd(auVar3,param_2[0xc]);
        auVar15 = pmaddwd(auVar4,param_2[0xb]);
        auVar6 = pmaddwd(auVar6,param_2[10]);
        auVar12 = pmaddwd(pauVar1[1],param_2[0x13]);
        auVar2 = pmaddwd(auVar2,param_2[0x12]);
        auVar3 = pmaddwd(auVar3,param_2[0x11]);
        auVar4 = pmaddwd(auVar4,param_2[0x10]);
        pauVar1 = pauVar1 + 1;
        param_4 = param_4 + -1;
        param_5[4] = param_5[4] +
                     (auVar5._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar9._0_4_ +
                      auVar5._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar9._8_4_ +
                      auVar5._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar9._4_4_ +
                      auVar5._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar9._12_4_ >> 0xe);
        param_5[5] = param_5[5] +
                     (auVar17._0_4_ + auVar14._0_4_ + auVar10._0_4_ + auVar7._0_4_ +
                      auVar17._8_4_ + auVar14._8_4_ + auVar10._8_4_ + auVar7._8_4_ +
                      auVar17._4_4_ + auVar14._4_4_ + auVar10._4_4_ + auVar7._4_4_ +
                      auVar17._12_4_ + auVar14._12_4_ + auVar10._12_4_ + auVar7._12_4_ >> 0xe);
        param_5[6] = param_5[6] +
                     (auVar6._0_4_ + auVar15._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar6._8_4_ + auVar15._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar6._4_4_ + auVar15._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar6._12_4_ + auVar15._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[7] = param_5[7] +
                     (auVar4._0_4_ + auVar3._0_4_ + auVar2._0_4_ + auVar12._0_4_ +
                      auVar4._8_4_ + auVar3._8_4_ + auVar2._8_4_ + auVar12._8_4_ +
                      auVar4._4_4_ + auVar3._4_4_ + auVar2._4_4_ + auVar12._4_4_ +
                      auVar4._12_4_ + auVar3._12_4_ + auVar2._12_4_ + auVar12._12_4_ >> 0xe);
        param_5 = param_5 + 8;
      } while (param_4 != 0);
      return;
    }
    break;
  case 4:
    if (param_4 != 0) {
      pauVar1 = (undefined1 (*) [16])(param_1 + -0x20);
      do {
        auVar2 = pauVar1[1];
        auVar3 = *pauVar1;
        auVar4 = pauVar1[-1];
        auVar6 = pauVar1[-2];
        auVar10 = pmaddwd(auVar2,param_2[0x18]);
        auVar13 = pmaddwd(auVar3,param_2[0x17]);
        auVar16 = pmaddwd(auVar4,param_2[0x16]);
        auVar7 = pmaddwd(auVar6,param_2[0x15]);
        auVar8 = pmaddwd(auVar2,param_2[0x1d]);
        auVar11 = pmaddwd(auVar3,param_2[0x1c]);
        auVar14 = pmaddwd(auVar4,param_2[0x1b]);
        auVar17 = pmaddwd(auVar6,param_2[0x1a]);
        auVar9 = pmaddwd(auVar2,param_2[0x22]);
        auVar12 = pmaddwd(auVar3,param_2[0x21]);
        auVar15 = pmaddwd(auVar4,param_2[0x20]);
        auVar18 = pmaddwd(auVar6,param_2[0x1f]);
        auVar2 = pmaddwd(auVar2,param_2[0x27]);
        auVar5 = pmaddwd(auVar3,param_2[0x26]);
        auVar4 = pmaddwd(auVar4,param_2[0x25]);
        auVar3 = pmaddwd(auVar6,param_2[0x24]);
        *param_5 = *param_5 +
                   (auVar7._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ +
                    auVar7._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ +
                    auVar7._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ +
                    auVar7._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ >> 0xe);
        param_5[1] = param_5[1] +
                     (auVar17._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar17._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar17._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar17._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[2] = param_5[2] +
                     (auVar18._0_4_ + auVar15._0_4_ + auVar12._0_4_ + auVar9._0_4_ +
                      auVar18._8_4_ + auVar15._8_4_ + auVar12._8_4_ + auVar9._8_4_ +
                      auVar18._4_4_ + auVar15._4_4_ + auVar12._4_4_ + auVar9._4_4_ +
                      auVar18._12_4_ + auVar15._12_4_ + auVar12._12_4_ + auVar9._12_4_ >> 0xe);
        param_5[3] = param_5[3] +
                     (auVar3._0_4_ + auVar4._0_4_ + auVar5._0_4_ + auVar2._0_4_ +
                      auVar3._8_4_ + auVar4._8_4_ + auVar5._8_4_ + auVar2._8_4_ +
                      auVar3._4_4_ + auVar4._4_4_ + auVar5._4_4_ + auVar2._4_4_ +
                      auVar3._12_4_ + auVar4._12_4_ + auVar5._12_4_ + auVar2._12_4_ >> 0xe);
        auVar2 = pauVar1[1];
        auVar3 = *pauVar1;
        auVar4 = pauVar1[-1];
        auVar6 = pauVar1[-2];
        auVar10 = pmaddwd(auVar2,param_2[3]);
        auVar13 = pmaddwd(auVar3,param_2[2]);
        auVar16 = pmaddwd(auVar4,param_2[1]);
        auVar7 = pmaddwd(auVar6,*param_2);
        auVar8 = pmaddwd(auVar2,param_2[8]);
        auVar11 = pmaddwd(auVar3,param_2[7]);
        auVar14 = pmaddwd(auVar4,param_2[6]);
        auVar17 = pmaddwd(auVar6,param_2[5]);
        auVar9 = pmaddwd(auVar2,param_2[0xd]);
        auVar12 = pmaddwd(auVar3,param_2[0xc]);
        auVar15 = pmaddwd(auVar4,param_2[0xb]);
        auVar18 = pmaddwd(auVar6,param_2[10]);
        auVar2 = pmaddwd(auVar2,param_2[0x12]);
        auVar5 = pmaddwd(auVar3,param_2[0x11]);
        auVar4 = pmaddwd(auVar4,param_2[0x10]);
        auVar3 = pmaddwd(auVar6,param_2[0xf]);
        pauVar1 = pauVar1 + 1;
        param_4 = param_4 + -1;
        param_5[4] = param_5[4] +
                     (auVar7._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ +
                      auVar7._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ +
                      auVar7._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ +
                      auVar7._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ >> 0xe);
        param_5[5] = param_5[5] +
                     (auVar17._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar17._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar17._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar17._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[6] = param_5[6] +
                     (auVar18._0_4_ + auVar15._0_4_ + auVar12._0_4_ + auVar9._0_4_ +
                      auVar18._8_4_ + auVar15._8_4_ + auVar12._8_4_ + auVar9._8_4_ +
                      auVar18._4_4_ + auVar15._4_4_ + auVar12._4_4_ + auVar9._4_4_ +
                      auVar18._12_4_ + auVar15._12_4_ + auVar12._12_4_ + auVar9._12_4_ >> 0xe);
        param_5[7] = param_5[7] +
                     (auVar3._0_4_ + auVar4._0_4_ + auVar5._0_4_ + auVar2._0_4_ +
                      auVar3._8_4_ + auVar4._8_4_ + auVar5._8_4_ + auVar2._8_4_ +
                      auVar3._4_4_ + auVar4._4_4_ + auVar5._4_4_ + auVar2._4_4_ +
                      auVar3._12_4_ + auVar4._12_4_ + auVar5._12_4_ + auVar2._12_4_ >> 0xe);
        param_5 = param_5 + 8;
      } while (param_4 != 0);
      return;
    }
    break;
  case 5:
    if (param_4 != 0) {
      do {
        auVar2 = pauVar1[3];
        auVar3 = pauVar1[2];
        auVar4 = pauVar1[1];
        auVar7 = pmaddwd(auVar2,param_2[0x17]);
        auVar9 = pmaddwd(auVar3,param_2[0x16]);
        auVar12 = pmaddwd(auVar4,param_2[0x15]);
        auVar15 = pmaddwd(*pauVar1,param_2[0x14]);
        auVar6 = pauVar1[4];
        auVar5 = pmaddwd(auVar6,param_2[0x1d]);
        auVar10 = pmaddwd(auVar2,param_2[0x1c]);
        auVar13 = pmaddwd(auVar3,param_2[0x1b]);
        auVar16 = pmaddwd(auVar4,param_2[0x1a]);
        auVar8 = pmaddwd(auVar6,param_2[0x22]);
        auVar11 = pmaddwd(auVar2,param_2[0x21]);
        auVar14 = pmaddwd(auVar3,param_2[0x20]);
        auVar17 = pmaddwd(auVar4,param_2[0x1f]);
        auVar6 = pmaddwd(auVar6,param_2[0x27]);
        auVar2 = pmaddwd(auVar2,param_2[0x26]);
        auVar3 = pmaddwd(auVar3,param_2[0x25]);
        auVar4 = pmaddwd(auVar4,param_2[0x24]);
        *param_5 = *param_5 +
                   (auVar15._0_4_ + auVar12._0_4_ + auVar9._0_4_ + auVar7._0_4_ +
                    auVar15._8_4_ + auVar12._8_4_ + auVar9._8_4_ + auVar7._8_4_ +
                    auVar15._4_4_ + auVar12._4_4_ + auVar9._4_4_ + auVar7._4_4_ +
                    auVar15._12_4_ + auVar12._12_4_ + auVar9._12_4_ + auVar7._12_4_ >> 0xe);
        param_5[1] = param_5[1] +
                     (auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ + auVar5._0_4_ +
                      auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ + auVar5._8_4_ +
                      auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ + auVar5._4_4_ +
                      auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ + auVar5._12_4_ >> 0xe);
        param_5[2] = param_5[2] +
                     (auVar17._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar17._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar17._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar17._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[3] = param_5[3] +
                     (auVar4._0_4_ + auVar3._0_4_ + auVar2._0_4_ + auVar6._0_4_ +
                      auVar4._8_4_ + auVar3._8_4_ + auVar2._8_4_ + auVar6._8_4_ +
                      auVar4._4_4_ + auVar3._4_4_ + auVar2._4_4_ + auVar6._4_4_ +
                      auVar4._12_4_ + auVar3._12_4_ + auVar2._12_4_ + auVar6._12_4_ >> 0xe);
        auVar2 = pauVar1[4];
        auVar3 = pauVar1[3];
        auVar4 = pauVar1[2];
        auVar6 = pauVar1[1];
        auVar10 = pmaddwd(auVar2,param_2[3]);
        auVar13 = pmaddwd(auVar3,param_2[2]);
        auVar16 = pmaddwd(auVar4,param_2[1]);
        auVar7 = pmaddwd(auVar6,*param_2);
        auVar8 = pmaddwd(auVar2,param_2[8]);
        auVar11 = pmaddwd(auVar3,param_2[7]);
        auVar14 = pmaddwd(auVar4,param_2[6]);
        auVar17 = pmaddwd(auVar6,param_2[5]);
        auVar9 = pmaddwd(auVar2,param_2[0xd]);
        auVar12 = pmaddwd(auVar3,param_2[0xc]);
        auVar15 = pmaddwd(auVar4,param_2[0xb]);
        auVar18 = pmaddwd(auVar6,param_2[10]);
        auVar2 = pmaddwd(auVar2,param_2[0x12]);
        auVar5 = pmaddwd(auVar3,param_2[0x11]);
        auVar4 = pmaddwd(auVar4,param_2[0x10]);
        auVar3 = pmaddwd(auVar6,param_2[0xf]);
        pauVar1 = pauVar1 + 1;
        param_4 = param_4 + -1;
        param_5[4] = param_5[4] +
                     (auVar7._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ +
                      auVar7._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ +
                      auVar7._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ +
                      auVar7._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ >> 0xe);
        param_5[5] = param_5[5] +
                     (auVar17._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar17._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar17._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar17._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[6] = param_5[6] +
                     (auVar18._0_4_ + auVar15._0_4_ + auVar12._0_4_ + auVar9._0_4_ +
                      auVar18._8_4_ + auVar15._8_4_ + auVar12._8_4_ + auVar9._8_4_ +
                      auVar18._4_4_ + auVar15._4_4_ + auVar12._4_4_ + auVar9._4_4_ +
                      auVar18._12_4_ + auVar15._12_4_ + auVar12._12_4_ + auVar9._12_4_ >> 0xe);
        param_5[7] = param_5[7] +
                     (auVar3._0_4_ + auVar4._0_4_ + auVar5._0_4_ + auVar2._0_4_ +
                      auVar3._8_4_ + auVar4._8_4_ + auVar5._8_4_ + auVar2._8_4_ +
                      auVar3._4_4_ + auVar4._4_4_ + auVar5._4_4_ + auVar2._4_4_ +
                      auVar3._12_4_ + auVar4._12_4_ + auVar5._12_4_ + auVar2._12_4_ >> 0xe);
        param_5 = param_5 + 8;
      } while (param_4 != 0);
      return;
    }
    break;
  case 6:
    if (param_4 != 0) {
      do {
        auVar2 = pauVar1[3];
        auVar3 = pauVar1[2];
        auVar4 = pauVar1[1];
        auVar10 = pmaddwd(auVar2,param_2[0x17]);
        auVar13 = pmaddwd(auVar3,param_2[0x16]);
        auVar16 = pmaddwd(auVar4,param_2[0x15]);
        auVar6 = pmaddwd(*pauVar1,param_2[0x14]);
        auVar8 = pmaddwd(auVar2,param_2[0x1c]);
        auVar11 = pmaddwd(auVar3,param_2[0x1b]);
        auVar14 = pmaddwd(auVar4,param_2[0x1a]);
        auVar5 = pmaddwd(*pauVar1,param_2[0x19]);
        auVar7 = pmaddwd(pauVar1[4],param_2[0x22]);
        auVar12 = pmaddwd(auVar2,param_2[0x21]);
        auVar15 = pmaddwd(auVar3,param_2[0x20]);
        auVar17 = pmaddwd(auVar4,param_2[0x1f]);
        auVar9 = pmaddwd(pauVar1[4],param_2[0x27]);
        auVar2 = pmaddwd(auVar2,param_2[0x26]);
        auVar3 = pmaddwd(auVar3,param_2[0x25]);
        auVar4 = pmaddwd(auVar4,param_2[0x24]);
        *param_5 = *param_5 +
                   (auVar6._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ +
                    auVar6._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ +
                    auVar6._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ +
                    auVar6._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ >> 0xe);
        param_5[1] = param_5[1] +
                     (auVar5._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar5._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar5._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar5._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[2] = param_5[2] +
                     (auVar17._0_4_ + auVar15._0_4_ + auVar12._0_4_ + auVar7._0_4_ +
                      auVar17._8_4_ + auVar15._8_4_ + auVar12._8_4_ + auVar7._8_4_ +
                      auVar17._4_4_ + auVar15._4_4_ + auVar12._4_4_ + auVar7._4_4_ +
                      auVar17._12_4_ + auVar15._12_4_ + auVar12._12_4_ + auVar7._12_4_ >> 0xe);
        param_5[3] = param_5[3] +
                     (auVar4._0_4_ + auVar3._0_4_ + auVar2._0_4_ + auVar9._0_4_ +
                      auVar4._8_4_ + auVar3._8_4_ + auVar2._8_4_ + auVar9._8_4_ +
                      auVar4._4_4_ + auVar3._4_4_ + auVar2._4_4_ + auVar9._4_4_ +
                      auVar4._12_4_ + auVar3._12_4_ + auVar2._12_4_ + auVar9._12_4_ >> 0xe);
        auVar2 = pauVar1[4];
        auVar3 = pauVar1[3];
        auVar4 = pauVar1[2];
        auVar6 = pauVar1[1];
        auVar10 = pmaddwd(auVar2,param_2[3]);
        auVar13 = pmaddwd(auVar3,param_2[2]);
        auVar16 = pmaddwd(auVar4,param_2[1]);
        auVar7 = pmaddwd(auVar6,*param_2);
        auVar8 = pmaddwd(auVar2,param_2[8]);
        auVar11 = pmaddwd(auVar3,param_2[7]);
        auVar14 = pmaddwd(auVar4,param_2[6]);
        auVar17 = pmaddwd(auVar6,param_2[5]);
        auVar9 = pmaddwd(auVar2,param_2[0xd]);
        auVar12 = pmaddwd(auVar3,param_2[0xc]);
        auVar15 = pmaddwd(auVar4,param_2[0xb]);
        auVar18 = pmaddwd(auVar6,param_2[10]);
        auVar2 = pmaddwd(auVar2,param_2[0x12]);
        auVar5 = pmaddwd(auVar3,param_2[0x11]);
        auVar4 = pmaddwd(auVar4,param_2[0x10]);
        auVar3 = pmaddwd(auVar6,param_2[0xf]);
        pauVar1 = pauVar1 + 1;
        param_4 = param_4 + -1;
        param_5[4] = param_5[4] +
                     (auVar7._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ +
                      auVar7._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ +
                      auVar7._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ +
                      auVar7._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ >> 0xe);
        param_5[5] = param_5[5] +
                     (auVar17._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                      auVar17._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                      auVar17._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                      auVar17._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
        param_5[6] = param_5[6] +
                     (auVar18._0_4_ + auVar15._0_4_ + auVar12._0_4_ + auVar9._0_4_ +
                      auVar18._8_4_ + auVar15._8_4_ + auVar12._8_4_ + auVar9._8_4_ +
                      auVar18._4_4_ + auVar15._4_4_ + auVar12._4_4_ + auVar9._4_4_ +
                      auVar18._12_4_ + auVar15._12_4_ + auVar12._12_4_ + auVar9._12_4_ >> 0xe);
        param_5[7] = param_5[7] +
                     (auVar3._0_4_ + auVar4._0_4_ + auVar5._0_4_ + auVar2._0_4_ +
                      auVar3._8_4_ + auVar4._8_4_ + auVar5._8_4_ + auVar2._8_4_ +
                      auVar3._4_4_ + auVar4._4_4_ + auVar5._4_4_ + auVar2._4_4_ +
                      auVar3._12_4_ + auVar4._12_4_ + auVar5._12_4_ + auVar2._12_4_ >> 0xe);
        param_5 = param_5 + 8;
      } while (param_4 != 0);
      return;
    }
    break;
  case 7:
    for (; param_4 != 0; param_4 = param_4 + -1) {
      auVar2 = pauVar1[3];
      auVar3 = pauVar1[2];
      auVar4 = pauVar1[1];
      auVar6 = *pauVar1;
      auVar9 = pmaddwd(auVar2,param_2[0x17]);
      auVar13 = pmaddwd(auVar3,param_2[0x16]);
      auVar16 = pmaddwd(auVar4,param_2[0x15]);
      auVar5 = pmaddwd(auVar6,param_2[0x14]);
      auVar7 = pmaddwd(auVar2,param_2[0x1c]);
      auVar10 = pmaddwd(auVar3,param_2[0x1b]);
      auVar14 = pmaddwd(auVar4,param_2[0x1a]);
      auVar17 = pmaddwd(auVar6,param_2[0x19]);
      auVar8 = pmaddwd(auVar2,param_2[0x21]);
      auVar11 = pmaddwd(auVar3,param_2[0x20]);
      auVar15 = pmaddwd(auVar4,param_2[0x1f]);
      auVar6 = pmaddwd(auVar6,param_2[0x1e]);
      auVar12 = pmaddwd(pauVar1[4],param_2[0x27]);
      auVar2 = pmaddwd(auVar2,param_2[0x26]);
      auVar3 = pmaddwd(auVar3,param_2[0x25]);
      auVar4 = pmaddwd(auVar4,param_2[0x24]);
      *param_5 = *param_5 +
                 (auVar5._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar9._0_4_ +
                  auVar5._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar9._8_4_ +
                  auVar5._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar9._4_4_ +
                  auVar5._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar9._12_4_ >> 0xe);
      param_5[1] = param_5[1] +
                   (auVar17._0_4_ + auVar14._0_4_ + auVar10._0_4_ + auVar7._0_4_ +
                    auVar17._8_4_ + auVar14._8_4_ + auVar10._8_4_ + auVar7._8_4_ +
                    auVar17._4_4_ + auVar14._4_4_ + auVar10._4_4_ + auVar7._4_4_ +
                    auVar17._12_4_ + auVar14._12_4_ + auVar10._12_4_ + auVar7._12_4_ >> 0xe);
      param_5[2] = param_5[2] +
                   (auVar6._0_4_ + auVar15._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                    auVar6._8_4_ + auVar15._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                    auVar6._4_4_ + auVar15._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                    auVar6._12_4_ + auVar15._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
      param_5[3] = param_5[3] +
                   (auVar4._0_4_ + auVar3._0_4_ + auVar2._0_4_ + auVar12._0_4_ +
                    auVar4._8_4_ + auVar3._8_4_ + auVar2._8_4_ + auVar12._8_4_ +
                    auVar4._4_4_ + auVar3._4_4_ + auVar2._4_4_ + auVar12._4_4_ +
                    auVar4._12_4_ + auVar3._12_4_ + auVar2._12_4_ + auVar12._12_4_ >> 0xe);
      auVar2 = pauVar1[4];
      auVar3 = pauVar1[3];
      auVar4 = pauVar1[2];
      auVar6 = pauVar1[1];
      auVar10 = pmaddwd(auVar2,param_2[3]);
      auVar13 = pmaddwd(auVar3,param_2[2]);
      auVar16 = pmaddwd(auVar4,param_2[1]);
      auVar7 = pmaddwd(auVar6,*param_2);
      auVar8 = pmaddwd(auVar2,param_2[8]);
      auVar11 = pmaddwd(auVar3,param_2[7]);
      auVar14 = pmaddwd(auVar4,param_2[6]);
      auVar17 = pmaddwd(auVar6,param_2[5]);
      auVar9 = pmaddwd(auVar2,param_2[0xd]);
      auVar12 = pmaddwd(auVar3,param_2[0xc]);
      auVar15 = pmaddwd(auVar4,param_2[0xb]);
      auVar18 = pmaddwd(auVar6,param_2[10]);
      auVar2 = pmaddwd(auVar2,param_2[0x12]);
      auVar5 = pmaddwd(auVar3,param_2[0x11]);
      auVar4 = pmaddwd(auVar4,param_2[0x10]);
      auVar3 = pmaddwd(auVar6,param_2[0xf]);
      pauVar1 = pauVar1 + 1;
      param_5[4] = param_5[4] +
                   (auVar7._0_4_ + auVar16._0_4_ + auVar13._0_4_ + auVar10._0_4_ +
                    auVar7._8_4_ + auVar16._8_4_ + auVar13._8_4_ + auVar10._8_4_ +
                    auVar7._4_4_ + auVar16._4_4_ + auVar13._4_4_ + auVar10._4_4_ +
                    auVar7._12_4_ + auVar16._12_4_ + auVar13._12_4_ + auVar10._12_4_ >> 0xe);
      param_5[5] = param_5[5] +
                   (auVar17._0_4_ + auVar14._0_4_ + auVar11._0_4_ + auVar8._0_4_ +
                    auVar17._8_4_ + auVar14._8_4_ + auVar11._8_4_ + auVar8._8_4_ +
                    auVar17._4_4_ + auVar14._4_4_ + auVar11._4_4_ + auVar8._4_4_ +
                    auVar17._12_4_ + auVar14._12_4_ + auVar11._12_4_ + auVar8._12_4_ >> 0xe);
      param_5[6] = param_5[6] +
                   (auVar18._0_4_ + auVar15._0_4_ + auVar12._0_4_ + auVar9._0_4_ +
                    auVar18._8_4_ + auVar15._8_4_ + auVar12._8_4_ + auVar9._8_4_ +
                    auVar18._4_4_ + auVar15._4_4_ + auVar12._4_4_ + auVar9._4_4_ +
                    auVar18._12_4_ + auVar15._12_4_ + auVar12._12_4_ + auVar9._12_4_ >> 0xe);
      param_5[7] = param_5[7] +
                   (auVar3._0_4_ + auVar4._0_4_ + auVar5._0_4_ + auVar2._0_4_ +
                    auVar3._8_4_ + auVar4._8_4_ + auVar5._8_4_ + auVar2._8_4_ +
                    auVar3._4_4_ + auVar4._4_4_ + auVar5._4_4_ + auVar2._4_4_ +
                    auVar3._12_4_ + auVar4._12_4_ + auVar5._12_4_ + auVar2._12_4_ >> 0xe);
      param_5 = param_5 + 8;
    }
  }
  return;
}


//// FUNCTION FUN_00c6edd0 @ 00c6edd0 ////

void __cdecl
FUN_00c6edd0(int param_1,undefined1 (*param_2) [16],undefined4 param_3,int param_4,int *param_5,
            short param_6,short param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  ushort uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 local_70 [16];
  
  auVar13 = local_70;
  local_70._0_2_ = param_6;
  auVar19 = local_70;
  local_70._6_10_ = auVar13._6_10_;
  local_70._0_4_ = auVar19._0_4_;
  uVar7 = local_70._0_4_;
  local_70._4_2_ = param_6 + param_7;
  auVar19 = local_70;
  uVar8 = param_7 << 2;
  local_70._14_2_ = auVar13._14_2_;
  local_70._0_12_ = auVar19._0_12_;
  local_70._12_2_ = param_6 + param_7 * 3;
  auVar13 = local_70;
  local_70._0_8_ = auVar19._0_8_;
  local_70._8_2_ = param_6 + param_7 * 2;
  auVar19 = local_70;
  pauVar9 = (undefined1 (*) [16])(param_1 + -0x50);
  local_70._0_4_ = uVar7 & 0xffff;
  auVar20 = local_70;
  local_70._8_8_ = auVar19._8_8_;
  local_70._0_6_ = auVar20._0_6_;
  local_70._6_2_ = 0;
  auVar19 = local_70;
  local_70._12_4_ = auVar13._12_4_;
  local_70._0_10_ = auVar19._0_10_;
  local_70._10_2_ = 0;
  local_70._14_2_ = 0;
  switch(param_3) {
  case 0:
    if (param_4 != 0) {
      pauVar9 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar13 = *pauVar9;
        auVar19 = pauVar9[-1];
        auVar20 = pauVar9[-2];
        auVar18 = pauVar9[-3];
        auVar25 = pmaddwd(auVar13,param_2[0x18]);
        auVar28 = pmaddwd(auVar19,param_2[0x17]);
        auVar31 = pmaddwd(auVar20,param_2[0x16]);
        auVar22 = pmaddwd(auVar18,param_2[0x15]);
        auVar23 = pmaddwd(auVar13,param_2[0x1d]);
        auVar26 = pmaddwd(auVar19,param_2[0x1c]);
        auVar29 = pmaddwd(auVar20,param_2[0x1b]);
        auVar33 = pmaddwd(auVar18,param_2[0x1a]);
        auVar24 = pmaddwd(auVar13,param_2[0x22]);
        auVar27 = pmaddwd(auVar19,param_2[0x21]);
        auVar30 = pmaddwd(auVar20,param_2[0x20]);
        auVar34 = pmaddwd(auVar18,param_2[0x1f]);
        auVar13 = pmaddwd(auVar13,param_2[0x27]);
        auVar21 = pmaddwd(auVar19,param_2[0x26]);
        auVar20 = pmaddwd(auVar20,param_2[0x25]);
        auVar19 = pmaddwd(auVar18,param_2[0x24]);
        auVar10._0_4_ =
             auVar22._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar25._0_4_ +
             auVar22._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar25._8_4_ +
             auVar22._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar25._4_4_ +
             auVar22._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar25._12_4_ >> 0xf;
        auVar10._4_4_ =
             auVar33._0_4_ + auVar29._0_4_ + auVar26._0_4_ + auVar23._0_4_ +
             auVar33._8_4_ + auVar29._8_4_ + auVar26._8_4_ + auVar23._8_4_ +
             auVar33._4_4_ + auVar29._4_4_ + auVar26._4_4_ + auVar23._4_4_ +
             auVar33._12_4_ + auVar29._12_4_ + auVar26._12_4_ + auVar23._12_4_ >> 0xf;
        auVar10._8_4_ =
             auVar34._0_4_ + auVar30._0_4_ + auVar27._0_4_ + auVar24._0_4_ +
             auVar34._8_4_ + auVar30._8_4_ + auVar27._8_4_ + auVar24._8_4_ +
             auVar34._4_4_ + auVar30._4_4_ + auVar27._4_4_ + auVar24._4_4_ +
             auVar34._12_4_ + auVar30._12_4_ + auVar27._12_4_ + auVar24._12_4_ >> 0xf;
        auVar10._12_4_ =
             auVar19._0_4_ + auVar20._0_4_ + auVar21._0_4_ + auVar13._0_4_ +
             auVar19._8_4_ + auVar20._8_4_ + auVar21._8_4_ + auVar13._8_4_ +
             auVar19._4_4_ + auVar20._4_4_ + auVar21._4_4_ + auVar13._4_4_ +
             auVar19._12_4_ + auVar20._12_4_ + auVar21._12_4_ + auVar13._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar10,local_70);
        *param_5 = *param_5 + (auVar13._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar13._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar13._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar13._12_4_ >> 0xe);
        auVar13 = pauVar9[1];
        auVar19 = *pauVar9;
        auVar20 = pauVar9[-1];
        auVar18 = pauVar9[-2];
        auVar29 = pmaddwd(auVar13,param_2[4]);
        auVar33 = pmaddwd(auVar19,param_2[3]);
        auVar23 = pmaddwd(auVar20,param_2[2]);
        auVar24 = pmaddwd(auVar18,param_2[1]);
        auVar25 = pmaddwd(auVar13,param_2[9]);
        auVar27 = pmaddwd(auVar19,param_2[8]);
        auVar30 = pmaddwd(auVar20,param_2[7]);
        auVar34 = pmaddwd(auVar18,param_2[6]);
        auVar1._2_2_ = 0;
        auVar1._0_2_ = uVar8;
        auVar1._4_2_ = uVar8;
        auVar1._6_2_ = 0;
        auVar1._8_2_ = uVar8;
        auVar1._10_2_ = 0;
        auVar1._12_2_ = uVar8;
        auVar1._14_2_ = 0;
        auVar21 = paddsw(local_70,auVar1);
        auVar26 = pmaddwd(auVar13,param_2[0xe]);
        auVar28 = pmaddwd(auVar19,param_2[0xd]);
        auVar31 = pmaddwd(auVar20,param_2[0xc]);
        auVar35 = pmaddwd(auVar18,param_2[0xb]);
        auVar13 = pmaddwd(auVar13,param_2[0x13]);
        auVar22 = pmaddwd(auVar19,param_2[0x12]);
        auVar19 = pmaddwd(auVar20,param_2[0x11]);
        auVar20 = pmaddwd(auVar18,param_2[0x10]);
        auVar14._0_4_ =
             auVar24._0_4_ + auVar23._0_4_ + auVar33._0_4_ + auVar29._0_4_ +
             auVar24._8_4_ + auVar23._8_4_ + auVar33._8_4_ + auVar29._8_4_ +
             auVar24._4_4_ + auVar23._4_4_ + auVar33._4_4_ + auVar29._4_4_ +
             auVar24._12_4_ + auVar23._12_4_ + auVar33._12_4_ + auVar29._12_4_ >> 0xf;
        auVar14._4_4_ =
             auVar34._0_4_ + auVar30._0_4_ + auVar27._0_4_ + auVar25._0_4_ +
             auVar34._8_4_ + auVar30._8_4_ + auVar27._8_4_ + auVar25._8_4_ +
             auVar34._4_4_ + auVar30._4_4_ + auVar27._4_4_ + auVar25._4_4_ +
             auVar34._12_4_ + auVar30._12_4_ + auVar27._12_4_ + auVar25._12_4_ >> 0xf;
        auVar14._8_4_ =
             auVar35._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar26._0_4_ +
             auVar35._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar26._8_4_ +
             auVar35._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar26._4_4_ +
             auVar35._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar26._12_4_ >> 0xf;
        auVar14._12_4_ =
             auVar20._0_4_ + auVar19._0_4_ + auVar22._0_4_ + auVar13._0_4_ +
             auVar20._8_4_ + auVar19._8_4_ + auVar22._8_4_ + auVar13._8_4_ +
             auVar20._4_4_ + auVar19._4_4_ + auVar22._4_4_ + auVar13._4_4_ +
             auVar20._12_4_ + auVar19._12_4_ + auVar22._12_4_ + auVar13._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar14,auVar21);
        auVar2._2_2_ = 0;
        auVar2._0_2_ = uVar8;
        auVar2._4_2_ = uVar8;
        auVar2._6_2_ = 0;
        auVar2._8_2_ = uVar8;
        auVar2._10_2_ = 0;
        auVar2._12_2_ = uVar8;
        auVar2._14_2_ = 0;
        local_70 = paddsw(auVar21,auVar2);
        param_5[4] = param_5[4] + (auVar13._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar13._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar13._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar13._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        pauVar9 = pauVar9 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 1:
    if (param_4 != 0) {
      pauVar9 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar13 = *pauVar9;
        auVar19 = pauVar9[-1];
        auVar20 = pauVar9[-2];
        auVar18 = pauVar9[-3];
        auVar25 = pmaddwd(auVar13,param_2[0x18]);
        auVar28 = pmaddwd(auVar19,param_2[0x17]);
        auVar31 = pmaddwd(auVar20,param_2[0x16]);
        auVar22 = pmaddwd(auVar18,param_2[0x15]);
        auVar23 = pmaddwd(auVar13,param_2[0x1d]);
        auVar26 = pmaddwd(auVar19,param_2[0x1c]);
        auVar29 = pmaddwd(auVar20,param_2[0x1b]);
        auVar33 = pmaddwd(auVar18,param_2[0x1a]);
        auVar24 = pmaddwd(auVar13,param_2[0x22]);
        auVar27 = pmaddwd(auVar19,param_2[0x21]);
        auVar30 = pmaddwd(auVar20,param_2[0x20]);
        auVar34 = pmaddwd(auVar18,param_2[0x1f]);
        auVar13 = pmaddwd(auVar13,param_2[0x27]);
        auVar21 = pmaddwd(auVar19,param_2[0x26]);
        auVar20 = pmaddwd(auVar20,param_2[0x25]);
        auVar19 = pmaddwd(auVar18,param_2[0x24]);
        auVar11._0_4_ =
             auVar22._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar25._0_4_ +
             auVar22._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar25._8_4_ +
             auVar22._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar25._4_4_ +
             auVar22._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar25._12_4_ >> 0xf;
        auVar11._4_4_ =
             auVar33._0_4_ + auVar29._0_4_ + auVar26._0_4_ + auVar23._0_4_ +
             auVar33._8_4_ + auVar29._8_4_ + auVar26._8_4_ + auVar23._8_4_ +
             auVar33._4_4_ + auVar29._4_4_ + auVar26._4_4_ + auVar23._4_4_ +
             auVar33._12_4_ + auVar29._12_4_ + auVar26._12_4_ + auVar23._12_4_ >> 0xf;
        auVar11._8_4_ =
             auVar34._0_4_ + auVar30._0_4_ + auVar27._0_4_ + auVar24._0_4_ +
             auVar34._8_4_ + auVar30._8_4_ + auVar27._8_4_ + auVar24._8_4_ +
             auVar34._4_4_ + auVar30._4_4_ + auVar27._4_4_ + auVar24._4_4_ +
             auVar34._12_4_ + auVar30._12_4_ + auVar27._12_4_ + auVar24._12_4_ >> 0xf;
        auVar11._12_4_ =
             auVar19._0_4_ + auVar20._0_4_ + auVar21._0_4_ + auVar13._0_4_ +
             auVar19._8_4_ + auVar20._8_4_ + auVar21._8_4_ + auVar13._8_4_ +
             auVar19._4_4_ + auVar20._4_4_ + auVar21._4_4_ + auVar13._4_4_ +
             auVar19._12_4_ + auVar20._12_4_ + auVar21._12_4_ + auVar13._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar11,local_70);
        *param_5 = *param_5 + (auVar13._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar13._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar13._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar13._12_4_ >> 0xe);
        auVar13 = *pauVar9;
        auVar19 = pauVar9[-1];
        auVar20 = pauVar9[-2];
        auVar26 = pmaddwd(auVar13,param_2[3]);
        auVar29 = pmaddwd(auVar19,param_2[2]);
        auVar22 = pmaddwd(auVar20,param_2[1]);
        auVar33 = pmaddwd(pauVar9[-3],*param_2);
        auVar18 = pauVar9[1];
        auVar23 = pmaddwd(auVar18,param_2[9]);
        auVar27 = pmaddwd(auVar13,param_2[8]);
        auVar30 = pmaddwd(auVar19,param_2[7]);
        auVar34 = pmaddwd(auVar20,param_2[6]);
        auVar3._2_2_ = 0;
        auVar3._0_2_ = uVar8;
        auVar3._4_2_ = uVar8;
        auVar3._6_2_ = 0;
        auVar3._8_2_ = uVar8;
        auVar3._10_2_ = 0;
        auVar3._12_2_ = uVar8;
        auVar3._14_2_ = 0;
        auVar21 = paddsw(local_70,auVar3);
        auVar24 = pmaddwd(auVar18,param_2[0xe]);
        auVar28 = pmaddwd(auVar13,param_2[0xd]);
        auVar31 = pmaddwd(auVar19,param_2[0xc]);
        auVar35 = pmaddwd(auVar20,param_2[0xb]);
        auVar25 = pmaddwd(auVar18,param_2[0x13]);
        auVar13 = pmaddwd(auVar13,param_2[0x12]);
        auVar18 = pmaddwd(auVar19,param_2[0x11]);
        auVar19 = pmaddwd(auVar20,param_2[0x10]);
        auVar15._0_4_ =
             auVar33._0_4_ + auVar22._0_4_ + auVar29._0_4_ + auVar26._0_4_ +
             auVar33._8_4_ + auVar22._8_4_ + auVar29._8_4_ + auVar26._8_4_ +
             auVar33._4_4_ + auVar22._4_4_ + auVar29._4_4_ + auVar26._4_4_ +
             auVar33._12_4_ + auVar22._12_4_ + auVar29._12_4_ + auVar26._12_4_ >> 0xf;
        auVar15._4_4_ =
             auVar34._0_4_ + auVar30._0_4_ + auVar27._0_4_ + auVar23._0_4_ +
             auVar34._8_4_ + auVar30._8_4_ + auVar27._8_4_ + auVar23._8_4_ +
             auVar34._4_4_ + auVar30._4_4_ + auVar27._4_4_ + auVar23._4_4_ +
             auVar34._12_4_ + auVar30._12_4_ + auVar27._12_4_ + auVar23._12_4_ >> 0xf;
        auVar15._8_4_ =
             auVar35._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar24._0_4_ +
             auVar35._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar24._8_4_ +
             auVar35._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar24._4_4_ +
             auVar35._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar24._12_4_ >> 0xf;
        auVar15._12_4_ =
             auVar19._0_4_ + auVar18._0_4_ + auVar13._0_4_ + auVar25._0_4_ +
             auVar19._8_4_ + auVar18._8_4_ + auVar13._8_4_ + auVar25._8_4_ +
             auVar19._4_4_ + auVar18._4_4_ + auVar13._4_4_ + auVar25._4_4_ +
             auVar19._12_4_ + auVar18._12_4_ + auVar13._12_4_ + auVar25._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar15,auVar21);
        auVar4._2_2_ = 0;
        auVar4._0_2_ = uVar8;
        auVar4._4_2_ = uVar8;
        auVar4._6_2_ = 0;
        auVar4._8_2_ = uVar8;
        auVar4._10_2_ = 0;
        auVar4._12_2_ = uVar8;
        auVar4._14_2_ = 0;
        local_70 = paddsw(auVar21,auVar4);
        param_5[4] = param_5[4] + (auVar13._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar13._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar13._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar13._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        pauVar9 = pauVar9 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 2:
    if (param_4 != 0) {
      pauVar9 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar13 = *pauVar9;
        auVar19 = pauVar9[-1];
        auVar20 = pauVar9[-2];
        auVar18 = pauVar9[-3];
        auVar25 = pmaddwd(auVar13,param_2[0x18]);
        auVar28 = pmaddwd(auVar19,param_2[0x17]);
        auVar31 = pmaddwd(auVar20,param_2[0x16]);
        auVar22 = pmaddwd(auVar18,param_2[0x15]);
        auVar23 = pmaddwd(auVar13,param_2[0x1d]);
        auVar26 = pmaddwd(auVar19,param_2[0x1c]);
        auVar29 = pmaddwd(auVar20,param_2[0x1b]);
        auVar33 = pmaddwd(auVar18,param_2[0x1a]);
        auVar24 = pmaddwd(auVar13,param_2[0x22]);
        auVar27 = pmaddwd(auVar19,param_2[0x21]);
        auVar30 = pmaddwd(auVar20,param_2[0x20]);
        auVar34 = pmaddwd(auVar18,param_2[0x1f]);
        auVar13 = pmaddwd(auVar13,param_2[0x27]);
        auVar21 = pmaddwd(auVar19,param_2[0x26]);
        auVar20 = pmaddwd(auVar20,param_2[0x25]);
        auVar19 = pmaddwd(auVar18,param_2[0x24]);
        auVar12._0_4_ =
             auVar22._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar25._0_4_ +
             auVar22._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar25._8_4_ +
             auVar22._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar25._4_4_ +
             auVar22._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar25._12_4_ >> 0xf;
        auVar12._4_4_ =
             auVar33._0_4_ + auVar29._0_4_ + auVar26._0_4_ + auVar23._0_4_ +
             auVar33._8_4_ + auVar29._8_4_ + auVar26._8_4_ + auVar23._8_4_ +
             auVar33._4_4_ + auVar29._4_4_ + auVar26._4_4_ + auVar23._4_4_ +
             auVar33._12_4_ + auVar29._12_4_ + auVar26._12_4_ + auVar23._12_4_ >> 0xf;
        auVar12._8_4_ =
             auVar34._0_4_ + auVar30._0_4_ + auVar27._0_4_ + auVar24._0_4_ +
             auVar34._8_4_ + auVar30._8_4_ + auVar27._8_4_ + auVar24._8_4_ +
             auVar34._4_4_ + auVar30._4_4_ + auVar27._4_4_ + auVar24._4_4_ +
             auVar34._12_4_ + auVar30._12_4_ + auVar27._12_4_ + auVar24._12_4_ >> 0xf;
        auVar12._12_4_ =
             auVar19._0_4_ + auVar20._0_4_ + auVar21._0_4_ + auVar13._0_4_ +
             auVar19._8_4_ + auVar20._8_4_ + auVar21._8_4_ + auVar13._8_4_ +
             auVar19._4_4_ + auVar20._4_4_ + auVar21._4_4_ + auVar13._4_4_ +
             auVar19._12_4_ + auVar20._12_4_ + auVar21._12_4_ + auVar13._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar12,local_70);
        *param_5 = *param_5 + (auVar13._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar13._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar13._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar13._12_4_ >> 0xe);
        auVar13 = *pauVar9;
        auVar19 = pauVar9[-1];
        auVar20 = pauVar9[-2];
        auVar30 = pmaddwd(auVar13,param_2[3]);
        auVar34 = pmaddwd(auVar19,param_2[2]);
        auVar22 = pmaddwd(auVar20,param_2[1]);
        auVar25 = pmaddwd(pauVar9[-3],*param_2);
        auVar26 = pmaddwd(auVar13,param_2[8]);
        auVar28 = pmaddwd(auVar19,param_2[7]);
        auVar31 = pmaddwd(auVar20,param_2[6]);
        auVar23 = pmaddwd(pauVar9[-3],param_2[5]);
        auVar5._2_2_ = 0;
        auVar5._0_2_ = uVar8;
        auVar5._4_2_ = uVar8;
        auVar5._6_2_ = 0;
        auVar5._8_2_ = uVar8;
        auVar5._10_2_ = 0;
        auVar5._12_2_ = uVar8;
        auVar5._14_2_ = 0;
        auVar18 = paddsw(local_70,auVar5);
        auVar24 = pmaddwd(pauVar9[1],param_2[0xe]);
        auVar29 = pmaddwd(auVar13,param_2[0xd]);
        auVar33 = pmaddwd(auVar19,param_2[0xc]);
        auVar35 = pmaddwd(auVar20,param_2[0xb]);
        auVar27 = pmaddwd(pauVar9[1],param_2[0x13]);
        auVar13 = pmaddwd(auVar13,param_2[0x12]);
        auVar21 = pmaddwd(auVar19,param_2[0x11]);
        auVar19 = pmaddwd(auVar20,param_2[0x10]);
        auVar16._0_4_ =
             auVar25._0_4_ + auVar22._0_4_ + auVar34._0_4_ + auVar30._0_4_ +
             auVar25._8_4_ + auVar22._8_4_ + auVar34._8_4_ + auVar30._8_4_ +
             auVar25._4_4_ + auVar22._4_4_ + auVar34._4_4_ + auVar30._4_4_ +
             auVar25._12_4_ + auVar22._12_4_ + auVar34._12_4_ + auVar30._12_4_ >> 0xf;
        auVar16._4_4_ =
             auVar23._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar26._0_4_ +
             auVar23._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar26._8_4_ +
             auVar23._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar26._4_4_ +
             auVar23._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar26._12_4_ >> 0xf;
        auVar16._8_4_ =
             auVar35._0_4_ + auVar33._0_4_ + auVar29._0_4_ + auVar24._0_4_ +
             auVar35._8_4_ + auVar33._8_4_ + auVar29._8_4_ + auVar24._8_4_ +
             auVar35._4_4_ + auVar33._4_4_ + auVar29._4_4_ + auVar24._4_4_ +
             auVar35._12_4_ + auVar33._12_4_ + auVar29._12_4_ + auVar24._12_4_ >> 0xf;
        auVar16._12_4_ =
             auVar19._0_4_ + auVar21._0_4_ + auVar13._0_4_ + auVar27._0_4_ +
             auVar19._8_4_ + auVar21._8_4_ + auVar13._8_4_ + auVar27._8_4_ +
             auVar19._4_4_ + auVar21._4_4_ + auVar13._4_4_ + auVar27._4_4_ +
             auVar19._12_4_ + auVar21._12_4_ + auVar13._12_4_ + auVar27._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar16,auVar18);
        auVar6._2_2_ = 0;
        auVar6._0_2_ = uVar8;
        auVar6._4_2_ = uVar8;
        auVar6._6_2_ = 0;
        auVar6._8_2_ = uVar8;
        auVar6._10_2_ = 0;
        auVar6._12_2_ = uVar8;
        auVar6._14_2_ = 0;
        local_70 = paddsw(auVar18,auVar6);
        param_5[4] = param_5[4] + (auVar13._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar13._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar13._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar13._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        pauVar9 = pauVar9 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 3:
    if (param_4 != 0) {
      pauVar9 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar13 = *pauVar9;
        auVar19 = pauVar9[-1];
        auVar20 = pauVar9[-2];
        auVar18 = pauVar9[-3];
        auVar25 = pmaddwd(auVar13,param_2[0x18]);
        auVar28 = pmaddwd(auVar19,param_2[0x17]);
        auVar31 = pmaddwd(auVar20,param_2[0x16]);
        auVar22 = pmaddwd(auVar18,param_2[0x15]);
        auVar23 = pmaddwd(auVar13,param_2[0x1d]);
        auVar26 = pmaddwd(auVar19,param_2[0x1c]);
        auVar29 = pmaddwd(auVar20,param_2[0x1b]);
        auVar33 = pmaddwd(auVar18,param_2[0x1a]);
        auVar24 = pmaddwd(auVar13,param_2[0x22]);
        auVar27 = pmaddwd(auVar19,param_2[0x21]);
        auVar30 = pmaddwd(auVar20,param_2[0x20]);
        auVar34 = pmaddwd(auVar18,param_2[0x1f]);
        auVar13 = pmaddwd(auVar13,param_2[0x27]);
        auVar21 = pmaddwd(auVar19,param_2[0x26]);
        auVar20 = pmaddwd(auVar20,param_2[0x25]);
        auVar19 = pmaddwd(auVar18,param_2[0x24]);
        auVar32._0_4_ =
             auVar22._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar25._0_4_ +
             auVar22._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar25._8_4_ +
             auVar22._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar25._4_4_ +
             auVar22._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar25._12_4_ >> 0xf;
        auVar32._4_4_ =
             auVar33._0_4_ + auVar29._0_4_ + auVar26._0_4_ + auVar23._0_4_ +
             auVar33._8_4_ + auVar29._8_4_ + auVar26._8_4_ + auVar23._8_4_ +
             auVar33._4_4_ + auVar29._4_4_ + auVar26._4_4_ + auVar23._4_4_ +
             auVar33._12_4_ + auVar29._12_4_ + auVar26._12_4_ + auVar23._12_4_ >> 0xf;
        auVar32._8_4_ =
             auVar34._0_4_ + auVar30._0_4_ + auVar27._0_4_ + auVar24._0_4_ +
             auVar34._8_4_ + auVar30._8_4_ + auVar27._8_4_ + auVar24._8_4_ +
             auVar34._4_4_ + auVar30._4_4_ + auVar27._4_4_ + auVar24._4_4_ +
             auVar34._12_4_ + auVar30._12_4_ + auVar27._12_4_ + auVar24._12_4_ >> 0xf;
        auVar32._12_4_ =
             auVar19._0_4_ + auVar20._0_4_ + auVar21._0_4_ + auVar13._0_4_ +
             auVar19._8_4_ + auVar20._8_4_ + auVar21._8_4_ + auVar13._8_4_ +
             auVar19._4_4_ + auVar20._4_4_ + auVar21._4_4_ + auVar13._4_4_ +
             auVar19._12_4_ + auVar20._12_4_ + auVar21._12_4_ + auVar13._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar32,local_70);
        *param_5 = *param_5 + (auVar13._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar13._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar13._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar13._12_4_ >> 0xe);
        auVar13 = *pauVar9;
        auVar19 = pauVar9[-1];
        auVar20 = pauVar9[-2];
        auVar18 = pauVar9[-3];
        auVar30 = pmaddwd(auVar13,param_2[3]);
        auVar35 = pmaddwd(auVar19,param_2[2]);
        auVar22 = pmaddwd(auVar20,param_2[1]);
        auVar24 = pmaddwd(auVar18,*param_2);
        auVar25 = pmaddwd(auVar13,param_2[8]);
        auVar27 = pmaddwd(auVar19,param_2[7]);
        auVar31 = pmaddwd(auVar20,param_2[6]);
        auVar32 = pmaddwd(auVar18,param_2[5]);
        auVar34._2_2_ = 0;
        auVar34._0_2_ = uVar8;
        auVar34._4_2_ = uVar8;
        auVar34._6_2_ = 0;
        auVar34._8_2_ = uVar8;
        auVar34._10_2_ = 0;
        auVar34._12_2_ = uVar8;
        auVar34._14_2_ = 0;
        auVar21 = paddsw(local_70,auVar34);
        auVar26 = pmaddwd(auVar13,param_2[0xd]);
        auVar28 = pmaddwd(auVar19,param_2[0xc]);
        auVar33 = pmaddwd(auVar20,param_2[0xb]);
        auVar23 = pmaddwd(auVar18,param_2[10]);
        auVar29 = pmaddwd(pauVar9[1],param_2[0x13]);
        auVar13 = pmaddwd(auVar13,param_2[0x12]);
        auVar18 = pmaddwd(auVar19,param_2[0x11]);
        auVar19 = pmaddwd(auVar20,param_2[0x10]);
        auVar17._0_4_ =
             auVar24._0_4_ + auVar22._0_4_ + auVar35._0_4_ + auVar30._0_4_ +
             auVar24._8_4_ + auVar22._8_4_ + auVar35._8_4_ + auVar30._8_4_ +
             auVar24._4_4_ + auVar22._4_4_ + auVar35._4_4_ + auVar30._4_4_ +
             auVar24._12_4_ + auVar22._12_4_ + auVar35._12_4_ + auVar30._12_4_ >> 0xf;
        auVar17._4_4_ =
             auVar32._0_4_ + auVar31._0_4_ + auVar27._0_4_ + auVar25._0_4_ +
             auVar32._8_4_ + auVar31._8_4_ + auVar27._8_4_ + auVar25._8_4_ +
             auVar32._4_4_ + auVar31._4_4_ + auVar27._4_4_ + auVar25._4_4_ +
             auVar32._12_4_ + auVar31._12_4_ + auVar27._12_4_ + auVar25._12_4_ >> 0xf;
        auVar17._8_4_ =
             auVar23._0_4_ + auVar33._0_4_ + auVar28._0_4_ + auVar26._0_4_ +
             auVar23._8_4_ + auVar33._8_4_ + auVar28._8_4_ + auVar26._8_4_ +
             auVar23._4_4_ + auVar33._4_4_ + auVar28._4_4_ + auVar26._4_4_ +
             auVar23._12_4_ + auVar33._12_4_ + auVar28._12_4_ + auVar26._12_4_ >> 0xf;
        auVar17._12_4_ =
             auVar19._0_4_ + auVar18._0_4_ + auVar13._0_4_ + auVar29._0_4_ +
             auVar19._8_4_ + auVar18._8_4_ + auVar13._8_4_ + auVar29._8_4_ +
             auVar19._4_4_ + auVar18._4_4_ + auVar13._4_4_ + auVar29._4_4_ +
             auVar19._12_4_ + auVar18._12_4_ + auVar13._12_4_ + auVar29._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar17,auVar21);
        auVar35._2_2_ = 0;
        auVar35._0_2_ = uVar8;
        auVar35._4_2_ = uVar8;
        auVar35._6_2_ = 0;
        auVar35._8_2_ = uVar8;
        auVar35._10_2_ = 0;
        auVar35._12_2_ = uVar8;
        auVar35._14_2_ = 0;
        local_70 = paddsw(auVar21,auVar35);
        param_5[4] = param_5[4] + (auVar13._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar13._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar13._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar13._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        pauVar9 = pauVar9 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 4:
    if (param_4 != 0) {
      pauVar9 = (undefined1 (*) [16])(param_1 + -0x20);
      do {
        auVar13 = pauVar9[1];
        auVar19 = *pauVar9;
        auVar20 = pauVar9[-1];
        auVar18 = pauVar9[-2];
        auVar25 = pmaddwd(auVar13,param_2[0x18]);
        auVar28 = pmaddwd(auVar19,param_2[0x17]);
        auVar31 = pmaddwd(auVar20,param_2[0x16]);
        auVar22 = pmaddwd(auVar18,param_2[0x15]);
        auVar23 = pmaddwd(auVar13,param_2[0x1d]);
        auVar26 = pmaddwd(auVar19,param_2[0x1c]);
        auVar29 = pmaddwd(auVar20,param_2[0x1b]);
        auVar33 = pmaddwd(auVar18,param_2[0x1a]);
        auVar24 = pmaddwd(auVar13,param_2[0x22]);
        auVar27 = pmaddwd(auVar19,param_2[0x21]);
        auVar30 = pmaddwd(auVar20,param_2[0x20]);
        auVar34 = pmaddwd(auVar18,param_2[0x1f]);
        auVar13 = pmaddwd(auVar13,param_2[0x27]);
        auVar21 = pmaddwd(auVar19,param_2[0x26]);
        auVar20 = pmaddwd(auVar20,param_2[0x25]);
        auVar19 = pmaddwd(auVar18,param_2[0x24]);
        auVar31._0_4_ =
             auVar22._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar25._0_4_ +
             auVar22._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar25._8_4_ +
             auVar22._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar25._4_4_ +
             auVar22._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar25._12_4_ >> 0xf;
        auVar31._4_4_ =
             auVar33._0_4_ + auVar29._0_4_ + auVar26._0_4_ + auVar23._0_4_ +
             auVar33._8_4_ + auVar29._8_4_ + auVar26._8_4_ + auVar23._8_4_ +
             auVar33._4_4_ + auVar29._4_4_ + auVar26._4_4_ + auVar23._4_4_ +
             auVar33._12_4_ + auVar29._12_4_ + auVar26._12_4_ + auVar23._12_4_ >> 0xf;
        auVar31._8_4_ =
             auVar34._0_4_ + auVar30._0_4_ + auVar27._0_4_ + auVar24._0_4_ +
             auVar34._8_4_ + auVar30._8_4_ + auVar27._8_4_ + auVar24._8_4_ +
             auVar34._4_4_ + auVar30._4_4_ + auVar27._4_4_ + auVar24._4_4_ +
             auVar34._12_4_ + auVar30._12_4_ + auVar27._12_4_ + auVar24._12_4_ >> 0xf;
        auVar31._12_4_ =
             auVar19._0_4_ + auVar20._0_4_ + auVar21._0_4_ + auVar13._0_4_ +
             auVar19._8_4_ + auVar20._8_4_ + auVar21._8_4_ + auVar13._8_4_ +
             auVar19._4_4_ + auVar20._4_4_ + auVar21._4_4_ + auVar13._4_4_ +
             auVar19._12_4_ + auVar20._12_4_ + auVar21._12_4_ + auVar13._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar31,local_70);
        *param_5 = *param_5 + (auVar13._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar13._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar13._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar13._12_4_ >> 0xe);
        auVar13 = pauVar9[1];
        auVar19 = *pauVar9;
        auVar20 = pauVar9[-1];
        auVar18 = pauVar9[-2];
        auVar30 = pmaddwd(auVar13,param_2[3]);
        auVar33 = pmaddwd(auVar19,param_2[2]);
        auVar23 = pmaddwd(auVar20,param_2[1]);
        auVar24 = pmaddwd(auVar18,*param_2);
        auVar25 = pmaddwd(auVar13,param_2[8]);
        auVar27 = pmaddwd(auVar19,param_2[7]);
        auVar31 = pmaddwd(auVar20,param_2[6]);
        auVar34 = pmaddwd(auVar18,param_2[5]);
        auVar29._2_2_ = 0;
        auVar29._0_2_ = uVar8;
        auVar29._4_2_ = uVar8;
        auVar29._6_2_ = 0;
        auVar29._8_2_ = uVar8;
        auVar29._10_2_ = 0;
        auVar29._12_2_ = uVar8;
        auVar29._14_2_ = 0;
        auVar21 = paddsw(local_70,auVar29);
        auVar26 = pmaddwd(auVar13,param_2[0xd]);
        auVar28 = pmaddwd(auVar19,param_2[0xc]);
        auVar29 = pmaddwd(auVar20,param_2[0xb]);
        auVar35 = pmaddwd(auVar18,param_2[10]);
        auVar13 = pmaddwd(auVar13,param_2[0x12]);
        auVar22 = pmaddwd(auVar19,param_2[0x11]);
        auVar19 = pmaddwd(auVar20,param_2[0x10]);
        auVar20 = pmaddwd(auVar18,param_2[0xf]);
        auVar33._0_4_ =
             auVar24._0_4_ + auVar23._0_4_ + auVar33._0_4_ + auVar30._0_4_ +
             auVar24._8_4_ + auVar23._8_4_ + auVar33._8_4_ + auVar30._8_4_ +
             auVar24._4_4_ + auVar23._4_4_ + auVar33._4_4_ + auVar30._4_4_ +
             auVar24._12_4_ + auVar23._12_4_ + auVar33._12_4_ + auVar30._12_4_ >> 0xf;
        auVar33._4_4_ =
             auVar34._0_4_ + auVar31._0_4_ + auVar27._0_4_ + auVar25._0_4_ +
             auVar34._8_4_ + auVar31._8_4_ + auVar27._8_4_ + auVar25._8_4_ +
             auVar34._4_4_ + auVar31._4_4_ + auVar27._4_4_ + auVar25._4_4_ +
             auVar34._12_4_ + auVar31._12_4_ + auVar27._12_4_ + auVar25._12_4_ >> 0xf;
        auVar33._8_4_ =
             auVar35._0_4_ + auVar29._0_4_ + auVar28._0_4_ + auVar26._0_4_ +
             auVar35._8_4_ + auVar29._8_4_ + auVar28._8_4_ + auVar26._8_4_ +
             auVar35._4_4_ + auVar29._4_4_ + auVar28._4_4_ + auVar26._4_4_ +
             auVar35._12_4_ + auVar29._12_4_ + auVar28._12_4_ + auVar26._12_4_ >> 0xf;
        auVar33._12_4_ =
             auVar20._0_4_ + auVar19._0_4_ + auVar22._0_4_ + auVar13._0_4_ +
             auVar20._8_4_ + auVar19._8_4_ + auVar22._8_4_ + auVar13._8_4_ +
             auVar20._4_4_ + auVar19._4_4_ + auVar22._4_4_ + auVar13._4_4_ +
             auVar20._12_4_ + auVar19._12_4_ + auVar22._12_4_ + auVar13._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar33,auVar21);
        auVar30._2_2_ = 0;
        auVar30._0_2_ = uVar8;
        auVar30._4_2_ = uVar8;
        auVar30._6_2_ = 0;
        auVar30._8_2_ = uVar8;
        auVar30._10_2_ = 0;
        auVar30._12_2_ = uVar8;
        auVar30._14_2_ = 0;
        local_70 = paddsw(auVar21,auVar30);
        param_5[4] = param_5[4] + (auVar13._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar13._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar13._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar13._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        pauVar9 = pauVar9 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 5:
    if (param_4 != 0) {
      do {
        auVar13 = pauVar9[3];
        auVar19 = pauVar9[2];
        auVar20 = pauVar9[1];
        auVar22 = pmaddwd(auVar13,param_2[0x17]);
        auVar24 = pmaddwd(auVar19,param_2[0x16]);
        auVar27 = pmaddwd(auVar20,param_2[0x15]);
        auVar30 = pmaddwd(*pauVar9,param_2[0x14]);
        auVar18 = pauVar9[4];
        auVar21 = pmaddwd(auVar18,param_2[0x1d]);
        auVar25 = pmaddwd(auVar13,param_2[0x1c]);
        auVar28 = pmaddwd(auVar19,param_2[0x1b]);
        auVar31 = pmaddwd(auVar20,param_2[0x1a]);
        auVar23 = pmaddwd(auVar18,param_2[0x22]);
        auVar26 = pmaddwd(auVar13,param_2[0x21]);
        auVar29 = pmaddwd(auVar19,param_2[0x20]);
        auVar33 = pmaddwd(auVar20,param_2[0x1f]);
        auVar18 = pmaddwd(auVar18,param_2[0x27]);
        auVar13 = pmaddwd(auVar13,param_2[0x26]);
        auVar19 = pmaddwd(auVar19,param_2[0x25]);
        auVar20 = pmaddwd(auVar20,param_2[0x24]);
        auVar27._0_4_ =
             auVar30._0_4_ + auVar27._0_4_ + auVar24._0_4_ + auVar22._0_4_ +
             auVar30._8_4_ + auVar27._8_4_ + auVar24._8_4_ + auVar22._8_4_ +
             auVar30._4_4_ + auVar27._4_4_ + auVar24._4_4_ + auVar22._4_4_ +
             auVar30._12_4_ + auVar27._12_4_ + auVar24._12_4_ + auVar22._12_4_ >> 0xf;
        auVar27._4_4_ =
             auVar31._0_4_ + auVar28._0_4_ + auVar25._0_4_ + auVar21._0_4_ +
             auVar31._8_4_ + auVar28._8_4_ + auVar25._8_4_ + auVar21._8_4_ +
             auVar31._4_4_ + auVar28._4_4_ + auVar25._4_4_ + auVar21._4_4_ +
             auVar31._12_4_ + auVar28._12_4_ + auVar25._12_4_ + auVar21._12_4_ >> 0xf;
        auVar27._8_4_ =
             auVar33._0_4_ + auVar29._0_4_ + auVar26._0_4_ + auVar23._0_4_ +
             auVar33._8_4_ + auVar29._8_4_ + auVar26._8_4_ + auVar23._8_4_ +
             auVar33._4_4_ + auVar29._4_4_ + auVar26._4_4_ + auVar23._4_4_ +
             auVar33._12_4_ + auVar29._12_4_ + auVar26._12_4_ + auVar23._12_4_ >> 0xf;
        auVar27._12_4_ =
             auVar20._0_4_ + auVar19._0_4_ + auVar13._0_4_ + auVar18._0_4_ +
             auVar20._8_4_ + auVar19._8_4_ + auVar13._8_4_ + auVar18._8_4_ +
             auVar20._4_4_ + auVar19._4_4_ + auVar13._4_4_ + auVar18._4_4_ +
             auVar20._12_4_ + auVar19._12_4_ + auVar13._12_4_ + auVar18._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar27,local_70);
        *param_5 = *param_5 + (auVar13._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar13._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar13._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar13._12_4_ >> 0xe);
        auVar13 = pauVar9[4];
        auVar19 = pauVar9[3];
        auVar20 = pauVar9[2];
        auVar18 = pauVar9[1];
        auVar28 = pmaddwd(auVar13,param_2[3]);
        auVar33 = pmaddwd(auVar19,param_2[2]);
        auVar23 = pmaddwd(auVar20,param_2[1]);
        auVar24 = pmaddwd(auVar18,*param_2);
        auVar26 = pmaddwd(auVar13,param_2[8]);
        auVar27 = pmaddwd(auVar19,param_2[7]);
        auVar30 = pmaddwd(auVar20,param_2[6]);
        auVar34 = pmaddwd(auVar18,param_2[5]);
        auVar25._2_2_ = 0;
        auVar25._0_2_ = uVar8;
        auVar25._4_2_ = uVar8;
        auVar25._6_2_ = 0;
        auVar25._8_2_ = uVar8;
        auVar25._10_2_ = 0;
        auVar25._12_2_ = uVar8;
        auVar25._14_2_ = 0;
        auVar21 = paddsw(local_70,auVar25);
        auVar25 = pmaddwd(auVar13,param_2[0xd]);
        auVar29 = pmaddwd(auVar19,param_2[0xc]);
        auVar31 = pmaddwd(auVar20,param_2[0xb]);
        auVar35 = pmaddwd(auVar18,param_2[10]);
        auVar13 = pmaddwd(auVar13,param_2[0x12]);
        auVar22 = pmaddwd(auVar19,param_2[0x11]);
        auVar19 = pmaddwd(auVar20,param_2[0x10]);
        auVar20 = pmaddwd(auVar18,param_2[0xf]);
        auVar28._0_4_ =
             auVar24._0_4_ + auVar23._0_4_ + auVar33._0_4_ + auVar28._0_4_ +
             auVar24._8_4_ + auVar23._8_4_ + auVar33._8_4_ + auVar28._8_4_ +
             auVar24._4_4_ + auVar23._4_4_ + auVar33._4_4_ + auVar28._4_4_ +
             auVar24._12_4_ + auVar23._12_4_ + auVar33._12_4_ + auVar28._12_4_ >> 0xf;
        auVar28._4_4_ =
             auVar34._0_4_ + auVar30._0_4_ + auVar27._0_4_ + auVar26._0_4_ +
             auVar34._8_4_ + auVar30._8_4_ + auVar27._8_4_ + auVar26._8_4_ +
             auVar34._4_4_ + auVar30._4_4_ + auVar27._4_4_ + auVar26._4_4_ +
             auVar34._12_4_ + auVar30._12_4_ + auVar27._12_4_ + auVar26._12_4_ >> 0xf;
        auVar28._8_4_ =
             auVar35._0_4_ + auVar31._0_4_ + auVar29._0_4_ + auVar25._0_4_ +
             auVar35._8_4_ + auVar31._8_4_ + auVar29._8_4_ + auVar25._8_4_ +
             auVar35._4_4_ + auVar31._4_4_ + auVar29._4_4_ + auVar25._4_4_ +
             auVar35._12_4_ + auVar31._12_4_ + auVar29._12_4_ + auVar25._12_4_ >> 0xf;
        auVar28._12_4_ =
             auVar20._0_4_ + auVar19._0_4_ + auVar22._0_4_ + auVar13._0_4_ +
             auVar20._8_4_ + auVar19._8_4_ + auVar22._8_4_ + auVar13._8_4_ +
             auVar20._4_4_ + auVar19._4_4_ + auVar22._4_4_ + auVar13._4_4_ +
             auVar20._12_4_ + auVar19._12_4_ + auVar22._12_4_ + auVar13._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar28,auVar21);
        auVar26._2_2_ = 0;
        auVar26._0_2_ = uVar8;
        auVar26._4_2_ = uVar8;
        auVar26._6_2_ = 0;
        auVar26._8_2_ = uVar8;
        auVar26._10_2_ = 0;
        auVar26._12_2_ = uVar8;
        auVar26._14_2_ = 0;
        local_70 = paddsw(auVar21,auVar26);
        param_5[4] = param_5[4] + (auVar13._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar13._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar13._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar13._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        pauVar9 = pauVar9 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 6:
    if (param_4 != 0) {
      do {
        auVar13 = pauVar9[3];
        auVar19 = pauVar9[2];
        auVar20 = pauVar9[1];
        auVar23 = pmaddwd(auVar13,param_2[0x17]);
        auVar28 = pmaddwd(auVar19,param_2[0x16]);
        auVar31 = pmaddwd(auVar20,param_2[0x15]);
        auVar18 = pmaddwd(*pauVar9,param_2[0x14]);
        auVar24 = pmaddwd(auVar13,param_2[0x1c]);
        auVar26 = pmaddwd(auVar19,param_2[0x1b]);
        auVar29 = pmaddwd(auVar20,param_2[0x1a]);
        auVar21 = pmaddwd(*pauVar9,param_2[0x19]);
        auVar22 = pmaddwd(pauVar9[4],param_2[0x22]);
        auVar27 = pmaddwd(auVar13,param_2[0x21]);
        auVar30 = pmaddwd(auVar19,param_2[0x20]);
        auVar33 = pmaddwd(auVar20,param_2[0x1f]);
        auVar25 = pmaddwd(pauVar9[4],param_2[0x27]);
        auVar13 = pmaddwd(auVar13,param_2[0x26]);
        auVar19 = pmaddwd(auVar19,param_2[0x25]);
        auVar20 = pmaddwd(auVar20,param_2[0x24]);
        auVar23._0_4_ =
             auVar18._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar23._0_4_ +
             auVar18._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar23._8_4_ +
             auVar18._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar23._4_4_ +
             auVar18._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar23._12_4_ >> 0xf;
        auVar23._4_4_ =
             auVar21._0_4_ + auVar29._0_4_ + auVar26._0_4_ + auVar24._0_4_ +
             auVar21._8_4_ + auVar29._8_4_ + auVar26._8_4_ + auVar24._8_4_ +
             auVar21._4_4_ + auVar29._4_4_ + auVar26._4_4_ + auVar24._4_4_ +
             auVar21._12_4_ + auVar29._12_4_ + auVar26._12_4_ + auVar24._12_4_ >> 0xf;
        auVar23._8_4_ =
             auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ + auVar22._0_4_ +
             auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ + auVar22._8_4_ +
             auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ + auVar22._4_4_ +
             auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_ + auVar22._12_4_ >> 0xf;
        auVar23._12_4_ =
             auVar20._0_4_ + auVar19._0_4_ + auVar13._0_4_ + auVar25._0_4_ +
             auVar20._8_4_ + auVar19._8_4_ + auVar13._8_4_ + auVar25._8_4_ +
             auVar20._4_4_ + auVar19._4_4_ + auVar13._4_4_ + auVar25._4_4_ +
             auVar20._12_4_ + auVar19._12_4_ + auVar13._12_4_ + auVar25._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar23,local_70);
        *param_5 = *param_5 + (auVar13._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar13._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar13._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar13._12_4_ >> 0xe);
        auVar13 = pauVar9[4];
        auVar19 = pauVar9[3];
        auVar20 = pauVar9[2];
        auVar18 = pauVar9[1];
        auVar29 = pmaddwd(auVar13,param_2[3]);
        auVar33 = pmaddwd(auVar19,param_2[2]);
        auVar23 = pmaddwd(auVar20,param_2[1]);
        auVar24 = pmaddwd(auVar18,*param_2);
        auVar25 = pmaddwd(auVar13,param_2[8]);
        auVar27 = pmaddwd(auVar19,param_2[7]);
        auVar30 = pmaddwd(auVar20,param_2[6]);
        auVar34 = pmaddwd(auVar18,param_2[5]);
        auVar22._2_2_ = 0;
        auVar22._0_2_ = uVar8;
        auVar22._4_2_ = uVar8;
        auVar22._6_2_ = 0;
        auVar22._8_2_ = uVar8;
        auVar22._10_2_ = 0;
        auVar22._12_2_ = uVar8;
        auVar22._14_2_ = 0;
        auVar21 = paddsw(local_70,auVar22);
        auVar26 = pmaddwd(auVar13,param_2[0xd]);
        auVar28 = pmaddwd(auVar19,param_2[0xc]);
        auVar31 = pmaddwd(auVar20,param_2[0xb]);
        auVar35 = pmaddwd(auVar18,param_2[10]);
        auVar13 = pmaddwd(auVar13,param_2[0x12]);
        auVar22 = pmaddwd(auVar19,param_2[0x11]);
        auVar19 = pmaddwd(auVar20,param_2[0x10]);
        auVar20 = pmaddwd(auVar18,param_2[0xf]);
        auVar24._0_4_ =
             auVar24._0_4_ + auVar23._0_4_ + auVar33._0_4_ + auVar29._0_4_ +
             auVar24._8_4_ + auVar23._8_4_ + auVar33._8_4_ + auVar29._8_4_ +
             auVar24._4_4_ + auVar23._4_4_ + auVar33._4_4_ + auVar29._4_4_ +
             auVar24._12_4_ + auVar23._12_4_ + auVar33._12_4_ + auVar29._12_4_ >> 0xf;
        auVar24._4_4_ =
             auVar34._0_4_ + auVar30._0_4_ + auVar27._0_4_ + auVar25._0_4_ +
             auVar34._8_4_ + auVar30._8_4_ + auVar27._8_4_ + auVar25._8_4_ +
             auVar34._4_4_ + auVar30._4_4_ + auVar27._4_4_ + auVar25._4_4_ +
             auVar34._12_4_ + auVar30._12_4_ + auVar27._12_4_ + auVar25._12_4_ >> 0xf;
        auVar24._8_4_ =
             auVar35._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar26._0_4_ +
             auVar35._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar26._8_4_ +
             auVar35._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar26._4_4_ +
             auVar35._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar26._12_4_ >> 0xf;
        auVar24._12_4_ =
             auVar20._0_4_ + auVar19._0_4_ + auVar22._0_4_ + auVar13._0_4_ +
             auVar20._8_4_ + auVar19._8_4_ + auVar22._8_4_ + auVar13._8_4_ +
             auVar20._4_4_ + auVar19._4_4_ + auVar22._4_4_ + auVar13._4_4_ +
             auVar20._12_4_ + auVar19._12_4_ + auVar22._12_4_ + auVar13._12_4_ >> 0xf;
        auVar13 = pmaddwd(auVar24,auVar21);
        auVar20._2_2_ = 0;
        auVar20._0_2_ = uVar8;
        auVar20._4_2_ = uVar8;
        auVar20._6_2_ = 0;
        auVar20._8_2_ = uVar8;
        auVar20._10_2_ = 0;
        auVar20._12_2_ = uVar8;
        auVar20._14_2_ = 0;
        local_70 = paddsw(auVar21,auVar20);
        param_5[4] = param_5[4] + (auVar13._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar13._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar13._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar13._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        pauVar9 = pauVar9 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 7:
    for (; param_4 != 0; param_4 = param_4 + -1) {
      auVar13 = pauVar9[3];
      auVar19 = pauVar9[2];
      auVar20 = pauVar9[1];
      auVar18 = *pauVar9;
      auVar25 = pmaddwd(auVar13,param_2[0x17]);
      auVar29 = pmaddwd(auVar19,param_2[0x16]);
      auVar33 = pmaddwd(auVar20,param_2[0x15]);
      auVar21 = pmaddwd(auVar18,param_2[0x14]);
      auVar23 = pmaddwd(auVar13,param_2[0x1c]);
      auVar26 = pmaddwd(auVar19,param_2[0x1b]);
      auVar30 = pmaddwd(auVar20,param_2[0x1a]);
      auVar34 = pmaddwd(auVar18,param_2[0x19]);
      auVar24 = pmaddwd(auVar13,param_2[0x21]);
      auVar27 = pmaddwd(auVar19,param_2[0x20]);
      auVar31 = pmaddwd(auVar20,param_2[0x1f]);
      auVar22 = pmaddwd(auVar18,param_2[0x1e]);
      auVar28 = pmaddwd(pauVar9[4],param_2[0x27]);
      auVar13 = pmaddwd(auVar13,param_2[0x26]);
      auVar18 = pmaddwd(auVar19,param_2[0x25]);
      auVar20 = pmaddwd(auVar20,param_2[0x24]);
      auVar19._0_4_ =
           auVar21._0_4_ + auVar33._0_4_ + auVar29._0_4_ + auVar25._0_4_ +
           auVar21._8_4_ + auVar33._8_4_ + auVar29._8_4_ + auVar25._8_4_ +
           auVar21._4_4_ + auVar33._4_4_ + auVar29._4_4_ + auVar25._4_4_ +
           auVar21._12_4_ + auVar33._12_4_ + auVar29._12_4_ + auVar25._12_4_ >> 0xf;
      auVar19._4_4_ =
           auVar34._0_4_ + auVar30._0_4_ + auVar26._0_4_ + auVar23._0_4_ +
           auVar34._8_4_ + auVar30._8_4_ + auVar26._8_4_ + auVar23._8_4_ +
           auVar34._4_4_ + auVar30._4_4_ + auVar26._4_4_ + auVar23._4_4_ +
           auVar34._12_4_ + auVar30._12_4_ + auVar26._12_4_ + auVar23._12_4_ >> 0xf;
      auVar19._8_4_ =
           auVar22._0_4_ + auVar31._0_4_ + auVar27._0_4_ + auVar24._0_4_ +
           auVar22._8_4_ + auVar31._8_4_ + auVar27._8_4_ + auVar24._8_4_ +
           auVar22._4_4_ + auVar31._4_4_ + auVar27._4_4_ + auVar24._4_4_ +
           auVar22._12_4_ + auVar31._12_4_ + auVar27._12_4_ + auVar24._12_4_ >> 0xf;
      auVar19._12_4_ =
           auVar20._0_4_ + auVar18._0_4_ + auVar13._0_4_ + auVar28._0_4_ +
           auVar20._8_4_ + auVar18._8_4_ + auVar13._8_4_ + auVar28._8_4_ +
           auVar20._4_4_ + auVar18._4_4_ + auVar13._4_4_ + auVar28._4_4_ +
           auVar20._12_4_ + auVar18._12_4_ + auVar13._12_4_ + auVar28._12_4_ >> 0xf;
      auVar13 = pmaddwd(auVar19,local_70);
      *param_5 = *param_5 + (auVar13._0_4_ >> 0xe);
      param_5[1] = param_5[1] + (auVar13._4_4_ >> 0xe);
      param_5[2] = param_5[2] + (auVar13._8_4_ >> 0xe);
      param_5[3] = param_5[3] + (auVar13._12_4_ >> 0xe);
      auVar13 = pauVar9[4];
      auVar19 = pauVar9[3];
      auVar20 = pauVar9[2];
      auVar18 = pauVar9[1];
      auVar29 = pmaddwd(auVar13,param_2[3]);
      auVar33 = pmaddwd(auVar19,param_2[2]);
      auVar23 = pmaddwd(auVar20,param_2[1]);
      auVar24 = pmaddwd(auVar18,*param_2);
      auVar25 = pmaddwd(auVar13,param_2[8]);
      auVar27 = pmaddwd(auVar19,param_2[7]);
      auVar30 = pmaddwd(auVar20,param_2[6]);
      auVar34 = pmaddwd(auVar18,param_2[5]);
      auVar21._2_2_ = 0;
      auVar21._0_2_ = uVar8;
      auVar21._4_2_ = uVar8;
      auVar21._6_2_ = 0;
      auVar21._8_2_ = uVar8;
      auVar21._10_2_ = 0;
      auVar21._12_2_ = uVar8;
      auVar21._14_2_ = 0;
      auVar21 = paddsw(local_70,auVar21);
      auVar26 = pmaddwd(auVar13,param_2[0xd]);
      auVar28 = pmaddwd(auVar19,param_2[0xc]);
      auVar31 = pmaddwd(auVar20,param_2[0xb]);
      auVar35 = pmaddwd(auVar18,param_2[10]);
      auVar13 = pmaddwd(auVar13,param_2[0x12]);
      auVar22 = pmaddwd(auVar19,param_2[0x11]);
      auVar19 = pmaddwd(auVar20,param_2[0x10]);
      auVar20 = pmaddwd(auVar18,param_2[0xf]);
      auVar18._0_4_ =
           auVar24._0_4_ + auVar23._0_4_ + auVar33._0_4_ + auVar29._0_4_ +
           auVar24._8_4_ + auVar23._8_4_ + auVar33._8_4_ + auVar29._8_4_ +
           auVar24._4_4_ + auVar23._4_4_ + auVar33._4_4_ + auVar29._4_4_ +
           auVar24._12_4_ + auVar23._12_4_ + auVar33._12_4_ + auVar29._12_4_ >> 0xf;
      auVar18._4_4_ =
           auVar34._0_4_ + auVar30._0_4_ + auVar27._0_4_ + auVar25._0_4_ +
           auVar34._8_4_ + auVar30._8_4_ + auVar27._8_4_ + auVar25._8_4_ +
           auVar34._4_4_ + auVar30._4_4_ + auVar27._4_4_ + auVar25._4_4_ +
           auVar34._12_4_ + auVar30._12_4_ + auVar27._12_4_ + auVar25._12_4_ >> 0xf;
      auVar18._8_4_ =
           auVar35._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar26._0_4_ +
           auVar35._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar26._8_4_ +
           auVar35._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar26._4_4_ +
           auVar35._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar26._12_4_ >> 0xf;
      auVar18._12_4_ =
           auVar20._0_4_ + auVar19._0_4_ + auVar22._0_4_ + auVar13._0_4_ +
           auVar20._8_4_ + auVar19._8_4_ + auVar22._8_4_ + auVar13._8_4_ +
           auVar20._4_4_ + auVar19._4_4_ + auVar22._4_4_ + auVar13._4_4_ +
           auVar20._12_4_ + auVar19._12_4_ + auVar22._12_4_ + auVar13._12_4_ >> 0xf;
      auVar19 = pmaddwd(auVar18,auVar21);
      auVar13._2_2_ = 0;
      auVar13._0_2_ = uVar8;
      auVar13._4_2_ = uVar8;
      auVar13._6_2_ = 0;
      auVar13._8_2_ = uVar8;
      auVar13._10_2_ = 0;
      auVar13._12_2_ = uVar8;
      auVar13._14_2_ = 0;
      local_70 = paddsw(auVar21,auVar13);
      param_5[4] = param_5[4] + (auVar19._0_4_ >> 0xe);
      param_5[5] = param_5[5] + (auVar19._4_4_ >> 0xe);
      param_5[6] = param_5[6] + (auVar19._8_4_ >> 0xe);
      param_5[7] = param_5[7] + (auVar19._12_4_ >> 0xe);
      param_5 = param_5 + 8;
      pauVar9 = pauVar9 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00c70c00 @ 00c70c00 ////

void __cdecl
FUN_00c70c00(int param_1,undefined1 (*param_2) [16],undefined4 param_3,int param_4,int *param_5,
            int *param_6,ushort param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
  int iVar9;
  int iVar19;
  int iVar20;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  pauVar8 = (undefined1 (*) [16])(param_1 + -0x50);
  switch(param_3) {
  case 0:
    if (param_4 != 0) {
      pauVar8 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar18 = *pauVar8;
        auVar22 = pauVar8[-1];
        auVar23 = pauVar8[-2];
        auVar25 = pauVar8[-3];
        auVar29 = pmaddwd(auVar18,param_2[0x18]);
        auVar32 = pmaddwd(auVar22,param_2[0x17]);
        auVar35 = pmaddwd(auVar23,param_2[0x16]);
        auVar26 = pmaddwd(auVar25,param_2[0x15]);
        auVar27 = pmaddwd(auVar18,param_2[0x1d]);
        auVar30 = pmaddwd(auVar22,param_2[0x1c]);
        auVar33 = pmaddwd(auVar23,param_2[0x1b]);
        auVar36 = pmaddwd(auVar25,param_2[0x1a]);
        auVar28 = pmaddwd(auVar18,param_2[0x22]);
        auVar31 = pmaddwd(auVar22,param_2[0x21]);
        auVar34 = pmaddwd(auVar23,param_2[0x20]);
        auVar37 = pmaddwd(auVar25,param_2[0x1f]);
        auVar18 = pmaddwd(auVar18,param_2[0x27]);
        auVar24 = pmaddwd(auVar22,param_2[0x26]);
        auVar23 = pmaddwd(auVar23,param_2[0x25]);
        auVar22 = pmaddwd(auVar25,param_2[0x24]);
        iVar9 = auVar26._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ +
                auVar26._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ +
                auVar26._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ +
                auVar26._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_;
        iVar19 = auVar36._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar36._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar36._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar36._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar20 = auVar37._0_4_ + auVar34._0_4_ + auVar31._0_4_ + auVar28._0_4_ +
                 auVar37._8_4_ + auVar34._8_4_ + auVar31._8_4_ + auVar28._8_4_ +
                 auVar37._4_4_ + auVar34._4_4_ + auVar31._4_4_ + auVar28._4_4_ +
                 auVar37._12_4_ + auVar34._12_4_ + auVar31._12_4_ + auVar28._12_4_;
        iVar21 = auVar22._0_4_ + auVar23._0_4_ + auVar24._0_4_ + auVar18._0_4_ +
                 auVar22._8_4_ + auVar23._8_4_ + auVar24._8_4_ + auVar18._8_4_ +
                 auVar22._4_4_ + auVar23._4_4_ + auVar24._4_4_ + auVar18._4_4_ +
                 auVar22._12_4_ + auVar23._12_4_ + auVar24._12_4_ + auVar18._12_4_;
        *param_5 = *param_5 + (iVar9 >> 0xe);
        param_5[1] = param_5[1] + (iVar19 >> 0xe);
        param_5[2] = param_5[2] + (iVar20 >> 0xe);
        param_5[3] = param_5[3] + (iVar21 >> 0xe);
        auVar10._0_4_ = iVar9 >> 0xf;
        auVar10._4_4_ = iVar19 >> 0xf;
        auVar10._8_4_ = iVar20 >> 0xf;
        auVar10._12_4_ = iVar21 >> 0xf;
        auVar1._2_2_ = 0;
        auVar1._0_2_ = param_7;
        auVar1._4_2_ = param_7;
        auVar1._6_2_ = 0;
        auVar1._8_2_ = param_7;
        auVar1._10_2_ = 0;
        auVar1._12_2_ = param_7;
        auVar1._14_2_ = 0;
        auVar18 = pmaddwd(auVar10,auVar1);
        *param_6 = *param_6 + (auVar18._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar18._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar18._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar18._12_4_ >> 0xe);
        auVar18 = pauVar8[1];
        auVar22 = *pauVar8;
        auVar23 = pauVar8[-1];
        auVar25 = pauVar8[-2];
        auVar29 = pmaddwd(auVar18,param_2[4]);
        auVar32 = pmaddwd(auVar22,param_2[3]);
        auVar35 = pmaddwd(auVar23,param_2[2]);
        auVar26 = pmaddwd(auVar25,param_2[1]);
        auVar27 = pmaddwd(auVar18,param_2[9]);
        auVar30 = pmaddwd(auVar22,param_2[8]);
        auVar33 = pmaddwd(auVar23,param_2[7]);
        auVar36 = pmaddwd(auVar25,param_2[6]);
        auVar28 = pmaddwd(auVar18,param_2[0xe]);
        auVar31 = pmaddwd(auVar22,param_2[0xd]);
        auVar34 = pmaddwd(auVar23,param_2[0xc]);
        auVar37 = pmaddwd(auVar25,param_2[0xb]);
        auVar18 = pmaddwd(auVar18,param_2[0x13]);
        auVar24 = pmaddwd(auVar22,param_2[0x12]);
        auVar23 = pmaddwd(auVar23,param_2[0x11]);
        auVar22 = pmaddwd(auVar25,param_2[0x10]);
        iVar9 = auVar26._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ +
                auVar26._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ +
                auVar26._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ +
                auVar26._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_;
        iVar19 = auVar36._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar36._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar36._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar36._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar20 = auVar37._0_4_ + auVar34._0_4_ + auVar31._0_4_ + auVar28._0_4_ +
                 auVar37._8_4_ + auVar34._8_4_ + auVar31._8_4_ + auVar28._8_4_ +
                 auVar37._4_4_ + auVar34._4_4_ + auVar31._4_4_ + auVar28._4_4_ +
                 auVar37._12_4_ + auVar34._12_4_ + auVar31._12_4_ + auVar28._12_4_;
        iVar21 = auVar22._0_4_ + auVar23._0_4_ + auVar24._0_4_ + auVar18._0_4_ +
                 auVar22._8_4_ + auVar23._8_4_ + auVar24._8_4_ + auVar18._8_4_ +
                 auVar22._4_4_ + auVar23._4_4_ + auVar24._4_4_ + auVar18._4_4_ +
                 auVar22._12_4_ + auVar23._12_4_ + auVar24._12_4_ + auVar18._12_4_;
        param_5[4] = param_5[4] + (iVar9 >> 0xe);
        param_5[5] = param_5[5] + (iVar19 >> 0xe);
        param_5[6] = param_5[6] + (iVar20 >> 0xe);
        param_5[7] = param_5[7] + (iVar21 >> 0xe);
        auVar11._0_4_ = iVar9 >> 0xf;
        auVar11._4_4_ = iVar19 >> 0xf;
        auVar11._8_4_ = iVar20 >> 0xf;
        auVar11._12_4_ = iVar21 >> 0xf;
        auVar2._2_2_ = 0;
        auVar2._0_2_ = param_7;
        auVar2._4_2_ = param_7;
        auVar2._6_2_ = 0;
        auVar2._8_2_ = param_7;
        auVar2._10_2_ = 0;
        auVar2._12_2_ = param_7;
        auVar2._14_2_ = 0;
        auVar18 = pmaddwd(auVar11,auVar2);
        param_6[4] = param_6[4] + (auVar18._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar18._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar18._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar18._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar8 = pauVar8 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 1:
    if (param_4 != 0) {
      pauVar8 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar18 = *pauVar8;
        auVar22 = pauVar8[-1];
        auVar23 = pauVar8[-2];
        auVar25 = pauVar8[-3];
        auVar29 = pmaddwd(auVar18,param_2[0x18]);
        auVar32 = pmaddwd(auVar22,param_2[0x17]);
        auVar35 = pmaddwd(auVar23,param_2[0x16]);
        auVar26 = pmaddwd(auVar25,param_2[0x15]);
        auVar27 = pmaddwd(auVar18,param_2[0x1d]);
        auVar30 = pmaddwd(auVar22,param_2[0x1c]);
        auVar33 = pmaddwd(auVar23,param_2[0x1b]);
        auVar36 = pmaddwd(auVar25,param_2[0x1a]);
        auVar28 = pmaddwd(auVar18,param_2[0x22]);
        auVar31 = pmaddwd(auVar22,param_2[0x21]);
        auVar34 = pmaddwd(auVar23,param_2[0x20]);
        auVar37 = pmaddwd(auVar25,param_2[0x1f]);
        auVar18 = pmaddwd(auVar18,param_2[0x27]);
        auVar24 = pmaddwd(auVar22,param_2[0x26]);
        auVar23 = pmaddwd(auVar23,param_2[0x25]);
        auVar22 = pmaddwd(auVar25,param_2[0x24]);
        iVar9 = auVar26._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ +
                auVar26._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ +
                auVar26._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ +
                auVar26._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_;
        iVar19 = auVar36._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar36._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar36._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar36._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar20 = auVar37._0_4_ + auVar34._0_4_ + auVar31._0_4_ + auVar28._0_4_ +
                 auVar37._8_4_ + auVar34._8_4_ + auVar31._8_4_ + auVar28._8_4_ +
                 auVar37._4_4_ + auVar34._4_4_ + auVar31._4_4_ + auVar28._4_4_ +
                 auVar37._12_4_ + auVar34._12_4_ + auVar31._12_4_ + auVar28._12_4_;
        iVar21 = auVar22._0_4_ + auVar23._0_4_ + auVar24._0_4_ + auVar18._0_4_ +
                 auVar22._8_4_ + auVar23._8_4_ + auVar24._8_4_ + auVar18._8_4_ +
                 auVar22._4_4_ + auVar23._4_4_ + auVar24._4_4_ + auVar18._4_4_ +
                 auVar22._12_4_ + auVar23._12_4_ + auVar24._12_4_ + auVar18._12_4_;
        *param_5 = *param_5 + (iVar9 >> 0xe);
        param_5[1] = param_5[1] + (iVar19 >> 0xe);
        param_5[2] = param_5[2] + (iVar20 >> 0xe);
        param_5[3] = param_5[3] + (iVar21 >> 0xe);
        auVar12._0_4_ = iVar9 >> 0xf;
        auVar12._4_4_ = iVar19 >> 0xf;
        auVar12._8_4_ = iVar20 >> 0xf;
        auVar12._12_4_ = iVar21 >> 0xf;
        auVar3._2_2_ = 0;
        auVar3._0_2_ = param_7;
        auVar3._4_2_ = param_7;
        auVar3._6_2_ = 0;
        auVar3._8_2_ = param_7;
        auVar3._10_2_ = 0;
        auVar3._12_2_ = param_7;
        auVar3._14_2_ = 0;
        auVar18 = pmaddwd(auVar12,auVar3);
        *param_6 = *param_6 + (auVar18._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar18._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar18._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar18._12_4_ >> 0xe);
        auVar18 = *pauVar8;
        auVar22 = pauVar8[-1];
        auVar23 = pauVar8[-2];
        auVar26 = pmaddwd(auVar18,param_2[3]);
        auVar28 = pmaddwd(auVar22,param_2[2]);
        auVar31 = pmaddwd(auVar23,param_2[1]);
        auVar34 = pmaddwd(pauVar8[-3],*param_2);
        auVar25 = pauVar8[1];
        auVar24 = pmaddwd(auVar25,param_2[9]);
        auVar29 = pmaddwd(auVar18,param_2[8]);
        auVar32 = pmaddwd(auVar22,param_2[7]);
        auVar35 = pmaddwd(auVar23,param_2[6]);
        auVar27 = pmaddwd(auVar25,param_2[0xe]);
        auVar30 = pmaddwd(auVar18,param_2[0xd]);
        auVar33 = pmaddwd(auVar22,param_2[0xc]);
        auVar36 = pmaddwd(auVar23,param_2[0xb]);
        auVar25 = pmaddwd(auVar25,param_2[0x13]);
        auVar18 = pmaddwd(auVar18,param_2[0x12]);
        auVar22 = pmaddwd(auVar22,param_2[0x11]);
        auVar23 = pmaddwd(auVar23,param_2[0x10]);
        iVar9 = auVar34._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar26._0_4_ +
                auVar34._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar26._8_4_ +
                auVar34._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar26._4_4_ +
                auVar34._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar26._12_4_;
        iVar19 = auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ + auVar24._0_4_ +
                 auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ + auVar24._8_4_ +
                 auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ + auVar24._4_4_ +
                 auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_ + auVar24._12_4_;
        iVar20 = auVar36._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar36._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar36._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar36._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar21 = auVar23._0_4_ + auVar22._0_4_ + auVar18._0_4_ + auVar25._0_4_ +
                 auVar23._8_4_ + auVar22._8_4_ + auVar18._8_4_ + auVar25._8_4_ +
                 auVar23._4_4_ + auVar22._4_4_ + auVar18._4_4_ + auVar25._4_4_ +
                 auVar23._12_4_ + auVar22._12_4_ + auVar18._12_4_ + auVar25._12_4_;
        param_5[4] = param_5[4] + (iVar9 >> 0xe);
        param_5[5] = param_5[5] + (iVar19 >> 0xe);
        param_5[6] = param_5[6] + (iVar20 >> 0xe);
        param_5[7] = param_5[7] + (iVar21 >> 0xe);
        auVar13._0_4_ = iVar9 >> 0xf;
        auVar13._4_4_ = iVar19 >> 0xf;
        auVar13._8_4_ = iVar20 >> 0xf;
        auVar13._12_4_ = iVar21 >> 0xf;
        auVar4._2_2_ = 0;
        auVar4._0_2_ = param_7;
        auVar4._4_2_ = param_7;
        auVar4._6_2_ = 0;
        auVar4._8_2_ = param_7;
        auVar4._10_2_ = 0;
        auVar4._12_2_ = param_7;
        auVar4._14_2_ = 0;
        auVar18 = pmaddwd(auVar13,auVar4);
        param_6[4] = param_6[4] + (auVar18._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar18._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar18._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar18._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar8 = pauVar8 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 2:
    if (param_4 != 0) {
      pauVar8 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar18 = *pauVar8;
        auVar22 = pauVar8[-1];
        auVar23 = pauVar8[-2];
        auVar25 = pauVar8[-3];
        auVar29 = pmaddwd(auVar18,param_2[0x18]);
        auVar32 = pmaddwd(auVar22,param_2[0x17]);
        auVar35 = pmaddwd(auVar23,param_2[0x16]);
        auVar26 = pmaddwd(auVar25,param_2[0x15]);
        auVar27 = pmaddwd(auVar18,param_2[0x1d]);
        auVar30 = pmaddwd(auVar22,param_2[0x1c]);
        auVar33 = pmaddwd(auVar23,param_2[0x1b]);
        auVar36 = pmaddwd(auVar25,param_2[0x1a]);
        auVar28 = pmaddwd(auVar18,param_2[0x22]);
        auVar31 = pmaddwd(auVar22,param_2[0x21]);
        auVar34 = pmaddwd(auVar23,param_2[0x20]);
        auVar37 = pmaddwd(auVar25,param_2[0x1f]);
        auVar18 = pmaddwd(auVar18,param_2[0x27]);
        auVar24 = pmaddwd(auVar22,param_2[0x26]);
        auVar23 = pmaddwd(auVar23,param_2[0x25]);
        auVar22 = pmaddwd(auVar25,param_2[0x24]);
        iVar9 = auVar26._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ +
                auVar26._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ +
                auVar26._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ +
                auVar26._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_;
        iVar19 = auVar36._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar36._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar36._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar36._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar20 = auVar37._0_4_ + auVar34._0_4_ + auVar31._0_4_ + auVar28._0_4_ +
                 auVar37._8_4_ + auVar34._8_4_ + auVar31._8_4_ + auVar28._8_4_ +
                 auVar37._4_4_ + auVar34._4_4_ + auVar31._4_4_ + auVar28._4_4_ +
                 auVar37._12_4_ + auVar34._12_4_ + auVar31._12_4_ + auVar28._12_4_;
        iVar21 = auVar22._0_4_ + auVar23._0_4_ + auVar24._0_4_ + auVar18._0_4_ +
                 auVar22._8_4_ + auVar23._8_4_ + auVar24._8_4_ + auVar18._8_4_ +
                 auVar22._4_4_ + auVar23._4_4_ + auVar24._4_4_ + auVar18._4_4_ +
                 auVar22._12_4_ + auVar23._12_4_ + auVar24._12_4_ + auVar18._12_4_;
        *param_5 = *param_5 + (iVar9 >> 0xe);
        param_5[1] = param_5[1] + (iVar19 >> 0xe);
        param_5[2] = param_5[2] + (iVar20 >> 0xe);
        param_5[3] = param_5[3] + (iVar21 >> 0xe);
        auVar14._0_4_ = iVar9 >> 0xf;
        auVar14._4_4_ = iVar19 >> 0xf;
        auVar14._8_4_ = iVar20 >> 0xf;
        auVar14._12_4_ = iVar21 >> 0xf;
        auVar5._2_2_ = 0;
        auVar5._0_2_ = param_7;
        auVar5._4_2_ = param_7;
        auVar5._6_2_ = 0;
        auVar5._8_2_ = param_7;
        auVar5._10_2_ = 0;
        auVar5._12_2_ = param_7;
        auVar5._14_2_ = 0;
        auVar18 = pmaddwd(auVar14,auVar5);
        *param_6 = *param_6 + (auVar18._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar18._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar18._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar18._12_4_ >> 0xe);
        auVar18 = *pauVar8;
        auVar22 = pauVar8[-1];
        auVar23 = pauVar8[-2];
        auVar29 = pmaddwd(auVar18,param_2[3]);
        auVar32 = pmaddwd(auVar22,param_2[2]);
        auVar35 = pmaddwd(auVar23,param_2[1]);
        auVar25 = pmaddwd(pauVar8[-3],*param_2);
        auVar27 = pmaddwd(auVar18,param_2[8]);
        auVar30 = pmaddwd(auVar22,param_2[7]);
        auVar33 = pmaddwd(auVar23,param_2[6]);
        auVar24 = pmaddwd(pauVar8[-3],param_2[5]);
        auVar26 = pmaddwd(pauVar8[1],param_2[0xe]);
        auVar31 = pmaddwd(auVar18,param_2[0xd]);
        auVar34 = pmaddwd(auVar22,param_2[0xc]);
        auVar36 = pmaddwd(auVar23,param_2[0xb]);
        auVar28 = pmaddwd(pauVar8[1],param_2[0x13]);
        auVar18 = pmaddwd(auVar18,param_2[0x12]);
        auVar22 = pmaddwd(auVar22,param_2[0x11]);
        auVar23 = pmaddwd(auVar23,param_2[0x10]);
        iVar9 = auVar25._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ +
                auVar25._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ +
                auVar25._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ +
                auVar25._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_;
        iVar19 = auVar24._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar24._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar24._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar24._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar20 = auVar36._0_4_ + auVar34._0_4_ + auVar31._0_4_ + auVar26._0_4_ +
                 auVar36._8_4_ + auVar34._8_4_ + auVar31._8_4_ + auVar26._8_4_ +
                 auVar36._4_4_ + auVar34._4_4_ + auVar31._4_4_ + auVar26._4_4_ +
                 auVar36._12_4_ + auVar34._12_4_ + auVar31._12_4_ + auVar26._12_4_;
        iVar21 = auVar23._0_4_ + auVar22._0_4_ + auVar18._0_4_ + auVar28._0_4_ +
                 auVar23._8_4_ + auVar22._8_4_ + auVar18._8_4_ + auVar28._8_4_ +
                 auVar23._4_4_ + auVar22._4_4_ + auVar18._4_4_ + auVar28._4_4_ +
                 auVar23._12_4_ + auVar22._12_4_ + auVar18._12_4_ + auVar28._12_4_;
        param_5[4] = param_5[4] + (iVar9 >> 0xe);
        param_5[5] = param_5[5] + (iVar19 >> 0xe);
        param_5[6] = param_5[6] + (iVar20 >> 0xe);
        param_5[7] = param_5[7] + (iVar21 >> 0xe);
        auVar15._0_4_ = iVar9 >> 0xf;
        auVar15._4_4_ = iVar19 >> 0xf;
        auVar15._8_4_ = iVar20 >> 0xf;
        auVar15._12_4_ = iVar21 >> 0xf;
        auVar6._2_2_ = 0;
        auVar6._0_2_ = param_7;
        auVar6._4_2_ = param_7;
        auVar6._6_2_ = 0;
        auVar6._8_2_ = param_7;
        auVar6._10_2_ = 0;
        auVar6._12_2_ = param_7;
        auVar6._14_2_ = 0;
        auVar18 = pmaddwd(auVar15,auVar6);
        param_6[4] = param_6[4] + (auVar18._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar18._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar18._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar18._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar8 = pauVar8 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 3:
    if (param_4 != 0) {
      pauVar8 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar18 = *pauVar8;
        auVar22 = pauVar8[-1];
        auVar23 = pauVar8[-2];
        auVar25 = pauVar8[-3];
        auVar29 = pmaddwd(auVar18,param_2[0x18]);
        auVar32 = pmaddwd(auVar22,param_2[0x17]);
        auVar35 = pmaddwd(auVar23,param_2[0x16]);
        auVar26 = pmaddwd(auVar25,param_2[0x15]);
        auVar27 = pmaddwd(auVar18,param_2[0x1d]);
        auVar30 = pmaddwd(auVar22,param_2[0x1c]);
        auVar33 = pmaddwd(auVar23,param_2[0x1b]);
        auVar36 = pmaddwd(auVar25,param_2[0x1a]);
        auVar28 = pmaddwd(auVar18,param_2[0x22]);
        auVar31 = pmaddwd(auVar22,param_2[0x21]);
        auVar34 = pmaddwd(auVar23,param_2[0x20]);
        auVar37 = pmaddwd(auVar25,param_2[0x1f]);
        auVar18 = pmaddwd(auVar18,param_2[0x27]);
        auVar24 = pmaddwd(auVar22,param_2[0x26]);
        auVar23 = pmaddwd(auVar23,param_2[0x25]);
        auVar22 = pmaddwd(auVar25,param_2[0x24]);
        iVar9 = auVar26._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ +
                auVar26._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ +
                auVar26._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ +
                auVar26._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_;
        iVar19 = auVar36._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar36._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar36._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar36._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar20 = auVar37._0_4_ + auVar34._0_4_ + auVar31._0_4_ + auVar28._0_4_ +
                 auVar37._8_4_ + auVar34._8_4_ + auVar31._8_4_ + auVar28._8_4_ +
                 auVar37._4_4_ + auVar34._4_4_ + auVar31._4_4_ + auVar28._4_4_ +
                 auVar37._12_4_ + auVar34._12_4_ + auVar31._12_4_ + auVar28._12_4_;
        iVar21 = auVar22._0_4_ + auVar23._0_4_ + auVar24._0_4_ + auVar18._0_4_ +
                 auVar22._8_4_ + auVar23._8_4_ + auVar24._8_4_ + auVar18._8_4_ +
                 auVar22._4_4_ + auVar23._4_4_ + auVar24._4_4_ + auVar18._4_4_ +
                 auVar22._12_4_ + auVar23._12_4_ + auVar24._12_4_ + auVar18._12_4_;
        *param_5 = *param_5 + (iVar9 >> 0xe);
        param_5[1] = param_5[1] + (iVar19 >> 0xe);
        param_5[2] = param_5[2] + (iVar20 >> 0xe);
        param_5[3] = param_5[3] + (iVar21 >> 0xe);
        auVar16._0_4_ = iVar9 >> 0xf;
        auVar16._4_4_ = iVar19 >> 0xf;
        auVar16._8_4_ = iVar20 >> 0xf;
        auVar16._12_4_ = iVar21 >> 0xf;
        auVar37._2_2_ = 0;
        auVar37._0_2_ = param_7;
        auVar37._4_2_ = param_7;
        auVar37._6_2_ = 0;
        auVar37._8_2_ = param_7;
        auVar37._10_2_ = 0;
        auVar37._12_2_ = param_7;
        auVar37._14_2_ = 0;
        auVar18 = pmaddwd(auVar16,auVar37);
        *param_6 = *param_6 + (auVar18._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar18._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar18._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar18._12_4_ >> 0xe);
        auVar18 = *pauVar8;
        auVar22 = pauVar8[-1];
        auVar23 = pauVar8[-2];
        auVar25 = pauVar8[-3];
        auVar28 = pmaddwd(auVar18,param_2[3]);
        auVar32 = pmaddwd(auVar22,param_2[2]);
        auVar35 = pmaddwd(auVar23,param_2[1]);
        auVar24 = pmaddwd(auVar25,*param_2);
        auVar26 = pmaddwd(auVar18,param_2[8]);
        auVar29 = pmaddwd(auVar22,param_2[7]);
        auVar33 = pmaddwd(auVar23,param_2[6]);
        auVar36 = pmaddwd(auVar25,param_2[5]);
        auVar27 = pmaddwd(auVar18,param_2[0xd]);
        auVar30 = pmaddwd(auVar22,param_2[0xc]);
        auVar34 = pmaddwd(auVar23,param_2[0xb]);
        auVar25 = pmaddwd(auVar25,param_2[10]);
        auVar31 = pmaddwd(pauVar8[1],param_2[0x13]);
        auVar18 = pmaddwd(auVar18,param_2[0x12]);
        auVar22 = pmaddwd(auVar22,param_2[0x11]);
        auVar23 = pmaddwd(auVar23,param_2[0x10]);
        iVar9 = auVar24._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar28._0_4_ +
                auVar24._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar28._8_4_ +
                auVar24._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar28._4_4_ +
                auVar24._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar28._12_4_;
        iVar19 = auVar36._0_4_ + auVar33._0_4_ + auVar29._0_4_ + auVar26._0_4_ +
                 auVar36._8_4_ + auVar33._8_4_ + auVar29._8_4_ + auVar26._8_4_ +
                 auVar36._4_4_ + auVar33._4_4_ + auVar29._4_4_ + auVar26._4_4_ +
                 auVar36._12_4_ + auVar33._12_4_ + auVar29._12_4_ + auVar26._12_4_;
        iVar20 = auVar25._0_4_ + auVar34._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar25._8_4_ + auVar34._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar25._4_4_ + auVar34._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar25._12_4_ + auVar34._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar21 = auVar23._0_4_ + auVar22._0_4_ + auVar18._0_4_ + auVar31._0_4_ +
                 auVar23._8_4_ + auVar22._8_4_ + auVar18._8_4_ + auVar31._8_4_ +
                 auVar23._4_4_ + auVar22._4_4_ + auVar18._4_4_ + auVar31._4_4_ +
                 auVar23._12_4_ + auVar22._12_4_ + auVar18._12_4_ + auVar31._12_4_;
        param_5[4] = param_5[4] + (iVar9 >> 0xe);
        param_5[5] = param_5[5] + (iVar19 >> 0xe);
        param_5[6] = param_5[6] + (iVar20 >> 0xe);
        param_5[7] = param_5[7] + (iVar21 >> 0xe);
        auVar17._0_4_ = iVar9 >> 0xf;
        auVar17._4_4_ = iVar19 >> 0xf;
        auVar17._8_4_ = iVar20 >> 0xf;
        auVar17._12_4_ = iVar21 >> 0xf;
        auVar7._2_2_ = 0;
        auVar7._0_2_ = param_7;
        auVar7._4_2_ = param_7;
        auVar7._6_2_ = 0;
        auVar7._8_2_ = param_7;
        auVar7._10_2_ = 0;
        auVar7._12_2_ = param_7;
        auVar7._14_2_ = 0;
        auVar18 = pmaddwd(auVar17,auVar7);
        param_6[4] = param_6[4] + (auVar18._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar18._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar18._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar18._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar8 = pauVar8 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 4:
    if (param_4 != 0) {
      pauVar8 = (undefined1 (*) [16])(param_1 + -0x20);
      do {
        auVar18 = pauVar8[1];
        auVar22 = *pauVar8;
        auVar23 = pauVar8[-1];
        auVar25 = pauVar8[-2];
        auVar29 = pmaddwd(auVar18,param_2[0x18]);
        auVar32 = pmaddwd(auVar22,param_2[0x17]);
        auVar35 = pmaddwd(auVar23,param_2[0x16]);
        auVar26 = pmaddwd(auVar25,param_2[0x15]);
        auVar27 = pmaddwd(auVar18,param_2[0x1d]);
        auVar30 = pmaddwd(auVar22,param_2[0x1c]);
        auVar33 = pmaddwd(auVar23,param_2[0x1b]);
        auVar36 = pmaddwd(auVar25,param_2[0x1a]);
        auVar28 = pmaddwd(auVar18,param_2[0x22]);
        auVar31 = pmaddwd(auVar22,param_2[0x21]);
        auVar34 = pmaddwd(auVar23,param_2[0x20]);
        auVar37 = pmaddwd(auVar25,param_2[0x1f]);
        auVar18 = pmaddwd(auVar18,param_2[0x27]);
        auVar24 = pmaddwd(auVar22,param_2[0x26]);
        auVar23 = pmaddwd(auVar23,param_2[0x25]);
        auVar22 = pmaddwd(auVar25,param_2[0x24]);
        iVar9 = auVar26._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ +
                auVar26._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ +
                auVar26._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ +
                auVar26._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_;
        iVar19 = auVar36._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar36._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar36._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar36._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar20 = auVar37._0_4_ + auVar34._0_4_ + auVar31._0_4_ + auVar28._0_4_ +
                 auVar37._8_4_ + auVar34._8_4_ + auVar31._8_4_ + auVar28._8_4_ +
                 auVar37._4_4_ + auVar34._4_4_ + auVar31._4_4_ + auVar28._4_4_ +
                 auVar37._12_4_ + auVar34._12_4_ + auVar31._12_4_ + auVar28._12_4_;
        iVar21 = auVar22._0_4_ + auVar23._0_4_ + auVar24._0_4_ + auVar18._0_4_ +
                 auVar22._8_4_ + auVar23._8_4_ + auVar24._8_4_ + auVar18._8_4_ +
                 auVar22._4_4_ + auVar23._4_4_ + auVar24._4_4_ + auVar18._4_4_ +
                 auVar22._12_4_ + auVar23._12_4_ + auVar24._12_4_ + auVar18._12_4_;
        *param_5 = *param_5 + (iVar9 >> 0xe);
        param_5[1] = param_5[1] + (iVar19 >> 0xe);
        param_5[2] = param_5[2] + (iVar20 >> 0xe);
        param_5[3] = param_5[3] + (iVar21 >> 0xe);
        auVar35._0_4_ = iVar9 >> 0xf;
        auVar35._4_4_ = iVar19 >> 0xf;
        auVar35._8_4_ = iVar20 >> 0xf;
        auVar35._12_4_ = iVar21 >> 0xf;
        auVar33._2_2_ = 0;
        auVar33._0_2_ = param_7;
        auVar33._4_2_ = param_7;
        auVar33._6_2_ = 0;
        auVar33._8_2_ = param_7;
        auVar33._10_2_ = 0;
        auVar33._12_2_ = param_7;
        auVar33._14_2_ = 0;
        auVar18 = pmaddwd(auVar35,auVar33);
        *param_6 = *param_6 + (auVar18._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar18._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar18._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar18._12_4_ >> 0xe);
        auVar18 = pauVar8[1];
        auVar22 = *pauVar8;
        auVar23 = pauVar8[-1];
        auVar25 = pauVar8[-2];
        auVar29 = pmaddwd(auVar18,param_2[3]);
        auVar32 = pmaddwd(auVar22,param_2[2]);
        auVar35 = pmaddwd(auVar23,param_2[1]);
        auVar26 = pmaddwd(auVar25,*param_2);
        auVar27 = pmaddwd(auVar18,param_2[8]);
        auVar30 = pmaddwd(auVar22,param_2[7]);
        auVar33 = pmaddwd(auVar23,param_2[6]);
        auVar36 = pmaddwd(auVar25,param_2[5]);
        auVar28 = pmaddwd(auVar18,param_2[0xd]);
        auVar31 = pmaddwd(auVar22,param_2[0xc]);
        auVar34 = pmaddwd(auVar23,param_2[0xb]);
        auVar37 = pmaddwd(auVar25,param_2[10]);
        auVar18 = pmaddwd(auVar18,param_2[0x12]);
        auVar24 = pmaddwd(auVar22,param_2[0x11]);
        auVar23 = pmaddwd(auVar23,param_2[0x10]);
        auVar22 = pmaddwd(auVar25,param_2[0xf]);
        iVar9 = auVar26._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ +
                auVar26._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ +
                auVar26._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ +
                auVar26._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_;
        iVar19 = auVar36._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar36._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar36._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar36._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar20 = auVar37._0_4_ + auVar34._0_4_ + auVar31._0_4_ + auVar28._0_4_ +
                 auVar37._8_4_ + auVar34._8_4_ + auVar31._8_4_ + auVar28._8_4_ +
                 auVar37._4_4_ + auVar34._4_4_ + auVar31._4_4_ + auVar28._4_4_ +
                 auVar37._12_4_ + auVar34._12_4_ + auVar31._12_4_ + auVar28._12_4_;
        iVar21 = auVar22._0_4_ + auVar23._0_4_ + auVar24._0_4_ + auVar18._0_4_ +
                 auVar22._8_4_ + auVar23._8_4_ + auVar24._8_4_ + auVar18._8_4_ +
                 auVar22._4_4_ + auVar23._4_4_ + auVar24._4_4_ + auVar18._4_4_ +
                 auVar22._12_4_ + auVar23._12_4_ + auVar24._12_4_ + auVar18._12_4_;
        param_5[4] = param_5[4] + (iVar9 >> 0xe);
        param_5[5] = param_5[5] + (iVar19 >> 0xe);
        param_5[6] = param_5[6] + (iVar20 >> 0xe);
        param_5[7] = param_5[7] + (iVar21 >> 0xe);
        auVar36._0_4_ = iVar9 >> 0xf;
        auVar36._4_4_ = iVar19 >> 0xf;
        auVar36._8_4_ = iVar20 >> 0xf;
        auVar36._12_4_ = iVar21 >> 0xf;
        auVar34._2_2_ = 0;
        auVar34._0_2_ = param_7;
        auVar34._4_2_ = param_7;
        auVar34._6_2_ = 0;
        auVar34._8_2_ = param_7;
        auVar34._10_2_ = 0;
        auVar34._12_2_ = param_7;
        auVar34._14_2_ = 0;
        auVar18 = pmaddwd(auVar36,auVar34);
        param_6[4] = param_6[4] + (auVar18._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar18._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar18._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar18._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar8 = pauVar8 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 5:
    if (param_4 != 0) {
      do {
        auVar18 = pauVar8[3];
        auVar22 = pauVar8[2];
        auVar23 = pauVar8[1];
        auVar26 = pmaddwd(auVar18,param_2[0x17]);
        auVar28 = pmaddwd(auVar22,param_2[0x16]);
        auVar31 = pmaddwd(auVar23,param_2[0x15]);
        auVar34 = pmaddwd(*pauVar8,param_2[0x14]);
        auVar25 = pauVar8[4];
        auVar24 = pmaddwd(auVar25,param_2[0x1d]);
        auVar29 = pmaddwd(auVar18,param_2[0x1c]);
        auVar32 = pmaddwd(auVar22,param_2[0x1b]);
        auVar35 = pmaddwd(auVar23,param_2[0x1a]);
        auVar27 = pmaddwd(auVar25,param_2[0x22]);
        auVar30 = pmaddwd(auVar18,param_2[0x21]);
        auVar33 = pmaddwd(auVar22,param_2[0x20]);
        auVar36 = pmaddwd(auVar23,param_2[0x1f]);
        auVar25 = pmaddwd(auVar25,param_2[0x27]);
        auVar18 = pmaddwd(auVar18,param_2[0x26]);
        auVar22 = pmaddwd(auVar22,param_2[0x25]);
        auVar23 = pmaddwd(auVar23,param_2[0x24]);
        iVar9 = auVar34._0_4_ + auVar31._0_4_ + auVar28._0_4_ + auVar26._0_4_ +
                auVar34._8_4_ + auVar31._8_4_ + auVar28._8_4_ + auVar26._8_4_ +
                auVar34._4_4_ + auVar31._4_4_ + auVar28._4_4_ + auVar26._4_4_ +
                auVar34._12_4_ + auVar31._12_4_ + auVar28._12_4_ + auVar26._12_4_;
        iVar19 = auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ + auVar24._0_4_ +
                 auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ + auVar24._8_4_ +
                 auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ + auVar24._4_4_ +
                 auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_ + auVar24._12_4_;
        iVar20 = auVar36._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar36._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar36._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar36._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar21 = auVar23._0_4_ + auVar22._0_4_ + auVar18._0_4_ + auVar25._0_4_ +
                 auVar23._8_4_ + auVar22._8_4_ + auVar18._8_4_ + auVar25._8_4_ +
                 auVar23._4_4_ + auVar22._4_4_ + auVar18._4_4_ + auVar25._4_4_ +
                 auVar23._12_4_ + auVar22._12_4_ + auVar18._12_4_ + auVar25._12_4_;
        *param_5 = *param_5 + (iVar9 >> 0xe);
        param_5[1] = param_5[1] + (iVar19 >> 0xe);
        param_5[2] = param_5[2] + (iVar20 >> 0xe);
        param_5[3] = param_5[3] + (iVar21 >> 0xe);
        auVar31._0_4_ = iVar9 >> 0xf;
        auVar31._4_4_ = iVar19 >> 0xf;
        auVar31._8_4_ = iVar20 >> 0xf;
        auVar31._12_4_ = iVar21 >> 0xf;
        auVar29._2_2_ = 0;
        auVar29._0_2_ = param_7;
        auVar29._4_2_ = param_7;
        auVar29._6_2_ = 0;
        auVar29._8_2_ = param_7;
        auVar29._10_2_ = 0;
        auVar29._12_2_ = param_7;
        auVar29._14_2_ = 0;
        auVar18 = pmaddwd(auVar31,auVar29);
        *param_6 = *param_6 + (auVar18._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar18._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar18._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar18._12_4_ >> 0xe);
        auVar18 = pauVar8[4];
        auVar22 = pauVar8[3];
        auVar23 = pauVar8[2];
        auVar25 = pauVar8[1];
        auVar29 = pmaddwd(auVar18,param_2[3]);
        auVar32 = pmaddwd(auVar22,param_2[2]);
        auVar35 = pmaddwd(auVar23,param_2[1]);
        auVar26 = pmaddwd(auVar25,*param_2);
        auVar27 = pmaddwd(auVar18,param_2[8]);
        auVar30 = pmaddwd(auVar22,param_2[7]);
        auVar33 = pmaddwd(auVar23,param_2[6]);
        auVar36 = pmaddwd(auVar25,param_2[5]);
        auVar28 = pmaddwd(auVar18,param_2[0xd]);
        auVar31 = pmaddwd(auVar22,param_2[0xc]);
        auVar34 = pmaddwd(auVar23,param_2[0xb]);
        auVar37 = pmaddwd(auVar25,param_2[10]);
        auVar18 = pmaddwd(auVar18,param_2[0x12]);
        auVar24 = pmaddwd(auVar22,param_2[0x11]);
        auVar23 = pmaddwd(auVar23,param_2[0x10]);
        auVar22 = pmaddwd(auVar25,param_2[0xf]);
        iVar9 = auVar26._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ +
                auVar26._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ +
                auVar26._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ +
                auVar26._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_;
        iVar19 = auVar36._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar36._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar36._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar36._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar20 = auVar37._0_4_ + auVar34._0_4_ + auVar31._0_4_ + auVar28._0_4_ +
                 auVar37._8_4_ + auVar34._8_4_ + auVar31._8_4_ + auVar28._8_4_ +
                 auVar37._4_4_ + auVar34._4_4_ + auVar31._4_4_ + auVar28._4_4_ +
                 auVar37._12_4_ + auVar34._12_4_ + auVar31._12_4_ + auVar28._12_4_;
        iVar21 = auVar22._0_4_ + auVar23._0_4_ + auVar24._0_4_ + auVar18._0_4_ +
                 auVar22._8_4_ + auVar23._8_4_ + auVar24._8_4_ + auVar18._8_4_ +
                 auVar22._4_4_ + auVar23._4_4_ + auVar24._4_4_ + auVar18._4_4_ +
                 auVar22._12_4_ + auVar23._12_4_ + auVar24._12_4_ + auVar18._12_4_;
        param_5[4] = param_5[4] + (iVar9 >> 0xe);
        param_5[5] = param_5[5] + (iVar19 >> 0xe);
        param_5[6] = param_5[6] + (iVar20 >> 0xe);
        param_5[7] = param_5[7] + (iVar21 >> 0xe);
        auVar32._0_4_ = iVar9 >> 0xf;
        auVar32._4_4_ = iVar19 >> 0xf;
        auVar32._8_4_ = iVar20 >> 0xf;
        auVar32._12_4_ = iVar21 >> 0xf;
        auVar30._2_2_ = 0;
        auVar30._0_2_ = param_7;
        auVar30._4_2_ = param_7;
        auVar30._6_2_ = 0;
        auVar30._8_2_ = param_7;
        auVar30._10_2_ = 0;
        auVar30._12_2_ = param_7;
        auVar30._14_2_ = 0;
        auVar18 = pmaddwd(auVar32,auVar30);
        param_6[4] = param_6[4] + (auVar18._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar18._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar18._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar18._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar8 = pauVar8 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 6:
    if (param_4 != 0) {
      do {
        auVar18 = pauVar8[3];
        auVar22 = pauVar8[2];
        auVar23 = pauVar8[1];
        auVar29 = pmaddwd(auVar18,param_2[0x17]);
        auVar32 = pmaddwd(auVar22,param_2[0x16]);
        auVar35 = pmaddwd(auVar23,param_2[0x15]);
        auVar25 = pmaddwd(*pauVar8,param_2[0x14]);
        auVar27 = pmaddwd(auVar18,param_2[0x1c]);
        auVar30 = pmaddwd(auVar22,param_2[0x1b]);
        auVar33 = pmaddwd(auVar23,param_2[0x1a]);
        auVar24 = pmaddwd(*pauVar8,param_2[0x19]);
        auVar26 = pmaddwd(pauVar8[4],param_2[0x22]);
        auVar31 = pmaddwd(auVar18,param_2[0x21]);
        auVar34 = pmaddwd(auVar22,param_2[0x20]);
        auVar36 = pmaddwd(auVar23,param_2[0x1f]);
        auVar28 = pmaddwd(pauVar8[4],param_2[0x27]);
        auVar18 = pmaddwd(auVar18,param_2[0x26]);
        auVar22 = pmaddwd(auVar22,param_2[0x25]);
        auVar23 = pmaddwd(auVar23,param_2[0x24]);
        iVar9 = auVar25._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ +
                auVar25._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ +
                auVar25._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ +
                auVar25._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_;
        iVar19 = auVar24._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar24._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar24._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar24._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar20 = auVar36._0_4_ + auVar34._0_4_ + auVar31._0_4_ + auVar26._0_4_ +
                 auVar36._8_4_ + auVar34._8_4_ + auVar31._8_4_ + auVar26._8_4_ +
                 auVar36._4_4_ + auVar34._4_4_ + auVar31._4_4_ + auVar26._4_4_ +
                 auVar36._12_4_ + auVar34._12_4_ + auVar31._12_4_ + auVar26._12_4_;
        iVar21 = auVar23._0_4_ + auVar22._0_4_ + auVar18._0_4_ + auVar28._0_4_ +
                 auVar23._8_4_ + auVar22._8_4_ + auVar18._8_4_ + auVar28._8_4_ +
                 auVar23._4_4_ + auVar22._4_4_ + auVar18._4_4_ + auVar28._4_4_ +
                 auVar23._12_4_ + auVar22._12_4_ + auVar18._12_4_ + auVar28._12_4_;
        *param_5 = *param_5 + (iVar9 >> 0xe);
        param_5[1] = param_5[1] + (iVar19 >> 0xe);
        param_5[2] = param_5[2] + (iVar20 >> 0xe);
        param_5[3] = param_5[3] + (iVar21 >> 0xe);
        auVar27._0_4_ = iVar9 >> 0xf;
        auVar27._4_4_ = iVar19 >> 0xf;
        auVar27._8_4_ = iVar20 >> 0xf;
        auVar27._12_4_ = iVar21 >> 0xf;
        auVar24._2_2_ = 0;
        auVar24._0_2_ = param_7;
        auVar24._4_2_ = param_7;
        auVar24._6_2_ = 0;
        auVar24._8_2_ = param_7;
        auVar24._10_2_ = 0;
        auVar24._12_2_ = param_7;
        auVar24._14_2_ = 0;
        auVar18 = pmaddwd(auVar27,auVar24);
        *param_6 = *param_6 + (auVar18._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar18._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar18._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar18._12_4_ >> 0xe);
        auVar18 = pauVar8[4];
        auVar22 = pauVar8[3];
        auVar23 = pauVar8[2];
        auVar25 = pauVar8[1];
        auVar29 = pmaddwd(auVar18,param_2[3]);
        auVar32 = pmaddwd(auVar22,param_2[2]);
        auVar35 = pmaddwd(auVar23,param_2[1]);
        auVar26 = pmaddwd(auVar25,*param_2);
        auVar27 = pmaddwd(auVar18,param_2[8]);
        auVar30 = pmaddwd(auVar22,param_2[7]);
        auVar33 = pmaddwd(auVar23,param_2[6]);
        auVar36 = pmaddwd(auVar25,param_2[5]);
        auVar28 = pmaddwd(auVar18,param_2[0xd]);
        auVar31 = pmaddwd(auVar22,param_2[0xc]);
        auVar34 = pmaddwd(auVar23,param_2[0xb]);
        auVar37 = pmaddwd(auVar25,param_2[10]);
        auVar18 = pmaddwd(auVar18,param_2[0x12]);
        auVar24 = pmaddwd(auVar22,param_2[0x11]);
        auVar23 = pmaddwd(auVar23,param_2[0x10]);
        auVar22 = pmaddwd(auVar25,param_2[0xf]);
        iVar9 = auVar26._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ +
                auVar26._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ +
                auVar26._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ +
                auVar26._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_;
        iVar19 = auVar36._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
                 auVar36._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
                 auVar36._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
                 auVar36._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
        iVar20 = auVar37._0_4_ + auVar34._0_4_ + auVar31._0_4_ + auVar28._0_4_ +
                 auVar37._8_4_ + auVar34._8_4_ + auVar31._8_4_ + auVar28._8_4_ +
                 auVar37._4_4_ + auVar34._4_4_ + auVar31._4_4_ + auVar28._4_4_ +
                 auVar37._12_4_ + auVar34._12_4_ + auVar31._12_4_ + auVar28._12_4_;
        iVar21 = auVar22._0_4_ + auVar23._0_4_ + auVar24._0_4_ + auVar18._0_4_ +
                 auVar22._8_4_ + auVar23._8_4_ + auVar24._8_4_ + auVar18._8_4_ +
                 auVar22._4_4_ + auVar23._4_4_ + auVar24._4_4_ + auVar18._4_4_ +
                 auVar22._12_4_ + auVar23._12_4_ + auVar24._12_4_ + auVar18._12_4_;
        param_5[4] = param_5[4] + (iVar9 >> 0xe);
        param_5[5] = param_5[5] + (iVar19 >> 0xe);
        param_5[6] = param_5[6] + (iVar20 >> 0xe);
        param_5[7] = param_5[7] + (iVar21 >> 0xe);
        auVar28._0_4_ = iVar9 >> 0xf;
        auVar28._4_4_ = iVar19 >> 0xf;
        auVar28._8_4_ = iVar20 >> 0xf;
        auVar28._12_4_ = iVar21 >> 0xf;
        auVar26._2_2_ = 0;
        auVar26._0_2_ = param_7;
        auVar26._4_2_ = param_7;
        auVar26._6_2_ = 0;
        auVar26._8_2_ = param_7;
        auVar26._10_2_ = 0;
        auVar26._12_2_ = param_7;
        auVar26._14_2_ = 0;
        auVar18 = pmaddwd(auVar28,auVar26);
        param_6[4] = param_6[4] + (auVar18._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar18._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar18._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar18._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar8 = pauVar8 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 7:
    for (; param_4 != 0; param_4 = param_4 + -1) {
      auVar18 = pauVar8[3];
      auVar22 = pauVar8[2];
      auVar23 = pauVar8[1];
      auVar25 = *pauVar8;
      auVar28 = pmaddwd(auVar18,param_2[0x17]);
      auVar32 = pmaddwd(auVar22,param_2[0x16]);
      auVar35 = pmaddwd(auVar23,param_2[0x15]);
      auVar24 = pmaddwd(auVar25,param_2[0x14]);
      auVar26 = pmaddwd(auVar18,param_2[0x1c]);
      auVar29 = pmaddwd(auVar22,param_2[0x1b]);
      auVar33 = pmaddwd(auVar23,param_2[0x1a]);
      auVar36 = pmaddwd(auVar25,param_2[0x19]);
      auVar27 = pmaddwd(auVar18,param_2[0x21]);
      auVar30 = pmaddwd(auVar22,param_2[0x20]);
      auVar34 = pmaddwd(auVar23,param_2[0x1f]);
      auVar25 = pmaddwd(auVar25,param_2[0x1e]);
      auVar31 = pmaddwd(pauVar8[4],param_2[0x27]);
      auVar18 = pmaddwd(auVar18,param_2[0x26]);
      auVar22 = pmaddwd(auVar22,param_2[0x25]);
      auVar23 = pmaddwd(auVar23,param_2[0x24]);
      iVar9 = auVar24._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar28._0_4_ +
              auVar24._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar28._8_4_ +
              auVar24._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar28._4_4_ +
              auVar24._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar28._12_4_;
      iVar19 = auVar36._0_4_ + auVar33._0_4_ + auVar29._0_4_ + auVar26._0_4_ +
               auVar36._8_4_ + auVar33._8_4_ + auVar29._8_4_ + auVar26._8_4_ +
               auVar36._4_4_ + auVar33._4_4_ + auVar29._4_4_ + auVar26._4_4_ +
               auVar36._12_4_ + auVar33._12_4_ + auVar29._12_4_ + auVar26._12_4_;
      iVar20 = auVar25._0_4_ + auVar34._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
               auVar25._8_4_ + auVar34._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
               auVar25._4_4_ + auVar34._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
               auVar25._12_4_ + auVar34._12_4_ + auVar30._12_4_ + auVar27._12_4_;
      iVar21 = auVar23._0_4_ + auVar22._0_4_ + auVar18._0_4_ + auVar31._0_4_ +
               auVar23._8_4_ + auVar22._8_4_ + auVar18._8_4_ + auVar31._8_4_ +
               auVar23._4_4_ + auVar22._4_4_ + auVar18._4_4_ + auVar31._4_4_ +
               auVar23._12_4_ + auVar22._12_4_ + auVar18._12_4_ + auVar31._12_4_;
      *param_5 = *param_5 + (iVar9 >> 0xe);
      param_5[1] = param_5[1] + (iVar19 >> 0xe);
      param_5[2] = param_5[2] + (iVar20 >> 0xe);
      param_5[3] = param_5[3] + (iVar21 >> 0xe);
      auVar23._0_4_ = iVar9 >> 0xf;
      auVar23._4_4_ = iVar19 >> 0xf;
      auVar23._8_4_ = iVar20 >> 0xf;
      auVar23._12_4_ = iVar21 >> 0xf;
      auVar18._2_2_ = 0;
      auVar18._0_2_ = param_7;
      auVar18._4_2_ = param_7;
      auVar18._6_2_ = 0;
      auVar18._8_2_ = param_7;
      auVar18._10_2_ = 0;
      auVar18._12_2_ = param_7;
      auVar18._14_2_ = 0;
      auVar18 = pmaddwd(auVar23,auVar18);
      *param_6 = *param_6 + (auVar18._0_4_ >> 0xe);
      param_6[1] = param_6[1] + (auVar18._4_4_ >> 0xe);
      param_6[2] = param_6[2] + (auVar18._8_4_ >> 0xe);
      param_6[3] = param_6[3] + (auVar18._12_4_ >> 0xe);
      auVar18 = pauVar8[4];
      auVar22 = pauVar8[3];
      auVar23 = pauVar8[2];
      auVar25 = pauVar8[1];
      auVar29 = pmaddwd(auVar18,param_2[3]);
      auVar32 = pmaddwd(auVar22,param_2[2]);
      auVar35 = pmaddwd(auVar23,param_2[1]);
      auVar26 = pmaddwd(auVar25,*param_2);
      auVar27 = pmaddwd(auVar18,param_2[8]);
      auVar30 = pmaddwd(auVar22,param_2[7]);
      auVar33 = pmaddwd(auVar23,param_2[6]);
      auVar36 = pmaddwd(auVar25,param_2[5]);
      auVar28 = pmaddwd(auVar18,param_2[0xd]);
      auVar31 = pmaddwd(auVar22,param_2[0xc]);
      auVar34 = pmaddwd(auVar23,param_2[0xb]);
      auVar37 = pmaddwd(auVar25,param_2[10]);
      auVar18 = pmaddwd(auVar18,param_2[0x12]);
      auVar24 = pmaddwd(auVar22,param_2[0x11]);
      auVar23 = pmaddwd(auVar23,param_2[0x10]);
      auVar22 = pmaddwd(auVar25,param_2[0xf]);
      iVar9 = auVar26._0_4_ + auVar35._0_4_ + auVar32._0_4_ + auVar29._0_4_ +
              auVar26._8_4_ + auVar35._8_4_ + auVar32._8_4_ + auVar29._8_4_ +
              auVar26._4_4_ + auVar35._4_4_ + auVar32._4_4_ + auVar29._4_4_ +
              auVar26._12_4_ + auVar35._12_4_ + auVar32._12_4_ + auVar29._12_4_;
      iVar19 = auVar36._0_4_ + auVar33._0_4_ + auVar30._0_4_ + auVar27._0_4_ +
               auVar36._8_4_ + auVar33._8_4_ + auVar30._8_4_ + auVar27._8_4_ +
               auVar36._4_4_ + auVar33._4_4_ + auVar30._4_4_ + auVar27._4_4_ +
               auVar36._12_4_ + auVar33._12_4_ + auVar30._12_4_ + auVar27._12_4_;
      iVar20 = auVar37._0_4_ + auVar34._0_4_ + auVar31._0_4_ + auVar28._0_4_ +
               auVar37._8_4_ + auVar34._8_4_ + auVar31._8_4_ + auVar28._8_4_ +
               auVar37._4_4_ + auVar34._4_4_ + auVar31._4_4_ + auVar28._4_4_ +
               auVar37._12_4_ + auVar34._12_4_ + auVar31._12_4_ + auVar28._12_4_;
      iVar21 = auVar22._0_4_ + auVar23._0_4_ + auVar24._0_4_ + auVar18._0_4_ +
               auVar22._8_4_ + auVar23._8_4_ + auVar24._8_4_ + auVar18._8_4_ +
               auVar22._4_4_ + auVar23._4_4_ + auVar24._4_4_ + auVar18._4_4_ +
               auVar22._12_4_ + auVar23._12_4_ + auVar24._12_4_ + auVar18._12_4_;
      param_5[4] = param_5[4] + (iVar9 >> 0xe);
      param_5[5] = param_5[5] + (iVar19 >> 0xe);
      param_5[6] = param_5[6] + (iVar20 >> 0xe);
      param_5[7] = param_5[7] + (iVar21 >> 0xe);
      auVar25._0_4_ = iVar9 >> 0xf;
      auVar25._4_4_ = iVar19 >> 0xf;
      auVar25._8_4_ = iVar20 >> 0xf;
      auVar25._12_4_ = iVar21 >> 0xf;
      auVar22._2_2_ = 0;
      auVar22._0_2_ = param_7;
      auVar22._4_2_ = param_7;
      auVar22._6_2_ = 0;
      auVar22._8_2_ = param_7;
      auVar22._10_2_ = 0;
      auVar22._12_2_ = param_7;
      auVar22._14_2_ = 0;
      auVar18 = pmaddwd(auVar25,auVar22);
      param_6[4] = param_6[4] + (auVar18._0_4_ >> 0xe);
      param_6[5] = param_6[5] + (auVar18._4_4_ >> 0xe);
      param_6[6] = param_6[6] + (auVar18._8_4_ >> 0xe);
      param_6[7] = param_6[7] + (auVar18._12_4_ >> 0xe);
      param_5 = param_5 + 8;
      param_6 = param_6 + 8;
      pauVar8 = pauVar8 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00c72990 @ 00c72990 ////

void __cdecl
FUN_00c72990(int param_1,undefined1 (*param_2) [16],undefined4 param_3,int param_4,int *param_5,
            int *param_6,ushort param_7,ushort param_8,short param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ushort uVar24;
  undefined1 (*pauVar25) [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 local_80 [16];
  
  auVar51 = local_80;
  auVar50._2_10_ = local_80._6_10_;
  auVar50._0_2_ = param_8 + param_9;
  auVar50._12_4_ = 0;
  local_80 = auVar50 << 0x20;
  local_80._0_2_ = param_8;
  auVar50 = local_80;
  uVar24 = param_9 << 2;
  local_80._10_6_ = auVar51._10_6_;
  local_80._0_8_ = auVar50._0_8_;
  local_80._8_2_ = param_8 + param_9 * 2;
  auVar50 = local_80;
  pauVar25 = (undefined1 (*) [16])(param_1 + -0x50);
  local_80._14_2_ = auVar51._14_2_;
  local_80._0_12_ = auVar50._0_12_;
  local_80._12_2_ = param_8 + param_9 * 3;
  auVar50 = local_80;
  local_80._2_2_ = 0;
  auVar51 = local_80;
  local_80._8_8_ = auVar50._8_8_;
  local_80._0_6_ = auVar51._0_6_;
  local_80._6_2_ = 0;
  auVar51 = local_80;
  local_80._12_4_ = auVar50._12_4_;
  local_80._0_10_ = auVar51._0_10_;
  local_80._10_2_ = 0;
  local_80._14_2_ = 0;
  switch(param_3) {
  case 0:
    if (param_4 != 0) {
      pauVar25 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar50 = *pauVar25;
        auVar51 = pauVar25[-1];
        auVar52 = pauVar25[-2];
        auVar54 = pauVar25[-3];
        auVar58 = pmaddwd(auVar50,param_2[0x18]);
        auVar61 = pmaddwd(auVar51,param_2[0x17]);
        auVar64 = pmaddwd(auVar52,param_2[0x16]);
        auVar57 = pmaddwd(auVar54,param_2[0x15]);
        auVar55 = pmaddwd(auVar50,param_2[0x1d]);
        auVar59 = pmaddwd(auVar51,param_2[0x1c]);
        auVar62 = pmaddwd(auVar52,param_2[0x1b]);
        auVar65 = pmaddwd(auVar54,param_2[0x1a]);
        auVar56 = pmaddwd(auVar50,param_2[0x22]);
        auVar60 = pmaddwd(auVar51,param_2[0x21]);
        auVar63 = pmaddwd(auVar52,param_2[0x20]);
        auVar66 = pmaddwd(auVar54,param_2[0x1f]);
        auVar50 = pmaddwd(auVar50,param_2[0x27]);
        auVar53 = pmaddwd(auVar51,param_2[0x26]);
        auVar52 = pmaddwd(auVar52,param_2[0x25]);
        auVar51 = pmaddwd(auVar54,param_2[0x24]);
        auVar26._0_4_ =
             auVar57._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar58._0_4_ +
             auVar57._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar58._8_4_ +
             auVar57._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar58._4_4_ +
             auVar57._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar58._12_4_ >> 0xf;
        auVar26._4_4_ =
             auVar65._0_4_ + auVar62._0_4_ + auVar59._0_4_ + auVar55._0_4_ +
             auVar65._8_4_ + auVar62._8_4_ + auVar59._8_4_ + auVar55._8_4_ +
             auVar65._4_4_ + auVar62._4_4_ + auVar59._4_4_ + auVar55._4_4_ +
             auVar65._12_4_ + auVar62._12_4_ + auVar59._12_4_ + auVar55._12_4_ >> 0xf;
        auVar26._8_4_ =
             auVar66._0_4_ + auVar63._0_4_ + auVar60._0_4_ + auVar56._0_4_ +
             auVar66._8_4_ + auVar63._8_4_ + auVar60._8_4_ + auVar56._8_4_ +
             auVar66._4_4_ + auVar63._4_4_ + auVar60._4_4_ + auVar56._4_4_ +
             auVar66._12_4_ + auVar63._12_4_ + auVar60._12_4_ + auVar56._12_4_ >> 0xf;
        auVar26._12_4_ =
             auVar51._0_4_ + auVar52._0_4_ + auVar53._0_4_ + auVar50._0_4_ +
             auVar51._8_4_ + auVar52._8_4_ + auVar53._8_4_ + auVar50._8_4_ +
             auVar51._4_4_ + auVar52._4_4_ + auVar53._4_4_ + auVar50._4_4_ +
             auVar51._12_4_ + auVar52._12_4_ + auVar53._12_4_ + auVar50._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar26,local_80);
        *param_5 = *param_5 + (auVar50._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar50._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar50._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar50._12_4_ >> 0xe);
        auVar27._0_4_ = auVar50._0_4_ >> 0xf;
        auVar27._4_4_ = auVar50._4_4_ >> 0xf;
        auVar27._8_4_ = auVar50._8_4_ >> 0xf;
        auVar27._12_4_ = auVar50._12_4_ >> 0xf;
        auVar1._2_2_ = 0;
        auVar1._0_2_ = param_7;
        auVar1._4_2_ = param_7;
        auVar1._6_2_ = 0;
        auVar1._8_2_ = param_7;
        auVar1._10_2_ = 0;
        auVar1._12_2_ = param_7;
        auVar1._14_2_ = 0;
        auVar50 = pmaddwd(auVar27,auVar1);
        *param_6 = *param_6 + (auVar50._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar50._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar50._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar50._12_4_ >> 0xe);
        auVar50 = pauVar25[1];
        auVar51 = *pauVar25;
        auVar52 = pauVar25[-1];
        auVar54 = pauVar25[-2];
        auVar62 = pmaddwd(auVar50,param_2[4]);
        auVar65 = pmaddwd(auVar51,param_2[3]);
        auVar55 = pmaddwd(auVar52,param_2[2]);
        auVar56 = pmaddwd(auVar54,param_2[1]);
        auVar58 = pmaddwd(auVar50,param_2[9]);
        auVar12._2_2_ = 0;
        auVar12._0_2_ = uVar24;
        auVar12._4_2_ = uVar24;
        auVar12._6_2_ = 0;
        auVar12._8_2_ = uVar24;
        auVar12._10_2_ = 0;
        auVar12._12_2_ = uVar24;
        auVar12._14_2_ = 0;
        auVar53 = paddsw(local_80,auVar12);
        auVar60 = pmaddwd(auVar51,param_2[8]);
        auVar63 = pmaddwd(auVar52,param_2[7]);
        auVar66 = pmaddwd(auVar54,param_2[6]);
        auVar59 = pmaddwd(auVar50,param_2[0xe]);
        auVar61 = pmaddwd(auVar51,param_2[0xd]);
        auVar64 = pmaddwd(auVar52,param_2[0xc]);
        auVar67 = pmaddwd(auVar54,param_2[0xb]);
        auVar50 = pmaddwd(auVar50,param_2[0x13]);
        auVar57 = pmaddwd(auVar51,param_2[0x12]);
        auVar51 = pmaddwd(auVar52,param_2[0x11]);
        auVar52 = pmaddwd(auVar54,param_2[0x10]);
        auVar28._0_4_ =
             auVar56._0_4_ + auVar55._0_4_ + auVar65._0_4_ + auVar62._0_4_ +
             auVar56._8_4_ + auVar55._8_4_ + auVar65._8_4_ + auVar62._8_4_ +
             auVar56._4_4_ + auVar55._4_4_ + auVar65._4_4_ + auVar62._4_4_ +
             auVar56._12_4_ + auVar55._12_4_ + auVar65._12_4_ + auVar62._12_4_ >> 0xf;
        auVar28._4_4_ =
             auVar66._0_4_ + auVar63._0_4_ + auVar60._0_4_ + auVar58._0_4_ +
             auVar66._8_4_ + auVar63._8_4_ + auVar60._8_4_ + auVar58._8_4_ +
             auVar66._4_4_ + auVar63._4_4_ + auVar60._4_4_ + auVar58._4_4_ +
             auVar66._12_4_ + auVar63._12_4_ + auVar60._12_4_ + auVar58._12_4_ >> 0xf;
        auVar28._8_4_ =
             auVar67._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar59._0_4_ +
             auVar67._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar59._8_4_ +
             auVar67._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar59._4_4_ +
             auVar67._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar59._12_4_ >> 0xf;
        auVar28._12_4_ =
             auVar52._0_4_ + auVar51._0_4_ + auVar57._0_4_ + auVar50._0_4_ +
             auVar52._8_4_ + auVar51._8_4_ + auVar57._8_4_ + auVar50._8_4_ +
             auVar52._4_4_ + auVar51._4_4_ + auVar57._4_4_ + auVar50._4_4_ +
             auVar52._12_4_ + auVar51._12_4_ + auVar57._12_4_ + auVar50._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar28,auVar53);
        auVar13._2_2_ = 0;
        auVar13._0_2_ = uVar24;
        auVar13._4_2_ = uVar24;
        auVar13._6_2_ = 0;
        auVar13._8_2_ = uVar24;
        auVar13._10_2_ = 0;
        auVar13._12_2_ = uVar24;
        auVar13._14_2_ = 0;
        local_80 = paddsw(auVar53,auVar13);
        param_5[4] = param_5[4] + (auVar50._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar50._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar50._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar50._12_4_ >> 0xe);
        auVar29._0_4_ = auVar50._0_4_ >> 0xf;
        auVar29._4_4_ = auVar50._4_4_ >> 0xf;
        auVar29._8_4_ = auVar50._8_4_ >> 0xf;
        auVar29._12_4_ = auVar50._12_4_ >> 0xf;
        auVar2._2_2_ = 0;
        auVar2._0_2_ = param_7;
        auVar2._4_2_ = param_7;
        auVar2._6_2_ = 0;
        auVar2._8_2_ = param_7;
        auVar2._10_2_ = 0;
        auVar2._12_2_ = param_7;
        auVar2._14_2_ = 0;
        auVar50 = pmaddwd(auVar29,auVar2);
        param_6[4] = param_6[4] + (auVar50._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar50._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar50._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar50._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar25 = pauVar25 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 1:
    if (param_4 != 0) {
      pauVar25 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar50 = *pauVar25;
        auVar51 = pauVar25[-1];
        auVar52 = pauVar25[-2];
        auVar54 = pauVar25[-3];
        auVar58 = pmaddwd(auVar50,param_2[0x18]);
        auVar61 = pmaddwd(auVar51,param_2[0x17]);
        auVar64 = pmaddwd(auVar52,param_2[0x16]);
        auVar57 = pmaddwd(auVar54,param_2[0x15]);
        auVar55 = pmaddwd(auVar50,param_2[0x1d]);
        auVar59 = pmaddwd(auVar51,param_2[0x1c]);
        auVar62 = pmaddwd(auVar52,param_2[0x1b]);
        auVar65 = pmaddwd(auVar54,param_2[0x1a]);
        auVar56 = pmaddwd(auVar50,param_2[0x22]);
        auVar60 = pmaddwd(auVar51,param_2[0x21]);
        auVar63 = pmaddwd(auVar52,param_2[0x20]);
        auVar66 = pmaddwd(auVar54,param_2[0x1f]);
        auVar50 = pmaddwd(auVar50,param_2[0x27]);
        auVar53 = pmaddwd(auVar51,param_2[0x26]);
        auVar52 = pmaddwd(auVar52,param_2[0x25]);
        auVar51 = pmaddwd(auVar54,param_2[0x24]);
        auVar30._0_4_ =
             auVar57._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar58._0_4_ +
             auVar57._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar58._8_4_ +
             auVar57._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar58._4_4_ +
             auVar57._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar58._12_4_ >> 0xf;
        auVar30._4_4_ =
             auVar65._0_4_ + auVar62._0_4_ + auVar59._0_4_ + auVar55._0_4_ +
             auVar65._8_4_ + auVar62._8_4_ + auVar59._8_4_ + auVar55._8_4_ +
             auVar65._4_4_ + auVar62._4_4_ + auVar59._4_4_ + auVar55._4_4_ +
             auVar65._12_4_ + auVar62._12_4_ + auVar59._12_4_ + auVar55._12_4_ >> 0xf;
        auVar30._8_4_ =
             auVar66._0_4_ + auVar63._0_4_ + auVar60._0_4_ + auVar56._0_4_ +
             auVar66._8_4_ + auVar63._8_4_ + auVar60._8_4_ + auVar56._8_4_ +
             auVar66._4_4_ + auVar63._4_4_ + auVar60._4_4_ + auVar56._4_4_ +
             auVar66._12_4_ + auVar63._12_4_ + auVar60._12_4_ + auVar56._12_4_ >> 0xf;
        auVar30._12_4_ =
             auVar51._0_4_ + auVar52._0_4_ + auVar53._0_4_ + auVar50._0_4_ +
             auVar51._8_4_ + auVar52._8_4_ + auVar53._8_4_ + auVar50._8_4_ +
             auVar51._4_4_ + auVar52._4_4_ + auVar53._4_4_ + auVar50._4_4_ +
             auVar51._12_4_ + auVar52._12_4_ + auVar53._12_4_ + auVar50._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar30,local_80);
        *param_5 = *param_5 + (auVar50._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar50._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar50._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar50._12_4_ >> 0xe);
        auVar31._0_4_ = auVar50._0_4_ >> 0xf;
        auVar31._4_4_ = auVar50._4_4_ >> 0xf;
        auVar31._8_4_ = auVar50._8_4_ >> 0xf;
        auVar31._12_4_ = auVar50._12_4_ >> 0xf;
        auVar3._2_2_ = 0;
        auVar3._0_2_ = param_7;
        auVar3._4_2_ = param_7;
        auVar3._6_2_ = 0;
        auVar3._8_2_ = param_7;
        auVar3._10_2_ = 0;
        auVar3._12_2_ = param_7;
        auVar3._14_2_ = 0;
        auVar50 = pmaddwd(auVar31,auVar3);
        *param_6 = *param_6 + (auVar50._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar50._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar50._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar50._12_4_ >> 0xe);
        auVar50 = *pauVar25;
        auVar51 = pauVar25[-1];
        auVar52 = pauVar25[-2];
        auVar59 = pmaddwd(auVar50,param_2[3]);
        auVar62 = pmaddwd(auVar51,param_2[2]);
        auVar57 = pmaddwd(auVar52,param_2[1]);
        auVar65 = pmaddwd(pauVar25[-3],*param_2);
        auVar54 = pauVar25[1];
        auVar55 = pmaddwd(auVar54,param_2[9]);
        auVar14._2_2_ = 0;
        auVar14._0_2_ = uVar24;
        auVar14._4_2_ = uVar24;
        auVar14._6_2_ = 0;
        auVar14._8_2_ = uVar24;
        auVar14._10_2_ = 0;
        auVar14._12_2_ = uVar24;
        auVar14._14_2_ = 0;
        auVar53 = paddsw(local_80,auVar14);
        auVar60 = pmaddwd(auVar50,param_2[8]);
        auVar63 = pmaddwd(auVar51,param_2[7]);
        auVar66 = pmaddwd(auVar52,param_2[6]);
        auVar56 = pmaddwd(auVar54,param_2[0xe]);
        auVar61 = pmaddwd(auVar50,param_2[0xd]);
        auVar64 = pmaddwd(auVar51,param_2[0xc]);
        auVar67 = pmaddwd(auVar52,param_2[0xb]);
        auVar58 = pmaddwd(auVar54,param_2[0x13]);
        auVar50 = pmaddwd(auVar50,param_2[0x12]);
        auVar54 = pmaddwd(auVar51,param_2[0x11]);
        auVar51 = pmaddwd(auVar52,param_2[0x10]);
        auVar32._0_4_ =
             auVar65._0_4_ + auVar57._0_4_ + auVar62._0_4_ + auVar59._0_4_ +
             auVar65._8_4_ + auVar57._8_4_ + auVar62._8_4_ + auVar59._8_4_ +
             auVar65._4_4_ + auVar57._4_4_ + auVar62._4_4_ + auVar59._4_4_ +
             auVar65._12_4_ + auVar57._12_4_ + auVar62._12_4_ + auVar59._12_4_ >> 0xf;
        auVar32._4_4_ =
             auVar66._0_4_ + auVar63._0_4_ + auVar60._0_4_ + auVar55._0_4_ +
             auVar66._8_4_ + auVar63._8_4_ + auVar60._8_4_ + auVar55._8_4_ +
             auVar66._4_4_ + auVar63._4_4_ + auVar60._4_4_ + auVar55._4_4_ +
             auVar66._12_4_ + auVar63._12_4_ + auVar60._12_4_ + auVar55._12_4_ >> 0xf;
        auVar32._8_4_ =
             auVar67._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar56._0_4_ +
             auVar67._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar56._8_4_ +
             auVar67._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar56._4_4_ +
             auVar67._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar56._12_4_ >> 0xf;
        auVar32._12_4_ =
             auVar51._0_4_ + auVar54._0_4_ + auVar50._0_4_ + auVar58._0_4_ +
             auVar51._8_4_ + auVar54._8_4_ + auVar50._8_4_ + auVar58._8_4_ +
             auVar51._4_4_ + auVar54._4_4_ + auVar50._4_4_ + auVar58._4_4_ +
             auVar51._12_4_ + auVar54._12_4_ + auVar50._12_4_ + auVar58._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar32,auVar53);
        auVar15._2_2_ = 0;
        auVar15._0_2_ = uVar24;
        auVar15._4_2_ = uVar24;
        auVar15._6_2_ = 0;
        auVar15._8_2_ = uVar24;
        auVar15._10_2_ = 0;
        auVar15._12_2_ = uVar24;
        auVar15._14_2_ = 0;
        local_80 = paddsw(auVar53,auVar15);
        param_5[4] = param_5[4] + (auVar50._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar50._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar50._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar50._12_4_ >> 0xe);
        auVar33._0_4_ = auVar50._0_4_ >> 0xf;
        auVar33._4_4_ = auVar50._4_4_ >> 0xf;
        auVar33._8_4_ = auVar50._8_4_ >> 0xf;
        auVar33._12_4_ = auVar50._12_4_ >> 0xf;
        auVar4._2_2_ = 0;
        auVar4._0_2_ = param_7;
        auVar4._4_2_ = param_7;
        auVar4._6_2_ = 0;
        auVar4._8_2_ = param_7;
        auVar4._10_2_ = 0;
        auVar4._12_2_ = param_7;
        auVar4._14_2_ = 0;
        auVar50 = pmaddwd(auVar33,auVar4);
        param_6[4] = param_6[4] + (auVar50._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar50._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar50._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar50._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar25 = pauVar25 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 2:
    if (param_4 != 0) {
      pauVar25 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar50 = *pauVar25;
        auVar51 = pauVar25[-1];
        auVar52 = pauVar25[-2];
        auVar54 = pauVar25[-3];
        auVar58 = pmaddwd(auVar50,param_2[0x18]);
        auVar61 = pmaddwd(auVar51,param_2[0x17]);
        auVar64 = pmaddwd(auVar52,param_2[0x16]);
        auVar57 = pmaddwd(auVar54,param_2[0x15]);
        auVar55 = pmaddwd(auVar50,param_2[0x1d]);
        auVar59 = pmaddwd(auVar51,param_2[0x1c]);
        auVar62 = pmaddwd(auVar52,param_2[0x1b]);
        auVar65 = pmaddwd(auVar54,param_2[0x1a]);
        auVar56 = pmaddwd(auVar50,param_2[0x22]);
        auVar60 = pmaddwd(auVar51,param_2[0x21]);
        auVar63 = pmaddwd(auVar52,param_2[0x20]);
        auVar66 = pmaddwd(auVar54,param_2[0x1f]);
        auVar50 = pmaddwd(auVar50,param_2[0x27]);
        auVar53 = pmaddwd(auVar51,param_2[0x26]);
        auVar52 = pmaddwd(auVar52,param_2[0x25]);
        auVar51 = pmaddwd(auVar54,param_2[0x24]);
        auVar34._0_4_ =
             auVar57._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar58._0_4_ +
             auVar57._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar58._8_4_ +
             auVar57._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar58._4_4_ +
             auVar57._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar58._12_4_ >> 0xf;
        auVar34._4_4_ =
             auVar65._0_4_ + auVar62._0_4_ + auVar59._0_4_ + auVar55._0_4_ +
             auVar65._8_4_ + auVar62._8_4_ + auVar59._8_4_ + auVar55._8_4_ +
             auVar65._4_4_ + auVar62._4_4_ + auVar59._4_4_ + auVar55._4_4_ +
             auVar65._12_4_ + auVar62._12_4_ + auVar59._12_4_ + auVar55._12_4_ >> 0xf;
        auVar34._8_4_ =
             auVar66._0_4_ + auVar63._0_4_ + auVar60._0_4_ + auVar56._0_4_ +
             auVar66._8_4_ + auVar63._8_4_ + auVar60._8_4_ + auVar56._8_4_ +
             auVar66._4_4_ + auVar63._4_4_ + auVar60._4_4_ + auVar56._4_4_ +
             auVar66._12_4_ + auVar63._12_4_ + auVar60._12_4_ + auVar56._12_4_ >> 0xf;
        auVar34._12_4_ =
             auVar51._0_4_ + auVar52._0_4_ + auVar53._0_4_ + auVar50._0_4_ +
             auVar51._8_4_ + auVar52._8_4_ + auVar53._8_4_ + auVar50._8_4_ +
             auVar51._4_4_ + auVar52._4_4_ + auVar53._4_4_ + auVar50._4_4_ +
             auVar51._12_4_ + auVar52._12_4_ + auVar53._12_4_ + auVar50._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar34,local_80);
        *param_5 = *param_5 + (auVar50._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar50._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar50._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar50._12_4_ >> 0xe);
        auVar35._0_4_ = auVar50._0_4_ >> 0xf;
        auVar35._4_4_ = auVar50._4_4_ >> 0xf;
        auVar35._8_4_ = auVar50._8_4_ >> 0xf;
        auVar35._12_4_ = auVar50._12_4_ >> 0xf;
        auVar5._2_2_ = 0;
        auVar5._0_2_ = param_7;
        auVar5._4_2_ = param_7;
        auVar5._6_2_ = 0;
        auVar5._8_2_ = param_7;
        auVar5._10_2_ = 0;
        auVar5._12_2_ = param_7;
        auVar5._14_2_ = 0;
        auVar50 = pmaddwd(auVar35,auVar5);
        *param_6 = *param_6 + (auVar50._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar50._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar50._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar50._12_4_ >> 0xe);
        auVar50 = *pauVar25;
        auVar51 = pauVar25[-1];
        auVar52 = pauVar25[-2];
        auVar63 = pmaddwd(auVar50,param_2[3]);
        auVar66 = pmaddwd(auVar51,param_2[2]);
        auVar57 = pmaddwd(auVar52,param_2[1]);
        auVar58 = pmaddwd(pauVar25[-3],*param_2);
        auVar59 = pmaddwd(auVar50,param_2[8]);
        auVar16._2_2_ = 0;
        auVar16._0_2_ = uVar24;
        auVar16._4_2_ = uVar24;
        auVar16._6_2_ = 0;
        auVar16._8_2_ = uVar24;
        auVar16._10_2_ = 0;
        auVar16._12_2_ = uVar24;
        auVar16._14_2_ = 0;
        auVar54 = paddsw(local_80,auVar16);
        auVar61 = pmaddwd(auVar51,param_2[7]);
        auVar64 = pmaddwd(auVar52,param_2[6]);
        auVar55 = pmaddwd(pauVar25[-3],param_2[5]);
        auVar56 = pmaddwd(pauVar25[1],param_2[0xe]);
        auVar62 = pmaddwd(auVar50,param_2[0xd]);
        auVar65 = pmaddwd(auVar51,param_2[0xc]);
        auVar67 = pmaddwd(auVar52,param_2[0xb]);
        auVar60 = pmaddwd(pauVar25[1],param_2[0x13]);
        auVar50 = pmaddwd(auVar50,param_2[0x12]);
        auVar53 = pmaddwd(auVar51,param_2[0x11]);
        auVar51 = pmaddwd(auVar52,param_2[0x10]);
        auVar36._0_4_ =
             auVar58._0_4_ + auVar57._0_4_ + auVar66._0_4_ + auVar63._0_4_ +
             auVar58._8_4_ + auVar57._8_4_ + auVar66._8_4_ + auVar63._8_4_ +
             auVar58._4_4_ + auVar57._4_4_ + auVar66._4_4_ + auVar63._4_4_ +
             auVar58._12_4_ + auVar57._12_4_ + auVar66._12_4_ + auVar63._12_4_ >> 0xf;
        auVar36._4_4_ =
             auVar55._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar59._0_4_ +
             auVar55._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar59._8_4_ +
             auVar55._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar59._4_4_ +
             auVar55._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar59._12_4_ >> 0xf;
        auVar36._8_4_ =
             auVar67._0_4_ + auVar65._0_4_ + auVar62._0_4_ + auVar56._0_4_ +
             auVar67._8_4_ + auVar65._8_4_ + auVar62._8_4_ + auVar56._8_4_ +
             auVar67._4_4_ + auVar65._4_4_ + auVar62._4_4_ + auVar56._4_4_ +
             auVar67._12_4_ + auVar65._12_4_ + auVar62._12_4_ + auVar56._12_4_ >> 0xf;
        auVar36._12_4_ =
             auVar51._0_4_ + auVar53._0_4_ + auVar50._0_4_ + auVar60._0_4_ +
             auVar51._8_4_ + auVar53._8_4_ + auVar50._8_4_ + auVar60._8_4_ +
             auVar51._4_4_ + auVar53._4_4_ + auVar50._4_4_ + auVar60._4_4_ +
             auVar51._12_4_ + auVar53._12_4_ + auVar50._12_4_ + auVar60._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar36,auVar54);
        auVar17._2_2_ = 0;
        auVar17._0_2_ = uVar24;
        auVar17._4_2_ = uVar24;
        auVar17._6_2_ = 0;
        auVar17._8_2_ = uVar24;
        auVar17._10_2_ = 0;
        auVar17._12_2_ = uVar24;
        auVar17._14_2_ = 0;
        local_80 = paddsw(auVar54,auVar17);
        param_5[4] = param_5[4] + (auVar50._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar50._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar50._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar50._12_4_ >> 0xe);
        auVar37._0_4_ = auVar50._0_4_ >> 0xf;
        auVar37._4_4_ = auVar50._4_4_ >> 0xf;
        auVar37._8_4_ = auVar50._8_4_ >> 0xf;
        auVar37._12_4_ = auVar50._12_4_ >> 0xf;
        auVar6._2_2_ = 0;
        auVar6._0_2_ = param_7;
        auVar6._4_2_ = param_7;
        auVar6._6_2_ = 0;
        auVar6._8_2_ = param_7;
        auVar6._10_2_ = 0;
        auVar6._12_2_ = param_7;
        auVar6._14_2_ = 0;
        auVar50 = pmaddwd(auVar37,auVar6);
        param_6[4] = param_6[4] + (auVar50._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar50._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar50._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar50._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar25 = pauVar25 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 3:
    if (param_4 != 0) {
      pauVar25 = (undefined1 (*) [16])(param_1 + -0x10);
      do {
        auVar50 = *pauVar25;
        auVar51 = pauVar25[-1];
        auVar52 = pauVar25[-2];
        auVar54 = pauVar25[-3];
        auVar58 = pmaddwd(auVar50,param_2[0x18]);
        auVar61 = pmaddwd(auVar51,param_2[0x17]);
        auVar64 = pmaddwd(auVar52,param_2[0x16]);
        auVar57 = pmaddwd(auVar54,param_2[0x15]);
        auVar55 = pmaddwd(auVar50,param_2[0x1d]);
        auVar59 = pmaddwd(auVar51,param_2[0x1c]);
        auVar62 = pmaddwd(auVar52,param_2[0x1b]);
        auVar65 = pmaddwd(auVar54,param_2[0x1a]);
        auVar56 = pmaddwd(auVar50,param_2[0x22]);
        auVar60 = pmaddwd(auVar51,param_2[0x21]);
        auVar63 = pmaddwd(auVar52,param_2[0x20]);
        auVar66 = pmaddwd(auVar54,param_2[0x1f]);
        auVar50 = pmaddwd(auVar50,param_2[0x27]);
        auVar53 = pmaddwd(auVar51,param_2[0x26]);
        auVar52 = pmaddwd(auVar52,param_2[0x25]);
        auVar51 = pmaddwd(auVar54,param_2[0x24]);
        auVar38._0_4_ =
             auVar57._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar58._0_4_ +
             auVar57._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar58._8_4_ +
             auVar57._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar58._4_4_ +
             auVar57._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar58._12_4_ >> 0xf;
        auVar38._4_4_ =
             auVar65._0_4_ + auVar62._0_4_ + auVar59._0_4_ + auVar55._0_4_ +
             auVar65._8_4_ + auVar62._8_4_ + auVar59._8_4_ + auVar55._8_4_ +
             auVar65._4_4_ + auVar62._4_4_ + auVar59._4_4_ + auVar55._4_4_ +
             auVar65._12_4_ + auVar62._12_4_ + auVar59._12_4_ + auVar55._12_4_ >> 0xf;
        auVar38._8_4_ =
             auVar66._0_4_ + auVar63._0_4_ + auVar60._0_4_ + auVar56._0_4_ +
             auVar66._8_4_ + auVar63._8_4_ + auVar60._8_4_ + auVar56._8_4_ +
             auVar66._4_4_ + auVar63._4_4_ + auVar60._4_4_ + auVar56._4_4_ +
             auVar66._12_4_ + auVar63._12_4_ + auVar60._12_4_ + auVar56._12_4_ >> 0xf;
        auVar38._12_4_ =
             auVar51._0_4_ + auVar52._0_4_ + auVar53._0_4_ + auVar50._0_4_ +
             auVar51._8_4_ + auVar52._8_4_ + auVar53._8_4_ + auVar50._8_4_ +
             auVar51._4_4_ + auVar52._4_4_ + auVar53._4_4_ + auVar50._4_4_ +
             auVar51._12_4_ + auVar52._12_4_ + auVar53._12_4_ + auVar50._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar38,local_80);
        *param_5 = *param_5 + (auVar50._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar50._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar50._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar50._12_4_ >> 0xe);
        auVar39._0_4_ = auVar50._0_4_ >> 0xf;
        auVar39._4_4_ = auVar50._4_4_ >> 0xf;
        auVar39._8_4_ = auVar50._8_4_ >> 0xf;
        auVar39._12_4_ = auVar50._12_4_ >> 0xf;
        auVar7._2_2_ = 0;
        auVar7._0_2_ = param_7;
        auVar7._4_2_ = param_7;
        auVar7._6_2_ = 0;
        auVar7._8_2_ = param_7;
        auVar7._10_2_ = 0;
        auVar7._12_2_ = param_7;
        auVar7._14_2_ = 0;
        auVar50 = pmaddwd(auVar39,auVar7);
        *param_6 = *param_6 + (auVar50._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar50._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar50._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar50._12_4_ >> 0xe);
        auVar50 = *pauVar25;
        auVar51 = pauVar25[-1];
        auVar52 = pauVar25[-2];
        auVar54 = pauVar25[-3];
        auVar63 = pmaddwd(auVar50,param_2[3]);
        auVar66 = pmaddwd(auVar51,param_2[2]);
        auVar57 = pmaddwd(auVar52,param_2[1]);
        auVar56 = pmaddwd(auVar54,*param_2);
        auVar58 = pmaddwd(auVar50,param_2[8]);
        auVar18._2_2_ = 0;
        auVar18._0_2_ = uVar24;
        auVar18._4_2_ = uVar24;
        auVar18._6_2_ = 0;
        auVar18._8_2_ = uVar24;
        auVar18._10_2_ = 0;
        auVar18._12_2_ = uVar24;
        auVar18._14_2_ = 0;
        auVar53 = paddsw(local_80,auVar18);
        auVar60 = pmaddwd(auVar51,param_2[7]);
        auVar64 = pmaddwd(auVar52,param_2[6]);
        auVar67 = pmaddwd(auVar54,param_2[5]);
        auVar59 = pmaddwd(auVar50,param_2[0xd]);
        auVar61 = pmaddwd(auVar51,param_2[0xc]);
        auVar65 = pmaddwd(auVar52,param_2[0xb]);
        auVar55 = pmaddwd(auVar54,param_2[10]);
        auVar62 = pmaddwd(pauVar25[1],param_2[0x13]);
        auVar50 = pmaddwd(auVar50,param_2[0x12]);
        auVar54 = pmaddwd(auVar51,param_2[0x11]);
        auVar51 = pmaddwd(auVar52,param_2[0x10]);
        auVar40._0_4_ =
             auVar56._0_4_ + auVar57._0_4_ + auVar66._0_4_ + auVar63._0_4_ +
             auVar56._8_4_ + auVar57._8_4_ + auVar66._8_4_ + auVar63._8_4_ +
             auVar56._4_4_ + auVar57._4_4_ + auVar66._4_4_ + auVar63._4_4_ +
             auVar56._12_4_ + auVar57._12_4_ + auVar66._12_4_ + auVar63._12_4_ >> 0xf;
        auVar40._4_4_ =
             auVar67._0_4_ + auVar64._0_4_ + auVar60._0_4_ + auVar58._0_4_ +
             auVar67._8_4_ + auVar64._8_4_ + auVar60._8_4_ + auVar58._8_4_ +
             auVar67._4_4_ + auVar64._4_4_ + auVar60._4_4_ + auVar58._4_4_ +
             auVar67._12_4_ + auVar64._12_4_ + auVar60._12_4_ + auVar58._12_4_ >> 0xf;
        auVar40._8_4_ =
             auVar55._0_4_ + auVar65._0_4_ + auVar61._0_4_ + auVar59._0_4_ +
             auVar55._8_4_ + auVar65._8_4_ + auVar61._8_4_ + auVar59._8_4_ +
             auVar55._4_4_ + auVar65._4_4_ + auVar61._4_4_ + auVar59._4_4_ +
             auVar55._12_4_ + auVar65._12_4_ + auVar61._12_4_ + auVar59._12_4_ >> 0xf;
        auVar40._12_4_ =
             auVar51._0_4_ + auVar54._0_4_ + auVar50._0_4_ + auVar62._0_4_ +
             auVar51._8_4_ + auVar54._8_4_ + auVar50._8_4_ + auVar62._8_4_ +
             auVar51._4_4_ + auVar54._4_4_ + auVar50._4_4_ + auVar62._4_4_ +
             auVar51._12_4_ + auVar54._12_4_ + auVar50._12_4_ + auVar62._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar40,auVar53);
        auVar19._2_2_ = 0;
        auVar19._0_2_ = uVar24;
        auVar19._4_2_ = uVar24;
        auVar19._6_2_ = 0;
        auVar19._8_2_ = uVar24;
        auVar19._10_2_ = 0;
        auVar19._12_2_ = uVar24;
        auVar19._14_2_ = 0;
        local_80 = paddsw(auVar53,auVar19);
        param_5[4] = param_5[4] + (auVar50._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar50._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar50._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar50._12_4_ >> 0xe);
        auVar41._0_4_ = auVar50._0_4_ >> 0xf;
        auVar41._4_4_ = auVar50._4_4_ >> 0xf;
        auVar41._8_4_ = auVar50._8_4_ >> 0xf;
        auVar41._12_4_ = auVar50._12_4_ >> 0xf;
        auVar8._2_2_ = 0;
        auVar8._0_2_ = param_7;
        auVar8._4_2_ = param_7;
        auVar8._6_2_ = 0;
        auVar8._8_2_ = param_7;
        auVar8._10_2_ = 0;
        auVar8._12_2_ = param_7;
        auVar8._14_2_ = 0;
        auVar50 = pmaddwd(auVar41,auVar8);
        param_6[4] = param_6[4] + (auVar50._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar50._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar50._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar50._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar25 = pauVar25 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 4:
    if (param_4 != 0) {
      pauVar25 = (undefined1 (*) [16])(param_1 + -0x20);
      do {
        auVar50 = pauVar25[1];
        auVar51 = *pauVar25;
        auVar52 = pauVar25[-1];
        auVar54 = pauVar25[-2];
        auVar58 = pmaddwd(auVar50,param_2[0x18]);
        auVar61 = pmaddwd(auVar51,param_2[0x17]);
        auVar64 = pmaddwd(auVar52,param_2[0x16]);
        auVar57 = pmaddwd(auVar54,param_2[0x15]);
        auVar55 = pmaddwd(auVar50,param_2[0x1d]);
        auVar59 = pmaddwd(auVar51,param_2[0x1c]);
        auVar62 = pmaddwd(auVar52,param_2[0x1b]);
        auVar65 = pmaddwd(auVar54,param_2[0x1a]);
        auVar56 = pmaddwd(auVar50,param_2[0x22]);
        auVar60 = pmaddwd(auVar51,param_2[0x21]);
        auVar63 = pmaddwd(auVar52,param_2[0x20]);
        auVar66 = pmaddwd(auVar54,param_2[0x1f]);
        auVar50 = pmaddwd(auVar50,param_2[0x27]);
        auVar53 = pmaddwd(auVar51,param_2[0x26]);
        auVar52 = pmaddwd(auVar52,param_2[0x25]);
        auVar51 = pmaddwd(auVar54,param_2[0x24]);
        auVar42._0_4_ =
             auVar57._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar58._0_4_ +
             auVar57._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar58._8_4_ +
             auVar57._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar58._4_4_ +
             auVar57._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar58._12_4_ >> 0xf;
        auVar42._4_4_ =
             auVar65._0_4_ + auVar62._0_4_ + auVar59._0_4_ + auVar55._0_4_ +
             auVar65._8_4_ + auVar62._8_4_ + auVar59._8_4_ + auVar55._8_4_ +
             auVar65._4_4_ + auVar62._4_4_ + auVar59._4_4_ + auVar55._4_4_ +
             auVar65._12_4_ + auVar62._12_4_ + auVar59._12_4_ + auVar55._12_4_ >> 0xf;
        auVar42._8_4_ =
             auVar66._0_4_ + auVar63._0_4_ + auVar60._0_4_ + auVar56._0_4_ +
             auVar66._8_4_ + auVar63._8_4_ + auVar60._8_4_ + auVar56._8_4_ +
             auVar66._4_4_ + auVar63._4_4_ + auVar60._4_4_ + auVar56._4_4_ +
             auVar66._12_4_ + auVar63._12_4_ + auVar60._12_4_ + auVar56._12_4_ >> 0xf;
        auVar42._12_4_ =
             auVar51._0_4_ + auVar52._0_4_ + auVar53._0_4_ + auVar50._0_4_ +
             auVar51._8_4_ + auVar52._8_4_ + auVar53._8_4_ + auVar50._8_4_ +
             auVar51._4_4_ + auVar52._4_4_ + auVar53._4_4_ + auVar50._4_4_ +
             auVar51._12_4_ + auVar52._12_4_ + auVar53._12_4_ + auVar50._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar42,local_80);
        *param_5 = *param_5 + (auVar50._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar50._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar50._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar50._12_4_ >> 0xe);
        auVar43._0_4_ = auVar50._0_4_ >> 0xf;
        auVar43._4_4_ = auVar50._4_4_ >> 0xf;
        auVar43._8_4_ = auVar50._8_4_ >> 0xf;
        auVar43._12_4_ = auVar50._12_4_ >> 0xf;
        auVar9._2_2_ = 0;
        auVar9._0_2_ = param_7;
        auVar9._4_2_ = param_7;
        auVar9._6_2_ = 0;
        auVar9._8_2_ = param_7;
        auVar9._10_2_ = 0;
        auVar9._12_2_ = param_7;
        auVar9._14_2_ = 0;
        auVar50 = pmaddwd(auVar43,auVar9);
        *param_6 = *param_6 + (auVar50._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar50._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar50._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar50._12_4_ >> 0xe);
        auVar50 = pauVar25[1];
        auVar51 = *pauVar25;
        auVar52 = pauVar25[-1];
        auVar54 = pauVar25[-2];
        auVar62 = pmaddwd(auVar50,param_2[3]);
        auVar65 = pmaddwd(auVar51,param_2[2]);
        auVar55 = pmaddwd(auVar52,param_2[1]);
        auVar56 = pmaddwd(auVar54,*param_2);
        auVar58 = pmaddwd(auVar50,param_2[8]);
        auVar20._2_2_ = 0;
        auVar20._0_2_ = uVar24;
        auVar20._4_2_ = uVar24;
        auVar20._6_2_ = 0;
        auVar20._8_2_ = uVar24;
        auVar20._10_2_ = 0;
        auVar20._12_2_ = uVar24;
        auVar20._14_2_ = 0;
        auVar53 = paddsw(local_80,auVar20);
        auVar60 = pmaddwd(auVar51,param_2[7]);
        auVar63 = pmaddwd(auVar52,param_2[6]);
        auVar66 = pmaddwd(auVar54,param_2[5]);
        auVar59 = pmaddwd(auVar50,param_2[0xd]);
        auVar61 = pmaddwd(auVar51,param_2[0xc]);
        auVar64 = pmaddwd(auVar52,param_2[0xb]);
        auVar67 = pmaddwd(auVar54,param_2[10]);
        auVar50 = pmaddwd(auVar50,param_2[0x12]);
        auVar57 = pmaddwd(auVar51,param_2[0x11]);
        auVar51 = pmaddwd(auVar52,param_2[0x10]);
        auVar52 = pmaddwd(auVar54,param_2[0xf]);
        auVar44._0_4_ =
             auVar56._0_4_ + auVar55._0_4_ + auVar65._0_4_ + auVar62._0_4_ +
             auVar56._8_4_ + auVar55._8_4_ + auVar65._8_4_ + auVar62._8_4_ +
             auVar56._4_4_ + auVar55._4_4_ + auVar65._4_4_ + auVar62._4_4_ +
             auVar56._12_4_ + auVar55._12_4_ + auVar65._12_4_ + auVar62._12_4_ >> 0xf;
        auVar44._4_4_ =
             auVar66._0_4_ + auVar63._0_4_ + auVar60._0_4_ + auVar58._0_4_ +
             auVar66._8_4_ + auVar63._8_4_ + auVar60._8_4_ + auVar58._8_4_ +
             auVar66._4_4_ + auVar63._4_4_ + auVar60._4_4_ + auVar58._4_4_ +
             auVar66._12_4_ + auVar63._12_4_ + auVar60._12_4_ + auVar58._12_4_ >> 0xf;
        auVar44._8_4_ =
             auVar67._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar59._0_4_ +
             auVar67._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar59._8_4_ +
             auVar67._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar59._4_4_ +
             auVar67._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar59._12_4_ >> 0xf;
        auVar44._12_4_ =
             auVar52._0_4_ + auVar51._0_4_ + auVar57._0_4_ + auVar50._0_4_ +
             auVar52._8_4_ + auVar51._8_4_ + auVar57._8_4_ + auVar50._8_4_ +
             auVar52._4_4_ + auVar51._4_4_ + auVar57._4_4_ + auVar50._4_4_ +
             auVar52._12_4_ + auVar51._12_4_ + auVar57._12_4_ + auVar50._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar44,auVar53);
        auVar21._2_2_ = 0;
        auVar21._0_2_ = uVar24;
        auVar21._4_2_ = uVar24;
        auVar21._6_2_ = 0;
        auVar21._8_2_ = uVar24;
        auVar21._10_2_ = 0;
        auVar21._12_2_ = uVar24;
        auVar21._14_2_ = 0;
        local_80 = paddsw(auVar53,auVar21);
        param_5[4] = param_5[4] + (auVar50._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar50._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar50._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar50._12_4_ >> 0xe);
        auVar45._0_4_ = auVar50._0_4_ >> 0xf;
        auVar45._4_4_ = auVar50._4_4_ >> 0xf;
        auVar45._8_4_ = auVar50._8_4_ >> 0xf;
        auVar45._12_4_ = auVar50._12_4_ >> 0xf;
        auVar10._2_2_ = 0;
        auVar10._0_2_ = param_7;
        auVar10._4_2_ = param_7;
        auVar10._6_2_ = 0;
        auVar10._8_2_ = param_7;
        auVar10._10_2_ = 0;
        auVar10._12_2_ = param_7;
        auVar10._14_2_ = 0;
        auVar50 = pmaddwd(auVar45,auVar10);
        param_6[4] = param_6[4] + (auVar50._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar50._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar50._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar50._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar25 = pauVar25 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 5:
    if (param_4 != 0) {
      do {
        auVar50 = pauVar25[3];
        auVar51 = pauVar25[2];
        auVar52 = pauVar25[1];
        auVar57 = pmaddwd(auVar50,param_2[0x17]);
        auVar56 = pmaddwd(auVar51,param_2[0x16]);
        auVar60 = pmaddwd(auVar52,param_2[0x15]);
        auVar63 = pmaddwd(*pauVar25,param_2[0x14]);
        auVar54 = pauVar25[4];
        auVar53 = pmaddwd(auVar54,param_2[0x1d]);
        auVar58 = pmaddwd(auVar50,param_2[0x1c]);
        auVar61 = pmaddwd(auVar51,param_2[0x1b]);
        auVar64 = pmaddwd(auVar52,param_2[0x1a]);
        auVar55 = pmaddwd(auVar54,param_2[0x22]);
        auVar59 = pmaddwd(auVar50,param_2[0x21]);
        auVar62 = pmaddwd(auVar51,param_2[0x20]);
        auVar65 = pmaddwd(auVar52,param_2[0x1f]);
        auVar54 = pmaddwd(auVar54,param_2[0x27]);
        auVar50 = pmaddwd(auVar50,param_2[0x26]);
        auVar51 = pmaddwd(auVar51,param_2[0x25]);
        auVar52 = pmaddwd(auVar52,param_2[0x24]);
        auVar46._0_4_ =
             auVar63._0_4_ + auVar60._0_4_ + auVar56._0_4_ + auVar57._0_4_ +
             auVar63._8_4_ + auVar60._8_4_ + auVar56._8_4_ + auVar57._8_4_ +
             auVar63._4_4_ + auVar60._4_4_ + auVar56._4_4_ + auVar57._4_4_ +
             auVar63._12_4_ + auVar60._12_4_ + auVar56._12_4_ + auVar57._12_4_ >> 0xf;
        auVar46._4_4_ =
             auVar64._0_4_ + auVar61._0_4_ + auVar58._0_4_ + auVar53._0_4_ +
             auVar64._8_4_ + auVar61._8_4_ + auVar58._8_4_ + auVar53._8_4_ +
             auVar64._4_4_ + auVar61._4_4_ + auVar58._4_4_ + auVar53._4_4_ +
             auVar64._12_4_ + auVar61._12_4_ + auVar58._12_4_ + auVar53._12_4_ >> 0xf;
        auVar46._8_4_ =
             auVar65._0_4_ + auVar62._0_4_ + auVar59._0_4_ + auVar55._0_4_ +
             auVar65._8_4_ + auVar62._8_4_ + auVar59._8_4_ + auVar55._8_4_ +
             auVar65._4_4_ + auVar62._4_4_ + auVar59._4_4_ + auVar55._4_4_ +
             auVar65._12_4_ + auVar62._12_4_ + auVar59._12_4_ + auVar55._12_4_ >> 0xf;
        auVar46._12_4_ =
             auVar52._0_4_ + auVar51._0_4_ + auVar50._0_4_ + auVar54._0_4_ +
             auVar52._8_4_ + auVar51._8_4_ + auVar50._8_4_ + auVar54._8_4_ +
             auVar52._4_4_ + auVar51._4_4_ + auVar50._4_4_ + auVar54._4_4_ +
             auVar52._12_4_ + auVar51._12_4_ + auVar50._12_4_ + auVar54._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar46,local_80);
        *param_5 = *param_5 + (auVar50._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar50._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar50._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar50._12_4_ >> 0xe);
        auVar47._0_4_ = auVar50._0_4_ >> 0xf;
        auVar47._4_4_ = auVar50._4_4_ >> 0xf;
        auVar47._8_4_ = auVar50._8_4_ >> 0xf;
        auVar47._12_4_ = auVar50._12_4_ >> 0xf;
        auVar67._2_2_ = 0;
        auVar67._0_2_ = param_7;
        auVar67._4_2_ = param_7;
        auVar67._6_2_ = 0;
        auVar67._8_2_ = param_7;
        auVar67._10_2_ = 0;
        auVar67._12_2_ = param_7;
        auVar67._14_2_ = 0;
        auVar50 = pmaddwd(auVar47,auVar67);
        *param_6 = *param_6 + (auVar50._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar50._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar50._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar50._12_4_ >> 0xe);
        auVar50 = pauVar25[4];
        auVar51 = pauVar25[3];
        auVar52 = pauVar25[2];
        auVar54 = pauVar25[1];
        auVar62 = pmaddwd(auVar50,param_2[3]);
        auVar65 = pmaddwd(auVar51,param_2[2]);
        auVar55 = pmaddwd(auVar52,param_2[1]);
        auVar56 = pmaddwd(auVar54,*param_2);
        auVar58 = pmaddwd(auVar50,param_2[8]);
        auVar22._2_2_ = 0;
        auVar22._0_2_ = uVar24;
        auVar22._4_2_ = uVar24;
        auVar22._6_2_ = 0;
        auVar22._8_2_ = uVar24;
        auVar22._10_2_ = 0;
        auVar22._12_2_ = uVar24;
        auVar22._14_2_ = 0;
        auVar53 = paddsw(local_80,auVar22);
        auVar60 = pmaddwd(auVar51,param_2[7]);
        auVar63 = pmaddwd(auVar52,param_2[6]);
        auVar66 = pmaddwd(auVar54,param_2[5]);
        auVar59 = pmaddwd(auVar50,param_2[0xd]);
        auVar61 = pmaddwd(auVar51,param_2[0xc]);
        auVar64 = pmaddwd(auVar52,param_2[0xb]);
        auVar67 = pmaddwd(auVar54,param_2[10]);
        auVar50 = pmaddwd(auVar50,param_2[0x12]);
        auVar57 = pmaddwd(auVar51,param_2[0x11]);
        auVar51 = pmaddwd(auVar52,param_2[0x10]);
        auVar52 = pmaddwd(auVar54,param_2[0xf]);
        auVar48._0_4_ =
             auVar56._0_4_ + auVar55._0_4_ + auVar65._0_4_ + auVar62._0_4_ +
             auVar56._8_4_ + auVar55._8_4_ + auVar65._8_4_ + auVar62._8_4_ +
             auVar56._4_4_ + auVar55._4_4_ + auVar65._4_4_ + auVar62._4_4_ +
             auVar56._12_4_ + auVar55._12_4_ + auVar65._12_4_ + auVar62._12_4_ >> 0xf;
        auVar48._4_4_ =
             auVar66._0_4_ + auVar63._0_4_ + auVar60._0_4_ + auVar58._0_4_ +
             auVar66._8_4_ + auVar63._8_4_ + auVar60._8_4_ + auVar58._8_4_ +
             auVar66._4_4_ + auVar63._4_4_ + auVar60._4_4_ + auVar58._4_4_ +
             auVar66._12_4_ + auVar63._12_4_ + auVar60._12_4_ + auVar58._12_4_ >> 0xf;
        auVar48._8_4_ =
             auVar67._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar59._0_4_ +
             auVar67._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar59._8_4_ +
             auVar67._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar59._4_4_ +
             auVar67._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar59._12_4_ >> 0xf;
        auVar48._12_4_ =
             auVar52._0_4_ + auVar51._0_4_ + auVar57._0_4_ + auVar50._0_4_ +
             auVar52._8_4_ + auVar51._8_4_ + auVar57._8_4_ + auVar50._8_4_ +
             auVar52._4_4_ + auVar51._4_4_ + auVar57._4_4_ + auVar50._4_4_ +
             auVar52._12_4_ + auVar51._12_4_ + auVar57._12_4_ + auVar50._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar48,auVar53);
        auVar23._2_2_ = 0;
        auVar23._0_2_ = uVar24;
        auVar23._4_2_ = uVar24;
        auVar23._6_2_ = 0;
        auVar23._8_2_ = uVar24;
        auVar23._10_2_ = 0;
        auVar23._12_2_ = uVar24;
        auVar23._14_2_ = 0;
        local_80 = paddsw(auVar53,auVar23);
        param_5[4] = param_5[4] + (auVar50._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar50._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar50._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar50._12_4_ >> 0xe);
        auVar49._0_4_ = auVar50._0_4_ >> 0xf;
        auVar49._4_4_ = auVar50._4_4_ >> 0xf;
        auVar49._8_4_ = auVar50._8_4_ >> 0xf;
        auVar49._12_4_ = auVar50._12_4_ >> 0xf;
        auVar11._2_2_ = 0;
        auVar11._0_2_ = param_7;
        auVar11._4_2_ = param_7;
        auVar11._6_2_ = 0;
        auVar11._8_2_ = param_7;
        auVar11._10_2_ = 0;
        auVar11._12_2_ = param_7;
        auVar11._14_2_ = 0;
        auVar50 = pmaddwd(auVar49,auVar11);
        param_6[4] = param_6[4] + (auVar50._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar50._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar50._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar50._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar25 = pauVar25 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 6:
    if (param_4 != 0) {
      do {
        auVar50 = pauVar25[3];
        auVar51 = pauVar25[2];
        auVar52 = pauVar25[1];
        auVar58 = pmaddwd(auVar50,param_2[0x17]);
        auVar61 = pmaddwd(auVar51,param_2[0x16]);
        auVar63 = pmaddwd(auVar52,param_2[0x15]);
        auVar54 = pmaddwd(*pauVar25,param_2[0x14]);
        auVar55 = pmaddwd(auVar50,param_2[0x1c]);
        auVar59 = pmaddwd(auVar51,param_2[0x1b]);
        auVar62 = pmaddwd(auVar52,param_2[0x1a]);
        auVar53 = pmaddwd(*pauVar25,param_2[0x19]);
        auVar57 = pmaddwd(pauVar25[4],param_2[0x22]);
        auVar60 = pmaddwd(auVar50,param_2[0x21]);
        auVar64 = pmaddwd(auVar51,param_2[0x20]);
        auVar65 = pmaddwd(auVar52,param_2[0x1f]);
        auVar56 = pmaddwd(pauVar25[4],param_2[0x27]);
        auVar50 = pmaddwd(auVar50,param_2[0x26]);
        auVar51 = pmaddwd(auVar51,param_2[0x25]);
        auVar52 = pmaddwd(auVar52,param_2[0x24]);
        auVar63._0_4_ =
             auVar54._0_4_ + auVar63._0_4_ + auVar61._0_4_ + auVar58._0_4_ +
             auVar54._8_4_ + auVar63._8_4_ + auVar61._8_4_ + auVar58._8_4_ +
             auVar54._4_4_ + auVar63._4_4_ + auVar61._4_4_ + auVar58._4_4_ +
             auVar54._12_4_ + auVar63._12_4_ + auVar61._12_4_ + auVar58._12_4_ >> 0xf;
        auVar63._4_4_ =
             auVar53._0_4_ + auVar62._0_4_ + auVar59._0_4_ + auVar55._0_4_ +
             auVar53._8_4_ + auVar62._8_4_ + auVar59._8_4_ + auVar55._8_4_ +
             auVar53._4_4_ + auVar62._4_4_ + auVar59._4_4_ + auVar55._4_4_ +
             auVar53._12_4_ + auVar62._12_4_ + auVar59._12_4_ + auVar55._12_4_ >> 0xf;
        auVar63._8_4_ =
             auVar65._0_4_ + auVar64._0_4_ + auVar60._0_4_ + auVar57._0_4_ +
             auVar65._8_4_ + auVar64._8_4_ + auVar60._8_4_ + auVar57._8_4_ +
             auVar65._4_4_ + auVar64._4_4_ + auVar60._4_4_ + auVar57._4_4_ +
             auVar65._12_4_ + auVar64._12_4_ + auVar60._12_4_ + auVar57._12_4_ >> 0xf;
        auVar63._12_4_ =
             auVar52._0_4_ + auVar51._0_4_ + auVar50._0_4_ + auVar56._0_4_ +
             auVar52._8_4_ + auVar51._8_4_ + auVar50._8_4_ + auVar56._8_4_ +
             auVar52._4_4_ + auVar51._4_4_ + auVar50._4_4_ + auVar56._4_4_ +
             auVar52._12_4_ + auVar51._12_4_ + auVar50._12_4_ + auVar56._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar63,local_80);
        *param_5 = *param_5 + (auVar50._0_4_ >> 0xe);
        param_5[1] = param_5[1] + (auVar50._4_4_ >> 0xe);
        param_5[2] = param_5[2] + (auVar50._8_4_ >> 0xe);
        param_5[3] = param_5[3] + (auVar50._12_4_ >> 0xe);
        auVar64._0_4_ = auVar50._0_4_ >> 0xf;
        auVar64._4_4_ = auVar50._4_4_ >> 0xf;
        auVar64._8_4_ = auVar50._8_4_ >> 0xf;
        auVar64._12_4_ = auVar50._12_4_ >> 0xf;
        auVar59._2_2_ = 0;
        auVar59._0_2_ = param_7;
        auVar59._4_2_ = param_7;
        auVar59._6_2_ = 0;
        auVar59._8_2_ = param_7;
        auVar59._10_2_ = 0;
        auVar59._12_2_ = param_7;
        auVar59._14_2_ = 0;
        auVar50 = pmaddwd(auVar64,auVar59);
        *param_6 = *param_6 + (auVar50._0_4_ >> 0xe);
        param_6[1] = param_6[1] + (auVar50._4_4_ >> 0xe);
        param_6[2] = param_6[2] + (auVar50._8_4_ >> 0xe);
        param_6[3] = param_6[3] + (auVar50._12_4_ >> 0xe);
        auVar50 = pauVar25[4];
        auVar51 = pauVar25[3];
        auVar52 = pauVar25[2];
        auVar54 = pauVar25[1];
        auVar62 = pmaddwd(auVar50,param_2[3]);
        auVar65 = pmaddwd(auVar51,param_2[2]);
        auVar55 = pmaddwd(auVar52,param_2[1]);
        auVar56 = pmaddwd(auVar54,*param_2);
        auVar58 = pmaddwd(auVar50,param_2[8]);
        auVar61._2_2_ = 0;
        auVar61._0_2_ = uVar24;
        auVar61._4_2_ = uVar24;
        auVar61._6_2_ = 0;
        auVar61._8_2_ = uVar24;
        auVar61._10_2_ = 0;
        auVar61._12_2_ = uVar24;
        auVar61._14_2_ = 0;
        auVar53 = paddsw(local_80,auVar61);
        auVar60 = pmaddwd(auVar51,param_2[7]);
        auVar63 = pmaddwd(auVar52,param_2[6]);
        auVar66 = pmaddwd(auVar54,param_2[5]);
        auVar59 = pmaddwd(auVar50,param_2[0xd]);
        auVar61 = pmaddwd(auVar51,param_2[0xc]);
        auVar64 = pmaddwd(auVar52,param_2[0xb]);
        auVar67 = pmaddwd(auVar54,param_2[10]);
        auVar50 = pmaddwd(auVar50,param_2[0x12]);
        auVar57 = pmaddwd(auVar51,param_2[0x11]);
        auVar51 = pmaddwd(auVar52,param_2[0x10]);
        auVar52 = pmaddwd(auVar54,param_2[0xf]);
        auVar65._0_4_ =
             auVar56._0_4_ + auVar55._0_4_ + auVar65._0_4_ + auVar62._0_4_ +
             auVar56._8_4_ + auVar55._8_4_ + auVar65._8_4_ + auVar62._8_4_ +
             auVar56._4_4_ + auVar55._4_4_ + auVar65._4_4_ + auVar62._4_4_ +
             auVar56._12_4_ + auVar55._12_4_ + auVar65._12_4_ + auVar62._12_4_ >> 0xf;
        auVar65._4_4_ =
             auVar66._0_4_ + auVar63._0_4_ + auVar60._0_4_ + auVar58._0_4_ +
             auVar66._8_4_ + auVar63._8_4_ + auVar60._8_4_ + auVar58._8_4_ +
             auVar66._4_4_ + auVar63._4_4_ + auVar60._4_4_ + auVar58._4_4_ +
             auVar66._12_4_ + auVar63._12_4_ + auVar60._12_4_ + auVar58._12_4_ >> 0xf;
        auVar65._8_4_ =
             auVar67._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar59._0_4_ +
             auVar67._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar59._8_4_ +
             auVar67._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar59._4_4_ +
             auVar67._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar59._12_4_ >> 0xf;
        auVar65._12_4_ =
             auVar52._0_4_ + auVar51._0_4_ + auVar57._0_4_ + auVar50._0_4_ +
             auVar52._8_4_ + auVar51._8_4_ + auVar57._8_4_ + auVar50._8_4_ +
             auVar52._4_4_ + auVar51._4_4_ + auVar57._4_4_ + auVar50._4_4_ +
             auVar52._12_4_ + auVar51._12_4_ + auVar57._12_4_ + auVar50._12_4_ >> 0xf;
        auVar50 = pmaddwd(auVar65,auVar53);
        auVar62._2_2_ = 0;
        auVar62._0_2_ = uVar24;
        auVar62._4_2_ = uVar24;
        auVar62._6_2_ = 0;
        auVar62._8_2_ = uVar24;
        auVar62._10_2_ = 0;
        auVar62._12_2_ = uVar24;
        auVar62._14_2_ = 0;
        local_80 = paddsw(auVar53,auVar62);
        param_5[4] = param_5[4] + (auVar50._0_4_ >> 0xe);
        param_5[5] = param_5[5] + (auVar50._4_4_ >> 0xe);
        param_5[6] = param_5[6] + (auVar50._8_4_ >> 0xe);
        param_5[7] = param_5[7] + (auVar50._12_4_ >> 0xe);
        auVar66._0_4_ = auVar50._0_4_ >> 0xf;
        auVar66._4_4_ = auVar50._4_4_ >> 0xf;
        auVar66._8_4_ = auVar50._8_4_ >> 0xf;
        auVar66._12_4_ = auVar50._12_4_ >> 0xf;
        auVar60._2_2_ = 0;
        auVar60._0_2_ = param_7;
        auVar60._4_2_ = param_7;
        auVar60._6_2_ = 0;
        auVar60._8_2_ = param_7;
        auVar60._10_2_ = 0;
        auVar60._12_2_ = param_7;
        auVar60._14_2_ = 0;
        auVar50 = pmaddwd(auVar66,auVar60);
        param_6[4] = param_6[4] + (auVar50._0_4_ >> 0xe);
        param_6[5] = param_6[5] + (auVar50._4_4_ >> 0xe);
        param_6[6] = param_6[6] + (auVar50._8_4_ >> 0xe);
        param_6[7] = param_6[7] + (auVar50._12_4_ >> 0xe);
        param_5 = param_5 + 8;
        param_6 = param_6 + 8;
        pauVar25 = pauVar25 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 7:
    for (; param_4 != 0; param_4 = param_4 + -1) {
      auVar50 = pauVar25[3];
      auVar51 = pauVar25[2];
      auVar52 = pauVar25[1];
      auVar54 = *pauVar25;
      auVar57 = pmaddwd(auVar50,param_2[0x17]);
      auVar61 = pmaddwd(auVar51,param_2[0x16]);
      auVar64 = pmaddwd(auVar52,param_2[0x15]);
      auVar53 = pmaddwd(auVar54,param_2[0x14]);
      auVar55 = pmaddwd(auVar50,param_2[0x1c]);
      auVar58 = pmaddwd(auVar51,param_2[0x1b]);
      auVar62 = pmaddwd(auVar52,param_2[0x1a]);
      auVar65 = pmaddwd(auVar54,param_2[0x19]);
      auVar56 = pmaddwd(auVar50,param_2[0x21]);
      auVar59 = pmaddwd(auVar51,param_2[0x20]);
      auVar63 = pmaddwd(auVar52,param_2[0x1f]);
      auVar54 = pmaddwd(auVar54,param_2[0x1e]);
      auVar60 = pmaddwd(pauVar25[4],param_2[0x27]);
      auVar50 = pmaddwd(auVar50,param_2[0x26]);
      auVar51 = pmaddwd(auVar51,param_2[0x25]);
      auVar52 = pmaddwd(auVar52,param_2[0x24]);
      auVar57._0_4_ =
           auVar53._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar57._0_4_ +
           auVar53._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar57._8_4_ +
           auVar53._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar57._4_4_ +
           auVar53._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar57._12_4_ >> 0xf;
      auVar57._4_4_ =
           auVar65._0_4_ + auVar62._0_4_ + auVar58._0_4_ + auVar55._0_4_ +
           auVar65._8_4_ + auVar62._8_4_ + auVar58._8_4_ + auVar55._8_4_ +
           auVar65._4_4_ + auVar62._4_4_ + auVar58._4_4_ + auVar55._4_4_ +
           auVar65._12_4_ + auVar62._12_4_ + auVar58._12_4_ + auVar55._12_4_ >> 0xf;
      auVar57._8_4_ =
           auVar54._0_4_ + auVar63._0_4_ + auVar59._0_4_ + auVar56._0_4_ +
           auVar54._8_4_ + auVar63._8_4_ + auVar59._8_4_ + auVar56._8_4_ +
           auVar54._4_4_ + auVar63._4_4_ + auVar59._4_4_ + auVar56._4_4_ +
           auVar54._12_4_ + auVar63._12_4_ + auVar59._12_4_ + auVar56._12_4_ >> 0xf;
      auVar57._12_4_ =
           auVar52._0_4_ + auVar51._0_4_ + auVar50._0_4_ + auVar60._0_4_ +
           auVar52._8_4_ + auVar51._8_4_ + auVar50._8_4_ + auVar60._8_4_ +
           auVar52._4_4_ + auVar51._4_4_ + auVar50._4_4_ + auVar60._4_4_ +
           auVar52._12_4_ + auVar51._12_4_ + auVar50._12_4_ + auVar60._12_4_ >> 0xf;
      auVar50 = pmaddwd(auVar57,local_80);
      *param_5 = *param_5 + (auVar50._0_4_ >> 0xe);
      param_5[1] = param_5[1] + (auVar50._4_4_ >> 0xe);
      param_5[2] = param_5[2] + (auVar50._8_4_ >> 0xe);
      param_5[3] = param_5[3] + (auVar50._12_4_ >> 0xe);
      auVar55._0_4_ = auVar50._0_4_ >> 0xf;
      auVar55._4_4_ = auVar50._4_4_ >> 0xf;
      auVar55._8_4_ = auVar50._8_4_ >> 0xf;
      auVar55._12_4_ = auVar50._12_4_ >> 0xf;
      auVar51._2_2_ = 0;
      auVar51._0_2_ = param_7;
      auVar51._4_2_ = param_7;
      auVar51._6_2_ = 0;
      auVar51._8_2_ = param_7;
      auVar51._10_2_ = 0;
      auVar51._12_2_ = param_7;
      auVar51._14_2_ = 0;
      auVar50 = pmaddwd(auVar55,auVar51);
      *param_6 = *param_6 + (auVar50._0_4_ >> 0xe);
      param_6[1] = param_6[1] + (auVar50._4_4_ >> 0xe);
      param_6[2] = param_6[2] + (auVar50._8_4_ >> 0xe);
      param_6[3] = param_6[3] + (auVar50._12_4_ >> 0xe);
      auVar50 = pauVar25[4];
      auVar51 = pauVar25[3];
      auVar52 = pauVar25[2];
      auVar54 = pauVar25[1];
      auVar62 = pmaddwd(auVar50,param_2[3]);
      auVar65 = pmaddwd(auVar51,param_2[2]);
      auVar55 = pmaddwd(auVar52,param_2[1]);
      auVar56 = pmaddwd(auVar54,*param_2);
      auVar58 = pmaddwd(auVar50,param_2[8]);
      auVar60 = pmaddwd(auVar51,param_2[7]);
      auVar63 = pmaddwd(auVar52,param_2[6]);
      auVar66 = pmaddwd(auVar54,param_2[5]);
      auVar53._2_2_ = 0;
      auVar53._0_2_ = uVar24;
      auVar53._4_2_ = uVar24;
      auVar53._6_2_ = 0;
      auVar53._8_2_ = uVar24;
      auVar53._10_2_ = 0;
      auVar53._12_2_ = uVar24;
      auVar53._14_2_ = 0;
      auVar53 = paddsw(local_80,auVar53);
      auVar59 = pmaddwd(auVar50,param_2[0xd]);
      auVar61 = pmaddwd(auVar51,param_2[0xc]);
      auVar64 = pmaddwd(auVar52,param_2[0xb]);
      auVar67 = pmaddwd(auVar54,param_2[10]);
      auVar50 = pmaddwd(auVar50,param_2[0x12]);
      auVar57 = pmaddwd(auVar51,param_2[0x11]);
      auVar51 = pmaddwd(auVar52,param_2[0x10]);
      auVar52 = pmaddwd(auVar54,param_2[0xf]);
      auVar56._0_4_ =
           auVar56._0_4_ + auVar55._0_4_ + auVar65._0_4_ + auVar62._0_4_ +
           auVar56._8_4_ + auVar55._8_4_ + auVar65._8_4_ + auVar62._8_4_ +
           auVar56._4_4_ + auVar55._4_4_ + auVar65._4_4_ + auVar62._4_4_ +
           auVar56._12_4_ + auVar55._12_4_ + auVar65._12_4_ + auVar62._12_4_ >> 0xf;
      auVar56._4_4_ =
           auVar66._0_4_ + auVar63._0_4_ + auVar60._0_4_ + auVar58._0_4_ +
           auVar66._8_4_ + auVar63._8_4_ + auVar60._8_4_ + auVar58._8_4_ +
           auVar66._4_4_ + auVar63._4_4_ + auVar60._4_4_ + auVar58._4_4_ +
           auVar66._12_4_ + auVar63._12_4_ + auVar60._12_4_ + auVar58._12_4_ >> 0xf;
      auVar56._8_4_ =
           auVar67._0_4_ + auVar64._0_4_ + auVar61._0_4_ + auVar59._0_4_ +
           auVar67._8_4_ + auVar64._8_4_ + auVar61._8_4_ + auVar59._8_4_ +
           auVar67._4_4_ + auVar64._4_4_ + auVar61._4_4_ + auVar59._4_4_ +
           auVar67._12_4_ + auVar64._12_4_ + auVar61._12_4_ + auVar59._12_4_ >> 0xf;
      auVar56._12_4_ =
           auVar52._0_4_ + auVar51._0_4_ + auVar57._0_4_ + auVar50._0_4_ +
           auVar52._8_4_ + auVar51._8_4_ + auVar57._8_4_ + auVar50._8_4_ +
           auVar52._4_4_ + auVar51._4_4_ + auVar57._4_4_ + auVar50._4_4_ +
           auVar52._12_4_ + auVar51._12_4_ + auVar57._12_4_ + auVar50._12_4_ >> 0xf;
      auVar50 = pmaddwd(auVar56,auVar53);
      auVar54._2_2_ = 0;
      auVar54._0_2_ = uVar24;
      auVar54._4_2_ = uVar24;
      auVar54._6_2_ = 0;
      auVar54._8_2_ = uVar24;
      auVar54._10_2_ = 0;
      auVar54._12_2_ = uVar24;
      auVar54._14_2_ = 0;
      local_80 = paddsw(auVar53,auVar54);
      param_5[4] = param_5[4] + (auVar50._0_4_ >> 0xe);
      param_5[5] = param_5[5] + (auVar50._4_4_ >> 0xe);
      param_5[6] = param_5[6] + (auVar50._8_4_ >> 0xe);
      param_5[7] = param_5[7] + (auVar50._12_4_ >> 0xe);
      auVar58._0_4_ = auVar50._0_4_ >> 0xf;
      auVar58._4_4_ = auVar50._4_4_ >> 0xf;
      auVar58._8_4_ = auVar50._8_4_ >> 0xf;
      auVar58._12_4_ = auVar50._12_4_ >> 0xf;
      auVar52._2_2_ = 0;
      auVar52._0_2_ = param_7;
      auVar52._4_2_ = param_7;
      auVar52._6_2_ = 0;
      auVar52._8_2_ = param_7;
      auVar52._10_2_ = 0;
      auVar52._12_2_ = param_7;
      auVar52._14_2_ = 0;
      auVar50 = pmaddwd(auVar58,auVar52);
      param_6[4] = param_6[4] + (auVar50._0_4_ >> 0xe);
      param_6[5] = param_6[5] + (auVar50._4_4_ >> 0xe);
      param_6[6] = param_6[6] + (auVar50._8_4_ >> 0xe);
      param_6[7] = param_6[7] + (auVar50._12_4_ >> 0xe);
      param_5 = param_5 + 8;
      param_6 = param_6 + 8;
      pauVar25 = pauVar25 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00c74a70 @ 00c74a70 ////

void __thiscall FUN_00c74a70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x54) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alSourcefv");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alSourcefv");
    }
    *(FARPROC *)((int)this + 0x54) = pFVar1;
  }
  (**(code **)((int)this + 0x54))(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c74ac0 @ 00c74ac0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00c74ac0(void *this,float param_1,uint param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar2 = param_1;
  uVar5 = param_2 & 0x400000;
  if ((uVar5 == 0) &&
     (((param_2 & 0xa48002) == 0 || ((*(uint *)((int)param_1 + 0xc) & 0x2000) != 0))))
  goto LAB_00c74c0a;
  fVar6 = (float10)*(float *)((int)param_1 + 0x134) * (float10)*(float *)((int)param_1 + 0x130);
  if (fVar6 == (float10)0.0) {
LAB_00c74b37:
    iVar4 = -10000;
  }
  else {
    fVar6 = (float10)log2(fVar6);
    iVar4 = (int)ROUND((float)((float10)0.3010299956639812 * fVar6 * (float10)2000.0));
    if (iVar4 < -10000) goto LAB_00c74b37;
  }
  param_1 = (float)(*(int *)((int)param_1 + 0x13c) + iVar4);
  if ((int)param_1 < 0x3e9) {
    if ((int)param_1 < -10000) {
      param_1 = -NAN;
    }
  }
  else {
    param_1 = 1.4013e-42;
  }
  uVar1 = *(undefined4 *)((int)this + 0x58);
  if (DAT_010d6040 == (code *)0x0) {
    DAT_010d6040 = (code *)FUN_00c12920(&DAT_010d5f50,"EAXSet");
  }
  (*DAT_010d6040)(&DAT_00dac9d8,5,uVar1,&param_1,4);
  if (uVar5 != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x58);
    if (DAT_010d6040 == (code *)0x0) {
      DAT_010d6040 = (code *)FUN_00c12920(&DAT_010d5f50,"EAXSet");
    }
    (*DAT_010d6040)(&DAT_00dac9d8,6,uVar1,(int)fVar2 + 0x140,4);
    if (DAT_010d6040 == (code *)0x0) {
      DAT_010d6040 = (code *)FUN_00c12920(&DAT_010d5f50,"EAXSet");
    }
    (*DAT_010d6040)(&DAT_00dac9c8,0x16,0,(int)fVar2 + 0x144,4);
  }
LAB_00c74c0a:
  if ((param_2 & 0x1000000) != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x58);
    param_1 = 0.0;
    if (DAT_010d6040 == (code *)0x0) {
      DAT_010d6040 = (code *)FUN_00c12920(&DAT_010d5f50,"EAXSet");
    }
    (*DAT_010d6040)(&DAT_00dac9d8,7,uVar1,(int)fVar2 + 0x148,4);
    uVar1 = *(undefined4 *)((int)this + 0x58);
    if (DAT_010d6040 == (code *)0x0) {
      DAT_010d6040 = (code *)FUN_00c12920(&DAT_010d5f50,"EAXSet");
    }
    (*DAT_010d6040)(&DAT_00dac9d8,8,uVar1,(int)fVar2 + 0x14c,4);
    uVar1 = *(undefined4 *)((int)this + 0x58);
    if (DAT_010d6040 == (code *)0x0) {
      DAT_010d6040 = (code *)FUN_00c12920(&DAT_010d5f50,"EAXSet");
    }
    (*DAT_010d6040)(&DAT_00dac9d8,0x14,uVar1,&param_1,4);
    if (DAT_010d6040 == (code *)0x0) {
      DAT_010d6040 = (code *)FUN_00c12920(&DAT_010d5f50,"EAXSet");
    }
    (*DAT_010d6040)(&DAT_00dac9c8,0x16,0,(int)fVar2 + 0x150,4);
  }
  if ((param_2 & 0xa4800a) != 0) {
    fVar3 = *(float *)((int)fVar2 + 0x18) * *(float *)((int)this + 0x30);
    if ((*(uint *)((int)fVar2 + 0xc) & 0x2000) != 0) {
      fVar3 = fVar3 * *(float *)((int)fVar2 + 0x134) * *(float *)((int)fVar2 + 0x130);
    }
    param_1 = fVar3 * _DAT_010d6048;
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
    uVar1 = *(undefined4 *)((int)this + 0x58);
    if (DAT_010d5fa0 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5fa0 = GetProcAddress(DAT_010d5f54,"alSourcef");
      }
      else {
        DAT_010d5fa0 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alSourcef");
      }
    }
    (*DAT_010d5fa0)(uVar1,0x100a,param_1);
  }
  if ((param_2 & 0x10024) != 0) {
    if (DAT_010d6030 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
      }
      else {
        DAT_010d6030 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetError");
      }
    }
    (*DAT_010d6030)();
    param_1 = *(float *)((int)fVar2 + 0x138) * *(float *)((int)fVar2 + 0x20) *
              *(float *)((int)this + 0x3c);
    do {
      if (param_1 <= 0.0) break;
      uVar1 = *(undefined4 *)((int)this + 0x58);
      if (DAT_010d5fa0 == (FARPROC)0x0) {
        if (DAT_010d6054 == '\0') {
          DAT_010d5fa0 = GetProcAddress(DAT_010d5f54,"alSourcef");
        }
        else {
          if ((DAT_010d6038 == (FARPROC)0x0) &&
             (DAT_010d6038 = GetProcAddress(DAT_010d5f54,"alGetProcAddress"), DAT_010d6054 != '\0'))
          {
            DAT_010d6038 = (FARPROC)(*DAT_010d6038)("alGetProcAddress");
          }
          DAT_010d5fa0 = (FARPROC)(*DAT_010d6038)("alSourcef");
        }
      }
      (*DAT_010d5fa0)(uVar1,0x1003,param_1);
      if (DAT_010d6030 == (FARPROC)0x0) {
        if (DAT_010d6054 == '\0') {
          DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
        }
        else {
          if ((DAT_010d6038 == (FARPROC)0x0) &&
             (DAT_010d6038 = GetProcAddress(DAT_010d5f54,"alGetProcAddress"), DAT_010d6054 != '\0'))
          {
            DAT_010d6038 = (FARPROC)(*DAT_010d6038)("alGetProcAddress");
          }
          DAT_010d6030 = (FARPROC)(*DAT_010d6038)("alGetError");
        }
      }
      param_1 = param_1 * 0.8;
      iVar4 = (*DAT_010d6030)();
    } while (iVar4 == 0xa003);
  }
  if ((char)(param_2 >> 8) < '\0') {
    fStack_8 = *(float *)((int)fVar2 + 0x100);
    fStack_c = *(float *)((int)fVar2 + 0xfc);
    fStack_4 = -*(float *)((int)fVar2 + 0x104);
    if ((*(uint *)((int)fVar2 + 0xc) & 0x2000) == 0) {
      fVar2 = *(float *)((int)fVar2 + 0xfc) * *(float *)((int)fVar2 + 0xfc) +
              *(float *)((int)fVar2 + 0x104) * *(float *)((int)fVar2 + 0x104) +
              *(float *)((int)fVar2 + 0x100) * *(float *)((int)fVar2 + 0x100);
      if ((fVar2 == 0.0) || (fVar2 = SQRT(fVar2), fVar2 == 0.0)) {
        fStack_8 = 1.0;
      }
      else {
        fVar2 = 1.0 / fVar2;
        fStack_c = fStack_c * fVar2;
        fStack_8 = fStack_8 * fVar2;
        fStack_4 = fVar2 * fStack_4;
      }
    }
    uVar1 = *(undefined4 *)((int)this + 0x58);
    if (DAT_010d5fa4 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5fa4 = GetProcAddress(DAT_010d5f54,"alSourcefv");
      }
      else {
        DAT_010d5fa4 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alSourcefv");
      }
    }
    (*DAT_010d5fa4)(uVar1,0x1004,&fStack_c);
  }
  return;
}


//// FUNCTION FUN_00c75000 @ 00c75000 ////

void __fastcall FUN_00c75000(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00dad660;
  return;
}


//// FUNCTION FUN_00c75010 @ 00c75010 ////

undefined4 __thiscall FUN_00c75010(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)0x0;
  puVar1 = *(undefined4 **)((int)this + 8);
  if (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0) {
    while (puVar2 = puVar1, puVar2[2] != param_1) {
      puVar1 = (undefined4 *)puVar2[1];
      puVar3 = puVar2;
      if ((undefined4 *)puVar2[1] == (undefined4 *)0x0) {
        return 0;
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = puVar2[1];
      (**(code **)*puVar2)(1);
      return 0;
    }
    *(undefined4 *)((int)this + 8) = puVar2[1];
    (**(code **)*puVar2)(1);
  }
  return 0;
}


//// FUNCTION FUN_00c75060 @ 00c75060 ////

void __thiscall
FUN_00c75060(void *this,undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)FUN_00c0ef90(0x98);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  switch(param_1) {
  case 0:
    switch(param_2) {
    case 1:
      puVar3 = puVar2 + 2;
      for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
      break;
    case 2:
      puVar2[2] = *param_3;
      break;
    case 3:
switchD_00c750e7_caseD_3:
      puVar2[3] = *param_3;
      break;
    case 4:
      puVar2[4] = *param_3;
      break;
    case 5:
      puVar2[5] = *param_3;
      break;
    case 6:
      puVar2[6] = *param_3;
      break;
    case 7:
      puVar2[7] = *param_3;
      break;
    case 8:
      puVar2[8] = *param_3;
      break;
    case 9:
      puVar2[9] = *param_3;
      break;
    case 10:
      puVar2[10] = *param_3;
      break;
    case 0xb:
      puVar2[0xb] = *param_3;
      break;
    case 0xc:
      puVar2[0xc] = *param_3;
      break;
    case 0xd:
      puVar3 = puVar2 + 0xd;
      goto LAB_00c75190;
    case 0xe:
      puVar2[0x10] = *param_3;
      break;
    case 0xf:
      puVar2[0x11] = *param_3;
      break;
    case 0x10:
      puVar3 = puVar2 + 0x12;
LAB_00c75190:
      *puVar3 = *param_3;
      puVar3[1] = param_3[1];
      puVar3[2] = param_3[2];
      break;
    case 0x11:
      puVar2[0x15] = *param_3;
      break;
    case 0x12:
      puVar2[0x16] = *param_3;
      break;
    case 0x13:
      puVar2[0x17] = *param_3;
      break;
    case 0x14:
      puVar2[0x18] = *param_3;
      break;
    case 0x15:
      puVar2[0x19] = *param_3;
      break;
    case 0x16:
      puVar2[0x1a] = *param_3;
      break;
    case 0x17:
      puVar2[0x1b] = *param_3;
      break;
    case 0x18:
      puVar2[0x1c] = *param_3;
      break;
    case 0x19:
      puVar2[0x1d] = *param_3;
    }
    goto switchD_00c75088_caseD_2;
  case 1:
    puVar2[2] = param_4;
    switch(param_2) {
    case 1:
      puVar3 = puVar2 + 0x13;
      for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
      break;
    case 2:
      puVar2[0x17] = *param_3;
      puVar2[0x18] = param_3[1];
      break;
    case 3:
      puVar2[0x19] = *param_3;
      puVar2[0x1a] = param_3[1];
      puVar2[0x1b] = param_3[2];
      puVar2[0x1c] = param_3[3];
      break;
    case 4:
      puVar2[0x1d] = *param_3;
      puVar2[0x1e] = param_3[1];
      break;
    case 5:
      puVar2[0x13] = *param_3;
      break;
    case 6:
      puVar2[0x14] = *param_3;
      break;
    case 7:
      puVar2[0x15] = *param_3;
      break;
    case 8:
      puVar2[0x16] = *param_3;
      break;
    case 9:
      puVar2[0x17] = *param_3;
      break;
    case 10:
      puVar2[0x18] = *param_3;
      break;
    case 0xb:
      puVar2[0x19] = *param_3;
      break;
    case 0xc:
      puVar2[0x1a] = *param_3;
      break;
    case 0xd:
      puVar2[0x1b] = *param_3;
      break;
    case 0xe:
      puVar2[0x1c] = *param_3;
      break;
    case 0xf:
      puVar2[0x1d] = *param_3;
      break;
    case 0x10:
      puVar2[0x1e] = *param_3;
      break;
    case 0x11:
      puVar2[0x1f] = *param_3;
      break;
    case 0x12:
      puVar2[0x20] = *param_3;
      break;
    case 0x13:
      puVar2[0x21] = *param_3;
      break;
    case 0x14:
      puVar2[0x22] = *param_3;
      break;
    case 0x15:
      puVar2[0x23] = *param_3;
      break;
    case 0x16:
      puVar2[0x24] = *param_3;
    }
  default:
    goto switchD_00c75088_caseD_2;
  case 4:
    if (param_2 == 4) {
      puVar2[0xe] = *param_3;
      goto switchD_00c75088_caseD_2;
    }
    if (param_2 != 5) goto switchD_00c75088_caseD_2;
    break;
  case 5:
    puVar2[2] = param_4;
    if (param_2 != 0x20) {
      if (param_2 != 0x200) goto switchD_00c75088_caseD_2;
      goto switchD_00c750e7_caseD_3;
    }
  }
  puVar2[0xf] = *param_3;
switchD_00c75088_caseD_2:
  puVar2[0x25] = 0;
  iVar4 = *(int *)((int)this + 0x3c4);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0x94);
    while (iVar1 != 0) {
      iVar4 = *(int *)(iVar4 + 0x94);
      iVar1 = *(int *)(iVar4 + 0x94);
    }
    *(undefined4 **)(iVar4 + 0x94) = puVar2;
    return;
  }
  *(undefined4 **)((int)this + 0x3c4) = puVar2;
  return;
}


//// FUNCTION FUN_00c754c0 @ 00c754c0 ////

void __fastcall FUN_00c754c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c4);
  while (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c4);
    *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(iVar1 + 0x94);
    FUN_00c0efa0(iVar1);
    iVar1 = *(int *)(param_1 + 0x3c4);
  }
  return;
}


//// FUNCTION FUN_00c75500 @ 00c75500 ////

undefined4 FUN_00c75500(float *param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  
  iVar1 = __isnan((double)*param_1);
  if (iVar1 == 0) {
    if (param_2 <= *param_1) {
      if (param_3 < *param_1) {
        if ((param_4 == 0) && (*param_1 * 0.9999999 < param_3 == (*param_1 * 0.9999999 == param_3)))
        {
          return 0xfffffffd;
        }
        *param_1 = param_3;
      }
      return 0;
    }
    if ((param_4 != 0) || (param_2 * 0.9999999 < *param_1 != (param_2 * 0.9999999 == *param_1))) {
      *param_1 = param_2;
      return 0;
    }
  }
  return 0xfffffffd;
}


//// FUNCTION FUN_00c75590 @ 00c75590 ////

void __thiscall FUN_00c75590(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)((int)this + 0x3d0) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x3f800000;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  *(undefined4 *)((int)this + 0x44) = 0x3f800000;
  puVar2 = (undefined4 *)((int)this + 0xc);
  puVar3 = (undefined4 *)((int)this + 0x48);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x4b8) = 0x3fbeb852;
  *(undefined4 *)((int)this + 0x2e8) = 0x3fbeb852;
  *(undefined4 *)((int)this + 0x4c8) = 0x3be56042;
  *(undefined4 *)((int)this + 0x2f8) = 0x3be56042;
  *(undefined4 *)((int)this + 0x4d8) = 0x3c343958;
  *(undefined4 *)((int)this + 0x30c) = 0x3c343958;
  *(undefined ***)this = &PTR_FUN_00dad668;
  *(undefined4 *)((int)this + 0x3b4) = 0x2a8;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined1 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x2dc) = 0xfffffc18;
  *(undefined4 *)((int)this + 0x2e0) = 0xffffff9c;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0x3f547ae1;
  *(undefined4 *)((int)this + 0x2f0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2f4) = 0xfffff5d6;
  *(undefined4 *)((int)this + 0x4c0) = 0xc522a000;
  *(undefined4 *)((int)this + 0x308) = 200;
  *(undefined4 *)((int)this + 0x4d0) = 0x43480000;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0x40f00000;
  *(undefined4 *)((int)this + 0x4e4) = 0x40f00000;
  *(undefined4 *)((int)this + 0x4dc) = 0x40f00000;
  *(undefined4 *)((int)this + 0x4d4) = 0x40f00000;
  *(undefined4 *)((int)this + 0x4cc) = 0x40f00000;
  *(undefined4 *)((int)this + 0x4c4) = 0x40f00000;
  *(undefined4 *)((int)this + 0x4bc) = 0x40f00000;
  *(undefined4 *)((int)this + 0x2d4) = 0x40f00000;
  *(undefined4 *)((int)this + 0x2d8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x32c) = 0xc0a00000;
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x4e0) = 0x3e800000;
  *(undefined4 *)((int)this + 0x31c) = 0x3e800000;
  *(undefined4 *)((int)this + 0x328) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0x3e800000;
  *(undefined4 *)((int)this + 0x324) = 0x3e800000;
  *(undefined4 *)((int)this + 0x330) = 0x459c4000;
  *(undefined4 *)((int)this + 0x334) = 0x437a0000;
  *(undefined4 *)((int)this + 0x33c) = 0x3f;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar2 = (undefined4 *)((int)this + 0x2d0);
  puVar3 = (undefined4 *)((int)this + 0x340);
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x84) = 0xcf95c8f;
  *(undefined4 *)((int)this + 0x88) = 0x4849a3cc;
  *(undefined4 *)((int)this + 0x8c) = 0x2e83b6b0;
  *(undefined4 *)((int)this + 0x90) = 0xdf2218cc;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 1;
  *(undefined4 *)((int)this + 0x9c) = 1;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb4) = 1;
  *(undefined4 *)((int)this + 0xb8) = 1;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0x40f00000;
  *(undefined4 *)((int)this + 0x100) = 0xfffffc18;
  *(undefined4 *)((int)this + 0x104) = 0xffffff9c;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0x3fbeb852;
  *(undefined4 *)((int)this + 0x110) = 0x3f547ae1;
  *(undefined4 *)((int)this + 0x118) = 0xfffff5d6;
  *(undefined4 *)((int)this + 0x11c) = 0x3be56042;
  *(undefined4 *)((int)this + 0x120) = 0;
  puVar2 = (undefined4 *)((int)this + 0xa0);
  puVar3 = (undefined4 *)((int)this + 0xbc);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0xd0) = 0;
  puVar2 = (undefined4 *)((int)this + 0xbc);
  puVar3 = (undefined4 *)((int)this + 0xd8);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0xec) = 0;
  puVar2 = (undefined4 *)((int)this + 0xf4);
  *(undefined4 *)((int)this + 0xfc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x114) = 0x3f800000;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 200;
  *(undefined4 *)((int)this + 0x130) = 0x3c343958;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0x3e800000;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0x3e800000;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0xc0a00000;
  *(undefined4 *)((int)this + 0x154) = 0x459c4000;
  *(undefined4 *)((int)this + 0x158) = 0x437a0000;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0x3f;
  puVar3 = puVar2;
  puVar4 = (undefined4 *)((int)this + 0x164);
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = puVar2;
  puVar4 = (undefined4 *)((int)this + 0x1d4);
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)((int)this + 0x244);
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x488);
  iVar1 = 4;
  do {
    puVar2[8] = 0x40f00000;
    *puVar2 = 0x40f00000;
    puVar2[-8] = 0x40f00000;
    puVar2[-0x10] = 0x40f00000;
    puVar2[-0x18] = 0x40f00000;
    puVar2[-0x20] = 0x40f00000;
    puVar2[-0x28] = 0x40f00000;
    puVar2[-0x2c] = 0x3fbeb852;
    puVar2[-0x24] = 0xc522a000;
    puVar2[-0x1c] = 0x3be56042;
    puVar2[-0x14] = 0x43480000;
    puVar2[-0xc] = 0x3c343958;
    puVar2[-4] = 0x3e800000;
    puVar2[4] = 0x3e800000;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)((int)this + 0x2b4) = 0xc4d79f1e;
  *(undefined4 *)((int)this + 0x2b8) = 0x436bf1ac;
  *(undefined4 *)((int)this + 700) = 0x38a71da8;
  *(undefined4 *)((int)this + 0x2c0) = 0x695404e7;
  *(undefined4 *)((int)this + 0x2c4) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2c8) = 0xc0a00000;
  *(undefined4 *)((int)this + 0x2cc) = 0x459c4000;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  return;
}


//// FUNCTION FUN_00c759e0 @ 00c759e0 ////

void __fastcall FUN_00c759e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00dad668;
  local_4 = 0;
  FUN_00c754c0((int)param_1);
  puVar1 = (undefined4 *)param_1[2];
  while (puVar1 != (undefined4 *)0x0) {
    param_1[2] = puVar1[1];
    (**(code **)*puVar1)(1);
    puVar1 = (undefined4 *)param_1[2];
  }
  *param_1 = &PTR_LAB_00d9fbe8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c75a50 @ 00c75a50 ////

undefined4 __thiscall FUN_00c75a50(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  puVar1 = (undefined4 *)FUN_00c0ef90(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_00c75000(puVar1);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)((int)this + 8);
      *(int *)(iVar2 + 8) = param_1;
      *(int *)((int)this + 8) = iVar2;
      if (*(int *)((int)this + 0x3b4) < 0) {
        uVar3 = FUN_00c7c6d0(param_1);
      }
      return uVar3;
    }
  }
  return 0xfffffffb;
}


//// FUNCTION FUN_00c75ab0 @ 00c75ab0 ////

undefined4 * __thiscall FUN_00c75ab0(void *this,byte param_1)

{
  FUN_00c75ad0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c75ad0 @ 00c75ad0 ////

void __fastcall FUN_00c75ad0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fbe8;
  return;
}


//// FUNCTION FUN_00c75ae0 @ 00c75ae0 ////

int __fastcall FUN_00c75ae0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x3d0) == 1) {
    puVar3 = (undefined4 *)FUN_00c0ef90(0x98);
    *puVar3 = 0;
    puVar3[1] = 2;
    puVar3[2] = *(undefined4 *)(param_1 + 0x340);
    puVar3[0x25] = 0;
    iVar1 = *(int *)(param_1 + 0x3c4);
    if (iVar1 == 0) {
      *(undefined4 **)(param_1 + 0x3c4) = puVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x94);
      while (iVar2 != 0) {
        iVar1 = *(int *)(iVar1 + 0x94);
        iVar2 = *(int *)(iVar1 + 0x94);
      }
      *(undefined4 **)(iVar1 + 0x94) = puVar3;
    }
  }
  *(uint *)(param_1 + 0x3b4) = *(uint *)(param_1 + 0x3b4) | 0x80000000;
  iVar1 = *(int *)(param_1 + 8);
  while ((iVar1 != 0 && (iVar4 = FUN_00c7c6d0(*(int *)(iVar1 + 8)), -1 < iVar4))) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar4;
}


//// FUNCTION FUN_00c75b80 @ 00c75b80 ////

undefined4 * __thiscall FUN_00c75b80(void *this,byte param_1)

{
  FUN_00c759e0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c75ba0 @ 00c75ba0 ////

int __thiscall FUN_00c75ba0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  FUN_00c754c0((int)this);
  if (-1 < *(int *)((int)this + 0x3b4)) {
    iVar1 = FUN_00c75ae0((int)this);
  }
  *param_1 = *(undefined4 *)((int)this + 0x3c4);
  return iVar1;
}


//// FUNCTION FUN_00c75c40 @ 00c75c40 ////

float10 __cdecl FUN_00c75c40(float param_1)

{
  float10 fVar1;
  
  if (1e-05 < param_1) {
    fVar1 = (float10)log2((float10)param_1);
    return (float10)0.6931471805599453 * fVar1 * (float10)868.589;
  }
  fVar1 = (float10)log2((float10)1e-05);
  return (float10)0.6931471805599453 * fVar1 * (float10)868.589;
}


//// FUNCTION FUN_00c75c80 @ 00c75c80 ////

undefined4 __thiscall FUN_00c75c80(void *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  uint in_stack_00000014;
  
  uVar1 = 0;
  iVar2 = 4;
  bVar6 = true;
  piVar4 = &DAT_00dad6c0;
  piVar5 = (int *)register0x00000010;
  do {
    piVar5 = piVar5 + 1;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar5 == *piVar4;
    piVar4 = piVar4 + 1;
  } while (bVar6);
  if (bVar6) {
    puVar3 = (undefined4 *)((int)this + 0x84);
  }
  else {
    iVar2 = 4;
    bVar6 = true;
    piVar4 = &DAT_00dad6d0;
    piVar5 = (int *)register0x00000010;
    do {
      piVar5 = piVar5 + 1;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *piVar5 == *piVar4;
      piVar4 = piVar4 + 1;
    } while (bVar6);
    if (bVar6) {
      puVar3 = (undefined4 *)((int)this + 0xa0);
    }
    else {
      iVar2 = 4;
      bVar6 = true;
      piVar4 = &DAT_00dad6e0;
      piVar5 = (int *)register0x00000010;
      do {
        piVar5 = piVar5 + 1;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *piVar5 == *piVar4;
        piVar4 = piVar4 + 1;
      } while (bVar6);
      if (bVar6) {
        puVar3 = (undefined4 *)((int)this + 0xbc);
      }
      else {
        iVar2 = 4;
        bVar6 = true;
        piVar4 = &DAT_00dad6f0;
        piVar5 = (int *)register0x00000010;
        do {
          piVar5 = piVar5 + 1;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *piVar5 == *piVar4;
          piVar4 = piVar4 + 1;
        } while (bVar6);
        if (!bVar6) goto LAB_00c75d10;
        puVar3 = (undefined4 *)((int)this + 0xd8);
      }
    }
  }
  uStack00000004 = *puVar3;
  uStack00000008 = puVar3[1];
  uStack0000000c = puVar3[2];
  uStack00000010 = puVar3[3];
LAB_00c75d10:
  iVar2 = 4;
  bVar6 = true;
  piVar5 = &DAT_00dad710;
  do {
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *(int *)register0x00000010 == *piVar5;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (((bVar6) && (in_stack_00000014 < 0x8000001a)) &&
     ((0x7fffffff < in_stack_00000014 || (in_stack_00000014 < 0x1a)))) {
    uVar1 = 3;
  }
  return uVar1;
}


//// FUNCTION FUN_00c75d50 @ 00c75d50 ////

undefined4 __thiscall FUN_00c75d50(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  uVar1 = *(uint *)((int)this + param_1 * 0x1c + 0x9c);
  if (param_2 != (((byte)uVar1 & 1) == 1)) {
    if (param_2 == 0) {
      *(uint *)((int)this + param_1 * 0x1c + 0x9c) = uVar1 & 0xfffffffe;
      if (*(int *)((int)this + 4) == param_1) {
        *(undefined4 *)((int)this + 0x3a0) = *(undefined4 *)((int)this + 0x2cc);
        *(undefined4 *)((int)this + 0x34c) = 0xffffd8f0;
        *(undefined4 *)((int)this + 0x39c) = *(undefined4 *)((int)this + 0x2c8);
        *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x4180008;
      }
    }
    else {
      *(uint *)((int)this + param_1 * 0x1c + 0x9c) = uVar1 | 1;
      if (*(int *)((int)this + 4) == param_1) {
        iVar2 = 4;
        bVar7 = true;
        piVar3 = (int *)((int)this + param_1 * 0x1c + 0x84);
        piVar5 = &DAT_00dad710;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar7 = *piVar3 == *piVar5;
          piVar3 = piVar3 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar7);
        if (bVar7) {
          puVar4 = (undefined4 *)((int)this + param_1 * 0x70 + 0xf4);
          puVar6 = (undefined4 *)((int)this + 0x340);
          for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          iVar2 = *(int *)((int)this + 0x34c) + *(int *)((int)this + param_1 * 0x1c + 0x94);
          *(int *)((int)this + 0x34c) = iVar2;
          if (iVar2 < -10000) {
            *(undefined4 *)((int)this + 0x34c) = 0xffffd8f0;
          }
          *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x5000000;
        }
        return 0;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00c75e60 @ 00c75e60 ////

undefined4 __thiscall FUN_00c75e60(void *this,int param_1,float param_2)

{
  if ((0.0 <= param_2) && (param_2 <= 1.0)) {
    if (((*(float *)(param_1 * 0x70 + 0xfc + (int)this) != param_2) &&
        (*(float *)(param_1 * 0x70 + 0xfc + (int)this) = param_2, *(int *)((int)this + 4) == param_1
        )) && ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
      *(float *)((int)this + 0x348) = param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 4;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c75ef0 @ 00c75ef0 ////

undefined4 __thiscall FUN_00c75ef0(void *this,int param_1,int param_2)

{
  int *piVar1;
  
  if ((-0x2711 < param_2) && (param_2 < 1)) {
    piVar1 = (int *)(param_1 * 0x70 + 0x100 + (int)this);
    if (((*piVar1 != param_2) && (*piVar1 = param_2, *(int *)((int)this + 4) == param_1)) &&
       ((*(byte *)((int)this + param_1 * 0x1c + 0x9c) & 1) != 0)) {
      *(int *)((int)this + 0x34c) = *(int *)((int)this + param_1 * 0x1c + 0x94) + param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 8;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c75f60 @ 00c75f60 ////

undefined4 __thiscall FUN_00c75f60(void *this,int param_1,int param_2)

{
  if ((-0x2711 < param_2) && (param_2 < 1)) {
    if (((*(int *)(param_1 * 0x70 + 0x104 + (int)this) != param_2) &&
        (*(int *)(param_1 * 0x70 + 0x104 + (int)this) = param_2, *(int *)((int)this + 4) == param_1)
        ) && ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
      *(int *)((int)this + 0x350) = param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x10;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c75fd0 @ 00c75fd0 ////

undefined4 __thiscall FUN_00c75fd0(void *this,int param_1,int param_2)

{
  if ((-0x2711 < param_2) && (param_2 < 1)) {
    if (((*(int *)(param_1 * 0x70 + 0x108 + (int)this) != param_2) &&
        (*(int *)(param_1 * 0x70 + 0x108 + (int)this) = param_2, *(int *)((int)this + 4) == param_1)
        ) && ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
      *(int *)((int)this + 0x354) = param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x20;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c76040 @ 00c76040 ////

undefined4 __thiscall FUN_00c76040(void *this,int param_1,float param_2,char param_3,byte param_4)

{
  int iVar1;
  
  iVar1 = FUN_00c75500(&param_2,0.1,20.0,(uint)param_4);
  if (iVar1 < 0) {
    *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  if (param_3 != '\0') {
    *(float *)((int)this + param_1 * 4 + 0x3d8) = param_2;
    *(undefined4 *)((int)this + param_1 * 4 + 1000) =
         *(undefined4 *)(param_1 * 0x70 + 0xf8 + (int)this);
  }
  if (((*(float *)(param_1 * 0x70 + 0x10c + (int)this) != param_2) &&
      (*(float *)(param_1 * 0x70 + 0x10c + (int)this) = param_2, *(int *)((int)this + 4) == param_1)
      ) && ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
    *(float *)((int)this + 0x358) = param_2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x40;
  }
  return 0;
}


//// FUNCTION FUN_00c76100 @ 00c76100 ////

undefined4 __thiscall FUN_00c76100(void *this,int param_1,float param_2)

{
  if ((0.1 <= param_2) && (param_2 <= 2.0)) {
    if (((*(float *)(param_1 * 0x70 + 0x110 + (int)this) != param_2) &&
        (*(float *)(param_1 * 0x70 + 0x110 + (int)this) = param_2,
        *(int *)((int)this + 4) == param_1)) &&
       ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
      *(float *)((int)this + 0x35c) = param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x80;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c761a0 @ 00c761a0 ////

undefined4 __thiscall FUN_00c761a0(void *this,int param_1,float param_2)

{
  if ((0.1 <= param_2) && (param_2 <= 2.0)) {
    if (((*(float *)(param_1 * 0x70 + 0x114 + (int)this) != param_2) &&
        (*(float *)(param_1 * 0x70 + 0x114 + (int)this) = param_2,
        *(int *)((int)this + 4) == param_1)) &&
       ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
      *(float *)((int)this + 0x360) = param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x100;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c76240 @ 00c76240 ////

undefined4 __thiscall FUN_00c76240(void *this,int param_1,int param_2,char param_3,char param_4)

{
  if (param_2 < -10000) {
    if (param_4 == '\0') {
LAB_00c762f4:
      *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
      return 0xfffffffd;
    }
    param_2 = -10000;
  }
  else if (1000 < param_2) {
    if (param_4 == '\0') goto LAB_00c762f4;
    param_2 = 1000;
  }
  if (param_3 != '\0') {
    *(float *)((int)this + param_1 * 4 + 0x3f8) = (float)param_2;
    *(undefined4 *)((int)this + param_1 * 4 + 0x408) =
         *(undefined4 *)(param_1 * 0x70 + 0xf8 + (int)this);
  }
  if (((*(int *)(param_1 * 0x70 + 0x118 + (int)this) != param_2) &&
      (*(int *)(param_1 * 0x70 + 0x118 + (int)this) = param_2, *(int *)((int)this + 4) == param_1))
     && ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
    *(int *)((int)this + 0x364) = param_2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x200;
  }
  return 0;
}


//// FUNCTION FUN_00c76310 @ 00c76310 ////

undefined4 __thiscall FUN_00c76310(void *this,int param_1,float param_2,char param_3,byte param_4)

{
  int iVar1;
  
  iVar1 = FUN_00c75500(&param_2,0.0,0.3,(uint)param_4);
  if (iVar1 < 0) {
    *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  if (param_3 != '\0') {
    *(float *)((int)this + param_1 * 4 + 0x418) = param_2;
    *(undefined4 *)((int)this + param_1 * 4 + 0x428) =
         *(undefined4 *)(param_1 * 0x70 + 0xf8 + (int)this);
  }
  if (((*(float *)(param_1 * 0x70 + 0x11c + (int)this) != param_2) &&
      (*(float *)(param_1 * 0x70 + 0x11c + (int)this) = param_2, *(int *)((int)this + 4) == param_1)
      ) && ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
    *(float *)((int)this + 0x368) = param_2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x400;
  }
  return 0;
}


//// FUNCTION FUN_00c763d0 @ 00c763d0 ////

undefined4 __thiscall FUN_00c763d0(void *this,int param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  
  iVar2 = __isnan((double)param_2);
  if (iVar2 == 0) {
    iVar2 = __isnan((double)param_3);
    if (iVar2 == 0) {
      iVar2 = __isnan((double)param_4);
      if (iVar2 == 0) {
        pfVar1 = (float *)(param_1 * 0x70 + 0x120 + (int)this);
        iVar2 = 3;
        bVar5 = true;
        pfVar3 = pfVar1;
        pfVar4 = &param_2;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *pfVar3 == *pfVar4;
          pfVar3 = pfVar3 + 1;
          pfVar4 = pfVar4 + 1;
        } while (bVar5);
        if (!bVar5) {
          *pfVar1 = param_2;
          pfVar1[1] = param_3;
          pfVar1[2] = param_4;
          if ((*(int *)((int)this + 4) == param_1) &&
             ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
            *(float *)((int)this + 0x36c) = param_2;
            *(float *)((int)this + 0x370) = param_3;
            *(float *)((int)this + 0x374) = param_4;
            *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x800;
          }
        }
        return 0;
      }
    }
  }
  return 0xfffffffd;
}


//// FUNCTION FUN_00c76490 @ 00c76490 ////

undefined4 __thiscall FUN_00c76490(void *this,int param_1,int param_2,char param_3,char param_4)

{
  if (param_2 < -10000) {
    if (param_4 == '\0') {
LAB_00c76544:
      *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
      return 0xfffffffd;
    }
    param_2 = -10000;
  }
  else if (2000 < param_2) {
    if (param_4 == '\0') goto LAB_00c76544;
    param_2 = 2000;
  }
  if (param_3 != '\0') {
    *(float *)((int)this + param_1 * 4 + 0x438) = (float)param_2;
    *(undefined4 *)((int)this + param_1 * 4 + 0x448) =
         *(undefined4 *)(param_1 * 0x70 + 0xf8 + (int)this);
  }
  if (((*(int *)(param_1 * 0x70 + 300 + (int)this) != param_2) &&
      (*(int *)(param_1 * 0x70 + 300 + (int)this) = param_2, *(int *)((int)this + 4) == param_1)) &&
     ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
    *(int *)((int)this + 0x378) = param_2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x1000;
  }
  return 0;
}


//// FUNCTION FUN_00c76560 @ 00c76560 ////

undefined4 __thiscall FUN_00c76560(void *this,int param_1,float param_2,char param_3,byte param_4)

{
  int iVar1;
  
  iVar1 = FUN_00c75500(&param_2,0.0,0.1,(uint)param_4);
  if (iVar1 < 0) {
    *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  if (param_3 != '\0') {
    *(float *)((int)this + param_1 * 4 + 0x458) = param_2;
    *(undefined4 *)((int)this + param_1 * 4 + 0x468) =
         *(undefined4 *)(param_1 * 0x70 + 0xf8 + (int)this);
  }
  if (((*(float *)(param_1 * 0x70 + 0x130 + (int)this) != param_2) &&
      (*(float *)(param_1 * 0x70 + 0x130 + (int)this) = param_2, *(int *)((int)this + 4) == param_1)
      ) && ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
    *(float *)((int)this + 0x37c) = param_2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x2000;
  }
  return 0;
}


//// FUNCTION FUN_00c76620 @ 00c76620 ////

undefined4 __thiscall FUN_00c76620(void *this,int param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  
  iVar2 = __isnan((double)param_2);
  if (iVar2 == 0) {
    iVar2 = __isnan((double)param_3);
    if (iVar2 == 0) {
      iVar2 = __isnan((double)param_4);
      if (iVar2 == 0) {
        pfVar1 = (float *)(param_1 * 0x70 + 0x134 + (int)this);
        iVar2 = 3;
        bVar5 = true;
        pfVar3 = pfVar1;
        pfVar4 = &param_2;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *pfVar3 == *pfVar4;
          pfVar3 = pfVar3 + 1;
          pfVar4 = pfVar4 + 1;
        } while (bVar5);
        if (!bVar5) {
          *pfVar1 = param_2;
          pfVar1[1] = param_3;
          pfVar1[2] = param_4;
          if ((*(int *)((int)this + 4) == param_1) &&
             ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
            *(float *)((int)this + 0x380) = param_2;
            *(float *)((int)this + 900) = param_3;
            *(float *)((int)this + 0x388) = param_4;
            *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x4000;
          }
        }
        return 0;
      }
    }
  }
  return 0xfffffffd;
}


//// FUNCTION FUN_00c766e0 @ 00c766e0 ////

undefined4 __thiscall FUN_00c766e0(void *this,int param_1,float param_2,char param_3,byte param_4)

{
  int iVar1;
  
  iVar1 = FUN_00c75500(&param_2,0.075,0.25,(uint)param_4);
  if (iVar1 < 0) {
    *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  if (param_3 != '\0') {
    *(float *)((int)this + param_1 * 4 + 0x478) = param_2;
    *(undefined4 *)((int)this + param_1 * 4 + 0x488) =
         *(undefined4 *)(param_1 * 0x70 + 0xf8 + (int)this);
  }
  if (((*(float *)(param_1 * 0x70 + 0x140 + (int)this) != param_2) &&
      (*(float *)(param_1 * 0x70 + 0x140 + (int)this) = param_2, *(int *)((int)this + 4) == param_1)
      ) && ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
    *(float *)((int)this + 0x38c) = param_2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x8000;
  }
  return 0;
}


//// FUNCTION FUN_00c767a0 @ 00c767a0 ////

undefined4 __thiscall FUN_00c767a0(void *this,int param_1,float param_2)

{
  if ((0.0 <= param_2) && (param_2 <= 1.0)) {
    if (((*(float *)(param_1 * 0x70 + 0x144 + (int)this) != param_2) &&
        (*(float *)(param_1 * 0x70 + 0x144 + (int)this) = param_2,
        *(int *)((int)this + 4) == param_1)) &&
       ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
      *(float *)((int)this + 0x390) = param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x10000;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c76840 @ 00c76840 ////

undefined4 __thiscall FUN_00c76840(void *this,int param_1,float param_2,char param_3,byte param_4)

{
  int iVar1;
  
  iVar1 = FUN_00c75500(&param_2,0.04,4.0,(uint)param_4);
  if (iVar1 < 0) {
    *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  if (param_3 != '\0') {
    *(float *)((int)this + param_1 * 4 + 0x498) = param_2;
    *(undefined4 *)((int)this + param_1 * 4 + 0x4a8) =
         *(undefined4 *)(param_1 * 0x70 + 0xf8 + (int)this);
  }
  if (((*(float *)(param_1 * 0x70 + 0x148 + (int)this) != param_2) &&
      (*(float *)(param_1 * 0x70 + 0x148 + (int)this) = param_2, *(int *)((int)this + 4) == param_1)
      ) && ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
    *(float *)((int)this + 0x394) = param_2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x20000;
  }
  return 0;
}


//// FUNCTION FUN_00c76900 @ 00c76900 ////

undefined4 __thiscall FUN_00c76900(void *this,int param_1,float param_2)

{
  if ((0.0 <= param_2) && (param_2 <= 1.0)) {
    if (((*(float *)(param_1 * 0x70 + 0x14c + (int)this) != param_2) &&
        (*(float *)(param_1 * 0x70 + 0x14c + (int)this) = param_2,
        *(int *)((int)this + 4) == param_1)) &&
       ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
      *(float *)((int)this + 0x398) = param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x40000;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c769a0 @ 00c769a0 ////

undefined4 __thiscall FUN_00c769a0(void *this,int param_1,float param_2)

{
  int iVar1;
  
  if ((-100.0 <= param_2) && (param_2 <= 0.0)) {
    iVar1 = (param_1 + 3) * 0x70;
    if (((*(float *)(iVar1 + (int)this) != param_2) &&
        (*(float *)(iVar1 + (int)this) = param_2, *(int *)((int)this + 4) == param_1)) &&
       ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
      *(float *)((int)this + 0x39c) = param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x80000;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c76a30 @ 00c76a30 ////

undefined4 __thiscall FUN_00c76a30(void *this,int param_1,float param_2)

{
  if ((1000.0 <= param_2) && (param_2 <= 20000.0)) {
    if (((*(float *)(param_1 * 0x70 + 0x154 + (int)this) != param_2) &&
        (*(float *)(param_1 * 0x70 + 0x154 + (int)this) = param_2,
        *(int *)((int)this + 4) == param_1)) &&
       ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
      *(float *)((int)this + 0x3a0) = param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x100000;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c76ad0 @ 00c76ad0 ////

undefined4 __thiscall FUN_00c76ad0(void *this,int param_1,float param_2)

{
  if ((20.0 <= param_2) && (param_2 <= 1000.0)) {
    if (((*(float *)(param_1 * 0x70 + 0x158 + (int)this) != param_2) &&
        (*(float *)(param_1 * 0x70 + 0x158 + (int)this) = param_2,
        *(int *)((int)this + 4) == param_1)) &&
       ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
      *(float *)((int)this + 0x3a4) = param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x200000;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c76b70 @ 00c76b70 ////

undefined4 __thiscall FUN_00c76b70(void *this,int param_1,float param_2)

{
  if ((0.0 <= param_2) && (param_2 <= 10.0)) {
    if (((*(float *)(param_1 * 0x70 + 0x15c + (int)this) != param_2) &&
        (*(float *)(param_1 * 0x70 + 0x15c + (int)this) = param_2,
        *(int *)((int)this + 4) == param_1)) &&
       ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
      *(float *)((int)this + 0x3a8) = param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x400000;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c76c10 @ 00c76c10 ////

undefined4 __thiscall FUN_00c76c10(void *this,int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 * 0x70 + 0x160 + (int)this);
  uVar2 = *puVar1;
  if (param_2 != (uVar2 & 1)) {
    if (param_2 == 0) {
      *puVar1 = uVar2 & 0xfffffffe;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) & 0xfffffffe;
    }
    else {
      *puVar1 = uVar2 | 1;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) | 1;
    }
    *(uint *)((int)this + 0x3ac) = uVar2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x800000;
  }
  return 0;
}


//// FUNCTION FUN_00c76ca0 @ 00c76ca0 ////

undefined4 __thiscall FUN_00c76ca0(void *this,int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 * 0x70 + 0x160 + (int)this);
  uVar2 = *puVar1;
  if (param_2 != (uVar2 >> 1 & 1)) {
    if (param_2 == 0) {
      *puVar1 = uVar2 & 0xfffffffd;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) & 0xfffffffd;
    }
    else {
      *puVar1 = uVar2 | 2;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) | 2;
    }
    *(uint *)((int)this + 0x3ac) = uVar2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x800000;
  }
  return 0;
}


//// FUNCTION FUN_00c76d30 @ 00c76d30 ////

undefined4 __thiscall FUN_00c76d30(void *this,int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 * 0x70 + 0x160 + (int)this);
  uVar2 = *puVar1;
  if (param_2 != (uVar2 >> 2 & 1)) {
    if (param_2 == 0) {
      *puVar1 = uVar2 & 0xfffffffb;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) & 0xfffffffb;
    }
    else {
      *puVar1 = uVar2 | 4;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) | 4;
    }
    *(uint *)((int)this + 0x3ac) = uVar2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x800000;
  }
  return 0;
}


//// FUNCTION FUN_00c76dc0 @ 00c76dc0 ////

undefined4 __thiscall FUN_00c76dc0(void *this,int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 * 0x70 + 0x160 + (int)this);
  uVar2 = *puVar1;
  if (param_2 != (uVar2 >> 3 & 1)) {
    if (param_2 == 0) {
      *puVar1 = uVar2 & 0xfffffff7;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) & 0xfffffff7;
    }
    else {
      *puVar1 = uVar2 | 8;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) | 8;
    }
    *(uint *)((int)this + 0x3ac) = uVar2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x800000;
  }
  return 0;
}


//// FUNCTION FUN_00c76e50 @ 00c76e50 ////

undefined4 __thiscall FUN_00c76e50(void *this,int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 * 0x70 + 0x160 + (int)this);
  uVar2 = *puVar1;
  if (param_2 != (uVar2 >> 4 & 1)) {
    if (param_2 == 0) {
      *puVar1 = uVar2 & 0xffffffef;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) & 0xffffffef;
    }
    else {
      *puVar1 = uVar2 | 0x10;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) | 0x10;
    }
    *(uint *)((int)this + 0x3ac) = uVar2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x800000;
  }
  return 0;
}


//// FUNCTION FUN_00c76ee0 @ 00c76ee0 ////

undefined4 __thiscall FUN_00c76ee0(void *this,int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 * 0x70 + 0x160 + (int)this);
  uVar2 = *puVar1;
  if (param_2 != (uVar2 >> 5 & 1)) {
    if (param_2 == 0) {
      *puVar1 = uVar2 & 0xffffffdf;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) & 0xffffffdf;
    }
    else {
      *puVar1 = uVar2 | 0x20;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) | 0x20;
    }
    *(uint *)((int)this + 0x3ac) = uVar2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x800000;
  }
  return 0;
}


//// FUNCTION FUN_00c76f70 @ 00c76f70 ////

undefined4 __thiscall FUN_00c76f70(void *this,int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 * 0x70 + 0x160 + (int)this);
  uVar2 = *puVar1;
  if (param_2 != (uVar2 >> 6 & 1)) {
    if (param_2 == 0) {
      *puVar1 = uVar2 & 0xffffffbf;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) & 0xffffffbf;
    }
    else {
      *puVar1 = uVar2 | 0x40;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) | 0x40;
    }
    *(uint *)((int)this + 0x3ac) = uVar2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x800000;
  }
  return 0;
}


//// FUNCTION FUN_00c77000 @ 00c77000 ////

undefined4 __thiscall FUN_00c77000(void *this,int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 * 0x70 + 0x160 + (int)this);
  uVar2 = *puVar1;
  if (param_2 != (uVar2 >> 7 & 1)) {
    if (param_2 == 0) {
      *puVar1 = uVar2 & 0xffffff7f;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) & 0xffffff7f;
    }
    else {
      *puVar1 = uVar2 | 0x80;
      if (*(int *)((int)this + 4) != param_1) {
        return 0;
      }
      if ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)((int)this + 0x3ac) | 0x80;
    }
    *(uint *)((int)this + 0x3ac) = uVar2;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x800000;
  }
  return 0;
}


//// FUNCTION FUN_00c770a0 @ 00c770a0 ////

undefined4 __thiscall
FUN_00c770a0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  iVar2 = 4;
  iVar3 = 0;
  bVar8 = true;
  piVar6 = &DAT_00dad6c0;
  piVar4 = (int *)register0x00000010;
  do {
    piVar4 = piVar4 + 1;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *piVar4 == *piVar6;
    piVar6 = piVar6 + 1;
  } while (bVar8);
  if (!bVar8) {
    iVar2 = 4;
    bVar8 = true;
    piVar6 = &DAT_00dad6d0;
    piVar4 = (int *)register0x00000010;
    do {
      piVar4 = piVar4 + 1;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar8 = *piVar4 == *piVar6;
      piVar6 = piVar6 + 1;
    } while (bVar8);
    if (bVar8) {
      iVar3 = 1;
    }
    else {
      iVar2 = 4;
      bVar8 = true;
      piVar6 = &DAT_00dad6e0;
      piVar4 = (int *)register0x00000010;
      do {
        piVar4 = piVar4 + 1;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *piVar4 == *piVar6;
        piVar6 = piVar6 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar3 = 2;
      }
      else {
        iVar2 = 4;
        bVar8 = true;
        piVar6 = &DAT_00dad6f0;
        piVar4 = (int *)register0x00000010;
        do {
          piVar4 = piVar4 + 1;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar8 = *piVar4 == *piVar6;
          piVar6 = piVar6 + 1;
        } while (bVar8);
        if (bVar8) {
          iVar3 = 3;
        }
        else {
          iVar2 = 4;
          bVar8 = true;
          piVar6 = &DAT_00dad690;
          piVar4 = (int *)register0x00000010;
          do {
            piVar4 = piVar4 + 1;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar8 = *piVar4 == *piVar6;
            piVar6 = piVar6 + 1;
          } while (bVar8);
          if (!bVar8) {
            *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
            return 0xfffffffd;
          }
          iVar3 = -1;
        }
      }
    }
  }
  iVar2 = 4;
  bVar8 = true;
  piVar4 = (int *)((int)this + 0x2b4);
  do {
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *piVar4 == *(int *)register0x00000010;
    piVar4 = piVar4 + 1;
  } while (bVar8);
  if (!bVar8) {
    uVar1 = *(uint *)((int)this + 0x3bc);
    *(int *)((int)this + 0x2b4) = param_1;
    *(undefined4 *)((int)this + 0x2b8) = param_2;
    *(undefined4 *)((int)this + 700) = param_3;
    *(undefined4 *)((int)this + 0x2c0) = param_4;
    *(int *)((int)this + 4) = iVar3;
    *(uint *)((int)this + 0x3bc) = uVar1 | 0x4000000;
    if (iVar3 != -1) {
      iVar2 = 4;
      bVar8 = true;
      piVar4 = (int *)((int)this + iVar3 * 0x1c + 0x84);
      piVar6 = &DAT_00dad710;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *piVar4 == *piVar6;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar8);
      if ((bVar8) && ((*(byte *)((int)this + iVar3 * 0x1c + 0x9c) & 1) != 0)) {
        puVar5 = (undefined4 *)(iVar3 * 0x70 + 0xf4 + (int)this);
        puVar7 = (undefined4 *)((int)this + 0x340);
        for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar2 = *(int *)((int)this + 0x34c) + *(int *)((int)this + iVar3 * 0x1c + 0x94);
        *(int *)((int)this + 0x34c) = iVar2;
        if (iVar2 < -10000) {
          *(undefined4 *)((int)this + 0x34c) = 0xffffd8f0;
        }
        *(uint *)((int)this + 0x3bc) = uVar1 | 0x5000000;
        return 0;
      }
    }
    *(undefined4 *)((int)this + 0x34c) = 0xffffd8f0;
    *(undefined4 *)((int)this + 0x39c) = *(undefined4 *)((int)this + 0x2c8);
    *(undefined4 *)((int)this + 0x3a0) = *(undefined4 *)((int)this + 0x2cc);
    *(uint *)((int)this + 0x3bc) = uVar1 | 0x4180008;
  }
  return 0;
}


//// FUNCTION FUN_00c77250 @ 00c77250 ////

undefined4 __thiscall FUN_00c77250(void *this,float param_1)

{
  if ((1.1754944e-38 <= param_1) && (param_1 <= 3.4028235e+38)) {
    if (param_1 != *(float *)((int)this + 0x2c4)) {
      *(float *)((int)this + 0x2c4) = param_1;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x2000000;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c772b0 @ 00c772b0 ////

undefined4 __thiscall FUN_00c772b0(void *this,float param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  if ((param_1 < -100.0) || (0.0 < param_1)) {
    *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  if (param_1 != *(float *)((int)this + 0x2c8)) {
    *(float *)((int)this + 0x2c8) = param_1;
    iVar1 = *(int *)((int)this + 4);
    if (iVar1 != -1) {
      bVar5 = true;
      iVar2 = 4;
      piVar3 = (int *)((int)this + iVar1 * 0x1c + 0x84);
      piVar4 = &DAT_00dad710;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if ((bVar5) && ((*(byte *)((int)this + iVar1 * 0x1c + 0x9c) & 1) != 0)) {
        return 0;
      }
    }
    *(float *)((int)this + 0x39c) = param_1;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x80000;
  }
  return 0;
}


//// FUNCTION FUN_00c77360 @ 00c77360 ////

undefined4 __thiscall FUN_00c77360(void *this,float param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  if ((param_1 < 1000.0) || (20000.0 < param_1)) {
    *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  if (param_1 != *(float *)((int)this + 0x2cc)) {
    *(float *)((int)this + 0x2cc) = param_1;
    iVar1 = *(int *)((int)this + 4);
    if (iVar1 != -1) {
      bVar5 = true;
      iVar2 = 4;
      piVar3 = (int *)((int)this + iVar1 * 0x1c + 0x84);
      piVar4 = &DAT_00dad710;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if ((bVar5) && ((*(byte *)((int)this + iVar1 * 0x1c + 0x9c) & 1) != 0)) {
        return 0;
      }
    }
    *(float *)((int)this + 0x3a0) = param_1;
    *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x100000;
  }
  return 0;
}


//// FUNCTION FUN_00c77430 @ 00c77430 ////

undefined4 __thiscall FUN_00c77430(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((((-0x2711 < iVar1) && (iVar1 < 1)) && (0.0 <= (float)param_1[1])) &&
     ((float)param_1[1] <= 1.0)) {
    if ((iVar1 != *(int *)((int)this + 0x28)) || ((float)param_1[1] != *(float *)((int)this + 0x2c))
       ) {
      *(int *)((int)this + 0x218) = iVar1;
      *(int *)((int)this + 0x28) = iVar1;
      iVar1 = param_1[1];
      *(int *)((int)this + 0x21c) = iVar1;
      *(int *)((int)this + 0x2c) = iVar1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 1;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c774c0 @ 00c774c0 ////

undefined4 __thiscall FUN_00c774c0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((((-0x2711 < iVar1) && (iVar1 < 1)) && (0.0 <= (float)param_1[1])) &&
     ((((float)param_1[1] <= 1.0 && (0.0 <= (float)param_1[2])) &&
      (((float)param_1[2] <= 10.0 && ((0.0 <= (float)param_1[3] && ((float)param_1[3] <= 10.0)))))))
     ) {
    if ((((iVar1 != *(int *)((int)this + 0x30)) ||
         ((float)param_1[1] != *(float *)((int)this + 0x34))) ||
        ((float)param_1[2] != *(float *)((int)this + 0x38))) ||
       ((float)param_1[3] != *(float *)((int)this + 0x3c))) {
      *(int *)((int)this + 0x30) = iVar1;
      *(int *)((int)this + 0x34) = param_1[1];
      *(int *)((int)this + 0x38) = param_1[2];
      *(int *)((int)this + 0x3c) = param_1[3];
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c775c0 @ 00c775c0 ////

undefined4 __thiscall FUN_00c775c0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((((-0x2711 < iVar1) && (iVar1 < 1)) && (0.0 <= (float)param_1[1])) &&
     ((float)param_1[1] <= 1.0)) {
    if ((iVar1 != *(int *)((int)this + 0x40)) || ((float)param_1[1] != *(float *)((int)this + 0x44))
       ) {
      *(int *)((int)this + 0x40) = iVar1;
      *(int *)((int)this + 0x44) = param_1[1];
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77640 @ 00c77640 ////

undefined4 __thiscall FUN_00c77640(void *this,int param_1)

{
  if ((-0x2711 < param_1) && (param_1 < 0x3e9)) {
    if (param_1 != *(int *)((int)this + 0x18)) {
      *(int *)((int)this + 0x208) = param_1;
      *(int *)((int)this + 0x18) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 8;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77680 @ 00c77680 ////

undefined4 __thiscall FUN_00c77680(void *this,int param_1)

{
  if ((-0x2711 < param_1) && (param_1 < 1)) {
    if (param_1 != *(int *)((int)this + 0x1c)) {
      *(int *)((int)this + 0x20c) = param_1;
      *(int *)((int)this + 0x1c) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x10;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c776c0 @ 00c776c0 ////

undefined4 __thiscall FUN_00c776c0(void *this,int param_1)

{
  if ((-0x2711 < param_1) && (param_1 < 0x3e9)) {
    if (param_1 != *(int *)((int)this + 0x20)) {
      *(int *)((int)this + 0x20) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77700 @ 00c77700 ////

undefined4 __thiscall FUN_00c77700(void *this,int param_1)

{
  if ((-0x2711 < param_1) && (param_1 < 1)) {
    if (param_1 != *(int *)((int)this + 0x24)) {
      *(int *)((int)this + 0x24) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77740 @ 00c77740 ////

undefined4 __thiscall FUN_00c77740(void *this,int param_1)

{
  if ((-0x2711 < param_1) && (param_1 < 1)) {
    if (param_1 != *(int *)((int)this + 0x28)) {
      *(int *)((int)this + 0x218) = param_1;
      *(int *)((int)this + 0x28) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x80;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77780 @ 00c77780 ////

undefined4 __thiscall FUN_00c77780(void *this,float param_1)

{
  if ((0.0 <= param_1) && (param_1 <= 1.0)) {
    if (param_1 != *(float *)((int)this + 0x2c)) {
      *(float *)((int)this + 0x21c) = param_1;
      *(float *)((int)this + 0x2c) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x100;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c777f0 @ 00c777f0 ////

undefined4 __thiscall FUN_00c777f0(void *this,int param_1)

{
  if ((-0x2711 < param_1) && (param_1 < 1)) {
    if (param_1 != *(int *)((int)this + 0x30)) {
      *(int *)((int)this + 0x30) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77830 @ 00c77830 ////

undefined4 __thiscall FUN_00c77830(void *this,float param_1)

{
  if ((0.0 <= param_1) && (param_1 <= 1.0)) {
    if (param_1 != *(float *)((int)this + 0x34)) {
      *(float *)((int)this + 0x34) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77890 @ 00c77890 ////

undefined4 __thiscall FUN_00c77890(void *this,float param_1)

{
  if ((0.0 <= param_1) && (param_1 <= 10.0)) {
    if (param_1 != *(float *)((int)this + 0x38)) {
      *(float *)((int)this + 0x38) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c778f0 @ 00c778f0 ////

undefined4 __thiscall FUN_00c778f0(void *this,float param_1)

{
  if ((0.0 <= param_1) && (param_1 <= 10.0)) {
    if (param_1 != *(float *)((int)this + 0x3c)) {
      *(float *)((int)this + 0x3c) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77950 @ 00c77950 ////

undefined4 __thiscall FUN_00c77950(void *this,int param_1)

{
  if ((-0x2711 < param_1) && (param_1 < 1)) {
    if (param_1 != *(int *)((int)this + 0x40)) {
      *(int *)((int)this + 0x40) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77990 @ 00c77990 ////

undefined4 __thiscall FUN_00c77990(void *this,float param_1)

{
  if ((0.0 <= param_1) && (param_1 <= 1.0)) {
    if (param_1 != *(float *)((int)this + 0x44)) {
      *(float *)((int)this + 0x44) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c779f0 @ 00c779f0 ////

undefined4 __thiscall FUN_00c779f0(void *this,int param_1)

{
  if ((-0x2711 < param_1) && (param_1 < 1)) {
    if (param_1 != *(int *)((int)this + 0x48)) {
      *(int *)((int)this + 0x238) = param_1;
      *(int *)((int)this + 0x48) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x8000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77a30 @ 00c77a30 ////

undefined4 __thiscall FUN_00c77a30(void *this,float param_1)

{
  if ((0.0 <= param_1) && (param_1 <= 10.0)) {
    if (param_1 != *(float *)((int)this + 0x4c)) {
      *(float *)((int)this + 0x23c) = param_1;
      *(float *)((int)this + 0x4c) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x10000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77aa0 @ 00c77aa0 ////

undefined4 __thiscall FUN_00c77aa0(void *this,float param_1)

{
  if ((0.0 <= param_1) && (param_1 <= 10.0)) {
    if (param_1 != *(float *)((int)this + 0x50)) {
      *(float *)((int)this + 0x240) = param_1;
      *(float *)((int)this + 0x50) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x20000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77b10 @ 00c77b10 ////

undefined4 __thiscall FUN_00c77b10(void *this,float param_1)

{
  if ((0.0 <= param_1) && (param_1 <= 10.0)) {
    if (param_1 != *(float *)((int)this + 0x54)) {
      *(float *)((int)this + 0x244) = param_1;
      *(float *)((int)this + 0x54) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x40000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77b80 @ 00c77b80 ////

undefined4 __thiscall FUN_00c77b80(void *this,float param_1)

{
  if ((0.0 <= param_1) && (param_1 <= 10.0)) {
    if (param_1 != *(float *)((int)this + 0x58)) {
      *(float *)((int)this + 0x248) = param_1;
      *(float *)((int)this + 0x58) = param_1;
      *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x80000;
    }
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c77bf0 @ 00c77bf0 ////

undefined4 __thiscall FUN_00c77bf0(void *this,uint param_1)

{
  if ((param_1 & 0xfffffff8) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  if (param_1 != *(uint *)((int)this + 0x5c)) {
    *(uint *)((int)this + 0x24c) = param_1;
    *(uint *)((int)this + 0x5c) = param_1;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x100000;
  }
  return 0;
}


//// FUNCTION FUN_00c77c30 @ 00c77c30 ////

undefined4 __thiscall FUN_00c77c30(void *this,int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  
  uVar5 = param_2 / 0x18;
  if (uVar5 == 0) {
    *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  uVar4 = 0;
  piVar1 = param_1;
  if (uVar5 != 0) {
    do {
      iVar2 = 4;
      bVar8 = true;
      piVar6 = piVar1;
      piVar7 = &DAT_00dad6c0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *piVar6 == *piVar7;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar2 = 4;
        bVar8 = true;
        piVar6 = piVar1;
        piVar7 = &DAT_00dad6d0;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar8 = *piVar6 == *piVar7;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        } while (bVar8);
        if (!bVar8) {
          iVar2 = 4;
          bVar8 = true;
          piVar6 = piVar1;
          piVar7 = &DAT_00dad6e0;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar8 = *piVar6 == *piVar7;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          } while (bVar8);
          if (!bVar8) {
            iVar2 = 4;
            bVar8 = true;
            piVar6 = piVar1;
            piVar7 = &DAT_00dad6f0;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar8 = *piVar6 == *piVar7;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            } while (bVar8);
            if (!bVar8) {
              *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
              return 0xfffffffd;
            }
          }
        }
      }
      if ((piVar1[4] < -10000) || (0 < piVar1[4])) goto LAB_00c77d43;
      if ((piVar1[5] < -10000) || (0 < piVar1[5])) {
        *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
        return 0xfffffffd;
      }
      uVar4 = uVar4 + 1;
      piVar1 = piVar1 + 6;
    } while (uVar4 < uVar5);
  }
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = 4;
      iVar2 = 0;
      bVar8 = true;
      piVar1 = param_1;
      piVar6 = &DAT_00dad6c0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *piVar1 == *piVar6;
        piVar1 = piVar1 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar2 = 4;
        bVar8 = true;
        piVar1 = param_1;
        piVar6 = &DAT_00dad6d0;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar8 = *piVar1 == *piVar6;
          piVar1 = piVar1 + 1;
          piVar6 = piVar6 + 1;
        } while (bVar8);
        if (bVar8) {
          iVar2 = 1;
        }
        else {
          iVar2 = 4;
          bVar8 = true;
          piVar1 = param_1;
          piVar6 = &DAT_00dad6e0;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar8 = *piVar1 == *piVar6;
            piVar1 = piVar1 + 1;
            piVar6 = piVar6 + 1;
          } while (bVar8);
          if (bVar8) {
            iVar2 = 2;
          }
          else {
            iVar2 = 4;
            bVar8 = true;
            piVar1 = param_1;
            piVar6 = &DAT_00dad6f0;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar8 = *piVar1 == *piVar6;
              piVar1 = piVar1 + 1;
              piVar6 = piVar6 + 1;
            } while (bVar8);
            if (!bVar8) {
LAB_00c77d43:
              *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
              return 0xfffffffd;
            }
            iVar2 = 3;
          }
        }
      }
      *(int *)((int)this + iVar2 * 0x18 + 0x70) = param_1[4];
      *(int *)((int)this + iVar2 * 0x18 + 0x74) = param_1[5];
      if (iVar2 == *(int *)(*(int *)((int)this + 0x14) + 4)) {
        *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
      }
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 6;
    } while (uVar4 < uVar5);
  }
  return 0;
}


//// FUNCTION FUN_00c77df0 @ 00c77df0 ////

undefined4 __thiscall FUN_00c77df0(void *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int *piVar7;
  int *piVar8;
  float *pfVar9;
  int *piVar10;
  bool bVar11;
  
  uVar3 = param_2 / 0x30;
  param_2 = 0;
  if (uVar3 != 0) {
    pfVar4 = (float *)(param_1 + 0x1c);
    do {
      pfVar6 = pfVar4 + -7;
      iVar2 = 4;
      bVar11 = true;
      pfVar5 = pfVar6;
      pfVar9 = (float *)&DAT_00dad6c0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar11 = *pfVar5 == *pfVar9;
        pfVar5 = pfVar5 + 1;
        pfVar9 = pfVar9 + 1;
      } while (bVar11);
      if (!bVar11) {
        iVar2 = 4;
        bVar11 = true;
        pfVar5 = pfVar6;
        pfVar9 = (float *)&DAT_00dad6d0;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar11 = *pfVar5 == *pfVar9;
          pfVar5 = pfVar5 + 1;
          pfVar9 = pfVar9 + 1;
        } while (bVar11);
        if (!bVar11) {
          iVar2 = 4;
          bVar11 = true;
          pfVar5 = pfVar6;
          pfVar9 = (float *)&DAT_00dad6e0;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar11 = *pfVar5 == *pfVar9;
            pfVar5 = pfVar5 + 1;
            pfVar9 = pfVar9 + 1;
          } while (bVar11);
          if (!bVar11) {
            iVar2 = 4;
            bVar11 = true;
            pfVar5 = (float *)&DAT_00dad6f0;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar11 = *pfVar6 == *pfVar5;
              pfVar6 = pfVar6 + 1;
              pfVar5 = pfVar5 + 1;
            } while (bVar11);
            if (!bVar11) goto LAB_00c77fc6;
          }
        }
      }
      if (((int)pfVar4[-1] < -10000) || (0 < (int)pfVar4[-1])) goto LAB_00c780b0;
      if ((*pfVar4 < 0.0) || (1.0 < *pfVar4)) {
LAB_00c77fac:
        *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
        return 0xfffffffd;
      }
      if ((pfVar4[1] < 0.0) || (10.0 < pfVar4[1])) {
LAB_00c77fc6:
        *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
        return 0xfffffffd;
      }
      if ((pfVar4[2] < 0.0) || (10.0 < pfVar4[2])) goto LAB_00c780b0;
      if (((int)pfVar4[3] < -10000) || (0 < (int)pfVar4[3])) goto LAB_00c77fac;
      if ((pfVar4[4] < 0.0) || (1.0 < pfVar4[4])) goto LAB_00c77fc6;
      if (((int)pfVar4[-3] < -10000) || (0 < (int)pfVar4[-3])) goto LAB_00c780b0;
      if (((int)pfVar4[-2] < -10000) || (0 < (int)pfVar4[-2])) goto LAB_00c77fac;
      param_2 = param_2 + 1;
      pfVar4 = pfVar4 + 0xc;
    } while (param_2 < uVar3);
  }
  param_2 = 0;
  if (uVar3 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x1c);
    do {
      piVar8 = puVar1 + -7;
      iVar2 = 4;
      bVar11 = true;
      piVar7 = piVar8;
      piVar10 = &DAT_00dad6c0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar11 = *piVar7 == *piVar10;
        piVar7 = piVar7 + 1;
        piVar10 = piVar10 + 1;
      } while (bVar11);
      if (bVar11) {
        iVar2 = 0;
      }
      else {
        iVar2 = 4;
        bVar11 = true;
        piVar7 = piVar8;
        piVar10 = &DAT_00dad6d0;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar11 = *piVar7 == *piVar10;
          piVar7 = piVar7 + 1;
          piVar10 = piVar10 + 1;
        } while (bVar11);
        if (bVar11) {
          iVar2 = 1;
        }
        else {
          iVar2 = 4;
          bVar11 = true;
          piVar7 = piVar8;
          piVar10 = &DAT_00dad6e0;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar11 = *piVar7 == *piVar10;
            piVar7 = piVar7 + 1;
            piVar10 = piVar10 + 1;
          } while (bVar11);
          if (bVar11) {
            iVar2 = 2;
          }
          else {
            iVar2 = 4;
            bVar11 = true;
            piVar7 = &DAT_00dad6f0;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar11 = *piVar8 == *piVar7;
              piVar8 = piVar8 + 1;
              piVar7 = piVar7 + 1;
            } while (bVar11);
            if (!bVar11) {
LAB_00c780b0:
              *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
              return 0xfffffffd;
            }
            iVar2 = 3;
          }
        }
      }
      *(undefined4 *)((int)this + iVar2 * 0x20 + 0xd0) = puVar1[-1];
      *(undefined4 *)((int)this + iVar2 * 0x20 + 0xd4) = *puVar1;
      *(undefined4 *)((int)this + iVar2 * 0x20 + 0xd8) = puVar1[1];
      *(undefined4 *)((int)this + iVar2 * 0x20 + 0xdc) = puVar1[2];
      *(undefined4 *)((int)this + (iVar2 * 3 + 0x2a) * 8) = puVar1[3];
      *(undefined4 *)((int)this + iVar2 * 0x18 + 0x154) = puVar1[4];
      *(undefined4 *)((int)this + iVar2 * 0x18 + 0x70) = puVar1[-3];
      *(undefined4 *)((int)this + iVar2 * 0x18 + 0x74) = puVar1[-2];
      if (iVar2 == *(int *)(*(int *)((int)this + 0x14) + 4)) {
        *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
      }
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 0xc;
    } while (param_2 < uVar3);
  }
  return 0;
}


//// FUNCTION FUN_00c780d0 @ 00c780d0 ////

undefined4 __thiscall FUN_00c780d0(void *this,int *param_1,uint param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  float *pfVar9;
  int *piVar10;
  bool bVar11;
  
  uVar5 = param_2 >> 5;
  if (uVar5 == 0) {
    *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  uVar4 = 0;
  if (uVar5 != 0) {
    pfVar2 = (float *)(param_1 + 5);
    do {
      pfVar7 = pfVar2 + -5;
      iVar1 = 4;
      bVar11 = true;
      pfVar6 = pfVar7;
      pfVar9 = (float *)&DAT_00dad6c0;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar11 = *pfVar6 == *pfVar9;
        pfVar6 = pfVar6 + 1;
        pfVar9 = pfVar9 + 1;
      } while (bVar11);
      if (!bVar11) {
        iVar1 = 4;
        bVar11 = true;
        pfVar6 = pfVar7;
        pfVar9 = (float *)&DAT_00dad6d0;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar11 = *pfVar6 == *pfVar9;
          pfVar6 = pfVar6 + 1;
          pfVar9 = pfVar9 + 1;
        } while (bVar11);
        if (!bVar11) {
          iVar1 = 4;
          bVar11 = true;
          pfVar6 = pfVar7;
          pfVar9 = (float *)&DAT_00dad6e0;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar11 = *pfVar6 == *pfVar9;
            pfVar6 = pfVar6 + 1;
            pfVar9 = pfVar9 + 1;
          } while (bVar11);
          if (!bVar11) {
            iVar1 = 4;
            bVar11 = true;
            pfVar6 = (float *)&DAT_00dad6f0;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar11 = *pfVar7 == *pfVar6;
              pfVar7 = pfVar7 + 1;
              pfVar6 = pfVar6 + 1;
            } while (bVar11);
            if (!bVar11) goto LAB_00c78218;
          }
        }
      }
      if (((int)pfVar2[-1] < -10000) || (0 < (int)pfVar2[-1])) {
LAB_00c78236:
        *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
        return 0xfffffffd;
      }
      if ((*pfVar2 < 0.0) || (1.0 < *pfVar2)) {
LAB_00c78218:
        *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
        return 0xfffffffd;
      }
      if ((pfVar2[1] < 0.0) || (10.0 < pfVar2[1])) goto LAB_00c78254;
      if ((pfVar2[2] < 0.0) || (10.0 < pfVar2[2])) goto LAB_00c78236;
      uVar4 = uVar4 + 1;
      pfVar2 = pfVar2 + 8;
    } while (uVar4 < uVar5);
  }
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      iVar1 = 4;
      iVar3 = 0;
      bVar11 = true;
      piVar8 = param_1;
      piVar10 = &DAT_00dad6c0;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar11 = *piVar8 == *piVar10;
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
      } while (bVar11);
      if (!bVar11) {
        iVar1 = 4;
        bVar11 = true;
        piVar8 = param_1;
        piVar10 = &DAT_00dad6d0;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar11 = *piVar8 == *piVar10;
          piVar8 = piVar8 + 1;
          piVar10 = piVar10 + 1;
        } while (bVar11);
        if (bVar11) {
          iVar3 = 1;
        }
        else {
          iVar1 = 4;
          bVar11 = true;
          piVar8 = param_1;
          piVar10 = &DAT_00dad6e0;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar11 = *piVar8 == *piVar10;
            piVar8 = piVar8 + 1;
            piVar10 = piVar10 + 1;
          } while (bVar11);
          if (bVar11) {
            iVar3 = 2;
          }
          else {
            iVar1 = 4;
            bVar11 = true;
            piVar8 = param_1;
            piVar10 = &DAT_00dad6f0;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar11 = *piVar8 == *piVar10;
              piVar8 = piVar8 + 1;
              piVar10 = piVar10 + 1;
            } while (bVar11);
            if (!bVar11) {
LAB_00c78254:
              *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
              return 0xfffffffd;
            }
            iVar3 = 3;
          }
        }
      }
      *(int *)((int)this + iVar3 * 0x20 + 0xd0) = param_1[4];
      *(int *)((int)this + iVar3 * 0x20 + 0xd4) = param_1[5];
      *(int *)((int)this + iVar3 * 0x20 + 0xd8) = param_1[6];
      *(int *)((int)this + iVar3 * 0x20 + 0xdc) = param_1[7];
      if (iVar3 == *(int *)(*(int *)((int)this + 0x14) + 4)) {
        *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
      }
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 8;
    } while (uVar4 < uVar5);
  }
  return 0;
}


//// FUNCTION FUN_00c78310 @ 00c78310 ////

undefined4 __thiscall FUN_00c78310(void *this,int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  
  uVar5 = param_2 / 0x18;
  if (uVar5 == 0) {
    *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  uVar3 = 0;
  piVar4 = param_1;
  if (uVar5 != 0) {
    do {
      iVar1 = 4;
      bVar8 = true;
      piVar6 = piVar4;
      piVar7 = &DAT_00dad6c0;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar8 = *piVar6 == *piVar7;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar1 = 4;
        bVar8 = true;
        piVar6 = piVar4;
        piVar7 = &DAT_00dad6d0;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar8 = *piVar6 == *piVar7;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        } while (bVar8);
        if (!bVar8) {
          iVar1 = 4;
          bVar8 = true;
          piVar6 = piVar4;
          piVar7 = &DAT_00dad6e0;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar8 = *piVar6 == *piVar7;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          } while (bVar8);
          if (!bVar8) {
            iVar1 = 4;
            bVar8 = true;
            piVar6 = piVar4;
            piVar7 = &DAT_00dad6f0;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar8 = *piVar6 == *piVar7;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            } while (bVar8);
            if (!bVar8) goto LAB_00c78407;
          }
        }
      }
      if ((piVar4[4] < -10000) || (0 < piVar4[4])) {
        *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
        return 0xfffffffd;
      }
      if (((float)piVar4[5] < 0.0) || (1.0 < (float)piVar4[5])) {
        *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
        return 0xfffffffd;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 6;
    } while (uVar3 < uVar5);
  }
  uVar3 = 0;
  if (uVar5 != 0) {
    do {
      iVar2 = 4;
      iVar1 = 0;
      bVar8 = true;
      piVar4 = param_1;
      piVar6 = &DAT_00dad6c0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *piVar4 == *piVar6;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar1 = 4;
        bVar8 = true;
        piVar4 = param_1;
        piVar6 = &DAT_00dad6d0;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar8 = *piVar4 == *piVar6;
          piVar4 = piVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (bVar8);
        if (bVar8) {
          iVar1 = 1;
        }
        else {
          iVar1 = 4;
          bVar8 = true;
          piVar4 = param_1;
          piVar6 = &DAT_00dad6e0;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar8 = *piVar4 == *piVar6;
            piVar4 = piVar4 + 1;
            piVar6 = piVar6 + 1;
          } while (bVar8);
          if (bVar8) {
            iVar1 = 2;
          }
          else {
            iVar1 = 4;
            bVar8 = true;
            piVar4 = param_1;
            piVar6 = &DAT_00dad6f0;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar8 = *piVar4 == *piVar6;
              piVar4 = piVar4 + 1;
              piVar6 = piVar6 + 1;
            } while (bVar8);
            if (!bVar8) {
LAB_00c78407:
              *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
              return 0xfffffffd;
            }
            iVar1 = 3;
          }
        }
      }
      *(int *)((int)this + (iVar1 * 3 + 0x2a) * 8) = param_1[4];
      *(int *)((int)this + iVar1 * 0x18 + 0x154) = param_1[5];
      if (iVar1 == *(int *)(*(int *)((int)this + 0x14) + 4)) {
        *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 6;
    } while (uVar3 < uVar5);
  }
  return 0;
}


//// FUNCTION FUN_00c784f0 @ 00c784f0 ////

undefined4 __thiscall FUN_00c784f0(void *this,int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  
  uVar4 = param_2 >> 4;
  if (uVar4 == 0) {
    *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  param_2 = 0;
  piVar1 = param_1;
  if (uVar4 != 0) {
    do {
      iVar2 = 4;
      bVar6 = true;
      piVar3 = piVar1;
      piVar5 = &DAT_00dad6c0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *piVar3 == *piVar5;
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
      if (!bVar6) {
        iVar2 = 4;
        bVar6 = true;
        piVar3 = piVar1;
        piVar5 = &DAT_00dad6d0;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *piVar3 == *piVar5;
          piVar3 = piVar3 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (!bVar6) {
          iVar2 = 4;
          bVar6 = true;
          piVar3 = piVar1;
          piVar5 = &DAT_00dad6e0;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar6 = *piVar3 == *piVar5;
            piVar3 = piVar3 + 1;
            piVar5 = piVar5 + 1;
          } while (bVar6);
          if (!bVar6) {
            iVar2 = 4;
            bVar6 = true;
            piVar3 = piVar1;
            piVar5 = &DAT_00dad6f0;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar6 = *piVar3 == *piVar5;
              piVar3 = piVar3 + 1;
              piVar5 = piVar5 + 1;
            } while (bVar6);
            if (!bVar6) {
              iVar2 = 4;
              bVar6 = true;
              piVar3 = piVar1;
              piVar5 = &DAT_00dad6b0;
              do {
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
                bVar6 = *piVar3 == *piVar5;
                piVar3 = piVar3 + 1;
                piVar5 = piVar5 + 1;
              } while (bVar6);
              if (!bVar6) {
                iVar2 = 4;
                bVar6 = true;
                piVar3 = piVar1;
                piVar5 = &DAT_00dad690;
                do {
                  if (iVar2 == 0) break;
                  iVar2 = iVar2 + -1;
                  bVar6 = *piVar3 == *piVar5;
                  piVar3 = piVar3 + 1;
                  piVar5 = piVar5 + 1;
                } while (bVar6);
                if (!bVar6) {
                  *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
                  return 0xfffffffd;
                }
              }
            }
          }
        }
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 4;
    } while (param_2 < uVar4);
  }
  if (uVar4 == 1) {
    piVar1 = (int *)((int)this + 0x1a0);
    iVar2 = 4;
    bVar6 = true;
    piVar3 = piVar1;
    piVar5 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *piVar3 == *piVar5;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return 0;
    }
    *piVar1 = *param_1;
    *(int *)((int)this + 0x1a4) = param_1[1];
    *(int *)((int)this + 0x1a8) = param_1[2];
    piVar3 = param_1;
  }
  else {
    if (uVar4 != 2) {
      return 0;
    }
    iVar2 = 4;
    bVar6 = true;
    piVar1 = (int *)((int)this + 0x1a0);
    piVar3 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *piVar1 == *piVar3;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar6);
    if (bVar6) {
      iVar2 = 4;
      bVar6 = true;
      piVar1 = (int *)((int)this + 0x1b0);
      piVar3 = param_1 + 4;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *piVar1 == *piVar3;
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 1;
      } while (bVar6);
      if (bVar6) {
        return 0;
      }
    }
    *(int *)((int)this + 0x1a0) = *param_1;
    *(int *)((int)this + 0x1a4) = param_1[1];
    *(int *)((int)this + 0x1a8) = param_1[2];
    *(int *)((int)this + 0x1ac) = param_1[3];
    piVar3 = param_1 + 4;
    piVar1 = (int *)((int)this + 0x1b0);
    *piVar1 = *piVar3;
    *(int *)((int)this + 0x1b4) = param_1[5];
    *(int *)((int)this + 0x1b8) = param_1[6];
  }
  piVar1[3] = piVar3[3];
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400000;
  return 0;
}


//// FUNCTION FUN_00c78680 @ 00c78680 ////

undefined4 __fastcall FUN_00c78680(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  float local_14;
  float local_10;
  
  if ((*(uint *)(param_1 + 4) & 0x400000) == 0) goto LAB_00c78c3f;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar9 = 4;
  bVar12 = true;
  piVar10 = (int *)(param_1 + 0x1a0);
  piVar11 = (int *)(iVar1 + 0x2b4);
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    bVar12 = *piVar10 == *piVar11;
    piVar10 = piVar10 + 1;
    piVar11 = piVar11 + 1;
  } while (bVar12);
  if (bVar12) {
LAB_00c786f4:
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar9 = 4;
    bVar12 = true;
    piVar10 = (int *)(param_1 + 0x1a0);
    piVar11 = &DAT_00dad6b0;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar12 = *piVar10 == *piVar11;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    } while (bVar12);
    if (bVar12) goto LAB_00c786f4;
    iVar9 = 4;
    bVar12 = true;
    piVar10 = (int *)(param_1 + 0x1b0);
    piVar11 = (int *)(iVar1 + 0x2b4);
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar12 = *piVar10 == *piVar11;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    } while (bVar12);
    if (bVar12) goto LAB_00c786f4;
    iVar9 = 4;
    bVar12 = true;
    piVar10 = (int *)(param_1 + 0x1b0);
    piVar11 = &DAT_00dad6b0;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar12 = *piVar10 == *piVar11;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    } while (bVar12);
    if (bVar12) goto LAB_00c786f4;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (((*(char *)(param_1 + 0xc) == '\0') || (iVar9 = *(int *)(iVar1 + 4), iVar9 == -1)) ||
     ((*(byte *)(iVar9 * 0x1c + 0x9c + iVar1) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x210) = 0xffffd8f0;
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x70 + iVar9 * 0x18);
    if (iVar9 < -9999) {
      iVar9 = -10000;
    }
    *(int *)(param_1 + 0x210) = iVar9;
    iVar9 = *(int *)(param_1 + 0x74 + *(int *)(iVar1 + 4) * 0x18) + *(int *)(param_1 + 0x24);
    if (iVar9 < -9999) {
      iVar9 = -10000;
    }
    iVar8 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x214) = iVar9;
    iVar9 = *(int *)(iVar1 + 4) * 0x20;
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(iVar9 + 0xd0 + param_1);
      *(undefined4 *)(param_1 + 0x224) =
           *(undefined4 *)(*(int *)(iVar1 + 4) * 0x20 + 0xd4 + param_1);
      *(undefined4 *)(param_1 + 0x228) =
           *(undefined4 *)(*(int *)(iVar1 + 4) * 0x20 + 0xd8 + param_1);
      *(undefined4 *)(param_1 + 0x22c) =
           *(undefined4 *)(*(int *)(iVar1 + 4) * 0x20 + 0xdc + param_1);
    }
    else {
      iVar9 = *(int *)(iVar9 + 0xd0 + param_1);
      if (iVar9 == 0) {
        *(int *)(param_1 + 0x220) = iVar8;
        *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x3c);
      }
      else {
        iVar9 = iVar9 + iVar8;
        if (iVar9 < -9999) {
          iVar9 = -10000;
        }
        fVar3 = (float)iVar8;
        *(int *)(param_1 + 0x220) = iVar9;
        fVar2 = fVar3 * *(float *)(param_1 + 0x3c);
        iVar8 = *(int *)(iVar1 + 4) * 0x20 + param_1;
        fVar4 = (float)iVar9;
        if (((float)*(int *)(iVar8 + 0xd0) * *(float *)(iVar8 + 0xdc) + fVar2) / fVar4 <= 10.0) {
          iVar9 = *(int *)(iVar1 + 4) * 0x20;
          local_14 = ((float)*(int *)(iVar9 + 0xd0 + param_1) * *(float *)(iVar9 + param_1 + 0xdc) +
                     fVar2) / fVar4;
        }
        else {
          local_14 = 10.0;
        }
        fVar2 = fVar3 * *(float *)(param_1 + 0x38);
        *(float *)(param_1 + 0x22c) = local_14;
        iVar9 = *(int *)(iVar1 + 4) * 0x20;
        if (((float)*(int *)(iVar9 + 0xd0 + param_1) * *(float *)(iVar9 + param_1 + 0xd8) + fVar2) /
            fVar4 <= 10.0) {
          iVar9 = *(int *)(iVar1 + 4) * 0x20;
          local_10 = ((float)*(int *)(iVar9 + 0xd0 + param_1) * *(float *)(iVar9 + param_1 + 0xd8) +
                     fVar2) / fVar4;
        }
        else {
          local_10 = 10.0;
        }
        *(float *)(param_1 + 0x228) = local_10;
        fVar2 = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x3c);
        fVar5 = (*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x3c)) - 1.0;
        if (fVar2 <= fVar5) {
          fVar2 = fVar5;
        }
        iVar9 = *(int *)(iVar1 + 4) * 0x20;
        iVar8 = iVar9 + param_1;
        if (*(float *)(iVar9 + 0xd4 + param_1) * *(float *)(iVar8 + 0xdc) <=
            (*(float *)(iVar8 + 0xd4) + *(float *)(iVar8 + 0xdc)) - 1.0) {
          iVar9 = *(int *)(iVar1 + 4) * 0x20;
          fVar5 = (*(float *)(iVar9 + 0xdc + param_1) + *(float *)(iVar9 + param_1 + 0xd4)) - 1.0;
        }
        else {
          iVar9 = *(int *)(iVar1 + 4) * 0x20;
          fVar5 = *(float *)(iVar9 + 0xdc + param_1) * *(float *)(iVar9 + param_1 + 0xd4);
        }
        fVar7 = (float)*(int *)(*(int *)(iVar1 + 4) * 0x20 + 0xd0 + param_1);
        fVar2 = (fVar7 * fVar5 + fVar3 * fVar2) / fVar4;
        fVar5 = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x38);
        fVar6 = (*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38)) - 1.0;
        if (fVar5 <= fVar6) {
          fVar5 = fVar6;
        }
        iVar9 = *(int *)(iVar1 + 4) * 0x20;
        iVar8 = iVar9 + param_1;
        if (*(float *)(iVar9 + 0xd8 + param_1) * *(float *)(iVar8 + 0xd4) <=
            (*(float *)(iVar8 + 0xd8) + *(float *)(iVar8 + 0xd4)) - 1.0) {
          iVar9 = *(int *)(iVar1 + 4) * 0x20;
          fVar6 = (*(float *)(iVar9 + 0xd8 + param_1) + *(float *)(iVar9 + param_1 + 0xd4)) - 1.0;
        }
        else {
          iVar9 = *(int *)(iVar1 + 4) * 0x20;
          fVar6 = *(float *)(iVar9 + 0xd8 + param_1) * *(float *)(iVar9 + param_1 + 0xd4);
        }
        fVar4 = (fVar3 * fVar5 + fVar7 * fVar6) / fVar4;
        if ((local_14 == 0.0) || (local_10 == 0.0)) {
          *(undefined4 *)(param_1 + 0x224) = 0;
        }
        else {
          fVar3 = fVar2 / local_14;
          if (1.0 < fVar3) {
            fVar3 = 1.0;
          }
          *(float *)(param_1 + 0x224) = fVar3;
          local_14 = (fVar2 + 1.0) - local_14;
          if (local_14 <= fVar3) {
            fVar3 = local_14;
          }
          *(float *)(param_1 + 0x224) = fVar3;
          fVar2 = fVar4 / local_10;
          if (fVar2 <= fVar3) {
            fVar3 = fVar2;
          }
          *(float *)(param_1 + 0x224) = fVar3;
          local_10 = (fVar4 + 1.0) - local_10;
          if (local_10 <= fVar3) {
            fVar3 = local_10;
          }
          *(float *)(param_1 + 0x224) = fVar3;
          if (fVar3 <= 0.0) {
            fVar3 = 0.0;
          }
          *(float *)(param_1 + 0x224) = fVar3;
        }
      }
    }
    iVar9 = *(int *)(param_1 + 0x40);
    iVar8 = *(int *)(iVar1 + 4) + 0xe;
    if (iVar9 == 0) {
      *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + iVar8 * 0x18);
      *(undefined4 *)(param_1 + 0x234) =
           *(undefined4 *)(param_1 + 0x154 + *(int *)(iVar1 + 4) * 0x18);
    }
    else {
      iVar8 = *(int *)(param_1 + iVar8 * 0x18);
      if (iVar8 == 0) {
        *(int *)(param_1 + 0x230) = iVar9;
        *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x44);
      }
      else {
        iVar8 = iVar8 + iVar9;
        if (iVar8 < -9999) {
          iVar8 = -10000;
        }
        *(int *)(param_1 + 0x230) = iVar8;
        fVar2 = (float)iVar9 * *(float *)(param_1 + 0x44);
        if (((float)*(int *)(param_1 + (*(int *)(iVar1 + 4) * 3 + 0x2a) * 8) *
             *(float *)(param_1 + 0x154 + *(int *)(iVar1 + 4) * 0x18) + fVar2) / (float)iVar8 <= 1.0
           ) {
          *(float *)(param_1 + 0x234) =
               ((float)*(int *)(param_1 + (*(int *)(iVar1 + 4) * 3 + 0x2a) * 8) *
                *(float *)(param_1 + 0x154 + *(int *)(iVar1 + 4) * 0x18) + fVar2) / (float)iVar8;
        }
        else {
          *(undefined4 *)(param_1 + 0x234) = 0x3f800000;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = 0x200000;
LAB_00c78c3f:
  if ((*(uint *)(param_1 + 4) & 0x200000) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,1,(undefined4 *)(param_1 + 0x208),
                 *(undefined4 *)(param_1 + 0x370));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if ((*(byte *)(param_1 + 4) & 8) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,5,(undefined4 *)(param_1 + 0x208),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
  }
  if ((*(byte *)(param_1 + 4) & 0x10) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,6,(undefined4 *)(param_1 + 0x20c),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
  }
  if ((*(byte *)(param_1 + 4) & 0x20) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,7,(undefined4 *)(param_1 + 0x210),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
  }
  if ((*(byte *)(param_1 + 4) & 0x40) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,8,(undefined4 *)(param_1 + 0x214),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffbf;
  }
  if (*(char *)(param_1 + 4) < '\0') {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,9,(undefined4 *)(param_1 + 0x218),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7f;
  }
  if ((*(uint *)(param_1 + 4) & 0x100) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,10,(undefined4 *)(param_1 + 0x21c),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
  }
  if ((*(uint *)(param_1 + 4) & 0x200) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,0xb,(undefined4 *)(param_1 + 0x220),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffdff;
  }
  if ((*(uint *)(param_1 + 4) & 0x400) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,0xc,(undefined4 *)(param_1 + 0x224),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffbff;
  }
  if ((*(uint *)(param_1 + 4) & 0x800) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,0xd,(undefined4 *)(param_1 + 0x228),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff7ff;
  }
  if ((*(uint *)(param_1 + 4) & 0x1000) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,0xe,(undefined4 *)(param_1 + 0x22c),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffefff;
  }
  if ((*(uint *)(param_1 + 4) & 0x2000) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,0xf,(undefined4 *)(param_1 + 0x230),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffdfff;
  }
  if ((*(uint *)(param_1 + 4) & 0x4000) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,0x10,(undefined4 *)(param_1 + 0x234),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffbfff;
  }
  if ((char)((uint)*(undefined4 *)(param_1 + 4) >> 8) < '\0') {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,0x11,(undefined4 *)(param_1 + 0x238),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff7fff;
  }
  if ((*(uint *)(param_1 + 4) & 0x10000) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,0x12,(undefined4 *)(param_1 + 0x23c),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
  }
  if ((*(uint *)(param_1 + 4) & 0x20000) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,0x13,(undefined4 *)(param_1 + 0x240),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffdffff;
  }
  if ((*(uint *)(param_1 + 4) & 0x40000) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,0x14,(undefined4 *)(param_1 + 0x244),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffbffff;
  }
  if ((*(uint *)(param_1 + 4) & 0x80000) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,0x15,(undefined4 *)(param_1 + 0x248),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfff7ffff;
  }
  if ((*(uint *)(param_1 + 4) & 0x100000) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,0x16,(undefined4 *)(param_1 + 0x24c),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffefffff;
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,2,(undefined4 *)(param_1 + 0x218),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,3,(undefined4 *)(param_1 + 0x220),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
  }
  if ((*(byte *)(param_1 + 4) & 4) != 0) {
    FUN_00c75060(*(void **)(param_1 + 0x14),1,4,(undefined4 *)(param_1 + 0x230),
                 *(undefined4 *)(param_1 + 0x370));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffb;
  }
  return 0;
}


//// FUNCTION FUN_00c79910 @ 00c79910 ////

undefined4 FUN_00c79910(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 0x7fffffff) < 0x1c) {
                    /* WARNING: Could not recover jumptable at 0x00c7992f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_00c7a028)[param_1])();
    return uVar1;
  }
  return 0xfffffffd;
}


//// FUNCTION FUN_00c7a0b0 @ 00c7a0b0 ////

undefined4 __thiscall FUN_00c7a0b0(void *this,int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 & 0xfffffffe) != 0) {
    return 0xfffffffd;
  }
  if (param_2 != *(uint *)(param_1 * 0x1c + 0x9c + (int)this)) {
    uVar1 = FUN_00c75d50(this,param_1,(uint)(((byte)param_2 & 1) == 1));
  }
  return uVar1;
}


//// FUNCTION FUN_00c7a0f0 @ 00c7a0f0 ////

undefined4 __thiscall FUN_00c7a0f0(void *this,int param_1,int param_2)

{
  if ((param_1 != 0) && (param_1 != 1)) {
    if (param_2 != *(int *)(param_1 * 0x1c + 0x98 + (int)this)) {
      *(int *)(param_1 * 0x1c + 0x98 + (int)this) = param_2;
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xffffffff;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c7a130 @ 00c7a130 ////

undefined4 __thiscall FUN_00c7a130(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    *(undefined4 *)((int)this + 0x3d4) = 0xffffffff;
    return 0xfffffffd;
  }
  iVar1 = 4;
  bVar6 = true;
  piVar3 = (int *)&stack0x00000008;
  piVar5 = &DAT_00dad710;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *piVar3 == *piVar5;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    *(undefined4 *)((int)this + param_1 * 0x70 + 0xf8) = 0x40f00000;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0xfc) = 0x3f800000;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x114) = 0x3f800000;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x100) = 0xfffffc18;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x104) = 0xffffff9c;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x108) = 0;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x10c) = 0x3fbeb852;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x110) = 0x3f547ae1;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x118) = 0xfffff5d6;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x11c) = 0x3be56042;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x120) = 0;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x124) = 0;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x128) = 0;
    *(undefined4 *)((int)this + param_1 * 0x70 + 300) = 200;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x130) = 0x3c343958;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x134) = 0;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x138) = 0;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x13c) = 0;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x144) = 0;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x14c) = 0;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x154) = 0x459c4000;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x158) = 0x437a0000;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x15c) = 0;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x160) = 0x3f;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x140) = 0x3e800000;
    *(undefined4 *)((int)this + param_1 * 0x70 + 0x148) = 0x3e800000;
    puVar2 = (undefined4 *)((int)this + param_1 * 0x70 + 0xf4);
    *(undefined4 *)((param_1 + 3) * 0x70 + (int)this) = 0xc0a00000;
    *puVar2 = 0;
    *(undefined4 *)((int)this + param_1 * 0x1c + 0x84) = 0xcf95c8f;
    *(undefined4 *)((int)this + param_1 * 0x1c + 0x88) = 0x4849a3cc;
    *(undefined4 *)((int)this + param_1 * 0x1c + 0x8c) = 0x2e83b6b0;
    *(undefined4 *)((int)this + param_1 * 0x1c + 0x90) = 0xdf2218cc;
    if ((*(int *)((int)this + 4) == param_1) &&
       ((*(byte *)((int)this + param_1 * 0x1c + 0x9c) & 1) != 0)) {
      puVar4 = (undefined4 *)((int)this + 0x340);
      for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      iVar1 = *(int *)((int)this + 0x34c) + *(int *)((int)this + param_1 * 0x1c + 0x94);
      *(int *)((int)this + 0x34c) = iVar1;
      if (iVar1 < -10000) {
        *(undefined4 *)((int)this + 0x34c) = 0xffffd8f0;
      }
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x1000000;
      return 0;
    }
  }
  else {
    iVar1 = 4;
    bVar6 = true;
    piVar3 = (int *)&stack0x00000008;
    piVar5 = &DAT_00dad690;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *piVar3 == *piVar5;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      *(undefined4 *)((int)this + 0x3d4) = 0xfffffffc;
      return 0xfffffffd;
    }
    puVar2 = (undefined4 *)(param_1 * 0x1c + 0x84 + (int)this);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    if (*(int *)((int)this + 4) == param_1) {
      *(undefined4 *)((int)this + 0x39c) = *(undefined4 *)((int)this + 0x2c8);
      *(undefined4 *)((int)this + 0x34c) = 0xffffd8f0;
      *(undefined4 *)((int)this + 0x3a0) = *(undefined4 *)((int)this + 0x2cc);
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x180008;
    }
  }
  return 0;
}


//// FUNCTION FUN_00c7a3a0 @ 00c7a3a0 ////

undefined4 __thiscall FUN_00c7a3a0(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  if ((param_2 < -10000) || (0 < param_2)) {
    *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  if ((param_2 != *(int *)((int)this + param_1 * 0x1c + 0x94)) &&
     (*(int *)((int)this + param_1 * 0x1c + 0x94) = param_2, *(int *)((int)this + 4) == param_1)) {
    bVar4 = true;
    iVar1 = 4;
    piVar2 = (int *)((int)this + param_1 * 0x1c + 0x84);
    piVar3 = &DAT_00dad710;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      iVar1 = param_2 + *(int *)(param_1 * 0x70 + 0x100 + (int)this);
      *(int *)((int)this + 0x34c) = iVar1;
      if (iVar1 < -10000) {
        *(undefined4 *)((int)this + 0x34c) = 0xffffd8f0;
      }
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 8;
    }
  }
  return 0;
}


//// FUNCTION FUN_00c7a440 @ 00c7a440 ////

undefined4 __thiscall FUN_00c7a440(void *this,int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  
  if ((1.0 <= param_2) && (param_2 <= 100.0)) {
    iVar2 = param_1 * 0x70;
    if (*(float *)(iVar2 + 0xf8 + (int)this) != param_2) {
      *(float *)((int)this + iVar2 + 0xf8) = param_2;
      if ((*(int *)((int)this + 4) == param_1) &&
         ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
        *(float *)((int)this + 0x344) = param_2;
        *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 2;
      }
      if ((*(byte *)((int)this + iVar2 + 0x160) & 1) != 0) {
        FUN_00c76040(this,param_1,
                     (*(float *)((int)this + param_1 * 4 + 0x3d8) /
                     *(float *)((int)this + param_1 * 4 + 1000)) * param_2,'\0',1);
      }
      uVar1 = *(uint *)((int)this + iVar2 + 0x160);
      if (((uVar1 & 2) != 0) && ((uVar1 & 4) != 0)) {
        cVar6 = '\x01';
        cVar5 = '\0';
        FUN_00c75c40(param_2 / *(float *)((int)this + param_1 * 4 + 0x408));
        uVar4 = FUN_00acd42c();
        FUN_00c76240(this,param_1,(int)uVar4,cVar5,cVar6);
      }
      if ((*(byte *)((int)this + iVar2 + 0x160) & 4) != 0) {
        FUN_00c76310(this,param_1,
                     (*(float *)((int)this + param_1 * 4 + 0x418) /
                     *(float *)((int)this + param_1 * 4 + 0x428)) * param_2,'\0',1);
      }
      if ((*(uint *)((int)this + iVar2 + 0x160) & 8) != 0) {
        FUN_00c75c40(param_2 / *(float *)((int)this + param_1 * 4 + 0x448));
        uVar4 = FUN_00acd42c();
        iVar3 = (int)uVar4;
        if (iVar3 < -10000) {
          iVar3 = -10000;
        }
        else if (2000 < iVar3) {
          iVar3 = 2000;
        }
        if (((*(int *)((int)this + iVar2 + 300) != iVar3) &&
            (*(int *)((int)this + iVar2 + 300) = iVar3, *(int *)((int)this + 4) == param_1)) &&
           ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
          *(int *)((int)this + 0x378) = iVar3;
          *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x1000;
        }
      }
      if ((*(byte *)((int)this + iVar2 + 0x160) & 0x10) != 0) {
        FUN_00c76560(this,param_1,
                     (*(float *)((int)this + param_1 * 4 + 0x458) /
                     *(float *)((int)this + param_1 * 4 + 0x468)) * param_2,'\0',1);
      }
      if ((*(byte *)((int)this + iVar2 + 0x160) & 0x40) != 0) {
        FUN_00c766e0(this,param_1,
                     (*(float *)((int)this + param_1 * 4 + 0x478) /
                     *(float *)((int)this + param_1 * 4 + 0x488)) * param_2,'\0',1);
      }
      if (*(char *)((int)this + iVar2 + 0x160) < '\0') {
        FUN_00c76840(this,param_1,
                     (*(float *)((int)this + param_1 * 4 + 0x498) /
                     *(float *)((int)this + param_1 * 4 + 0x4a8)) * param_2,'\0',1);
      }
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
  return 0xfffffffd;
}


//// FUNCTION FUN_00c7a690 @ 00c7a690 ////

int __thiscall FUN_00c7a690(void *this,int param_1,uint param_2)

{
  int iVar1;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  
  iVar1 = 0;
  if ((param_2 & 0xffffff00) != 0) {
    *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
    return -3;
  }
  if (*(uint *)(param_1 * 0x70 + 0x160 + (int)this) != param_2) {
    iVar1 = FUN_00c76c10(this,param_1,param_2 & 1);
    if (-1 < iVar1) {
      iVar1 = FUN_00c76ca0(this_00,param_1,param_2 >> 1 & 1);
      if (-1 < iVar1) {
        iVar1 = FUN_00c76d30(this_01,param_1,param_2 >> 2 & 1);
        if (-1 < iVar1) {
          iVar1 = FUN_00c76dc0(this_02,param_1,param_2 >> 3 & 1);
          if (-1 < iVar1) {
            iVar1 = FUN_00c76e50(this_03,param_1,param_2 >> 4 & 1);
            if (-1 < iVar1) {
              iVar1 = FUN_00c76ee0(this_04,param_1,param_2 >> 5 & 1);
              if (-1 < iVar1) {
                iVar1 = FUN_00c76f70(this_05,param_1,param_2 >> 6 & 1);
                if (-1 < iVar1) {
                  iVar1 = FUN_00c77000(this_06,param_1,param_2 >> 7 & 1);
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00c7a760 @ 00c7a760 ////

int __thiscall FUN_00c7a760(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  if (((((float)param_1[5] < -100.0) || (0.0 < (float)param_1[5])) || ((float)param_1[6] < 1000.0))
     || (20000.0 < (float)param_1[6])) {
LAB_00c7a86a:
    *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
    iVar1 = -3;
  }
  else {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = param_1;
    piVar3 = &DAT_00dad6c0;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      iVar1 = 4;
      bVar4 = true;
      piVar2 = param_1;
      piVar3 = &DAT_00dad6d0;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *piVar2 == *piVar3;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (bVar4);
      if (!bVar4) {
        iVar1 = 4;
        bVar4 = true;
        piVar2 = param_1;
        piVar3 = &DAT_00dad6e0;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar4 = *piVar2 == *piVar3;
          piVar2 = piVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (bVar4);
        if (!bVar4) {
          iVar1 = 4;
          bVar4 = true;
          piVar2 = param_1;
          piVar3 = &DAT_00dad6f0;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar4 = *piVar2 == *piVar3;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
          } while (bVar4);
          if (!bVar4) {
            iVar1 = 4;
            bVar4 = true;
            piVar2 = param_1;
            piVar3 = &DAT_00dad690;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar4 = *piVar2 == *piVar3;
              piVar2 = piVar2 + 1;
              piVar3 = piVar3 + 1;
            } while (bVar4);
            if (!bVar4) goto LAB_00c7a86a;
          }
        }
      }
    }
    iVar1 = FUN_00c770a0(this,*param_1,param_1[1],param_1[2],param_1[3]);
    if (-1 < iVar1) {
      iVar1 = FUN_00c77250(this,(float)param_1[4]);
      if (-1 < iVar1) {
        iVar1 = FUN_00c772b0(this_00,(float)param_1[5]);
        if (-1 < iVar1) {
          iVar1 = FUN_00c77360(this,(float)param_1[6]);
          return iVar1;
        }
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00c7a880 @ 00c7a880 ////

int __thiscall FUN_00c7a880(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  
  iVar1 = *param_1;
  if (((((((((iVar1 < -10000) || (1000 < iVar1)) || (param_1[1] < -10000)) ||
          (((0 < param_1[1] || (param_1[2] < -10000)) ||
           ((1000 < param_1[2] || ((param_1[3] < -10000 || (0 < param_1[3])))))))) ||
         (param_1[4] < -10000)) ||
        (((((0 < param_1[4] || ((float)param_1[5] < 0.0)) || (1.0 < (float)param_1[5])) ||
          ((param_1[6] < -10000 || (0 < param_1[6])))) || ((float)param_1[7] < 0.0)))) ||
       (((1.0 < (float)param_1[7] || ((float)param_1[8] < 0.0)) ||
        (((10.0 < (float)param_1[8] ||
          ((((float)param_1[9] < 0.0 || (10.0 < (float)param_1[9])) || (param_1[10] < -10000)))) ||
         (((0 < param_1[10] || (param_1[0xc] < -10000)) || (0 < param_1[0xc])))))))) ||
      ((((float)param_1[0xd] < 0.0 || (10.0 < (float)param_1[0xd])) ||
       (((float)param_1[0xe] < 0.0 ||
        (((10.0 < (float)param_1[0xe] || ((float)param_1[0xf] < 0.0)) ||
         (10.0 < (float)param_1[0xf])))))))) ||
     ((((float)param_1[0x10] < 0.0 || (10.0 < (float)param_1[0x10])) ||
      ((param_1[0x11] & 0xfffffff8U) != 0)))) {
    *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3d4) = 0xfffffffe;
    iVar1 = -3;
  }
  else {
    iVar1 = FUN_00c77640(this,iVar1);
    if (-1 < iVar1) {
      iVar1 = FUN_00c77680(this_00,param_1[1]);
      if (-1 < iVar1) {
        iVar1 = FUN_00c776c0(this,param_1[2]);
        if (-1 < iVar1) {
          iVar1 = FUN_00c77700(this_01,param_1[3]);
          if (-1 < iVar1) {
            iVar1 = FUN_00c77740(this_02,param_1[4]);
            if (-1 < iVar1) {
              iVar1 = FUN_00c77780(this,(float)param_1[5]);
              if (-1 < iVar1) {
                iVar1 = FUN_00c777f0(this_03,param_1[6]);
                if (-1 < iVar1) {
                  iVar1 = FUN_00c77830(this_04,(float)param_1[7]);
                  if (-1 < iVar1) {
                    iVar1 = FUN_00c77890(this,(float)param_1[8]);
                    if (-1 < iVar1) {
                      iVar1 = FUN_00c778f0(this,(float)param_1[9]);
                      if (-1 < iVar1) {
                        iVar1 = FUN_00c77950(this,param_1[10]);
                        if (-1 < iVar1) {
                          iVar1 = FUN_00c77990(this,(float)param_1[0xb]);
                          if (-1 < iVar1) {
                            iVar1 = FUN_00c779f0(this,param_1[0xc]);
                            if (-1 < iVar1) {
                              iVar1 = FUN_00c77a30(this_05,(float)param_1[0xd]);
                              if (-1 < iVar1) {
                                iVar1 = FUN_00c77aa0(this,(float)param_1[0xe]);
                                if (-1 < iVar1) {
                                  iVar1 = FUN_00c77b10(this_06,(float)param_1[0xf]);
                                  if (-1 < iVar1) {
                                    iVar1 = FUN_00c77b80(this_07,(float)param_1[0x10]);
                                    if (-1 < iVar1) {
                                      iVar1 = FUN_00c77bf0(this,param_1[0x11]);
                                      if (-1 < iVar1) {
                                        *(uint *)((int)this + 4) =
                                             *(uint *)((int)this + 4) | 0x200000;
                                        return iVar1;
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
  return iVar1;
}


//// FUNCTION FUN_00c7abe0 @ 00c7abe0 ////

undefined4 __fastcall FUN_00c7abe0(void *param_1)

{
  uint *puVar1;
  int iVar2;
  
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x2000000) != 0) {
    *(float *)((int)param_1 + 0x3b0) =
         *(float *)((int)param_1 + 0x2c4) * *(float *)((int)param_1 + 0x3c);
    FUN_00c75060(param_1,4,4,(float *)((int)param_1 + 0x3b0),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfdffffff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x1000000) != 0) {
    FUN_00c75060(param_1,0,1,(undefined4 *)((int)param_1 + 0x340),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfe000000;
  }
  if ((*(byte *)((int)param_1 + 0x3bc) & 1) != 0) {
    FUN_00c75060(param_1,0,2,(undefined4 *)((int)param_1 + 0x340),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfffffffe;
  }
  if ((*(byte *)((int)param_1 + 0x3bc) & 2) != 0) {
    FUN_00c75060(param_1,0,3,(undefined4 *)((int)param_1 + 0x344),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfffffffd;
  }
  if ((*(byte *)((int)param_1 + 0x3bc) & 4) != 0) {
    FUN_00c75060(param_1,0,4,(undefined4 *)((int)param_1 + 0x348),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfffffffb;
  }
  if ((*(byte *)((int)param_1 + 0x3bc) & 8) != 0) {
    FUN_00c75060(param_1,0,5,(undefined4 *)((int)param_1 + 0x34c),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfffffff7;
  }
  if ((*(byte *)((int)param_1 + 0x3bc) & 0x10) != 0) {
    FUN_00c75060(param_1,0,6,(undefined4 *)((int)param_1 + 0x350),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xffffffef;
  }
  if ((*(byte *)((int)param_1 + 0x3bc) & 0x20) != 0) {
    FUN_00c75060(param_1,0,7,(undefined4 *)((int)param_1 + 0x354),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xffffffdf;
  }
  if ((*(byte *)((int)param_1 + 0x3bc) & 0x40) != 0) {
    FUN_00c75060(param_1,0,8,(undefined4 *)((int)param_1 + 0x358),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xffffffbf;
  }
  if (*(char *)((int)param_1 + 0x3bc) < '\0') {
    FUN_00c75060(param_1,0,9,(undefined4 *)((int)param_1 + 0x35c),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xffffff7f;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x100) != 0) {
    FUN_00c75060(param_1,0,10,(undefined4 *)((int)param_1 + 0x360),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfffffeff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x200) != 0) {
    FUN_00c75060(param_1,0,0xb,(undefined4 *)((int)param_1 + 0x364),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfffffdff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x400) != 0) {
    FUN_00c75060(param_1,0,0xc,(undefined4 *)((int)param_1 + 0x368),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfffffbff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x800) != 0) {
    FUN_00c75060(param_1,0,0xd,(undefined4 *)((int)param_1 + 0x36c),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfffff7ff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x1000) != 0) {
    FUN_00c75060(param_1,0,0xe,(undefined4 *)((int)param_1 + 0x378),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xffffefff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x2000) != 0) {
    FUN_00c75060(param_1,0,0xf,(undefined4 *)((int)param_1 + 0x37c),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xffffdfff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x4000) != 0) {
    FUN_00c75060(param_1,0,0x10,(undefined4 *)((int)param_1 + 0x380),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xffffbfff;
  }
  if ((char)((uint)*(undefined4 *)((int)param_1 + 0x3bc) >> 8) < '\0') {
    FUN_00c75060(param_1,0,0x11,(undefined4 *)((int)param_1 + 0x38c),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xffff7fff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x10000) != 0) {
    FUN_00c75060(param_1,0,0x12,(undefined4 *)((int)param_1 + 0x390),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfffeffff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x20000) != 0) {
    FUN_00c75060(param_1,0,0x13,(undefined4 *)((int)param_1 + 0x394),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfffdffff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x40000) != 0) {
    FUN_00c75060(param_1,0,0x14,(undefined4 *)((int)param_1 + 0x398),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfffbffff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x80000) != 0) {
    FUN_00c75060(param_1,0,0x15,(undefined4 *)((int)param_1 + 0x39c),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfff7ffff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x100000) != 0) {
    FUN_00c75060(param_1,0,0x16,(undefined4 *)((int)param_1 + 0x3a0),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xffefffff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x200000) != 0) {
    FUN_00c75060(param_1,0,0x17,(undefined4 *)((int)param_1 + 0x3a4),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xffdfffff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x400000) != 0) {
    FUN_00c75060(param_1,0,0x18,(undefined4 *)((int)param_1 + 0x3a8),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xffbfffff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x800000) != 0) {
    FUN_00c75060(param_1,0,0x19,(undefined4 *)((int)param_1 + 0x3ac),0);
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xff7fffff;
  }
  if ((*(uint *)((int)param_1 + 0x3bc) & 0x4000000) != 0) {
    for (iVar2 = *(int *)((int)param_1 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      puVar1 = (uint *)(*(int *)(iVar2 + 8) + 4);
      *puVar1 = *puVar1 | 0x400000;
      FUN_00c78680(*(int *)(iVar2 + 8));
    }
    *(uint *)((int)param_1 + 0x3bc) = *(uint *)((int)param_1 + 0x3bc) & 0xfbffffff;
  }
  return 0;
}


//// FUNCTION FUN_00c7b040 @ 00c7b040 ////

undefined4 __thiscall FUN_00c7b040(void *this,uint param_1)

{
  undefined4 uVar1;
  
  FUN_00c754c0((int)this);
  if ((param_1 & 0x7fffffff) < 7) {
                    /* WARNING: Could not recover jumptable at 0x00c7b063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_00c7b16c)[param_1])();
    return uVar1;
  }
  return 0xfffffffd;
}


//// FUNCTION FUN_00c7b190 @ 00c7b190 ////

undefined4 __thiscall FUN_00c7b190(void *this,uint param_1)

{
  undefined4 uVar1;
  
  FUN_00c754c0(*(int *)((int)this + 0x14));
  if ((param_1 & 0x7fffffff) < 0x1c) {
                    /* WARNING: Could not recover jumptable at 0x00c7b1b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_00c7b5c0)[param_1])();
    return uVar1;
  }
  return 0xfffffffd;
}


//// FUNCTION FUN_00c7b630 @ 00c7b630 ////

int __thiscall FUN_00c7b630(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_1 != 1)) {
    if (*(int *)(param_2 + 0x14) != *(int *)(param_1 * 0x1c + 0x98 + (int)this)) {
      *(int *)(param_1 * 0x1c + 0x98 + (int)this) = *(int *)(param_2 + 0x14);
    }
    iVar1 = FUN_00c7a130(this,param_1);
    if (-1 < iVar1) {
      iVar1 = FUN_00c7a3a0(this,param_1,*(int *)(param_2 + 0x10));
      if (-1 < iVar1) {
        iVar1 = FUN_00c7a0b0(this,param_1,*(uint *)(param_2 + 0x18));
      }
    }
    return iVar1;
  }
  *(undefined4 *)((int)this + 0x3d4) = 0xffffffff;
  return -3;
}


//// FUNCTION FUN_00c7b6d0 @ 00c7b6d0 ////

undefined4 __thiscall FUN_00c7b6d0(void *this,int param_1,uint param_2)

{
  int iVar1;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  void *this_08;
  void *this_09;
  void *this_10;
  void *this_11;
  void *this_12;
  void *this_13;
  void *this_14;
  void *this_15;
  int iVar2;
  
  if (0x1a < param_2) {
    *(undefined4 *)((int)this + 0x3d4) = 0xfffffffe;
    return 0xfffffffd;
  }
  if (*(uint *)(param_1 * 0x70 + 0xf4 + (int)this) != param_2) {
    *(uint *)(param_1 * 0x70 + 0xf4 + (int)this) = param_2;
    if ((*(int *)((int)this + 4) == param_1) &&
       ((*(byte *)(param_1 * 0x1c + 0x9c + (int)this) & 1) != 0)) {
      *(uint *)((int)this + 0x340) = param_2;
      *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 1;
    }
    if (param_2 != 0x1a) {
      iVar2 = param_2 * 0x98;
      iVar1 = FUN_00c75ef0(this,param_1,*(int *)(&DAT_00f86420 + iVar2));
      if (-1 < iVar1) {
        iVar1 = FUN_00c75f60(this_00,param_1,*(int *)(&DAT_00f86424 + iVar2));
        if (-1 < iVar1) {
          iVar1 = FUN_00c75fd0(this,param_1,*(int *)(&DAT_00f86428 + iVar2));
          if (-1 < iVar1) {
            iVar1 = FUN_00c76040(this_01,param_1,*(float *)(&DAT_00f86430 + iVar2),'\x01',0);
            if (-1 < iVar1) {
              iVar1 = FUN_00c76100(this,param_1,*(float *)(&DAT_00f86434 + iVar2));
              if (-1 < iVar1) {
                iVar1 = FUN_00c761a0(this,param_1,*(float *)(&DAT_00f86438 + iVar2));
                if (-1 < iVar1) {
                  iVar1 = FUN_00c76240(this_02,param_1,*(int *)(&DAT_00f8643c + iVar2),'\x01','\0');
                  if (-1 < iVar1) {
                    iVar1 = FUN_00c76310(this_03,param_1,*(float *)(&DAT_00f86440 + iVar2),'\x01',0)
                    ;
                    if (-1 < iVar1) {
                      iVar1 = FUN_00c763d0(this,param_1,0.0,0.0,0.0);
                      if (-1 < iVar1) {
                        iVar1 = FUN_00c76490(this,param_1,*(int *)(&DAT_00f86450 + iVar2),'\x01',
                                             '\0');
                        if (-1 < iVar1) {
                          iVar1 = FUN_00c76560(this_04,param_1,*(float *)(&DAT_00f86454 + iVar2),
                                               '\x01',0);
                          if (-1 < iVar1) {
                            iVar1 = FUN_00c76620(this,param_1,0.0,0.0,0.0);
                            if (-1 < iVar1) {
                              iVar1 = FUN_00c75e60(this,param_1,*(float *)(&DAT_00f8646c + iVar2));
                              if (-1 < iVar1) {
                                iVar1 = FUN_00c766e0(this,param_1,*(float *)(&DAT_00f86478 + iVar2),
                                                     '\x01',0);
                                if (-1 < iVar1) {
                                  iVar1 = FUN_00c767a0(this,param_1,
                                                       *(float *)(&DAT_00f86474 + iVar2));
                                  if (-1 < iVar1) {
                                    iVar1 = FUN_00c76840(this_05,param_1,
                                                         *(float *)(&DAT_00f86480 + iVar2),'\x01',0)
                                    ;
                                    if (-1 < iVar1) {
                                      iVar1 = FUN_00c76900(this,param_1,
                                                           *(float *)(&DAT_00f8647c + iVar2));
                                      if (-1 < iVar1) {
                                        iVar1 = FUN_00c769a0(this_06,param_1,
                                                             *(float *)(&DAT_00f86470 + iVar2));
                                        if (-1 < iVar1) {
                                          iVar1 = FUN_00c76b70(this_07,param_1,
                                                               *(float *)(&DAT_00f8642c + iVar2));
                                          if (-1 < iVar1) {
                                            iVar1 = FUN_00c76a30(this,param_1,
                                                                 *(float *)(&DAT_00f864b0 + iVar2));
                                            if (-1 < iVar1) {
                                              iVar1 = FUN_00c76ad0(this_08,param_1,
                                                                   *(float *)(&DAT_00f864b4 + iVar2)
                                                                  );
                                              if (-1 < iVar1) {
                                                iVar1 = FUN_00c7a690(this_09,param_1,0);
                                                if (-1 < iVar1) {
                                                  iVar1 = FUN_00c7a440(this_10,param_1,
                                                                       *(float *)(&DAT_00f86468 +
                                                                                 iVar2));
                                                  if (-1 < iVar1) {
                                                    iVar1 = FUN_00c76c10(this,param_1,
                                                                         *(uint *)(&DAT_00f86488 +
                                                                                  iVar2));
                                                    if (-1 < iVar1) {
                                                      iVar1 = FUN_00c76ca0(this_11,param_1,
                                                                           *(uint *)(&DAT_00f8648c +
                                                                                    iVar2));
                                                      if (-1 < iVar1) {
                                                        iVar1 = FUN_00c76d30(this_12,param_1,
                                                                             *(uint *)(&DAT_00f86490
                                                                                      + iVar2));
                                                        if (-1 < iVar1) {
                                                          iVar1 = FUN_00c76dc0(this,param_1,
                                                                               *(uint *)(&
                                                  DAT_00f86494 + iVar2));
                                                  if (-1 < iVar1) {
                                                    iVar1 = FUN_00c76e50(this_13,param_1,
                                                                         *(uint *)(&DAT_00f86498 +
                                                                                  iVar2));
                                                    if (-1 < iVar1) {
                                                      iVar1 = FUN_00c76ee0(this_14,param_1,
                                                                           *(uint *)(&DAT_00f864a4 +
                                                                                    iVar2));
                                                      if (-1 < iVar1) {
                                                        iVar1 = FUN_00c76f70(this,param_1,
                                                                             *(uint *)(&DAT_00f8649c
                                                                                      + iVar2));
                                                        if (-1 < iVar1) {
                                                          FUN_00c77000(this_15,param_1,
                                                                       *(uint *)(&DAT_00f864a0 +
                                                                                iVar2));
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


//// FUNCTION FUN_00c7b9f0 @ 00c7b9f0 ////

void __thiscall FUN_00c7b9f0(void *this,int param_1,uint *param_2)

{
  int iVar1;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  void *this_08;
  
  iVar1 = FUN_00c7b6d0(this,param_1,*param_2);
  if (-1 < iVar1) {
    iVar1 = FUN_00c7a690(this,param_1,0);
    if (-1 < iVar1) {
      iVar1 = FUN_00c7a440(this,param_1,(float)param_2[1]);
      if (-1 < iVar1) {
        iVar1 = FUN_00c75e60(this,param_1,(float)param_2[2]);
        if (-1 < iVar1) {
          iVar1 = FUN_00c75ef0(this_00,param_1,param_2[3]);
          if (-1 < iVar1) {
            iVar1 = FUN_00c75f60(this,param_1,param_2[4]);
            if (-1 < iVar1) {
              iVar1 = FUN_00c75fd0(this_01,param_1,param_2[5]);
              if (-1 < iVar1) {
                iVar1 = FUN_00c76040(this_02,param_1,(float)param_2[6],'\x01',0);
                if (-1 < iVar1) {
                  iVar1 = FUN_00c76100(this,param_1,(float)param_2[7]);
                  if (-1 < iVar1) {
                    iVar1 = FUN_00c761a0(this_03,param_1,(float)param_2[8]);
                    if (-1 < iVar1) {
                      iVar1 = FUN_00c76240(this_04,param_1,param_2[9],'\x01','\0');
                      if (-1 < iVar1) {
                        iVar1 = FUN_00c76310(this,param_1,(float)param_2[10],'\x01',0);
                        if (-1 < iVar1) {
                          iVar1 = FUN_00c763d0(this,param_1,(float)param_2[0xb],(float)param_2[0xc],
                                               (float)param_2[0xd]);
                          if (-1 < iVar1) {
                            iVar1 = FUN_00c76490(this,param_1,param_2[0xe],'\x01','\0');
                            if (-1 < iVar1) {
                              iVar1 = FUN_00c76560(this,param_1,(float)param_2[0xf],'\x01',0);
                              if (-1 < iVar1) {
                                iVar1 = FUN_00c76620(this,param_1,(float)param_2[0x10],
                                                     (float)param_2[0x11],(float)param_2[0x12]);
                                if (-1 < iVar1) {
                                  iVar1 = FUN_00c766e0(this,param_1,(float)param_2[0x13],'\x01',0);
                                  if (-1 < iVar1) {
                                    iVar1 = FUN_00c767a0(this,param_1,(float)param_2[0x14]);
                                    if (-1 < iVar1) {
                                      iVar1 = FUN_00c76840(this_05,param_1,(float)param_2[0x15],
                                                           '\x01',0);
                                      if (-1 < iVar1) {
                                        iVar1 = FUN_00c76900(this,param_1,(float)param_2[0x16]);
                                        if (-1 < iVar1) {
                                          iVar1 = FUN_00c769a0(this,param_1,(float)param_2[0x17]);
                                          if (-1 < iVar1) {
                                            iVar1 = FUN_00c76a30(this_06,param_1,
                                                                 (float)param_2[0x18]);
                                            if (-1 < iVar1) {
                                              iVar1 = FUN_00c76ad0(this_07,param_1,
                                                                   (float)param_2[0x19]);
                                              if (-1 < iVar1) {
                                                iVar1 = FUN_00c76b70(this,param_1,
                                                                     (float)param_2[0x1a]);
                                                if (-1 < iVar1) {
                                                  FUN_00c7a690(this_08,param_1,param_2[0x1b]);
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
    }
  }
  *(uint *)((int)this + 0x3bc) = *(uint *)((int)this + 0x3bc) | 0x1000000;
  return;
}


//// FUNCTION FUN_00c7bc10 @ 00c7bc10 ////

int __thiscall
FUN_00c7bc10(void *this,uint param_1,uint param_2,uint *param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  FUN_00c754c0((int)this);
  iVar1 = 4;
  if (3 < param_1) {
    return -3;
  }
  if ((param_2 & 0x7fffffff) < 0x10000) {
    bVar4 = true;
    piVar2 = (int *)(param_1 * 0x1c + 0x84 + (int)this);
    piVar3 = &DAT_00dad710;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      *(undefined4 *)((int)this + 0x3d4) = 0xfffffffd;
      return -9;
    }
    if ((param_2 & 0x7fffffff) < 0x1a) {
                    /* WARNING: Could not recover jumptable at 0x00c7bc8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)(&PTR_caseD_10000_00c7c1a0)[param_2])();
      return iVar1;
    }
switchD_00c7c0ae_default:
    return -3;
  }
  switch(param_2) {
  case 0x10000:
    iVar1 = 0;
    goto LAB_00c7bcb3;
  case 0x10001:
    if (param_3 == (uint *)0x0) {
      return -3;
    }
    if (param_4 < 0x1c) {
      return -3;
    }
    iVar1 = FUN_00c7b630(this,param_1,(int)param_3);
    break;
  case 0x10002:
    if (param_3 == (uint *)0x0) {
      return -3;
    }
    if (param_4 < 0x10) {
      return -3;
    }
    iVar1 = FUN_00c7a130(this,param_1);
    break;
  case 0x10003:
    if (param_3 == (uint *)0x0) {
      return -3;
    }
    if (param_4 < 4) {
      return -3;
    }
    iVar1 = FUN_00c7a3a0(this,param_1,*param_3);
    break;
  case 0x10004:
    if (param_3 == (uint *)0x0) {
      return -3;
    }
    if (param_4 < 4) {
      return -3;
    }
    iVar1 = FUN_00c7a0f0(this,param_1,*param_3);
    break;
  case 0x10005:
    if (param_3 == (uint *)0x0) {
      return -3;
    }
    if (param_4 < 4) {
      return -3;
    }
    iVar1 = FUN_00c7a0b0(this,param_1,*param_3);
    break;
  default:
    goto switchD_00c7c0ae_default;
  }
  if (-1 < iVar1) {
LAB_00c7bcb3:
    if ((-1 < (int)param_2) && (iVar1 = FUN_00c7abe0(this), -1 < iVar1)) {
      *param_5 = *(undefined4 *)((int)this + 0x3c4);
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00c7c220 @ 00c7c220 ////

undefined4 __cdecl FUN_00c7c220(float *param_1)

{
  int iVar1;
  
  iVar1 = __isnan((double)*param_1);
  if (iVar1 == 0) {
    iVar1 = __isnan((double)param_1[1]);
    if (iVar1 == 0) {
      iVar1 = __isnan((double)param_1[2]);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


//// FUNCTION FUN_00c7c280 @ 00c7c280 ////

void __fastcall FUN_00c7c280(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00dad7d0;
  local_4 = 0;
  FUN_00c75010((void *)param_1[5],(int)param_1);
  *param_1 = &PTR_LAB_00d9fbe8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c7c6d0 @ 00c7c6d0 ////

undefined4 __fastcall FUN_00c7c6d0(int param_1)

{
  *(uint *)(param_1 + 0x368) = *(uint *)(param_1 + 0x368) | 0x80000000;
  return 0;
}


//// FUNCTION FUN_00c7c6e0 @ 00c7c6e0 ////

int __thiscall FUN_00c7c6e0(void *this,uint param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int local_4;
  
  pfVar4 = param_2;
  iVar7 = 0;
  local_4 = 0;
  if (param_1 < 0x11) {
    if (param_1 == 0x10) {
      if (param_3 == 1) {
        *(uint *)((int)this + 0x36c) = *(uint *)((int)this + 0x36c) | 0x40;
      }
      else {
        *(float *)((int)this + 0x2c0) = *param_2;
        *(float *)((int)this + 0x2c4) = param_2[1];
        *(float *)((int)this + 0x2c8) = param_2[2];
        *(uint *)((int)this + 0x368) = *(uint *)((int)this + 0x368) | 0x40;
      }
      *(float *)((int)this + 0x34c) = *param_2;
      *(float *)((int)this + 0x350) = param_2[1];
      *(float *)((int)this + 0x354) = param_2[2];
    }
    else {
      switch(param_1) {
      case 1:
        pfVar1 = param_2 + 1;
        uVar5 = FUN_00c7c220(pfVar1);
        if ((char)uVar5 == '\0') {
          pfVar2 = pfVar4 + 4;
          uVar5 = FUN_00c7c220(pfVar2);
          if ((char)uVar5 == '\0') {
            if (param_3 == 1) {
              *(uint *)((int)this + 0x36c) = *(uint *)((int)this + 0x36c) | 0x754;
            }
            else {
              *(float *)((int)this + 0x2a0) = *pfVar1;
              *(float *)((int)this + 0x2a4) = pfVar4[2];
              *(float *)((int)this + 0x2a8) = pfVar4[3];
              *(float *)((int)this + 0x2ac) = *pfVar2;
              *(float *)((int)this + 0x2b0) = pfVar4[5];
              *(float *)((int)this + 0x2b4) = pfVar4[6];
              *(float *)((int)this + 0x2b8) = pfVar4[7];
              *(float *)((int)this + 700) = pfVar4[8];
              *(float *)((int)this + 0x2c0) = pfVar4[9];
              *(float *)((int)this + 0x2c4) = pfVar4[10];
              *(float *)((int)this + 0x2c8) = pfVar4[0xb];
              *(float *)((int)this + 0x2cc) = pfVar4[0xc];
              *(float *)((int)this + 0x2d0) = pfVar4[0xd];
              *(float *)((int)this + 0x2d4) = pfVar4[0xe];
              *(float *)((int)this + 0x2d8) = pfVar4[0xf];
              *(uint *)((int)this + 0x368) = *(uint *)((int)this + 0x368) | 0x754;
            }
            *(float *)((int)this + 0x32c) = *pfVar1;
            *(float *)((int)this + 0x330) = pfVar4[2];
            *(float *)((int)this + 0x334) = pfVar4[3];
            *(float *)((int)this + 0x338) = *pfVar2;
            *(float *)((int)this + 0x33c) = pfVar4[5];
            *(float *)((int)this + 0x340) = pfVar4[6];
            *(float *)((int)this + 0x344) = pfVar4[7];
            *(float *)((int)this + 0x348) = pfVar4[8];
            *(float *)((int)this + 0x34c) = pfVar4[9];
            *(float *)((int)this + 0x350) = pfVar4[10];
            *(float *)((int)this + 0x354) = pfVar4[0xb];
            *(float *)((int)this + 0x358) = pfVar4[0xc];
            *(float *)((int)this + 0x35c) = pfVar4[0xd];
            param_2 = *(float **)((int)this + 0x358);
            *(float *)((int)this + 0x360) = pfVar4[0xe];
            *(float *)((int)this + 0x364) = pfVar4[0xf];
            FUN_00c75060(*(void **)((int)this + 0x14),5,0x20,&param_2,
                         *(undefined4 *)((int)this + 0x370));
            break;
          }
        }
      default:
switchD_00c7c70e_caseD_3:
        local_4 = -3;
        break;
      case 2:
        uVar5 = FUN_00c7c220(param_2);
        if ((char)uVar5 != '\0') goto switchD_00c7c70e_caseD_3;
        if (param_3 == 1) {
          *(uint *)((int)this + 0x36c) = *(uint *)((int)this + 0x36c) | 4;
        }
        else {
          *(float *)((int)this + 0x2a0) = *pfVar4;
          *(float *)((int)this + 0x2a4) = pfVar4[1];
          *(float *)((int)this + 0x2a8) = pfVar4[2];
          *(uint *)((int)this + 0x368) = *(uint *)((int)this + 0x368) | 4;
        }
        *(float *)((int)this + 0x32c) = *pfVar4;
        *(float *)((int)this + 0x330) = pfVar4[1];
        *(float *)((int)this + 0x334) = pfVar4[2];
        break;
      case 4:
        uVar5 = FUN_00c7c220(param_2);
        if ((char)uVar5 != '\0') goto switchD_00c7c70e_caseD_3;
        if (param_3 == 1) {
          *(uint *)((int)this + 0x36c) = *(uint *)((int)this + 0x36c) | 0x10;
        }
        else {
          *(float *)((int)this + 0x2ac) = *pfVar4;
          *(float *)((int)this + 0x2b0) = pfVar4[1];
          *(float *)((int)this + 0x2b4) = pfVar4[2];
          *(uint *)((int)this + 0x368) = *(uint *)((int)this + 0x368) | 0x10;
        }
        *(float *)((int)this + 0x338) = *pfVar4;
        *(float *)((int)this + 0x33c) = pfVar4[1];
        *(float *)((int)this + 0x340) = pfVar4[2];
        break;
      case 8:
        if (param_3 == 1) {
          *(uint *)((int)this + 0x36c) = *(uint *)((int)this + 0x36c) | 0x400;
        }
        else {
          *(float *)((int)this + 0x2b8) = *param_2;
          *(float *)((int)this + 700) = param_2[1];
          *(uint *)((int)this + 0x368) = *(uint *)((int)this + 0x368) | 0x400;
        }
        *(float *)((int)this + 0x344) = *param_2;
        *(float *)((int)this + 0x348) = param_2[1];
      }
    }
  }
  else {
    switch(param_1) {
    case 0x20:
      fVar3 = *param_2;
      if (*(float *)((int)this + 0x358) != fVar3) {
        *(float *)((int)this + 0x358) = fVar3;
        if (param_3 == 1) {
          *(uint *)((int)this + 0x36c) = *(uint *)((int)this + 0x36c) | 0x400;
          uVar6 = *(uint *)((int)this + 0x368) | 1;
          goto LAB_00c7cb2a;
        }
        *(float *)((int)this + 0x2cc) = fVar3;
        *(uint *)((int)this + 0x368) = *(uint *)((int)this + 0x368) | 0x400;
      }
      break;
    default:
      goto switchD_00c7c70e_caseD_3;
    case 0x40:
      if (param_3 == 1) {
        *(uint *)((int)this + 0x36c) = *(uint *)((int)this + 0x36c) | 0x104;
        *(float *)((int)this + 0x35c) = *param_2;
      }
      else {
        *(float *)((int)this + 0x2d0) = *param_2;
        *(uint *)((int)this + 0x368) = *(uint *)((int)this + 0x368) | 0x104;
        *(float *)((int)this + 0x35c) = *param_2;
      }
      break;
    case 0x80:
      if (param_3 == 1) {
        *(uint *)((int)this + 0x36c) = *(uint *)((int)this + 0x36c) | 4;
        *(float *)((int)this + 0x360) = *param_2;
      }
      else {
        *(float *)((int)this + 0x2d4) = *param_2;
        *(uint *)((int)this + 0x368) = *(uint *)((int)this + 0x368) | 4;
        *(float *)((int)this + 0x360) = *param_2;
      }
      break;
    case 0x100:
      if (param_3 == 1) {
        *(uint *)((int)this + 0x36c) = *(uint *)((int)this + 0x36c) | 0x754;
        *(float *)((int)this + 0x364) = *param_2;
      }
      else {
        *(float *)((int)this + 0x2d8) = *param_2;
        *(uint *)((int)this + 0x368) = *(uint *)((int)this + 0x368) | 0x754;
        *(float *)((int)this + 0x364) = *param_2;
      }
    }
  }
  iVar7 = local_4;
  if (param_3 == 1) {
    uVar6 = *(uint *)((int)this + 0x368) | 1;
  }
  else {
    uVar6 = *(uint *)((int)this + 0x368) & 0xfffffffe;
  }
LAB_00c7cb2a:
  *(uint *)((int)this + 0x368) = uVar6;
  if ((-1 < iVar7) && ((uVar6 & 1) == 0)) {
    iVar7 = FUN_00c78680((int)this);
    return iVar7;
  }
  return iVar7;
}


//// FUNCTION FUN_00c7cd00 @ 00c7cd00 ////

undefined4 * __thiscall
FUN_00c7cd00(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05e78;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00dad7d0;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x368) = 0x754;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 0xc) = 1;
  *(int *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x370) = param_2;
  FUN_00c754c0(param_1);
  *(undefined4 *)((int)this + 0x378) = param_3;
  *(undefined4 *)((int)this + 0x2b8) = 0x168;
  *(undefined4 *)((int)this + 700) = 0x168;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2d4) = 0x4e6e6b28;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  puVar3 = (undefined4 *)((int)this + 0x250);
  puVar2 = (undefined4 *)((int)this + 0x2dc);
  for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0x3e800000;
  *(undefined4 *)((int)this + 0x1e0) = 0x3fc00000;
  *(undefined4 *)((int)this + 0x1e4) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0x3f800000;
  *(undefined4 *)((int)this + 0x204) = 7;
  puVar3 = (undefined4 *)((int)this + 0x1c0);
  puVar2 = (undefined4 *)((int)this + 0x208);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x3e800000;
  *(undefined4 *)((int)this + 0x38) = 0x3fc00000;
  *(undefined4 *)((int)this + 0x3c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x5c) = 7;
  *(undefined4 *)((int)this + 0x44) = 0x3f800000;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0xf317866d;
  *(undefined4 *)((int)this + 0x1b4) = 0x450c924c;
  *(undefined4 *)((int)this + 0x1b8) = 0xdae61b86;
  *(undefined4 *)((int)this + 0x1bc) = 0x207c5ea2;
  *(undefined4 *)((int)this + 0x60) = 0xc4d79f1e;
  *(undefined4 *)((int)this + 100) = 0x436bf1ac;
  *(undefined4 *)((int)this + 0x68) = 0x38a71da8;
  *(undefined4 *)((int)this + 0x6c) = 0x695404e7;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0x8c00e96;
  *(undefined4 *)((int)this + 0x7c) = 0x449174be;
  *(undefined4 *)((int)this + 0x80) = 0xade8aa93;
  *(undefined4 *)((int)this + 0x84) = 0x1791a435;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0x1d433b88;
  *(undefined4 *)((int)this + 0x94) = 0x4637f0f6;
  *(undefined4 *)((int)this + 0x98) = 0xe7609f91;
  *(undefined4 *)((int)this + 0x9c) = 0xdd5e6be0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xefff08ea;
  *(undefined4 *)((int)this + 0xac) = 0x44abc7d8;
  *(undefined4 *)((int)this + 0xb0) = 0xbd6dad93;
  *(undefined4 *)((int)this + 0xb4) = 0x6400915f;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  puVar3 = (undefined4 *)((int)this + 0xc0);
  *puVar3 = 0xc4d79f1e;
  *(undefined4 *)((int)this + 0xc4) = 0x436bf1ac;
  *(undefined4 *)((int)this + 200) = 0x38a71da8;
  *(undefined4 *)((int)this + 0xcc) = 0x695404e7;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0x3e800000;
  *(undefined4 *)((int)this + 0xdc) = 0x3f800000;
  *(undefined4 *)((int)this + 0xd8) = 0x3fc00000;
  puVar2 = puVar3;
  puVar4 = (undefined4 *)((int)this + 0xe0);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this + 0xe0) = 0x8c00e96;
  *(undefined4 *)((int)this + 0xe4) = 0x449174be;
  *(undefined4 *)((int)this + 0xe8) = 0xade8aa93;
  *(undefined4 *)((int)this + 0xec) = 0x1791a435;
  puVar2 = puVar3;
  puVar4 = (undefined4 *)((int)this + 0x100);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this + 0x100) = 0x1d433b88;
  *(undefined4 *)((int)this + 0x104) = 0x4637f0f6;
  *(undefined4 *)((int)this + 0x108) = 0xe7609f91;
  *(undefined4 *)((int)this + 0x10c) = 0xdd5e6be0;
  puVar2 = (undefined4 *)((int)this + 0x120);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x120) = 0xefff08ea;
  *(undefined4 *)((int)this + 0x124) = 0x44abc7d8;
  *(undefined4 *)((int)this + 0x128) = 0xbd6dad93;
  *(undefined4 *)((int)this + 300) = 0x6400915f;
  puVar3 = (undefined4 *)((int)this + 0x140);
  *puVar3 = 0xc4d79f1e;
  *(undefined4 *)((int)this + 0x144) = 0x436bf1ac;
  *(undefined4 *)((int)this + 0x148) = 0x38a71da8;
  *(undefined4 *)((int)this + 0x14c) = 0x695404e7;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0x3f800000;
  *(undefined4 *)((int)this + 0x158) = *puVar3;
  *(undefined4 *)((int)this + 0x15c) = *(undefined4 *)((int)this + 0x144);
  *(undefined4 *)((int)this + 0x160) = *(undefined4 *)((int)this + 0x148);
  *(undefined4 *)((int)this + 0x164) = *(undefined4 *)((int)this + 0x14c);
  *(undefined4 *)((int)this + 0x168) = *(undefined4 *)((int)this + 0x150);
  *(undefined4 *)((int)this + 0x16c) = *(undefined4 *)((int)this + 0x154);
  *(undefined4 *)((int)this + 0x158) = 0x8c00e96;
  *(undefined4 *)((int)this + 0x15c) = 0x449174be;
  *(undefined4 *)((int)this + 0x160) = 0xade8aa93;
  *(undefined4 *)((int)this + 0x164) = 0x1791a435;
  *(undefined4 *)((int)this + 0x170) = *puVar3;
  *(undefined4 *)((int)this + 0x174) = *(undefined4 *)((int)this + 0x144);
  *(undefined4 *)((int)this + 0x178) = *(undefined4 *)((int)this + 0x148);
  *(undefined4 *)((int)this + 0x17c) = *(undefined4 *)((int)this + 0x14c);
  *(undefined4 *)((int)this + 0x180) = *(undefined4 *)((int)this + 0x150);
  *(undefined4 *)((int)this + 0x184) = *(undefined4 *)((int)this + 0x154);
  *(undefined4 *)((int)this + 0x170) = 0x1d433b88;
  *(undefined4 *)((int)this + 0x174) = 0x4637f0f6;
  *(undefined4 *)((int)this + 0x178) = 0xe7609f91;
  *(undefined4 *)((int)this + 0x17c) = 0xdd5e6be0;
  *(undefined4 *)((int)this + 0x188) = *puVar3;
  *(undefined4 *)((int)this + 0x18c) = *(undefined4 *)((int)this + 0x144);
  *(undefined4 *)((int)this + 400) = *(undefined4 *)((int)this + 0x148);
  *(undefined4 *)((int)this + 0x194) = *(undefined4 *)((int)this + 0x14c);
  *(undefined4 *)((int)this + 0x198) = *(undefined4 *)((int)this + 0x150);
  *(undefined4 *)((int)this + 0x19c) = *(undefined4 *)((int)this + 0x154);
  *(undefined4 *)((int)this + 0x188) = 0xefff08ea;
  *(undefined4 *)((int)this + 0x18c) = 0x44abc7d8;
  *(undefined4 *)((int)this + 400) = 0xbd6dad93;
  *(undefined4 *)((int)this + 0x194) = 0x6400915f;
  FUN_00c75a50(*(void **)((int)this + 0x14),(int)this);
  *param_5 = *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3c4);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c7d210 @ 00c7d210 ////

undefined4 * __thiscall FUN_00c7d210(void *this,byte param_1)

{
  FUN_00c7c280(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c7d230 @ 00c7d230 ////

void __thiscall FUN_00c7d230(void *this,uint param_1,float *param_2,undefined4 *param_3)

{
  bool bVar1;
  
  FUN_00c754c0(*(int *)((int)this + 0x14));
  bVar1 = (param_1 & 0x100000) != 0;
  if (bVar1) {
    param_1 = param_1 & 0xffefffff;
  }
  FUN_00c7c6e0(this,param_1,param_2,(uint)bVar1);
  *param_3 = *(undefined4 *)(*(int *)((int)this + 0x14) + 0x3c4);
  return;
}


//// FUNCTION FUN_00c7d280 @ 00c7d280 ////

undefined1 __fastcall FUN_00c7d280(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 4;
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    iVar2 = *param_2;
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 == iVar2);
  return 0;
}


//// FUNCTION FUN_00c7d2a0 @ 00c7d2a0 ////

undefined1 __fastcall FUN_00c7d2a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 4;
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    iVar2 = *param_2;
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 == iVar2);
  return 0;
}


//// FUNCTION FUN_00c7d2c0 @ 00c7d2c0 ////

void __fastcall FUN_00c7d2c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad7d4;
  return;
}


//// FUNCTION FUN_00c7d350 @ 00c7d350 ////

undefined4 __thiscall FUN_00c7d350(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  return 0;
}


//// FUNCTION FUN_00c7d3e0 @ 00c7d3e0 ////

undefined4 FUN_00c7d3e0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if ((param_2 != (undefined4 *)0x0) && (param_3 == 1)) {
    iVar1 = FUN_00bd9ef0(*(int *)(param_1 + 4));
    FUN_00bd9fd0(*(void **)(param_1 + 4),0,2);
    FUN_00bd9fd0(*(void **)(param_1 + 4),0,1);
    uVar2 = FUN_00bd9ef0(*(int *)(param_1 + 4));
    FUN_00bd9fd0(*(void **)(param_1 + 4),iVar1,2);
    puVar3 = param_2;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    param_2[2] = uVar2;
    param_2[1] = 2;
    return 0;
  }
  return 0x80070057;
}


//// FUNCTION FUN_00c7d460 @ 00c7d460 ////

LONG FUN_00c7d460(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (LVar1 != 0) {
    return param_1[2];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_00c7d2c0(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return 0;
}


//// FUNCTION FUN_00c7d4a0 @ 00c7d4a0 ////

void __fastcall FUN_00c7d4a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad7d4;
  param_1[2] = 1;
  return;
}


//// FUNCTION FUN_00c7d530 @ 00c7d530 ////

undefined4 * __thiscall FUN_00c7d530(void *this,byte param_1)

{
  FUN_00c7d2c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c7d570 @ 00c7d570 ////

undefined4 __fastcall FUN_00c7d570(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar6 = *(int *)(param_1[0x10] + 0x68);
  iVar2 = *(int *)(param_1[0x10] + 4);
  iVar3 = *(int *)(iVar2 + 0x1c);
  piVar1 = param_1 + 1;
  FUN_00c30a50((int)param_1);
  oggpack_readinit(piVar1,*param_2,param_2[1]);
  uVar4 = oggpack_read(piVar1,1);
  if (uVar4 != 0) {
    return 0xffffff79;
  }
  uVar4 = oggpack_read(piVar1,*(int *)(iVar6 + 0x2c));
  if (uVar4 != 0xffffffff) {
    param_1[10] = uVar4;
    iVar6 = **(int **)(iVar3 + 0x20 + uVar4 * 4);
    param_1[7] = iVar6;
    if (iVar6 == 0) {
      param_1[6] = 0;
      param_1[8] = 0;
    }
    else {
      uVar5 = oggpack_read(piVar1,1);
      param_1[6] = uVar5;
      uVar5 = oggpack_read(piVar1,1);
      param_1[8] = uVar5;
      if (uVar5 == 0xffffffff) {
        return 0xffffff78;
      }
    }
    param_1[0xc] = param_2[4];
    param_1[0xd] = param_2[5];
    param_1[0xe] = param_2[6];
    param_1[0xf] = param_2[7];
    param_1[0xb] = param_2[3];
    param_1[9] = *(int *)(iVar3 + param_1[7] * 4);
    iVar6 = FUN_00c309e0((int)param_1,*(int *)(iVar2 + 4) << 2);
    *param_1 = iVar6;
    iVar6 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        iVar7 = FUN_00c309e0((int)param_1,param_1[9] << 2);
        *(int *)(*param_1 + iVar6 * 4) = iVar7;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar2 + 4));
    }
    uVar8 = (**(code **)((&PTR_PTR_00f7df9c)
                         [*(int *)(iVar3 + 0x120 +
                                  *(int *)(*(int *)(iVar3 + 0x20 + uVar4 * 4) + 0xc) * 4)] + 0x10))
                      ();
    return uVar8;
  }
  return 0xffffff78;
}


//// FUNCTION FUN_00c7d6c0 @ 00c7d6c0 ////

undefined4 __fastcall FUN_00c7d6c0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1[0x10] + 0x68);
  iVar3 = *(int *)(*(int *)(param_1[0x10] + 4) + 0x1c);
  piVar1 = param_1 + 1;
  FUN_00c30a50((int)param_1);
  oggpack_readinit(piVar1,*param_2,param_2[1]);
  uVar5 = oggpack_read(piVar1,1);
  if (uVar5 != 0) {
    return 0xffffff79;
  }
  uVar5 = oggpack_read(piVar1,*(int *)(iVar2 + 0x2c));
  if (uVar5 == 0xffffffff) {
    return 0xffffff78;
  }
  param_1[10] = uVar5;
  iVar2 = **(int **)(iVar3 + 0x20 + uVar5 * 4);
  param_1[7] = iVar2;
  if (iVar2 == 0) {
    param_1[6] = 0;
    param_1[8] = 0;
  }
  else {
    uVar5 = oggpack_read(piVar1,1);
    param_1[6] = uVar5;
    uVar5 = oggpack_read(piVar1,1);
    param_1[8] = uVar5;
    if (uVar5 == 0xffffffff) {
      return 0xffffff78;
    }
  }
  param_1[0xc] = param_2[4];
  param_1[0xd] = param_2[5];
  param_1[0xe] = param_2[6];
  param_1[0xf] = param_2[7];
  uVar4 = param_2[3];
  param_1[9] = 0;
  *param_1 = 0;
  param_1[0xb] = uVar4;
  return 0;
}


//// FUNCTION FUN_00c7d790 @ 00c7d790 ////

undefined4 __fastcall FUN_00c7d790(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_14 [5];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  oggpack_readinit(local_14,*param_2,param_2[1]);
  uVar2 = oggpack_read(local_14,1);
  if (uVar2 != 0) {
    return 0xffffff79;
  }
  iVar4 = 0;
  for (iVar3 = *(int *)(iVar1 + 8); 1 < iVar3; iVar3 = iVar3 >> 1) {
    iVar4 = iVar4 + 1;
  }
  uVar2 = oggpack_read(local_14,iVar4);
  if (uVar2 == 0xffffffff) {
    return 0xffffff78;
  }
  return *(undefined4 *)(iVar1 + **(int **)(iVar1 + 0x20 + uVar2 * 4) * 4);
}


//// FUNCTION FUN_00c7d820 @ 00c7d820 ////

undefined4 __fastcall FUN_00c7d820(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe78);
}


//// FUNCTION FUN_00c7d830 @ 00c7d830 ////

void __fastcall FUN_00c7d830(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad80c;
  return;
}


//// FUNCTION FUN_00c7d980 @ 00c7d980 ////

void __fastcall FUN_00c7d980(int param_1)

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
  puStack_8 = &LAB_00d05eb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x18) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\MapAnalysisImpCGroupModel.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x38);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null group");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  FUN_00bcff70((void *)(*(int *)(param_1 + 0x18) + 0x24),(int *)(*(int *)(param_1 + 0x18) + 0x20),
               param_1);
  *(undefined4 *)(param_1 + 0x18) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c7da70 @ 00c7da70 ////

void __fastcall FUN_00c7da70(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d05ed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00dad8b4;
  local_4 = 2;
  iVar1 = FUN_00bcecf0(param_1 + 0xd);
  while (iVar1 != 0) {
    FUN_00c4fce0(iVar1);
    iVar1 = FUN_00bcecf0(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    FUN_00c7d980((int)param_1);
  }
  local_4._0_1_ = 1;
  param_1[0xc] = &PTR_LAB_00dad844;
  FUN_00bcffc0(param_1 + 0xd);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bcf880(param_1 + 1);
  *param_1 = &PTR_LAB_00dad80c;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c7db10 @ 00c7db10 ////

void __thiscall FUN_00c7db10(void *this,int param_1)

{
  if (*(int *)((int)this + 0x18) != 0) {
    FUN_00c7d980((int)this);
  }
  *(int *)((int)this + 0x18) = param_1;
  FUN_00bcfac0((void *)(param_1 + 0x24),(int *)(param_1 + 0x20),(int)this);
  return;
}


//// FUNCTION FUN_00c7db40 @ 00c7db40 ////

undefined4 * __fastcall FUN_00c7db40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d05ef5;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00dad8b4;
  FUN_00bcf160(param_1 + 1);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0xc] = &PTR_LAB_00dad844;
  FUN_00bcf170(param_1 + 0xd);
  param_1[0xc] = &PTR_LAB_00dad88c;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c7dbd0 @ 00c7dbd0 ////

int * __fastcall FUN_00c7dbd0(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c7dc80 @ 00c7dc80 ////

void __fastcall FUN_00c7dc80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad844;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c7dd20 @ 00c7dd20 ////

undefined4 * __fastcall FUN_00c7dd20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad844;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c7dd40 @ 00c7dd40 ////

undefined4 * __thiscall FUN_00c7dd40(void *this,byte param_1)

{
  FUN_00c7dc80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c7dd60 @ 00c7dd60 ////

void __fastcall FUN_00c7dd60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad844;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c7dd70 @ 00c7dd70 ////

undefined4 * __fastcall FUN_00c7dd70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad844;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00dad88c;
  return param_1;
}


//// FUNCTION FUN_00c7dd90 @ 00c7dd90 ////

undefined4 * __thiscall FUN_00c7dd90(void *this,byte param_1)

{
  FUN_00c7dd60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c7ddc0 @ 00c7ddc0 ////

undefined4 * __thiscall FUN_00c7ddc0(void *this,byte param_1)

{
  FUN_00c7da70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c7dde0 @ 00c7dde0 ////

undefined4 * __thiscall FUN_00c7dde0(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  FUN_00bcf160((undefined4 *)((int)this + 8));
  return this;
}


//// FUNCTION FUN_00c7de00 @ 00c7de00 ////

void __fastcall FUN_00c7de00(int param_1)

{
  FUN_00bcf880((int *)(param_1 + 8));
  return;
}


//// FUNCTION FUN_00c7de10 @ 00c7de10 ////

void __fastcall FUN_00c7de10(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1;
    for (iVar1 = 0x322; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00c7de30 @ 00c7de30 ////

int __fastcall FUN_00c7de30(int param_1)

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


//// FUNCTION FUN_00c7df90 @ 00c7df90 ////

uint * __fastcall FUN_00c7df90(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int local_c;
  uint *local_8;
  
  puVar2 = _calloc(1,0xc88);
  iVar1 = *(int *)(param_1 + 0x1c);
  puVar6 = puVar2;
  for (iVar5 = 0x322; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar3 = oggpack_read(param_2,1);
  if (uVar3 == 0) {
    *puVar2 = 1;
  }
  else {
    uVar3 = oggpack_read(param_2,4);
    *puVar2 = uVar3 + 1;
  }
  uVar3 = oggpack_read(param_2,1);
  if (uVar3 != 0) {
    uVar3 = oggpack_read(param_2,8);
    puVar2[0x121] = uVar3 + 1;
    local_c = 0;
    if (0 < (int)(uVar3 + 1)) {
      local_8 = puVar2 + 0x222;
      do {
        iVar5 = FUN_00c7de30(*(int *)(param_1 + 4));
        uVar3 = oggpack_read(param_2,iVar5);
        local_8[-0x100] = uVar3;
        iVar5 = FUN_00c7de30(*(int *)(param_1 + 4));
        uVar4 = oggpack_read(param_2,iVar5);
        *local_8 = uVar4;
        if (((((int)uVar3 < 0) || ((int)uVar4 < 0)) || (uVar3 == uVar4)) ||
           ((*(int *)(param_1 + 4) <= (int)uVar3 || (*(int *)(param_1 + 4) <= (int)uVar4))))
        goto LAB_00c7e163;
        local_c = local_c + 1;
        local_8 = local_8 + 1;
      } while (local_c < (int)puVar2[0x121]);
    }
  }
  uVar3 = oggpack_read(param_2,2);
  if (0 < (int)uVar3) {
LAB_00c7e163:
    FUN_00c7de10(puVar2);
    return (uint *)0x0;
  }
  if ((1 < (int)*puVar2) && (local_c = 0, puVar6 = puVar2, 0 < *(int *)(param_1 + 4))) {
    do {
      uVar3 = oggpack_read(param_2,4);
      puVar6[1] = uVar3;
      if ((int)*puVar2 <= (int)uVar3) goto LAB_00c7e163;
      local_c = local_c + 1;
      puVar6 = puVar6 + 1;
    } while (local_c < *(int *)(param_1 + 4));
  }
  local_c = 0;
  if (0 < (int)*puVar2) {
    puVar6 = puVar2 + 0x111;
    do {
      oggpack_read(param_2,8);
      uVar3 = oggpack_read(param_2,8);
      puVar6[-0x10] = uVar3;
      if (*(int *)(iVar1 + 0x10) <= (int)uVar3) goto LAB_00c7e163;
      uVar3 = oggpack_read(param_2,8);
      *puVar6 = uVar3;
      if (*(int *)(iVar1 + 0x14) <= (int)uVar3) goto LAB_00c7e163;
      local_c = local_c + 1;
      puVar6 = puVar6 + 1;
    } while (local_c < (int)*puVar2);
  }
  return puVar2;
}


//// FUNCTION FUN_00c7e180 @ 00c7e180 ////

float10 FUN_00c7e180(void)

{
  uint *in_EAX;
  
  return (float10)(*in_EAX & 0x7fffffff) * (float10)7.1771143e-07 - (float10)764.2712;
}


//// FUNCTION FUN_00c7e1a0 @ 00c7e1a0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __fastcall FUN_00c7e1a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined *puVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar24;
  undefined4 uVar25;
  int iVar26;
  undefined3 extraout_var_02;
  float *pfVar27;
  int iVar28;
  uint uVar29;
  int extraout_EDX;
  int *piVar30;
  int *piVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  float *pfVar35;
  int iVar36;
  undefined1 *puVar37;
  float10 fVar38;
  float10 fVar39;
  uint auStack_94 [3];
  float afStack_88 [2];
  int *local_70;
  int *local_6c;
  int *local_54;
  int *local_48;
  int *local_44;
  float local_40;
  int local_2c;
  float *local_24;
  int local_8;
  
  iVar1 = *(int *)(param_1[0x10] + 0x68);
  iVar2 = *(int *)(param_1[0x10] + 4);
  iVar26 = param_1[0x1a];
  iVar3 = *(int *)(iVar2 + 4);
  iVar4 = *(int *)(iVar2 + 0x1c);
  uVar5 = param_1[9];
  afStack_88[1] = 1.8356291e-38;
  iVar12 = iVar3 * -4;
  afStack_88[1 - iVar3] = 1.8356308e-38;
  iVar15 = FUN_00c309e0((int)param_1,iVar3 * 4);
  iVar6 = *(int *)(iVar2 + 4);
  afStack_88[1 - iVar3] = 1.835633e-38;
  piVar16 = (int *)FUN_00c309e0((int)param_1,iVar6 << 2);
  iVar6 = *(int *)(iVar2 + 4);
  afStack_88[1 - iVar3] = 1.8356353e-38;
  piVar17 = (int *)FUN_00c309e0((int)param_1,iVar6 << 2);
  local_40 = *(float *)(iVar26 + 4);
  iVar6 = *(int *)(iVar2 + 4);
  afStack_88[1 - iVar3] = 1.8356393e-38;
  iVar13 = iVar6 * -4;
  local_24 = (float *)(&stack0xffffff80 + iVar13 + iVar12);
  uVar7 = param_1[7];
  piVar8 = *(int **)(iVar4 + 0x220 + uVar7 * 4);
  piVar30 = (int *)(((-(uint)(uVar7 != 0) & 2) + *(int *)(iVar26 + 8)) * 0x30 +
                   *(int *)(iVar1 + 0x38));
  param_1[10] = uVar7;
  local_8 = 0;
  if (0 < *(int *)(iVar2 + 4)) {
    do {
      pfVar27 = *(float **)(*param_1 + local_8 * 4);
      afStack_88[(1 - iVar6) - iVar3] = 1.8356585e-38;
      iVar18 = FUN_00c309e0((int)param_1,(int)uVar5 / 2 << 2);
      *(int *)((iVar15 - (int)(&stack0xffffff80 + iVar13 + iVar12)) + (int)local_24) = iVar18;
      afStack_88[(1 - iVar6) - iVar3] = 1.8356609e-38;
      fVar38 = FUN_00c7e180();
      iVar18 = param_1[7];
      iVar19 = param_1[6];
      afStack_88[(1 - iVar6) - iVar3] = (float)param_1[8];
      afStack_88[-iVar3 - iVar6] = (float)iVar18;
      auStack_94[(2 - iVar6) - iVar3] = iVar19;
      auStack_94[(1 - iVar6) - iVar3] = iVar4;
      auStack_94[-iVar3 - iVar6] = 0xc7e2e2;
      FUN_00c618c0(pfVar27,iVar1 + 4,auStack_94[(1 - iVar6) - iVar3],auStack_94[(2 - iVar6) - iVar3]
                   ,(int)afStack_88[-iVar3 - iVar6],(uint)afStack_88[(1 - iVar6) - iVar3]);
      iVar18 = param_1[7];
      afStack_88[(1 - iVar6) - iVar3] =
           (float)*(undefined4 *)
                   ((iVar15 - (int)(&stack0xffffff80 + iVar13 + iVar12)) + (int)local_24);
      piVar31 = (int *)**(undefined4 **)(iVar1 + 0xc + iVar18 * 4);
      afStack_88[-iVar3 - iVar6] = 1.8356695e-38;
      vorbis_mdct_forward(piVar31,(int)pfVar27,(int)afStack_88[(1 - iVar6) - iVar3]);
      iVar18 = param_1[7];
      afStack_88[(1 - iVar6) - iVar3] = 1.8356723e-38;
      vorbis_drft_forward((int *)(iVar1 + 0x14 + iVar18 * 0xc));
      afStack_88[(1 - iVar6) - iVar3] = 1.8356732e-38;
      fVar39 = FUN_00c7e180();
      fVar39 = fVar39 + (float10)(float)fVar38;
      *pfVar27 = (float)fVar39;
      *local_24 = (float)fVar39;
      if (1 < (int)(uVar5 - 1)) {
        do {
          afStack_88[(1 - iVar6) - iVar3] = 1.8356814e-38;
          fVar39 = FUN_00c7e180();
          fVar39 = fVar39 * (float10)0.5 + (float10)(float)fVar38;
          pfVar27[extraout_EDX + 1 >> 1] = (float)fVar39;
          if ((float10)*local_24 < fVar39) {
            *local_24 = (float)fVar39;
          }
        } while (extraout_EDX + 2 < (int)(uVar5 - 1));
      }
      if (0.0 < *local_24) {
        *local_24 = 0.0;
      }
      if (local_40 < *local_24) {
        local_40 = *local_24;
      }
      local_24 = local_24 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(iVar2 + 4));
  }
  iVar19 = (int)uVar5 / 2;
  iVar18 = iVar19 * 4;
  afStack_88[(1 - iVar6) - iVar3] = 1.8357011e-38;
  iVar20 = FUN_00c309e0((int)param_1,iVar18);
  afStack_88[(1 - iVar6) - iVar3] = 1.835703e-38;
  iVar21 = FUN_00c309e0((int)param_1,iVar18);
  local_8 = 0;
  if (0 < *(int *)(iVar2 + 4)) {
    piVar31 = piVar17;
    local_44 = piVar8;
    do {
      local_44 = local_44 + 1;
      iVar24 = *local_44;
      iVar36 = *(int *)(*param_1 + local_8 * 4);
      pfVar27 = (float *)(iVar18 + iVar36);
      param_1[10] = uVar7;
      afStack_88[(1 - iVar6) - iVar3] = 1.8357196e-38;
      puVar22 = (undefined4 *)FUN_00c309e0((int)param_1,0x3c);
      *piVar31 = (int)puVar22;
      for (iVar28 = 0xf; iVar28 != 0; iVar28 = iVar28 + -1) {
        *puVar22 = 0;
        puVar22 = puVar22 + 1;
      }
      pfVar35 = pfVar27;
      local_54 = (int *)iVar19;
      if (0 < iVar19) {
        do {
          afStack_88[(1 - iVar6) - iVar3] = 1.8357251e-38;
          fVar38 = FUN_00c7e180();
          *pfVar35 = (float)fVar38;
          local_54 = (int *)((int)local_54 + -1);
          pfVar35 = pfVar35 + 1;
        } while (local_54 != (int *)0x0);
      }
      afStack_88[(1 - iVar6) - iVar3] = (float)iVar20;
      afStack_88[-iVar3 - iVar6] = 1.8357292e-38;
      FUN_00c57a80(piVar30,(int)pfVar27,(float *)afStack_88[(1 - iVar6) - iVar3]);
      afStack_88[(1 - iVar6) - iVar3] =
           (float)*(undefined4 *)
                   (&stack0xffffff80 + ((iVar13 + iVar12) - (int)piVar17) + (int)piVar31);
      afStack_88[-iVar3 - iVar6] = local_40;
      auStack_94[(2 - iVar6) - iVar3] = iVar21;
      auStack_94[(1 - iVar6) - iVar3] = 0xc7e4c8;
      FUN_00c57c70(piVar30,iVar36,auStack_94[(2 - iVar6) - iVar3],afStack_88[-iVar3 - iVar6],
                   afStack_88[(1 - iVar6) - iVar3]);
      afStack_88[(1 - iVar6) - iVar3] = (float)iVar36;
      afStack_88[-iVar3 - iVar6] = 1.4013e-45;
      auStack_94[(2 - iVar6) - iVar3] = iVar21;
      auStack_94[(1 - iVar6) - iVar3] = 0xc7e4da;
      FUN_00c57da0(piVar30,iVar20,auStack_94[(2 - iVar6) - iVar3],(int)afStack_88[-iVar3 - iVar6],
                   (int)afStack_88[(1 - iVar6) - iVar3]);
      iVar28 = piVar8[iVar24 + 0x101];
      if (*(int *)(iVar4 + 800 + iVar28 * 4) != 1) {
        return 0xffffffff;
      }
      afStack_88[(1 - iVar6) - iVar3] = (float)iVar36;
      afStack_88[-iVar3 - iVar6] = (float)pfVar27;
      iVar28 = *(int *)(*(int *)(iVar1 + 0x30) + iVar28 * 4);
      auStack_94[(2 - iVar6) - iVar3] = 0xc7e50d;
      piVar23 = FUN_00c818d0(param_1,iVar28,(int)afStack_88[-iVar3 - iVar6],
                             (float *)afStack_88[(1 - iVar6) - iVar3]);
      *(int **)(*piVar31 + 0x1c) = piVar23;
      afStack_88[(1 - iVar6) - iVar3] = 1.8357448e-38;
      bVar14 = FUN_00c33880((int)param_1);
      if ((CONCAT31(extraout_var,bVar14) != 0) && (*(int *)(*piVar31 + 0x1c) != 0)) {
        afStack_88[(1 - iVar6) - iVar3] = (float)iVar36;
        afStack_88[-iVar3 - iVar6] = 2.8026e-45;
        auStack_94[(2 - iVar6) - iVar3] = iVar21;
        auStack_94[(1 - iVar6) - iVar3] = 0xc7e540;
        FUN_00c57da0(piVar30,iVar20,auStack_94[(2 - iVar6) - iVar3],(int)afStack_88[-iVar3 - iVar6],
                     (int)afStack_88[(1 - iVar6) - iVar3]);
        afStack_88[(1 - iVar6) - iVar3] = (float)iVar36;
        afStack_88[-iVar3 - iVar6] = (float)pfVar27;
        iVar28 = *(int *)(*(int *)(iVar1 + 0x30) + piVar8[iVar24 + 0x101] * 4);
        auStack_94[(2 - iVar6) - iVar3] = 0xc7e562;
        piVar23 = FUN_00c818d0(param_1,iVar28,(int)afStack_88[-iVar3 - iVar6],
                               (float *)afStack_88[(1 - iVar6) - iVar3]);
        iVar28 = *piVar31;
        afStack_88[(1 - iVar6) - iVar3] = (float)iVar36;
        *(int **)(iVar28 + 0x38) = piVar23;
        afStack_88[-iVar3 - iVar6] = 0.0;
        auStack_94[(2 - iVar6) - iVar3] = iVar21;
        auStack_94[(1 - iVar6) - iVar3] = 0xc7e579;
        FUN_00c57da0(piVar30,iVar20,auStack_94[(2 - iVar6) - iVar3],(int)afStack_88[-iVar3 - iVar6],
                     (int)afStack_88[(1 - iVar6) - iVar3]);
        afStack_88[(1 - iVar6) - iVar3] = (float)iVar36;
        afStack_88[-iVar3 - iVar6] = (float)pfVar27;
        iVar36 = *(int *)(*(int *)(iVar1 + 0x30) + piVar8[iVar24 + 0x101] * 4);
        auStack_94[(2 - iVar6) - iVar3] = 0xc7e59b;
        piVar23 = FUN_00c818d0(param_1,iVar36,(int)afStack_88[-iVar3 - iVar6],
                               (float *)afStack_88[(1 - iVar6) - iVar3]);
        *(int **)*piVar31 = piVar23;
        local_54 = (int *)0x4;
        iVar36 = 0x10000;
        do {
          puVar22 = (undefined4 *)*piVar31;
          uVar25 = puVar22[7];
          afStack_88[(1 - iVar6) - iVar3] = (float)(iVar36 / 7);
          uVar9 = *puVar22;
          afStack_88[-iVar3 - iVar6] = (float)uVar25;
          auStack_94[(2 - iVar6) - iVar3] = uVar9;
          iVar28 = *(int *)(*(int *)(iVar1 + 0x30) + piVar8[iVar24 + 0x101] * 4);
          auStack_94[(1 - iVar6) - iVar3] = 0xc7e5ea;
          iVar28 = FUN_00c81d10((int)param_1,iVar28,auStack_94[(2 - iVar6) - iVar3],
                                (uint *)afStack_88[-iVar3 - iVar6],
                                (int)afStack_88[(1 - iVar6) - iVar3]);
          *(int *)((int)local_54 + *piVar31) = iVar28;
          iVar36 = iVar36 + 0x10000;
          local_54 = (int *)((int)local_54 + 4);
        } while (iVar36 < 0x70000);
        local_54 = (int *)0x20;
        iVar36 = 0x10000;
        do {
          iVar28 = *piVar31;
          uVar25 = *(undefined4 *)(iVar28 + 0x38);
          afStack_88[(1 - iVar6) - iVar3] = (float)(iVar36 / 7);
          uVar9 = *(undefined4 *)(iVar28 + 0x1c);
          afStack_88[-iVar3 - iVar6] = (float)uVar25;
          auStack_94[(2 - iVar6) - iVar3] = uVar9;
          iVar28 = *(int *)(*(int *)(iVar1 + 0x30) + piVar8[iVar24 + 0x101] * 4);
          auStack_94[(1 - iVar6) - iVar3] = 0xc7e64d;
          iVar28 = FUN_00c81d10((int)param_1,iVar28,auStack_94[(2 - iVar6) - iVar3],
                                (uint *)afStack_88[-iVar3 - iVar6],
                                (int)afStack_88[(1 - iVar6) - iVar3]);
          *(int *)((int)local_54 + *piVar31) = iVar28;
          iVar36 = iVar36 + 0x10000;
          local_54 = (int *)((int)local_54 + 4);
        } while (iVar36 < 0x70000);
      }
      local_8 = local_8 + 1;
      piVar31 = piVar31 + 1;
    } while (local_8 < *(int *)(iVar2 + 4));
  }
  *(float *)(iVar26 + 4) = local_40;
  iVar19 = *(int *)(iVar2 + 4);
  afStack_88[(1 - iVar6) - iVar3] = 1.8358013e-38;
  puVar37 = &stack0xffffff80 + iVar19 * -0x10 + iVar13 + iVar12;
  afStack_88[((1 - iVar19) - iVar6) - iVar3] = 1.8358037e-38;
  afStack_88[((iVar19 * -2 + 1) - iVar6) - iVar3] = 1.8358061e-38;
  afStack_88[((iVar19 * -3 + 1) - iVar6) - iVar3] = 1.8358085e-38;
  if (piVar8[0x121] != 0) {
    afStack_88[((iVar19 * -4 + 1) - iVar6) - iVar3] = (float)iVar15;
    afStack_88[(iVar19 * -4 - iVar6) - iVar3] = (float)piVar8;
    auStack_94[((iVar19 * -4 + 2) - iVar6) - iVar3] = (uint)piVar30;
    auStack_94[((iVar19 * -4 + 1) - iVar6) - iVar3] = 0xc7e707;
    local_70 = FUN_00c582d0((int)param_1,iVar4 + 0xb34,
                            (int *)auStack_94[((iVar19 * -4 + 2) - iVar6) - iVar3],
                            (int)afStack_88[(iVar19 * -4 - iVar6) - iVar3],
                            (int)afStack_88[((iVar19 * -4 + 1) - iVar6) - iVar3]);
    afStack_88[((iVar19 * -4 + 1) - iVar6) - iVar3] = (float)local_70;
    afStack_88[(iVar19 * -4 - iVar6) - iVar3] = (float)piVar8;
    auStack_94[((iVar19 * -4 + 2) - iVar6) - iVar3] = 0xc7e718;
    local_6c = FUN_00c58440((int)param_1,piVar30,(int)afStack_88[(iVar19 * -4 - iVar6) - iVar3],
                            (int)afStack_88[((iVar19 * -4 + 1) - iVar6) - iVar3]);
  }
  puVar22 = (undefined4 *)(&stack0xffffff80 + iVar19 * -0x10 + iVar13 + iVar12);
  for (uVar29 = *(uint *)(iVar2 + 4) & 0x3fffffff; uVar29 != 0; uVar29 = uVar29 - 1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
  for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
    *(undefined1 *)puVar22 = 0;
    puVar22 = (undefined4 *)((int)puVar22 + 1);
  }
  puVar34 = &stack0xffffff80 + iVar19 * -0x10 + iVar13 + iVar12;
  if ((*(int *)(piVar30[1] + 500) != 0) &&
     (local_8 = 0, puVar34 = &stack0xffffff80 + iVar19 * -0x10 + iVar13 + iVar12,
     0 < *(int *)(iVar2 + 4))) {
    puVar32 = &stack0xffffff80 + iVar19 * -0x10 + iVar13 + iVar12;
    do {
      iVar20 = *(int *)(puVar37 +
                       (iVar15 - (int)(&stack0xffffff80 + iVar19 * -0x10 + iVar13 + iVar12)));
      *(undefined4 *)(puVar32 + -4) = 0xc7e78f;
      iVar21 = -((uVar5 & 0x3fffffff) * 2 + 3 & 0xfffffffc);
      puVar34 = puVar32 + iVar21;
      *(int *)(puVar32 + iVar21 + -4) = (int)puVar32 + iVar21;
      *(int *)puVar37 = (int)puVar32 + iVar21;
      *(undefined4 *)(puVar32 + iVar21 + -8) = 0xc7e79e;
      FUN_00c58590(piVar30,iVar20,*(int *)(puVar32 + iVar21 + -4));
      local_8 = local_8 + 1;
      puVar37 = puVar37 + 4;
      puVar32 = puVar32 + iVar21;
    } while (local_8 < *(int *)(iVar2 + 4));
  }
  *(undefined4 *)(puVar34 + -4) = 0xc7e7b9;
  bVar14 = FUN_00c33880((int)param_1);
  local_2c = (-(uint)(CONCAT31(extraout_var_00,bVar14) != 0) & 0xfffffff9) + 7;
  *(undefined4 *)(puVar34 + -4) = 0xc7e7cf;
  bVar14 = FUN_00c33880((int)param_1);
  if (local_2c <= (int)((-(uint)(CONCAT31(extraout_var_01,bVar14) != 0) & 7) + 7)) {
    local_54 = (int *)(iVar26 + 0xc + local_2c * 4);
    do {
      piVar31 = param_1 + 1;
      *(undefined4 *)(puVar34 + -4) = 1;
      *(undefined4 *)(puVar34 + -8) = 0xc7e7fb;
      oggpack_write(piVar31,0,*(int *)(puVar34 + -4));
      *(undefined4 *)(puVar34 + -4) = *(undefined4 *)(iVar1 + 0x2c);
      *(undefined4 *)(puVar34 + -8) = 0xc7e80c;
      oggpack_write(piVar31,uVar7,*(int *)(puVar34 + -4));
      if (param_1[7] != 0) {
        uVar5 = param_1[6];
        *(undefined4 *)(puVar34 + -4) = 1;
        *(undefined4 *)(puVar34 + -8) = 0xc7e81f;
        oggpack_write(piVar31,uVar5,*(int *)(puVar34 + -4));
        uVar5 = param_1[8];
        *(undefined4 *)(puVar34 + -4) = 1;
        *(undefined4 *)(puVar34 + -8) = 0xc7e82b;
        oggpack_write(piVar31,uVar5,*(int *)(puVar34 + -4));
      }
      local_8 = 0;
      if (0 < *(int *)(iVar2 + 4)) {
        piVar31 = piVar16;
        local_48 = piVar8;
        do {
          local_48 = local_48 + 1;
          iVar26 = *local_48;
          iVar20 = *(int *)((iVar15 - (int)piVar16) + (int)piVar31);
          iVar21 = *(int *)(*param_1 + local_8 * 4);
          *(undefined4 *)(puVar34 + -4) = 0xc7e891;
          iVar24 = FUN_00c309e0((int)param_1,iVar18);
          *piVar31 = iVar24;
          *(int *)(puVar34 + -4) = iVar24;
          *(undefined4 *)(puVar34 + -8) =
               *(undefined4 *)
                (*(int *)(((int)piVar17 - (int)piVar16) + (int)piVar31) + local_2c * 4);
          iVar26 = *(int *)(*(int *)(iVar1 + 0x30) + piVar8[iVar26 + 0x101] * 4);
          *(undefined4 *)(puVar34 + -0xc) = 0xc7e8c1;
          uVar25 = FUN_00c81dc0((int)param_1,iVar26,*(uint **)(puVar34 + -8),
                                *(undefined4 **)(puVar34 + -4));
          *(undefined4 *)(&stack0xffffff80 + (iVar12 - (int)piVar16) + (int)piVar31) = uVar25;
          *(undefined4 *)(puVar34 + -4) =
               *(undefined4 *)(iVar4 + ((param_1[7] + 0x36) * 0xf + local_2c) * 4);
          *(int *)(puVar34 + -8) = iVar21;
          *(int *)(puVar34 + -0xc) = iVar24;
          *(undefined4 *)(puVar34 + -0x10) = 0xc7e8ec;
          FUN_00c57970(piVar30,iVar20,*(int *)(puVar34 + -0xc),*(int *)(puVar34 + -8),
                       *(int *)(puVar34 + -4));
          *(undefined4 *)(puVar34 + -4) =
               *(undefined4 *)
                (&stack0xffffff80 + ((iVar19 * -0x10 + iVar13 + iVar12) - (int)piVar16) +
                (int)piVar31);
          *(int *)(puVar34 + -8) = iVar18 + iVar21;
          *(undefined4 *)(puVar34 + -0xc) = 0xc7e903;
          FUN_00c58650(piVar30,iVar21,*(float **)(puVar34 + -8),*(int *)(puVar34 + -4));
          local_8 = local_8 + 1;
          piVar31 = piVar31 + 1;
        } while (local_8 < *(int *)(iVar2 + 4));
      }
      if (piVar8[0x121] != 0) {
        *(undefined4 *)(puVar34 + -4) =
             *(undefined4 *)(iVar4 + ((param_1[7] + 0x36) * 0xf + local_2c) * 4);
        *(undefined1 **)(puVar34 + -8) = &stack0xffffff80 + iVar12;
        *(int **)(puVar34 + -0xc) = piVar16;
        *(int **)(puVar34 + -0x10) = local_6c;
        iVar26 = *param_1;
        *(int **)(puVar34 + -0x14) = local_70;
        *(int *)(puVar34 + -0x18) = iVar26;
        *(int **)(puVar34 + -0x1c) = piVar8;
        *(int **)(puVar34 + -0x20) = piVar30;
        *(undefined4 *)(puVar34 + -0x24) = 0xc7e96b;
        FUN_00c58920(local_2c,iVar4 + 0xb34,*(int **)(puVar34 + -0x20),*(int *)(puVar34 + -0x1c),
                     *(int *)(puVar34 + -0x18),*(int *)(puVar34 + -0x14),*(int **)(puVar34 + -0x10),
                     *(undefined4 *)(puVar34 + -0xc),*(int *)(puVar34 + -8),*(int *)(puVar34 + -4));
      }
      local_8 = 0;
      if (0 < *piVar8) {
        local_44 = piVar8 + 0x111;
        do {
          iVar26 = *local_44;
          iVar20 = 0;
          local_40 = 0.0;
          puVar22 = (undefined4 *)(&stack0xffffff80 + iVar19 * -0xc + iVar13 + iVar12);
          local_48 = piVar8;
          if (0 < *(int *)(iVar2 + 4)) {
            do {
              local_48 = local_48 + 1;
              if (*local_48 == local_8) {
                *puVar22 = 0;
                if (*(int *)(&stack0xffffff80 + iVar20 * 4 + iVar12) != 0) {
                  *puVar22 = 1;
                }
                puVar22[iVar19 * 2] = *(undefined4 *)(*param_1 + iVar20 * 4);
                puVar22[iVar6 + iVar3 + iVar19 + (-iVar6 - iVar3)] =
                     *(int *)(*param_1 + iVar20 * 4) + iVar18;
                local_40 = (float)((int)local_40 + 1);
                puVar22 = puVar22 + 1;
              }
              iVar20 = iVar20 + 1;
            } while (iVar20 < *(int *)(iVar2 + 4));
          }
          puVar10 = (&PTR_DAT_00f7df90)[*(int *)(iVar4 + 0x520 + iVar26 * 4)];
          *(float *)(puVar34 + -4) = local_40;
          *(undefined1 **)(puVar34 + -8) = &stack0xffffff80 + iVar19 * -0xc + iVar13 + iVar12;
          *(undefined1 **)(puVar34 + -0xc) = &stack0xffffff80 + iVar19 * -8 + iVar13 + iVar12;
          pcVar11 = *(code **)(puVar10 + 0x14);
          puVar33 = puVar34 + -0x10;
          *(undefined4 *)(puVar34 + -0x10) = 0xc7ea38;
          uVar25 = (*pcVar11)();
          puVar10 = (&PTR_DAT_00f7df90)[*(int *)(iVar4 + 0x520 + iVar26 * 4)];
          *(undefined4 *)(puVar33 + -4) = uVar25;
          *(float *)(puVar33 + -8) = local_40;
          *(undefined1 **)(puVar33 + -0xc) = &stack0xffffff80 + iVar19 * -0xc + iVar13 + iVar12;
          *(undefined4 *)(puVar33 + -0x10) = 0;
          *(undefined1 **)(puVar33 + -0x14) = &stack0xffffff80 + iVar19 * -8 + iVar13 + iVar12;
          pcVar11 = *(code **)(puVar10 + 0x18);
          puVar34 = puVar33 + -0x18;
          *(undefined4 *)(puVar33 + -0x18) = 0xc7ea65;
          (*pcVar11)();
          local_8 = local_8 + 1;
          local_44 = local_44 + 1;
        } while (local_8 < *piVar8);
      }
      *(undefined4 *)(puVar34 + -4) = 0xc7ea8f;
      oggpack_writealign(param_1 + 1);
      *(undefined4 *)(puVar34 + -4) = 0xc7ea96;
      iVar26 = oggpack_bytes(param_1 + 1);
      *local_54 = iVar26;
      local_54 = local_54 + 1;
      local_2c = local_2c + 1;
      *(undefined4 *)(puVar34 + -4) = 0xc7eaac;
      bVar14 = FUN_00c33880((int)param_1);
    } while (local_2c <= (int)((-(uint)(CONCAT31(extraout_var_02,bVar14) != 0) & 7) + 7));
  }
  return 0;
}


//// FUNCTION FUN_00c7ead0 @ 00c7ead0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __fastcall FUN_00c7ead0(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined4 *puVar26;
  undefined4 uStack_4c;
  int local_30;
  int *local_20;
  int *local_1c;
  int *local_c;
  undefined4 *puVar20;
  
  iVar3 = *(int *)(param_1[0x10] + 4);
  iVar4 = *(int *)(param_1[0x10] + 0x68);
  iVar25 = *(int *)(iVar3 + 0x1c);
  uVar5 = *(uint *)(iVar25 + param_1[7] * 4);
  param_1[9] = uVar5;
  iVar6 = *(int *)(iVar3 + 4);
  uStack_4c = 0xc7eb19;
  puVar19 = &stack0xffffffb8 + iVar6 * -0x10;
  (&uStack_4c)[-iVar6] = 0xc7eb29;
  (&uStack_4c)[iVar6 * -2] = 0xc7eb39;
  (&uStack_4c)[iVar6 * -3] = 0xc7eb49;
  iVar23 = 0;
  if (0 < iVar6) {
    puVar12 = (uint *)(&stack0xffffffb8 + iVar6 * -0xc);
    puVar19 = &stack0xffffffb8 + iVar6 * -0x10;
    local_c = param_2;
    do {
      local_c = local_c + 1;
      pcVar7 = *(code **)((&PTR_DAT_00f7df88)
                          [*(int *)(iVar25 + 800 + param_2[*local_c + 0x101] * 4)] + 0x14);
      puVar20 = (undefined4 *)(puVar19 + -4);
      puVar19 = puVar19 + -4;
      *puVar20 = 0xc7eba4;
      uVar10 = (*pcVar7)();
      puVar12[-iVar6] = uVar10;
      *puVar12 = (uint)(uVar10 != 0);
      puVar26 = *(undefined4 **)(*param_1 + iVar23 * 4);
      for (uVar10 = (uVar5 & 0x3fffffff) >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar26 = 0;
        puVar26 = puVar26 + 1;
      }
      for (iVar14 = (uVar5 & 1) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined1 *)puVar26 = 0;
        puVar26 = (undefined4 *)((int)puVar26 + 1);
      }
      iVar23 = iVar23 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar23 < *(int *)(iVar3 + 4));
  }
  local_c = (int *)0x0;
  if (0 < param_2[0x121]) {
    piVar11 = param_2 + 0x222;
    do {
      if ((*(int *)(&stack0xffffffb8 + piVar11[-0x100] * 4 + iVar6 * -0xc) != 0) ||
         (*(int *)(&stack0xffffffb8 + *piVar11 * 4 + iVar6 * -0xc) != 0)) {
        *(undefined4 *)(&stack0xffffffb8 + piVar11[-0x100] * 4 + iVar6 * -0xc) = 1;
        *(undefined4 *)(&stack0xffffffb8 + *piVar11 * 4 + iVar6 * -0xc) = 1;
      }
      local_c = (int *)((int)local_c + 1);
      piVar11 = piVar11 + 1;
    } while ((int)local_c < param_2[0x121]);
  }
  local_c = (int *)0x0;
  if (0 < *param_2) {
    local_20 = param_2 + 0x111;
    do {
      iVar14 = 0;
      iVar23 = 0;
      puVar12 = (uint *)(&stack0xffffffb8 + iVar6 * -8);
      local_1c = param_2;
      if (0 < *(int *)(iVar3 + 4)) {
        do {
          local_1c = local_1c + 1;
          puVar13 = puVar12;
          if ((int *)*local_1c == local_c) {
            iVar14 = iVar14 + 1;
            puVar13 = puVar12 + 1;
            *puVar12 = (uint)(*(int *)(&stack0xffffffb8 + iVar23 * 4 + iVar6 * -0xc) != 0);
            puVar13[iVar6 + -1] = *(uint *)(*param_1 + iVar23 * 4);
          }
          iVar23 = iVar23 + 1;
          puVar12 = puVar13;
        } while (iVar23 < *(int *)(iVar3 + 4));
      }
      puVar8 = (&PTR_DAT_00f7df90)[*(int *)(iVar25 + 0x520 + *local_20 * 4)];
      *(int *)(puVar19 + -4) = iVar14;
      *(undefined1 **)(puVar19 + -8) = &stack0xffffffb8 + iVar6 * -8;
      *(undefined1 **)(puVar19 + -0xc) = &stack0xffffffb8 + iVar6 * -4;
      pcVar7 = *(code **)(puVar8 + 0x1c);
      puVar21 = (undefined4 *)(puVar19 + -0x10);
      puVar19 = puVar19 + -0x10;
      *puVar21 = 0xc7ecdf;
      (*pcVar7)();
      local_c = (int *)((int)local_c + 1);
      local_20 = local_20 + 1;
    } while ((int)local_c < *param_2);
  }
  local_30 = param_2[0x121];
  if (-1 < local_30 + -1) {
    iVar23 = (int)uVar5 / 2;
    piVar11 = param_2 + local_30 + 0x221;
    do {
      iVar9 = *(int *)(*param_1 + piVar11[-0x100] * 4);
      iVar17 = *(int *)(*param_1 + *piVar11 * 4);
      iVar14 = 0;
      if (3 < iVar23) {
        pfVar15 = (float *)(iVar9 + 4);
        iVar18 = iVar17 - iVar9;
        iVar24 = (iVar23 - 4U >> 2) + 1;
        pfVar16 = (float *)(iVar17 + 0xc);
        iVar14 = iVar24 * 4;
        do {
          fVar1 = pfVar15[-1];
          fVar2 = pfVar16[-3];
          if (fVar1 <= 0.0) {
            if (fVar2 <= 0.0) {
              pfVar16[-3] = fVar1;
              fVar2 = fVar1 - fVar2;
              goto LAB_00c7edb9;
            }
            pfVar16[-3] = fVar2 + fVar1;
          }
          else if (fVar2 <= 0.0) {
            pfVar16[-3] = fVar1;
            fVar2 = fVar2 + fVar1;
LAB_00c7edb9:
            pfVar15[-1] = fVar2;
          }
          else {
            pfVar16[-3] = fVar1 - fVar2;
          }
          fVar1 = *pfVar15;
          fVar2 = *(float *)(iVar18 + (int)pfVar15);
          if (fVar1 <= 0.0) {
            if (fVar2 <= 0.0) {
              *(float *)(iVar18 + (int)pfVar15) = fVar1;
              fVar2 = fVar1 - fVar2;
              goto LAB_00c7ee06;
            }
            *(float *)(iVar18 + (int)pfVar15) = fVar2 + fVar1;
          }
          else if (fVar2 <= 0.0) {
            *(float *)(iVar18 + (int)pfVar15) = fVar1;
            fVar2 = fVar2 + fVar1;
LAB_00c7ee06:
            *pfVar15 = fVar2;
          }
          else {
            *(float *)(iVar18 + (int)pfVar15) = fVar1 - fVar2;
          }
          fVar1 = pfVar15[1];
          fVar2 = pfVar16[-1];
          if (fVar1 <= 0.0) {
            if (fVar2 <= 0.0) {
              pfVar16[-1] = fVar1;
              fVar2 = fVar1 - fVar2;
              goto LAB_00c7ee53;
            }
            pfVar16[-1] = fVar2 + fVar1;
          }
          else if (fVar2 <= 0.0) {
            pfVar16[-1] = fVar1;
            fVar2 = fVar2 + fVar1;
LAB_00c7ee53:
            pfVar15[1] = fVar2;
          }
          else {
            pfVar16[-1] = fVar1 - fVar2;
          }
          fVar1 = pfVar15[2];
          fVar2 = *pfVar16;
          if (fVar1 <= 0.0) {
            if (fVar2 <= 0.0) {
              *pfVar16 = fVar1;
              fVar2 = fVar1 - fVar2;
              goto LAB_00c7ee9c;
            }
            *pfVar16 = fVar2 + fVar1;
          }
          else if (fVar2 <= 0.0) {
            *pfVar16 = fVar1;
            fVar2 = fVar2 + fVar1;
LAB_00c7ee9c:
            pfVar15[2] = fVar2;
          }
          else {
            *pfVar16 = fVar1 - fVar2;
          }
          pfVar15 = pfVar15 + 4;
          pfVar16 = pfVar16 + 4;
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
      }
      if (iVar14 < iVar23) {
        pfVar15 = (float *)(iVar9 + iVar14 * 4);
        iVar17 = iVar17 - iVar9;
        iVar14 = iVar23 - iVar14;
        do {
          fVar1 = *pfVar15;
          fVar2 = *(float *)((int)pfVar15 + iVar17);
          if (fVar1 <= 0.0) {
            if (fVar2 <= 0.0) {
              *(float *)((int)pfVar15 + iVar17) = fVar1;
              fVar2 = fVar1 - fVar2;
              goto LAB_00c7ef18;
            }
            *(float *)((int)pfVar15 + iVar17) = fVar2 + fVar1;
          }
          else if (fVar2 <= 0.0) {
            *(float *)((int)pfVar15 + iVar17) = fVar1;
            fVar2 = fVar2 + fVar1;
LAB_00c7ef18:
            *pfVar15 = fVar2;
          }
          else {
            *(float *)((int)pfVar15 + iVar17) = fVar1 - fVar2;
          }
          pfVar15 = pfVar15 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      piVar11 = piVar11 + -1;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  iVar23 = 0;
  piVar11 = param_2;
  if (0 < *(int *)(iVar3 + 4)) {
    do {
      puVar8 = (&PTR_DAT_00f7df88)[*(int *)(iVar25 + 800 + param_2[piVar11[1] + 0x101] * 4)];
      *(undefined4 *)(puVar19 + -4) = *(undefined4 *)(*param_1 + iVar23 * 4);
      *(undefined4 *)(puVar19 + -8) = *(undefined4 *)(&stack0xffffffb8 + iVar23 * 4 + iVar6 * -0x10)
      ;
      pcVar7 = *(code **)(puVar8 + 0x18);
      puVar22 = (undefined4 *)(puVar19 + -0xc);
      puVar19 = puVar19 + -0xc;
      *puVar22 = 0xc7ef8a;
      (*pcVar7)();
      iVar23 = iVar23 + 1;
      piVar11 = piVar11 + 1;
    } while (iVar23 < *(int *)(iVar3 + 4));
  }
  iVar25 = 0;
  if (0 < *(int *)(iVar3 + 4)) {
    do {
      pfVar15 = *(float **)(*param_1 + iVar25 * 4);
      piVar11 = (int *)**(undefined4 **)(iVar4 + 0xc + param_1[7] * 4);
      *(float **)(puVar19 + -4) = pfVar15;
      *(undefined4 *)(puVar19 + -8) = 0xc7efbb;
      vorbis_mdct_backward(piVar11,pfVar15,*(float **)(puVar19 + -4));
      iVar25 = iVar25 + 1;
    } while (iVar25 < *(int *)(iVar3 + 4));
  }
  return 0;
}


//// FUNCTION FUN_00c7efe0 @ 00c7efe0 ////

void __fastcall FUN_00c7efe0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1;
    for (iVar1 = 0x1c5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00c7f000 @ 00c7f000 ////

void __fastcall FUN_00c7f000(int param_1)

{
  void *_Memory;
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      _Memory = *(void **)(*(int *)(param_1 + 0x14) + iVar1 * 4);
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 4));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x14));
}


//// FUNCTION FUN_00c7f080 @ 00c7f080 ////

int __fastcall FUN_00c7f080(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


//// FUNCTION FUN_00c7f090 @ 00c7f090 ////

int __fastcall FUN_00c7f090(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + (param_1 & 1);
  }
  return iVar1;
}


//// FUNCTION FUN_00c7f190 @ 00c7f190 ////

uint * __fastcall FUN_00c7f190(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint *local_c;
  int local_8;
  
  iVar6 = 0;
  local_8 = 0;
  puVar2 = _calloc(1,0x714);
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar3 = oggpack_read(param_2,0x18);
  *puVar2 = uVar3;
  uVar3 = oggpack_read(param_2,0x18);
  puVar2[1] = uVar3;
  uVar3 = oggpack_read(param_2,0x18);
  puVar2[2] = uVar3 + 1;
  uVar3 = oggpack_read(param_2,6);
  puVar2[3] = uVar3 + 1;
  uVar3 = oggpack_read(param_2,8);
  puVar2[4] = uVar3;
  iVar7 = 0;
  if (0 < (int)puVar2[3]) {
    local_c = puVar2 + 5;
    do {
      uVar3 = oggpack_read(param_2,3);
      uVar4 = oggpack_read(param_2,1);
      if (uVar4 != 0) {
        uVar4 = oggpack_read(param_2,5);
        uVar3 = uVar3 | uVar4 << 3;
      }
      *local_c = uVar3;
      iVar6 = FUN_00c7f090(uVar3);
      iVar6 = local_8 + iVar6;
      iVar7 = iVar7 + 1;
      local_c = local_c + 1;
      local_8 = iVar6;
    } while (iVar7 < (int)puVar2[3]);
  }
  if (0 < iVar6) {
    puVar5 = puVar2 + 0x45;
    local_8 = iVar6;
    do {
      uVar3 = oggpack_read(param_2,8);
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if ((int)puVar2[4] < iVar1) {
    iVar7 = 0;
    if (0 < iVar6) {
      puVar5 = puVar2 + 0x45;
      do {
        if (iVar1 <= (int)*puVar5) goto LAB_00c7f2db;
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar7 < iVar6);
    }
    return puVar2;
  }
LAB_00c7f2db:
  FUN_00c7efe0(puVar2);
  return (uint *)0x0;
}


//// FUNCTION FUN_00c7f2f0 @ 00c7f2f0 ////

int * __fastcall FUN_00c7f2f0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  size_t _NumOfElements;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined4 unaff_EDI;
  int iVar9;
  float10 fVar10;
  ulonglong uVar11;
  undefined2 uVar12;
  int local_18;
  size_t local_10;
  
  piVar2 = _calloc(1,0x2c);
  iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x1c);
  *piVar2 = param_2;
  piVar2[1] = *(int *)(param_2 + 0xc);
  piVar2[3] = *(int *)(iVar8 + 0xb20);
  piVar3 = (int *)(*(int *)(param_2 + 0x10) * 0x2c + *(int *)(iVar8 + 0xb20));
  piVar2[4] = (int)piVar3;
  iVar1 = *piVar3;
  iVar9 = 0;
  local_18 = 0;
  local_10 = 0;
  pvVar4 = _calloc(piVar2[1],4);
  uVar12 = (undefined2)unaff_EDI;
  piVar2[5] = (int)pvVar4;
  if (0 < piVar2[1]) {
    puVar7 = (uint *)(param_2 + 0x14);
    do {
      _NumOfElements = FUN_00c7f080(*puVar7);
      if (_NumOfElements != 0) {
        if ((int)local_10 < (int)_NumOfElements) {
          local_10 = _NumOfElements;
        }
        pvVar4 = _calloc(_NumOfElements,4);
        *(void **)(piVar2[5] + iVar9 * 4) = pvVar4;
        iVar6 = 0;
        if (0 < (int)_NumOfElements) {
          piVar3 = (int *)(param_2 + 0x114 + local_18 * 4);
          do {
            if ((*puVar7 & 1 << ((byte)iVar6 & 0x1f)) != 0) {
              *(int *)(*(int *)(piVar2[5] + iVar9 * 4) + iVar6 * 4) =
                   *piVar3 * 0x2c + *(int *)(iVar8 + 0xb20);
              local_18 = local_18 + 1;
              piVar3 = piVar3 + 1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)_NumOfElements);
        }
      }
      uVar12 = (undefined2)unaff_EDI;
      iVar9 = iVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar9 < piVar2[1]);
  }
  fVar10 = (float10)FUN_00ace9b0();
  FUN_00acf400((double)(fVar10 + (float10)0.5),uVar12);
  uVar11 = FUN_00acd42c();
  piVar2[6] = (int)uVar11;
  piVar2[2] = local_10;
  pvVar4 = _malloc((int)uVar11 * 4);
  piVar2[7] = (int)pvVar4;
  iVar8 = 0;
  if (0 < piVar2[6]) {
    do {
      iVar9 = piVar2[6] / piVar2[1];
      pvVar4 = _malloc(iVar1 * 4);
      *(void **)(piVar2[7] + iVar8 * 4) = pvVar4;
      iVar6 = 0;
      local_10 = iVar8;
      if (0 < iVar1) {
        do {
          iVar5 = (int)local_10 / iVar9;
          local_10 = local_10 - iVar5 * iVar9;
          iVar9 = iVar9 / piVar2[1];
          iVar6 = iVar6 + 1;
          *(int *)(*(int *)(piVar2[7] + iVar8 * 4) + -4 + iVar6 * 4) = iVar5;
        } while (iVar6 < iVar1);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < piVar2[6]);
  }
  return piVar2;
}


//// FUNCTION FUN_00c7f4c0 @ 00c7f4c0 ////

int FUN_00c7f4c0(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_20;
  float local_18;
  
  piVar7 = *(int **)(param_1[3] + 0x28);
  iVar9 = *param_1;
  local_20 = 0;
  if (0 < iVar9) {
    iVar10 = piVar7[3];
    iVar12 = *piVar7;
    iVar5 = iVar10 >> 1;
    pfVar4 = param_2 + iVar9;
    local_18 = (float)iVar9;
    do {
      fVar1 = pfVar4[-1];
      pfVar4 = pfVar4 + -1;
      if (*(float *)(iVar12 + iVar5 * 4) <= fVar1) {
        iVar6 = iVar5 + 1;
        iVar11 = iVar10 + -1;
        if (3 < iVar11 - iVar6) {
          pfVar3 = (float *)(iVar12 + 8 + iVar6 * 4);
          do {
            if (fVar1 < pfVar3[-2]) goto LAB_00c7f663;
            if (fVar1 < pfVar3[-1]) {
              iVar6 = iVar6 + 1;
              goto LAB_00c7f663;
            }
            if (fVar1 < *pfVar3) {
              iVar6 = iVar6 + 2;
              goto LAB_00c7f663;
            }
            if (fVar1 < pfVar3[1]) {
              iVar6 = iVar6 + 3;
              goto LAB_00c7f663;
            }
            iVar6 = iVar6 + 4;
            pfVar3 = pfVar3 + 4;
          } while (iVar6 < iVar10 + -4);
        }
        if (iVar6 < iVar11) {
          pfVar3 = (float *)(iVar12 + iVar6 * 4);
          do {
            if (fVar1 < *pfVar3) break;
            iVar6 = iVar6 + 1;
            pfVar3 = pfVar3 + 1;
          } while (iVar6 < iVar11);
        }
      }
      else {
        iVar6 = iVar5;
        if (fVar1 < *(float *)(iVar12 + -4 + iVar5 * 4)) {
          iVar6 = iVar5 + -1;
          if (3 < iVar6) {
            pfVar3 = (float *)(iVar12 + -8 + iVar6 * 4);
            do {
              if (pfVar3[1] <= fVar1) goto LAB_00c7f663;
              if (*pfVar3 <= fVar1) {
                iVar6 = iVar6 + -1;
                goto LAB_00c7f663;
              }
              if (pfVar3[-1] <= fVar1) {
                iVar6 = iVar6 + -2;
                goto LAB_00c7f663;
              }
              if (pfVar3[-2] <= fVar1) {
                iVar6 = iVar6 + -3;
                goto LAB_00c7f663;
              }
              iVar6 = iVar6 + -4;
              pfVar3 = pfVar3 + -4;
            } while (3 < iVar6);
          }
          if (0 < iVar6) {
            pfVar3 = (float *)(iVar12 + -4 + iVar6 * 4);
            do {
              if (*pfVar3 <= fVar1) break;
              iVar6 = iVar6 + -1;
              pfVar3 = pfVar3 + -1;
            } while (0 < iVar6);
          }
        }
      }
LAB_00c7f663:
      local_20 = piVar7[2] * local_20 + *(int *)(piVar7[1] + iVar6 * 4);
      local_18 = (float)((int)local_18 + -1);
    } while (local_18 != 0.0);
  }
  if (*(int *)(*(int *)(param_1[3] + 8) + local_20 * 4) < 1) {
    iVar10 = 0;
    local_18 = 0.0;
    local_20 = -1;
    if (0 < param_1[1]) {
      piVar7 = *(int **)(param_1[3] + 8);
      iVar12 = param_1[4] - (int)param_2;
      pfVar4 = (float *)(param_1[4] + 0xc);
      do {
        iVar5 = local_20;
        fVar1 = local_18;
        if (0 < *piVar7) {
          fVar1 = 0.0;
          iVar5 = 0;
          if (3 < iVar9) {
            iVar6 = (iVar9 - 4U >> 2) + 1;
            iVar5 = iVar6 * 4;
            pfVar3 = param_2 + 1;
            pfVar8 = pfVar4;
            do {
              iVar6 = iVar6 + -1;
              fVar2 = *(float *)(iVar12 + -0x10 + (int)(pfVar3 + 4)) - *pfVar3;
              fVar1 = (*pfVar8 - pfVar3[2]) * (*pfVar8 - pfVar3[2]) +
                      (pfVar8[-1] - pfVar3[1]) * (pfVar8[-1] - pfVar3[1]) +
                      fVar2 * fVar2 + (pfVar8[-3] - pfVar3[-1]) * (pfVar8[-3] - pfVar3[-1]) + fVar1;
              pfVar3 = pfVar3 + 4;
              pfVar8 = pfVar8 + 4;
            } while (iVar6 != 0);
          }
          if (iVar5 < iVar9) {
            iVar6 = iVar9 - iVar5;
            pfVar3 = param_2 + iVar5;
            do {
              iVar6 = iVar6 + -1;
              fVar2 = *(float *)(iVar12 + (int)pfVar3) - *pfVar3;
              fVar1 = fVar2 * fVar2 + fVar1;
              pfVar3 = pfVar3 + 1;
            } while (iVar6 != 0);
          }
          iVar5 = iVar10;
          if ((local_20 != -1) && (local_18 <= fVar1)) {
            iVar5 = local_20;
            fVar1 = local_18;
          }
        }
        local_18 = fVar1;
        local_20 = iVar5;
        pfVar4 = pfVar4 + iVar9;
        iVar12 = iVar12 + iVar9 * 4;
        iVar10 = iVar10 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar10 < param_1[1]);
    }
  }
  pfVar4 = (float *)(param_1[4] + local_20 * iVar9 * 4);
  iVar10 = 0;
  if (3 < iVar9) {
    iVar12 = (iVar9 - 4U >> 2) + 1;
    iVar10 = iVar12 * 4;
    pfVar3 = pfVar4;
    pfVar8 = param_2;
    do {
      param_2 = pfVar8 + 4;
      pfVar4 = pfVar3 + 4;
      iVar12 = iVar12 + -1;
      *pfVar8 = *pfVar8 - *pfVar3;
      pfVar8[1] = pfVar8[1] - pfVar3[1];
      pfVar8[2] = pfVar8[2] - pfVar3[2];
      pfVar8[3] = pfVar8[3] - pfVar3[3];
      pfVar3 = pfVar4;
      pfVar8 = param_2;
    } while (iVar12 != 0);
  }
  if (iVar10 < iVar9) {
    iVar9 = iVar9 - iVar10;
    do {
      fVar1 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      iVar9 = iVar9 + -1;
      *param_2 = *param_2 - fVar1;
      param_2 = param_2 + 1;
    } while (iVar9 != 0);
  }
  return local_20;
}


//// FUNCTION FUN_00c7f830 @ 00c7f830 ////

int __fastcall FUN_00c7f830(int *param_1,float *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_4;
  iVar2 = param_3 / iVar1;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_00c7f4c0(param_4,param_2);
      iVar3 = vorbis_book_encode((int)param_4,iVar3,param_1);
      iVar4 = iVar4 + iVar3;
      param_2 = param_2 + iVar1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar4;
}


//// FUNCTION FUN_00c7f890 @ 00c7f890 ////

int * FUN_00c7f890(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 unaff_EDI;
  int iVar13;
  float *pfVar14;
  ulonglong uVar15;
  float local_3c;
  int local_38;
  int local_28;
  int local_24;
  
  piVar1 = (int *)*param_2;
  iVar2 = piVar1[3];
  iVar3 = piVar1[2];
  uVar6 = (piVar1[1] - *piVar1) / iVar3;
  piVar7 = (int *)FUN_00c309e0(param_1,param_4 * 4);
  iVar12 = 0;
  if (0 < param_4) {
    do {
      puVar8 = (undefined4 *)FUN_00c309e0(param_1,uVar6 << 2);
      piVar7[iVar12] = (int)puVar8;
      for (uVar9 = uVar6 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_4);
  }
  local_24 = 0;
  if (0 < (int)uVar6) {
    local_38 = 0;
    do {
      iVar12 = *piVar1;
      if (0 < param_4) {
        piVar11 = piVar7;
        local_28 = param_4;
        do {
          local_3c = 0.0;
          if (0 < iVar3) {
            iVar10 = (iVar12 + local_38) * 4;
            iVar13 = iVar3;
            do {
              iVar4 = *(int *)((param_3 - (int)piVar7) + (int)piVar11);
              fVar5 = ABS(*(float *)(iVar4 + iVar10));
              if (local_3c < fVar5) {
                local_3c = fVar5;
              }
              FUN_00acf400((double)(*(float *)(iVar4 + iVar10) + 0.5),(short)unaff_EDI);
              iVar10 = iVar10 + 4;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          iVar10 = 0;
          if (0 < iVar2 + -1) {
            pfVar14 = (float *)(piVar1 + 0x185);
            do {
              if ((local_3c < pfVar14[-0x40] != (local_3c == pfVar14[-0x40])) &&
                 ((*pfVar14 < 0.0 || (uVar15 = FUN_00acd42c(), (float)(int)uVar15 < *pfVar14))))
              break;
              iVar10 = iVar10 + 1;
              pfVar14 = pfVar14 + 1;
            } while (iVar10 < iVar2 + -1);
          }
          iVar13 = *piVar11;
          piVar11 = piVar11 + 1;
          local_28 = local_28 + -1;
          *(int *)(iVar13 + local_24 * 4) = iVar10;
        } while (local_28 != 0);
      }
      local_24 = local_24 + 1;
      local_38 = local_38 + iVar3;
    } while (local_24 < (int)uVar6);
  }
  param_2[10] = param_2[10] + 1;
  return piVar7;
}


//// FUNCTION FUN_00c7faa0 @ 00c7faa0 ////

int * FUN_00c7faa0(int *param_1,int *param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int in_EAX;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float local_24;
  int local_20;
  int local_14;
  int local_c;
  
  fVar4 = param_3;
  piVar1 = (int *)*param_1;
  iVar9 = piVar1[1];
  iVar13 = *piVar1;
  iVar2 = piVar1[2];
  iVar3 = piVar1[3];
  iVar5 = (iVar9 - iVar13) / iVar2;
  piVar6 = (int *)FUN_00c309e0(in_EAX,4);
  uVar7 = ((iVar9 - iVar13) * (int)param_3) / iVar2;
  puVar8 = (undefined4 *)FUN_00c309e0(in_EAX,uVar7 << 2);
  *piVar6 = (int)puVar8;
  for (uVar7 = uVar7 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  local_20 = *piVar1 / (int)param_3;
  local_c = 0;
  if (0 < iVar5) {
    iVar9 = iVar3 + -1;
    do {
      local_24 = 0.0;
      param_3 = 0.0;
      local_14 = 0;
      if (0 < iVar2) {
        iVar13 = local_20 << 2;
        do {
          if (local_24 < ABS(*(float *)(iVar13 + *param_2))) {
            local_24 = ABS(*(float *)(iVar13 + *param_2));
          }
          iVar14 = 1;
          if (3 < (int)fVar4 + -1) {
            iVar11 = ((int)fVar4 - 5U >> 2) + 1;
            piVar10 = param_2 + 3;
            iVar14 = iVar11 * 4 + 1;
            do {
              if (param_3 < ABS(*(float *)(piVar10[-2] + iVar13))) {
                param_3 = ABS(*(float *)(piVar10[-2] + iVar13));
              }
              if (param_3 < ABS(*(float *)(piVar10[-1] + iVar13))) {
                param_3 = ABS(*(float *)(piVar10[-1] + iVar13));
              }
              if (param_3 < ABS(*(float *)(iVar13 + *piVar10))) {
                param_3 = ABS(*(float *)(iVar13 + *piVar10));
              }
              if (param_3 < ABS(*(float *)(piVar10[1] + iVar13))) {
                param_3 = ABS(*(float *)(piVar10[1] + iVar13));
              }
              piVar10 = piVar10 + 4;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          for (; iVar14 < (int)fVar4; iVar14 = iVar14 + 1) {
            if (param_3 < ABS(*(float *)(param_2[iVar14] + iVar13))) {
              param_3 = ABS(*(float *)(param_2[iVar14] + iVar13));
            }
          }
          local_20 = local_20 + 1;
          local_14 = local_14 + (int)fVar4;
          iVar13 = iVar13 + 4;
        } while (local_14 < iVar2);
      }
      iVar13 = 0;
      if (3 < iVar9) {
        pfVar12 = (float *)(piVar1 + 0x185);
        do {
          if ((local_24 < pfVar12[-0x40] != (local_24 == pfVar12[-0x40])) &&
             (param_3 < *pfVar12 != (param_3 == *pfVar12))) goto LAB_00c7fd75;
          if ((local_24 < pfVar12[-0x3f] != (local_24 == pfVar12[-0x3f])) &&
             (param_3 < pfVar12[1] != (param_3 == pfVar12[1]))) {
            iVar13 = iVar13 + 1;
            goto LAB_00c7fd75;
          }
          if ((local_24 < pfVar12[-0x3e] != (local_24 == pfVar12[-0x3e])) &&
             (param_3 < pfVar12[2] != (param_3 == pfVar12[2]))) {
            iVar13 = iVar13 + 2;
            goto LAB_00c7fd75;
          }
          if ((local_24 < pfVar12[-0x3d] != (local_24 == pfVar12[-0x3d])) &&
             (param_3 < pfVar12[3] != (param_3 == pfVar12[3]))) {
            iVar13 = iVar13 + 3;
            goto LAB_00c7fd75;
          }
          iVar13 = iVar13 + 4;
          pfVar12 = pfVar12 + 4;
        } while (iVar13 < iVar3 + -4);
      }
      if (iVar13 < iVar9) {
        pfVar12 = (float *)(piVar1 + iVar13 + 0x185);
        do {
          if ((local_24 < pfVar12[-0x40] != (local_24 == pfVar12[-0x40])) &&
             (param_3 < *pfVar12 != (param_3 == *pfVar12))) break;
          iVar13 = iVar13 + 1;
          pfVar12 = pfVar12 + 1;
        } while (iVar13 < iVar9);
      }
LAB_00c7fd75:
      *(int *)(*piVar6 + local_c * 4) = iVar13;
      local_c = local_c + 1;
    } while (local_c < iVar5);
  }
  param_1[10] = param_1[10] + 1;
  return piVar6;
}


//// FUNCTION FUN_00c7fdb0 @ 00c7fdb0 ////

undefined4 FUN_00c7fdb0(int param_1,undefined4 param_2,int param_3,int *param_4,undefined *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *unaff_EBX;
  int *piVar9;
  int local_42c;
  int local_428;
  int local_418;
  int local_400 [128];
  int local_200 [128];
  
  piVar1 = (int *)*unaff_EBX;
  iVar2 = piVar1[3];
  iVar3 = *(int *)unaff_EBX[4];
  iVar4 = piVar1[2];
  iVar5 = (piVar1[1] - *piVar1) / iVar4;
  piVar9 = local_200;
  for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  piVar9 = local_400;
  for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  local_42c = 0;
  if (0 < unaff_EBX[2]) {
    do {
      iVar7 = 0;
      if (0 < iVar5) {
        do {
          if ((local_42c == 0) && (local_428 = 0, 0 < param_3)) {
            do {
              iVar8 = *(int *)(param_4[local_428] + iVar7 * 4);
              iVar6 = 1;
              piVar9 = (int *)(param_4[local_428] + iVar7 * 4);
              if (1 < iVar3) {
                do {
                  piVar9 = piVar9 + 1;
                  iVar8 = iVar8 * iVar2;
                  if (iVar6 + iVar7 < iVar5) {
                    iVar8 = iVar8 + *piVar9;
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < iVar3);
              }
              if (iVar8 < *(int *)(unaff_EBX[4] + 4)) {
                iVar8 = vorbis_book_encode(unaff_EBX[4],iVar8,(int *)(param_1 + 4));
                unaff_EBX[9] = unaff_EBX[9] + iVar8;
              }
              local_428 = local_428 + 1;
            } while (local_428 < param_3);
          }
          local_418 = 0;
          if (0 < iVar3) {
            do {
              if (iVar5 <= iVar7) goto LAB_00c7ffd1;
              if (0 < param_3) {
                local_428 = param_3;
                piVar9 = param_4;
                do {
                  if (local_42c == 0) {
                    local_400[*(int *)(*piVar9 + iVar7 * 4)] =
                         local_400[*(int *)(*piVar9 + iVar7 * 4)] + iVar4;
                  }
                  iVar8 = *(int *)(*piVar9 + iVar7 * 4);
                  if (((piVar1[iVar8 + 5] & 1 << ((byte)local_42c & 0x1f)) != 0) &&
                     (iVar8 = *(int *)(*(int *)(unaff_EBX[5] + iVar8 * 4) + local_42c * 4),
                     iVar8 != 0)) {
                    iVar6 = (*(code *)param_5)(iVar4,iVar8,0);
                    unaff_EBX[8] = unaff_EBX[8] + iVar6;
                    iVar8 = *(int *)(*piVar9 + iVar7 * 4);
                    local_200[iVar8] = local_200[iVar8] + iVar6;
                  }
                  piVar9 = piVar9 + 1;
                  local_428 = local_428 + -1;
                } while (local_428 != 0);
              }
              local_418 = local_418 + 1;
              iVar7 = iVar7 + 1;
            } while (local_418 < iVar3);
          }
        } while (iVar7 < iVar5);
      }
LAB_00c7ffd1:
      local_42c = local_42c + 1;
    } while (local_42c < unaff_EBX[2]);
  }
  return 0;
}


//// FUNCTION FUN_00c80000 @ 00c80000 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00c80000(int param_1,int *param_2,undefined4 param_3,int param_4,undefined *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar10;
  int *piVar11;
  undefined4 uStack_40;
  int local_28;
  int local_1c;
  int local_10;
  int local_c;
  int local_8;
  undefined4 *puVar9;
  
  piVar1 = (int *)*param_2;
  iVar2 = *(int *)param_2[4];
  iVar3 = piVar1[2];
  iVar5 = (piVar1[1] - *piVar1) / iVar3;
  uStack_40 = 0xc8004b;
  iVar4 = param_4 * -4;
  puVar8 = &stack0xffffffc4 + iVar4;
  iVar10 = 0;
  if (0 < param_4) {
    do {
      (&uStack_40)[-param_4] = 0xc8006e;
      iVar6 = FUN_00c309e0(param_1,((iVar5 + -1 + iVar2) / iVar2) * 4);
      *(int *)(&stack0xffffffc4 + iVar10 * 4 + iVar4) = iVar6;
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_4);
  }
  local_8 = 0;
  if (0 < param_2[2]) {
    do {
      iVar10 = 0;
      local_10 = 0;
      if (0 < iVar5) {
        local_1c = 0;
        do {
          if ((local_8 == 0) && (iVar6 = 0, 0 < param_4)) {
            do {
              iVar10 = param_2[4];
              *(undefined4 *)(puVar8 + -4) = 0xc800ce;
              uVar7 = vorbis_book_decode(iVar10,(int *)(param_1 + 4));
              if (uVar7 == 0xffffffff) {
                return 0;
              }
              *(undefined4 *)
               (local_1c + *(int *)(&stack0xffffffc4 + iVar6 * 4 + iVar4 + -0x3c + 0x3c)) =
                   *(undefined4 *)(param_2[7] + uVar7 * 4);
              if (*(int *)(local_1c + *(int *)(&stack0xffffffc4 + iVar6 * 4 + iVar4 + -0x3c + 0x3c))
                  == 0) {
                return 0;
              }
              iVar6 = iVar6 + 1;
              iVar10 = local_10;
            } while (iVar6 < param_4);
          }
          local_c = 0;
          if (0 < iVar2) {
            do {
              piVar11 = (int *)(&stack0xffffffc4 + iVar4);
              if (iVar5 <= iVar10) break;
              local_28 = 0;
              if (0 < param_4) {
                do {
                  iVar10 = *(int *)(*(int *)(local_1c + *piVar11) + local_c * 4);
                  if (((piVar1[iVar10 + 5] & 1 << ((byte)local_8 & 0x1f)) != 0) &&
                     (*(int *)(*(int *)(param_2[5] + iVar10 * 4) + local_8 * 4) != 0)) {
                    *(int *)(puVar8 + -4) = iVar3;
                    *(int *)(puVar8 + -8) = param_1 + 4;
                    puVar9 = (undefined4 *)(puVar8 + -0xc);
                    puVar8 = puVar8 + -0xc;
                    *puVar9 = 0xc80198;
                    iVar10 = (*(code *)param_5)();
                    if (iVar10 == -1) {
                      return 0;
                    }
                  }
                  local_28 = local_28 + 1;
                  piVar11 = piVar11 + 1;
                  iVar10 = local_10;
                } while (local_28 < param_4);
              }
              local_c = local_c + 1;
              iVar10 = iVar10 + 1;
              local_10 = iVar10;
            } while (local_c < iVar2);
          }
          local_1c = local_1c + 4;
        } while (iVar10 < iVar5);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_2[2]);
  }
  return 0;
}


//// FUNCTION FUN_00c80270 @ 00c80270 ////

undefined4 __thiscall
FUN_00c80270(void *this,int *param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_14;
  
  piVar11 = param_1;
  iVar8 = 0;
  iVar9 = *(int *)((int)this + 0x24) / 2;
  local_14 = 0;
  if (0 < param_4) {
    iVar10 = param_3 - (int)param_2;
    param_3 = param_4;
    piVar7 = param_1;
    do {
      piVar1 = (int *)(((int)param_2 - (int)param_1) + (int)piVar7);
      if (*(int *)((int)piVar1 + iVar10) != 0) {
        if (param_2 != (int *)0x0) {
          iVar8 = 0;
          if (3 < iVar9) {
            do {
              *(float *)(*piVar1 + iVar8 * 4) =
                   *(float *)(*piVar7 + iVar8 * 4) + *(float *)(*piVar1 + iVar8 * 4);
              *(float *)(*piVar1 + 4 + iVar8 * 4) =
                   *(float *)(*piVar7 + 4 + iVar8 * 4) + *(float *)(*piVar1 + 4 + iVar8 * 4);
              *(float *)(*piVar1 + 8 + iVar8 * 4) =
                   *(float *)(*piVar7 + 8 + iVar8 * 4) + *(float *)(*piVar1 + 8 + iVar8 * 4);
              iVar2 = iVar8 * 4;
              pfVar5 = (float *)(*piVar1 + 0xc + iVar8 * 4);
              iVar8 = iVar8 + 4;
              *pfVar5 = *(float *)(*piVar7 + 0xc + iVar2) + *pfVar5;
            } while (iVar8 < iVar9 + -3);
          }
          for (; iVar8 < iVar9; iVar8 = iVar8 + 1) {
            pfVar5 = (float *)(*piVar1 + iVar8 * 4);
            *pfVar5 = *(float *)(*piVar7 + iVar8 * 4) + *pfVar5;
          }
        }
        param_1[local_14] = *piVar7;
        iVar8 = local_14 + 1;
        local_14 = iVar8;
      }
      piVar7 = piVar7 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    if (iVar8 != 0) {
      uVar6 = FUN_00c7fdb0((int)this,param_1,iVar8,param_5,FUN_00c7f830);
      if (param_2 != (int *)0x0) {
        param_1 = (int *)param_4;
        do {
          if (*(int *)((int)param_2 + iVar10) != 0) {
            iVar8 = 0;
            if (3 < iVar9) {
              do {
                *(float *)(*param_2 + iVar8 * 4) =
                     *(float *)(*param_2 + iVar8 * 4) - *(float *)(*piVar11 + iVar8 * 4);
                *(float *)(*param_2 + 4 + iVar8 * 4) =
                     *(float *)(*param_2 + 4 + iVar8 * 4) - *(float *)(*piVar11 + 4 + iVar8 * 4);
                *(float *)(*param_2 + 8 + iVar8 * 4) =
                     *(float *)(*param_2 + 8 + iVar8 * 4) - *(float *)(*piVar11 + 8 + iVar8 * 4);
                iVar2 = iVar8 * 4;
                iVar3 = iVar8 * 4;
                iVar4 = iVar8 * 4;
                iVar8 = iVar8 + 4;
                *(float *)(*param_2 + 0xc + iVar3) =
                     *(float *)(*param_2 + 0xc + iVar2) - *(float *)(*piVar11 + 0xc + iVar4);
              } while (iVar8 < iVar9 + -3);
            }
            for (; iVar8 < iVar9; iVar8 = iVar8 + 1) {
              *(float *)(*param_2 + iVar8 * 4) =
                   *(float *)(*param_2 + iVar8 * 4) - *(float *)(*piVar11 + iVar8 * 4);
            }
            piVar11 = piVar11 + 1;
          }
          param_2 = param_2 + 1;
          param_1 = (int *)((int)param_1 + -1);
        } while (param_1 != (int *)0x0);
      }
      return uVar6;
    }
  }
  return 0;
}


//// FUNCTION FUN_00c80520 @ 00c80520 ////

int * __fastcall
FUN_00c80520(undefined4 param_1,int *param_2,int *param_3,int param_4,float param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < (int)param_5) {
    do {
      if (*(int *)(param_4 + iVar3 * 4) != 0) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_5);
    if (iVar2 != 0) {
      piVar1 = FUN_00c7faa0(param_2,param_3,param_5);
      return piVar1;
    }
  }
  return (int *)0x0;
}


//// FUNCTION FUN_00c80570 @ 00c80570 ////

undefined4 __fastcall
FUN_00c80570(int param_1,undefined4 param_2,int param_3,int *param_4,int *param_5,int param_6,
            int *param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int local_20;
  int local_1c;
  int local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  iVar3 = param_6;
  iVar14 = *(int *)(param_1 + 0x24) / 2;
  local_1c = 0;
  local_c = param_1;
  local_8 = param_2;
  local_4 = iVar14;
  iVar4 = FUN_00c309e0(param_1,iVar14 * param_6 * 4);
  local_20 = 0;
  if (0 < param_6) {
    iVar7 = param_3 - (int)param_5;
    do {
      iVar2 = *(int *)(iVar7 + (int)param_5);
      if (*param_5 != 0) {
        local_1c = local_1c + 1;
      }
      iVar10 = 0;
      iVar5 = local_20;
      if (3 < iVar14) {
        puVar8 = (undefined4 *)(iVar2 + 8);
        iVar11 = (iVar14 - 4U >> 2) + 1;
        iVar10 = iVar11 * 4;
        do {
          *(undefined4 *)(iVar4 + iVar5 * 4) = puVar8[-2];
          *(undefined4 *)(iVar4 + (iVar5 + param_6) * 4) = puVar8[-1];
          iVar5 = iVar5 + param_6 + param_6;
          *(undefined4 *)(iVar4 + iVar5 * 4) = *puVar8;
          iVar5 = iVar5 + param_6;
          *(undefined4 *)(iVar4 + iVar5 * 4) = puVar8[1];
          iVar5 = iVar5 + param_6;
          puVar8 = puVar8 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      if (iVar10 < iVar14) {
        puVar8 = (undefined4 *)(iVar4 + iVar5 * 4);
        do {
          *puVar8 = *(undefined4 *)(iVar2 + iVar10 * 4);
          puVar8 = puVar8 + param_6;
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar14);
      }
      local_20 = local_20 + 1;
      param_5 = param_5 + 1;
    } while (local_20 < param_6);
    if (local_1c != 0) {
      local_10 = iVar4;
      uVar6 = FUN_00c7fdb0(local_c,&local_10,1,param_7,FUN_00c7f830);
      if (param_4 != (int *)0x0) {
        iVar7 = param_3 - (int)param_4;
        local_20 = 0;
        do {
          iVar2 = *(int *)(iVar7 + (int)param_4);
          iVar10 = *param_4;
          param_6 = 0;
          iVar5 = local_20;
          if (3 < iVar14) {
            iVar11 = (iVar14 - 4U >> 2) + 1;
            param_6 = iVar11 * 4;
            pfVar9 = (float *)(iVar10 + 4);
            pfVar13 = (float *)(iVar2 + 0xc);
            do {
              pfVar9[-1] = (pfVar13[-3] - *(float *)(iVar4 + iVar5 * 4)) + pfVar9[-1];
              iVar14 = iVar5 + iVar3 + iVar3;
              *pfVar9 = (*(float *)((int)pfVar9 + (iVar2 - iVar10)) -
                        *(float *)(iVar4 + (iVar5 + iVar3) * 4)) + *pfVar9;
              iVar12 = iVar14 + iVar3;
              pfVar9[1] = (pfVar13[-1] - *(float *)(iVar4 + iVar14 * 4)) + pfVar9[1];
              iVar5 = iVar12 + iVar3;
              iVar11 = iVar11 + -1;
              pfVar9[2] = (*pfVar13 - *(float *)(iVar4 + iVar12 * 4)) + pfVar9[2];
              pfVar9 = pfVar9 + 4;
              pfVar13 = pfVar13 + 4;
              iVar14 = local_4;
            } while (iVar11 != 0);
          }
          if (param_6 < iVar14) {
            pfVar9 = (float *)(iVar4 + iVar5 * 4);
            iVar5 = iVar14 - param_6;
            pfVar13 = (float *)(iVar10 + param_6 * 4);
            do {
              fVar1 = *pfVar9;
              pfVar9 = pfVar9 + iVar3;
              iVar5 = iVar5 + -1;
              *pfVar13 = (*(float *)((iVar2 - iVar10) + (int)pfVar13) - fVar1) + *pfVar13;
              pfVar13 = pfVar13 + 1;
            } while (iVar5 != 0);
          }
          local_20 = local_20 + 1;
          param_4 = param_4 + 1;
        } while (local_20 < iVar3);
      }
      return uVar6;
    }
  }
  return 0;
}


//// FUNCTION FUN_00c807d0 @ 00c807d0 ////

undefined4 __fastcall FUN_00c807d0(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  int *local_18;
  
  piVar1 = (int *)*param_2;
  iVar2 = piVar1[2];
  iVar3 = *(int *)param_2[4];
  iVar5 = (piVar1[1] - *piVar1) / iVar2;
  piVar6 = (int *)FUN_00c309e0(param_1,(iVar5 + -1 + iVar3) / iVar3 << 2);
  iVar7 = 0;
  if (0 < param_5) {
    do {
      if (*(int *)(param_4 + iVar7 * 4) != 0) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_5);
  }
  if ((iVar7 != param_5) && (local_1c = 0, 0 < param_2[2])) {
    do {
      param_4 = 0;
      local_18 = piVar6;
      if (0 < iVar5) {
        do {
          if (local_1c == 0) {
            uVar8 = vorbis_book_decode(param_2[4],(int *)(param_1 + 4));
            if (uVar8 == 0xffffffff) {
              return 0;
            }
            iVar7 = *(int *)(param_2[7] + uVar8 * 4);
            *local_18 = iVar7;
            if (iVar7 == 0) {
              return 0;
            }
          }
          iVar7 = 0;
          if (0 < iVar3) {
            iVar10 = param_4 * iVar2;
            do {
              if (iVar5 <= param_4) break;
              iVar9 = *(int *)(*local_18 + iVar7 * 4);
              if ((((piVar1[iVar9 + 5] & 1 << ((byte)local_1c & 0x1f)) != 0) &&
                  (piVar4 = *(int **)(*(int *)(param_2[5] + iVar9 * 4) + local_1c * 4),
                  piVar4 != (int *)0x0)) &&
                 (iVar9 = vorbis_book_decodevv_add(piVar4,param_3,*piVar1 + iVar10,param_5,(int *)(param_1 + 4),
                                       iVar2), iVar9 == -1)) {
                return 0;
              }
              iVar7 = iVar7 + 1;
              param_4 = param_4 + 1;
              iVar10 = iVar10 + iVar2;
            } while (iVar7 < iVar3);
          }
          local_18 = local_18 + 1;
        } while (param_4 < iVar5);
      }
      local_1c = local_1c + 1;
    } while (local_1c < param_2[2]);
  }
  return 0;
}


//// FUNCTION FUN_00c80960 @ 00c80960 ////

void __fastcall FUN_00c80960(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1;
    for (iVar1 = 0x118; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00c809a0 @ 00c809a0 ////

int __fastcall FUN_00c809a0(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


//// FUNCTION FUN_00c809b0 @ 00c809b0 ////

int __fastcall FUN_00c809b0(int param_1)

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


//// FUNCTION FUN_00c809d0 @ 00c809d0 ////

void __fastcall FUN_00c809d0(uint *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *local_14;
  int local_10;
  uint *local_c;
  
  uVar1 = param_1[0xd2];
  local_10 = 0;
  uVar5 = 0xffffffff;
  oggpack_write(param_2,*param_1,5);
  local_14 = (uint *)0x0;
  puVar3 = param_1;
  if (0 < (int)*param_1) {
    do {
      puVar3 = puVar3 + 1;
      oggpack_write(param_2,*puVar3,4);
      if ((int)uVar5 < (int)*puVar3) {
        uVar5 = *puVar3;
      }
      local_14 = (uint *)((int)local_14 + 1);
    } while ((int)local_14 < (int)*param_1);
  }
  local_c = (uint *)(uVar5 + 1);
  if (0 < (int)local_c) {
    local_14 = param_1 + 0x50;
    puVar3 = param_1 + 0x30;
    do {
      oggpack_write(param_2,puVar3[-0x10] - 1,3);
      oggpack_write(param_2,*puVar3,2);
      if (*puVar3 != 0) {
        oggpack_write(param_2,puVar3[0x10],8);
      }
      iVar2 = 0;
      puVar4 = local_14;
      if (0 < 1 << ((byte)*puVar3 & 0x1f)) {
        do {
          oggpack_write(param_2,*puVar4 + 1,8);
          iVar2 = iVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar2 < 1 << ((byte)*puVar3 & 0x1f));
      }
      local_14 = local_14 + 8;
      puVar3 = puVar3 + 1;
      local_c = (uint *)((int)local_c + -1);
    } while (local_c != (uint *)0x0);
  }
  oggpack_write(param_2,param_1[0xd0] - 1,2);
  uVar1 = FUN_00c809b0(uVar1);
  oggpack_write(param_2,uVar1,4);
  iVar2 = 0;
  local_14 = (uint *)0x0;
  local_c = param_1;
  if (0 < (int)*param_1) {
    do {
      local_c = local_c + 1;
      local_10 = local_10 + param_1[*local_c + 0x20];
      if (iVar2 < local_10) {
        iVar6 = local_10 - iVar2;
        puVar3 = param_1 + iVar2 + 0xd3;
        iVar2 = iVar2 + iVar6;
        do {
          oggpack_write(param_2,*puVar3,uVar1);
          puVar3 = puVar3 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_14 = (uint *)((int)local_14 + 1);
    } while ((int)local_14 < (int)*param_1);
  }
  return;
}


//// FUNCTION FUN_00c80b80 @ 00c80b80 ////

uint * __fastcall FUN_00c80b80(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *local_18;
  uint *local_14;
  int local_10;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar6 = 0;
  local_10 = 0;
  uVar3 = 0xffffffff;
  puVar1 = _calloc(1,0x460);
  uVar2 = oggpack_read(param_2,5);
  *puVar1 = uVar2;
  local_18 = puVar1;
  if (0 < (int)uVar2) {
    do {
      local_18 = local_18 + 1;
      uVar2 = oggpack_read(param_2,4);
      *local_18 = uVar2;
      if ((int)uVar3 < (int)uVar2) {
        uVar3 = uVar2;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)*puVar1);
  }
  local_18 = (uint *)0x0;
  if (0 < (int)(uVar3 + 1)) {
    local_14 = puVar1 + 0x50;
    puVar7 = puVar1 + 0x40;
    do {
      uVar2 = oggpack_read(param_2,3);
      puVar7[-0x20] = uVar2 + 1;
      uVar2 = oggpack_read(param_2,2);
      puVar7[-0x10] = uVar2;
      if ((int)uVar2 < 0) {
LAB_00c80db0:
        FUN_00c80960(puVar1);
        return (uint *)0x0;
      }
      if (uVar2 != 0) {
        uVar2 = oggpack_read(param_2,8);
        *puVar7 = uVar2;
      }
      if (((int)*puVar7 < 0) || (*(int *)(iVar5 + 0x18) <= (int)*puVar7)) goto LAB_00c80db0;
      iVar6 = 0;
      puVar4 = local_14;
      if (0 < 1 << ((byte)puVar7[-0x10] & 0x1f)) {
        do {
          uVar2 = oggpack_read(param_2,8);
          uVar2 = uVar2 - 1;
          *puVar4 = uVar2;
          if (((int)uVar2 < -1) || (*(int *)(iVar5 + 0x18) <= (int)uVar2)) goto LAB_00c80db0;
          iVar6 = iVar6 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar6 < 1 << ((byte)puVar7[-0x10] & 0x1f));
      }
      local_18 = (uint *)((int)local_18 + 1);
      local_14 = local_14 + 8;
      puVar7 = puVar7 + 1;
    } while ((int)local_18 < (int)(uVar3 + 1));
  }
  uVar3 = oggpack_read(param_2,2);
  puVar1[0xd0] = uVar3 + 1;
  uVar3 = oggpack_read(param_2,4);
  iVar5 = 0;
  local_18 = (uint *)0x0;
  local_14 = puVar1;
  if (0 < (int)*puVar1) {
    do {
      local_14 = local_14 + 1;
      local_10 = local_10 + puVar1[*local_14 + 0x20];
      if (iVar5 < local_10) {
        puVar7 = puVar1 + iVar5 + 0xd3;
        do {
          uVar2 = oggpack_read(param_2,uVar3);
          *puVar7 = uVar2;
          if (((int)uVar2 < 0) || (1 << ((byte)uVar3 & 0x1f) <= (int)uVar2)) goto LAB_00c80db0;
          iVar5 = iVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar5 < local_10);
      }
      local_18 = (uint *)((int)local_18 + 1);
    } while ((int)local_18 < (int)*puVar1);
  }
  puVar1[0xd1] = 0;
  puVar1[0xd2] = 1 << ((byte)uVar3 & 0x1f);
  return puVar1;
}


//// FUNCTION FUN_00c80dd0 @ 00c80dd0 ////

int __cdecl FUN_00c80dd0(undefined4 *param_1,undefined4 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}


//// FUNCTION FUN_00c81010 @ 00c81010 ////

int __fastcall FUN_00c81010(int param_1,uint param_2,int param_3,int param_4)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 & 0x7fff;
  uVar1 = (in_EAX & 0x7fff) - uVar3;
  iVar2 = (int)(((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) * (param_1 - param_3)) /
          (param_4 - param_3);
  if ((int)uVar1 < 0) {
    return uVar3 - iVar2;
  }
  return iVar2 + uVar3;
}


//// FUNCTION FUN_00c81060 @ 00c81060 ////

uint FUN_00c81060(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_00acd42c();
  uVar1 = (uint)uVar2;
  if (0x3ff < (int)uVar1) {
    return 0x3ff;
  }
  return uVar1 & ((int)uVar1 < 0) - 1;
}


//// FUNCTION FUN_00c81090 @ 00c81090 ////

void __thiscall FUN_00c81090(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_8;
  
  uVar4 = (int)this - param_3;
  iVar11 = param_2 - param_1;
  iVar2 = (int)uVar4 / iVar11;
  if ((int)uVar4 < 0) {
    local_8 = iVar2 + -1;
  }
  else {
    local_8 = iVar2 + 1;
  }
  uVar6 = iVar2 * iVar11 >> 0x1f;
  iVar8 = ((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) - ((iVar2 * iVar11 ^ uVar6) - uVar6)
  ;
  iVar5 = 0;
  iVar9 = param_1 + 1;
  *(float *)(param_4 + -4 + iVar9 * 4) =
       *(float *)(&DAT_00f85fe8 + param_3 * 4) * *(float *)(param_4 + -4 + iVar9 * 4);
  iVar7 = param_3;
  iVar12 = iVar9;
  if (3 < param_2 - iVar9) {
    iVar10 = ((param_2 - iVar9) - 4U >> 2) + 1;
    iVar1 = iVar10 * 4;
    pfVar3 = (float *)(param_4 + 8 + iVar9 * 4);
    do {
      iVar5 = iVar5 + iVar8;
      iVar7 = iVar2;
      if (iVar11 <= iVar5) {
        iVar5 = iVar5 - iVar11;
        iVar7 = local_8;
      }
      iVar5 = iVar5 + iVar8;
      pfVar3[-2] = *(float *)(&DAT_00f85fe8 + (param_3 + iVar7) * 4) * pfVar3[-2];
      iVar12 = iVar2;
      if (iVar11 <= iVar5) {
        iVar5 = iVar5 - iVar11;
        iVar12 = local_8;
      }
      iVar12 = param_3 + iVar7 + iVar12;
      iVar5 = iVar5 + iVar8;
      pfVar3[-1] = *(float *)(&DAT_00f85fe8 + iVar12 * 4) * pfVar3[-1];
      iVar7 = iVar2;
      if (iVar11 <= iVar5) {
        iVar5 = iVar5 - iVar11;
        iVar7 = local_8;
      }
      iVar12 = iVar12 + iVar7;
      iVar5 = iVar5 + iVar8;
      *pfVar3 = *(float *)(&DAT_00f85fe8 + iVar12 * 4) * *pfVar3;
      iVar7 = iVar2;
      if (iVar11 <= iVar5) {
        iVar5 = iVar5 - iVar11;
        iVar7 = local_8;
      }
      param_3 = iVar12 + iVar7;
      iVar10 = iVar10 + -1;
      pfVar3[1] = *(float *)(&DAT_00f85fe8 + param_3 * 4) * pfVar3[1];
      pfVar3 = pfVar3 + 4;
      iVar7 = param_3;
      iVar12 = iVar9 + iVar1;
    } while (iVar10 != 0);
  }
  param_3 = iVar12;
  if (param_3 < param_2) {
    pfVar3 = (float *)(&DAT_00f85fe8 + iVar7 * 4);
    do {
      iVar5 = iVar5 + iVar8;
      iVar7 = iVar2;
      if (iVar11 <= iVar5) {
        iVar5 = iVar5 - iVar11;
        iVar7 = local_8;
      }
      pfVar3 = pfVar3 + iVar7;
      iVar7 = param_3 * 4;
      param_3 = param_3 + 1;
      *(float *)(param_4 + -4 + param_3 * 4) = *(float *)(param_4 + iVar7) * *pfVar3;
    } while (param_3 < param_2);
  }
  return;
}


//// FUNCTION FUN_00c81220 @ 00c81220 ////

void __thiscall FUN_00c81220(void *this,int param_1,int param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = in_EAX - (int)this;
  iVar3 = param_2 - param_1;
  iVar1 = (int)uVar8 / iVar3;
  iVar4 = iVar1 + -1;
  if (-1 < (int)uVar8) {
    iVar4 = iVar1 + 1;
  }
  uVar5 = iVar1 * iVar3 >> 0x1f;
  iVar2 = param_1 + 1;
  *(void **)(param_3 + param_1 * 4) = this;
  if (iVar2 < param_2) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + (((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) -
                      ((iVar1 * iVar3 ^ uVar5) - uVar5));
      iVar7 = iVar1;
      if (iVar3 <= iVar6) {
        iVar6 = iVar6 - iVar3;
        iVar7 = iVar4;
      }
      this = (void *)((int)this + iVar7);
      *(void **)(param_3 + iVar2 * 4) = this;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}


//// FUNCTION FUN_00c812b0 @ 00c812b0 ////

int __thiscall FUN_00c812b0(void *this,float *param_1,int param_2,int param_3,int param_4)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_EDI;
  ulonglong uVar5;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  unaff_EDI[2] = 0;
  unaff_EDI[3] = 0;
  unaff_EDI[4] = 0;
  iVar3 = 0;
  unaff_EDI[5] = 0;
  unaff_EDI[6] = 0;
  unaff_EDI[7] = 0;
  iVar4 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_8 = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  local_4 = 0;
  *unaff_EDI = this;
  unaff_EDI[1] = param_3;
  if (in_EAX <= param_3) {
    param_3 = in_EAX + -1;
  }
  if ((int)this <= param_3) {
    iVar1 = param_2 - (int)param_1;
    param_1 = param_1 + (int)this;
    do {
      uVar2 = FUN_00c81060();
      if (uVar2 != 0) {
        if (*(float *)(iVar1 + (int)param_1) + *(float *)(param_4 + 0x458) < *param_1) {
          local_1c = local_1c + uVar2;
          local_24 = local_24 + (int)this;
          local_14 = local_14 + (int)this * (int)this;
          local_c = local_c + uVar2 * uVar2;
          local_4 = local_4 + uVar2 * (int)this;
          iVar4 = iVar4 + 1;
        }
        else {
          local_20 = local_20 + uVar2;
          local_28 = local_28 + (int)this;
          local_18 = local_18 + (int)this * (int)this;
          local_10 = local_10 + uVar2 * uVar2;
          local_8 = local_8 + uVar2 * (int)this;
          iVar3 = iVar3 + 1;
        }
      }
      this = (void *)((int)this + 1);
      param_1 = param_1 + 1;
    } while ((int)this <= param_3);
  }
  uVar5 = FUN_00acd42c();
  iVar1 = (int)uVar5 + 1;
  unaff_EDI[2] = iVar1 * local_28 + local_24;
  unaff_EDI[3] = iVar1 * local_20 + local_1c;
  unaff_EDI[4] = iVar1 * local_18 + local_14;
  unaff_EDI[5] = iVar1 * local_10 + local_c;
  unaff_EDI[7] = (int)uVar5 * iVar3 + iVar4 + iVar3;
  unaff_EDI[6] = iVar1 * local_8 + local_4;
  return iVar3;
}


//// FUNCTION FUN_00c81490 @ 00c81490 ////

void FUN_00c81490(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 unaff_DI;
  int iVar11;
  ulonglong uVar12;
  int local_28;
  int local_24;
  
  iVar1 = *param_1;
  iVar2 = param_1[param_2 * 8 + -7];
  iVar8 = 0;
  iVar10 = 0;
  iVar11 = 0;
  iVar9 = 0;
  iVar7 = 0;
  local_28 = 0;
  local_24 = 0;
  if (0 < param_2) {
    piVar6 = param_1 + 3;
    iVar7 = 0;
    do {
      iVar8 = iVar8 + piVar6[-1];
      iVar10 = iVar10 + *piVar6;
      iVar11 = iVar11 + piVar6[1];
      iVar9 = iVar9 + piVar6[3];
      iVar7 = iVar7 + piVar6[4];
      piVar6 = piVar6 + 8;
      param_2 = param_2 + -1;
      local_28 = iVar8;
      local_24 = iVar10;
    } while (param_2 != 0);
  }
  iVar8 = *param_3;
  if (-1 < iVar8) {
    local_24 = local_24 + iVar8;
    iVar11 = iVar11 + iVar1 * iVar1;
    local_28 = local_28 + iVar1;
    iVar9 = iVar9 + iVar8 * iVar1;
    iVar7 = iVar7 + 1;
  }
  iVar8 = *param_4;
  if (-1 < iVar8) {
    local_28 = local_28 + iVar2;
    local_24 = local_24 + iVar8;
    iVar11 = iVar11 + iVar2 * iVar2;
    iVar9 = iVar9 + iVar8 * iVar2;
    iVar7 = iVar7 + 1;
  }
  if (iVar7 == 0) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    dVar5 = (double)local_28;
    dVar3 = 1.0 / ((double)iVar11 * (double)iVar7 - dVar5 * dVar5);
    dVar4 = ((double)iVar11 * (double)local_24 - (double)iVar9 * dVar5) * dVar3;
    dVar3 = ((double)iVar7 * (double)iVar9 - (double)local_24 * dVar5) * dVar3;
    FUN_00acf400((double)iVar1 * dVar3 + dVar4 + 0.5,unaff_DI);
    uVar12 = FUN_00acd42c();
    *param_3 = (int)uVar12;
    FUN_00acf400((double)iVar2 * dVar3 + dVar4 + 0.5,unaff_DI);
    uVar12 = FUN_00acd42c();
    *param_4 = (int)uVar12;
    if (0x3ff < *param_3) {
      *param_3 = 0x3ff;
    }
    if (0x3ff < *param_4) {
      *param_4 = 0x3ff;
    }
    if (*param_3 < 0) {
      *param_3 = 0;
    }
    if (*param_4 < 0) {
      *param_4 = 0;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00c81690 @ 00c81690 ////

undefined4 __thiscall
FUN_00c81690(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar5 = (int)this - param_3;
  iVar9 = param_2 - param_1;
  iVar2 = (int)uVar5 / iVar9;
  if ((int)uVar5 < 0) {
    iVar3 = iVar2 + -1;
  }
  else {
    iVar3 = iVar2 + 1;
  }
  local_1c = param_3;
  local_14 = 0;
  uVar4 = FUN_00c81060();
  uVar6 = iVar2 * iVar9 >> 0x1f;
  iVar7 = (param_3 - uVar4) * (param_3 - uVar4);
  local_18 = 1;
  if (*(float *)(param_4 + param_1 * 4) <=
      *(float *)(param_5 + param_1 * 4) + *(float *)(param_6 + 0x458)) {
    if ((float)param_3 + *(float *)(param_6 + 0x448) < (float)(int)uVar4) {
      return 1;
    }
    if ((float)(int)uVar4 < (float)param_3 - *(float *)(param_6 + 0x44c)) {
      return 1;
    }
  }
  param_1 = param_1 + 1;
  if (param_1 < param_2) {
    pfVar8 = (float *)(param_4 + param_1 * 4);
    do {
      local_14 = local_14 +
                 (((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) -
                 ((iVar2 * iVar9 ^ uVar6) - uVar6));
      iVar1 = iVar2;
      if (iVar9 <= local_14) {
        local_14 = local_14 - iVar9;
        iVar1 = iVar3;
      }
      local_1c = local_1c + iVar1;
      uVar4 = FUN_00c81060();
      iVar7 = iVar7 + (local_1c - uVar4) * (local_1c - uVar4);
      local_18 = local_18 + 1;
      if ((*pfVar8 <= *(float *)((param_5 - param_4) + (int)pfVar8) + *(float *)(param_6 + 0x458))
         && (uVar4 != 0)) {
        if ((float)local_1c + *(float *)(param_6 + 0x448) < (float)(int)uVar4) {
          return 1;
        }
        if ((float)(int)uVar4 < (float)local_1c - *(float *)(param_6 + 0x44c)) {
          return 1;
        }
      }
      param_1 = param_1 + 1;
      pfVar8 = pfVar8 + 1;
    } while (param_1 < param_2);
  }
  if ((((*(float *)(param_6 + 0x448) * *(float *)(param_6 + 0x448)) / (float)local_18 <=
        *(float *)(param_6 + 0x450)) &&
      ((*(float *)(param_6 + 0x44c) * *(float *)(param_6 + 0x44c)) / (float)local_18 <=
       *(float *)(param_6 + 0x450))) && (*(float *)(param_6 + 0x450) < (float)(iVar7 / local_18))) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00c818b0 @ 00c818b0 ////

int __fastcall FUN_00c818b0(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = *(int *)(in_EAX + param_1 * 4);
  if (iVar2 < 0) {
    return *(int *)(param_2 + param_1 * 4);
  }
  iVar1 = *(int *)(param_2 + param_1 * 4);
  if (-1 < iVar1) {
    iVar2 = iVar2 + iVar1 >> 1;
  }
  return iVar2;
}


//// FUNCTION FUN_00c818d0 @ 00c818d0 ////

int * __fastcall FUN_00c818d0(int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  void *this;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int *piVar9;
  int **ppiVar10;
  int *local_d40;
  int *local_d3c;
  int local_d38;
  int local_d34;
  int *local_d30;
  int local_d2c;
  int *local_d28;
  int local_d24;
  int *local_d20;
  int *local_d1c;
  int local_d18;
  int *local_d14 [65];
  int *local_c10 [65];
  int local_b0c [65];
  int local_a08 [65];
  int local_904 [65];
  int local_800 [512];
  
  local_d34 = *(int *)(param_2 + 0x510);
  iVar5 = *(int *)(param_2 + 0x508);
  iVar2 = *(int *)(param_2 + 0x504);
  local_d40 = (int *)0x0;
  if (0 < iVar2) {
    ppiVar10 = local_c10;
    for (iVar8 = iVar2; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppiVar10 = (int *)0xffffff38;
      ppiVar10 = ppiVar10 + 1;
    }
  }
  if (0 < iVar2) {
    ppiVar10 = local_d14;
    for (iVar8 = iVar2; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppiVar10 = (int *)0xffffff38;
      ppiVar10 = ppiVar10 + 1;
    }
    piVar4 = local_b0c;
    for (iVar8 = iVar2; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    if (0 < iVar2) {
      piVar4 = local_a08;
      for (iVar8 = iVar2; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar4 = 1;
        piVar4 = piVar4 + 1;
      }
      piVar4 = local_904;
      for (iVar8 = iVar2; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar4 = -1;
        piVar4 = piVar4 + 1;
      }
    }
  }
  local_d38 = iVar2;
  local_d2c = param_2;
  local_d18 = param_1;
  if (iVar2 == 0) {
    local_d40 = (int *)FUN_00c812b0((void *)0x0,param_4,param_3,iVar5,local_d34);
  }
  else {
    iVar5 = 0;
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      return (int *)0x0;
    }
    do {
      iVar2 = FUN_00c812b0(*(void **)(param_2 + iVar5 * 4),param_4,param_3,
                           *(int *)(param_2 + 4 + iVar5 * 4),local_d34);
      local_d40 = (int *)((int)local_d40 + iVar2);
      iVar5 = iVar5 + 1;
      iVar2 = local_d38;
    } while (iVar5 < local_d38 + -1);
  }
  piVar4 = (int *)0x0;
  if (local_d40 != (int *)0x0) {
    local_d3c = (int *)0xffffff38;
    local_d40 = (int *)0xffffff38;
    FUN_00c81490(local_800,iVar2 + -1,(int *)&local_d3c,(int *)&local_d40);
    local_c10[0] = local_d3c;
    local_d14[0] = local_d3c;
    local_d14[1] = local_d40;
    local_c10[1] = local_d40;
    local_d40 = (int *)0x2;
    if (2 < iVar2) {
      local_d3c = (int *)(param_2 + 0x210);
      do {
        local_d24 = *local_d3c;
        iVar5 = local_b0c[local_d24];
        iVar2 = local_a08[local_d24];
        if (local_904[iVar5] != iVar2) {
          iVar8 = *(int *)(param_2 + 0x208 + iVar5 * 4);
          iVar1 = *(int *)(param_2 + 0x208 + iVar2 * 4);
          local_904[iVar5] = iVar2;
          local_d30 = (int *)FUN_00c818b0(iVar5,(int)local_d14);
          this = (void *)FUN_00c818b0(iVar2,extraout_EDX);
          if ((local_d30 == (int *)0xffffffff) || (this == (void *)0xffffffff)) {
                    /* WARNING: Subroutine does not return */
            _exit(1);
          }
          iVar3 = FUN_00c81690(this,*(int *)(local_d34 + 0x344 + iVar5 * 4),
                               *(int *)(local_d34 + 0x344 + iVar2 * 4),(int)local_d30,(int)param_4,
                               param_3,local_d34);
          if (iVar3 == 0) {
            local_c10[(int)local_d40] = (int *)0xffffff38;
            local_d14[(int)local_d40] = (int *)0xffffff38;
            param_2 = local_d2c;
          }
          else {
            local_d30 = (int *)0xffffff38;
            local_d1c = (int *)0xffffff38;
            local_d28 = (int *)0xffffff38;
            local_d20 = (int *)0xffffff38;
            FUN_00c81490(local_800 + iVar8 * 8,local_d24 - iVar8,(int *)&local_d30,(int *)&local_d1c
                        );
            iVar8 = local_d24;
            FUN_00c81490(local_800 + local_d24 * 8,iVar1 - local_d24,(int *)&local_d28,
                         (int *)&local_d20);
            local_d14[iVar5] = local_d30;
            if (iVar5 == 0) {
              local_c10[0] = local_d30;
            }
            local_c10[(int)local_d40] = local_d1c;
            local_d14[(int)local_d40] = local_d28;
            local_c10[iVar2] = local_d20;
            if (iVar2 == 1) {
              local_d14[1] = local_d20;
            }
            iVar1 = iVar8;
            param_2 = local_d2c;
            if ((-1 < (int)local_d1c) || (-1 < (int)local_d28)) {
              while ((iVar1 = iVar1 + -1, -1 < iVar1 && (local_a08[iVar1] == iVar2))) {
                local_a08[iVar1] = (int)local_d40;
              }
              while ((iVar8 = iVar8 + 1, iVar8 < local_d38 && (local_b0c[iVar8] == iVar5))) {
                local_b0c[iVar8] = (int)local_d40;
              }
            }
          }
        }
        local_d40 = (int *)((int)local_d40 + 1);
        local_d3c = local_d3c + 1;
        iVar2 = local_d38;
      } while ((int)local_d40 < local_d38);
    }
    piVar4 = (int *)FUN_00c309e0(local_d18,iVar2 * 4);
    iVar5 = FUN_00c818b0(0,(int)local_d14);
    *piVar4 = iVar5;
    iVar5 = FUN_00c818b0(1,extraout_EDX_00);
    piVar4[1] = iVar5;
    iVar5 = 2;
    if (2 < local_d38) {
      local_d3c = (int *)(local_d34 + 0x34c);
      piVar9 = (int *)(param_2 + 0x30c);
      do {
        uVar6 = FUN_00c81010(*local_d3c,piVar4[piVar9[0x3f]],
                             *(int *)(local_d34 + 0x344 + piVar9[0x3f] * 4),
                             *(int *)(local_d34 + 0x344 + *piVar9 * 4));
        uVar7 = FUN_00c818b0(iVar5,(int)local_d14);
        if (((int)uVar7 < 0) || (uVar6 == uVar7)) {
          piVar4[iVar5] = uVar6 | 0x8000;
        }
        else {
          piVar4[iVar5] = uVar7;
        }
        iVar5 = iVar5 + 1;
        local_d3c = local_d3c + 1;
        piVar9 = piVar9 + 1;
      } while (iVar5 < local_d38);
    }
  }
  return piVar4;
}


//// FUNCTION FUN_00c81d10 @ 00c81d10 ////

int __fastcall FUN_00c81d10(int param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_2 + 0x504);
  iVar1 = 0;
  if (((param_3 != 0) && (param_4 != (uint *)0x0)) &&
     (iVar1 = FUN_00c309e0(param_1,iVar3 * 4), 0 < iVar3)) {
    iVar4 = param_3 - (int)param_4;
    iVar5 = iVar1 - (int)param_4;
    do {
      uVar2 = (int)((*param_4 & 0x7fff) * param_5 + 0x8000 +
                   (*(uint *)(iVar4 + (int)param_4) & 0x7fff) * (0x10000 - param_5)) >> 0x10;
      *(uint *)(iVar5 + (int)param_4) = uVar2;
      if (((char)((uint)*(undefined4 *)(iVar4 + (int)param_4) >> 8) < '\0') &&
         ((char)(*param_4 >> 8) < '\0')) {
        *(uint *)(iVar5 + (int)param_4) = uVar2 | 0x8000;
      }
      param_4 = param_4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return iVar1;
  }
  return iVar1;
}


//// FUNCTION FUN_00c81dc0 @ 00c81dc0 ////

undefined4 __fastcall FUN_00c81dc0(int param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  void *pvVar13;
  void *this;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int *local_178;
  uint *local_174;
  int *local_170;
  int local_168;
  uint local_164;
  uint *local_15c;
  int local_144 [16];
  uint local_104 [65];
  
  iVar17 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c);
  piVar1 = *(int **)(param_2 + 0x510);
  iVar6 = *(int *)(param_2 + 0x504);
  iVar2 = *(int *)(iVar17 + 0xb20);
  if (param_3 == (uint *)0x0) {
    oggpack_write((int *)(param_1 + 4),0,1);
    for (uVar9 = *(int *)(param_1 + 0x24) / 2 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
      *param_4 = 0;
      param_4 = param_4 + 1;
    }
    for (iVar17 = 0; iVar17 != 0; iVar17 = iVar17 + -1) {
      *(undefined1 *)param_4 = 0;
      param_4 = (undefined4 *)((int)param_4 + 1);
    }
    DAT_010daa1c = DAT_010daa1c + 1;
    return 0;
  }
  iVar15 = 0;
  if (0 < iVar6) {
    do {
      uVar9 = param_3[iVar15] & 0x7fff;
      switch(piVar1[0xd0]) {
      case 1:
        uVar9 = (int)uVar9 >> 2;
        break;
      case 2:
        uVar9 = (int)uVar9 >> 3;
        break;
      case 3:
        uVar9 = uVar9 / 0xc;
        break;
      case 4:
        uVar9 = (int)uVar9 >> 4;
      }
      param_3[iVar15] = param_3[iVar15] & 0x8000 | uVar9;
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar6);
  }
  local_104[0] = *param_3;
  local_104[1] = param_3[1];
  if (2 < iVar6) {
    local_178 = piVar1 + 0xd3;
    piVar4 = (int *)(param_2 + 0x30c);
    local_174 = (uint *)(iVar6 + -2);
    puVar16 = param_3 + 2;
    do {
      iVar6 = piVar4[0x3f];
      iVar15 = *piVar4;
      uVar9 = param_3[iVar6];
      uVar5 = FUN_00c81010(*local_178,uVar9,piVar1[iVar6 + 0xd1],piVar1[iVar15 + 0xd1]);
      uVar3 = *puVar16;
      if (((char)(uVar3 >> 8) < '\0') || (uVar5 == uVar3)) {
        *puVar16 = uVar5 | 0x8000;
        *(undefined4 *)(((int)local_104 - (int)param_3) + (int)puVar16) = 0;
      }
      else {
        uVar14 = *(int *)(param_2 + 0x50c) - uVar5;
        if ((int)uVar5 <= (int)uVar14) {
          uVar14 = uVar5;
        }
        iVar10 = uVar3 - uVar5;
        if (iVar10 < 0) {
          if (iVar10 < (int)-uVar14) {
            iVar10 = (uVar14 - iVar10) + -1;
          }
          else {
            iVar10 = iVar10 * -2 + -1;
          }
        }
        else if (iVar10 < (int)uVar14) {
          iVar10 = iVar10 * 2;
        }
        else {
          iVar10 = iVar10 + uVar14;
        }
        *(int *)(((int)local_104 - (int)param_3) + (int)puVar16) = iVar10;
        param_3[iVar6] = uVar9 & 0x7fff;
        param_3[iVar15] = param_3[iVar15] & 0x7fff;
      }
      piVar4 = piVar4 + 1;
      local_178 = local_178 + 1;
      puVar16 = puVar16 + 1;
      local_174 = (uint *)((int)local_174 + -1);
    } while (local_174 != (uint *)0x0);
  }
  piVar4 = (int *)(param_1 + 4);
  oggpack_write(piVar4,1,1);
  *(int *)(param_2 + 0x51c) = *(int *)(param_2 + 0x51c) + 1;
  iVar6 = FUN_00c809a0(*(int *)(param_2 + 0x50c) - 1);
  *(int *)(param_2 + 0x518) = *(int *)(param_2 + 0x518) + iVar6 * 2;
  oggpack_write(piVar4,local_104[0],iVar6);
  iVar6 = FUN_00c809a0(*(int *)(param_2 + 0x50c) - 1);
  oggpack_write(piVar4,local_104[1],iVar6);
  local_168 = 0;
  local_178 = (int *)0x2;
  local_170 = piVar1;
  if (0 < *piVar1) {
    do {
      local_170 = local_170 + 1;
      iVar6 = *local_170;
      iVar15 = piVar1[iVar6 + 0x20];
      iVar10 = piVar1[iVar6 + 0x30];
      iVar19 = 1 << ((byte)iVar10 & 0x1f);
      local_144[0] = 0;
      local_144[1] = 0;
      local_144[2] = 0;
      local_144[3] = 0;
      local_144[4] = 0;
      local_144[5] = 0;
      local_144[6] = 0;
      local_144[7] = 0;
      local_164 = 0;
      if (iVar10 != 0) {
        iVar7 = 0;
        if (0 < iVar19) {
          piVar11 = piVar1 + (iVar6 + 10) * 8;
          do {
            if (*piVar11 < 0) {
              local_144[iVar7 + 8] = 1;
            }
            else {
              local_144[iVar7 + 8] = *(int *)(*(int *)(iVar17 + 0x720 + *piVar11 * 4) + 4);
            }
            iVar7 = iVar7 + 1;
            piVar11 = piVar11 + 1;
          } while (iVar7 < iVar19);
        }
        iVar12 = 0;
        iVar7 = 0;
        if (0 < iVar15) {
          local_15c = local_104 + (int)local_178;
          do {
            iVar18 = 0;
            if (0 < iVar19) {
              do {
                if ((int)*local_15c < local_144[iVar18 + 8]) {
                  local_144[iVar7] = iVar18;
                  break;
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 < iVar19);
            }
            bVar8 = (byte)iVar12;
            iVar12 = iVar12 + iVar10;
            local_164 = local_164 | local_144[iVar7] << (bVar8 & 0x1f);
            local_15c = local_15c + 1;
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar15);
        }
        iVar10 = vorbis_book_encode(piVar1[iVar6 + 0x40] * 0x2c + iVar2,local_164,piVar4);
        *(int *)(param_2 + 0x514) = *(int *)(param_2 + 0x514) + iVar10;
      }
      iVar10 = 0;
      if (0 < iVar15) {
        local_174 = local_104 + (int)local_178;
        do {
          if (-1 < piVar1[local_144[iVar10] + iVar6 * 8 + 0x50]) {
            iVar19 = iVar2 + piVar1[local_144[iVar10] + iVar6 * 8 + 0x50] * 0x2c;
            if ((int)*local_174 < *(int *)(iVar19 + 4)) {
              iVar19 = vorbis_book_encode(iVar19,*local_174,piVar4);
              *(int *)(param_2 + 0x518) = *(int *)(param_2 + 0x518) + iVar19;
            }
          }
          iVar10 = iVar10 + 1;
          local_174 = local_174 + 1;
        } while (iVar10 < iVar15);
      }
      local_178 = (int *)((int)local_178 + iVar15);
      local_168 = local_168 + 1;
    } while (local_168 < *piVar1);
  }
  iVar17 = 0;
  pvVar13 = (void *)(piVar1[0xd0] * *param_3);
  local_168 = 0;
  local_178 = (int *)0x1;
  if (1 < *(int *)(param_2 + 0x504)) {
    local_170 = (int *)(param_2 + 0x108);
    this = pvVar13;
    do {
      uVar9 = param_3[*local_170] & 0x7fff;
      pvVar13 = this;
      if (uVar9 == param_3[*local_170]) {
        pvVar13 = (void *)(piVar1[0xd0] * uVar9);
        iVar17 = piVar1[*local_170 + 0xd1];
        FUN_00c81220(this,local_168,iVar17,(int)param_4);
        local_168 = iVar17;
      }
      local_170 = local_170 + 1;
      local_178 = (int *)((int)local_178 + 1);
      this = pvVar13;
    } while ((int)local_178 < *(int *)(param_2 + 0x504));
  }
  if (iVar17 < *(int *)(param_1 + 0x24) / 2) {
    do {
      param_4[iVar17] = pvVar13;
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(param_1 + 0x24) / 2);
  }
  DAT_010daa1c = DAT_010daa1c + 1;
  return 1;
}


//// FUNCTION FUN_00c82630 @ 00c82630 ////

undefined4 __fastcall FUN_00c82630(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  void *this;
  void *pvVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *local_10;
  int local_c;
  
  iVar1 = *(int *)(param_2 + 0x510);
  iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) +
                  *(int *)(param_1 + 0x1c) * 4) / 2;
  if (param_3 != (int *)0x0) {
    this = (void *)(*(int *)(iVar1 + 0x340) * *param_3);
    iVar8 = 0;
    local_c = 1;
    if (1 < *(int *)(param_2 + 0x504)) {
      local_10 = (int *)(param_2 + 0x108);
      pvVar2 = this;
      iVar6 = 0;
      do {
        uVar3 = param_3[*local_10] & 0x7fff;
        this = pvVar2;
        iVar7 = iVar6;
        if (uVar3 == param_3[*local_10]) {
          iVar7 = *(int *)(iVar1 + 0x344 + *local_10 * 4);
          this = (void *)(*(int *)(iVar1 + 0x340) * uVar3);
          FUN_00c81090(this,iVar6,iVar7,(int)pvVar2,(int)param_4);
          iVar8 = iVar7;
        }
        local_10 = local_10 + 1;
        local_c = local_c + 1;
        pvVar2 = this;
        iVar6 = iVar7;
      } while (local_c < *(int *)(param_2 + 0x504));
    }
    if (3 < iVar5 - iVar8) {
      iVar6 = ((iVar5 - iVar8) - 4U >> 2) + 1;
      iVar1 = iVar8 + 2;
      iVar8 = iVar8 + iVar6 * 4;
      pfVar4 = (float *)(param_4 + iVar1);
      do {
        iVar6 = iVar6 + -1;
        pfVar4[-2] = pfVar4[-2] * *(float *)(&DAT_00f85fe8 + (int)this * 4);
        pfVar4[-1] = pfVar4[-1] * *(float *)(&DAT_00f85fe8 + (int)this * 4);
        *pfVar4 = *pfVar4 * *(float *)(&DAT_00f85fe8 + (int)this * 4);
        pfVar4[1] = *(float *)(&DAT_00f85fe8 + (int)this * 4) * pfVar4[1];
        pfVar4 = pfVar4 + 4;
      } while (iVar6 != 0);
    }
    for (; iVar8 < iVar5; iVar8 = iVar8 + 1) {
      param_4[iVar8] = (float)param_4[iVar8] * *(float *)(&DAT_00f85fe8 + (int)this * 4);
    }
    return 1;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_4 = 0;
    param_4 = param_4 + 1;
  }
  return 0;
}


//// FUNCTION FUN_00c82790 @ 00c82790 ////

void __fastcall FUN_00c82790(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00c827b0 @ 00c827b0 ////

void __fastcall FUN_00c827b0(undefined4 *param_1)

{
  void *_Memory;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if ((undefined4 *)param_1[2] == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  _Memory = *(void **)param_1[2];
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (*(void **)(param_1[2] + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1[2] + 4));
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[2]);
}


//// FUNCTION FUN_00c82900 @ 00c82900 ////

void FUN_00c82900(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  void *pvVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int iVar5;
  int *unaff_EDI;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  ulonglong uVar12;
  int local_14;
  
  iVar2 = *(int *)(in_EAX + 0x1c);
  if (*(int *)(unaff_EDI[2] + iVar2 * 4) == 0) {
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(in_EAX + 0x40) + 4) + 0x1c) + iVar2 * 4) / 2;
    fVar6 = (float10)*(int *)(param_1 + 4) * (float10)0.5;
    fVar7 = (float10)*(int *)(param_1 + 4) * (float10)0.5;
    iVar1 = *unaff_EDI;
    fVar6 = (float10)fpatan(fVar6 * fVar6 * (float10)1.85e-08,(float10)1);
    fVar10 = (float10)fpatan(fVar7 * (float10)0.00074,(float10)1);
    pvVar3 = _malloc(iVar5 * 4 + 4);
    *(void **)(unaff_EDI[2] + iVar2 * 4) = pvVar3;
    local_14 = 0;
    if (0 < iVar5) {
      do {
        fVar8 = (((float10)*(int *)(param_1 + 4) * (float10)0.5) / (float10)iVar5) *
                (float10)local_14;
        fVar9 = (((float10)*(int *)(param_1 + 4) * (float10)0.5) / (float10)iVar5) *
                (float10)local_14;
        fVar8 = (float10)fpatan(fVar8 * fVar8 * (float10)1.85e-08,(float10)1);
        fVar11 = (float10)fpatan(fVar9 * (float10)0.00074,(float10)1);
        FUN_00acf400((double)((fVar9 * (float10)0.0001 +
                              fVar11 * (float10)13.100000381469727 +
                              fVar8 * (float10)2.240000009536743) *
                             (float10)(float)((float10)iVar1 /
                                             (fVar7 * (float10)0.0001 +
                                             fVar10 * (float10)13.100000381469727 +
                                             fVar6 * (float10)2.240000009536743))),(short)unaff_ESI)
        ;
        uVar12 = FUN_00acd42c();
        iVar4 = (int)uVar12;
        if (*unaff_EDI <= iVar4) {
          iVar4 = *unaff_EDI + -1;
        }
        *(int *)(*(int *)(unaff_EDI[2] + iVar2 * 4) + local_14 * 4) = iVar4;
        local_14 = local_14 + 1;
      } while (local_14 < iVar5);
    }
    *(undefined4 *)(*(int *)(unaff_EDI[2] + iVar2 * 4) + local_14 * 4) = 0xffffffff;
    unaff_EDI[iVar2 + 3] = iVar5;
  }
  return;
}


//// FUNCTION FUN_00c82bd0 @ 00c82bd0 ////

undefined4 __fastcall FUN_00c82bd0(int param_1,int *param_2,float *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_2[5];
  FUN_00c82900(iVar3);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (param_3 != (float *)0x0) {
    FUN_00c84010((int)param_4,*(int *)(param_2[2] + iVar1 * 4),param_2[iVar1 + 3],*param_2,param_3,
                 param_2[1],param_3[param_2[1]],(float)*(int *)(iVar3 + 0x10));
    return 1;
  }
  for (uVar2 = param_2[iVar1 + 3] & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_4 = 0;
    param_4 = param_4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)param_4 = 0;
    param_4 = (undefined4 *)((int)param_4 + 1);
  }
  return 0;
}


//// FUNCTION FUN_00c82c50 @ 00c82c50 ////

void __thiscall
FUN_00c82c50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_4;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return;
}


//// FUNCTION FUN_00c82ca0 @ 00c82ca0 ////

void __cdecl FUN_00c82ca0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *param_1 = *param_2 + *param_3;
  param_1[1] = fVar4 + fVar1;
  param_1[2] = fVar5 + fVar2;
  param_1[3] = fVar6 + fVar3;
  return;
}


//// FUNCTION FUN_00c82cc0 @ 00c82cc0 ////

void __cdecl FUN_00c82cc0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *param_1 = *param_2 * *param_3;
  param_1[1] = fVar4 * fVar1;
  param_1[2] = fVar5 * fVar2;
  param_1[3] = fVar6 * fVar3;
  return;
}


//// FUNCTION FUN_00c82ce0 @ 00c82ce0 ////

void __thiscall FUN_00c82ce0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *(float *)this = *(float *)this + *param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) + fVar1;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) + fVar2;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) + fVar3;
  return;
}


//// FUNCTION FUN_00c82d00 @ 00c82d00 ////

void __thiscall FUN_00c82d00(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *(float *)this = *(float *)this * *param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) * fVar1;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) * fVar2;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * fVar3;
  return;
}


//// FUNCTION FUN_00c82d20 @ 00c82d20 ////

void __fastcall FUN_00c82d20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00dad8d0;
  return;
}


//// FUNCTION FUN_00c82d40 @ 00c82d40 ////

void FUN_00c82d40(float *param_1,float param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *param_1 * param_2;
    param_1[1] = param_1[1] * param_2;
    param_1[2] = param_1[2] * param_2;
    param_1[3] = param_1[3] * param_2;
    param_1 = param_1 + 4;
  }
  return;
}


//// FUNCTION FUN_00c82da0 @ 00c82da0 ////

void FUN_00c82da0(float *param_1,int param_2,float param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint uVar6;
  
  uVar6 = param_4 >> 2;
  if (uVar6 != 0) {
    pfVar5 = param_1;
    do {
      pfVar1 = (float *)((param_2 - (int)param_1) + (int)pfVar5);
      fVar2 = pfVar1[1];
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[3];
      uVar6 = uVar6 - 1;
      *pfVar5 = *pfVar1 * param_3;
      pfVar5[1] = fVar2 * param_3;
      pfVar5[2] = fVar3 * param_3;
      pfVar5[3] = fVar4 * param_3;
      pfVar5 = pfVar5 + 4;
    } while (uVar6 != 0);
  }
  return;
}


//// FUNCTION FUN_00c82e10 @ 00c82e10 ////

void FUN_00c82e10(float *param_1,float param_2,float param_3,uint param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_2 + param_3;
  fVar4 = param_3 + param_3 + param_2;
  fVar5 = param_3 * 3.0 + param_2;
  fVar1 = param_3 * 4.0;
  for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *param_1 * param_2;
    param_1[1] = param_1[1] * fVar3;
    param_1[2] = param_1[2] * fVar4;
    param_1[3] = param_1[3] * fVar5;
    param_2 = param_2 + fVar1;
    fVar3 = fVar3 + fVar1;
    fVar4 = fVar4 + fVar1;
    fVar5 = fVar5 + fVar1;
    param_1 = param_1 + 4;
  }
  return;
}


//// FUNCTION FUN_00c82ee0 @ 00c82ee0 ////

void FUN_00c82ee0(float *param_1,int param_2,float param_3,float param_4,uint param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = param_3 + param_4;
  uVar7 = param_5 >> 2;
  fVar9 = param_4 + param_4 + param_3;
  fVar10 = param_4 * 3.0 + param_3;
  fVar2 = param_4 * 4.0;
  if (uVar7 != 0) {
    pfVar6 = param_1;
    do {
      pfVar1 = (float *)((param_2 - (int)param_1) + (int)pfVar6);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      uVar7 = uVar7 - 1;
      *pfVar6 = *pfVar1 * param_3;
      pfVar6[1] = fVar3 * fVar8;
      pfVar6[2] = fVar4 * fVar9;
      pfVar6[3] = fVar5 * fVar10;
      param_3 = param_3 + fVar2;
      fVar8 = fVar8 + fVar2;
      fVar9 = fVar9 + fVar2;
      fVar10 = fVar10 + fVar2;
      pfVar6 = pfVar6 + 4;
    } while (uVar7 != 0);
  }
  return;
}


//// FUNCTION FUN_00c82fc0 @ 00c82fc0 ////

void FUN_00c82fc0(float *param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_2[3];
    param_2 = param_2 + 4;
    *param_1 = *param_1 + fVar1;
    param_1[1] = param_1[1] + fVar2;
    param_1[2] = param_1[2] + fVar3;
    param_1[3] = param_1[3] + fVar4;
    param_1 = param_1 + 4;
  }
  return;
}


//// FUNCTION FUN_00c83000 @ 00c83000 ////

void FUN_00c83000(float *param_1,int param_2,float param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_4 >> 2;
  if (uVar5 != 0) {
    iVar6 = param_2 - (int)param_1;
    do {
      pfVar1 = (float *)(iVar6 + (int)param_1);
      fVar2 = pfVar1[1];
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[3];
      *param_1 = *param_1 + *pfVar1 * param_3;
      param_1[1] = param_1[1] + fVar2 * param_3;
      param_1[2] = param_1[2] + fVar3 * param_3;
      param_1[3] = param_1[3] + fVar4 * param_3;
      param_1 = param_1 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}


//// FUNCTION FUN_00c83070 @ 00c83070 ////

void FUN_00c83070(float *param_1,int param_2,float param_3,float param_4,uint param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = param_3 + param_4;
  uVar6 = param_5 >> 2;
  fVar9 = param_4 + param_4 + param_3;
  fVar10 = param_4 * 3.0 + param_3;
  fVar2 = param_4 * 4.0;
  if (uVar6 != 0) {
    iVar7 = param_2 - (int)param_1;
    do {
      pfVar1 = (float *)(iVar7 + (int)param_1);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      *param_1 = *param_1 + *pfVar1 * param_3;
      param_1[1] = param_1[1] + fVar3 * fVar8;
      param_1[2] = param_1[2] + fVar4 * fVar9;
      param_1[3] = param_1[3] + fVar5 * fVar10;
      param_1 = param_1 + 4;
      uVar6 = uVar6 - 1;
      param_3 = param_3 + fVar2;
      fVar8 = fVar8 + fVar2;
      fVar9 = fVar9 + fVar2;
      fVar10 = fVar10 + fVar2;
    } while (uVar6 != 0);
  }
  return;
}


//// FUNCTION FUN_00c83150 @ 00c83150 ////

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c83150(float *param_1,float *param_2,int *param_3,int *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  
  pfVar23 = (float *)*param_4;
  fVar24 = pfVar23[2];
  fVar25 = pfVar23[3];
  fVar3 = pfVar23[3];
  fVar4 = pfVar23[2];
  fVar26 = pfVar23[4];
  fVar27 = pfVar23[5];
  fVar28 = pfVar23[6];
  fVar5 = pfVar23[4];
  fVar6 = pfVar23[5];
  fVar7 = pfVar23[6];
  fVar29 = *pfVar23;
  pfVar23 = (float *)param_4[1];
  fVar30 = pfVar23[2];
  fVar31 = pfVar23[3];
  fVar8 = pfVar23[2];
  fVar9 = pfVar23[3];
  fVar32 = pfVar23[4];
  fVar33 = pfVar23[5];
  fVar34 = pfVar23[6];
  fVar10 = pfVar23[4];
  fVar11 = pfVar23[5];
  fVar12 = pfVar23[6];
  fVar35 = *pfVar23;
  pfVar23 = (float *)param_4[2];
  fVar36 = pfVar23[2];
  fVar37 = pfVar23[3];
  fVar13 = pfVar23[3];
  fVar14 = pfVar23[2];
  fVar38 = pfVar23[4];
  fVar39 = pfVar23[5];
  fVar40 = pfVar23[6];
  fVar15 = pfVar23[5];
  fVar16 = pfVar23[6];
  fVar17 = pfVar23[4];
  fVar41 = *pfVar23;
  pfVar23 = (float *)param_4[3];
  fVar42 = pfVar23[2];
  fVar43 = pfVar23[3];
  fVar18 = pfVar23[2];
  fVar19 = pfVar23[3];
  fVar44 = pfVar23[4];
  fVar45 = pfVar23[5];
  fVar46 = pfVar23[6];
  fVar20 = pfVar23[6];
  fVar21 = pfVar23[4];
  fVar22 = pfVar23[5];
  fVar47 = *pfVar23;
  fVar48 = *(float *)*param_3;
  fVar49 = *(float *)param_3[1];
  fVar50 = *(float *)param_3[2];
  fVar51 = *(float *)param_3[3];
  fVar56 = ((float *)*param_3)[1];
  fVar57 = ((float *)param_3[1])[1];
  fVar58 = ((float *)param_3[2])[1];
  fVar59 = ((float *)param_3[3])[1];
  do {
    fVar55 = fVar51;
    fVar54 = fVar50;
    fVar53 = fVar49;
    fVar52 = fVar48;
    fVar48 = *param_2;
    pfVar23 = param_2 + 0x80;
    pfVar1 = param_2 + 0x100;
    pfVar2 = param_2 + 0x180;
    param_2 = param_2 + 1;
    fVar48 = fVar48 + (1.0 - (fVar3 + fVar4)) + fVar25 * fVar56 + fVar24 * fVar52;
    fVar49 = *pfVar23 + (1.0 - (fVar8 + fVar9)) + fVar31 * fVar57 + fVar30 * fVar53;
    fVar50 = *pfVar1 + (1.0 - (fVar13 + fVar14)) + fVar37 * fVar58 + fVar36 * fVar54;
    fVar51 = *pfVar2 + (1.0 - (fVar18 + fVar19)) + fVar43 * fVar59 + fVar42 * fVar55;
    *param_1 = (fVar26 * fVar48 + fVar28 * fVar56 + fVar27 * fVar52 + -(fVar5 + fVar6 + fVar7)) *
               fVar29;
    param_1[0x80] =
         (fVar32 * fVar49 + fVar34 * fVar57 + fVar33 * fVar53 + -(fVar10 + fVar11 + fVar12)) *
         fVar35;
    param_1[0x100] =
         (fVar38 * fVar50 + fVar40 * fVar58 + fVar39 * fVar54 + -(fVar15 + fVar16 + fVar17)) *
         fVar41;
    param_1[0x180] =
         (fVar44 * fVar51 + fVar46 * fVar59 + fVar45 * fVar55 + -(fVar20 + fVar21 + fVar22)) *
         fVar47;
    param_1 = param_1 + 1;
    param_5 = param_5 + -1;
    fVar56 = fVar52;
    fVar57 = fVar53;
    fVar58 = fVar54;
    fVar59 = fVar55;
  } while (param_5 != 0);
  *(float *)*param_3 = fVar48;
  *(float *)(*param_3 + 4) = fVar52;
  *(float *)param_3[1] = fVar49;
  *(float *)(param_3[1] + 4) = fVar53;
  *(float *)param_3[2] = fVar50;
  *(float *)(param_3[2] + 4) = fVar54;
  *(float *)param_3[3] = fVar51;
  *(float *)(param_3[3] + 4) = fVar55;
  return;
}


//// FUNCTION FUN_00c83400 @ 00c83400 ////

void __thiscall FUN_00c83400(void *this,int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_1 + 0x83U & 0xfffffffc;
  if (*param_2 != 0) {
    *(undefined4 *)((int)this + 0x24) = param_4;
    *(int *)((int)this + 4) = *param_2;
    *(uint *)((int)this + 8) = uVar3;
    *(undefined4 *)((int)this + 0xc) = 0;
    puVar4 = *(undefined4 **)((int)this + 4);
    for (uVar1 = param_1 + 0x83U & 0x3ffffffc; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *param_2 = *param_2 + uVar3 * 4;
    FUN_00c65f70((int)this + 0x10);
    *param_3 = *param_3 + uVar3 * 4;
    return;
  }
  *param_3 = *param_3 + uVar3 * 4;
  return;
}


//// FUNCTION FUN_00c83490 @ 00c83490 ////

void __thiscall
FUN_00c83490(void *this,uint *param_1,int *param_2,int param_3,undefined4 param_4,float *param_5)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  void *this_00;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 local_220;
  void *local_21c;
  undefined4 local_218;
  float local_210 [131];
  
  if ((float *)param_2[2] < param_5) {
    iVar2 = param_2[1] - (int)param_5;
  }
  else {
    iVar2 = -(int)param_5;
  }
  uVar5 = param_2[2] + iVar2;
  local_218 = *(undefined4 *)((int)this + 4);
  local_220 = *(undefined4 *)((int)this + 0xc);
  uVar4 = *param_1;
  if (uVar5 < uVar4) {
    iVar2 = param_2[1] - uVar4;
  }
  else {
    iVar2 = -uVar4;
  }
  local_21c = this;
  FUN_00c67e70(local_210,param_2,uVar5 + iVar2,(int)param_5);
  uVar4 = 1;
  do {
    uVar1 = param_1[uVar4];
    if (uVar5 < uVar1) {
      iVar2 = param_2[1] - uVar1;
    }
    else {
      iVar2 = -uVar1;
    }
    FUN_00c68110(DAT_010daa0c,local_210,param_2,uVar5 + iVar2,(int)param_5);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  uVar4 = param_1[5];
  pfVar6 = local_210;
  pfVar7 = param_5;
  (**(code **)(*DAT_010daa0c + 0xc))();
  (**(code **)(*DAT_010daa0c + 0x10))(&local_220,param_1[4],param_5);
  pfVar3 = (float *)param_1[0xd];
  if (pfVar6 < pfVar3) {
    iVar2 = *(int *)(uVar4 + 8) - (int)pfVar3;
  }
  else {
    iVar2 = -(int)pfVar3;
  }
  FUN_00c68110(DAT_010daa0c,&stack0xfffffdd4,(int *)(uVar4 + 4),(int)pfVar6 + iVar2,(int)param_5);
  pfVar3 = param_5;
  if (*(uint *)(uVar4 + 8) < (uint)((int)pfVar6 + (int)param_5)) {
    pfVar3 = (float *)(*(uint *)(uVar4 + 8) - (int)pfVar6);
  }
  this_00 = (void *)(uVar4 + 0x10);
  FUN_00c66770(this_00,(int *)(param_1 + 6),(float *)&stack0xfffffdd4,pfVar7 + (int)pfVar6,'\x01',
               (uint)pfVar3);
  if (pfVar3 < param_5) {
    FUN_00c66770(this_00,(int *)(param_1 + 6),local_210 + ((int)pfVar3 - 7),pfVar7,'\x01',
                 (int)param_5 - (int)pfVar3);
  }
  (**(code **)(*DAT_010daa0c + 0x1c))(param_4,&stack0xfffffdd4,param_1[0xe],param_5);
  uVar4 = *(int *)(param_3 + 8) + (int)param_5;
  *(uint *)(param_3 + 8) = uVar4;
  if (*(uint *)(param_3 + 4) <= uVar4) {
    *(uint *)(param_3 + 8) = uVar4 - *(uint *)(param_3 + 4);
  }
  return;
}


//// FUNCTION FUN_00c83640 @ 00c83640 ////

void __thiscall
FUN_00c83640(void *this,uint *param_1,uint *param_2,int *param_3,float *param_4,undefined4 param_5,
            float *param_6,float *param_7)

{
  uint uVar1;
  int *piVar2;
  float *pfVar3;
  void *this_00;
  int iVar4;
  float unaff_ESI;
  uint uVar5;
  float unaff_EDI;
  float fVar6;
  float *pfVar7;
  float fVar8;
  undefined1 *puVar9;
  float fVar10;
  uint *local_230;
  int local_224;
  void *local_220;
  int local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined1 local_210 [524];
  
  if ((float *)param_3[2] < param_6) {
    iVar4 = param_3[1] - (int)param_6;
  }
  else {
    iVar4 = -(int)param_6;
  }
  uVar5 = param_3[2] + iVar4;
  local_218 = *(undefined4 *)((int)this + 4);
  fVar6 = (float)(int)param_7;
  local_214 = *(undefined4 *)((int)this + 0xc);
  if ((int)param_7 < 0) {
    fVar6 = fVar6 + 4.2949673e+09;
  }
  uVar1 = *param_1;
  fVar6 = fVar6 * 0.001953125;
  if (uVar5 < uVar1) {
    iVar4 = param_3[1] - uVar1;
  }
  else {
    iVar4 = -uVar1;
  }
  local_220 = this;
  FUN_00c67ff0(DAT_010daa0c,local_210,param_3,uVar5 + iVar4,fVar6,0xbb000000,(int)param_6);
  uVar1 = *param_2;
  if (uVar5 < uVar1) {
    iVar4 = param_3[1] - uVar1;
  }
  else {
    iVar4 = -uVar1;
  }
  FUN_00c68270(DAT_010daa0c,local_210,param_3,uVar5 + iVar4,1.0 - fVar6,0x3b000000,(int)param_6);
  local_21c = (int)param_1 - (int)param_2;
  local_224 = 3;
  local_230 = param_2;
  do {
    local_230 = local_230 + 1;
    uVar1 = *(uint *)(local_21c + (int)local_230);
    if (uVar5 < uVar1) {
      iVar4 = param_3[1] - uVar1;
    }
    else {
      iVar4 = -uVar1;
    }
    FUN_00c68270(DAT_010daa0c,local_210,param_3,uVar5 + iVar4,fVar6,0xbb000000,(int)param_6);
    uVar1 = *local_230;
    if (uVar5 < uVar1) {
      iVar4 = param_3[1] - uVar1;
    }
    else {
      iVar4 = -uVar1;
    }
    FUN_00c68270(DAT_010daa0c,local_210,param_3,uVar5 + iVar4,1.0 - fVar6,0x3b000000,(int)param_6);
    local_224 = local_224 + -1;
  } while (local_224 != 0);
  fVar10 = ((float)param_2[5] - (float)param_1[5]) * 0.001953125;
  puVar9 = local_210;
  (**(code **)(*DAT_010daa0c + 4))();
  fVar8 = ((float)param_2[4] - (float)param_1[4]) * 0.001953125;
  (**(code **)(*DAT_010daa0c + 4))
            (&local_224,&local_224,unaff_EDI * (float)param_1[4] + unaff_ESI * (float)param_2[4],
             fVar8,param_6);
  fVar6 = (float)param_1[0xd];
  if ((uint)unaff_ESI < (uint)fVar6) {
    iVar4 = *(int *)((int)fVar10 + 8) - (int)fVar6;
  }
  else {
    iVar4 = -(int)fVar6;
  }
  piVar2 = (int *)((int)fVar10 + 4);
  FUN_00c68270(DAT_010daa0c,&stack0xfffffdc8,piVar2,(int)unaff_ESI + iVar4,param_4,0xbb000000,
               (int)param_6);
  fVar6 = (float)param_2[0xd];
  if ((uint)unaff_ESI < (uint)fVar6) {
    iVar4 = *(int *)((int)fVar10 + 8) - (int)fVar6;
  }
  else {
    iVar4 = -(int)fVar6;
  }
  FUN_00c68270(DAT_010daa0c,&stack0xfffffdc8,piVar2,(int)unaff_ESI + iVar4,puVar9,0x3b000000,
               (int)param_6);
  pfVar7 = param_6;
  (**(code **)(*DAT_010daa0c + 0x18))
            (param_5,&stack0xfffffdc8,
             (float)puVar9 * (float)param_2[0xe] + (float)param_4 * (float)param_1[0xe],
             ((float)param_2[0xe] - (float)param_1[0xe]) * 0.001953125);
  pfVar3 = param_6;
  if (*(uint *)((int)fVar8 + 8) < (uint)((int)unaff_ESI + (int)param_6)) {
    pfVar3 = (float *)(*(uint *)((int)fVar8 + 8) - (int)unaff_ESI);
  }
  this_00 = (void *)((int)fVar8 + 0x10);
  FUN_00c667c0(this_00,(float *)(param_1 + 6),(float *)(param_2 + 6),(float *)&stack0xfffffdb4,
               param_4 + (int)unaff_ESI,'\x01',pfVar3,param_7);
  if (pfVar3 < param_6) {
    FUN_00c667c0(this_00,(float *)(param_1 + 6),(float *)(param_2 + 6),
                 (float *)(&stack0xfffffdb4 + (int)pfVar3 * 4),param_4,'\x01',
                 (float *)((int)param_6 - (int)pfVar3),param_7);
  }
  fVar6 = (float)((int)pfVar7[2] + (int)param_6);
  pfVar7[2] = fVar6;
  if ((uint)pfVar7[1] <= (uint)fVar6) {
    pfVar7[2] = (float)((int)fVar6 - (int)pfVar7[1]);
  }
  if (param_7 <= param_6) {
    for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00c839b0 @ 00c839b0 ////

void __thiscall FUN_00c839b0(void *this,int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_1 + 0x83U & 0xfffffffc;
  if (*param_2 != 0) {
    *(int *)((int)this + 0x18) = *param_2;
    *(uint *)((int)this + 0x1c) = uVar3;
    *(undefined4 *)((int)this + 0x20) = 0;
    puVar4 = *(undefined4 **)((int)this + 0x18);
    for (uVar1 = param_1 + 0x83U & 0x3ffffffc; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *param_2 = *param_2 + uVar3 * 4;
    *(undefined4 *)((int)this + 0x24) = param_4;
    FUN_00c65f70((int)this + 4);
    *param_3 = *param_3 + uVar3 * 4;
    return;
  }
  *param_3 = *param_3 + uVar3 * 4;
  return;
}


//// FUNCTION FUN_00c83a40 @ 00c83a40 ////

void __thiscall
FUN_00c83a40(void *this,int param_1,int *param_2,float *param_3,undefined4 param_4,uint param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  
  uVar3 = param_5;
  pfVar1 = *(float **)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x20);
  if ((uint)param_2[2] < param_5) {
    iVar5 = param_2[1] - param_5;
  }
  else {
    iVar5 = -param_5;
  }
  param_5 = param_2[2] + iVar5;
  pfVar7 = param_3;
  for (uVar6 = uVar3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 1;
  }
  uVar6 = uVar3;
  if (*(uint *)((int)this + 0x1c) < uVar3 + iVar4) {
    uVar6 = *(uint *)((int)this + 0x1c) - iVar4;
  }
  FUN_00c66770((void *)((int)this + 4),(int *)(param_1 + 0x10),pfVar1 + iVar4,param_3,'\x01',uVar6);
  if (uVar6 < uVar3) {
    FUN_00c66770((void *)((int)this + 4),(int *)(param_1 + 0x10),pfVar1,param_3 + uVar6,'\x01',
                 uVar3 - uVar6);
  }
  uVar6 = 0;
  do {
    uVar2 = *(uint *)(param_1 + uVar6 * 4);
    if (param_5 < uVar2) {
      iVar4 = param_2[1] - uVar2;
    }
    else {
      iVar4 = -uVar2;
    }
    FUN_00c681f0(DAT_010daa0c,param_3,param_2,param_5 + iVar4,
                 *(undefined4 *)(param_1 + 8 + uVar6 * 4),uVar3);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 2);
  (**(code **)(*DAT_010daa0c + 0x1c))(param_4,param_3,*(undefined4 *)(param_1 + 0x2c),uVar3);
  return;
}


//// FUNCTION FUN_00c83b40 @ 00c83b40 ////

void __thiscall
FUN_00c83b40(void *this,float *param_1,float *param_2,int *param_3,float *param_4,undefined4 param_5
            ,float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  int iVar11;
  float *pfVar12;
  int local_10;
  
  iVar8 = *(int *)((int)this + 0x20);
  pfVar9 = *(float **)((int)this + 0x18);
  if ((float *)param_3[2] < param_6) {
    iVar11 = param_3[1] - (int)param_6;
  }
  else {
    iVar11 = -(int)param_6;
  }
  fVar10 = (float)(param_3[2] + iVar11);
  fVar3 = (float)(int)param_7;
  if ((int)param_7 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar4 = fVar3 * 0.001953125;
  fVar5 = 1.0 - fVar4;
  fVar6 = (float)(int)param_6;
  if ((int)param_6 < 0) {
    fVar6 = fVar6 + 4.2949673e+09;
  }
  pfVar12 = param_4;
  for (pfVar7 = param_6; pfVar7 != (float *)0x0; pfVar7 = (float *)((int)pfVar7 + -1)) {
    *pfVar12 = 0.0;
    pfVar12 = pfVar12 + 1;
  }
  fVar3 = (fVar3 - fVar6) * 0.001953125;
  pfVar7 = param_6;
  if (*(uint *)((int)this + 0x1c) < (uint)(iVar8 + (int)param_6)) {
    pfVar7 = (float *)(*(uint *)((int)this + 0x1c) - iVar8);
  }
  FUN_00c667c0((void *)((int)this + 4),param_1 + 4,param_2 + 4,pfVar9 + iVar8,param_4,'\x01',pfVar7,
               param_7);
  if (pfVar7 < param_6) {
    FUN_00c667c0((void *)((int)this + 4),param_1 + 4,param_2 + 4,pfVar9,param_4 + (int)pfVar7,'\x01'
                 ,(float *)((int)param_6 - (int)pfVar7),param_7);
  }
  local_10 = 2;
  pfVar9 = param_2;
  do {
    fVar2 = *(float *)(((int)param_1 - (int)param_2) + (int)pfVar9);
    fVar1 = *(float *)(((int)param_1 - (int)param_2) + 8 + (int)pfVar9);
    if ((uint)fVar10 < (uint)fVar2) {
      iVar8 = param_3[1] - (int)fVar2;
    }
    else {
      iVar8 = -(int)fVar2;
    }
    FUN_00c68270(DAT_010daa0c,param_4,param_3,(int)fVar10 + iVar8,fVar1 * fVar4,
                 ((fVar3 - fVar4) * fVar1) / fVar6,(int)param_6);
    fVar1 = *pfVar9;
    if ((uint)fVar10 < (uint)fVar1) {
      iVar8 = param_3[1] - (int)fVar1;
    }
    else {
      iVar8 = -(int)fVar1;
    }
    FUN_00c68270(DAT_010daa0c,param_4,param_3,(int)fVar10 + iVar8,pfVar9[2] * fVar5,
                 (((1.0 - fVar3) - fVar5) * pfVar9[2]) / fVar6,(int)param_6);
    pfVar9 = pfVar9 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  fVar10 = fVar4 * param_1[0xb] + fVar5 * param_2[0xb];
  (**(code **)(*DAT_010daa0c + 0x18))
            (param_5,param_4,fVar10,
             ((fVar3 * param_1[0xb] + (1.0 - fVar3) * param_2[0xb]) - fVar10) / fVar6,param_6);
  if (param_2 <= param_6) {
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00c83d90 @ 00c83d90 ////

void __thiscall FUN_00c83d90(void *this,int param_1,int param_2,float *param_3,uint param_4)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 0x18);
  uVar3 = 0;
  uVar5 = *(uint *)((int)this + 0x20);
  if (param_4 != 0) {
    pfVar2 = (float *)(param_1 + 0x400);
    uVar4 = uVar5;
    do {
      uVar5 = uVar4 + 1;
      *(float *)(iVar1 + uVar4 * 4) =
           pfVar2[0x80] * param_3[3] +
           *pfVar2 * param_3[2] +
           pfVar2[-0x80] * param_3[1] + pfVar2[-0x100] * *param_3 + *(float *)(param_2 + uVar3 * 4);
      if (*(uint *)((int)this + 0x1c) <= uVar5) {
        uVar5 = uVar4 + (1 - *(uint *)((int)this + 0x1c));
      }
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 1;
      uVar4 = uVar5;
    } while (uVar3 < param_4);
  }
  *(uint *)((int)this + 0x20) = uVar5;
  return;
}


//// FUNCTION FUN_00c83e30 @ 00c83e30 ////

void __thiscall FUN_00c83e30(void *this,undefined4 *param_1,int param_2)

{
  FUN_00c67e70(param_1,(int *)((int)this + 0x18),*(int *)((int)this + 0x20),param_2);
  return;
}


//// FUNCTION FUN_00c83e50 @ 00c83e50 ////

void FUN_00c83e50(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((uint)param_2[2] < param_5) {
    iVar2 = param_2[1] - param_5;
  }
  else {
    iVar2 = -param_5;
  }
  uVar4 = param_2[2] + iVar2;
  uVar3 = 0;
  do {
    uVar1 = *(uint *)(param_1 + uVar3 * 4);
    if (uVar4 < uVar1) {
      iVar2 = param_2[1] - uVar1;
    }
    else {
      iVar2 = -uVar1;
    }
    FUN_00c681f0(DAT_010daa0c,param_3,param_2,uVar4 + iVar2,*(undefined4 *)(param_1 + 8 + uVar3 * 4)
                 ,param_5);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  (**(code **)(*DAT_010daa0c + 0x1c))(param_4,param_3,*(undefined4 *)(param_1 + 0x2c),param_5);
  return;
}


//// FUNCTION FUN_00c83ed0 @ 00c83ed0 ////

int FUN_00c83ed0(double param_1)

{
  return (int)ROUND(param_1);
}


//// FUNCTION FUN_00c83f00 @ 00c83f00 ////

float10 FUN_00c83f00(float param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c83ed0((double)(param_1 * 40.743668 - 0.5));
  return ((float10)(param_1 * 40.743668) - (float10)iVar1) *
         ((float10)*(float *)(&DAT_00f87394 + iVar1 * 4) -
         (float10)*(float *)(&DAT_00f87390 + iVar1 * 4)) +
         (float10)*(float *)(&DAT_00f87390 + iVar1 * 4);
}


//// FUNCTION FUN_00c83f50 @ 00c83f50 ////

float10 FUN_00c83f50(float param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = param_1 * 64.0 - 32.0;
  iVar2 = FUN_00c83ed0((double)(fVar1 - 0.5));
  return ((float10)fVar1 - (float10)iVar2) *
         ((float10)*(float *)(&DAT_00f8759c + iVar2 * 4) -
         (float10)*(float *)(&DAT_00f87598 + iVar2 * 4)) +
         (float10)*(float *)(&DAT_00f87598 + iVar2 * 4);
}


//// FUNCTION FUN_00c83fa0 @ 00c83fa0 ////

float10 __fastcall FUN_00c83fa0(int param_1)

{
  return (float10)*(float *)(&DAT_00f876a0 + param_1 * 4);
}


//// FUNCTION FUN_00c83fb0 @ 00c83fb0 ////

float10 FUN_00c83fb0(float param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00c83ed0((double)(param_1 * -8.0 - 0.5));
  if ((int)uVar1 < 0) {
    return (float10)1.0;
  }
  if (0x45f < (int)uVar1) {
    return (float10)0.0;
  }
  return (float10)*(float *)(&DAT_00f877b8 + (uVar1 & 0x1f) * 4) *
         (float10)*(float *)(&DAT_00f87728 + ((int)uVar1 >> 5) * 4);
}


//// FUNCTION FUN_00c84010 @ 00c84010 ////

void __fastcall
FUN_00c84010(int param_1,int param_2,int param_3,int param_4,float *param_5,uint param_6,
            float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int local_4;
  
  iVar8 = 0;
  if (0 < (int)param_6) {
    do {
      fVar9 = FUN_00c83f00(param_5[iVar8]);
      param_5[extraout_EDX] = (float)fVar9;
      iVar8 = extraout_EDX + 1;
    } while (iVar8 < (int)param_6);
  }
  iVar8 = 0;
  if (0 < param_3) {
    do {
      iVar4 = *(int *)(param_2 + iVar8 * 4);
      fVar9 = FUN_00c83f00((float)iVar4 * (3.1415927 / (float)param_4));
      fVar1 = (float)fVar9;
      fVar2 = 0.70710677;
      fVar3 = 0.70710677;
      pfVar6 = param_5;
      iVar7 = extraout_EDX_00;
      do {
        pfVar5 = pfVar6 + 2;
        iVar7 = iVar7 + -1;
        fVar2 = (*pfVar6 - fVar1) * fVar2;
        fVar3 = (pfVar6[1] - fVar1) * fVar3;
        pfVar6 = pfVar5;
      } while (iVar7 != 0);
      if ((param_6 & 1) == 0) {
        fVar2 = (fVar1 + 1.0) * fVar2 * fVar2;
      }
      else {
        fVar2 = (*pfVar5 - fVar1) * fVar2;
        fVar2 = fVar2 * fVar2;
        fVar1 = fVar1 * fVar1;
      }
      dVar11 = _frexp((double)(fVar2 + (1.0 - fVar1) * fVar3 * fVar3),&local_4);
      fVar9 = FUN_00c83fa0(local_4 + param_6);
      fVar10 = FUN_00c83f50((float)dVar11);
      fVar9 = FUN_00c83fb0((float)(fVar10 * (float10)(float)fVar9 * (float10)param_7 -
                                  (float10)param_8));
      pfVar6 = (float *)(param_1 + iVar8 * 4);
      do {
        pfVar5 = pfVar6 + 1;
        iVar8 = iVar8 + 1;
        *pfVar6 = (float)(fVar9 * (float10)*pfVar6);
        pfVar6 = pfVar5;
      } while (*(int *)((param_2 - param_1) + (int)pfVar5) == iVar4);
    } while (iVar8 < param_3);
  }
  return;
}


//// FUNCTION FUN_00c841a0 @ 00c841a0 ////

void FUN_00c841a0(void)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *unaff_ESI;
  int unaff_EDI;
  int local_4;
  
  iVar4 = 2;
  *unaff_ESI = *unaff_ESI * 0.5;
  local_4 = unaff_EDI;
  if (1 < unaff_EDI) {
    do {
      local_4 = local_4 + -1;
      iVar2 = unaff_EDI;
      if (3 < local_4) {
        iVar3 = ((unaff_EDI - iVar4) - 3U >> 2) + 1;
        iVar2 = unaff_EDI + iVar3 * -4;
        pfVar1 = unaff_ESI + unaff_EDI + -2;
        do {
          iVar3 = iVar3 + -1;
          *pfVar1 = *pfVar1 - pfVar1[2];
          pfVar1[2] = pfVar1[2] + pfVar1[2];
          pfVar1[-1] = pfVar1[-1] - pfVar1[1];
          pfVar1[1] = pfVar1[1] + pfVar1[1];
          pfVar1[-2] = pfVar1[-2] - *pfVar1;
          *pfVar1 = *pfVar1 + *pfVar1;
          pfVar1[-3] = pfVar1[-3] - pfVar1[-1];
          pfVar1[-1] = pfVar1[-1] + pfVar1[-1];
          pfVar1 = pfVar1 + -4;
        } while (iVar3 != 0);
      }
      for (; iVar4 <= iVar2; iVar2 = iVar2 + -1) {
        unaff_ESI[iVar2 + -2] = unaff_ESI[iVar2 + -2] - unaff_ESI[iVar2];
        unaff_ESI[iVar2] = unaff_ESI[iVar2] + unaff_ESI[iVar2];
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= unaff_EDI);
  }
  return;
}


//// FUNCTION FUN_00c84270 @ 00c84270 ////

uint __cdecl FUN_00c84270(float *param_1,float *param_2)

{
  if (*param_2 < *param_1) {
    return (*param_1 < *param_2) - 1;
  }
  return (uint)(*param_1 < *param_2);
}


//// FUNCTION FUN_00c842b0 @ 00c842b0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00c842b0(float *param_1,int param_2)

{
  double dVar1;
  int in_EAX;
  float *pfVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined8 uStack_34;
  undefined1 local_20 [8];
  double local_18;
  undefined8 local_10;
  int local_8;
  
  uStack_34._4_4_ = 0xc842d0;
  iVar4 = -(in_EAX * 8 + 8);
  puVar7 = &stack0xffffffd4 + iVar4;
  iVar5 = 0;
  if (3 < in_EAX + 1) {
    uVar6 = in_EAX + 1U >> 2;
    iVar5 = uVar6 * 4;
    pfVar2 = param_1 + 2;
    pdVar3 = (double *)(local_20 + iVar4 + 4);
    do {
      pdVar3[-2] = (double)pfVar2[-2];
      uVar6 = uVar6 - 1;
      pdVar3[-1] = (double)pfVar2[-1];
      *pdVar3 = (double)*pfVar2;
      pdVar3[1] = (double)pfVar2[1];
      pfVar2 = pfVar2 + 4;
      pdVar3 = pdVar3 + 4;
    } while (uVar6 != 0);
  }
  while (iVar5 <= in_EAX) {
    pfVar2 = param_1 + iVar5;
    iVar5 = iVar5 + 1;
    *(double *)((int)&uStack_34 + iVar5 * 8 + iVar4) = (double)*pfVar2;
  }
  if (0 < in_EAX) {
    local_8 = in_EAX * 8 + -0x10;
    param_1 = (float *)(param_2 + -4 + in_EAX * 4);
    do {
      fVar8 = (float10)0.0;
      do {
        local_10 = *(double *)(puVar7 + local_8 + 0x10);
        fVar9 = (float10)0.0;
        fVar10 = (float10)0.0;
        iVar5 = in_EAX;
        if (3 < in_EAX) {
          iVar4 = (in_EAX - 4U >> 2) + 1;
          iVar5 = in_EAX + iVar4 * -4;
          pdVar3 = (double *)(puVar7 + local_8);
          do {
            iVar4 = iVar4 + -1;
            local_18 = (double)(fVar10 * fVar8 + fVar9);
            fVar9 = fVar9 * fVar8 + (float10)local_10;
            fVar10 = (float10)local_10 * fVar8 + (float10)pdVar3[1];
            local_18 = (double)((float10)local_18 * fVar8 + fVar9);
            dVar1 = (double)(fVar9 * fVar8 + fVar10);
            local_20 = (undefined1  [8])dVar1;
            fVar9 = fVar10 * fVar8 + (float10)*pdVar3;
            local_20 = (undefined1  [8])(double)((float10)dVar1 * fVar8 + fVar9);
            local_10 = (double)(fVar9 * fVar8 + (float10)pdVar3[-1]);
            local_18 = (double)(((float10)local_18 * fVar8 + (float10)dVar1) * fVar8 +
                               (float10)(double)local_20);
            fVar9 = (float10)(double)local_20 * fVar8 + (float10)local_10;
            local_10 = (double)((float10)local_10 * fVar8 + (float10)pdVar3[-2]);
            fVar10 = (float10)local_18;
            pdVar3 = pdVar3 + -4;
          } while (iVar4 != 0);
        }
        fVar11 = (float10)local_10;
        if (0 < iVar5) {
          pdVar3 = (double *)(puVar7 + iVar5 * 8 + -8);
          do {
            iVar5 = iVar5 + -1;
            fVar10 = fVar10 * fVar8 + fVar9;
            fVar9 = fVar9 * fVar8 + fVar11;
            fVar11 = fVar11 * fVar8 + (float10)*pdVar3;
            pdVar3 = pdVar3 + -1;
          } while (iVar5 != 0);
          local_10 = (double)fVar11;
        }
        fVar10 = ((float10)(in_EAX + -1) * fVar9 * fVar9 - (float10)in_EAX * fVar10 * fVar11) *
                 (float10)(in_EAX + -1);
        if (fVar10 < (float10)0.0) {
          return 0xffffffff;
        }
        fVar10 = SQRT(fVar10);
        if (fVar9 <= (float10)0.0) {
          fVar10 = fVar9 - fVar10;
          if ((float10)-1e-06 < fVar10) {
            fVar10 = (float10)-1e-06;
          }
        }
        else {
          fVar10 = fVar10 + fVar9;
          if (fVar10 < (float10)1e-06) {
            fVar10 = (float10)1e-06;
          }
        }
        fVar9 = ((float10)in_EAX / fVar10) * (float10)local_10;
        fVar8 = fVar8 - fVar9;
        if (fVar9 < (float10)0.0) {
          fVar9 = fVar9 * (float10)-1.0;
        }
      } while ((float10)1e-11 <= ABS(fVar9 / fVar8));
      *param_1 = (float)fVar8;
      iVar5 = in_EAX;
      if (3 < in_EAX) {
        iVar4 = (in_EAX - 4U >> 2) + 1;
        iVar5 = in_EAX + iVar4 * -4;
        pdVar3 = (double *)(puVar7 + local_8);
        do {
          iVar4 = iVar4 + -1;
          fVar9 = fVar8 * (float10)pdVar3[2] + (float10)pdVar3[1];
          pdVar3[1] = (double)fVar9;
          fVar9 = fVar9 * fVar8 + (float10)*pdVar3;
          *pdVar3 = (double)fVar9;
          fVar9 = fVar9 * fVar8 + (float10)pdVar3[-1];
          pdVar3[-1] = (double)fVar9;
          pdVar3[-2] = (double)(fVar9 * fVar8 + (float10)pdVar3[-2]);
          pdVar3 = pdVar3 + -4;
        } while (iVar4 != 0);
      }
      if (0 < iVar5) {
        pdVar3 = (double *)(puVar7 + iVar5 * 8 + -8);
        do {
          iVar5 = iVar5 + -1;
          *pdVar3 = (double)(fVar8 * (float10)pdVar3[1] + (float10)*pdVar3);
          pdVar3 = pdVar3 + -1;
        } while (iVar5 != 0);
      }
      puVar7 = puVar7 + 8;
      in_EAX = in_EAX + -1;
      param_1 = param_1 + -1;
      local_8 = local_8 + -8;
      local_10._4_4_ = in_EAX;
    } while (0 < in_EAX);
  }
  return 0;
}


//// FUNCTION FUN_00c84580 @ 00c84580 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00c84580(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float *pfVar7;
  double *pdVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  uint unaff_ESI;
  int iVar13;
  undefined8 uStack_30;
  double local_18;
  undefined1 *local_10;
  int local_8;
  
  iVar13 = 0;
  local_8 = 0;
  uStack_30._4_4_ = 0xc845a2;
  iVar9 = unaff_ESI * -8;
  puVar11 = &stack0xffffffd8 + iVar9;
  local_10 = &stack0xffffffd8 + iVar9;
  if (3 < (int)unaff_ESI) {
    iVar12 = (unaff_ESI - 4 >> 2) + 1;
    iVar13 = iVar12 * 4;
    pfVar7 = (float *)(param_2 + 8);
    pdVar8 = &local_18 + -unaff_ESI;
    do {
      pdVar8[-2] = (double)pfVar7[-2];
      iVar12 = iVar12 + -1;
      pdVar8[-1] = (double)pfVar7[-1];
      *pdVar8 = (double)*pfVar7;
      pdVar8[1] = (double)pfVar7[1];
      pfVar7 = pfVar7 + 4;
      pdVar8 = pdVar8 + 4;
    } while (iVar12 != 0);
  }
  while (iVar13 < (int)unaff_ESI) {
    iVar12 = iVar13 * 4;
    iVar13 = iVar13 + 1;
    (&uStack_30)[iVar13 - unaff_ESI] = (double)*(float *)(param_2 + iVar12);
    puVar11 = &stack0xffffffd8 + iVar9;
  }
  while( true ) {
    dVar2 = 0.0;
    iVar13 = 0;
    if (0 < (int)unaff_ESI) {
      do {
        local_18 = 0.0;
        dVar1 = *(double *)(puVar11 + iVar13 * 8);
        iVar9 = unaff_ESI - 1;
        dVar3 = (double)*(float *)(param_1 + unaff_ESI * 4);
        if (3 < (int)unaff_ESI) {
          iVar12 = iVar9 * 4;
          uVar10 = unaff_ESI >> 2;
          iVar9 = iVar9 + uVar10 * -4;
          pfVar7 = (float *)(param_1 + -8 + iVar12);
          do {
            uVar10 = uVar10 - 1;
            dVar4 = dVar3 * dVar1 + (double)pfVar7[2];
            dVar5 = dVar4 * dVar1 + (double)pfVar7[1];
            dVar6 = dVar5 * dVar1 + (double)*pfVar7;
            local_18 = dVar1 * (dVar1 * (dVar1 * (dVar1 * local_18 + dVar3) + dVar4) + dVar5) +
                       dVar6;
            dVar3 = dVar6 * dVar1 + (double)pfVar7[-1];
            pfVar7 = pfVar7 + -4;
            puVar11 = local_10;
          } while (uVar10 != 0);
        }
        while (-1 < iVar9) {
          iVar9 = iVar9 + -1;
          local_18 = dVar1 * local_18 + dVar3;
          dVar3 = dVar3 * dVar1 + (double)*(float *)(param_1 + 4 + iVar9 * 4);
        }
        dVar3 = dVar3 / local_18;
        iVar13 = iVar13 + 1;
        *(double *)(puVar11 + iVar13 * 8 + -8) = *(double *)(puVar11 + iVar13 * 8 + -8) - dVar3;
        dVar2 = dVar3 * dVar3 + dVar2;
      } while (iVar13 < (int)unaff_ESI);
    }
    if (0x28 < local_8) break;
    local_8 = local_8 + 1;
    if (dVar2 <= 1e-20) {
      iVar13 = 0;
      if (3 < (int)unaff_ESI) {
        iVar9 = (unaff_ESI - 4 >> 2) + 1;
        iVar13 = iVar9 * 4;
        pdVar8 = (double *)(puVar11 + 0x10);
        pfVar7 = (float *)(param_2 + 8);
        do {
          pfVar7[-2] = (float)pdVar8[-2];
          iVar9 = iVar9 + -1;
          pfVar7[-1] = (float)pdVar8[-1];
          *pfVar7 = (float)*pdVar8;
          pfVar7[1] = (float)pdVar8[1];
          pdVar8 = pdVar8 + 4;
          pfVar7 = pfVar7 + 4;
        } while (iVar9 != 0);
      }
      for (; iVar13 < (int)unaff_ESI; iVar13 = iVar13 + 1) {
        *(float *)(param_2 + iVar13 * 4) = (float)*(double *)(puVar11 + iVar13 * 8);
      }
      return 0;
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_00c84780 @ 00c84780 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall FUN_00c84780(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  float10 fVar13;
  uint auStack_5c [3];
  size_t asStack_50 [2];
  float afStack_48 [3];
  int iStack_3c;
  float *local_20;
  float *local_1c;
  int local_c;
  
  uVar9 = param_3 + 1 >> 1;
  iVar1 = uVar9 * 4 + 4;
  iStack_3c = 0xc847a8;
  iVar12 = -iVar1;
  *(undefined4 *)((int)&iStack_3c + iVar12) = 0xc847b8;
  *(undefined4 *)((int)&iStack_3c + iVar1 * -2) = 0xc847c8;
  *(undefined4 *)((int)&iStack_3c + iVar1 * -3) = 0xc847d8;
  uVar4 = param_3 >> 1;
  *(undefined4 *)(&stack0xffffffc8 + uVar9 * 4 + iVar12) = 0x3f800000;
  local_c = 1;
  if (3 < (int)uVar9) {
    local_1c = (float *)(uVar9 >> 2);
    local_c = (int)local_1c * 4 + 1;
    pfVar10 = (float *)(param_1 + 8);
    pfVar7 = (float *)(param_1 + -0xc + param_3 * 4);
    local_20 = (float *)((int)afStack_48 + uVar9 * 4 + iVar12 + 4);
    do {
      local_20[2] = pfVar7[2] + pfVar10[-2];
      local_20[1] = pfVar7[1] + pfVar10[-1];
      *local_20 = *pfVar7 + *pfVar10;
      local_20[-1] = pfVar7[-1] + pfVar10[1];
      local_1c = (float *)((int)local_1c - 1);
      pfVar10 = pfVar10 + 4;
      pfVar7 = pfVar7 + -4;
      local_20 = local_20 + -4;
    } while (local_1c != (float *)0x0);
  }
  if (local_c <= (int)uVar9) {
    local_1c = (float *)(param_1 + -4 + local_c * 4);
    local_20 = (float *)(&stack0xffffffc8 + (uVar9 - local_c) * 4 + iVar12);
    iVar6 = param_3 - local_c;
    local_c = (uVar9 - local_c) + 1;
    pfVar10 = (float *)(param_1 + iVar6 * 4);
    do {
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + -1;
      *local_20 = *local_1c + fVar2;
      local_1c = local_1c + 1;
      local_20 = local_20 + -1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  *(undefined4 *)(&stack0xffffffc8 + uVar4 * 4 + iVar1 * -2) = 0x3f800000;
  local_c = 1;
  if (3 < (int)uVar4) {
    local_1c = (float *)(uVar4 >> 2);
    local_c = (int)local_1c * 4 + 1;
    pfVar10 = (float *)(param_1 + 8);
    pfVar7 = (float *)(param_1 + -0xc + param_3 * 4);
    local_20 = (float *)((int)afStack_48 + uVar4 * 4 + iVar1 * -2 + 4);
    do {
      local_20[2] = pfVar10[-2] - pfVar7[2];
      local_20[1] = pfVar10[-1] - pfVar7[1];
      *local_20 = *pfVar10 - *pfVar7;
      local_20[-1] = pfVar10[1] - pfVar7[-1];
      local_1c = (float *)((int)local_1c - 1);
      pfVar10 = pfVar10 + 4;
      pfVar7 = pfVar7 + -4;
      local_20 = local_20 + -4;
    } while (local_1c != (float *)0x0);
  }
  if (local_c <= (int)uVar4) {
    pfVar7 = (float *)(param_1 + -4 + local_c * 4);
    pfVar10 = (float *)(param_1 + (param_3 - local_c) * 4);
    iVar6 = (uVar4 - local_c) + 1;
    pfVar8 = (float *)(&stack0xffffffc8 + (uVar4 - local_c) * 4 + iVar1 * -2);
    do {
      fVar2 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      fVar3 = *pfVar10;
      pfVar10 = pfVar10 + -1;
      iVar6 = iVar6 + -1;
      *pfVar8 = fVar2 - fVar3;
      pfVar8 = pfVar8 + -1;
    } while (iVar6 != 0);
  }
  if ((int)uVar4 < (int)uVar9) {
    iVar6 = 2;
    if (3 < (int)(uVar4 - 1)) {
      uVar11 = uVar4 - 1 >> 2;
      iVar6 = uVar11 * 4 + 2;
      pfVar10 = (float *)((int)afStack_48 + uVar4 * 4 + iVar1 * -2 + 4);
      do {
        uVar11 = uVar11 - 1;
        fVar2 = pfVar10[1];
        pfVar10[1] = pfVar10[3] + fVar2;
        fVar3 = *pfVar10;
        *pfVar10 = pfVar10[2] + fVar3;
        pfVar10[-1] = pfVar10[3] + fVar2 + pfVar10[-1];
        pfVar10[-2] = pfVar10[2] + fVar3 + pfVar10[-2];
        pfVar10 = pfVar10 + -4;
      } while (uVar11 != 0);
    }
    if (iVar6 <= (int)uVar4) {
      iVar5 = (uVar4 - iVar6) + 1;
      pfVar10 = (float *)(&stack0xffffffc8 + (uVar4 - iVar6) * 4 + iVar1 * -2);
      do {
        iVar5 = iVar5 + -1;
        *pfVar10 = pfVar10[2] + *pfVar10;
        pfVar10 = pfVar10 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    iVar6 = 1;
    if (3 < (int)uVar9) {
      uVar11 = uVar9 >> 2;
      iVar6 = uVar11 * 4 + 1;
      pfVar10 = (float *)((int)afStack_48 + uVar9 * 4 + iVar12 + 8);
      do {
        fVar2 = pfVar10[1];
        uVar11 = uVar11 - 1;
        pfVar10[1] = fVar2 - pfVar10[2];
        fVar2 = *pfVar10 - (fVar2 - pfVar10[2]);
        *pfVar10 = fVar2;
        fVar2 = pfVar10[-1] - fVar2;
        pfVar10[-1] = fVar2;
        pfVar10[-2] = pfVar10[-2] - fVar2;
        pfVar10 = pfVar10 + -4;
      } while (uVar11 != 0);
    }
    if (iVar6 <= (int)uVar9) {
      iVar5 = (uVar9 - iVar6) + 1;
      pfVar10 = (float *)(&stack0xffffffc8 + (uVar9 - iVar6) * 4 + iVar12);
      do {
        iVar5 = iVar5 + -1;
        *pfVar10 = *pfVar10 - pfVar10[1];
        pfVar10 = pfVar10 + -1;
      } while (iVar5 != 0);
    }
    iVar6 = 1;
    if (3 < (int)uVar4) {
      uVar11 = uVar4 >> 2;
      iVar6 = uVar11 * 4 + 1;
      pfVar10 = (float *)((int)afStack_48 + uVar4 * 4 + iVar1 * -2 + 8);
      do {
        uVar11 = uVar11 - 1;
        fVar2 = pfVar10[1];
        pfVar10[1] = pfVar10[2] + fVar2;
        fVar2 = pfVar10[2] + fVar2 + *pfVar10;
        *pfVar10 = fVar2;
        fVar2 = fVar2 + pfVar10[-1];
        pfVar10[-1] = fVar2;
        pfVar10[-2] = fVar2 + pfVar10[-2];
        pfVar10 = pfVar10 + -4;
      } while (uVar11 != 0);
    }
    if (iVar6 <= (int)uVar4) {
      iVar5 = (uVar4 - iVar6) + 1;
      pfVar10 = (float *)(&stack0xffffffc8 + (uVar4 - iVar6) * 4 + iVar1 * -2);
      do {
        iVar5 = iVar5 + -1;
        *pfVar10 = pfVar10[1] + *pfVar10;
        pfVar10 = pfVar10 + -1;
      } while (iVar5 != 0);
    }
  }
  (&iStack_3c)[-iVar1] = 0xc84aa9;
  FUN_00c841a0();
  (&iStack_3c)[-iVar1] = 0xc84ab4;
  FUN_00c841a0();
  (&iStack_3c)[-iVar1] = (int)(&stack0xffffffc8 + iVar1 * -3);
  afStack_48[2 - iVar1] = (float)(&stack0xffffffc8 + iVar12);
  afStack_48[1 - iVar1] = 1.8393919e-38;
  iVar6 = FUN_00c842b0((float *)afStack_48[2 - iVar1],(&iStack_3c)[-iVar1]);
  if (iVar6 == 0) {
    (&iStack_3c)[-iVar1] = (int)(&stack0xffffffc8 + iVar1 * -4);
    afStack_48[2 - iVar1] = (float)(&stack0xffffffc8 + iVar1 * -2);
    afStack_48[1 - iVar1] = 1.8393951e-38;
    iVar6 = FUN_00c842b0((float *)afStack_48[2 - iVar1],(&iStack_3c)[-iVar1]);
    if (iVar6 == 0) {
      (&iStack_3c)[-iVar1] = (int)(&stack0xffffffc8 + iVar1 * -3);
      afStack_48[2 - iVar1] = (float)(&stack0xffffffc8 + iVar12);
      afStack_48[1 - iVar1] = 1.8393979e-38;
      FUN_00c84580((int)afStack_48[2 - iVar1],(&iStack_3c)[-iVar1]);
      (&iStack_3c)[-iVar1] = (int)(&stack0xffffffc8 + iVar1 * -4);
      afStack_48[2 - iVar1] = (float)(&stack0xffffffc8 + iVar1 * -2);
      afStack_48[1 - iVar1] = 1.8394e-38;
      FUN_00c84580((int)afStack_48[2 - iVar1],(&iStack_3c)[-iVar1]);
      (&iStack_3c)[-iVar1] = (int)FUN_00c84270;
      afStack_48[2 - iVar1] = 5.60519e-45;
      afStack_48[1 - iVar1] = (float)uVar9;
      afStack_48[-iVar1] = (float)(&stack0xffffffc8 + iVar1 * -3);
      asStack_50[1 - iVar1] = 0xc84b0e;
      _qsort((void *)afStack_48[-iVar1],(size_t)afStack_48[1 - iVar1],(size_t)afStack_48[2 - iVar1],
             (_PtFuncCompare *)(&iStack_3c)[-iVar1]);
      asStack_50[1 - iVar1] = (size_t)FUN_00c84270;
      asStack_50[-iVar1] = 4;
      auStack_5c[2 - iVar1] = uVar4;
      auStack_5c[1 - iVar1] = (uint)(&stack0xffffffc8 + iVar1 * -4);
      auStack_5c[-iVar1] = 0xc84b1f;
      _qsort((void *)auStack_5c[1 - iVar1],auStack_5c[2 - iVar1],asStack_50[-iVar1],
             (_PtFuncCompare *)asStack_50[1 - iVar1]);
      iVar12 = 0;
      if (0 < (int)uVar9) {
        do {
          (&iStack_3c)[-iVar1] = 0xc84b3b;
          fVar13 = (float10)FUN_00ad1010();
          *(float *)(param_2 + iVar12 * 8) = (float)fVar13;
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)uVar9);
      }
      iVar12 = 0;
      if (0 < (int)uVar4) {
        pfVar10 = (float *)(param_2 + 4);
        do {
          (&iStack_3c)[-iVar1] = 0xc84b5d;
          fVar13 = (float10)FUN_00ad1010();
          *pfVar10 = (float)fVar13;
          iVar12 = iVar12 + 1;
          pfVar10 = pfVar10 + 2;
        } while (iVar12 < (int)uVar4);
      }
      return 0;
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_00c84bb0 @ 00c84bb0 ////

void __cdecl FUN_00c84bb0(undefined1 param_1)

{
  DAT_010daa24 = param_1;
  return;
}


//// FUNCTION FUN_00c84bc0 @ 00c84bc0 ////

void __cdecl FUN_00c84bc0(undefined4 param_1)

{
  DAT_00f87838 = param_1;
  return;
}


//// FUNCTION FUN_00c84bf0 @ 00c84bf0 ////

void FUN_00c84bf0(uint *param_1,uint param_2,undefined4 *param_3,ushort *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  uint *puVar9;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  ushort *puVar14;
  undefined4 local_70;
  undefined1 local_6c [4];
  undefined4 *local_68;
  int local_64;
  undefined4 local_60;
  undefined1 local_5c [4];
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined1 auStack_4c [4];
  void *pvStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined1 local_3c [4];
  undefined2 *local_38;
  undefined2 *local_34;
  undefined4 local_30;
  undefined1 local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar11 = param_2;
  puStack_8 = &LAB_00d05f3e;
  pvStack_c = ExceptionList;
  local_3c[0] = param_4._0_1_;
  local_38 = (undefined2 *)0x0;
  local_34 = (undefined2 *)0x0;
  local_30 = 0;
  local_4 = 0;
  local_70 = 0;
  if (param_2 == 0) {
    ExceptionList = &pvStack_c;
    iVar5 = FUN_007bd540((int)local_3c);
    puVar10 = extraout_ECX_00;
    if (iVar5 != 0) {
      FUN_00c85680(local_3c,local_38,local_34);
      puVar10 = extraout_ECX_01;
    }
  }
  else {
    puVar10 = &local_70;
    ExceptionList = &pvStack_c;
    iVar5 = FUN_007bd540((int)local_3c);
    FUN_00c85470(local_3c,(undefined2 *)0x0,uVar11 - iVar5,(undefined2 *)puVar10);
    puVar10 = extraout_ECX;
  }
  puVar12 = (undefined4 *)0x0;
  uVar6 = 0;
  if (uVar11 != 0) {
    do {
      local_38[uVar6] = *(undefined2 *)((int)param_1 + uVar6 * 2);
      uVar1 = *(ushort *)((int)param_1 + uVar6 * 2);
      puVar10 = (undefined4 *)CONCAT22((short)((uint)puVar10 >> 0x10),uVar1);
      if ((ushort)puVar12 < uVar1) {
        puVar12 = puVar10;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar11);
  }
  local_58 = 0;
  local_5c[0] = param_4._0_1_;
  local_54 = 0;
  local_50 = 0;
  local_68 = (undefined4 *)0x0;
  local_6c[0] = param_4._0_1_;
  local_64 = 0;
  local_60 = 0;
  local_4._0_1_ = 2;
  FUN_00c856d0(local_2c);
  local_4._0_1_ = 3;
  FUN_00c87800(local_2c,local_3c,DAT_00f87838,DAT_010daa20,puVar12,local_5c,local_6c);
  pvStack_48 = (void *)0x0;
  auStack_4c[0] = param_4._0_1_;
  iStack_44 = 0;
  uStack_40 = 0;
  local_4._0_1_ = 4;
  uVar3 = (undefined1)local_4;
  local_4._0_1_ = 4;
  param_2 = 0;
  if (DAT_010daa24 == '\0') {
    local_4._0_1_ = uVar3;
    FUN_00c87320((int)local_5c,auStack_4c,DAT_00f8783c,(int *)&param_2);
    *param_4 = (ushort)param_2;
    if ((local_68 != (undefined4 *)0x0) && (local_64 - (int)local_68 >> 2 != 0)) {
      *param_4 = (ushort)param_2 + 1;
    }
    uVar11 = (uint)*param_4;
    puVar9 = operator_new(uVar11 * 0xc + 4);
    local_4._0_1_ = 6;
    if (puVar9 == (uint *)0x0) {
      param_1 = (uint *)0x0;
    }
    else {
      param_1 = puVar9 + 1;
      *puVar9 = uVar11;
      _eh_vector_constructor_iterator_(param_1,0xc,uVar11,FUN_00c856b0,FUN_009b7820);
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    uVar11 = 0;
    *param_3 = param_1;
    uVar6 = 0;
    if (param_2 != 0) {
      puVar9 = param_1 + 2;
      do {
        uVar13 = uVar11;
        if (DAT_00f8783c == '\0') {
          for (; ((pvStack_48 != (void *)0x0 && (uVar13 < (uint)(iStack_44 - (int)pvStack_48 >> 2)))
                 && (*(int *)((int)pvStack_48 + uVar13 * 4) != -1)); uVar13 = uVar13 + 1) {
          }
          uVar13 = uVar13 - uVar11;
        }
        else if (pvStack_48 == (void *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar13 = iStack_44 - (int)pvStack_48 >> 2;
        }
        puVar9[-2] = 1;
        pvVar8 = operator_new(uVar13 * 2);
        puVar9[-1] = uVar13;
        iVar5 = uVar13 + uVar11;
        *puVar9 = (uint)pvVar8;
        if ((int)uVar11 < iVar5) {
          iVar7 = 0;
          do {
            iVar2 = uVar11 * 4;
            uVar11 = uVar11 + 1;
            *(undefined2 *)(iVar7 + *puVar9) = *(undefined2 *)((int)pvStack_48 + iVar2);
            iVar7 = iVar7 + 2;
          } while ((int)uVar11 < iVar5);
        }
        uVar6 = uVar6 + 1;
        puVar9 = puVar9 + 3;
        uVar11 = iVar5 + 1;
      } while (uVar6 < param_2);
    }
    if ((local_68 != (undefined4 *)0x0) &&
       (param_3 = (undefined4 *)(local_64 - (int)local_68 >> 2), param_3 != (undefined4 *)0x0)) {
      puVar9 = param_1 + (*param_4 - 1) * 3;
      *puVar9 = 0;
      if (local_68 == (undefined4 *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = local_64 - (int)local_68 >> 2;
      }
      pvVar8 = operator_new(iVar5 * 6);
      puVar9[2] = (uint)pvVar8;
      if (local_68 == (undefined4 *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = local_64 - (int)local_68 >> 2;
      }
      puVar9[1] = iVar5 * 3;
      iVar5 = 0;
      for (uVar11 = 0;
          (local_68 != (undefined4 *)0x0 && (uVar11 < (uint)(local_64 - (int)local_68 >> 2)));
          uVar11 = uVar11 + 1) {
        *(undefined2 *)(iVar5 + puVar9[2]) = *(undefined2 *)local_68[uVar11];
        *(undefined2 *)(iVar5 + 2 + puVar9[2]) = *(undefined2 *)(local_68[uVar11] + 4);
        *(undefined2 *)(iVar5 + 4 + puVar9[2]) = *(undefined2 *)(local_68[uVar11] + 8);
        iVar5 = iVar5 + 6;
      }
    }
  }
  else {
    *param_4 = 1;
    param_4 = operator_new(0x10);
    local_4._0_1_ = 5;
    if (param_4 == (ushort *)0x0) {
      puVar14 = (ushort *)0x0;
    }
    else {
      puVar14 = param_4 + 2;
      param_4[0] = 1;
      param_4[1] = 0;
      _eh_vector_constructor_iterator_(puVar14,0xc,1,FUN_00c856b0,FUN_009b7820);
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    *param_3 = puVar14;
    iVar5 = 0;
    uVar11 = 0;
    while ((local_58 != 0 && (uVar11 < (uint)(local_54 - local_58 >> 2)))) {
      iVar7 = *(int *)(local_58 + uVar11 * 4);
      iVar2 = *(int *)(iVar7 + 0x10);
      if (iVar2 == 0) {
        uVar11 = uVar11 + 1;
      }
      else {
        uVar11 = uVar11 + 1;
        iVar5 = (*(int *)(iVar7 + 0x14) - iVar2 >> 2) * 3 + iVar5;
      }
    }
    if (local_68 == (undefined4 *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = local_64 - (int)local_68 >> 2;
    }
    iVar5 = iVar7 * 3 + iVar5;
    puVar14[0] = 0;
    puVar14[1] = 0;
    *(int *)(puVar14 + 2) = iVar5;
    pvVar8 = operator_new(iVar5 * 2);
    iVar5 = 0;
    *(void **)(puVar14 + 4) = pvVar8;
    for (param_4 = (ushort *)0x0;
        (local_58 != 0 && (param_4 < (ushort *)(local_54 - local_58 >> 2)));
        param_4 = (ushort *)((int)param_4 + 1)) {
      uVar11 = 0;
      while( true ) {
        iVar7 = *(int *)(local_58 + (int)param_4 * 4);
        iVar2 = *(int *)(iVar7 + 0x10);
        if ((iVar2 == 0) || ((uint)(*(int *)(iVar7 + 0x14) - iVar2 >> 2) <= uVar11)) break;
        bVar4 = FUN_00c87ac0(*(int **)(iVar2 + uVar11 * 4));
        if (bVar4) {
          uVar11 = uVar11 + 1;
          *(int *)(puVar14 + 2) = *(int *)(puVar14 + 2) + -3;
        }
        else {
          iVar5 = iVar5 + 3;
          uVar11 = uVar11 + 1;
          *(undefined2 *)(*(int *)(puVar14 + 4) + -6 + iVar5 * 2) =
               **(undefined2 **)
                 (*(int *)(*(int *)(local_58 + (int)param_4 * 4) + 0x10) + -4 + uVar11 * 4);
          *(undefined2 *)(*(int *)(puVar14 + 4) + -4 + iVar5 * 2) =
               *(undefined2 *)
                (*(int *)(*(int *)(*(int *)(local_58 + (int)param_4 * 4) + 0x10) + -4 + uVar11 * 4)
                + 4);
          *(undefined2 *)(*(int *)(puVar14 + 4) + -2 + iVar5 * 2) =
               *(undefined2 *)
                (*(int *)(*(int *)(*(int *)(local_58 + (int)param_4 * 4) + 0x10) + -4 + uVar11 * 4)
                + 8);
        }
      }
    }
    iVar5 = iVar5 * 2;
    for (uVar11 = 0;
        (local_68 != (undefined4 *)0x0 && (uVar11 < (uint)(local_64 - (int)local_68 >> 2)));
        uVar11 = uVar11 + 1) {
      *(undefined2 *)(iVar5 + *(int *)(puVar14 + 4)) = *(undefined2 *)local_68[uVar11];
      *(undefined2 *)(iVar5 + 2 + *(int *)(puVar14 + 4)) = *(undefined2 *)(local_68[uVar11] + 4);
      *(undefined2 *)(iVar5 + 4 + *(int *)(puVar14 + 4)) = *(undefined2 *)(local_68[uVar11] + 8);
      iVar5 = iVar5 + 6;
    }
  }
  uVar11 = 0;
  while( true ) {
    if ((local_58 == 0) || ((uint)(local_54 - local_58 >> 2) <= uVar11)) {
      if ((local_68 != (undefined4 *)0x0) && (local_64 - (int)local_68 >> 2 != 0)) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*local_68);
      }
                    /* WARNING: Subroutine does not return */
      _free(pvStack_48);
    }
    iVar5 = *(int *)(local_58 + uVar11 * 4);
    puVar10 = *(undefined4 **)(iVar5 + 0x10);
    if ((puVar10 != (undefined4 *)0x0) && (*(int *)(iVar5 + 0x14) - (int)puVar10 >> 2 != 0)) break;
    iVar5 = *(int *)(local_58 + uVar11 * 4);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(iVar5 + 0x10));
    }
    uVar11 = uVar11 + 1;
    *(undefined4 *)(local_58 + -4 + uVar11 * 4) = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*puVar10);
}


//// FUNCTION FUN_00c85430 @ 00c85430 ////

void __fastcall FUN_00c85430(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00c85450 @ 00c85450 ////

void __fastcall FUN_00c85450(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00c85470 @ 00c85470 ////

void __thiscall FUN_00c85470(void *this,undefined2 *param_1,uint param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar5 = *(undefined2 **)((int)this + 8);
  if ((uint)(*(int *)((int)this + 0xc) - (int)puVar5 >> 1) < param_2) {
    iVar1 = *(int *)((int)this + 4);
    if ((iVar1 == 0) || (uVar3 = (int)puVar5 - iVar1 >> 1, uVar3 <= param_2)) {
      uVar3 = param_2;
    }
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)puVar5 - iVar1 >> 1;
    }
    iVar1 = iVar1 + uVar3;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 * 2);
    for (puVar5 = *(undefined2 **)((int)this + 4); uVar3 = param_2, puVar4 = puVar2,
        puVar5 != param_1; puVar5 = puVar5 + 1) {
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = *param_3;
      }
      puVar4 = puVar4 + 1;
    }
    puVar4 = *(undefined2 **)((int)this + 8);
    puVar5 = puVar2 + param_2;
    if (param_1 != puVar4) {
      puVar2 = (undefined2 *)((int)puVar5 + (param_2 * -2 - (int)puVar2) + (int)param_1);
      do {
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = *puVar2;
        }
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar2 != puVar4);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  if ((uint)((int)puVar5 - (int)param_1 >> 1) < param_2) {
    puVar2 = param_1 + param_2;
    if (param_1 != puVar5) {
      puVar4 = puVar2 + -param_2;
      do {
        if (puVar2 != (undefined2 *)0x0) {
          *puVar2 = *puVar4;
        }
        puVar4 = puVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (puVar4 != puVar5);
    }
    puVar5 = *(undefined2 **)((int)this + 8);
    for (iVar1 = param_2 - ((int)puVar5 - (int)param_1 >> 1); iVar1 != 0; iVar1 = iVar1 + -1) {
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = *param_3;
      }
      puVar5 = puVar5 + 1;
    }
    puVar5 = *(undefined2 **)((int)this + 8);
    for (; param_1 != puVar5; param_1 = param_1 + 1) {
      *param_1 = *param_3;
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 2;
    return;
  }
  if (param_2 != 0) {
    puVar2 = puVar5;
    for (puVar4 = puVar5 + -param_2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = *puVar4;
      }
      puVar2 = puVar2 + 1;
    }
    puVar5 = *(undefined2 **)((int)this + 8);
    for (puVar2 = puVar5 + -param_2; param_1 != puVar2; puVar2 = puVar2 + -1) {
      puVar5 = puVar5 + -1;
      *puVar5 = puVar2[-1];
    }
    puVar5 = param_1 + param_2;
    for (; param_1 != puVar5; param_1 = param_1 + 1) {
      *param_1 = *param_3;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 2;
  }
  return;
}


//// FUNCTION FUN_00c85680 @ 00c85680 ////

void __thiscall FUN_00c85680(void *this,undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)((int)this + 8);
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *(undefined2 **)((int)this + 8) = param_1;
  return;
}


//// FUNCTION FUN_00c856b0 @ 00c856b0 ////

void __fastcall FUN_00c856b0(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00c856d0 @ 00c856d0 ////

void __fastcall FUN_00c856d0(undefined1 *param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = local_1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00c856f0 @ 00c856f0 ////

void __fastcall FUN_00c856f0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00c85710 @ 00c85710 ////

int __cdecl FUN_00c85710(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + param_2 * 4);
  while( true ) {
    while( true ) {
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(iVar1 + 0xc) == param_2) break;
      if (*(int *)(iVar1 + 0xc) == param_3) {
        return iVar1;
      }
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    if (*(int *)(iVar1 + 0x10) == param_3) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}


//// FUNCTION FUN_00c85750 @ 00c85750 ////

int __cdecl FUN_00c85750(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00c85710(param_1,param_2,param_3);
  if ((iVar1 == 0) && (param_2 == param_3)) {
    return 0;
  }
  if (*(int *)(iVar1 + 4) == param_4) {
    return *(int *)(iVar1 + 8);
  }
  return *(int *)(iVar1 + 4);
}


//// FUNCTION FUN_00c85790 @ 00c85790 ////

uint FUN_00c85790(int *param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  iVar1 = *(int *)(param_2 + 4);
  while( true ) {
    if ((iVar1 == 0) || (in_EAX = (int *)(*(int *)(param_2 + 8) - iVar1 >> 2), in_EAX <= piVar2)) {
      return (uint)in_EAX & 0xffffff00;
    }
    in_EAX = *(int **)(iVar1 + (int)piVar2 * 4);
    if (((*in_EAX == *param_1) && (in_EAX[1] == param_1[1])) &&
       (in_EAX = (int *)in_EAX[2], in_EAX == (int *)param_1[2])) break;
    piVar2 = (int *)((int)piVar2 + 1);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


//// FUNCTION FUN_00c857f0 @ 00c857f0 ////

/* WARNING: Removing unreachable block (ram,0x00c85d7c) */
/* WARNING: Removing unreachable block (ram,0x00c85d91) */
/* WARNING: Removing unreachable block (ram,0x00c85da0) */
/* WARNING: Removing unreachable block (ram,0x00c85dad) */
/* WARNING: Removing unreachable block (ram,0x00c85dba) */
/* WARNING: Removing unreachable block (ram,0x00c85e54) */
/* WARNING: Removing unreachable block (ram,0x00c85e69) */
/* WARNING: Removing unreachable block (ram,0x00c85e78) */
/* WARNING: Removing unreachable block (ram,0x00c85e81) */

void __thiscall FUN_00c857f0(void *this,undefined4 *param_1,void *param_2,undefined4 *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint *_Memory;
  bool bVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 **ppuVar13;
  uint *local_1c;
  uint local_18;
  uint *local_14;
  undefined4 *local_10;
  void *local_c;
  uint local_8;
  int local_4;
  
  pvVar5 = param_2;
  puVar4 = param_1;
  if (*(int *)((int)this + 4) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 1;
  }
  local_8 = iVar12 / 3;
  if (param_1[1] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (int)(param_1[3] - param_1[1]) >> 2;
  }
  local_c = this;
  if (uVar7 < local_8) {
    uVar7 = local_8;
    if ((int)local_8 < 0) {
      uVar7 = 0;
    }
    puVar8 = operator_new(uVar7 * 4);
    FUN_00c89440((undefined4 *)puVar4[1],(undefined4 *)puVar4[2],puVar8);
    FUN_00c89430();
                    /* WARNING: Subroutine does not return */
    _free((void *)puVar4[1]);
  }
  uVar9 = 0;
  param_1 = (undefined4 *)0x0;
  uVar7 = ((uint)param_3 & 0xffff) + 1;
  if (*(int *)((int)param_2 + 4) != 0) {
    uVar9 = *(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4) >> 2;
  }
  if (uVar9 < uVar7) {
    param_3 = *(undefined4 **)((int)param_2 + 8);
    ppuVar13 = &param_1;
    iVar12 = FUN_00c89240((int)param_2);
    FUN_00c89640(pvVar5,param_3,uVar7 - iVar12,ppuVar13);
  }
  else {
    uVar9 = FUN_00c89240((int)param_2);
    if (uVar7 < uVar9) {
      FUN_00c89850(pvVar5,(undefined4 *)(*(int *)((int)pvVar5 + 4) + uVar7 * 4),
                   *(undefined4 **)((int)pvVar5 + 8));
    }
  }
  iVar12 = 0;
  if (uVar7 != 0) {
    do {
      iVar12 = iVar12 + 1;
      *(undefined4 *)(*(int *)((int)pvVar5 + 4) + -4 + iVar12 * 4) = 0;
    } while (iVar12 < (int)uVar7);
  }
  if (0 < (int)local_8) {
    local_4 = 0;
    do {
      iVar12 = *(int *)((int)this + 4);
      puVar1 = (ushort *)(iVar12 + local_4);
      uVar7 = (uint)*puVar1;
      iVar10 = local_4 + 4;
      uVar2 = *(ushort *)(iVar12 + local_4 + 2);
      uVar9 = (uint)uVar2;
      local_4 = local_4 + 6;
      param_1 = (undefined4 *)CONCAT31(param_1._1_3_,1);
      uVar3 = *(ushort *)(iVar12 + iVar10);
      local_18 = (uint)uVar3;
      param_3 = (undefined4 *)((uint)param_3 & 0xff000000);
      bVar6 = FUN_00c87ae0(*puVar1,uVar2,uVar3);
      if (!bVar6) {
        local_14 = operator_new(0x18);
        pvVar5 = param_2;
        if (local_14 == (uint *)0x0) {
          local_14 = (uint *)0x0;
        }
        else {
          *local_14 = uVar7;
          local_14[1] = uVar9;
          local_14[2] = local_18;
          local_14[3] = 0xffffffff;
          local_14[4] = 0xffffffff;
          local_14[5] = 0xffffffff;
        }
        local_1c = local_14;
        local_10 = (undefined4 *)FUN_00c85710((int)param_2,uVar7,uVar9);
        if (local_10 == (undefined4 *)0x0) {
          param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
          local_10 = operator_new(0x1c);
          if (local_10 == (undefined4 *)0x0) {
            local_10 = (undefined4 *)0x0;
          }
          else {
            local_10[3] = uVar7;
            local_10[4] = uVar9;
            local_10[1] = 0;
            local_10[2] = 0;
            local_10[5] = 0;
            local_10[6] = 0;
            *local_10 = 2;
          }
          local_10[5] = *(undefined4 *)(*(int *)((int)pvVar5 + 4) + uVar7 * 4);
          local_10[6] = *(undefined4 *)(*(int *)((int)pvVar5 + 4) + uVar9 * 4);
          *(undefined4 **)(*(int *)((int)pvVar5 + 4) + uVar7 * 4) = local_10;
          *(undefined4 **)(*(int *)((int)pvVar5 + 4) + uVar9 * 4) = local_10;
          local_10[1] = local_1c;
        }
        else if (local_10[2] == 0) {
          param_3 = (undefined4 *)CONCAT31(param_3._1_3_,1);
          local_10[2] = local_14;
        }
        else {
          FID_conflict__wprintf((wchar_t *)s_BuildStripifyInfo__>_2_triangles_00f87840);
        }
        local_14 = (uint *)FUN_00c85710((int)pvVar5,uVar9,local_18);
        if (local_14 == (undefined4 *)0x0) {
          param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
          local_14 = operator_new(0x1c);
          if (local_14 == (undefined4 *)0x0) {
            local_14 = (undefined4 *)0x0;
          }
          else {
            local_14[3] = uVar9;
            local_14[4] = local_18;
            local_14[1] = 0;
            local_14[2] = 0;
            local_14[5] = 0;
            local_14[6] = 0;
            *local_14 = 2;
          }
          local_14[5] = *(undefined4 *)(*(int *)((int)pvVar5 + 4) + uVar9 * 4);
          local_14[6] = *(undefined4 *)(*(int *)((int)pvVar5 + 4) + local_18 * 4);
          *(uint **)(*(int *)((int)pvVar5 + 4) + uVar9 * 4) = local_14;
          *(uint **)(*(int *)((int)pvVar5 + 4) + local_18 * 4) = local_14;
          local_14[1] = (uint)local_1c;
        }
        else if (local_14[2] == 0) {
          param_3._0_2_ = CONCAT11(1,param_3._0_1_);
          local_14[2] = (uint)local_1c;
        }
        else {
          FID_conflict__wprintf((wchar_t *)s_BuildStripifyInfo__>_2_triangles_00f87840);
        }
        uVar9 = local_18;
        local_18 = FUN_00c85710((int)pvVar5,local_18,uVar7);
        if (local_18 == 0) {
          puVar8 = operator_new(0x1c);
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8[3] = uVar9;
            puVar8[4] = uVar7;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[5] = 0;
            puVar8[6] = 0;
            *puVar8 = 2;
          }
          puVar8[5] = *(undefined4 *)(*(int *)((int)pvVar5 + 4) + uVar9 * 4);
          puVar8[6] = *(undefined4 *)(*(int *)((int)pvVar5 + 4) + uVar7 * 4);
          *(undefined4 **)(*(int *)((int)pvVar5 + 4) + uVar9 * 4) = puVar8;
          *(undefined4 **)(*(int *)((int)pvVar5 + 4) + uVar7 * 4) = puVar8;
          puVar8[1] = local_1c;
LAB_00c85b64:
          puVar8 = (undefined4 *)puVar4[2];
          if (puVar4[3] - (int)puVar8 >> 2 == 0) {
            if ((puVar4[1] == 0) || (uVar7 = (int)puVar8 - puVar4[1] >> 2, uVar7 < 2)) {
              uVar7 = 1;
            }
            iVar12 = FUN_00c89200((int)puVar4);
            iVar12 = iVar12 + uVar7;
            if (iVar12 < 0) {
              iVar12 = 0;
            }
            puVar11 = operator_new(iVar12 << 2);
            param_1 = (undefined4 *)FUN_00c89440((undefined4 *)puVar4[1],puVar8,puVar11);
            FUN_00c8ab00(param_1,1,&local_1c);
            FUN_00c89440(puVar8,(undefined4 *)puVar4[2],param_1 + 1);
            FUN_00c89430();
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar4[1]);
          }
          FUN_00c89440(puVar8,puVar8,puVar8 + 1);
          FUN_00c8ab00((undefined4 *)puVar4[2],1 - ((int)puVar4[2] - (int)puVar8 >> 2),&local_1c);
          puVar11 = (undefined4 *)puVar4[2];
          for (; puVar8 != puVar11; puVar8 = puVar8 + 1) {
            *puVar8 = local_1c;
          }
        }
        else {
          if (*(int *)(local_18 + 8) == 0) {
            param_3._0_3_ = CONCAT12(1,param_3._0_2_);
            *(uint **)(local_18 + 8) = local_1c;
          }
          else {
            FID_conflict__wprintf((wchar_t *)s_BuildStripifyInfo__>_2_triangles_00f87840);
          }
          _Memory = local_1c;
          if ((char)param_1 == '\0') goto LAB_00c85b64;
          uVar7 = FUN_00c85790((int *)local_1c,(int)puVar4);
          if ((char)uVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
          puVar8 = (undefined4 *)puVar4[2];
          if (puVar4[3] - (int)puVar8 >> 2 == 0) {
            if ((puVar4[1] == 0) || ((uint)((int)puVar8 - puVar4[1] >> 2) < 2)) {
              iVar12 = 1;
            }
            else {
              iVar12 = FUN_00c89200((int)puVar4);
            }
            iVar10 = FUN_00c89200((int)puVar4);
            iVar10 = iVar10 + iVar12;
            if (iVar10 < 0) {
              iVar10 = 0;
            }
            puVar11 = operator_new(iVar10 * 4);
            param_1 = (undefined4 *)FUN_00c89440((undefined4 *)puVar4[1],puVar8,puVar11);
            FUN_00c8ab00(param_1,1,&local_1c);
            FUN_00c89440(puVar8,(undefined4 *)puVar4[2],param_1 + 1);
            FUN_00c89430();
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar4[1]);
          }
          FUN_00c89440(puVar8,puVar8,puVar8 + 1);
          FUN_00c8ab00((undefined4 *)puVar4[2],1 - ((int)puVar4[2] - (int)puVar8 >> 2),&local_1c);
          puVar11 = (undefined4 *)puVar4[2];
          for (; puVar8 != puVar11; puVar8 = puVar8 + 1) {
            *puVar8 = local_1c;
          }
        }
        puVar4[2] = puVar4[2] + 4;
      }
      local_8 = local_8 - 1;
      this = local_c;
    } while (local_8 != 0);
  }
  return;
}


//// FUNCTION FUN_00c85eb0 @ 00c85eb0 ////

uint FUN_00c85eb0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  iVar1 = *(int *)(param_1 + 4);
  for (local_14 = 0; (iVar1 != 0 && (local_14 < (uint)(*(int *)(param_1 + 8) - iVar1 >> 2)));
      local_14 = local_14 + 1) {
    piVar2 = *(int **)(iVar1 + local_14 * 4);
    iVar5 = piVar2[1];
    iVar3 = *piVar2;
    iVar4 = FUN_00c85750(param_2,iVar3,iVar5,(int)piVar2);
    uVar6 = (uint)(iVar4 == 0);
    iVar4 = piVar2[2];
    iVar5 = FUN_00c85750(param_2,iVar5,iVar4,(int)piVar2);
    if (iVar5 == 0) {
      uVar6 = uVar6 + 1;
    }
    iVar5 = FUN_00c85750(param_2,iVar4,iVar3,(int)piVar2);
    if (iVar5 == 0) {
      uVar6 = uVar6 + 1;
    }
    if ((int)local_10 < (int)uVar6) {
      local_c = local_14;
      local_10 = uVar6;
    }
  }
  if (local_10 == 0) {
    return 0xffffffff;
  }
  return local_c;
}


//// FUNCTION FUN_00c85f90 @ 00c85f90 ////

undefined4 __thiscall FUN_00c85f90(void *this,int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  if (*(char *)((int)this + 0x1c) == '\0') {
    lVar6 = __ftol();
    uVar2 = (uint)lVar6;
  }
  else {
    uVar2 = FUN_00c85eb0(param_1,param_2);
    *(undefined1 *)((int)this + 0x1c) = 0;
  }
  if (uVar2 == 0xffffffff) {
    lVar6 = __ftol();
    uVar2 = (uint)lVar6;
  }
  uVar3 = uVar2;
  do {
    if (*(int *)(*(int *)(*(int *)(param_1 + 4) + uVar3 * 4) + 0xc) < 0) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 4);
      break;
    }
    uVar3 = uVar3 + 1;
    if (iVar4 <= (int)uVar3) {
      uVar3 = 0;
    }
  } while (uVar3 != uVar2);
  fVar1 = *(float *)((int)this + 0x18) + 0.1;
  *(float *)((int)this + 0x18) = fVar1;
  if (1.0 < fVar1) {
    *(undefined4 *)((int)this + 0x18) = 0x3d4ccccd;
  }
  return uVar5;
}


//// FUNCTION FUN_00c86040 @ 00c86040 ////

int __cdecl FUN_00c86040(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (((((iVar2 == iVar1) || (iVar2 == param_1[1])) || (iVar2 == param_1[2])) &&
      (((iVar2 = param_2[1], iVar2 == iVar1 || (iVar2 == param_1[1])) || (iVar2 == param_1[2])))) &&
     (((iVar2 = param_2[2], iVar2 == iVar1 || (iVar2 == param_1[1])) || (iVar2 == param_1[2])))) {
    iVar2 = -1;
  }
  return iVar2;
}


//// FUNCTION FUN_00c86090 @ 00c86090 ////

void __cdecl FUN_00c86090(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  *param_3 = -1;
  *param_4 = -1;
  iVar1 = *param_2;
  if (((iVar1 == *param_1) || (iVar1 == param_1[1])) || (iVar1 == param_1[2])) {
    if (*param_3 != -1) goto LAB_00c860fe;
    *param_3 = iVar1;
  }
  iVar1 = param_2[1];
  if (((iVar1 == *param_1) || (iVar1 == param_1[1])) || (iVar1 == param_1[2])) {
    if (*param_3 != -1) goto LAB_00c860fe;
    *param_3 = iVar1;
  }
  iVar1 = param_2[2];
  if (((iVar1 != *param_1) && (iVar1 != param_1[1])) && (iVar1 != param_1[2])) {
    return;
  }
  if (*param_3 == -1) {
    *param_3 = iVar1;
    return;
  }
LAB_00c860fe:
  *param_4 = iVar1;
  return;
}


//// FUNCTION FUN_00c86110 @ 00c86110 ////

int FUN_00c86110(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int *in_EAX;
  uint3 uVar6;
  int *piVar7;
  
  bVar3 = false;
  iVar1 = *(int *)(param_1 + 4);
  cVar5 = '\0';
  bVar4 = false;
  piVar7 = (int *)0x0;
  do {
    if ((iVar1 == 0) || (in_EAX = (int *)(*(int *)(param_1 + 8) - iVar1 >> 2), in_EAX <= piVar7)) {
      return CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
    if (!bVar4) {
      in_EAX = *(int **)(iVar1 + (int)piVar7 * 4);
      iVar2 = *param_2;
      if (((*in_EAX == iVar2) || (in_EAX[1] == iVar2)) || (in_EAX[2] == iVar2)) {
        bVar4 = true;
      }
    }
    in_EAX = (int *)CONCAT31((int3)((uint)in_EAX >> 8),cVar5);
    if (cVar5 == '\0') {
      in_EAX = *(int **)(iVar1 + (int)piVar7 * 4);
      iVar2 = param_2[1];
      if (((*in_EAX == iVar2) || (in_EAX[1] == iVar2)) || (in_EAX[2] == iVar2)) {
        cVar5 = '\x01';
      }
    }
    if (!bVar3) {
      in_EAX = *(int **)(iVar1 + (int)piVar7 * 4);
      iVar2 = param_2[2];
      if (((*in_EAX == iVar2) || (in_EAX[1] == iVar2)) || (in_EAX[2] == iVar2)) {
        bVar3 = true;
      }
    }
    if (bVar4) {
      uVar6 = (uint3)((uint)in_EAX >> 8);
      in_EAX = (int *)CONCAT31(uVar6,cVar5);
      if ((cVar5 != '\0') && (bVar3)) {
        return (uint)uVar6 << 8;
      }
    }
    piVar7 = (int *)((int)piVar7 + 1);
  } while( true );
}


//// FUNCTION FUN_00c861d0 @ 00c861d0 ////

void __thiscall FUN_00c861d0(void *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint *local_6c;
  int *local_68;
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  undefined1 local_4c [4];
  undefined2 *local_48;
  undefined2 *local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  int local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d05f90;
  pvStack_c = ExceptionList;
  iVar10 = 0;
  local_4c[0] = (undefined1)param_1;
  local_48 = (undefined2 *)0x0;
  local_44 = (undefined2 *)0x0;
  local_40 = 0;
  local_3c[0] = (undefined1)param_1;
  local_38 = 0;
  local_34 = (undefined4 *)0x0;
  local_30 = 0;
  local_18 = 0;
  local_1c[0] = (undefined1)param_1;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  local_68 = this;
  FUN_00c89260(local_3c,(undefined4 *)0x0,this);
  iVar4 = *(int *)this;
  if (*(int *)((int)this + 0x20) < 0) {
    *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)((int)this + 0x1c);
  }
  else {
    *(int *)(iVar4 + 0x14) = *(int *)((int)this + 0x20);
    *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)((int)this + 0x1c);
  }
  iVar4 = *(int *)((int)this + 4);
  if (*(char *)((int)this + 8) == '\0') {
    local_58 = *(uint **)(iVar4 + 0x10);
    puVar3 = *(uint **)(iVar4 + 0xc);
  }
  else {
    local_58 = *(uint **)(iVar4 + 0xc);
    puVar3 = *(uint **)(iVar4 + 0x10);
  }
  local_5c = puVar3;
  local_54 = local_58;
  FUN_00c89470(local_4c,local_44,(undefined2 *)&local_58);
  local_58 = puVar3;
  FUN_00c89470(local_4c,local_44,(undefined2 *)&local_58);
  piVar1 = *(int **)this;
  if (local_48 != (undefined2 *)0x0) {
    iVar10 = (int)local_44 - (int)local_48 >> 1;
  }
  puVar3 = (uint *)piVar1[2];
  uVar11 = (uint)(ushort)local_48[iVar10 + -2];
  uVar6 = (uint)(ushort)local_48[iVar10 + -1];
  puVar2 = (uint *)*piVar1;
  puVar12 = (uint *)piVar1[1];
  local_64 = puVar2;
  if ((puVar2 == (uint *)uVar11) || (puVar2 == (uint *)uVar6)) {
    if ((puVar12 == (uint *)uVar11) || (puVar12 == (uint *)uVar6)) {
      if ((puVar3 == (uint *)uVar11) || (puVar3 == (uint *)uVar6)) {
        if (((puVar2 != puVar12) && (puVar2 != puVar3)) && (local_64 = puVar12, puVar12 != puVar3))
        {
          local_64 = (uint *)0xffffffff;
        }
      }
      else {
        local_64 = puVar3;
        if (((puVar2 != (uint *)uVar11) && (puVar2 != (uint *)uVar6)) ||
           ((puVar12 != (uint *)uVar11 && (puVar12 != (uint *)uVar6)))) {
          FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Triangle_doesn_t_h_00f878c4);
          FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Duplicate_triangle_00f87888);
        }
      }
    }
    else if (((puVar2 != (uint *)uVar11) && (puVar2 != (uint *)uVar6)) ||
            ((local_64 = puVar12, puVar3 != (uint *)uVar11 && (puVar3 != (uint *)uVar6)))) {
      FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Triangle_doesn_t_h_00f878c4);
      FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Duplicate_triangle_00f87888);
      local_64 = puVar12;
    }
  }
  else if (((puVar12 != (uint *)uVar11) && (puVar12 != (uint *)uVar6)) ||
          ((puVar3 != (uint *)uVar11 && (puVar3 != (uint *)uVar6)))) {
    FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Triangle_doesn_t_h_00f878c4);
    FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Duplicate_triangle_00f87888);
  }
  puVar2 = local_64;
  local_58 = local_64;
  FUN_00c89470(local_4c,local_44,(undefined2 *)&local_58);
  puVar12 = local_5c;
  piVar1 = local_68;
  local_60 = local_5c;
  puVar3 = (uint *)FUN_00c85750(param_1,(int)local_5c,(int)puVar2,*local_68);
  while (((local_6c = puVar3, puVar3 != (uint *)0x0 && ((int)puVar3[3] < 0)) &&
         ((piVar1[8] < 0 || (puVar3[5] != piVar1[8]))))) {
    local_50 = puVar2;
    iVar4 = FUN_007bd540((int)local_4c);
    puVar12 = (uint *)puVar3[1];
    puVar7 = (uint *)(uint)(ushort)local_48[iVar4 + -2];
    puVar9 = (uint *)(uint)(ushort)local_48[iVar4 + -1];
    puVar8 = (uint *)*puVar3;
    puVar3 = (uint *)puVar3[2];
    if ((puVar8 == puVar7) || (puVar8 == puVar9)) {
      if ((puVar12 == puVar7) || (puVar12 == puVar9)) {
        if ((puVar3 == puVar7) || (puVar3 == puVar9)) {
          if ((puVar8 != puVar12) && ((puVar8 != puVar3 && (puVar8 = puVar12, puVar12 != puVar3))))
          {
            puVar8 = (uint *)0xffffffff;
          }
        }
        else if (((puVar8 != puVar7) && (puVar8 != puVar9)) ||
                ((puVar8 = puVar3, puVar12 != puVar7 && (puVar12 != puVar9)))) {
          FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Triangle_doesn_t_h_00f878c4);
          FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Duplicate_triangle_00f87888);
          puVar8 = puVar3;
        }
      }
      else if (((puVar8 != puVar7) && (puVar8 != puVar9)) ||
              ((puVar8 = puVar12, puVar3 != puVar7 && (puVar3 != puVar9)))) {
        FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Triangle_doesn_t_h_00f878c4);
        FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Duplicate_triangle_00f87888);
        puVar8 = puVar12;
      }
    }
    else if (((puVar12 != puVar7) && (puVar12 != puVar9)) ||
            ((puVar3 != puVar7 && (puVar3 != puVar9)))) {
      FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Triangle_doesn_t_h_00f878c4);
      FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Duplicate_triangle_00f87888);
    }
    puVar3 = local_6c;
    iVar4 = FUN_00c85750(param_1,(int)puVar2,(int)puVar8,(int)local_6c);
    puVar12 = local_60;
    piVar1 = local_68;
    if ((((iVar4 == 0) || (-1 < *(int *)(iVar4 + 0xc))) ||
        ((puVar7 = local_50, -1 < local_68[8] && (*(int *)(iVar4 + 0x14) == local_68[8])))) &&
       (((iVar4 = FUN_00c85750(param_1,(int)local_60,(int)puVar8,(int)puVar3), puVar7 = local_50,
         iVar4 != 0 && (*(int *)(iVar4 + 0xc) < 0)) &&
        ((piVar1[8] < 0 || (*(int *)(iVar4 + 0x14) != piVar1[8])))))) {
      local_58 = operator_new(0x18);
      if (local_58 == (uint *)0x0) {
        local_58 = (uint *)0x0;
      }
      else {
        local_58[1] = (uint)puVar2;
        *local_58 = (uint)puVar12;
        local_58[2] = (uint)puVar12;
        local_58[3] = 0xffffffff;
        local_58[4] = 0xffffffff;
        local_58[5] = 0xffffffff;
      }
      FUN_00c89260(local_3c,local_34,&local_58);
      if (piVar1[8] < 0) {
        local_58[5] = 0xffffffff;
        local_58[3] = piVar1[7];
      }
      else {
        local_58[5] = piVar1[8];
        local_58[4] = piVar1[7];
      }
      local_60 = puVar12;
      FUN_00c89470(local_4c,local_44,(undefined2 *)&local_60);
      piVar1[10] = piVar1[10] + 1;
      puVar7 = puVar12;
    }
    FUN_00c89260(local_3c,local_34,&local_6c);
    if (piVar1[8] < 0) {
      local_6c[5] = 0xffffffff;
      local_6c[3] = piVar1[7];
    }
    else {
      local_6c[5] = piVar1[8];
      local_6c[4] = piVar1[7];
    }
    local_50 = puVar8;
    FUN_00c89470(local_4c,local_44,(undefined2 *)&local_50);
    local_60 = puVar7;
    puVar3 = (uint *)FUN_00c85750(param_1,(int)puVar7,(int)puVar8,(int)local_6c);
    piVar1 = local_68;
    puVar2 = puVar8;
    puVar12 = local_5c;
  }
  local_2c[0] = (undefined1)param_1;
  local_28 = 0;
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4 = CONCAT31(local_4._1_3_,3);
  for (uVar11 = 0; (local_38 != 0 && (uVar11 < (uint)((int)local_34 - local_38 >> 2)));
      uVar11 = uVar11 + 1) {
    FUN_00c89260(local_2c,local_24,(undefined4 *)(local_38 + uVar11 * 4));
  }
  local_50 = (uint *)0x0;
  FUN_007bd540((int)local_4c);
  iVar4 = FUN_007bd540((int)local_4c);
  if (iVar4 != 0) {
    FUN_00c85680(local_4c,local_48,local_44);
  }
  local_50 = local_64;
  FUN_00c89470(local_4c,local_44,(undefined2 *)&local_50);
  local_50 = puVar12;
  FUN_00c89470(local_4c,local_44,(undefined2 *)&local_50);
  puVar3 = local_54;
  local_50 = local_54;
  FUN_00c89470(local_4c,local_44,(undefined2 *)&local_50);
  local_5c = puVar3;
  local_60 = puVar12;
  puVar3 = (uint *)FUN_00c85750(param_1,(int)puVar12,(int)puVar3,*piVar1);
  while ((((local_6c = puVar3, puVar3 != (uint *)0x0 && ((int)puVar3[3] < 0)) &&
          ((piVar1[8] < 0 || (puVar3[5] != piVar1[8])))) &&
         (uVar5 = FUN_00c86110((int)local_2c,(int *)puVar3), (char)uVar5 != '\0'))) {
    local_58 = local_5c;
    iVar4 = FUN_007bd540((int)local_4c);
    puVar2 = (uint *)puVar3[1];
    puVar8 = (uint *)(uint)(ushort)local_48[iVar4 + -2];
    puVar7 = (uint *)(uint)(ushort)local_48[iVar4 + -1];
    puVar12 = (uint *)*puVar3;
    puVar3 = (uint *)puVar3[2];
    if ((puVar12 == puVar8) || (puVar12 == puVar7)) {
      if ((puVar2 == puVar8) || (puVar2 == puVar7)) {
        if ((puVar3 == puVar8) || (puVar3 == puVar7)) {
          if ((puVar12 != puVar2) && ((puVar12 != puVar3 && (puVar12 = puVar2, puVar2 != puVar3))))
          {
            puVar12 = (uint *)0xffffffff;
          }
        }
        else if (((puVar12 != puVar8) && (puVar12 != puVar7)) ||
                ((puVar12 = puVar3, puVar2 != puVar8 && (puVar2 != puVar7)))) {
          FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Triangle_doesn_t_h_00f878c4);
          FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Duplicate_triangle_00f87888);
          puVar12 = puVar3;
        }
      }
      else if (((puVar12 != puVar8) && (puVar12 != puVar7)) ||
              ((puVar12 = puVar2, puVar3 != puVar8 && (puVar3 != puVar7)))) {
        FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Triangle_doesn_t_h_00f878c4);
        FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Duplicate_triangle_00f87888);
        puVar12 = puVar2;
      }
    }
    else if (((puVar2 != puVar8) && (puVar2 != puVar7)) ||
            ((puVar3 != puVar8 && (puVar3 != puVar7)))) {
      FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Triangle_doesn_t_h_00f878c4);
      FID_conflict__wprintf((wchar_t *)s_GetNextIndex__Duplicate_triangle_00f87888);
    }
    puVar3 = local_6c;
    iVar4 = FUN_00c85750(param_1,(int)local_5c,(int)puVar12,(int)local_6c);
    piVar1 = local_68;
    if ((((iVar4 == 0) || (-1 < *(int *)(iVar4 + 0xc))) ||
        ((-1 < local_68[8] && (*(int *)(iVar4 + 0x14) == local_68[8])))) &&
       (((iVar4 = FUN_00c85750(param_1,(int)local_60,(int)puVar12,(int)puVar3), iVar4 != 0 &&
         (*(int *)(iVar4 + 0xc) < 0)) && ((piVar1[8] < 0 || (*(int *)(iVar4 + 0x14) != piVar1[8]))))
       )) {
      local_54 = operator_new(0x18);
      puVar3 = local_60;
      if (local_54 == (uint *)0x0) {
        local_54 = (uint *)0x0;
      }
      else {
        *local_54 = (uint)local_60;
        local_54[1] = (uint)local_5c;
        local_54[2] = (uint)local_60;
        local_54[3] = 0xffffffff;
        local_54[4] = 0xffffffff;
        local_54[5] = 0xffffffff;
      }
      FUN_00c89260(local_1c,local_14,&local_54);
      FUN_00c86a40(piVar1,(int)local_54);
      local_50 = puVar3;
      FUN_00c89470(local_4c,local_44,(undefined2 *)&local_50);
      local_58 = puVar3;
      piVar1[10] = piVar1[10] + 1;
    }
    FUN_00c89260(local_1c,local_14,&local_6c);
    FUN_00c89260(local_2c,local_24,&local_6c);
    FUN_00c86a40(piVar1,(int)local_6c);
    local_50 = puVar12;
    FUN_00c89470(local_4c,local_44,(undefined2 *)&local_50);
    local_60 = local_58;
    local_5c = puVar12;
    puVar3 = (uint *)FUN_00c85750(param_1,(int)local_58,(int)puVar12,(int)local_6c);
    piVar1 = local_68;
  }
  FUN_00c86a70(piVar1,(int)local_3c,(int)local_1c);
  local_4._0_1_ = 2;
  FUN_00c85430((int)local_2c);
  local_4._0_1_ = 1;
  FUN_00c85430((int)local_1c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00c85430((int)local_3c);
  local_4 = 0xffffffff;
  FUN_00703d80((int)local_4c);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c86a40 @ 00c86a40 ////

void __thiscall FUN_00c86a40(void *this,int param_1)

{
  if (-1 < *(int *)((int)this + 0x20)) {
    *(int *)(param_1 + 0x14) = *(int *)((int)this + 0x20);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x1c);
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x1c);
  return;
}


//// FUNCTION FUN_00c86a70 @ 00c86a70 ////

/* WARNING: Removing unreachable block (ram,0x00c86c03) */
/* WARNING: Removing unreachable block (ram,0x00c86c18) */
/* WARNING: Removing unreachable block (ram,0x00c86c27) */
/* WARNING: Removing unreachable block (ram,0x00c86c30) */

void __thiscall FUN_00c86a70(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      FUN_00c89dd0((void *)((int)this + 0xc),*(undefined4 **)((int)this + 0x14),1,
                   (undefined4 *)(*(int *)(param_2 + 4) + iVar2 * 4));
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    param_2 = 0;
  }
  else {
    param_2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  if (0 < param_2) {
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4);
      puVar4 = *(undefined4 **)((int)this + 0x14);
      if (*(int *)((int)this + 0x18) - (int)puVar4 >> 2 == 0) {
        iVar2 = *(int *)((int)this + 0x10);
        if ((iVar2 == 0) || (uVar5 = (int)puVar4 - iVar2 >> 2, uVar5 < 2)) {
          uVar5 = 1;
        }
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)puVar4 - iVar2 >> 2;
        }
        iVar2 = iVar2 + uVar5;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        puVar3 = operator_new(iVar2 * 4);
        puVar3 = (undefined4 *)FUN_00c89440(*(undefined4 **)((int)this + 0x10),puVar4,puVar3);
        FUN_00c8ab00(puVar3,1,puVar1);
        FUN_00c89440(puVar4,*(undefined4 **)((int)this + 0x14),puVar3 + 1);
        FUN_00c89430();
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 0x10));
      }
      FUN_00c89440(puVar4,puVar4,puVar4 + 1);
      FUN_00c8ab00(*(undefined4 **)((int)this + 0x14),
                   1 - ((int)*(undefined4 **)((int)this + 0x14) - (int)puVar4 >> 2),puVar1);
      puVar3 = *(undefined4 **)((int)this + 0x14);
      for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
        *puVar4 = *puVar1;
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}


//// FUNCTION FUN_00c86c60 @ 00c86c60 ////

uint __thiscall FUN_00c86c60(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar1 = param_1[1];
  iVar5 = *param_1;
  uVar3 = FUN_00c85710(param_2,iVar5,iVar1);
  iVar2 = *(int *)(uVar3 + 4);
  if (iVar2 != 0) {
    if (*(int *)((int)this + 0x20) < 0) {
      bVar6 = *(int *)(iVar2 + 0xc) == *(int *)((int)this + 0x1c);
    }
    else {
      bVar6 = *(int *)(iVar2 + 0x10) == *(int *)((int)this + 0x1c);
    }
    if (bVar6) goto LAB_00c86d9e;
  }
  iVar2 = *(int *)(uVar3 + 8);
  if (iVar2 != 0) {
    if (*(int *)((int)this + 0x20) < 0) {
      iVar4 = *(int *)((int)this + 0x1c);
      bVar6 = *(int *)(iVar2 + 0xc) == iVar4;
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x10);
      bVar6 = iVar4 == *(int *)((int)this + 0x1c);
    }
    uVar3 = CONCAT31((int3)((uint)iVar4 >> 8),bVar6);
    if (bVar6 != false) goto LAB_00c86d9e;
  }
  iVar2 = param_1[2];
  uVar3 = FUN_00c85710(param_2,iVar1,iVar2);
  iVar1 = *(int *)(uVar3 + 4);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x20) < 0) {
      bVar6 = *(int *)(iVar1 + 0xc) == *(int *)((int)this + 0x1c);
    }
    else {
      bVar6 = *(int *)(iVar1 + 0x10) == *(int *)((int)this + 0x1c);
    }
    if (bVar6) goto LAB_00c86d9e;
  }
  iVar1 = *(int *)(uVar3 + 8);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x20) < 0) {
      iVar4 = *(int *)(iVar1 + 0xc);
      bVar6 = iVar4 == *(int *)((int)this + 0x1c);
    }
    else {
      iVar4 = *(int *)((int)this + 0x1c);
      bVar6 = *(int *)(iVar1 + 0x10) == iVar4;
    }
    uVar3 = CONCAT31((int3)((uint)iVar4 >> 8),bVar6);
    if (bVar6 != false) goto LAB_00c86d9e;
  }
  uVar3 = FUN_00c85710(param_2,iVar2,iVar5);
  iVar1 = *(int *)(uVar3 + 4);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x20) < 0) {
      bVar6 = *(int *)(iVar1 + 0xc) == *(int *)((int)this + 0x1c);
    }
    else {
      bVar6 = *(int *)(iVar1 + 0x10) == *(int *)((int)this + 0x1c);
    }
    if (bVar6) goto LAB_00c86d9e;
  }
  iVar1 = *(int *)(uVar3 + 8);
  uVar3 = 0;
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x20) < 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
      bVar6 = iVar5 == *(int *)((int)this + 0x1c);
    }
    else {
      iVar5 = *(int *)((int)this + 0x1c);
      bVar6 = *(int *)(iVar1 + 0x10) == iVar5;
    }
    uVar3 = CONCAT31((int3)((uint)iVar5 >> 8),bVar6);
    if (bVar6 != false) {
LAB_00c86d9e:
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00c86db0 @ 00c86db0 ////

void FUN_00c86db0(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  if (0 < local_8) {
    do {
      local_4 = *(int *)(*(int *)(param_2 + 4) + iVar4 * 4);
      *(undefined4 *)(local_4 + 0x20) = 0xffffffff;
      FUN_00c8a010(param_1,*(undefined4 **)((int)param_1 + 8),1,&local_4);
      iVar1 = *(int *)(*(int *)(param_2 + 4) + iVar4 * 4);
      if (*(int *)(iVar1 + 0x10) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) >> 2;
      }
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + iVar5 * 4);
          if (*(int *)(local_4 + 0x20) < 0) {
            *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
            *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(local_4 + 0x1c);
          }
          else {
            *(int *)(iVar2 + 0x14) = *(int *)(local_4 + 0x20);
            *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(local_4 + 0x1c);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_8);
  }
  return;
}


//// FUNCTION FUN_00c86e80 @ 00c86e80 ////

bool FUN_00c86e80(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *this;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  this = param_3;
  if ((char)param_3[2] == '\0') {
    iVar7 = *(int *)(param_3[1] + 0xc);
  }
  else {
    iVar7 = *(int *)(param_3[1] + 0x10);
  }
  param_3 = (int *)0x0;
  iVar1 = *(int *)(*(int *)(param_2 + 4) + iVar7 * 4);
  do {
    piVar3 = param_3;
    if (iVar1 == 0) {
LAB_00c86f3e:
      param_3 = piVar3;
      *param_4 = param_3;
      param_4[1] = iVar1;
      if (iVar1 != 0) {
        uVar6 = FUN_00c86c60(this,param_3,param_2);
        if ((char)uVar6 != '\0') {
          *(bool *)(param_4 + 2) = *(int *)(iVar1 + 0xc) == iVar7;
          return param_3 != (int *)0x0;
        }
        *(bool *)(param_4 + 2) = *(int *)(iVar1 + 0x10) == iVar7;
      }
      return param_3 != (int *)0x0;
    }
    piVar2 = *(int **)(iVar1 + 4);
    piVar3 = *(int **)(iVar1 + 8);
    if (piVar2 == (int *)0x0) {
LAB_00c86eee:
      if (piVar3 != (int *)0x0) {
        iVar4 = this[8];
        if (iVar4 < 0) {
          iVar5 = piVar3[3];
        }
        else {
          iVar5 = piVar3[4];
        }
        if ((((iVar5 != this[7]) && (piVar2 != (int *)0x0)) && (piVar2[3] < 0)) &&
           ((piVar3 = piVar2, iVar4 < 0 || (piVar2[5] != iVar4)))) goto LAB_00c86f3e;
      }
    }
    else {
      iVar4 = this[8];
      if (iVar4 < 0) {
        iVar5 = piVar2[3];
      }
      else {
        iVar5 = piVar2[4];
      }
      if (iVar5 == this[7]) goto LAB_00c86eee;
      if (piVar3 != (int *)0x0) {
        if ((-1 < piVar3[3]) || ((-1 < iVar4 && (piVar3[5] == iVar4)))) goto LAB_00c86eee;
        goto LAB_00c86f3e;
      }
    }
    if (*(int *)(iVar1 + 0xc) == iVar7) {
      iVar1 = *(int *)(iVar1 + 0x14);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x18);
    }
  } while( true );
}


//// FUNCTION FUN_00c86fa0 @ 00c86fa0 ////

void __thiscall FUN_00c86fa0(void *this,int param_1,void *param_2,void *param_3)

{
  uint uVar1;
  undefined4 *_Memory;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 local_1c [4];
  int local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05fb3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00c89400(param_3,*(undefined4 **)((int)param_3 + 4),*(undefined4 **)((int)param_3 + 8));
  FUN_00c89a50(param_2,*(undefined4 **)((int)param_2 + 4),*(undefined4 **)((int)param_2 + 8));
  local_1c[0] = param_3._0_1_;
  local_18 = 0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4 = 0;
  for (uVar7 = 0;
      (iVar4 = *(int *)(param_1 + 4), iVar4 != 0 &&
      (uVar7 < (uint)(*(int *)(param_1 + 8) - iVar4 >> 2))); uVar7 = uVar7 + 1) {
    iVar9 = *(int *)(iVar4 + uVar7 * 4);
    iVar5 = *(int *)(iVar9 + 0x10);
    if (iVar5 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(iVar9 + 0x14) - iVar5 >> 2;
    }
    if (uVar1 < *(uint *)((int)this + 0x14)) {
      uVar1 = 0;
      while( true ) {
        iVar4 = *(int *)(*(int *)(param_1 + 4) + uVar7 * 4);
        iVar9 = *(int *)(iVar4 + 0x10);
        if ((iVar9 == 0) || ((uint)(*(int *)(iVar4 + 0x14) - iVar9 >> 2) <= uVar1)) break;
        FUN_00c89260(local_1c,local_14,(undefined4 *)(iVar9 + uVar1 * 4));
        uVar1 = uVar1 + 1;
      }
      pvVar3 = *(void **)(*(int *)(param_1 + 4) + uVar7 * 4);
      if (pvVar3 != (void *)0x0) {
        FUN_00c85430((int)pvVar3 + 0xc);
                    /* WARNING: Subroutine does not return */
        _free(pvVar3);
      }
    }
    else {
      FUN_00c8a010(param_2,*(undefined4 **)((int)param_2 + 8),1,(undefined4 *)(iVar4 + uVar7 * 4));
    }
  }
  uVar7 = 0;
  if (local_18 != 0) {
    uVar7 = (int)local_14 - local_18 >> 2;
  }
  _Memory = operator_new(uVar7);
  if (local_18 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (int)local_14 - local_18 >> 2;
  }
  puVar8 = _Memory;
  for (uVar1 = uVar7 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  piVar2 = operator_new(8);
  local_4._0_1_ = 1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x10);
    piVar2[1] = iVar4;
    pvVar3 = operator_new(iVar4 * 4);
    *piVar2 = (int)pvVar3;
    iVar4 = 0;
    if (0 < piVar2[1]) {
      do {
        iVar4 = iVar4 + 1;
        *(undefined4 *)(*piVar2 + -4 + iVar4 * 4) = 0xffffffff;
      } while (iVar4 < piVar2[1]);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  pvVar3 = param_3;
  while( true ) {
    iVar9 = -1;
    iVar4 = local_18;
    for (pvVar6 = (void *)0x0; (iVar4 != 0 && (pvVar6 < (void *)((int)local_14 - iVar4 >> 2)));
        pvVar6 = (void *)((int)pvVar6 + 1)) {
      if ((*(char *)((int)pvVar6 + (int)_Memory) == '\0') &&
         (iVar5 = FUN_00c886e0(piVar2,*(int **)(iVar4 + (int)pvVar6 * 4)), iVar4 = local_18,
         iVar9 < iVar5)) {
        pvVar3 = pvVar6;
        iVar9 = iVar5;
      }
    }
    if ((float)iVar9 == -1.0) break;
    *(undefined1 *)((int)_Memory + (int)pvVar3) = 1;
    FUN_00c88560(piVar2,*(int **)(local_18 + (int)pvVar3 * 4));
    FUN_00c89dd0(param_3,*(undefined4 **)((int)param_3 + 8),1,
                 (undefined4 *)(local_18 + (int)pvVar3 * 4));
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*piVar2);
}


//// FUNCTION FUN_00c87230 @ 00c87230 ////

bool FUN_00c87230(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  return (bool)('\x01' - (uVar1 != 0));
}


//// FUNCTION FUN_00c87250 @ 00c87250 ////

bool FUN_00c87250(int *param_1,int param_2,int param_3)

{
  if (*param_1 == param_2) {
    return param_1[1] == param_3;
  }
  if (param_1[1] == param_2) {
    return param_1[2] == param_3;
  }
  return *param_1 == param_3;
}


//// FUNCTION FUN_00c87320 @ 00c87320 ////

/* WARNING: Removing unreachable block (ram,0x00c8775f) */
/* WARNING: Removing unreachable block (ram,0x00c87776) */
/* WARNING: Removing unreachable block (ram,0x00c87785) */
/* WARNING: Removing unreachable block (ram,0x00c8778e) */

void FUN_00c87320(int param_1,void *param_2,char param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  void *this;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  void **ppvVar10;
  void *pvVar11;
  void *pvVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  undefined4 *local_3c;
  void *local_38;
  int local_34;
  void *local_30 [6];
  int local_18 [6];
  
  this = param_2;
  local_18[0] = 0;
  local_18[2] = 0;
  local_18[3] = 0xffffffff;
  local_18[4] = 0xffffffff;
  local_18[5] = 0xffffffff;
  if (*(int *)(param_1 + 4) == 0) {
    local_4c = 0;
  }
  else {
    local_4c = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  local_48 = 0;
  local_50 = 0;
  if (0 < local_4c) {
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 4) + local_50 * 4);
      if (*(int *)(iVar6 + 0x10) == 0) {
        local_54 = 0;
      }
      else {
        local_54 = *(int *)(iVar6 + 0x14) - *(int *)(iVar6 + 0x10) >> 2;
      }
      piVar9 = *(int **)(iVar6 + 0x10);
      piVar1 = (int *)*piVar9;
      local_3c = (undefined4 *)piVar1[2];
      pvVar12 = (void *)piVar1[1];
      local_30[0] = (void *)*piVar1;
      local_30[3] = (void *)0xffffffff;
      local_30[4] = (void *)0xffffffff;
      local_30[5] = (void *)0xffffffff;
      param_2 = pvVar12;
      local_30[1] = pvVar12;
      local_30[2] = local_3c;
      local_18[1] = local_18[2];
      if (1 < local_54) {
        pvVar4 = (void *)FUN_00c86040((int *)piVar9[1],(int *)local_30);
        if (pvVar4 == pvVar12) {
          local_30[1] = local_30[0];
          pvVar11 = local_30[0];
          local_30[0] = pvVar12;
        }
        else {
          pvVar11 = pvVar12;
          if (pvVar4 == local_3c) {
            local_30[2] = local_30[0];
            local_30[0] = local_3c;
          }
        }
        pvVar12 = pvVar11;
        if (2 < local_54) {
          bVar3 = FUN_00c87ac0((int *)piVar9[1]);
          piVar9 = *(int **)(iVar6 + 0x10);
          if (bVar3) {
            bVar3 = local_30[1] == *(void **)(piVar9[1] + 4);
          }
          else {
            FUN_00c86090((int *)piVar9[2],(int *)local_30,(int *)&local_38,&local_34);
            pvVar12 = local_30[1];
            if (local_38 != local_30[1]) goto LAB_00c8747c;
            bVar3 = local_34 == -1;
          }
          pvVar4 = local_30[2];
          pvVar12 = local_30[1];
          if (bVar3) {
            local_30[1] = local_30[2];
            local_30[2] = pvVar12;
            pvVar12 = pvVar4;
          }
        }
      }
LAB_00c8747c:
      if ((local_50 == 0) || (param_3 == '\0')) {
        bVar3 = FUN_00c87250((int *)*piVar9,(int)local_30[0],(int)pvVar12);
        if (!bVar3) {
          puVar14 = *(undefined4 **)((int)this + 8);
          goto LAB_00c87514;
        }
      }
      else {
        FUN_00c8a220(this,*(undefined4 **)((int)this + 8),1,local_30);
        if (*(int *)((int)this + 4) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
        }
        bVar3 = FUN_00c87230(iVar5 - local_48);
        param_2 = (void *)CONCAT31(param_2._1_3_,bVar3);
        bVar3 = FUN_00c87250((int *)**(undefined4 **)(iVar6 + 0x10),(int)local_30[0],
                             (int)local_30[1]);
        if ((bool)(char)param_2 != bVar3) {
          puVar14 = *(undefined4 **)((int)this + 8);
LAB_00c87514:
          FUN_00c8a220(this,puVar14,1,local_30);
        }
      }
      FUN_00c8a220(this,*(undefined4 **)((int)this + 8),1,local_30);
      FUN_00c8a220(this,*(undefined4 **)((int)this + 8),1,local_30 + 1);
      FUN_00c8a220(this,*(undefined4 **)((int)this + 8),1,local_30 + 2);
      ppvVar10 = local_30;
      piVar9 = local_18;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar9 = (int)*ppvVar10;
        ppvVar10 = ppvVar10 + 1;
        piVar9 = piVar9 + 1;
      }
      iVar5 = 1;
      if (1 < local_54) {
        do {
          iVar2 = *(int *)(iVar6 + 0x10);
          local_40 = FUN_00c86040(local_18,*(int **)(iVar2 + iVar5 * 4));
          if (local_40 == -1) {
            FUN_00c8a220(this,*(undefined4 **)((int)this + 8),1,
                         (undefined4 *)(*(int *)(iVar2 + iVar5 * 4) + 8));
            local_18[0] = **(int **)(*(int *)(iVar6 + 0x10) + iVar5 * 4);
            local_18[1] = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + iVar5 * 4) + 4);
            local_18[2] = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + iVar5 * 4) + 8);
          }
          else {
            FUN_00c8a220(this,*(undefined4 **)((int)this + 8),1,&local_40);
            local_18[0] = local_18[1];
            local_18[1] = local_18[2];
            local_18[2] = local_40;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_54);
      }
      if (param_3 == '\0') {
        puVar14 = *(undefined4 **)((int)this + 8);
        param_2 = (void *)0xffffffff;
        if (*(int *)((int)this + 0xc) - (int)puVar14 >> 2 == 0) {
          iVar6 = *(int *)((int)this + 4);
          if ((iVar6 == 0) || (uVar8 = (int)puVar14 - iVar6 >> 2, uVar8 < 2)) {
            uVar8 = 1;
          }
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)puVar14 - iVar6 >> 2;
          }
          iVar6 = iVar6 + uVar8;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          puVar7 = operator_new(iVar6 * 4);
          local_3c = puVar7;
          for (puVar13 = *(undefined4 **)((int)this + 4); puVar13 != puVar14; puVar13 = puVar13 + 1)
          {
            FUN_00c8ae30(puVar7,puVar13);
            puVar7 = puVar7 + 1;
          }
          FUN_00c8abc0(puVar7,1,&param_2);
          FUN_00c8ab90(puVar14,*(undefined4 **)((int)this + 8),puVar7 + 1);
          FUN_0040d5d0();
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        FUN_00c8ab90(puVar14,puVar14,puVar14 + 1);
        FUN_00c8abc0(*(undefined4 **)((int)this + 8),
                     1 - ((int)*(undefined4 **)((int)this + 8) - (int)puVar14 >> 2),&param_2);
        puVar13 = *(undefined4 **)((int)this + 8);
        for (; puVar14 != puVar13; puVar14 = puVar14 + 1) {
          *puVar14 = param_2;
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
        local_48 = local_48 + 1;
        *param_4 = *param_4 + 1;
      }
      else if (local_50 != local_4c + -1) {
        FUN_00c8a220(this,*(undefined4 **)((int)this + 8),1,local_18 + 2);
      }
      local_18[0] = local_18[1];
      local_50 = local_50 + 1;
    } while (local_50 < local_4c);
  }
  if (param_3 != '\0') {
    *param_4 = 1;
  }
  return;
}


//// FUNCTION FUN_00c87800 @ 00c87800 ////

void __thiscall
FUN_00c87800(void *this,void *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            void *param_5,void *param_6)

{
  undefined2 *puVar1;
  void *_Memory;
  int *_Memory_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  void *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d05fd8;
  pvStack_c = ExceptionList;
  iVar2 = param_2 + -6;
  uVar5 = 0;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 1;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  *(int *)((int)this + 0x10) = iVar2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  if (this != param_1) {
    if (*(int *)((int)param_1 + 4) != 0) {
      uVar5 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 1;
    }
    uVar3 = FUN_007bd540((int)this);
    if (uVar3 < uVar5) {
      uVar5 = FUN_007bd540((int)param_1);
      uVar3 = FUN_007bd5c0((int)this);
      if (uVar3 < uVar5) {
        FUN_00703d30();
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      iVar2 = *(int *)((int)param_1 + 4);
      iVar4 = FUN_007bd540((int)this);
      puVar1 = (undefined2 *)(iVar2 + iVar4 * 2);
      FUN_00c8ad70(*(undefined2 **)((int)param_1 + 4),puVar1,*(undefined2 **)((int)this + 4));
      FUN_00c89610(puVar1,*(undefined2 **)((int)param_1 + 8),*(undefined2 **)((int)this + 8));
      iVar2 = FUN_007bd540((int)param_1);
      *(int *)((int)this + 8) = *(int *)((int)this + 4) + iVar2 * 2;
    }
    else {
      FUN_00c8ad70(*(undefined2 **)((int)param_1 + 4),*(undefined2 **)((int)param_1 + 8),
                   *(undefined2 **)((int)this + 4));
      FUN_00703d30();
      iVar2 = FUN_007bd540((int)param_1);
      *(int *)((int)this + 8) = *(int *)((int)this + 4) + iVar2 * 2;
    }
  }
  local_18 = 0;
  local_1c._0_1_ = (undefined1)param_2;
  local_14 = 0;
  local_10 = 0;
  local_3c[0] = (undefined1)param_2;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00c857f0(this,&local_1c,local_3c,param_4);
  local_28 = (void *)0x0;
  local_2c[0] = (undefined1)param_2;
  local_24 = 0;
  local_20 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00c88830(local_2c,(int)&local_1c,(int)local_3c,10);
  FUN_00c87b10(this,(int)local_2c,param_5,(int)local_3c,param_6);
  for (uVar5 = 0; (local_28 != (void *)0x0 && (uVar5 < (uint)(local_24 - (int)local_28 >> 2)));
      uVar5 = uVar5 + 1) {
    _Memory = *(void **)((int)local_28 + uVar5 * 4);
    if (_Memory != (void *)0x0) {
      FUN_00c85430((int)_Memory + 0xc);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  uVar5 = 0;
  do {
    if ((local_38 == 0) || ((uint)(local_34 - local_38 >> 2) <= uVar5)) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    piVar6 = *(int **)(local_38 + uVar5 * 4);
    while (_Memory_00 = piVar6, _Memory_00 != (int *)0x0) {
      if (_Memory_00[3] == uVar5) {
        piVar6 = (int *)_Memory_00[5];
      }
      else {
        piVar6 = (int *)_Memory_00[6];
      }
      iVar2 = *_Memory_00;
      *_Memory_00 = iVar2 + -1;
      if (iVar2 + -1 == 0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory_00);
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


//// FUNCTION FUN_00c87ac0 @ 00c87ac0 ////

bool __cdecl FUN_00c87ac0(int *param_1)

{
  if (*param_1 == param_1[1]) {
    return true;
  }
  if (*param_1 == param_1[2]) {
    return true;
  }
  return param_1[1] == param_1[2];
}


//// FUNCTION FUN_00c87ae0 @ 00c87ae0 ////

bool FUN_00c87ae0(short param_1,short param_2,short param_3)

{
  if (param_1 == param_2) {
    return true;
  }
  if (param_1 == param_3) {
    return true;
  }
  return param_2 == param_3;
}


//// FUNCTION FUN_00c87b10 @ 00c87b10 ////

void __thiscall FUN_00c87b10(void *this,int param_1,void *param_2,int param_3,void *param_4)

{
  int iVar1;
  uint *puVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  void *pvVar13;
  undefined3 extraout_var;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  float10 fVar21;
  bool local_82;
  undefined1 local_81;
  undefined4 *local_80;
  int local_7c;
  int local_78;
  int local_74;
  float local_70;
  void *local_6c;
  uint local_68;
  int *local_64;
  int local_60;
  int local_5c;
  int *local_58;
  undefined4 uStack_54;
  uint local_50;
  uint local_4c;
  int *local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  void *local_28;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d06016;
  pvStack_c = ExceptionList;
  piVar12 = *(int **)((int)this + 0x10);
  local_18 = 0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4 = 0;
  local_7c = 0;
  ExceptionList = &pvStack_c;
  local_6c = this;
  local_64 = piVar12;
  for (local_4c = 0;
      (iVar19 = *(int *)(param_1 + 4), iVar19 != 0 &&
      (local_4c < (uint)(*(int *)(param_1 + 8) - iVar19 >> 2))); local_4c = local_4c + 1) {
    local_3c = local_3c & 0xffffff00;
    local_68 = 0;
    uVar18 = 0;
    while( true ) {
      iVar16 = *(int *)(*(int *)(iVar19 + local_7c) + 0x10);
      if ((iVar16 == 0) ||
         ((uint)(*(int *)(*(int *)(iVar19 + local_7c) + 0x14) - iVar16 >> 2) <= uVar18)) break;
      bVar6 = FUN_00c87ac0(*(int **)(*(int *)(*(int *)(iVar19 + local_7c) + 0x10) + uVar18 * 4));
      if (!bVar6) {
        local_68 = local_68 + 1;
      }
      uVar18 = uVar18 + 1;
      piVar12 = local_64;
    }
    if ((int)piVar12 < (int)local_68) {
      local_50 = (int)local_68 / (int)piVar12;
      local_70 = (float)((int)local_68 % (int)piVar12);
      local_74 = 0;
      local_68 = 0;
      if (0 < (int)local_50) {
        local_5c = 0;
        local_58 = piVar12;
        do {
          puVar10 = operator_new(0x2c);
          local_4._0_1_ = 1;
          local_48 = puVar10;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = local_3c;
            FUN_00c891e0(puVar10 + 3,&local_81);
            puVar10[7] = 0;
            puVar10[8] = 0xffffffff;
            *(undefined1 *)(puVar10 + 9) = 0;
            puVar10[10] = 0;
          }
          iVar19 = local_5c + local_74;
          local_4 = (uint)local_4._1_3_ << 8;
          bVar6 = true;
          local_80 = puVar10;
          if (iVar19 < local_74 + (int)local_58) {
            local_78 = iVar19 + 1;
            iVar16 = iVar19 * 4;
            local_60 = local_74 + (int)local_58;
            do {
              local_48 = *(int **)(*(int *)(*(int *)(param_1 + 4) + local_7c) + 0x10);
              bVar7 = FUN_00c87ac0(*(int **)(iVar16 + (int)local_48));
              if (bVar7) {
                local_74 = local_74 + 1;
                local_60 = local_60 + 1;
                if (((local_78 == local_60) &&
                    (((local_68 != local_50 - 1 || (3 < (int)local_70)) || ((int)local_70 < 1)))) ||
                   (bVar6)) {
                  local_78 = local_78 + 1;
                }
                else {
                  local_78 = local_78 + 1;
                  FUN_00c89260(puVar10 + 3,(undefined4 *)puVar10[5],
                               (undefined4 *)(iVar16 + (int)local_48));
                  puVar10 = local_80;
                }
              }
              else {
                local_78 = local_78 + 1;
                FUN_00c89260(puVar10 + 3,(undefined4 *)puVar10[5],
                             (undefined4 *)(iVar16 + (int)local_48));
                bVar6 = false;
                puVar10 = local_80;
              }
              iVar19 = iVar19 + 1;
              iVar16 = iVar16 + 4;
              piVar12 = local_64;
            } while (iVar19 < local_60);
          }
          if (((local_68 == local_50 - 1) && ((int)local_70 < 4)) && (0 < (int)local_70)) {
            local_60 = 0;
            iVar19 = iVar19 * 4;
            do {
              iVar16 = *(int *)(*(int *)(*(int *)(param_1 + 4) + local_7c) + 0x10);
              bVar6 = FUN_00c87ac0(*(int **)(iVar19 + iVar16));
              if (bVar6) {
                FUN_00c89260(puVar10 + 3,(undefined4 *)puVar10[5],(undefined4 *)(iVar19 + iVar16));
                local_74 = local_74 + 1;
              }
              else {
                FUN_00c89260(puVar10 + 3,(undefined4 *)puVar10[5],(undefined4 *)(iVar19 + iVar16));
                local_60 = local_60 + 1;
              }
              iVar19 = iVar19 + 4;
              puVar10 = local_80;
            } while (local_60 < (int)local_70);
            local_70 = 0.0;
            piVar12 = local_64;
          }
          FUN_00c89890(local_1c,local_14,&local_80);
          local_68 = local_68 + 1;
          local_5c = local_5c + (int)piVar12;
          local_58 = (int *)((int)local_58 + (int)piVar12);
        } while ((int)local_68 < (int)local_50);
      }
      fVar3 = local_70;
      iVar19 = 0;
      iVar16 = local_68 * (int)piVar12 + local_74;
      if (local_70 != 0.0) {
        local_80 = operator_new(0x2c);
        if (local_80 == (undefined4 *)0x0) {
          local_80 = (undefined4 *)0x0;
        }
        else {
          *local_80 = 0;
          local_80[1] = 0;
          local_80[2] = local_3c;
          *(undefined1 *)(local_80 + 3) = local_81;
          local_80[4] = 0;
          local_80[5] = 0;
          local_80[6] = 0;
          local_80[7] = 0;
          local_80[8] = 0xffffffff;
          *(undefined1 *)(local_80 + 9) = 0;
          local_80[10] = 0;
        }
        bVar6 = true;
        if (0 < (int)fVar3) {
          iVar16 = iVar16 * 4;
          do {
            iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + local_7c) + 0x10);
            bVar7 = FUN_00c87ac0(*(int **)(iVar1 + iVar16));
            if (bVar7) {
              if (!bVar6) {
                FUN_00c89dd0(local_80 + 3,(undefined4 *)local_80[5],1,(undefined4 *)(iVar1 + iVar16)
                            );
              }
            }
            else {
              iVar19 = iVar19 + 1;
              FUN_00c89dd0(local_80 + 3,(undefined4 *)local_80[5],1,(undefined4 *)(iVar1 + iVar16));
              bVar6 = false;
            }
            iVar16 = iVar16 + 4;
            piVar12 = local_64;
          } while (iVar19 < (int)local_70);
        }
        goto LAB_00c87f28;
      }
    }
    else {
      local_80 = operator_new(0x2c);
      iVar19 = local_7c;
      if (local_80 == (undefined4 *)0x0) {
        local_80 = (undefined4 *)0x0;
      }
      else {
        *local_80 = 0;
        local_80[1] = 0;
        local_80[2] = local_3c;
        *(undefined1 *)(local_80 + 3) = local_81;
        local_80[4] = 0;
        local_80[5] = 0;
        local_80[6] = 0;
        local_80[7] = 0;
        local_80[8] = 0xffffffff;
        *(undefined1 *)(local_80 + 9) = 0;
        local_80[10] = 0;
      }
      uVar18 = 0;
      while( true ) {
        iVar16 = *(int *)(iVar19 + *(int *)(param_1 + 4));
        if ((*(int *)(iVar16 + 0x10) == 0) ||
           ((uint)(*(int *)(iVar16 + 0x14) - *(int *)(iVar16 + 0x10) >> 2) <= uVar18)) break;
        FUN_00c89dd0(local_80 + 3,(undefined4 *)local_80[5],1,
                     (undefined4 *)(*(int *)(iVar16 + 0x10) + uVar18 * 4));
        uVar18 = uVar18 + 1;
      }
LAB_00c87f28:
      FUN_00c8a010(local_1c,local_14,1,&local_80);
    }
    local_7c = local_7c + 4;
  }
  local_28 = (void *)0x0;
  local_2c[0] = local_81;
  local_24 = 0;
  local_20 = 0;
  local_4._0_1_ = 2;
  FUN_00c86fa0(local_6c,(int)local_1c,local_2c,param_4);
  uVar11 = FUN_00c8ada0(*(undefined4 **)((int)param_2 + 8),*(undefined4 **)((int)param_2 + 8),
                        *(undefined4 **)((int)param_2 + 4));
  FUN_00c89a80();
  *(undefined4 *)((int)param_2 + 8) = uVar11;
  if ((local_28 != (void *)0x0) &&
     (local_48 = (int *)(local_24 - (int)local_28 >> 2), local_48 != (undefined4 *)0x0)) {
    piVar12 = operator_new(8);
    local_4._0_1_ = 3;
    if (piVar12 == (int *)0x0) {
      piVar12 = (int *)0x0;
    }
    else {
      iVar19 = *(int *)((int)local_6c + 0x10);
      piVar12[1] = iVar19;
      local_48 = piVar12;
      pvVar13 = operator_new(iVar19 << 2);
      *piVar12 = (int)pvVar13;
      iVar19 = 0;
      if (0 < piVar12[1]) {
        do {
          iVar19 = iVar19 + 1;
          *(undefined4 *)(*piVar12 + -4 + iVar19 * 4) = 0xffffffff;
        } while (iVar19 < piVar12[1]);
      }
    }
    local_4._0_1_ = 2;
    local_50 = 0;
    local_48 = (undefined4 *)0x461c4000;
    uVar18 = 0;
    pvVar13 = local_28;
    local_64 = piVar12;
    while ((uVar17 = uVar18, uVar18 = local_50, piVar12 = local_64, pvVar13 != (void *)0x0 &&
           (uVar17 < (uint)(local_24 - (int)pvVar13 >> 2)))) {
      uVar15 = 0;
      uVar18 = 0;
      local_4c = 0;
      while( true ) {
        iVar19 = *(int *)((int)pvVar13 + uVar17 * 4);
        iVar16 = *(int *)(iVar19 + 0x10);
        if ((iVar16 == 0) || ((uint)(*(int *)(iVar19 + 0x14) - iVar16 >> 2) <= uVar18)) break;
        cVar8 = FUN_00c88750(*(int **)(iVar16 + uVar18 * 4),param_3);
        uVar15 = uVar15 + CONCAT31(extraout_var,cVar8);
        uVar18 = uVar18 + 1;
        pvVar13 = local_28;
      }
      iVar19 = *(int *)((int)pvVar13 + uVar17 * 4);
      iVar16 = *(int *)(iVar19 + 0x10);
      if (iVar16 == 0) {
        local_58 = (int *)0x0;
      }
      else {
        local_58 = (int *)(*(int *)(iVar19 + 0x14) - iVar16 >> 2);
      }
      uStack_54 = 0;
      local_4c = uVar15;
      if ((float)local_48 <= (float)(int)uVar15 / (float)(int)local_58) {
        uVar18 = uVar17 + 1;
      }
      else {
        uVar18 = uVar17 + 1;
        local_50 = uVar17;
        local_48 = (undefined4 *)((float)(int)uVar15 / (float)(int)local_58);
      }
    }
    FUN_00c88440(local_64,*(int *)((int)pvVar13 + local_50 * 4));
    FUN_00c8a010(param_2,*(undefined4 **)((int)param_2 + 8),1,
                 (undefined4 *)((int)local_28 + uVar18 * 4));
    *(undefined1 *)(*(int *)((int)local_28 + uVar18 * 4) + 0x24) = 1;
    iVar19 = *(int *)((int)local_28 + uVar18 * 4);
    iVar16 = *(int *)(iVar19 + 0x10);
    if (iVar16 == 0) {
      bVar9 = 0;
    }
    else {
      bVar9 = (byte)(*(int *)(iVar19 + 0x14) - iVar16 >> 2);
    }
    local_82 = (bool)(~bVar9 & 1);
LAB_00c881f8:
    local_70 = -1.0;
    uVar18 = 0;
    while ((uVar17 = uVar18, uVar18 = local_4c, local_68 = uVar17, local_28 != (void *)0x0 &&
           (uVar17 < (uint)(local_24 - (int)local_28 >> 2)))) {
      iVar19 = *(int *)((int)local_28 + uVar17 * 4);
      if (*(char *)(iVar19 + 0x24) == '\0') {
        fVar21 = FUN_00c88610(piVar12,iVar19);
        if (fVar21 <= (float10)local_70) {
          if ((float10)local_70 <= fVar21) {
            iVar19 = *(int *)((int)local_28 + uVar17 * 4);
            if (*(int *)(iVar19 + 0x10) == 0) {
              iVar16 = 0;
            }
            else {
              iVar16 = *(int *)(iVar19 + 0x14) - *(int *)(iVar19 + 0x10) >> 2;
            }
            local_48 = *(int **)(iVar19 + 0x10);
            puVar2 = (uint *)*local_48;
            uStack_38 = 0xffffffff;
            uVar18 = *puVar2;
            uVar17 = puVar2[1];
            local_3c = puVar2[2];
            uStack_34 = 0xffffffff;
            uStack_30 = 0xffffffff;
            uVar15 = uVar17;
            uStack_44 = uVar18;
            uStack_40 = uVar17;
            if (1 < iVar16) {
              uVar14 = FUN_00c86040((int *)local_48[1],(int *)&uStack_44);
              uVar20 = uVar18;
              uVar4 = uVar18;
              uVar5 = local_3c;
              if ((uVar14 == uVar17) ||
                 (uVar15 = local_3c, uVar20 = uVar17, uVar4 = uStack_40, uVar5 = uVar18,
                 uVar14 == local_3c)) {
                local_3c = uVar5;
                uStack_40 = uVar4;
                uVar18 = uVar15;
                uVar17 = uVar20;
                uStack_44 = uVar15;
              }
              uVar15 = uVar17;
              if (((2 < iVar16) &&
                  (FUN_00c86090((int *)local_48[2],(int *)&uStack_44,(int *)&local_50,
                                (int *)&local_58), local_50 == uVar17)) &&
                 (local_58 == (int *)0xffffffff)) {
                uVar15 = local_3c;
                local_3c = uVar17;
              }
            }
            bVar6 = FUN_00c87250((int *)puVar2,uVar18,uVar15);
            piVar12 = local_64;
            uVar17 = local_68;
            if (local_82 == bVar6) {
              local_4c = local_68;
            }
          }
          goto LAB_00c88351;
        }
        local_70 = (float)fVar21;
        uVar18 = uVar17 + 1;
        local_4c = uVar17;
      }
      else {
LAB_00c88351:
        uVar18 = uVar17 + 1;
      }
    }
    if (local_70 != -1.0) {
      *(undefined1 *)(*(int *)((int)local_28 + local_4c * 4) + 0x24) = 1;
      FUN_00c88440(piVar12,*(int *)((int)local_28 + local_4c * 4));
      FUN_00c8a010(param_2,*(undefined4 **)((int)param_2 + 8),1,
                   (undefined4 *)((int)local_28 + uVar18 * 4));
      iVar19 = *(int *)((int)local_28 + uVar18 * 4);
      iVar16 = *(int *)(iVar19 + 0x10);
      if (iVar16 == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(int *)(iVar19 + 0x14) - iVar16 >> 2;
      }
      if ((uVar18 & 1) != 0) {
        local_82 = local_82 == false;
      }
      goto LAB_00c881f8;
    }
    if (piVar12 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar12);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_28);
}


//// FUNCTION FUN_00c88440 @ 00c88440 ////

void FUN_00c88440(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
LAB_00c8844f:
  do {
    iVar3 = *(int *)(param_2 + 0x10);
    if ((iVar3 == 0) || ((uint)(*(int *)(param_2 + 0x14) - iVar3 >> 2) <= uVar5)) {
      return;
    }
    iVar2 = param_1[1];
    iVar6 = 0;
    if (0 < iVar2) {
      piVar4 = (int *)*param_1;
      do {
        if (*piVar4 == **(int **)(iVar3 + uVar5 * 4)) goto LAB_00c884b3;
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar6 < iVar2);
    }
    iVar2 = iVar2 + -2;
    uVar1 = **(undefined4 **)(iVar3 + uVar5 * 4);
    while (-1 < iVar2) {
      iVar2 = iVar2 + -1;
      *(undefined4 *)(*param_1 + 8 + iVar2 * 4) = *(undefined4 *)(*param_1 + 4 + iVar2 * 4);
    }
    *(undefined4 *)*param_1 = uVar1;
LAB_00c884b3:
    iVar3 = param_1[1];
    iVar2 = 0;
    if (0 < iVar3) {
      piVar4 = (int *)*param_1;
      do {
        if (*piVar4 == *(int *)(*(int *)(*(int *)(param_2 + 0x10) + uVar5 * 4) + 4))
        goto LAB_00c884fb;
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < iVar3);
    }
    iVar3 = iVar3 + -2;
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + uVar5 * 4) + 4);
    while (-1 < iVar3) {
      iVar3 = iVar3 + -1;
      *(undefined4 *)(*param_1 + 8 + iVar3 * 4) = *(undefined4 *)(*param_1 + 4 + iVar3 * 4);
    }
    *(undefined4 *)*param_1 = uVar1;
LAB_00c884fb:
    iVar3 = param_1[1];
    iVar2 = 0;
    if (0 < iVar3) {
      piVar4 = (int *)*param_1;
      do {
        if (*piVar4 == *(int *)(*(int *)(*(int *)(param_2 + 0x10) + uVar5 * 4) + 8)) {
          uVar5 = uVar5 + 1;
          goto LAB_00c8844f;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < iVar3);
    }
    iVar3 = iVar3 + -2;
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + uVar5 * 4) + 8);
    while (-1 < iVar3) {
      iVar3 = iVar3 + -1;
      *(undefined4 *)(*param_1 + 8 + iVar3 * 4) = *(undefined4 *)(*param_1 + 4 + iVar3 * 4);
    }
    uVar5 = uVar5 + 1;
    *(undefined4 *)*param_1 = uVar1;
  } while( true );
}


//// FUNCTION FUN_00c88560 @ 00c88560 ////

void FUN_00c88560(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_1[1];
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)*param_1;
    do {
      if (*piVar3 == *param_2) goto LAB_00c8859e;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = *param_2;
  iVar1 = iVar1 + -2;
  while (-1 < iVar1) {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(*param_1 + 8 + iVar1 * 4) = *(undefined4 *)(*param_1 + 4 + iVar1 * 4);
  }
  *(int *)*param_1 = iVar2;
LAB_00c8859e:
  iVar1 = param_1[1];
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)*param_1;
    do {
      if (*piVar3 == param_2[1]) goto LAB_00c885d3;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = param_2[1];
  iVar1 = iVar1 + -2;
  while (-1 < iVar1) {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(*param_1 + 8 + iVar1 * 4) = *(undefined4 *)(*param_1 + 4 + iVar1 * 4);
  }
  *(int *)*param_1 = iVar2;
LAB_00c885d3:
  iVar1 = param_1[1];
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)*param_1;
    do {
      if (*piVar3 == param_2[2]) {
        return;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = param_2[2];
  iVar1 = iVar1 + -2;
  while (-1 < iVar1) {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(*param_1 + 8 + iVar1 * 4) = *(undefined4 *)(*param_1 + 4 + iVar1 * 4);
  }
  *(int *)*param_1 = iVar2;
  return;
}


//// FUNCTION FUN_00c88610 @ 00c88610 ////

float10 FUN_00c88610(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  uVar5 = 0;
  local_c = 0;
  local_8 = 0;
  do {
    if ((*(int *)(param_2 + 0x10) == 0) ||
       ((uint)(*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) >> 2) <= uVar5)) {
      return (float10)local_c / (float10)local_8;
    }
    iVar1 = *(int *)(param_2 + 0x10);
    iVar2 = param_1[1];
    iVar3 = 0;
    if (0 < iVar2) {
      piVar4 = (int *)*param_1;
      do {
        if (*piVar4 == **(int **)(iVar1 + uVar5 * 4)) {
          local_c = local_c + 1;
          break;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
    iVar3 = 0;
    if (0 < iVar2) {
      piVar4 = (int *)*param_1;
      do {
        if (*piVar4 == *(int *)(*(int *)(iVar1 + uVar5 * 4) + 4)) {
          local_c = local_c + 1;
          break;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
    iVar3 = 0;
    if (0 < iVar2) {
      piVar4 = (int *)*param_1;
      do {
        if (*piVar4 == *(int *)(*(int *)(iVar1 + uVar5 * 4) + 8)) {
          local_c = local_c + 1;
          break;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
    local_8 = local_8 + 1;
    uVar5 = uVar5 + 1;
  } while( true );
}


//// FUNCTION FUN_00c886e0 @ 00c886e0 ////

int FUN_00c886e0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = param_1[1];
  iVar2 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = (int *)*param_1;
    do {
      if (*piVar4 == *param_2) {
        iVar2 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = (int *)*param_1;
    do {
      if (*piVar4 == param_2[1]) {
        iVar2 = iVar2 + 1;
        break;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = (int *)*param_1;
    while (*piVar4 != param_2[2]) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      if (iVar1 <= iVar3) {
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


//// FUNCTION FUN_00c88750 @ 00c88750 ////

char FUN_00c88750(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar3 = param_1[1];
  iVar1 = *param_1;
  iVar2 = FUN_00c85750(param_2,iVar1,iVar3,(int)param_1);
  cVar4 = iVar2 != 0;
  iVar2 = param_1[2];
  iVar3 = FUN_00c85750(param_2,iVar3,iVar2,(int)param_1);
  if (iVar3 != 0) {
    cVar4 = cVar4 + '\x01';
  }
  iVar3 = FUN_00c85750(param_2,iVar2,iVar1,(int)param_1);
  if (iVar3 != 0) {
    cVar4 = cVar4 + '\x01';
  }
  return cVar4;
}


//// FUNCTION FUN_00c887c0 @ 00c887c0 ////

float10 FUN_00c887c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_4;
  
  iVar4 = 0;
  piVar5 = *(int **)(param_1 + 4);
  local_4 = 0;
  if (piVar5 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) - (int)piVar5 >> 2;
  }
  iVar6 = iVar2;
  if (0 < iVar2) {
    do {
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x10) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) >> 2;
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + (iVar3 - *(int *)(iVar1 + 0x28));
      iVar6 = iVar6 + -1;
      local_4 = iVar4;
    } while (iVar6 != 0);
  }
  return (float10)local_4 / (float10)iVar2;
}


//// FUNCTION FUN_00c88830 @ 00c88830 ////

void FUN_00c88830(void *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  undefined1 local_dd;
  int local_d8;
  int *local_d0;
  int local_cc;
  int local_c8;
  int *local_c4;
  int local_c0;
  void *local_bc;
  int *local_b8;
  undefined1 local_b4;
  undefined1 local_b3;
  int *local_b0;
  undefined1 local_a8;
  int local_a0;
  int local_9c;
  uint local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  int *local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  double local_80;
  int local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  uint local_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60 [3];
  undefined4 local_54;
  uint local_48;
  undefined4 local_3c;
  undefined4 local_30;
  uint local_24;
  uint local_18;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06039;
  pvStack_c = ExceptionList;
  iVar5 = param_4 * 6;
  iVar7 = 0;
  local_6c = param_4 * 0x60 + 4;
  local_cc = 0;
  local_dd = 0;
  ExceptionList = &pvStack_c;
  local_78 = iVar5;
  piVar4 = operator_new(local_6c);
  local_4 = 0;
  if (piVar4 == (int *)0x0) {
    local_c4 = (int *)0x0;
  }
  else {
    *piVar4 = iVar5;
    _eh_vector_constructor_iterator_(piVar4 + 1,0x10,iVar5,FUN_00c890c0,FUN_00c85450);
    local_c4 = piVar4 + 1;
  }
  local_d8 = 0;
  local_4 = 0xffffffff;
  local_c0 = 0;
  local_b4 = 0;
  local_b3 = 0;
  local_a8 = 0;
  FUN_00c8a850((int)&local_b4);
  local_4 = 1;
  local_c8 = 0;
  piVar4 = local_c4;
  iVar5 = local_c0;
  if (0 < param_4) {
    do {
      local_d0 = (int *)FUN_00c85f90(local_bc,param_2,param_3);
      piVar6 = local_b0;
      if (local_d0 == (int *)0x0) {
        local_dd = 1;
        iVar5 = local_d8;
        break;
      }
      FUN_00c89d60(&local_b4,(int *)&local_8c,(uint *)&local_d0);
      if (local_8c == piVar6) {
        FUN_00c89aa0(&local_b4,local_14,(uint *)&local_d0);
        iVar5 = FUN_00c85710(param_3,*local_d0,local_d0[1]);
        local_74 = operator_new(0x2c);
        if (local_74 == (undefined4 *)0x0) {
          local_74 = (undefined4 *)0x0;
        }
        else {
          local_30 = CONCAT31(local_30._1_3_,1);
          *local_74 = local_d0;
          local_74[1] = iVar5;
          local_74[2] = local_30;
          *(undefined1 *)(local_74 + 3) = 0;
          local_74[4] = 0;
          local_74[5] = 0;
          local_74[6] = 0;
          local_74[7] = iVar7;
          local_74[8] = local_cc;
          *(undefined1 *)(local_74 + 9) = 0;
          local_74[10] = 0;
          iVar7 = iVar7 + 1;
          local_cc = local_cc + 1;
        }
        FUN_00c8a010(piVar4,(undefined4 *)piVar4[2],1,&local_74);
        iVar5 = FUN_00c85710(param_3,*local_d0,local_d0[1]);
        local_94 = operator_new(0x2c);
        if (local_94 == (undefined4 *)0x0) {
          local_94 = (undefined4 *)0x0;
        }
        else {
          local_18 = local_18 & 0xffffff00;
          *local_94 = local_d0;
          local_94[1] = iVar5;
          local_94[2] = local_18;
          *(undefined1 *)(local_94 + 3) = 0;
          local_94[4] = 0;
          local_94[5] = 0;
          local_94[6] = 0;
          local_94[7] = iVar7;
          local_94[8] = local_cc;
          *(undefined1 *)(local_94 + 9) = 0;
          local_94[10] = 0;
          iVar7 = iVar7 + 1;
          local_cc = local_cc + 1;
        }
        FUN_00c8a010(piVar4 + 4,(undefined4 *)piVar4[6],1,&local_94);
        iVar5 = FUN_00c85710(param_3,local_d0[1],local_d0[2]);
        local_84 = operator_new(0x2c);
        if (local_84 == (undefined4 *)0x0) {
          local_84 = (undefined4 *)0x0;
        }
        else {
          local_54 = CONCAT31(local_54._1_3_,1);
          *local_84 = local_d0;
          local_84[1] = iVar5;
          local_84[2] = local_54;
          *(undefined1 *)(local_84 + 3) = 0;
          local_84[4] = 0;
          local_84[5] = 0;
          local_84[6] = 0;
          local_84[7] = iVar7;
          local_84[8] = local_cc;
          *(undefined1 *)(local_84 + 9) = 0;
          local_84[10] = 0;
          iVar7 = iVar7 + 1;
          local_cc = local_cc + 1;
        }
        FUN_00c8a010(piVar4 + 8,(undefined4 *)piVar4[10],1,&local_84);
        iVar5 = FUN_00c85710(param_3,local_d0[1],local_d0[2]);
        local_70 = operator_new(0x2c);
        if (local_70 == (undefined4 *)0x0) {
          local_70 = (undefined4 *)0x0;
        }
        else {
          local_48 = local_48 & 0xffffff00;
          *local_70 = local_d0;
          local_70[1] = iVar5;
          local_70[2] = local_48;
          *(undefined1 *)(local_70 + 3) = 0;
          local_70[4] = 0;
          local_70[5] = 0;
          local_70[6] = 0;
          local_70[7] = iVar7;
          local_70[8] = local_cc;
          *(undefined1 *)(local_70 + 9) = 0;
          local_70[10] = 0;
          iVar7 = iVar7 + 1;
          local_cc = local_cc + 1;
        }
        FUN_00c8a010(piVar4 + 0xc,(undefined4 *)piVar4[0xe],1,&local_70);
        iVar5 = FUN_00c85710(param_3,local_d0[2],*local_d0);
        local_90 = operator_new(0x2c);
        if (local_90 == (undefined4 *)0x0) {
          local_90 = (undefined4 *)0x0;
        }
        else {
          local_3c = CONCAT31(local_3c._1_3_,1);
          *local_90 = local_d0;
          local_90[1] = iVar5;
          local_90[2] = local_3c;
          *(undefined1 *)(local_90 + 3) = 0;
          local_90[4] = 0;
          local_90[5] = 0;
          local_90[6] = 0;
          local_90[7] = iVar7;
          local_90[8] = local_cc;
          *(undefined1 *)(local_90 + 9) = 0;
          local_90[10] = 0;
          iVar7 = iVar7 + 1;
          local_cc = local_cc + 1;
        }
        piVar6 = piVar4 + 0x14;
        FUN_00c8a010(piVar4 + 0x10,(undefined4 *)piVar4[0x12],1,&local_90);
        iVar5 = FUN_00c85710(param_3,local_d0[2],*local_d0);
        local_88 = operator_new(0x2c);
        if (local_88 == (undefined4 *)0x0) {
          local_88 = (undefined4 *)0x0;
        }
        else {
          local_24 = local_24 & 0xffffff00;
          *local_88 = local_d0;
          local_88[1] = iVar5;
          local_88[2] = local_24;
          *(undefined1 *)(local_88 + 3) = 0;
          local_88[4] = 0;
          local_88[5] = 0;
          local_88[6] = 0;
          local_88[7] = iVar7;
          local_88[8] = local_cc;
          *(undefined1 *)(local_88 + 9) = 0;
          local_88[10] = 0;
          iVar7 = iVar7 + 1;
          local_cc = local_cc + 1;
        }
        piVar1 = piVar4 + 0x16;
        local_d8 = local_d8 + 6;
        piVar4 = piVar4 + 0x18;
        FUN_00c8a010(piVar6,(undefined4 *)*piVar1,1,&local_88);
      }
      local_c8 = local_c8 + 1;
      iVar5 = local_d8;
    } while (local_c8 < param_4);
  }
  local_c0 = iVar5;
  iVar5 = local_d8;
  if (0 < local_d8) {
    piVar4 = local_c4 + 1;
    do {
      FUN_00c861d0(*(void **)*piVar4,param_3);
      local_a0 = 0;
      local_9c = 0;
      local_98 = local_98 & 0xffffff00;
      local_b8 = *(int **)*piVar4;
      iVar5 = local_b8[8];
      bVar3 = FUN_00c86e80(param_2,param_3,local_b8,&local_a0);
      if (bVar3) {
        do {
          local_b8 = operator_new(0x2c);
          if (local_b8 == (int *)0x0) {
            local_b8 = (int *)0x0;
          }
          else {
            *local_b8 = local_a0;
            local_b8[1] = local_9c;
            local_b8[2] = local_98;
            *(undefined1 *)(local_b8 + 3) = local_dd;
            local_b8[4] = 0;
            local_b8[5] = 0;
            local_b8[6] = 0;
            local_b8[7] = iVar7;
            local_b8[8] = iVar5;
            *(undefined1 *)(local_b8 + 9) = 0;
            local_b8[10] = 0;
            iVar7 = iVar7 + 1;
          }
          FUN_00c861d0(local_b8,param_3);
          FUN_00c8a010(piVar4 + -1,(undefined4 *)piVar4[1],1,&local_b8);
          bVar3 = FUN_00c86e80(param_2,param_3,local_b8,&local_a0);
        } while (bVar3);
      }
      piVar4 = piVar4 + 4;
      local_d8 = local_d8 + -1;
      iVar5 = local_c0;
    } while (local_d8 != 0);
  }
  local_c0 = 0;
  local_80 = 0.0;
  local_c8 = 0;
  if (0 < iVar5) {
    piVar4 = local_c4 + 1;
    do {
      fVar8 = FUN_00c887c0((int)(piVar4 + -1));
      if (*piVar4 == 0) {
        local_68 = 0;
      }
      else {
        local_68 = piVar4[1] - *piVar4 >> 2;
      }
      uStack_64 = 0;
      fVar8 = (float10)local_68 * (float10)0.0 + fVar8;
      if ((float10)local_80 < fVar8) {
        local_80 = (double)fVar8;
        local_c0 = local_c8;
      }
      piVar4 = piVar4 + 4;
      local_c8 = local_c8 + 1;
    } while (local_c8 < iVar5);
  }
  FUN_00c86db0(param_1,(int)(local_c4 + local_c0 * 4));
  local_c8 = 0;
  if (0 < iVar5) {
    piVar4 = local_c4 + 1;
    do {
      if (local_c8 != local_c0) {
        if (*piVar4 == 0) {
          local_d8 = 0;
        }
        else {
          local_d8 = piVar4[1] - *piVar4 >> 2;
        }
        iVar7 = 0;
        if (0 < local_d8) {
          do {
            iVar2 = *(int *)(*piVar4 + iVar7 * 4);
            if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
              _free(*(void **)(iVar2 + 0x10));
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_d8);
        }
      }
      local_c8 = local_c8 + 1;
      piVar4 = piVar4 + 4;
    } while (local_c8 < iVar5);
  }
  if (local_c4 == (int *)0x0) {
    local_4 = 0xffffffff;
    FUN_00c89cb0(&local_b4,local_60,(int *)*local_b0,local_b0);
                    /* WARNING: Subroutine does not return */
    _free(local_b0);
  }
  piVar4 = local_c4 + -1;
  _eh_vector_destructor_iterator_(local_c4,0x10,local_c4[-1],FUN_00c85450);
                    /* WARNING: Subroutine does not return */
  _free(piVar4);
}


//// FUNCTION FUN_00c890c0 @ 00c890c0 ////

void __fastcall FUN_00c890c0(undefined1 *param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = local_1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00c890e0 @ 00c890e0 ////

void __fastcall FUN_00c890e0(void *param_1)

{
  int *piVar1;
  void *_Memory;
  int *piVar2;
  int *local_c;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)((int)param_1 + 4);
  local_c = (int *)*piVar1;
  piVar2 = local_c;
  if (*(int *)((int)param_1 + 0x10) == 0) {
    while (local_c = piVar2, piVar2 != piVar1) {
      FUN_00c8ad20((int *)&local_c);
      FUN_00c8a430(param_1,local_4,piVar2);
      piVar2 = local_c;
    }
  }
  else {
    _Memory = (void *)piVar1[1];
    if (_Memory != *(void **)((int)param_1 + 8)) {
      FUN_00c8a810(param_1,*(void **)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 4) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + 4);
    *(int *)(*(int *)((int)param_1 + 4) + 8) = *(int *)((int)param_1 + 4);
    FUN_00c89a90(param_1,&local_8);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00c891e0 @ 00c891e0 ////

void __thiscall FUN_00c891e0(void *this,undefined1 *param_1)

{
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00c89200 @ 00c89200 ////

int __fastcall FUN_00c89200(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}


//// FUNCTION FUN_00c89220 @ 00c89220 ////

void __fastcall FUN_00c89220(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00c89240 @ 00c89240 ////

int __fastcall FUN_00c89240(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}


//// FUNCTION FUN_00c89260 @ 00c89260 ////

int __thiscall FUN_00c89260(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 **)((int)this + 8);
  iVar1 = *(int *)((int)this + 4);
  iVar5 = (int)param_1 - iVar1;
  if (*(int *)((int)this + 0xc) - (int)puVar4 >> 2 != 0) {
    if ((int)puVar4 - (int)param_1 >> 2 == 0) {
      FUN_00c89440(param_1,puVar4,param_1 + 1);
      FUN_00c8ab00(*(undefined4 **)((int)this + 8),
                   1 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),param_2);
      puVar4 = *(undefined4 **)((int)this + 8);
      for (; param_1 != puVar4; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    else {
      FUN_00c89440(puVar4 + -1,puVar4,puVar4);
      puVar4 = *(undefined4 **)((int)this + 8);
      puVar2 = puVar4;
      while (param_1 != puVar2 + -1) {
        puVar4 = puVar4 + -1;
        *puVar4 = puVar2[-2];
        puVar2 = puVar2 + -1;
      }
      puVar4 = param_1 + 1;
      for (; param_1 != puVar4; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
    return *(int *)((int)this + 4) + (iVar5 >> 2) * 4;
  }
  if ((iVar1 == 0) || (uVar3 = (int)puVar4 - iVar1 >> 2, uVar3 < 2)) {
    uVar3 = 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)puVar4 - iVar1 >> 2;
  }
  iVar1 = iVar1 + uVar3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  puVar2 = operator_new(iVar1 * 4);
  for (puVar4 = *(undefined4 **)((int)this + 4); puVar4 != param_1; puVar4 = puVar4 + 1) {
    FUN_00c8add0(puVar2,puVar4);
    puVar2 = puVar2 + 1;
  }
  FUN_00c8add0(puVar2,param_2);
  FUN_00c89440(param_1,*(undefined4 **)((int)this + 8),puVar2 + 1);
  FUN_00c89430();
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}


//// FUNCTION FUN_00c89400 @ 00c89400 ////

void __thiscall FUN_00c89400(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *(undefined4 **)((int)this + 8) = param_1;
  return;
}


//// FUNCTION FUN_00c89430 @ 00c89430 ////

void FUN_00c89430(void)

{
  return;
}


//// FUNCTION FUN_00c89440 @ 00c89440 ////

void FUN_00c89440(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00c89470 @ 00c89470 ////

int __thiscall FUN_00c89470(void *this,undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined2 **)((int)this + 8);
  iVar1 = *(int *)((int)this + 4);
  iVar5 = (int)param_1 - iVar1;
  if (*(int *)((int)this + 0xc) - (int)puVar4 >> 1 != 0) {
    if ((int)puVar4 - (int)param_1 >> 1 == 0) {
      FUN_00c89610(param_1,puVar4,param_1 + 1);
      FUN_00c89fe0(*(undefined2 **)((int)this + 8),
                   1 - ((int)*(undefined2 **)((int)this + 8) - (int)param_1 >> 1),param_2);
      puVar4 = *(undefined2 **)((int)this + 8);
      for (; param_1 != puVar4; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    else {
      FUN_00c89610(puVar4 + -1,puVar4,puVar4);
      puVar4 = *(undefined2 **)((int)this + 8);
      puVar2 = puVar4;
      while (param_1 != puVar2 + -1) {
        puVar4 = puVar4 + -1;
        *puVar4 = puVar2[-2];
        puVar2 = puVar2 + -1;
      }
      puVar4 = param_1 + 1;
      for (; param_1 != puVar4; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 2;
    return *(int *)((int)this + 4) + (iVar5 >> 1) * 2;
  }
  if ((iVar1 == 0) || (uVar3 = (int)puVar4 - iVar1 >> 1, uVar3 < 2)) {
    uVar3 = 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)puVar4 - iVar1 >> 1;
  }
  iVar1 = iVar1 + uVar3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  puVar2 = operator_new(iVar1 * 2);
  for (puVar4 = *(undefined2 **)((int)this + 4); puVar4 != param_1; puVar4 = puVar4 + 1) {
    FUN_00c8adf0(puVar2,puVar4);
    puVar2 = puVar2 + 1;
  }
  FUN_00c8adf0(puVar2,param_2);
  FUN_00c89610(param_1,*(undefined2 **)((int)this + 8),puVar2 + 1);
  FUN_00703d30();
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}


//// FUNCTION FUN_00c89610 @ 00c89610 ////

void FUN_00c89610(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00c89640 @ 00c89640 ////

void __thiscall FUN_00c89640(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)((int)this + 8);
  if ((uint)(*(int *)((int)this + 0xc) - (int)puVar5 >> 2) < param_2) {
    iVar1 = *(int *)((int)this + 4);
    if ((iVar1 == 0) || (uVar3 = (int)puVar5 - iVar1 >> 2, uVar3 <= param_2)) {
      uVar3 = param_2;
    }
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)puVar5 - iVar1 >> 2;
    }
    iVar1 = iVar1 + uVar3;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 * 4);
    for (puVar5 = *(undefined4 **)((int)this + 4); uVar3 = param_2, puVar4 = puVar2,
        puVar5 != param_1; puVar5 = puVar5 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_3;
      }
      puVar4 = puVar4 + 1;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    puVar5 = puVar2 + param_2;
    if (param_1 != puVar4) {
      puVar2 = (undefined4 *)((int)puVar5 + (param_2 * -4 - (int)puVar2) + (int)param_1);
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar2;
        }
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar2 != puVar4);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  if ((uint)((int)puVar5 - (int)param_1 >> 2) < param_2) {
    puVar2 = param_1 + param_2;
    if (param_1 != puVar5) {
      puVar4 = puVar2 + -param_2;
      do {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar4;
        }
        puVar4 = puVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (puVar4 != puVar5);
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (iVar1 = param_2 - ((int)puVar5 - (int)param_1 >> 2); iVar1 != 0; iVar1 = iVar1 + -1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_3;
      }
      puVar5 = puVar5 + 1;
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (; param_1 != puVar5; param_1 = param_1 + 1) {
      *param_1 = *param_3;
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
    return;
  }
  if (param_2 != 0) {
    puVar2 = puVar5;
    for (puVar4 = puVar5 + -param_2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar4;
      }
      puVar2 = puVar2 + 1;
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (puVar2 = puVar5 + -param_2; param_1 != puVar2; puVar2 = puVar2 + -1) {
      puVar5 = puVar5 + -1;
      *puVar5 = puVar2[-1];
    }
    puVar5 = param_1 + param_2;
    for (; param_1 != puVar5; param_1 = param_1 + 1) {
      *param_1 = *param_3;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
  }
  return;
}


//// FUNCTION FUN_00c89850 @ 00c89850 ////

void __thiscall FUN_00c89850(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *(undefined4 **)((int)this + 8) = param_1;
  return;
}


//// FUNCTION FUN_00c89890 @ 00c89890 ////

int __thiscall FUN_00c89890(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 **)((int)this + 8);
  iVar1 = *(int *)((int)this + 4);
  iVar5 = (int)param_1 - iVar1;
  if (*(int *)((int)this + 0xc) - (int)puVar4 >> 2 != 0) {
    if ((int)puVar4 - (int)param_1 >> 2 == 0) {
      FUN_00c8ab30(param_1,puVar4,param_1 + 1);
      FUN_00c8ab60(*(undefined4 **)((int)this + 8),
                   1 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),param_2);
      puVar4 = *(undefined4 **)((int)this + 8);
      for (; param_1 != puVar4; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    else {
      FUN_00c8ab30(puVar4 + -1,puVar4,puVar4);
      puVar4 = *(undefined4 **)((int)this + 8);
      puVar2 = puVar4;
      while (param_1 != puVar2 + -1) {
        puVar4 = puVar4 + -1;
        *puVar4 = puVar2[-2];
        puVar2 = puVar2 + -1;
      }
      puVar4 = param_1 + 1;
      for (; param_1 != puVar4; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
    return *(int *)((int)this + 4) + (iVar5 >> 2) * 4;
  }
  if ((iVar1 == 0) || (uVar3 = (int)puVar4 - iVar1 >> 2, uVar3 < 2)) {
    uVar3 = 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)puVar4 - iVar1 >> 2;
  }
  iVar1 = iVar1 + uVar3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  puVar2 = operator_new(iVar1 * 4);
  for (puVar4 = *(undefined4 **)((int)this + 4); puVar4 != param_1; puVar4 = puVar4 + 1) {
    FUN_00c8ae10(puVar2,puVar4);
    puVar2 = puVar2 + 1;
  }
  FUN_00c8ae10(puVar2,param_2);
  FUN_00c8ab30(param_1,*(undefined4 **)((int)this + 8),puVar2 + 1);
  FUN_00c89a80();
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}


//// FUNCTION FUN_00c89a50 @ 00c89a50 ////

void __thiscall FUN_00c89a50(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *(undefined4 **)((int)this + 8) = param_1;
  return;
}


//// FUNCTION FUN_00c89a80 @ 00c89a80 ////

void FUN_00c89a80(void)

{
  return;
}


//// FUNCTION FUN_00c89a90 @ 00c89a90 ////

void __thiscall FUN_00c89a90(void *this,undefined4 *param_1)

{
  *param_1 = **(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_00c89aa0 @ 00c89aa0 ////

void __thiscall FUN_00c89aa0(void *this,undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  bool bVar11;
  int *local_4;
  
  puVar10 = param_2;
  bVar11 = true;
  piVar1 = *(int **)((int)this + 4);
  piVar6 = piVar1;
  piVar7 = (int *)piVar1[1];
  while (piVar7 != *(int **)((int)this + 8)) {
    bVar11 = *param_2 < (uint)piVar7[3];
    piVar6 = piVar7;
    if (bVar11) {
      piVar7 = (int *)*piVar7;
    }
    else {
      piVar7 = (int *)piVar7[2];
    }
  }
  if (*(char *)((int)this + 0xc) != '\0') {
    local_4 = this;
    param_2 = (uint *)FUN_00c8aca0(piVar6,0);
    *param_2 = *(uint *)((int)this + 8);
    param_2[2] = *(uint *)((int)this + 8);
    FUN_00c8add0(param_2 + 3,puVar10);
    puVar8 = param_2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    if (((piVar6 == *(int **)((int)this + 4)) || (piVar7 != *(int **)((int)this + 8))) ||
       (*puVar10 < (uint)piVar6[3])) {
      *piVar6 = (int)param_2;
      piVar1 = *(int **)((int)this + 4);
      if (piVar6 == piVar1) {
        piVar1[1] = (int)param_2;
        *(uint **)(*(int *)((int)this + 4) + 8) = param_2;
      }
      else if (piVar6 == (int *)*piVar1) {
        *piVar1 = (int)param_2;
      }
    }
    else {
      piVar6[2] = (int)param_2;
      if (piVar6 == *(int **)(*(int *)((int)this + 4) + 8)) {
        *(uint **)(*(int *)((int)this + 4) + 8) = param_2;
      }
    }
    puVar10 = param_2;
    if (param_2 != *(uint **)(*(int *)((int)this + 4) + 4)) {
      do {
        puVar2 = (uint *)puVar10[1];
        if ((char)puVar2[4] != '\0') break;
        puVar3 = *(uint **)puVar2[1];
        if (puVar2 == puVar3) {
          iVar4 = ((undefined4 *)puVar2[1])[2];
          if (*(char *)(iVar4 + 0x10) == '\0') {
            *(undefined1 *)(puVar2 + 4) = 1;
            *(undefined1 *)(iVar4 + 0x10) = 1;
            *(undefined1 *)(*(int *)(puVar10[1] + 4) + 0x10) = 0;
            puVar10 = *(uint **)(puVar10[1] + 4);
          }
          else {
            if (puVar10 == (uint *)puVar2[2]) {
              FUN_00c8abf0(this,(int)puVar2);
              puVar10 = puVar2;
            }
            *(undefined1 *)(puVar10[1] + 0x10) = 1;
            *(undefined1 *)(*(int *)(puVar10[1] + 4) + 0x10) = 0;
            FUN_00c8ac40(this,*(int **)(puVar10[1] + 4));
          }
        }
        else if ((char)puVar3[4] == '\0') {
          *(undefined1 *)(puVar2 + 4) = 1;
          *(undefined1 *)(puVar3 + 4) = 1;
          *(undefined1 *)(*(int *)(puVar10[1] + 4) + 0x10) = 0;
          puVar10 = *(uint **)(puVar10[1] + 4);
        }
        else {
          if (puVar10 == (uint *)*puVar2) {
            FUN_00c8ac40(this,(int *)puVar2);
            puVar10 = puVar2;
          }
          *(undefined1 *)(puVar10[1] + 0x10) = 1;
          *(undefined1 *)(*(int *)(puVar10[1] + 4) + 0x10) = 0;
          FUN_00c8abf0(this,*(int *)(puVar10[1] + 4));
        }
      } while (puVar10 != *(uint **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x10) = 1;
    *param_1 = puVar8;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  local_4 = piVar6;
  if (bVar11) {
    if (piVar6 == (int *)*piVar1) goto LAB_00c89c70;
    FUN_00c8acc0((int *)&local_4);
  }
  if (*puVar10 <= (uint)local_4[3]) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = local_4;
    return;
  }
LAB_00c89c70:
  puVar9 = (undefined4 *)FUN_00c8a8b0(this,&param_2,(int)piVar7,piVar6,puVar10);
  uVar5 = *puVar9;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = uVar5;
  return;
}


//// FUNCTION FUN_00c89cb0 @ 00c89cb0 ////

void __thiscall FUN_00c89cb0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  void *_Memory;
  int *piVar2;
  int *piVar3;
  
  piVar3 = param_3;
  piVar2 = param_2;
  if (((*(int *)((int)this + 0x10) != 0) &&
      (piVar1 = *(int **)((int)this + 4), param_2 == (int *)*piVar1)) && (param_3 == piVar1)) {
    _Memory = (void *)piVar1[1];
    if (_Memory != *(void **)((int)this + 8)) {
      FUN_00c8a810(this,*(void **)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)(*(int *)((int)this + 4) + 4) = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar3) {
    param_2 = piVar2;
    FUN_00c8ad20((int *)&param_2);
    FUN_00c8a430(this,&param_3,piVar2);
    piVar2 = param_2;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00c89d60 @ 00c89d60 ////

void __thiscall FUN_00c89d60(void *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  puVar4 = puVar1;
  if ((undefined4 *)puVar1[1] != *(undefined4 **)((int)this + 8)) {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((uint)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (puVar3 != *(undefined4 **)((int)this + 8));
  }
  if ((puVar4 != puVar1) && ((uint)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}


//// FUNCTION FUN_00c89dd0 @ 00c89dd0 ////

void __thiscall FUN_00c89dd0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)((int)this + 8);
  if ((uint)(*(int *)((int)this + 0xc) - (int)puVar5 >> 2) < param_2) {
    iVar1 = *(int *)((int)this + 4);
    if ((iVar1 == 0) || (uVar3 = (int)puVar5 - iVar1 >> 2, uVar3 <= param_2)) {
      uVar3 = param_2;
    }
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)puVar5 - iVar1 >> 2;
    }
    iVar1 = iVar1 + uVar3;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 * 4);
    for (puVar5 = *(undefined4 **)((int)this + 4); uVar3 = param_2, puVar4 = puVar2,
        puVar5 != param_1; puVar5 = puVar5 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_3;
      }
      puVar4 = puVar4 + 1;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    puVar5 = puVar2 + param_2;
    if (param_1 != puVar4) {
      puVar2 = (undefined4 *)((int)puVar5 + (param_2 * -4 - (int)puVar2) + (int)param_1);
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar2;
        }
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar2 != puVar4);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  if ((uint)((int)puVar5 - (int)param_1 >> 2) < param_2) {
    puVar2 = param_1 + param_2;
    if (param_1 != puVar5) {
      puVar4 = puVar2 + -param_2;
      do {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar4;
        }
        puVar4 = puVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (puVar4 != puVar5);
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (iVar1 = param_2 - ((int)puVar5 - (int)param_1 >> 2); iVar1 != 0; iVar1 = iVar1 + -1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_3;
      }
      puVar5 = puVar5 + 1;
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (; param_1 != puVar5; param_1 = param_1 + 1) {
      *param_1 = *param_3;
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
    return;
  }
  if (param_2 != 0) {
    puVar2 = puVar5;
    for (puVar4 = puVar5 + -param_2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar4;
      }
      puVar2 = puVar2 + 1;
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (puVar2 = puVar5 + -param_2; param_1 != puVar2; puVar2 = puVar2 + -1) {
      puVar5 = puVar5 + -1;
      *puVar5 = puVar2[-1];
    }
    puVar5 = param_1 + param_2;
    for (; param_1 != puVar5; param_1 = param_1 + 1) {
      *param_1 = *param_3;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
  }
  return;
}


//// FUNCTION FUN_00c89fe0 @ 00c89fe0 ////

void FUN_00c89fe0(undefined2 *param_1,int param_2,undefined2 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00c8a010 @ 00c8a010 ////

void __thiscall FUN_00c8a010(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)((int)this + 8);
  if ((uint)(*(int *)((int)this + 0xc) - (int)puVar5 >> 2) < param_2) {
    iVar1 = *(int *)((int)this + 4);
    if ((iVar1 == 0) || (uVar3 = (int)puVar5 - iVar1 >> 2, uVar3 <= param_2)) {
      uVar3 = param_2;
    }
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)puVar5 - iVar1 >> 2;
    }
    iVar1 = iVar1 + uVar3;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 * 4);
    for (puVar5 = *(undefined4 **)((int)this + 4); uVar3 = param_2, puVar4 = puVar2,
        puVar5 != param_1; puVar5 = puVar5 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_3;
      }
      puVar4 = puVar4 + 1;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    puVar5 = puVar2 + param_2;
    if (param_1 != puVar4) {
      puVar2 = (undefined4 *)((int)puVar5 + (param_2 * -4 - (int)puVar2) + (int)param_1);
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar2;
        }
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar2 != puVar4);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  if ((uint)((int)puVar5 - (int)param_1 >> 2) < param_2) {
    puVar2 = param_1 + param_2;
    if (param_1 != puVar5) {
      puVar4 = puVar2 + -param_2;
      do {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar4;
        }
        puVar4 = puVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (puVar4 != puVar5);
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (iVar1 = param_2 - ((int)puVar5 - (int)param_1 >> 2); iVar1 != 0; iVar1 = iVar1 + -1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_3;
      }
      puVar5 = puVar5 + 1;
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (; param_1 != puVar5; param_1 = param_1 + 1) {
      *param_1 = *param_3;
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
    return;
  }
  if (param_2 != 0) {
    puVar2 = puVar5;
    for (puVar4 = puVar5 + -param_2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar4;
      }
      puVar2 = puVar2 + 1;
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (puVar2 = puVar5 + -param_2; param_1 != puVar2; puVar2 = puVar2 + -1) {
      puVar5 = puVar5 + -1;
      *puVar5 = puVar2[-1];
    }
    puVar5 = param_1 + param_2;
    for (; param_1 != puVar5; param_1 = param_1 + 1) {
      *param_1 = *param_3;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
  }
  return;
}


//// FUNCTION FUN_00c8a220 @ 00c8a220 ////

void __thiscall FUN_00c8a220(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)((int)this + 8);
  if ((uint)(*(int *)((int)this + 0xc) - (int)puVar5 >> 2) < param_2) {
    iVar1 = *(int *)((int)this + 4);
    if ((iVar1 == 0) || (uVar3 = (int)puVar5 - iVar1 >> 2, uVar3 <= param_2)) {
      uVar3 = param_2;
    }
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)puVar5 - iVar1 >> 2;
    }
    iVar1 = iVar1 + uVar3;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 * 4);
    for (puVar5 = *(undefined4 **)((int)this + 4); uVar3 = param_2, puVar4 = puVar2,
        puVar5 != param_1; puVar5 = puVar5 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_3;
      }
      puVar4 = puVar4 + 1;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    puVar5 = puVar2 + param_2;
    if (param_1 != puVar4) {
      puVar2 = (undefined4 *)((int)puVar5 + (param_2 * -4 - (int)puVar2) + (int)param_1);
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar2;
        }
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar2 != puVar4);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  if ((uint)((int)puVar5 - (int)param_1 >> 2) < param_2) {
    puVar2 = param_1 + param_2;
    if (param_1 != puVar5) {
      puVar4 = puVar2 + -param_2;
      do {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar4;
        }
        puVar4 = puVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (puVar4 != puVar5);
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (iVar1 = param_2 - ((int)puVar5 - (int)param_1 >> 2); iVar1 != 0; iVar1 = iVar1 + -1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_3;
      }
      puVar5 = puVar5 + 1;
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (; param_1 != puVar5; param_1 = param_1 + 1) {
      *param_1 = *param_3;
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
    return;
  }
  if (param_2 != 0) {
    puVar2 = puVar5;
    for (puVar4 = puVar5 + -param_2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar4;
      }
      puVar2 = puVar2 + 1;
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (puVar2 = puVar5 + -param_2; param_1 != puVar2; puVar2 = puVar2 + -1) {
      puVar5 = puVar5 + -1;
      *puVar5 = puVar2[-1];
    }
    puVar5 = param_1 + param_2;
    for (; param_1 != puVar5; param_1 = param_1 + 1) {
      *param_1 = *param_3;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
  }
  return;
}


//// FUNCTION FUN_00c8a430 @ 00c8a430 ////

void __thiscall FUN_00c8a430(void *this,undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_4;
  
  piVar8 = param_2;
  FUN_00c8ad20((int *)&param_2);
  piVar7 = (int *)*piVar8;
  local_4 = piVar8;
  if (piVar7 == *(int **)((int)this + 8)) {
    piVar6 = (int *)piVar8[2];
  }
  else {
    piVar3 = (int *)piVar8[2];
    piVar6 = piVar7;
    if (piVar3 != *(int **)((int)this + 8)) {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar6 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x11);
        piVar3 = piVar6;
        piVar6 = (int *)*piVar6;
      }
      piVar6 = (int *)piVar3[2];
      local_4 = piVar3;
      if (piVar3 != piVar8) {
        piVar7[1] = (int)piVar3;
        *piVar3 = *piVar8;
        if (piVar3 == (int *)piVar8[2]) {
          piVar6[1] = (int)piVar3;
        }
        else {
          piVar6[1] = piVar3[1];
          *(int **)piVar3[1] = piVar6;
          piVar3[2] = piVar8[2];
          *(int **)(piVar8[2] + 4) = piVar3;
        }
        if (*(int **)(*(int *)((int)this + 4) + 4) == piVar8) {
          *(int **)(*(int *)((int)this + 4) + 4) = piVar3;
        }
        else {
          piVar7 = (int *)piVar8[1];
          if ((int *)*piVar7 == piVar8) {
            *piVar7 = (int)piVar3;
          }
          else {
            piVar7[2] = (int)piVar3;
          }
        }
        local_4 = piVar8;
        piVar3[1] = piVar8[1];
        iVar2 = piVar3[4];
        *(char *)(piVar3 + 4) = (char)piVar8[4];
        *(char *)(piVar8 + 4) = (char)iVar2;
        goto LAB_00c8a568;
      }
    }
  }
  piVar6[1] = local_4[1];
  if (*(int **)(*(int *)((int)this + 4) + 4) == piVar8) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
  }
  else {
    piVar7 = (int *)piVar8[1];
    if ((int *)*piVar7 == piVar8) {
      *piVar7 = (int)piVar6;
    }
    else {
      piVar7[2] = (int)piVar6;
    }
  }
  if ((int *)**(int **)((int)this + 4) == piVar8) {
    if (piVar8[2] == *(int *)((int)this + 8)) {
      piVar7 = (int *)piVar8[1];
    }
    else {
      cVar1 = *(char *)(*piVar6 + 0x11);
      piVar3 = (int *)*piVar6;
      piVar7 = piVar6;
      while (piVar5 = piVar3, cVar1 == '\0') {
        piVar3 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar3 + 0x11);
        piVar7 = piVar5;
      }
    }
    **(int **)((int)this + 4) = (int)piVar7;
  }
  if (*(int **)(*(int *)((int)this + 4) + 8) == piVar8) {
    if (*piVar8 == *(int *)((int)this + 8)) {
      piVar7 = (int *)piVar8[1];
    }
    else {
      cVar1 = *(char *)(piVar6[2] + 0x11);
      piVar8 = (int *)piVar6[2];
      piVar7 = piVar6;
      while (piVar3 = piVar8, cVar1 == '\0') {
        piVar8 = (int *)piVar3[2];
        cVar1 = *(char *)((int)piVar8 + 0x11);
        piVar7 = piVar3;
      }
    }
    *(int **)(*(int *)((int)this + 4) + 8) = piVar7;
  }
LAB_00c8a568:
  if ((char)local_4[4] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar6[4] != '\x01') break;
        piVar7 = *(int **)piVar6[1];
        if (piVar6 == piVar7) {
          piVar7 = (int *)((undefined4 *)piVar6[1])[2];
          if ((char)piVar7[4] == '\0') {
            *(undefined1 *)(piVar7 + 4) = 1;
            *(undefined1 *)(piVar6[1] + 0x10) = 0;
            iVar2 = piVar6[1];
            piVar7 = *(int **)(iVar2 + 8);
            *(int *)(iVar2 + 8) = *piVar7;
            if (*piVar7 != *(int *)((int)this + 8)) {
              *(int *)(*piVar7 + 4) = iVar2;
            }
            piVar7[1] = *(int *)(iVar2 + 4);
            if (iVar2 == *(int *)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
            }
            else {
              piVar8 = *(int **)(iVar2 + 4);
              if (iVar2 == *piVar8) {
                *piVar8 = (int)piVar7;
              }
              else {
                piVar8[2] = (int)piVar7;
              }
            }
            *piVar7 = iVar2;
            *(int **)(iVar2 + 4) = piVar7;
            piVar7 = *(int **)(piVar6[1] + 8);
          }
          if ((*(char *)(*piVar7 + 0x10) != '\x01') || (*(char *)(piVar7[2] + 0x10) != '\x01')) {
            if (*(char *)(piVar7[2] + 0x10) == '\x01') {
              *(undefined1 *)(*piVar7 + 0x10) = 1;
              iVar2 = *piVar7;
              *(undefined1 *)(piVar7 + 4) = 0;
              *piVar7 = *(int *)(iVar2 + 8);
              if (*(int *)(iVar2 + 8) != *(int *)((int)this + 8)) {
                *(int **)(*(int *)(iVar2 + 8) + 4) = piVar7;
              }
              *(int *)(iVar2 + 4) = piVar7[1];
              if (piVar7 == *(int **)(*(int *)((int)this + 4) + 4)) {
                *(int *)(*(int *)((int)this + 4) + 4) = iVar2;
              }
              else {
                piVar8 = (int *)piVar7[1];
                if (piVar7 == (int *)piVar8[2]) {
                  piVar8[2] = iVar2;
                }
                else {
                  *piVar8 = iVar2;
                }
              }
              *(int **)(iVar2 + 8) = piVar7;
              piVar7[1] = iVar2;
              piVar7 = *(int **)(piVar6[1] + 8);
            }
            *(undefined1 *)(piVar7 + 4) = *(undefined1 *)(piVar6[1] + 0x10);
            *(undefined1 *)(piVar6[1] + 0x10) = 1;
            *(undefined1 *)(piVar7[2] + 0x10) = 1;
            piVar7 = (int *)piVar6[1];
            piVar8 = (int *)piVar7[2];
            piVar7[2] = *piVar8;
            if (*piVar8 != *(int *)((int)this + 8)) {
              *(int **)(*piVar8 + 4) = piVar7;
            }
            piVar8[1] = piVar7[1];
            if (piVar7 == (int *)*(int *)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar8;
              *piVar8 = (int)piVar7;
            }
            else {
              piVar3 = (int *)piVar7[1];
              if (piVar7 == (int *)*piVar3) {
                *piVar3 = (int)piVar8;
                *piVar8 = (int)piVar7;
              }
              else {
                piVar3[2] = (int)piVar8;
                *piVar8 = (int)piVar7;
              }
            }
LAB_00c8a7d7:
            piVar7[1] = (int)piVar8;
            break;
          }
        }
        else {
          if ((char)piVar7[4] == '\0') {
            *(undefined1 *)(piVar7 + 4) = 1;
            *(undefined1 *)(piVar6[1] + 0x10) = 0;
            piVar7 = (int *)piVar6[1];
            iVar2 = *piVar7;
            *piVar7 = *(int *)(iVar2 + 8);
            if (*(int *)(iVar2 + 8) != *(int *)((int)this + 8)) {
              *(int **)(*(int *)(iVar2 + 8) + 4) = piVar7;
            }
            *(int *)(iVar2 + 4) = piVar7[1];
            if (piVar7 == *(int **)(*(int *)((int)this + 4) + 4)) {
              *(int *)(*(int *)((int)this + 4) + 4) = iVar2;
            }
            else {
              piVar8 = (int *)piVar7[1];
              if (piVar7 == (int *)piVar8[2]) {
                piVar8[2] = iVar2;
              }
              else {
                *piVar8 = iVar2;
              }
            }
            *(int **)(iVar2 + 8) = piVar7;
            piVar7[1] = iVar2;
            piVar7 = *(int **)piVar6[1];
          }
          if ((*(char *)(piVar7[2] + 0x10) != '\x01') || (*(char *)(*piVar7 + 0x10) != '\x01')) {
            if (*(char *)(*piVar7 + 0x10) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0x10) = 1;
              piVar8 = (int *)piVar7[2];
              *(undefined1 *)(piVar7 + 4) = 0;
              piVar7[2] = *piVar8;
              if (*piVar8 != *(int *)((int)this + 8)) {
                *(int **)(*piVar8 + 4) = piVar7;
              }
              piVar8[1] = piVar7[1];
              if (piVar7 == *(int **)(*(int *)((int)this + 4) + 4)) {
                *(int **)(*(int *)((int)this + 4) + 4) = piVar8;
              }
              else {
                piVar3 = (int *)piVar7[1];
                if (piVar7 == (int *)*piVar3) {
                  *piVar3 = (int)piVar8;
                }
                else {
                  piVar3[2] = (int)piVar8;
                }
              }
              *piVar8 = (int)piVar7;
              piVar7[1] = (int)piVar8;
              piVar7 = *(int **)piVar6[1];
            }
            *(undefined1 *)(piVar7 + 4) = *(undefined1 *)(piVar6[1] + 0x10);
            *(undefined1 *)(piVar6[1] + 0x10) = 1;
            *(undefined1 *)(*piVar7 + 0x10) = 1;
            piVar7 = (int *)piVar6[1];
            piVar8 = (int *)*piVar7;
            *piVar7 = piVar8[2];
            if (piVar8[2] != *(int *)((int)this + 8)) {
              *(int **)(piVar8[2] + 4) = piVar7;
            }
            piVar8[1] = piVar7[1];
            if (piVar7 == *(int **)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar8;
            }
            else {
              puVar4 = (undefined4 *)piVar7[1];
              if (piVar7 == (int *)puVar4[2]) {
                puVar4[2] = piVar8;
              }
              else {
                *puVar4 = piVar8;
              }
            }
            piVar8[2] = (int)piVar7;
            goto LAB_00c8a7d7;
          }
        }
        *(undefined1 *)(piVar7 + 4) = 0;
        piVar6 = (int *)piVar6[1];
      } while (piVar6 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 4) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4);
}


//// FUNCTION FUN_00c8a810 @ 00c8a810 ////

void __thiscall FUN_00c8a810(void *this,void *param_1)

{
  if (param_1 != *(void **)((int)this + 8)) {
    FUN_00c8a810(this,*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00c8a850 @ 00c8a850 ////

void __fastcall FUN_00c8a850(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  
  pvVar2 = operator_new(0x14);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x10) = 1;
  *(undefined1 *)((int)pvVar2 + 0x11) = 0;
  *(void **)(param_1 + 8) = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x11) = 1;
  **(undefined4 **)(param_1 + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
  uVar1 = *(undefined4 *)(param_1 + 8);
  pvVar2 = operator_new(0x14);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x10) = 0;
  *(undefined1 *)((int)pvVar2 + 0x11) = 0;
  *(void **)(param_1 + 4) = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_00c8a8b0 @ 00c8a8b0 ////

void __thiscall FUN_00c8a8b0(void *this,undefined4 *param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar3 = operator_new(0x14);
  piVar3[1] = (int)param_3;
  *(undefined1 *)(piVar3 + 4) = 0;
  *(undefined1 *)((int)piVar3 + 0x11) = 0;
  *piVar3 = *(int *)((int)this + 8);
  piVar3[2] = *(int *)((int)this + 8);
  FUN_00c8add0(piVar3 + 3,param_4);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  if (((param_3 == *(int **)((int)this + 4)) || (param_2 != *(int *)((int)this + 8))) ||
     (*param_4 < (uint)param_3[3])) {
    *param_3 = (int)piVar3;
    piVar4 = *(int **)((int)this + 4);
    if (param_3 == piVar4) {
      piVar4[1] = (int)piVar3;
      *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
    }
    else if (param_3 == (int *)*piVar4) {
      *piVar4 = (int)piVar3;
    }
  }
  else {
    param_3[2] = (int)piVar3;
    if (param_3 == *(int **)(*(int *)((int)this + 4) + 8)) {
      *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
    }
  }
  piVar4 = piVar3;
  if (piVar3 != *(int **)(*(int *)((int)this + 4) + 4)) {
    do {
      piVar5 = (int *)piVar4[1];
      if ((char)piVar5[4] != '\0') break;
      piVar6 = *(int **)piVar5[1];
      if (piVar5 == piVar6) {
        iVar1 = ((undefined4 *)piVar5[1])[2];
        if (*(char *)(iVar1 + 0x10) == '\0') {
          *(undefined1 *)(piVar5 + 4) = 1;
          *(undefined1 *)(iVar1 + 0x10) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x10) = 0;
          piVar4 = *(int **)(piVar4[1] + 4);
        }
        else {
          if (piVar4 == (int *)piVar5[2]) {
            piVar4 = (int *)piVar5[2];
            piVar5[2] = *piVar4;
            if (*piVar4 != *(int *)((int)this + 8)) {
              *(int **)(*piVar4 + 4) = piVar5;
            }
            piVar4[1] = piVar5[1];
            if (piVar5 == *(int **)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar4;
            }
            else {
              piVar6 = (int *)piVar5[1];
              if (piVar5 == (int *)*piVar6) {
                *piVar6 = (int)piVar4;
              }
              else {
                piVar6[2] = (int)piVar4;
              }
            }
            *piVar4 = (int)piVar5;
            piVar5[1] = (int)piVar4;
            piVar4 = piVar5;
          }
          *(undefined1 *)(piVar4[1] + 0x10) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x10) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)*piVar5;
          *piVar5 = piVar6[2];
          if (piVar6[2] != *(int *)((int)this + 8)) {
            *(int **)(piVar6[2] + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)((int)this + 4) + 4)) {
            *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            piVar2 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar2[2]) {
              piVar2[2] = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
            else {
              *piVar2 = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
          }
LAB_00c8aad3:
          piVar5[1] = (int)piVar6;
        }
      }
      else {
        if ((char)piVar6[4] != '\0') {
          if (piVar4 == (int *)*piVar5) {
            iVar1 = *piVar5;
            *piVar5 = *(int *)(iVar1 + 8);
            if (*(int *)(iVar1 + 8) != *(int *)((int)this + 8)) {
              *(int **)(*(int *)(iVar1 + 8) + 4) = piVar5;
            }
            *(int *)(iVar1 + 4) = piVar5[1];
            if (piVar5 == *(int **)(*(int *)((int)this + 4) + 4)) {
              *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
            }
            else {
              piVar4 = (int *)piVar5[1];
              if (piVar5 == (int *)piVar4[2]) {
                piVar4[2] = iVar1;
              }
              else {
                *piVar4 = iVar1;
              }
            }
            *(int **)(iVar1 + 8) = piVar5;
            piVar5[1] = iVar1;
            piVar4 = piVar5;
          }
          *(undefined1 *)(piVar4[1] + 0x10) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x10) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)piVar5[2];
          piVar5[2] = *piVar6;
          if (*piVar6 != *(int *)((int)this + 8)) {
            *(int **)(*piVar6 + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)((int)this + 4) + 4)) {
            *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
          }
          else {
            piVar2 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar2) {
              *piVar2 = (int)piVar6;
            }
            else {
              piVar2[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar5;
          goto LAB_00c8aad3;
        }
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(piVar6 + 4) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x10) = 0;
        piVar4 = *(int **)(piVar4[1] + 4);
      }
    } while (piVar4 != *(int **)(*(int *)((int)this + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x10) = 1;
  *param_1 = piVar3;
  return;
}


//// FUNCTION FUN_00c8ab00 @ 00c8ab00 ////

void FUN_00c8ab00(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00c8ab30 @ 00c8ab30 ////

void FUN_00c8ab30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00c8ab60 @ 00c8ab60 ////

void FUN_00c8ab60(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00c8ab90 @ 00c8ab90 ////

void FUN_00c8ab90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00c8abc0 @ 00c8abc0 ////

void FUN_00c8abc0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00c8abf0 @ 00c8abf0 ////

void __thiscall FUN_00c8abf0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*piVar1 != *(int *)((int)this + 8)) {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*(int *)((int)this + 4) + 4)) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}


//// FUNCTION FUN_00c8ac40 @ 00c8ac40 ////

void __thiscall FUN_00c8ac40(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 8) != *(int *)((int)this + 8)) {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(*(int *)((int)this + 4) + 4)) {
    *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}


//// FUNCTION FUN_00c8aca0 @ 00c8aca0 ////

void FUN_00c8aca0(undefined4 param_1,undefined1 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x14);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined1 *)((int)pvVar1 + 0x10) = param_2;
  *(undefined1 *)((int)pvVar1 + 0x11) = 0;
  return;
}


//// FUNCTION FUN_00c8acc0 @ 00c8acc0 ////

void __fastcall FUN_00c8acc0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (((char)piVar4[4] == '\0') && (*(int **)(piVar4[1] + 4) == piVar4)) {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x11) != '\0') {
    piVar4 = (int *)piVar4[1];
    if (*param_1 == *piVar4) {
      do {
        *param_1 = (int)piVar4;
        piVar4 = (int *)piVar4[1];
      } while (*param_1 == *piVar4);
    }
    *param_1 = (int)piVar4;
    return;
  }
  cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x11);
  iVar3 = *(int *)(iVar2 + 8);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x11);
    iVar2 = iVar3;
    iVar3 = *(int *)(iVar3 + 8);
  }
  *param_1 = iVar2;
  return;
}


//// FUNCTION FUN_00c8ad20 @ 00c8ad20 ////

void __fastcall FUN_00c8ad20(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = *(int **)(*param_1 + 8);
  if (*(char *)((int)piVar2 + 0x11) != '\0') {
    iVar4 = *(int *)(*param_1 + 4);
    if (*param_1 == *(int *)(iVar4 + 8)) {
      do {
        *param_1 = iVar4;
        iVar4 = *(int *)(iVar4 + 4);
      } while (*param_1 == *(int *)(iVar4 + 8));
    }
    if (*(int *)(*param_1 + 8) != iVar4) {
      *param_1 = iVar4;
    }
    return;
  }
  cVar1 = *(char *)(*piVar2 + 0x11);
  piVar3 = (int *)*piVar2;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar3 + 0x11);
    piVar2 = piVar3;
    piVar3 = (int *)*piVar3;
  }
  *param_1 = (int)piVar2;
  return;
}


//// FUNCTION FUN_00c8ad70 @ 00c8ad70 ////

void __cdecl FUN_00c8ad70(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00c8ada0 @ 00c8ada0 ////

void __cdecl FUN_00c8ada0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00c8add0 @ 00c8add0 ////

void __cdecl FUN_00c8add0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}


//// FUNCTION FUN_00c8adf0 @ 00c8adf0 ////

void __cdecl FUN_00c8adf0(undefined2 *param_1,undefined2 *param_2)

{
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}


//// FUNCTION FUN_00c8ae10 @ 00c8ae10 ////

void __cdecl FUN_00c8ae10(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}


//// FUNCTION FUN_00c8ae30 @ 00c8ae30 ////

void __cdecl FUN_00c8ae30(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}


//// FUNCTION FUN_00c8ae90 @ 00c8ae90 ////

void FUN_00c8ae90(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_2;
  piVar3 = &DAT_00dafa9c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = param_2;
    piVar3 = &DAT_00daf44c;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      FUN_00c8db00(param_1,param_2,param_3);
      return;
    }
  }
  (**(code **)(*param_1 + 0x24))(param_2,param_3);
  return;
}


//// FUNCTION FUN_00c8aee0 @ 00c8aee0 ////

void __fastcall FUN_00c8aee0(int param_1)

{
  int iVar1;
  DWORD DVar2;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  tagMSG local_1c;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  while (iVar1 != 0) {
    PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
    Sleep(1);
    iVar1 = *(int *)(param_1 + 0xb4);
  }
  DVar2 = GetQueueStatus(8);
  if ((DVar2 >> 0x10 & 8) != 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0;
    DVar2 = GetCurrentThreadId();
    PostThreadMessageA(DVar2,Msg,wParam,lParam);
  }
  return;
}


//// FUNCTION FUN_00c8afb0 @ 00c8afb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00c8afb0(int param_1,ushort *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  iVar1 = FUN_00c93bc0(param_2,(ushort *)&DAT_00d73f30);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x1c))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)(iVar1 + 0xc);
      *param_3 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
    *param_3 = 0;
    (**(code **)(_DAT_00000000 + 4))(0);
    return 0;
  }
  *param_3 = 0;
  return 0x80040216;
}


//// FUNCTION FUN_00c8b030 @ 00c8b030 ////

undefined4 __fastcall FUN_00c8b030(int *param_1)

{
  if (param_1[0x14] != 0) {
    FUN_00c97870(param_1[0x14]);
  }
  (**(code **)(*param_1 + 0x28))(1);
  return 0;
}


//// FUNCTION FUN_00c8b060 @ 00c8b060 ////

undefined4 __fastcall FUN_00c8b060(int *param_1)

{
  if (param_1[0x14] != 0) {
    FUN_00c97870(param_1[0x14]);
  }
  (**(code **)(*param_1 + 0x70))();
  return 0;
}


//// FUNCTION FUN_00c8b110 @ 00c8b110 ////

bool __fastcall FUN_00c8b110(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x18))(*(int **)(param_1 + 0x18),iVar1);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  ResetEvent(*(HANDLE *)(param_1 + 0x54));
  return iVar1 == 0;
}


//// FUNCTION FUN_00c8b140 @ 00c8b140 ////

bool __thiscall FUN_00c8b140(void *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  if (param_1 != 0) {
    puVar3 = local_8;
    puVar2 = local_10;
    iVar1 = (**(code **)(*(int *)this + 0x58))(param_1,puVar2,puVar3);
    if (-1 < iVar1) {
      if (iVar1 == 0) {
        SetEvent(*(HANDLE *)((int)this + 0x54));
        return true;
      }
      iVar1 = (**(code **)(**(int **)((int)this + 0x18) + 0x10))
                        (*(int **)((int)this + 0x18),*(undefined4 *)((int)this + 0x20),
                         *(undefined4 *)((int)this + 0x24),puVar2,puVar3,
                         *(undefined4 *)((int)this + 0x54),(int)this + 0x68);
      return -1 < iVar1;
    }
  }
  return false;
}


//// FUNCTION FUN_00c8b200 @ 00c8b200 ////

bool __fastcall FUN_00c8b200(int param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  iVar1 = *(int *)(param_1 + 0x6c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  return iVar1 != 0;
}


//// FUNCTION FUN_00c8b230 @ 00c8b230 ////

undefined4 __fastcall FUN_00c8b230(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06058;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  piVar1 = *(int **)(param_1 + 0x6c);
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  ExceptionList = pvStack_c;
  return uVar2;
}


//// FUNCTION FUN_00c8b290 @ 00c8b290 ////

undefined4 __fastcall FUN_00c8b290(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06078;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  piVar1 = *(int **)(param_1 + 0x6c);
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION FUN_00c8b300 @ 00c8b300 ////

void __fastcall FUN_00c8b300(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06098;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  local_4 = 0;
  if (param_1[0x30] != 0) {
    param_1[0x30] = 0;
    (**(code **)(*param_1 + 0x60))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c8b360 @ 00c8b360 ////

undefined4 __fastcall FUN_00c8b360(void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d060b8;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x94);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (*(int *)((int)param_1 + 100) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0xc0) = 0;
  if (*(int **)((int)param_1 + 0x50) != (int *)0x0) {
    FUN_00c978a0(*(int **)((int)param_1 + 0x50));
  }
  *(undefined4 *)((int)param_1 + 0x74) = 1;
  uVar1 = FUN_00c8de20(param_1,1,0,(int)param_1 + 0xc);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00c8b400 @ 00c8b400 ////

void __fastcall FUN_00c8b400(int param_1)

{
  if (*(UINT *)(param_1 + 0xc0) != 0) {
    timeKillEvent(*(UINT *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}


//// FUNCTION FUN_00c8b420 @ 00c8b420 ////

undefined4 __fastcall FUN_00c8b420(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d060d8;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x25);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (param_1[0x19] != 1) {
    param_1[0x19] = 1;
    timeBeginPeriod(1);
    (**(code **)(*param_1 + 0x40))();
    if (param_1[0x1b] == 0) {
      uVar1 = (**(code **)(*param_1 + 0x60))();
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = pvStack_c;
      return uVar1;
    }
    iVar2 = (**(code **)(*param_1 + 0x54))(param_1[0x1b]);
    if (iVar2 == 0) {
      SetEvent((HANDLE)param_1[0x15]);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION FUN_00c8b4d0 @ 00c8b4d0 ////

undefined4 __fastcall FUN_00c8b4d0(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d060f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  local_4 = 0;
  param_1[0x1d] = 0;
  if (param_1[0x19] == 1) {
    param_1[0x19] = 0;
    (**(code **)(*param_1 + 0x44))();
    timeEndPeriod(1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION FUN_00c8b540 @ 00c8b540 ////

void __thiscall FUN_00c8b540(void *this,undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  *(undefined4 *)((int)this + 0xb0) = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  return;
}


//// FUNCTION FUN_00c8b5e0 @ 00c8b5e0 ////

undefined4 * __thiscall FUN_00c8b5e0(void *this,int param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_00c92400(this,0,param_1,param_1 + 0x7c,param_2,param_3);
  *(int *)((int)this + 0xd8) = param_1;
  *(undefined ***)this = &PTR_LAB_00dad9a0;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00dad958;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00dad944;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_00dad920;
  return this;
}


//// FUNCTION FUN_00c8b630 @ 00c8b630 ////

int FUN_00c8b630(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06120;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  local_4 = 0;
  EnterCriticalSection(lpCriticalSection_00);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x38))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x68))();
    if (-1 < iVar1) {
      iVar1 = FUN_00c8e7d0();
    }
  }
  LeaveCriticalSection(lpCriticalSection_00);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_c;
  return iVar1;
}


//// FUNCTION FUN_00c8b6d0 @ 00c8b6d0 ////

undefined4 FUN_00c8b6d0(int param_1)

{
  undefined4 uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06140;
  pvStack_c = ExceptionList;
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection_00);
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  local_4 = 0;
  EnterCriticalSection(lpCriticalSection);
  local_4._0_1_ = 1;
  FUN_00c8f080(param_1);
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x84))();
  local_4 = (uint)local_4._1_3_ << 8;
  LeaveCriticalSection(lpCriticalSection);
  uVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 100))();
  LeaveCriticalSection(lpCriticalSection_00);
  ExceptionList = pvStack_c;
  return uVar1;
}


//// FUNCTION FUN_00c8b770 @ 00c8b770 ////

int FUN_00c8b770(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06160;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  local_4 = 0;
  EnterCriticalSection(lpCriticalSection_00);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x88))();
  if (-1 < iVar1) {
    iVar1 = FUN_00c8f0b0(param_1);
  }
  LeaveCriticalSection(lpCriticalSection_00);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_c;
  return iVar1;
}


//// FUNCTION FUN_00c8b810 @ 00c8b810 ////

void __fastcall FUN_00c8b810(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xd8) + 0x8c))();
  if (-1 < iVar1) {
    FUN_00c8edc0(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00c8b860 @ 00c8b860 ////

undefined4 FUN_00c8b860(undefined4 param_1,undefined4 *param_2)

{
  short *psVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  psVar1 = CoTaskMemAlloc(8);
  *param_2 = psVar1;
  if (psVar1 == (short *)0x0) {
    return 0x8007000e;
  }
  FUN_00c93b50(psVar1,(short *)&DAT_00d73f30);
  return 0;
}


//// FUNCTION FUN_00c8b910 @ 00c8b910 ////

void __fastcall FUN_00c8b910(int param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)(param_1 + 0x138) = 0xfffffc18;
  *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  DVar1 = timeGetTime();
  *(DWORD *)(param_1 + 0x158) = DVar1;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0xfffb6c20;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  return;
}


//// FUNCTION FUN_00c8b9f0 @ 00c8b9f0 ////

undefined4 __fastcall FUN_00c8b9f0(int param_1)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  *(DWORD *)(param_1 + 0x158) = DVar1 - *(int *)(param_1 + 0x158);
  return 0;
}


//// FUNCTION FUN_00c8ba30 @ 00c8ba30 ////

void FUN_00c8ba30(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c8ba3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + -8))();
  return;
}


//// FUNCTION FUN_00c8ba60 @ 00c8ba60 ////

void FUN_00c8ba60(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c8ba6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + -8) + 4))();
  return;
}


//// FUNCTION FUN_00c8bb80 @ 00c8bb80 ////

void FUN_00c8bb80(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c8bb8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + -8) + 8))();
  return;
}


//// FUNCTION FUN_00c8bbe0 @ 00c8bbe0 ////

void __fastcall FUN_00c8bbe0(int *param_1)

{
  param_1[0x3d] = 0;
  param_1[0x3e] = 5000000;
  (**(code **)(*param_1 + 0xb4))(param_1[0x54],param_1[0x55]);
  if (0 < param_1[0x3c]) {
                    /* WARNING: Could not recover jumptable at 0x00c8bc2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Sleep(param_1[0x3c] / 10000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c8bc3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(0);
  return;
}


//// FUNCTION FUN_00c8bc50 @ 00c8bc50 ////

void __fastcall FUN_00c8bc50(int *param_1)

{
  DWORD DVar1;
  
  (**(code **)(*param_1 + 0xb4))(param_1[0x54],param_1[0x55]);
  DVar1 = timeGetTime();
  param_1[0x3f] = DVar1;
  return;
}


//// FUNCTION FUN_00c8bc80 @ 00c8bc80 ////

void __fastcall FUN_00c8bc80(int param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  
  DVar2 = timeGetTime();
  iVar3 = (DVar2 - *(int *)(param_1 + 0xfc)) * 10000;
  if ((iVar3 < *(int *)(param_1 + 0xf4) * 2) || (iVar3 < *(int *)(param_1 + 0xf8) * 2)) {
    iVar1 = iVar3 + *(int *)(param_1 + 0xf4) * 3;
    *(int *)(param_1 + 0xf4) = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  }
  *(int *)(param_1 + 0xf8) = iVar3;
  if (0 < *(int *)(param_1 + 0xf0)) {
                    /* WARNING: Could not recover jumptable at 0x00c8bcea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Sleep(*(int *)(param_1 + 0xf0) / 10000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c8bcf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(0);
  return;
}


//// FUNCTION FUN_00c8bd50 @ 00c8bd50 ////

undefined4 __thiscall
FUN_00c8bd50(void *this,int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  
  iVar1 = *(int *)((int)this + 0x10c);
  if (iVar1 < 0) {
    bVar3 = false;
  }
  else {
    bVar3 = iVar1 <= *(int *)((int)this + 0xf4) * 2;
  }
  iVar8 = 1000;
  if (-1 < iVar1) {
    if (((int)param_2 < 0) || (((int)param_2 < 1 && (param_1 == (int *)0x0)))) {
      iVar7 = *(int *)((int)this + 0x108);
      if (((20000 < iVar7) &&
          ((0x7fffffff < param_2 && (((int)param_2 < -1 || (param_1 < (int *)0xffffb1e0)))))) &&
         ((iVar1 <= iVar7 ||
          ((iVar1 + 20000 <= iVar7 ||
           (iVar8 = (iVar1 / ((iVar1 - iVar7) + 20000)) * 1000, 2000 < iVar8)))))) {
        iVar8 = 2000;
      }
    }
    else {
      uVar10 = __alldiv((uint)param_1,param_2,10000,0);
      iVar8 = 1000 - (int)uVar10;
      if (iVar8 < 500) {
        iVar8 = 500;
      }
    }
  }
  uVar4 = *(int *)((int)this + 0xf4) / 2;
  bVar9 = CARRY4(uVar4,(uint)param_1);
  iVar7 = uVar4 + (int)param_1;
  iVar1 = ((int)uVar4 >> 0x1f) + param_2;
  if (*(int *)((int)this + 0xac) == 0) {
    param_1 = (int *)0x0;
    puVar2 = *(undefined4 **)(*(int *)((int)this + 0x78) + 0x18);
    iVar5 = (**(code **)*puVar2)(puVar2,&DAT_00daf3fc,&param_1);
    if (-1 < iVar5) {
      *(int **)((int)this + 0xac) = param_1;
    }
  }
  param_1 = *(int **)((int)this + 0xac);
  if (param_1 != (int *)0x0) {
    uVar6 = (**(code **)(*param_1 + 0xc))
                      (param_1,(int)this + 0xc,bVar3,iVar8,iVar7,iVar1 + (uint)bVar9,param_3,param_4
                      );
    return uVar6;
  }
  return 1;
}


//// FUNCTION FUN_00c8bec0 @ 00c8bec0 ////

uint __thiscall FUN_00c8bec0(void *this,uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  int unaff_EBP;
  int *piVar11;
  uint unaff_ESI;
  uint uStack_18;
  undefined1 *puStack_14;
  int local_10;
  uint uStack_c;
  
  uVar4 = param_2[1];
  uVar10 = *param_2;
  if ((-1 < (int)uVar4) && ((0 < (int)uVar4 || (79999 < uVar10)))) {
    *param_2 = uVar10 - 80000;
    param_2[1] = uVar4 - (uVar10 < 80000);
    uVar4 = *param_3;
    *param_3 = uVar4 - 80000;
    param_3[1] = (param_3[1] - 1) + (uint)(79999 < uVar4);
  }
  *(uint *)((int)this + 0x118) = *param_2;
  *(uint *)((int)this + 0x11c) = param_2[1];
  (**(code **)(**(int **)((int)this + 0x18) + 0xc))(*(int **)((int)this + 0x18),&local_10);
  uVar10 = uStack_18 - *(uint *)((int)this + 0x20);
  piVar11 = (int *)(((int)puStack_14 - *(int *)((int)this + 0x24)) -
                   (uint)(uStack_18 < *(uint *)((int)this + 0x20)));
  param_1 = uVar10 - *param_2;
  uVar4 = (int)piVar11 + (-(uint)(uVar10 < *param_2) - param_2[1]);
  if ((uVar4 < 0x80000000) || ((-2 < (int)uVar4 && (0xe2329aff < param_1)))) {
    if ((-1 < (int)uVar4) && ((0 < (int)uVar4 || (500000000 < param_1)))) {
      param_1 = 500000000;
    }
  }
  else {
    param_1 = 0xe2329b00;
  }
  iVar5 = (**(code **)(*(int *)this + 0xc0))(param_1,(int)param_1 >> 0x1f,uVar10,piVar11);
  *(uint *)((int)this + 0xec) = (uint)(iVar5 == 0);
  iVar7 = *(int *)((int)this + 0x110);
  local_10 = *param_3 - *param_2;
  iVar6 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
  if ((iVar7 + iVar6 < local_10) || (local_10 < iVar7 - iVar6)) {
    *(int *)((int)this + 0x10c) = local_10;
    *(int *)((int)this + 0x110) = local_10;
  }
  if ((((iVar5 == 0) == 0) || (iVar7 = (**(code **)(*piVar11 + 0x3c))(piVar11), iVar7 != 0)) &&
     (*(int *)((int)this + 0xe8) != -1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((int)uStack_c < 1) {
    iVar7 = *(int *)((int)this + 0x100);
    if ((iVar7 <= (int)uStack_c) || (bVar3)) {
      *(uint *)((int)this + 0x100) = uStack_c;
    }
    else {
      *(int *)((int)this + 0x100) = iVar7 - ((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3);
    }
  }
  else {
    *(undefined4 *)((int)this + 0x100) = 0;
  }
  if ((int)uStack_c < 0) {
    iVar7 = -uStack_c;
  }
  else {
    iVar7 = 0;
  }
  iVar5 = *(int *)((int)this + 0x108) * 3;
  iVar6 = (int)(iVar5 + iVar7 + (iVar5 + iVar7 >> 0x1f & 3U)) >> 2;
  puVar8 = (undefined1 *)(unaff_ESI - *(uint *)((int)this + 0x138));
  iVar7 = (unaff_EBP - *(int *)((int)this + 0x13c)) -
          (uint)(unaff_ESI < *(uint *)((int)this + 0x138));
  puStack_14 = puVar8;
  if ((-1 < iVar7) && ((0 < iVar7 || (&LAB_00989680 < puVar8)))) {
    puStack_14 = &LAB_00989680;
  }
  if (*(int *)((int)this + 0x10c) < *(int *)((int)this + 0xf4) * 3) {
    if (*(int *)((int)this + 0xec) == 0) {
      bVar2 = (int)(uStack_c * 2) < local_10;
    }
    else {
      bVar2 = (int)uStack_c <= local_10 * 4;
    }
    if ((((!bVar2) && (*(int *)((int)this + 0x108) < 0x13881)) && (iVar7 < 1)) &&
       ((iVar7 < 0 || (puVar8 < (undefined1 *)0x989681)))) {
      *(int *)((int)this + 0x108) = iVar6;
      *(undefined4 *)((int)this + 0xe8) = 0xffffffff;
      return 0x80004005;
    }
  }
  bVar2 = false;
  if ((bVar3) ||
     ((((int)(local_10 + (local_10 >> 0x1f & 0xfU)) >> 4) + local_10 < *(int *)((int)this + 0x10c)
      && (local_10 * -10 < (int)uStack_c)))) {
    bVar2 = true;
  }
  if ((-0x895441 < (int)uStack_c) && (bVar2)) {
    *(int *)((int)this + 0x108) = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
    *(int *)((int)this + 0x10c) =
         (int)(puStack_14 + *(int *)((int)this + 0x10c) * 3 +
              ((int)(puStack_14 + *(int *)((int)this + 0x10c) * 3) >> 0x1f & 3)) >> 2;
    *(uint *)((int)this + 0x138) = unaff_ESI;
    *(undefined4 *)((int)this + 0xe8) = 0;
    *(uint *)((int)this + 0x150) = uStack_c;
    *(undefined1 **)((int)this + 0x154) = puStack_14;
    *(int *)((int)this + 0x13c) = unaff_EBP;
    if ((int)uStack_c < *(int *)((int)this + 0x100)) {
      *(uint *)((int)this + 0x100) = uStack_c;
    }
    return 0;
  }
  *(int *)((int)this + 0xe8) = *(int *)((int)this + 0xe8) + 1;
  *(int *)((int)this + 0x10c) = local_10;
  uVar4 = *(uint *)((int)this + 0x100);
  if ((int)*(uint *)((int)this + 0x100) < -local_10) {
    uVar4 = -local_10;
  }
  param_2[1] = param_2[1] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(*param_2,uVar4);
  *param_2 = *param_2 + uVar4;
  uVar4 = (uint)(0 < (int)-uStack_c);
  *(int *)((int)this + 0x108) = iVar6;
  if (uVar4 == 1) {
    uVar10 = *param_2;
    uVar1 = param_2[1];
    puStack_14 = (undefined1 *)(uVar10 - *(uint *)((int)this + 0x138));
    uVar9 = (uVar1 - *(int *)((int)this + 0x13c)) - (uint)(uVar10 < *(uint *)((int)this + 0x138));
    if ((uVar9 < 0x80000000) || ((-2 < (int)uVar9 && ((undefined1 *)0xe2329aff < puStack_14)))) {
      if (((int)uVar9 < 0) || (((int)uVar9 < 1 && (puStack_14 < (undefined1 *)0x1dcd6501)))) {
        *(uint *)((int)this + 0x13c) = uVar1;
        *(uint *)((int)this + 0x138) = uVar10;
      }
      else {
        *(uint *)((int)this + 0x13c) = uVar1;
        puStack_14 = (undefined1 *)0x1dcd6500;
        *(uint *)((int)this + 0x138) = uVar10;
      }
    }
    else {
      *(uint *)((int)this + 0x13c) = uVar1;
      puStack_14 = (undefined1 *)0xe2329b00;
      *(uint *)((int)this + 0x138) = uVar10;
    }
  }
  else {
    *(uint *)((int)this + 0x138) = unaff_ESI;
    *(int *)((int)this + 0x13c) = unaff_EBP;
  }
  if (0 < (int)-uStack_c) {
    uStack_c = *param_2 - *(uint *)((int)this + 0x118);
    uVar10 = (param_2[1] - *(int *)((int)this + 0x11c)) -
             (uint)(*param_2 < *(uint *)((int)this + 0x118));
    if ((uVar10 < 0x80000000) || ((-2 < (int)uVar10 && (0xe2329aff < uStack_c)))) {
      if ((-1 < (int)uVar10) && ((0 < (int)uVar10 || (500000000 < uStack_c)))) {
        uStack_c = 500000000;
      }
    }
    else {
      uStack_c = 0xe2329b00;
    }
  }
  *(uint *)((int)this + 0x150) = uStack_c;
  *(undefined1 **)((int)this + 0x154) = puStack_14;
  return uVar4;
}


//// FUNCTION FUN_00c8c3c0 @ 00c8c3c0 ////

undefined4 FUN_00c8c3c0(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -100));
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -100));
  return 0;
}


//// FUNCTION FUN_00c8c410 @ 00c8c410 ////

undefined4 FUN_00c8c410(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -100));
  *param_2 = *(undefined4 *)(param_1 + 0x44);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -100));
  return 0;
}


//// FUNCTION FUN_00c8c460 @ 00c8c460 ////

undefined4 FUN_00c8c460(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  DWORD DVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + -100);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + -0x7c) == 0) {
    iVar2 = *(int *)(param_1 + 0x78);
  }
  else {
    DVar1 = timeGetTime();
    iVar2 = DVar1 - *(int *)(param_1 + 0x78);
  }
  if (iVar2 < 1) {
    *param_2 = 0;
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  iVar2 = MulDiv(100000,*(int *)(param_1 + 0x44),iVar2);
  *param_2 = iVar2;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


//// FUNCTION FUN_00c8c4e0 @ 00c8c4e0 ////

undefined4 FUN_00c8c4e0(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + -100);
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(param_1 + -200) != 0) && (1 < *(int *)(param_1 + 0x44))) {
    uVar1 = *(int *)(param_1 + 0x44) - 1;
    uVar2 = __alldiv(*(uint *)(param_1 + 0x48),*(uint *)(param_1 + 0x4c),uVar1,(int)uVar1 >> 0x1f);
    *param_2 = (int)uVar2;
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *param_2 = 0;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


//// FUNCTION Math_IntegerSqrt @ 00c8c550 ////

int Math_IntegerSqrt(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x40000000 < param_1) {
    return 0x8000;
  }
  if (1 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 * iVar1 < param_1);
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = (iVar1 * iVar1 + param_1) / (iVar1 * 2);
  if ((-1 < iVar1) && (iVar1 = (iVar1 * iVar1 + param_1) / (iVar1 * 2), -1 < iVar1)) {
    iVar1 = (iVar1 * iVar1 + param_1) / (iVar1 * 2);
  }
  return iVar1;
}


//// FUNCTION FUN_00c8c5c0 @ 00c8c5c0 ////

undefined4 __thiscall
FUN_00c8c5c0(void *this,uint param_1,int *param_2,uint param_3,int param_4,uint param_5,uint param_6
            )

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06178;
  local_c = ExceptionList;
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  local_4 = 0;
  if ((*(int *)((int)this + 0x18) == 0) || ((int)param_1 < 2)) {
    *param_2 = 0;
  }
  else {
    lVar2 = FUN_00c93db0(param_5,param_6,param_5,param_6,param_1,(int)param_1 >> 0x1f,0,0);
    uVar3 = __alldiv(param_3 - (uint)lVar2,
                     (param_4 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_3 < (uint)lVar2),
                     param_1 - 1,(int)(param_1 - 1) >> 0x1f);
    iVar1 = Math_IntegerSqrt((int)uVar3);
    *param_2 = iVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00c8c780 @ 00c8c780 ////

void FUN_00c8c780(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *unaff_ESI;
  
  puVar1 = param_2;
  if ((param_2 == (undefined4 *)0x0) && (param_1[0xd] != 0)) {
    (**(code **)*param_1)(param_1,&riid_00daf4dc,&param_2);
    FUN_00c8de20(param_1 + -3,0x15,unaff_ESI,0);
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  FUN_00c8dd40((int)param_1,puVar1,param_3);
  return;
}


//// FUNCTION FUN_00c8c830 @ 00c8c830 ////

undefined4 * __thiscall FUN_00c8c830(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d061ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c929e0(this,param_2,param_3,(LPCRITICAL_SECTION)((int)this + 0x7c),param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00dada30;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00dad9f0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00dad9dc;
  *(undefined4 *)((int)this + 0x50) = 0;
  FUN_00c93a60((void *)((int)this + 0x54),0);
  local_4._0_1_ = 1;
  FUN_00c93a60((void *)((int)this + 0x58),1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00c93a60((undefined4 *)((int)this + 0x5c),1);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 1;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc4));
  SetEvent(*(HANDLE *)((int)this + 0x5c));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c8c970 @ 00c8c970 ////

void __fastcall FUN_00c8c970(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d06210;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00dada30;
  param_1[3] = (int)&PTR_FUN_00dad9f0;
  param_1[4] = (int)&PTR_LAB_00dad9dc;
  local_4 = 6;
  FUN_00c8b4d0(param_1);
  FUN_00c8b290((int)param_1);
  if (param_1[0x14] != 0) {
    (**(code **)(*(int *)(param_1[0x14] + 8) + 0xc))(1);
    param_1[0x14] = 0;
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 0xc))(1);
    param_1[0x1e] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  local_4._0_1_ = 2;
  FUN_00c93a80(param_1 + 0x17);
  local_4._0_1_ = 1;
  FUN_00c93a80(param_1 + 0x16);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00c93a80(param_1 + 0x15);
  local_4 = 0xffffffff;
  FUN_00c90d30((int)param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c8ca50 @ 00c8ca50 ////

undefined4 __thiscall FUN_00c8ca50(void *this,undefined4 param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  void *local_18;
  LPCRITICAL_SECTION local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06233;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc4);
  ExceptionList = &pvStack_c;
  local_14 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)((int)this + 0x50);
  local_4 = 0;
  if (iVar2 == 0) {
    local_18 = (void *)0x0;
    this_00 = operator_new(0x50);
    local_4._0_1_ = 1;
    local_10 = this_00;
    if (this_00 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar2 = (**(code **)(*(int *)this + 0x1c))(0);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + 0xc;
      }
      puVar3 = FUN_00c99790(this_00,0,*(int *)((int)this + 4),&local_18,iVar2);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *(undefined4 **)((int)this + 0x50) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = pvStack_c;
      return 0x8007000e;
    }
    if ((int)local_18 < 0) {
      (**(code **)(puVar3[2] + 0xc))(1);
      *(undefined4 *)((int)this + 0x50) = 0;
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_10;
      return 0x80004002;
    }
    uVar1 = (**(code **)(*(int *)this + 0x24))(param_1,param_2);
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(iVar2 + 8))(iVar2 + 8,param_1,param_2);
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_18;
  return uVar1;
}


//// FUNCTION FUN_00c8cbb0 @ 00c8cbb0 ////

undefined4 __fastcall FUN_00c8cbb0(int *param_1)

{
  DWORD DVar1;
  HANDLE local_8;
  int local_4;
  
  local_4 = param_1[0x15];
  local_8 = (HANDLE)param_1[0x16];
  (**(code **)(*param_1 + 0x48))();
  do {
    DVar1 = WaitForMultipleObjects(2,&local_8,0,10000);
  } while (DVar1 == 0x102);
  (**(code **)(*param_1 + 0x4c))();
  if (DVar1 == 0) {
    return 0x80040223;
  }
  param_1[0x1a] = 0;
  return 0;
}


//// FUNCTION FUN_00c8cc20 @ 00c8cc20 ////

undefined4 FUN_00c8cc20(int param_1,uint param_2,undefined4 *param_3)

{
  DWORD DVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  DVar1 = LH_DirectShow_MessagePump(*(HANDLE *)(param_1 + 0x50),param_2,(HWND)0x0,0,0);
  if (DVar1 == 0x102) {
    *param_3 = *(undefined4 *)(param_1 + 8);
    return 0x40237;
  }
  *param_3 = *(undefined4 *)(param_1 + 8);
  return 0;
}


//// FUNCTION FUN_00c8cc70 @ 00c8cc70 ////

undefined4 __thiscall FUN_00c8cc70(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)this + 0x78) + 0x18) != 0) {
    if (*(int *)((int)this + 0x70) == 1) {
      SetEvent(*(HANDLE *)((int)this + 0x5c));
      return 0;
    }
    iVar1 = (**(code **)(*(int *)this + 0xa0))();
    if ((iVar1 != 1) || (param_1 == 0)) {
      ResetEvent(*(HANDLE *)((int)this + 0x5c));
      return 1;
    }
  }
  SetEvent(*(HANDLE *)((int)this + 0x5c));
  return 0;
}


//// FUNCTION FUN_00c8cdb0 @ 00c8cdb0 ////

int FUN_00c8cdb0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06268;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 1) {
    iVar3 = (**(code **)(*(int *)(param_1 + -0xc) + 0x30))(1);
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x6c) + 0x18) == 0) {
      *(undefined4 *)(param_1 + 8) = 1;
      iVar3 = (**(code **)(*(int *)(param_1 + -0xc) + 0x30))(1);
    }
    else {
      iVar3 = FUN_00c90f50(param_1);
      if (-1 < iVar3) {
        piVar1 = (int *)(param_1 + -0xc);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
        *(undefined4 *)(param_1 + 0xa4) = 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
        (**(code **)(*piVar1 + 0x80))();
        (**(code **)(*piVar1 + 0x28))(1);
        (**(code **)(*piVar1 + 0x6c))();
        if (*(UINT *)(param_1 + 0xb4) != 0) {
          timeKillEvent(*(UINT *)(param_1 + 0xb4));
          *(undefined4 *)(param_1 + 0xb4) = 0;
        }
        piVar2 = *(int **)(*(int *)(param_1 + 0x6c) + 0x9c);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x14))(piVar2);
        }
        if (unaff_retaddr == 0) {
          *(undefined4 *)(param_1 + 0x54) = 0;
          (**(code **)(*piVar1 + 0x70))();
        }
        iVar3 = (**(code **)(*piVar1 + 0x30))(unaff_retaddr);
        LeaveCriticalSection(lpCriticalSection);
        ExceptionList = pvStack_c;
        return iVar3;
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  ExceptionList = pvStack_c;
  return iVar3;
}


//// FUNCTION FUN_00c8cef0 @ 00c8cef0 ////

int FUN_00c8cef0(int *param_1,int param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  int unaff_retaddr;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06288;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (param_1[2] != 2) {
    if (*(int *)(param_1[0x1b] + 0x18) != 0) {
      SetEvent((HANDLE)param_1[0x14]);
      iVar2 = FUN_00c91010(param_1,param_2,param_3);
      if (iVar2 < 0) {
        LeaveCriticalSection(lpCriticalSection);
        ExceptionList = local_c;
        return iVar2;
      }
      (**(code **)(param_1[-3] + 0x28))(1);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
      param_1[0x29] = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
      piVar1 = *(int **)(param_1[0x1b] + 0x9c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))(piVar1);
      }
      if (unaff_retaddr == 0) {
        param_1[0x15] = 0;
        (**(code **)(param_1[-3] + 0x70))();
      }
      iVar2 = (**(code **)(param_1[-3] + 0x7c))();
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = lpCriticalSection;
      return iVar2;
    }
    FUN_00c8de20(param_1 + -3,1,0,-(uint)(param_1 != (int *)0xc) & (uint)param_1);
    param_1[2] = 2;
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00c8d030 @ 00c8d030 ////

undefined4 __thiscall FUN_00c8d030(void *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  void *this_00;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d062b3;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc4);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x78) != 0) {
LAB_00c8d0df:
      uVar1 = *(undefined4 *)((int)this + 0x78);
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return uVar1;
    }
    param_1 = 0;
    this_00 = operator_new(0xe0);
    local_4._0_1_ = 1;
    if (this_00 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00c8b5e0(this_00,(int)this,&param_1,&DAT_00d73f30);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *(int **)((int)this + 0x78) = piVar2;
    if (piVar2 != (int *)0x0) {
      if (-1 < param_1) goto LAB_00c8d0df;
      (**(code **)(*piVar2 + 0xc))(1);
      *(undefined4 *)((int)this + 0x78) = 0;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00c8d100 @ 00c8d100 ////

undefined4 __fastcall FUN_00c8d100(int *param_1)

{
  if ((param_1[5] != 0) && (param_1[0x1c] = 1, param_1[0x1b] == 0)) {
    SetEvent((HANDLE)param_1[0x17]);
    if (param_1[0x19] != 0) {
      (**(code **)(*param_1 + 0x60))();
    }
  }
  return 0;
}


//// FUNCTION FUN_00c8d140 @ 00c8d140 ////

undefined4 __fastcall FUN_00c8d140(int *param_1)

{
  if (param_1[5] == 1) {
    ResetEvent((HANDLE)param_1[0x17]);
  }
  (**(code **)(*param_1 + 0x28))(0);
  (**(code **)(*param_1 + 0x6c))();
  (**(code **)(*param_1 + 0x70))();
  FUN_00c8aee0((int)param_1);
  return 0;
}


//// FUNCTION FUN_00c8d180 @ 00c8d180 ////

int __fastcall FUN_00c8d180(int *param_1)

{
  int iVar1;
  
  param_1[0x18] = 0;
  if (param_1[5] == 2) {
    iVar1 = (**(code **)(*param_1 + 0x7c))();
    if (-1 < iVar1) {
      FUN_00c8b540(param_1,0);
      return 0;
    }
  }
  else {
    FUN_00c8b540(param_1,1);
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00c8d1c0 @ 00c8d1c0 ////

undefined4 __fastcall FUN_00c8d1c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x2b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2b] = 0;
  }
  if (*(int *)(param_1[0x1e] + 0x18) == 0) {
    return 1;
  }
  if ((param_1[5] != 0) && (*(char *)(param_1[0x1e] + 0x25) == '\0')) {
    return 0x80040224;
  }
  FUN_00c8b540(param_1,0);
  (**(code **)(*param_1 + 100))();
  (**(code **)(*param_1 + 0x70))();
  param_1[0x18] = 0;
  if (param_1[5] == 2) {
    (**(code **)(*param_1 + 0x80))();
  }
  return 0;
}


//// FUNCTION FUN_00c8d240 @ 00c8d240 ////

int __thiscall FUN_00c8d240(void *this,int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d062d0;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x7c);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  *(undefined4 *)((int)this + 0xb4) = 1;
  iVar1 = FUN_00c8ee00(*(int *)((int)this + 0x78) + 0x98,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0xb4) = 0;
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return -0x7fffbffb;
  }
  iVar1 = (*(int **)((int)this + 0x78))[0x33];
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x78) + 0x24))(iVar1);
    if (iVar1 < 0) {
      *(undefined4 *)((int)this + 0xb4) = 0;
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return iVar1;
    }
  }
  lpCriticalSection_00 = (LPCRITICAL_SECTION)((int)this + 0x94);
  EnterCriticalSection(lpCriticalSection_00);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (((*(int *)((int)this + 0x6c) == 0) && (*(int *)((int)this + 0x70) == 0)) &&
     (*(int *)((int)this + 0x60) == 0)) {
    if (*(void **)((int)this + 0x50) != (void *)0x0) {
      FUN_00c976c0(*(void **)((int)this + 0x50),param_1);
    }
    if (*(int *)((int)this + 100) == 1) {
      iVar1 = (**(code **)(*(int *)this + 0x54))(param_1);
      if (iVar1 == 0) {
        *(undefined4 *)((int)this + 0xb4) = 0;
        LeaveCriticalSection(lpCriticalSection_00);
        LeaveCriticalSection(lpCriticalSection);
        ExceptionList = local_c;
        return -0x7ffbfdd5;
      }
    }
    *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(*(int *)((int)this + 0x78) + 0xc0);
    *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(*(int *)((int)this + 0x78) + 0xc4);
    *(int **)((int)this + 0x6c) = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    if (*(int *)((int)this + 100) == 0) {
      FUN_00c8b540(this,1);
    }
    LeaveCriticalSection(lpCriticalSection_00);
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = lpCriticalSection;
    return 0;
  }
  SetEvent(*(HANDLE *)((int)this + 0x5c));
  *(undefined4 *)((int)this + 0xb4) = 0;
  LeaveCriticalSection(lpCriticalSection_00);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return -0x7fff0001;
}


//// FUNCTION FUN_00c8d590 @ 00c8d590 ////

undefined4 __fastcall FUN_00c8d590(void *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  MMRESULT MVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_8;
  int iStack_4;
  
  if (((*(int *)((int)param_1 + 0x70) != 0) && (*(int *)((int)param_1 + 0x74) == 0)) &&
     (*(int *)((int)param_1 + 0xc0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      uVar2 = *(uint *)((int)param_1 + 0x20);
      iVar3 = *(int *)((int)param_1 + 0x24);
      iVar4 = *(int *)((int)param_1 + 0xbc);
      uVar5 = *(uint *)((int)param_1 + 0xb8);
      uVar8 = uVar5 + uVar2;
      (**(code **)(*piVar1 + 0xc))(piVar1,&local_8);
      uVar9 = __alldiv(uVar8 - local_8,
                       ((iVar4 + iVar3 + (uint)CARRY4(uVar5,uVar2)) - iStack_4) -
                       (uint)(uVar8 < local_8),10000,0);
      if (0x31 < (int)(UINT)uVar9) {
        MVar6 = timeSetEvent((UINT)uVar9,10,&fptc_00c8d580,(DWORD_PTR)param_1,0);
        *(MMRESULT *)((int)param_1 + 0xc0) = MVar6;
        if (MVar6 != 0) {
          return 0;
        }
      }
    }
    uVar7 = FUN_00c8b360(param_1);
    return uVar7;
  }
  return 0;
}


//// FUNCTION FUN_00c8d630 @ 00c8d630 ////

undefined4 __fastcall FUN_00c8d630(int param_1)

{
  if (*(UINT *)(param_1 + 0xc0) != 0) {
    timeKillEvent(*(UINT *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  return 0;
}


//// FUNCTION FUN_00c8d680 @ 00c8d680 ////

void __fastcall FUN_00c8d680(void *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x94));
  local_4 = 0;
  if ((((*(int *)((int)param_1 + 0x60) == 0) &&
       (iVar1 = *(int *)((int)param_1 + 0x78), *(int *)(iVar1 + 0x18) != 0)) &&
      (*(char *)(iVar1 + 0xa1) == '\0')) &&
     ((*(int *)((int)param_1 + 0x70) == 0 && (*(int *)((int)param_1 + 0xb0) == 1)))) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + 0xc;
    }
    FUN_00c8de20(param_1,5,iVar1,0);
    FUN_00c8b540(param_1,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x94));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c8d720 @ 00c8d720 ////

undefined4 __fastcall FUN_00c8d720(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06338;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x25);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  iVar1 = param_1[0x1e];
  local_4 = 0;
  if (*(int *)(iVar1 + 0x18) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0;
  }
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 + 0xc;
  }
  (**(code **)(*(int *)(iVar1 + 0xc) + 4))(iVar1 + 0xc);
  FUN_00c8de20(param_1,0x16,iVar2,0);
  param_1[0x18] = 1;
  (**(code **)(*param_1 + 0x70))();
  (**(code **)(*(int *)(param_1[0x1e] + 0xc) + 8))(param_1[0x1e] + 0xc);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = unaff_ESI;
  return 1;
}


//// FUNCTION FUN_00c8d7e0 @ 00c8d7e0 ////

void * __thiscall FUN_00c8d7e0(void *this,byte param_1)

{
  thunk_FUN_00c8ebb0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c8d910 @ 00c8d910 ////

void __fastcall FUN_00c8d910(int *param_1)

{
  *param_1 = (int)&PTR_LAB_00dadb70;
  param_1[3] = (int)&PTR_FUN_00dadb30;
  param_1[4] = (int)&PTR_LAB_00dadb1c;
  param_1[0x38] = (int)&PTR_LAB_00dadaf8;
  param_1[0x39] = (int)&PTR_LAB_00dadae4;
  FUN_00c8c970(param_1);
  return;
}


//// FUNCTION FUN_00c8d940 @ 00c8d940 ////

int * __thiscall FUN_00c8d940(void *this,byte param_1)

{
  FUN_00c8c970(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c8d960 @ 00c8d960 ////

undefined4 * __thiscall FUN_00c8d960(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  FUN_00c8c830(this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_LAB_00dadb70;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00dadb30;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00dadb1c;
  *(undefined ***)((int)this + 0xe0) = &PTR_LAB_00dadaf8;
  *(undefined ***)((int)this + 0xe4) = &PTR_LAB_00dadae4;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  FUN_00c8b910((int)this);
  return this;
}


//// FUNCTION FUN_00c8d9d0 @ 00c8d9d0 ////

int * __thiscall FUN_00c8d9d0(void *this,byte param_1)

{
  FUN_00c8d910(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c8da10 @ 00c8da10 ////

int FUN_00c8da10(LPUNKNOWN param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  HRESULT HVar2;
  int iVar3;
  int *unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  int *piVar4;
  
  piVar1 = param_4;
  *param_4 = 0;
  HVar2 = CoCreateInstance((IID *)&rclsid_00db076c,(LPUNKNOWN)param_1,1,(IID *)&riid_00db2a9c,
                           &param_4);
  if (HVar2 < 0) {
    return HVar2;
  }
  piVar4 = param_4;
  iVar3 = (**(code **)*param_4)(param_4,&DAT_00daf2bc,&param_1);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,unaff_EDI,unaff_retaddr);
    (**(code **)(*piVar4 + 8))(piVar4);
    if (-1 < iVar3) {
      *piVar1 = (int)param_1;
      return 0;
    }
  }
  (*param_1->lpVtbl->Release)(param_1);
  return iVar3;
}


//// FUNCTION FUN_00c8db00 @ 00c8db00 ////

void FUN_00c8db00(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  IID **ppIVar3;
  int *piVar4;
  bool bVar5;
  
  iVar1 = 4;
  bVar5 = true;
  piVar2 = param_2;
  ppIVar3 = &riid_00daf4dc;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = (IID *)*piVar2 == *ppIVar3;
    piVar2 = piVar2 + 1;
    ppIVar3 = ppIVar3 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar1 = 4;
    bVar5 = true;
    piVar2 = param_2;
    piVar4 = &DAT_00daf4ec;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *piVar2 == *piVar4;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar1 = 4;
      bVar5 = true;
      piVar2 = param_2;
      piVar4 = &DAT_00db298c;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *piVar2 == *piVar4;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (!bVar5) {
        iVar1 = 4;
        bVar5 = true;
        piVar2 = param_2;
        piVar4 = &DAT_00daf45c;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar5 = *piVar2 == *piVar4;
          piVar2 = piVar2 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (!bVar5) {
          FUN_00c92de0(param_1,param_2,param_3);
          return;
        }
        if (param_1 != (int *)0x0) {
          FUN_00c92d10(param_1 + 4,param_3);
          return;
        }
        goto LAB_00c8db33;
      }
    }
  }
  if (param_1 != (int *)0x0) {
    FUN_00c92d10(param_1 + 3,param_3);
    return;
  }
LAB_00c8db33:
  FUN_00c92d10((int *)0x0,param_3);
  return;
}


//// FUNCTION FUN_00c8dc80 @ 00c8dc80 ////

void __fastcall FUN_00c8dc80(int param_1)

{
  if (param_1 != 0) {
    FUN_00c92c80();
    return;
  }
  FUN_00c92c80();
  return;
}


//// FUNCTION FUN_00c8dcf0 @ 00c8dcf0 ////

undefined4 FUN_00c8dcf0(int param_1,short *param_2)

{
  int *piVar1;
  
  if (param_2 == (short *)0x0) {
    return 0x80004003;
  }
  if (*(short **)(param_1 + 0x30) == (short *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_00c93b80(param_2,*(short **)(param_1 + 0x30),0x80);
  }
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x34);
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return 0;
}


//// FUNCTION FUN_00c8dd40 @ 00c8dd40 ////

undefined4 FUN_00c8dd40(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d06378;
  pvStack_c = ExceptionList;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  *(undefined4 **)(param_1 + 0x34) = param_2;
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_00daf3bc,(undefined4 *)(param_1 + 0x38));
    if (-1 < iVar2) {
      piVar1 = *(int **)(param_1 + 0x38);
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x30));
  }
  if (param_3 != (undefined4 *)0x0) {
    iVar2 = FUN_00c93c70((int)param_3);
    uVar5 = (iVar2 + 1U) * 2;
    puVar3 = operator_new(uVar5);
    *(undefined4 **)(param_1 + 0x30) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      for (uVar4 = (iVar2 + 1U & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION FUN_00c8de20 @ 00c8de20 ////

undefined4 __thiscall FUN_00c8de20(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)((int)this + 0x44);
  if (piVar1 == (int *)0x0) {
    return 0x80004001;
  }
  if (param_1 == 1) {
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,1,param_2,(int)this + 0xc);
    return uVar2;
  }
  uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1,param_2,param_3);
  return uVar2;
}


//// FUNCTION FUN_00c8df10 @ 00c8df10 ////

void __fastcall FUN_00c8df10(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0639b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00dadc34;
  local_4 = 0;
  (**(code **)(*(int *)(param_1[3] + 0xc) + 8))(param_1[3] + 0xc);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00c9a310(param_1 + 6);
  ExceptionList = param_1;
  return;
}


//// FUNCTION FUN_00c8dff0 @ 00c8dff0 ////

LONG FUN_00c8dff0(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 5);
  if ((LVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x1c))(1);
  }
  return LVar1;
}


//// FUNCTION FUN_00c8e020 @ 00c8e020 ////

undefined4 FUN_00c8e020(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_00c99dc0((undefined4 *)(param_1 + 0x18));
  return 0;
}


//// FUNCTION FUN_00c8e050 @ 00c8e050 ////

undefined4 FUN_00c8e050(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}


//// FUNCTION FUN_00c8e120 @ 00c8e120 ////

LONG FUN_00c8e120(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 4);
  if ((LVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x1c))(1);
  }
  return LVar1;
}


//// FUNCTION FUN_00c8e150 @ 00c8e150 ////

undefined4 FUN_00c8e150(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 0;
}


//// FUNCTION FUN_00c8e170 @ 00c8e170 ////

void __fastcall FUN_00c8e170(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d063c3;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x14));
}


//// FUNCTION FUN_00c8e1d0 @ 00c8e1d0 ////

void FUN_00c8e1d0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_2;
  piVar3 = &DAT_00daf53c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    if (param_1 != (int *)0x0) {
      FUN_00c92d10(param_1 + 3,param_3);
      return;
    }
  }
  else {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = param_2;
    piVar3 = &DAT_00daf3fc;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      FUN_00c92de0(param_1,param_2,param_3);
      return;
    }
    if (param_1 != (int *)0x0) {
      FUN_00c92d10(param_1 + 4,param_3);
      return;
    }
  }
  FUN_00c92d10((int *)0x0,param_3);
  return;
}


//// FUNCTION FUN_00c8e2b0 @ 00c8e2b0 ////

undefined4 FUN_00c8e2b0(void)

{
  return 0;
}


//// FUNCTION FUN_00c8e2d0 @ 00c8e2d0 ////

uint __thiscall FUN_00c8e2d0(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_00c95060((void *)((int)this + 0x34),param_1);
  return uVar1 & (-1 < (int)uVar1) - 1;
}


//// FUNCTION FUN_00c8e300 @ 00c8e300 ////

uint __thiscall FUN_00c8e300(void *this,int *param_1)

{
  int unaff_ESI;
  
  (**(code **)(*param_1 + 0x24))(param_1,&param_1);
  return (unaff_ESI != *(int *)((int)this + 0x1c)) - 1 & 0x80040208;
}


//// FUNCTION FUN_00c8e330 @ 00c8e330 ////

bool __fastcall FUN_00c8e330(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  return iVar1 != *(int *)(param_1 + 0x10);
}


//// FUNCTION FUN_00c8e350 @ 00c8e350 ////

bool __fastcall FUN_00c8e350(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  return iVar1 != *(int *)(param_1 + 0xc);
}


//// FUNCTION FUN_00c8e690 @ 00c8e690 ////

undefined4 FUN_00c8e690(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + 0xc;
  }
  *param_2 = iVar1;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 4))(iVar1 + 0xc);
  }
  if (*(short **)(param_1 + 8) != (short *)0x0) {
    FUN_00c93b80((short *)(param_2 + 2),*(short **)(param_1 + 8),0x80);
    param_2[1] = *(int *)(param_1 + 0x10);
    return 0;
  }
  *(undefined2 *)(param_2 + 2) = 0;
  param_2[1] = *(int *)(param_1 + 0x10);
  return 0;
}


//// FUNCTION FUN_00c8e7d0 @ 00c8e7d0 ////

undefined4 FUN_00c8e7d0(void)

{
  return 0;
}


//// FUNCTION FUN_00c8e820 @ 00c8e820 ////

undefined4
FUN_00c8e820(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined8 param_6)

{
  *(undefined4 *)(param_1 + 0x74) = param_2;
  *(undefined4 *)(param_1 + 0x78) = param_3;
  *(undefined4 *)(param_1 + 0x7c) = param_4;
  *(undefined4 *)(param_1 + 0x80) = param_5;
  *(undefined8 *)(param_1 + 0x84) = param_6;
  return 0;
}


//// FUNCTION FUN_00c8e870 @ 00c8e870 ////

void __fastcall FUN_00c8e870(int *param_1)

{
  (**(code **)(*param_1 + 0x38))(param_1[0x27],param_1 + 0x26);
  return;
}


//// FUNCTION FUN_00c8e890 @ 00c8e890 ////

uint __thiscall FUN_00c8e890(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int unaff_ESI;
  
  piVar1 = param_1;
  (**(code **)(*param_1 + 0x24))(param_1,&param_1);
  if (unaff_ESI == *(int *)((int)this + 0x1c)) {
    return 0x80040208;
  }
  uVar2 = (**(code **)*piVar1)(piVar1,&DAT_00daf46c,(int)this + 0x9c);
  return uVar2 & (-1 < (int)uVar2) - 1;
}


//// FUNCTION FUN_00c8e8e0 @ 00c8e8e0 ////

int __fastcall FUN_00c8e8e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
    if (iVar2 < 0) {
      return iVar2;
    }
    (**(code **)(**(int **)(param_1 + 0x98) + 8))(*(int **)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return 0;
}


//// FUNCTION FUN_00c8e950 @ 00c8e950 ////

int __thiscall FUN_00c8e950(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piStack_24;
  int *piStack_20;
  int local_10 [4];
  
  local_10[0] = 0;
  piStack_20 = local_10;
  local_10[1] = 0;
  *param_2 = 0;
  local_10[2] = 0;
  piStack_24 = param_1;
  local_10[3] = 0;
  (**(code **)(*param_1 + 0x14))();
  if (local_10[0] == 0) {
    local_10[0] = 1;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(int *)this + 0x3c))(*param_2,&piStack_20);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1,*param_2,0);
      if (-1 < iVar2) {
        return 0;
      }
    }
  }
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_2 = 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0x48))(param_2);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(int *)this + 0x3c))(*param_2,&piStack_24);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1,*param_2,0);
      if (-1 < iVar2) {
        return 0;
      }
    }
  }
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00c8eac0 @ 00c8eac0 ////

undefined4 __fastcall FUN_00c8eac0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    return 0x8004020a;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98));
  return uVar1;
}


//// FUNCTION FUN_00c8eae0 @ 00c8eae0 ////

undefined4 __fastcall FUN_00c8eae0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x24) = 0;
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 == (int *)0x0) {
    return 0x8004020a;
  }
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  return uVar2;
}


//// FUNCTION FUN_00c8ebb0 @ 00c8ebb0 ////

void __fastcall FUN_00c8ebb0(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d06418;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x9c);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00c8e170(param_1);
  ExceptionList = pvStack_c;
  return;
}


