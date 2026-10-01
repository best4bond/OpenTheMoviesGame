//// FUNCTION FUN_0058fb60 @ 0058fb60 ////

/* WARNING: Removing unreachable block (ram,0x0058fce7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0058fb60(void *this,undefined4 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  int *piVar12;
  char cVar13;
  float10 fVar14;
  ulonglong uVar15;
  undefined4 *unaff_retaddr;
  float local_8;
  float local_4;
  
  fVar3 = param_2;
  if (param_2 == 0.0) {
    *param_1 = 0;
    return param_1;
  }
  pfVar8 = (float *)((int)param_2 + 0xd0);
  pvVar11 = (void *)((int)param_2 + 0xd4);
  param_2 = 0.0;
  uVar6 = FUN_0043b680(pvVar11,pfVar8);
  if ((char)uVar6 != '\0') {
    pfVar7 = (float *)FUN_0043b620(&DAT_00e4fa4c,&local_4,pfVar8);
    fVar14 = FUN_0043b710(pfVar7);
    param_2 = (float)fVar14;
    pfVar8 = (float *)FUN_0043b620(pvVar11,&local_8,pfVar8);
    fVar14 = FUN_0043b710(pfVar8);
    FUN_00407070(&param_2,(float)((float10)param_2 / fVar14));
  }
  fVar14 = (float10)FUN_00ace9b0();
  fVar14 = (float10)1.0 - fVar14;
  if ((float10)0.0 <= fVar14) {
    if ((float10)1.0 < fVar14) {
      fVar14 = (float10)1.0;
    }
  }
  else {
    fVar14 = (float10)0.0;
  }
  fVar14 = fVar14 * (float10)*(float *)((int)fVar3 + 0xd8);
  if ((float10)0.0 <= fVar14) {
    if (fVar14 <= (float10)1.0) {
      local_4 = (float)fVar14;
    }
    else {
      local_4 = 1.0;
    }
  }
  else {
    local_4 = 0.0;
  }
  pfVar8 = (float *)(**(code **)(*(int *)this + 0x1e0))(&param_2);
  FUN_0043b710(pfVar8);
  uVar15 = FUN_00acd42c();
  uVar9 = (uint)uVar15;
  if (uVar9 < *(uint *)((int)fVar3 + 0xdc)) {
    fVar1 = (float)(int)uVar9;
    if ((int)uVar9 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    param_1 = (undefined4 *)(*(uint *)((int)fVar3 + 0xdc) - 0x32);
    FUN_00407070(&param_1,(fVar1 - (float)(int)param_1) * 0.02);
  }
  else if (*(uint *)((int)fVar3 + 0xe0) < uVar9) {
    param_1 = (undefined4 *)((uVar9 - *(uint *)((int)fVar3 + 0xe0)) / 0x32);
    FUN_00407070(&param_1,1.0 - (float)(int)param_1);
  }
  else {
    FUN_00407070(&param_1,1.0);
  }
  puVar4 = param_1;
  FUN_00587100(this,(float *)&param_1);
  if ((float)param_1 < 0.5 == ((float)param_1 == 0.5)) {
    fVar1 = (float)param_1 - 0.5;
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    fVar2 = *(float *)((int)fVar3 + 0xec) - *(float *)((int)fVar3 + 0xe8);
    if (0.0 <= fVar2) {
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = 0.0;
    }
    param_1 = (undefined4 *)((fVar1 + fVar1) * fVar2 + *(float *)((int)fVar3 + 0xe8));
    if (0.0 <= (float)param_1) {
      if (1.0 < (float)param_1) {
        param_1 = (undefined4 *)0x3f800000;
      }
    }
    else {
      param_1 = (undefined4 *)0x0;
    }
    FUN_00407070(&param_1,(float)param_1);
  }
  else {
    fVar1 = (float)param_1 + (float)param_1;
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    fVar2 = *(float *)((int)fVar3 + 0xe8) - *(float *)((int)fVar3 + 0xe4);
    if (0.0 <= fVar2) {
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = 0.0;
    }
    param_1 = (undefined4 *)(fVar2 * fVar1 + *(float *)((int)fVar3 + 0xe4));
    if (0.0 <= (float)param_1) {
      if (1.0 < (float)param_1) {
        param_1 = (undefined4 *)0x3f800000;
      }
    }
    else {
      param_1 = (undefined4 *)0x0;
    }
    FUN_00407070(&param_1,(float)param_1);
  }
  local_8 = (float)puVar4 * local_8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  param_1 = (undefined4 *)(local_8 * (float)param_1);
  cVar13 = SUB41(param_2,0);
  if ((cVar13 == '\0') || (iVar10 = FUN_004345e0(), iVar10 == 0)) {
    piVar12 = *(int **)((int)this + 0xc7c);
    if (*(int **)((int)this + 0xc7c) == (int *)0x0) {
      piVar12 = this;
    }
    iVar10 = FUN_0059bbd0(piVar12);
    pvVar11 = (void *)FUN_004319b0(iVar10);
  }
  else {
    iVar10 = FUN_004345e0();
    iVar10 = FUN_00433ab0(iVar10);
    pvVar11 = *(void **)(iVar10 + 0xc);
  }
  if (((pvVar11 == (void *)0x0) || (bVar5 = FUN_009cea90(pvVar11,5), !bVar5)) ||
     (*(int *)((int)this + 0x4a0) != 1)) {
    param_2 = 0.0;
  }
  else {
    param_2 = DAT_00e53e44;
  }
  fVar14 = FUN_00587f60(this,3,cVar13);
  param_1 = (undefined4 *)(float)((float10)param_2 + (float10)(float)param_1 + fVar14);
  fVar14 = FUN_00587f60(this,4,cVar13);
  param_1 = (undefined4 *)(float)(fVar14 + (float10)(float)param_1);
  if ((cVar13 == '\0') || (iVar10 = FUN_004345e0(), iVar10 == 0)) {
    piVar12 = *(int **)((int)this + 0xc7c);
    if (*(int **)((int)this + 0xc7c) == (int *)0x0) {
      piVar12 = this;
    }
    iVar10 = FUN_0059bbd0(piVar12);
    pvVar11 = (void *)FUN_004319b0(iVar10);
  }
  else {
    iVar10 = FUN_004345e0();
    iVar10 = FUN_00433ab0(iVar10);
    pvVar11 = *(void **)(iVar10 + 0xc);
  }
  if (((pvVar11 == (void *)0x0) || (bVar5 = FUN_009cea90(pvVar11,0xc), !bVar5)) ||
     (fVar3 = _DAT_00e53e50, *(int *)((int)this + 0x4a0) != 0)) {
    fVar3 = 0.0;
  }
  FUN_00407070(unaff_retaddr,fVar3 + (float)param_1);
  return unaff_retaddr;
}


//// FUNCTION FUN_00590020 @ 00590020 ////

undefined4 * __thiscall FUN_00590020(void *this,undefined4 *param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)this + 0xc7c);
  if (*(int **)((int)this + 0xc7c) == (int *)0x0) {
    piVar3 = this;
  }
  iVar1 = FUN_0059bbd0(piVar3);
  fVar2 = (float)FUN_00430600(iVar1);
  FUN_0058fb60(this,param_1,fVar2);
  return param_1;
}


//// FUNCTION FUN_00590060 @ 00590060 ////

uint __fastcall FUN_00590060(int param_1)

{
  void *this;
  undefined4 *puVar1;
  uint in_EAX;
  int iVar2;
  int *piVar3;
  
  puVar1 = DAT_0104d688;
  do {
    if (puVar1 == &DAT_0104d694) {
      return in_EAX & 0xffffff00;
    }
    this = (void *)puVar1[2];
    if (this != (void *)0x0) {
      iVar2 = FUN_005b22a0((int)this);
      in_EAX = 0;
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_005b22a0((int)this);
        in_EAX = (**(code **)(*piVar3 + 0x24))();
        if ((in_EAX != 7) &&
           ((in_EAX = FUN_005b4c80(this,param_1), (char)in_EAX != '\0' ||
            (in_EAX = FUN_005b2780((int)this), in_EAX == param_1)))) {
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
      }
    }
    puVar1 = (undefined4 *)puVar1[1];
  } while( true );
}


//// FUNCTION FUN_005900d0 @ 005900d0 ////

void * __fastcall FUN_005900d0(int param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_0104d688;
  do {
    if (puVar1 == &DAT_0104d694) {
      return (void *)0x0;
    }
    this = (void *)puVar1[2];
    if ((this != (void *)0x0) && (iVar2 = FUN_005b22a0((int)this), iVar2 != 0)) {
      piVar3 = (int *)FUN_005b22a0((int)this);
      iVar2 = (**(code **)(*piVar3 + 0x24))();
      if ((iVar2 != 7) &&
         ((uVar4 = FUN_005b4c80(this,param_1), (char)uVar4 != '\0' ||
          (iVar2 = FUN_005b2780((int)this), iVar2 == param_1)))) {
        return this;
      }
    }
    puVar1 = (undefined4 *)puVar1[1];
  } while( true );
}


//// FUNCTION FUN_00590140 @ 00590140 ////

int __fastcall FUN_00590140(float param_1)

{
  bool bVar1;
  void *pvVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_90 [4];
  undefined **local_8c;
  int local_88;
  int *local_84;
  undefined4 local_78;
  undefined1 local_64 [4];
  undefined **local_60;
  int local_5c;
  int *local_58;
  undefined4 local_4c;
  float local_38 [2];
  int local_30;
  int *local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb38db;
  local_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &local_c;
  pvVar2 = FUN_00857d80(local_64);
  local_4 = 0;
  pfVar3 = FUN_00857ae0(pvVar2,param_1);
  FUN_00500630(local_38,pfVar3);
  local_4._0_1_ = 2;
  local_60 = &PTR_FUN_00d1aed0;
  if (local_58 != (int *)0x0) {
    *local_58 = local_5c;
  }
  if (local_5c != 0) {
    *(int **)(local_5c + 4) = local_58;
  }
  local_4c = 0;
  local_5c = 0;
  local_58 = (int *)0x0;
  while( true ) {
    pvVar2 = FUN_00857bd0(local_90);
    local_4._0_1_ = 3;
    bVar1 = FUN_00856dd0(local_38,(int)pvVar2);
    local_4._0_1_ = 2;
    local_8c = &PTR_FUN_00d1aed0;
    if (local_84 != (int *)0x0) {
      *local_84 = local_88;
    }
    if (local_88 != 0) {
      *(int **)(local_88 + 4) = local_84;
    }
    local_78 = 0;
    local_88 = 0;
    local_84 = (int *)0x0;
    if (!bVar1) break;
    iVar4 = FUN_00856d90((int)local_38);
    if (iVar4 != 0) {
      uVar5 = FUN_0043b680((void *)(iVar4 + 100),(float *)&stack0x00000004);
      if ((char)uVar5 != '\0') {
        iVar6 = iVar6 + 1;
      }
    }
    FUN_00857260(local_38);
  }
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  ExceptionList = local_c;
  return iVar6;
}


//// FUNCTION FUN_00590290 @ 00590290 ////

void __fastcall FUN_00590290(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *local_38;
  int local_34;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb38f8;
  local_c = ExceptionList;
  local_38 = (undefined4 *)(param_1 + 0x28);
  local_34 = 6;
  ExceptionList = &local_c;
  do {
    if (DAT_00e67469 == '\0') {
      pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
      pcVar2 = (char *)&DAT_010581d8;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar2 = pcVar2 + 4;
      }
      local_2c = local_20;
      *pcVar2 = *pcVar5;
      DAT_010581d4 = 0x124d;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"SLVAR CALLED: ",0xe);
      local_28 = 0xe;
      local_2c[0xe] = '\0';
      local_4 = 0;
      pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
      pcVar5 = pcVar2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
      FUN_00989710();
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
    uVar3 = FUN_0098b490("Values[x]");
    if ((char)uVar3 != '\0') {
      FUN_00566d60(local_38);
    }
    local_38 = local_38 + 1;
    local_34 = local_34 + -1;
    if (local_34 == 0) {
      FUN_00989780();
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_005903e0 @ 005903e0 ////

float10 __fastcall FUN_005903e0(void *param_1)

{
  float *pfVar1;
  void *local_4;
  
  if (*(float *)((int)param_1 + 0xd1c) < 0.0) {
    local_4 = param_1;
    pfVar1 = FUN_0058f9f0(param_1,(float *)&local_4);
    return (float10)*pfVar1;
  }
  return (float10)*(float *)((int)param_1 + 0xd1c);
}


//// FUNCTION FUN_00590410 @ 00590410 ////

float10 FUN_00590410(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  float local_8;
  
  iVar6 = 0;
  local_8 = 0.0;
  puVar7 = DAT_0104d090;
  if (DAT_0104d090 != &DAT_0104d09c) {
    do {
      iVar2 = puVar7[2];
      if ((iVar2 != 0) && (iVar4 = FUN_005773c0(iVar2), iVar4 != 0)) {
        piVar5 = (int *)FUN_005773c0(iVar2);
        cVar3 = (**(code **)(*piVar5 + 0x3c))();
        if (cVar3 != '\0') {
          iVar6 = iVar6 + 1;
          local_8 = local_8 + *(float *)(iVar2 + 0xd54);
        }
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d09c);
    if (iVar6 != 0) {
      return (float10)local_8 / (float10)iVar6;
    }
  }
  return (float10)local_8;
}


//// FUNCTION FUN_00590490 @ 00590490 ////

float10 FUN_00590490(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  float local_8;
  
  iVar6 = 0;
  local_8 = 0.0;
  puVar7 = DAT_0104d090;
  if (DAT_0104d090 != &DAT_0104d09c) {
    do {
      iVar2 = puVar7[2];
      if ((iVar2 != 0) && (iVar4 = FUN_005773c0(iVar2), iVar4 != 0)) {
        piVar5 = (int *)FUN_005773c0(iVar2);
        cVar3 = (**(code **)(*piVar5 + 0x3c))();
        if (cVar3 != '\0') {
          iVar6 = iVar6 + 1;
          local_8 = *(float *)(iVar2 + 0xd54) * *(float *)(iVar2 + 0xd54) + local_8;
        }
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d09c);
    if (iVar6 != 0) {
      local_8 = local_8 / (float)iVar6;
    }
  }
  return SQRT((float10)local_8);
}


//// FUNCTION FUN_005905b0 @ 005905b0 ////

int * __fastcall FUN_005905b0(int *param_1)

{
  FUN_00586dd0(param_1);
  return param_1;
}


//// FUNCTION FUN_005905c0 @ 005905c0 ////

undefined4 * __thiscall
FUN_005905c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = (undefined1 *)((int)this + 0x18);
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0xc),(char *)*param_4,param_4[1]);
  *(undefined4 *)((int)this + 0x2c) = param_4[8];
  *(undefined1 *)((int)this + 0x30) = param_5;
  *(undefined1 *)((int)this + 0x31) = 0;
  return this;
}


//// FUNCTION FUN_00590650 @ 00590650 ////

undefined4 * __thiscall FUN_00590650(void *this,byte param_1)

{
  FUN_0058cf90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00590670 @ 00590670 ////

void __thiscall FUN_00590670(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  void *pvVar7;
  undefined4 uVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  int iVar11;
  float local_8;
  undefined1 local_4 [4];
  
  fVar2 = param_2;
  local_8 = 0.0;
  iVar3 = FUN_005b2220((int)param_2);
  if ((*(int *)(iVar3 + 100) == 0) ||
     (param_2 = (float)((*(int *)(iVar3 + 0x68) - *(int *)(iVar3 + 100)) / 0x18), param_2 == 0.0)) {
    local_8 = 0.5;
  }
  else {
    iVar3 = FUN_005b2220((int)fVar2);
    iVar3 = *(int *)(iVar3 + 100);
    iVar4 = FUN_005b2220((int)fVar2);
    if (iVar3 != *(int *)(iVar4 + 0x68)) {
      do {
        iVar11 = 0;
        pTVar10 = &TM::CStar::RTTI_Type_Descriptor;
        pTVar9 = &TM::CStaff::RTTI_Type_Descriptor;
        iVar4 = 0;
        piVar5 = (int *)FUN_005a6470(*(int *)(iVar3 + 0x14));
        piVar5 = (int *)FUN_00ace790(piVar5,iVar4,pTVar9,pTVar10,iVar11);
        if ((piVar5 == (int *)0x0) || (piVar5 == this)) {
          local_8 = local_8 + 0.5;
        }
        else {
          pfVar6 = (float *)FUN_0042e9a0(&param_2,this,piVar5);
          local_8 = local_8 + *pfVar6;
        }
        iVar3 = iVar3 + 0x18;
        iVar4 = FUN_005b2220((int)fVar2);
      } while (iVar3 != *(int *)(iVar4 + 0x68));
    }
    iVar3 = FUN_005b2220((int)fVar2);
    if (*(int *)(iVar3 + 100) == 0) {
      param_2 = 0.0;
    }
    else {
      param_2 = (float)((*(int *)(iVar3 + 0x68) - *(int *)(iVar3 + 100)) / 0x18);
    }
    fVar1 = (float)(int)param_2;
    if ((int)param_2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    local_8 = local_8 / fVar1;
  }
  iVar3 = FUN_005b2780((int)fVar2);
  if ((iVar3 != 0) && (pvVar7 = (void *)FUN_005b2780((int)fVar2), pvVar7 != this)) {
    iVar3 = FUN_005b2780((int)fVar2);
    uVar8 = FUN_00598ee0(iVar3);
    if ((char)uVar8 != '\0') {
      iVar4 = 0;
      pTVar10 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar9 = &TM::CStaff::RTTI_Type_Descriptor;
      iVar3 = 0;
      piVar5 = (int *)FUN_005b2780((int)fVar2);
      piVar5 = (int *)FUN_00ace790(piVar5,iVar3,pTVar9,pTVar10,iVar4);
      pfVar6 = (float *)FUN_0042e9a0(&param_2,this,piVar5);
      local_8 = local_8 + *pfVar6;
      goto LAB_005907de;
    }
  }
  local_8 = local_8 + 0.5;
LAB_005907de:
  iVar3 = *(int *)((int)fVar2 + 0xac);
  iVar4 = 0;
  if (iVar3 != (int)fVar2 + 0xb8) {
    do {
      iVar3 = *(int *)(iVar3 + 4);
      iVar4 = iVar4 + 1;
    } while (iVar3 != (int)fVar2 + 0xb8);
    if (iVar4 != 0) {
      iVar3 = *(int *)((int)fVar2 + 0xac);
      param_2 = 0.0;
      for (; iVar3 != (int)fVar2 + 0xb8; iVar3 = *(int *)(iVar3 + 4)) {
        pfVar6 = (float *)(**(code **)(*(int *)this + 0x25c))(local_4,*(undefined4 *)(iVar3 + 8));
        param_2 = param_2 + *pfVar6;
      }
      iVar4 = 0;
      for (iVar3 = *(int *)((int)fVar2 + 0xac); iVar3 != (int)fVar2 + 0xb8;
          iVar3 = *(int *)(iVar3 + 4)) {
        iVar4 = iVar4 + 1;
      }
      fVar2 = (float)iVar4;
      if (iVar4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      local_8 = param_2 / fVar2 + local_8;
    }
  }
  local_8 = local_8 * 0.33333334;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
    *param_1 = local_8;
    return;
  }
  *param_1 = 0.0;
  return;
}


//// FUNCTION FUN_005909c0 @ 005909c0 ////

void __thiscall FUN_005909c0(void *this,float param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float *unaff_retaddr;
  float local_c [3];
  
  pfVar2 = (float *)FUN_0058fb60(this,&param_2,param_2);
  local_c[0] = *pfVar2;
  pfVar2 = (float *)FUN_00587100(this,&param_2);
  local_c[1] = *pfVar2 * 0.6 + 0.4;
  pfVar3 = (float *)(**(code **)(*(int *)this + 0x238))(&param_2);
  param_1 = 0.0;
  pfVar2 = (float *)&stack0xfffffff0;
  pfVar5 = local_c;
  iVar4 = 2;
  local_c[1] = *pfVar3 * 0.6 + 0.4;
  do {
    if (*pfVar2 <= *pfVar5) {
      fVar6 = (float10)FUN_00ace9b0();
    }
    else {
      fVar6 = (float10)FUN_00ace9b0();
      pfVar2 = pfVar5;
    }
    pfVar5 = pfVar5 + 1;
    iVar4 = iVar4 + -1;
    param_1 = (float)(fVar6 + (float10)param_1);
  } while (iVar4 != 0);
  fVar1 = param_1 + *pfVar2;
  *(float *)((int)this + 0xd18) = fVar1;
  if (fVar1 < 0.0) {
    *unaff_retaddr = 0.0;
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *unaff_retaddr = fVar1;
  return;
}


//// FUNCTION FUN_00590ad0 @ 00590ad0 ////

undefined4 __thiscall FUN_00590ad0(void *this,undefined4 param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)this + 0xc7c);
  if (*(int **)((int)this + 0xc7c) == (int *)0x0) {
    piVar3 = this;
  }
  iVar1 = FUN_0059bbd0(piVar3);
  fVar2 = (float)FUN_00430600(iVar1);
  FUN_005909c0(this,param_1,fVar2);
  return param_1;
}


//// FUNCTION CStar_GetAwardsRatingComponent @ 00590b00 ////

float * __thiscall CStar_GetAwardsRatingComponent(void *this,float *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  int local_98;
  float *local_94;
  undefined1 local_90 [4];
  undefined **local_8c;
  int local_88;
  int *local_84;
  undefined4 local_78;
  float local_64 [11];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb392b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar3 = (float *)FUN_0085c530((float *)&local_94);
  uVar4 = FUN_0043b6a0(&DAT_00e4fa4c,pfVar3);
  pfVar3 = (float *)((int)this + 0xcd8);
  local_94 = pfVar3;
  pvVar5 = (void *)FUN_0085bae0(&local_98);
  uVar6 = FUN_0043b6c0(pvVar5,pfVar3);
  if (((char)uVar6 == '\0') || ((char)uVar4 != '\0')) {
    local_98 = 0;
    pvVar5 = FUN_00857d80(local_38);
    local_4 = 0;
    pfVar3 = FUN_00857ae0(pvVar5,(float)this);
    FUN_00500630(local_64,pfVar3);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_005005e0((int)local_38);
    while( true ) {
      pvVar5 = FUN_00857bd0(local_90);
      local_4._0_1_ = 3;
      bVar2 = FUN_00856dd0(local_64,(int)pvVar5);
      local_4 = CONCAT31(local_4._1_3_,2);
      local_8c = &PTR_FUN_00d1aed0;
      if (local_84 != (int *)0x0) {
        *local_84 = local_88;
      }
      if (local_88 != 0) {
        *(int **)(local_88 + 4) = local_84;
      }
      local_78 = 0;
      local_88 = 0;
      local_84 = (int *)0x0;
      if (!bVar2) break;
      local_98 = local_98 + 1;
      FUN_00857260(local_64);
    }
    fVar1 = (float)local_98 * 0.5263158;
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    *(float *)((int)this + 0xcd4) = fVar1;
    *local_94 = DAT_00e4fa4c;
    *param_1 = fVar1;
    FUN_005005e0((int)local_64);
  }
  else {
    FUN_00407070(param_1,*(float *)((int)this + 0xcd4));
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00590cb0 @ 00590cb0 ////

void __thiscall FUN_00590cb0(void *this,float *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar1 = 0.0;
  iVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x774); iVar2 != *(int *)((int)this + 0x778);
      iVar2 = iVar2 + 0x18) {
    fVar1 = fVar1 + *(float *)(*(int *)(iVar2 + 0x14) + 0xbc);
    iVar3 = iVar3 + 1;
  }
  fVar1 = fVar1 / (float)iVar3;
  if (fVar1 < 0.0) {
    *param_1 = 0.0;
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_00590d30 @ 00590d30 ////

int __fastcall FUN_00590d30(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  fVar1 = 0.0;
  iVar4 = 0;
  for (iVar3 = *(int *)(param_1 + 0x774); iVar3 != *(int *)(param_1 + 0x778); iVar3 = iVar3 + 0x18)
  {
    iVar2 = *(int *)(iVar3 + 0x14);
    if (fVar1 < *(float *)(iVar2 + 0xbc) != (fVar1 == *(float *)(iVar2 + 0xbc))) {
      fVar1 = *(float *)(iVar2 + 0xbc);
      iVar4 = iVar2;
    }
  }
  return iVar4;
}


//// FUNCTION FUN_00590d80 @ 00590d80 ////

int __thiscall FUN_00590d80(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (7 < param_1) {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0xb44);
  while( true ) {
    if (iVar2 == *(int *)((int)this + 0xb48)) {
      return 0;
    }
    iVar1 = *(int *)(iVar2 + 0x14);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x174) == param_1)) break;
    iVar2 = iVar2 + 0x18;
  }
  return iVar1;
}


//// FUNCTION FUN_00590dc0 @ 00590dc0 ////

void __thiscall FUN_00590dc0(void *this,int param_1,undefined4 *param_2,int param_3)

{
  void *this_00;
  
  this_00 = (void *)FUN_00590d80(this,param_1);
  if ((this_00 != (void *)0x0) && (param_3 < 0xd)) {
    FUN_009521b0(this_00,param_2,param_3);
  }
  return;
}


//// FUNCTION FUN_00590df0 @ 00590df0 ////

float10 __fastcall FUN_00590df0(int *param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int *local_4;
  
  if ((float)param_1[0x346] < 0.0) {
    piVar3 = (int *)param_1[799];
    if ((int *)param_1[799] == (int *)0x0) {
      piVar3 = param_1;
    }
    local_4 = param_1;
    iVar1 = FUN_0059bbd0(piVar3);
    fVar2 = (float)FUN_00430600(iVar1);
    FUN_005909c0(param_1,&local_4,fVar2);
    return (float10)(float)local_4;
  }
  return (float10)(float)param_1[0x346];
}


//// FUNCTION FUN_00590e40 @ 00590e40 ////

float10 __fastcall FUN_00590e40(void *param_1)

{
  float *pfVar1;
  void *local_4;
  
  if (*(float *)((int)param_1 + 0xcd4) < 0.0) {
    local_4 = param_1;
    pfVar1 = CStar_GetAwardsRatingComponent(param_1,(float *)&local_4);
    return (float10)*pfVar1;
  }
  return (float10)*(float *)((int)param_1 + 0xcd4);
}


//// FUNCTION FUN_00590e70 @ 00590e70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00590e70(int *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar3 = FUN_005864b0((float)param_1);
  param_1[0x355] = (int)(float)fVar3;
  fVar3 = FUN_00590410();
  local_10 = (float)fVar3;
  fVar3 = FUN_00590490();
  fVar3 = ((float10)_DAT_00e53e54 - (float10)local_10) * (float10)_DAT_00e53e58 +
          ((float10)_DAT_00e53e5c - fVar3) * (float10)_DAT_00e53e60 * (float10)(float)param_1[0x355]
  ;
  if ((float10)0.0 <= fVar3) {
    if ((float10)1.0 < fVar3) {
      fVar3 = (float10)1.0;
    }
  }
  else {
    fVar3 = (float10)0.0;
  }
  local_10 = (float)fVar3;
  local_8 = (float)fVar3;
  FUN_0043b620(&DAT_00e4fa4c,&local_c,(float *)(param_1 + 0x356));
  FUN_0043b5f0(&local_c,(float *)&DAT_0104d0bc);
  pfVar1 = (float *)FUN_0043b620(&DAT_0104d0c0,&local_4,(float *)&DAT_0104d0bc);
  fVar3 = FUN_0043b710(pfVar1);
  FUN_0043b520(&local_14,(float)(fVar3 * (float10)0.5));
  fVar3 = FUN_0043b710(&local_14);
  if (fVar3 <= (float10)0.0) {
    fVar3 = (float10)local_8;
  }
  else {
    uVar2 = FUN_0043b6e0(&local_c,&local_14);
    if ((char)uVar2 == '\0') {
      pfVar1 = (float *)FUN_0043b620(&local_c,&local_4,&local_14);
      fVar3 = FUN_0043b710(pfVar1);
      local_8 = (float)fVar3;
      fVar3 = FUN_0043b710(&local_14);
      fVar3 = ((float10)1.0 - (float10)local_10) * ((float10)local_8 / fVar3) + (float10)local_10;
    }
    else {
      fVar3 = FUN_0043b710(&local_c);
      local_8 = (float)fVar3;
      fVar3 = FUN_0043b710(&local_14);
      fVar3 = ((float10)local_8 / fVar3) * (float10)local_10;
    }
    if ((float10)0.0 <= fVar3) {
      if ((float10)1.0 < fVar3) {
        fVar3 = (float10)1.0;
      }
    }
    else {
      fVar3 = (float10)0.0;
    }
  }
  if ((float10)_DAT_00e53e64 < fVar3) {
    FUN_00586560(param_1);
  }
  return;
}


//// FUNCTION FUN_00591010 @ 00591010 ////

void __thiscall FUN_00591010(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00589920(this,param_2);
  puVar1 = *(undefined4 **)((int)this + 4);
  if (puVar2 != puVar1) {
    uVar3 = FUN_00441060(param_2,puVar2 + 3);
    if ((char)uVar3 == '\0') {
      *param_1 = (int)puVar2;
      return;
    }
  }
  *param_1 = (int)puVar1;
  return;
}


//// FUNCTION FUN_00591070 @ 00591070 ////

void __thiscall FUN_00591070(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00589920(this,param_2);
  puVar1 = *(undefined4 **)((int)this + 4);
  if (puVar2 != puVar1) {
    uVar3 = FUN_00441060(param_2,puVar2 + 3);
    if ((char)uVar3 == '\0') {
      *param_1 = (int)puVar2;
      return;
    }
  }
  *param_1 = (int)puVar1;
  return;
}


//// FUNCTION FUN_005910e0 @ 005910e0 ////

void * FUN_005910e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_005905c0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00591130 @ 00591130 ////

void __cdecl FUN_00591130(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d27020;
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


//// FUNCTION FUN_005911a0 @ 005911a0 ////

float10 __fastcall FUN_005911a0(int *param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int *local_4;
  
  piVar3 = (int *)param_1[799];
  if ((int *)param_1[799] == (int *)0x0) {
    piVar3 = param_1;
  }
  local_4 = param_1;
  iVar1 = FUN_0059bbd0(piVar3);
  fVar2 = (float)FUN_00430600(iVar1);
  FUN_005909c0(param_1,&local_4,fVar2);
  return (float10)(float)local_4;
}


//// FUNCTION FUN_005911d0 @ 005911d0 ////

void __thiscall FUN_005911d0(void *this,int *param_1)

{
  int *piVar1;
  bool bVar2;
  uint *puVar3;
  float *pfVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  float10 fVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  void **ppvVar16;
  char **ppcVar17;
  uint local_7c;
  char *pcStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  char acStack_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3994;
  local_c = ExceptionList;
  local_7c = 0;
  piVar1 = *(int **)((int)this + 0xad8);
  if (piVar1 == param_1) {
    return;
  }
  ExceptionList = &local_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_c;
    FUN_0084b1b0(piVar1,0);
    (**(code **)(*(int *)this + 0x104))();
    if ((*(int *)((int)this + 0xc98) != 0) && (param_1 != (int *)0x0)) {
      puVar3 = (uint *)(**(code **)(**(int **)((int)this + 0xad8) + 0x1cc))();
      local_7c = *puVar3;
      pfVar4 = (float *)(**(code **)(*param_1 + 0x1cc))();
      if (*pfVar4 < (float)&stack0xffffff6c) {
        FUN_00401de0(&pcStack_6c,"star",0xffffffff);
        uStack_4 = 0;
        FUN_00558a50(DAT_00f88624,&pcStack_6c,(undefined4 *)0x1);
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_6c);
        }
        FUN_00401de0(apvStack_2c,"grudge_worse_trailer",0xffffffff);
        uStack_4 = 1;
        FUN_00401de0(apvStack_4c,"forgiveworsetrailer",0xffffffff);
        FUN_00401de0(&pcStack_6c,"dislikeworsetrailer",0xffffffff);
        pvVar5 = DAT_00f88624;
        iVar6 = *(int *)((int)this + 0xc98);
        ppvVar16 = apvStack_2c;
        uStack_4 = CONCAT31(uStack_4._1_3_,3);
        fVar10 = FUN_00558610(DAT_00f88624,apvStack_4c,0.0);
        fVar15 = (float)fVar10;
        fVar10 = FUN_00558610(pvVar5,&pcStack_6c,0.0);
        fVar14 = (float)fVar10;
        pvVar5 = (void *)FUN_00472a30(iVar6);
        CGrudges_AddOrRefreshGrudge(pvVar5,fVar14,fVar15,ppvVar16);
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_6c);
        }
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        uStack_4 = 0xffffffff;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
      }
    }
  }
  (**(code **)(*(int *)((int)this + 0xac4) + 4))();
  *(int **)((int)this + 0xad8) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xac4))();
  uStack_64 = 0x20;
  uStack_68 = 0;
  acStack_60[0] = '\0';
  if (*(int *)((int)this + 0xad8) != 0) {
    pcStack_6c = acStack_60;
    pcStack_6c = _malloc(0x20);
    _strncpy(pcStack_6c,"PIP_STAR_TRAILER_INCREASED",0x1a);
    uStack_68 = 0x1a;
    pcStack_6c[0x1a] = '\0';
    iVar6 = *(int *)((int)this + 0xb44);
    uStack_4 = 4;
    do {
      if (iVar6 == *(int *)((int)this + 0xb48)) {
LAB_00591444:
        uStack_4 = 0xffffffff;
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_6c);
        }
        FUN_0084b1b0(*(void **)((int)this + 0xad8),(int)this);
        iVar6 = *(int *)((int)this + 0xad8);
        if (*(undefined4 **)(iVar6 + 0x508) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar6 + 0x508) = *(undefined4 *)(iVar6 + 0x504);
        }
        if (*(int *)(iVar6 + 0x504) != 0) {
          *(undefined4 *)(*(int *)(iVar6 + 0x504) + 4) = *(undefined4 *)(iVar6 + 0x508);
        }
        *(undefined4 *)(iVar6 + 0x504) = 0;
        *(undefined4 *)(iVar6 + 0x508) = 0;
        piVar7 = (int *)(*(int *)((int)this + 0xad8) + 0x504);
        piVar1 = (int *)((int)this + 0xaf0);
        *(int **)(*(int *)((int)this + 0xad8) + 0x508) = piVar1;
        *piVar7 = *piVar1;
        *(int **)(*piVar1 + 4) = piVar7;
        *piVar1 = (int)piVar7;
        pvVar5 = (void *)FUN_0059c530((int)this);
        uVar8 = FUN_00529ef0(*(int *)((int)this + 0xad8));
        FUN_00843010(pvVar5,uVar8);
        pvVar5 = operator_new(0x158);
        uStack_4 = 5;
        if (pvVar5 != (void *)0x0) {
          puVar9 = DesireVisitTrailer_Constructor(pvVar5,this,*(int *)((int)this + 0xad8));
          uStack_4 = 0xffffffff;
          TMCharacter_AddResidentDesire(this,(int)puVar9);
          ExceptionList = local_c;
          return;
        }
        uStack_4 = 0xffffffff;
        TMCharacter_AddResidentDesire(this,0);
        ExceptionList = local_c;
        return;
      }
      pvVar5 = *(void **)(iVar6 + 0x14);
      if ((pvVar5 != (void *)0x0) && (*(int *)((int)pvVar5 + 0x174) == 7)) {
        FUN_009521b0(pvVar5,&pcStack_6c,0);
        goto LAB_00591444;
      }
      iVar6 = iVar6 + 0x18;
    } while( true );
  }
  pcStack_6c = acStack_60;
  pcStack_6c = _malloc(0x20);
  _strncpy(pcStack_6c,"PIP_STAR_TRAILER_DECREASED",0x1a);
  uStack_68 = 0x1a;
  pcStack_6c[0x1a] = '\0';
  iVar6 = *(int *)((int)this + 0xb44);
  uStack_4 = 6;
  for (; iVar6 != *(int *)((int)this + 0xb48); iVar6 = iVar6 + 0x18) {
    pvVar5 = *(void **)(iVar6 + 0x14);
    if ((pvVar5 != (void *)0x0) && (*(int *)((int)pvVar5 + 0x174) == 7)) {
      FUN_009521b0(pvVar5,&pcStack_6c,0);
      break;
    }
  }
  uStack_4 = 0xffffffff;
  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_6c);
  }
  pvVar5 = (void *)FUN_0059c530((int)this);
  if (pvVar5 != (void *)0x0) {
    pbVar11 = &stack0xffffff5c;
    uVar12 = 0;
    uVar13 = 0x14;
    FUN_004015d0(&stack0xffffff50,"trailertantrum",0xe);
    puVar9 = FUN_008b9250(pbVar11,uVar12,uVar13);
    FUN_00843010(pvVar5,puVar9);
  }
  (**(code **)(*(int *)this + 0x104))();
  iVar6 = FUN_005998e0((int)this);
  if (iVar6 != 0) {
    pcStack_6c = acStack_60;
    acStack_60[0] = '\0';
    uStack_68 = 0;
    uStack_64 = 0x14;
    _strncpy(pcStack_6c,"visittrailer",0xc);
    uStack_68 = 0xc;
    pcStack_6c[0xc] = '\0';
    ppcVar17 = &pcStack_6c;
    uStack_4 = 7;
    local_7c = 1;
    iVar6 = FUN_005998e0((int)this);
    iVar6 = FUN_00401c30(iVar6);
    uVar8 = FUN_00401ec0((undefined4 *)(iVar6 + 100),ppcVar17);
    bVar2 = true;
    if ((char)uVar8 != '\0') goto LAB_005916be;
  }
  bVar2 = false;
LAB_005916be:
  uStack_4 = 0xffffffff;
  if (((local_7c & 1) != 0) && (0x14 < uStack_64)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_6c);
  }
  if (bVar2) {
    puVar9 = (undefined4 *)FUN_005998e0((int)this);
    TMCharacter_CancelAction(this,puVar9);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION CStar_ComputeStarRating @ 00591720 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CStar_ComputeStarRating(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float unaff_ESI;
  float *unaff_retaddr;
  float fVar5;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)FUN_00587d40(param_1,&local_4);
  local_8 = _DAT_00e53e88 * *pfVar1;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  pfVar1 = FUN_0058f9f0(param_1,&local_4);
  fVar3 = _DAT_00e53e8c * *pfVar1;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  local_8 = fVar3 + local_8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  piVar4 = (int *)param_1[799];
  if ((int *)param_1[799] == (int *)0x0) {
    piVar4 = param_1;
  }
  iVar2 = FUN_0059bbd0(piVar4);
  fVar3 = (float)FUN_00430600(iVar2);
  FUN_005909c0(param_1,&local_4,fVar3);
  local_4 = _DAT_00e53e90 * local_4;
  if (0.0 <= local_4) {
    if (1.0 < local_4) {
      local_4 = 1.0;
    }
  }
  else {
    local_4 = 0.0;
  }
  local_8 = local_4 + local_8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  pfVar1 = (float *)FUN_00587ee0(param_1,&local_4);
  fVar3 = _DAT_00e53e94 * *pfVar1;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  local_8 = fVar3 + local_8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  pfVar1 = (float *)FUN_00587e40(param_1,&local_4);
  fVar3 = _DAT_00e53e98 * *pfVar1;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  local_8 = fVar3 + local_8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  pfVar1 = CStar_GetAwardsRatingComponent(param_1,&local_4);
  fVar3 = _DAT_00e53e9c * *pfVar1;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  local_8 = fVar3 + local_8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  pfVar1 = (float *)(**(code **)(*param_1 + 0x240))(&local_4);
  fVar3 = _DAT_00e53ea0 * *pfVar1;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar3 = fVar3 + unaff_ESI;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  FUN_004950c0(param_1 + 0x2f7,&local_8);
  fVar5 = local_8 * _DAT_00e53ea4;
  if (0.0 <= fVar5) {
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  fVar5 = fVar5 + fVar3;
  if (0.0 <= fVar5) {
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  if ((void *)param_1[0x344] == (void *)0x0) {
    local_8 = (float)param_1[0x34e];
  }
  else {
    FUN_004914d0((void *)param_1[0x344],&local_8);
  }
  local_8 = local_8 * _DAT_00e53ea8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  local_8 = local_8 + fVar5;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  local_8 = local_8 + (float)param_1[0x333];
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
    *unaff_retaddr = local_8;
    return;
  }
  *unaff_retaddr = 0.0;
  return;
}


//// FUNCTION FUN_00591bf0 @ 00591bf0 ////

void __fastcall FUN_00591bf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)CStar_ComputeStarRating(param_1);
  param_1[0x334] = *piVar1;
  return;
}


//// FUNCTION FUN_00591c10 @ 00591c10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00591c10(void *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float local_2c;
  float local_28;
  undefined4 local_1c;
  float local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb39ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  fVar13 = FUN_00990e30(DAT_0104d028,DAT_0104d02c);
  fVar1 = (float)fVar13;
  iVar4 = FUN_00990d30(0,3);
  if (iVar4 == 2) {
    iVar12 = 0;
  }
  else {
    iVar12 = iVar4 + 1;
    if (iVar12 == 2) {
      iVar10 = 0;
      goto LAB_00591c60;
    }
  }
  iVar10 = iVar12 + 1;
LAB_00591c60:
  fVar13 = FUN_00990e30(0.0,fVar1);
  local_18[iVar4] = (float)fVar13;
  fVar13 = FUN_00990e30(0.0,(float)((float10)fVar1 - fVar13));
  local_18[iVar12] = (float)fVar13;
  local_18[iVar10] = (float)(((float10)fVar1 - (float10)local_18[iVar4]) - fVar13);
  fVar13 = FUN_00990e30(0.0,local_18[0]);
  fVar1 = (float)fVar13;
  fVar13 = FUN_00990e30(0.0,local_18[0] - fVar1);
  fVar15 = (float)fVar13;
  local_28 = (float)((float10)local_18[0] - (fVar13 + (float10)fVar1));
  local_2c = fVar15;
  if (0.5 < fVar15) {
    local_2c = 0.5;
    local_28 = (fVar15 - 0.5) + local_28;
  }
  fVar15 = local_28;
  if (0.5 < local_28) {
    local_28 = 0.5;
    fVar15 = (fVar15 - 0.5) * 0.5;
    local_18[1] = local_18[1] + fVar15;
    local_18[2] = fVar15 + local_18[2];
  }
  FUN_005872b0(param_1,fVar1,0.0);
  if (0.0 <= local_2c) {
    if (1.0 < local_2c) {
      local_2c = 1.0;
    }
  }
  else {
    local_2c = 0.0;
  }
  *(float *)((int)param_1 + 0xbc8) = local_2c;
  local_2c = 0.0;
  *(float *)((int)param_1 + 0xb3c) = 80.0 - local_28 * 40.0;
  fVar1 = _DAT_0104d030 * local_18[1];
  fVar15 = (float)DAT_00f88664;
  if (DAT_00f88664 < 0) {
    fVar15 = fVar15 + 4.2949673e+09;
  }
  iVar4 = 0;
  piVar7 = DAT_00f88660;
  do {
    piVar11 = (int *)*piVar7;
    if (piVar11 != piVar7) {
      do {
        iVar12 = piVar11[0xb];
        fVar13 = FUN_00990e30(0.0,1.0);
        if ((fVar13 < (float10)(2.0 / fVar15)) && (iVar4 < 2)) {
          fVar13 = FUN_00990e30(0.2,1.0);
          fVar14 = (float)fVar13;
          puVar5 = (undefined4 *)FUN_00449b40(iVar12);
          pvVar6 = (void *)FUN_00577370((int)param_1);
          FUN_00442490(pvVar6,puVar5,fVar14);
          local_2c = (float)fVar13 + local_2c;
          iVar4 = iVar4 + 1;
        }
        if (*(char *)((int)piVar11 + 0x31) == '\0') {
          piVar7 = (int *)piVar11[2];
          if (*(char *)((int)piVar7 + 0x31) == '\0') {
            cVar2 = *(char *)(*piVar7 + 0x31);
            piVar11 = piVar7;
            piVar7 = (int *)*piVar7;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*piVar7 + 0x31);
              piVar11 = piVar7;
              piVar7 = (int *)*piVar7;
            }
          }
          else {
            cVar2 = *(char *)(piVar11[1] + 0x31);
            piVar3 = (int *)piVar11[1];
            piVar7 = piVar11;
            while ((piVar11 = piVar3, cVar2 == '\0' && (piVar7 == (int *)piVar11[2]))) {
              cVar2 = *(char *)(piVar11[1] + 0x31);
              piVar3 = (int *)piVar11[1];
              piVar7 = piVar11;
            }
          }
        }
        piVar7 = DAT_00f88660;
      } while (piVar11 != DAT_00f88660);
    }
  } while (iVar4 < 2);
  piVar11 = (int *)*piVar7;
  if (piVar11 != piVar7) {
    do {
      iVar4 = piVar11[0xb];
      puVar8 = (undefined4 *)FUN_00449b40(iVar4);
      puVar5 = &local_1c;
      pvVar6 = (void *)FUN_00577370((int)param_1);
      pfVar9 = (float *)FUN_00441750(pvVar6,puVar5,puVar8);
      fVar15 = *pfVar9 * (fVar1 / local_2c);
      puVar5 = (undefined4 *)FUN_00449b40(iVar4);
      pvVar6 = (void *)FUN_00577370((int)param_1);
      FUN_00442490(pvVar6,puVar5,fVar15);
      if (*(char *)((int)piVar11 + 0x31) == '\0') {
        piVar7 = (int *)piVar11[2];
        if (*(char *)((int)piVar7 + 0x31) == '\0') {
          cVar2 = *(char *)(*piVar7 + 0x31);
          piVar11 = piVar7;
          piVar7 = (int *)*piVar7;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar7 + 0x31);
            piVar11 = piVar7;
            piVar7 = (int *)*piVar7;
          }
        }
        else {
          cVar2 = *(char *)(piVar11[1] + 0x31);
          piVar3 = (int *)piVar11[1];
          piVar7 = piVar11;
          while ((piVar11 = piVar3, cVar2 == '\0' && (piVar7 == (int *)piVar11[2]))) {
            cVar2 = *(char *)(piVar11[1] + 0x31);
            piVar3 = (int *)piVar11[1];
            piVar7 = piVar11;
          }
        }
      }
    } while (piVar11 != DAT_00f88660);
  }
  puVar5 = operator_new(0xa4);
  puVar8 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar8 = FUN_00420b80(puVar5);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)((int)param_1 + 0xcdc) + 4))();
  *(undefined4 **)((int)param_1 + 0xcf0) = puVar8;
  (*(code *)**(undefined4 **)((int)param_1 + 0xcdc))();
  fVar1 = _DAT_0104d034 * local_18[2];
  local_2c = 0.0;
  iVar4 = 0x8c;
  do {
    fVar13 = FUN_00990e30(0.0,1.0);
    if ((float10)0.0 <= fVar13) {
      if ((float10)1.0 < fVar13) {
        fVar13 = (float10)1.0;
      }
    }
    else {
      fVar13 = (float10)0.0;
    }
    *(float *)(iVar4 + *(int *)((int)param_1 + 0xcf0)) = (float)fVar13;
    local_2c = local_2c + *(float *)(iVar4 + *(int *)((int)param_1 + 0xcf0));
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0xa4);
  fVar1 = fVar1 / local_2c;
  pfVar9 = (float *)(*(int *)((int)param_1 + 0xcf0) + 0x8c);
  fVar15 = fVar1 * *pfVar9;
  if (0.0 <= fVar15) {
    if (1.0 < fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  *pfVar9 = fVar15;
  pfVar9 = (float *)(*(int *)((int)param_1 + 0xcf0) + 0x90);
  fVar15 = fVar1 * *pfVar9;
  if (0.0 <= fVar15) {
    if (1.0 < fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  *pfVar9 = fVar15;
  pfVar9 = (float *)(*(int *)((int)param_1 + 0xcf0) + 0x94);
  fVar15 = fVar1 * *pfVar9;
  if (0.0 <= fVar15) {
    if (1.0 < fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  *pfVar9 = fVar15;
  pfVar9 = (float *)(*(int *)((int)param_1 + 0xcf0) + 0x98);
  fVar15 = fVar1 * *pfVar9;
  if (0.0 <= fVar15) {
    if (1.0 < fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  *pfVar9 = fVar15;
  pfVar9 = (float *)(*(int *)((int)param_1 + 0xcf0) + 0x9c);
  fVar15 = fVar1 * *pfVar9;
  if (0.0 <= fVar15) {
    if (1.0 < fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  *pfVar9 = fVar15;
  pfVar9 = (float *)(*(int *)((int)param_1 + 0xcf0) + 0xa0);
  fVar1 = fVar1 * *pfVar9;
  if (fVar1 < 0.0) {
    *pfVar9 = 0.0;
    ExceptionList = local_c;
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *pfVar9 = fVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005921f0 @ 005921f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_005921f0(int *param_1)

{
  char cVar1;
  int *piVar2;
  void *this;
  void *this_00;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float local_24;
  float local_20;
  float local_10;
  float local_c [3];
  
  this = (void *)FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                              &TM::CWannabe::RTTI_Type_Descriptor,0);
  this_00 = (void *)FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                                 &TM::CExtra::RTTI_Type_Descriptor,0);
  fVar11 = FUN_00990e30(DAT_0104d028,DAT_0104d02c);
  fVar14 = (float)fVar11;
  iVar3 = FUN_00990d30(0,3);
  if (iVar3 == 2) {
    iVar10 = 0;
  }
  else {
    iVar10 = iVar3 + 1;
    if (iVar10 == 2) {
      iVar8 = 0;
      goto LAB_0059225d;
    }
  }
  iVar8 = iVar10 + 1;
LAB_0059225d:
  fVar11 = FUN_00990e30(0.0,fVar14);
  local_c[iVar3] = (float)fVar11;
  fVar11 = FUN_00990e30(0.0,(float)((float10)fVar14 - fVar11));
  local_c[iVar10] = (float)fVar11;
  local_c[iVar8] = (float)(((float10)fVar14 - (float10)local_c[iVar3]) - fVar11);
  fVar11 = FUN_00990e30(0.0,local_c[0]);
  fVar14 = (float)fVar11;
  fVar11 = FUN_00990e30(0.0,local_c[0] - fVar14);
  fVar13 = (float)fVar11;
  local_24 = (float)((float10)local_c[0] - (fVar11 + (float10)fVar14));
  local_20 = fVar13;
  if (0.5 < fVar13) {
    local_20 = 0.5;
    local_24 = (fVar13 - 0.5) + local_24;
  }
  fVar13 = local_24;
  if (0.5 < local_24) {
    local_24 = 0.5;
    fVar13 = (fVar13 - 0.5) * 0.5;
    local_c[1] = local_c[1] + fVar13;
    local_c[2] = fVar13 + local_c[2];
  }
  uVar12 = extraout_ECX;
  FUN_00407070(&stack0xffffffc8,fVar14);
  if (this == (void *)0x0) {
    FUN_0056f4e0(this_00,uVar12);
    uVar12 = extraout_ECX_01;
    FUN_00407070(&stack0xffffffc8,local_20);
    FUN_0056f4d0(this_00,uVar12);
    FUN_0056f4f0(this_00,80.0 - local_24 * 40.0);
  }
  else {
    FUN_005a08d0(this,uVar12);
    uVar12 = extraout_ECX_00;
    FUN_00407070(&stack0xffffffc8,local_20);
    FUN_005a0760(this,uVar12);
    FUN_005a0770(this,80.0 - local_24 * 40.0);
  }
  local_10 = _DAT_0104d030 * local_c[1];
  local_24 = 0.0;
  fVar14 = (float)DAT_00f88664;
  if (DAT_00f88664 < 0) {
    fVar14 = fVar14 + 4.2949673e+09;
  }
  iVar3 = 0;
  piVar6 = DAT_00f88660;
  do {
    piVar9 = (int *)*piVar6;
    if (piVar9 != piVar6) {
      do {
        iVar10 = piVar9[0xb];
        fVar11 = FUN_00990e30(0.2,1.0);
        if ((fVar11 < (float10)(2.0 / fVar14)) && (iVar3 < 2)) {
          fVar11 = FUN_00990e30(0.2,1.0);
          fVar13 = (float)fVar11;
          puVar4 = (undefined4 *)FUN_00449b40(iVar10);
          pvVar5 = (void *)FUN_00577370((int)param_1);
          FUN_00442490(pvVar5,puVar4,fVar13);
          local_24 = (float)fVar11 + local_24;
          iVar3 = iVar3 + 1;
        }
        if (*(char *)((int)piVar9 + 0x31) == '\0') {
          piVar6 = (int *)piVar9[2];
          if (*(char *)((int)piVar6 + 0x31) == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x31);
            piVar9 = piVar6;
            piVar6 = (int *)*piVar6;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar6 + 0x31);
              piVar9 = piVar6;
              piVar6 = (int *)*piVar6;
            }
          }
          else {
            cVar1 = *(char *)(piVar9[1] + 0x31);
            piVar2 = (int *)piVar9[1];
            piVar6 = piVar9;
            while ((piVar9 = piVar2, cVar1 == '\0' && (piVar6 == (int *)piVar9[2]))) {
              cVar1 = *(char *)(piVar9[1] + 0x31);
              piVar2 = (int *)piVar9[1];
              piVar6 = piVar9;
            }
          }
        }
        piVar6 = DAT_00f88660;
      } while (piVar9 != DAT_00f88660);
    }
  } while (iVar3 < 2);
  piVar9 = (int *)*piVar6;
  local_24 = local_10 / local_24;
  if (piVar9 != piVar6) {
    do {
      iVar3 = piVar9[0xb];
      puVar4 = (undefined4 *)FUN_00449b40(iVar3);
      pfVar7 = &local_10;
      pvVar5 = (void *)FUN_00577370((int)param_1);
      pfVar7 = (float *)FUN_00441750(pvVar5,pfVar7,puVar4);
      fVar14 = *pfVar7 * local_24;
      puVar4 = (undefined4 *)FUN_00449b40(iVar3);
      pvVar5 = (void *)FUN_00577370((int)param_1);
      FUN_00442490(pvVar5,puVar4,fVar14);
      if (*(char *)((int)piVar9 + 0x31) == '\0') {
        piVar6 = (int *)piVar9[2];
        if (*(char *)((int)piVar6 + 0x31) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x31);
          piVar9 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x31);
            piVar9 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x31);
          piVar2 = (int *)piVar9[1];
          piVar6 = piVar9;
          while ((piVar9 = piVar2, cVar1 == '\0' && (piVar6 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x31);
            piVar2 = (int *)piVar9[1];
            piVar6 = piVar9;
          }
        }
      }
    } while (piVar9 != DAT_00f88660);
  }
  fVar14 = _DAT_0104d034 * local_c[2];
  local_24 = 0.0;
  iVar3 = 0x8c;
  if (this != (void *)0x0) {
    do {
      fVar11 = FUN_00990e30(0.0,1.0);
      if ((float10)0.0 <= fVar11) {
        if ((float10)1.0 < fVar11) {
          fVar11 = (float10)1.0;
        }
      }
      else {
        fVar11 = (float10)0.0;
      }
      local_10 = (float)fVar11;
      iVar10 = FUN_005a0bf0((int)this);
      *(float *)(iVar10 + iVar3) = local_10;
      iVar10 = FUN_005a0bf0((int)this);
      local_24 = local_24 + *(float *)(iVar10 + iVar3);
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0xa4);
    iVar3 = 0x8c;
    do {
      iVar10 = FUN_005a0bf0((int)this);
      fVar13 = (fVar14 / local_24) * *(float *)(iVar10 + iVar3);
      pfVar7 = (float *)(iVar10 + iVar3);
      if (0.0 <= fVar13) {
        if (1.0 < fVar13) {
          fVar13 = 1.0;
        }
      }
      else {
        fVar13 = 0.0;
      }
      iVar3 = iVar3 + 4;
      *pfVar7 = fVar13;
    } while (iVar3 < 0xa4);
    return;
  }
  do {
    fVar11 = FUN_00990e30(0.0,1.0);
    if ((float10)0.0 <= fVar11) {
      if ((float10)1.0 < fVar11) {
        fVar11 = (float10)1.0;
      }
    }
    else {
      fVar11 = (float10)0.0;
    }
    local_10 = (float)fVar11;
    iVar10 = FUN_0056f8b0((int)this_00);
    *(float *)(iVar10 + iVar3) = local_10;
    iVar10 = FUN_0056f8b0((int)this_00);
    local_24 = local_24 + *(float *)(iVar10 + iVar3);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0xa4);
  iVar3 = 0x8c;
  do {
    iVar10 = FUN_0056f8b0((int)this_00);
    fVar13 = (fVar14 / local_24) * *(float *)(iVar10 + iVar3);
    pfVar7 = (float *)(iVar10 + iVar3);
    if (0.0 <= fVar13) {
      if (1.0 < fVar13) {
        fVar13 = 1.0;
      }
    }
    else {
      fVar13 = 0.0;
    }
    iVar3 = iVar3 + 4;
    *pfVar7 = fVar13;
  } while (iVar3 < 0xa4);
  return;
}


//// FUNCTION FUN_00592780 @ 00592780 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00592780(void *this,undefined4 *param_1,undefined4 *param_2)

{
  FUN_00591010((void *)((int)this + 0xd5c),(int *)&param_2,param_2);
  if (param_2 == *(undefined4 **)((int)this + 0xd60)) {
    *param_1 = 0x3f800000;
    return param_1;
  }
  param_2 = (undefined4 *)
            ((float)(*(int *)(DAT_0104cdf4 + 0x3c) - param_2[0xb]) * _DAT_00e53e3c + _DAT_00e53e38);
  if (1.0 < (float)param_2) {
    param_2 = (undefined4 *)0x3f800000;
  }
  FUN_00407070(param_1,(float)param_2);
  return param_1;
}


//// FUNCTION FUN_00592810 @ 00592810 ////

int __thiscall FUN_00592810(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00591070((void *)((int)this + 0xd68),(int *)&param_1,param_1);
  puVar1 = param_1;
  if (param_1 == *(undefined4 **)((int)this + 0xd6c)) {
    return -1;
  }
  iVar2 = FUN_00566c70();
  return iVar2 - puVar1[0xb];
}


//// FUNCTION FUN_00592880 @ 00592880 ////

void __cdecl FUN_00592880(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d27020;
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


//// FUNCTION CStar_Tick @ 00592920 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void CStar_Tick(TMCharacter * character) */

void __fastcall CStar_Tick(TMCharacter *character)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  float10 fVar11;
  uint *puVar12;
  undefined1 *puVar13;
  float fVar14;
  TMCharacter *pTVar15;
  undefined4 local_38;
  undefined4 uStack_34;
  uint auStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
                    /* CStar_Tick - vtable slot 12 (offset 0xC), CStar's own override. Same pattern
                       as CExtra_Tick/CWannabe_Tick: calls CStaff_Tick first, then adds substantial
                       star-specific logic - star rating computation (CStar_ComputeStarRating),
                       fame/"twinkle" sparkle effects (STAR_TWINKLE_01, gated on a rating
                       threshold), studio-ownership comparison (GetPlayerStudio), and several
                       other virtual callbacks. Confirmed via the debugger DLL's vtable-capture
                       feature (2026-10-01) - CStar accounted for 57,288 of 195,690 total
                       CStaff_Tick-family calls in one real play session, the second-most active
                       character type after CStaff itself (96,490 calls). See
                       project_the_movies_re.md for the full character-hierarchy investigation. */
  if ((character->secondaryDecayingStat < 1.0) && (_DAT_00e53304 < character->secondaryDecayingStat)
     ) {
    FUN_00472920(&character->secondaryDecayingStat,DAT_00e53308);
  }
  CStaff_Tick(character);
  if (character->jobOrStudioId != 0) {
    FUN_0058cb00(character,'\0');
  }
  puVar3 = (undefined4 *)(**(code **)(*(int *)character + 0x264))(&local_38);
  *(undefined4 *)&character->field_0xb14 = *puVar3;
  if (*(int *)&character->field_0xbfc != 0) {
    *(int *)&character->field_0xbfc = *(int *)&character->field_0xbfc + -1;
  }
  puVar13 = &character->field_0xc1c;
  *(int *)puVar13 = *(int *)puVar13 + -1;
  if (*(int *)puVar13 < 0) {
    (**(code **)(*(int *)&character->field_0xc04 + 4))();
    *(undefined4 *)&character->field_0xc18 = 0;
    (*(code *)**(undefined4 **)&character->field_0xc04)();
  }
  cVar1 = (**(code **)(*(int *)character + 0x1dc))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)character + 0x1a4))(0);
    if (*(undefined4 **)&character->field_0x788 != (undefined4 *)0x0) {
      **(undefined4 **)&character->field_0x788 = *(undefined4 *)&character->field_0x784;
    }
    if (*(int *)&character->field_0x784 != 0) {
      *(undefined4 *)(*(int *)&character->field_0x784 + 4) = *(undefined4 *)&character->field_0x788;
    }
    *(undefined4 *)&character->field_0x784 = 0;
    *(undefined4 *)&character->field_0x788 = 0;
    pTVar15 = character;
    pvVar4 = (void *)FUN_007fd5d0();
    iVar5 = FUN_007fea40(pvVar4,(int)pTVar15);
    if (iVar5 != 0) {
      pTVar15 = character;
      pvVar4 = (void *)FUN_007fd5d0();
      FUN_008019e0(pvVar4,(float)pTVar15);
    }
  }
  bVar2 = FUN_00599190((int)character);
  if (!bVar2) {
    uVar6 = FUN_0043b490(&character->starRatingRecalcTimer);
    if ((char)uVar6 != '\0') {
      pfVar7 = (float *)CStar_ComputeStarRating((int *)character);
      character->starRating = *pfVar7;
    }
  }
  uVar6 = FUN_0043b490(&character->studioOwnershipCheckTimer);
  if ((char)uVar6 != '\0') {
    iVar5 = character->jobOrStudioId;
    iVar8 = GetPlayerStudio();
    if (iVar5 != iVar8) {
      FUN_00590e70((int *)character);
    }
  }
  if (*(int **)&character->field_0xcb0 != (int *)0x0) {
    (**(code **)(**(int **)&character->field_0xcb0 + 0x10))(character->starRating);
  }
  cVar1 = (**(code **)(*(int *)character + 0x13c))();
  if (cVar1 != '\0') {
    uVar6 = FUN_0043b490((uint *)&character->field_0xc24);
    if ((char)uVar6 != '\0') {
      FUN_0058ed20((int)character);
    }
    if ((*(int *)&character->field_0xb64 == 0) && (character->jobOrStudioId != 0)) {
      uVar9 = FUN_00508bf0((int)character);
      *(undefined4 *)&character->field_0xb64 = uVar9;
    }
    FUN_00490340(*(undefined4 **)&character->field_0xb68);
    FUN_0041ca00(*(int *)&character->field_0xb88);
    (**(code **)(**(int **)&character->field_0x85c + 0x50))();
    if (0 < *(int *)&character->field_0xbbc) {
      *(int *)&character->field_0xbbc = *(int *)&character->field_0xbbc + -1;
    }
    puVar3 = (undefined4 *)FUN_00586f30(character,(float *)&stack0xffffffc4);
    *(undefined4 *)&character->field_0xb9c = *puVar3;
    FUN_0058c410((int)character);
    FUN_0058c370((int *)character);
    if (*(int *)&character->field_0xc98 != 0) {
      iVar5 = FUN_00472a30(*(int *)&character->field_0xc98);
      if (iVar5 != 0) {
        iVar5 = FUN_00472a30(*(int *)&character->field_0xc98);
        FUN_0045c5a0(iVar5);
      }
      uVar6 = FUN_0043b490((uint *)&character->field_0xc54);
      if ((char)uVar6 != '\0') {
        FUN_004767d0(*(void **)&character->field_0xc98);
      }
    }
    (**(code **)(*(int *)character + 0x38))(&local_38);
    if (character->twinkleEffectHandle < 0) {
      if (0.95 <= character->starRating) {
        FUN_0041c9c0(auStack_30,"STAR_TWINKLE_01");
        auStack_30[0] = auStack_30[0] | 1;
        puVar13 = &DAT_00d17518;
        iVar8 = 0;
        puVar12 = auStack_30;
        iVar5 = 2;
        uStack_20 = local_38;
        uStack_1c = uStack_34;
        pvVar4 = (void *)FUN_004f3b20();
        iVar5 = FUN_004f3270(pvVar4,iVar5,(byte *)puVar12,iVar8,puVar13);
        character->twinkleEffectHandle = iVar5;
      }
    }
    else {
      FUN_009b0880(character->twinkleEffectHandle,(undefined4 *)&stack0xffffffc4);
      if (character->starRating < 0.95) {
        if (-1 < character->twinkleEffectHandle) {
          FUN_009b11d0(character->twinkleEffectHandle);
        }
        character->twinkleEffectHandle = -1;
      }
    }
    if (*(void **)&character->field_0xb80 != (void *)0x0) {
      puVar3 = (undefined4 *)
               FUN_0042b0d0(*(void **)&character->field_0xb80,(undefined4 *)&stack0xffffffc0);
      *(undefined4 *)&character->field_0xb10 = *puVar3;
    }
    iVar5 = FUN_005773c0((int)character);
    iVar8 = GetPlayerStudio();
    uVar10 = iVar5 == iVar8;
    pvVar4 = (void *)FUN_00575bd0((int)character);
    FUN_00505ef0(pvVar4,uVar10);
    if (*(int *)&character->field_0xc98 != 0) {
      iVar5 = FUN_004725b0(*(int *)&character->field_0xc98);
      fVar11 = FUN_00566d70(iVar5);
      fVar14 = (float)fVar11;
      iVar5 = 0;
      pvVar4 = (void *)FUN_00575bd0((int)character);
      FUN_00505f00(pvVar4,iVar5,fVar14);
    }
    if ((*(int *)&character->field_0x1f8 == 2) && (30.0 < *(float *)&character->field_0x108)) {
      FUN_0053ae70((int *)character);
      puVar13 = &character->field_0x48;
      *(int *)puVar13 = *(int *)puVar13 + -1;
      if (*(int *)puVar13 == 0) {
        (*(code *)**(undefined4 **)character)(1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00592d60 @ 00592d60 ////

void FUN_00592d60(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00589820(param_1);
  }
  return;
}


//// FUNCTION FUN_00592d90 @ 00592d90 ////

void __fastcall FUN_00592d90(int param_1)

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
    FUN_00589820(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00592de0 @ 00592de0 ////

undefined4 * FUN_00592de0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00592880(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_00592e10 @ 00592e10 ////

void FUN_00592e10(void)

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
  puStack_8 = &LAB_00cb39c8;
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


//// FUNCTION FUN_00592e80 @ 00592e80 ////

void __thiscall
FUN_00592e80(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cb39e8;
  local_c = ExceptionList;
  if (0x71c71c5 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_005910e0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
                        param_4,0);
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
  cVar1 = *(char *)(piVar3[1] + 0x30);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x30) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0xc] == '\0') {
LAB_00592f7b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00420560(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_00420600(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_00592f7b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00420600(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_00420560(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00593030 @ 00593030 ////

void __fastcall FUN_00593030(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d27a14;
  while (piVar1 != param_1 + 5) {
    *piVar1 = 0;
    piVar1 = (int *)piVar1[1];
    *(undefined4 *)(*piVar1 + 4) = 0;
  }
  param_1[2] = 0;
  param_1[5] = 0;
  FUN_00406010((int)param_1);
  return;
}


//// FUNCTION FUN_00593080 @ 00593080 ////

void __fastcall FUN_00593080(int param_1)

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
    FUN_00589820(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005930e0 @ 005930e0 ////

undefined4 * __thiscall FUN_005930e0(void *this,byte param_1)

{
  FUN_00593030(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00593150 @ 00593150 ////

void __thiscall FUN_00593150(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cb3a08;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d27020;
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
      FUN_00592e10();
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
        iVar3 = FUN_00586c70((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_00591130(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00592880(puVar5,param_2,(int)&local_34);
      FUN_00591130((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00592d60(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_00591130((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00592de0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00589aa0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_00591130((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00586ec0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00589aa0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_00593480 @ 00593480 ////

void __thiscall FUN_00593480(void *this,undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 *local_8;
  bool local_4;
  undefined3 uStack_3;
  
  puVar5 = *(undefined4 **)((int)this + 4);
  local_4 = true;
  if (*(char *)((int)puVar5[1] + 0x31) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_005934e4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_005934e9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_005934e4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_005934e9:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x31) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_00592e80(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00586dd0((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00592e80(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_005935a0 @ 005935a0 ////

void __fastcall FUN_005935a0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  while ((param_1[0x2d1] != 0 && ((param_1[0x2d2] - param_1[0x2d1]) / 0x18 != 0))) {
    if (*(undefined4 **)(param_1[0x2d1] + 0x14) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1[0x2d1] + 0x14))(1);
    }
    piVar1 = (int *)param_1[0x2d1];
    (**(code **)(*piVar1 + 4))();
    piVar1[5] = 0;
    (**(code **)*piVar1)();
    piVar2 = (int *)param_1[0x2d2];
    piVar1 = (int *)param_1[0x2d1] + 6;
    piVar4 = (int *)param_1[0x2d1];
    while (piVar1 != piVar2) {
      (**(code **)(*piVar4 + 4))();
      piVar4[5] = piVar4[0xb];
      (**(code **)*piVar4)();
      piVar1 = piVar4 + 0xc;
      piVar4 = piVar4 + 6;
    }
    puVar3 = (undefined4 *)param_1[0x2d2];
    for (puVar5 = puVar3 + -6; puVar5 != puVar3; puVar5 = puVar5 + 6) {
      FUN_00589820(puVar5);
    }
    param_1[0x2d2] = param_1[0x2d2] + -0x18;
  }
  if (DAT_010507c0 != (void *)0x0) {
    FUN_00955c10(DAT_010507c0,param_1);
  }
  return;
}


//// FUNCTION FUN_00593690 @ 00593690 ////

void __thiscall FUN_00593690(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_005936d5;
    }
  }
  iVar1 = 0;
LAB_005936d5:
  FUN_00593150(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_00593700 @ 00593700 ////

undefined4 * __thiscall FUN_00593700(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00592e80(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_00592e80(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_00592e80(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00586dd0((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_00592e80(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00592e80(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00420690((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00593882;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_00592e80(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00592e80(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00593882:
  puVar4 = (undefined4 *)FUN_00593480(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_005938b0 @ 005938b0 ////

void __thiscall FUN_005938b0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0057aa10(this,param_1);
  if ((param_1 == 0) || (iVar2 = GetPlayerStudio(), param_1 != iVar2)) {
    if (*(int *)((int)this + 0xad8) != 0) {
      (**(code **)(*(int *)this + 0x26c))(0);
    }
    FUN_005935a0(this);
  }
  if (param_1 == 0) {
    if (*(int *)((int)this + 0xb2c) != 0) {
      if (*(undefined4 **)((int)this + 0xb30) != (undefined4 *)0x0) {
        **(undefined4 **)((int)this + 0xb30) = *(undefined4 *)((int)this + 0xb2c);
      }
      if (*(int *)((int)this + 0xb2c) != 0) {
        *(undefined4 *)(*(int *)((int)this + 0xb2c) + 4) = *(undefined4 *)((int)this + 0xb30);
      }
      *(undefined4 *)((int)this + 0xb2c) = 0;
      *(undefined4 *)((int)this + 0xb30) = 0;
    }
  }
  else {
    piVar1 = (int *)((int)this + 0xb2c);
    if (*(int *)((int)this + 0xb2c) == 0) {
      *(int ***)((int)this + 0xb30) = &DAT_0104d09c;
      *piVar1 = (int)DAT_0104d09c;
      *(int **)((int)DAT_0104d09c + 4) = piVar1;
      DAT_0104d09c = piVar1;
    }
    iVar2 = GetPlayerStudio();
    if (param_1 == iVar2) {
      return;
    }
  }
  if (*(int *)((int)this + 0xb1c) != 0) {
    if (*(undefined4 **)((int)this + 0xb20) != (undefined4 *)0x0) {
      **(undefined4 **)((int)this + 0xb20) = *(undefined4 *)((int)this + 0xb1c);
    }
    if (*(int *)((int)this + 0xb1c) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0xb1c) + 4) = *(undefined4 *)((int)this + 0xb20);
    }
    *(undefined4 *)((int)this + 0xb1c) = 0;
    *(undefined4 *)((int)this + 0xb20) = 0;
  }
  return;
}


//// FUNCTION FUN_005939a0 @ 005939a0 ////

void __thiscall FUN_005939a0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00592880(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_00593690(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00593a30 @ 00593a30 ////

int * __thiscall FUN_00593a30(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [20];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3a28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_00589920(this,param_1);
  if (piVar2 != *(int **)((int)this + 4)) {
    uVar3 = FUN_00441060(puVar1,piVar2 + 3);
    if ((char)uVar3 == '\0') {
      ExceptionList = local_c;
      return piVar2 + 0xb;
    }
  }
  local_30 = local_24;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,(char *)*puVar1,puVar1[1]);
  local_10 = 0;
  local_4 = 0;
  piVar2 = FUN_00593700(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_00593b00 @ 00593b00 ////

int __thiscall FUN_00593b00(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  
  iVar4 = param_1;
  if (*(int *)((int)this + 0xb90) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (*(int *)((int)this + 0xb94) - *(int *)((int)this + 0xb90)) / 0xc;
  }
  uStack_18 = 0x593b3f;
  iVar1 = FUN_00449b50(param_1);
  if (iVar5 < iVar1) {
    uStack_18 = 0x593b4a;
    uVar2 = FUN_00449b50(iVar4);
    fVar6 = DAT_00e4fa4c;
    pfVar3 = (float *)FUN_0043b520(&param_1,0.1);
    FUN_00495060(auStack_20,0.0,*pfVar3,fVar6);
    FUN_0051a4c0((void *)((int)this + 0xb8c),uVar2);
  }
  uStack_18 = 0x593b8b;
  iVar4 = FUN_00449b50(iVar4);
  return *(int *)((int)this + 0xb90) + (iVar4 + -1) * 0xc;
}


//// FUNCTION FUN_00593ba0 @ 00593ba0 ////

void __fastcall FUN_00593ba0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb3b6a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d27a5c;
  param_1[0x1e] = &PTR_LAB_00d27a38;
  param_1[0x28] = &PTR_LAB_00d27a20;
  puVar2 = (undefined4 *)param_1[0x2d9];
  local_4 = 0x14;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x2d9] = 0;
  }
  if (-1 < (int)param_1[0x308]) {
    FUN_009b11d0(param_1[0x308]);
  }
  param_1[0x308] = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x2da]);
}


//// FUNCTION FUN_005944a0 @ 005944a0 ////

undefined4 * __thiscall FUN_005944a0(void *this,undefined4 *param_1)

{
  FUN_00585570(this,param_1);
  return param_1;
}


//// FUNCTION CStar_GetThoughtBubbleKey @ 005944d0 ////

undefined4 * CStar_GetThoughtBubbleKey(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 3;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,"THOUGHTACTOR",0xc);
  return param_1;
}


//// FUNCTION FUN_005945a0 @ 005945a0 ////

void __thiscall FUN_005945a0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_0104cdf4 + 0x3c);
  piVar1 = FUN_00593a30((void *)((int)this + 0xd5c),param_1);
  *piVar1 = *piVar2;
  return;
}


//// FUNCTION FUN_005945d0 @ 005945d0 ////

void __thiscall FUN_005945d0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_00593a30((void *)((int)this + 0xd68),param_1);
  iVar2 = FUN_00566c70();
  *piVar1 = iVar2;
  return;
}


//// FUNCTION FUN_005945f0 @ 005945f0 ////

void __thiscall FUN_005945f0(void *this,int *param_1)

{
  int iVar1;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3b88;
  local_c = ExceptionList;
  if (param_1 != (int *)0x0) {
    for (iVar1 = *(int *)((int)this + 0xb44); iVar1 != *(int *)((int)this + 0xb48);
        iVar1 = iVar1 + 0x18) {
      if (*(int *)(*(int *)(iVar1 + 0x14) + 0x174) == param_1[0x5d]) {
        ExceptionList = &local_c;
        (**(code **)*param_1)(1);
        ExceptionList = local_10;
        return;
      }
    }
    local_1c = param_1 + 6;
    local_18 = &local_24;
    local_10 = param_1;
    local_24 = &PTR_LAB_00d27020;
    local_20 = *local_1c;
    ExceptionList = &local_c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
    local_4 = 0;
    FUN_005939a0((void *)((int)this + 0xb40),(int)&local_24);
    local_4 = 0xffffffff;
    local_24 = &PTR_LAB_00d27020;
    if (local_1c != (int *)0x0) {
      *local_1c = local_20;
    }
    if (local_20 != 0) {
      *(int **)(local_20 + 4) = local_1c;
    }
    local_10 = (int *)0x0;
    local_20 = 0;
    local_1c = (int *)0x0;
    FUN_00956840(DAT_010507c0,param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00594700 @ 00594700 ////

void __fastcall FUN_00594700(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 5;
  param_1[7] = 0;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[2] = puVar1;
  *puVar1 = param_1 + 1;
  *param_1 = &PTR_LAB_00d27a14;
  return;
}


//// FUNCTION FUN_00594760 @ 00594760 ////

int * __fastcall FUN_00594760(int *param_1)

{
  float *pfVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  float fVar8;
  char *pcVar9;
  float fVar10;
  undefined1 *local_5c;
  int *local_58;
  undefined1 *local_54;
  float local_50;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3d6c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_58 = param_1;
  FUN_00580fb0(param_1);
  *param_1 = (int)&PTR_FUN_00d27a5c;
  param_1[0x1e] = (int)&PTR_LAB_00d27a38;
  param_1[0x28] = (int)&PTR_LAB_00d27a20;
  param_1[0x289] = (int)(param_1 + 0x28c);
  *(undefined2 *)(param_1 + 0x28c) = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 10;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0043b510(param_1 + 0x291);
  param_1[0x295] = 0;
  param_1[0x293] = 0;
  param_1[0x294] = 0;
  piVar6 = param_1 + 0x297;
  param_1[0x299] = 0;
  *piVar6 = 0;
  param_1[0x298] = 0;
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  param_1[0x29e] = 0;
  param_1[0x292] = (int)&PTR_LAB_00d26740;
  param_1[0x294] = (int)piVar6;
  *piVar6 = (int)(param_1 + 0x293);
  local_4._0_1_ = 4;
  _eh_vector_constructor_iterator_(param_1 + 0x29f,0x20,2,FUN_00401dc0,FUN_00401490);
  local_4._0_1_ = 5;
  param_1[0x2af] = 0;
  FUN_0043b510(param_1 + 0x2b0);
  param_1[0x2b4] = 0;
  param_1[0x2b2] = 0;
  param_1[0x2b3] = 0;
  param_1[0x2b4] = (int)(param_1 + 0x2b1);
  param_1[0x2b1] = (int)&PTR_FUN_00d26fd0;
  param_1[0x2b6] = 0;
  param_1[0x2ba] = 0;
  param_1[0x2b8] = 0;
  param_1[0x2b9] = 0;
  piVar6 = param_1 + 700;
  param_1[0x2be] = 0;
  *piVar6 = 0;
  param_1[0x2bd] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = 0;
  param_1[0x2b7] = (int)&PTR_LAB_00d27a14;
  param_1[0x2b9] = (int)piVar6;
  *piVar6 = (int)(param_1 + 0x2b8);
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c9] = 0;
  param_1[0x2c7] = 0;
  param_1[0x2c8] = 0;
  param_1[0x2cd] = 0;
  param_1[0x2cb] = 0;
  param_1[0x2cc] = 0;
  param_1[0x2cf] = 0x42700000;
  param_1[0x2d1] = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d3] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d9] = 0;
  param_1[0x2de] = 0;
  param_1[0x2dc] = 0;
  param_1[0x2dd] = 0;
  param_1[0x2de] = (int)(param_1 + 0x2db);
  param_1[0x2db] = (int)&PTR_LAB_00d26fe0;
  param_1[0x2e0] = 0;
  param_1[0x2e4] = 0;
  param_1[0x2e5] = 0;
  param_1[0x2e6] = 0;
  param_1[0x2e7] = 0;
  param_1[0x2e8] = 0;
  param_1[0x2e9] = -1;
  param_1[0x2ea] = -1;
  param_1[0x2eb] = 0;
  param_1[0x2ec] = 0;
  param_1[0x2ed] = 0;
  param_1[0x2ee] = 0;
  param_1[0x2f0] = 0x3f800000;
  param_1[0x2f1] = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f3] = 0;
  local_4._0_1_ = 0xe;
  fVar8 = DAT_00e4fa4c;
  pfVar1 = (float *)FUN_0043b520(&local_5c,0.1);
  local_54 = &stack0xffffff80;
  FUN_00495060(param_1 + 0x2f4,0.0,*pfVar1,fVar8);
  fVar8 = DAT_00e4fa4c;
  pfVar1 = (float *)FUN_0043b520(&local_54,0.1);
  local_5c = &stack0xffffff80;
  FUN_00495060(param_1 + 0x2f7,0.0,*pfVar1,fVar8);
  fVar8 = DAT_00e4fa4c;
  pfVar1 = (float *)FUN_0043b520(&local_54,0.1);
  local_5c = &stack0xffffff80;
  FUN_00495060(param_1 + 0x2fa,0.0,*pfVar1,fVar8);
  param_1[0x2fd] = 0;
  param_1[0x2fe] = 0x3f800000;
  piVar6 = param_1 + 0x301;
  param_1[0x304] = 0;
  param_1[0x302] = 0;
  param_1[0x303] = 0;
  param_1[0x304] = (int)piVar6;
  *piVar6 = (int)&PTR_FUN_00d165ac;
  param_1[0x306] = 0;
  local_4._0_1_ = 0xf;
  FUN_0043b460(param_1 + 0x309);
  FUN_0043b440(param_1 + 0x30d,0x3c);
  FUN_0043b460(param_1 + 0x311);
  FUN_0043b460(param_1 + 0x315);
  *(undefined1 *)((int)param_1 + 0xc65) = 0;
  param_1[0x31d] = 0;
  param_1[0x31b] = 0;
  param_1[0x31c] = 0;
  param_1[0x31d] = (int)(param_1 + 0x31a);
  param_1[0x31a] = (int)&PTR_FUN_00d18c4c;
  param_1[799] = 0;
  *(undefined1 *)((int)param_1 + 0xc81) = 0;
  param_1[0x324] = 0;
  param_1[0x322] = 0;
  param_1[0x323] = 0;
  param_1[0x324] = (int)(param_1 + 0x321);
  param_1[0x321] = (int)&PTR_LAB_00d26ff0;
  param_1[0x326] = 0;
  param_1[0x32a] = 0;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  param_1[0x32a] = (int)(param_1 + 0x327);
  param_1[0x327] = (int)&PTR_FUN_00d1aef0;
  param_1[0x32c] = 0;
  param_1[0x330] = 0;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  param_1[0x330] = (int)(param_1 + 0x32d);
  param_1[0x32d] = (int)&PTR_LAB_00d27000;
  param_1[0x332] = 0;
  param_1[0x333] = 0;
  param_1[0x334] = 0;
  local_4._0_1_ = 0x13;
  param_1[0x335] = -0x40800000;
  FUN_0043b520(param_1 + 0x336,0.0);
  param_1[0x33a] = 0;
  param_1[0x338] = 0;
  param_1[0x339] = 0;
  param_1[0x33a] = (int)(param_1 + 0x337);
  param_1[0x337] = (int)&PTR_LAB_00d249b4;
  param_1[0x33c] = 0;
  param_1[0x33d] = 0;
  *(undefined1 *)(param_1 + 0x33e) = 0;
  param_1[0x342] = 0;
  param_1[0x340] = 0;
  param_1[0x341] = 0;
  param_1[0x342] = (int)(param_1 + 0x33f);
  param_1[0x33f] = (int)&PTR_LAB_00d27010;
  param_1[0x344] = 0;
  param_1[0x345] = -0x40800000;
  param_1[0x346] = -0x40800000;
  param_1[0x347] = -0x40800000;
  param_1[0x348] = -0x40800000;
  param_1[0x349] = -0x40800000;
  param_1[0x34a] = 0;
  param_1[0x34b] = 0;
  param_1[0x34c] = 0;
  param_1[0x34d] = 0;
  param_1[0x34e] = 0;
  param_1[0x352] = 0;
  param_1[0x350] = 0;
  param_1[0x351] = 0;
  param_1[0x352] = (int)(param_1 + 0x34f);
  param_1[0x34f] = (int)&PTR_FUN_00d1e55c;
  param_1[0x354] = 0;
  local_4._0_1_ = 0x16;
  param_1[0x355] = 0;
  FUN_0043b520(param_1 + 0x356,1900.0);
  iVar2 = FUN_004220b0();
  param_1[0x358] = iVar2;
  *(undefined1 *)(iVar2 + 0x31) = 1;
  *(int *)(param_1[0x358] + 4) = param_1[0x358];
  *(int *)param_1[0x358] = param_1[0x358];
  *(int *)(param_1[0x358] + 8) = param_1[0x358];
  param_1[0x359] = 0;
  local_4._0_1_ = 0x17;
  iVar2 = FUN_004220b0();
  param_1[0x35b] = iVar2;
  *(undefined1 *)(iVar2 + 0x31) = 1;
  *(int *)(param_1[0x35b] + 4) = param_1[0x35b];
  *(int *)param_1[0x35b] = param_1[0x35b];
  *(int *)(param_1[0x35b] + 8) = param_1[0x35b];
  param_1[0x35c] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d5] = 0;
  local_4 = CONCAT31(local_4._1_3_,0x18);
  param_1[0x2d8] = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  FUN_004015d0(param_1 + 0x29f,"",0);
  FUN_004015d0(param_1 + 0x2a7,"",0);
  param_1[0x2af] = 0;
  param_1[0x131] = 0;
  param_1[0x2c9] = (int)param_1;
  FUN_00acdb9e(0xe54044);
  local_54 = &stack0xffffff88;
  iVar2 = FUN_0097dda0();
  param_1[0x2ca] = iVar2;
  if (s___AV__InList_VCFacilityTrailer_T_00e54018[0x2a] != '\0') {
    iVar2 = 0xb1c;
    local_54 = &stack0xffffff84;
    pcVar9 = "StarLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe54044);
    local_54 = &stack0xffffff80;
    FUN_0097df60(pcVar3,pcVar9,iVar2);
    s___AV__InList_VCFacilityTrailer_T_00e54018[0x2a] = '\0';
  }
  param_1[0x2cd] = (int)param_1;
  FUN_00acdb9e(0xe54044);
  local_54 = &stack0xffffff88;
  iVar2 = FUN_0097dda0();
  param_1[0x2ce] = iVar2;
  if (s___AV__InList_VCFacilityTrailer_T_00e54018[0x29] != '\0') {
    iVar2 = 0xb2c;
    local_54 = &stack0xffffff84;
    pcVar9 = "StarLinkAll";
    pcVar3 = (char *)FUN_00acdb9e(0xe54044);
    local_54 = &stack0xffffff80;
    FUN_0097df60(pcVar3,pcVar9,iVar2);
    s___AV__InList_VCFacilityTrailer_T_00e54018[0x29] = '\0';
  }
  param_1[0x2ff] = 0;
  local_54 = operator_new(0x40);
  local_4._0_1_ = 0x19;
  if (local_54 == (undefined1 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_004902b0(local_54,param_1);
  }
  local_4._0_1_ = 0x18;
  param_1[0x2da] = (int)puVar4;
  local_54 = operator_new(0x28);
  local_4._0_1_ = 0x1a;
  if (local_54 == (undefined1 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_0041cc30(local_54,param_1);
  }
  param_1[0x2e2] = (int)puVar4;
  *(undefined1 *)(param_1 + 0x319) = 0;
  local_4._0_1_ = 0x18;
  FUN_0043b520(&local_54,DAT_00e53e14);
  FUN_00494f80((int)(param_1 + 0x2f4));
  FUN_0043b520(&local_54,DAT_00e53e14);
  FUN_00494f80((int)(param_1 + 0x2f7));
  FUN_0043b520(&local_54,DAT_00e53e20);
  FUN_00494f80((int)(param_1 + 0x2fa));
  param_1[0x2e1] = *(int *)param_1[0x2da];
  local_4c = local_40;
  param_1[0x2e7] = 0;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"star",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_4._0_1_ = 0x1b;
  FUN_00558a50(DAT_00f88624,&local_4c,(undefined4 *)0x1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"promiscuity_start_max",0x15);
  local_28 = 0x15;
  local_2c[0x15] = '\0';
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"promiscuity_start_min",0x15);
  local_48 = 0x15;
  local_4c[0x15] = '\0';
  local_4._0_1_ = 0x1d;
  local_5c = DAT_00f88624;
  fVar7 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  fVar8 = (float)fVar7;
  fVar7 = FUN_00558610(local_5c,&local_4c,0.0);
  fVar7 = FUN_00990e30((float)fVar7,fVar8);
  if ((float10)0.0 <= fVar7) {
    if ((float10)1.0 < fVar7) {
      fVar7 = (float10)1.0;
    }
  }
  else {
    fVar7 = (float10)0.0;
  }
  param_1[0x2e8] = (int)(float)fVar7;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"cutenessmax",0xb);
  local_48 = 0xb;
  local_4c[0xb] = '\0';
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"cutenessmin",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  fVar10 = 0.0;
  local_4._0_1_ = 0x1f;
  local_5c = DAT_00f88624;
  fVar7 = FUN_00558610(DAT_00f88624,&local_4c,0.0);
  fVar8 = (float)fVar7;
  fVar7 = FUN_00558610(local_5c,&local_2c,0.0);
  fVar7 = FUN_00990e30((float)fVar7,fVar8);
  FUN_005872b0(param_1,(float)fVar7,fVar10);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4._0_1_ = 0x18;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  fVar7 = FUN_00990e30(-1.0,1.0);
  param_1[0x2c6] = (int)(float)fVar7;
  fVar7 = FUN_00990e30(0.0,1.0);
  if ((float10)0.0 <= fVar7) {
    if ((float10)1.0 < fVar7) {
      fVar7 = (float10)1.0;
    }
  }
  else {
    fVar7 = (float10)0.0;
  }
  param_1[0x2f2] = (int)(float)fVar7;
  fVar7 = FUN_00990e30(0.0,1.0);
  if ((float10)0.0 <= fVar7) {
    if ((float10)1.0 < fVar7) {
      fVar7 = (float10)1.0;
    }
  }
  else {
    fVar7 = (float10)0.0;
  }
  param_1[0x2f3] = (int)(float)fVar7;
  CStar_RegisterFanInteractionActions((char *)param_1);
  local_2c = local_20;
  param_1[0x2ef] = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"staff",5);
  local_28 = 5;
  local_2c[5] = '\0';
  local_4._0_1_ = 0x20;
  FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"await_break_maximum",0x13);
  local_48 = 0x13;
  local_4c[0x13] = '\0';
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"await_break_minimum",0x13);
  local_28 = 0x13;
  local_2c[0x13] = '\0';
  local_4._0_1_ = 0x22;
  local_5c = DAT_00f88624;
  fVar7 = FUN_00558610(DAT_00f88624,&local_4c,0.0);
  fVar8 = (float)(fVar7 - (float10)1.0);
  fVar7 = FUN_00558610(local_5c,&local_2c,0.0);
  fVar7 = FUN_00990e30((float)fVar7,fVar8);
  pfVar1 = (float *)FUN_0043b520(&local_54,(float)fVar7);
  piVar5 = (int *)FUN_0043b600(&DAT_00e4fa4c,&local_50,pfVar1);
  param_1[0x2b0] = *piVar5;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4 = CONCAT31(local_4._1_3_,0x18);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_5c = DAT_00f88664;
  fVar8 = DAT_00e4fa4c;
  pfVar1 = (float *)FUN_0043b520(&local_50,0.1);
  FUN_00495060(&stack0xffffff80,0.0,*pfVar1,fVar8);
  FUN_0051a4c0(param_1 + 0x2e3,(uint)local_5c);
  param_1[0x300] = 0;
  (**(code **)(*piVar6 + 4))();
  param_1[0x306] = 0;
  (**(code **)*piVar6)();
  param_1[0x307] = 0;
  param_1[0x308] = -1;
  param_1[0x309] = 9;
  param_1[0x1c0] = 2;
  FUN_0043b470(param_1 + 0x30d);
  param_1[0x311] = 0xf;
  FUN_0043b470(param_1 + 0x311);
  param_1[0x315] = 0x14;
  FUN_0043b470(param_1 + 0x315);
  local_5c = (undefined1 *)0x0;
  piVar6 = param_1 + 0x34a;
  iVar2 = 5;
  do {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  fVar7 = FUN_00990e30(-1.0,1.0);
  pfVar1 = (float *)FUN_0043b520(&local_50,(float)fVar7);
  piVar6 = (int *)FUN_0043b600(&DAT_00e4fa4c,(float *)&local_54,pfVar1);
  param_1[0x356] = *piVar6;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00595360 @ 00595360 ////

undefined4 * __thiscall FUN_00595360(void *this,byte param_1)

{
  FUN_00593ba0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00595380 @ 00595380 ////

int * __cdecl FUN_00595380(int *param_1)

{
  int *piVar1;
  int *this;
  float *pfVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3d8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0xd74);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_00594760(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*this + 0xe0))(param_1);
  (**(code **)(*this + 0xe8))();
  piVar4 = param_1;
  if (param_1 != (int *)0x0) {
    this[0x218] = param_1[0x218];
    this[0x219] = param_1[0x219];
    pfVar2 = (float *)FUN_0043b520(&param_1,70.0);
    piVar3 = (int *)FUN_0043b600(this + 0x218,(float *)&stack0xffffffec,pfVar2);
    this[0x1f8] = *piVar3;
  }
  piVar3 = (int *)FUN_00ace790(piVar4,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CWannabe::RTTI_Type_Descriptor,0);
  if (piVar3 != (int *)0x0) {
    FUN_00588910(this,piVar3);
    ExceptionList = piVar1;
    return this;
  }
  piVar4 = (int *)FUN_00ace790(piVar4,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CExtra::RTTI_Type_Descriptor,0);
  if (piVar4 != (int *)0x0) {
    FUN_00588830(this,piVar4);
    ExceptionList = piVar1;
    return this;
  }
  FUN_00591c10(this);
  ExceptionList = piVar1;
  return this;
}


//// FUNCTION FUN_005954b0 @ 005954b0 ////

int * FUN_005954b0(undefined4 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  byte *local_a0;
  undefined4 local_9c;
  uint local_98;
  byte local_94 [20];
  int *local_80;
  float fStack_7c;
  float fStack_78;
  undefined1 *local_74;
  undefined4 local_70;
  uint local_6c;
  undefined1 local_68 [20];
  undefined1 *local_54;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48 [20];
  byte *local_34;
  undefined4 local_30;
  uint local_2c;
  byte local_28 [20];
  undefined1 auStack_14 [4];
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3e05;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = FUN_00595380((int *)0x2);
  local_74 = local_68;
  local_68[0] = 0;
  local_70 = 0;
  local_6c = 0x14;
  local_34 = local_28;
  local_4 = 0;
  local_28[0] = 0;
  local_30 = 0;
  local_2c = 0x14;
  local_54 = local_48;
  local_48[0] = 0;
  local_50 = 0;
  local_4c = 0x14;
  local_a0 = local_94;
  local_94[0] = 0;
  local_9c = 0;
  local_98 = 0x14;
  local_80 = piVar3;
  _strncpy((char *)local_a0,"template",8);
  local_9c = 8;
  local_a0[8] = 0;
  local_4._0_1_ = 3;
  iVar4 = FUN_0056ad60(param_1,&local_a0,&local_54);
  local_4._0_1_ = 2;
  if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  if ((char)iVar4 != '\0') {
    (**(code **)(*piVar3 + 0x18c))(&local_54);
  }
  local_a0 = local_94;
  local_94[0] = 0;
  local_9c = 0;
  local_98 = 0x14;
  _strncpy((char *)local_a0,"name",4);
  local_9c = 4;
  local_a0[4] = 0;
  local_4._0_1_ = 4;
  iVar4 = FUN_0056ad60(param_1,&local_a0,&local_74);
  local_4._0_1_ = 2;
  uVar2 = (undefined1)local_4;
  local_4._0_1_ = 2;
  if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  if ((char)iVar4 != '\0') {
    FUN_00568790(&local_a0,&local_74);
    local_4._0_1_ = 5;
    (**(code **)(*piVar3 + 0x60))(&local_a0);
    uVar2 = (undefined1)local_4;
    if (10 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0);
    }
  }
  local_4._0_1_ = uVar2;
  local_a0 = local_94;
  local_94[0] = 0;
  local_9c = 0;
  local_98 = 0x14;
  _strncpy((char *)local_a0,"gender",6);
  local_9c = 6;
  local_a0[6] = 0;
  local_4._0_1_ = 6;
  iVar4 = FUN_0056ad60(param_1,&local_a0,&local_34);
  if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  if ((char)iVar4 != '\0') {
    local_a0 = local_94;
    local_94[0] = 0;
    local_9c = 0;
    local_98 = 0x14;
    _strncpy((char *)local_a0,"female",6);
    local_9c = 6;
    local_a0[6] = 0;
    local_4._0_1_ = 7;
    pbVar7 = local_34;
    pbVar8 = local_a0;
    do {
      bVar1 = *pbVar7;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00595758:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0059575d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00595758;
      pbVar7 = pbVar7 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0059575d:
    (**(code **)(*local_80 + 0xe0))(iVar4 == 0);
    piVar3 = local_80;
    if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0);
    }
  }
  local_a0 = local_94;
  local_94[0] = 0;
  local_9c = 0;
  local_98 = 0x14;
  _strncpy((char *)local_a0,"birth",5);
  local_9c = 5;
  local_a0[5] = 0;
  local_4._0_1_ = 8;
  uVar5 = FUN_0056ae90(param_1,&local_a0,&fStack_78);
  local_4._0_1_ = 2;
  if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  if ((char)uVar5 != '\0') {
    FUN_0043b700(piVar3 + 0x218,fStack_78);
    pfVar6 = (float *)FUN_0043b520(auStack_14,70.0);
    piVar3 = (int *)FUN_0043b600(piVar3 + 0x218,&fStack_10,pfVar6);
    local_80[0x1f8] = *piVar3;
    piVar3 = local_80;
  }
  local_a0 = local_94;
  local_94[0] = 0;
  local_9c = 0;
  local_98 = 0x14;
  _strncpy((char *)local_a0,"weight",6);
  local_9c = 6;
  local_a0[6] = 0;
  local_4 = CONCAT31(local_4._1_3_,9);
  uVar5 = FUN_0056ae90(param_1,&local_a0,&fStack_7c);
  if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  if ((char)uVar5 != '\0') {
    piVar3[0x2cf] = (int)fStack_7c;
  }
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
  if (local_6c < 0x15) {
    ExceptionList = pvStack_c;
    return piVar3;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_74);
}


//// FUNCTION FUN_00595920 @ 00595920 ////

void FUN_00595920(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar2 = FUN_00595380((int *)0x2);
  piVar3 = (int *)GetPlayerStudio();
  (**(code **)(*piVar3 + 0x30))(piVar2);
  iVar1 = *piVar2;
  uVar4 = FUN_00538ef0((float *)&stack0xfffffff0,(float *)&DAT_0104cce0,0.0);
  (**(code **)(iVar1 + 0x2c))(uVar4);
  return;
}


//// FUNCTION Actor_ApplyEraGenreAffinities @ 00595970 ////

int * __cdecl Actor_ApplyEraGenreAffinities(undefined4 param_1,int param_2)

{
  int iVar1;
  int *this;
  float *pfVar2;
  int *piVar3;
  uint *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  void *unaff_ESI;
  uint **ppuVar9;
  undefined4 uVar10;
  float fVar11;
  uint *local_1c8;
  uint *puStack_1c4;
  undefined1 *puStack_1c0;
  uint uStack_1bc;
  uint auStack_1b8 [3];
  wchar_t *pwStack_1ac;
  uint uStack_1a8;
  undefined4 *puStack_1a4;
  undefined1 auStack_1a0 [4];
  void *pvStack_19c;
  uint uStack_194;
  char cStack_184;
  char cStack_180;
  char *pcStack_17c;
  uint uStack_178;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint *puStack_128;
  void *pvStack_124;
  uint uStack_11c;
  undefined4 auStack_fc [8];
  undefined1 auStack_dc [176];
  void *pvStack_2c;
  void *pvStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3e84;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_1c8 = operator_new(0xd74);
  local_4 = 0;
  if (local_1c8 == (uint *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_00594760((int *)local_1c8);
  }
  local_4 = 0xffffffff;
  (**(code **)(*this + 0xe8))();
  Timeline_InterpolateGenreColumnsAtDate(auStack_1a0,param_2);
  local_4 = 1;
  FUN_004015d0(this + 0x29f,pcStack_17c,uStack_178);
  FUN_004015d0(this + 0x2a7,"",0);
  pfVar2 = (float *)FUN_0043b520(&local_1c8,fStack_15c);
  piVar3 = (int *)FUN_0043b620(&DAT_00e4fa4c,(float *)&puStack_1a4,pfVar2);
  this[0x218] = *piVar3;
  pfVar2 = (float *)FUN_0043b520(&puStack_1a4,70.0);
  piVar3 = (int *)FUN_0043b600(this + 0x218,(float *)&local_1c8,pfVar2);
  this[0x1f8] = *piVar3;
  if (((((fStack_158 == 60.0) && (fStack_154 == 0.0)) && (fStack_150 == 0.0)) &&
      ((((fStack_14c == 0.0 && (fStack_148 == 0.0)) &&
        ((fStack_144 == 0.0 && ((fStack_140 == 0.0 && (fStack_13c == 0.0)))))) &&
       (fStack_12c == 0.0)))) &&
     ((((fStack_130 == 0.0 && (fStack_138 == 0.0)) && (fStack_134 == 0.0)) &&
      (((float)pvStack_124 == 0.0 && ((float)puStack_128 == 0.0)))))) {
    FUN_00591c10(this);
  }
  else {
    this[0x2cf] = (int)fStack_158;
    if (0.0 <= fStack_154) {
      if (1.0 < fStack_154) {
        fStack_154 = 1.0;
      }
    }
    else {
      fStack_154 = 0.0;
    }
    this[0x2f1] = (int)fStack_154;
    local_1c8 = (uint *)(fStack_150 * 0.5);
    if (0.0 <= (float)local_1c8) {
      if (1.0 < (float)local_1c8) {
        local_1c8 = (uint *)0x3f800000;
      }
    }
    else {
      local_1c8 = (uint *)0x0;
    }
    puStack_1c4 = auStack_1b8;
    this[0x2f2] = (int)local_1c8;
    auStack_1b8[0] = auStack_1b8[0] & 0xffffff00;
    puStack_1c0 = (undefined1 *)0x0;
    uStack_1bc = 0x14;
    _strncpy((char *)puStack_1c4,"genre_action",0xc);
    puStack_1c0 = (undefined1 *)0xc;
    *(char *)(puStack_1c4 + 3) = '\0';
    fVar11 = fStack_14c * 0.3;
    ppuVar9 = &puStack_1c4;
    local_4._0_1_ = 2;
    pvVar5 = (void *)FUN_00577370((int)this);
    FUN_00442490(pvVar5,ppuVar9,fVar11);
    if (0x14 < uStack_1bc) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c4);
    }
    puStack_1c4 = auStack_1b8;
    auStack_1b8[0] = auStack_1b8[0] & 0xffffff00;
    puStack_1c0 = (undefined1 *)0x0;
    uStack_1bc = 0x14;
    _strncpy((char *)puStack_1c4,"genre_comedy",0xc);
    puStack_1c0 = (undefined1 *)0xc;
    *(char *)(puStack_1c4 + 3) = '\0';
    fVar11 = fStack_148 * 0.3;
    ppuVar9 = &puStack_1c4;
    local_4._0_1_ = 3;
    pvVar5 = (void *)FUN_00577370((int)this);
    FUN_00442490(pvVar5,ppuVar9,fVar11);
    if (0x14 < uStack_1bc) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c4);
    }
    puStack_1c4 = auStack_1b8;
    auStack_1b8[0] = auStack_1b8[0] & 0xffffff00;
    puStack_1c0 = (undefined1 *)0x0;
    uStack_1bc = 0x14;
    _strncpy((char *)puStack_1c4,"genre_horror",0xc);
    puStack_1c0 = (undefined1 *)0xc;
    *(char *)(puStack_1c4 + 3) = '\0';
    fVar11 = fStack_144 * 0.3;
    ppuVar9 = &puStack_1c4;
    local_4._0_1_ = 4;
    pvVar5 = (void *)FUN_00577370((int)this);
    FUN_00442490(pvVar5,ppuVar9,fVar11);
    if (0x14 < uStack_1bc) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c4);
    }
    puStack_1c4 = auStack_1b8;
    auStack_1b8[0] = auStack_1b8[0] & 0xffffff00;
    puStack_1c0 = (undefined1 *)0x0;
    uStack_1bc = 0x14;
    _strncpy((char *)puStack_1c4,"genre_romance",0xd);
    puStack_1c0 = (undefined1 *)0xd;
    *(char *)((int)puStack_1c4 + 0xd) = '\0';
    fVar11 = fStack_140 * 0.3;
    ppuVar9 = &puStack_1c4;
    local_4._0_1_ = 5;
    pvVar5 = (void *)FUN_00577370((int)this);
    FUN_00442490(pvVar5,ppuVar9,fVar11);
    if (0x14 < uStack_1bc) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c4);
    }
    puStack_1c4 = auStack_1b8;
    auStack_1b8[0] = auStack_1b8[0] & 0xffffff00;
    puStack_1c0 = (undefined1 *)0x0;
    uStack_1bc = 0x14;
    _strncpy((char *)puStack_1c4,"genre_sci-fi",0xc);
    puStack_1c0 = (undefined1 *)0xc;
    *(char *)(puStack_1c4 + 3) = '\0';
    fVar11 = fStack_13c * 0.3;
    ppuVar9 = &puStack_1c4;
    local_4._0_1_ = 6;
    pvVar5 = (void *)FUN_00577370((int)this);
    FUN_00442490(pvVar5,ppuVar9,fVar11);
    local_4._0_1_ = 1;
    if (0x14 < uStack_1bc) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c4);
    }
    puStack_1a4 = operator_new(0xa4);
    local_4._0_1_ = 7;
    if (puStack_1a4 == (undefined4 *)0x0) {
      local_1c8 = (uint *)0x0;
    }
    else {
      local_1c8 = FUN_00420b80(puStack_1a4);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    (**(code **)(this[0x337] + 4))();
    this[0x33c] = (int)local_1c8;
    (**(code **)this[0x337])();
    if (0.0 <= fStack_12c) {
      if (1.0 < fStack_12c) {
        fStack_12c = 1.0;
      }
    }
    else {
      fStack_12c = 0.0;
    }
    *(float *)(this[0x33c] + 0x8c) = fStack_12c;
    if (0.0 <= fStack_130) {
      if (1.0 < fStack_130) {
        fStack_130 = 1.0;
      }
    }
    else {
      fStack_130 = 0.0;
    }
    *(float *)(this[0x33c] + 0x90) = fStack_130;
    if (0.0 <= fStack_138) {
      if (1.0 < fStack_138) {
        fStack_138 = 1.0;
      }
    }
    else {
      fStack_138 = 0.0;
    }
    *(float *)(this[0x33c] + 0x94) = fStack_138;
    if (0.0 <= fStack_134) {
      if (1.0 < fStack_134) {
        fStack_134 = 1.0;
      }
    }
    else {
      fStack_134 = 0.0;
    }
    *(float *)(this[0x33c] + 0x98) = fStack_134;
    if (0.0 <= (float)pvStack_124) {
      pvVar5 = pvStack_124;
      if (1.0 < (float)pvStack_124) {
        pvVar5 = (void *)0x3f800000;
      }
    }
    else {
      pvVar5 = (void *)0x0;
    }
    *(void **)(this[0x33c] + 0x9c) = pvVar5;
    if (0.0 <= (float)puStack_128) {
      if (1.0 < (float)puStack_128) {
        puStack_128 = (uint *)0x3f800000;
      }
    }
    else {
      puStack_128 = (uint *)0x0;
    }
    *(uint **)(this[0x33c] + 0xa0) = puStack_128;
    local_1c8 = puStack_128;
  }
  if (cStack_180 == '\0') {
    (**(code **)(*this + 0xe0))(1);
  }
  else {
    (**(code **)(*this + 0xe0))(0);
  }
  puVar4 = FUN_009d2990(auStack_dc,(char *)this[0x29f],(char *)0x0,0.0);
  puStack_8._0_1_ = 8;
  pvVar5 = FUN_009d30f0(this[0x47],(uint)(cStack_184 == '\0'),1,puVar4,'\0');
  this[0x1bf] = (int)pvVar5;
  puStack_8._0_1_ = 1;
  FUN_00434ae0((int)auStack_dc);
  local_1c8 = &uStack_1bc;
  uStack_1bc = uStack_1bc & 0xffffff00;
  puStack_1c4 = (uint *)0x0;
  puStack_1c0 = &DAT_00000014;
  _strncpy((char *)local_1c8,"costume_actor",0xd);
  puStack_1c4 = (uint *)0xd;
  *(char *)((int)local_1c8 + 0xd) = '\0';
  iVar7 = *this;
  uVar10 = 1;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
  puVar6 = FUN_004331d0(&local_1c8,(uint)(cStack_184 == '\0'),3);
  (**(code **)(iVar7 + 0x128))(puVar6,uVar10);
  uStack_10 = 1;
  if (&DAT_00000014 < local_1c8) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  piVar3 = this + 0x15c;
  if (piVar3 != this + 0x15a) {
    iVar7 = this[0x15a];
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x48) = *(int *)(iVar7 + 0x48) + 1;
    }
    puVar6 = (undefined4 *)*piVar3;
    if (puVar6 != (undefined4 *)0x0) {
      piVar8 = puVar6 + 0x12;
      *piVar8 = *piVar8 + -1;
      if (*piVar8 == 0) {
        (**(code **)*puVar6)(1);
      }
    }
    *piVar3 = iVar7;
  }
  iVar7 = *piVar3;
  if (iVar7 != 0) {
    *(int *)(iVar7 + 0x48) = *(int *)(iVar7 + 0x48) + 1;
  }
  puVar6 = (undefined4 *)this[0x15b];
  if (puVar6 != (undefined4 *)0x0) {
    piVar3 = puVar6 + 0x12;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar6)(1);
    }
  }
  this[0x15b] = iVar7;
  FUN_00a1d540((void *)this[0x1bf],(int)&pwStack_1ac);
  FUN_004036d0(this + 0x132,pwStack_1ac,uStack_1a8);
  piVar3 = (int *)GetPlayerStudio();
  (**(code **)(*piVar3 + 0x30))(this);
  if ((char)local_4 == '\0') {
    (**(code **)(*this + 0x224))(2,0);
  }
  else {
    (**(code **)(*this + 0x224))(3);
  }
  iVar1 = *this;
  iVar7 = (int)pvStack_14 + 0xc4;
  puVar6 = FUN_00598e50(pvStack_14,auStack_fc);
  (**(code **)(iVar1 + 0xa8))(puVar6,iVar7);
  iVar7 = FUN_00577900((int)pvStack_14);
  FUN_0057b4b0(this,iVar7);
  iVar7 = *(int *)((int)pvStack_14 + 0x7dc);
  this[0x1f7] = iVar7;
  piVar8 = &DAT_0104ee2c + iVar7 * 0xd;
  piVar3 = this + 499;
  this[500] = (int)piVar8;
  *piVar3 = *piVar8;
  *(int **)(*piVar8 + 4) = piVar3;
  *piVar8 = (int)piVar3;
  if (*(undefined4 **)((int)pvStack_14 + 0x8ec) != (undefined4 *)0x0) {
    **(undefined4 **)((int)pvStack_14 + 0x8ec) = *(undefined4 *)((int)pvStack_14 + 0x8e8);
  }
  if (*(int *)((int)pvStack_14 + 0x8e8) != 0) {
    *(undefined4 *)(*(int *)((int)pvStack_14 + 0x8e8) + 4) =
         *(undefined4 *)((int)pvStack_14 + 0x8ec);
  }
  *(undefined4 *)((int)pvStack_14 + 0x8e8) = 0;
  *(undefined4 *)((int)pvStack_14 + 0x8ec) = 0;
  FUN_005a0750((int)pvStack_14);
  this[0x38] = 0;
  if (uStack_11c < 0x15) {
    if (0x14 < uStack_194) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_19c);
    }
    if (auStack_1b8[0] < 0xb) {
      ExceptionList = pvStack_2c;
      return this;
    }
                    /* WARNING: Subroutine does not return */
    _free(puStack_1c0);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_124);
}


//// FUNCTION StarHiring_Constructor @ 00596390 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void StarHiring_Constructor(void)

{
  float10 fVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3ff0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorSpawning_Constructor();
  FUN_004787b0();
  FUN_004769e0();
  FUN_005e9e50(DAT_0104d82c,0x5a1c10);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"star_hire",9);
  local_28 = 9;
  local_2c[9] = '\0';
  local_4 = 0;
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"star",4);
  local_28 = 4;
  local_2c[4] = '\0';
  local_4 = 1;
  FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"celebritysnubburgers",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4 = 2;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e6c = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ratingsmultiplier",0x11);
  local_28 = 0x11;
  local_2c[0x11] = '\0';
  local_4 = 3;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e10 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ratingshalflife",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4 = 4;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  DAT_00e53e14 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"genreboredomboost",0x11);
  local_28 = 0x11;
  local_2c[0x11] = '\0';
  local_4 = 5;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e18 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"boredomboost",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4 = 6;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e1c = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"boredomhalflife",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4 = 7;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  DAT_00e53e20 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"mincelebsmalltalk",0x11);
  local_28 = 0x11;
  local_2c[0x11] = '\0';
  local_4 = 8;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_0104d050 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"SchoolLearningRate",0x12);
  local_28 = 0x12;
  local_2c[0x12] = '\0';
  local_4 = 9;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e24 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ExpTimeMinimum",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = 10;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e38 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ExpTimeRecoverPerTick",0x15);
  local_28 = 0x15;
  local_2c[0x15] = '\0';
  local_4 = 0xb;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e3c = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"MinCreationPoints",0x11);
  local_28 = 0x11;
  local_2c[0x11] = '\0';
  local_4 = 0xc;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  DAT_0104d028 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"MaxCreationPoints",0x11);
  local_28 = 0x11;
  local_2c[0x11] = '\0';
  local_4 = 0xd;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  DAT_0104d02c = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"GenreExperienceMultiplier",0x19);
  local_28 = 0x19;
  local_2c[0x19] = '\0';
  local_4 = 0xe;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_0104d030 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"CreationMoodMultiplier",0x16);
  local_28 = 0x16;
  local_2c[0x16] = '\0';
  local_4 = 0xf;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_0104d034 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"AddictWorkThreshMin",0x13);
  local_28 = 0x13;
  local_2c[0x13] = '\0';
  local_4 = 0x10;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e28 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"AddictWorkThreshMax",0x13);
  local_28 = 0x13;
  local_2c[0x13] = '\0';
  local_4 = 0x11;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e2c = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"MoodThreshMin",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 0x12;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e30 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"MoodThreshMax",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 0x13;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e34 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"BuyingRivalsStarsMoodMultiplier",0x1f);
  local_28 = 0x1f;
  local_2c[0x1f] = '\0';
  local_4 = 0x14;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e40 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"femalebeard",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4 = 0x15;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  DAT_00e53e44 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"maleeyeshadow",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 0x16;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e48 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"malelipstick",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4 = 0x17;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e4c = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"malenailvarnish",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4 = 0x18;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e50 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"starratingweightsalary",0x16);
  local_28 = 0x16;
  local_2c[0x16] = '\0';
  local_4 = 0x19;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  _DAT_00e53e88 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"starratingweightrelationships",0x1d);
  local_28 = 0x1d;
  local_2c[0x1d] = '\0';
  local_4 = 0x1a;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  _DAT_00e53e8c = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"starratingweightimage",0x15);
  local_28 = 0x15;
  local_2c[0x15] = '\0';
  local_4 = 0x1b;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  _DAT_00e53e90 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"starratingweighttrailer",0x17);
  local_28 = 0x17;
  local_2c[0x17] = '\0';
  local_4 = 0x1c;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  _DAT_00e53e94 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"starratingweightentourage",0x19);
  local_28 = 0x19;
  local_2c[0x19] = '\0';
  local_4 = 0x1d;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  _DAT_00e53e98 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"starratingweightawards",0x16);
  local_28 = 0x16;
  local_2c[0x16] = '\0';
  local_4 = 0x1e;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  _DAT_00e53e9c = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"starratingweightmovies",0x16);
  local_28 = 0x16;
  local_2c[0x16] = '\0';
  local_4 = 0x1f;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  _DAT_00e53ea0 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"starratingweightperformance",0x1b);
  local_28 = 0x1b;
  local_2c[0x1b] = '\0';
  local_4 = 0x20;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  _DAT_00e53ea4 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"starratingweightpressbar",0x18);
  local_28 = 0x18;
  local_2c[0x18] = '\0';
  local_4 = 0x21;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  _DAT_00e53ea8 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"rival_target_range_width",0x18);
  local_28 = 0x18;
  local_2c[0x18] = '\0';
  local_4 = 0x22;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_0104d04c = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"min_time_between_ai_updates",0x1b);
  local_28 = 0x1b;
  local_2c[0x1b] = '\0';
  local_4 = 0x23;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  FUN_0043b700(&DAT_0104d0bc,(float)fVar1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"max_time_between_ai_updates",0x1b);
  local_28 = 0x1b;
  local_2c[0x1b] = '\0';
  local_4 = 0x24;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  FUN_0043b700(&DAT_0104d0c0,(float)fVar1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"rival_sr_difference_target",0x1a);
  local_28 = 0x1a;
  local_2c[0x1a] = '\0';
  local_4 = 0x25;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e54 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"rival_sr_difference_multiplier",0x1e);
  local_28 = 0x1e;
  local_2c[0x1e] = '\0';
  local_4 = 0x26;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e58 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"rival_sr_deviation_target",0x19);
  local_28 = 0x19;
  local_2c[0x19] = '\0';
  local_4 = 0x27;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e5c = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"rival_sr_deviation_multiplier",0x1d);
  local_28 = 0x1d;
  local_2c[0x1d] = '\0';
  local_4 = 0x28;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e60 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"rival_sr_update_threshold",0x19);
  local_28 = 0x19;
  local_2c[0x19] = '\0';
  local_4 = 0x29;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e64 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"rival_sr_adder",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = 0x2a;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  _DAT_00e53e68 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"staff",5);
  local_28 = 5;
  local_2c[5] = '\0';
  local_4 = 0x2b;
  FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_005e9e50(DAT_0104d82c,0x588440);
  FUN_00471840("MT_STAR_WINAWARD",-0x7ffff965);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00597820 @ 00597820 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00597820(float *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c [3];
  
  piVar3 = param_2;
  fVar2 = 0.0;
  if ((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) {
    iVar4 = FUN_0059c6e0(param_2,'\0');
    iVar5 = FUN_0059c6e0(param_3,'\0');
    piVar1 = param_2 + 0x128;
    param_2 = (int *)0x0;
    if (*piVar1 != param_3[0x128]) {
      param_2 = (int *)0x3f800000;
    }
    pfVar6 = (float *)(**(code **)(*piVar3 + 0x214))(local_c);
    fStack_18 = *pfVar6;
    pfVar6 = (float *)(**(code **)(*param_3 + 0x214))(&fStack_14);
    fStack_18 = *pfVar6;
    (**(code **)(*piVar3 + 0x1b0))(iVar4);
    (**(code **)(*param_3 + 0x1b0))(iVar5);
    (**(code **)(*piVar3 + 0x1ac))(iVar4);
    (**(code **)(*param_3 + 0x1ac))(iVar5);
    (**(code **)(*piVar3 + 0x210))(&stack0xffffffe0);
    pfVar6 = (float *)(**(code **)(*param_3 + 0x210))(&stack0xffffffe0);
    pfVar7 = FUN_00406fd0(&fStack_1c,ABS(fStack_1c) * 0.02);
    pfVar8 = FUN_00406fd0(&fStack_18,ABS(fStack_18) * 0.01);
    fVar2 = 1.0 - (_DAT_00e5405c * (float)param_2 +
                  _DAT_00e54068 * *pfVar7 +
                  _DAT_00e54064 * *pfVar8 +
                  ABS(local_c[0] - *pfVar6) * _DAT_00e5406c +
                  ABS(fStack_14 - fStack_10) * _DAT_00e54060);
    if (fVar2 < 0.0) {
      *param_1 = 0.0;
      return;
    }
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  *param_1 = fVar2;
  return;
}


//// FUNCTION FUN_005979e0 @ 005979e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005979e0(void)

{
  float10 fVar1;
  char *local_104;
  undefined4 local_100;
  uint local_fc;
  char local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb406e;
  local_c = ExceptionList;
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_104,"stunts",6);
  local_100 = 6;
  local_104[6] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_104);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"genderfactor",0xc);
  local_100 = 0xc;
  local_104[0xc] = '\0';
  local_4._0_1_ = 3;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00e5405c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"sexfactor",9);
  local_100 = 9;
  local_104[9] = '\0';
  local_4._0_1_ = 4;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00e54060 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"weightfactor",0xc);
  local_100 = 0xc;
  local_104[0xc] = '\0';
  local_4._0_1_ = 5;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00e54064 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"agefactor",9);
  local_100 = 9;
  local_104[9] = '\0';
  local_4._0_1_ = 6;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00e54068 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"looksfactor",0xb);
  local_100 = 0xb;
  local_104[0xb] = '\0';
  local_4._0_1_ = 7;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00e5406c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"experience",10);
  local_100 = 10;
  local_104[10] = '\0';
  local_4._0_1_ = 8;
  FUN_00558a50(local_e4,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"experiencemin",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 9;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e54070 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"experiencemax",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4 = CONCAT31(local_4._1_3_,10);
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e54074 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00597dc0 @ 00597dc0 ////

int * FUN_00597dc0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  float10 fVar4;
  char **ppcVar5;
  float fVar6;
  int *local_34;
  float local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4088;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_005a1af0();
  if (DAT_00e54070 == DAT_00e54074) {
    local_30 = DAT_00e54070;
  }
  else {
    fVar4 = FUN_00990e30(DAT_00e54070,DAT_00e54074);
    local_30 = (float)fVar4;
  }
  local_34 = (int *)*DAT_00f88660;
  if (local_34 != DAT_00f88660) {
    do {
      fVar6 = 0.0;
      puVar2 = (undefined4 *)FUN_00449b40(local_34[0xb]);
      pvVar3 = (void *)FUN_00577370((int)piVar1);
      FUN_00442490(pvVar3,puVar2,fVar6);
      FUN_00449dd0((int *)&local_34);
    } while (local_34 != DAT_00f88660);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"Stunts",6);
  local_28 = 6;
  local_2c[6] = '\0';
  ppcVar5 = &local_2c;
  local_4 = 0;
  fVar6 = local_30;
  pvVar3 = (void *)FUN_00577370((int)piVar1);
  FUN_00442490(pvVar3,ppcVar5,fVar6);
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return piVar1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00597f30 @ 00597f30 ////

undefined4 * __thiscall FUN_00597f30(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x318),*(uint *)((int)this + 0x31c));
  return param_1;
}


//// FUNCTION FUN_00597f70 @ 00597f70 ////

void FUN_00597f70(void)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  char *local_164;
  undefined4 local_160;
  uint local_15c;
  char local_158 [20];
  char *local_144;
  undefined4 local_140;
  uint local_13c;
  char local_138 [20];
  void *local_124 [2];
  uint local_11c;
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb40cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00559fb0(local_e4);
  local_164 = local_158;
  local_4 = 0;
  local_158[0] = '\0';
  local_160 = 0;
  local_15c = 0x14;
  _strncpy(local_164,"tasks",5);
  local_160 = 5;
  local_164[5] = '\0';
  local_4._0_1_ = 1;
  FUN_0055be10(local_e4,&local_164,'\0');
  local_4._0_1_ = 0;
  if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
    _free(local_164);
  }
  iVar7 = 0;
  do {
    uVar3 = FUN_00558a50(local_e4,(undefined4 *)((int)&PTR_DAT_00e54078 + iVar7),(undefined4 *)0x1);
    if ((char)uVar3 != '\0') {
      local_164 = local_158;
      local_158[0] = '\0';
      local_160 = 0;
      local_15c = 0x14;
      _strncpy(local_164,"costume",7);
      local_160 = 7;
      local_164[7] = '\0';
      local_4 = CONCAT31(local_4._1_3_,2);
      puVar4 = FUN_005584e0(local_e4,local_124,&local_164);
      uVar1 = puVar4[1];
      pcVar2 = (char *)*puVar4;
      if (*(uint *)((int)&DAT_0104d0d0 + iVar7) <= uVar1) {
        if (0x14 < *(uint *)((int)&DAT_0104d0d0 + iVar7)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)&DAT_0104d0c8 + iVar7));
        }
        uVar5 = uVar1 + 0x20 & 0xffffffe0;
        *(uint *)((int)&DAT_0104d0d0 + iVar7) = uVar5;
        pvVar6 = _malloc(uVar5);
        *(void **)((int)&DAT_0104d0c8 + iVar7) = pvVar6;
      }
      _strncpy(*(char **)((int)&DAT_0104d0c8 + iVar7),pcVar2,uVar1);
      *(uint *)((int)&DAT_0104d0cc + iVar7) = uVar1;
      *(undefined1 *)(uVar1 + *(int *)((int)&DAT_0104d0c8 + iVar7)) = 0;
      if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_124[0]);
      }
      if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
        _free(local_164);
      }
      local_144 = local_138;
      local_138[0] = '\0';
      local_140 = 0;
      local_13c = 0x14;
      _strncpy(local_144,"vip",3);
      local_140 = 3;
      local_144[3] = '\0';
      local_4 = CONCAT31(local_4._1_3_,3);
      puVar4 = FUN_005584e0(local_e4,local_104,&local_144);
      uVar1 = puVar4[1];
      pcVar2 = (char *)*puVar4;
      if (*(uint *)((int)&DAT_0104d2f0 + iVar7) <= uVar1) {
        if (0x14 < *(uint *)((int)&DAT_0104d2f0 + iVar7)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)&DAT_0104d2e8 + iVar7));
        }
        uVar5 = uVar1 + 0x20 & 0xffffffe0;
        *(uint *)((int)&DAT_0104d2f0 + iVar7) = uVar5;
        pvVar6 = _malloc(uVar5);
        *(void **)((int)&DAT_0104d2e8 + iVar7) = pvVar6;
      }
      _strncpy(*(char **)((int)&DAT_0104d2e8 + iVar7),pcVar2,uVar1);
      *(uint *)((int)&DAT_0104d2ec + iVar7) = uVar1;
      *(undefined1 *)(uVar1 + *(int *)((int)&DAT_0104d2e8 + iVar7)) = 0;
      if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_104[0]);
      }
      local_4._0_1_ = 0;
      if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
        _free(local_144);
      }
    }
    iVar7 = iVar7 + 0x20;
    if (0x21f < iVar7) {
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION CStaff_OnAssignedManualLaborJob @ 00598250 ////

/* WARNING: Removing unreachable block (ram,0x005983d0) */

void __cdecl CStaff_OnAssignedManualLaborJob(int *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  char *pcStack_50;
  char *pcStack_4c;
  char *pcStack_48;
  char *pcStack_44;
  char *local_40;
  void *pvStack_20;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0xffffffff;
  puStack_8 = &LAB_00cb4130;
  puStack_c = ExceptionList;
  local_40 = "task_janitor";
  pcStack_44 = (char *)0x59828c;
  ExceptionList = &puStack_c;
  (**(code **)(*param_1 + 0x104))();
  pcStack_44 = "task_repairman";
  pcStack_48 = (char *)0x5982a3;
  (**(code **)(*param_1 + 0x104))();
  puStack_4 = (undefined1 *)&pcStack_48;
  pcStack_48 = "task_builder";
  pcStack_4c = (char *)0x5982ba;
  (**(code **)(*param_1 + 0x104))();
  puStack_8 = (undefined1 *)&pcStack_4c;
  pcStack_4c = "garden";
  pcStack_50 = (char *)0x5982d1;
  (**(code **)(*param_1 + 0x104))();
  puStack_c = (undefined1 *)&pcStack_50;
  pcStack_50 = "watergrass";
  (**(code **)(*param_1 + 0x104))();
  if (puStack_c == (undefined1 *)0x5) {
    pvVar1 = operator_new(0x15c);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = DesireTaskBuilder_Constructor(pvVar1,param_1);
    }
    TMCharacter_AddResidentDesire(param_1,(int)puVar2);
    pvVar1 = operator_new(0x144);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = DesireTaskRepairman_Constructor(pvVar1,param_1);
    }
  }
  else {
    if (puStack_c != (undefined1 *)0x6) {
      ExceptionList = pvStack_20;
      return;
    }
    pvVar1 = operator_new(0x140);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = DesireTaskJanitor_Constructor(pvVar1,param_1);
    }
    TMCharacter_AddResidentDesire(param_1,(int)puVar2);
    pvVar1 = operator_new(0x128);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      local_40 = &stack0xffffffcc;
      _strncpy(local_40,"garden",6);
      local_40[6] = '\0';
      pcStack_44 = (char *)0x1;
      puVar2 = DesireInfo_Constructor(pvVar1,&local_40,0,0,0,0,param_1);
    }
    *(undefined1 *)(puVar2 + 0x45) = 1;
    TMCharacter_AddResidentDesire(param_1,(int)puVar2);
    pvVar1 = operator_new(0x128);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = DesireWaterGrass_Constructor(pvVar1,param_1);
    }
  }
  TMCharacter_AddResidentDesire(param_1,(int)puVar2);
  ExceptionList = pvStack_20;
  return;
}


//// FUNCTION JobName_ToEnum @ 005984b0 ////

uint JobName_ToEnum(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  bool bVar7;
  byte *local_20 [2];
  uint local_18;
  
  uVar4 = 0;
  ppuVar6 = &PTR_DAT_00e54078;
  do {
    FUN_0048f010(&stack0x00000004,local_20);
    pbVar2 = *ppuVar6;
    pbVar5 = local_20[0];
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005984fa:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005984ff;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005984fa;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005984ff:
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    if (iVar3 == 0) {
      return uVar4;
    }
    uVar4 = uVar4 + 1;
    ppuVar6 = ppuVar6 + 8;
    if (0x10 < uVar4) {
      return 0;
    }
  } while( true );
}


//// FUNCTION CStaff_ApplyJobCostumeAndPlacement @ 00598540 ////

void __cdecl CStaff_ApplyJobCostumeAndPlacement(int *param_1,int param_2)

{
  int *this;
  int *this_00;
  int iVar1;
  undefined4 *puVar2;
  void *this_01;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  this = param_1;
  puStack_8 = &LAB_00cb4150;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*param_1 + 0xf0))();
  iVar3 = param_2;
  if ((*(byte *)(iVar1 + 0x10) & 1) == 0) {
    puVar2 = &DAT_0104d0c8 + param_2 * 8;
  }
  else {
    puVar2 = &DAT_0104d2e8 + param_2 * 8;
  }
  FUN_004015d0(&local_2c,(char *)*puVar2,puVar2[1]);
  FUN_004335f0((int *)&param_1,&local_2c,this[0x128],0,0,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar3 == 5) {
    uVar5 = 1;
    this_01 = (void *)FUN_004319b0((int)param_1);
    FUN_009ce9d0(this_01,uVar5);
  }
  else if (iVar3 == 0x10) {
    param_1[0x29] = param_1[0x29] & 0xfffffffe;
  }
  this_00 = param_1;
  iVar3 = FUN_0059c6e0(this,'\0');
  uVar4 = FUN_00430d70(this_00,iVar3);
  if ((char)uVar4 == '\0') {
    (**(code **)(*this + 0x128))(param_1,1);
    FUN_0059bb60(this,(int)param_1);
    FUN_0059bba0(this,(int)param_1);
  }
  local_4 = local_4 & 0xffffff00;
  if ((param_1 != (int *)0x0) &&
     (iVar3 = param_1[0x12], param_1[0x12] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)*param_1)(1);
  }
  param_1 = (int *)0x0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005986d0 @ 005986d0 ////

void __cdecl FUN_005986d0(void *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  char **ppcVar7;
  undefined4 local_58 [3];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cb4170;
  local_c = ExceptionList;
  local_4c = local_40;
  bVar1 = false;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  iVar3 = *(int *)((int)param_1 + 0x814);
  local_4 = 0;
  if (iVar3 == 7) {
    ExceptionList = &local_c;
    _strncpy(local_40,"camera",6);
    local_48 = 6;
    local_4c[6] = '\0';
  }
  else if (iVar3 == 8) {
    ExceptionList = &local_c;
    _strncpy(local_40,"sound boom",10);
    local_48 = 10;
    local_4c[10] = '\0';
  }
  else {
    if (iVar3 != 0xc) {
      return;
    }
    ExceptionList = &local_c;
    _strncpy(local_40,"fluffchair",10);
    local_48 = 10;
    local_4c[10] = '\0';
  }
  iVar3 = FUN_005778f0((int)param_1);
  if (iVar3 != 0) {
    ppcVar7 = &local_2c;
    this = (void *)FUN_005778f0((int)param_1);
    puVar4 = FUN_00597f30(this,ppcVar7);
    bVar1 = true;
    uVar5 = FUN_00401ec0(puVar4,&local_4c);
    bVar2 = true;
    if ((char)uVar5 != '\0') goto LAB_005987d1;
  }
  bVar2 = false;
LAB_005987d1:
  if ((bVar1) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (!bVar2) {
    FUN_0057b070((int)param_1);
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"",0);
    local_28 = 0;
    *local_2c = '\0';
    local_4._0_1_ = 1;
    piVar6 = FUN_004498a0(&local_4c,&local_2c);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    iVar3 = piVar6[0x32];
    puVar4 = FUN_00598e50(param_1,local_58);
    (**(code **)(iVar3 + 0x2c))(puVar4);
    FUN_005778a0(param_1,piVar6);
    (**(code **)(*piVar6 + 0x24))(param_1);
  }
  if (local_44 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION CStaff_AssignNearestWorkplaceFacility @ 005988c0 ////

void __cdecl CStaff_AssignNearestWorkplaceFacility(int *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  int iVar5;
  int *this;
  undefined4 *puVar6;
  char *pcVar7;
  float local_54;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [12];
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  char *local_2c;
  int local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb4190;
  local_c = ExceptionList;
  local_2c = local_20;
  this = (int *)0x0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  switch(param_2) {
  case 2.8026e-45:
  case 4.2039e-45:
    pcVar7 = "facility_stage";
    break;
  default:
    goto switchD_0059890f_caseD_4;
  case 7.00649e-45:
  case 8.40779e-45:
    pcVar7 = "facility_gatehouse";
    break;
  case 9.80909e-45:
  case 1.12104e-44:
  case 1.68156e-44:
    ExceptionList = &local_c;
    _strncpy(local_20,"facility_crew",0xd);
    local_28 = 0xd;
    local_2c[0xd] = '\0';
    goto LAB_0059895f;
  case 1.96182e-44:
    pcVar7 = "facility_script1";
    break;
  case 2.10195e-44:
    pcVar7 = "facility_research";
  }
  ExceptionList = &local_c;
  FUN_00403e20(&local_2c,pcVar7);
LAB_0059895f:
  if (local_28 != 0) {
    local_38 = (undefined4 *)0x0;
    local_34 = (undefined4 *)0x0;
    local_30 = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar3 = FUN_00847da0(&local_2c,local_3c);
    if (cVar3 != '\0') {
      param_2 = 9999.0;
      (**(code **)(*param_1 + 0x34))(&local_54);
      puVar6 = local_38;
      if (local_38 != local_34) {
        do {
          piVar1 = (int *)*puVar6;
          pfVar4 = (float *)(**(code **)(*piVar1 + 0x34))(auStack_48);
          fVar2 = (*pfVar4 - local_54) * (*pfVar4 - local_54) +
                  (pfVar4[2] - fStack_4c) * (pfVar4[2] - fStack_4c) +
                  (pfVar4[1] - fStack_50) * (pfVar4[1] - fStack_50);
          if (fVar2 < param_2) {
            this = piVar1;
            param_2 = fVar2;
          }
          puVar6 = puVar6 + 1;
        } while (puVar6 != local_34);
        if (this != (int *)0x0) {
          iVar5 = FUN_00845710(this,0);
          FUN_0057b4b0(param_1,iVar5);
        }
      }
    }
    if (local_38 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_38);
    }
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
switchD_0059890f_caseD_4:
  ExceptionList = local_c;
  return;
}


//// FUNCTION CStaff_OnJobAssigned @ 00598a90 ////

void __cdecl CStaff_OnJobAssigned(int *param_1,float param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00598ee0((int)param_1);
  if (((((char)uVar1 == '\0') && (param_1[0x131] != 2)) || (param_2 == 1.12104e-44)) &&
     (DAT_010583e4 == '\0')) {
    CStaff_ApplyJobCostumeAndPlacement(param_1,(int)param_2);
  }
  CStaff_OnAssignedManualLaborJob(param_1);
  CStaff_AssignNearestWorkplaceFacility(param_1,param_2);
  return;
}


//// FUNCTION FUN_00598b10 @ 00598b10 ////

void __fastcall FUN_00598b10(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00598b50 @ 00598b50 ////

void FUN_00598b50(void)

{
  return;
}


//// FUNCTION FUN_00598b60 @ 00598b60 ////

int __fastcall FUN_00598b60(int param_1)

{
  return param_1 + 0x664;
}


//// FUNCTION FUN_00598b70 @ 00598b70 ////

void FUN_00598b70(void)

{
  return;
}


//// FUNCTION FUN_00598b90 @ 00598b90 ////

void __thiscall FUN_00598b90(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x6fc) = param_1;
  return;
}


//// FUNCTION CStaff_RefreshVisualRepresentation @ 00598ba0 ////

void __fastcall CStaff_RefreshVisualRepresentation(int *param_1)

{
  void *pvVar1;
  
  if (param_1[0x128] == 2) {
    (**(code **)(*param_1 + 0xe0))(2);
  }
  pvVar1 = FUN_009d30f0(param_1[0x47],param_1[0x128],0,(uint *)0x0,'\0');
  param_1[0x1bf] = (int)pvVar1;
  (**(code **)(*param_1 + 300))(1);
  return;
}


//// FUNCTION FUN_00598bf0 @ 00598bf0 ////

void __fastcall FUN_00598bf0(void *param_1)

{
  if (*(void **)((int)param_1 + 0x5f4) != (void *)0x0) {
    FUN_00971df0(*(void **)((int)param_1 + 0x5f4));
    *(undefined4 *)((int)param_1 + 0x5f4) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x5f4) = 0;
  FUN_0053a170(param_1,0);
  return;
}


//// FUNCTION FUN_00598c30 @ 00598c30 ////

void __fastcall FUN_00598c30(int param_1)

{
  if (*(int *)(param_1 + 0x4a0) == 0) {
    *(undefined4 *)(param_1 + 0x6e8) = 9;
    *(undefined4 *)(param_1 + 0x6ec) = 0;
    *(undefined4 *)(param_1 + 0x6f0) = 10;
    return;
  }
  *(undefined4 *)(param_1 + 0x6e8) = 0x14;
  *(undefined4 *)(param_1 + 0x6f0) = 0x15;
  *(uint *)(param_1 + 0x6ec) = (*(int *)(param_1 + 0x660) != 0) + 0xb;
  return;
}


//// FUNCTION FUN_00598c90 @ 00598c90 ////

int __fastcall FUN_00598c90(int *param_1)

{
  if (param_1[0x1bf] == 0) {
    (**(code **)(*param_1 + 0xe4))();
  }
  return param_1[0x1bf];
}


//// FUNCTION FUN_00598cd0 @ 00598cd0 ////

int __fastcall FUN_00598cd0(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb41ab;
  local_c = ExceptionList;
  if (param_1[0x15f] == 0) {
    ExceptionList = &local_c;
    this = operator_new(0xd8);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_008b48c0(this,param_1);
    }
    param_1[0x15f] = (int)puVar1;
  }
  ExceptionList = local_c;
  return param_1[0x15f];
}


//// FUNCTION FUN_00598db0 @ 00598db0 ////

void __thiscall FUN_00598db0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x4e8) = param_1;
  return;
}


//// FUNCTION FUN_00598dc0 @ 00598dc0 ////

undefined4 __fastcall FUN_00598dc0(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_00538d30((int)param_1);
  if (((char)uVar2 != '\0') && (cVar1 = (**(code **)(*param_1 + 0xb8))(), cVar1 != '\0')) {
    return 1;
  }
  if (*(char *)((int)param_1 + 0x726) != '\0') {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00598df0 @ 00598df0 ////

undefined4 __fastcall FUN_00598df0(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xbc))();
  if ((cVar1 == '\0') && (param_1[0x174] < 1)) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00598e50 @ 00598e50 ////

undefined4 * __thiscall FUN_00598e50(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_c [3];
  
  if (*(void **)((int)this + 0x11c) == (void *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*(int *)this + 0x34))(local_c);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    fVar2 = (float)puVar1[2] + 1.8;
  }
  else {
    puVar1 = (undefined4 *)FUN_0097fad0(*(void **)((int)this + 0x11c),local_c);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    fVar2 = (float)puVar1[2];
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = fVar2;
  return param_1;
}


//// FUNCTION FUN_00598ec0 @ 00598ec0 ////

void __fastcall FUN_00598ec0(int param_1)

{
  FUN_0053d760();
  FUN_00539be0(param_1);
  return;
}


//// FUNCTION FUN_00598ee0 @ 00598ee0 ////

undefined4 __fastcall FUN_00598ee0(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x4c4) >> 8),*(int *)(param_1 + 0x4c4) == 0);
}


//// FUNCTION FUN_00598f00 @ 00598f00 ////

void __thiscall FUN_00598f00(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x5e4) = param_1;
  return;
}


//// FUNCTION FUN_00598f30 @ 00598f30 ////

void __thiscall FUN_00598f30(void *this,int param_1)

{
  void *pvVar1;
  
  if (*(char *)((int)this + 0x15c) == '\0') {
    if (param_1 != *(int *)((int)this + 0x6f4)) {
      *(undefined4 *)((int)this + 0x6f8) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
      *(int *)((int)this + 0x6f4) = param_1;
    }
    pvVar1 = (void *)FUN_00447aa0(param_1);
    FUN_00526890(this,pvVar1);
    if (pvVar1 != (void *)0x0) {
      FUN_00985de0(pvVar1);
    }
  }
  return;
}


//// FUNCTION FUN_00598f90 @ 00598f90 ////

void __fastcall FUN_00598f90(int param_1)

{
  if (*(void **)(param_1 + 0x6fc) != (void *)0x0) {
    FUN_009d2c50(*(void **)(param_1 + 0x6fc),(void *)0x0,'\x01',-1.0,-1.0);
    if (*(undefined4 **)(param_1 + 0x6fc) != (undefined4 *)0x0) {
      FUN_009d2b50(*(undefined4 **)(param_1 + 0x6fc));
      *(undefined4 *)(param_1 + 0x6fc) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00598fd0 @ 00598fd0 ////

void __fastcall FUN_00598fd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x1bf] == 0) {
    (**(code **)(*param_1 + 0xe4))();
  }
  piVar1 = (int *)param_1[0x13b];
  if ((piVar1 != (int *)0x0) && (piVar1[0xd] == 4)) {
    iVar2 = FUN_00ace790(piVar1,0,&TM::StateInfo::RTTI_Type_Descriptor,
                         &TM::StateReadyAndPuppet::RTTI_Type_Descriptor,0);
    FUN_00429fe0(iVar2);
    return;
  }
  return;
}


//// FUNCTION FUN_00599050 @ 00599050 ////

void __thiscall FUN_00599050(void *this,int param_1)

{
  *(int *)((int)this + 0x528) = param_1;
  *(undefined4 *)((int)this + 0x5d0) = 0;
                    /* WARNING: Could not recover jumptable at 0x0059906e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x120))();
  return;
}


//// FUNCTION FUN_00599080 @ 00599080 ////

undefined4 __fastcall FUN_00599080(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[0x131];
  if ((-1 < (int)uVar3) && ((int)uVar3 < 8)) {
    iVar1 = FUN_00ace790(param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                         &TM::CStaff::RTTI_Type_Descriptor,0);
    uVar2 = FUN_005773c0(iVar1);
    uVar3 = GetPlayerStudio();
    if (uVar2 == uVar3) {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_005990f0 @ 005990f0 ////

void __thiscall FUN_005990f0(void *this,int param_1)

{
  int *piVar1;
  
  if (0x14 < *(int *)((int)this + 0x5f8)) {
    if (*(int *)((int)this + 0x5e0) != param_1) {
      piVar1 = (int *)(**(code **)(*(int *)this + 0x158))();
      (**(code **)(*piVar1 + 4))();
    }
    *(int *)((int)this + 0x5e0) = param_1;
    *(undefined4 *)((int)this + 0x5f8) = 0;
  }
  return;
}


//// FUNCTION FUN_00599170 @ 00599170 ////

void __fastcall FUN_00599170(int *param_1)

{
  (**(code **)(*param_1 + 0x11c))(1);
  return;
}


//// FUNCTION FUN_00599190 @ 00599190 ////

bool __fastcall FUN_00599190(int param_1)

{
  return 0 < *(int *)(param_1 + 0x528);
}


//// FUNCTION FUN_00599310 @ 00599310 ////

undefined4 FUN_00599310(int param_1,int param_2,undefined *param_3)

{
  uint in_EAX;
  
  while( true ) {
    if (param_1 == param_2) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
    in_EAX = *(uint *)(param_1 + 4);
    if ((in_EAX != param_2) &&
       (in_EAX = (*(code *)param_3)(*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_EAX + 8)),
       (char)in_EAX == '\0')) break;
    param_1 = *(int *)(param_1 + 4);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00599390 @ 00599390 ////

undefined4 FUN_00599390(int param_1,int param_2,undefined *param_3)

{
  uint in_EAX;
  
  while( true ) {
    if (param_1 == param_2) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
    in_EAX = *(uint *)(param_1 + 4);
    if ((in_EAX != param_2) &&
       (in_EAX = (*(code *)param_3)(*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_EAX + 8)),
       (char)in_EAX == '\0')) break;
    param_1 = *(int *)(param_1 + 4);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00599460 @ 00599460 ////

void __fastcall FUN_00599460(void *param_1)

{
  _eh_vector_destructor_iterator_(param_1,0x20,0x10,FUN_00401490);
  return;
}


//// FUNCTION FUN_00599470 @ 00599470 ////

undefined4 __fastcall FUN_00599470(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c0);
}


//// FUNCTION FUN_00599570 @ 00599570 ////

void __thiscall FUN_00599570(void *this,undefined4 *param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  FUN_00598e50(this,&local_c);
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4 + 0.2;
  return;
}


//// FUNCTION FUN_005995b0 @ 005995b0 ////

void __fastcall FUN_005995b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  iVar1 = param_1[0x13b];
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x34) == 2)) && (*(int *)(iVar1 + 0x18) != 0)) &&
     (iVar1 = *(int *)(*(int *)(iVar1 + 0x18) + 0x144), iVar1 != 0)) {
    fVar3 = FUN_00496aa0(iVar1,param_1);
    if (fVar3 < (float10)2.0) {
      param_1[0x14b] = 0x3f000000;
      return;
    }
  }
  if ((int *)param_1[0x13e] != param_1 + 0x141) {
    piVar2 = (int *)FUN_00401c30(((int *)param_1[0x13e])[2]);
    if (piVar2 != (int *)0x0) {
      fVar3 = (float10)(**(code **)(*piVar2 + 0x20))();
      param_1[0x14b] = (int)(float)fVar3;
      return;
    }
  }
  param_1[0x14b] = 0;
  return;
}


//// FUNCTION FUN_00599630 @ 00599630 ////

void __fastcall FUN_00599630(int param_1)

{
  if (*(char *)(param_1 + 0x5e4) == '\0') {
    if (*(float *)(param_1 + 0x52c) < 0.3) {
      *(undefined4 *)(param_1 + 0x4e8) = 0;
      return;
    }
    if (*(float *)(param_1 + 0x52c) < 0.7) {
      *(undefined4 *)(param_1 + 0x4e8) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x4e8) = 2;
  }
  else {
    if (*(int *)(param_1 + 0x4e8) == 5) {
      *(undefined4 *)(param_1 + 0x4e8) = 5;
      return;
    }
    if (*(int *)(param_1 + 0x4e8) == 3) {
      *(undefined4 *)(param_1 + 0x4e8) = 3;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_005996a0 @ 005996a0 ////

float10 __fastcall FUN_005996a0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)0.1;
  switch(*(undefined4 *)(param_1 + 0x4e8)) {
  case 0:
    return (float10)(float)(&DAT_00f87ef8)[*(int *)(param_1 + 0x6e8)] *
           (float10)*(float *)(param_1 + 0x4a8);
  case 1:
    return (float10)(float)(&DAT_00f87ef8)[*(int *)(param_1 + 0x6ec)] *
           (float10)*(float *)(param_1 + 0x4a8);
  case 2:
    fVar1 = (float10)(float)(&DAT_00f87ef8)[*(int *)(param_1 + 0x6f0)] *
            (float10)*(float *)(param_1 + 0x4a8);
    break;
  case 5:
    return (float10)0.0;
  }
  return fVar1;
}


//// FUNCTION FUN_005997b0 @ 005997b0 ////

void __fastcall FUN_005997b0(int param_1)

{
  char cVar1;
  
  if (param_1 + -0xa0 == DAT_0104d524) {
    cVar1 = FUN_008b8470((int *)(param_1 + -0xa0));
    if (cVar1 == '\0') {
      FUN_0053c260(param_1);
    }
    else {
      if (DAT_010504c4 != (void *)0x0) {
        FUN_0091ee70(DAT_010504c4,(int *)0x0);
      }
      FUN_00932560(0);
      (*(code *)DAT_0104c6b4[1])();
      DAT_0104c6c8 = 0;
      (*(code *)*DAT_0104c6b4)();
      FUN_00418a40(DAT_00f87aa0,'\0');
    }
    (*(code *)DAT_0104d510[1])();
    DAT_0104d524 = 0;
    (*(code *)*DAT_0104d510)();
    *(undefined4 *)(param_1 + 0x530) = 0;
    *(undefined4 *)(param_1 + 0x534) = 0;
    (**(code **)(*(int *)(param_1 + -0xa0) + 0x184))();
    FUN_004ab390(*(int *)(param_1 + 0x538));
    DAT_010b93a4 = 0;
  }
  return;
}


//// FUNCTION FUN_00599880 @ 00599880 ////

void __thiscall FUN_00599880(void *this,float *param_1)

{
  float10 fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00598e50(this,&local_c);
  fVar1 = FUN_00990e30(-0.25,0.25);
  local_c = (float)(fVar1 + (float10)local_c);
  fVar1 = FUN_00990e30(-0.25,0.25);
  *param_1 = local_c;
  param_1[1] = (float)(fVar1 + (float10)local_8);
  param_1[2] = local_4;
  return;
}


//// FUNCTION FUN_005998e0 @ 005998e0 ////

undefined4 __fastcall FUN_005998e0(int param_1)

{
  if (*(int *)(param_1 + 0x4f8) == param_1 + 0x504) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x4f8) + 8);
}


//// FUNCTION FUN_00599900 @ 00599900 ////

void * __thiscall FUN_00599900(void *this,void *param_1,int *param_2)

{
  char cVar1;
  
  if (*(char *)((int)this + 0x5b4) != '\0') {
    cVar1 = FUN_00842eb0((int)param_2);
    if (cVar1 == '\0') {
      FUN_00407070(param_1,0.0);
      return param_1;
    }
  }
  (**(code **)(*param_2 + 0x24))(param_1);
  return param_1;
}


//// FUNCTION FUN_00599950 @ 00599950 ////

undefined4 __cdecl FUN_00599950(void *param_1,void *param_2)

{
  float fVar1;
  float *pfVar2;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  pfVar2 = FUN_00843040(param_1,local_8);
  fVar1 = *pfVar2;
  pfVar2 = FUN_00843040(param_2,local_4);
  if (*pfVar2 <= fVar1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_005999f0 @ 005999f0 ////

void __thiscall FUN_005999f0(void *this,undefined4 *param_1)

{
  if ((*(int *)((int)this + 0x4c0) != 0) &&
     ((DAT_0104a974 == 0 || (*(float *)(DAT_0104a974 + 100) == 0.0)))) {
    *param_1 = *(undefined4 *)(*(int *)((int)this + 0x4c0) + 0xe4);
    return;
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00599a40 @ 00599a40 ////

void __fastcall FUN_00599a40(int *param_1)

{
  int local_c [3];
  
  FUN_0053abe0(param_1);
  (**(code **)(*param_1 + 0xb4))(local_c,param_1 + 0x31);
  local_c[0] = param_1[0x42];
  (**(code **)(*param_1 + 0xa8))(&stack0xffffffec,param_1 + 0x31);
  param_1[0x117] = 0;
  return;
}


//// FUNCTION FUN_00599b20 @ 00599b20 ////

void __thiscall FUN_00599b20(void *this,float *param_1)

{
  float10 fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  if (local_4 == 0.0) {
    fVar1 = FUN_00455410(param_1);
    local_4 = (float)fVar1;
  }
  FUN_00538800(this,&local_c);
  return;
}


//// FUNCTION FUN_00599b80 @ 00599b80 ////

void __thiscall FUN_00599b80(void *this,float *param_1,int *param_2)

{
  float10 fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  if (local_4 == 0.0) {
    fVar1 = FUN_00455410(param_1);
    local_4 = (float)fVar1;
  }
  FUN_00538840(this,(int *)&local_c,param_2);
  return;
}


//// FUNCTION FUN_00599be0 @ 00599be0 ////

void __thiscall FUN_00599be0(void *this,float *param_1)

{
  float10 fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  if (local_4 == 0.0) {
    fVar1 = FUN_00455410(param_1);
    local_4 = (float)fVar1;
  }
  *(undefined4 *)((int)this + 0x45c) = 2;
  FUN_0053a1b0(this,&local_c);
  return;
}


//// FUNCTION FUN_00599c40 @ 00599c40 ////

void __thiscall FUN_00599c40(void *this,float *param_1,int *param_2)

{
  float10 fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  if (local_4 == 0.0) {
    fVar1 = FUN_00455410(param_1);
    local_4 = (float)fVar1;
  }
  *(undefined4 *)((int)this + 0x45c) = 2;
  FUN_0053a1e0(this,(int *)&local_c,param_2);
  return;
}


//// FUNCTION FUN_00599cb0 @ 00599cb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00599cb0(int *param_1)

{
  float fVar1;
  float *pfVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  float *pfVar5;
  float afStack_24 [3];
  
  fVar1 = DAT_00e5287c;
  if (((char)param_1[0x19] != '\0') && ((char)param_1[0x14c] == '\0')) {
    afStack_24[2] = 0.0;
    afStack_24[1] = 0.0;
    afStack_24[0] = DAT_00e52878;
    (**(code **)(*param_1 + 0x8c))();
    FUN_0053d3a0();
    if ((void *)param_1[0x17d] != (void *)0x0) {
      Model_UpdateVisuals((void *)param_1[0x17d]);
    }
    if (DAT_0104d524 != (int *)0x0) {
      pfVar5 = afStack_24 + 2;
      pfVar2 = (float *)(**(code **)(*DAT_0104d524 + 0x34))(pfVar5,afStack_24);
      uVar3 = FUN_009a1b30(&DAT_0105c2e8,pfVar2,pfVar5);
      if (((char)uVar3 != '\0') &&
         (_DAT_00e5429c <=
          (_DAT_0104d540 - fVar1) * (_DAT_0104d540 - fVar1) +
          (_DAT_0104d544 - afStack_24[0]) * (_DAT_0104d544 - afStack_24[0]))) {
        _DAT_0104d540 = DAT_0104cce0;
        _DAT_0104d544 = DAT_0104cce4;
        uVar4 = FUN_00990ae0(DAT_0104cce0,DAT_0104cce4);
        _DAT_0104d50c = (undefined4)uVar4;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00599d80 @ 00599d80 ////

void __fastcall FUN_00599d80(int *param_1)

{
  int *piVar1;
  
  if ((param_1[0x149] & 1U) == 0) {
    param_1[0x149] = param_1[0x149] | 1;
    if ((char)param_1[0x14c] == '\0') {
      (**(code **)(*param_1 + 0x120))(1);
    }
    piVar1 = param_1 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  return;
}


//// FUNCTION FUN_00599dd0 @ 00599dd0 ////

void __fastcall FUN_00599dd0(void *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  if (*(undefined4 **)((int)param_1 + 0x5cc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x5cc))(1);
  }
  (**(code **)(*(int *)((int)param_1 + 0x5b8) + 4))();
  *(undefined4 *)((int)param_1 + 0x5cc) = 0;
  (*(code *)**(undefined4 **)((int)param_1 + 0x5b8))();
  pbVar1 = Anim_LoadByName(*(char **)((int)param_1 + 0x61c));
  FUN_00526890(param_1,pbVar1);
  if ((pbVar1[0x34] & 2) == 0) {
    uVar2 = *(uint *)(pbVar1 + 0x30) & 0xffff;
  }
  else {
    uVar2 = (int)((*(uint *)(pbVar1 + 0x30) & 0xffff) - 1) / 3 + 1;
  }
  *(uint *)((int)param_1 + 0x5d0) = uVar2 - 1;
  FUN_00985de0(pbVar1);
  *(undefined4 *)((int)param_1 + 0x200) = 0;
  *(undefined4 *)((int)param_1 + 0x1fc) = 0;
  return;
}


//// FUNCTION FUN_00599e70 @ 00599e70 ////

void __fastcall FUN_00599e70(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  if (0 < param_1[0x14a]) {
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0x158))();
  fVar1 = *(float *)(iVar2 + 4);
  if (((0.01 <= fVar1) || (param_1[0x13a] == 5)) || (param_1[0x13a] == 3)) {
    switch(param_1[0x13a]) {
    case 0:
      if (param_1[0x176] != 0) {
        fVar3 = (float10)(**(code **)(*param_1 + 0x140))();
        if ((float10)fVar1 <= (float10)1.125 * fVar3) {
LAB_00599fbf:
          FUN_00598f30(param_1,param_1[0x1ba]);
          return;
        }
        if ((float10)fVar1 < (float10)1.5 * fVar3 != ((float10)fVar1 == (float10)1.5 * fVar3)) {
          FUN_00598f30(param_1,param_1[0x1bb]);
          return;
        }
LAB_00599ffa:
        FUN_00598f30(param_1,param_1[0x1bc]);
        return;
      }
      break;
    case 1:
      if (param_1[0x176] != 0) {
        fVar3 = (float10)(**(code **)(*param_1 + 0x140))();
        if ((float10)fVar1 <= (float10)0.25 * fVar3) {
          FUN_00598f30(param_1,param_1[0x1ba]);
          return;
        }
        if ((float10)fVar1 < (float10)1.125 * fVar3 != ((float10)fVar1 == (float10)1.125 * fVar3)) {
          FUN_00598f30(param_1,param_1[0x1bb]);
          return;
        }
        FUN_00598f30(param_1,param_1[0x1bc]);
        return;
      }
      break;
    case 2:
      if (param_1[0x176] != 0) {
        fVar3 = (float10)(**(code **)(*param_1 + 0x140))();
        if ((float10)fVar1 <= (float10)0.25 * fVar3) goto LAB_00599fbf;
        if ((float10)fVar1 < (float10)0.5 * fVar3 != ((float10)fVar1 == (float10)0.5 * fVar3)) {
          FUN_00598f30(param_1,param_1[0x1bb]);
          return;
        }
        goto LAB_00599ffa;
      }
      break;
    case 3:
      FUN_00447ae0(param_1);
      return;
    case 4:
      goto switchD_00599ec1_caseD_4;
    }
  }
  else {
switchD_00599ec1_caseD_4:
    FUN_00598f30(param_1,0x29);
  }
  return;
}


//// FUNCTION FUN_0059a040 @ 0059a040 ////

void __thiscall FUN_0059a040(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(param_1 + 200);
  piVar2 = (int *)((int)this + 0x594);
  *(int **)(param_1 + 0xcc) = piVar2;
  *piVar1 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar1;
  *piVar2 = (int)piVar1;
  return;
}


//// FUNCTION FUN_0059a060 @ 0059a060 ////

void __fastcall FUN_0059a060(int *param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0xbc))();
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0xd4))();
    iVar1 = *(int *)(param_1[0x47] + 0x78);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x70) == 1)) {
      *(undefined4 *)(iVar1 + 0x70) = 0;
      FUN_00a01150((void *)(iVar1 + 0x14),0,0);
    }
  }
  FUN_00526910((int)param_1);
  return;
}


//// FUNCTION TMCharacter_AddResidentDesire @ 0059a1c0 ////

void __thiscall TMCharacter_AddResidentDesire(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(param_1 + 0xa0);
  piVar2 = (int *)((int)this + 0x548);
  *(int **)(param_1 + 0xa4) = piVar2;
  *piVar1 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar1;
  *piVar2 = (int)piVar1;
  return;
}


//// FUNCTION FUN_0059a1f0 @ 0059a1f0 ////

void __fastcall FUN_0059a1f0(int *param_1)

{
  if ((int *)param_1[0x14f] != param_1 + 0x152) {
    do {
      (**(code **)(*param_1 + 0x108))(*(undefined4 *)(param_1[0x14f] + 8));
    } while ((int *)param_1[0x14f] != param_1 + 0x152);
  }
  return;
}


//// FUNCTION FUN_0059a230 @ 0059a230 ////

void __fastcall FUN_0059a230(void *param_1)

{
  FUN_0053a170(param_1,0);
  FUN_00598f30(param_1,0x29);
  return;
}


//// FUNCTION FUN_0059a290 @ 0059a290 ////

void FUN_0059a290(int *param_1,int *param_2,undefined *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  
  uVar5 = FUN_00599310((int)param_1,(int)param_2,param_3);
  if ((char)uVar5 == '\0') {
    for (; param_1 != param_2; param_1 = (int *)param_1[1]) {
      piVar2 = (int *)param_1[1];
      while (piVar3 = piVar2, piVar3 != param_2) {
        cVar4 = (*(code *)param_3)(param_1[2],piVar3[2]);
        if (cVar4 == '\0') {
          piVar2 = (int *)piVar3[1];
          piVar1 = piVar3 + 1;
          if (piVar2 != (int *)0x0) {
            *piVar2 = *piVar3;
          }
          if (*piVar3 != 0) {
            *(int *)(*piVar3 + 4) = *piVar1;
          }
          *piVar3 = 0;
          *piVar1 = 0;
          *piVar1 = (int)param_1;
          *piVar3 = *param_1;
          *(int **)(*param_1 + 4) = piVar3;
          *param_1 = (int)piVar3;
          param_1 = piVar3;
        }
        else {
          piVar2 = (int *)piVar3[1];
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_0059a390 @ 0059a390 ////

void FUN_0059a390(int *param_1,int *param_2,undefined *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  
  uVar5 = FUN_00599390((int)param_1,(int)param_2,param_3);
  if ((char)uVar5 == '\0') {
    for (; param_1 != param_2; param_1 = (int *)param_1[1]) {
      piVar2 = (int *)param_1[1];
      while (piVar3 = piVar2, piVar3 != param_2) {
        cVar4 = (*(code *)param_3)(param_1[2],piVar3[2]);
        if (cVar4 == '\0') {
          piVar2 = (int *)piVar3[1];
          piVar1 = piVar3 + 1;
          if (piVar2 != (int *)0x0) {
            *piVar2 = *piVar3;
          }
          if (*piVar3 != 0) {
            *(int *)(*piVar3 + 4) = *piVar1;
          }
          *piVar3 = 0;
          *piVar1 = 0;
          *piVar1 = (int)param_1;
          *piVar3 = *param_1;
          *(int **)(*param_1 + 4) = piVar3;
          *param_1 = (int)piVar3;
          param_1 = piVar3;
        }
        else {
          piVar2 = (int *)piVar3[1];
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_0059a4c0 @ 0059a4c0 ////

void __fastcall FUN_0059a4c0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb41e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION CharacterDebugToggles_Constructor @ 0059a590 ////

/* WARNING: Removing unreachable block (ram,0x0059a66c) */
/* WARNING: Removing unreachable block (ram,0x0059a601) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterDebugToggles_Constructor(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  char local_20 [8];
  undefined1 local_18;
  undefined1 local_13;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4210;
  local_c = ExceptionList;
  local_20[0] = '\0';
  ExceptionList = &local_c;
  _strncpy(local_20,"chr_hide",8);
  local_18 = 0;
  local_4 = 0;
  CVarSystem_Register_STUBBED();
  local_20[0] = '\0';
  _strncpy(local_20,"chr_pausedrag",0xd);
  local_13 = 0;
  local_4 = 1;
  CVarSystem_Register_STUBBED();
  local_4 = 0xffffffff;
  uVar1 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  _DAT_0104d540 = 0;
  _DAT_0104d50c = (int)uVar1;
  _DAT_0104d544 = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0059a6c0 @ 0059a6c0 ////

void __thiscall FUN_0059a6c0(void *this,char param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (((*(int *)((int)this + 0x4f8) != (int)this + 0x504) &&
      (iVar1 = *(int *)(*(int *)((int)this + 0x4f8) + 8), iVar1 != 0)) &&
     (piVar2 = *(int **)(iVar1 + 0x25c), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  if (*(void **)((int)this + 0x5f4) != (void *)0x0) {
    FUN_00971df0(*(void **)((int)this + 0x5f4));
    *(undefined4 *)((int)this + 0x5f4) = 0;
    FUN_0053a170(this,0);
  }
  if (*(void **)((int)this + 0x198) != (void *)0x0) {
    uVar3 = FUN_0093e3a0(*(void **)((int)this + 0x198),(int)this);
    if (((char)uVar3 != '\0') && (param_1 != '\0')) {
      (**(code **)(**(int **)((int)this + 0x198) + 0x20))(this);
    }
                    /* WARNING: Could not recover jumptable at 0x0059a746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)((int)this + 0x198) + 0x50))();
    return;
  }
  return;
}


//// FUNCTION FUN_0059a750 @ 0059a750 ////

void __thiscall FUN_0059a750(void *this,uint param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4228;
  local_c = ExceptionList;
  ppvVar4 = &local_c;
  if (param_1 == 2) {
    if (*(int *)((int)this + 0x4a0) != 2) {
      return;
    }
    ExceptionList = &local_c;
    pcVar5 = (char *)(**(code **)(*(int *)this + 0x124))();
    puStack_2c = auStack_20;
    auStack_20[0] = 0;
    uStack_28 = 0;
    uStack_24 = 0x14;
    pcVar7 = pcVar5;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004015d0(&puStack_2c,pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
    uStack_4 = 0;
    param_1 = FUN_00430120(&puStack_2c);
    if (((int)param_1 < 0) || (1 < (int)param_1)) {
      iVar6 = FUN_00990d30(0,2);
      param_1 = (uint)(iVar6 == 0);
    }
    uStack_4 = 0xffffffff;
    ppvVar4 = ExceptionList;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_2c);
    }
  }
  ExceptionList = ppvVar4;
  uStack_4 = 0xffffffff;
  if (*(uint *)((int)this + 0x4a0) != param_1) {
    *(uint *)((int)this + 0x4a0) = param_1;
    *(undefined4 *)((int)this + 0x4cc) = 0;
    **(undefined2 **)((int)this + 0x4c8) = 0;
    if (*(void **)((int)this + 0x6fc) != (void *)0x0) {
      FUN_009d2c50(*(void **)((int)this + 0x6fc),(void *)0x0,'\x01',-1.0,-1.0);
      if (*(undefined4 **)((int)this + 0x6fc) != (undefined4 *)0x0) {
        FUN_009d2b50(*(undefined4 **)((int)this + 0x6fc));
        *(undefined4 *)((int)this + 0x6fc) = 0;
      }
    }
    puVar3 = *(undefined4 **)((int)this + 0x568);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 *)((int)this + 0x568) = 0;
    puVar3 = *(undefined4 **)((int)this + 0x570);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 *)((int)this + 0x570) = 0;
    puVar3 = *(undefined4 **)((int)this + 0x56c);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 *)((int)this + 0x56c) = 0;
  }
  if (*(void **)((int)this + 0x6fc) != (void *)0x0) {
    FUN_009d17a0(*(void **)((int)this + 0x6fc),(uint)(*(int *)((int)this + 0x4a0) == 1));
  }
  (**(code **)(*(int *)this + 0x178))();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0059a8f0 @ 0059a8f0 ////

undefined4 * __thiscall FUN_0059a8f0(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)((int)this + 0x4f8) != (int)this + 0x504) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0x4f8) + 8), iVar1 != 0)) {
    piVar2 = (int *)FUN_00401c30(iVar1);
    if (piVar2 != (int *)0x0) {
      FUN_00599900(this,param_1,piVar2);
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}


//// FUNCTION FUN_0059a940 @ 0059a940 ////

undefined4 * FUN_0059a940(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 3;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,"ai_1char_idle.flm",0x11);
  return param_1;
}


//// FUNCTION FUN_0059a980 @ 0059a980 ////

undefined4 __fastcall FUN_0059a980(int param_1)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  void *pvVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 auStack_88 [3];
  char *pcStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  char acStack_70 [20];
  uint auStack_5c [3];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_0053bd70(param_1);
  if (((char)uVar2 == '\0') || (uVar2 = (uint)DAT_0104d524, DAT_0104d524 != (void *)0x0)) {
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  pvVar7 = (void *)(param_1 + -0xa0);
  if (((*(int *)(param_1 + 0x458) != param_1 + 0x464) &&
      (iVar9 = *(int *)(*(int *)(param_1 + 0x458) + 8), iVar9 != 0)) &&
     (piVar1 = *(int **)(iVar9 + 0x25c), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0xb8))(pvVar7);
  }
  if (*(int *)(param_1 + 0x554) != 0) {
    FUN_00598bf0(pvVar7);
  }
  (*(code *)DAT_0104d510[1])();
  DAT_0104d524 = pvVar7;
  (*(code *)*DAT_0104d510)();
  if (*(int *)(param_1 + 0x5a0) == 0) {
    pcVar3 = *(char **)(param_1 + 0x55c);
  }
  else {
    pcVar3 = *(char **)(param_1 + 0x59c);
  }
  pbVar4 = Anim_LoadByName(pcVar3);
  FUN_00526890(pvVar7,pbVar4);
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  if ((pbVar4[0x34] & 2) == 0) {
    uVar2 = *(uint *)(pbVar4 + 0x30) & 0xffff;
  }
  else {
    uVar2 = (int)((*(uint *)(pbVar4 + 0x30) & 0xffff) - 1) / 3 + 1;
  }
  *(uint *)(param_1 + 0x534) = uVar2 - 1;
  FUN_00985de0(pbVar4);
  if (*(int *)(param_1 + 0x538) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x538) + 4) = 0;
  }
  puVar12 = &DAT_00d17518;
  iVar11 = 0;
  pbVar4 = (byte *)FUN_0041c9c0(auStack_34,"PICK_UP_PLAYER_EFFECT");
  iVar9 = 2;
  pvVar5 = (void *)FUN_004f3b20();
  FUN_004f3270(pvVar5,iVar9,pbVar4,iVar11,puVar12);
  pcStack_7c = acStack_70;
  acStack_70[0] = '\0';
  uStack_78 = 0;
  uStack_74 = 0x14;
  _strncpy(pcStack_7c,"PICKUP_INITIAL_",0xf);
  uStack_78 = 0xf;
  pcStack_7c[0xf] = '\0';
  uStack_4 = 0;
  if (*(int *)(param_1 + 0x400) == 0) {
    uVar8 = *(undefined4 *)(param_1 + 0x404);
    pvVar5 = FUN_00407630(&pcStack_7c,"MALE_");
    FUN_004701b0(pvVar5,uVar8);
    FUN_0041c9c0(auStack_5c,pcStack_7c);
    auStack_5c[0] = auStack_5c[0] | 1;
    puVar6 = FUN_00598e50(pvVar7,auStack_88);
    uStack_50 = *puVar6;
    uStack_4c = puVar6[1];
    uStack_48 = puVar6[2];
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0x404);
    pvVar5 = FUN_00407630(&pcStack_7c,"FEMALE_");
    FUN_004701b0(pvVar5,uVar8);
    FUN_0041c9c0(auStack_5c,pcStack_7c);
    auStack_5c[0] = auStack_5c[0] | 1;
    puVar6 = FUN_00598e50(pvVar7,auStack_88);
    uStack_50 = *puVar6;
    uStack_4c = puVar6[1];
    uStack_48 = puVar6[2];
  }
  puVar10 = auStack_5c;
  puVar12 = &DAT_00d17518;
  iVar11 = 0;
  iVar9 = 2;
  pvVar7 = (void *)FUN_004f3b20();
  uVar8 = FUN_004f3270(pvVar7,iVar9,(byte *)puVar10,iVar11,puVar12);
  if (0x14 < uStack_74) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_7c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar8 >> 8),1);
}


//// FUNCTION FUN_0059ac10 @ 0059ac10 ////

void __fastcall FUN_0059ac10(int param_1)

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
  local_24 = FUN_009b01a0("PICKUP_INITIAL_MALE");
  local_28 = local_28 | 1;
  local_1c = *(undefined4 *)(param_1 + 0x100);
  local_18 = *(undefined4 *)(param_1 + 0x104);
  puVar4 = &DAT_00d17518;
  iVar3 = 0;
  puVar2 = &local_28;
  local_14 = *(undefined4 *)(param_1 + 0x108);
  iVar1 = 2;
  this = (void *)FUN_004f3b20();
  FUN_004f3270(this,iVar1,(byte *)puVar2,iVar3,puVar4);
  return;
}


//// FUNCTION FUN_0059acb0 @ 0059acb0 ////

void __fastcall FUN_0059acb0(int param_1)

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
  local_24 = FUN_009b01a0("PICKUP_INITIAL_MALE");
  local_28 = local_28 | 1;
  local_1c = *(undefined4 *)(param_1 + 0x100);
  local_18 = *(undefined4 *)(param_1 + 0x104);
  puVar4 = &DAT_00d17518;
  iVar3 = 0;
  puVar2 = &local_28;
  local_14 = *(undefined4 *)(param_1 + 0x108);
  iVar1 = 2;
  this = (void *)FUN_004f3b20();
  FUN_004f3270(this,iVar1,(byte *)puVar2,iVar3,puVar4);
  return;
}


//// FUNCTION FUN_0059ad50 @ 0059ad50 ////

undefined1 __fastcall FUN_0059ad50(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  
  cVar3 = FUN_004201b0(DAT_00f87b04);
  if ((cVar3 == '\0') && (param_1[0x14a] < 1)) {
    (**(code **)(*param_1 + 0x100))();
    if ((*(byte *)(param_1[0x47] + 0x9c) & 2) != 0) {
      uVar4 = 1;
      if ((((int *)param_1[0x13e] != param_1 + 0x141) &&
          (iVar1 = ((int *)param_1[0x13e])[2], iVar1 != 0)) &&
         (piVar2 = *(int **)(iVar1 + 0x25c), piVar2 != (int *)0x0)) {
        cVar3 = (**(code **)(*piVar2 + 200))();
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*piVar2 + 0xbc))();
          if (cVar3 == '\0') {
            uVar4 = 0;
          }
        }
      }
      return uVar4;
    }
  }
  return 0;
}


//// FUNCTION TMCharacter_CancelAction @ 0059add0 ////

void __thiscall TMCharacter_CancelAction(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)((int)this + 0x4ec);
  if ((piVar1 != (int *)0x0) && ((undefined4 *)piVar1[6] == param_1)) {
    (**(code **)(*piVar1 + 4))();
  }
  if (*(int *)((int)this + 0x4f8) == (int)this + 0x504) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)((int)this + 0x4f8) + 8);
  }
  if (puVar2 == param_1) {
    if (*(void **)((int)this + 0x5f4) != (void *)0x0) {
      FUN_00971df0(*(void **)((int)this + 0x5f4));
      *(undefined4 *)((int)this + 0x5f4) = 0;
    }
    *(undefined4 *)((int)this + 0x5f4) = 0;
    FUN_0053a170(this,0);
  }
  if (param_1 != (undefined4 *)0x0) {
    for (piVar1 = *(int **)((int)this + 0x4f8); piVar1 != (int *)((int)this + 0x504);
        piVar1 = (int *)piVar1[1]) {
      if ((undefined4 *)piVar1[2] == param_1) {
        if ((int *)piVar1[1] != (int *)0x0) {
          *(int *)piVar1[1] = *piVar1;
        }
        if (*piVar1 != 0) {
          *(int *)(*piVar1 + 4) = piVar1[1];
        }
        *piVar1 = 0;
        piVar1[1] = 0;
        piVar1 = param_1 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*param_1)(1);
        }
        param_1 = (undefined4 *)0x0;
        break;
      }
    }
  }
  puVar2 = *(undefined4 **)((int)this + 0x49c);
  if ((param_1 == puVar2) && (puVar2 != (undefined4 *)0x0)) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)((int)this + 0x488) + 4))();
    *(undefined4 *)((int)this + 0x49c) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x488))();
  }
  FUN_004ac560(*(void **)((int)this + 0x5d8));
  return;
}


//// FUNCTION FUN_0059aed0 @ 0059aed0 ////

void __fastcall FUN_0059aed0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x4f8) != param_1 + 0x504) {
    do {
      piVar1 = *(int **)(param_1 + 0x4f8);
      puVar2 = (undefined4 *)piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    } while (*(int *)(param_1 + 0x4f8) != param_1 + 0x504);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x49c);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x488) + 4))();
    *(undefined4 *)(param_1 + 0x49c) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x488))();
  }
  if (*(int **)(param_1 + 0x4ec) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0059af78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x4ec) + 4))();
  return;
}


//// FUNCTION FUN_0059af80 @ 0059af80 ////

int __thiscall FUN_0059af80(void *this,float param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *local_4;
  
  iVar4 = 0;
  for (iVar5 = *(int *)((int)this + 0x53c); iVar5 != (int)this + 0x548; iVar5 = *(int *)(iVar5 + 4))
  {
    *(undefined1 *)(*(int *)(iVar5 + 8) + 0x9d) = 0;
  }
  iVar5 = *(int *)((int)this + 0x53c);
  local_4 = this;
  if (iVar5 != (int)this + 0x548) {
    while( true ) {
      piVar1 = *(int **)(iVar5 + 8);
      if ((*(char *)((int)this + 0x5b4) == '\0') ||
         (cVar3 = FUN_00842eb0((int)piVar1), cVar3 != '\0')) {
        (**(code **)(*piVar1 + 0x24))(&local_4);
      }
      else {
        local_4 = (void *)0x0;
      }
      if ((float)local_4 <= param_1) {
        return iVar4;
      }
      iVar2 = *(int *)(iVar5 + 8);
      if ((*(int **)(iVar2 + 0x98) != (int *)0x0) &&
         (iVar4 = (**(code **)(**(int **)(iVar2 + 0x98) + 8))(this,iVar2,0x7f7fffff), iVar4 != 0))
      break;
      *(undefined1 *)(iVar2 + 0x9d) = 1;
      iVar5 = *(int *)(iVar5 + 4);
      if (iVar5 == (int)this + 0x548) {
        return iVar4;
      }
    }
    *(undefined1 *)(iVar2 + 0x9d) = 0;
  }
  return iVar4;
}


//// FUNCTION FUN_0059b050 @ 0059b050 ////

void __thiscall FUN_0059b050(void *this,undefined4 *param_1)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char acStack_40 [12];
  undefined4 uStack_34;
  
  fVar2 = *(float *)((int)this + 0x46c) - 1.0;
  *(float *)((int)this + 0x46c) = fVar2;
  if (fVar2 < 0.0 != (fVar2 == 0.0)) {
    fVar5 = FUN_00990e30(10.0,30.0);
    *(float *)((int)this + 0x46c) = (float)fVar5;
    if ((int *)param_1[0x9d] != (int *)0x0) {
      iVar4 = *(int *)param_1[0x9d];
      FUN_00401c30((int)param_1);
      cVar3 = (**(code **)(iVar4 + 4))();
      if (cVar3 != '\0') {
        iVar4 = FUN_00401c30((int)param_1);
        iVar4 = **(int **)(iVar4 + 0x98);
        FUN_00401c30((int)param_1);
        iVar4 = (**(code **)(iVar4 + 8))();
        if (iVar4 != 0) {
          pcVar6 = acStack_40;
          acStack_40[0] = '\0';
          uVar7 = 0;
          uVar8 = 0x14;
          FUN_004015d0(&stack0xffffffb4,"Found a better way to do desire",0x1f);
          FUN_0054de30((void *)((int)this + 0x214),pcVar6,uVar7,uVar8);
          uStack_34 = 0x59b13d;
          TMCharacter_CancelAction(this,param_1);
          piVar1 = (int *)(iVar4 + 0x1f0);
          *piVar1 = (int)this + 0x4f4;
          *(undefined4 *)(iVar4 + 500) = *(undefined4 *)((int)this + 0x4f8);
          **(int **)((int)this + 0x4f8) = (int)piVar1;
          *(int **)((int)this + 0x4f8) = piVar1;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_0059b240 @ 0059b240 ////

uint __thiscall FUN_0059b240(void *this,float param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint in_EAX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  float local_8;
  undefined1 local_4 [4];
  
  for (iVar1 = *(int *)((int)this + 0x53c); iVar1 != (int)this + 0x548; iVar1 = *(int *)(iVar1 + 4))
  {
    piVar2 = *(int **)(iVar1 + 8);
    if ((*(char *)((int)this + 0x5b4) == '\0') || (cVar3 = FUN_00842eb0((int)piVar2), cVar3 != '\0')
       ) {
      (**(code **)(*piVar2 + 0x24))(&local_8);
      uVar4 = extraout_var_00;
    }
    else {
      local_8 = 0.0;
      uVar4 = extraout_var;
    }
    in_EAX = CONCAT22(uVar4,(ushort)(local_8 < param_1) << 8 |
                            (ushort)(NAN(local_8) || NAN(param_1)) << 10 |
                            (ushort)(local_8 == param_1) << 0xe);
    if (local_8 < param_1 || (local_8 == param_1) != 0) break;
    in_EAX = *(uint *)(iVar1 + 8);
    if (*(int **)(in_EAX + 0x98) == (int *)0x0) {
      *(undefined1 *)(in_EAX + 0x9d) = 1;
    }
    else {
      in_EAX = (**(code **)(**(int **)(in_EAX + 0x98) + 4))(local_4,this,in_EAX + 100);
      if ((char)in_EAX != '\0') {
        *(undefined1 *)(*(int *)(iVar1 + 8) + 0x9d) = 0;
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
      *(undefined1 *)(*(int *)(iVar1 + 8) + 0x9d) = 1;
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_0059b300 @ 0059b300 ////

int * __thiscall FUN_0059b300(void *this,int *param_1)

{
  int iVar1;
  wchar_t *_Source;
  uint _Count;
  size_t sVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb4268;
  pvStack_c = ExceptionList;
  piVar6 = (int *)0x0;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if ((*(int *)((int)this + 0x4f8) != (int)this + 0x504) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0x4f8) + 8), ExceptionList = &pvStack_c, iVar1 != 0)) {
    ExceptionList = &pvStack_c;
    piVar6 = (int *)FUN_00401c30(iVar1);
  }
  sVar2 = FUN_00ace02d(L"<TABLE border=0 cellpadding=0 cellspacing=0>");
  FUN_0040cae0(&local_4c,L"<TABLE border=0 cellpadding=0 cellspacing=0>",sVar2);
  for (iVar1 = *(int *)((int)this + 0x53c); iVar1 != (int)this + 0x548; iVar1 = *(int *)(iVar1 + 4))
  {
    puVar3 = (undefined4 *)
             (**(code **)(**(int **)(iVar1 + 8) + 0x2c))(local_2c,*(int **)(iVar1 + 8) == piVar6);
    FUN_0040cae0(&local_4c,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  sVar2 = FUN_00ace02d(L"</TABLE>");
  FUN_0040cae0(&local_4c,L"</TABLE>",sVar2);
  _Count = local_48;
  _Source = local_4c;
  *param_1 = (int)(param_1 + 3);
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  if (9 < local_48) {
    uVar4 = local_48 + 0x20 & 0xffffffe0;
    param_1[2] = uVar4;
    pvVar5 = _malloc(uVar4 * 2);
    *param_1 = (int)pvVar5;
  }
  _wcsncpy((wchar_t *)*param_1,_Source,_Count);
  param_1[1] = _Count;
  *(undefined2 *)(*param_1 + _Count * 2) = 0;
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_0059b470 @ 0059b470 ////

int * __thiscall FUN_0059b470(void *this,int *param_1)

{
  int iVar1;
  wchar_t *_Source;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  size_t sVar5;
  uint uVar6;
  void *pvVar7;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb4288;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  iVar1 = *(int *)((int)this + 0x4f8);
  local_4 = 0;
  _Source = local_60;
  local_c = ExceptionList;
  uVar2 = local_68;
  ExceptionList = &local_c;
  for (; local_6c = _Source, local_68 = uVar2, iVar1 != (int)this + 0x504;
      iVar1 = *(int *)(iVar1 + 4)) {
    iVar3 = *(int *)(iVar1 + 8);
    if (*(char *)(iVar3 + 0x225) == '\0') {
      iVar3 = FUN_00401c30(iVar3);
      puVar4 = FUN_00568790(local_2c,(undefined4 *)(iVar3 + 100));
      sVar5 = FUN_00ace02d(L"<font COLOR=#FF5555>");
      FUN_0040cae0(&local_6c,L"<font COLOR=#FF5555>",sVar5);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      sVar5 = FUN_00ace02d(L"</font>");
      FUN_0040cae0(&local_6c,L"</font>",sVar5);
      pvVar7 = local_2c[0];
      uVar2 = local_24;
    }
    else {
      iVar3 = FUN_00401c30(iVar3);
      puVar4 = FUN_00568790(local_4c,(undefined4 *)(iVar3 + 100));
      sVar5 = FUN_00ace02d(L"<font COLOR=#55FF55>");
      FUN_0040cae0(&local_6c,L"<font COLOR=#55FF55>",sVar5);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      sVar5 = FUN_00ace02d(L"</font>");
      FUN_0040cae0(&local_6c,L"</font>",sVar5);
      pvVar7 = local_4c[0];
      uVar2 = local_44;
    }
    if (10 < uVar2) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar7);
    }
    _Source = local_6c;
    uVar2 = local_68;
  }
  *param_1 = (int)(param_1 + 3);
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  if (9 < uVar2) {
    uVar6 = uVar2 + 0x20 >> 5;
    param_1[2] = uVar6 << 5;
    pvVar7 = _malloc(uVar6 * 0x40);
    *param_1 = (int)pvVar7;
  }
  _wcsncpy((wchar_t *)*param_1,_Source,uVar2);
  param_1[1] = uVar2;
  *(undefined2 *)(*param_1 + uVar2 * 2) = 0;
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0059b650 @ 0059b650 ////

void __fastcall FUN_0059b650(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x588) != param_1 + 0x594) {
    do {
      piVar1 = *(int **)(param_1 + 0x588);
      puVar2 = (undefined4 *)piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    } while (*(int *)(param_1 + 0x588) != param_1 + 0x594);
  }
  return;
}


//// FUNCTION FUN_0059b810 @ 0059b810 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0059b810(int *param_1)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  void *this;
  int unaff_ESI;
  float10 fVar5;
  uint *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int iStack_34;
  int iStack_30;
  uint auStack_2c [3];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if ((_DAT_0104d508 == 0.0) &&
     ((((cVar2 = (**(code **)(*param_1 + 0x13c))(), cVar2 != '\0' || ((char)param_1[0x57] != '\0'))
       || (0 < param_1[0x14a])) && ((void *)param_1[0x47] != (void *)0x0)))) {
    if (((char)param_1[0x19] != '\0') && (iVar4 = FUN_0097e350((void *)param_1[0x47],0), iVar4 != 0)
       ) {
      bVar3 = FUN_00413cc0(DAT_00f87aa0);
      if (!bVar3) {
        FUN_005266f0(param_1);
      }
      if ((int *)param_1[0x13b] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x13b] + 0xc))();
      }
    }
    FUN_004aaef0();
    (**(code **)(*param_1 + 0x38))(&iStack_34);
    if (0 < param_1[0x117]) {
      if (((param_1[0x11a] != 0x449a4000) &&
          (fVar1 = (float)param_1[0x118],
          0.0 < (float)param_1[0x11a] * (float)param_1[0x11a] +
                (float)param_1[0x119] * (float)param_1[0x119] + fVar1 * fVar1)) &&
         (fVar5 = (float10)FUN_00412f50(), (float10)25.0 < fVar5)) {
        FUN_0041c9c0(auStack_2c,"HUD_TELEPORT");
        iStack_20 = param_1[0x40];
        auStack_2c[0] = auStack_2c[0] | 1;
        puVar8 = &DAT_00d17518;
        iStack_1c = param_1[0x41];
        iStack_18 = param_1[0x42];
        iVar7 = 0;
        puVar6 = auStack_2c;
        iVar4 = 2;
        this = (void *)FUN_004f3b20();
        FUN_004f3270(this,iVar4,(byte *)puVar6,iVar7,puVar8);
        FUN_0041c7c0((float *)&stack0xffffffc8);
        FUN_0041c7c0((float *)(param_1 + 0x118));
      }
      param_1[0x117] = param_1[0x117] + -1;
    }
    param_1[0x118] = unaff_ESI;
    param_1[0x119] = iStack_34;
    param_1[0x11a] = iStack_30;
  }
  return;
}


//// FUNCTION FUN_0059ba30 @ 0059ba30 ////

void __thiscall FUN_0059ba30(void *this,char param_1)

{
  *(char *)((int)this + 0x530) = param_1;
  if (param_1 == '\0') {
    if (1 < *(int *)((int)this + 0x528)) {
      *(undefined4 *)((int)this + 0x528) = 0xffffffff;
    }
    (**(code **)(*(int *)this + 0x14c))();
    FUN_004ac490(*(void **)((int)this + 0x5d8));
    return;
  }
  if (*(undefined4 **)((int)this + 0xd4) != (undefined4 *)0x0) {
    **(undefined4 **)((int)this + 0xd4) = *(undefined4 *)((int)this + 0xd0);
  }
  if (*(int *)((int)this + 0xd0) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0xd0) + 4) = *(undefined4 *)((int)this + 0xd4);
  }
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  FUN_0059b650((int)this);
  FUN_004ac4d0(*(void **)((int)this + 0x5d8));
  return;
}


//// FUNCTION FUN_0059bac0 @ 0059bac0 ////

void __thiscall FUN_0059bac0(void *this,int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)((int)this + 0x568);
  if (iVar2 != param_1) {
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0xb8) != 3)) {
      *(undefined1 *)((int)this + 0x727) = 0;
    }
    else {
      *(undefined1 *)((int)this + 0x727) = 1;
    }
    if (param_1 != 0) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
    puVar3 = *(undefined4 **)((int)this + 0x568);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    *(int *)((int)this + 0x568) = param_1;
    if (*(void **)((int)this + 0x6fc) != (void *)0x0) {
      if (param_1 != 0) {
        if (param_2 != '\0') {
          (**(code **)(*(int *)this + 300))(1);
          return;
        }
        FUN_004319b0(param_1);
        return;
      }
      FUN_009d2c50(*(void **)((int)this + 0x6fc),(void *)0x0,'\x01',-1.0,-1.0);
    }
  }
  return;
}


//// FUNCTION FUN_0059bb60 @ 0059bb60 ////

void __thiscall FUN_0059bb60(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  puVar2 = *(undefined4 **)((int)this + 0x56c);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(int *)((int)this + 0x56c) = param_1;
  return;
}


//// FUNCTION FUN_0059bb90 @ 0059bb90 ////

undefined4 __fastcall FUN_0059bb90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x56c);
}


//// FUNCTION FUN_0059bba0 @ 0059bba0 ////

void __thiscall FUN_0059bba0(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  puVar2 = *(undefined4 **)((int)this + 0x570);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(int *)((int)this + 0x570) = param_1;
  return;
}


//// FUNCTION FUN_0059bbd0 @ 0059bbd0 ////

int __fastcall FUN_0059bbd0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb42d0;
  local_c = ExceptionList;
  if (param_1[0x15c] != 0) {
    return param_1[0x15c];
  }
  ExceptionList = &local_c;
  if (param_1[0x128] == 2) {
    ExceptionList = &local_c;
    (**(code **)(*param_1 + 0xe0))(2);
  }
  pcVar5 = (char *)(**(code **)(*param_1 + 0x124))();
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar7 = pcVar5;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
  uStack_4 = 0;
  FUN_004335f0((int *)&puStack_54,&puStack_2c,param_1[0x128],0,0,0);
  uStack_4._0_1_ = 2;
  if (uStack_24 < 0x15) {
    if (puStack_54 == (undefined4 *)0x0) {
      uStack_44 = 0x14;
      uStack_48 = 0;
      acStack_40[0] = '\0';
      if (param_1[0x128] == 0) {
        pcStack_4c = acStack_40;
        _strncpy(acStack_40,"m_none",6);
        uStack_48 = 6;
        pcStack_4c[6] = '\0';
        uStack_4._0_1_ = 3;
        piVar6 = FUN_004335f0((int *)&puStack_50,&pcStack_4c,param_1[0x128],0,0,0);
        uStack_4._0_1_ = 4;
        FUN_004349f0(&puStack_54,piVar6);
        uStack_4 = CONCAT31(uStack_4._1_3_,3);
      }
      else {
        pcStack_4c = acStack_40;
        _strncpy(acStack_40,"f_none",6);
        uStack_48 = 6;
        pcStack_4c[6] = '\0';
        uStack_4._0_1_ = 5;
        piVar6 = FUN_004335f0((int *)&puStack_50,&pcStack_4c,param_1[0x128],0,0,0);
        uStack_4._0_1_ = 6;
        FUN_004349f0(&puStack_54,piVar6);
        uStack_4 = CONCAT31(uStack_4._1_3_,5);
      }
      if ((puStack_50 != (undefined4 *)0x0) &&
         (iVar2 = puStack_50[0x12], puStack_50[0x12] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)*puStack_50)(1);
      }
      puStack_50 = (undefined4 *)0x0;
      uStack_4._0_1_ = 2;
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_4c);
      }
    }
    puVar4 = puStack_54;
    uStack_4._0_1_ = 2;
    if (puStack_54 != (undefined4 *)0x0) {
      puStack_54[0x12] = puStack_54[0x12] + 1;
    }
    puVar3 = (undefined4 *)param_1[0x15c];
    if (puVar3 != (undefined4 *)0x0) {
      piVar6 = puVar3 + 0x12;
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    puVar3 = puStack_54;
    param_1[0x15c] = (int)puVar4;
    if (param_1[0x15b] == 0) {
      if (puStack_54 != (undefined4 *)0x0) {
        puStack_54[0x12] = puStack_54[0x12] + 1;
      }
      puVar4 = (undefined4 *)param_1[0x15b];
      if (puVar4 != (undefined4 *)0x0) {
        piVar6 = puVar4 + 0x12;
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          (**(code **)*puVar4)(1);
        }
      }
      param_1[0x15b] = (int)puVar3;
    }
    uStack_4 = 0xffffffff;
    if ((puStack_54 != (undefined4 *)0x0) &&
       (iVar2 = puStack_54[0x12], puStack_54[0x12] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)*puStack_54)(1);
    }
    ExceptionList = local_c;
    return param_1[0x15c];
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_2c);
}


//// FUNCTION FUN_0059be60 @ 0059be60 ////

undefined4 __fastcall FUN_0059be60(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb42e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = FUN_0053a280((int)param_1);
  if ((char)uVar4 != '\0') {
    uVar5 = (**(code **)(*(int *)((int)param_1 + -0x78) + 0xe0))
                      (*(undefined4 *)((int)param_1 + 0x428));
    puVar2 = *(undefined4 **)((int)param_1 + 0x4f0);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[0x12] = puVar2[0x12] + 1;
      puVar3 = *(undefined4 **)((int)param_1 + 0x4f0);
      puStack_8 = (undefined1 *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = puVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
      *(undefined4 *)((int)param_1 + 0x4f0) = 0;
      uVar5 = (**(code **)(*(int *)((int)param_1 + -0x78) + 0x128))(puVar2,1);
      puStack_8 = (undefined1 *)0xffffffff;
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          uVar5 = (**(code **)*puVar2)(1);
        }
      }
    }
    ExceptionList = param_1;
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  ExceptionList = local_c;
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_0059bfb0 @ 0059bfb0 ////

void __fastcall FUN_0059bfb0(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  (**(code **)(*param_1 + 0x104))("getjob");
  if (((int *)param_1[0x13e] != param_1 + 0x141) &&
     (puVar1 = (undefined4 *)((int *)param_1[0x13e])[2], puVar1 != (undefined4 *)0x0)) {
    iVar3 = FUN_00401c30((int)puVar1);
    if (iVar3 != 0) {
      pcVar4 = "inroom";
      iVar3 = FUN_00401c30((int)puVar1);
      bVar2 = FUN_00430950((undefined4 *)(iVar3 + 100),pcVar4);
      if (!bVar2) {
        return;
      }
    }
    TMCharacter_CancelAction(param_1,puVar1);
  }
  return;
}


//// FUNCTION TMCharacter_AddAction @ 0059c020 ////

void __thiscall TMCharacter_AddAction(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char local_1c [12];
  undefined4 uStack_10;
  
  pcVar4 = local_1c;
  local_1c[0] = '\0';
  uVar5 = 0;
  uVar6 = 0x14;
  FUN_004015d0(&stack0xffffffd8,"AddAction",9);
  FUN_0054de30((void *)((int)this + 0x214),pcVar4,uVar5,uVar6);
  if (((*(int *)((int)this + 0x4f8) != (int)this + 0x504) &&
      (puVar2 = *(undefined4 **)(*(int *)((int)this + 0x4f8) + 8), puVar2 != (undefined4 *)0x0)) &&
     (*(char *)((int)puVar2 + 0x225) != '\0')) {
    if ((*(byte *)(puVar2 + 0x84) & 1) == 0) {
      uStack_10 = 0x59c08c;
      TMCharacter_CancelAction(this,puVar2);
    }
    else if (*(int **)((int)this + 0x4ec) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x4ec) + 4))();
    }
  }
  piVar1 = (int *)((int)this + 0x504);
  piVar3 = (int *)(param_1 + 0x1f0);
  *(int **)(param_1 + 500) = piVar1;
  *piVar3 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar3;
  *piVar1 = (int)piVar3;
  return;
}


//// FUNCTION FUN_0059c0d0 @ 0059c0d0 ////

void __fastcall FUN_0059c0d0(void *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  byte *local_4c [2];
  uint local_44;
  byte *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4319;
  local_c = ExceptionList;
  bVar10 = false;
  iVar6 = *(int *)((int)param_1 + 0x4f8);
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (iVar6 != (int)param_1 + 0x504) {
    do {
      ExceptionList = ppvVar3;
      local_4 = 0xffffffff;
      iVar4 = FUN_00401c30(*(int *)(iVar6 + 8));
      if (iVar4 == 0) {
LAB_0059c185:
        bVar9 = false;
      }
      else {
        FUN_0048f010(&stack0x00000004,local_4c);
        bVar10 = true;
        local_4 = 0;
        iVar4 = FUN_00401c30(*(int *)(iVar6 + 8));
        pbVar5 = *(byte **)(iVar4 + 100);
        pbVar7 = local_4c[0];
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_0059c178:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0059c17d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_0059c178;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0059c17d:
        if (iVar4 != 0) goto LAB_0059c185;
        bVar9 = true;
      }
      local_4 = 0xffffffff;
      if ((bVar10) && (bVar10 = false, 0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (bVar9) {
        TMCharacter_CancelAction(param_1,*(undefined4 **)(iVar6 + 8));
        break;
      }
      iVar6 = *(int *)(iVar6 + 4);
      ppvVar3 = ExceptionList;
    } while (iVar6 != (int)param_1 + 0x504);
  }
  piVar8 = *(int **)((int)param_1 + 0x53c);
  if (piVar8 == (int *)((int)param_1 + 0x548)) {
    ExceptionList = local_c;
    return;
  }
  do {
    FUN_0048f010(&stack0x00000004,local_2c);
    pbVar5 = *(byte **)(piVar8[2] + 100);
    pbVar7 = local_2c[0];
    do {
      bVar1 = *pbVar5;
      bVar10 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0059c238:
        iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0059c23d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar10 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0059c238;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0059c23d:
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)piVar8[2];
      if ((int *)piVar8[1] != (int *)0x0) {
        *(int *)piVar8[1] = *piVar8;
      }
      if (*piVar8 != 0) {
        *(int *)(*piVar8 + 4) = piVar8[1];
      }
      *piVar8 = 0;
      piVar8[1] = 0;
      if (puVar2 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return;
      }
      piVar8 = puVar2 + 0x12;
      *piVar8 = *piVar8 + -1;
      if (*piVar8 != 0) {
        ExceptionList = local_c;
        return;
      }
      (**(code **)*puVar2)(1);
      ExceptionList = local_c;
      return;
    }
    piVar8 = (int *)piVar8[1];
    if (piVar8 == (int *)((int)param_1 + 0x548)) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_0059c2d0 @ 0059c2d0 ////

void __thiscall FUN_0059c2d0(void *this,undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_1c [12];
  undefined4 uStack_10;
  
  if (param_1 == *(undefined4 **)(*(int *)((int)this + 0x4f8) + 8)) {
    if ((param_1 != (undefined4 *)0x0) && (param_1[0x9d] != 0)) {
      iVar1 = FUN_00401c30((int)param_1);
      if (*(char *)(iVar1 + 0x9c) != '\0') {
        uStack_10 = 0x59c370;
        FUN_0059b050(this,param_1);
      }
    }
  }
  else {
    if ((param_1 != (undefined4 *)0x0) && ((*(byte *)(param_1 + 0x84) & 1) == 0)) {
      pcVar2 = local_1c;
      local_1c[0] = '\0';
      uVar3 = 0;
      uVar4 = 0x14;
      FUN_004015d0(&stack0xffffffd8,"//this action can\'t be resumed, so just junk it",0x2f);
      FUN_0054de30((void *)((int)this + 0x214),pcVar2,uVar3,uVar4);
      uStack_10 = 0x59c32e;
      TMCharacter_CancelAction(this,param_1);
      return;
    }
    if (*(int **)((int)this + 0x4ec) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x4ec) + 4))();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0059c380 @ 0059c380 ////

int __fastcall FUN_0059c380(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  void **ppvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *local_4c;
  uint local_48;
  uint local_44;
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb4351;
  local_c = ExceptionList;
  bVar2 = false;
  iVar7 = *(int *)(param_1 + 0x4f8);
  ExceptionList = &local_c;
  ppvVar4 = &local_c;
  if (iVar7 != param_1 + 0x504) {
    do {
      ExceptionList = ppvVar4;
      local_4 = 0xffffffff;
      iVar1 = *(int *)(iVar7 + 8);
      iVar5 = FUN_00401c30(iVar1);
      if (iVar5 == 0) {
LAB_0059c412:
        bVar3 = false;
      }
      else {
        FUN_0048f010(&stack0x00000004,&local_4c);
        bVar2 = true;
        local_4 = 0;
        iVar5 = FUN_00401c30(iVar1);
        uVar6 = FUN_00413450((void *)(iVar5 + 100),local_4c,0,local_48);
        bVar3 = true;
        if (uVar6 == 0xffffffff) goto LAB_0059c412;
      }
      local_4 = 0xffffffff;
      if ((bVar2) && (bVar2 = false, 0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      if (bVar3) {
        ExceptionList = local_c;
        return iVar1;
      }
      iVar7 = *(int *)(iVar7 + 4);
      ppvVar4 = ExceptionList;
    } while (iVar7 != param_1 + 0x504);
  }
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x49c) != 0) {
    FUN_0048f010(&stack0x00000004,&local_2c);
    local_4 = 1;
    iVar7 = FUN_00401c30(*(int *)(param_1 + 0x49c));
    uVar6 = FUN_00413450((void *)(iVar7 + 100),local_2c,0,local_28);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (uVar6 != 0xffffffff) {
      ExceptionList = local_c;
      return *(int *)(param_1 + 0x49c);
    }
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_0059c510 @ 0059c510 ////

bool __fastcall FUN_0059c510(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0059c380(param_1);
  return iVar1 != 0;
}


//// FUNCTION FUN_0059c530 @ 0059c530 ////

int __fastcall FUN_0059c530(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  byte *local_20 [2];
  uint local_18;
  
  iVar2 = *(int *)(param_1 + 0x53c);
  do {
    if (iVar2 == param_1 + 0x548) {
      return 0;
    }
    iVar3 = *(int *)(iVar2 + 8);
    FUN_0048f010(&stack0x00000004,local_20);
    pbVar4 = *(byte **)(iVar3 + 100);
    pbVar6 = local_20[0];
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0059c594:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0059c599;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0059c594;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0059c599:
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    if (iVar5 == 0) {
      return iVar3;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}


//// FUNCTION FUN_0059c5e0 @ 0059c5e0 ////

bool __fastcall FUN_0059c5e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0059c530(param_1);
  return iVar1 != 0;
}


//// FUNCTION FUN_0059c600 @ 0059c600 ////

void __fastcall FUN_0059c600(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  byte *local_20 [2];
  uint local_18;
  
  piVar4 = *(int **)(param_1 + 0x53c);
  do {
    if (piVar4 == (int *)(param_1 + 0x548)) {
      return;
    }
    FUN_0048f010(&stack0x00000004,local_20);
    pbVar5 = *(byte **)(piVar4[2] + 100);
    pbVar7 = local_20[0];
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0059c668:
        iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_0059c66d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0059c668;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0059c66d:
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    if (iVar6 == 0) {
      piVar2 = (int *)piVar4[1];
      puVar3 = (undefined4 *)piVar4[2];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar4;
      }
      if (*piVar4 != 0) {
        *(int *)(*piVar4 + 4) = piVar4[1];
      }
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4 = piVar2;
      if (puVar3 != (undefined4 *)0x0) {
        piVar2 = puVar3 + 0x12;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
    }
    else {
      piVar4 = (int *)piVar4[1];
    }
  } while( true );
}


//// FUNCTION FUN_0059c6e0 @ 0059c6e0 ////

int __thiscall FUN_0059c6e0(void *this,char param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 != '\0') {
    uVar1 = FUN_00413450((void *)(*(int *)((int)this + 0x568) + 0x78),"traction",0,8);
    if (uVar1 != 0xffffffff) {
      iVar2 = FUN_0059bbd0(this);
      return iVar2;
    }
  }
  if (*(int *)((int)this + 0x568) == 0) {
    iVar2 = *(int *)this;
    uVar4 = 1;
    iVar3 = FUN_0059bbd0(this);
    (**(code **)(iVar2 + 0x128))(iVar3,uVar4);
  }
  return *(int *)((int)this + 0x568);
}


//// FUNCTION FUN_0059c740 @ 0059c740 ////

void __thiscall FUN_0059c740(void *this,char param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  
  if (*(int *)((int)this + 0x6fc) != 0) {
    if (*(int *)((int)this + 0x568) == 0) {
      iVar1 = *(int *)this;
      uVar7 = 1;
      iVar3 = FUN_0059bbd0(this);
      (**(code **)(iVar1 + 0x128))(iVar3,uVar7);
    }
    iVar1 = *(int *)((int)this + 0x568);
    if (param_1 != '\0') {
      cVar2 = FUN_00430e40(iVar1);
      if (cVar2 != '\0') {
        fVar8 = -1.0;
        fVar6 = -1.0;
        cVar2 = '\x01';
        pvVar4 = (void *)FUN_0042fed0(*(char **)((int)this + 0x4a0));
        FUN_009d2c50(*(void **)((int)this + 0x6fc),pvVar4,cVar2,fVar6,fVar8);
        return;
      }
    }
    param_1 = '\x01';
    if ((*(int *)(iVar1 + 0xb8) == 3) || (*(char *)((int)this + 0x727) != '\0')) {
      param_1 = '\0';
    }
    fVar5 = FUN_0042fef0(iVar1);
    fVar6 = (float)fVar5;
    fVar5 = FUN_0042ff00(iVar1);
    fVar8 = (float)fVar5;
    pvVar4 = (void *)FUN_004319b0(iVar1);
    FUN_009d2c50(*(void **)((int)this + 0x6fc),pvVar4,param_1,fVar8,fVar6);
  }
  return;
}


//// FUNCTION FUN_0059c810 @ 0059c810 ////

void __fastcall FUN_0059c810(int param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4376;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(0x144);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = DesireGetJob_Constructor(pvVar2,param_1);
  }
  piVar4 = puVar3 + 0x28;
  piVar1 = (int *)(param_1 + 0x548);
  puVar3[0x29] = piVar1;
  *piVar4 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar4;
  *piVar1 = (int)piVar4;
  local_4 = 0xffffffff;
  iVar5 = FUN_0059c530(param_1);
  if (iVar5 == 0) {
    pvVar2 = operator_new(0x128);
    local_4 = 1;
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = DesirePlay_Constructor(pvVar2,param_1);
    }
    piVar4 = puVar3 + 0x28;
    piVar1 = (int *)(param_1 + 0x548);
    puVar3[0x29] = piVar1;
    *piVar4 = *piVar1;
    *(int **)(*piVar1 + 4) = piVar4;
    *piVar1 = (int)piVar4;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0059c8e0 @ 0059c8e0 ////

void __thiscall FUN_0059c8e0(void *this,undefined4 param_1)

{
  byte bVar1;
  void *this_00;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  byte **ppbVar12;
  byte *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb43a9;
  local_c = ExceptionList;
  uVar11 = 0;
  bVar10 = false;
  ExceptionList = &local_c;
  this_00 = (void *)FUN_0059c380((int)this);
  FUN_00401050(this_00,uVar11);
  FUN_0048f010(&param_1,local_2c);
  local_4 = 0;
  if (*(int *)((int)this + 0x4f8) == (int)this + 0x504) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)((int)this + 0x4f8) + 8);
  }
  iVar6 = FUN_00401c30(iVar6);
  pbVar2 = *(byte **)(iVar6 + 100);
  pbVar7 = local_2c[0];
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_0059c987:
      iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0059c98c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_0059c987;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_0059c98c:
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (iVar6 == 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)((int)this + 0x49c) != 0) {
    FUN_0048f010(&param_1,local_2c);
    ppbVar12 = local_2c;
    local_4 = 1;
    bVar10 = true;
    iVar6 = FUN_00401c30(*(int *)((int)this + 0x49c));
    uVar3 = FUN_00401ec0((undefined4 *)(iVar6 + 100),ppbVar12);
    if ((char)uVar3 != '\0') {
      bVar9 = true;
      goto LAB_0059ca02;
    }
  }
  bVar9 = false;
LAB_0059ca02:
  local_4 = 0xffffffff;
  if ((bVar10) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (bVar9) {
    if (*(int *)((int)this + 0x4f8) != (int)this + 0x504) {
      TMCharacter_CancelAction(this,*(undefined4 **)(*(int *)((int)this + 0x4f8) + 8));
      ExceptionList = local_c;
      return;
    }
    TMCharacter_CancelAction(this,(undefined4 *)0x0);
    ExceptionList = local_c;
    return;
  }
  piVar8 = *(int **)((int)this + 0x4f8);
  if (piVar8 == (int *)((int)this + 0x504)) {
    ExceptionList = local_c;
    return;
  }
  do {
    local_4 = 0xffffffff;
    iVar6 = piVar8[2];
    FUN_0048f010(&param_1,local_2c);
    local_4 = 2;
    iVar4 = FUN_00401c30(iVar6);
    pbVar2 = *(byte **)(iVar4 + 100);
    pbVar7 = local_2c[0];
    do {
      bVar1 = *pbVar2;
      bVar10 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0059cae4:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0059cae9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar10 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0059cae4;
      pbVar2 = pbVar2 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0059cae9:
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (iVar4 == 0) {
      if (*(int *)((int)this + 0x4f8) == (int)this + 0x504) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)((int)this + 0x4f8) + 8);
      }
      TMCharacter_CancelAction(this,puVar5);
      if ((int *)piVar8[1] != (int *)0x0) {
        *(int *)piVar8[1] = *piVar8;
      }
      if (*piVar8 != 0) {
        *(int *)(*piVar8 + 4) = piVar8[1];
      }
      *piVar8 = 0;
      piVar8[1] = 0;
      if (*(undefined4 **)((int)this + 0x49c) != (undefined4 *)0x0) {
        TMCharacter_CancelAction(this,*(undefined4 **)((int)this + 0x49c));
      }
      (**(code **)(*(int *)((int)this + 0x488) + 4))();
      *(int *)((int)this + 0x49c) = iVar6;
      (*(code *)**(undefined4 **)((int)this + 0x488))();
      ExceptionList = local_c;
      return;
    }
    piVar8 = (int *)piVar8[1];
    if (piVar8 == (int *)((int)this + 0x504)) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_0059cbd0 @ 0059cbd0 ////

void __fastcall FUN_0059cbd0(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool local_2d;
  float local_2c;
  undefined1 *puStack_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb43c8;
  pvStack_c = ExceptionList;
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d185e4;
  local_10 = (undefined4 *)0x0;
  local_4 = 0;
  local_2d = false;
  local_2c = 0.0;
  ExceptionList = &pvStack_c;
  if ((int *)param_1[0x13e] != param_1 + 0x141) {
    puVar1 = *(undefined4 **)(param_1[0x13e] + 8);
    ExceptionList = &pvStack_c;
    FUN_004295c0((int)&local_24);
    local_10 = puVar1;
    (*(code *)*local_24)();
    bVar8 = *(char *)((int)local_10 + 0x225) == '\0';
    bVar9 = *(char *)((int)local_10 + 0x292) != '\0';
    local_2d = bVar9 || bVar8;
    piVar4 = (int *)param_1[0x13e];
    uVar7 = 0;
    if (piVar4 != param_1 + 0x141) {
      do {
        piVar4 = (int *)piVar4[1];
        uVar7 = uVar7 + 1;
      } while (piVar4 != param_1 + 0x141);
      if (1 < uVar7) {
        piVar4 = (int *)param_1[0x13e];
        if (bVar9 || bVar8) {
          piVar4 = (int *)piVar4[1];
        }
        FUN_0059a290(piVar4,param_1 + 0x141,&LAB_00599990);
      }
    }
    iVar3 = FUN_00401c30(*(int *)(param_1[0x13e] + 8));
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00401c30(*(int *)(param_1[0x13e] + 8));
      pfVar5 = FUN_00599900(param_1,&local_2c,piVar4);
      local_2c = *pfVar5;
      iVar3 = FUN_00401c30(*(int *)(param_1[0x13e] + 8));
      cVar2 = FUN_00842ee0(iVar3);
      if (cVar2 != '\0') {
        FUN_00407070(&local_2c,1.0);
      }
    }
  }
  uVar7 = FUN_0043b490((uint *)(param_1 + 0x1c0));
  if ((char)uVar7 != '\0') {
    (**(code **)(*param_1 + 0x17c))();
  }
  uVar7 = FUN_0043b490((uint *)(param_1 + 0x1c4));
  if ((char)uVar7 != '\0') {
    if (local_2d) {
      uVar7 = FUN_00401720((int)local_10);
      if ((char)uVar7 != '\0') {
        puStack_28 = &stack0xffffffbc;
        uVar6 = FUN_0059b240(param_1,local_2c);
        if ((char)uVar6 != '\0') {
          FUN_00401780((int)local_10);
        }
      }
    }
    else if (param_1[0x127] == 0) {
      puStack_28 = &stack0xffffffbc;
      iVar3 = FUN_0059af80(param_1,local_2c);
      if (iVar3 != 0) {
        if ((local_10 != (undefined4 *)0x0) && ((~*(byte *)(local_10 + 0x84) & 1) != 0)) {
          TMCharacter_CancelAction(param_1,local_10);
          FUN_004293c0(&local_24,0);
        }
        piVar4 = (int *)(iVar3 + 0x1f0);
        *piVar4 = (int)(param_1 + 0x13d);
        *(int *)(iVar3 + 500) = param_1[0x13e];
        *(int **)param_1[0x13e] = piVar4;
        param_1[0x13e] = (int)piVar4;
      }
    }
    if (((int *)param_1[0x13e] != param_1 + 0x141) &&
       (((local_10 != (undefined4 *)0x0 ||
         (((*(int *)(param_1[0x13e] + 8) != 0 && ((int *)param_1[0x13b] != (int *)0x0)) &&
          ((**(code **)(*(int *)param_1[0x13b] + 4))(), local_10 != (undefined4 *)0x0)))) &&
        (!local_2d)))) {
      FUN_0059c2d0(param_1,local_10);
    }
  }
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0059ce50 @ 0059ce50 ////

void __fastcall FUN_0059ce50(int *param_1)

{
  float *this;
  char cVar1;
  int iVar2;
  byte *pbVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  void *pvVar8;
  float10 fVar9;
  undefined4 auStack_30 [3];
  undefined **ppuStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined ***pppuStack_18;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb43f3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0x1c4] = param_1[0x1c8];
  param_1[0x17e] = param_1[0x17e] + 1;
  iVar2 = FUN_00470470(DAT_0104917c,(int)param_1);
  while (iVar2 != 0) {
    (**(code **)(*param_1 + 0x14))(iVar2);
    iVar2 = FUN_00470470(DAT_0104917c,(int)param_1);
  }
  if (0 < param_1[0x14a]) {
    iVar2 = param_1[0x14a] + -1;
    param_1[0x14a] = iVar2;
    if ((iVar2 < 1) && ((*(byte *)(param_1 + 0x149) & 1) == 0)) {
      (**(code **)(*param_1 + 0xf4))();
    }
    FUN_005268e0(param_1);
    ExceptionList = pvStack_c;
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x13c))();
  if (cVar1 == '\0') {
    ExceptionList = pvStack_c;
    return;
  }
  this = (float *)(param_1 + 0x40);
  fVar9 = FUN_00450cc0(this);
  param_1[0x12a] =
       (int)(float)((float10)(float)param_1[0x12a] * (float10)0.5 +
                   fVar9 * (float10)(float)param_1[0x82] * (float10)0.5);
  if (param_1[0x128] == 2) {
    (**(code **)(*param_1 + 0xe0))(2);
  }
  iVar2 = FUN_0097e350((void *)param_1[0x47],0);
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0xe4))();
  }
  FUN_00539330(param_1);
  cVar1 = (**(code **)(*param_1 + 0x138))();
  pvVar8 = DAT_00f88720;
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0xbc))();
    if (cVar1 == '\0') {
      piVar7 = param_1 + 0x174;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        (**(code **)(*param_1 + 0x134))();
      }
      FUN_005268e0(param_1);
      fVar9 = FUN_00455410(this);
      param_1[0x42] = (int)(float)fVar9;
    }
    else {
      piVar7 = param_1 + 0x175;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        pbVar3 = Anim_LoadByName((char *)param_1[0x17f]);
        FUN_00526890(param_1,pbVar3);
        if (pbVar3 != (byte *)0x0) {
          FUN_00985de0(pbVar3);
        }
      }
      if (param_1[0x175] < 1) {
        (**(code **)(*param_1 + 0x180))();
      }
      FUN_005268e0(param_1);
    }
    goto LAB_0059d258;
  }
  pfVar4 = (float *)FUN_00598e50(param_1,auStack_30);
  FUN_00452b00(pvVar8,pfVar4);
  uVar5 = FUN_00445f00(this,(float *)(param_1 + 0x53));
  if ((char)uVar5 == '\0') {
    param_1[0x81] = 0;
  }
  else {
    fVar9 = FUN_00412f80((float *)(param_1 + 0x53),this);
    param_1[0x81] = (int)(float)fVar9;
  }
  if ((char)param_1[0x57] == '\0') {
    FUN_005995b0(param_1);
  }
  (**(code **)(*param_1 + 0x118))();
  if ((char)param_1[0x57] == '\0') {
    (**(code **)(*param_1 + 0xfc))();
  }
  FUN_005268e0(param_1);
  FUN_0059cbd0(param_1);
  FUN_0053da40(param_1 + 0x105,(int)param_1);
  pppuStack_18 = &ppuStack_24;
  uStack_20 = 0;
  uStack_1c = 0;
  ppuStack_24 = &PTR_FUN_00d185e4;
  iStack_10 = 0;
  uStack_4 = 0;
  if ((int *)param_1[0x13e] != param_1 + 0x141) {
    iVar2 = ((int *)param_1[0x13e])[2];
    FUN_004295c0((int)pppuStack_18);
    iStack_10 = iVar2;
    (*(code *)*ppuStack_24)();
    (**(code **)(**(int **)(param_1[0x13e] + 8) + 0xc))();
  }
  if (((int *)param_1[0x13b] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0x13b] + 8))(), cVar1 == '\0')) {
    if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x13b])(1);
    }
    param_1[0x13b] = 0;
  }
  if ((void *)param_1[0x17d] != (void *)0x0) {
    FUN_00977c80((void *)param_1[0x17d]);
  }
  if (param_1[0x13b] == 0) {
    if (iStack_10 == 0) {
      if (param_1[0x127] == 0) {
LAB_0059d1cf:
        if ((int *)param_1[0x13e] != param_1 + 0x141) {
          puVar6 = FUN_00401830(((int *)param_1[0x13e])[2]);
          param_1[0x13b] = (int)puVar6;
        }
      }
      else {
        *(undefined4 *)(param_1[0x127] + 0x240) = 0;
        puVar6 = FUN_00401830(param_1[0x127]);
        param_1[0x13b] = (int)puVar6;
        iVar2 = param_1[0x127];
        piVar7 = (int *)(iVar2 + 0x1f0);
        *piVar7 = (int)(param_1 + 0x13d);
        *(int *)(iVar2 + 500) = param_1[0x13e];
        *(int **)param_1[0x13e] = piVar7;
        param_1[0x13e] = (int)piVar7;
        FUN_004293c0(param_1 + 0x122,0);
      }
    }
    else {
      puVar6 = FUN_00401830(iStack_10);
      param_1[0x13b] = (int)puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        if (param_1[0x127] == 0) goto LAB_0059d1cf;
        *(undefined4 *)(param_1[0x127] + 0x240) = 0;
        puVar6 = FUN_00401830(param_1[0x127]);
        param_1[0x13b] = (int)puVar6;
        FUN_004293c0(param_1 + 0x122,0);
      }
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x100))();
  if ((cVar1 != '\0') && (iVar2 = FUN_0059c530((int)param_1), iVar2 == 0)) {
    (**(code **)(*param_1 + 0x10c))();
    pvVar8 = operator_new(0x128);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (pvVar8 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = DesireLeave_Constructor(pvVar8,param_1);
    }
    TMCharacter_AddResidentDesire(param_1,(int)puVar6);
  }
  uStack_4 = 0xffffffff;
  FUN_0042a090(&ppuStack_24);
LAB_0059d258:
  FUN_0053d480((int)param_1);
  *(undefined1 *)((int)param_1 + 0x726) = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0059d280 @ 0059d280 ////

int * __thiscall
FUN_0059d280(void *this,undefined4 param_1,undefined4 param_2,undefined1 *param_3,void *param_4,
            undefined4 param_5,uint param_6)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  int *piVar3;
  undefined4 *this_01;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cb4429;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0x2e0);
  local_4._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00445f60(this_00,(float *)&param_1,param_4);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar3 + 0xb0))();
  param_3 = operator_new(0x2b4);
  puStack_8._0_1_ = 2;
  if (param_3 == (undefined1 *)0x0) {
    this_01 = (undefined4 *)0x0;
  }
  else {
    this_01 = FUN_00402380(param_3,(int)this,piVar3);
  }
  puStack_8._0_1_ = 0;
  this_01[0x90] = 2;
  param_3 = operator_new(0x128);
  puStack_8._0_1_ = 3;
  if (param_3 == (undefined1 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = DesireUrgent_Constructor(param_3,this);
  }
  piVar1 = puVar4 + 0x28;
  piVar2 = (int *)((int)this + 0x548);
  puVar4[0x29] = piVar2;
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  *piVar1 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar1;
  *piVar2 = (int)piVar1;
  FUN_00401a00(this_01,puVar4);
  piVar1 = piVar3 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)();
  }
  this_01[0x84] = this_01[0x84] | 2;
  TMCharacter_AddAction(this,(int)this_01);
  param_3 = &stack0xffffffd8;
  FUN_0059c8e0(this,"urgent");
  if (0x14 < param_6) {
                    /* WARNING: Subroutine does not return */
    _free(param_4);
  }
  ExceptionList = this_00;
  return piVar3;
}


//// FUNCTION FUN_0059d3d0 @ 0059d3d0 ////

void __fastcall FUN_0059d3d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d28510;
  while (piVar1 != param_1 + 5) {
    *piVar1 = 0;
    piVar1 = (int *)piVar1[1];
    *(undefined4 *)(*piVar1 + 4) = 0;
  }
  param_1[2] = 0;
  param_1[5] = 0;
  FUN_00406010((int)param_1);
  return;
}


//// FUNCTION FUN_0059d420 @ 0059d420 ////

void __fastcall FUN_0059d420(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d2851c;
  while (piVar1 != param_1 + 5) {
    *piVar1 = 0;
    piVar1 = (int *)piVar1[1];
    *(undefined4 *)(*piVar1 + 4) = 0;
  }
  param_1[2] = 0;
  param_1[5] = 0;
  FUN_00406010((int)param_1);
  return;
}


//// FUNCTION FUN_0059d470 @ 0059d470 ////

undefined4 * __thiscall FUN_0059d470(void *this,byte param_1)

{
  FUN_0059d3d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0059d490 @ 0059d490 ////

undefined4 * __thiscall FUN_0059d490(void *this,byte param_1)

{
  FUN_0059d420(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0059d4b0 @ 0059d4b0 ////

void __fastcall FUN_0059d4b0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cb455e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00d28564;
  param_1[0x1e] = (int)&PTR_LAB_00d28540;
  param_1[0x28] = (int)&PTR_FUN_00d28528;
  local_4 = 0x10;
  FUN_0059b650((int)param_1);
  FUN_0059aed0((int)param_1);
  puVar2 = (undefined4 *)param_1[0x177];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x177] = 0;
  }
  iVar3 = param_1[0x176];
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + 0x54);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (*(code *)**(undefined4 **)(iVar3 + 0xc))(1);
    }
    param_1[0x176] = 0;
  }
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x13b])(1);
  }
  param_1[0x13b] = 0;
  FUN_0059a1f0(param_1);
  if ((void *)param_1[0x1bf] != (void *)0x0) {
    FUN_009d2c50((void *)param_1[0x1bf],(void *)0x0,'\x01',-1.0,-1.0);
    if ((undefined4 *)param_1[0x1bf] != (undefined4 *)0x0) {
      FUN_009d2b50((undefined4 *)param_1[0x1bf]);
      param_1[0x1bf] = 0;
    }
  }
  puVar2 = (undefined4 *)param_1[0x15a];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x15a] = 0;
  puVar2 = (undefined4 *)param_1[0x15c];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x15c] = 0;
  puVar2 = (undefined4 *)param_1[0x15b];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x15b] = 0;
  if ((undefined4 *)param_1[0x15f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x15f])(1);
  }
  param_1[0x15f] = 0;
  local_4._0_1_ = 0xf;
  FUN_00839b50(param_1 + 0x199);
  if (0x14 < (uint)param_1[0x191]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[399]);
  }
  if (0x14 < (uint)param_1[0x189]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x187]);
  }
  if (0x14 < (uint)param_1[0x181]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x17f]);
  }
  param_1[0x16e] = (int)&PTR_LAB_00d165dc;
  if ((int *)param_1[0x170] != (int *)0x0) {
    *(int *)param_1[0x170] = param_1[0x16f];
  }
  if (param_1[0x16f] != 0) {
    *(int *)(param_1[0x16f] + 4) = param_1[0x170];
  }
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x173] = 0;
  if ((int *)param_1[0x170] != (int *)0x0) {
    *(int *)param_1[0x170] = param_1[0x16f];
  }
  if (param_1[0x16f] != 0) {
    *(int *)(param_1[0x16f] + 4) = param_1[0x170];
  }
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  FUN_0059d420(param_1 + 0x160);
  puVar2 = (undefined4 *)param_1[0x15c];
  local_4._0_1_ = 9;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x15c] = 0;
  puVar2 = (undefined4 *)param_1[0x15b];
  local_4._0_1_ = 8;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x15b] = 0;
  puVar2 = (undefined4 *)param_1[0x15a];
  local_4._0_1_ = 7;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x15a] = 0;
  FUN_0059d3d0(param_1 + 0x14d);
  FUN_00406340(param_1 + 0x13c);
  if (10 < (uint)param_1[0x134]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x132]);
  }
  param_1[299] = (int)&PTR_FUN_00d165cc;
  if ((int *)param_1[0x12d] != (int *)0x0) {
    *(int *)param_1[0x12d] = param_1[300];
  }
  if (param_1[300] != 0) {
    *(int *)(param_1[300] + 4) = param_1[0x12d];
  }
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x130] = 0;
  if ((int *)param_1[0x12d] != (int *)0x0) {
    *(int *)param_1[0x12d] = param_1[300];
  }
  if (param_1[300] != 0) {
    *(int *)(param_1[300] + 4) = param_1[0x12d];
  }
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x122] = (int)&PTR_FUN_00d185e4;
  if ((int *)param_1[0x124] != (int *)0x0) {
    *(int *)param_1[0x124] = param_1[0x123];
  }
  if (param_1[0x123] != 0) {
    *(int *)(param_1[0x123] + 4) = param_1[0x124];
  }
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x127] = 0;
  if ((int *)param_1[0x124] != (int *)0x0) {
    *(int *)param_1[0x124] = param_1[0x123];
  }
  if (param_1[0x123] != 0) {
    *(int *)(param_1[0x123] + 4) = param_1[0x124];
  }
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  local_4._0_1_ = 1;
  FUN_0053d910(param_1 + 0x105);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(param_1 + 0x85,0x20,0x10,FUN_00401490);
  local_4 = 0xffffffff;
  FUN_005267f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0059d8b0 @ 0059d8b0 ////

int * __thiscall FUN_0059d8b0(void *this,byte param_1)

{
  FUN_0059d4b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0059d8d0 @ 0059d8d0 ////

void FUN_0059d8d0(void)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb45d0;
  local_c = ExceptionList;
  uVar9 = 0;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar8 = "C:\\movies\\dev\\TheMovies\\TMCharacter.cpp";
    puVar10 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    DAT_010581d4 = 0x8e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar4 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar5 = FUN_0098b490("Patience");
  if ((char)uVar5 != '\0') {
    FUN_00566d60((undefined4 *)(local_34 + 0x408));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar8 = "C:\\movies\\dev\\TheMovies\\TMCharacter.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    DAT_010581d4 = 0x8f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar4 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("Suspended");
  if ((char)uVar5 != '\0') {
    FUN_0098a430((undefined4 *)(local_34 + 0x4b8),1);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar8 = "C:\\movies\\dev\\TheMovies\\TMCharacter.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    DAT_010581d4 = 0x90;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar4 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("(int&)(Gender)");
  if ((char)uVar5 != '\0') {
    FUN_0098a430((undefined4 *)(local_34 + 0x428),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar8 = "C:\\movies\\dev\\TheMovies\\TMCharacter.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    DAT_010581d4 = 0x91;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    pcVar4 = (char *)FUN_00ace33d(0xe4f6b8);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("Name");
  if ((char)uVar5 != '\0') {
    FUN_0098c580((undefined4 *)(local_34 + 0x450));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar8 = "C:\\movies\\dev\\TheMovies\\TMCharacter.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    DAT_010581d4 = 0x92;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    pcVar4 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("VoiceID");
  if ((char)uVar5 != '\0') {
    FUN_0098a430((undefined4 *)(local_34 + 0x42c),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar8 = "C:\\movies\\dev\\TheMovies\\TMCharacter.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    DAT_010581d4 = 0x93;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    pcVar4 = (char *)FUN_00ace33d(0xe50af0);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("PCurrentCostume");
  if ((char)uVar5 != '\0') {
    puVar10 = (undefined4 *)(local_34 + 0x4f0);
    if (DAT_010583e0 == 0) {
      piVar6 = (int *)*puVar10;
      pcVar8 = (char *)FUN_00ace790(piVar6,0,&TM::TMBase::RTTI_Type_Descriptor,
                                    &MV::MVSaveable::RTTI_Type_Descriptor,0);
      FUN_00990310(pcVar8,piVar6);
    }
    if (DAT_010583e0 == 1) {
      FUN_0048c870(puVar10);
    }
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar8 = "C:\\movies\\dev\\TheMovies\\TMCharacter.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    DAT_010581d4 = 0x94;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
    pcVar4 = (char *)FUN_00ace33d(0xe50af0);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("PDesiredCostume");
  if ((char)uVar5 != '\0') {
    puVar10 = (undefined4 *)(local_34 + 0x4f4);
    if (DAT_010583e0 == 0) {
      piVar6 = (int *)*puVar10;
      pcVar8 = (char *)FUN_00ace790(piVar6,0,&TM::TMBase::RTTI_Type_Descriptor,
                                    &MV::MVSaveable::RTTI_Type_Descriptor,0);
      FUN_00990310(pcVar8,piVar6);
    }
    if (DAT_010583e0 == 1) {
      FUN_0048c870(puVar10);
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\TMCharacter.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x95;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    pcVar4 = (char *)FUN_00ace33d(0xe50af0);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("PNormalCostume");
  if ((char)uVar5 != '\0') {
    puVar10 = (undefined4 *)(local_34 + 0x4f8);
    if (DAT_010583e0 == 0) {
      piVar6 = (int *)*puVar10;
      pcVar8 = (char *)FUN_00ace790(piVar6,0,&TM::TMBase::RTTI_Type_Descriptor,
                                    &MV::MVSaveable::RTTI_Type_Descriptor,0);
      FUN_00990310(pcVar8,piVar6);
    }
    if (DAT_010583e0 == 1) {
      FUN_0048c870(puVar10);
    }
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar8 = "C:\\movies\\dev\\TheMovies\\TMCharacter.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    DAT_010581d4 = 0x96;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
    pcVar4 = (char *)FUN_00ace33d(0xe4fe30);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("FingerPrint");
  if ((char)uVar5 != '\0') {
    FUN_0098a430((undefined4 *)(local_34 + 0x5e4),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar8 = "C:\\movies\\dev\\TheMovies\\TMCharacter.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    DAT_010581d4 = 0x97;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
    pcVar4 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("Corpsing");
  uVar2 = local_34;
  if ((char)uVar5 != '\0') {
    FUN_0098a430((undefined4 *)(local_34 + 0x6ad),1);
  }
  uVar5 = FUN_0098b490("MyDesireMap.Values");
  if (((char)uVar5 != '\0') && (bVar3 = FUN_009896f0("CString"), bVar3)) {
    if (DAT_010583e0 == 0) {
      local_30 = *(undefined4 *)(uVar2 + 0x654);
      FUN_0098a3a0(&local_30);
      local_34 = **(int **)(uVar2 + 0x650);
      if ((int *)local_34 != *(int **)(uVar2 + 0x650)) {
        do {
          uVar9 = local_34;
          local_2c = local_20;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          FUN_004015d0(&local_2c,*(char **)(local_34 + 0xc),*(uint *)(local_34 + 0x10));
          local_4 = 10;
          FUN_0098c550(&local_2c);
          FUN_00566d60((undefined4 *)(uVar9 + 0x2c));
          local_4 = 0xffffffff;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
          FUN_00440230((int *)&local_34);
        } while (local_34 != *(uint *)(uVar2 + 0x650));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_34 = 0;
      FUN_004417e0((int)(uVar2 + 0x64c));
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      local_4 = 0xb;
      SLVAR_LoadUint(&local_34);
      if (local_34 != 0) {
        do {
          FUN_0098c550(&local_2c);
          piVar6 = FUN_00442050((void *)(uVar2 + 0x64c),&local_2c);
          FUN_00566d60(piVar6);
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_34);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  FUN_0053b000(uVar2);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0059e3a0 @ 0059e3a0 ////

void __fastcall FUN_0059e3a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_4 [4];
  
  ISerializable_WriteObjectHeader();
  iVar5 = *(int *)(param_1 + 0x4c4);
  if (iVar5 != param_1 + 0x4d0) {
    do {
      piVar1 = *(int **)(iVar5 + 8);
      piVar3 = (int *)(**(code **)(*piVar1 + 0x24))(local_4);
      iVar2 = *piVar3;
      piVar3 = piVar1 + 0x19;
      piVar4 = FUN_00442050((void *)(param_1 + 0x64c),piVar3);
      *piVar4 = iVar2;
      iVar2 = piVar1[0x39];
      piVar4 = FUN_00442050((void *)(param_1 + 0x658),piVar3);
      *piVar4 = iVar2;
      iVar2 = piVar1[0x3a];
      piVar3 = FUN_00442050((void *)(param_1 + 0x664),piVar3);
      *piVar3 = iVar2;
      iVar5 = *(int *)(iVar5 + 4);
    } while (iVar5 != param_1 + 0x4d0);
  }
  return;
}


//// FUNCTION FUN_0059e440 @ 0059e440 ////

void __fastcall FUN_0059e440(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 5;
  param_1[7] = 0;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[2] = puVar1;
  *puVar1 = param_1 + 1;
  *param_1 = &PTR_LAB_00d28510;
  return;
}


//// FUNCTION FUN_0059e4a0 @ 0059e4a0 ////

void __fastcall FUN_0059e4a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 5;
  param_1[7] = 0;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[2] = puVar1;
  *puVar1 = param_1 + 1;
  *param_1 = &PTR_LAB_00d2851c;
  return;
}


//// FUNCTION FUN_0059e500 @ 0059e500 ////

int * __fastcall FUN_0059e500(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  float10 fVar6;
  float afStack_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4760;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00526ab0(param_1);
  local_4 = 0;
  FUN_0054ddb0(param_1 + 0x85);
  local_4._0_1_ = 1;
  FUN_0053d880(param_1 + 0x105);
  *param_1 = (int)&PTR_FUN_00d28564;
  param_1[0x1e] = (int)&PTR_LAB_00d28540;
  param_1[0x28] = (int)&PTR_FUN_00d28528;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0x449a4000;
  param_1[0x11b] = 0;
  fVar6 = FUN_004012c0(0.0);
  param_1[0x11e] = (int)(float)fVar6;
  fVar6 = FUN_004012c0(0.0);
  param_1[0x11f] = (int)(float)fVar6;
  piVar1 = param_1 + 0x122;
  param_1[0x120] = 0x3f800000;
  param_1[0x121] = 0;
  param_1[0x125] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = (int)piVar1;
  *piVar1 = (int)&PTR_FUN_00d185e4;
  param_1[0x127] = 0;
  param_1[0x12a] = 0x3f800000;
  param_1[0x128] = 2;
  param_1[0x12e] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = (int)(param_1 + 299);
  param_1[299] = (int)&PTR_FUN_00d165cc;
  param_1[0x130] = 0;
  param_1[0x131] = 7;
  param_1[0x132] = (int)(param_1 + 0x135);
  *(undefined2 *)(param_1 + 0x135) = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 10;
  param_1[0x13a] = 1;
  param_1[0x13b] = 0;
  param_1[0x13f] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  piVar2 = param_1 + 0x141;
  param_1[0x143] = 0;
  *piVar2 = 0;
  param_1[0x142] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x13c] = (int)&PTR_LAB_00d167cc;
  param_1[0x13e] = (int)piVar2;
  *piVar2 = (int)(param_1 + 0x13d);
  param_1[0x149] = param_1[0x149] & 0xfffffffe;
  param_1[0x14a] = -1;
  param_1[0x14b] = 0;
  *(undefined1 *)(param_1 + 0x14c) = 0;
  param_1[0x150] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  piVar2 = param_1 + 0x152;
  param_1[0x154] = 0;
  *piVar2 = 0;
  param_1[0x153] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x14d] = (int)&PTR_LAB_00d28510;
  param_1[0x14f] = (int)piVar2;
  *piVar2 = (int)(param_1 + 0x14e);
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x163] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  piVar2 = param_1 + 0x165;
  param_1[0x167] = 0;
  *piVar2 = 0;
  param_1[0x166] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x160] = (int)&PTR_LAB_00d2851c;
  param_1[0x162] = (int)piVar2;
  *piVar2 = (int)(param_1 + 0x161);
  *(undefined1 *)(param_1 + 0x16d) = 0;
  param_1[0x171] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = (int)(param_1 + 0x16e);
  param_1[0x16e] = (int)&PTR_LAB_00d165dc;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  *(undefined1 *)(param_1 + 0x179) = 1;
  param_1[0x17e] = 0;
  param_1[0x17f] = (int)(param_1 + 0x182);
  *(undefined1 *)(param_1 + 0x182) = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0x14;
  param_1[0x187] = (int)(param_1 + 0x18a);
  *(undefined1 *)(param_1 + 0x18a) = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0x14;
  param_1[399] = (int)(param_1 + 0x192);
  *(undefined1 *)(param_1 + 0x192) = 0;
  param_1[400] = 0;
  param_1[0x191] = 0x14;
  local_4._0_1_ = 0x15;
  FUN_00839c70(param_1 + 0x199);
  local_4 = CONCAT31(local_4._1_3_,0x16);
  param_1[0x1bd] = 0x30;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  FUN_0043b460(param_1 + 0x1c0);
  FUN_0043b460(param_1 + 0x1c4);
  *(undefined1 *)(param_1 + 0x1c9) = 0;
  *(undefined1 *)((int)param_1 + 0x725) = 0;
  *(undefined1 *)((int)param_1 + 0x727) = 0;
  param_1[0x33] = 0x3e800000;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  param_1[0x178] = 0;
  puVar3 = FUN_00433eb0();
  param_1[0x47] = (int)puVar3;
  FUN_0097e2b0((int)puVar3);
  FUN_0097e330((void *)param_1[0x47],1);
  *(uint *)(param_1[0x47] + 0x9c) = *(uint *)(param_1[0x47] + 0x9c) | 8;
  (**(code **)(*(int *)param_1[0x47] + 0x18))(0);
  *(uint *)(param_1[0x47] + 0x9c) = *(uint *)(param_1[0x47] + 0x9c) | 2;
  afStack_1c[0] = 0.0;
  afStack_1c[1] = 0.0;
  afStack_1c[2] = 0.0;
  FUN_00599be0(param_1,afStack_1c);
  param_1[0x17d] = 0;
  FUN_004015d0(param_1 + 0x17f,"",0);
  FUN_004015d0(param_1 + 399,"",0);
  param_1[0x11d] = 0x3e4ccccd;
  fVar6 = FUN_00990e30(0.001,0.0005);
  if ((float10)0.0 <= fVar6) {
    if ((float10)1.0 < fVar6) {
      fVar6 = (float10)1.0;
    }
  }
  else {
    fVar6 = (float10)0.0;
  }
  param_1[0x121] = (int)(float)fVar6;
  (**(code **)(*piVar1 + 4))();
  param_1[0x127] = 0;
  (**(code **)*piVar1)();
  pvVar4 = operator_new(0xb8);
  puStack_8._0_1_ = 0x17;
  if (pvVar4 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_004acd10(pvVar4,(int)param_1);
  }
  puStack_8._0_1_ = 0x16;
  param_1[0x176] = (int)puVar3;
  pvVar4 = operator_new(0xdc);
  puStack_8._0_1_ = 0x18;
  if (pvVar4 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_005094d0(pvVar4,param_1);
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x16);
  param_1[0x177] = (int)puVar3;
  FUN_00598cd0(param_1);
  *(undefined1 *)((int)param_1 + 0x15d) = 1;
  iVar5 = FUN_00538980((int)param_1);
  param_1[0x197] = iVar5 * 0x19660d + 0x3c6ef35f;
  iVar5 = FUN_00990d30(0,2);
  param_1[0x198] = iVar5;
  param_1[0x1c0] = 5;
  param_1[0x1c8] = 1;
  param_1[0x1c4] = 1;
  iVar5 = FUN_00990d30(1,5);
  param_1[0x129] = iVar5;
  ExceptionList = pvStack_10;
  return param_1;
}


//// FUNCTION FUN_0059ea10 @ 0059ea10 ////

void __thiscall FUN_0059ea10(void *this,int param_1)

{
  if (param_1 < 5) {
    *(undefined1 *)(param_1 + 0x220 + (int)this) = 0;
                    /* WARNING: Could not recover jumptable at 0x0059ea2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this + 0xe0))();
    return;
  }
  return;
}


//// FUNCTION FUN_0059ea80 @ 0059ea80 ////

void __fastcall FUN_0059ea80(int param_1)

{
  if (*(int **)(param_1 + 0x22c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x22c) + 0xa8))(param_1 + 0x100,param_1 + 0xc4);
    (**(code **)(**(int **)(param_1 + 0x22c) + 0x120))(0);
  }
  return;
}


//// FUNCTION FUN_0059eae0 @ 0059eae0 ////

void __fastcall FUN_0059eae0(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_00553f70(0x1e);
  if (cVar1 == '\0') {
    cVar1 = FUN_00553f70(0x10);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xe4))(1);
      goto LAB_0059eb5b;
    }
    cVar1 = FUN_00553f70(0x12);
    if (cVar1 == '\0') {
      cVar1 = FUN_00553f70(0x11);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0xe4))(3);
        goto LAB_0059eb5b;
      }
      cVar1 = FUN_00553f70(0x34);
      if (cVar1 == '\0') goto LAB_0059eb5b;
      uVar3 = 4;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 2;
  }
  (**(code **)(*param_1 + 0xe4))(uVar3);
LAB_0059eb5b:
  uVar2 = FUN_00553fd0(0x10);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)((int)param_1 + 0x221) = 0;
    (**(code **)(*param_1 + 0xe0))(4);
  }
  uVar2 = FUN_00553fd0(0x11);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)((int)param_1 + 0x223) = 0;
    (**(code **)(*param_1 + 0xe0))(4);
  }
  uVar2 = FUN_00553fd0(0x12);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x88) = 0;
    (**(code **)(*param_1 + 0xe0))(4);
  }
  uVar2 = FUN_00553fd0(0x1e);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)((int)param_1 + 0x222) = 0;
    (**(code **)(*param_1 + 0xe0))(4);
  }
  uVar2 = FUN_00553fd0(0x34);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x89) = 0;
    (**(code **)(*param_1 + 0xe0))(4);
  }
  return;
}


//// FUNCTION FUN_0059ec00 @ 0059ec00 ////

void __fastcall FUN_0059ec00(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x26c);
  if (*(int **)(iVar2 + 0x22c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + 0x22c) + 0xa8))(iVar2 + 0x100,iVar2 + 0xc4);
    (**(code **)(**(int **)(iVar2 + 0x22c) + 0x120))(0);
  }
  puVar3 = *(undefined4 **)(param_1 + 0x26c);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)(param_1 + 0x26c) = 0;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x228);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  *(undefined1 *)(param_1 + 0x25d) = 0;
  return;
}


//// FUNCTION FUN_0059ec80 @ 0059ec80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0059ec80(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_00447aa0(param_1);
  FUN_00526890(this,pvVar1);
  if (pvVar1 != (void *)0x0) {
    FUN_00985de0(pvVar1);
  }
  _DAT_00e5433c = (&DAT_00f87ef8)[param_1];
  *(int *)((int)this + 0x248) = param_1;
  return;
}


//// FUNCTION FUN_0059ecc0 @ 0059ecc0 ////

void __fastcall FUN_0059ecc0(int param_1)

{
  undefined4 *puVar1;
  void *this;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb477b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x22c) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x254);
    ExceptionList = &local_c;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = puVar1 + 0x12;
      ExceptionList = &local_c;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x254) = 0;
    }
    this = operator_new(0x408);
    uStack_4 = 0;
    if (this == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_0073a4b0(this,*(undefined4 *)(param_1 + 0x22c));
    }
    *(int **)(param_1 + 0x254) = piVar2;
    *(undefined4 *)(param_1 + 600) = 0;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0059ee10 @ 0059ee10 ////

void FUN_0059ee10(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104d548;
  if (DAT_0104d548 != (undefined4 *)0x0) {
    iVar1 = DAT_0104d548[0x12];
    DAT_0104d548[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_0104d548 = (undefined4 *)0x0;
  }
  return;
}


//// FUNCTION FUN_0059ee40 @ 0059ee40 ////

int __fastcall FUN_0059ee40(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x30) & 0xffff;
  uVar3 = *(uint *)(param_1 + 0x34) >> 1 & 1;
  uVar1 = uVar2;
  if (uVar3 != 0) {
    uVar1 = (int)(uVar2 - 1) / 3 + 1;
  }
  if (99 < (int)(uVar1 * 100 + -100)) {
    if (uVar3 != 0) {
      uVar2 = (int)(uVar2 - 1) / 3 + 1;
    }
    return uVar2 * 100 + -100;
  }
  return 100;
}


//// FUNCTION FUN_0059eea0 @ 0059eea0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0059eea0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int *piVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined1 local_18 [8];
  undefined1 auStack_10 [8];
  float fStack_8;
  
  cVar4 = FUN_00553f70(0x21);
  if (cVar4 != '\0') {
    piVar7 = (int *)(param_1 + -0xa0);
    (**(code **)(*(int *)(param_1 + -0xa0) + 0x48))(local_18);
    cVar4 = FUN_00553f70(0x3a);
    if (cVar4 == '\0') {
      cVar4 = FUN_00553f70(0x1d);
      if (cVar4 != '\0') {
        fVar3 = _DAT_00e5433c * 0.5;
        iVar5 = (**(code **)(*piVar7 + 0x48))(auStack_10);
        fStack_8 = fVar3 * *(float *)(iVar5 + 8);
      }
      uVar9 = 1;
    }
    else {
      uVar9 = 2;
    }
    (**(code **)(*piVar7 + 0xe0))(uVar9);
    (**(code **)(*piVar7 + 0x28))(&stack0xffffffc8,param_1 + 0x24);
  }
  uVar6 = FUN_00553fd0(0x21);
  if ((char)uVar6 != '\0') {
    (**(code **)(*(int *)(param_1 + -0xa0) + 0xe0))(0);
  }
  cVar4 = FUN_00553f70(0xb);
  if (cVar4 != '\0') {
    fVar8 = FUN_004012c0(DAT_00e54338);
    fVar8 = FUN_004012c0((float)(fVar8 + (float10)*(float *)(param_1 + 0x24)));
    *(float *)(param_1 + 0x24) = (float)fVar8;
  }
  cVar4 = FUN_00553f70(0xe);
  if (cVar4 != '\0') {
    fVar8 = FUN_004012c0(*(float *)(param_1 + 0x24) - DAT_00e54338);
    *(float *)(param_1 + 0x24) = (float)fVar8;
  }
  cVar4 = FUN_00553f70(0x22);
  if (cVar4 == '\0') {
    uVar6 = FUN_00553fd0(0x22);
    if ((char)uVar6 != '\0') {
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      (**(code **)(*(int *)(param_1 + -0xa0) + 0xe0))(0);
    }
  }
  else {
    uVar6 = FUN_00553fa0(0x22);
    if ((char)uVar6 != '\0') {
      (**(code **)(*(int *)(param_1 + -0xa0) + 0xe0))(4);
    }
    FUN_0059eae0((int *)(param_1 + -0xa0));
  }
  cVar4 = FUN_00553f70(0x38);
  piVar7 = (int *)CONCAT31(extraout_var,cVar4);
  if (cVar4 != '\0') {
    cVar4 = FUN_00553f70(0x3c);
    piVar7 = (int *)CONCAT31(extraout_var_00,cVar4);
    if (cVar4 != '\0') {
      cVar4 = FUN_00553f70(0x73);
      piVar7 = (int *)CONCAT31(extraout_var_01,cVar4);
      if (cVar4 != '\0') {
        FUN_0059ea80(param_1 + -0xa0);
        piVar1 = DAT_0104d548;
        piVar7 = DAT_0104d548;
        if (DAT_0104d548 != (int *)0x0) {
          iVar5 = DAT_0104d548[0x12];
          piVar7 = DAT_0104d548 + 0x12;
          *piVar7 = iVar5 + -1;
          if (iVar5 + -1 == 0) {
            piVar7 = (int *)(**(code **)*piVar1)(1);
          }
          DAT_0104d548 = (int *)0x0;
        }
        puVar2 = *(undefined4 **)(param_1 + 0x1cc);
        if (puVar2 != (undefined4 *)0x0) {
          piVar1 = puVar2 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            piVar7 = (int *)(**(code **)*puVar2)(1);
          }
          *(undefined4 *)(param_1 + 0x1cc) = 0;
        }
      }
    }
  }
  return CONCAT31((int3)((uint)piVar7 >> 8),1);
}


//// FUNCTION FUN_0059f120 @ 0059f120 ////

void __fastcall FUN_0059f120(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *this;
  undefined4 *puVar4;
  void *pvStack_30;
  undefined1 local_2c [4];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb479b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x230) = 100;
  *(undefined1 *)(param_1 + 0x25d) = 1;
  puVar2 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x268) + 0x5c))(local_2c);
  puVar4 = (undefined4 *)(param_1 + 0x290);
  FUN_004036d0(puVar4,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  if (*(int *)(param_1 + 0x294) == 0) {
    uVar3 = FUN_00ace02d(L"Player 2");
    FUN_004036d0(puVar4,L"Player 2",uVar3);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x228);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  this = operator_new(0x388);
  puStack_8 = (undefined1 *)0x0;
  if (this == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_005ee620(this,(undefined4 *)(param_1 + 0x270),puVar4);
  }
  *(undefined4 **)(param_1 + 0x228) = puVar4;
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0059f310 @ 0059f310 ////

/* WARNING: Removing unreachable block (ram,0x0059f4b5) */
/* WARNING: Removing unreachable block (ram,0x0059f512) */
/* WARNING: Removing unreachable block (ram,0x0059f3f0) */
/* WARNING: Removing unreachable block (ram,0x0059f44c) */
/* WARNING: Removing unreachable block (ram,0x0059f4a8) */
/* WARNING: Removing unreachable block (ram,0x0059f506) */
/* WARNING: Removing unreachable block (ram,0x0059f387) */
/* WARNING: Removing unreachable block (ram,0x0059f3e3) */
/* WARNING: Removing unreachable block (ram,0x0059f43f) */

void FUN_0059f310(void)

{
  char *_Dest;
  
  _Dest = _malloc(0x20);
  _strncpy(_Dest,"1_fight_big_swing_hit.anm",0x19);
  _Dest[0x19] = '\0';
  FUN_004015d0(&DAT_0104d550,_Dest,0x19);
                    /* WARNING: Subroutine does not return */
  _free(_Dest);
}


//// FUNCTION FUN_0059f520 @ 0059f520 ////

undefined4 * __thiscall FUN_0059f520(void *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb47ed;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00526ab0(this);
  *(undefined ***)this = &PTR_FUN_00d28874;
  *(undefined ***)((int)this + 0x78) = &PTR_LAB_00d28854;
  *(undefined ***)((int)this + 0xa0) = &PTR_FUN_00d2883c;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined1 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x270) = (undefined2 *)((int)this + 0x27c);
  *(undefined2 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = 10;
  *(undefined2 **)((int)this + 0x290) = (undefined2 *)((int)this + 0x29c);
  *(undefined2 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 10;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x240) = 0;
    *(undefined4 *)((int)this + 0x244) = 10;
  }
  else {
    *(undefined4 *)((int)this + 0x240) = 0xb;
    *(undefined4 *)((int)this + 0x244) = 0x15;
  }
  *(undefined4 *)((int)this + 0x23c) = 0x29;
  *(undefined4 *)((int)this + 0x248) = 0x30;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(int *)((int)this + 0x260) = param_1;
  uVar2 = FUN_00ace02d(L"Player 1");
  FUN_004036d0((undefined4 *)((int)this + 0x270),L"Player 1",uVar2);
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined1 *)((int)this + 0x224) = 0;
  *(undefined1 *)((int)this + 0x25d) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x214) = 5;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x230) = 100;
  puVar3 = operator_new(0x110);
  local_4._0_1_ = 4;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = MeshInstance_Constructor(puVar3);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined4 **)((int)this + 0x11c) = puVar3;
  FUN_0097e2b0((int)puVar3);
  FUN_0097e330(*(void **)((int)this + 0x11c),1);
  puVar1 = (uint *)(*(int *)((int)this + 0x11c) + 0x9c);
  *puVar1 = *puVar1 | 8;
  (**(code **)(**(int **)((int)this + 0x11c) + 0x18))(0);
  puVar1 = (uint *)(*(int *)((int)this + 0x11c) + 0x9c);
  *puVar1 = *puVar1 | 2;
  ExceptionList = this;
  return this;
}


//// FUNCTION FUN_0059f740 @ 0059f740 ////

void __fastcall FUN_0059f740(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb4832;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d28874;
  param_1[0x1e] = &PTR_LAB_00d28854;
  param_1[0x28] = &PTR_FUN_00d2883c;
  local_4 = 3;
  if ((void *)param_1[0x93] != (void *)0x0) {
    FUN_009d2c50((void *)param_1[0x93],(void *)0x0,'\x01',-1.0,-1.0);
    if ((undefined4 *)param_1[0x93] != (undefined4 *)0x0) {
      FUN_009d2b50((undefined4 *)param_1[0x93]);
      param_1[0x93] = 0;
    }
  }
  puVar2 = (undefined4 *)param_1[0x9b];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x9b] = 0;
  }
  puVar2 = (undefined4 *)param_1[0x95];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x95] = 0;
  }
  puVar2 = (undefined4 *)param_1[0x8a];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x8a] = 0;
  }
  if (10 < (uint)param_1[0xa6]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xa4]);
  }
  if (10 < (uint)param_1[0x9e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x9c]);
  }
  puVar2 = (undefined4 *)param_1[0x94];
  local_4 = local_4 & 0xffffff00;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x94] = 0;
  local_4 = 0xffffffff;
  FUN_005267f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0059f870 @ 0059f870 ////

void __thiscall FUN_0059f870(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *unaff_retaddr;
  char cVar7;
  float fVar8;
  float fVar9;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char *pcStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  char acStack_24 [16];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4850;
  pvStack_c = ExceptionList;
  if (param_1 == 0) {
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)this + 0xac))(&local_44);
    pcStack_30 = acStack_24;
    acStack_24[0] = '\0';
    uStack_2c = 0;
    uStack_28 = 0x14;
    _strncpy(pcStack_30,"costume_plain",0xd);
    uStack_2c = 0xd;
    pcStack_30[0xd] = '\0';
    puStack_8 = (undefined1 *)0x0;
    piVar3 = FUN_004335f0((int *)&stack0x00000000,&pcStack_30,0,0,0,0);
    piVar1 = (int *)((int)this + 0x250);
    puStack_8._0_1_ = 1;
    if (piVar1 != piVar3) {
      iVar5 = *piVar3;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 1;
      }
      puVar2 = (undefined4 *)*piVar1;
      if (puVar2 != (undefined4 *)0x0) {
        piVar3 = puVar2 + 0x12;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      *piVar1 = iVar5;
    }
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    if ((unaff_retaddr != (undefined4 *)0x0) &&
       (iVar5 = unaff_retaddr[0x12], unaff_retaddr[0x12] = iVar5 + -1, iVar5 + -1 == 0)) {
      (**(code **)*unaff_retaddr)(1);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_30);
    }
    pvVar4 = FUN_009d30f0(*(int *)((int)this + 0x11c),0,0,(uint *)0x0,'\0');
    iVar5 = *piVar1;
  }
  else {
    ExceptionList = &pvStack_c;
    *(int *)((int)this + 0x22c) = param_1;
    iVar5 = FUN_005998e0(param_1);
    if ((iVar5 != 0) && (*(int **)(iVar5 + 0x25c) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar5 + 0x25c) + 4))();
    }
    iVar5 = (**(code **)(**(int **)((int)this + 0x22c) + 0x174))();
    if (iVar5 != 0) {
      FUN_00598bf0(*(void **)((int)this + 0x22c));
    }
    (**(code **)(**(int **)((int)this + 0x22c) + 0x148))();
    (**(code **)(**(int **)((int)this + 0x22c) + 0x120))(1);
    piVar1 = *(int **)((int)this + 0x22c);
    iVar5 = *(int *)this;
    uVar6 = (**(code **)(*piVar1 + 0x4c))(&stack0x00000000);
    uVar6 = (**(code **)(*piVar1 + 0x34))(&local_40,uVar6);
    (**(code **)(iVar5 + 0xa8))(uVar6);
    iVar5 = FUN_0059c6e0(*(void **)((int)this + 0x22c),'\0');
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 1;
    }
    puVar2 = *(undefined4 **)((int)this + 0x250);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(int *)((int)this + 0x250) = iVar5;
    pvVar4 = FUN_009d30f0(*(int *)((int)this + 0x11c),
                          (uint)(*(int *)(*(int *)((int)this + 0x22c) + 0x4a0) == 1),0,(uint *)0x0,
                          '\0');
    iVar5 = *(int *)((int)this + 0x250);
  }
  fVar9 = -1.0;
  fVar8 = -1.0;
  cVar7 = '\x01';
  *(void **)((int)this + 0x24c) = pvVar4;
  pvVar4 = (void *)FUN_004319b0(iVar5);
  FUN_009d2c50(*(void **)((int)this + 0x24c),pvVar4,cVar7,fVar8,fVar9);
  (**(code **)(*(int *)this + 0xe0))(0);
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_0059fac0 @ 0059fac0 ////

void __fastcall FUN_0059fac0(int *param_1)

{
  int *piVar1;
  float fVar2;
  void *pvVar3;
  float *pfVar4;
  float *pfVar5;
  float unaff_EBX;
  int *piVar6;
  void *local_48;
  int *local_44;
  float fStack_28;
  float local_24;
  float fStack_20;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [20];
  
  param_1[0x8d] = 0;
  pvVar3 = FUN_00458d80(DAT_00f88720,(float *)(param_1 + 0x40),3.0);
  if ((*(int *)((int)pvVar3 + 4) != 0) &&
     (*(int *)((int)pvVar3 + 8) - *(int *)((int)pvVar3 + 4) >> 2 != 0)) {
    local_48 = (void *)0x41200000;
    (**(code **)(*param_1 + 0x48))(&local_24);
    local_44 = (int *)**(int **)((int)pvVar3 + 4);
    piVar6 = *(int **)((int)pvVar3 + 4) + 1;
    if (piVar6 != *(int **)((int)pvVar3 + 8)) {
      do {
        piVar1 = (int *)*piVar6;
        if (piVar1 != (int *)param_1[0x8b]) {
          pfVar4 = (float *)(**(code **)(*param_1 + 0x34))(auStack_1c);
          pfVar5 = (float *)(**(code **)(*piVar1 + 0x34))(auStack_14);
          pvVar3 = (void *)0x41200000;
          fVar2 = ABS((*pfVar5 - *pfVar4) * fStack_28 +
                      (pfVar5[1] - pfVar4[1]) * local_24 + (pfVar5[2] - pfVar4[2]) * fStack_20);
          if (fVar2 < unaff_EBX) {
            pvVar3 = local_48;
            unaff_EBX = fVar2;
            local_44 = piVar1;
          }
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != *(int **)((int)pvVar3 + 8));
    }
    if ((local_44 != (int *)param_1[0x9a]) && (local_44 != (int *)param_1[0x8b])) {
      param_1[0x9a] = (int)local_44;
    }
  }
  return;
}


//// FUNCTION FUN_0059fc10 @ 0059fc10 ////

void __thiscall FUN_0059fc10(void *this,int param_1)

{
  byte *pbVar1;
  char *in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  uint in_stack_ffffffdc;
  
  if (param_1 != *(int *)((int)this + 0x264)) {
    switch(param_1) {
    case 0:
      FUN_0059ec80(this,*(int *)((int)this + 0x23c));
      *(int *)((int)this + 0x264) = param_1;
      return;
    case 1:
      FUN_0059ec80(this,*(int *)((int)this + 0x240));
      *(int *)((int)this + 0x264) = param_1;
      return;
    case 2:
      FUN_0059ec80(this,*(int *)((int)this + 0x244));
      *(int *)((int)this + 0x264) = param_1;
      return;
    case 4:
      FUN_00401de0(&stack0xffffffd4,"fight_idle.anm",0xffffffff);
      pbVar1 = FUN_00446820(in_stack_ffffffd4,in_stack_ffffffd8,in_stack_ffffffdc);
      FUN_00526890(this,pbVar1);
      if (pbVar1 != (byte *)0x0) {
        FUN_00985de0(pbVar1);
      }
      FUN_0059fac0(this);
    case 3:
      *(int *)((int)this + 0x264) = param_1;
    }
  }
  return;
}


//// FUNCTION caseD_4 @ 0059fc83 ////

void switchD_0059fc2e::caseD_4(void)

{
  byte *pbVar1;
  int unaff_EBX;
  int *unaff_ESI;
  undefined1 *puStack00000010;
  char *in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  uint in_stack_ffffffe8;
  
  puStack00000010 = &stack0xffffffe0;
  FUN_00401de0(&stack0xffffffe0,"fight_idle.anm",0xffffffff);
  pbVar1 = FUN_00446820(in_stack_ffffffe0,in_stack_ffffffe4,in_stack_ffffffe8);
  FUN_00526890(unaff_ESI,pbVar1);
  if (pbVar1 != (byte *)0x0) {
    FUN_00985de0(pbVar1);
  }
  FUN_0059fac0(unaff_ESI);
  unaff_ESI[0x99] = unaff_EBX;
  return;
}


//// FUNCTION FUN_0059fce0 @ 0059fce0 ////

void FUN_0059fce0(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb486b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0104d548 != (undefined4 *)0x0) {
    puVar1 = DAT_0104d548 + 0x8b;
    ExceptionList = &pvStack_c;
    if ((int *)DAT_0104d548[0x8b] != (int *)0x0) {
      ExceptionList = &pvStack_c;
      (**(code **)(*(int *)DAT_0104d548[0x8b] + 0xa8))(DAT_0104d548 + 0x40,DAT_0104d548 + 0x31);
      (**(code **)(*(int *)*puVar1 + 0x120))(0);
    }
    puVar1 = DAT_0104d548;
    if (DAT_0104d548 != (undefined4 *)0x0) {
      iVar2 = DAT_0104d548[0x12];
      DAT_0104d548[0x12] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)*puVar1)(1);
      }
      DAT_0104d548 = (undefined4 *)0x0;
    }
  }
  this = operator_new(0x2b0);
  uStack_4 = 0;
  if (this == (void *)0x0) {
    DAT_0104d548 = (undefined4 *)0x0;
  }
  else {
    DAT_0104d548 = FUN_0059f520(this,0);
  }
  uStack_4 = 0xffffffff;
  FUN_0059f870(DAT_0104d548,0);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0059fdb0 @ 0059fdb0 ////

void __cdecl FUN_0059fdb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb488b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0104d548 != (undefined4 *)0x0) {
    puVar1 = DAT_0104d548 + 0x8b;
    ExceptionList = &pvStack_c;
    if ((int *)DAT_0104d548[0x8b] != (int *)0x0) {
      ExceptionList = &pvStack_c;
      (**(code **)(*(int *)DAT_0104d548[0x8b] + 0xa8))(DAT_0104d548 + 0x40,DAT_0104d548 + 0x31);
      (**(code **)(*(int *)*puVar1 + 0x120))(0);
    }
    puVar1 = DAT_0104d548;
    if (DAT_0104d548 != (undefined4 *)0x0) {
      iVar2 = DAT_0104d548[0x12];
      DAT_0104d548[0x12] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)*puVar1)(1);
      }
      DAT_0104d548 = (undefined4 *)0x0;
    }
  }
  this = operator_new(0x2b0);
  uStack_4 = 0;
  if (this == (void *)0x0) {
    DAT_0104d548 = (undefined4 *)0x0;
  }
  else {
    DAT_0104d548 = FUN_0059f520(this,*(int *)(param_1 + 0x4a0));
  }
  uStack_4 = 0xffffffff;
  FUN_0059f870(DAT_0104d548,param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0059fe90 @ 0059fe90 ////

undefined4 * __thiscall FUN_0059fe90(void *this,byte param_1)

{
  FUN_0059f740(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005a0130 @ 005a0130 ////

void __fastcall FUN_005a0130(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb48c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d289b4;
  param_1[0x1e] = &PTR_LAB_00d28994;
  param_1[0x28] = &PTR_LAB_00d2897c;
  local_4 = 0;
  (**(code **)(*(int *)param_1[0x8b] + 0x120))(0);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_0059f740(param_1);
  ExceptionList = param_1;
  return;
}


//// FUNCTION FUN_005a01d0 @ 005a01d0 ////

undefined4 * __thiscall FUN_005a01d0(void *this,byte param_1)

{
  FUN_005a0130(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005a01f0 @ 005a01f0 ////

void __fastcall FUN_005a01f0(int *param_1)

{
  float *this;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 uVar6;
  uint uVar7;
  float extraout_ECX;
  float extraout_ECX_00;
  float fVar8;
  undefined4 extraout_ECX_01;
  float extraout_EDX;
  float fVar9;
  undefined4 extraout_EDX_00;
  float unaff_EBX;
  float unaff_EDI;
  float10 fVar10;
  float10 fVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  float fVar14;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  float fStack_10;
  undefined1 local_c [12];
  
  if (param_1[0xac] < 1) {
    (**(code **)(*param_1 + 0xf0))(1);
    uVar13 = FUN_00990ae0(extraout_ECX_01,extraout_EDX_00);
    if ((uint)((int)uVar13 - param_1[0x86]) <= (uint)param_1[0x87]) {
      return;
    }
    (**(code **)(*param_1 + 0xf0))(2);
    return;
  }
  FUN_005268e0(param_1);
  this = (float *)(param_1 + 0x40);
  pfVar5 = (float *)(**(code **)(*DAT_0104d548 + 0x34))(local_c);
  fVar14 = *pfVar5;
  fVar1 = *this;
  fVar2 = pfVar5[1];
  fVar3 = (float)param_1[0x41];
  fStack_38 = pfVar5[2] - (float)param_1[0x42];
  (**(code **)(*param_1 + 0x48))(&fStack_1c);
  FUN_00412e20((float *)&stack0xffffffbc);
  FUN_00412e20(&fStack_20);
  fStack_38 = -fStack_1c;
  fStack_34 = fStack_20;
  fStack_30 = 0.0;
  FUN_00412e20(&fStack_38);
  uVar12 = (**(code **)(*DAT_0104d548 + 0x34))(auStack_14);
  fVar9 = (float)((ulonglong)uVar12 >> 0x20);
  pfVar5 = (float *)uVar12;
  fVar4 = (*this - *pfVar5) * (*this - *pfVar5) +
          ((float)param_1[0x41] - pfVar5[1]) * ((float)param_1[0x41] - pfVar5[1]) +
          ((float)param_1[0x42] - pfVar5[2]) * ((float)param_1[0x42] - pfVar5[2]);
  fVar8 = extraout_ECX;
  if (1.9 < fVar4) {
    fStack_10 = (fVar14 - fVar1) * 0.1;
    fStack_30 = unaff_EBX * 0.1 + *this;
    fVar9 = unaff_EDI * 0.1 + (float)param_1[0x41];
    fVar8 = fStack_10 + (float)param_1[0x42];
    *this = fStack_30;
    param_1[0x41] = (int)fVar9;
    param_1[0x42] = (int)fVar8;
    fStack_2c = fVar9;
    fStack_28 = fVar8;
  }
  fVar10 = (float10)fpatan((float10)unaff_EDI / (float10)unaff_EBX,(float10)1);
  fVar11 = (float10)fpatan((float10)fStack_20 / (float10)fStack_24,(float10)1);
  if ((float10)0.2 < ABS(fVar11 + fVar10)) {
    fVar14 = (fVar2 - fVar3) * unaff_EBX + fStack_38 * unaff_EDI + fStack_34 * (fVar14 - fVar1);
    if (fVar14 <= 0.15) {
      if (-0.15 <= fVar14) goto LAB_005a03b2;
      fVar14 = -0.15;
    }
    else {
      fVar14 = 0.15;
    }
    fVar10 = FUN_004012c0(fVar14);
    fVar10 = FUN_004012c0((float)(fVar10 + (float10)(float)param_1[0x31]));
    param_1[0x31] = (int)(float)fVar10;
    fVar8 = extraout_ECX_00;
    fVar9 = extraout_EDX;
  }
LAB_005a03b2:
  if (fVar4 <= 1.9) {
    uVar13 = FUN_00990ae0(fVar8,fVar9);
    if ((uint)(param_1[0x87] * 2) < (uint)((int)uVar13 - param_1[0x86])) {
      (**(code **)(*DAT_0104d548 + 0x34))(auStack_18);
      fVar10 = (float10)FUN_00412f50();
      if ((fVar10 < (float10)1.5) && ((char)param_1[0x89] == '\0')) {
        (**(code **)(*DAT_0104d548 + 0xe8))(0xfffffffb);
      }
      uVar7 = FUN_00990d30(0,7);
      FUN_0059ea10(param_1,param_1[0x85]);
      if (uVar7 < 5) {
        (**(code **)(*param_1 + 0xe4))(uVar7);
        return;
      }
      (**(code **)(*param_1 + 0xe0))(4);
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0xe0))(4);
    uVar6 = FUN_00445f00(this,(float *)(param_1 + 0x53));
    if ((char)uVar6 == '\0') {
      param_1[0x81] = 0;
      return;
    }
    fVar14 = (float)param_1[0x53] - *this;
    param_1[0x81] =
         (int)SQRT(fVar14 * fVar14 +
                   ((float)param_1[0x54] - (float)param_1[0x41]) *
                   ((float)param_1[0x54] - (float)param_1[0x41]) +
                   ((float)param_1[0x55] - (float)param_1[0x42]) *
                   ((float)param_1[0x55] - (float)param_1[0x42]));
  }
  return;
}


//// FUNCTION FUN_005a05a0 @ 005a05a0 ////

void __thiscall FUN_005a05a0(void *this,int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  char local_20 [12];
  undefined4 uStack_14;
  
  if (param_1 != *(int *)((int)this + 0x2b4)) {
    if (param_1 == 0) {
      uStack_14 = 0x5a0637;
      (**(code **)(*(int *)this + 0xe0))();
    }
    else if (param_1 == 1) {
      pcVar4 = local_20;
      local_20[0] = '\0';
      uVar5 = 0;
      uVar6 = 0x14;
      FUN_004015d0(&stack0xffffffd4,"bb_bat_side_hit_fall.anm",0x18);
      pbVar1 = FUN_00446820(pcVar4,uVar5,uVar6);
      uVar3 = FUN_00990ae0(extraout_ECX,extraout_EDX);
      *(int *)((int)this + 0x218) = (int)uVar3;
      iVar2 = FUN_0059ee40((int)pbVar1);
      *(int *)((int)this + 0x21c) = iVar2;
      uStack_14 = 0x5a0614;
      FUN_00526890(this,pbVar1);
      if (pbVar1 != (byte *)0x0) {
        FUN_00985de0(pbVar1);
        *(undefined4 *)((int)this + 0x2b4) = 1;
        return;
      }
    }
    *(int *)((int)this + 0x2b4) = param_1;
  }
  return;
}


//// FUNCTION FUN_005a0650 @ 005a0650 ////

int * __thiscall FUN_005a0650(void *this,int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb48e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0059f520(this,param_1[0x128]);
  *(undefined ***)this = &PTR_FUN_00d289b4;
  *(undefined ***)((int)this + 0x78) = &PTR_LAB_00d28994;
  *(undefined ***)((int)this + 0xa0) = &PTR_LAB_00d2897c;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 100;
  local_4 = 0;
  (**(code **)(*param_1 + 0x120))(1);
  FUN_0059f870(this,(int)param_1);
  if (*(int *)((int)this + 0x2b4) != 0) {
    (**(code **)(*(int *)this + 0xe0))(4);
    *(undefined4 *)((int)this + 0x2b4) = 0;
  }
  ExceptionList = this;
  return this;
}


//// FUNCTION FUN_005a0700 @ 005a0700 ////

void __fastcall FUN_005a0700(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005a0730 @ 005a0730 ////

void FUN_005a0730(void)

{
  return;
}


//// FUNCTION FUN_005a0750 @ 005a0750 ////

void __fastcall FUN_005a0750(int param_1)

{
  *(undefined1 *)(param_1 + 0xaa0) = 1;
  *(undefined1 *)(param_1 + 100) = 0;
  return;
}


//// FUNCTION FUN_005a0760 @ 005a0760 ////

void __thiscall FUN_005a0760(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xa98) = param_1;
  return;
}


//// FUNCTION FUN_005a0770 @ 005a0770 ////

void __thiscall FUN_005a0770(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xa9c) = param_1;
  return;
}


//// FUNCTION CWannabe_PropagateAmbitionToWidget @ 005a07d0 ////

void __thiscall CWannabe_PropagateAmbitionToWidget(void *this,void *param_1)

{
  void *this_00;
  float *pfVar1;
  float10 fVar2;
  
  this_00 = param_1;
  if (param_1 != (void *)0x0) {
    pfVar1 = (float *)(**(code **)(*(int *)this + 0x1e0))(&param_1);
    fVar2 = FUN_0043b710(pfVar1);
    FUN_009d63a0(this_00,(float)fVar2);
    FUN_009d6470(this_00,*(float *)((int)this + 0xa9c));
    FUN_009d6530(this_00,*(float *)((int)this + 0xa98));
  }
  return;
}


//// FUNCTION CWannabe_Tick @ 005a0820 ////

/* Setting prototype: void CWannabe_Tick(TMCharacter * character) */

void __fastcall CWannabe_Tick(TMCharacter *character)

{
  int iVar1;
  
  CStaff_Tick(character);
  if (character->field_0xaa0 != '\0') {
    iVar1 = *(int *)&character->field_0x48 + -1;
    character->field_0xaa0 = 0;
    *(int *)&character->field_0x48 = iVar1;
    if (iVar1 == 0) {
      (*(code *)**(undefined4 **)character)(1);
    }
  }
  return;
}


//// FUNCTION FUN_005a0850 @ 005a0850 ////

void __fastcall FUN_005a0850(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb490b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00420b80(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(param_1[0x29e] + 4))();
  param_1[0x2a3] = (int)puVar2;
  (**(code **)param_1[0x29e])();
  FUN_005921f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a08d0 @ 005a08d0 ////

void __thiscall FUN_005a08d0(void *this,undefined4 param_1)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float fVar4;
  
  fVar3 = FUN_00a19e00((undefined4 *)((int)this + 0xa34));
  fVar4 = (float)fVar3;
  fVar3 = FUN_00a19e00((undefined4 *)((int)this + 0xa54));
  fVar1 = (float)fVar3;
  if (fVar4 == 0.0) {
    fVar4 = fVar1;
    if (fVar1 == 0.0) {
      *(undefined4 *)((int)this + 0xa94) = param_1;
      return;
    }
  }
  else if (fVar1 != 0.0) {
    pfVar2 = (float *)((int)this + 0xa74);
    if (*pfVar2 == 0.0) {
      pfVar2 = FUN_00407070(&param_1,0.5);
    }
    fVar4 = *pfVar2 * fVar4 + (1.0 - *pfVar2) * fVar1;
  }
  FUN_00407070(&param_1,fVar4);
  *(undefined4 *)((int)this + 0xa94) = param_1;
  return;
}


//// FUNCTION CWannabe_GetAmbitionCap @ 005a09a0 ////

void __thiscall CWannabe_GetAmbitionCap(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xa98);
  return;
}


//// FUNCTION CWannabe_GetAmbitionTarget @ 005a09b0 ////

void __thiscall CWannabe_GetAmbitionTarget(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xa94);
  return;
}


//// FUNCTION FUN_005a09c0 @ 005a09c0 ////

void __thiscall FUN_005a09c0(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = (*(float *)((int)this + 0xa9c) - 60.0) * 0.025;
  if (fVar1 < 0.0) {
    *param_1 = 0.0;
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_005a0a10 @ 005a0a10 ////

void __thiscall FUN_005a0a10(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = (*(float *)((int)this + 0xa9c) - 60.0) * 0.025;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = ((1.0 - fVar1) + *(float *)((int)this + 0xa98)) * 0.5;
  if (fVar1 < 0.0) {
    *param_1 = 0.0;
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_005a0aa0 @ 005a0aa0 ////

void __thiscall FUN_005a0aa0(void *this,undefined4 param_1)

{
  FUN_004af570();
  if (DAT_0104a974 == 0) {
    *(undefined4 *)((int)this + 0xa90) = param_1;
    return;
  }
  if (*(float *)(DAT_0104a974 + 0x7c) != 0.0) {
    *(undefined4 *)((int)this + 0xa90) = 0x3f800000;
    return;
  }
  *(undefined4 *)((int)this + 0xa90) = param_1;
  return;
}


//// FUNCTION CWannabe_GetAmbitionLevel @ 005a0b00 ////

void __thiscall CWannabe_GetAmbitionLevel(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xa90);
  return;
}


//// FUNCTION CWannabe_ApplyAmbitionDelta @ 005a0b10 ////

void __thiscall CWannabe_ApplyAmbitionDelta(void *this,float param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  float10 fVar6;
  
  if (param_1 < 0.0) {
    iVar3 = AwardBonusManager_Get();
    if (iVar3 != 0) {
      iVar3 = 0x10;
      pvVar4 = (void *)AwardBonusManager_Get();
      cVar2 = AwardBonusManager_IsBonusActive(pvVar4,iVar3);
      if (cVar2 != '\0') {
        pvVar4 = (void *)0x0;
        iVar3 = 0x10;
        AwardBonusManager_Get();
        fVar6 = AwardBonus_GetValue(iVar3,pvVar4);
        param_1 = (float)(fVar6 * (float10)param_1);
      }
    }
  }
  fVar1 = param_1 + *(float *)((int)this + 0xa90);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  FUN_005a0aa0(this,fVar1);
  iVar3 = FUN_005773c0((int)this);
  iVar5 = GetPlayerStudio();
  if (iVar3 == iVar5) {
    FUN_0057cd50(*(float *)((int)this + 0xa90));
  }
  return;
}


//// FUNCTION FUN_005a0bf0 @ 005a0bf0 ////

undefined4 __fastcall FUN_005a0bf0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa8c);
}


//// FUNCTION FUN_005a0c00 @ 005a0c00 ////

void __fastcall FUN_005a0c00(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4928;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x1e);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x78) & (uint)param_1),param_1 + -0x1e);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION CWannabe_RefreshVisualRepresentation @ 005a0cd0 ////

void __fastcall CWannabe_RefreshVisualRepresentation(int *param_1)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 *local_1c8;
  char *local_1c4 [2];
  uint uStack_1bc;
  byte local_1a4 [8];
  undefined1 *local_19c;
  char *local_198;
  char *local_178;
  undefined1 local_d8 [204];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4961;
  local_c = ExceptionList;
  if (param_1[0x1bf] == 0) {
    if (param_1[0x28e] == 0) {
      ExceptionList = &local_c;
      FUN_0058c820(local_1c4,param_1[0x128]);
      local_4 = 0;
      FUN_009d2990(local_1a4,local_1c4[0],(char *)0x0,0.0);
      local_4._0_1_ = 1;
      pcVar2 = local_198;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(param_1 + 0x28d,local_198,(int)pcVar2 - (int)(local_198 + 1));
      pcVar2 = local_178;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(param_1 + 0x295,local_178,(int)pcVar2 - (int)(local_178 + 1));
      if ((local_1a4[0] & 1) == 0) {
        local_1c8 = local_19c;
      }
      else {
        local_1c8 = (undefined1 *)0x0;
      }
      FUN_00407070(&local_1c8,(float)local_1c8);
      uVar5 = 0;
      param_1[0x29d] = (int)local_1c8;
      pvVar3 = FUN_009d30f0(param_1[0x47],param_1[0x128],1,(uint *)local_1a4,'\0');
      local_1c8 = &stack0xfffffe28;
      param_1[0x1bf] = (int)pvVar3;
      (**(code **)(*param_1 + 0x210))(&stack0xfffffe28);
      FUN_005a08d0(param_1,uVar5);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00434ae0((int)local_1a4);
      local_4 = 0xffffffff;
      if (0x14 < uStack_1bc) {
                    /* WARNING: Subroutine does not return */
        _free(local_1c4[0]);
      }
    }
    else {
      local_1c8 = (undefined1 *)param_1[0x29d];
      ExceptionList = &local_c;
      puVar4 = FUN_009d2990(local_d8,(char *)param_1[0x28d],(char *)param_1[0x295],(float)local_1c8)
      ;
      local_4 = 2;
      pvVar3 = FUN_009d30f0(param_1[0x47],param_1[0x128],1,puVar4,'\0');
      param_1[0x1bf] = (int)pvVar3;
      local_4 = 0xffffffff;
      FUN_00434ae0((int)local_d8);
    }
    (**(code **)(*param_1 + 300))();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a0ec0 @ 005a0ec0 ////

undefined1 __fastcall FUN_005a0ec0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  char **ppcVar8;
  undefined1 local_55;
  undefined4 local_50;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb49a2;
  local_c = ExceptionList;
  bVar2 = false;
  bVar1 = false;
  ExceptionList = &local_c;
  iVar3 = FUN_00577370(param_1);
  if (iVar3 != 0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"Stunts",6);
    local_28 = 6;
    local_2c[6] = '\0';
    ppcVar8 = &local_2c;
    local_4 = 0;
    bVar2 = false;
    bVar1 = true;
    pvVar4 = (void *)FUN_00577370(param_1);
    uVar5 = FUN_00441790(pvVar4,ppcVar8);
    if ((char)uVar5 != '\0') {
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      _strncpy(local_4c,"Stunts",6);
      local_48 = 6;
      local_4c[6] = '\0';
      ppcVar8 = &local_4c;
      puVar7 = &local_50;
      local_4 = 1;
      bVar2 = true;
      bVar1 = true;
      pvVar4 = (void *)FUN_00577370(param_1);
      pfVar6 = (float *)FUN_00441750(pvVar4,puVar7,ppcVar8);
      local_55 = 1;
      if (0.0 < *pfVar6) goto LAB_005a0fc2;
    }
  }
  local_55 = 0;
LAB_005a0fc2:
  if ((bVar2) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((bVar1) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return local_55;
}


//// FUNCTION CWannabe_GetStatCategoryTag @ 005a1020 ////

void __fastcall CWannabe_GetStatCategoryTag(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *this;
  char *pcVar4;
  
  pcVar4 = "wannabe";
  iVar2 = FUN_005773c0(param_1);
  iVar3 = GetPlayerStudio();
  if (iVar2 == iVar3) {
    pcVar4 = "staff";
  }
  cVar1 = FUN_005a0ec0(param_1);
  if (cVar1 != '\0') {
    pcVar4 = "wannastunt";
  }
  this = (void *)GlobalStatRegistry_Get();
  FUN_008c9a80(this,(undefined4 *)pcVar4);
  return;
}


//// FUNCTION FUN_005a1070 @ 005a1070 ////

void __fastcall FUN_005a1070(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb49f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Wannabe.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &pvStack_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0xf;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xa00));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("PThresholds");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xa00));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Wannabe.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x10;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("Health");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xa18));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Wannabe.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x11;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("Cuteness");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xa1c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Wannabe.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x12;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("SexAppeal");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xa20));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Wannabe.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x13;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    pcVar2 = (char *)FUN_00ace33d(0xe4f6dc);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("Weight");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xa24),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Wannabe.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x14;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    pcVar2 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("Head[0]");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x9bc));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Wannabe.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x15;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
    pcVar2 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("Head[1]");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x9dc));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Wannabe.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x16;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("HeadMix");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x9fc));
  }
  FUN_005823f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION CWannabe_Constructor @ 005a1780 ////

int * __fastcall CWannabe_Constructor(int *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4a3c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00580fb0(param_1);
  *param_1 = (int)&PTR_FUN_00d28b44;
  param_1[0x1e] = (int)&PTR_LAB_00d28b24;
  param_1[0x28] = (int)&PTR_LAB_00d28b0c;
  param_1[0x28b] = 0;
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x28d,0x20,2,FUN_00401dc0,FUN_00401490);
  param_1[0x29d] = 0;
  param_1[0x2a1] = 0;
  param_1[0x29f] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2a1] = (int)(param_1 + 0x29e);
  param_1[0x29e] = (int)&PTR_LAB_00d249b4;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0x3f800000;
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  param_1[0x131] = 1;
  FUN_004015d0(param_1 + 0x28d,"",0);
  FUN_004015d0(param_1 + 0x295,"",0);
  param_1[0x29d] = 0;
  param_1[0x28b] = (int)param_1;
  FUN_00acdb9e(0xe5438c);
  iVar1 = FUN_0097dda0();
  param_1[0x28c] = iVar1;
  if (s___AVTMFighter_TM___00e54378[0x13] != '\0') {
    iVar1 = 0xa24;
    pcVar3 = "CacheLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe5438c);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AVTMFighter_TM___00e54378[0x13] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005a18f0 @ 005a18f0 ////

void __fastcall FUN_005a18f0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb4a8c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00d28b44;
  param_1[0x1e] = (int)&PTR_LAB_00d28b24;
  param_1[0x28] = (int)&PTR_LAB_00d28b0c;
  local_4 = 3;
  if ((int *)param_1[0x28a] != (int *)0x0) {
    *(int *)param_1[0x28a] = param_1[0x289];
  }
  if (param_1[0x289] != 0) {
    *(int *)(param_1[0x289] + 4) = param_1[0x28a];
  }
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  puVar2 = (undefined4 *)param_1[0x2a3];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x29e] + 4))();
    param_1[0x2a3] = 0;
    (**(code **)param_1[0x29e])();
  }
  param_1[0x29e] = (int)&PTR_LAB_00d249b4;
  if ((int *)param_1[0x2a0] != (int *)0x0) {
    *(int *)param_1[0x2a0] = param_1[0x29f];
  }
  if (param_1[0x29f] != 0) {
    *(int *)(param_1[0x29f] + 4) = param_1[0x2a0];
  }
  param_1[0x29f] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2a3] = 0;
  if ((int *)param_1[0x2a0] != (int *)0x0) {
    *(int *)param_1[0x2a0] = param_1[0x29f];
  }
  if (param_1[0x29f] != 0) {
    *(int *)(param_1[0x29f] + 4) = param_1[0x2a0];
  }
  param_1[0x29f] = 0;
  param_1[0x2a0] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_destructor_iterator_(param_1 + 0x28d,0x20,2,FUN_00401490);
  if ((int *)param_1[0x28a] != (int *)0x0) {
    *(int *)param_1[0x28a] = param_1[0x289];
  }
  if (param_1[0x289] != 0) {
    *(int *)(param_1[0x289] + 4) = param_1[0x28a];
  }
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  local_4 = 0xffffffff;
  FUN_005818a0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a1a70 @ 005a1a70 ////

int * FUN_005a1a70(void)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4aab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0xaa4);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = CWannabe_Constructor(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0xe0))(2);
  (**(code **)(*piVar2 + 0xe8))();
  FUN_005a0850(piVar2);
  ExceptionList = piVar1;
  return piVar2;
}


//// FUNCTION FUN_005a1af0 @ 005a1af0 ////

int * FUN_005a1af0(void)

{
  int *piVar1;
  
  if (DAT_0104d5f8 != &DAT_0104d604) {
    piVar1 = (int *)DAT_0104d5f8[2];
    (**(code **)(*piVar1 + 0x120))(0);
    if ((int *)piVar1[0x28a] != (int *)0x0) {
      *(int *)piVar1[0x28a] = piVar1[0x289];
    }
    if (piVar1[0x289] != 0) {
      *(int *)(piVar1[0x289] + 4) = piVar1[0x28a];
    }
    piVar1[0x289] = 0;
    piVar1[0x28a] = 0;
    return piVar1;
  }
  piVar1 = FUN_005a1a70();
  (**(code **)(*piVar1 + 0xe4))();
  (**(code **)(*piVar1 + 0x220))(piVar1[0x1bf]);
  return piVar1;
}


//// FUNCTION FUN_005a1b70 @ 005a1b70 ////

int * __thiscall FUN_005a1b70(void *this,byte param_1)

{
  FUN_005a18f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005a1b90 @ 005a1b90 ////

void FUN_005a1b90(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  
  do {
    uVar4 = 0;
    puVar2 = DAT_0104d5f8;
    if ((int **)DAT_0104d5f8 != &DAT_0104d604) {
      do {
        puVar2 = (undefined4 *)puVar2[1];
        uVar4 = uVar4 + 1;
      } while ((int **)puVar2 != &DAT_0104d604);
      if (9 < uVar4) {
        return;
      }
    }
    piVar3 = FUN_005a1a70();
    (**(code **)(*piVar3 + 0xe4))();
    (**(code **)(*piVar3 + 0x120))(1);
    (**(code **)(*piVar3 + 0x220))(piVar3[0x1bf]);
    piVar1 = piVar3 + 0x289;
    piVar3[0x28a] = (int)&DAT_0104d604;
    *piVar1 = (int)DAT_0104d604;
    *(int **)((int)DAT_0104d604 + 4) = piVar1;
    DAT_0104d604 = piVar1;
  } while( true );
}


//// FUNCTION FUN_005a1ca0 @ 005a1ca0 ////

void __fastcall FUN_005a1ca0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d28d70;
  while (piVar1 != param_1 + 5) {
    *piVar1 = 0;
    piVar1 = (int *)piVar1[1];
    *(undefined4 *)(*piVar1 + 4) = 0;
  }
  param_1[2] = 0;
  param_1[5] = 0;
  FUN_00406010((int)param_1);
  return;
}


//// FUNCTION FUN_005a1cf0 @ 005a1cf0 ////

undefined4 * __thiscall FUN_005a1cf0(void *this,byte param_1)

{
  FUN_005a1ca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005a1d10 @ 005a1d10 ////

void __fastcall FUN_005a1d10(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 5;
  param_1[7] = 0;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[2] = puVar1;
  *puVar1 = param_1 + 1;
  *param_1 = &PTR_LAB_00d28d70;
  return;
}


//// FUNCTION FUN_005a1d70 @ 005a1d70 ////

int * FUN_005a1d70(void)

{
  int *piVar1;
  void *this;
  char **ppcVar2;
  int iVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4ae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_00581830();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"Writing",7);
  local_28 = 7;
  local_2c[7] = '\0';
  iVar3 = 10;
  ppcVar2 = &local_2c;
  local_4 = 0;
  this = (void *)FUN_00577370((int)piVar1);
  FUN_00442690(this,ppcVar2,iVar3);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return piVar1;
}


//// FUNCTION FUN_005a1e10 @ 005a1e10 ////

void __fastcall FUN_005a1e10(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005a1e40 @ 005a1e40 ////

void FUN_005a1e40(void)

{
  return;
}


//// FUNCTION FUN_005a1e50 @ 005a1e50 ////

void __fastcall FUN_005a1e50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb4b08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d28d9c;
  param_1[0xe] = &PTR_LAB_00d28d7c;
  local_4 = 0;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a1eb0 @ 005a1eb0 ////

void __thiscall
FUN_005a1eb0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined4 *)((int)this + 100) = param_2;
  *(undefined4 *)((int)this + 0x68) = param_3;
  *(undefined4 *)((int)this + 0x6c) = param_4;
  return;
}


//// FUNCTION FUN_005a1ef0 @ 005a1ef0 ////

undefined4 * __thiscall FUN_005a1ef0(void *this,byte param_1)

{
  FUN_005a1e50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005a1f10 @ 005a1f10 ////

float10 __fastcall FUN_005a1f10(int param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  undefined1 local_4 [4];
  
  pfVar2 = (float *)FUN_0043b520(&local_8,1900.0);
  pfVar3 = (float *)FUN_0043b520(&local_c,2000.0);
  pfVar4 = (float *)FUN_0043b520(local_4,1900.0);
  fVar1 = (DAT_00e4fa4c - *pfVar2) / (*pfVar3 - *pfVar4);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  local_8 = fVar1 * *(float *)(param_1 + 0x68) + (1.0 - fVar1) * *(float *)(param_1 + 0x60);
  local_c = fVar1 * *(float *)(param_1 + 0x6c) + (1.0 - fVar1) * *(float *)(param_1 + 100);
  fVar5 = FUN_00990dc0(local_c);
  return (fVar5 + (float10)local_8) - (float10)local_c * (float10)0.5;
}


//// FUNCTION FUN_005a1fd0 @ 005a1fd0 ////

void __fastcall FUN_005a1fd0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4b28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0xe);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x38) & (uint)param_1),param_1 + -0xe);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a20a0 @ 005a20a0 ////

void __fastcall FUN_005a20a0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4b60;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\AIInterpolatedValue.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 7;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar2 = (char *)FUN_00ace33d(0xe4f6dc);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("AverageValue1900");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x28),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\AIInterpolatedValue.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 8;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4f6dc);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("ValueVariation1900");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2c),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\AIInterpolatedValue.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 9;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar2 = (char *)FUN_00ace33d(0xe4f6dc);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("AverageValue2000");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x30),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\AIInterpolatedValue.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 10;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    pcVar2 = (char *)FUN_00ace33d(0xe4f6dc);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("ValueVariation2000");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x34),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a2450 @ 005a2450 ////

undefined4 * __fastcall FUN_005a2450(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  param_1[0xe] = &PTR_LAB_00d28d7c;
  *param_1 = &PTR_FUN_00d28d9c;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005a24d0 @ 005a24d0 ////

void __fastcall FUN_005a24d0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005a2500 @ 005a2500 ////

void __thiscall FUN_005a2500(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x110) = param_1;
  return;
}


//// FUNCTION FUN_005a2510 @ 005a2510 ////

int __fastcall FUN_005a2510(int param_1)

{
  return param_1 + 0x134;
}


//// FUNCTION FUN_005a2520 @ 005a2520 ////

void __thiscall FUN_005a2520(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x118) = param_1;
  return;
}


//// FUNCTION FUN_005a2540 @ 005a2540 ////

int * __thiscall FUN_005a2540(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005a2570 @ 005a2570 ////

int * __thiscall FUN_005a2570(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005a25b0 @ 005a25b0 ////

int * __thiscall FUN_005a25b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005a2710 @ 005a2710 ////

void __cdecl FUN_005a2710(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}


//// FUNCTION FUN_005a2770 @ 005a2770 ////

void __cdecl FUN_005a2770(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x15);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x15);
  }
  return;
}


//// FUNCTION FUN_005a27a0 @ 005a27a0 ////

void __fastcall FUN_005a27a0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x15) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x15);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x15);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x15) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x15) == '\0');
    if (*(char *)((int)piVar4 + 0x15) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_005a2930 @ 005a2930 ////

void __thiscall FUN_005a2930(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0xf8) + 4))();
  *(undefined4 *)((int)this + 0x10c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xf8))();
  return;
}


//// FUNCTION FUN_005a2960 @ 005a2960 ////

void __thiscall FUN_005a2960(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0xac) + 4))();
  *(undefined4 *)((int)this + 0xc0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xac))();
  return;
}


//// FUNCTION FUN_005a2990 @ 005a2990 ////

void __thiscall FUN_005a2990(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4b9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)this + 0xd8) == 0) {
    ExceptionList = &pvStack_c;
    puVar1 = operator_new(0x74);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_005a9070(puVar1);
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)((int)this + 0xc4) + 4))();
    *(undefined4 **)((int)this + 0xd8) = puVar1;
    (*(code *)**(undefined4 **)((int)this + 0xc4))();
  }
  FUN_005a90f0(*(void **)((int)this + 0xd8),param_1,0);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a2a30 @ 005a2a30 ////

undefined4 __fastcall FUN_005a2a30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x130);
}


//// FUNCTION FUN_005a2a40 @ 005a2a40 ////

void __fastcall FUN_005a2a40(undefined4 *param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x65) == '\0') {
    DAT_0104d624 = DAT_0104d624 + -1;
    if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x52] = param_1[0x51];
    }
    if (param_1[0x51] != 0) {
      *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
    }
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    iVar1 = param_1[0x12];
    *(undefined1 *)(param_1 + 0x65) = 1;
    param_1[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  return;
}


//// FUNCTION FUN_005a2aa0 @ 005a2aa0 ////

undefined4 __fastcall FUN_005a2aa0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf0);
}


//// FUNCTION FUN_005a2ab0 @ 005a2ab0 ////

void __thiscall FUN_005a2ab0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0xdc) + 4))();
  *(undefined4 *)((int)this + 0xf0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xdc))();
  return;
}


//// FUNCTION FUN_005a2ae0 @ 005a2ae0 ////

void __thiscall FUN_005a2ae0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x118);
  return;
}


//// FUNCTION FUN_005a2af0 @ 005a2af0 ////

void __fastcall FUN_005a2af0(int param_1)

{
  void *this;
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4bbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0xb8);
  puVar1 = (undefined4 *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = GenrePopularitySnapshot_Constructor_AI(this,param_1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x158) + 4))();
  *(undefined4 **)(param_1 + 0x16c) = puVar1;
  (*(code *)**(undefined4 **)(param_1 + 0x158))();
  CProjectSuccess_Recompute(*(void **)(param_1 + 0x16c));
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a2b70 @ 005a2b70 ////

undefined4 __fastcall FUN_005a2b70(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}


//// FUNCTION Release_PushGenreSaturationEntry_AI @ 005a2b80 ////

void __fastcall Release_PushGenreSaturationEntry_AI(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 local_54 [18];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d2f0(local_54);
  local_4 = 0;
  FUN_0044d270(local_54,*(undefined4 *)(param_1 + 0x10c));
  puVar1 = local_54;
  fVar2 = 1.0;
  GenreSaturationTracker_GetInstance();
  GenreSaturationTracker_Push((uint)puVar1,fVar2);
  local_4 = 0xffffffff;
  FUN_00526bb0(local_54);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a2c00 @ 005a2c00 ////

undefined4 __fastcall FUN_005a2c00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10c);
}


//// FUNCTION FUN_005a2c10 @ 005a2c10 ////

undefined4 __fastcall FUN_005a2c10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x16c);
}


//// FUNCTION FUN_005a2c50 @ 005a2c50 ////

undefined4 __fastcall FUN_005a2c50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x184);
}


//// FUNCTION FUN_005a2df0 @ 005a2df0 ////

void __fastcall FUN_005a2df0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_005a2e60 @ 005a2e60 ////

void __thiscall FUN_005a2e60(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x15) == '\0') {
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


//// FUNCTION FUN_005a2ec0 @ 005a2ec0 ////

void __thiscall FUN_005a2ec0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x15) == '\0') {
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


//// FUNCTION FUN_005a2f20 @ 005a2f20 ////

int * __fastcall FUN_005a2f20(int *param_1)

{
  FUN_005a27a0(param_1);
  return param_1;
}


//// FUNCTION FUN_005a2f80 @ 005a2f80 ////

void __fastcall FUN_005a2f80(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4bf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x19);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x64) & (uint)param_1),param_1 + -0x19);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a3050 @ 005a3050 ////

void __fastcall FUN_005a3050(int param_1)

{
  int *piVar1;
  void *local_20 [2];
  uint local_18;
  
  piVar1 = FUN_005be730((int *)local_20,*(int *)(param_1 + 0x10c));
  FUN_004036d0((void *)(param_1 + 0x8c),(wchar_t *)*piVar1,piVar1[1]);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return;
}


//// FUNCTION FUN_005a3200 @ 005a3200 ////

undefined4 * __thiscall FUN_005a3200(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x8c),*(uint *)((int)this + 0x90));
  return param_1;
}


//// FUNCTION FUN_005a3240 @ 005a3240 ////

void __thiscall FUN_005a3240(void *this,char param_1)

{
  undefined4 *puVar1;
  
  puVar1 = CProjectIncome_CreateForAIProject(this,param_1);
  (**(code **)(*(int *)((int)this + 0x170) + 4))();
  *(undefined4 **)((int)this + 0x184) = puVar1;
  (*(code *)**(undefined4 **)((int)this + 0x170))();
  return;
}


//// FUNCTION FUN_005a3280 @ 005a3280 ////

void FUN_005a3280(void)

{
  undefined4 *puVar1;
  int iVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4c40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0104d65d == '\0') {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"project",7);
    local_28 = 7;
    local_2c[7] = '\0';
    local_4 = 0;
    FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"MaxAIProjectCount",0x11);
    local_28 = 0x11;
    local_2c[0x11] = '\0';
    local_4 = 1;
    DAT_00e543d8 = FUN_00558750(DAT_00f88624,&local_2c,0);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    DAT_0104d65d = '\x01';
  }
  local_4 = 0xffffffff;
  if (DAT_00e543d8 < DAT_0104d624) {
    do {
      puVar1 = *(undefined4 **)(DAT_0104d630 + 8);
      if (*(char *)(puVar1 + 0x65) == '\0') {
        DAT_0104d624 = DAT_0104d624 + -1;
        if ((undefined4 *)puVar1[0x52] != (undefined4 *)0x0) {
          *(undefined4 *)puVar1[0x52] = puVar1[0x51];
        }
        if (puVar1[0x51] != 0) {
          *(undefined4 *)(puVar1[0x51] + 4) = puVar1[0x52];
        }
        puVar1[0x51] = 0;
        puVar1[0x52] = 0;
        iVar2 = puVar1[0x12];
        *(undefined1 *)(puVar1 + 0x65) = 1;
        puVar1[0x12] = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
    } while (DAT_00e543d8 < DAT_0104d624);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a3460 @ 005a3460 ////

void __fastcall FUN_005a3460(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d28e58;
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


//// FUNCTION FUN_005a3500 @ 005a3500 ////

void __fastcall FUN_005a3500(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d28e68;
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


//// FUNCTION FUN_005a35c0 @ 005a35c0 ////

void FUN_005a35c0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_005a35c0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_005a3600 @ 005a3600 ////

int * __fastcall FUN_005a3600(int *param_1)

{
  FUN_005a2df0(param_1);
  return param_1;
}


//// FUNCTION FUN_005a3610 @ 005a3610 ////

int * __fastcall FUN_005a3610(int *param_1)

{
  FUN_005a27a0(param_1);
  return param_1;
}


//// FUNCTION FUN_005a3620 @ 005a3620 ////

void FUN_005a3620(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  return;
}


//// FUNCTION FUN_005a3660 @ 005a3660 ////

void FUN_005a3660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[2] = param_3;
    puVar1[1] = param_2;
    puVar1[3] = *param_4;
    puVar1[4] = param_4[1];
    *(undefined1 *)(puVar1 + 5) = param_5;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
  }
  return;
}


//// FUNCTION FUN_005a36b0 @ 005a36b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a36b0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xd8) + 100);
  fVar10 = ((1.0 - _DAT_0104bd7c) * *(float *)(param_1 + 0x110) + _DAT_0104bd7c) * _DAT_0104bd80;
  if (iVar4 != *(int *)(*(int *)(param_1 + 0xd8) + 0x68)) {
    do {
      iVar8 = 0;
      pTVar7 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar6 = &TM::CStaff::RTTI_Type_Descriptor;
      iVar5 = 0;
      piVar1 = (int *)FUN_005a6470(*(int *)(iVar4 + 0x14));
      iVar5 = FUN_00ace790(piVar1,iVar5,pTVar6,pTVar7,iVar8);
      if (iVar5 != 0) {
        fVar9 = fVar10;
        puVar2 = (undefined4 *)FUN_00449b40(*(int *)(param_1 + 0x10c));
        pvVar3 = (void *)FUN_00577370(iVar5);
        FUN_004425f0(pvVar3,puVar2,fVar9);
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != *(int *)(*(int *)(param_1 + 0xd8) + 0x68));
  }
  iVar4 = *(int *)(param_1 + 0xc0);
  puVar2 = (undefined4 *)FUN_00449b40(*(int *)(param_1 + 0x10c));
  pvVar3 = (void *)FUN_00577370(iVar4);
  FUN_004425f0(pvVar3,puVar2,fVar10);
  return;
}


//// FUNCTION FUN_005a3770 @ 005a3770 ////

void __fastcall FUN_005a3770(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TypeDescriptor *pTVar4;
  TypeDescriptor *pTVar5;
  int iVar6;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xd8) + 100);
  if (iVar2 != *(int *)(*(int *)(param_1 + 0xd8) + 0x68)) {
    do {
      iVar6 = 0;
      pTVar5 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar4 = &TM::CStaff::RTTI_Type_Descriptor;
      iVar3 = 0;
      piVar1 = (int *)FUN_005a6470(*(int *)(iVar2 + 0x14));
      piVar1 = (int *)FUN_00ace790(piVar1,iVar3,pTVar4,pTVar5,iVar6);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x224))(2,0);
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0xd8) + 0x68));
  }
  (**(code **)(**(int **)(param_1 + 0xc0) + 0x224))(3,0);
  return;
}


//// FUNCTION CCinema_GatherRivalProjectSignText @ 005a37e0 ////

void __fastcall CCinema_GatherRivalProjectSignText(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_104;
  undefined2 *local_100;
  undefined2 *local_fc;
  undefined2 *local_f8;
  wchar_t *local_f4;
  void *local_ec [2];
  uint local_e4;
  wchar_t *local_cc;
  undefined4 local_c8;
  uint local_c4;
  wchar_t local_c0 [10];
  undefined2 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined2 local_a0 [10];
  undefined2 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80 [10];
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb4c79;
  pvStack_c = ExceptionList;
  local_cc = local_c0;
  local_f4 = (wchar_t *)0x0;
  local_fc = (undefined2 *)0x0;
  local_f8 = (undefined2 *)0x0;
  local_100 = (undefined2 *)0x0;
  local_c0[0] = L'\0';
  local_c8 = 0;
  local_c4 = 10;
  local_8c = local_80;
  local_80[0] = 0;
  local_88 = 0;
  local_84 = 10;
  local_ac = local_a0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 10;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  local_4 = 3;
  ExceptionList = &pvStack_c;
  puVar2 = FUN_005a3200(param_1,local_ec);
  if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec[0]);
  }
  if (puVar2[1] != 0) {
    puVar2 = FUN_005a3200(param_1,local_ec);
    FUN_004036d0(&local_cc,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ec[0]);
    }
    local_f4 = local_cc;
  }
  piVar5 = *(int **)((int)param_1 + 0xc0);
  if (piVar5 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar5 + 0x5c))(local_ec);
    if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ec[0]);
    }
    if (*(int *)(iVar3 + 4) != 0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0x5c))(local_ec);
      FUN_004036d0(&local_8c,(wchar_t *)*puVar2,puVar2[1]);
      if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec[0]);
      }
      local_fc = local_8c;
    }
  }
  iVar3 = *(int *)((int)param_1 + 0xd8);
  local_104 = 0;
  if ((iVar3 != 0) && (iVar6 = *(int *)(iVar3 + 100), iVar6 != *(int *)(iVar3 + 0x68))) {
    do {
      if (1 < local_104) break;
      iVar1 = *(int *)(iVar6 + 0x14);
      iVar4 = FUN_005a6470(iVar1);
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_005a6470(iVar1);
        iVar4 = (**(code **)(*piVar5 + 0x5c))(local_ec);
        if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ec[0]);
        }
        if (*(int *)(iVar4 + 4) != 0) {
          if (local_104 == 0) {
            piVar5 = (int *)FUN_005a6470(iVar1);
            puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0x5c))(apvStack_2c);
            FUN_004036d0(&local_ac,(wchar_t *)*puVar2,puVar2[1]);
            if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_2c[0]);
            }
            local_f8 = local_ac;
          }
          else {
            piVar5 = (int *)FUN_005a6470(iVar1);
            puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0x5c))(apvStack_4c);
            FUN_004036d0(&local_6c,(wchar_t *)*puVar2,puVar2[1]);
            if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_4c[0]);
            }
            local_100 = local_6c;
          }
        }
      }
      local_104 = local_104 + 1;
      iVar6 = iVar6 + 0x18;
    } while (iVar6 != *(int *)(iVar3 + 0x68));
  }
  CCinema_BuildAndApplySignTexture(local_f4,local_fc,local_f8,(int)local_100);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  if (local_c4 < 0xb) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_cc);
}


//// FUNCTION FUN_005a3b40 @ 005a3b40 ////

void __fastcall FUN_005a3b40(int param_1)

{
  FUN_005a35c0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_005a3b70 @ 005a3b70 ////

void __thiscall FUN_005a3b70(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_005a3be0 @ 005a3be0 ////

int * __fastcall FUN_005a3be0(int *param_1)

{
  FUN_005a2df0(param_1);
  return param_1;
}


//// FUNCTION FUN_005a3bf0 @ 005a3bf0 ////

void __fastcall FUN_005a3bf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a3620();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_005a3c50 @ 005a3c50 ////

float10 __thiscall FUN_005a3c50(int param_1,int *param_2)

{
  int iStack_4;
  
  if (param_2 != (int *)0x0) {
    iStack_4 = param_1;
    param_2 = (int *)(**(code **)(*param_2 + 0x80))();
    FUN_005a3b70((void *)(param_1 + 0x188),&iStack_4,(uint *)&param_2);
    if (iStack_4 != *(int *)(param_1 + 0x18c)) {
      return (float10)*(float *)(iStack_4 + 0x10);
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_005a3ca0 @ 005a3ca0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005a3ca0(void *this,float *param_1,float param_2,float param_3)

{
  float fVar1;
  bool bVar2;
  void *pvVar3;
  float *pfVar4;
  float local_98;
  float local_94;
  undefined1 local_90 [4];
  undefined **local_8c;
  int local_88;
  int *local_84;
  undefined4 local_78;
  undefined1 local_64 [4];
  undefined **local_60;
  int local_5c;
  int *local_58;
  undefined4 local_4c;
  float local_38 [2];
  int local_30;
  int *local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4cab;
  local_c = ExceptionList;
  local_94 = 0.0;
  local_98 = 0.5;
  ExceptionList = &local_c;
  pvVar3 = FUN_00857d80(local_90);
  local_4 = 0;
  pfVar4 = FUN_00857ae0(pvVar3,(float)this);
  FUN_00500630(local_38,pfVar4);
  local_4._0_1_ = 2;
  local_8c = &PTR_FUN_00d1aed0;
  if (local_84 != (int *)0x0) {
    *local_84 = local_88;
  }
  if (local_88 != 0) {
    *(int **)(local_88 + 4) = local_84;
  }
  local_78 = 0;
  local_88 = 0;
  local_84 = (int *)0x0;
  while( true ) {
    pvVar3 = FUN_00857bd0(local_64);
    local_4._0_1_ = 3;
    bVar2 = FUN_00856dd0(local_38,(int)pvVar3);
    local_4._0_1_ = 2;
    local_60 = &PTR_FUN_00d1aed0;
    if (local_58 != (int *)0x0) {
      *local_58 = local_5c;
    }
    if (local_5c != 0) {
      *(int **)(local_5c + 4) = local_58;
    }
    local_4c = 0;
    local_5c = 0;
    local_58 = (int *)0x0;
    if (!bVar2) break;
    local_94 = local_98 + local_94;
    local_98 = local_98 * local_98;
    FUN_00857260(local_38);
  }
  fVar1 = 0.0;
  if (local_94 != 0.0) {
    fVar1 = 1.0 - (_DAT_00e544c8 * param_3 + _DAT_00e544c4 * param_2) /
                  (_DAT_00e544c8 + _DAT_00e544c4);
    fVar1 = fVar1 + fVar1;
  }
  fVar1 = fVar1 * local_94;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *param_1 = fVar1;
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a3e70 @ 005a3e70 ////

int __fastcall FUN_005a3e70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a3620();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005a3ea0 @ 005a3ea0 ////

void __fastcall FUN_005a3ea0(int param_1)

{
  int *piVar1;
  int unaff_EBX;
  int iVar2;
  uint unaff_EBP;
  int iVar3;
  TypeDescriptor *pTVar4;
  TypeDescriptor *pTVar5;
  float fVar6;
  
  (**(code **)(**(int **)(param_1 + 0xf0) + 0x48))();
  iVar2 = *(int *)(*(int *)(param_1 + 0xd8) + 100);
  if (iVar2 != *(int *)(*(int *)(param_1 + 0xd8) + 0x68)) {
    do {
      fVar6 = 0.0;
      pTVar5 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar4 = &TM::CStaff::RTTI_Type_Descriptor;
      iVar3 = 0;
      piVar1 = (int *)FUN_005a6470(*(int *)(iVar2 + 0x14));
      piVar1 = (int *)FUN_00ace790(piVar1,iVar3,pTVar4,pTVar5,(int)fVar6);
      if (piVar1 != (int *)0x0) {
        iVar3 = *piVar1;
        FUN_005dd5c0(*(void **)(param_1 + 0x16c),(float *)&stack0xffffffe0);
        (**(code **)(iVar3 + 0x23c))();
        unaff_EBP = (**(code **)(*piVar1 + 0x80))();
        FUN_005a3b70((void *)(param_1 + 0x188),(undefined4 *)&stack0xfffffff4,
                     (uint *)&stack0xfffffff0);
        if (unaff_EBX == *(int *)(param_1 + 0x18c)) {
          fVar6 = 0.0;
        }
        else {
          fVar6 = *(float *)(unaff_EBX + 0x10);
        }
        if (0.0 <= fVar6) {
          if (1.0 < fVar6) {
            fVar6 = 1.0;
          }
        }
        else {
          fVar6 = 0.0;
        }
        (**(code **)(*piVar1 + 0x244))(fVar6);
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0xd8) + 0x68));
  }
  iVar2 = **(int **)(param_1 + 0xc0);
  FUN_005dd5c0(*(void **)(param_1 + 0x16c),(float *)&stack0xffffffe0);
  (**(code **)(iVar2 + 0x23c))();
  piVar1 = *(int **)(param_1 + 0xc0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x80))();
    FUN_005a3b70((void *)(param_1 + 0x188),(undefined4 *)&stack0xfffffff0,(uint *)&stack0xfffffff4);
    if (unaff_EBP != *(uint *)(param_1 + 0x18c)) {
      fVar6 = *(float *)(unaff_EBP + 0x10);
      goto LAB_005a3ffe;
    }
  }
  fVar6 = 0.0;
LAB_005a3ffe:
  if (0.0 <= fVar6) {
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    (**(code **)(*piVar1 + 0x244))(fVar6);
    return;
  }
  (**(code **)(*piVar1 + 0x244))(0);
  return;
}


//// FUNCTION FUN_005a4060 @ 005a4060 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005a4060(void *this,float *param_1)

{
  float *pfVar1;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_005dd5c0(*(void **)((int)this + 0x16c),&local_8);
  local_c = _DAT_00e544c4 * local_8;
  if (0.0 <= local_c) {
    if (1.0 < local_c) {
      local_c = 1.0;
    }
  }
  else {
    local_c = 0.0;
  }
  local_c = _DAT_00e544c8 * *(float *)((int)this + 0x110) + local_c;
  if (0.0 <= local_c) {
    if (1.0 < local_c) {
      local_c = 1.0;
    }
  }
  else {
    local_c = 0.0;
  }
  local_4 = *(float *)((int)this + 0x110);
  pfVar1 = (float *)FUN_005a3ca0(this,&local_4,local_8,local_4);
  local_c = _DAT_00e544cc * *pfVar1 + local_c;
  if (0.0 <= local_c) {
    if (1.0 < local_c) {
      local_c = 1.0;
    }
    *param_1 = local_c;
    return;
  }
  *param_1 = 0.0;
  return;
}


//// FUNCTION FUN_005a4160 @ 005a4160 ////

void __fastcall FUN_005a4160(void *param_1)

{
  int *piVar1;
  void *pvStack_c;
  
  if (*(int *)((int)param_1 + 0x130) == 0) {
    pvStack_c = param_1;
    FUN_005a4060(param_1,(float *)&pvStack_c);
    piVar1 = FUN_00460cc0(param_1);
    pvStack_c = (void *)0x5a418d;
    (**(code **)(*(int *)((int)param_1 + 0x11c) + 4))();
    *(int **)((int)param_1 + 0x130) = piVar1;
                    /* WARNING: Could not recover jumptable at 0x005a4196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)((int)param_1 + 0x11c))();
    return;
  }
  return;
}


//// FUNCTION FUN_005a41a0 @ 005a41a0 ////

void __thiscall
FUN_005a41a0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cb4cc8;
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
  piVar3 = (int *)FUN_005a3660(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_005a429b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_005a2e60(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_005a2ec0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_005a429b;
      if (piVar6 == (int *)*piVar2) {
        FUN_005a2ec0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_005a2e60(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_005a4350 @ 005a4350 ////

void __thiscall FUN_005a4350(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cb4ce8;
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
  FUN_005a2df0((int *)&param_2);
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
      goto LAB_005a44c1;
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
      piVar2 = (int *)FUN_005a2710(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_005a2770((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_005a44c1:
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
            FUN_005a2e60(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_005a2ec0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_005a2e60(this,(int)piVar5);
              break;
            }
LAB_005a4584:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_005a2ec0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_005a4584;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_005a2e60(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_005a2ec0(this,piVar5);
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


//// FUNCTION FUN_005a4610 @ 005a4610 ////

void __thiscall FUN_005a4610(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_005a41a0(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_005a27a0((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_005a41a0(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_005a46d0 @ 005a46d0 ////

void __thiscall FUN_005a46d0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_005a35c0((void *)piVar6[1]);
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
    FUN_005a4350(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_005a4790 @ 005a4790 ////

undefined4 * __thiscall FUN_005a4790(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_005a41a0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_005a41a0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_005a41a0(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_005a27a0((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_005a41a0(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_005a41a0(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_005a2df0((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_005a41a0(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_005a41a0(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_005a4610(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_005a4930 @ 005a4930 ////

uint * __thiscall FUN_005a4930(void *this,uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  uint local_8 [2];
  
  puVar4 = *(uint **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
    puVar1 = (uint *)puVar4[1];
    do {
      if (puVar1[3] < *param_1) {
        puVar2 = (uint *)puVar1[2];
      }
      else {
        puVar2 = (uint *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar4 != *(uint **)((int)this + 4)) && (puVar4[3] <= *param_1)) {
    return puVar4 + 4;
  }
  local_8[0] = *param_1;
  local_8[1] = 0;
  piVar3 = FUN_005a4790(this,&param_1,puVar4,local_8);
  return (uint *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_005a4a30 @ 005a4a30 ////

void __fastcall FUN_005a4a30(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4d60;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\AIProject.cpp";
    puVar9 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    DAT_010581d4 = 0x24;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar3 = (char *)FUN_00ace33d(0xe4f6b8);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar4 = FUN_0098b490("Title");
  if ((char)uVar4 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\AIProject.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    DAT_010581d4 = 0x25;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar6 = FUN_00ace3df((int *)(param_1 + 0x60));
    pcVar3 = (char *)FUN_00ace33d(iVar6);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PCast");
  if ((char)uVar4 != '\0') {
    FUN_00990970((int *)(param_1 + 0x60));
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\AIProject.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    DAT_010581d4 = 0x26;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar6 = FUN_00ace3df((int *)(param_1 + 0x48));
    pcVar3 = (char *)FUN_00ace33d(iVar6);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PDirector");
  if ((char)uVar4 != '\0') {
    FUN_00990970((int *)(param_1 + 0x48));
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\AIProject.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    DAT_010581d4 = 0x27;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    iVar6 = FUN_00ace3df((int *)(param_1 + 0x94));
    pcVar3 = (char *)FUN_00ace33d(iVar6);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PGenre");
  if ((char)uVar4 != '\0') {
    FUN_0044a970((int *)(param_1 + 0x94));
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\AIProject.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    DAT_010581d4 = 0x28;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    iVar6 = FUN_00ace3df((int *)(param_1 + 0x78));
    pcVar3 = (char *)FUN_00ace33d(iVar6);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PStudio");
  if ((char)uVar4 != '\0') {
    FUN_00990970((int *)(param_1 + 0x78));
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\AIProject.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    DAT_010581d4 = 0x29;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    pcVar3 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("Quality");
  if ((char)uVar4 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xac));
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\AIProject.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    DAT_010581d4 = 0x2a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
    iVar6 = FUN_00ace3df((int *)(param_1 + 0xb8));
    pcVar3 = (char *)FUN_00ace33d(iVar6);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PLeagueTableEntry");
  if ((char)uVar4 != '\0') {
    FUN_00990970((int *)(param_1 + 0xb8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\AIProject.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    DAT_010581d4 = 0x2b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    pcVar3 = (char *)FUN_00ace33d(0xe4fe18);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("ReleaseDate");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xf0),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\AIProject.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    DAT_010581d4 = 0x2c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
    pcVar3 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("ScriptQuality");
  if ((char)uVar4 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xb0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\AIProject.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    DAT_010581d4 = 0x2d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
    iVar6 = FUN_00ace3df((int *)(param_1 + 0xf4));
    pcVar3 = (char *)FUN_00ace33d(iVar6);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PSuccess");
  if ((char)uVar4 != '\0') {
    FUN_00990970((int *)(param_1 + 0xf4));
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\AIProject.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    DAT_010581d4 = 0x2e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 10;
    pcVar3 = (char *)FUN_00ace33d(0xe4fe30);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("GUID");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x90),4);
  }
  uVar4 = FUN_0098b490("Performances");
  if (((char)uVar4 != '\0') && (bVar2 = FUN_009896f0("u32"), bVar2)) {
    if (DAT_010583e0 == 0) {
      local_34 = *(undefined4 *)(param_1 + 300);
      FUN_0098a3a0(&local_34);
      local_38 = **(int **)(param_1 + 0x128);
      if ((int *)local_38 != *(int **)(param_1 + 0x128)) {
        do {
          uVar8 = local_38;
          local_30 = *(uint *)(local_38 + 0xc);
          FUN_0098a430(&local_30,4);
          FUN_0098a430((undefined4 *)(uVar8 + 0x10),4);
          FUN_005a2df0((int *)&local_38);
        } while (local_38 != *(uint *)(param_1 + 0x128));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = 0;
      FUN_005a3b40(param_1 + 0x124);
      SLVAR_LoadUint(&local_38);
      uVar8 = 0;
      if (local_38 != 0) {
        do {
          FUN_0098a430(&local_30,4);
          puVar5 = FUN_005a4930((void *)(param_1 + 0x124),&local_30);
          FUN_0098a430(puVar5,4);
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_38);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\AIProject.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    DAT_010581d4 = 0x30;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xb;
    iVar6 = FUN_00ace3df((int *)(param_1 + 0x10c));
    pcVar3 = (char *)FUN_00ace33d(iVar6);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PIncome");
  if ((char)uVar4 != '\0') {
    FUN_00990970((int *)(param_1 + 0x10c));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a55f0 @ 005a55f0 ////

void FUN_005a55f0(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104d628;
  if ((DAT_010584c8 != 0) &&
     ((uint)((int)DAT_010584cc - DAT_010584c8 >> 2) < (uint)(DAT_010584d0 - DAT_010584c8 >> 2))) {
    *DAT_010584cc = &DAT_0104d628;
    DAT_010584cc = DAT_010584cc + 1;
    return;
  }
  FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  return;
}


//// FUNCTION FUN_005a5650 @ 005a5650 ////

void __fastcall FUN_005a5650(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_005a46d0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_005a5680 @ 005a5680 ////

void __fastcall FUN_005a5680(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb4e39;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d28f14;
  param_1[0x19] = &PTR_LAB_00d28ef4;
  local_4 = 0xc;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4c])(1);
  }
  (**(code **)(param_1[0x47] + 4))();
  param_1[0x4c] = 0;
  (**(code **)param_1[0x47])();
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x36])(1);
  }
  (**(code **)(param_1[0x31] + 4))();
  param_1[0x36] = 0;
  (**(code **)param_1[0x31])();
  if ((undefined4 *)param_1[0x5b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5b])(1);
  }
  (**(code **)(param_1[0x56] + 4))();
  param_1[0x5b] = 0;
  (**(code **)param_1[0x56])();
  puVar2 = (undefined4 *)param_1[0x61];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x5c] + 4))();
    param_1[0x61] = 0;
    (**(code **)param_1[0x5c])();
  }
  if ((undefined4 *)param_1[0x4e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4e] = param_1[0x4d];
  }
  if (param_1[0x4d] != 0) {
    *(undefined4 *)(param_1[0x4d] + 4) = param_1[0x4e];
  }
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  if (*(char *)(param_1 + 0x65) == '\0') {
    if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x52] = param_1[0x51];
    }
    if (param_1[0x51] != 0) {
      *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
    }
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    DAT_0104d624 = DAT_0104d624 + -1;
  }
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_005a46d0(param_1 + 0x62,&uStack_10,*(int **)param_1[99],(int *)param_1[99]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[99]);
}


//// FUNCTION FUN_005a5bc0 @ 005a5bc0 ////

void __fastcall FUN_005a5bc0(int param_1)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  int iVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  int iVar11;
  int local_c;
  float local_8;
  uint uStack_4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xd8) + 100);
  iVar5 = 0;
  local_8 = 0.0;
  local_c = 0;
  if (iVar4 != *(int *)(*(int *)(param_1 + 0xd8) + 0x68)) {
    do {
      iVar11 = 0;
      pTVar10 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar9 = &TM::CStaff::RTTI_Type_Descriptor;
      iVar8 = 0;
      piVar2 = (int *)FUN_005a6470(*(int *)(iVar4 + 0x14));
      piVar2 = (int *)FUN_00ace790(piVar2,iVar8,pTVar9,pTVar10,iVar11);
      if (piVar2 != (int *)0x0) {
        fVar6 = FUN_005d9290((int)piVar2,param_1);
        uStack_4 = (**(code **)(*piVar2 + 0x80))();
        pfVar3 = (float *)FUN_005a4930((void *)(param_1 + 0x188),&uStack_4);
        fVar7 = FUN_005d75f0((float)fVar6);
        *pfVar3 = (float)fVar7;
        local_8 = (float)fVar6 + local_8;
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 0x18;
      local_c = iVar5;
    } while (iVar4 != *(int *)(*(int *)(param_1 + 0xd8) + 0x68));
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    fVar6 = FUN_005d9290(*(int *)(param_1 + 0xc0),param_1);
    uStack_4 = (**(code **)(**(int **)(param_1 + 0xc0) + 0x80))();
    pfVar3 = (float *)FUN_005a4930((void *)(param_1 + 0x188),&uStack_4);
    fVar7 = FUN_005d75f0((float)fVar6);
    *pfVar3 = (float)fVar7;
    local_8 = (float)fVar6 + local_8;
    local_c = local_c + 1;
  }
  fVar1 = (local_8 / (float)local_c) * *(float *)(param_1 + 0x110);
  if (0.0 <= fVar1) {
    if (fVar1 <= 1.0) {
      *(float *)(param_1 + 0x110) = fVar1;
      return;
    }
    *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}


//// FUNCTION FUN_005a5d30 @ 005a5d30 ////

int __fastcall FUN_005a5d30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a3620();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005a5d60 @ 005a5d60 ////

undefined4 * __fastcall FUN_005a5d60(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4efd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d28f14;
  param_1[0x19] = &PTR_LAB_00d28ef4;
  param_1[0x23] = param_1 + 0x26;
  *(undefined2 *)(param_1 + 0x26) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 10;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_1 + 0x2b;
  param_1[0x2b] = &PTR_FUN_00d16954;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = param_1 + 0x31;
  param_1[0x31] = &PTR_LAB_00d1f04c;
  param_1[0x36] = 0;
  param_1[0x3a] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = param_1 + 0x37;
  param_1[0x37] = &PTR_FUN_00d1e55c;
  param_1[0x3c] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = param_1 + 0x3e;
  param_1[0x3e] = &PTR_FUN_00d1a49c;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x4a] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = param_1 + 0x47;
  param_1[0x47] = &PTR_FUN_00d1aef0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x53] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  local_4._0_1_ = 9;
  FUN_0043b520(param_1 + 0x55,0.0);
  param_1[0x59] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = param_1 + 0x56;
  param_1[0x56] = &PTR_LAB_00d28e58;
  param_1[0x5b] = 0;
  param_1[0x5f] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = param_1 + 0x5c;
  param_1[0x5c] = &PTR_LAB_00d28e68;
  param_1[0x61] = 0;
  local_4._0_1_ = 0xb;
  iVar1 = FUN_005a3620();
  param_1[99] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[99] + 4) = param_1[99];
  *(undefined4 *)param_1[99] = param_1[99];
  *(undefined4 *)(param_1[99] + 8) = param_1[99];
  param_1[100] = 0;
  local_4 = CONCAT31(local_4._1_3_,0xc);
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x4f] = param_1;
  FUN_00acdb9e(0xe54438);
  iVar1 = FUN_0097dda0();
  param_1[0x50] = iVar1;
  if (DAT_00e54434 != '\0') {
    iVar1 = 0x134;
    pcVar3 = "StudioLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe54438);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    DAT_00e54434 = '\0';
  }
  param_1[0x53] = param_1;
  FUN_00acdb9e(0xe54438);
  iVar1 = FUN_0097dda0();
  param_1[0x54] = iVar1;
  if (s___AV__CP_VCProjectIncome_TM___TM_00e54410[0x23] != '\0') {
    iVar1 = 0x144;
    pcVar3 = "AllAIProjectsLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe54438);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__CP_VCProjectIncome_TM___TM_00e54410[0x23] = '\0';
  }
  iVar1 = FUN_005389b0();
  param_1[0x3d] = iVar1;
  DAT_0104d624 = DAT_0104d624 + 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005a5ff0 @ 005a5ff0 ////

undefined4 * __thiscall FUN_005a5ff0(void *this,byte param_1)

{
  FUN_005a5680(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005a6010 @ 005a6010 ////

undefined4 * FUN_005a6010(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4f1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x198);
  puVar3 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = FUN_005a5d60(puVar2);
  }
  puVar3[0x55] = DAT_00e4fa4c;
  piVar1 = puVar3 + 0x51;
  puVar3[0x52] = &DAT_0104d63c;
  *piVar1 = (int)DAT_0104d63c;
  *(int **)((int)DAT_0104d63c + 4) = piVar1;
  local_4 = 0xffffffff;
  DAT_0104d63c = piVar1;
  FUN_005a3280();
  ExceptionList = local_c;
  return puVar3;
}


//// FUNCTION FUN_005a60a0 @ 005a60a0 ////

void __fastcall FUN_005a60a0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005a60d0 @ 005a60d0 ////

void FUN_005a60d0(void)

{
  return;
}


//// FUNCTION FUN_005a60e0 @ 005a60e0 ////

void __fastcall FUN_005a60e0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005a6110 @ 005a6110 ////

void FUN_005a6110(void)

{
  return;
}


//// FUNCTION FUN_005a6130 @ 005a6130 ////

undefined4 __fastcall FUN_005a6130(int param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}


//// FUNCTION FUN_005a6140 @ 005a6140 ////

undefined4 __fastcall FUN_005a6140(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_005a6260 @ 005a6260 ////

int * __thiscall FUN_005a6260(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005a6290 @ 005a6290 ////

int * __cdecl FUN_005a6290(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_005a62d0 @ 005a62d0 ////

undefined4 * __cdecl FUN_005a62d0(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_005a63c0 @ 005a63c0 ////

void __thiscall FUN_005a63c0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0xdc);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)((int)this + 200) + 4))();
    *(undefined4 *)((int)this + 0xdc) = 0;
    (*(code *)**(undefined4 **)((int)this + 200))();
  }
  (**(code **)(*(int *)((int)this + 200) + 4))();
  *(undefined4 *)((int)this + 0xdc) = param_1;
  (*(code *)**(undefined4 **)((int)this + 200))();
  if (*(int *)((int)this + 0xdc) != 0) {
    piVar1 = (int *)(*(int *)((int)this + 0xdc) + 0x48);
    *piVar1 = *piVar1 + 1;
  }
  return;
}


//// FUNCTION FUN_005a6430 @ 005a6430 ////

undefined4 __fastcall FUN_005a6430(int param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}


//// FUNCTION FUN_005a6440 @ 005a6440 ////

void __thiscall FUN_005a6440(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x98) + 4))();
  *(undefined4 *)((int)this + 0xac) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x98))();
  return;
}


//// FUNCTION FUN_005a6470 @ 005a6470 ////

undefined4 __fastcall FUN_005a6470(int param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}


//// FUNCTION FUN_005a6480 @ 005a6480 ////

void __thiscall FUN_005a6480(void *this,undefined4 param_1)

{
  if ((0 < *(int *)((int)this + 0x88)) && (*(int *)((int)this + 0x88) < 4)) {
    (**(code **)(*(int *)((int)this + 0xb0) + 4))();
    *(undefined4 *)((int)this + 0xc4) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0xb0))();
    return;
  }
  (**(code **)(*(int *)((int)this + 0xb0) + 4))();
  *(undefined4 *)((int)this + 0xc4) = 0;
  (*(code *)**(undefined4 **)((int)this + 0xb0))();
  return;
}


//// FUNCTION FUN_005a64e0 @ 005a64e0 ////

undefined4 __fastcall FUN_005a64e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc4);
}


//// FUNCTION FUN_005a64f0 @ 005a64f0 ////

int __thiscall FUN_005a64f0(void *this,float param_1)

{
  int iVar1;
  
  if (((*(int *)((int)this + 0xac) == 0) || (*(int *)((int)this + 0xc4) == 0)) ||
     (iVar1 = *(int *)((int)this + 0xc4), param_1 <= *(float *)((int)this + 0x94))) {
    iVar1 = *(int *)((int)this + 0xac);
  }
  return iVar1;
}


//// FUNCTION FUN_005a65c0 @ 005a65c0 ////

void __cdecl FUN_005a65c0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_005a6620 @ 005a6620 ////

void __fastcall FUN_005a6620(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4f38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0xe);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x38) & (uint)param_1),param_1 + -0xe);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a66f0 @ 005a66f0 ////

void __fastcall FUN_005a66f0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4f58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0xe);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x38) & (uint)param_1),param_1 + -0xe);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a68a0 @ 005a68a0 ////

undefined4 * __thiscall FUN_005a68a0(void *this,byte param_1)

{
  FUN_0048ccf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005a68c0 @ 005a68c0 ////

void __fastcall FUN_005a68c0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb4fc0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Cast.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x15;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar2 = (char *)FUN_00ace33d(0xe4f6b8);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("Name");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Cast.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x16;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x60));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("PActor");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x60));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Cast.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x17;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x90));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("PCostume");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x90));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Cast.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x18;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("(int&)(GeneratedNameGender)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x4c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Cast.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x19;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("(int&)(Type)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x50),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Cast.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe30);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("ScriptPartID");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x54),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Cast.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("IsGeneratedName");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x48),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Cast.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("(int&)(SuggestedGender)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x58),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Cast.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x78));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("PStuntDouble");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x78));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Cast.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("RiskThreshold");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x5c));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a7190 @ 005a7190 ////

undefined1 __thiscall FUN_005a7190(void *this,int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 100);
  uVar1 = 0;
  if (iVar2 != *(int *)((int)this + 0x68)) {
    while ((*(int *)(*(int *)(iVar2 + 0x14) + 0xac) != param_1 &&
           (*(int *)(*(int *)(iVar2 + 0x14) + 0xc4) != param_1))) {
      iVar2 = iVar2 + 0x18;
      if (iVar2 == *(int *)((int)this + 0x68)) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


//// FUNCTION FUN_005a71d0 @ 005a71d0 ////

void __thiscall FUN_005a71d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)((int)this + 100);
  if (iVar2 != *(int *)((int)this + 0x68)) {
    while (iVar1 = *(int *)(iVar2 + 0x14), *(int *)(iVar1 + 0xac) != param_1) {
      if (*(int *)(iVar1 + 0xc4) == param_1) {
        piVar3 = (int *)(iVar1 + 0xb0);
        goto LAB_005a7212;
      }
      iVar2 = iVar2 + 0x18;
      if (iVar2 == *(int *)((int)this + 0x68)) {
        return;
      }
    }
    piVar3 = (int *)(iVar1 + 0x98);
LAB_005a7212:
    (**(code **)(*piVar3 + 4))();
    piVar3[5] = 0;
    (**(code **)*piVar3)();
  }
  return;
}


//// FUNCTION FUN_005a7230 @ 005a7230 ////

void __thiscall FUN_005a7230(void *this,void *param_1)

{
  uint _Count;
  uint uVar1;
  size_t sVar2;
  void *this_00;
  undefined4 *puVar3;
  int iVar4;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cb4fe3;
  local_c = ExceptionList;
  if (((*(int *)((int)this + 100) != 0) &&
      ((*(int *)((int)this + 0x68) - *(int *)((int)this + 100)) / 0x18 != 0)) &&
     (iVar4 = *(int *)((int)this + 100), ExceptionList = &local_c,
     iVar4 != *(int *)((int)this + 0x68))) {
    do {
      if (*(int *)(iVar4 + 0x14) == 0) {
        local_2c = local_20;
        local_20[0] = L'\0';
        local_28 = 0;
        local_24 = 10;
        local_4 = 0;
        _Count = FUN_00ace02d(
                             L"<phrasebook><translate>PROJECT_PROBLEM_ACTORNEEDEDFORROLE</translate><phrase key=genre>"
                             );
        if (local_24 <= _Count) {
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
          uVar1 = _Count + 0x20 >> 5;
          local_24 = uVar1 << 5;
          local_2c = _malloc(uVar1 * 0x40);
        }
        _wcsncpy(local_2c,
                 L"<phrasebook><translate>PROJECT_PROBLEM_ACTORNEEDEDFORROLE</translate><phrase key=genre>"
                 ,_Count);
        local_2c[_Count] = L'\0';
        local_28 = _Count;
        sVar2 = FUN_00ace02d(L"</phrase></phrasebook>");
        FUN_0040cae0(&local_2c,L"</phrase></phrasebook>",sVar2);
        this_00 = operator_new(0xac);
        local_4._0_1_ = 1;
        if (this_00 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_0049b2f0(this_00,&local_2c,1);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0049b940(param_1,puVar3);
        local_4 = 0xffffffff;
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != *(int *)((int)this + 0x68));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a73b0 @ 005a73b0 ////

undefined4 __thiscall FUN_005a73b0(void *this,char param_1)

{
  uint in_EAX;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 100);
  while( true ) {
    if (iVar1 == *(int *)((int)this + 0x68)) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
    in_EAX = *(uint *)(iVar1 + 0x14);
    if ((*(int *)(in_EAX + 0xac) == 0) &&
       ((((param_1 == '\0' || (in_EAX = *(uint *)(in_EAX + 0x88), in_EAX == 1)) || (in_EAX == 2)) ||
        (in_EAX == 3)))) break;
    iVar1 = iVar1 + 0x18;
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_005a7400 @ 005a7400 ////

int __fastcall FUN_005a7400(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = *(int *)(param_1 + 100); iVar2 != *(int *)(param_1 + 0x68); iVar2 = iVar2 + 0x18) {
    if (*(int *)(*(int *)(iVar2 + 0x14) + 0x88) == 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_005a7430 @ 005a7430 ////

int __fastcall FUN_005a7430(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = *(int *)(param_1 + 100); iVar2 != *(int *)(param_1 + 0x68); iVar2 = iVar2 + 0x18) {
    if ((*(int *)(*(int *)(iVar2 + 0x14) + 0x88) == 0) &&
       (*(int *)(*(int *)(iVar2 + 0x14) + 0xac) != 0)) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_005a7470 @ 005a7470 ////

int __fastcall FUN_005a7470(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = *(int *)(param_1 + 100); iVar2 != *(int *)(param_1 + 0x68); iVar2 = iVar2 + 0x18) {
    if ((*(int *)(*(int *)(iVar2 + 0x14) + 0x88) == 0) &&
       (*(int *)(*(int *)(iVar2 + 0x14) + 0xac) == 0)) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_005a7530 @ 005a7530 ////

int __fastcall FUN_005a7530(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  for (iVar3 = *(int *)(param_1 + 100); iVar3 != *(int *)(param_1 + 0x68); iVar3 = iVar3 + 0x18) {
    iVar1 = *(int *)(*(int *)(iVar3 + 0x14) + 0x88);
    if ((((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) &&
       (*(int *)(*(int *)(iVar3 + 0x14) + 0xac) == 0)) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}


//// FUNCTION FUN_005a7570 @ 005a7570 ////

int __thiscall FUN_005a7570(void *this,void *param_1)

{
  int iVar1;
  void *this_00;
  float *pfVar2;
  int iVar3;
  void *local_4;
  
  this_00 = param_1;
  if (param_1 != (void *)0x0) {
    iVar3 = *(int *)((int)this + 100);
    param_1 = (void *)0x0;
    local_4 = this;
    if (iVar3 != *(int *)((int)this + 0x68)) {
      do {
        iVar1 = *(int *)(iVar3 + 0x14);
        if ((((iVar1 != 0) && (*(int *)(iVar1 + 0xac) != 0)) && (*(int *)(iVar1 + 0xc4) == 0)) &&
           ((pfVar2 = (float *)FUN_005b60f0(this_00,(float *)&local_4,iVar1), 0.0 < *pfVar2 &&
            (((iVar1 = *(int *)(iVar1 + 0x88), iVar1 == 1 || (iVar1 == 2)) || (iVar1 == 3)))))) {
          param_1 = (void *)((int)param_1 + 1);
        }
        iVar3 = iVar3 + 0x18;
      } while (iVar3 != *(int *)((int)this + 0x68));
    }
    return (int)param_1;
  }
  return 0;
}


//// FUNCTION FUN_005a7610 @ 005a7610 ////

void __fastcall FUN_005a7610(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 100);
  if (iVar2 != *(int *)(param_1 + 0x68)) {
    do {
      uVar1 = *(uint *)(*(int *)(iVar2 + 0x14) + 0x8c);
      if (*(uint *)(param_1 + 0x70) <= uVar1) {
        *(uint *)(param_1 + 0x70) = uVar1 + 1;
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)(param_1 + 0x68));
  }
  return;
}


//// FUNCTION FUN_005a7640 @ 005a7640 ////

int __thiscall FUN_005a7640(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 100);
  iVar1 = *(int *)((int)this + 0x68);
  if (param_1 == 0) {
    for (; iVar3 != iVar1; iVar3 = iVar3 + 0x18) {
      iVar2 = *(int *)(iVar3 + 0x14);
      if ((*(int *)(iVar2 + 0x88) == 0) && (*(int *)(iVar2 + 0xac) == 0)) {
        if (param_2 == 0) {
          return iVar2;
        }
        param_2 = param_2 + -1;
      }
    }
  }
  else if (iVar3 != iVar1) {
    while( true ) {
      iVar2 = *(int *)(iVar3 + 0x14);
      if (*(int *)(iVar2 + 0xac) == param_1) {
        return iVar2;
      }
      if (*(int *)(iVar2 + 0xc4) == param_1) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == iVar1) {
        return 0;
      }
    }
    return iVar2;
  }
  return 0;
}


//// FUNCTION FUN_005a76b0 @ 005a76b0 ////

int __thiscall FUN_005a76b0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 100);
  do {
    if (iVar1 == *(int *)((int)this + 0x68)) {
      return 0;
    }
    if (*(int *)(*(int *)(iVar1 + 0x14) + 0x88) == param_1) {
      if (param_2 == 0) {
        return *(int *)(iVar1 + 0x14);
      }
      param_2 = param_2 + -1;
    }
    iVar1 = iVar1 + 0x18;
  } while( true );
}


//// FUNCTION FUN_005a76f0 @ 005a76f0 ////

undefined4 __thiscall FUN_005a76f0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 100);
  while( true ) {
    if (iVar2 == *(int *)((int)this + 0x68)) {
      return 0;
    }
    iVar1 = *(int *)(iVar2 + 0x14);
    if ((*(int *)(iVar1 + 0xac) == param_1) || (*(int *)(iVar1 + 0xc4) == param_1)) break;
    iVar2 = iVar2 + 0x18;
  }
  return *(undefined4 *)(iVar1 + 0xdc);
}


//// FUNCTION FUN_005a7730 @ 005a7730 ////

void __fastcall FUN_005a7730(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb5054;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d290bc;
  param_1[0xe] = &PTR_LAB_00d2909c;
  puVar2 = (undefined4 *)param_1[0x37];
  local_4 = 5;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x32] + 4))();
    param_1[0x37] = 0;
    (**(code **)param_1[0x32])();
  }
  param_1[0x32] = &PTR_FUN_00d18c5c;
  if ((undefined4 *)param_1[0x34] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x34] = param_1[0x33];
  }
  if (param_1[0x33] != 0) {
    *(undefined4 *)(param_1[0x33] + 4) = param_1[0x34];
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  if ((undefined4 *)param_1[0x34] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x34] = param_1[0x33];
  }
  if (param_1[0x33] != 0) {
    *(undefined4 *)(param_1[0x33] + 4) = param_1[0x34];
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x2c] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2e] = param_1[0x2d];
  }
  if (param_1[0x2d] != 0) {
    *(undefined4 *)(param_1[0x2d] + 4) = param_1[0x2e];
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2e] = param_1[0x2d];
  }
  if (param_1[0x2d] != 0) {
    *(undefined4 *)(param_1[0x2d] + 4) = param_1[0x2e];
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x26] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x28] = param_1[0x27];
  }
  if (param_1[0x27] != 0) {
    *(undefined4 *)(param_1[0x27] + 4) = param_1[0x28];
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x28] = param_1[0x27];
  }
  if (param_1[0x27] != 0) {
    *(undefined4 *)(param_1[0x27] + 4) = param_1[0x28];
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  if (10 < (uint)param_1[0x1a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a7970 @ 005a7970 ////

undefined4 * __thiscall FUN_005a7970(void *this,byte param_1)

{
  FUN_005a7730(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005a79a0 @ 005a79a0 ////

void __cdecl FUN_005a79a0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_FUN_00d1cafc;
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


//// FUNCTION FUN_005a7a10 @ 005a7a10 ////

void __cdecl FUN_005a7a10(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_FUN_00d1cafc;
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


//// FUNCTION FUN_005a7ae0 @ 005a7ae0 ////

void __cdecl FUN_005a7ae0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_FUN_00d1cafc;
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


//// FUNCTION FUN_005a7c20 @ 005a7c20 ////

void FUN_005a7c20(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_0048ccf0(param_1);
  }
  return;
}


//// FUNCTION FUN_005a7c50 @ 005a7c50 ////

void __fastcall FUN_005a7c50(int param_1)

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
    FUN_0048ccf0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005a7ca0 @ 005a7ca0 ////

undefined4 * FUN_005a7ca0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_005a7ae0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_005a7cd0 @ 005a7cd0 ////

void FUN_005a7cd0(void)

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
  puStack_8 = &LAB_00cb5068;
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


//// FUNCTION FUN_005a7d40 @ 005a7d40 ////

void __thiscall FUN_005a7d40(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_005a6290((int)param_3,*(int *)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 6) {
      FUN_0048ccf0(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_005a7da0 @ 005a7da0 ////

void __thiscall FUN_005a7da0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cb5088;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d1cafc;
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
      FUN_005a7cd0();
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
        iVar3 = FUN_004b4b40((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_005a7a10(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_005a7ae0(puVar5,param_2,(int)&local_34);
      FUN_005a7a10((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_005a7c20(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_005a7a10((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_005a7ca0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_005a65c0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_005a7a10((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_005a62d0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_005a65c0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_005a80e0 @ 005a80e0 ////

void __thiscall FUN_005a80e0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cb50a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0xaaaaaaa < param_1) {
    ExceptionList = &local_10;
    FUN_005a7cd0();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x18;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 0x18);
    local_8 = 0;
    FUN_005a79a0(*(int *)((int)this + 4),*(int *)((int)this + 8),puVar2);
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      FUN_005a7c20(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1 * 6;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_005a8240 @ 005a8240 ////

void __thiscall FUN_005a8240(void *this,uint param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb50b8;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x18;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x18;
    }
    ExceptionList = &local_c;
    FUN_005a7da0(this,*(int **)((int)this + 8),param_1 - iVar2,(int)&param_2);
  }
  else if (iVar2 != 0) {
    if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x18)) {
      ExceptionList = &local_c;
      FUN_005a7d40(this,&param_1,(int *)(iVar2 + param_1 * 0x18),*(int **)((int)this + 8));
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = param_3;
  }
  if (param_3 != 0) {
    *(int **)(param_3 + 4) = param_4;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a8320 @ 005a8320 ////

void __thiscall FUN_005a8320(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_005a8365;
    }
  }
  iVar1 = 0;
LAB_005a8365:
  FUN_005a7da0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_005a83e0 @ 005a83e0 ////

void __fastcall FUN_005a83e0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb510a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d290e4;
  param_1[0xe] = &PTR_LAB_00d290c4;
  iVar4 = param_1[0x19];
  local_4 = 2;
  if (iVar4 != param_1[0x1a]) {
    do {
      if (*(undefined4 **)(iVar4 + 0x14) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar4 + 0x14))(1);
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != param_1[0x1a]);
  }
  piVar3 = (int *)param_1[0x19];
  if (piVar3 == (int *)0x0) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    local_4 = local_4 & 0xffffff00;
    FUN_0098a1c0(param_1 + 0xe);
    local_4 = 0xffffffff;
    FUN_00526bb0(param_1);
    ExceptionList = pvStack_c;
    return;
  }
  piVar2 = (int *)param_1[0x1a];
  if (piVar3 != piVar2) {
    piVar3 = piVar3 + 2;
    do {
      piVar3[-2] = (int)&PTR_FUN_00d1cafc;
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
      piVar1 = piVar3 + 4;
      piVar3 = piVar3 + 6;
    } while (piVar1 != piVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x19]);
}


//// FUNCTION FUN_005a84f0 @ 005a84f0 ////

void __thiscall FUN_005a84f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = *(int **)((int)this + 100);
  if (piVar2 != *(int **)((int)this + 0x68)) {
    while ((undefined4 *)piVar2[5] != param_1) {
      piVar2 = piVar2 + 6;
      if (piVar2 == *(int **)((int)this + 0x68)) {
        return;
      }
    }
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)*param_1)(1);
    }
    FUN_005a6290((int)(piVar2 + 6),*(int *)((int)this + 0x68),piVar2);
    puVar1 = *(undefined4 **)((int)this + 0x68);
    for (puVar3 = puVar1 + -6; puVar3 != puVar1; puVar3 = puVar3 + 6) {
      FUN_0048ccf0(puVar3);
    }
    *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + -0x18;
    *(int *)((int)this + 0x70) = *(int *)((int)this + 0x70) + 1;
  }
  return;
}


//// FUNCTION FUN_005a8570 @ 005a8570 ////

void __thiscall FUN_005a8570(void *this,uint param_1)

{
  FUN_005a8240(this,param_1,&PTR_FUN_00d1cafc,0,(int *)0x0);
  return;
}


//// FUNCTION FUN_005a85b0 @ 005a85b0 ////

void __thiscall FUN_005a85b0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_005a7ae0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_005a8320(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_005a8a30 @ 005a8a30 ////

undefined4 * __thiscall FUN_005a8a30(void *this,byte param_1)

{
  FUN_005a83e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005a8a50 @ 005a8a50 ////

void __thiscall FUN_005a8a50(void *this,int param_1)

{
  undefined4 *this_00;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
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
  puStack_8 = &LAB_00cb51a8;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0x80) != '\0') {
    this_00 = (undefined4 *)((int)this + 0x60);
    ExceptionList = &local_c;
    bVar1 = FUN_00431270(this_00,(wchar_t *)&lpCaption_00d16918);
    if (bVar1) {
      if ((*(int *)((int)this + 0xac) != 0) &&
         (*(int *)(*(int *)((int)this + 0xac) + 0x4a0) != *(int *)((int)this + 0x84))) {
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_4._0_1_ = 1;
        local_4._1_3_ = 0;
        iVar2 = FUN_005b2770(param_1);
        puVar3 = (undefined4 *)FUN_00449b40(iVar2);
        FUN_0043a2d0(local_6c,puVar3);
        if (*(int *)(*(int *)((int)this + 0xac) + 0x4a0) == 0) {
          FUN_00401de0(&local_4c,"NAME_ROLE_MALE",0xffffffff);
          local_4 = CONCAT31(local_4._1_3_,2);
        }
        else {
          FUN_00401de0(&local_4c,"NAME_ROLE_FEMALE",0xffffffff);
          local_4 = CONCAT31(local_4._1_3_,3);
        }
        piVar4 = FUN_009b52c0((int *)local_2c,&local_4c,(int)local_6c,(int)local_5c);
        FUN_00403e70(this_00,piVar4);
        if (local_24 < 0xb) {
          if (local_44 < 0x15) {
            *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(*(int *)((int)this + 0xac) + 0x4a0);
            FUN_004063b0((int)local_6c);
            FUN_004063b0((int)local_5c);
            ExceptionList = local_c;
            return;
          }
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
    else {
      if (*(int *)((int)this + 0xac) == 0) {
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_4._0_1_ = 9;
        local_4._1_3_ = 0;
        iVar2 = FUN_005b2770(param_1);
        puVar3 = (undefined4 *)FUN_00449b40(iVar2);
        FUN_0043a2d0(local_5c,puVar3);
        local_4c = local_40;
        local_40[0] = '\0';
        local_48 = 0;
        local_44 = 0x14;
        _strncpy(local_4c,"NAME_ROLE_MALE",0xe);
        local_48 = 0xe;
        local_4c[0xe] = '\0';
        local_4 = CONCAT31(local_4._1_3_,10);
        piVar4 = FUN_009b52c0((int *)local_2c,&local_4c,(int)local_5c,(int)local_6c);
        FUN_004036d0(this_00,(wchar_t *)*piVar4,piVar4[1]);
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        *(undefined4 *)((int)this + 0x84) = 0;
        FUN_004063b0((int)local_5c);
        puVar5 = local_6c;
      }
      else {
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_4._0_1_ = 5;
        local_4._1_3_ = 0;
        iVar2 = FUN_005b2770(param_1);
        puVar3 = (undefined4 *)FUN_00449b40(iVar2);
        FUN_0043a2d0(local_6c,puVar3);
        local_48 = 0;
        local_40[0] = '\0';
        local_44 = 0x14;
        if (*(int *)(*(int *)((int)this + 0xac) + 0x4a0) == 0) {
          local_4c = local_40;
          _strncpy(local_40,"NAME_ROLE_MALE",0xe);
          local_48 = 0xe;
          local_4c[0xe] = '\0';
          local_4 = CONCAT31(local_4._1_3_,6);
        }
        else {
          local_4c = local_40;
          _strncpy(local_40,"NAME_ROLE_FEMALE",0x10);
          local_48 = 0x10;
          local_4c[0x10] = '\0';
          local_4 = CONCAT31(local_4._1_3_,7);
        }
        piVar4 = FUN_009b52c0((int *)local_2c,&local_4c,(int)local_6c,(int)local_5c);
        FUN_004036d0(this_00,(wchar_t *)*piVar4,piVar4[1]);
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(*(int *)((int)this + 0xac) + 0x4a0);
        FUN_004063b0((int)local_6c);
        puVar5 = local_5c;
      }
      FUN_004063b0((int)puVar5);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a8e00 @ 005a8e00 ////

void __thiscall FUN_005a8e00(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 100);
  if (iVar1 != *(int *)((int)this + 0x68)) {
    do {
      FUN_005a8a50(*(void **)(iVar1 + 0x14),param_1);
      iVar1 = iVar1 + 0x18;
    } while (iVar1 != *(int *)((int)this + 0x68));
  }
  return;
}


//// FUNCTION FUN_005a8e30 @ 005a8e30 ////

undefined4 * __fastcall FUN_005a8e30(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb51c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  param_1[0xe] = &PTR_LAB_00d2909c;
  *param_1 = &PTR_FUN_00d290bc;
  param_1[0x19] = 0;
  param_1[0x1a] = 10;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x18] = param_1 + 0x1b;
  param_1[0x25] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = &PTR_FUN_00d18c4c;
  param_1[0x2b] = 0;
  param_1[0x29] = param_1 + 0x26;
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = &PTR_FUN_00d18c4c;
  param_1[0x31] = 0;
  param_1[0x2f] = param_1 + 0x2c;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = param_1 + 0x32;
  param_1[0x32] = &PTR_FUN_00d18c5c;
  param_1[0x37] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 2;
  param_1[0x21] = 2;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x18,(wchar_t *)&lpCaption_00d16918,uVar1);
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005a8f50 @ 005a8f50 ////

undefined4 * __thiscall FUN_005a8f50(void *this,undefined4 param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb51e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x38) = &PTR_LAB_00d2909c;
  *(undefined ***)this = &PTR_FUN_00d290bc;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 10;
  *(undefined2 *)((int)this + 0x6c) = 0;
  *(int *)((int)this + 0x60) = (int)this + 0x6c;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined ***)((int)this + 0x98) = &PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(int *)((int)this + 0xa4) = (int)this + 0x98;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 **)((int)this + 0xbc) = (undefined4 *)((int)this + 0xb0);
  *(undefined4 *)((int)this + 0xb0) = &PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 **)((int)this + 0xd4) = (undefined4 *)((int)this + 200);
  *(undefined4 *)((int)this + 200) = &PTR_FUN_00d18c5c;
  *(undefined4 *)((int)this + 0xdc) = 0;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((int *)((int)this + 0x60),(wchar_t *)&lpCaption_00d16918,uVar1);
  *(undefined4 *)((int)this + 0x8c) = param_1;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x90) = 2;
  *(undefined4 *)((int)this + 0x84) = 2;
  *(undefined1 *)((int)this + 0x80) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005a9070 @ 005a9070 ////

undefined4 * __fastcall FUN_005a9070(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb521e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d290e4;
  param_1[0xe] = &PTR_LAB_00d290c4;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x1c] = 1;
  FUN_005a80e0(param_1 + 0x18,0xc);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005a90f0 @ 005a90f0 ////

undefined4 * __thiscall FUN_005a90f0(void *this,undefined4 param_1,undefined4 param_2)

{
  void *this_00;
  undefined4 *puVar1;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  undefined4 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5243;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0xe0);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_005a8f50(this_00,*(undefined4 *)((int)this + 0x70));
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar1[0x26] + 4))();
  puVar1[0x2b] = param_1;
  (**(code **)puVar1[0x26])();
  puVar1[0x22] = param_2;
  piStack_1c = puVar1 + 6;
  pppuStack_18 = &ppuStack_24;
  ppuStack_24 = &PTR_FUN_00d1cafc;
  iStack_20 = *piStack_1c;
  *(int **)(*piStack_1c + 4) = &iStack_20;
  *piStack_1c = (int)&iStack_20;
  local_4 = 1;
  puStack_10 = puVar1;
  FUN_005a85b0((void *)((int)this + 0x60),(int)&ppuStack_24);
  if (piStack_1c != (int *)0x0) {
    *piStack_1c = iStack_20;
  }
  if (iStack_20 != 0) {
    *(int **)(iStack_20 + 4) = piStack_1c;
  }
  *(int *)((int)this + 0x70) = *(int *)((int)this + 0x70) + 1;
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_005a91f0 @ 005a91f0 ////

void __thiscall FUN_005a91f0(void *this,int param_1,int param_2)

{
  int iVar1;
  void *this_00;
  undefined4 *this_01;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  undefined4 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5263;
  local_c = ExceptionList;
  iVar1 = *(int *)((int)this + 100);
  if (iVar1 != *(int *)((int)this + 0x68)) {
    do {
      if (*(int *)((int)*(void **)(iVar1 + 0x14) + 0xac) == param_1) {
        ExceptionList = &local_c;
        FUN_005a63c0(*(void **)(iVar1 + 0x14),param_2);
        ExceptionList = local_c;
        return;
      }
      iVar1 = iVar1 + 0x18;
    } while (iVar1 != *(int *)((int)this + 0x68));
  }
  this_01 = (undefined4 *)0x0;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    this_00 = operator_new(0xe0);
    local_4 = 0;
    if (this_00 != (void *)0x0) {
      this_01 = FUN_005a8f50(this_00,*(undefined4 *)((int)this + 0x70));
    }
    local_4 = 0xffffffff;
    (**(code **)(this_01[0x26] + 4))();
    this_01[0x2b] = param_1;
    (**(code **)this_01[0x26])();
    FUN_005a63c0(this_01,param_2);
    pppuStack_18 = &ppuStack_24;
    iStack_20 = 0;
    piStack_1c = (int *)0x0;
    ppuStack_24 = &PTR_FUN_00d1cafc;
    if (this_01 != (undefined4 *)0x0) {
      piStack_1c = this_01 + 6;
      iStack_20 = *piStack_1c;
      *(int **)(*piStack_1c + 4) = &iStack_20;
      *piStack_1c = (int)&iStack_20;
    }
    local_4 = 1;
    puStack_10 = this_01;
    FUN_005a85b0((void *)((int)this + 0x60),(int)&ppuStack_24);
    if (piStack_1c != (int *)0x0) {
      *piStack_1c = iStack_20;
    }
    if (iStack_20 != 0) {
      *(int **)(iStack_20 + 4) = piStack_1c;
    }
    *(int *)((int)this + 0x70) = *(int *)((int)this + 0x70) + 1;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a9340 @ 005a9340 ////

void __fastcall FUN_005a9340(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005a9370 @ 005a9370 ////

void FUN_005a9370(void)

{
  return;
}


//// FUNCTION FUN_005a93c0 @ 005a93c0 ////

undefined4 __thiscall FUN_005a93c0(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 * 0x20 + 100 + (int)this) != 0) {
    uVar1 = FUN_009601d0((undefined4 *)((param_1 + 3) * 0x20 + (int)this));
  }
  return uVar1;
}


//// FUNCTION FUN_005a93f0 @ 005a93f0 ////

void __fastcall FUN_005a93f0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5278;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0xe);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x38) & (uint)param_1),param_1 + -0xe);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a9500 @ 005a9500 ////

void __fastcall FUN_005a9500(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5298;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"tech_sound",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  piVar1 = FUN_00960730(&local_2c);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
    pcVar3 = "";
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))();
    uVar4 = puVar2[1];
    pcVar3 = (char *)*puVar2;
  }
  FUN_004015d0((void *)(param_1 + 0xa0),pcVar3,uVar4);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a95b0 @ 005a95b0 ////

void __fastcall FUN_005a95b0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb52b8;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"tech_camera",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4 = 0;
  piVar1 = FUN_00960730(&local_2c);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
    pcVar3 = "";
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))();
    uVar4 = puVar2[1];
    pcVar3 = (char *)*puVar2;
  }
  FUN_004015d0((void *)(param_1 + 0x60),pcVar3,uVar4);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a9660 @ 005a9660 ////

void __fastcall FUN_005a9660(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb52f8;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"tech_camera",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4 = 0;
  piVar1 = FUN_00960730(&local_2c);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
    pcVar3 = "";
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))();
    uVar4 = puVar2[1];
    pcVar3 = (char *)*puVar2;
  }
  FUN_004015d0((void *)(param_1 + 0x60),pcVar3,uVar4);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"tech_rig",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4 = 1;
  piVar1 = FUN_00960730(&local_2c);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
    pcVar3 = "";
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))();
    uVar4 = puVar2[1];
    pcVar3 = (char *)*puVar2;
  }
  FUN_004015d0((void *)(param_1 + 0x80),pcVar3,uVar4);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"tech_sound",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 2;
  piVar1 = FUN_00960730(&local_2c);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
    pcVar3 = "";
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))();
    uVar4 = puVar2[1];
    pcVar3 = (char *)*puVar2;
  }
  FUN_004015d0((void *)(param_1 + 0xa0),pcVar3,uVar4);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"tech_filmsize",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 3;
  piVar1 = FUN_00960730(&local_2c);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
    pcVar3 = "";
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))();
    uVar4 = puVar2[1];
    pcVar3 = (char *)*puVar2;
  }
  FUN_004015d0((void *)(param_1 + 0xc0),pcVar3,uVar4);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"tech_filmstock",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = 4;
  piVar1 = FUN_00960730(&local_2c);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
    pcVar3 = "";
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))();
    uVar4 = puVar2[1];
    pcVar3 = (char *)*puVar2;
  }
  FUN_004015d0((void *)(param_1 + 0xe0),pcVar3,uVar4);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a9920 @ 005a9920 ////

void __thiscall FUN_005a9920(void *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))();
  FUN_004015d0((void *)((param_1 + 3) * 0x20 + (int)this),(char *)*puVar1,puVar1[1]);
  return;
}


//// FUNCTION FUN_005a9950 @ 005a9950 ////

void __fastcall FUN_005a9950(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *local_38;
  int local_34;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5318;
  local_c = ExceptionList;
  local_38 = (undefined4 *)(param_1 + 0x28);
  local_34 = 5;
  ExceptionList = &local_c;
  do {
    if (DAT_00e67469 == '\0') {
      pcVar5 = "C:\\movies\\dev\\TheMovies\\Equipment.cpp";
      puVar6 = &DAT_010581d8;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      local_2c = local_20;
      *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
      DAT_010581d4 = 0x13;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"SLVAR CALLED: ",0xe);
      local_28 = 0xe;
      local_2c[0xe] = '\0';
      local_4 = 0;
      pcVar2 = (char *)FUN_00ace33d(0xe4fcd0);
      pcVar5 = pcVar2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
      FUN_00989710();
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
    uVar3 = FUN_0098b490("Techs[x]");
    if ((char)uVar3 != '\0') {
      FUN_0098c550(local_38);
    }
    local_38 = local_38 + 8;
    local_34 = local_34 + -1;
    if (local_34 == 0) {
      FUN_00989780();
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_005a9aa0 @ 005a9aa0 ////

void __fastcall FUN_005a9aa0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb535f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d291c0;
  param_1[0xe] = &PTR_LAB_00d291a0;
  local_4 = 1;
  param_1[0x40] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x42] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x42] = param_1[0x41];
  }
  if (param_1[0x41] != 0) {
    *(undefined4 *)(param_1[0x41] + 4) = param_1[0x42];
  }
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  if ((undefined4 *)param_1[0x42] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x42] = param_1[0x41];
  }
  if (param_1[0x41] != 0) {
    *(undefined4 *)(param_1[0x41] + 4) = param_1[0x42];
  }
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x18,0x20,5,FUN_00401490);
  local_4 = local_4 & 0xffffff00;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a9ba0 @ 005a9ba0 ////

undefined4 * __thiscall FUN_005a9ba0(void *this,byte param_1)

{
  FUN_005a9aa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005a9bc0 @ 005a9bc0 ////

undefined4 * __fastcall FUN_005a9bc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5383;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_00d291c0;
  param_1[0xe] = &PTR_LAB_00d291a0;
  _eh_vector_constructor_iterator_(param_1 + 0x18,0x20,5,FUN_00401dc0,FUN_00401490);
  param_1[0x43] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x43] = param_1 + 0x40;
  param_1[0x40] = &PTR_FUN_00d18c3c;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005a9c60 @ 005a9c60 ////

undefined4 * __cdecl FUN_005a9c60(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb539b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x118);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005a9bc0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_005a9660((int)puVar2);
  (**(code **)(puVar2[0x40] + 4))();
  puVar2[0x45] = param_1;
  (**(code **)puVar2[0x40])();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_005a9ce0 @ 005a9ce0 ////

void __fastcall FUN_005a9ce0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x14));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005a9d70 @ 005a9d70 ////

void __thiscall FUN_005a9d70(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x78) + 4))();
  *(undefined4 *)((int)this + 0x8c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x78))();
  return;
}


//// FUNCTION FUN_005a9d90 @ 005a9d90 ////

undefined4 * __thiscall FUN_005a9d90(void *this,undefined4 *param_1)

{
  FUN_009b5030(param_1,(undefined4 *)((int)this + 0x94));
  return param_1;
}


//// FUNCTION FUN_005a9dc0 @ 005a9dc0 ////

void __thiscall FUN_005a9dc0(void *this,void *param_1)

{
  void *this_00;
  
  this_00 = (void *)FUN_005b2220(*(int *)((int)this + 0x8c));
  FUN_005a7230(this_00,param_1);
  return;
}


//// FUNCTION FUN_005a9df0 @ 005a9df0 ////

void __fastcall FUN_005a9df0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb53b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x14);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x50) & (uint)param_1),param_1 + -0x14);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005a9ec0 @ 005a9ec0 ////

void __thiscall FUN_005a9ec0(void *this,void *param_1)

{
  undefined4 *puVar1;
  void *this_00;
  uint uVar2;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb53f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_0045f620(*(void **)((int)this + 0x8c),&local_2c);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (puVar1[1] == 0) {
    this_00 = operator_new(0xac);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar2 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_NOTITLE</translate>");
      FUN_004036d0(&local_2c,L"<translate>PROJECT_PROBLEM_NOTITLE</translate>",uVar2);
      local_4 = CONCAT31(local_4._1_3_,1);
      puVar1 = FUN_0049b2f0(this_00,&local_2c,1);
    }
    local_4 = 2;
    FUN_0049b940(param_1,puVar1);
    if ((this_00 != (void *)0x0) && (10 < local_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005a9fd0 @ 005a9fd0 ////

void __thiscall FUN_005a9fd0(void *this,void *param_1)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  undefined4 *puVar3;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5424;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005b2780(*(int *)((int)this + 0x8c));
  if (iVar1 == 0) {
    this_00 = operator_new(0xac);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar2 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_NODIRECTOR</translate>");
      FUN_004036d0(&local_2c,L"<translate>PROJECT_PROBLEM_NODIRECTOR</translate>",uVar2);
      local_4 = CONCAT31(local_4._1_3_,1);
      puVar3 = FUN_0049b2f0(this_00,&local_2c,1);
    }
    local_4 = 2;
    FUN_0049b940(param_1,puVar3);
    if ((this_00 != (void *)0x0) && (10 < local_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005aa0b0 @ 005aa0b0 ////

void __thiscall FUN_005aa0b0(void *this,void *param_1)

{
  bool bVar1;
  bool bVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5478;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(*(int *)((int)this + 0x8c) + 0xac) == *(int *)((int)this + 0x8c) + 0xb8) {
    ExceptionList = &local_c;
    pvVar3 = operator_new(0xac);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar4 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_NOSHOTSDEFINED</translate>");
      FUN_004036d0(&local_2c,L"<translate>PROJECT_PROBLEM_NOSHOTSDEFINED</translate>",uVar4);
      local_4 = CONCAT31(local_4._1_3_,1);
      puVar5 = FUN_0049b2f0(pvVar3,&local_2c,1);
    }
    local_4 = 2;
    FUN_0049b940(param_1,puVar5);
    local_4 = 0xffffffff;
    if ((pvVar3 != (void *)0x0) && (10 < local_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  bVar1 = false;
  local_4 = 0xffffffff;
  iVar8 = *(int *)(*(int *)((int)this + 0x8c) + 0xac);
  if (iVar8 == *(int *)((int)this + 0x8c) + 0xb8) {
    ExceptionList = local_c;
    return;
  }
  do {
    iVar6 = FUN_004de100(*(int *)(iVar8 + 8));
    iVar6 = *(int *)(iVar6 + 8);
    iVar7 = FUN_004de100(*(int *)(iVar8 + 8));
    if (iVar6 != iVar7 + 0x14) {
      do {
        bVar2 = FUN_0048c9a0(*(int *)(iVar6 + 8));
        if (!bVar2) {
          pvVar3 = operator_new(0xac);
          local_4 = 3;
          if (pvVar3 == (void *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            local_4c = local_40;
            local_40[0] = L'\0';
            local_48 = 0;
            local_44 = 10;
            uVar4 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_SHOTSMISSINGACTORS</translate>");
            if (local_44 <= uVar4) {
              if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
                _free(local_4c);
              }
              local_44 = uVar4 + 0x20 & 0xffffffe0;
              local_4c = _malloc(local_44 * 2);
            }
            _wcsncpy(local_4c,L"<translate>PROJECT_PROBLEM_SHOTSMISSINGACTORS</translate>",uVar4);
            local_4c[uVar4] = L'\0';
            bVar1 = true;
            local_4 = CONCAT31(local_4._1_3_,4);
            local_48 = uVar4;
            puVar5 = FUN_0049b2f0(pvVar3,&local_4c,1);
          }
          local_4 = 5;
          FUN_0049b940(param_1,puVar5);
          if (!bVar1) {
            ExceptionList = local_c;
            return;
          }
          if (local_44 < 0xb) {
            ExceptionList = local_c;
            return;
          }
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        iVar6 = *(int *)(iVar6 + 4);
        iVar7 = FUN_004de100(*(int *)(iVar8 + 8));
      } while (iVar6 != iVar7 + 0x14);
    }
    iVar8 = *(int *)(iVar8 + 4);
    if (iVar8 == *(int *)((int)this + 0x8c) + 0xb8) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_005aa320 @ 005aa320 ////

void __thiscall FUN_005aa320(void *this,void *param_1)

{
  bool bVar1;
  void *this_00;
  uint uVar2;
  undefined4 *puVar3;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb54b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = FUN_005bacd0(*(int *)((int)this + 0x8c));
  if (!bVar1) {
    this_00 = operator_new(0xac);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar2 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_CREWNEEDED</translate>");
      FUN_004036d0(&local_2c,L"<translate>PROJECT_PROBLEM_CREWNEEDED</translate>",uVar2);
      local_4 = CONCAT31(local_4._1_3_,1);
      puVar3 = FUN_0049b2f0(this_00,&local_2c,1);
    }
    local_4 = 2;
    FUN_0049b940(param_1,puVar3);
    if ((this_00 != (void *)0x0) && (10 < local_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005aa400 @ 005aa400 ////

void __fastcall FUN_005aa400(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb54d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhaseBase.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x16;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x28));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("PProject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhaseBase.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x17;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("(int&)(ID)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x40),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005aa600 @ 005aa600 ////

undefined4 * __fastcall FUN_005aa600(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb54e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x14);
  *param_1 = &PTR_FUN_00d2944c;
  param_1[0x14] = &PTR_LAB_00d29428;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = param_1 + 0x1e;
  param_1[0x1e] = &PTR_FUN_00d18c3c;
  param_1[0x23] = 0;
  param_1[0x25] = param_1 + 0x28;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x14;
  param_1[0x24] = 0;
  FUN_004015d0(param_1 + 0x25,"project_phase_none",0x12);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005aa6b0 @ 005aa6b0 ////

undefined4 * __thiscall FUN_005aa6b0(void *this,byte param_1)

{
  FUN_005aa6d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005aa6d0 @ 005aa6d0 ////

void __fastcall FUN_005aa6d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb5508;
  local_c = ExceptionList;
  local_4 = 0;
  if (0x14 < (uint)param_1[0x27]) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x25]);
  }
  ExceptionList = &local_c;
  param_1[0x1e] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_1 + 0x14;
  }
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_0053d4f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005aa7a0 @ 005aa7a0 ////

void __fastcall FUN_005aa7a0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x14));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005aa7e0 @ 005aa7e0 ////

void FUN_005aa7e0(void)

{
  return;
}


//// FUNCTION FUN_005aa820 @ 005aa820 ////

void __fastcall FUN_005aa820(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x8c) + 0x2cc) & 1) != 0) {
    uVar1 = FUN_0043b6e0((void *)(*(int *)(param_1 + 0x8c) + 0x2c8),(float *)&DAT_00e4fa4c);
    if ((char)uVar1 != '\0') {
      FUN_00470a70(DAT_0104917c,*(undefined4 *)(param_1 + 0x8c),0x80000aa7,0,0);
    }
  }
  return;
}


//// FUNCTION FUN_005aa8e0 @ 005aa8e0 ////

void __fastcall FUN_005aa8e0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5528;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x14);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x50) & (uint)param_1),param_1 + -0x14);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005aa9b0 @ 005aa9b0 ////

undefined1 __fastcall FUN_005aa9b0(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  void *local_20 [2];
  uint local_18;
  
  bVar3 = false;
  if (*(void **)(param_1 + 0x8c) != (void *)0x0) {
    puVar1 = FUN_0045f620(*(void **)(param_1 + 0x8c),local_20);
    bVar3 = true;
    if ((puVar1[1] != 0) &&
       (*(int *)(*(int *)(param_1 + 0x8c) + 0xac) != *(int *)(param_1 + 0x8c) + 0xb8)) {
      uVar2 = 1;
      goto LAB_005aa9fb;
    }
  }
  uVar2 = 0;
LAB_005aa9fb:
  if ((bVar3) && (10 < local_18)) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return uVar2;
}


//// FUNCTION FUN_005aaa20 @ 005aaa20 ////

undefined4 * __fastcall FUN_005aaa20(undefined4 *param_1)

{
  FUN_005aa600(param_1);
  *param_1 = &PTR_FUN_00d294b4;
  param_1[0x14] = &PTR_LAB_00d29490;
  param_1[0x24] = 3;
  FUN_004015d0(param_1 + 0x25,"project_phase_design",0x14);
  return param_1;
}


//// FUNCTION FUN_005aaa70 @ 005aaa70 ////

undefined4 * __thiscall FUN_005aaa70(void *this,byte param_1)

{
  thunk_FUN_005aa6d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005aaaa0 @ 005aaaa0 ////

int * __cdecl FUN_005aaaa0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb554b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0xb4);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_005aa600(piVar1);
    *piVar1 = (int)&PTR_FUN_00d294b4;
    piVar1[0x14] = (int)&PTR_LAB_00d29490;
    piVar1[0x24] = 3;
    FUN_004015d0(piVar1 + 0x25,"project_phase_design",0x14);
    piVar2 = piVar1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0xc))(param_1);
  ExceptionList = piVar1;
  return piVar2;
}


//// FUNCTION FUN_005aab30 @ 005aab30 ////

void __fastcall FUN_005aab30(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x14));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005aab70 @ 005aab70 ////

void FUN_005aab70(void)

{
  return;
}


//// FUNCTION FUN_005aabc0 @ 005aabc0 ////

void __fastcall FUN_005aabc0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x8c) + 0xa0);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      iVar3 = *(int *)(param_1 + 0x8c);
      (**(code **)(*(int *)(iVar3 + 0x8c) + 4))();
      *(undefined4 *)(iVar3 + 0xa0) = 0;
      (*(code *)**(undefined4 **)(iVar3 + 0x8c))();
    }
    FUN_005bad80(*(int *)(param_1 + 0x8c));
    return;
  }
  return;
}


//// FUNCTION FUN_005aac20 @ 005aac20 ////

void __thiscall FUN_005aac20(void *this,void *param_1)

{
  FUN_005a9d70(this,param_1);
  FUN_005aabc0((int)this);
  FUN_005b6fb0((int)param_1);
  FUN_005baef0(param_1);
  return;
}


//// FUNCTION FUN_005aac50 @ 005aac50 ////

void __fastcall FUN_005aac50(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_4 [4];
  
  iVar2 = FUN_005b25f0(param_1[0x23]);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x20))(local_4);
    uVar1 = *puVar3;
    iVar2 = FUN_005b25f0(param_1[0x23]);
    *(undefined4 *)(iVar2 + 0xd8) = uVar1;
  }
  FUN_005b0eb0(param_1[0x23]);
  FUN_005af7c0((int *)param_1[0x23]);
  return;
}


//// FUNCTION FUN_005aacd0 @ 005aacd0 ////

undefined4 * __thiscall FUN_005aacd0(void *this,undefined4 *param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 0x8c) != 0) {
    iVar1 = FUN_005b2b80(*(int *)((int)this + 0x8c));
    if (iVar1 != 0) {
      puVar2 = param_1;
      this_00 = (void *)FUN_005b2b80(*(int *)((int)this + 0x8c));
      FUN_005d7980(this_00,puVar2);
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}


//// FUNCTION FUN_005aad20 @ 005aad20 ////

void __fastcall FUN_005aad20(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5568;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x14);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x50) & (uint)param_1),param_1 + -0x14);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005aadf0 @ 005aadf0 ////

undefined4 * __fastcall FUN_005aadf0(undefined4 *param_1)

{
  FUN_005aa600(param_1);
  *param_1 = &PTR_FUN_00d29534;
  param_1[0x14] = &PTR_LAB_00d29510;
  param_1[0x24] = 6;
  FUN_004015d0(param_1 + 0x25,"project_phase_postproduction",0x1c);
  return param_1;
}


//// FUNCTION FUN_005aae40 @ 005aae40 ////

undefined4 * __thiscall FUN_005aae40(void *this,byte param_1)

{
  thunk_FUN_005aa6d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005aae70 @ 005aae70 ////

int * __cdecl FUN_005aae70(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb558b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0xb4);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_005aa600(piVar1);
    *piVar1 = (int)&PTR_FUN_00d29534;
    piVar1[0x14] = (int)&PTR_LAB_00d29510;
    piVar1[0x24] = 6;
    FUN_004015d0(piVar1 + 0x25,"project_phase_postproduction",0x1c);
    piVar2 = piVar1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0xc))(param_1);
  ExceptionList = piVar1;
  return piVar2;
}


//// FUNCTION FUN_005aaf30 @ 005aaf30 ////

void __fastcall FUN_005aaf30(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x14));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005aaf60 @ 005aaf60 ////

void FUN_005aaf60(void)

{
  return;
}


//// FUNCTION FUN_005aaf70 @ 005aaf70 ////

int * __thiscall FUN_005aaf70(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005aaff0 @ 005aaff0 ////

uint __fastcall FUN_005aaff0(int param_1)

{
  uint in_EAX;
  float *pfVar1;
  int local_4;
  
  if (*(void **)(param_1 + 0x8c) != (void *)0x0) {
    local_4 = param_1;
    in_EAX = FUN_005b20f0(*(void **)(param_1 + 0x8c),'\x01');
    if ((char)in_EAX != '\0') {
      pfVar1 = (float *)FUN_005b27c0(*(void **)(param_1 + 0x8c),&local_4);
      if (DAT_00e54464 <= *pfVar1) {
        return 1;
      }
      return 0;
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_005ab040 @ 005ab040 ////

void __fastcall FUN_005ab040(int param_1)

{
  FUN_005b0fd0(*(void **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xcc));
  if (*(int **)(param_1 + 200) != (int *)0x0) {
    CFacilityPreProduction_ReleaseAllRoomAssignments(*(int **)(param_1 + 200));
  }
  FUN_005b2710(*(int *)(param_1 + 0x8c));
  FUN_005b0860(*(undefined4 *)(param_1 + 0x8c));
  return;
}


//// FUNCTION FUN_005ab190 @ 005ab190 ////

void __thiscall FUN_005ab190(void *this,float *param_1)

{
  float fVar1;
  float *pfVar2;
  undefined4 local_4;
  
  fVar1 = DAT_00e54464;
  pfVar2 = (float *)FUN_005b27c0(*(void **)((int)this + 0x8c),&local_4);
  fVar1 = *pfVar2 / fVar1;
  if (fVar1 < 0.0) {
LAB_005ab1e6:
    *param_1 = 0.0;
    return;
  }
  if (fVar1 <= 1.0) {
    if (fVar1 < 0.0) goto LAB_005ab1e6;
    if (fVar1 <= 1.0) goto LAB_005ab210;
  }
  fVar1 = 1.0;
LAB_005ab210:
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_005ab220 @ 005ab220 ////

void __cdecl FUN_005ab220(undefined4 *param_1)

{
  *param_1 = DAT_00e54460;
  return;
}


//// FUNCTION FUN_005ab230 @ 005ab230 ////

void __cdecl FUN_005ab230(undefined4 *param_1)

{
  *param_1 = DAT_00e54464;
  return;
}


//// FUNCTION FUN_005ab290 @ 005ab290 ////

void __fastcall FUN_005ab290(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb55a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x14);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x50) & (uint)param_1),param_1 + -0x14);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005ab360 @ 005ab360 ////

void __fastcall FUN_005ab360(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5610;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhasePreProduction.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 100));
    pcVar2 = (char *)FUN_00ace33d(iVar4);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("PFacility");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 100));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhasePreProduction.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe30);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("TicksInUse");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x7c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhasePreProduction.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("DayOfNextActorTannoy");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x80),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhasePreProduction.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x30;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("DayOfNextDirectorTannoy");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x84),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhasePreProduction.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x31;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("DayOfNextCrewTannoy");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x88),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhasePreProduction.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x32;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("DayOfNextExtrasTannoy");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x8c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhasePreProduction.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x33;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("DayOfNextCastingTannoy");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x90),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhasePreProduction.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x34;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("FirstTimeThrough");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x9c),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhasePreProduction.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x35;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("DesireSwitchCount");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x98),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhasePreProduction.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x36;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("DayOfNextStuntMenTannoy");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x94),4);
  }
  FUN_005aa400(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005abd10 @ 005abd10 ////

void __fastcall FUN_005abd10(int param_1)

{
  char *pcVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  void *this;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  char **ppcVar9;
  int iVar10;
  char cVar11;
  char *local_a4;
  undefined4 local_a0;
  uint local_9c;
  char local_98 [23];
  char local_81;
  int local_80;
  char local_79;
  char *local_78;
  undefined4 local_74;
  uint local_70;
  char local_6c [20];
  int local_58;
  uint local_54;
  int local_50;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb573e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar8 = FUN_0043b570();
  local_80 = (int)uVar8;
  iVar4 = FUN_005b2220(*(int *)(param_1 + 0x8c));
  local_58 = FUN_005a7530(iVar4);
  iVar4 = FUN_005b2220(*(int *)(param_1 + 0x8c));
  local_54 = FUN_005a7470(iVar4);
  local_50 = 0;
  uVar3 = FUN_005b60b0(*(int *)(param_1 + 0x8c));
  if ((char)uVar3 != '\0') {
    pvVar5 = *(void **)(param_1 + 0x8c);
    this = (void *)FUN_005b2220((int)pvVar5);
    local_50 = FUN_005a7570(this,pvVar5);
  }
  cVar11 = '\x01';
  pvVar5 = (void *)FUN_005b2220(*(int *)(param_1 + 0x8c));
  uVar6 = FUN_005a73b0(pvVar5,cVar11);
  local_79 = (char)uVar6;
  iVar4 = FUN_005b2780(*(int *)(param_1 + 0x8c));
  local_81 = iVar4 != 0;
  if ((*(char *)(param_1 + 0xf5) != '\0') && (local_54 == 0)) {
    local_78 = local_6c;
    local_6c[0] = '\0';
    local_74 = 0;
    local_70 = 0x20;
    local_78 = _malloc(0x20);
    _strncpy(local_78,"TANNOY_CASTING_NOEXTRAS",0x17);
    local_74 = 0x17;
    local_78[0x17] = '\0';
    ppcVar9 = &local_78;
    iVar4 = 2;
    local_4 = 0;
    pvVar5 = (void *)FUN_004f3b20();
    FUN_004f6e10(pvVar5,iVar4,ppcVar9);
    local_4 = 0xffffffff;
    if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
      _free(local_78);
    }
    *(undefined1 *)(param_1 + 0xf5) = 0;
  }
  if ((*(char *)(param_1 + 0xf6) != '\0') && (local_54 == 0)) {
    local_78 = local_6c;
    local_6c[0] = '\0';
    local_74 = 0;
    local_70 = 0x20;
    local_78 = _malloc(0x20);
    _strncpy(local_78,"TANNOY_CASTING_EXTRASNEEDED",0x1b);
    local_74 = 0x1b;
    local_78[0x1b] = '\0';
    ppcVar9 = &local_78;
    iVar4 = 2;
    local_4 = 1;
    pvVar5 = (void *)FUN_004f3b20();
    FUN_004f6e10(pvVar5,iVar4,ppcVar9);
    local_4 = 0xffffffff;
    if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
      _free(local_78);
    }
    *(undefined1 *)(param_1 + 0xf6) = 0;
  }
  if ((*(char *)(param_1 + 0xf8) != '\0') && (local_50 == 0)) {
    local_78 = local_6c;
    local_6c[0] = '\0';
    local_74 = 0;
    local_70 = 0x40;
    local_78 = _malloc(0x40);
    _strncpy(local_78,"TANNOY_STUNT_DOUBLE_NEEDEDINCASTING",0x23);
    local_74 = 0x23;
    local_78[0x23] = '\0';
    ppcVar9 = &local_78;
    iVar4 = 2;
    local_4 = 2;
    pvVar5 = (void *)FUN_004f3b20();
    FUN_004f6e10(pvVar5,iVar4,ppcVar9);
    local_4 = 0xffffffff;
    if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
      _free(local_78);
    }
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  if ((*(char *)(param_1 + 0xf9) != '\0') && (bVar2 = FUN_005bacd0(*(int *)(param_1 + 0x8c)), bVar2)
     ) {
    local_78 = local_6c;
    local_6c[0] = '\0';
    local_74 = 0;
    local_70 = 0x20;
    local_78 = _malloc(0x20);
    _strncpy(local_78,"TANNOY_CASTING_NOCREW",0x15);
    local_74 = 0x15;
    local_78[0x15] = '\0';
    ppcVar9 = &local_78;
    iVar4 = 2;
    local_4 = 3;
    pvVar5 = (void *)FUN_004f3b20();
    FUN_004f6e10(pvVar5,iVar4,ppcVar9);
    local_4 = 0xffffffff;
    if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
      _free(local_78);
    }
    *(undefined1 *)(param_1 + 0xf9) = 0;
  }
  if ((*(char *)(param_1 + 0xfa) != '\0') && (bVar2 = FUN_005bacd0(*(int *)(param_1 + 0x8c)), bVar2)
     ) {
    local_78 = local_6c;
    local_6c[0] = '\0';
    local_74 = 0;
    local_70 = 0x20;
    local_78 = _malloc(0x20);
    _strncpy(local_78,"TANNOY_CASTING_CREWNEEDED",0x19);
    local_74 = 0x19;
    local_78[0x19] = '\0';
    ppcVar9 = &local_78;
    iVar4 = 2;
    local_4 = 4;
    pvVar5 = (void *)FUN_004f3b20();
    FUN_004f6e10(pvVar5,iVar4,ppcVar9);
    local_4 = 0xffffffff;
    if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
      _free(local_78);
    }
    *(undefined1 *)(param_1 + 0xfa) = 0;
  }
  iVar4 = *(int *)(param_1 + 0xf0);
  if ((iVar4 != -1) && (iVar4 != local_58)) {
    if (iVar4 == 1) {
      local_a4 = local_98;
      local_98[0] = '\0';
      local_a0 = 0;
      local_9c = 0x20;
      local_a4 = _malloc(0x20);
      _strncpy(local_a4,"TANNOY_CASTING_ACTORSNEEDED_01",0x1e);
      local_a0 = 0x1e;
      local_a4[0x1e] = '\0';
      ppcVar9 = &local_a4;
      iVar4 = 2;
      local_4 = 5;
      pvVar5 = (void *)FUN_004f3b20();
      FUN_004f6e10(pvVar5,iVar4,ppcVar9);
      pcVar1 = local_a4;
      uVar7 = local_9c;
    }
    else if (iVar4 == 2) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x20;
      local_2c = _malloc(0x20);
      _strncpy(local_2c,"TANNOY_CASTING_ACTORSNEEDED_02",0x1e);
      local_28 = 0x1e;
      local_2c[0x1e] = '\0';
      ppcVar9 = &local_2c;
      iVar4 = 2;
      local_4 = 6;
      pvVar5 = (void *)FUN_004f3b20();
      FUN_004f6e10(pvVar5,iVar4,ppcVar9);
      pcVar1 = local_2c;
      uVar7 = local_24;
    }
    else if (iVar4 == 3) {
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x20;
      local_4c = _malloc(0x20);
      _strncpy(local_4c,"TANNOY_CASTING_ACTORSNEEDED_03",0x1e);
      local_48 = 0x1e;
      local_4c[0x1e] = '\0';
      ppcVar9 = &local_4c;
      iVar4 = 2;
      local_4 = 7;
      pvVar5 = (void *)FUN_004f3b20();
      FUN_004f6e10(pvVar5,iVar4,ppcVar9);
      pcVar1 = local_4c;
      uVar7 = local_44;
    }
    else {
      local_78 = local_6c;
      local_6c[0] = '\0';
      local_74 = 0;
      local_70 = 0x20;
      local_78 = _malloc(0x20);
      _strncpy(local_78,"TANNOY_CASTING_ACTORSNEEDED",0x1b);
      local_74 = 0x1b;
      local_78[0x1b] = '\0';
      ppcVar9 = &local_78;
      iVar4 = 2;
      local_4 = 8;
      pvVar5 = (void *)FUN_004f3b20();
      FUN_004f6e10(pvVar5,iVar4,ppcVar9);
      pcVar1 = local_78;
      uVar7 = local_70;
    }
    if (0x14 < uVar7) {
      local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      _free(pcVar1);
    }
    local_4 = 0xffffffff;
    *(int *)(param_1 + 0xf0) = local_58;
  }
  if (*(char *)(param_1 + 0xf4) == '\0') {
LAB_005ac38e:
    if ((local_81 != '\0') && (local_79 != '\0')) {
      if (*(int *)(param_1 + 0xdc) <= local_80) {
        uVar7 = FUN_00570750('\0');
        if (uVar7 < local_54) {
          local_a4 = local_98;
          local_98[0] = '\0';
          local_a0 = 0;
          local_9c = 0x20;
          local_a4 = _malloc(0x20);
          _strncpy(local_a4,"TANNOY_CASTING_NOEXTRAS",0x17);
          local_a0 = 0x17;
          local_a4[0x17] = '\0';
          iVar10 = 3;
          ppcVar9 = &local_a4;
          iVar4 = 2;
          local_4 = 10;
          FUN_004f3b20();
          FUN_004f8a00(iVar4,ppcVar9,iVar10);
          local_4 = 0xffffffff;
          if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
            _free(local_a4);
          }
          *(undefined1 *)(param_1 + 0xf5) = 1;
          if (*(char *)(param_1 + 0xf6) != '\0') {
            FUN_00401de0(&local_a4,"TANNOY_CASTING_EXTRASNEEDED",0xffffffff);
            ppcVar9 = &local_a4;
            iVar4 = 2;
            local_4 = 0xb;
            pvVar5 = (void *)FUN_004f3b20();
            FUN_004f6e10(pvVar5,iVar4,ppcVar9);
            local_4 = 0xffffffff;
            if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
              _free(local_a4);
            }
            *(undefined1 *)(param_1 + 0xf6) = 0;
          }
        }
        else if (local_54 != 0) {
          FUN_00401de0(&local_a4,"TANNOY_CASTING_EXTRASNEEDED",0xffffffff);
          iVar10 = 3;
          ppcVar9 = &local_a4;
          iVar4 = 2;
          local_4 = 0xc;
          FUN_004f3b20();
          FUN_004f8a00(iVar4,ppcVar9,iVar10);
          local_4 = 0xffffffff;
          if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
            _free(local_a4);
          }
          *(undefined1 *)(param_1 + 0xf6) = 1;
          if (*(char *)(param_1 + 0xf5) != '\0') {
            FUN_00401de0(&local_a4,"TANNOY_CASTING_NOEXTRAS",0xffffffff);
            ppcVar9 = &local_a4;
            iVar4 = 2;
            local_4 = 0xd;
            pvVar5 = (void *)FUN_004f3b20();
            FUN_004f6e10(pvVar5,iVar4,ppcVar9);
            local_4 = 0xffffffff;
            if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
              _free(local_a4);
            }
            *(undefined1 *)(param_1 + 0xf5) = 0;
          }
        }
        *(int *)(param_1 + 0xdc) = DAT_00e54458 + local_80;
      }
      if (*(int *)(param_1 + 0xe4) <= local_80) {
        if (0 < local_50) {
          local_a4 = local_98;
          local_98[0] = '\0';
          local_a0 = 0;
          local_9c = 0x40;
          local_a4 = _malloc(0x40);
          _strncpy(local_a4,"TANNOY_STUNT_DOUBLE_NEEDEDINCASTING",0x23);
          local_a0 = 0x23;
          local_a4[0x23] = '\0';
          iVar10 = 3;
          ppcVar9 = &local_a4;
          iVar4 = 2;
          local_4 = 0xe;
          FUN_004f3b20();
          FUN_004f8a00(iVar4,ppcVar9,iVar10);
          local_4 = 0xffffffff;
          if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
            _free(local_a4);
          }
          *(undefined1 *)(param_1 + 0xf8) = 1;
        }
        *(int *)(param_1 + 0xe4) = DAT_00e54458 + local_80;
      }
      if ((*(int *)(param_1 + 0xd8) <= local_80) &&
         (bVar2 = FUN_005bacd0(*(int *)(param_1 + 0x8c)), !bVar2)) {
        iVar4 = FUN_0057b700('\0','\x01');
        if (iVar4 < 1) {
          FUN_00401de0(&local_a4,"TANNOY_CASTING_NOCREW",0xffffffff);
          iVar10 = 3;
          ppcVar9 = &local_a4;
          iVar4 = 2;
          local_4 = 0x11;
          FUN_004f3b20();
          FUN_004f8a00(iVar4,ppcVar9,iVar10);
          local_4 = 0xffffffff;
          if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
            _free(local_a4);
          }
          *(undefined1 *)(param_1 + 0xf9) = 1;
          if (*(char *)(param_1 + 0xfa) != '\0') {
            FUN_00401de0(&local_a4,"TANNOY_CASTING_CREWNEEDED",0xffffffff);
            ppcVar9 = &local_a4;
            iVar4 = 2;
            local_4 = 0x12;
            pvVar5 = (void *)FUN_004f3b20();
            FUN_004f6e10(pvVar5,iVar4,ppcVar9);
            if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
              _free(local_a4);
            }
            *(undefined1 *)(param_1 + 0xfa) = 0;
          }
        }
        else {
          FUN_00401de0(&local_a4,"TANNOY_CASTING_CREWNEEDED",0xffffffff);
          iVar10 = 3;
          ppcVar9 = &local_a4;
          iVar4 = 2;
          local_4 = 0xf;
          FUN_004f3b20();
          FUN_004f8a00(iVar4,ppcVar9,iVar10);
          local_4 = 0xffffffff;
          if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
            _free(local_a4);
          }
          *(undefined1 *)(param_1 + 0xfa) = 1;
          if (*(char *)(param_1 + 0xf9) != '\0') {
            FUN_00401de0(&local_a4,"TANNOY_CASTING_NOCREW",0xffffffff);
            ppcVar9 = &local_a4;
            iVar4 = 2;
            local_4 = 0x10;
            pvVar5 = (void *)FUN_004f3b20();
            FUN_004f6e10(pvVar5,iVar4,ppcVar9);
            if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
              _free(local_a4);
            }
            *(undefined1 *)(param_1 + 0xf9) = 0;
          }
        }
        *(int *)(param_1 + 0xd8) = DAT_00e54458 + local_80;
      }
      local_80 = DAT_00e54454 + local_80;
      *(int *)(param_1 + 0xd0) = local_80;
      *(int *)(param_1 + 0xd4) = local_80;
      ExceptionList = local_c;
      return;
    }
  }
  else if (local_81 != '\0') {
    local_a4 = local_98;
    local_98[0] = '\0';
    local_a0 = 0;
    local_9c = 0x20;
    local_a4 = _malloc(0x20);
    _strncpy(local_a4,"TANNOY_CASTING_DIRECTORNEEDED",0x1d);
    local_a0 = 0x1d;
    local_a4[0x1d] = '\0';
    ppcVar9 = &local_a4;
    iVar4 = 2;
    local_4 = 9;
    pvVar5 = (void *)FUN_004f3b20();
    FUN_004f6e10(pvVar5,iVar4,ppcVar9);
    local_4 = 0xffffffff;
    if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4);
    }
    *(undefined1 *)(param_1 + 0xf4) = 0;
    goto LAB_005ac38e;
  }
  if (*(char *)(param_1 + 0xf5) != '\0') {
    local_a4 = local_98;
    local_98[0] = '\0';
    local_a0 = 0;
    local_9c = 0x20;
    local_a4 = _malloc(0x20);
    _strncpy(local_a4,"TANNOY_CASTING_NOEXTRAS",0x17);
    local_a0 = 0x17;
    local_a4[0x17] = '\0';
    ppcVar9 = &local_a4;
    iVar4 = 2;
    local_4 = 0x13;
    pvVar5 = (void *)FUN_004f3b20();
    FUN_004f6e10(pvVar5,iVar4,ppcVar9);
    local_4 = 0xffffffff;
    if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4);
    }
    *(undefined1 *)(param_1 + 0xf5) = 0;
  }
  if (*(char *)(param_1 + 0xf6) != '\0') {
    local_a4 = local_98;
    local_98[0] = '\0';
    local_a0 = 0;
    local_9c = 0x20;
    local_a4 = _malloc(0x20);
    _strncpy(local_a4,"TANNOY_CASTING_EXTRASNEEDED",0x1b);
    local_a0 = 0x1b;
    local_a4[0x1b] = '\0';
    ppcVar9 = &local_a4;
    iVar4 = 2;
    local_4 = 0x14;
    pvVar5 = (void *)FUN_004f3b20();
    FUN_004f6e10(pvVar5,iVar4,ppcVar9);
    local_4 = 0xffffffff;
    if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4);
    }
    *(undefined1 *)(param_1 + 0xf6) = 0;
  }
  if (*(char *)(param_1 + 0xf8) != '\0') {
    local_a4 = local_98;
    local_98[0] = '\0';
    local_a0 = 0;
    local_9c = 0x40;
    local_a4 = _malloc(0x40);
    _strncpy(local_a4,"TANNOY_STUNT_DOUBLE_NEEDEDINCASTING",0x23);
    local_a0 = 0x23;
    local_a4[0x23] = '\0';
    ppcVar9 = &local_a4;
    iVar4 = 2;
    local_4 = 0x15;
    pvVar5 = (void *)FUN_004f3b20();
    FUN_004f6e10(pvVar5,iVar4,ppcVar9);
    local_4 = 0xffffffff;
    if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4);
    }
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  if (*(char *)(param_1 + 0xf9) != '\0') {
    local_a4 = local_98;
    local_98[0] = '\0';
    local_a0 = 0;
    local_9c = 0x20;
    local_a4 = _malloc(0x20);
    _strncpy(local_a4,"TANNOY_CASTING_NOCREW",0x15);
    local_a0 = 0x15;
    local_a4[0x15] = '\0';
    ppcVar9 = &local_a4;
    iVar4 = 2;
    local_4 = 0x16;
    pvVar5 = (void *)FUN_004f3b20();
    FUN_004f6e10(pvVar5,iVar4,ppcVar9);
    local_4 = 0xffffffff;
    if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4);
    }
    *(undefined1 *)(param_1 + 0xf9) = 0;
  }
  if (*(char *)(param_1 + 0xfa) != '\0') {
    local_a4 = local_98;
    local_98[0] = '\0';
    local_a0 = 0;
    local_9c = 0x20;
    local_a4 = _malloc(0x20);
    _strncpy(local_a4,"TANNOY_CASTING_CREWNEEDED",0x19);
    local_a0 = 0x19;
    local_a4[0x19] = '\0';
    ppcVar9 = &local_a4;
    iVar4 = 2;
    local_4 = 0x17;
    pvVar5 = (void *)FUN_004f3b20();
    FUN_004f6e10(pvVar5,iVar4,ppcVar9);
    local_4 = 0xffffffff;
    if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4);
    }
    *(undefined1 *)(param_1 + 0xfa) = 0;
  }
  if ((local_79 != '\0') || (local_80 < *(int *)(param_1 + 0xd0))) goto LAB_005acc1e;
  switch(local_58) {
  case 0:
    goto switchD_005aca98_caseD_0;
  case 1:
    FUN_00401de0(&local_2c,"TANNOY_CASTING_ACTORSNEEDED_01",0xffffffff);
    iVar10 = 3;
    ppcVar9 = &local_2c;
    iVar4 = 2;
    local_4 = 0x18;
    FUN_004f3b20();
    FUN_004f8a00(iVar4,ppcVar9,iVar10);
    pcVar1 = local_2c;
    uVar7 = local_24;
    break;
  case 2:
    FUN_00401de0(&local_4c,"TANNOY_CASTING_ACTORSNEEDED_02",0xffffffff);
    iVar10 = 3;
    ppcVar9 = &local_4c;
    iVar4 = 2;
    local_4 = 0x19;
    FUN_004f3b20();
    FUN_004f8a00(iVar4,ppcVar9,iVar10);
    pcVar1 = local_4c;
    uVar7 = local_44;
    break;
  case 3:
    FUN_00401de0(&local_78,"TANNOY_CASTING_ACTORSNEEDED_03",0xffffffff);
    iVar10 = 3;
    ppcVar9 = &local_78;
    iVar4 = 2;
    local_4 = 0x1a;
    FUN_004f3b20();
    FUN_004f8a00(iVar4,ppcVar9,iVar10);
    pcVar1 = local_78;
    uVar7 = local_70;
    break;
  default:
    local_a4 = local_98;
    local_98[0] = '\0';
    local_a0 = 0;
    local_9c = 0x20;
    local_a4 = _malloc(0x20);
    _strncpy(local_a4,"TANNOY_CASTING_ACTORSNEEDED",0x1b);
    local_a0 = 0x1b;
    local_a4[0x1b] = '\0';
    iVar10 = 3;
    ppcVar9 = &local_a4;
    iVar4 = 2;
    local_4 = 0x1b;
    FUN_004f3b20();
    FUN_004f8a00(iVar4,ppcVar9,iVar10);
    pcVar1 = local_a4;
    uVar7 = local_9c;
  }
  local_4 = 0xffffffff;
  if (0x14 < uVar7) {
    local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(pcVar1);
  }
switchD_005aca98_caseD_0:
  iVar4 = DAT_00e54458 + local_80;
  *(int *)(param_1 + 0xf0) = local_58;
  *(int *)(param_1 + 0xd0) = iVar4;
LAB_005acc1e:
  if ((local_81 == '\0') && (*(int *)(param_1 + 0xd4) <= local_80)) {
    local_a4 = local_98;
    local_98[0] = '\0';
    local_a0 = 0;
    local_9c = 0x20;
    local_a4 = _malloc(0x20);
    _strncpy(local_a4,"TANNOY_CASTING_DIRECTORNEEDED",0x1d);
    local_a0 = 0x1d;
    local_a4[0x1d] = '\0';
    iVar10 = 3;
    ppcVar9 = &local_a4;
    iVar4 = 2;
    local_4 = 0x1c;
    FUN_004f3b20();
    FUN_004f8a00(iVar4,ppcVar9,iVar10);
    if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4);
    }
    *(int *)(param_1 + 0xd4) = DAT_00e54458 + local_80;
    *(undefined1 *)(param_1 + 0xf4) = 1;
  }
  local_80 = local_80 + DAT_00e54454;
  *(int *)(param_1 + 0xdc) = local_80;
  *(int *)(param_1 + 0xd8) = local_80;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005acd10 @ 005acd10 ////

undefined1 __fastcall FUN_005acd10(int param_1)

{
  int iVar1;
  bool bVar2;
  void **ppvVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  float *pfVar10;
  void *this;
  undefined4 *puVar11;
  int iVar12;
  undefined1 uVar13;
  int local_30;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5769;
  local_c = ExceptionList;
  bVar2 = false;
  iVar12 = *(int *)(*(int *)(param_1 + 0x8c) + 0xac);
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  local_30 = param_1;
  if (iVar12 != *(int *)(param_1 + 0x8c) + 0xb8) {
    do {
      iVar1 = *(int *)(iVar12 + 8);
      if (iVar1 != 0) {
        iVar6 = FUN_004de100(iVar1);
        iVar6 = *(int *)(iVar6 + 8);
        iVar7 = FUN_004de100(iVar1);
        if (iVar6 != iVar7 + 0x14) {
          do {
            iVar7 = *(int *)(iVar6 + 8);
            if (iVar7 != 0) {
              bVar4 = FUN_0048c9a0(iVar7);
              if (!bVar4) {
                ExceptionList = local_c;
                return 0;
              }
              piVar8 = (int *)FUN_0048c950(iVar7);
              if (piVar8 != (int *)0x0) {
                cVar5 = (**(code **)(*piVar8 + 0x204))();
                if (cVar5 == '\0') {
                  ExceptionList = local_c;
                  return 0;
                }
                cVar5 = (**(code **)(*piVar8 + 0x1dc))();
                if (cVar5 != '\0') {
                  ExceptionList = local_c;
                  return 0;
                }
              }
            }
            iVar6 = *(int *)(iVar6 + 4);
            iVar7 = FUN_004de100(iVar1);
            param_1 = local_30;
          } while (iVar6 != iVar7 + 0x14);
        }
      }
      iVar12 = *(int *)(iVar12 + 4);
      ppvVar3 = ExceptionList;
    } while (iVar12 != *(int *)(param_1 + 0x8c) + 0xb8);
  }
  ExceptionList = ppvVar3;
  if (((*(void **)(param_1 + 0x8c) == (void *)0x0) ||
      (uVar9 = FUN_005b20f0(*(void **)(param_1 + 0x8c),'\x01'), (char)uVar9 == '\0')) ||
     (pfVar10 = (float *)FUN_005b27c0(*(void **)(param_1 + 0x8c),&local_30), *pfVar10 < DAT_00e54464
     )) {
    ExceptionList = local_c;
    return 0;
  }
  cVar5 = '\0';
  this = (void *)FUN_005b2220(*(int *)(param_1 + 0x8c));
  uVar9 = FUN_005a73b0(this,cVar5);
  if ((char)uVar9 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  if (*(void **)(param_1 + 0x8c) != (void *)0x0) {
    puVar11 = FUN_0045f620(*(void **)(param_1 + 0x8c),apvStack_2c);
    uStack_4 = 0;
    bVar2 = true;
    if (((puVar11[1] != 0) &&
        (iVar12 = *(int *)(param_1 + 0x8c), *(int *)(iVar12 + 0xac) != iVar12 + 0xb8)) &&
       (iVar12 = FUN_005b2780(iVar12), iVar12 != 0)) {
      piVar8 = (int *)FUN_005b2780(*(int *)(param_1 + 0x8c));
      cVar5 = (**(code **)(*piVar8 + 0x204))();
      if (cVar5 != '\0') {
        piVar8 = (int *)FUN_005b2780(*(int *)(param_1 + 0x8c));
        cVar5 = (**(code **)(*piVar8 + 0x1dc))();
        if ((cVar5 == '\0') && (bVar4 = FUN_005bacd0(*(int *)(param_1 + 0x8c)), bVar4)) {
          uVar13 = 1;
          goto LAB_005aced6;
        }
      }
    }
  }
  uVar13 = 0;
LAB_005aced6:
  if ((bVar2) && (10 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  ExceptionList = local_c;
  return uVar13;
}


//// FUNCTION FUN_005acf60 @ 005acf60 ////

void __fastcall FUN_005acf60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d29884;
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


//// FUNCTION FUN_005acfb0 @ 005acfb0 ////

void FUN_005acfb0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  void *local_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5788;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_005b2780(param_1);
    if (((iVar1 != 0) && (iVar2 = FUN_005998e0(iVar1), iVar2 != 0)) &&
       (piVar3 = (int *)FUN_00401c30(iVar2), piVar3 != (int *)0x0)) {
      FUN_004015d0(piVar3 + 0x19,(char *)*param_2,param_2[1]);
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x3c))(local_4c);
      FUN_004036d0((void *)(iVar1 + 0x888),(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
    }
    iVar2 = FUN_005b2220(param_1);
    iVar1 = *(int *)(iVar2 + 100);
    if (iVar1 != *(int *)(iVar2 + 0x68)) {
      do {
        iVar7 = *(int *)(iVar1 + 0x14);
        if (((iVar7 != 0) && (iVar5 = FUN_005a6470(iVar7), iVar5 != 0)) &&
           (uVar6 = FUN_005a6140(iVar7), (char)uVar6 != '\0')) {
          iVar5 = FUN_005a6470(iVar7);
          iVar5 = FUN_005998e0(iVar5);
          if ((iVar5 != 0) && (piVar3 = (int *)FUN_00401c30(iVar5), piVar3 != (int *)0x0)) {
            FUN_004015d0(piVar3 + 0x19,(char *)*param_2,param_2[1]);
            puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x3c))(apvStack_2c);
            uStack_4 = 0;
            iVar7 = FUN_005a6470(iVar7);
            FUN_004036d0((void *)(iVar7 + 0x888),(wchar_t *)*puVar4,puVar4[1]);
            uStack_4 = 0xffffffff;
            if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_2c[0]);
            }
          }
        }
        iVar1 = iVar1 + 0x18;
      } while (iVar1 != *(int *)(iVar2 + 0x68));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005ad130 @ 005ad130 ////

undefined4 * __fastcall FUN_005ad130(undefined4 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb57b6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005aa600(param_1);
  *param_1 = &PTR_FUN_00d298d4;
  param_1[0x14] = &PTR_LAB_00d298b0;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = param_1 + 0x2d;
  param_1[0x2d] = &PTR_LAB_00d29884;
  param_1[0x32] = 0;
  local_4 = 1;
  param_1[0x33] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  param_1[0x24] = 4;
  FUN_004015d0(param_1 + 0x25,"project_phase_preproduction",0x1b);
  uVar2 = FUN_0043b570();
  iVar1 = (int)uVar2 + DAT_00e54454;
  param_1[0x39] = iVar1;
  param_1[0x37] = iVar1;
  param_1[0x36] = iVar1;
  param_1[0x35] = iVar1;
  param_1[0x34] = iVar1;
  param_1[0x38] = 0xffffffff;
  param_1[0x3c] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0xf5) = 0;
  *(undefined1 *)((int)param_1 + 0xf6) = 0;
  *(undefined1 *)((int)param_1 + 0xf9) = 0;
  *(undefined1 *)((int)param_1 + 0xfa) = 0;
  *(undefined1 *)((int)param_1 + 0xf7) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_005ad250 @ 005ad250 ////

undefined4 * __thiscall FUN_005ad250(void *this,byte param_1)

{
  FUN_005ad270(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005ad270 @ 005ad270 ////

void __fastcall FUN_005ad270(undefined4 *param_1)

{
  param_1[0x2d] = &PTR_LAB_00d29884;
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2f] = param_1[0x2e];
  }
  if (param_1[0x2e] != 0) {
    *(undefined4 *)(param_1[0x2e] + 4) = param_1[0x2f];
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2f] = param_1[0x2e];
  }
  if (param_1[0x2e] != 0) {
    *(undefined4 *)(param_1[0x2e] + 4) = param_1[0x2f];
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_005aa6d0(param_1);
  return;
}


//// FUNCTION FUN_005ad600 @ 005ad600 ////

void __fastcall FUN_005ad600(int param_1)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iStack_44;
  int iStack_40;
  char cStack_3c;
  char local_38;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5808;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 200) != 0) && (*(void **)(param_1 + 0x8c) != (void *)0x0)) {
    ExceptionList = &local_c;
    FUN_005b83f0(*(void **)(param_1 + 0x8c));
    pvVar2 = (void *)FUN_005295b0(*(int **)(param_1 + 200));
    if (pvVar2 != (void *)0x0) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"director",8);
      local_28 = 8;
      local_2c[8] = '\0';
      local_4 = 0;
      piVar3 = (int *)FUN_00938a70(pvVar2,&local_2c);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (piVar3 != (int *)0x0) {
        FUN_0093e410(piVar3,0);
        FUN_0093b350(piVar3,1);
        FUN_0093b340(piVar3,1);
        FUN_0093b330(piVar3,1);
        (**(code **)(*piVar3 + 100))();
        piVar4 = (int *)FUN_005b2780(*(int *)(param_1 + 0x8c));
        pvVar5 = (void *)FUN_0093c970(piVar3);
        if (piVar4 != (int *)0x0) {
          iVar6 = (**(code **)(*piVar4 + 500))();
          iVar7 = (**(code **)(*piVar4 + 0x1ec))();
          if (((iVar6 == 0) || (iVar6 == *(int *)(param_1 + 0x8c))) &&
             ((iVar7 == 0 || (iVar6 = FUN_005b25c0(*(int *)(param_1 + 0x8c)), iVar6 == iVar7)))) {
            piVar13 = (int *)FUN_0053ae00((int)piVar4);
            if ((piVar13 != (int *)0x0) && (piVar13 != piVar3)) {
              (**(code **)(*piVar13 + 0x20))(piVar4);
            }
            FUN_0059a6c0(piVar4,'\x01');
            FUN_005b6c90(*(void **)(param_1 + 0x8c),(int)piVar4);
            if ((pvVar5 != (void *)0x0) &&
               (cVar1 = (**(code **)(*piVar3 + 0x5c))(piVar4), cVar1 != '\0')) {
              FUN_009455e0(pvVar5,piVar4);
            }
            TMRoom_RegisterOccupant(piVar3,piVar4);
            TMRoom_FinalizeSlotAssignment(piVar3,piVar4,0);
          }
          else {
            FUN_005b6c90(*(void **)(param_1 + 0x8c),0);
          }
        }
      }
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"actors",6);
      local_28 = 6;
      local_2c[6] = '\0';
      local_4 = 1;
      piVar3 = (int *)FUN_00938a70(pvVar2,&local_2c);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (piVar3 != (int *)0x0) {
        FUN_0093e410(piVar3,0);
        (**(code **)(*piVar3 + 100))();
        iVar6 = FUN_005b2220(*(int *)(param_1 + 0x8c));
        iStack_44 = *(int *)(iVar6 + 100);
        if (iStack_44 != *(int *)(iVar6 + 0x68)) {
          do {
            pvVar5 = *(void **)(iStack_44 + 0x14);
            if ((pvVar5 != (void *)0x0) && (uVar8 = FUN_005a6140((int)pvVar5), (char)uVar8 != '\0'))
            {
              iVar7 = FUN_005a6470((int)pvVar5);
              if (iVar7 != 0) {
                piVar4 = (int *)FUN_005a6470((int)pvVar5);
                iVar7 = (**(code **)(*piVar4 + 500))();
                piVar4 = (int *)FUN_005a6470((int)pvVar5);
                iVar9 = (**(code **)(*piVar4 + 0x1ec))();
                if (((iVar7 == 0) || (iVar7 == *(int *)(param_1 + 0x8c))) &&
                   ((iVar9 == 0 || (iVar7 = FUN_005b25c0(*(int *)(param_1 + 0x8c)), iVar7 == iVar9))
                   )) {
                  iStack_40._0_1_ = '\x01';
                  iVar7 = FUN_005a6470((int)pvVar5);
                  piVar4 = (int *)FUN_0053ae00(iVar7);
                  if (piVar4 != (int *)0x0) {
                    if (piVar4 == piVar3) {
                      iStack_40._0_1_ = '\0';
                    }
                    else {
                      iVar7 = *piVar4;
                      uVar8 = FUN_005a6470((int)pvVar5);
                      (**(code **)(iVar7 + 0x20))(uVar8);
                    }
                  }
                  iVar7 = FUN_005a6470((int)pvVar5);
                  if (iVar7 != 0) {
                    pvVar10 = (void *)FUN_005a6470((int)pvVar5);
                    FUN_0059a6c0(pvVar10,(char)iStack_40);
                    pvVar10 = (void *)FUN_005a6470((int)pvVar5);
                    TMRoom_RegisterOccupant(piVar3,pvVar10);
                    pvVar10 = (void *)FUN_0093c970(piVar3);
                    if (pvVar10 != (void *)0x0) {
                      iVar7 = FUN_005a6130((int)pvVar5);
                      if (iVar7 == 1) {
                        uVar14 = 0;
                      }
                      else if (iVar7 == 2) {
                        uVar14 = 1;
                      }
                      else if (iVar7 == 3) {
                        uVar14 = 2;
                      }
                      else {
                        uVar14 = 0xffffffff;
                      }
                      pvVar11 = (void *)FUN_005a6470((int)pvVar5);
                      uVar14 = FUN_00945330(pvVar10,pvVar11,uVar14);
                      uVar15 = 0;
                      iVar7 = FUN_0056f660((int)(piVar3 + 0x23));
                      if (iVar7 != 0) {
                        iVar7 = piVar3[0x24];
                        do {
                          if (*(uint *)(*(int *)(iVar7 + uVar15 * 4) + 0x1b8) == uVar14) {
                            FUN_00931d40(*(void **)(uVar15 * 4 + iVar7),'\0');
                            iVar7 = **(int **)(uVar15 * 4 + piVar3[0x24]);
                            uVar8 = FUN_005a6470((int)pvVar5);
                            (**(code **)(iVar7 + 100))(uVar8);
                            break;
                          }
                          uVar15 = uVar15 + 1;
                          uVar12 = FUN_0056f660((int)(piVar3 + 0x23));
                        } while (uVar15 < uVar12);
                      }
                    }
                  }
                }
                else {
                  FUN_005b4140(*(void **)(param_1 + 0x8c),0,pvVar5);
                }
              }
              iVar7 = FUN_005a64e0((int)pvVar5);
              if (iVar7 != 0) {
                piVar4 = (int *)FUN_005a64e0((int)pvVar5);
                iVar7 = (**(code **)(*piVar4 + 500))();
                piVar4 = (int *)FUN_005a64e0((int)pvVar5);
                iVar9 = (**(code **)(*piVar4 + 0x1ec))();
                if (((iVar7 == 0) || (iVar7 == *(int *)(param_1 + 0x8c))) &&
                   ((iVar9 == 0 || (iVar7 = FUN_005b25c0(*(int *)(param_1 + 0x8c)), iVar7 == iVar9))
                   )) {
                  cStack_3c = '\x01';
                  iVar7 = FUN_005a64e0((int)pvVar5);
                  piVar4 = (int *)FUN_0053ae00(iVar7);
                  if (piVar4 != (int *)0x0) {
                    if (piVar4 == piVar3) {
                      cStack_3c = '\0';
                    }
                    else {
                      iVar7 = *piVar4;
                      uVar8 = FUN_005a64e0((int)pvVar5);
                      (**(code **)(iVar7 + 0x20))(uVar8);
                    }
                  }
                  iVar7 = FUN_005a64e0((int)pvVar5);
                  if (iVar7 != 0) {
                    pvVar10 = (void *)FUN_005a64e0((int)pvVar5);
                    FUN_0059a6c0(pvVar10,cStack_3c);
                    pvVar10 = (void *)FUN_005a64e0((int)pvVar5);
                    TMRoom_RegisterOccupant(piVar3,pvVar10);
                    pvVar10 = (void *)FUN_0093c970(piVar3);
                    if (pvVar10 != (void *)0x0) {
                      iVar7 = FUN_005a6130((int)pvVar5);
                      if (iVar7 == 1) {
                        uVar14 = 3;
                      }
                      else if (iVar7 == 2) {
                        uVar14 = 4;
                      }
                      else if (iVar7 == 3) {
                        uVar14 = 5;
                      }
                      else {
                        uVar14 = 0xffffffff;
                      }
                      pvVar11 = (void *)FUN_005a64e0((int)pvVar5);
                      uVar14 = FUN_00945330(pvVar10,pvVar11,uVar14);
                      uVar15 = 0;
                      iVar7 = FUN_0056f660((int)(piVar3 + 0x23));
                      if (iVar7 != 0) {
                        iVar7 = piVar3[0x24];
                        do {
                          if (*(uint *)(*(int *)(iVar7 + uVar15 * 4) + 0x1b8) == uVar14) {
                            FUN_00931d40(*(void **)(iVar7 + uVar15 * 4),'\0');
                            iVar7 = **(int **)(piVar3[0x24] + uVar15 * 4);
                            uVar8 = FUN_005a64e0((int)pvVar5);
                            (**(code **)(iVar7 + 100))(uVar8);
                            break;
                          }
                          uVar15 = uVar15 + 1;
                          uVar12 = FUN_0056f660((int)(piVar3 + 0x23));
                        } while (uVar15 < uVar12);
                      }
                    }
                  }
                }
                else {
                  FUN_005a6480(pvVar5,0);
                }
              }
            }
            iStack_44 = iStack_44 + 0x18;
          } while (iStack_44 != *(int *)(iVar6 + 0x68));
        }
        (**(code **)(*piVar3 + 0x50))(0);
      }
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"extras",6);
      local_28 = 6;
      local_2c[6] = '\0';
      local_4 = 2;
      piVar3 = (int *)FUN_00938a70(pvVar2,&local_2c);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (piVar3 != (int *)0x0) {
        FUN_0093e410(piVar3,0);
        (**(code **)(*piVar3 + 100))();
        FUN_0093b2e0(piVar3,1);
        iVar6 = FUN_005b2220(*(int *)(param_1 + 0x8c));
        iStack_40 = *(int *)(iVar6 + 100);
        if (iStack_40 != *(int *)(iVar6 + 0x68)) {
          do {
            pvVar2 = *(void **)(iStack_40 + 0x14);
            if (*(int *)((int)pvVar2 + 0x88) == 0) {
              iVar7 = FUN_0093b110((int)piVar3);
              if (iVar7 != 0) {
                *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
              }
              iVar7 = FUN_005a6470((int)pvVar2);
              if (iVar7 != 0) {
                piVar4 = (int *)FUN_005a6470((int)pvVar2);
                local_38 = '\x01';
                piVar13 = (int *)FUN_0053ae00((int)piVar4);
                if (piVar13 != (int *)0x0) {
                  if (piVar13 == piVar3) {
                    local_38 = '\0';
                  }
                  else {
                    (**(code **)(*piVar13 + 0x20))(piVar4);
                  }
                }
                iVar7 = (**(code **)(*piVar4 + 500))();
                iVar9 = (**(code **)(*piVar4 + 0x1ec))();
                if (((iVar7 == 0) || (iVar7 == *(int *)(param_1 + 0x8c))) &&
                   ((iVar9 == 0 || (iVar7 = FUN_005b25c0(*(int *)(param_1 + 0x8c)), iVar7 == iVar9))
                   )) {
                  FUN_0059a6c0(piVar4,local_38);
                  TMRoom_RegisterOccupant(piVar3,piVar4);
                  pvVar2 = (void *)FUN_0093c970(piVar3);
                  if (((pvVar2 != (void *)0x0) &&
                      (uVar14 = FUN_009455e0(pvVar2,piVar4), -1 < (int)uVar14)) &&
                     (uVar15 = FUN_0056f660((int)(piVar3 + 0x23)), uVar14 < uVar15)) {
                    FUN_00931d40(*(void **)(piVar3[0x24] + uVar14 * 4),'\0');
                    (**(code **)(**(int **)(piVar3[0x24] + uVar14 * 4) + 100))(piVar4);
                  }
                }
                else {
                  FUN_005b4140(*(void **)(param_1 + 0x8c),0,pvVar2);
                }
              }
            }
            iStack_40 = iStack_40 + 0x18;
          } while (iStack_40 != *(int *)(iVar6 + 0x68));
        }
        (**(code **)(*piVar3 + 0x50))(0);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005addd0 @ 005addd0 ////

int * __cdecl FUN_005addd0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb582b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xfc);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_005ad130(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0xc))(param_1);
  FUN_005b4d40(param_1);
  FUN_005babf0(param_1);
  if (*(char *)(piVar2[0x23] + 0x364) != '\0') {
    FUN_005b5840((void *)piVar2[0x23],'\0');
  }
  ExceptionList = puVar1;
  return piVar2;
}


//// FUNCTION FUN_005ade60 @ 005ade60 ////

void __fastcall FUN_005ade60(int param_1)

{
  undefined3 uVar1;
  bool bVar2;
  char cVar3;
  void *this;
  int *piVar4;
  void *this_00;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_64 [4];
  int *local_60;
  int *local_5c;
  undefined4 local_58;
  undefined1 local_54 [4];
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  undefined **local_44;
  int local_40;
  int *local_3c;
  undefined ***local_38;
  int *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar2 = FUN_005bacd0(*(int *)(param_1 + 0x8c));
  if (!bVar2) {
    FUN_005c15c0(*(void **)(param_1 + 0x8c));
  }
  if (((*(int **)(param_1 + 200) != (int *)0x0) && (*(int *)(param_1 + 0x8c) != 0)) &&
     (this = (void *)FUN_005295b0(*(int **)(param_1 + 200)), this != (void *)0x0)) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"crew",4);
    local_28 = 4;
    local_2c[4] = '\0';
    local_4 = 0;
    piVar4 = (int *)FUN_00938a70(this,&local_2c);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (piVar4 != (int *)0x0) {
      this_00 = (void *)FUN_0093c970(piVar4);
      local_60 = (int *)0x0;
      local_5c = (int *)0x0;
      local_58 = 0;
      local_50 = (int *)0x0;
      local_4c = (int *)0x0;
      local_48 = 0;
      iVar7 = *(int *)(*(int *)(param_1 + 0x8c) + 0x134);
      local_4._1_3_ = 0;
      uVar1 = local_4._1_3_;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      if (iVar7 != *(int *)(*(int *)(param_1 + 0x8c) + 0x138)) {
        do {
          local_30 = *(int **)(iVar7 + 0x14);
          local_38 = &local_44;
          local_40 = 0;
          local_3c = (int *)0x0;
          local_44 = &PTR_FUN_00d18c4c;
          if (local_30 != (int *)0x0) {
            local_3c = local_30 + 6;
            local_40 = *local_3c;
            *(int **)(*local_3c + 4) = &local_40;
            *local_3c = (int)&local_40;
          }
          local_4._0_1_ = 3;
          FUN_004db640(local_54,(int)&local_44);
          local_4._0_1_ = 2;
          FUN_00435ec0(&local_44);
          iVar7 = iVar7 + 0x18;
          uVar1 = local_4._1_3_;
        } while (iVar7 != *(int *)(*(int *)(param_1 + 0x8c) + 0x138));
      }
      local_4._1_3_ = uVar1;
      piVar5 = local_50;
      if (local_50 != local_4c) {
        do {
          piVar8 = (int *)piVar5[5];
          if (piVar8 != (int *)0x0) {
            iVar7 = (**(code **)(*piVar8 + 500))();
            iVar6 = (**(code **)(*piVar8 + 0x1ec))();
            if (((iVar7 == 0) || (iVar7 == *(int *)(param_1 + 0x8c))) &&
               ((iVar6 == 0 || (iVar7 = FUN_005b25c0(*(int *)(param_1 + 0x8c)), iVar7 == iVar6)))) {
              FUN_0059a6c0(piVar8,'\x01');
              CFacilityPreProduction_AddCrewIfAbsent(*(void **)(param_1 + 0x8c),(int)piVar8);
              TMRoom_RegisterOccupant(piVar4,piVar8);
              if ((this_00 != (void *)0x0) &&
                 (cVar3 = (**(code **)(*piVar4 + 0x5c))(piVar8), cVar3 != '\0')) {
                FUN_009455e0(this_00,piVar8);
              }
            }
            else {
              local_3c = piVar8 + 6;
              local_38 = &local_44;
              local_44 = &PTR_FUN_00d18c4c;
              local_40 = *local_3c;
              *(int **)(*local_3c + 4) = &local_40;
              *local_3c = (int)&local_40;
              local_4._0_1_ = 4;
              local_30 = piVar8;
              FUN_004db640(auStack_64,(int)&local_44);
              local_4._0_1_ = 2;
              FUN_00435ec0(&local_44);
            }
          }
          piVar5 = piVar5 + 6;
        } while (piVar5 != local_4c);
      }
      piVar5 = local_4c;
      piVar8 = local_60;
      if (local_60 != local_5c) {
        do {
          if (piVar8[5] != 0) {
            FUN_005bae70(*(void **)(param_1 + 0x8c),piVar8[5]);
          }
          piVar8 = piVar8 + 6;
        } while (piVar8 != local_5c);
      }
      iVar7 = FUN_0093b110((int)piVar4);
      if (iVar7 != 0) {
        *(uint *)(iVar7 + 0xc) = *(uint *)(iVar7 + 0xc) | 2;
        *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x300);
      }
      (**(code **)(*piVar4 + 0x50))(0);
      if (local_50 != (int *)0x0) {
        if (local_50 != piVar5) {
          piVar4 = local_50 + 2;
          do {
            piVar4[-2] = (int)&PTR_FUN_00d18c4c;
            if ((int *)*piVar4 != (int *)0x0) {
              *(int *)*piVar4 = piVar4[-1];
            }
            if (piVar4[-1] != 0) {
              *(int *)(piVar4[-1] + 4) = *piVar4;
            }
            piVar4[-1] = 0;
            *piVar4 = 0;
            piVar4[3] = 0;
            if ((int *)*piVar4 != (int *)0x0) {
              *(int *)*piVar4 = piVar4[-1];
            }
            if (piVar4[-1] != 0) {
              *(int *)(piVar4[-1] + 4) = *piVar4;
            }
            piVar4[-1] = 0;
            *piVar4 = 0;
            piVar8 = piVar4 + 4;
            piVar4 = piVar4 + 6;
          } while (piVar8 != piVar5);
        }
                    /* WARNING: Subroutine does not return */
        _free(local_50);
      }
      if (local_60 != (int *)0x0) {
        if (local_60 != local_5c) {
          piVar4 = local_60 + 2;
          do {
            piVar4[-2] = (int)&PTR_FUN_00d18c4c;
            if ((int *)*piVar4 != (int *)0x0) {
              *(int *)*piVar4 = piVar4[-1];
            }
            if (piVar4[-1] != 0) {
              *(int *)(piVar4[-1] + 4) = *piVar4;
            }
            piVar4[-1] = 0;
            *piVar4 = 0;
            piVar4[3] = 0;
            if ((int *)*piVar4 != (int *)0x0) {
              *(int *)*piVar4 = piVar4[-1];
            }
            if (piVar4[-1] != 0) {
              *(int *)(piVar4[-1] + 4) = *piVar4;
            }
            piVar4[-1] = 0;
            *piVar4 = 0;
            piVar5 = piVar4 + 4;
            piVar4 = piVar4 + 6;
          } while (piVar5 != local_5c);
        }
                    /* WARNING: Subroutine does not return */
        _free(local_60);
      }
    }
    *(undefined1 *)((int)this + 0x256) = 1;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005ae270 @ 005ae270 ////

void __fastcall FUN_005ae270(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x14));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005ae2a0 @ 005ae2a0 ////

void FUN_005ae2a0(void)

{
  return;
}


//// FUNCTION FUN_005ae310 @ 005ae310 ////

void FUN_005ae310(void)

{
  return;
}


//// FUNCTION FUN_005ae320 @ 005ae320 ////

void FUN_005ae320(void)

{
  return;
}


//// FUNCTION FUN_005ae540 @ 005ae540 ////

void __fastcall FUN_005ae540(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = CProjectIncome_CreateForPlayerProject(*(void **)(param_1 + 0x8c));
  FUN_005b2b90(*(void **)(param_1 + 0x8c),puVar1);
  return;
}


//// FUNCTION FUN_005ae560 @ 005ae560 ////

undefined4 * __fastcall FUN_005ae560(undefined4 *param_1)

{
  FUN_0043b510(param_1);
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}


//// FUNCTION FUN_005ae680 @ 005ae680 ////

undefined4 * __cdecl FUN_005ae680(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    *param_3 = *param_1;
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    FUN_00471b10((longlong *)(param_3 + 2));
    param_1 = param_1 + 4;
    param_3 = param_3 + 4;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_005ae6d0 @ 005ae6d0 ////

int __cdecl FUN_005ae6d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x10;
    *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    iVar2 = param_3 + -0x10;
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    FUN_00471b10((longlong *)(param_3 + -8));
    param_2 = iVar1;
    param_3 = iVar2;
  } while (iVar1 != param_1);
  return iVar2;
}


//// FUNCTION FUN_005ae730 @ 005ae730 ////

void __cdecl FUN_005ae730(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb5891;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    FUN_00471b10((longlong *)(param_1 + 2));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005ae790 @ 005ae790 ////

void __fastcall FUN_005ae790(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb58a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x14);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x50) & (uint)param_1),param_1 + -0x14);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005ae8a0 @ 005ae8a0 ////

void __cdecl FUN_005ae8a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    FUN_00471b10((longlong *)(param_1 + 2));
  }
  return;
}


//// FUNCTION FUN_005ae930 @ 005ae930 ////

undefined4 * __cdecl FUN_005ae930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cb58d1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      FUN_00471b10((longlong *)(param_3 + 2));
    }
    param_3 = param_3 + 4;
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_005ae9c0 @ 005ae9c0 ////

void __fastcall FUN_005ae9c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  float10 fVar6;
  int iVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  float *pfVar10;
  float fVar11;
  
  piVar1 = (int *)GetPlayerStudio();
  (**(code **)(*piVar1 + 0x4c))();
  iVar2 = FUN_005b2220(*(int *)(param_1 + 0x8c));
  iVar2 = *(int *)(iVar2 + 100);
  iVar3 = FUN_005b2220(*(int *)(param_1 + 0x8c));
  if (iVar2 != *(int *)(iVar3 + 0x68)) {
    do {
      iVar3 = *(int *)(iVar2 + 0x14);
      fVar11 = 0.0;
      pTVar9 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar8 = &TM::CStaff::RTTI_Type_Descriptor;
      iVar7 = 0;
      piVar1 = (int *)FUN_005a6470(iVar3);
      piVar1 = (int *)FUN_00ace790(piVar1,iVar7,pTVar8,pTVar9,(int)fVar11);
      if (((piVar1 != (int *)0x0) && (iVar3 != 0)) &&
         (uVar4 = FUN_005a6140(iVar3), (char)uVar4 != '\0')) {
        iVar3 = *piVar1;
        pfVar10 = (float *)&stack0xffffffe8;
        pvVar5 = (void *)FUN_005b2b70(*(int *)(param_1 + 0x8c));
        FUN_005dd5c0(pvVar5,pfVar10);
        (**(code **)(iVar3 + 0x23c))();
        fVar6 = FUN_005b7570(*(int *)(param_1 + 0x8c),(float)piVar1);
        if ((float10)0.0 <= fVar6) {
          if ((float10)1.0 < fVar6) {
            fVar6 = (float10)1.0;
          }
        }
        else {
          fVar6 = (float10)0.0;
        }
        (**(code **)(*piVar1 + 0x244))((float)fVar6);
      }
      iVar2 = iVar2 + 0x18;
      iVar3 = FUN_005b2220(*(int *)(param_1 + 0x8c));
    } while (iVar2 != *(int *)(iVar3 + 0x68));
  }
  fVar11 = 0.0;
  pTVar9 = &TM::CStar::RTTI_Type_Descriptor;
  pTVar8 = &TM::CStaff::RTTI_Type_Descriptor;
  iVar2 = 0;
  piVar1 = (int *)FUN_005b2780(*(int *)(param_1 + 0x8c));
  piVar1 = (int *)FUN_00ace790(piVar1,iVar2,pTVar8,pTVar9,(int)fVar11);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    pfVar10 = (float *)&stack0xffffffe8;
    pvVar5 = (void *)FUN_005b2b70(*(int *)(param_1 + 0x8c));
    FUN_005dd5c0(pvVar5,pfVar10);
    (**(code **)(iVar2 + 0x23c))();
    fVar6 = FUN_005b7570(*(int *)(param_1 + 0x8c),(float)piVar1);
    if (fVar6 < (float10)0.0) {
      (**(code **)(*piVar1 + 0x244))(0);
      return;
    }
    if ((float10)1.0 < fVar6) {
      fVar6 = (float10)1.0;
    }
    (**(code **)(*piVar1 + 0x244))((float)fVar6);
  }
  return;
}


//// FUNCTION Release_PushGenreSaturationEntry @ 005aeb60 ////

void __fastcall Release_PushGenreSaturationEntry(int param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  float10 fVar7;
  int iVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  float fVar11;
  int iVar12;
  undefined4 *puVar13;
  float local_58;
  undefined4 local_54 [18];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb58e8;
  local_c = ExceptionList;
  local_58 = 1.0;
  ExceptionList = &local_c;
  iVar2 = AwardBonusManager_Get();
  if (iVar2 != 0) {
    iVar2 = 3;
    pvVar3 = (void *)AwardBonusManager_Get();
    cVar1 = AwardBonusManager_IsBonusActive(pvVar3,iVar2);
    if (cVar1 != '\0') {
      pvVar3 = (void *)0x0;
      iVar2 = 3;
      AwardBonusManager_Get();
      fVar7 = AwardBonus_GetValue(iVar2,pvVar3);
      local_58 = (float)fVar7;
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 0xac);
  if (iVar2 != *(int *)(param_1 + 0x8c) + 0xb8) {
    do {
      if (*(int *)(*(int *)(iVar2 + 8) + 0x1c0) == 4) {
        fVar11 = local_58;
        pvVar3 = (void *)FUN_004df220(*(int *)(iVar2 + 8));
        FUN_004d2940(pvVar3,fVar11);
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != *(int *)(param_1 + 0x8c) + 0xb8);
  }
  iVar2 = FUN_005b2220(*(int *)(param_1 + 0x8c));
  iVar2 = *(int *)(iVar2 + 100);
  iVar4 = FUN_005b2220(*(int *)(param_1 + 0x8c));
  if (iVar2 != *(int *)(iVar4 + 0x68)) {
    do {
      iVar4 = *(int *)(iVar2 + 0x14);
      if ((iVar4 != 0) && (uVar5 = FUN_005a6140(iVar4), (char)uVar5 != '\0')) {
        iVar12 = 0;
        pTVar10 = &TM::CStar::RTTI_Type_Descriptor;
        pTVar9 = &TM::CStaff::RTTI_Type_Descriptor;
        iVar8 = 0;
        piVar6 = (int *)FUN_005a6470(iVar4);
        pvVar3 = (void *)FUN_00ace790(piVar6,iVar8,pTVar9,pTVar10,iVar12);
        if (pvVar3 == (void *)0x0) {
          iVar12 = 0;
          pTVar10 = &TM::CExtra::RTTI_Type_Descriptor;
          pTVar9 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar8 = 0;
          piVar6 = (int *)FUN_005a6470(iVar4);
          pvVar3 = (void *)FUN_00ace790(piVar6,iVar8,pTVar9,pTVar10,iVar12);
          if (pvVar3 != (void *)0x0) {
            FUN_0056fae0(pvVar3,local_58);
          }
        }
        else {
          FUN_00585880(pvVar3,local_58);
        }
      }
      iVar2 = iVar2 + 0x18;
      iVar4 = FUN_005b2220(*(int *)(param_1 + 0x8c));
    } while (iVar2 != *(int *)(iVar4 + 0x68));
  }
  iVar4 = 0;
  pTVar10 = &TM::CStar::RTTI_Type_Descriptor;
  pTVar9 = &TM::CStaff::RTTI_Type_Descriptor;
  iVar2 = 0;
  piVar6 = (int *)FUN_005b2780(*(int *)(param_1 + 0x8c));
  pvVar3 = (void *)FUN_00ace790(piVar6,iVar2,pTVar9,pTVar10,iVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00585880(pvVar3,local_58);
  }
  FUN_005c48c0(*(void **)(param_1 + 0x8c),local_54);
  puVar13 = local_54;
  local_4 = 0;
  GenreSaturationTracker_GetInstance();
  GenreSaturationTracker_Push((uint)puVar13,local_58);
  local_4 = 0xffffffff;
  FUN_00526bb0(local_54);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005aed70 @ 005aed70 ////

void __cdecl FUN_005aed70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cb5911;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      FUN_00471b10((longlong *)(param_1 + 2));
    }
    param_1 = param_1 + 4;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_005aee60 @ 005aee60 ////

void __fastcall FUN_005aee60(int param_1)

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


//// FUNCTION FUN_005aeed0 @ 005aeed0 ////

undefined4 * FUN_005aeed0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_005aed70(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_005aef00 @ 005aef00 ////

void __fastcall FUN_005aef00(int param_1)

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


//// FUNCTION FUN_005aef30 @ 005aef30 ////

void __fastcall FUN_005aef30(int param_1)

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


//// FUNCTION FUN_005aef60 @ 005aef60 ////

void __fastcall FUN_005aef60(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_005aef90 @ 005aef90 ////

void __fastcall FUN_005aef90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2996c;
  param_1[0x14] = &PTR_LAB_00d2994c;
  if ((void *)param_1[0x33] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x33]);
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_005aa6d0(param_1);
  return;
}


//// FUNCTION FUN_005aeff0 @ 005aeff0 ////

void FUN_005aeff0(void)

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
  puStack_8 = &LAB_00cb5928;
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


//// FUNCTION FUN_005af060 @ 005af060 ////

undefined4 * __thiscall FUN_005af060(void *this,byte param_1)

{
  FUN_005aef90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005af0d0 @ 005af0d0 ////

void __thiscall FUN_005af0d0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int iVar5;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cb5940;
  local_10 = ExceptionList;
  local_1c = param_3[2];
  local_24[0] = *param_3;
  local_18 = param_3[3];
  local_14 = &stack0xffffffd0;
  ExceptionList = &local_10;
  FUN_00471b10((longlong *)&local_1c);
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - iVar2 >> 4;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - iVar2 >> 4;
    }
    if (0xfffffffU - iVar5 < param_2) {
      uVar1 = FUN_005aeff0();
      iVar2 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - iVar2 >> 4;
    }
    if (uVar1 < iVar5 + param_2) {
      if (0xfffffff - (uVar1 >> 1) < uVar1) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 + (uVar1 >> 1);
      }
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - iVar2 >> 4;
      }
      if (uVar1 < iVar5 + param_2) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)((int)this + 8) - iVar2 >> 4;
        }
        uVar1 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar1 * 0x10);
      local_8 = 0;
      puVar4 = FUN_005ae930(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_005aed70(puVar4,param_2,local_24);
      FUN_005ae930(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2 * 4);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 8) - (int)_Memory >> 4;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar1 * 4;
      *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 4;
      *(undefined4 **)((int)this + 4) = puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar3 - (int)param_1 >> 4) < param_2) {
      FUN_005ae930(param_1,puVar3,param_1 + param_2 * 4);
      local_8 = 2;
      FUN_005aeed0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 4),local_24);
      iVar2 = *(int *)((int)this + 8) + param_2 * 0x10;
      *(int *)((int)this + 8) = iVar2;
      local_8 = 0xffffffff;
      FUN_005ae8a0(param_1,(undefined4 *)(iVar2 + param_2 * -0x10),local_24);
      ExceptionList = local_10;
      return;
    }
    puVar4 = FUN_005ae930(puVar3 + param_2 * -4,puVar3,puVar3);
    *(undefined4 **)((int)this + 8) = puVar4;
    FUN_005ae6d0((int)param_1,(int)(puVar3 + param_2 * -4),(int)puVar3);
    FUN_005ae8a0(param_1,param_1 + param_2 * 4,local_24);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_005af350 @ 005af350 ////

void __thiscall FUN_005af350(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 4);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 8) - iVar4 >> 4;
  }
  if (uVar3 < param_1) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 8) - iVar4 >> 4;
    }
    FUN_005af0d0(this,*(undefined4 **)((int)this + 8),param_1 - iVar4,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if (((iVar4 != 0) &&
      (puVar2 = *(undefined4 **)((int)this + 8), param_1 < (uint)((int)puVar2 - iVar4 >> 4))) &&
     (puVar1 = (undefined4 *)(param_1 * 0x10 + iVar4), puVar1 != puVar2)) {
    puVar2 = FUN_005ae680(puVar2,puVar2,puVar1);
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  return;
}


//// FUNCTION FUN_005af420 @ 005af420 ////

void FUN_005af420(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *unaff_EDI;
  uint local_8;
  uint local_4;
  
  FUN_0098a430(unaff_EDI,8);
  FUN_0098a430(unaff_EDI + 2,8);
  uVar2 = 0;
  if (DAT_010583e0 == 0) {
    if (unaff_EDI[5] == 0) {
      local_8 = 0;
    }
    else {
      local_8 = (int)(unaff_EDI[6] - unaff_EDI[5]) >> 4;
    }
    FUN_0098a3a0(&local_8);
    for (uVar3 = 0;
        (iVar4 = unaff_EDI[5], iVar4 != 0 && (uVar3 < (uint)(unaff_EDI[6] - iVar4 >> 4)));
        uVar3 = uVar3 + 1) {
      FUN_0098a430((undefined4 *)(iVar4 + uVar2),4);
      FUN_0098a430((undefined4 *)(iVar4 + uVar2) + 2,8);
      uVar2 = uVar2 + 0x10;
    }
  }
  else if (DAT_010583e0 == 1) {
    local_8 = 0;
    if ((void *)unaff_EDI[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)unaff_EDI[5]);
    }
    unaff_EDI[5] = 0;
    unaff_EDI[6] = 0;
    unaff_EDI[7] = 0;
    SLVAR_LoadUint(&local_8);
    local_4 = local_8;
    FUN_0043b510((undefined4 *)&stack0xffffffdc);
    FUN_005af350(unaff_EDI + 4,local_4);
    if (local_8 != 0) {
      iVar4 = 0;
      do {
        iVar1 = unaff_EDI[5];
        FUN_0098a430((undefined4 *)(iVar1 + iVar4),4);
        FUN_0098a430((undefined4 *)(iVar1 + iVar4) + 2,8);
        uVar2 = uVar2 + 1;
        iVar4 = iVar4 + 0x10;
      } while (uVar2 < local_8);
    }
  }
  return;
}


//// FUNCTION FUN_005af540 @ 005af540 ////

void __fastcall FUN_005af540(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5960;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhaseRelease.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x2e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("Quality");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x88));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhaseRelease.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x2f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe5449c);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("AllReceipts");
  if ((char)uVar3 != '\0') {
    FUN_005af420();
  }
  FUN_005aa400(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005af730 @ 005af730 ////

undefined4 * __fastcall FUN_005af730(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005aa600(param_1);
  *param_1 = &PTR_FUN_00d2996c;
  param_1[0x14] = &PTR_LAB_00d2994c;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x24] = 7;
  FUN_004015d0(param_1 + 0x25,"project_phase_release",0x15);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005af7c0 @ 005af7c0 ////

int * __cdecl FUN_005af7c0(int *param_1)

{
  undefined2 uVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  wchar_t *in_stack_ffffff9c;
  uint in_stack_ffffffa0;
  uint in_stack_ffffffa4;
  int iVar5;
  undefined4 **ppuVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 *local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb59a3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_38 = operator_new(0xe0);
  local_4 = 0;
  if (local_38 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_005af730(local_38);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0xc))();
  FUN_0045f620(param_1,(undefined4 *)&stack0xffffff9c);
  puStack_8 = (undefined1 *)0xffffffff;
  pvVar3 = (void *)FUN_005b25f0((int)param_1);
  FUN_007546f0(pvVar3,in_stack_ffffff9c,in_stack_ffffffa0,in_stack_ffffffa4);
  pvVar3 = (void *)FUN_005b25f0((int)param_1);
  FUN_00759a80(pvVar3);
  local_38 = (undefined4 *)0x0;
  uStack_34 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_30 = 0xffffffff;
  uStack_34 = FUN_009b01a0("UI_CASH_SOUNDS");
  puVar8 = &DAT_00d17518;
  iVar7 = 0;
  ppuVar6 = &local_38;
  iVar5 = 2;
  pvVar3 = (void *)FUN_004f3b20();
  FUN_004f3270(pvVar3,iVar5,(byte *)ppuVar6,iVar7,puVar8);
  piVar9 = param_1;
  pvVar3 = (void *)FUN_00843f00();
  FUN_00843e90(pvVar3,piVar9);
  FUN_005b0e90(param_1,DAT_00e4fa4c);
  pvVar3 = (void *)FUN_005b2330((int)param_1);
  FUN_005c8c40(pvVar3);
  FUN_005b4f80((void *)piVar2[0x23]);
  FUN_004aa180(DAT_0104a8ac,param_1,1);
  puVar4 = CProjectIncome_CreateForPlayerProject((void *)piVar2[0x23]);
  FUN_005b2b90((void *)piVar2[0x23],puVar4);
  FUN_005ae9c0((int)piVar2);
  Release_PushGenreSaturationEntry((int)piVar2);
  FUN_005b9050(param_1);
  iVar5 = GetPlayerStudio();
  *(int *)(iVar5 + 0x1e4) = *(int *)(iVar5 + 0x1e4) + 1;
  FUN_005b86f0(param_1);
  FUN_005c1690(param_1);
  iVar5 = FUN_0054b120();
  if (iVar5 != 0) {
    FUN_0054b120();
    FUN_0054af60();
  }
  uVar1 = FUN_005b60b0((int)param_1);
  if ((char)uVar1 != '\0') {
    FUN_00520040();
  }
  ExceptionList = pvStack_10;
  return piVar2;
}


//// FUNCTION FUN_005af970 @ 005af970 ////

void __fastcall FUN_005af970(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x14));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005af9a0 @ 005af9a0 ////

void FUN_005af9a0(void)

{
  return;
}


//// FUNCTION FUN_005af9e0 @ 005af9e0 ////

void __fastcall FUN_005af9e0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  void *this;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb59bb;
  pvStack_c = ExceptionList;
  puVar2 = *(undefined4 **)(param_1[0x23] + 0xa0);
  puVar5 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    iVar3 = param_1[0x23];
    piVar1 = (int *)(iVar3 + 0x8c);
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(iVar3 + 0xa0) = 0;
    (**(code **)*piVar1)();
  }
  cVar4 = (**(code **)(*param_1 + 0x3c))();
  if (cVar4 != '\0') {
    this = operator_new(0x230);
    uStack_4 = 0;
    if (this != (void *)0x0) {
      puVar5 = FUN_004db3e0(this,param_1[0x23]);
    }
    iVar3 = param_1[0x23];
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)(iVar3 + 0x8c) + 4))();
    *(undefined4 **)(iVar3 + 0xa0) = puVar5;
    (*(code *)**(undefined4 **)(iVar3 + 0x8c))();
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005afb20 @ 005afb20 ////

void __thiscall FUN_005afb20(void *this,void *param_1)

{
  void *this_00;
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)this + 0x28))();
  if (cVar1 == '\0') {
    FUN_005a9ec0(this,param_1);
    FUN_005a9fd0(this,param_1);
    FUN_005a9dc0(this,param_1);
    FUN_005aa0b0(this,param_1);
    this_00 = *(void **)(*(int *)((int)this + 0x8c) + 0xa0);
    if (this_00 != (void *)0x0) {
      FUN_004dd1e0(this_00,param_1);
    }
  }
  return;
}


//// FUNCTION FUN_005afbc0 @ 005afbc0 ////

undefined4 * __thiscall FUN_005afbc0(void *this,undefined4 *param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 0x8c) != 0) {
    iVar1 = FUN_005b2b80(*(int *)((int)this + 0x8c));
    if (iVar1 != 0) {
      puVar2 = param_1;
      this_00 = (void *)FUN_005b2b80(*(int *)((int)this + 0x8c));
      FUN_005d7980(this_00,puVar2);
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}


//// FUNCTION FUN_005afc10 @ 005afc10 ////

void __fastcall FUN_005afc10(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb59d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x14);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x50) & (uint)param_1),param_1 + -0x14);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005afce0 @ 005afce0 ////

void __fastcall FUN_005afce0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5a00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhaseShoot.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("Finished");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 100),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PhaseShoot.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar3 = FUN_0098b490("FirstShot");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x65),1);
  }
  FUN_005aa400(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005afee0 @ 005afee0 ////

int __fastcall FUN_005afee0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 0xac); iVar1 != *(int *)(param_1 + 0x8c) + 0xb8;
      iVar1 = *(int *)(iVar1 + 4)) {
    if (*(int *)(*(int *)(iVar1 + 8) + 0x1c0) == 4) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}


//// FUNCTION FUN_005b0390 @ 005b0390 ////

void __thiscall FUN_005b0390(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *this_00;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float local_8 [2];
  
  iVar4 = *(int *)((int)this + 0x8c);
  iVar7 = 0;
  for (iVar5 = *(int *)(iVar4 + 0xac); iVar5 != iVar4 + 0xb8; iVar5 = *(int *)(iVar5 + 4)) {
    iVar7 = iVar7 + 1;
  }
  this_00 = (void *)FUN_005b25d0(iVar4);
  if (this_00 == (void *)0x0) {
    if (iVar7 == 0) {
      *(undefined4 *)((int)this + 0xb8) = 0x3f800000;
    }
    else {
      iVar4 = FUN_005afee0((int)this);
      fVar1 = (float)iVar7;
      if (iVar7 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      if (*(float *)((int)this + 0xb8) < (float)iVar4 / fVar1) {
        *(float *)((int)this + 0xb8) = (float)iVar4 / fVar1;
      }
    }
  }
  else {
    iVar4 = FUN_005afee0((int)this);
    if (iVar7 == 0) {
      *(undefined4 *)((int)this + 0xb8) = 0x3f800000;
    }
    else {
      fVar1 = (float)iVar7;
      if (iVar7 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      fVar2 = (float)iVar4;
      if (iVar4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      fVar2 = fVar2 / fVar1;
      local_8[0] = fVar2;
      iVar5 = FUN_004df240((int)this_00);
      if (iVar5 != 0) {
        pfVar6 = (float *)FUN_004df450(this_00,local_8);
        fVar3 = (float)(iVar4 + 1);
        if (iVar4 + 1 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        local_8[0] = (fVar3 / fVar1 - fVar2) * *pfVar6 + fVar2;
      }
      if (*(float *)((int)this + 0xb8) < local_8[0]) {
        *(float *)((int)this + 0xb8) = local_8[0];
      }
    }
  }
  fVar1 = *(float *)((int)this + 0xb8);
  if (fVar1 < 0.0) {
    *param_1 = 0.0;
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_005b0510 @ 005b0510 ////

void __fastcall FUN_005b0510(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *this;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float local_8 [2];
  
  iVar4 = *(int *)(param_1 + 0x8c);
  iVar7 = 0;
  for (iVar5 = *(int *)(iVar4 + 0xac); iVar5 != iVar4 + 0xb8; iVar5 = *(int *)(iVar5 + 4)) {
    iVar7 = iVar7 + 1;
  }
  this = (void *)FUN_005b25d0(iVar4);
  if (this == (void *)0x0) {
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
      return;
    }
    iVar4 = FUN_005afee0(param_1);
    fVar1 = (float)iVar7;
    if (iVar7 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0xb8) = (float)iVar4 / fVar1;
    return;
  }
  iVar4 = FUN_005afee0(param_1);
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
    return;
  }
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)iVar4;
  if (iVar4 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar2 = fVar2 / fVar1;
  local_8[0] = fVar2;
  iVar5 = FUN_004df240((int)this);
  if (iVar5 == 0) {
    *(float *)(param_1 + 0xb8) = local_8[0];
    return;
  }
  pfVar6 = (float *)FUN_004df450(this,local_8);
  fVar3 = (float)(iVar4 + 1);
  if (iVar4 + 1 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)(param_1 + 0xb8) = (fVar3 / fVar1 - fVar2) * *pfVar6 + fVar2;
  return;
}


//// FUNCTION FUN_005b07c0 @ 005b07c0 ////

void __fastcall FUN_005b07c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d29b3c;
  param_1[0x14] = &PTR_LAB_00d29b18;
  FUN_005aa6d0(param_1);
  return;
}


//// FUNCTION FUN_005b07f0 @ 005b07f0 ////

undefined4 * __fastcall FUN_005b07f0(undefined4 *param_1)

{
  FUN_005aa600(param_1);
  *param_1 = &PTR_FUN_00d29b3c;
  param_1[0x14] = &PTR_LAB_00d29b18;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0xb5) = 1;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x24] = 5;
  FUN_004015d0(param_1 + 0x25,"project_phase_shoot",0x13);
  return param_1;
}


//// FUNCTION FUN_005b0840 @ 005b0840 ////

undefined4 * __thiscall FUN_005b0840(void *this,byte param_1)

{
  FUN_005b07c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005b0860 @ 005b0860 ////

int * __cdecl FUN_005b0860(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5a3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xc0);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_005b07f0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0xc))(param_1);
  if (*(char *)(piVar2[0x23] + 0x364) != '\0') {
    FUN_005b5840((void *)piVar2[0x23],'\0');
  }
  ExceptionList = puVar1;
  return piVar2;
}


//// FUNCTION FUN_005b08e0 @ 005b08e0 ////

void __fastcall FUN_005b08e0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x14));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005b0920 @ 005b0920 ////

void FUN_005b0920(void)

{
  return;
}


//// FUNCTION FUN_005b0990 @ 005b0990 ////

void __thiscall FUN_005b0990(void *this,float *param_1)

{
  float fVar1;
  void *pvVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = &local_8;
  pvVar2 = (void *)FUN_005b2130(*(int *)((int)this + 0x8c));
  pfVar3 = (float *)FUN_004bdbd0(pvVar2,puVar4);
  fVar1 = *pfVar3;
  puVar4 = &local_4;
  pvVar2 = (void *)FUN_005b2130(*(int *)((int)this + 0x8c));
  pfVar3 = (float *)FUN_004bdbc0(pvVar2,puVar4);
  fVar1 = *pfVar3 / fVar1;
  if (fVar1 < 0.0) {
LAB_005b0a06:
    *param_1 = 0.0;
    return;
  }
  if (fVar1 <= 1.0) {
    if (fVar1 < 0.0) goto LAB_005b0a06;
    if (fVar1 <= 1.0) goto LAB_005b0a30;
  }
  fVar1 = 1.0;
LAB_005b0a30:
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_005b0a40 @ 005b0a40 ////

void __fastcall FUN_005b0a40(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5a58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1 + -0x14);
  pcVar3 = (char *)FUN_00acdb9e(iVar2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_2c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  FUN_0098be10(&puStack_2c);
  Serialization_RegisterPointerMapEntry
            ((char *)(-(uint)(param_1 != (int *)0x50) & (uint)param_1),param_1 + -0x14);
  Serialization_WriteObjectID((int)param_1);
  (**(code **)(*param_1 + 8))();
  Serialization_WriteObjectFooter((int)param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005b0b10 @ 005b0b10 ////

int __fastcall FUN_005b0b10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = 0;
  puVar5 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      iVar2 = *(int *)(param_1 + 0x8c);
      iVar3 = FUN_00577d80(puVar5[2]);
      if (iVar3 == iVar2) {
        iVar4 = iVar4 + 1;
      }
      puVar1 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
  }
  return iVar4;
}


//// FUNCTION FUN_005b0ca0 @ 005b0ca0 ////

undefined4 * __fastcall FUN_005b0ca0(undefined4 *param_1)

{
  FUN_005aa600(param_1);
  *param_1 = &PTR_FUN_00d29c14;
  param_1[0x14] = &PTR_LAB_00d29bf0;
  param_1[0x24] = 2;
  FUN_004015d0(param_1 + 0x25,"project_phase_writing",0x15);
  return param_1;
}


//// FUNCTION FUN_005b0cf0 @ 005b0cf0 ////

undefined4 * __thiscall FUN_005b0cf0(void *this,byte param_1)

{
  thunk_FUN_005aa6d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005b0d20 @ 005b0d20 ////

int * __cdecl FUN_005b0d20(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5a9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0xb4);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_005aa600(piVar1);
    *piVar1 = (int)&PTR_FUN_00d29c14;
    piVar1[0x14] = (int)&PTR_LAB_00d29bf0;
    piVar1[0x24] = 2;
    FUN_004015d0(piVar1 + 0x25,"project_phase_writing",0x15);
    piVar2 = piVar1;
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0xc))(param_1);
  ExceptionList = piVar1;
  return piVar2;
}


//// FUNCTION FUN_005b0e10 @ 005b0e10 ////

void __fastcall FUN_005b0e10(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005b0e90 @ 005b0e90 ////

void __thiscall FUN_005b0e90(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x288) = param_1;
  return;
}


//// FUNCTION FUN_005b0ea0 @ 005b0ea0 ////

void __thiscall FUN_005b0ea0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x288);
  return;
}


//// FUNCTION FUN_005b0eb0 @ 005b0eb0 ////

void __fastcall FUN_005b0eb0(int param_1)

{
  *(undefined4 *)(param_1 + 0x290) = DAT_00e4fa4c;
  return;
}


