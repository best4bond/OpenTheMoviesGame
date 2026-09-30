//// FUNCTION FUN_00401050 @ 00401050 ////

void __thiscall FUN_00401050(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x225) = param_1;
  return;
}


//// FUNCTION FUN_00401070 @ 00401070 ////

void __thiscall FUN_00401070(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x240) = param_1;
  return;
}


//// FUNCTION FUN_004010a0 @ 004010a0 ////

int __fastcall FUN_004010a0(int param_1)

{
  return param_1 + 0x294;
}


//// FUNCTION FUN_004010d0 @ 004010d0 ////

int * __thiscall FUN_004010d0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00401110 @ 00401110 ////

int * __thiscall FUN_00401110(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00401150 @ 00401150 ////

int * __thiscall FUN_00401150(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00401180 @ 00401180 ////

int * __thiscall FUN_00401180(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004011c0 @ 004011c0 ////

int * __thiscall FUN_004011c0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00401200 @ 00401200 ////

int * __thiscall FUN_00401200(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00401270 @ 00401270 ////

int __cdecl FUN_00401270(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  
  while( true ) {
    bVar1 = *param_1;
    bVar2 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = param_1[1];
    bVar2 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar2) - (uint)(bVar2 != 0);
}


//// FUNCTION FUN_004012c0 @ 004012c0 ////

float10 FUN_004012c0(float param_1)

{
  float10 fVar1;
  float10 extraout_ST0;
  ulonglong uVar2;
  
  if (param_1 <= 0.0) {
    uVar2 = FUN_00acd42c();
    fVar1 = extraout_ST0 - (float10)(int)uVar2 * (float10)6.2831855;
    if ((float10)3.1415927 < fVar1) {
      fVar1 = fVar1 - (float10)6.2831855;
    }
    fVar1 = -fVar1;
  }
  else {
    uVar2 = FUN_00acd42c();
    fVar1 = (float10)param_1 - (float10)(int)uVar2 * (float10)6.2831855;
    if ((float10)3.1415927 < fVar1) {
      return fVar1 - (float10)6.2831855;
    }
  }
  return fVar1;
}


//// FUNCTION FUN_00401340 @ 00401340 ////

float * __thiscall FUN_00401340(void *this,float param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_004012c0(param_1);
  *(float *)this = (float)fVar1;
  return this;
}


//// FUNCTION FUN_00401380 @ 00401380 ////

void FUN_00401380(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      (*(code *)param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


//// FUNCTION FUN_004013b0 @ 004013b0 ////

void __fastcall FUN_004013b0(int *param_1)

{
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_004013f0 @ 004013f0 ////

int __fastcall FUN_004013f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 8); iVar1 != param_1 + 0x14; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


//// FUNCTION FUN_00401440 @ 00401440 ////

int __fastcall FUN_00401440(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x12] + -1;
  param_1[0x12] = iVar1;
  if (iVar1 == 0) {
    (**(code **)*param_1)(1);
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00401490 @ 00401490 ////

void __fastcall FUN_00401490(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004014c0 @ 004014c0 ////

void __fastcall FUN_004014c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_004014e0 @ 004014e0 ////

void __fastcall FUN_004014e0(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00401560 @ 00401560 ////

void __fastcall FUN_00401560(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_004015d0 @ 004015d0 ////

void __thiscall FUN_004015d0(void *this,char *param_1,uint param_2)

{
  uint _Size;
  void *pvVar1;
  
  if (*(uint *)((int)this + 8) <= param_2) {
    if (0x14 < *(uint *)((int)this + 8)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    _Size = param_2 + 0x20 & 0xffffffe0;
    *(uint *)((int)this + 8) = _Size;
    pvVar1 = _malloc(_Size);
    *(void **)this = pvVar1;
  }
  _strncpy(*(char **)this,param_1,param_2);
  *(uint *)((int)this + 4) = param_2;
  *(undefined1 *)(param_2 + *(int *)this) = 0;
  return;
}


//// FUNCTION FUN_00401670 @ 00401670 ////

int __fastcall FUN_00401670(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x1b4); iVar1 != param_1 + 0x1c0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


//// FUNCTION FUN_00401690 @ 00401690 ////

void __fastcall FUN_00401690(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004016a0 @ 004016a0 ////

void __thiscall FUN_004016a0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x260) + 4))();
  *(undefined4 *)((int)this + 0x274) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x260))();
  (**(code **)(*(int *)((int)this + 0x278) + 4))();
  *(undefined4 *)((int)this + 0x28c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x278))();
  return;
}


//// FUNCTION FUN_004016f0 @ 004016f0 ////

void __thiscall FUN_004016f0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x260) + 4))();
  *(undefined4 *)((int)this + 0x274) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x260))();
  return;
}


//// FUNCTION FUN_00401720 @ 00401720 ////

uint __fastcall FUN_00401720(int param_1)

{
  void *this;
  undefined4 in_EAX;
  uint uVar1;
  undefined2 extraout_var;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_1 + 0x292));
  if (((*(char *)(param_1 + 0x292) == '\0') && (uVar1 = 0, *(int *)(param_1 + 0x25c) != 0)) &&
     (this = *(void **)(*(int *)(param_1 + 0x25c) + 0x214), uVar1 = 0, this != (void *)0x0)) {
    uVar1 = FUN_009734c0(this,(byte *)0xd16590);
    if ((char)uVar1 != '\0') {
      fVar2 = FUN_009722e0(*(int *)(*(int *)(param_1 + 0x25c) + 0x214),(byte *)0xd16590);
      fVar3 = (float10)1.0;
      uVar1 = CONCAT22(extraout_var,
                       (ushort)(fVar3 < fVar2) << 8 | (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
                       (ushort)(fVar3 == fVar2) << 0xe);
      if (fVar3 != fVar2) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00401780 @ 00401780 ////

void __fastcall FUN_00401780(int param_1)

{
  FUN_009757a0(*(void **)(*(int *)(param_1 + 0x25c) + 0x214),(byte *)0xd16590,1.0,0);
  return;
}


//// FUNCTION FUN_004017a0 @ 004017a0 ////

void __fastcall FUN_004017a0(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 0x225) = 1;
  (**(code **)(*(int *)param_1[0x4b] + 0x114))();
  param_1[0x90] = 3;
  if ((int *)param_1[0x9d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x9d] + 0x1c))(param_1[0x4b]);
  }
  *(undefined1 *)(param_1 + 0x89) = 0;
  TMCharacter_CancelAction((void *)param_1[0x4b],param_1);
  return;
}


//// FUNCTION FUN_004017f0 @ 004017f0 ////

void __fastcall FUN_004017f0(int param_1)

{
  *(undefined1 *)(param_1 + 0x224) = 1;
  *(undefined1 *)(param_1 + 0x291) = 1;
  if (*(int **)(param_1 + 0x274) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x274) + 0x20))(*(undefined4 *)(param_1 + 300));
  }
  (**(code **)(**(int **)(param_1 + 300) + 0x110))();
  *(undefined1 *)(param_1 + 0x225) = 0;
  return;
}


//// FUNCTION FUN_00401830 @ 00401830 ////

undefined4 * __fastcall FUN_00401830(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int aiStack_3c [6];
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9c63c;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x240) == 1) {
    uStack_24 = 0x40199e;
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x3c);
    local_4 = 2;
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uStack_24 = 0x4019bb;
      puVar3 = FUN_0042a450(pvVar2,param_1);
    }
    *(undefined4 *)(*(int *)(param_1 + 300) + 0x200) = 0;
    *(undefined4 *)(*(int *)(param_1 + 300) + 0x1fc) = 0;
    ExceptionList = local_c;
    return puVar3;
  }
  if (*(int *)(param_1 + 0x240) == 2) {
    uStack_24 = 0x401911;
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x40);
    iVar5 = 0;
    local_4 = 3;
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uStack_24 = 0x40192e;
      puVar3 = FUN_0042a390(pvVar2,param_1);
    }
    pvVar2 = *(void **)(param_1 + 0x25c);
    iVar4 = *(int *)((int)pvVar2 + 0x1b4);
    local_4 = 0xffffffff;
    if (iVar4 != (int)pvVar2 + 0x1c0) {
      do {
        iVar4 = *(int *)(iVar4 + 4);
        iVar5 = iVar5 + 1;
      } while (iVar4 != (int)pvVar2 + 0x1c0);
      if (1 < iVar5) {
        FUN_004043a0(pvVar2,aiStack_3c,*(int *)(param_1 + 300));
        (**(code **)(**(int **)(param_1 + 300) + 0x160))();
      }
    }
    ExceptionList = local_c;
    return puVar3;
  }
  ExceptionList = &local_c;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x25c) + 0xe0))();
  (**(code **)(*(int *)(param_1 + 0x130) + 4))();
  *(undefined4 *)(param_1 + 0x144) = uVar1;
  (*(code *)**(undefined4 **)(param_1 + 0x130))();
  if (*(int *)(param_1 + 0x144) == 0) {
    uStack_24 = 0x4018bc;
    pvVar2 = operator_new(0x3c);
    local_4 = 1;
    if (pvVar2 != (void *)0x0) {
      uStack_24 = 0x4018d7;
      puVar3 = FUN_0042a2a0(pvVar2,param_1);
      goto LAB_004018db;
    }
  }
  else {
    uStack_24 = 0x40189c;
    pvVar2 = operator_new(0x5c);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      uStack_24 = 0x4018b3;
      puVar3 = FUN_0042a2d0(pvVar2,param_1);
      goto LAB_004018db;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_004018db:
  local_4 = 0xffffffff;
  FUN_004ab390(*(int *)(*(int *)(param_1 + 300) + 0x5d8));
  ExceptionList = local_c;
  return puVar3;
}


//// FUNCTION FUN_004019f0 @ 004019f0 ////

void __fastcall FUN_004019f0(int param_1)

{
  if (*(int **)(param_1 + 0x23c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004019fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x30))();
    return;
  }
  return;
}


//// FUNCTION FUN_00401a00 @ 00401a00 ////

void __thiscall FUN_00401a00(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0x23c);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)((int)this + 0x228) + 4))();
    *(undefined4 *)((int)this + 0x23c) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x228))();
  }
  (**(code **)(*(int *)((int)this + 0x228) + 4))();
  *(undefined4 *)((int)this + 0x23c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x228))();
  if (*(int *)((int)this + 0x23c) != 0) {
    piVar1 = (int *)(*(int *)((int)this + 0x23c) + 0x48);
    *piVar1 = *piVar1 + 1;
  }
  return;
}


//// FUNCTION FUN_00401a70 @ 00401a70 ////

void __fastcall FUN_00401a70(int param_1)

{
  char cVar1;
  float10 fVar2;
  float fStack_24;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  
  fStack_24 = *(float *)(param_1 + 300);
  local_18 = 0;
  local_14 = 0.0;
  local_10 = 0;
  cVar1 = (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(&local_18);
  if (cVar1 != '\0') {
    fVar2 = FUN_004012c0(local_14);
    fStack_24 = (float)fVar2;
    (**(code **)(**(int **)(param_1 + 300) + 0xa8))(&stack0xffffffe0,&fStack_24);
  }
  return;
}


//// FUNCTION FUN_00401ae0 @ 00401ae0 ////

undefined1 __thiscall FUN_00401ae0(void *this,int param_1,undefined4 param_2)

{
  int *this_00;
  undefined1 uVar1;
  float10 fVar2;
  
  uVar1 = 0;
  if ((*(int **)((int)this + 0x224) != (int *)0x0) && (*(char *)((int)this + 0x240) != '\0')) {
    if (*(int *)((int)this + 0x1f0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00401b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(**(int **)((int)this + 0x20c) + 0xd8))();
      return uVar1;
    }
    uVar1 = (**(code **)(**(int **)((int)this + 0x224) + 0xc))(param_1,param_2);
    this_00 = *(int **)((int)this + 0x20c);
    fVar2 = FUN_004012c0(*(float *)(param_1 + 0xc));
    FUN_004462a0(this_00,(float)fVar2);
    (**(code **)(*this_00 + 0x2c))(param_1);
    return uVar1;
  }
  if (*(int **)((int)this + 0x20c) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x20c) + 0xd8))(param_1,param_2);
  }
  return uVar1;
}


//// FUNCTION FUN_00401bd0 @ 00401bd0 ////

undefined1 __fastcall FUN_00401bd0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (*(int *)(param_1 + 300) != 0) {
    iVar2 = FUN_005998e0(*(int *)(param_1 + 300));
    if ((iVar2 == param_1) && (*(int *)(param_1 + 0x240) == 2)) {
      uVar3 = 1;
      goto LAB_00401bf6;
    }
  }
  uVar3 = 0;
LAB_00401bf6:
  iVar2 = (*(int **)(param_1 + 300))[0x13b];
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x34) != 4)) {
    uVar3 = 0;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 300) + 0x138))();
  if (cVar1 != '\0') {
    return 0;
  }
  return uVar3;
}


//// FUNCTION FUN_00401c30 @ 00401c30 ////

undefined4 __fastcall FUN_00401c30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x23c);
}


//// FUNCTION FUN_00401c40 @ 00401c40 ////

void __fastcall FUN_00401c40(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00401c60 @ 00401c60 ////

void __fastcall FUN_00401c60(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00401c90 @ 00401c90 ////

void __fastcall FUN_00401c90(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00401d70 @ 00401d70 ////

void __fastcall FUN_00401d70(int *param_1)

{
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00401dc0 @ 00401dc0 ////

void __fastcall FUN_00401dc0(undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  return;
}


//// FUNCTION FUN_00401de0 @ 00401de0 ////

undefined4 * __thiscall FUN_00401de0(void *this,char *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  if (param_2 == 0xffffffff) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    param_2 = (int)pcVar2 - (int)(param_1 + 1);
  }
  FUN_004015d0(this,param_1,param_2);
  return this;
}


//// FUNCTION FUN_00401e30 @ 00401e30 ////

void * __thiscall FUN_00401e30(void *this,undefined4 *param_1)

{
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  return this;
}


//// FUNCTION FUN_00401e80 @ 00401e80 ////

void __fastcall FUN_00401e80(undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  return;
}


//// FUNCTION FUN_00401ec0 @ 00401ec0 ////

undefined4 __cdecl FUN_00401ec0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = (byte *)*param_2;
  pbVar2 = (byte *)*param_1;
  while( true ) {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == 0);
}


//// FUNCTION FUN_00401fe0 @ 00401fe0 ////

void __fastcall FUN_00401fe0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00402010 @ 00402010 ////

void __fastcall FUN_00402010(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d165cc;
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


//// FUNCTION FUN_004020b0 @ 004020b0 ////

void __fastcall FUN_004020b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d165dc;
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


//// FUNCTION FUN_00402150 @ 00402150 ////

void __fastcall FUN_00402150(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d165ec;
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


//// FUNCTION FUN_004021a0 @ 004021a0 ////

void __fastcall FUN_004021a0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d165fc;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_004021d0 @ 004021d0 ////

void __fastcall FUN_004021d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_004021f0 @ 004021f0 ////

void __fastcall FUN_004021f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d165fc;
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


//// FUNCTION FUN_00402290 @ 00402290 ////

void __fastcall FUN_00402290(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1660c;
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


//// FUNCTION FUN_004022e0 @ 004022e0 ////

void __fastcall FUN_004022e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d165ac;
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


//// FUNCTION FUN_00402330 @ 00402330 ////

void __fastcall FUN_00402330(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d165bc;
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


//// FUNCTION FUN_00402380 @ 00402380 ////

undefined4 * __thiscall FUN_00402380(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9c707;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053d690(this);
  local_4 = 0;
  FUN_008ab900((undefined4 *)((int)this + 0x50));
  *(undefined ***)this = &PTR_FUN_00d16660;
  *(undefined4 *)((int)this + 0x50) = &PTR_LAB_00d16638;
  piVar1 = (int *)((int)this + 0x11c);
  *(undefined4 *)((int)this + 0x124) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 **)((int)this + 0x124) = (undefined4 *)((int)this + 0x118);
  *(undefined4 *)((int)this + 0x118) = &PTR_FUN_00d165ac;
  *(int *)((int)this + 300) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x120) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 **)((int)this + 0x13c) = (undefined4 *)((int)this + 0x130);
  *(undefined4 *)((int)this + 0x130) = &PTR_FUN_00d165ec;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 **)((int)this + 0x154) = (undefined4 *)((int)this + 0x148);
  *(undefined4 *)((int)this + 0x148) = &PTR_LAB_00d165dc;
  *(undefined4 *)((int)this + 0x15c) = 0;
  local_4._0_1_ = 4;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x160),0x24,4,FUN_00401e80,FUN_00401690);
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(uint *)((int)this + 0x210) = *(uint *)((int)this + 0x210) & 0xfffffffc;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined1 *)((int)this + 0x225) = 1;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 **)((int)this + 0x234) = (undefined4 *)((int)this + 0x228);
  *(undefined4 *)((int)this + 0x228) = &PTR_FUN_00d165cc;
  *(undefined4 *)((int)this + 0x23c) = 0;
  piVar1 = (int *)((int)this + 0x248);
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0xffffffff;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(int **)((int)this + 0x254) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d165fc;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 **)((int)this + 0x26c) = (undefined4 *)((int)this + 0x260);
  *(undefined4 *)((int)this + 0x260) = &PTR_LAB_00d165bc;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 **)((int)this + 0x284) = (undefined4 *)((int)this + 0x278);
  *(undefined4 *)((int)this + 0x278) = &PTR_LAB_00d1660c;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined1 *)((int)this + 0x290) = 0;
  *(undefined1 *)((int)this + 0x291) = 0;
  *(undefined1 *)((int)this + 0x292) = 0;
  *(undefined1 **)((int)this + 0x294) = (undefined1 *)((int)this + 0x2a0);
  *(undefined1 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0x14;
  local_4 = CONCAT31(local_4._1_3_,0xc);
  *(void **)((int)this + 0x1f8) = this;
  FUN_00acdb9e(0xe4ddc8);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x1fc) = iVar3;
  if (DAT_00e4ddc4 != '\0') {
    iVar3 = 0x1f0;
    pcVar5 = "CharacterLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe4ddc8);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    DAT_00e4ddc4 = '\0';
  }
  *(void **)((int)this + 0x208) = this;
  FUN_00acdb9e(0xe4ddc8);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x20c) = iVar3;
  if (s___AVCActivity_TM___00e4ddb0[0x13] != '\0') {
    iVar3 = 0x200;
    pcVar5 = "ManagerLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe4ddc8);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    s___AVCActivity_TM___00e4ddb0[0x13] = '\0';
  }
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x25c) = param_2;
  (**(code **)*piVar1)();
  piVar1 = (int *)(*(int *)((int)this + 0x25c) + 0x48);
  *piVar1 = *piVar1 + 1;
  (**(code **)(**(int **)((int)this + 0x25c) + 0xa8))();
  *(undefined1 *)((int)this + 0x224) = 0;
  ExceptionList = this;
  return this;
}


//// FUNCTION FUN_00402690 @ 00402690 ////

void __fastcall FUN_00402690(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00c9c7f3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d16660;
  param_1[0x14] = &PTR_LAB_00d16638;
  local_4 = 0xc;
  if (*(char *)(param_1 + 0x89) != '\0') {
    *(undefined1 *)((int)param_1 + 0x225) = 1;
    (**(code **)(*(int *)param_1[0x4b] + 0x114))();
    param_1[0x90] = 3;
    if ((int *)param_1[0x9d] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x9d] + 0x1c))(param_1[0x4b]);
    }
  }
  if ((void *)param_1[0x51] != (void *)0x0) {
    FUN_00497f40((void *)param_1[0x51],param_1[0x4b]);
  }
  if ((undefined4 *)param_1[0x7d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x7d] = param_1[0x7c];
  }
  if (param_1[0x7c] != 0) {
    *(undefined4 *)(param_1[0x7c] + 4) = param_1[0x7d];
  }
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  if ((void *)param_1[0x8f] != (void *)0x0) {
    FUN_00842ef0((void *)param_1[0x8f],0);
    if ((*(byte *)(param_1 + 0x84) & 2) == 0) {
      (**(code **)(*(int *)param_1[0x8f] + 0x34))();
    }
    else {
      (**(code **)(*(int *)param_1[0x4b] + 0x108))(param_1[0x8f]);
    }
  }
  if ((undefined4 *)param_1[0x81] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x81] = param_1[0x80];
  }
  if (param_1[0x80] != 0) {
    *(undefined4 *)(param_1[0x80] + 4) = param_1[0x81];
  }
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  if ((int *)param_1[0x97] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x97] + 0xac))(param_1);
    puVar2 = (undefined4 *)param_1[0x97];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(param_1[0x92] + 4))();
      param_1[0x97] = 0;
      (**(code **)param_1[0x92])();
    }
  }
  if ((undefined4 *)param_1[0x57] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x57])(1);
  }
  (**(code **)(param_1[0x52] + 4))();
  param_1[0x57] = 0;
  (**(code **)param_1[0x52])();
  puVar2 = (undefined4 *)param_1[0x8f];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x8a] + 4))();
    param_1[0x8f] = 0;
    (**(code **)param_1[0x8a])();
  }
  puVar2 = (undefined4 *)FUN_005998e0(param_1[0x4b]);
  if (puVar2 == param_1) {
    FUN_00598bf0((void *)param_1[0x4b]);
  }
  FUN_0053d9e0((int *)param_1[0x4b] + 0x105,'\0',(int *)param_1[0x4b]);
  if (0x14 < (uint)param_1[0xa7]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xa5]);
  }
  param_1[0x9e] = &PTR_LAB_00d1660c;
  if ((undefined4 *)param_1[0xa0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa0] = param_1[0x9f];
  }
  if (param_1[0x9f] != 0) {
    *(undefined4 *)(param_1[0x9f] + 4) = param_1[0xa0];
  }
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa3] = 0;
  if ((undefined4 *)param_1[0xa0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa0] = param_1[0x9f];
  }
  if (param_1[0x9f] != 0) {
    *(undefined4 *)(param_1[0x9f] + 4) = param_1[0xa0];
  }
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0x98] = &PTR_LAB_00d165bc;
  if ((undefined4 *)param_1[0x9a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x9a] = param_1[0x99];
  }
  if (param_1[0x99] != 0) {
    *(undefined4 *)(param_1[0x99] + 4) = param_1[0x9a];
  }
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9d] = 0;
  if ((undefined4 *)param_1[0x9a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x9a] = param_1[0x99];
  }
  if (param_1[0x99] != 0) {
    *(undefined4 *)(param_1[0x99] + 4) = param_1[0x9a];
  }
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x92] = &PTR_FUN_00d165fc;
  if ((undefined4 *)param_1[0x94] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x94] = param_1[0x93];
  }
  if (param_1[0x93] != 0) {
    *(undefined4 *)(param_1[0x93] + 4) = param_1[0x94];
  }
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x97] = 0;
  if ((undefined4 *)param_1[0x94] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x94] = param_1[0x93];
  }
  if (param_1[0x93] != 0) {
    *(undefined4 *)(param_1[0x93] + 4) = param_1[0x94];
  }
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x8a] = &PTR_FUN_00d165cc;
  if ((undefined4 *)param_1[0x8c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8c] = param_1[0x8b];
  }
  if (param_1[0x8b] != 0) {
    *(undefined4 *)(param_1[0x8b] + 4) = param_1[0x8c];
  }
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  if ((undefined4 *)param_1[0x8c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8c] = param_1[0x8b];
  }
  if (param_1[0x8b] != 0) {
    *(undefined4 *)(param_1[0x8b] + 4) = param_1[0x8c];
  }
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  if ((undefined4 *)param_1[0x81] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x81] = param_1[0x80];
  }
  if (param_1[0x80] != 0) {
    *(undefined4 *)(param_1[0x80] + 4) = param_1[0x81];
  }
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  if ((undefined4 *)param_1[0x7d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x7d] = param_1[0x7c];
  }
  if (param_1[0x7c] != 0) {
    *(undefined4 *)(param_1[0x7c] + 4) = param_1[0x7d];
  }
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  local_4._0_1_ = 4;
  _eh_vector_destructor_iterator_(param_1 + 0x58,0x24,4,FUN_00401690);
  param_1[0x52] = &PTR_LAB_00d165dc;
  if ((undefined4 *)param_1[0x54] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x54] = param_1[0x53];
  }
  if (param_1[0x53] != 0) {
    *(undefined4 *)(param_1[0x53] + 4) = param_1[0x54];
  }
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  if ((undefined4 *)param_1[0x54] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x54] = param_1[0x53];
  }
  if (param_1[0x53] != 0) {
    *(undefined4 *)(param_1[0x53] + 4) = param_1[0x54];
  }
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x4c] = &PTR_FUN_00d165ec;
  if ((undefined4 *)param_1[0x4e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4e] = param_1[0x4d];
  }
  if (param_1[0x4d] != 0) {
    *(undefined4 *)(param_1[0x4d] + 4) = param_1[0x4e];
  }
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  if ((undefined4 *)param_1[0x4e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4e] = param_1[0x4d];
  }
  if (param_1[0x4d] != 0) {
    *(undefined4 *)(param_1[0x4d] + 4) = param_1[0x4e];
  }
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x46] = &PTR_FUN_00d165ac;
  if ((undefined4 *)param_1[0x48] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x48] = param_1[0x47];
  }
  if (param_1[0x47] != 0) {
    *(undefined4 *)(param_1[0x47] + 4) = param_1[0x48];
  }
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  if ((undefined4 *)param_1[0x48] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x48] = param_1[0x47];
  }
  if (param_1[0x47] != 0) {
    *(undefined4 *)(param_1[0x47] + 4) = param_1[0x48];
  }
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_008ab6b0(param_1 + 0x14);
  local_4 = 0xffffffff;
  FUN_0053d4f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00402c40 @ 00402c40 ////

void __fastcall FUN_00402c40(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  undefined1 auStack_24 [4];
  char *pcStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  char acStack_14 [20];
  
  if ((int *)param_1[0x9d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x9d] + 0x14))(param_1[0x4b]);
    pcStack_20 = acStack_14;
    acStack_14[0] = '\0';
    uStack_1c = 0;
    uStack_18 = 0x14;
    _strncpy(pcStack_20,"task_repairman",0xe);
    uStack_1c = 0xe;
    pcStack_20[0xe] = '\0';
    uVar1 = FUN_00401ec0((undefined4 *)(param_1[0x8f] + 100),&pcStack_20);
    if (0x14 < uStack_18) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_20);
    }
    if ((char)uVar1 == '\0') {
      pcStack_20 = acStack_14;
      acStack_14[0] = '\0';
      uStack_1c = 0;
      uStack_18 = 0x14;
      _strncpy(pcStack_20,"task_builder",0xc);
      uStack_1c = 0xc;
      pcStack_20[0xc] = '\0';
      uVar1 = FUN_00401ec0((undefined4 *)(param_1[0x8f] + 100),&pcStack_20);
      if (0x14 < uStack_18) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_20);
      }
      if ((char)uVar1 != '\0') {
        piVar2 = (int *)FUN_008bc6c0(param_1[0x9d]);
        pfVar3 = (float *)(**(code **)(*piVar2 + 0xf0))(auStack_24);
        if (1.0 <= *pfVar3) {
          FUN_00401780((int)param_1);
        }
      }
    }
    else {
      piVar2 = (int *)FUN_008bc6c0(param_1[0x9d]);
      pfVar3 = (float *)(**(code **)(*piVar2 + 0xb8))(auStack_24);
      if (0.99 < *pfVar3) {
        FUN_009757a0(*(void **)(param_1[0x97] + 0x214),(byte *)0xd16590,1.0,0);
      }
    }
    if (((((int)param_1[0x90] < 2) && (iVar4 = param_1[0xa3], iVar4 != 0)) &&
        (*(char *)(iVar4 + 0x234) == '\0')) && (iVar4 = FUN_008b14d0(iVar4), (char)iVar4 != '\0'))
    goto LAB_00402dfd;
  }
  if (1 < (int)param_1[0x90]) {
    return;
  }
  if (*(char *)(param_1[0x97] + 0x2b1) == '\0') {
    return;
  }
  param_1[0x90] = 3;
LAB_00402dfd:
  TMCharacter_CancelAction((void *)param_1[0x4b],param_1);
  return;
}


//// FUNCTION FUN_00402e10 @ 00402e10 ////

undefined4 * __thiscall FUN_00402e10(void *this,byte param_1)

{
  FUN_00402690(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00402e80 @ 00402e80 ////

undefined4 __thiscall FUN_00402e80(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (int)(uint)*(byte *)((int)this + 0x4d))) {
    return *(undefined4 *)(*(int *)((int)this + 0x5c) + param_1 * 4);
  }
  return 0;
}


//// FUNCTION FUN_00402ea0 @ 00402ea0 ////

undefined4 __thiscall FUN_00402ea0(void *this,int param_1,int param_2)

{
  if ((((param_2 == -1) || (this = (void *)FUN_00976440(this,param_2), this != (void *)0x0)) &&
      (-1 < param_1)) && (param_1 < (int)(uint)*(byte *)((int)this + 0x4d))) {
    return *(undefined4 *)(*(int *)((int)this + 0x5c) + param_1 * 4);
  }
  return 0;
}


//// FUNCTION FUN_00402ef0 @ 00402ef0 ////

bool __thiscall FUN_00402ef0(void *this,int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  void *this_00;
  
  if (param_2 != -1) {
    this_00 = (void *)FUN_00976440(this,param_2);
    if (this_00 != (void *)0x0) {
      bVar2 = FUN_00402ef0(this_00,param_1,-1);
      return bVar2;
    }
    return true;
  }
  if (((-1 < param_1) && (param_1 < (int)(uint)*(byte *)((int)this + 0x4d))) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0x5c) + param_1 * 4), iVar1 != 0)) {
    return *(int *)(iVar1 + 0x18) == 0;
  }
  return true;
}


//// FUNCTION FUN_00402fd0 @ 00402fd0 ////

void __fastcall FUN_00402fd0(int param_1)

{
  if (((0.0 < *(float *)(param_1 + 700)) && (*(char *)(param_1 + 0x2b5) != '\0')) &&
     (*(char *)(param_1 + 0x2b7) != '\0')) {
    FUN_0046d8f0((float *)(param_1 + 0x2c0),param_1 + 700,0,0x20,0);
  }
  *(undefined1 *)(param_1 + 0x2b5) = 0;
  return;
}


//// FUNCTION FUN_00403020 @ 00403020 ////

void FUN_00403020(void)

{
  return;
}


//// FUNCTION FUN_004030b0 @ 004030b0 ////

void __cdecl FUN_004030b0(void *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  uVar4 = 0;
  uVar1 = FUN_00973ac0(param_2);
  if (uVar1 != 0) {
    do {
      iVar2 = FUN_00974ea0(param_2,uVar4);
      if ((iVar2 < 0) || ((int)(uint)*(byte *)((int)param_2 + 0x4e) <= iVar2)) {
        pbVar3 = (byte *)0x0;
      }
      else {
        pbVar3 = (byte *)FUN_009722a0(param_2,iVar2);
      }
      uVar6 = 0;
      fVar5 = FUN_00976530((int)param_2,uVar4);
      FUN_009757a0(param_1,pbVar3,(float)fVar5,uVar6);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  return;
}


//// FUNCTION FUN_00403110 @ 00403110 ////

void __thiscall FUN_00403110(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x2b2) = param_1;
  return;
}


//// FUNCTION FUN_00403130 @ 00403130 ////

void __fastcall FUN_00403130(int param_1)

{
  *(undefined1 *)(param_1 + 0x2b6) = 1;
  return;
}


//// FUNCTION FUN_00403180 @ 00403180 ////

void __fastcall FUN_00403180(int param_1)

{
  FUN_009757a0(*(void **)(param_1 + 0x214),(byte *)0xd16590,1.0,0);
  return;
}


//// FUNCTION FUN_004031a0 @ 004031a0 ////

undefined4 FUN_004031a0(void)

{
  return 0;
}


//// FUNCTION FUN_004031b0 @ 004031b0 ////

undefined4 __fastcall FUN_004031b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c8);
}


//// FUNCTION FUN_004031c0 @ 004031c0 ////

void __thiscall FUN_004031c0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x2c8) = param_1;
  return;
}


//// FUNCTION FUN_004031d0 @ 004031d0 ////

void __thiscall FUN_004031d0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x2ba) = param_1;
  return;
}


//// FUNCTION FUN_004031e0 @ 004031e0 ////

void __thiscall FUN_004031e0(void *this,int param_1)

{
  if (param_1 == 1) {
    *(undefined1 *)((int)this + 0x2b8) = 1;
    return;
  }
  if (param_1 == 2) {
    *(undefined1 *)((int)this + 0x2b9) = 1;
  }
  return;
}


//// FUNCTION FUN_00403230 @ 00403230 ////

uint __thiscall FUN_00403230(void *this,uint param_1)

{
  if (param_1 == 1) {
    return (uint)*(byte *)((int)this + 0x2b8);
  }
  if (param_1 == 2) {
    return (uint)*(byte *)((int)this + 0x2b9);
  }
  return param_1 & 0xffffff00;
}


//// FUNCTION FUN_00403290 @ 00403290 ////

int * __thiscall FUN_00403290(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00403380 @ 00403380 ////

void __thiscall FUN_00403380(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return;
}


//// FUNCTION FUN_004035b0 @ 004035b0 ////

void __fastcall FUN_004035b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = (int *)(param_1 + 0x14);
  while (piVar2 != piVar1) {
    *piVar2 = 0;
    piVar2 = (int *)piVar2[1];
    *(undefined4 *)(*piVar2 + 4) = 0;
  }
  *(int **)(param_1 + 8) = piVar1;
  *piVar1 = param_1 + 4;
  return;
}


//// FUNCTION FUN_00403650 @ 00403650 ////

void __fastcall FUN_00403650(undefined4 *param_1)

{
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00403660 @ 00403660 ////

void __fastcall FUN_00403660(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_004036d0 @ 004036d0 ////

void __thiscall FUN_004036d0(void *this,wchar_t *param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  
  if (*(uint *)((int)this + 8) <= param_2) {
    if (10 < *(uint *)((int)this + 8)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    uVar1 = param_2 + 0x20 & 0xffffffe0;
    *(uint *)((int)this + 8) = uVar1;
    pvVar2 = _malloc(uVar1 * 2);
    *(void **)this = pvVar2;
  }
  _wcsncpy(*(wchar_t **)this,param_1,param_2);
  *(uint *)((int)this + 4) = param_2;
  *(undefined2 *)(*(int *)this + param_2 * 2) = 0;
  return;
}


//// FUNCTION FUN_00403850 @ 00403850 ////

void __thiscall FUN_00403850(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x298) + 4))();
  *(undefined4 *)((int)this + 0x2ac) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x298))();
  return;
}


//// FUNCTION FUN_00403880 @ 00403880 ////

void __thiscall FUN_00403880(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)((int)this + 0x214) != 0) {
    (**(code **)(*(int *)this + 0xb4))();
    piVar1 = (int *)(param_3 + 0x7c);
    piVar2 = (int *)((int)this + 0x16c);
    *(int **)(param_3 + 0x80) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
    FUN_00978310(*(void **)((int)this + 0x214),param_1,param_2,*(void **)(param_3 + 0x90));
  }
  return;
}


//// FUNCTION FUN_004038e0 @ 004038e0 ////

void __cdecl FUN_004038e0(undefined4 *param_1,char *param_2,int param_3)

{
  void *this;
  float10 fVar1;
  undefined4 uVar2;
  float local_28 [5];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  this = (void *)FUN_0097c880(param_2,0,(undefined4 *)0x0,0);
  uVar2 = 0;
  local_28[0] = 0.0;
  fVar1 = FUN_004012c0(0.0);
  local_28[1] = 0.0;
  local_28[2] = 0.0;
  local_28[3] = 0.0;
  FUN_00978350(this,local_28 + 1,(float)fVar1,uVar2);
  FUN_009782d0(this,0,param_3,local_28 + 4,local_28);
  *param_1 = local_28[4];
  param_1[1] = local_14;
  param_1[2] = local_10;
  param_1[3] = local_c;
  param_1[4] = local_8;
  param_1[5] = local_4;
  param_1[3] = local_28[0];
  if (this != (void *)0x0) {
    FUN_00971df0(this);
  }
  return;
}


//// FUNCTION FUN_004039a0 @ 004039a0 ////

void __thiscall FUN_004039a0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x238) + 4))();
  *(undefined4 *)((int)this + 0x24c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x238))();
  return;
}


//// FUNCTION FUN_004039f0 @ 004039f0 ////

void __thiscall FUN_004039f0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar3 = param_1;
  FUN_00976e70(*(void **)((int)this + 0x214),param_1[0x86],param_1[0x87],(void *)0x0,'\0');
  piVar1 = (int *)puVar3[0x4b];
  FUN_004017a0(puVar3);
  local_c = *(undefined4 *)(piVar1[0x47] + 0x3c);
  local_8 = *(undefined4 *)(piVar1[0x47] + 0x40);
  local_4 = 0;
  iVar2 = *piVar1;
  uVar4 = FUN_0097fc20((void *)piVar1[0x47],(float *)&param_1);
  (**(code **)(iVar2 + 0xa8))(&local_c,uVar4);
  return;
}


//// FUNCTION FUN_00403a70 @ 00403a70 ////

void __fastcall FUN_00403a70(int param_1)

{
  int iVar1;
  float fVar2;
  void *this;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(char *)(param_1 + 699) == '\0') && (iVar1 = *(int *)(param_1 + 0x214), iVar1 != 0)) {
    local_4 = *(undefined4 *)(iVar1 + 0xbc);
    fVar2 = *(float *)(iVar1 + 0xc0);
    local_8 = *(undefined4 *)(iVar1 + 0xb8);
    local_c = *(undefined4 *)(iVar1 + 0xb4);
    uVar4 = *(undefined4 *)(iVar1 + 0x148);
    this = FUN_0097c450(*(char **)(param_1 + 0x18c),0,(undefined4 *)0x0,0);
    fVar3 = FUN_004012c0(fVar2);
    FUN_00978350(this,&local_c,(float)fVar3,uVar4);
    FUN_004030b0(this,*(void **)(param_1 + 0x214));
    if (*(void **)(param_1 + 0x214) != (void *)0x0) {
      FUN_00971df0(*(void **)(param_1 + 0x214));
      *(undefined4 *)(param_1 + 0x214) = 0;
    }
    *(void **)(param_1 + 0x214) = this;
    *(undefined1 *)(param_1 + 699) = 1;
  }
  return;
}


//// FUNCTION FUN_00403b40 @ 00403b40 ////

undefined4 __fastcall FUN_00403b40(int param_1)

{
  if (*(int *)(param_1 + 0x1b4) == param_1 + 0x1c0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b4) + 8) + 300);
}


//// FUNCTION FUN_00403b70 @ 00403b70 ////

void __fastcall FUN_00403b70(int param_1)

{
  void *this;
  undefined4 uVar1;
  float *pfVar2;
  int local_4;
  
  if (*(int *)(param_1 + 0x1b4) != param_1 + 0x1c0) {
    this = *(void **)(*(int *)(*(int *)(param_1 + 0x1b4) + 8) + 300);
    local_4 = param_1;
    uVar1 = FUN_00598ee0((int)this);
    if ((char)uVar1 != '\0') {
      pfVar2 = (float *)FUN_00585ec0(this,&local_4);
      FUN_009757a0(*(void **)(param_1 + 0x214),(byte *)"ai_drunk",*pfVar2,0);
    }
  }
  return;
}


//// FUNCTION FUN_00403db0 @ 00403db0 ////

undefined4 * __thiscall FUN_00403db0(void *this,byte param_1)

{
  if (0x14 < *(uint *)((int)this + 8)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)this);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00403de0 @ 00403de0 ////

undefined4 * __thiscall FUN_00403de0(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  return this;
}


//// FUNCTION FUN_00403e20 @ 00403e20 ////

void * __thiscall FUN_00403e20(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return this;
}


//// FUNCTION FUN_00403e50 @ 00403e50 ////

void __fastcall FUN_00403e50(undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  return;
}


//// FUNCTION FUN_00403e70 @ 00403e70 ////

void * __thiscall FUN_00403e70(void *this,undefined4 *param_1)

{
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  return this;
}


//// FUNCTION FUN_00403e90 @ 00403e90 ////

void * __thiscall FUN_00403e90(void *this,wchar_t *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00ace02d(param_1);
  FUN_004036d0(this,param_1,uVar1);
  return this;
}


//// FUNCTION FUN_00403f20 @ 00403f20 ////

undefined4 * __fastcall FUN_00403f20(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9c813;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_4 = 1;
  param_1[0xb] = param_1;
  FUN_00acdb9e(0xe4de0c);
  iVar1 = FUN_0097dda0();
  param_1[0xc] = iVar1;
  if (DAT_00e4de08 != '\0') {
    iVar1 = 0x24;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe4de0c);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    DAT_00e4de08 = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00403fe0 @ 00403fe0 ////

/* WARNING: Removing unreachable block (ram,0x00404008) */

void __fastcall FUN_00403fe0(undefined4 *param_1)

{
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[10] = param_1[9];
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1[9] + 4) = param_1[10];
  }
  param_1[9] = 0;
  param_1[10] = 0;
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1[9] + 4) = param_1[10];
  }
  param_1[9] = 0;
  param_1[10] = 0;
  if ((uint)param_1[2] < 0x15) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00404030 @ 00404030 ////

undefined4 * __thiscall FUN_00404030(void *this,byte param_1)

{
  FUN_00403fe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00404050 @ 00404050 ////

undefined4 * __thiscall
FUN_00404050(void *this,int param_1,int param_2,char *param_3,uint param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  void *unaff_retaddr;
  undefined **ppuVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puStack_50;
  uint uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00c9c833;
  local_c = ExceptionList;
  local_4 = 0;
  if (*(int *)((int)this + 0x214) == 0) {
    if (0x14 < param_5) {
      ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
      _free(param_3);
    }
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_c;
  (**(code **)(*(int *)this + 0xb4))();
  FUN_00975a70(*(void **)((int)this + 0x214),&uStack_2c,param_1,param_2);
  iVar3 = FUN_00402ea0(*(void **)((int)this + 0x214),uStack_2c,iStack_28);
  this_00 = operator_new(0xac);
  local_4._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    ppuVar5 = &puStack_50;
    puStack_50 = (undefined *)((uint)puStack_50 & 0xffffff00);
    uVar6 = 0;
    uVar7 = 0x14;
    FUN_004015d0(&stack0xffffffa4,param_3,param_4);
    puVar4 = FUN_0048e660(this_00,(uint)((*(uint *)(iVar3 + 0x48) & 0xc0000) == 0x40000),
                          *(undefined4 *)((int)this + 0x214),param_2,(char *)ppuVar5,uVar6,uVar7);
  }
  piVar1 = (int *)((int)this + 0x16c);
  puVar4[0x20] = piVar1;
  piVar2 = puVar4 + 0x1f;
  *piVar2 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar2;
  *piVar1 = (int)piVar2;
  piVar2 = (int *)puVar4[0x24];
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_24 = 0x3f800000;
  uStack_20 = 0x3f800000;
  uStack_1c = 0x3f800000;
  FUN_004012c0(0.0);
  pvStack_18 = (void *)0x447a0000;
  uStack_14 = 0x447a0000;
  uStack_10 = 0;
  (**(code **)(*piVar2 + 0x1c))();
  if (&DAT_00000014 < &stack0xffffffbc) {
                    /* WARNING: Subroutine does not return */
    puStack_50 = &UNK_004041bb;
    _free(unaff_retaddr);
  }
  ExceptionList = pvStack_18;
  return puVar4;
}


//// FUNCTION FUN_00404200 @ 00404200 ////

void __fastcall FUN_00404200(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  piVar2 = (int *)param_1[0x6d];
  iVar3 = 0;
  if (piVar2 != param_1 + 0x70) {
    do {
      piVar2 = (int *)piVar2[1];
      iVar3 = iVar3 + 1;
    } while (piVar2 != param_1 + 0x70);
    if (iVar3 == 1) {
      FUN_009840b0(&local_20,param_1 + 0x40);
      param_1[0xb0] = (int)local_20;
      param_1[0xb1] = (int)local_1c;
      return;
    }
  }
  piVar2 = (int *)param_1[0x6d];
  local_20 = 0.0;
  local_1c = 0.0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  for (; piVar2 != param_1 + 0x70; piVar2 = (int *)piVar2[1]) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0xd8))(&local_18,*(undefined4 *)(piVar2[2] + 300));
    FUN_009840b0(&local_20,&local_18);
    param_1[0xb0] = (int)(local_20 + (float)param_1[0xb0]);
    param_1[0xb1] = (int)(local_1c + (float)param_1[0xb1]);
  }
  iVar3 = 0;
  for (piVar2 = (int *)param_1[0x6d]; piVar2 != param_1 + 0x70; piVar2 = (int *)piVar2[1]) {
    iVar3 = iVar3 + 1;
  }
  fVar1 = (float)iVar3;
  if (iVar3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  param_1[0xb0] = (int)((1.0 / fVar1) * (float)param_1[0xb0]);
  param_1[0xb1] = (int)((1.0 / fVar1) * (float)param_1[0xb1]);
  return;
}


//// FUNCTION FUN_00404350 @ 00404350 ////

void __fastcall FUN_00404350(int *param_1)

{
  if ((0.0 < (float)param_1[0xaf]) && (*(char *)((int)param_1 + 0x2b7) != '\0')) {
    FUN_00404200(param_1);
    FUN_0046d8f0((float *)(param_1 + 0xb0),param_1 + 0xaf,0,0x20,1);
  }
  *(undefined1 *)((int)param_1 + 0x2b5) = 1;
  return;
}


//// FUNCTION FUN_004043a0 @ 004043a0 ////

int * __thiscall FUN_004043a0(void *this,int *param_1,int param_2)

{
  int *_Dest;
  int iVar1;
  uint _Count;
  char *_Source;
  int iVar2;
  undefined4 *puVar3;
  uint _Size;
  void *pvVar4;
  
  iVar2 = *(int *)((int)this + 0x1b4);
  do {
    if (iVar2 == (int)this + 0x1c0) {
LAB_004043d2:
      _Dest = param_1 + 3;
      *param_1 = (int)_Dest;
      *(char *)_Dest = '\0';
      param_1[1] = 0;
      param_1[2] = 0x14;
      _strncpy((char *)_Dest,"ai_puppet_wait.flm",0x12);
      param_1[1] = 0x12;
      *(undefined1 *)(*param_1 + 0x12) = 0;
      return param_1;
    }
    iVar1 = *(int *)(iVar2 + 8);
    if (*(int *)(iVar1 + 300) == param_2) {
      iVar2 = FUN_004010a0(iVar1);
      if (*(int *)(iVar2 + 4) != 0) {
        puVar3 = (undefined4 *)FUN_004010a0(iVar1);
        *param_1 = (int)(param_1 + 3);
        *(undefined1 *)(param_1 + 3) = 0;
        param_1[1] = 0;
        param_1[2] = 0x14;
        _Count = puVar3[1];
        _Source = (char *)*puVar3;
        if (0x13 < _Count) {
          _Size = _Count + 0x20 & 0xffffffe0;
          param_1[2] = _Size;
          pvVar4 = _malloc(_Size);
          *param_1 = (int)pvVar4;
        }
        _strncpy((char *)*param_1,_Source,_Count);
        param_1[1] = _Count;
        *(undefined1 *)(_Count + *param_1) = 0;
        return param_1;
      }
      goto LAB_004043d2;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}


//// FUNCTION FUN_00404480 @ 00404480 ////

void __thiscall FUN_00404480(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  undefined1 uVar4;
  
  FUN_009757a0(*(void **)((int)this + 0x214),(byte *)0xd16590,1.0,0);
  *(undefined1 *)((int)this + 0x2b1) = 1;
  if (*(char *)(param_1 + 0x291) != '\0') {
    *(int *)((int)this + 0x27c) = *(int *)((int)this + 0x27c) + -1;
  }
  for (iVar1 = *(int *)((int)this + 0x1b4); iVar1 != (int)this + 0x1c0; iVar1 = *(int *)(iVar1 + 4))
  {
    iVar2 = *(int *)(iVar1 + 8);
    iVar3 = FUN_00401c30(iVar2);
    if (iVar3 != 0) {
      uVar4 = 0;
      this_00 = (void *)FUN_00401c30(iVar2);
      FUN_00842ef0(this_00,uVar4);
    }
  }
  return;
}


//// FUNCTION FUN_00404500 @ 00404500 ////

void __fastcall FUN_00404500(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  iVar5 = 0;
  for (puVar6 = (undefined4 *)param_1[0x6d]; puVar6 != param_1 + 0x70;
      puVar6 = (undefined4 *)puVar6[1]) {
    iVar5 = iVar5 + 1;
  }
  if ((iVar5 <= (int)param_1[0x9f]) || (*(char *)((int)param_1 + 0x2b1) != '\0')) {
    puVar6 = (undefined4 *)param_1[0x6d];
    if (puVar6 != param_1 + 0x70) {
      do {
        puVar2 = (undefined4 *)puVar6[2];
        iVar5 = puVar2[0x86];
        pvVar3 = (void *)param_1[0x85];
        if (puVar2[0x87] == -1) {
          if (((iVar5 < 0) || ((int)(uint)*(byte *)((int)pvVar3 + 0x4d) <= iVar5)) ||
             (iVar5 = *(int *)(*(int *)((int)pvVar3 + 0x5c) + iVar5 * 4), iVar5 == 0))
          goto LAB_004045bd;
          bVar7 = *(int *)(iVar5 + 0x18) == 0;
        }
        else {
          pvVar3 = (void *)FUN_00976440(pvVar3,puVar2[0x87]);
          if (pvVar3 == (void *)0x0) goto LAB_004045bd;
          bVar7 = FUN_00402ef0(pvVar3,iVar5,-1);
        }
        if (bVar7 != false) {
LAB_004045bd:
          FUN_004039f0(param_1,puVar2);
          param_1[0x9f] = param_1[0x9f] + -1;
          return;
        }
        puVar6 = (undefined4 *)puVar6[1];
      } while (puVar6 != param_1 + 0x70);
    }
    if (((param_1[0x85] != 0) && (*(char *)((int)param_1 + 0x2b6) != '\0')) &&
       (uVar4 = FUN_00971d30(param_1[0x85]), (char)uVar4 != '\0')) {
      piVar1 = param_1 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_1)(1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00404610 @ 00404610 ////

void __fastcall FUN_00404610(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x1b4); iVar1 != param_1 + 0x1c0; iVar1 = *(int *)(iVar1 + 4)) {
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 8) + 300) + 0x4ec) + 0x10))();
  }
  return;
}


//// FUNCTION FUN_00404650 @ 00404650 ////

int __fastcall FUN_00404650(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar1 = *(int *)(param_1 + 0x1b4); iVar1 != param_1 + 0x1c0; iVar1 = *(int *)(iVar1 + 4)) {
    cVar2 = FUN_00401bd0(*(int *)(iVar1 + 8));
    if (cVar2 == '\0') {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}


//// FUNCTION FUN_00404680 @ 00404680 ////

void __fastcall FUN_00404680(int *param_1)

{
  int *piVar1;
  char cVar2;
  
  if (((int *)param_1[0x6d] != param_1 + 0x70) || (*(char *)((int)param_1 + 0x2b6) != '\0')) {
    piVar1 = (int *)param_1[0x6d];
    while( true ) {
      if (piVar1 == param_1 + 0x70) {
                    /* WARNING: Could not recover jumptable at 0x004046e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xf0))();
        return;
      }
      if ((piVar1[2] == 0) || (cVar2 = FUN_00401bd0(piVar1[2]), cVar2 == '\0')) break;
      if (*(char *)((int)param_1 + 0x2b5) == '\0') {
        (**(code **)(*param_1 + 0xc0))();
      }
      piVar1 = (int *)piVar1[1];
    }
  }
  return;
}


//// FUNCTION FUN_00404750 @ 00404750 ////

void __fastcall FUN_00404750(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x1e8); iVar1 != param_1 + 500; iVar1 = *(int *)(iVar1 + 4)) {
    FUN_009757a0(*(void **)(param_1 + 0x214),(byte *)**(undefined4 **)(iVar1 + 8),
                 (float)(*(undefined4 **)(iVar1 + 8))[8],0);
  }
  return;
}


//// FUNCTION FUN_00404790 @ 00404790 ////

void __thiscall FUN_00404790(void *this,undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9c84b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0x34);
  this_00 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    this_00 = FUN_00403f20(puVar3);
  }
  FUN_004015d0(this_00,(char *)*param_1,param_1[1]);
  this_00[8] = param_2;
  piVar2 = (int *)((int)this + 500);
  piVar1 = this_00 + 9;
  this_00[10] = piVar2;
  *piVar1 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar1;
  *piVar2 = (int)piVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00404810 @ 00404810 ////

undefined4 __thiscall FUN_00404810(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x1b4);
  iVar2 = 0;
  while( true ) {
    if (iVar1 == (int)this + 0x1c0) {
      return 0;
    }
    if (iVar2 == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = iVar2 + 1;
  }
  return *(undefined4 *)(iVar1 + 8);
}


//// FUNCTION FUN_00404840 @ 00404840 ////

void __thiscall FUN_00404840(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)((int)this + 0x250) = param_1;
  *(undefined4 *)((int)this + 0x254) = param_2;
  FUN_004036d0((void *)((int)this + 600),(wchar_t *)*param_3,param_3[1]);
  return;
}


//// FUNCTION FUN_00404920 @ 00404920 ////

void __fastcall FUN_00404920(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  float10 fVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  float local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x1b4);
  if (local_8 != param_1 + 0x1c0) {
    do {
      iVar6 = *(int *)(param_1 + 0x1b4);
      iVar1 = *(int *)(local_8 + 8);
      if (iVar6 != param_1 + 0x1c0) {
        do {
          iVar8 = *(int *)(iVar6 + 8);
          iVar2 = *(int *)(iVar1 + 300);
          if (((*(int *)(iVar8 + 300) != iVar2) &&
              (uVar4 = FUN_00598ee0(iVar2), (char)uVar4 != '\0')) &&
             (uVar4 = FUN_00598ee0(*(int *)(iVar8 + 300)), (char)uVar4 != '\0')) {
            local_c = *(float *)(param_1 + 0x250);
            iVar2 = *(int *)(iVar1 + 300);
            iVar8 = *(int *)(iVar8 + 300);
            iVar9 = 9;
            pvVar5 = (void *)AwardBonusManager_Get();
            cVar3 = AwardBonusManager_IsBonusActive(pvVar5,iVar9);
            if (cVar3 != '\0') {
              pvVar5 = (void *)0x0;
              iVar9 = 9;
              AwardBonusManager_Get();
              fVar7 = AwardBonus_GetValue(iVar9,pvVar5);
              local_c = (float)(fVar7 + (float10)local_c);
            }
            uVar4 = *(undefined4 *)(param_1 + 0x254);
            puVar10 = (undefined4 *)(param_1 + 600);
            pvVar5 = (void *)FUN_005873c0(iVar2);
            pvVar5 = (void *)FUN_0042e770(pvVar5,iVar8);
            FUN_0042e650(pvVar5,local_c,uVar4,puVar10);
          }
          iVar6 = *(int *)(iVar6 + 4);
        } while (iVar6 != param_1 + 0x1c0);
      }
      local_8 = *(int *)(local_8 + 4);
    } while (local_8 != param_1 + 0x1c0);
  }
  return;
}


//// FUNCTION FUN_00404ae0 @ 00404ae0 ////

void __thiscall FUN_00404ae0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(void **)((int)this + 0x214) != (void *)0x0) {
    FUN_00971df0(*(void **)((int)this + 0x214));
    *(undefined4 *)((int)this + 0x214) = 0;
  }
  FUN_00984440((int)this + 0x218);
  uVar1 = FUN_0097c880((char *)*param_1,0,(undefined4 *)0x0,0);
  *(undefined4 *)((int)this + 0x214) = uVar1;
  FUN_00984450();
  FUN_004015d0((void *)((int)this + 0x18c),(char *)*param_1,param_1[1]);
  return;
}


//// FUNCTION FUN_00404b40 @ 00404b40 ////

void __fastcall FUN_00404b40(int param_1)

{
  char cVar1;
  void *this;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  float10 fVar6;
  byte *pbVar7;
  undefined4 uVar8;
  uint uVar9;
  byte local_74 [8];
  undefined4 uStack_6c;
  int local_50;
  undefined4 local_40;
  
  if (*(int *)(param_1 + 0x1b4) != param_1 + 0x1c0) {
    uVar2 = FUN_00973ac0(*(void **)(param_1 + 0x214));
    local_50 = 0;
    if (0 < (int)uVar2) {
      do {
        this = *(void **)(param_1 + 0x214);
        iVar3 = FUN_00974ea0(this,local_50);
        if ((iVar3 < 0) || ((int)(uint)*(byte *)((int)this + 0x4e) <= iVar3)) {
          pcVar4 = (char *)0x0;
        }
        else {
          pcVar4 = (char *)FUN_009722a0(this,iVar3);
        }
        uStack_6c = 0x404bb9;
        _strncpy((char *)&local_40,pcVar4,0x3f);
        fVar6 = FUN_009722e0(*(int *)(param_1 + 0x214),(byte *)&local_40);
        if ((float10)1.0 == fVar6) {
          puVar5 = FUN_00ace080(&local_40,"ai_ai");
          if (puVar5 != (uint *)0x0) {
            iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1b4) + 8) + 0x274);
            if (iVar3 != 0) {
              pbVar7 = local_74;
              local_74[0] = 0;
              pcVar4 = (char *)&local_40;
              uVar8 = 0;
              uVar9 = 0x14;
              do {
                cVar1 = *pcVar4;
                pcVar4 = pcVar4 + 1;
              } while (cVar1 != '\0');
              FUN_004015d0(&stack0xffffff80,(char *)&local_40,(int)pcVar4 - ((int)&local_40 + 1));
              FUN_008ac9e0(*(void **)(iVar3 + 0xc0),pbVar7,uVar8,uVar9);
            }
            uStack_6c = 0x404c66;
            FUN_009757a0(*(void **)(param_1 + 0x214),(byte *)&local_40,0.0,0);
          }
        }
        local_50 = local_50 + 1;
      } while (local_50 < (int)uVar2);
    }
  }
  return;
}


//// FUNCTION FUN_00404cf0 @ 00404cf0 ////

void __fastcall FUN_00404cf0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00404d20 @ 00404d20 ////

void __fastcall FUN_00404d20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d166dc;
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


//// FUNCTION FUN_00404e00 @ 00404e00 ////

void __thiscall FUN_00404e00(void *this,char param_1,uint param_2)

{
  undefined4 *_Memory;
  uint uVar1;
  undefined4 *puVar2;
  
  if ((param_1 != '\0') && (0xf < *(uint *)((int)this + 0x18))) {
    _Memory = *(undefined4 **)((int)this + 4);
    if (param_2 != 0) {
      puVar2 = _Memory;
      for (uVar1 = param_2 >> 2; this = (void *)((int)this + 4), uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)this = *puVar2;
        puVar2 = puVar2 + 1;
      }
      for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)this = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        this = (undefined4 *)((int)this + 1);
      }
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(uint *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined1 *)((int)this + param_2 + 4) = 0;
  return;
}


//// FUNCTION FUN_00404e70 @ 00404e70 ////

int __thiscall FUN_00404e70(void *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(uint *)((int)this + 0x14) < param_1) {
    FUN_00acbc74();
  }
  uVar2 = *(int *)((int)this + 0x14) - param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    puVar5 = (undefined4 *)((int)this + 4);
    puVar4 = puVar5;
    puVar1 = puVar5;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar4 = (undefined4 *)*puVar5;
      puVar1 = (undefined4 *)*puVar5;
    }
    _memmove((void *)((int)puVar4 + param_1),(void *)((int)puVar1 + param_2 + param_1),
             uVar2 - param_2);
    iVar3 = *(int *)((int)this + 0x14) - param_2;
    *(int *)((int)this + 0x14) = iVar3;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    *(undefined1 *)((int)puVar5 + iVar3) = 0;
  }
  return (int)this;
}


//// FUNCTION FUN_00404ef0 @ 00404ef0 ////

void __thiscall FUN_00404ef0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00c9c860;
  pvStack_10 = ExceptionList;
  uVar4 = param_1 | 0xf;
  if (uVar4 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x18);
    uVar3 = uVar1 >> 1;
    param_1 = uVar4;
    if ((uVar4 / 3 < uVar3) && (uVar1 <= -uVar3 - 2)) {
      param_1 = uVar3 + uVar1;
    }
  }
  local_8 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = operator_new(param_1 + 1);
  FUN_00404f8c(extraout_ECX,puVar2);
  return;
}


//// FUNCTION FUN_00404f8c @ 00404f8c ////

void __fastcall FUN_00404f8c(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = *(uint *)(unaff_EBP + 0xc);
  iVar3 = 0;
  if (uVar2 != 0) {
    if (*(uint *)(unaff_ESI + 0x18) < 0x10) {
      puVar4 = (undefined4 *)(unaff_ESI + 4);
    }
    else {
      puVar4 = *(undefined4 **)(unaff_ESI + 4);
    }
    puVar5 = param_2;
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    unaff_ESI = *(int *)(unaff_EBP + -0x14);
    iVar3 = *(int *)(unaff_EBP + 0xc);
  }
  if (0xf < *(uint *)(unaff_ESI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_ESI + 4));
  }
  puVar4 = (undefined4 *)(unaff_ESI + 4);
  *(undefined1 *)puVar4 = 0;
  *puVar4 = param_2;
  *(uint *)(unaff_ESI + 0x18) = unaff_EBX;
  *(int *)(unaff_ESI + 0x14) = iVar3;
  if (0xf < unaff_EBX) {
    puVar4 = param_2;
  }
  *(undefined1 *)((int)puVar4 + iVar3) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


//// FUNCTION FUN_00405040 @ 00405040 ////

void __thiscall FUN_00405040(void *this,int *param_1)

{
  int *this_00;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  void *this_01;
  float10 extraout_ST0;
  int **ppiVar6;
  undefined4 uStack_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9c8e0;
  local_c = ExceptionList;
  local_28 = 0;
  local_20[0] = '\0';
  local_24 = 0x14;
  if (param_1[0x128] == 0) {
    ExceptionList = &local_c;
    local_2c = local_20;
    _strncpy(local_20,"ai_male",7);
    local_28 = 7;
    local_2c[7] = '\0';
    local_4 = 0;
    FUN_00404790(this,&local_2c,0x3f800000);
  }
  else {
    local_2c = local_20;
    ExceptionList = &local_c;
    _strncpy(local_20,"ai_male",7);
    local_28 = 7;
    local_2c[7] = '\0';
    local_4 = 1;
    FUN_00404790(this,&local_2c,0);
  }
  if (0x14 < local_24) {
    local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4 = 0xffffffff;
  uVar2 = FUN_00598ee0((int)this_00);
  local_24 = 0x14;
  local_28 = 0;
  local_20[0] = '\0';
  if ((char)uVar2 == '\0') {
    local_2c = local_20;
    _strncpy(local_20,"ai_drunk",8);
    local_28 = 8;
    local_2c[8] = '\0';
    local_4 = 0xc;
    FUN_00404790(this,&local_2c,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ai_star",7);
    local_28 = 7;
    local_2c[7] = '\0';
    local_4 = 0xd;
    FUN_00404790(this,&local_2c,0);
  }
  else {
    local_2c = local_20;
    _strncpy(local_20,"ai_star",7);
    local_28 = 7;
    local_2c[7] = '\0';
    local_4 = 2;
    FUN_00404790(this,&local_2c,0x3f800000);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ai_drunk_thresh",0xf);
    local_28 = 0xf;
    local_2c[0xf] = '\0';
    local_4 = 3;
    FUN_00404790(this,&local_2c,0x3f000000);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ai_vdrunk_thresh",0x10);
    local_28 = 0x10;
    local_2c[0x10] = '\0';
    local_4 = 4;
    FUN_00404790(this,&local_2c,0x3f4ccccd);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    uVar2 = FUN_005856c0((int)this_00);
    local_24 = 0x14;
    local_28 = 0;
    local_20[0] = '\0';
    if ((char)uVar2 == '\0') {
      local_2c = local_20;
      _strncpy(local_20,"ai_drunk",8);
      local_28 = 8;
      local_2c[8] = '\0';
      local_4 = 6;
      FUN_00404790(this,&local_2c,0);
    }
    else {
      local_2c = local_20;
      _strncpy(local_20,"ai_drunk",8);
      local_28 = 8;
      local_2c[8] = '\0';
      local_4 = 5;
      FUN_00404790(this,&local_2c,0x3f800000);
    }
    if (0x14 < local_24) {
      local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_4 = 0xffffffff;
    cVar1 = (**(code **)(*this_00 + 0x288))();
    if (cVar1 != '\0') {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"ai_stressed",0xb);
      local_28 = 0xb;
      local_2c[0xb] = '\0';
      local_4 = 7;
      FUN_00404790(this,&local_2c,0x3f800000);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
    iVar3 = (**(code **)(*this_00 + 0x27c))();
    if (iVar3 != 0) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"ai_happiness",0xc);
      local_28 = 0xc;
      local_2c[0xc] = '\0';
      local_4 = 8;
      iVar3 = (**(code **)(*this_00 + 0x27c))();
      iVar3 = FUN_004725b0(iVar3);
      FUN_00566e40(iVar3);
      FUN_00404790(this,&local_2c,(float)extraout_ST0);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ai_celebrity",0xc);
    local_28 = 0xc;
    local_2c[0xc] = '\0';
    local_4 = 9;
    puVar4 = (undefined4 *)FUN_00585ff0(this_00,&uStack_30);
    param_1 = (int *)*puVar4;
    FUN_00404790(this,&local_2c,param_1);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    piVar5 = (int *)FUN_00585ea0((int)this_00);
    if (*piVar5 == 1) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"ai_boredom",10);
      local_28 = 10;
      local_2c[10] = '\0';
      local_4 = 10;
      FUN_00404790(this,&local_2c,0x3f800000);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
    if (this_00[0x131] != 0) {
      ExceptionList = local_c;
      return;
    }
    iVar3 = (**(code **)(*this_00 + 0x27c))();
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ai_trailerhappiness",0x13);
    local_28 = 0x13;
    local_2c[0x13] = '\0';
    iVar3 = 2;
    ppiVar6 = &param_1;
    local_4 = 0xb;
    this_01 = (void *)(**(code **)(*this_00 + 0x27c))();
    puVar4 = (undefined4 *)FUN_00472ef0(this_01,ppiVar6,iVar3);
    FUN_00404790(this,&local_2c,*puVar4);
  }
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00405660 @ 00405660 ////

void __fastcall FUN_00405660(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  param_1[0x12] = param_1[0x12] + 1;
  if ((undefined4 *)param_1[0x6d] != param_1 + 0x70) {
    do {
      piVar1 = (int *)param_1[0x6d];
      puVar2 = (undefined4 *)piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      if ((*(char *)((int)puVar2 + 0x291) != '\0') && ((void *)param_1[0x85] != (void *)0x0)) {
        FUN_00976e70((void *)param_1[0x85],puVar2[0x86],puVar2[0x87],(void *)0x0,'\0');
      }
      iVar3 = ((int *)puVar2[0x4b])[0x47];
      local_c = *(undefined4 *)(iVar3 + 0x3c);
      local_8 = *(undefined4 *)(iVar3 + 0x40);
      local_4 = *(undefined4 *)(iVar3 + 0x44);
      (**(code **)(*(int *)puVar2[0x4b] + 0xa8))(&local_c,iVar3 + 0x80);
      TMCharacter_CancelAction((void *)puVar2[0x4b],puVar2);
    } while ((undefined4 *)param_1[0x6d] != param_1 + 0x70);
  }
  piVar4 = (int *)param_1[0x6d];
  piVar1 = param_1 + 0x70;
  while (piVar4 != piVar1) {
    *piVar4 = 0;
    piVar4 = (int *)piVar4[1];
    *(undefined4 *)(*piVar4 + 4) = 0;
  }
  param_1[0x6d] = piVar1;
  *piVar1 = (int)(param_1 + 0x6c);
  if (*(char *)((int)param_1 + 0x2b6) != '\0') {
    piVar1 = param_1 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  piVar1 = param_1 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*param_1)(1);
  }
  return;
}


//// FUNCTION FUN_00405780 @ 00405780 ////

void __thiscall FUN_00405780(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iStack_8;
  
  (**(code **)(*(int *)this + 0xb4))();
  FUN_00404610((int)this);
  uVar3 = *(undefined4 *)(param_1 + 300);
  FUN_004017f0(param_1);
  piVar1 = (int *)(param_1 + 0x220);
  piVar2 = (int *)((int)this + 0x280);
  *piVar1 = 0;
  (**(code **)(*(int *)this + 0xdc))(uVar3,piVar2,piVar1);
  FUN_00978310(*(void **)((int)this + 0x214),*piVar1,*piVar2,*(void **)(iStack_8 + 0x11c));
  puVar4 = FUN_00975a70(*(void **)((int)this + 0x214),(uint *)&stack0xffffffec,*piVar1,*piVar2);
  *(uint *)(param_1 + 0x218) = *puVar4;
  *(uint *)(param_1 + 0x21c) = puVar4[1];
  puVar4 = FUN_00975a70(*(void **)((int)this + 0x214),(uint *)&stack0xffffffec,*piVar1,*piVar2);
  FUN_00402ea0(*(void **)((int)this + 0x214),*puVar4,puVar4[1]);
  FUN_00975f90(*(void **)((int)this + 0x214),0);
  if (*(int *)(param_1 + 0x244) == -1) {
    *piVar2 = *piVar2 + 1;
  }
  *(int *)((int)this + 0x27c) = *(int *)((int)this + 0x27c) + 1;
  return;
}


//// FUNCTION FUN_00405870 @ 00405870 ////

void __fastcall FUN_00405870(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = (int *)param_1[0x6d]; piVar1 != param_1 + 0x70; piVar1 = (int *)piVar1[1]) {
    iVar2 = piVar1[2];
    if ((char)param_1[0xac] != '\0') {
      FUN_0053d9e0(*(int **)(iVar2 + 300) + 0x105,'\x01',*(int **)(iVar2 + 300));
    }
    if (*(char *)(iVar2 + 0x291) == '\0') {
      (**(code **)(*param_1 + 0xec))(iVar2);
    }
  }
  FUN_009777b0(param_1[0x85]);
  *(undefined1 *)(param_1 + 0xad) = 1;
  if ((*(byte *)(param_1 + 0x9e) & 2) == 0) {
    for (piVar1 = (int *)param_1[0x7a]; piVar1 != param_1 + 0x7d; piVar1 = (int *)piVar1[1]) {
      FUN_009757a0((void *)param_1[0x85],*(byte **)piVar1[2],(float)((undefined4 *)piVar1[2])[8],0);
    }
  }
  param_1[0x9e] = param_1[0x9e] | 4;
  return;
}


//// FUNCTION FUN_00405930 @ 00405930 ////

void __fastcall FUN_00405930(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if ((*(char *)((int)param_1 + 0x2b1) != '\0') &&
     (iVar1 = param_1[0xa1], param_1[0xa1] = iVar1 + 1, 100 < iVar1 + 1)) {
                    /* WARNING: Could not recover jumptable at 0x00405956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
  if ((char)param_1[0xad] == '\0') {
    FUN_00404680(param_1);
    if ((char)param_1[0xad] == '\0') goto LAB_00405a45;
  }
  if ((param_1[0x85] != 0) && ((*(byte *)(param_1 + 0x9e) & 1) == 0)) {
    fVar3 = FUN_009722e0(param_1[0x85],(byte *)"ai_action");
    if ((float10)0.0 != fVar3) {
      (**(code **)(*param_1 + 0xc4))();
    }
  }
  FUN_00404500(param_1);
  if (param_1[0x85] != 0) {
    fVar3 = FUN_009722e0(param_1[0x85],(byte *)"ai_satisfyloop");
    if ((float10)0.0 != fVar3) {
      (**(code **)(*param_1 + 0xc4))();
      param_1[0x9e] = param_1[0x9e] & 0xfffffffe;
      FUN_009757a0((void *)param_1[0x85],(byte *)"ai_satisfyloop",0.0,0);
    }
    uVar2 = FUN_009734c0((void *)param_1[0x85],(byte *)"ai_drunk");
    if ((char)uVar2 != '\0') {
      FUN_00403b70((int)param_1);
    }
    FUN_00977c80((void *)param_1[0x85]);
    FUN_00404b40((int)param_1);
    if ((void *)param_1[0xab] != (void *)0x0) {
      FUN_008bbad0((void *)param_1[0xab]);
    }
  }
LAB_00405a45:
  FUN_0053d480((int)param_1);
  FUN_00539af0(param_1);
  return;
}


//// FUNCTION FUN_00405a80 @ 00405a80 ////

void __fastcall FUN_00405a80(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


//// FUNCTION FUN_00405b90 @ 00405b90 ////

void __fastcall FUN_00405b90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d16788;
  if (0xf < (uint)param_1[9]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00ace1d8(param_1);
  return;
}


//// FUNCTION FUN_00405be0 @ 00405be0 ////

undefined4 * __thiscall FUN_00405be0(void *this,byte param_1)

{
  FUN_00405b90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00405c30 @ 00405c30 ////

void * __thiscall FUN_00405c30(void *this,void *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  if (*(uint *)((int)param_1 + 0x14) < param_2) {
    FUN_00acbc74();
  }
  uVar4 = *(int *)((int)param_1 + 0x14) - param_2;
  if (param_3 < uVar4) {
    uVar4 = param_3;
  }
  if (this != param_1) {
    if (uVar4 == 0xffffffff) {
      FUN_00acbcb4();
    }
    if (*(uint *)((int)this + 0x18) < uVar4) {
      FUN_00404ef0(this,uVar4);
    }
    else if (uVar4 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        *(undefined1 *)((int)this + 4) = 0;
        return this;
      }
      **(undefined1 **)((int)this + 4) = 0;
      return this;
    }
    if (uVar4 != 0) {
      if (*(uint *)((int)param_1 + 0x18) < 0x10) {
        iVar3 = (int)param_1 + 4;
      }
      else {
        iVar3 = *(int *)((int)param_1 + 4);
      }
      piVar1 = (int *)((int)this + 4);
      piVar6 = piVar1;
      if (0xf < *(uint *)((int)this + 0x18)) {
        piVar6 = (undefined4 *)*piVar1;
      }
      puVar5 = (undefined4 *)(param_2 + iVar3);
      for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      for (uVar2 = uVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)piVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        piVar6 = (undefined4 *)((int)piVar6 + 1);
      }
      *(uint *)((int)this + 0x14) = uVar4;
      if (0xf < *(uint *)((int)this + 0x18)) {
        piVar1 = (int *)*piVar1;
      }
      *(undefined1 *)((int)piVar1 + uVar4) = 0;
    }
    return this;
  }
  FUN_00404e70(this,uVar4 + param_2,0xffffffff);
  FUN_00404e70(this,0,param_2);
  return this;
}


//// FUNCTION FUN_00405d20 @ 00405d20 ////

void __fastcall FUN_00405d20(int param_1)

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


//// FUNCTION FUN_00405d50 @ 00405d50 ////

void * __thiscall FUN_00405d50(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)this + 0x18);
  if (uVar4 < 0x10) {
    puVar1 = (undefined4 *)((int)this + 4);
  }
  else {
    puVar1 = *(undefined4 **)((int)this + 4);
  }
  if (puVar1 <= param_1) {
    puVar1 = (undefined4 *)((int)this + 4);
    puVar3 = puVar1;
    if (0xf < uVar4) {
      puVar3 = (undefined4 *)*puVar1;
    }
    if (param_1 < (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar3)) {
      if (0xf < uVar4) {
        puVar1 = (undefined4 *)*puVar1;
      }
      pvVar2 = FUN_00405c30(this,this,(int)param_1 - (int)puVar1,param_2);
      return pvVar2;
    }
  }
  if (param_2 == 0xffffffff) {
    FUN_00acbcb4();
  }
  if (*(uint *)((int)this + 0x18) < param_2) {
    FUN_00404ef0(this,param_2);
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (*(uint *)((int)this + 0x18) < 0x10) {
      *(undefined1 *)((int)this + 4) = 0;
      return this;
    }
    **(undefined1 **)((int)this + 4) = 0;
    return this;
  }
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0x18) < 0x10) {
      puVar1 = (undefined4 *)((int)this + 4);
    }
    else {
      puVar1 = *(undefined4 **)((int)this + 4);
    }
    for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar1 = *param_1;
      param_1 = param_1 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(uint *)((int)this + 0x14) = param_2;
    if (0xf < *(uint *)((int)this + 0x18)) {
      *(undefined1 *)(*(int *)((int)this + 4) + param_2) = 0;
      return this;
    }
    *(undefined1 *)((int)this + param_2 + 4) = 0;
  }
  return this;
}


//// FUNCTION FUN_00405e70 @ 00405e70 ////

void * __thiscall FUN_00405e70(void *this,void *param_1)

{
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined1 *)((int)this + 4) = 0;
  FUN_00405c30(this,param_1,0,0xffffffff);
  return this;
}


//// FUNCTION FUN_00405ea0 @ 00405ea0 ////

void __fastcall FUN_00405ea0(int param_1)

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


//// FUNCTION FUN_00405ed0 @ 00405ed0 ////

void __thiscall FUN_00405ed0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00405d50(this,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


//// FUNCTION FUN_00405f00 @ 00405f00 ////

exception * __thiscall FUN_00405f00(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9c8f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception::exception(this);
  *(undefined ***)this = &PTR_FUN_00d16788;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_00405c30((void *)((int)this + 0xc),param_1,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00405f80 @ 00405f80 ////

undefined4 * __thiscall FUN_00405f80(void *this,byte param_1)

{
  FUN_00405fa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00405fa0 @ 00405fa0 ////

void __fastcall FUN_00405fa0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d16788;
  if (0xf < (uint)param_1[9]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00ace1d8(param_1);
  return;
}


//// FUNCTION FUN_00405fe0 @ 00405fe0 ////

void FUN_00405fe0(undefined4 *param_1,undefined4 *param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (0x14 < (uint)param_1[2]) break;
    param_1 = param_1 + 8;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00406010 @ 00406010 ////

void __fastcall FUN_00406010(int param_1)

{
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00406070 @ 00406070 ////

void * __thiscall FUN_00406070(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00405d50(this,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return this;
}


//// FUNCTION FUN_004060b0 @ 004060b0 ////

void __fastcall FUN_004060b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d167a0;
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


//// FUNCTION FUN_00406100 @ 00406100 ////

void __fastcall FUN_00406100(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d167ac;
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


//// FUNCTION FUN_00406150 @ 00406150 ////

undefined4 * __thiscall FUN_00406150(void *this,byte param_1)

{
  FUN_004060b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00406170 @ 00406170 ////

undefined4 * __thiscall FUN_00406170(void *this,byte param_1)

{
  FUN_00406100(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00406190 @ 00406190 ////

void __fastcall FUN_00406190(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    FUN_00405fe0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_004061d0 @ 004061d0 ////

void FUN_004061d0(void)

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
  puStack_8 = &LAB_00c9c918;
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


//// FUNCTION FUN_00406240 @ 00406240 ////

exception * __thiscall FUN_00406240(void *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9c938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception::exception(this,param_1);
  *(undefined ***)this = &PTR_FUN_00d16788;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_00405c30((void *)((int)this + 0xc),param_1 + 0xc,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004062d0 @ 004062d0 ////

void FUN_004062d0(void)

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
  puStack_8 = &LAB_00c9c958;
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


//// FUNCTION FUN_00406340 @ 00406340 ////

void __fastcall FUN_00406340(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d167cc;
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


//// FUNCTION FUN_00406390 @ 00406390 ////

undefined4 * __thiscall FUN_00406390(void *this,byte param_1)

{
  FUN_00406340(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004063b0 @ 004063b0 ////

void __fastcall FUN_004063b0(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    FUN_00405fe0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_004063f0 @ 004063f0 ////

void __fastcall FUN_004063f0(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    FUN_00405fe0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00406430 @ 00406430 ////

undefined4 __thiscall FUN_00406430(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x7ffffff < param_1) {
    param_1 = FUN_004061d0();
  }
  pvVar1 = operator_new(param_1 * 0x20);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 0x20 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_004064d0 @ 004064d0 ////

/* WARNING: Removing unreachable block (ram,0x0040661e) */

void __fastcall FUN_004064d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9c9f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d16814;
  param_1[0x1e] = &PTR_LAB_00d167f0;
  param_1[0x28] = &PTR_FUN_00d167d8;
  local_4 = 9;
  if ((undefined4 *)param_1[0x58] != param_1 + 0x5b) {
    do {
      piVar1 = (int *)param_1[0x58];
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
    } while ((undefined4 *)param_1[0x58] != param_1 + 0x5b);
  }
  piVar3 = (int *)param_1[0x6d];
  piVar1 = param_1 + 0x70;
  while (piVar3 != piVar1) {
    *piVar3 = 0;
    piVar3 = (int *)piVar3[1];
    *(undefined4 *)(*piVar3 + 4) = 0;
  }
  param_1[0x6d] = piVar1;
  *piVar1 = (int)(param_1 + 0x6c);
  if ((void *)param_1[0x85] != (void *)0x0) {
    FUN_00971df0((void *)param_1[0x85]);
    param_1[0x85] = 0;
  }
  if ((undefined4 *)param_1[0x7a] != param_1 + 0x7d) {
    do {
      piVar1 = (int *)param_1[0x7a];
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
        if ((undefined4 *)puVar2[10] != (undefined4 *)0x0) {
          *(undefined4 *)puVar2[10] = puVar2[9];
        }
        if (puVar2[9] != 0) {
          *(undefined4 *)(puVar2[9] + 4) = puVar2[10];
        }
        puVar2[9] = 0;
        puVar2[10] = 0;
        if (puVar2[9] != 0) {
          *(undefined4 *)(puVar2[9] + 4) = puVar2[10];
        }
        puVar2[9] = 0;
        puVar2[10] = 0;
        if ((uint)puVar2[2] < 0x15) {
                    /* WARNING: Subroutine does not return */
          _free(puVar2);
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)*puVar2);
      }
    } while ((undefined4 *)param_1[0x7a] != param_1 + 0x7d);
  }
  if ((undefined4 *)param_1[0x53] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x53] = param_1[0x52];
  }
  if (param_1[0x52] != 0) {
    *(undefined4 *)(param_1[0x52] + 4) = param_1[0x53];
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  FUN_00402fd0((int)param_1);
  param_1[0xa6] = &PTR_FUN_00d166dc;
  if ((undefined4 *)param_1[0xa8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa8] = param_1[0xa7];
  }
  if (param_1[0xa7] != 0) {
    *(undefined4 *)(param_1[0xa7] + 4) = param_1[0xa8];
  }
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xab] = 0;
  if ((undefined4 *)param_1[0xa8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa8] = param_1[0xa7];
  }
  if (param_1[0xa7] != 0) {
    *(undefined4 *)(param_1[0xa7] + 4) = param_1[0xa8];
  }
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  if (10 < (uint)param_1[0x98]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x96]);
  }
  param_1[0x8e] = &PTR_LAB_00d165bc;
  if ((undefined4 *)param_1[0x90] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x90] = param_1[0x8f];
  }
  if (param_1[0x8f] != 0) {
    *(undefined4 *)(param_1[0x8f] + 4) = param_1[0x90];
  }
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x93] = 0;
  if ((undefined4 *)param_1[0x90] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x90] = param_1[0x8f];
  }
  if (param_1[0x8f] != 0) {
    *(undefined4 *)(param_1[0x8f] + 4) = param_1[0x90];
  }
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  if ((undefined4 *)param_1[0x87] == (undefined4 *)0x0) {
    param_1[0x87] = 0;
    param_1[0x88] = 0;
    param_1[0x89] = 0;
    FUN_00406100(param_1 + 0x78);
    FUN_00406340(param_1 + 0x6b);
    if ((uint)param_1[0x65] < 0x15) {
      FUN_004060b0(param_1 + 0x56);
      if ((undefined4 *)param_1[0x53] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x53] = param_1[0x52];
      }
      if (param_1[0x52] != 0) {
        *(undefined4 *)(param_1[0x52] + 4) = param_1[0x53];
      }
      param_1[0x52] = 0;
      param_1[0x53] = 0;
      local_4 = 0xffffffff;
      FUN_00539940(param_1);
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[99]);
  }
  FUN_00405fe0((undefined4 *)param_1[0x87],(undefined4 *)param_1[0x88]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x87]);
}


//// FUNCTION FUN_004069d0 @ 004069d0 ////

void __fastcall FUN_004069d0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_00990ae0(param_1,param_2);
  if (*(int *)(param_1 + 0x228) + 500U < (uint)uVar4) {
    *(uint *)(param_1 + 0x228) = (uint)uVar4;
    iVar2 = FUN_00404650(param_1);
    if (iVar2 < 2) {
      puVar3 = *(undefined4 **)(param_1 + 0x21c);
      puVar1 = *(undefined4 **)(param_1 + 0x220);
      if (puVar3 != puVar1) {
        do {
          FUN_00987a00((char *)*puVar3);
          puVar3 = puVar3 + 8;
        } while (puVar3 != puVar1);
        FUN_004063f0(param_1 + 0x218);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00406a40 @ 00406a40 ////

void __fastcall FUN_00406a40(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00406a60 @ 00406a60 ////

undefined4 * __thiscall FUN_00406a60(void *this,byte param_1)

{
  FUN_004064d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00406a80 @ 00406a80 ////

void __fastcall FUN_00406a80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d16910;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}


//// FUNCTION FUN_00406ae0 @ 00406ae0 ////

void __fastcall FUN_00406ae0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d167cc;
  return;
}


//// FUNCTION FUN_00406b40 @ 00406b40 ////

void __fastcall FUN_00406b40(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d167a0;
  return;
}


//// FUNCTION FUN_00406ba0 @ 00406ba0 ////

void __fastcall FUN_00406ba0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d167ac;
  return;
}


//// FUNCTION FUN_00406c00 @ 00406c00 ////

undefined4 * __fastcall FUN_00406c00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9cb48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00539710(param_1);
  *param_1 = &PTR_FUN_00d16814;
  param_1[0x1e] = &PTR_LAB_00d167f0;
  param_1[0x28] = &PTR_FUN_00d167d8;
  param_1[0x54] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x59] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  puVar1 = param_1 + 0x5b;
  param_1[0x5d] = 0;
  *puVar1 = 0;
  param_1[0x5c] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x56] = &PTR_LAB_00d167a0;
  param_1[0x58] = puVar1;
  *puVar1 = param_1 + 0x57;
  param_1[99] = param_1 + 0x66;
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0x14;
  param_1[0x6e] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  puVar1 = param_1 + 0x70;
  param_1[0x72] = 0;
  *puVar1 = 0;
  param_1[0x71] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x6b] = &PTR_LAB_00d167cc;
  param_1[0x6d] = puVar1;
  *puVar1 = param_1 + 0x6c;
  param_1[0x7b] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  puVar1 = param_1 + 0x7d;
  param_1[0x7f] = 0;
  *puVar1 = 0;
  param_1[0x7e] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x78] = &PTR_LAB_00d167ac;
  param_1[0x7a] = puVar1;
  *puVar1 = param_1 + 0x79;
  param_1[0x85] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x91] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = param_1 + 0x8e;
  param_1[0x8e] = &PTR_LAB_00d165bc;
  param_1[0x93] = 0;
  param_1[0x96] = param_1 + 0x99;
  *(undefined2 *)(param_1 + 0x99) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 10;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0x9e] = param_1[0x9e] & 0xfffffff8;
  param_1[0xa9] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = param_1 + 0xa6;
  param_1[0xa6] = &PTR_FUN_00d166dc;
  param_1[0xab] = 0;
  local_4 = 0xf;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)((int)param_1 + 0x2b1) = 0;
  *(undefined1 *)((int)param_1 + 0x2b2) = 1;
  *(undefined1 *)((int)param_1 + 0x2b3) = 1;
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined1 *)((int)param_1 + 0x2b5) = 0;
  *(undefined1 *)((int)param_1 + 0x2b6) = 0;
  *(undefined1 *)((int)param_1 + 0x2b7) = 1;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)((int)param_1 + 0x2b9) = 0;
  *(undefined1 *)((int)param_1 + 0x2ba) = 1;
  *(undefined1 *)((int)param_1 + 699) = 0;
  param_1[0xaf] = 0;
  param_1[0xb2] = 0;
  FUN_004015d0(param_1 + 99,"Uninitialised",0xd);
  *(undefined1 *)(param_1 + 0xa5) = 1;
  *(undefined1 *)((int)param_1 + 0x295) = 1;
  *(undefined1 *)((int)param_1 + 0x296) = 1;
  param_1[0xa2] = 0x3e99999a;
  param_1[0xa3] = 0x3f666666;
  param_1[0xa4] = 0x3fb33333;
  param_1[0x54] = param_1;
  FUN_00acdb9e(0xe4e04c);
  iVar2 = FUN_0097dda0();
  param_1[0x55] = iVar2;
  if (s___AVTMActivityManager_TM___00e4e030[0x1b] != '\0') {
    iVar2 = 0x148;
    pcVar5 = "CompositeLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe4e04c);
    FUN_0097df60(pcVar3,pcVar5,iVar2);
    s___AVTMActivityManager_TM___00e4e030[0x1b] = '\0';
  }
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x96,(wchar_t *)&lpCaption_00d16918,uVar4);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00406f10 @ 00406f10 ////

void __fastcall FUN_00406f10(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00406f40 @ 00406f40 ////

void __thiscall FUN_00406f40(void *this,int param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + param_1 * 4 + 0x94) = param_2;
  return;
}


//// FUNCTION FUN_00406f60 @ 00406f60 ////

bool __cdecl FUN_00406f60(int param_1,char param_2)

{
  char cVar1;
  
  cVar1 = (&DAT_00f87a60)[param_1];
  (&DAT_00f87a60)[param_1] = param_2;
  return cVar1 != param_2;
}


//// FUNCTION FUN_00406fd0 @ 00406fd0 ////

float * __thiscall FUN_00406fd0(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)this = 0;
    return this;
  }
  if (1.0 < param_1) {
    *(undefined4 *)this = 0x3f800000;
    return this;
  }
  *(float *)this = param_1;
  return this;
}


//// FUNCTION FUN_00407070 @ 00407070 ////

float * __thiscall FUN_00407070(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)this = 0;
    return this;
  }
  if (1.0 < param_1) {
    *(undefined4 *)this = 0x3f800000;
    return this;
  }
  *(float *)this = param_1;
  return this;
}


//// FUNCTION FUN_004070c0 @ 004070c0 ////

float10 __thiscall FUN_004070c0(float *param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_2 + (float10)*param_1;
  if (fVar1 < (float10)0.0) {
    return (float10)0.0;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  return fVar1;
}


//// FUNCTION FUN_00407100 @ 00407100 ////

void __thiscall FUN_00407100(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = *(float *)this - param_1;
  if (fVar1 < 0.0) {
    *(undefined4 *)this = 0;
    return;
  }
  if (1.0 < fVar1) {
    *(undefined4 *)this = 0x3f800000;
    return;
  }
  *(float *)this = fVar1;
  return;
}


//// FUNCTION FUN_00407150 @ 00407150 ////

float10 __cdecl FUN_00407150(int param_1)

{
  if (DAT_0104a974 != 0) {
    return (float10)*(float *)(DAT_0104a974 + 0x60 + param_1 * 4);
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00407190 @ 00407190 ////

undefined4 __thiscall FUN_00407190(void *this,int param_1)

{
  if ((&DAT_00f87a60)[param_1] != '\0') {
    *(undefined4 *)((int)this + param_1 * 4 + 0x8c) = 0;
  }
  if (*(float *)((int)this + param_1 * 4 + 0x94) <= *(float *)((int)this + param_1 * 4 + 0x8c)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_004071e0 @ 004071e0 ////

undefined4 __fastcall FUN_004071e0(int param_1)

{
  if (DAT_00f87a60 != '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(float *)(param_1 + 0x8c) < *(float *)(param_1 + 0x94)) {
    if (DAT_00f87a61 != '\0') {
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    if (*(float *)(param_1 + 0x90) < *(float *)(param_1 + 0x98)) {
      return 0;
    }
  }
  return 1;
}


//// FUNCTION FUN_00407250 @ 00407250 ////

void __thiscall FUN_00407250(void *this,undefined4 *param_1,int param_2)

{
  if ((&DAT_00f87a60)[param_2] != '\0') {
    *(undefined4 *)((int)this + param_2 * 4 + 0x8c) = 0;
  }
  *param_1 = *(undefined4 *)((int)this + param_2 * 4 + 0x8c);
  return;
}


//// FUNCTION FUN_00407290 @ 00407290 ////

void __thiscall FUN_00407290(void *this,undefined4 *param_1,int param_2)

{
  *param_1 = *(undefined4 *)((int)this + param_2 * 4 + 0x94);
  return;
}


//// FUNCTION FUN_004072b0 @ 004072b0 ////

void __thiscall FUN_004072b0(void *this,int param_1,float param_2)

{
  if (0.0 <= param_2) {
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  *(float *)((int)this + param_1 * 4 + 0x8c) = param_2;
  if ((DAT_0104a974 != 0) && (*(float *)(DAT_0104a974 + 100) != 0.0)) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x8c) = 0;
  }
  return;
}


//// FUNCTION FUN_004073a0 @ 004073a0 ////

void __fastcall FUN_004073a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_004073c0 @ 004073c0 ////

void __fastcall FUN_004073c0(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_004073f0 @ 004073f0 ////

void __thiscall FUN_004073f0(void *this,char *param_1,size_t param_2)

{
  char *_Dest;
  uint uVar1;
  uint _Size;
  
  uVar1 = *(int *)((int)this + 4) + param_2;
  if (*(uint *)((int)this + 8) <= uVar1) {
    _Size = uVar1 + 0x20 & 0xffffffe0;
    _Dest = _malloc(_Size);
    _strncpy(_Dest,*(char **)this,*(size_t *)((int)this + 4));
    if (0x14 < *(uint *)((int)this + 8)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    *(char **)this = _Dest;
    *(uint *)((int)this + 8) = _Size;
  }
  _strncpy((char *)(*(int *)this + *(int *)((int)this + 4)),param_1,param_2);
  *(uint *)((int)this + 4) = uVar1;
  *(undefined1 *)(uVar1 + *(int *)this) = 0;
  return;
}


//// FUNCTION FUN_00407470 @ 00407470 ////

void __fastcall FUN_00407470(int *param_1)

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
  puStack_8 = &LAB_00c9cb68;
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


//// FUNCTION FUN_00407540 @ 00407540 ////

void __thiscall FUN_00407540(void *this,int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  float10 fVar5;
  
  if (param_2 == 0.0) {
    param_2 = DAT_00e4e070;
  }
  if ((0.0 < param_2) && (iVar3 = AwardBonusManager_Get(), iVar3 != 0)) {
    iVar3 = 8;
    pvVar4 = (void *)AwardBonusManager_Get();
    cVar2 = AwardBonusManager_IsBonusActive(pvVar4,iVar3);
    if (cVar2 != '\0') {
      pvVar4 = (void *)0x0;
      iVar3 = 8;
      AwardBonusManager_Get();
      fVar5 = AwardBonus_GetValue(iVar3,pvVar4);
      param_2 = (float)(fVar5 * (float10)param_2);
    }
  }
  fVar1 = param_2 + *(float *)((int)this + param_1 * 4 + 0x8c);
  if (0.0 <= fVar1) {
    if (fVar1 <= 1.0) {
      FUN_004072b0(this,param_1,fVar1);
      return;
    }
    FUN_004072b0(this,param_1,1.0);
    return;
  }
  FUN_004072b0(this,param_1,0.0);
  return;
}


//// FUNCTION FUN_00407630 @ 00407630 ////

void * __thiscall FUN_00407630(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return this;
}


//// FUNCTION FUN_00407660 @ 00407660 ////

void __thiscall FUN_00407660(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d16954;
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


//// FUNCTION FUN_004076b0 @ 004076b0 ////

void __fastcall FUN_004076b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d16954;
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


//// FUNCTION FUN_00407700 @ 00407700 ////

void __fastcall FUN_00407700(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *local_34;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9cb98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Addiction.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x1b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x38));
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
  uVar3 = FUN_0098b490("POwner");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x38));
  }
  local_34 = (undefined4 *)(param_1 + 0x28);
  local_30 = 2;
  do {
    if (DAT_00e67469 == '\0') {
      pcVar5 = "C:\\movies\\dev\\TheMovies\\Addiction.cpp";
      puVar6 = &DAT_010581d8;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      local_2c = local_20;
      *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
      DAT_010581d4 = 0x1c;
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
    uVar3 = FUN_0098b490("Levels[x]");
    if ((char)uVar3 != '\0') {
      FUN_00566d60(local_34);
    }
    local_34 = local_34 + 1;
    local_30 = local_30 + -1;
  } while (local_30 != 0);
  local_34 = (undefined4 *)(param_1 + 0x30);
  local_30 = 2;
  do {
    if (DAT_00e67469 == '\0') {
      pcVar5 = "C:\\movies\\dev\\TheMovies\\Addiction.cpp";
      puVar6 = &DAT_010581d8;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      local_2c = local_20;
      *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
      DAT_010581d4 = 0x1d;
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
    uVar3 = FUN_0098b490("Thresholds[x]");
    if ((char)uVar3 != '\0') {
      FUN_00566d60(local_34);
    }
    local_34 = local_34 + 1;
    local_30 = local_30 + -1;
    if (local_30 == 0) {
      FUN_00989780();
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00407a30 @ 00407a30 ////

undefined4 * __thiscall FUN_00407a30(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9cbb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 100));
  *(undefined4 *)((int)this + 100) = &PTR_LAB_00d169e0;
  *(undefined ***)this = &PTR_FUN_00d169c0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  piVar1 = (int *)((int)this + 0xa0);
  *(undefined4 *)((int)this + 0xa8) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 **)((int)this + 0xa8) = (undefined4 *)((int)this + 0x9c);
  *(undefined4 *)((int)this + 0x9c) = &PTR_FUN_00d16954;
  *(int *)((int)this + 0xb0) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0xa4) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x98) = 0x3f666666;
  *(undefined4 *)((int)this + 0x94) = 0x3f666666;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00407b30 @ 00407b30 ////

undefined4 * __fastcall FUN_00407b30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9cbd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  param_1[0x19] = &PTR_LAB_00d169e0;
  *param_1 = &PTR_FUN_00d169c0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = param_1 + 0x27;
  param_1[0x27] = &PTR_FUN_00d16954;
  param_1[0x23] = 0;
  param_1[0x25] = 0x3f666666;
  param_1[0x24] = 0;
  param_1[0x26] = 0x3f666666;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00407bf0 @ 00407bf0 ////

void __fastcall FUN_00407bf0(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  void *this;
  undefined1 **ppuVar6;
  char **ppcVar7;
  float fVar8;
  char *local_90;
  undefined4 local_8c;
  uint local_88;
  char local_84 [20];
  undefined1 *local_70;
  int local_6c;
  uint local_68;
  undefined1 local_64 [20];
  char *local_50;
  undefined4 local_4c;
  uint local_48;
  char local_44 [20];
  undefined4 local_30;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9cbf8;
  local_c = ExceptionList;
  local_30 = 0;
  ExceptionList = &local_c;
  iVar4 = FUN_005998e0(*(int *)(param_1 + 0xb0));
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0xb0) + 0x15c) == '\0') {
    ExceptionList = local_c;
    return;
  }
  iVar4 = FUN_005998e0(*(int *)(param_1 + 0xb0));
  iVar4 = FUN_00401c30(iVar4);
  local_70 = local_64;
  local_64[0] = 0;
  local_6c = 0;
  local_68 = 0x14;
  FUN_004015d0(&local_70,*(char **)(iVar4 + 100),*(uint *)(iVar4 + 0x68));
  local_4 = 0;
  if (local_6c == 0) {
    if (local_68 < 0x15) {
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  local_90 = local_84;
  local_84[0] = '\0';
  local_8c = 0;
  local_88 = 0x14;
  _strncpy(local_90,"buyfood",7);
  ppcVar7 = &local_90;
  ppuVar6 = &local_70;
  local_8c = 7;
  local_90[7] = '\0';
  bVar2 = false;
  bVar1 = false;
  uVar5 = FUN_00401ec0(ppuVar6,ppcVar7);
  if ((char)uVar5 == '\0') {
    local_50 = local_44;
    local_4c = 0;
    local_48 = 0x14;
    local_44[0] = (char)uVar5;
    _strncpy(local_50,"overeat",7);
    ppcVar7 = &local_50;
    ppuVar6 = &local_70;
    local_4c = 7;
    local_50[7] = '\0';
    bVar2 = true;
    bVar1 = false;
    uVar5 = FUN_00401ec0(ppuVar6,ppcVar7);
    if ((char)uVar5 != '\0') goto LAB_00407d89;
    FUN_00401de0(local_2c,"eatonspot",0xffffffff);
    bVar2 = true;
    bVar1 = true;
    uVar5 = FUN_00401ec0(&local_70,local_2c);
    bVar3 = false;
    if ((char)uVar5 != '\0') goto LAB_00407d89;
  }
  else {
LAB_00407d89:
    bVar3 = true;
  }
  if ((bVar1) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if ((bVar2) && (0x14 < local_48)) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  if (bVar3) {
    iVar4 = 0;
  }
  else {
    local_90 = local_84;
    local_84[0] = '\0';
    local_8c = 0;
    local_88 = 0x14;
    _strncpy(local_90,"getdrunk",8);
    ppcVar7 = &local_90;
    ppuVar6 = &local_70;
    local_8c = 8;
    local_90[8] = '\0';
    bVar2 = false;
    bVar1 = false;
    uVar5 = FUN_00401ec0(ppuVar6,ppcVar7);
    if ((char)uVar5 == '\0') {
      FUN_00401de0(&local_50,"overdrink",0xffffffff);
      bVar2 = true;
      bVar1 = false;
      uVar5 = FUN_00401ec0(&local_70,&local_50);
      if ((char)uVar5 != '\0') goto LAB_00407e9e;
      FUN_00401de0(local_2c,"drinkonspot",0xffffffff);
      bVar2 = true;
      bVar1 = true;
      uVar5 = FUN_00401ec0(&local_70,local_2c);
      bVar3 = false;
      if ((char)uVar5 != '\0') goto LAB_00407e9e;
    }
    else {
LAB_00407e9e:
      bVar3 = true;
    }
    if ((bVar1) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if ((bVar2) && (0x14 < local_48)) {
                    /* WARNING: Subroutine does not return */
      _free(local_50);
    }
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if (!bVar3) goto joined_r0x00407f2d;
    iVar4 = 1;
  }
  fVar8 = 0.0;
  this = (void *)(**(code **)(**(int **)(param_1 + 0xb0) + 0x294))();
  FUN_00407540(this,iVar4,fVar8);
joined_r0x00407f2d:
  if (local_68 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_70);
}


//// FUNCTION FUN_00407f60 @ 00407f60 ////

undefined4 * FUN_00407f60(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9cc1b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00407b30(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_00407fc0 @ 00407fc0 ////

undefined4 * __thiscall FUN_00407fc0(void *this,byte param_1)

{
  FUN_00407fe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00407fe0 @ 00407fe0 ////

void __fastcall FUN_00407fe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9cc38;
  pvStack_c = ExceptionList;
  puVar1 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  param_1[0x27] = &PTR_FUN_00d16954;
  local_4 = 0;
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x29] = param_1[0x28];
  }
  if (param_1[0x28] != 0) {
    *(undefined4 *)(param_1[0x28] + 4) = param_1[0x29];
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x29] = param_1[0x28];
  }
  if (param_1[0x28] != 0) {
    *(undefined4 *)(param_1[0x28] + 4) = param_1[0x29];
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 0x19;
  }
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004080a0 @ 004080a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004080a0(int param_1)

{
  float fVar1;
  
  FUN_00407bf0(param_1);
  fVar1 = *(float *)(param_1 + 0x8c) - _DAT_00e4e074;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x8c) = fVar1;
  fVar1 = *(float *)(param_1 + 0x90) - _DAT_00e4e074;
  if (fVar1 < 0.0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    return;
  }
  if (1.0 < fVar1) {
    *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
    return;
  }
  *(float *)(param_1 + 0x90) = fVar1;
  return;
}


//// FUNCTION FUN_00408130 @ 00408130 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408130(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  float10 fVar4;
  float fVar5;
  char *local_144;
  undefined4 local_140;
  uint local_13c;
  char local_138 [20];
  char *local_124;
  undefined4 local_120;
  uint local_11c;
  char local_118 [20];
  undefined1 *local_104;
  undefined4 local_100;
  uint local_fc;
  undefined1 local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9ccc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = (char *)FUN_00acdb9e(0xe4e0b4);
  local_104 = local_f8;
  local_f8[0] = 0;
  local_100 = 0;
  local_fc = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_104,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0;
  FUN_0098fa50(FUN_00407f60,&local_104);
  local_4 = 0xffffffff;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  FUN_0098f9e0(0x989790);
  FUN_0098fc90("Suspended",&DAT_00f87a60,1,2);
  local_144 = local_138;
  local_138[0] = '\0';
  local_140 = 0;
  local_13c = 0x14;
  _strncpy(local_144,"addictions",10);
  local_140 = 10;
  local_144[10] = '\0';
  local_4 = 1;
  FUN_0055c540(local_e4,&local_144);
  if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
    _free(local_144);
  }
  local_144 = local_138;
  local_138[0] = '\0';
  local_140 = 0;
  local_13c = 0x14;
  _strncpy(local_144,"feed",4);
  local_140 = 4;
  local_144[4] = '\0';
  local_4._0_1_ = 4;
  fVar4 = FUN_00558610(local_e4,&local_144,0.05);
  DAT_00e4e070 = (float)fVar4;
  if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
    _free(local_144);
  }
  local_144 = local_138;
  local_138[0] = '\0';
  local_140 = 0;
  local_13c = 0x14;
  _strncpy(local_144,"decayperminute",0xe);
  local_140 = 0xe;
  local_144[0xe] = '\0';
  local_4._0_1_ = 5;
  fVar4 = FUN_00558610(local_e4,&local_144,0.01);
  _DAT_00e4e074 = (float)(fVar4 * (float10)0.016666668 * (float10)0.1);
  if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
    _free(local_144);
  }
  local_144 = local_138;
  local_138[0] = '\0';
  local_140 = 0;
  local_13c = 0x14;
  _strncpy(local_144,"desireoverdrink",0xf);
  local_140 = 0xf;
  local_144[0xf] = '\0';
  local_4._0_1_ = 6;
  FUN_00558a50(local_e4,&local_144,(undefined4 *)0x1);
  if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
    _free(local_144);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"satisfy",7);
  local_120 = 7;
  local_124[7] = '\0';
  local_144 = local_138;
  local_138[0] = '\0';
  local_140 = 0;
  local_13c = 0x14;
  _strncpy(local_144,"drunkennessadder",0x10);
  local_140 = 0x10;
  local_144[0x10] = '\0';
  local_4._0_1_ = 8;
  fVar4 = FUN_00558610(local_e4,&local_124,0.0);
  fVar5 = (float)fVar4;
  fVar4 = FUN_00558610(local_e4,&local_144,0.0);
  FUN_00839d50((float)fVar4,fVar5);
  if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
    _free(local_144);
  }
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"desiregetdrunk",0xe);
  local_120 = 0xe;
  local_124[0xe] = '\0';
  local_4._0_1_ = 9;
  FUN_00558a50(local_e4,&local_124,(undefined4 *)0x1);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_144 = local_138;
  local_138[0] = '\0';
  local_140 = 0;
  local_13c = 0x14;
  _strncpy(local_144,"satisfy",7);
  local_140 = 7;
  local_144[7] = '\0';
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"drunkennessadder",0x10);
  local_120 = 0x10;
  local_124[0x10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0xb);
  fVar4 = FUN_00558610(local_e4,&local_144,0.0);
  fVar5 = (float)fVar4;
  fVar4 = FUN_00558610(local_e4,&local_124,0.0);
  FUN_00836910((float)fVar4,fVar5);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
    _free(local_144);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004085e0 @ 004085e0 ////

void __fastcall FUN_004085e0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00408610 @ 00408610 ////

void FUN_00408610(void)

{
  return;
}


//// FUNCTION FUN_00408640 @ 00408640 ////

int * __thiscall FUN_00408640(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00408680 @ 00408680 ////

int __fastcall FUN_00408680(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
}


//// FUNCTION FUN_00408910 @ 00408910 ////

int * __thiscall FUN_00408910(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00408970 @ 00408970 ////

void FUN_00408970(void)

{
  return;
}


//// FUNCTION FUN_004089c0 @ 004089c0 ////

void __fastcall FUN_004089c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_004089e0 @ 004089e0 ////

void __fastcall FUN_004089e0(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00408b70 @ 00408b70 ////

int * __thiscall FUN_00408b70(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}


//// FUNCTION FUN_00408ba0 @ 00408ba0 ////

int * __cdecl FUN_00408ba0(int param_1,int param_2,int *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    (**(code **)(*param_3 + 4))();
    param_3[5] = *(int *)(param_1 + 0x14);
    (**(code **)*param_3)();
    param_3[6] = *(int *)(param_1 + 0x18);
    param_1 = param_1 + 0x1c;
    param_3 = param_3 + 7;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00408bf0 @ 00408bf0 ////

undefined4 * __cdecl FUN_00408bf0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar1 = param_3 + -7;
    iVar2 = param_2 + -0x1c;
    (**(code **)(param_3[-7] + 4))();
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    (**(code **)*puVar1)();
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = puVar1;
    param_2 = iVar2;
  } while (iVar2 != param_1);
  return puVar1;
}


//// FUNCTION FUN_00408c40 @ 00408c40 ////

void __fastcall FUN_00408c40(int *param_1)

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
  puStack_8 = &LAB_00c9cce8;
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


//// FUNCTION FUN_00408d10 @ 00408d10 ////

uint __fastcall FUN_00408d10(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  float local_4;
  
  uVar3 = *(uint *)(param_1 + 100);
  uVar2 = *(uint *)(param_1 + 0x68);
  if (uVar3 != uVar2) {
    do {
      local_4 = *(float *)(*(int *)(uVar3 + 0x14) + 0xa4);
      uVar1 = FUN_0043b6c0(&stack0x00000004,&local_4);
      if ((char)uVar1 != '\0') {
        uVar1 = FUN_0043b6a0(&stack0x00000004,(float *)(uVar3 + 0x18));
        if ((char)uVar1 != '\0') {
          return CONCAT31((int3)((uint)uVar1 >> 8),1);
        }
      }
      uVar2 = *(uint *)(param_1 + 0x68);
      uVar3 = uVar3 + 0x1c;
    } while (uVar3 != uVar2);
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00408e00 @ 00408e00 ////

void __fastcall FUN_00408e00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d16aac;
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


//// FUNCTION FUN_00408ee0 @ 00408ee0 ////

void __cdecl FUN_00408ee0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
    param_1[6] = *(int *)(param_3 + 0x18);
  }
  return;
}


//// FUNCTION FUN_00408f40 @ 00408f40 ////

undefined4 * __fastcall FUN_00408f40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9cd08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d16aac;
  param_1[5] = 0;
  local_4 = 0;
  FUN_0043b510(param_1 + 6);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00408fa0 @ 00408fa0 ////

void __fastcall FUN_00408fa0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d16aac;
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


//// FUNCTION FUN_00409060 @ 00409060 ////

void __fastcall FUN_00409060(int param_1)

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


//// FUNCTION FUN_00409130 @ 00409130 ////

undefined4 * __thiscall FUN_00409130(void *this,byte param_1)

{
  FUN_00408fa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00409150 @ 00409150 ////

void __fastcall FUN_00409150(int param_1)

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


//// FUNCTION FUN_004091c0 @ 004091c0 ////

void __cdecl FUN_004091c0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_FUN_00d16aac;
        iVar2 = *(int *)(param_1 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
        puVar3[4] = *(undefined4 *)(param_1 + 0x18);
      }
      param_1 = param_1 + 0x1c;
      param_3 = param_3 + 7;
      puVar3 = puVar3 + 7;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00409230 @ 00409230 ////

void __cdecl FUN_00409230(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_FUN_00d16aac;
        iVar2 = *(int *)(param_3 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
        puVar3[4] = *(undefined4 *)(param_3 + 0x18);
      }
      param_1 = param_1 + 7;
      puVar3 = puVar3 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_00409310 @ 00409310 ////

void FUN_00409310(void)

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
  puStack_8 = &LAB_00c9cd28;
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


//// FUNCTION FUN_00409380 @ 00409380 ////

void FUN_00409380(void)

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
  puStack_8 = &LAB_00c9cd48;
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


//// FUNCTION FUN_00409470 @ 00409470 ////

void __fastcall FUN_00409470(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d16abc;
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


//// FUNCTION FUN_004094c0 @ 004094c0 ////

undefined4 * __thiscall FUN_004094c0(void *this,byte param_1)

{
  FUN_00409470(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00409580 @ 00409580 ////

undefined4 * FUN_00409580(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00409230(param_1,param_2,param_3);
  return param_1 + param_2 * 7;
}


//// FUNCTION FUN_004095b0 @ 004095b0 ////

void FUN_004095b0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    FUN_00408fa0(param_1);
  }
  return;
}


//// FUNCTION FUN_004095e0 @ 004095e0 ////

void __thiscall FUN_004095e0(void *this,int param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined **local_38;
  int iStack_34;
  int *piStack_30;
  undefined ***pppuStack_2c;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00c9cd68;
  pvStack_10 = ExceptionList;
  pppuStack_2c = &local_38;
  uVar6 = 0;
  iStack_24 = *(int *)(param_3 + 0x14);
  puStack_14 = &stack0xffffffbc;
  iStack_34 = 0;
  piStack_30 = (int *)0x0;
  local_38 = &PTR_FUN_00d16aac;
  ExceptionList = &pvStack_10;
  if (iStack_24 != 0) {
    piStack_30 = (int *)(iStack_24 + 0x18);
    iStack_34 = *piStack_30;
    ExceptionList = &pvStack_10;
    *(int **)(*piStack_30 + 4) = &iStack_34;
    *piStack_30 = (int)&iStack_34;
  }
  uStack_20 = *(undefined4 *)(param_3 + 0x18);
  iVar2 = *(int *)((int)this + 4);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar2) / 0x1c;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    pvStack_18 = this;
    puVar1 = &stack0xffffffbc;
    if (0x9249249U - iVar2 < param_2) {
      FUN_00409380();
      uVar6 = extraout_ECX;
      puVar1 = puStack_14;
    }
    puStack_14 = puVar1;
    if (*(int *)((int)this + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x9249249 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (uVar6 < iVar2 + param_2) {
        iVar2 = FUN_00408680((int)this);
        uVar6 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar6 * 0x1c);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      puStack_1c = puVar3;
      puVar4 = (undefined4 *)FUN_004091c0(*(int *)((int)this + 4),param_1,puVar3);
      FUN_00409230(puVar4,param_2,(int)&local_38);
      FUN_004091c0(param_1,*(int *)((int)this + 8),puVar4 + param_2 * 7);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_004095b0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar6 * 7;
      *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 7;
      *(undefined4 **)((int)this + 4) = puVar3;
    }
    else {
      puStack_1c = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puStack_1c - param_1) / 0x1c) < param_2) {
        FUN_004091c0(param_1,(int)puStack_1c,(undefined4 *)(param_2 * 0x1c + param_1));
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        FUN_00409580(*(undefined4 **)((int)this + 8),
                     param_2 - (*(int *)((int)this + 8) - param_1) / 0x1c,(int)&local_38);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x1c;
        *(int *)((int)this + 8) = iVar2;
        uStack_8 = 0;
        FUN_00408ee0((int *)param_1,(int *)(iVar2 + param_2 * -0x1c),(int)&local_38);
      }
      else {
        puVar3 = puStack_1c + param_2 * -7;
        uVar5 = FUN_004091c0((int)puVar3,(int)puStack_1c,puStack_1c);
        *(undefined4 *)((int)this + 8) = uVar5;
        FUN_00408bf0(param_1,(int)puVar3,puStack_1c);
        FUN_00408ee0((int *)param_1,(int *)(param_2 * 0x1c + param_1),(int)&local_38);
      }
    }
  }
  if (piStack_30 != (int *)0x0) {
    *piStack_30 = iStack_34;
  }
  if (iStack_34 != 0) {
    *(int **)(iStack_34 + 4) = piStack_30;
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00409602 @ 00409602 ////

void __fastcall FUN_00409602(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_EAX;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  int iVar8;
  int unaff_EBP;
  
  uVar7 = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = in_EAX;
  iVar3 = *(int *)(param_2 + 0x14);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
  *(int *)(unaff_EBP + -0x14) = param_1;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_00d16aac;
  *(int *)(unaff_EBP + -0x20) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)(unaff_EBP + -0x2c) = piVar2;
    *(int *)(unaff_EBP + -0x30) = *piVar2;
    *(int *)(*piVar2 + 4) = unaff_EBP + -0x30;
    *piVar2 = unaff_EBP + -0x30;
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(param_2 + 0x18);
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 != 0) {
    uVar7 = (*(int *)(param_1 + 0xc) - iVar3) / 0x1c;
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  if (uVar1 != 0) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
    }
    if (0x9249249U - iVar3 < uVar1) {
      FUN_00409380();
      uVar7 = extraout_ECX;
    }
    if (*(int *)(param_1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
    }
    if (uVar7 < iVar3 + uVar1) {
      if (0x9249249 - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (*(int *)(param_1 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
      }
      if (uVar7 < iVar3 + uVar1) {
        iVar3 = FUN_00408680(param_1);
        uVar7 = iVar3 + uVar1;
      }
      *(uint *)(unaff_EBP + 0x10) = uVar7 * 0x1c;
      puVar4 = operator_new(uVar7 * 0x1c);
      iVar3 = *(int *)(param_1 + 4);
      *(undefined4 **)(unaff_EBP + -0x18) = puVar4;
      *(undefined4 **)(unaff_EBP + 0xc) = puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puVar5 = (undefined4 *)FUN_004091c0(iVar3,*(int *)(unaff_EBP + 8),puVar4);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar5;
      FUN_00409230(puVar5,uVar1,unaff_EBP + -0x34);
      puVar5 = (undefined4 *)(*(int *)(unaff_EBP + 0xc) + uVar1 * 0x1c);
      iVar3 = *(int *)(param_1 + 8);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar5;
      FUN_004091c0(*(int *)(unaff_EBP + 8),iVar3,puVar5);
      iVar3 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
      }
      if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
        FUN_004095b0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 4));
      }
      *(int *)(param_1 + 0xc) = *(int *)(unaff_EBP + 0x10) + (int)puVar4;
      *(undefined4 **)(param_1 + 8) = puVar4 + (uVar1 + iVar3) * 7;
      *(undefined4 **)(param_1 + 4) = puVar4;
    }
    else {
      iVar3 = *(int *)(param_1 + 8);
      piVar2 = *(int **)(unaff_EBP + 8);
      *(int *)(unaff_EBP + 0x10) = iVar3 - (int)piVar2;
      iVar8 = (int)((ulonglong)((longlong)(iVar3 - (int)piVar2) * -0x6db6db6d) >> 0x20) +
              *(int *)(unaff_EBP + 0x10);
      *(int *)(unaff_EBP + -0x18) = iVar3;
      if ((uint)((iVar8 >> 4) - (iVar8 >> 0x1f)) < uVar1) {
        *(uint *)(unaff_EBP + 0x10) = uVar1 * 0x1c;
        FUN_004091c0((int)piVar2,iVar3,piVar2 + uVar1 * 7);
        iVar3 = *(int *)(param_1 + 8);
        puVar4 = *(undefined4 **)(param_1 + 8);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00409580(puVar4,uVar1 - (iVar3 - (int)piVar2) / 0x1c,unaff_EBP + -0x34);
        iVar3 = *(int *)(unaff_EBP + 0x10);
        iVar8 = *(int *)(param_1 + 8) + iVar3;
        *(int *)(param_1 + 8) = iVar8;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00408ee0(piVar2,(int *)(iVar8 - iVar3),unaff_EBP + -0x34);
      }
      else {
        iVar8 = iVar3 + uVar1 * -0x1c;
        *(int *)(unaff_EBP + 8) = iVar8;
        uVar6 = FUN_004091c0(iVar8,iVar3,(undefined4 *)iVar3);
        puVar4 = *(undefined4 **)(unaff_EBP + -0x18);
        iVar3 = *(int *)(unaff_EBP + 8);
        *(undefined4 *)(param_1 + 8) = uVar6;
        FUN_00408bf0((int)piVar2,iVar3,puVar4);
        FUN_00408ee0(piVar2,piVar2 + uVar1 * 7,unaff_EBP + -0x34);
      }
    }
  }
  uVar6 = 0;
  if (*(undefined4 **)(unaff_EBP + -0x2c) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
    uVar6 = *(undefined4 *)(unaff_EBP + -0x2c);
  }
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 4) = uVar6;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


//// FUNCTION FUN_00409950 @ 00409950 ////

void __thiscall FUN_00409950(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x1c != 0) {
      iVar1 = (param_2 - iVar1) / 0x1c;
      goto LAB_00409999;
    }
  }
  iVar1 = 0;
LAB_00409999:
  FUN_004095e0(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x1c + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_004099c0 @ 004099c0 ////

void __fastcall FUN_004099c0(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 7) {
    FUN_00408fa0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00409a10 @ 00409a10 ////

void __thiscall FUN_00409a10(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_00408ba0((int)param_3,*(int *)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 7) {
      FUN_00408fa0(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00409a70 @ 00409a70 ////

void __fastcall FUN_00409a70(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 7) {
    FUN_00408fa0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00409a80 @ 00409a80 ////

void __thiscall FUN_00409a80(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x1c))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00409230(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 7;
    return;
  }
  FUN_00409950(this,&param_1,*(int *)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00409b20 @ 00409b20 ////

void __thiscall FUN_00409b20(void *this,uint param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9cd88;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
    }
    ExceptionList = &local_c;
    FUN_004095e0(this,*(int *)((int)this + 8),param_1 - iVar2,(int)&param_2);
  }
  else if (iVar2 != 0) {
    if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x1c)) {
      ExceptionList = &local_c;
      FUN_00409a10(this,&param_1,(int *)(param_1 * 0x1c + iVar2),*(int **)((int)this + 8));
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


//// FUNCTION FUN_00409c00 @ 00409c00 ////

void __fastcall FUN_00409c00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9cda8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d16ae8;
  param_1[0xe] = &PTR_LAB_00d16ac8;
  local_4 = 0;
  FUN_004099c0((int)(param_1 + 0x18));
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00409c80 @ 00409c80 ////

void __fastcall FUN_00409c80(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d16abc;
  return;
}


//// FUNCTION FUN_00409d10 @ 00409d10 ////

void __fastcall FUN_00409d10(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 in_stack_ffffff98;
  int in_stack_ffffff9c;
  int *in_stack_ffffffa0;
  undefined1 *local_38;
  int local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9cdf0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = FUN_0098b490("ResearchEvents");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        local_30 = (undefined1 *)0x0;
      }
      else {
        local_30 = (undefined1 *)((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0x1c);
      }
      FUN_0098a3a0(&local_30);
      local_34 = 0;
      for (local_38 = (undefined1 *)0x0;
          (*(int *)(param_1 + 0x2c) != 0 &&
          (local_38 < (undefined1 *)((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0x1c)))
          ; local_38 = local_38 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar6 = "C:\\movies\\dev\\TheMovies\\AIResearchSchedule.cpp";
          puVar8 = &DAT_010581d8;
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            puVar8 = puVar8 + 1;
          }
          local_2c = local_20;
          *(undefined2 *)puVar8 = *(undefined2 *)pcVar6;
          *(char *)((int)puVar8 + 2) = pcVar6[2];
          DAT_010581d4 = 0xf;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 0;
          pcVar4 = (char *)FUN_00ace33d(0xe4e150);
          pcVar6 = pcVar4;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_004073f0(&local_2c,pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
          FUN_00989710();
          local_4 = 0xffffffff;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
        }
        uVar3 = FUN_0098b490("ResearchEvents[x]");
        if ((char)uVar3 != '\0') {
          piVar7 = (int *)(*(int *)(param_1 + 0x2c) + local_34);
          FUN_00990970(piVar7);
          FUN_0098a430(piVar7 + 6,4);
        }
        local_34 = local_34 + 0x1c;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = (undefined1 *)0x0;
      FUN_004099c0(param_1 + 0x28);
      SLVAR_LoadUint(&local_38);
      puVar2 = local_38;
      local_30 = &stack0xffffff98;
      FUN_00408f40((undefined4 *)&stack0xffffff98);
      FUN_00409b20((void *)(param_1 + 0x28),(uint)puVar2,in_stack_ffffff98,in_stack_ffffff9c,
                   in_stack_ffffffa0);
      local_30 = (undefined1 *)0x0;
      if (local_38 != (undefined1 *)0x0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar6 = "C:\\movies\\dev\\TheMovies\\AIResearchSchedule.cpp";
            puVar8 = &DAT_010581d8;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              puVar8 = puVar8 + 1;
            }
            local_2c = local_20;
            *(undefined2 *)puVar8 = *(undefined2 *)pcVar6;
            *(char *)((int)puVar8 + 2) = pcVar6[2];
            DAT_010581d4 = 0xf;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 1;
            pcVar4 = (char *)FUN_00ace33d(0xe4e150);
            pcVar6 = pcVar4;
            do {
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_2c,pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
            FUN_00989710();
            local_4 = 0xffffffff;
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c);
            }
          }
          uVar3 = FUN_0098b490("ResearchEvents[x]");
          if ((char)uVar3 != '\0') {
            piVar7 = (int *)(*(int *)(param_1 + 0x2c) + local_34);
            FUN_00990970(piVar7);
            FUN_0098a430(piVar7 + 6,4);
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0x1c;
        } while (local_30 < local_38);
      }
    }
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0040a050 @ 0040a050 ////

undefined4 * __thiscall FUN_0040a050(void *this,byte param_1)

{
  FUN_00409c00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0040a070 @ 0040a070 ////

void __fastcall FUN_0040a070(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_00d16b44;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = param_1 + 6;
  param_1[8] = 0;
  *puVar1 = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[3] = puVar1;
  *puVar1 = param_1 + 2;
  param_1[1] = &PTR_LAB_00d16abc;
  return;
}


//// FUNCTION FUN_0040a0d0 @ 0040a0d0 ////

undefined4 * __thiscall FUN_0040a0d0(void *this,byte param_1)

{
  FUN_00526bb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0040a0f0 @ 0040a0f0 ////

undefined4 * __fastcall FUN_0040a0f0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  int local_48;
  undefined4 local_44;
  float fStack_40;
  float fStack_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined ****local_2c;
  int local_28;
  int *local_24;
  undefined4 ***local_20 [2];
  undefined4 local_18;
  float local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9ce56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = param_1;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d16ae8;
  param_1[0xe] = &PTR_LAB_00d16ac8;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_2c = (undefined ****)local_20;
  local_20[0] = (undefined4 ***)((uint)local_20[0] & 0xffffff00);
  local_28 = 0;
  local_24 = (int *)0x14;
  _strncpy((char *)local_2c,"moviemaking",0xb);
  local_28 = 0xb;
  *(char *)((int)local_2c + 0xb) = '\0';
  local_4._0_1_ = 3;
  ResearchCategory_NameToEnum(&local_48,&local_2c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  piVar4 = (int *)FUN_0049d9d0(&local_30);
  iVar7 = *piVar4;
  piVar4 = (int *)FUN_0049d9e0(&local_34);
  if (iVar7 != *piVar4) {
    do {
      local_44 = *(undefined4 *)(*(int *)(iVar7 + 8) + 0xa0);
      bVar3 = FUN_0049ba50(&local_44,&local_48);
      if (bVar3) {
        local_20[0] = &local_2c;
        local_28 = 0;
        local_24 = (int *)0x0;
        local_2c = (undefined ****)&PTR_FUN_00d16aac;
        local_18 = 0;
        local_4._0_1_ = 4;
        FUN_0043b510(local_14);
        uVar1 = *(undefined4 *)(iVar7 + 8);
        local_4 = CONCAT31(local_4._1_3_,5);
        (*(code *)local_2c[1])();
        local_18 = uVar1;
        (*(code *)*local_2c)();
        fVar8 = FUN_00990d60();
        fStack_40 = (float)fVar8;
        for (fVar6 = 0.0;
            (DAT_00f87a68 != 0 && ((uint)fVar6 < (uint)(DAT_00f87a6c - DAT_00f87a68 >> 2)));
            fVar6 = (float)((int)fVar6 + 1)) {
          if (fStack_40 < *(float *)(DAT_00f87a68 + (int)fVar6 * 4)) {
            iVar2 = *(int *)(iVar7 + 8);
            fStack_40 = *(float *)(iVar2 + 0xa4);
            iVar5 = DAT_00f87a6c - DAT_00f87a68 >> 2;
            fStack_3c = (float)iVar5;
            if (iVar5 < 0) {
              fStack_3c = fStack_3c + 4.2949673e+09;
            }
            fStack_3c = (fStack_40 - *(float *)(iVar2 + 0xa8)) / fStack_3c;
            local_14[0] = *(float *)(iVar2 + 0xa8);
            fVar8 = FUN_00990d60();
            fVar9 = (float10)(int)fVar6;
            if ((int)fVar6 < 0) {
              fVar9 = fVar9 + (float10)4.2949673e+09;
            }
            local_14[0] = (float)((fVar9 + fVar8) * (float10)fStack_3c + (float10)local_14[0]);
            param_1 = local_38;
            fStack_40 = fVar6;
            goto LAB_0040a2fb;
          }
        }
        local_14[0] = *(float *)(*(int *)(iVar7 + 8) + 0xa4);
LAB_0040a2fb:
        FUN_00409a80(param_1 + 0x18,(int)&local_2c);
        local_4 = CONCAT31(local_4._1_3_,2);
        local_2c = (undefined ****)&PTR_FUN_00d16aac;
        if (local_24 != (int *)0x0) {
          *local_24 = local_28;
        }
        if (local_28 != 0) {
          *(int **)(local_28 + 4) = local_24;
        }
        local_18 = 0;
        local_28 = 0;
        local_24 = (int *)0x0;
      }
      iVar7 = *(int *)(iVar7 + 4);
      piVar4 = (int *)FUN_0049d9e0(&local_34);
    } while (iVar7 != *piVar4);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0040a3b0 @ 0040a3b0 ////

void __fastcall FUN_0040a3b0(int param_1)

{
  if ((*(char *)(param_1 + 0xac) == '\0') || (*(int *)(param_1 + 0xa8) < 0)) {
    *(undefined1 *)(param_1 + 0xac) = 1;
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return;
}


//// FUNCTION FUN_0040a3e0 @ 0040a3e0 ////

void * __thiscall FUN_0040a3e0(void *this,byte param_1)

{
  FUN_00990ec0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0040a410 @ 0040a410 ////

int * __thiscall FUN_0040a410(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION Math_Sin @ 0040a430 ////

undefined1  [10] __cdecl Math_Sin(float param_1)

{
  undefined1 auVar1 [10];
  
  auVar1 = (undefined1  [10])fsin((float10)param_1);
  return auVar1;
}


//// FUNCTION Accessor_GetField0x14 @ 0040a440 ////

undefined4 __fastcall Accessor_GetField0x14(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


//// FUNCTION Accessor_GetField0x14_Alt @ 0040a450 ////

undefined4 __fastcall Accessor_GetField0x14_Alt(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


//// FUNCTION Accessor_GetNestedField0x8 @ 0040a460 ////

undefined4 __fastcall Accessor_GetNestedField0x8(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 8);
}


//// FUNCTION ListIterator_CopyAssign @ 0040a470 ////

void __thiscall ListIterator_CopyAssign(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  return;
}


//// FUNCTION ListIterator_Increment @ 0040a480 ////

void __fastcall ListIterator_Increment(int *param_1)

{
  *param_1 = *(int *)(*param_1 + 4);
  return;
}


//// FUNCTION ListIterator_Dereference @ 0040a490 ////

undefined4 __fastcall ListIterator_Dereference(int *param_1)

{
  return *(undefined4 *)(*param_1 + 8);
}


//// FUNCTION ListIterator_Dereference_Alt @ 0040a4a0 ////

undefined4 __fastcall ListIterator_Dereference_Alt(int *param_1)

{
  return *(undefined4 *)(*param_1 + 8);
}


//// FUNCTION ListIterator_NotEqual @ 0040a4b0 ////

undefined4 __thiscall ListIterator_NotEqual(void *this,int *param_1)

{
  return CONCAT31((int3)((uint)*(int *)this >> 8),*(int *)this != *param_1);
}


//// FUNCTION ListIterator_AssignPointer @ 0040a4d0 ////

void __thiscall ListIterator_AssignPointer(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return;
}


//// FUNCTION SetByteFF @ 0040a4e0 ////

void __fastcall SetByteFF(undefined1 *param_1)

{
  *param_1 = 0xff;
  return;
}


//// FUNCTION FUN_0040a4f0 @ 0040a4f0 ////

void __thiscall FUN_0040a4f0(void *this,int param_1)

{
  if (param_1 < 0) {
    *(undefined1 *)this = 0;
    return;
  }
  if (0xff < param_1) {
    *(undefined1 *)this = 0xff;
    return;
  }
  *(char *)this = (char)param_1;
  return;
}


//// FUNCTION FUN_0040a530 @ 0040a530 ////

void __thiscall FUN_0040a530(void *this,int param_1,int param_2,int param_3,int param_4)

{
  *(undefined1 *)this = 0xff;
  *(undefined1 *)((int)this + 1) = 0xff;
  *(undefined1 *)((int)this + 2) = 0xff;
  *(undefined1 *)((int)this + 3) = 0xff;
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0xff < param_1) {
    param_1 = 0xff;
  }
  *(char *)((int)this + 3) = (char)param_1;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0xff < param_2) {
    param_2 = 0xff;
  }
  *(char *)((int)this + 2) = (char)param_2;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (0xff < param_3) {
    param_3 = 0xff;
  }
  *(char *)((int)this + 1) = (char)param_3;
  if (param_4 < 0) {
    *(undefined1 *)this = 0;
    return;
  }
  if (0xff < param_4) {
    param_4 = 0xff;
  }
  *(char *)this = (char)param_4;
  return;
}


//// FUNCTION FUN_0040a5b0 @ 0040a5b0 ////

void __fastcall FUN_0040a5b0(undefined4 *param_1)

{
  undefined1 uVar1;
  LONG LVar2;
  
  LVar2 = InterlockedDecrement(param_1 + 4);
  uVar1 = DAT_0105b588;
  if ((LVar2 == 0) && (DAT_0105b588 = 1, param_1 != (undefined4 *)0x0)) {
    (**(code **)*param_1)(1);
  }
  DAT_0105b588 = uVar1;
  return;
}


//// FUNCTION FUN_0040a660 @ 0040a660 ////

void __thiscall FUN_0040a660(void *this,float param_1)

{
  if (param_1 < 0.001) {
    *(undefined4 *)((int)this + 0x24) = 0x3a83126f;
    return;
  }
  *(float *)((int)this + 0x24) = param_1;
  return;
}


//// FUNCTION FUN_0040a690 @ 0040a690 ////

undefined4 * __cdecl FUN_0040a690(uint param_1,char param_2)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9ce6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x30);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00996b20(this,param_1,param_2);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0040a6f0 @ 0040a6f0 ////

void __fastcall FUN_0040a6f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x20) != 0) && (iVar1 = 0, *(short *)(param_1 + 0x1c) != 0)) {
    iVar2 = 0;
    do {
      *(uint *)(iVar2 + 0x30 + *(int *)(param_1 + 0x20)) =
           *(uint *)(iVar2 + 0x30 + *(int *)(param_1 + 0x20)) | 0x100;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x34;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x1c));
  }
  return;
}


//// FUNCTION FUN_0040a7c0 @ 0040a7c0 ////

void __fastcall FUN_0040a7c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar8 = FUN_00990ae0(param_1,param_2);
    fVar5 = (float10)(int)uVar8;
    if ((int)uVar8 < 0) {
      fVar5 = fVar5 + (float10)4.2949673e+09;
    }
    fVar6 = (float10)fsin(fVar5 * (float10)*(float *)(param_1 + 0x44));
    fVar7 = (float10)fsin(fVar5 * (float10)*(float *)(param_1 + 0x38));
    **(float **)(param_1 + 0x74) =
         (float)((fVar7 + fVar6) * (float10)*(float *)(param_1 + 0x54) * (float10)0.5 +
                (float10)*(float *)(param_1 + 0x98));
    fVar6 = (float10)fsin(fVar5 * (float10)*(float *)(param_1 + 0x48));
    fVar7 = (float10)fsin(fVar5 * (float10)*(float *)(param_1 + 0x3c));
    *(float *)(*(int *)(param_1 + 0x74) + 4) =
         (float)((fVar7 + fVar6) * (float10)*(float *)(param_1 + 0x58) * (float10)0.5 +
                (float10)*(float *)(param_1 + 0x9c));
    fVar6 = (float10)fsin(fVar5 * (float10)*(float *)(param_1 + 0x4c));
    fVar7 = (float10)fsin(fVar5 * (float10)*(float *)(param_1 + 0x40));
    *(float *)(*(int *)(param_1 + 0x74) + 8) =
         (float)((fVar7 + fVar6) * (float10)*(float *)(param_1 + 0x5c) * (float10)0.5 +
                (float10)*(float *)(param_1 + 0xa0));
    fVar5 = (float10)fsin(fVar5 * (float10)*(float *)(param_1 + 0x50));
    fVar5 = (fVar5 * (float10)*(float *)(param_1 + 0x60) + (float10)1.0) * (float10)0.4;
    if (fVar5 < (float10)0.001) {
      fVar5 = (float10)0.001;
    }
    *(float *)(*(int *)(param_1 + 0x74) + 0x24) = (float)fVar5;
LAB_0040a902:
    if (*(int *)(param_1 + 0xa8) < 0) goto LAB_0040a955;
  }
  else {
    fVar5 = FUN_00566c00(DAT_0104cdf4);
    iVar3 = *(int *)(param_1 + 0xb0);
    puVar2 = *(undefined4 **)(param_1 + 0x74);
    *puVar2 = *(undefined4 *)(param_1 + 0x98);
    puVar2[1] = *(undefined4 *)(param_1 + 0x9c);
    puVar2[2] = *(undefined4 *)(param_1 + 0xa0);
    *(float *)(*(int *)(param_1 + 0x74) + 8) = (float)((fVar5 + (float10)iVar3) * (float10)0.3);
    if (*(float *)(*(int *)(param_1 + 0x74) + 8) < 1.0) goto LAB_0040a902;
    if ((*(char *)(param_1 + 0xac) == '\0') || (*(int *)(param_1 + 0xa8) < 0)) {
      *(undefined1 *)(param_1 + 0xac) = 1;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      goto LAB_0040a902;
    }
  }
  FUN_00566c00(DAT_0104cdf4);
  uVar8 = FUN_00acd42c();
  iVar3 = (int)uVar8;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  *(char *)(*(int *)(param_1 + 0x74) + 0x2f) = (char)iVar3;
LAB_0040a955:
  iVar3 = *(int *)(param_1 + 0x74);
  if (*(float *)(iVar3 + 8) < 0.1) {
    if (*(float *)(iVar3 + 8) <= 0.0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(iVar3 + 8);
    }
    *(undefined4 *)(iVar3 + 8) = uVar1;
    iVar3 = *(int *)(param_1 + 0x74);
    uVar8 = FUN_00acd42c();
    iVar4 = (int)uVar8;
    if (iVar4 < 0) {
      *(undefined1 *)(iVar3 + 0x2f) = 0;
      return;
    }
    if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    *(char *)(iVar3 + 0x2f) = (char)iVar4;
  }
  return;
}


//// FUNCTION FUN_0040a9c0 @ 0040a9c0 ////

undefined4 __fastcall FUN_0040a9c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x94);
}


//// FUNCTION FUN_0040a9d0 @ 0040a9d0 ////

void __fastcall FUN_0040a9d0(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_0040abb0 @ 0040abb0 ////

void __fastcall FUN_0040abb0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_0040abd0 @ 0040abd0 ////

void __fastcall FUN_0040abd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d16b88;
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


//// FUNCTION FUN_0040ac20 @ 0040ac20 ////

void __fastcall FUN_0040ac20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d16b98;
  *(uint *)(param_1[0x1d] + 0x30) = *(uint *)(param_1[0x1d] + 0x30) | 0x100;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = &PTR_FUN_00d16b88;
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x22] = param_1[0x21];
  }
  if (param_1[0x21] != 0) {
    *(undefined4 *)(param_1[0x21] + 4) = param_1[0x22];
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x22] = param_1[0x21];
  }
  if (param_1[0x21] != 0) {
    *(undefined4 *)(param_1[0x21] + 4) = param_1[0x22];
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_0040acf0 @ 0040acf0 ////

undefined4 * __thiscall FUN_0040acf0(void *this,byte param_1)

{
  FUN_0040ac20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0040ad10 @ 0040ad10 ////

void __fastcall FUN_0040ad10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d16ba0;
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


//// FUNCTION FUN_0040ad60 @ 0040ad60 ////

undefined4 * __thiscall FUN_0040ad60(void *this,byte param_1)

{
  FUN_0040ad10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0040ad80 @ 0040ad80 ////

void __fastcall FUN_0040ad80(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Memory;
  undefined1 uVar3;
  LONG LVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9ce93;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d16bac;
  local_4 = 1;
  if ((undefined4 *)param_1[0x20] != param_1 + 0x23) {
    do {
      piVar1 = (int *)param_1[0x20];
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
    } while ((undefined4 *)param_1[0x20] != param_1 + 0x23);
  }
  _Memory = *(void **)(param_1[0x2b] + 0x18);
  if (_Memory == (void *)0x0) {
    *(undefined4 *)(param_1[0x2b] + 0x18) = 0;
    puVar2 = (undefined4 *)param_1[0x2b];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar3;
      param_1[0x2b] = 0;
    }
    FUN_0040ad10(param_1 + 0x1e);
    local_4 = 0xffffffff;
    FUN_0053ddb0(param_1);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0040aea0 @ 0040aea0 ////

undefined4 * __thiscall FUN_0040aea0(void *this,byte param_1)

{
  FUN_0040ad80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0040aec0 @ 0040aec0 ////

void __fastcall FUN_0040aec0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d16ba0;
  return;
}


//// FUNCTION FUN_0040af20 @ 0040af20 ////

undefined4 * __thiscall
FUN_0040af20(void *this,char *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  void *this_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9cef4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(this);
  *(undefined ***)this = &PTR_FUN_00d16bac;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  puVar2 = (undefined4 *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x94) = 0;
  *puVar2 = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined ***)((int)this + 0x78) = &PTR_LAB_00d16ba0;
  *(undefined4 **)((int)this + 0x80) = puVar2;
  *puVar2 = (undefined4 *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0xb0) = param_3;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  if (param_4 < 0) {
    *(int *)((int)this + 0xb4) = param_2 * param_2;
  }
  else {
    *(int *)((int)this + 0xb4) = param_4;
  }
  puVar2 = FUN_0040a690(100,'\0');
  *(undefined4 **)((int)this + 0xac) = puVar2;
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 4;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  *(undefined4 *)(*(int *)((int)this + 0xac) + 0x18) = uVar3;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0xac) + 0x18) + 0xc) = 6;
  pvVar4 = FUN_0099bb50(param_1,0,0,0,'\0');
  this_00 = *(void **)(*(int *)((int)this + 0xac) + 0x18);
  if (*(void **)((int)this_00 + 0x18) != pvVar4) {
    Engine_SetResourceReference(this_00,(int)pvVar4);
  }
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0xac) + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  FUN_0099a220(*(void **)((int)this + 0xac),(ushort)param_2);
  FUN_0040a6f0(*(int *)((int)this + 0xac));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0040b080 @ 0040b080 ////

undefined4 * __thiscall FUN_0040b080(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  float10 fVar7;
  char *pcVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9cf21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d16b98;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  piVar2 = (int *)((int)this + 0x80);
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(int **)((int)this + 0x8c) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d16b88;
  *(undefined4 *)((int)this + 0x94) = 0;
  local_4 = 2;
  *(void **)((int)this + 0x6c) = this;
  FUN_00acdb9e(0xe4e21c);
  iVar5 = FUN_0097dda0();
  *(int *)((int)this + 0x70) = iVar5;
  if (s___AVCAnimSprites_TM___00e4e204[0x16] != '\0') {
    iVar5 = 100;
    pcVar8 = "Link";
    pcVar6 = (char *)FUN_00acdb9e(0xe4e21c);
    FUN_0097df60(pcVar6,pcVar8,iVar5);
    s___AVCAnimSprites_TM___00e4e204[0x16] = '\0';
  }
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined1 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa4) = param_3;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0x94) = param_2;
  (**(code **)*piVar2)();
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(*(int *)((int)this + 0x94) + 0xb0);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(*(int *)((int)this + 0x94) + 0xb4);
  if (*(int *)((int)this + 0xa4) == 0) {
    fVar7 = FUN_00990e30(0.0002,0.002);
    *(float *)((int)this + 0x38) = (float)fVar7;
    fVar7 = FUN_00990e30(0.0002,0.002);
    *(float *)((int)this + 0x3c) = (float)fVar7;
    fVar7 = FUN_00990e30(0.0001,0.002);
    *(float *)((int)this + 0x40) = (float)fVar7;
    fVar7 = FUN_00990e30(0.0002,0.002);
    *(float *)((int)this + 0x44) = (float)fVar7;
    fVar7 = FUN_00990e30(0.0002,0.002);
    *(float *)((int)this + 0x48) = (float)fVar7;
    fVar7 = FUN_00990e30(0.0001,0.002);
    *(float *)((int)this + 0x4c) = (float)fVar7;
    fVar7 = FUN_00990e30(0.0002,0.003);
    *(float *)((int)this + 0x50) = (float)fVar7;
    fVar7 = FUN_00990e30(0.5,1.5);
    *(float *)((int)this + 0x54) = (float)(fVar7 * (float10)0.75);
    fVar7 = FUN_00990e30(0.5,1.5);
    *(float *)((int)this + 0x58) = (float)(fVar7 * (float10)0.75);
    fVar7 = FUN_00990e30(0.5,1.5);
    *(float *)((int)this + 0x5c) = (float)(fVar7 * (float10)1.25);
    fVar7 = FUN_00990e30(0.5,1.5);
    *(float *)((int)this + 0x60) = (float)(fVar7 * (float10)0.1);
  }
  *(int *)((int)this + 0x74) = param_1;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)((int)this + 0x78);
  *(undefined4 *)(*(int *)((int)this + 0x74) + 0x2c) = 0xffffff;
  puVar3 = *(undefined4 **)((int)this + 0x74);
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar1 = (uint *)(*(int *)((int)this + 0x74) + 0x30);
  *puVar1 = *puVar1 & 0xfffffeff;
  *(undefined4 *)(*(int *)((int)this + 0x74) + 0x24) = 0x3ecccccd;
  iVar5 = FUN_00990d30(0,2);
  uVar4 = *(uint *)(*(int *)((int)this + 0x74) + 0x30);
  *(uint *)(*(int *)((int)this + 0x74) + 0x30) = uVar4 ^ ((uint)(iVar5 != 0) << 9 ^ uVar4) & 0x200;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0040b300 @ 0040b300 ////

undefined4 * __thiscall FUN_0040b300(void *this,undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *this_00;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9cf3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = FUN_00995d50(*(int *)((int)this + 0xac));
  if (-1 < (int)uVar4) {
    this_00 = operator_new(0xb4);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_0040b080(this_00,uVar4 * 0x34 + *(int *)(*(int *)((int)this + 0xac) + 0x20),this,
                            param_2);
    }
    puVar5[0x26] = *param_1;
    puVar5[0x27] = param_1[1];
    puVar5[0x28] = param_1[2];
    puVar3 = (undefined4 *)puVar5[0x1d];
    *puVar3 = *param_1;
    puVar3[1] = param_1[1];
    puVar3[2] = param_1[2];
    piVar2 = (int *)((int)this + 0x8c);
    piVar1 = puVar5 + 0x19;
    puVar5[0x1a] = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
    ExceptionList = local_c;
    return puVar5;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0040b460 @ 0040b460 ////

void __fastcall FUN_0040b460(undefined4 *param_1)

{
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[8] = 0x3f800000;
  param_1[4] = 0x3f800000;
  *param_1 = 0x3f800000;
  return;
}


//// FUNCTION FUN_0040b490 @ 0040b490 ////

void __thiscall FUN_0040b490(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *param_1 = fVar1 * *(float *)this +
             fVar2 * *(float *)((int)this + 0xc) + fVar3 * *(float *)((int)this + 0x18) +
             *(float *)((int)this + 0x24);
  param_1[1] = fVar1 * *(float *)((int)this + 4) +
               fVar2 * *(float *)((int)this + 0x10) + fVar3 * *(float *)((int)this + 0x1c) +
               *(float *)((int)this + 0x28);
  param_1[2] = fVar1 * *(float *)((int)this + 8) +
               fVar2 * *(float *)((int)this + 0x14) + fVar3 * *(float *)((int)this + 0x20) +
               *(float *)((int)this + 0x2c);
  return;
}


//// FUNCTION FUN_0040b4f0 @ 0040b4f0 ////

void __thiscall FUN_0040b4f0(void *this,float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)fcos((float10)param_1);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x3f800000;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)this = (float)fVar1;
  fVar1 = (float10)fsin((float10)param_1);
  *(float *)((int)this + 4) = (float)fVar1;
  *(float *)((int)this + 0xc) = (float)-fVar1;
  return;
}


//// FUNCTION FUN_0040b540 @ 0040b540 ////

void __fastcall FUN_0040b540(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_0040b560 @ 0040b560 ////

void __fastcall FUN_0040b560(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_0040b590 @ 0040b590 ////

undefined4 __thiscall FUN_0040b590(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 unaff_ESI;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 *puStack_8;
  float fStack_4;
  
  uVar1 = *(uint *)((int)this + 0x2e0);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x2b8) != 0)) {
    local_20 = 0;
    local_1c = 0;
    uVar1 = (**(code **)(*(int *)this + 0xdc))(param_2);
    if ((char)uVar1 != '\0') {
      fStack_4 = 0.0;
      uVar1 = *(uint *)((int)*(void **)((int)this + 0x214) + 0x50);
      if ((uVar1 & 0x400) != 0) {
        uVar1 = FUN_009782d0(*(void **)((int)this + 0x214),(int)&local_1c,(int)&local_20,
                             (float *)&stack0xffffffdc,&fStack_4);
        if ((char)uVar1 != '\0') {
          *puStack_8 = unaff_ESI;
          puStack_8[1] = local_20;
          puStack_8[2] = local_1c;
          puStack_8[3] = uStack_18;
          puStack_8[4] = uStack_14;
          puStack_8[5] = uStack_10;
          puStack_8[3] = fStack_4;
          return CONCAT31((int3)((uint)uStack_10 >> 8),1);
        }
      }
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_0040b670 @ 0040b670 ////

void __fastcall FUN_0040b670(undefined4 *param_1)

{
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[8] = 0x3f800000;
  param_1[4] = 0x3f800000;
  *param_1 = 0x3f800000;
  return;
}


//// FUNCTION FUN_0040b6a0 @ 0040b6a0 ////

void __thiscall FUN_0040b6a0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00c9cf58;
  pvStack_c = ExceptionList;
  local_30 = 0;
  ExceptionList = &pvStack_c;
  FUN_00405040(this,param_1);
  if (*(int **)((int)this + 0x2e0) != (int *)0x0) {
    piVar1 = (int *)(**(code **)(**(int **)((int)this + 0x2e0) + 0xec))();
    if (piVar1 == param_1) {
      local_30 = 0x3f800000;
    }
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ai_owner",8);
  local_28 = 8;
  local_2c[8] = '\0';
  uStack_4 = 0;
  FUN_00404790(this,&local_2c,local_30);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0040b770 @ 0040b770 ////

void __fastcall FUN_0040b770(void *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  piVar1 = *(int **)((int)param_1 + 0x2e0);
  fVar2 = *(float *)((int)param_1 + 0x22c);
  local_1c = *(float *)((int)param_1 + 0x2e4) + *(float *)(piVar1[0x47] + 0x80);
  fVar3 = *(float *)((int)param_1 + 0x230);
  fVar6 = (float10)fcos((float10)(float)piVar1[0x31]);
  fVar7 = (float10)fsin((float10)(float)piVar1[0x31]);
  fVar4 = *(float *)((int)param_1 + 0x234) * 0.0;
  local_18 = (float)(fVar6 * (float10)fVar2 + (float10)fVar3 * -fVar7 + (float10)fVar4);
  local_14 = (float)(fVar7 * (float10)fVar2 + (float10)fVar3 * fVar6 + (float10)fVar4);
  local_10 = (fVar3 + fVar2) * 0.0 + *(float *)((int)param_1 + 0x234);
  pfVar5 = (float *)(**(code **)(*piVar1 + 0x34))(local_c);
  local_1c = local_1c + *pfVar5;
  local_18 = local_18 + pfVar5[1];
  local_14 = local_14 + pfVar5[2];
  uVar8 = *(undefined4 *)(*(int *)((int)param_1 + 0x2e0) + 0x11c);
  fVar6 = FUN_004012c0(fVar3);
  FUN_00978350(*(void **)((int)param_1 + 0x214),&local_1c,(float)fVar6,uVar8);
  FUN_00538800(param_1,&local_1c);
  return;
}


//// FUNCTION FUN_0040b8a0 @ 0040b8a0 ////

void __thiscall FUN_0040b8a0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d16bec;
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


//// FUNCTION FUN_0040b8f0 @ 0040b8f0 ////

void __fastcall FUN_0040b8f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d16bec;
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


//// FUNCTION FUN_0040b940 @ 0040b940 ////

undefined4 * __thiscall FUN_0040b940(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  float10 fVar3;
  
  FUN_00406c00(this);
  *(undefined ***)this = &PTR_FUN_00d16c34;
  *(undefined ***)((int)this + 0x78) = &PTR_LAB_00d16c14;
  *(undefined ***)((int)this + 0xa0) = &PTR_FUN_00d16bfc;
  piVar1 = (int *)((int)this + 0x2d0);
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 **)((int)this + 0x2d8) = (undefined4 *)((int)this + 0x2cc);
  *(undefined4 *)((int)this + 0x2cc) = &PTR_FUN_00d16bec;
  *(int *)((int)this + 0x2e0) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x2d4) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  fVar3 = FUN_004012c0(0.0);
  *(float *)((int)this + 0x2e4) = (float)fVar3;
  *(undefined4 *)((int)this + 700) = 0x3f800000;
  return this;
}


//// FUNCTION FUN_0040b9e0 @ 0040b9e0 ////

void __fastcall FUN_0040b9e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d16c34;
  param_1[0x1e] = &PTR_LAB_00d16c14;
  param_1[0x28] = &PTR_FUN_00d16bfc;
  param_1[0xb3] = &PTR_FUN_00d16bec;
  if ((undefined4 *)param_1[0xb5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb5] = param_1[0xb4];
  }
  if (param_1[0xb4] != 0) {
    *(undefined4 *)(param_1[0xb4] + 4) = param_1[0xb5];
  }
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb8] = 0;
  if ((undefined4 *)param_1[0xb5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb5] = param_1[0xb4];
  }
  if (param_1[0xb4] != 0) {
    *(undefined4 *)(param_1[0xb4] + 4) = param_1[0xb5];
  }
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  FUN_004064d0(param_1);
  return;
}


//// FUNCTION FUN_0040ba80 @ 0040ba80 ////

void __fastcall FUN_0040ba80(int *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char *local_40;
  undefined4 local_3c;
  uint local_38;
  char local_34 [20];
  void *local_20 [2];
  uint local_18;
  
  if (param_1[0xb8] == 0) goto LAB_0040bbbd;
  if (*(int *)(param_1[0xb8] + 0x2b8) == 0) {
    (**(code **)(*param_1 + 4))();
    return;
  }
  if ((param_1[0x93] == 0) || (*(char *)(param_1[0x93] + 0x70) != '\0')) goto LAB_0040bbc9;
  local_40 = local_34;
  local_34[0] = '\0';
  local_3c = 0;
  local_38 = 0x14;
  _strncpy(local_40,"task_repairman",0xe);
  local_3c = 0xe;
  local_40[0xe] = '\0';
  bVar1 = false;
  uVar3 = FUN_00401ec0((undefined4 *)(param_1[0x93] + 0x74),&local_40);
  if ((char)uVar3 == '\0') {
    FUN_00401de0(local_20,"task_builder",0xffffffff);
    bVar1 = true;
    uVar3 = FUN_00401ec0((undefined4 *)(param_1[0x93] + 0x74),local_20);
    bVar2 = false;
    if ((char)uVar3 != '\0') goto LAB_0040bb5d;
  }
  else {
LAB_0040bb5d:
    bVar2 = true;
  }
  if ((bVar1) && (0x14 < local_18)) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if ((bVar2) ||
     (uVar3 = FUN_009757a0((void *)param_1[0x85],(byte *)0xd16590,1.0,0), (char)uVar3 != '\0')) {
LAB_0040bbc9:
    FUN_00405930(param_1);
    return;
  }
LAB_0040bbbd:
  (**(code **)(*param_1 + 4))();
  return;
}


//// FUNCTION FUN_0040bbe0 @ 0040bbe0 ////

undefined4 * __thiscall FUN_0040bbe0(void *this,byte param_1)

{
  FUN_0040b9e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0040bc40 @ 0040bc40 ////

void __fastcall FUN_0040bc40(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0040bc80 @ 0040bc80 ////

void FUN_0040bc80(void)

{
  return;
}


//// FUNCTION FUN_0040bc90 @ 0040bc90 ////

void FUN_0040bc90(void)

{
  FUN_00471840("MT_REVIEWS_OPENMOVIEREVIEW",0x1fd);
  FUN_00471840("MT_REVIEWS_OPENMOVIEREVIEWA",0x225);
  FUN_00471840("MT_REVIEWS_OPENSTARREVIEW",0x24d);
  FUN_00471840("MT_REVIEWS_OPENSTUDIOREVIEW",0x275);
  return;
}


//// FUNCTION FUN_0040bcd0 @ 0040bcd0 ////

void FUN_0040bcd0(void)

{
  return;
}


//// FUNCTION FUN_0040bd00 @ 0040bd00 ////

void __fastcall FUN_0040bd00(int param_1)

{
  *(undefined1 *)(param_1 + 0x61) = 1;
  return;
}


//// FUNCTION FUN_0040bd40 @ 0040bd40 ////

int __fastcall FUN_0040bd40(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_0040bee0 @ 0040bee0 ////

void __cdecl FUN_0040bee0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x45);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x45);
  }
  return;
}


//// FUNCTION FUN_0040bf00 @ 0040bf00 ////

void __cdecl FUN_0040bf00(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x45);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x45);
  }
  return;
}


//// FUNCTION FUN_0040bf40 @ 0040bf40 ////

void __thiscall FUN_0040bf40(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x45) == '\0') {
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


//// FUNCTION FUN_0040c030 @ 0040c030 ////

undefined4 FUN_0040c030(int param_1,int param_2,undefined *param_3)

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


//// FUNCTION FUN_0040c1b0 @ 0040c1b0 ////

void __fastcall FUN_0040c1b0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x45) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x45);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x45);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x45);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x45);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_0040c400 @ 0040c400 ////

void __fastcall FUN_0040c400(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x45) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x45) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x45);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x45);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x45) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x45) == '\0');
    if (*(char *)((int)piVar4 + 0x45) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_0040c4d0 @ 0040c4d0 ////

void __cdecl FUN_0040c4d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0040c510 @ 0040c510 ////

void __cdecl FUN_0040c510(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0040c5b0 @ 0040c5b0 ////

int * __thiscall FUN_0040c5b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0040c660 @ 0040c660 ////

int * __cdecl FUN_0040c660(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_0040c6a0 @ 0040c6a0 ////

undefined4 * __cdecl FUN_0040c6a0(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0040c920 @ 0040c920 ////

void __cdecl FUN_0040c920(void *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_00552520(param_1,param_2);
  cVar1 = (char)uVar2;
  while ((cVar1 != '\0' &&
         (((param_2[1] == 0 || (*(char *)*param_2 == '#')) || (*(char *)*param_2 == '\"'))))) {
    uVar2 = FUN_00552520(param_1,param_2);
    cVar1 = (char)uVar2;
  }
  return;
}


//// FUNCTION FUN_0040c9e0 @ 0040c9e0 ////

void FUN_0040c9e0(int *param_1,int *param_2,undefined *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  
  uVar5 = FUN_0040c030((int)param_1,(int)param_2,param_3);
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


//// FUNCTION FUN_0040cae0 @ 0040cae0 ////

void __thiscall FUN_0040cae0(void *this,wchar_t *param_1,size_t param_2)

{
  wchar_t *_Dest;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) + param_2;
  if (*(uint *)((int)this + 8) <= uVar1) {
    uVar2 = uVar1 + 0x20 & 0xffffffe0;
    _Dest = _malloc(uVar2 * 2);
    _wcsncpy(_Dest,*(wchar_t **)this,*(size_t *)((int)this + 4));
    if (10 < *(uint *)((int)this + 8)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    *(uint *)((int)this + 8) = uVar2;
    *(wchar_t **)this = _Dest;
  }
  _wcsncpy((wchar_t *)(*(int *)this + *(int *)((int)this + 4) * 2),param_1,param_2);
  *(uint *)((int)this + 4) = uVar1;
  *(undefined2 *)(*(int *)this + uVar1 * 2) = 0;
  return;
}


//// FUNCTION FUN_0040cb70 @ 0040cb70 ////

void __thiscall FUN_0040cb70(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x45) == '\0') {
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


//// FUNCTION FUN_0040cc10 @ 0040cc10 ////

int * __fastcall FUN_0040cc10(int *param_1)

{
  FUN_0040c1b0(param_1);
  return param_1;
}


//// FUNCTION FUN_0040ce70 @ 0040ce70 ////

int * __fastcall FUN_0040ce70(int *param_1)

{
  FUN_0040c400(param_1);
  return param_1;
}


//// FUNCTION FUN_0040cf20 @ 0040cf20 ////

void * __cdecl FUN_0040cf20(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0040cf60 @ 0040cf60 ////

void __cdecl FUN_0040cf60(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0040cfb0 @ 0040cfb0 ////

void __cdecl FUN_0040cfb0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_0040d020 @ 0040d020 ////

void __cdecl FUN_0040d020(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0040d050 @ 0040d050 ////

void * __thiscall FUN_0040d050(void *this,undefined4 *param_1)

{
  FUN_004073f0(this,(char *)*param_1,param_1[1]);
  return this;
}


//// FUNCTION FUN_0040d150 @ 0040d150 ////

void __cdecl
FUN_0040d150(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (*(code *)param_4)(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = (*(code *)param_4)(*param_3,*param_2);
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  cVar2 = (*(code *)param_4)(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}


//// FUNCTION FUN_0040d1b0 @ 0040d1b0 ////

void __cdecl FUN_0040d1b0(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

{
  char cVar1;
  int iVar2;
  
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    cVar1 = (*(code *)param_5)(*(undefined4 *)(param_1 + iVar2 * 4),param_4);
    if (cVar1 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  }
  *(undefined4 *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_0040d210 @ 0040d210 ////

void __cdecl FUN_0040d210(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 **ppuVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *local_c;
  undefined4 *local_8 [2];
  
  puVar5 = param_3;
  iVar9 = (int)param_3 - param_1 >> 2;
  iVar11 = param_2 - param_1 >> 2;
  iVar7 = iVar11;
  param_2 = iVar9;
  while (iVar2 = iVar7, iVar2 != 0) {
    iVar7 = param_2 % iVar2;
    param_2 = iVar2;
  }
  if ((param_2 < iVar9) && (0 < param_2)) {
    puVar10 = (undefined4 *)(param_1 + param_2 * 4);
    do {
      uVar1 = *puVar10;
      if (puVar10 + iVar11 == puVar5) {
        ppuVar8 = (undefined4 **)&param_1;
      }
      else {
        param_3 = puVar10 + iVar11;
        ppuVar8 = &param_3;
      }
      puVar6 = *ppuVar8;
      puVar4 = puVar10;
      while (puVar3 = puVar6, puVar3 != puVar10) {
        *puVar4 = *puVar3;
        iVar7 = (int)puVar5 - (int)puVar3 >> 2;
        if (iVar11 < iVar7) {
          local_c = puVar3 + iVar11;
          ppuVar8 = &local_c;
        }
        else {
          local_8[0] = (undefined4 *)(param_1 + (iVar7 * 0x3fffffff + iVar11) * 4);
          ppuVar8 = local_8;
        }
        puVar4 = puVar3;
        puVar6 = *ppuVar8;
      }
      puVar10 = puVar10 + -1;
      param_2 = param_2 + -1;
      *puVar4 = uVar1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_0040d2d0 @ 0040d2d0 ////

void __fastcall FUN_0040d2d0(int *param_1)

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
  puStack_8 = &LAB_00c9cf78;
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


//// FUNCTION FUN_0040d3a0 @ 0040d3a0 ////

void * __thiscall FUN_0040d3a0(void *this,undefined4 *param_1)

{
  FUN_0040cae0(this,(wchar_t *)*param_1,param_1[1]);
  return this;
}


//// FUNCTION FUN_0040d3c0 @ 0040d3c0 ////

void * __thiscall FUN_0040d3c0(void *this,wchar_t *param_1)

{
  size_t sVar1;
  
  sVar1 = FUN_00ace02d(param_1);
  FUN_0040cae0(this,param_1,sVar1);
  return this;
}


//// FUNCTION FUN_0040d450 @ 0040d450 ////

int * __fastcall FUN_0040d450(int *param_1)

{
  FUN_0040c1b0(param_1);
  return param_1;
}


//// FUNCTION FUN_0040d4b0 @ 0040d4b0 ////

void __fastcall FUN_0040d4b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d16da0;
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


//// FUNCTION FUN_0040d5d0 @ 0040d5d0 ////

void FUN_0040d5d0(void)

{
  return;
}


//// FUNCTION FUN_0040d5e0 @ 0040d5e0 ////

int * __fastcall FUN_0040d5e0(int *param_1)

{
  FUN_0040c400(param_1);
  return param_1;
}


//// FUNCTION FUN_0040d600 @ 0040d600 ////

void FUN_0040d600(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x11) = 1;
  *(undefined1 *)((int)puVar1 + 0x45) = 0;
  return;
}


//// FUNCTION FUN_0040d6b0 @ 0040d6b0 ////

undefined4 * __cdecl FUN_0040d6b0(undefined4 *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  char *local_20;
  uint local_1c;
  uint local_18;
  char local_14 [20];
  
  local_20 = local_14;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x14;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_20,param_2,(int)pcVar2 - (int)(param_2 + 1));
  FUN_004073f0(&local_20,(char *)*param_3,param_3[1]);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_20,local_1c);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_0040d790 @ 0040d790 ////

void * FUN_0040d790(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0040d7c0 @ 0040d7c0 ////

void * FUN_0040d7c0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0040d840 @ 0040d840 ////

undefined4 * __thiscall FUN_0040d840(void *this,byte param_1)

{
  FUN_0040d4b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0040d860 @ 0040d860 ////

void __cdecl
FUN_0040d860(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0040d150(param_1,param_1 + iVar1,param_1 + iVar1 * 2,param_4);
    FUN_0040d150(param_2 + -iVar1,param_2,param_2 + iVar1,param_4);
    FUN_0040d150(param_3 + iVar1 * -2,param_3 + -iVar1,param_3,param_4);
    FUN_0040d150(param_1 + iVar1,param_2,param_3 + -iVar1,param_4);
    return;
  }
  FUN_0040d150(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_0040d910 @ 0040d910 ////

void __cdecl FUN_0040d910(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    cVar1 = (*(code *)param_5)(*(undefined4 *)(param_1 + iVar3 * 4),
                               *(undefined4 *)(param_1 + -4 + iVar3 * 4));
    if (cVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  FUN_0040d1b0(param_1,iVar2,param_2,param_4,param_5);
  return;
}


//// FUNCTION FUN_0040d9d0 @ 0040d9d0 ////

void __fastcall FUN_0040d9d0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int local_4;
  
  piVar9 = (int *)(param_1 + 0x68);
  local_4 = 3;
  do {
    puVar3 = (undefined4 *)*piVar9;
    puVar4 = (undefined4 *)*puVar3;
    while (puVar4 != puVar3) {
      piVar5 = (int *)puVar4[6];
      piVar1 = puVar4 + 9;
      uVar10 = 0;
      piVar8 = piVar5;
      if (piVar5 != piVar1) {
        do {
          piVar8 = (int *)piVar8[1];
          uVar10 = uVar10 + 1;
        } while (piVar8 != piVar1);
        if (1 < uVar10) {
          FUN_0040c9e0(piVar5,piVar1,&LAB_004aa5f0);
        }
      }
      if (*(char *)((int)puVar4 + 0x45) == '\0') {
        puVar6 = (undefined4 *)puVar4[2];
        if (*(char *)((int)puVar6 + 0x45) == '\0') {
          cVar2 = *(char *)((int)*puVar6 + 0x45);
          puVar4 = puVar6;
          puVar6 = (undefined4 *)*puVar6;
          while (cVar2 == '\0') {
            cVar2 = *(char *)((int)*puVar6 + 0x45);
            puVar4 = puVar6;
            puVar6 = (undefined4 *)*puVar6;
          }
        }
        else {
          cVar2 = *(char *)((int)puVar4[1] + 0x45);
          puVar7 = (undefined4 *)puVar4[1];
          puVar6 = puVar4;
          while ((puVar4 = puVar7, cVar2 == '\0' && (puVar6 == (undefined4 *)puVar4[2]))) {
            cVar2 = *(char *)((int)puVar4[1] + 0x45);
            puVar7 = (undefined4 *)puVar4[1];
            puVar6 = puVar4;
          }
        }
      }
    }
    piVar9 = piVar9 + 3;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}


//// FUNCTION FUN_0040da90 @ 0040da90 ////

void __thiscall FUN_0040da90(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x45) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x45) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((int)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_0040db20 @ 0040db20 ////

void __fastcall FUN_0040db20(int param_1)

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


//// FUNCTION FUN_0040db50 @ 0040db50 ////

undefined4 * FUN_0040db50(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0040db80 @ 0040db80 ////

void __fastcall FUN_0040db80(int param_1)

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


//// FUNCTION FUN_0040dbb0 @ 0040dbb0 ////

undefined4 * FUN_0040dbb0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0040dbe0 @ 0040dbe0 ////

void __fastcall FUN_0040dbe0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040d600();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0040dc80 @ 0040dc80 ////

void __cdecl
FUN_0040dc80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puStack_4;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_0040d860(param_2,puVar5,param_3 + -1,param_4);
  puStack_4 = puVar5;
  while (((param_2 < puStack_4 &&
          (cVar3 = (*(code *)param_4)(puStack_4[-1],*puStack_4), cVar3 == '\0')) &&
         (cVar3 = (*(code *)param_4)(*puStack_4,puStack_4[-1]), cVar3 == '\0'))) {
    puStack_4 = puStack_4 + -1;
  }
  do {
    puVar5 = puVar5 + 1;
    puVar2 = puVar5;
    puVar6 = puStack_4;
    if ((param_3 <= puVar5) || (cVar3 = (*(code *)param_4)(*puVar5,*puStack_4), cVar3 != '\0'))
    break;
    cVar3 = (*(code *)param_4)(*puStack_4,*puVar5);
  } while (cVar3 == '\0');
joined_r0x0040dd18:
  do {
    puVar4 = puStack_4;
    if (param_3 <= puVar2) {
joined_r0x0040dd5e:
      for (; param_2 < puStack_4; puStack_4 = puStack_4 + -1) {
        puVar4 = puVar4 + -1;
        cVar3 = (*(code *)param_4)(*puVar4,*puVar6);
        if (cVar3 == '\0') {
          cVar3 = (*(code *)param_4)(*puVar6,*puVar4);
          if (cVar3 != '\0') break;
          uVar1 = puVar6[-1];
          puVar6 = puVar6 + -1;
          *puVar6 = *puVar4;
          *puVar4 = uVar1;
        }
      }
      if (puStack_4 == param_2) {
        if (puVar2 == param_3) {
          *param_1 = puVar6;
          param_1[1] = puVar5;
          return;
        }
        if (puVar5 != puVar2) {
          uVar1 = *puVar6;
          *puVar6 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar6;
        *puVar6 = *puVar2;
        puVar5 = puVar5 + 1;
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      else {
        puStack_4 = puStack_4 + -1;
        if (puVar2 == param_3) {
          puVar6 = puVar6 + -1;
          if (puStack_4 != puVar6) {
            uVar1 = *puStack_4;
            *puStack_4 = *puVar6;
            *puVar6 = uVar1;
          }
          puVar4 = puVar5 + -1;
          uVar1 = *puVar6;
          puVar5 = puVar5 + -1;
          *puVar6 = *puVar4;
          *puVar5 = uVar1;
        }
        else {
          uVar1 = *puVar2;
          *puVar2 = *puStack_4;
          *puStack_4 = uVar1;
          puVar2 = puVar2 + 1;
        }
      }
      goto joined_r0x0040dd18;
    }
    cVar3 = (*(code *)param_4)(*puVar6,*puVar2);
    if (cVar3 == '\0') {
      cVar3 = (*(code *)param_4)(*puVar2,*puVar6);
      if (cVar3 != '\0') goto joined_r0x0040dd5e;
      uVar1 = *puVar5;
      *puVar5 = *puVar2;
      puVar5 = puVar5 + 1;
      *puVar2 = uVar1;
    }
    puVar2 = puVar2 + 1;
  } while( true );
}


//// FUNCTION FUN_0040de50 @ 0040de50 ////

void __cdecl FUN_0040de50(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_0040d910(param_1,iVar2,iVar3,*(undefined4 *)(param_1 + -4 + iVar1),param_3);
  }
  return;
}


//// FUNCTION FUN_0040def0 @ 0040def0 ////

void __fastcall FUN_0040def0(int param_1)

{
  void *this;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint **_Memory;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint *puStack_5c;
  void *pvStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9cfae;
  pvStack_c = ExceptionList;
  uStack_4c = 0x40df18;
  ExceptionList = &pvStack_c;
  this = operator_new(0x3a8);
  piVar7 = (int *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    uStack_4c = 0x40df32;
    piVar7 = FUN_006889c0(this,'\x01');
  }
  iVar10 = *piVar7;
  local_4 = 0xffffffff;
  uStack_4c = 0x40df47;
  uStack_4c = FUN_0071b2a0();
  uStack_50 = 1;
  uStack_54 = 0x40df4f;
  (**(code **)(iVar10 + 0x5c))();
  iVar10 = *piVar7;
  uStack_54 = 0x43200000;
  pvStack_58 = (void *)0x40df5b;
  pvStack_58 = (void *)FUN_0071b2a0();
  puStack_5c = (uint *)0x1;
  (**(code **)(iVar10 + 100))();
  puVar1 = operator_new(0x3fc);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00833290(puVar1);
  }
  (**(code **)(*piVar2 + 0x5c))(1,piVar7,0);
  piVar8 = piVar7;
  (**(code **)(*piVar2 + 100))(1,piVar7,0);
  puStack_5c = &uStack_50;
  uStack_50 = uStack_50 & 0xffff0000;
  pvStack_58 = (void *)0x0;
  uStack_54 = 10;
  iVar6 = param_1 + 0x98;
  iVar10 = 3;
  do {
    iVar5 = 0;
    iVar9 = 0;
    while( true ) {
      iVar3 = 0;
      if (*(int *)(iVar6 + 4) != 0) {
        iVar3 = (*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4)) / 0x18;
      }
      if (iVar3 <= iVar9) break;
      iVar3 = *(int *)(*(int *)(iVar6 + 4) + iVar5 + 0x14);
      if (iVar3 != 0) {
        FUN_0040cae0(&puStack_5c,*(wchar_t **)(iVar3 + 0x68),*(size_t *)(iVar3 + 0x6c));
        sVar4 = FUN_00ace02d(L"<BR>");
        FUN_0040cae0(&puStack_5c,L"<BR>",sVar4);
      }
      iVar9 = iVar9 + 1;
      iVar5 = iVar5 + 0x18;
    }
    iVar6 = iVar6 + 0x10;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  _Memory = &puStack_5c;
  (**(code **)(*piVar2 + 0x54))();
  (**(code **)(*piVar2 + 0x84))(0);
  (**(code **)(*piVar7 + 0xc))(piVar2,1);
  (**(code **)(*piVar7 + 0x84))(0);
  piVar2 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar2 + 0xc))(piVar7,1);
  if (piVar8 <= &lpType_0000000a) {
    ExceptionList = pvStack_58;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0040e0c0 @ 0040e0c0 ////

int * __cdecl FUN_0040e0c0(int *param_1,int param_2,float param_3)

{
  int iVar1;
  char *_Source;
  undefined4 *puVar2;
  uint _Size;
  void *pvVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  char *local_40;
  uint local_3c;
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 8) - iVar1 >> 2;
  }
  iVar4 = 0;
  if (3 < iVar5) {
    pfVar6 = (float *)(iVar1 + 8);
    iVar4 = 0;
    do {
      if (param_3 < pfVar6[-2]) goto LAB_0040e162;
      if (param_3 < pfVar6[-1]) {
        iVar4 = iVar4 + 1;
        goto LAB_0040e162;
      }
      if (param_3 < *pfVar6) {
        iVar4 = iVar4 + 2;
        goto LAB_0040e162;
      }
      if (param_3 < pfVar6[1]) {
        iVar4 = iVar4 + 3;
        goto LAB_0040e162;
      }
      iVar4 = iVar4 + 4;
      pfVar6 = pfVar6 + 4;
    } while (iVar4 < iVar5 + -3);
  }
  if (iVar4 < iVar5) {
    pfVar6 = (float *)(iVar1 + iVar4 * 4);
    do {
      if (param_3 < *pfVar6) break;
      iVar4 = iVar4 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar4 < iVar5);
  }
LAB_0040e162:
  puVar2 = FUN_00569d60(local_20,iVar4);
  FUN_0040d6b0(&local_40,"_L",puVar2);
  _Source = local_40;
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  param_1[1] = 0;
  *param_1 = (int)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0x14;
  if (0x13 < local_3c) {
    _Size = local_3c + 0x20 & 0xffffffe0;
    param_1[2] = _Size;
    pvVar3 = _malloc(_Size);
    *param_1 = (int)pvVar3;
  }
  _strncpy((char *)*param_1,_Source,local_3c);
  param_1[1] = local_3c;
  *(undefined1 *)(local_3c + *param_1) = 0;
  if (local_38 < 0x15) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_40);
}


//// FUNCTION FUN_0040e210 @ 0040e210 ////

undefined4 __thiscall FUN_0040e210(void *this,undefined4 param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  float local_4;
  
  piVar2 = param_2;
  uVar3 = 0;
  local_4 = -10.0;
  *param_2 = -1;
  iVar4 = 0;
  piVar5 = (int *)((int)this + 0x68);
  do {
    FUN_0040da90(piVar5 + -1,&param_2,&param_1);
    if (((param_2 != (int *)*piVar5) && ((int *)param_2[6] != param_2 + 9)) &&
       (fVar1 = ABS(*(float *)(((int *)param_2[6])[2] + 0x60)), local_4 < fVar1)) {
      *piVar2 = iVar4;
      uVar3 = *(undefined4 *)(param_2[6] + 8);
      local_4 = fVar1;
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 3;
  } while (iVar4 < 3);
  return uVar3;
}


//// FUNCTION FUN_0040e290 @ 0040e290 ////

void __fastcall FUN_0040e290(int param_1)

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


//// FUNCTION FUN_0040e2c0 @ 0040e2c0 ////

void __fastcall FUN_0040e2c0(int param_1)

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


//// FUNCTION FUN_0040e2f0 @ 0040e2f0 ////

void __fastcall FUN_0040e2f0(int param_1)

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


//// FUNCTION FUN_0040e320 @ 0040e320 ////

int __fastcall FUN_0040e320(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040d600();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0040e390 @ 0040e390 ////

void __cdecl FUN_0040e390(undefined4 *param_1,undefined4 *param_2,undefined *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      cVar3 = (*(code *)param_3)(*puVar2,*param_1);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)param_3)(*puVar2,puVar2[-1]);
        puVar1 = puVar2;
        if (cVar3 != '\0') {
          do {
            puVar4 = puVar1 + -1;
            cVar3 = (*(code *)param_3)(*puVar2,puVar1[-2]);
            puVar1 = puVar4;
          } while (cVar3 != '\0');
          if ((puVar4 != puVar2) && (puVar2 != puVar2 + 1)) {
            FUN_0040d210((int)puVar4,(int)puVar2,puVar2 + 1);
          }
        }
      }
      else if ((param_1 != puVar2) && (puVar2 != puVar2 + 1)) {
        FUN_0040d210((int)param_1,(int)puVar2,puVar2 + 1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0040e440 @ 0040e440 ////

void __cdecl FUN_0040e440(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d16da0;
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


//// FUNCTION FUN_0040e4f0 @ 0040e4f0 ////

void __cdecl FUN_0040e4f0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d16da0;
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


//// FUNCTION FUN_0040e5c0 @ 0040e5c0 ////

void __cdecl FUN_0040e5c0(undefined4 *param_1,int param_2,undefined *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_0040d910((int)param_1,0,iVar2 + -4 >> 2,uVar1,param_3);
  }
  return;
}


//// FUNCTION FUN_0040e630 @ 0040e630 ////

undefined4 * __thiscall FUN_0040e630(void *this,byte param_1)

{
  FUN_0040e650(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0040e650 @ 0040e650 ////

void __fastcall FUN_0040e650(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d16788;
  if (0xf < (uint)param_1[9]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00ace1d8(param_1);
  return;
}


//// FUNCTION FUN_0040e710 @ 0040e710 ////

void __cdecl FUN_0040e710(undefined4 *param_1,undefined4 *param_2,int param_3,undefined *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_8;
  undefined4 *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_0040e7a7:
      if (1 < iVar2) {
        FUN_0040e390(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_0040de50((int)param_1,(int)param_2,param_4);
        }
        FUN_0040e5c0(param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_0040e7a7;
    }
    FUN_0040dc80(&local_8,param_1,param_2,param_4);
    puVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_0040e710(param_1,local_8,param_3,param_4);
      param_1 = puVar1;
    }
    else {
      FUN_0040e710(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_0040e800 @ 0040e800 ////

void __fastcall FUN_0040e800(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d16dcc;
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


//// FUNCTION FUN_0040e850 @ 0040e850 ////

void __fastcall FUN_0040e850(int param_1)

{
  FUN_0040e800((undefined4 *)(param_1 + 4));
  return;
}


//// FUNCTION FUN_0040e860 @ 0040e860 ////

undefined4 * __thiscall FUN_0040e860(void *this,byte param_1)

{
  FUN_0040e800(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0040e880 @ 0040e880 ////

undefined4 * FUN_0040e880(undefined4 *param_1,int param_2,int param_3)

{
  FUN_0040e4f0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0040e8b0 @ 0040e8b0 ////

void FUN_0040e8b0(void)

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
  puStack_8 = &LAB_00c9cfc8;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"invalid vector<T> subscript",0x1b);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16dc0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddd664);
}


//// FUNCTION FUN_0040e940 @ 0040e940 ////

void FUN_0040e940(void)

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
  puStack_8 = &LAB_00c9cfe8;
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


//// FUNCTION FUN_0040e9b0 @ 0040e9b0 ////

void FUN_0040e9b0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_0040d4b0(param_1);
  }
  return;
}


//// FUNCTION FUN_0040e9e0 @ 0040e9e0 ////

void FUN_0040e9e0(void)

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
  puStack_8 = &LAB_00c9d008;
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


//// FUNCTION FUN_0040ea50 @ 0040ea50 ////

void FUN_0040ea50(void)

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
  puStack_8 = &LAB_00c9d028;
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


//// FUNCTION FUN_0040eae0 @ 0040eae0 ////

void __fastcall FUN_0040eae0(int param_1)

{
  FUN_0040e800((undefined4 *)(param_1 + 0x10));
  return;
}


//// FUNCTION FUN_0040eb20 @ 0040eb20 ////

undefined4 __thiscall FUN_0040eb20(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3fffffff < param_1) {
    param_1 = FUN_0040e940();
  }
  pvVar1 = operator_new(param_1 * 4);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 4 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_0040ebc0 @ 0040ebc0 ////

void __fastcall FUN_0040ebc0(int param_1)

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
    FUN_0040d4b0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0040ec60 @ 0040ec60 ////

void __thiscall FUN_0040ec60(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0040e940();
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
      _Dst = FUN_0040db50((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0040d790(param_1,iVar5,param_1 + param_2);
      FUN_0040db50(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0040c4d0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0040d790(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0040cf60(param_1,(int)pvVar3,iVar5);
    FUN_0040c4d0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0040ee40 @ 0040ee40 ////

void __thiscall FUN_0040ee40(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_0040c660((int)param_3,*(int *)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 6) {
      FUN_0040d4b0(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0040eea0 @ 0040eea0 ////

void __thiscall FUN_0040eea0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00c9d048;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d16da0;
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
      FUN_0040e9e0();
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
        iVar3 = FUN_0040bd40((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_0040e440(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_0040e4f0(puVar5,param_2,(int)&local_34);
      FUN_0040e440((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0040e9b0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_0040e440((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0040e880(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_0040cfb0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_0040e440((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_0040c6a0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_0040cfb0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_0040f1d0 @ 0040f1d0 ////

void __thiscall FUN_0040f1d0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0040ea50();
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
      _Dst = FUN_0040dbb0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0040d7c0(param_1,iVar5,param_1 + param_2);
      FUN_0040dbb0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0040c510(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0040d7c0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0040d020(param_1,(int)pvVar3,iVar5);
    FUN_0040c510(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0040f3b0 @ 0040f3b0 ////

void * __thiscall FUN_0040f3b0(void *this,byte param_1)

{
  FUN_0040eae0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION CBasicReview_GetPinRowForQuality @ 0040f3d0 ////

float * __thiscall CBasicReview_GetPinRowForQuality(void *this,float param_1)

{
  float *pfVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  float *pfVar5;
  
  iVar2 = FUN_00ace790(this,0,&TM::CBasicReview::RTTI_Type_Descriptor,
                       &TM::CStudioReview::RTTI_Type_Descriptor,0);
  if (iVar2 == 0) {
    iVar2 = FUN_00ace790(this,0,&TM::CBasicReview::RTTI_Type_Descriptor,
                         &TM::CMovieReview::RTTI_Type_Descriptor,0);
    puVar3 = &DAT_010491f0;
    if (iVar2 == 0) {
      puVar3 = &DAT_0104b19c;
    }
  }
  else {
    puVar3 = &DAT_0104bdac;
  }
  pfVar1 = *(float **)(puVar3 + 4);
  uVar4 = 0;
  pfVar5 = pfVar1;
  while( true ) {
    if (pfVar1 == (float *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(puVar3 + 8) - (int)pfVar1 >> 4;
    }
    if (iVar2 <= (int)uVar4) break;
    if ((pfVar1 == (float *)0x0) || ((uint)(*(int *)(puVar3 + 8) - (int)pfVar1 >> 4) <= uVar4)) {
      FUN_0040e8b0();
      return pfVar5;
    }
    if (param_1 < *pfVar5) {
      return pfVar5;
    }
    uVar4 = uVar4 + 1;
    pfVar5 = pfVar5 + 4;
  }
  return (float *)(*(int *)(puVar3 + 8) + -0x10);
}


//// FUNCTION FUN_0040f470 @ 0040f470 ////

void __fastcall FUN_0040f470(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_0040f480 @ 0040f480 ////

void __fastcall FUN_0040f480(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_0040f4b0 @ 0040f4b0 ////

void __fastcall FUN_0040f4b0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_0040f4c0 @ 0040f4c0 ////

void __thiscall FUN_0040f4c0(void *this,uint param_1)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2 >> 2;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2 >> 2;
    }
    FUN_0040ec60(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if (((iVar2 != 0) &&
      (pvVar3 = *(void **)((int)this + 8), param_1 < (uint)((int)pvVar3 - iVar2 >> 2))) &&
     (_Dst = (void *)(iVar2 + param_1 * 4), _Dst != pvVar3)) {
    pvVar3 = _memmove(_Dst,pvVar3,0);
    *(void **)((int)this + 8) = pvVar3;
  }
  return;
}


//// FUNCTION FUN_0040f5a0 @ 0040f5a0 ////

void __thiscall FUN_0040f5a0(void *this,uint param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9d068;
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
    FUN_0040eea0(this,*(int **)((int)this + 8),param_1 - iVar2,(int)&param_2);
  }
  else if (iVar2 != 0) {
    if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x18)) {
      ExceptionList = &local_c;
      FUN_0040ee40(this,&param_1,(int *)(iVar2 + param_1 * 0x18),*(int **)((int)this + 8));
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


//// FUNCTION FUN_0040f680 @ 0040f680 ////

void __thiscall FUN_0040f680(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0040f6c5;
    }
  }
  iVar1 = 0;
LAB_0040f6c5:
  FUN_0040eea0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_0040f760 @ 0040f760 ////

void __thiscall FUN_0040f760(void *this,undefined4 *param_1)

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
  FUN_0040ec60(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0040f7f0 @ 0040f7f0 ////

void __thiscall FUN_0040f7f0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0040e4f0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0040f680(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0040f8e0 @ 0040f8e0 ////

void __fastcall FUN_0040f8e0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d16dcc;
  return;
}


//// FUNCTION FUN_0040f940 @ 0040f940 ////

void __fastcall FUN_0040f940(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d16dcc;
  return;
}


//// FUNCTION FUN_0040f9a0 @ 0040f9a0 ////

void __thiscall FUN_0040f9a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x20) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 **)((int)this + 0xc) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 8);
  *(undefined ***)((int)this + 4) = &PTR_LAB_00d16dcc;
  return;
}


//// FUNCTION FUN_0040fa00 @ 0040fa00 ////

void __thiscall FUN_0040fa00(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9d0e8;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  do {
    param_1 = param_1 + 1;
    iVar2 = 0;
    if (0 < *param_1) {
      do {
        iVar1 = *(int *)(iVar3 + 4 + param_2);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar3 + 8 + param_2) - iVar1 >> 2;
        }
        if (iVar1 <= iVar2) break;
        local_10 = *(int *)(*(int *)(iVar3 + 4 + param_2) + iVar2 * 4);
        local_18 = &local_24;
        local_20 = 0;
        local_1c = (int *)0x0;
        local_24 = &PTR_LAB_00d16da0;
        if (local_10 != 0) {
          local_1c = (int *)(local_10 + 0x18);
          local_20 = *local_1c;
          *(int **)(*local_1c + 4) = &local_20;
          *local_1c = (int)&local_20;
        }
        local_4 = 0;
        FUN_0040f7f0((void *)(iVar3 + 0x98 + (int)this),(int)&local_24);
        if (local_1c != (int *)0x0) {
          *local_1c = local_20;
        }
        if (local_20 != 0) {
          *(int **)(local_20 + 4) = local_1c;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    iVar3 = iVar3 + 0x10;
    if (0x2f < iVar3) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION CBasicReview_SelectComments @ 0040fb30 ////

void __thiscall CBasicReview_SelectComments(void *this,float param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 auStack_3c [4];
  int aiStack_38 [11];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d113;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)this + 0x10))();
  _eh_vector_constructor_iterator_(auStack_3c,0x10,3,FUN_0040f4b0,FUN_0040e2f0);
  puVar3 = *(undefined4 **)((int)this + 0x8c);
  uStack_4 = 0;
  if (puVar3 != *(undefined4 **)((int)this + 0x90)) {
    do {
      puStack_40 = (undefined1 *)FUN_0040e210(this,*puVar3,&iStack_44);
      if (puStack_40 != (undefined1 *)0x0) {
        iVar2 = aiStack_38[iStack_44 * 4];
        if ((iVar2 == 0) ||
           ((uint)(aiStack_38[iStack_44 * 4 + 2] - iVar2 >> 2) <=
            (uint)(aiStack_38[iStack_44 * 4 + 1] - iVar2 >> 2))) {
          FUN_0040f1d0(auStack_3c + iStack_44 * 0x10,(undefined4 *)aiStack_38[iStack_44 * 4 + 1],1,
                       &puStack_40);
        }
        else {
          piVar4 = (int *)aiStack_38[iStack_44 * 4 + 1];
          *piVar4 = (int)puStack_40;
          aiStack_38[iStack_44 * 4 + 1] = (int)(piVar4 + 1);
        }
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 **)((int)this + 0x90));
  }
  piVar4 = aiStack_38;
  iVar2 = 3;
  do {
    FUN_0040e710((undefined4 *)*piVar4,(undefined4 *)piVar4[1],piVar4[1] - *piVar4 >> 2,
                 &LAB_004aa5f0);
    piVar4 = piVar4 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar5 = auStack_3c;
  puStack_40 = &stack0xffffffa4;
  pfVar1 = CBasicReview_GetPinRowForQuality(this,param_1);
  FUN_0040fa00(this,(int *)pfVar1,(int)puVar5);
  uStack_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(auStack_3c,0x10,3,FUN_0040e2f0);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0040fc80 @ 0040fc80 ////

void __thiscall FUN_0040fc80(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00c9d128;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x45) != '\0') {
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
  FUN_0040c1b0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x45) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x45) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x45) == '\0') {
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
      iVar1 = param_2[0x11];
      *(char *)(param_2 + 0x11) = (char)_Memory[0x11];
      *(char *)(_Memory + 0x11) = (char)iVar1;
      goto LAB_0040fdef;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x45) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x45) == '\0') {
      piVar2 = (int *)FUN_0040bf00(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x45) == '\0') {
      uVar3 = FUN_0040bee0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0040fdef:
  if ((char)_Memory[0x11] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0x11] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar5 + 0x11) = 0;
            FUN_0040cb70(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(*piVar4 + 0x44) != '\x01') || (*(char *)(piVar4[2] + 0x44) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x44) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x44) = 1;
                *(undefined1 *)(piVar4 + 0x11) = 0;
                FUN_0040bf40(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0x11) = (char)piVar5[0x11];
              *(undefined1 *)(piVar5 + 0x11) = 1;
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              FUN_0040cb70(this,(int)piVar5);
              break;
            }
LAB_0040feb8:
            *(undefined1 *)(piVar4 + 0x11) = 0;
          }
        }
        else {
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar5 + 0x11) = 0;
            FUN_0040bf40(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(piVar4[2] + 0x44) == '\x01') && (*(char *)(*piVar4 + 0x44) == '\x01'))
            goto LAB_0040feb8;
            if (*(char *)(*piVar4 + 0x44) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              *(undefined1 *)(piVar4 + 0x11) = 0;
              FUN_0040cb70(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0x11) = (char)piVar5[0x11];
            *(undefined1 *)(piVar5 + 0x11) = 1;
            *(undefined1 *)(*piVar4 + 0x44) = 1;
            FUN_0040bf40(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0x11) = 1;
  }
  piVar4 = (int *)_Memory[6];
  _Memory[4] = (int)&PTR_LAB_00d16dcc;
  while (piVar4 != _Memory + 9) {
    *piVar4 = 0;
    piVar4 = (int *)piVar4[1];
    *(undefined4 *)(*piVar4 + 4) = 0;
  }
  _Memory[6] = 0;
  _Memory[9] = 0;
  FUN_00406010((int)(_Memory + 4));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0040ff80 @ 0040ff80 ////

void FUN_0040ff80(void *param_1)

{
  if (*(char *)((int)param_1 + 0x45) == '\0') {
    FUN_0040ff80(*(void **)((int)param_1 + 8));
    FUN_0040eae0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0040ffc0 @ 0040ffc0 ////

void __thiscall FUN_0040ffc0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x20) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 **)((int)this + 0xc) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 8);
  *(undefined ***)((int)this + 4) = &PTR_LAB_00d16dcc;
  return;
}


//// FUNCTION FUN_00410060 @ 00410060 ////

void __fastcall FUN_00410060(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *local_14;
  int local_c;
  undefined1 local_4 [4];
  
  local_14 = (int *)(param_1 + 0x68);
  piVar6 = (int *)(param_1 + 0x9c);
  local_c = 3;
  while( true ) {
    piVar7 = *(int **)*local_14;
    if (piVar7 != (int *)*local_14) {
      do {
        piVar3 = (int *)piVar7[6];
        while (piVar3 != piVar7 + 9) {
          puVar5 = (undefined4 *)piVar3[2];
          if ((*(char *)(param_1 + 0x60) == '\0') || (*(char *)(puVar5 + 0x2a) == '\0')) {
            piVar2 = (int *)piVar3[1];
            if (piVar2 != (int *)0x0) {
              *piVar2 = *piVar3;
            }
            if (*piVar3 != 0) {
              *(int *)(*piVar3 + 4) = piVar3[1];
            }
            *piVar3 = 0;
            piVar3[1] = 0;
            piVar3 = piVar2;
            if (puVar5 != (undefined4 *)0x0) {
              (**(code **)*puVar5)(1);
            }
          }
          else {
            piVar3 = (int *)piVar3[1];
          }
        }
        if ((int *)piVar7[6] == piVar7 + 9) {
          puVar5 = (undefined4 *)FUN_0040fc80(local_14 + -1,local_4,piVar7);
          piVar7 = (int *)*puVar5;
        }
        else if (*(char *)((int)piVar7 + 0x45) == '\0') {
          piVar3 = (int *)piVar7[2];
          if (*(char *)((int)piVar3 + 0x45) == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x45);
            piVar7 = piVar3;
            piVar3 = (int *)*piVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x45);
              piVar7 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar1 = *(char *)(piVar7[1] + 0x45);
            piVar2 = (int *)piVar7[1];
            piVar3 = piVar7;
            while ((piVar7 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar7[2]))) {
              cVar1 = *(char *)(piVar7[1] + 0x45);
              piVar2 = (int *)piVar7[1];
              piVar3 = piVar7;
            }
          }
        }
      } while (piVar7 != (int *)*local_14);
    }
    puVar5 = (undefined4 *)*piVar6;
    if (puVar5 != (undefined4 *)0x0) break;
    *piVar6 = 0;
    piVar6[1] = 0;
    piVar6[2] = 0;
    local_14 = local_14 + 3;
    piVar6 = piVar6 + 4;
    local_c = local_c + -1;
    if (local_c == 0) {
      return;
    }
  }
  puVar4 = (undefined4 *)piVar6[1];
  for (; puVar5 != puVar4; puVar5 = puVar5 + 6) {
    FUN_0040d4b0(puVar5);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*piVar6);
}


//// FUNCTION FUN_004101d0 @ 004101d0 ////

void __fastcall FUN_004101d0(int param_1)

{
  FUN_0040ff80(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00410200 @ 00410200 ////

void __thiscall FUN_00410200(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0040ff80((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x45) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x45) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x45);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x45);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x45);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x45);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0040fc80(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_004102c0 @ 004102c0 ////

undefined4 *
FUN_004102c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00c9d171;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x48);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_0040f9a0(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0x11) = param_5;
    *(undefined1 *)((int)puVar1 + 0x45) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_00410390 @ 00410390 ////

void __thiscall
FUN_00410390(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00c9d188;
  local_c = ExceptionList;
  if (0x4924922 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_004102c0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x44);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x44) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x11] == '\0') {
LAB_0041048b:
        *(undefined1 *)(*piVar4 + 0x44) = 1;
        *(undefined1 *)(piVar5 + 0x11) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x44) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0040cb70(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x44) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x44) = 0;
        FUN_0040bf40(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x11] == '\0') goto LAB_0041048b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0040bf40(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x44) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x44) = 0;
      FUN_0040cb70(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x44);
  } while( true );
}


//// FUNCTION FUN_00410570 @ 00410570 ////

void __thiscall FUN_00410570(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool local_4;
  
  piVar2 = param_2;
  piVar5 = *(int **)((int)this + 4);
  local_4 = true;
  if (*(char *)(piVar5[1] + 0x45) == '\0') {
    piVar3 = (int *)piVar5[1];
    do {
      piVar5 = piVar3;
      local_4 = *param_2 < piVar5[3];
      if (local_4) {
        piVar3 = (int *)*piVar5;
      }
      else {
        piVar3 = (int *)piVar5[2];
      }
    } while (*(char *)((int)piVar3 + 0x45) == '\0');
  }
  param_2 = piVar5;
  if (local_4) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_00410390(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_0040c400((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_00410390(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00410630 @ 00410630 ////

void __fastcall FUN_00410630(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00410200(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00410660 @ 00410660 ////

void __fastcall FUN_00410660(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00c9d219;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d16e44;
  param_1[0xe] = &PTR_LAB_00d16e24;
  local_4 = 5;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00410060((int)param_1);
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x33] = param_1[0x32];
  }
  if (param_1[0x32] != 0) {
    *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_4._0_1_ = 3;
  _eh_vector_destructor_iterator_(param_1 + 0x26,0x10,3,thunk_FUN_0040ebc0);
  if ((void *)param_1[0x23] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x23]);
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(param_1 + 0x19,0xc,3,FUN_00410630);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00410770 @ 00410770 ////

int __fastcall FUN_00410770(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040d600();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004107a0 @ 004107a0 ////

undefined4 * __thiscall FUN_004107a0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_8 [2];
  
  piVar5 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00410390(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[3]) {
      FUN_00410390(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[3] < *param_3) {
      FUN_00410390(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_0040c400((int *)&param_3);
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x45) != '\0') {
          FUN_00410390(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_00410390(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_0040c1b0((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x45) != '\0') {
          FUN_00410390(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_00410390(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_00410570(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}


//// FUNCTION FUN_00410910 @ 00410910 ////

int * __fastcall FUN_00410910(int *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d28d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  local_4._0_1_ = 1;
  *param_1 = (int)&PTR_FUN_00d16e44;
  param_1[0xe] = (int)&PTR_LAB_00d16e24;
  *(undefined1 *)(param_1 + 0x18) = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x19,0xc,3,FUN_00410770,FUN_00410630);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  local_4._0_1_ = 3;
  _eh_vector_constructor_iterator_(param_1 + 0x26,0x10,3,FUN_0040f480,thunk_FUN_0040ebc0);
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x34] = (int)param_1;
  FUN_00acdb9e(0xe4e390);
  iVar1 = FUN_0097dda0();
  param_1[0x35] = iVar1;
  if (s___AVCStudioReview_TM___00e4e378[0x17] != '\0') {
    iVar1 = 200;
    pcVar3 = "ReviewLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe4e390);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AVCStudioReview_TM___00e4e378[0x17] = '\0';
  }
  (**(code **)(*param_1 + 4))();
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00410a40 @ 00410a40 ////

undefined4 * __thiscall FUN_00410a40(void *this,byte param_1)

{
  FUN_00410660(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00410a60 @ 00410a60 ////

int * __thiscall FUN_00410a60(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined **local_78;
  undefined4 local_74;
  undefined4 **local_70;
  undefined4 local_6c;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined4 local_40 [13];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9d2c0;
  local_c = ExceptionList;
  piVar4 = *(int **)((int)this + 4);
  if (*(char *)(piVar4[1] + 0x45) == '\0') {
    piVar2 = (int *)piVar4[1];
    do {
      if (piVar2[3] < *param_1) {
        piVar1 = (int *)piVar2[2];
      }
      else {
        piVar1 = (int *)*piVar2;
        piVar4 = piVar2;
      }
      piVar2 = piVar1;
    } while (*(char *)((int)piVar1 + 0x45) == '\0');
  }
  if ((piVar4 == *(int **)((int)this + 4)) || (*param_1 < piVar4[3])) {
    local_6c = 0;
    local_74 = 0;
    local_5c = 0;
    local_60 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_70 = &local_64;
    local_64 = &local_74;
    local_78 = &PTR_LAB_00d16dcc;
    local_4 = 2;
    ExceptionList = &local_c;
    piVar2 = (int *)FUN_0040ffc0(local_44,param_1);
    local_4 = CONCAT31(local_4._1_3_,3);
    puVar3 = FUN_004107a0(this,&param_1,piVar4,piVar2);
    piVar4 = (int *)*puVar3;
    FUN_0040e800(local_40);
    FUN_0040e800(&local_78);
  }
  ExceptionList = local_c;
  return piVar4 + 4;
}


//// FUNCTION CBasicReview_AddCommentToBin @ 00411b60 ////

void __thiscall
CBasicReview_AddCommentToBin
          (void *this,float param_1,float param_2,float param_3,int param_4,int param_5,char param_6
          )

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  
  if ((*(char *)((int)this + 0x61) != '\0') && (param_6 != '\0')) {
    *(undefined1 *)(param_4 + 0xa8) = 1;
  }
  piVar2 = (int *)(param_4 + 0xac);
  if (param_2 <= param_1) {
    this_00 = (void *)((int)this + 0x70);
    if (param_3 <= param_1) {
      this_00 = (void *)((int)this + 100);
    }
  }
  else {
    this_00 = (void *)((int)this + 0x7c);
  }
  piVar1 = FUN_00410a60(this_00,&param_5);
  piVar1 = piVar1 + 5;
  *(int **)(param_4 + 0xb0) = piVar1;
  *piVar2 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar2;
  *piVar1 = (int)piVar2;
  for (piVar2 = *(int **)((int)this + 0x8c);
      (piVar2 != *(int **)((int)this + 0x90) && (*piVar2 != param_5)); piVar2 = piVar2 + 1) {
  }
  if (piVar2 == *(int **)((int)this + 0x90)) {
    FUN_0040f760((void *)((int)this + 0x88),&param_5);
  }
  return;
}


//// FUNCTION FUN_00411c30 @ 00411c30 ////

int * __thiscall FUN_00411c30(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00411c70 @ 00411c70 ////

void __thiscall FUN_00411c70(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 8);
  fVar2 = *(float *)((int)this + 4);
  *param_1 = param_2 * *(float *)this;
  param_1[1] = param_2 * fVar2;
  param_1[2] = param_2 * fVar1;
  return;
}


//// FUNCTION FUN_00411ca0 @ 00411ca0 ////

void __thiscall FUN_00411ca0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)((int)this + 8);
  fVar2 = param_2[2];
  fVar3 = *(float *)((int)this + 4);
  fVar4 = param_2[1];
  *param_1 = *(float *)this - *param_2;
  param_1[1] = fVar3 - fVar4;
  param_1[2] = fVar1 - fVar2;
  return;
}


//// FUNCTION FUN_00411ce0 @ 00411ce0 ////

undefined4 * __fastcall FUN_00411ce0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d359;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(param_1);
  *param_1 = &PTR_FUN_00d1706c;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  local_4 = 0;
  if (DAT_0105be08 < 1) {
    param_1[0x20] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    ExceptionList = local_c;
    return param_1;
  }
  puVar2 = FUN_0040a690(100,'\0');
  param_1[0x20] = puVar2;
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  *(undefined4 *)(param_1[0x20] + 0x18) = uVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined1 *)(*(int *)(param_1[0x20] + 0x18) + 0xc) = 6;
  pvVar4 = FUN_0099bb50("fx/shadow.dds",0,0,0,'\0');
  if (*(void **)((int)*(void **)(param_1[0x20] + 0x18) + 0x18) != pvVar4) {
    Engine_SetResourceReference(*(void **)(param_1[0x20] + 0x18),(int)pvVar4);
  }
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  *(uint *)(*(int *)(param_1[0x20] + 0x18) + 0x10) =
       *(uint *)(*(int *)(param_1[0x20] + 0x18) + 0x10) & 0xbfffffff;
  FUN_0099a220((void *)param_1[0x20],1);
  *(byte *)(param_1[0x20] + 0x24) = *(byte *)(param_1[0x20] + 0x24) | 0x40;
  FUN_0040a6f0(param_1[0x20]);
  pvVar4 = FUN_0099bb50("ui/chopper.dds",0,0,0,'\0');
  puVar2 = FUN_0040a690(1,'\0');
  param_1[0x1e] = puVar2;
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  *(undefined4 *)(param_1[0x1e] + 0x18) = uVar3;
  local_4._0_1_ = 0;
  if (*(void **)((int)*(void **)(param_1[0x1e] + 0x18) + 0x18) != pvVar4) {
    Engine_SetResourceReference(*(void **)(param_1[0x1e] + 0x18),(int)pvVar4);
  }
  *(undefined1 *)(*(int *)(param_1[0x1e] + 0x18) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(param_1[0x1e] + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  puVar1 = (uint *)(*(int *)(param_1[0x1e] + 0x18) + 0x14);
  *puVar1 = *puVar1 & 0xfffffffe;
  FUN_0099a220((void *)param_1[0x1e],1);
  *(byte *)(param_1[0x1e] + 0x24) = *(byte *)(param_1[0x1e] + 0x24) | 0x40;
  puVar1 = (uint *)(*(int *)(param_1[0x1e] + 0x20) + 0x30);
  *puVar1 = *puVar1 & 0xfffffeff;
  *(undefined4 *)(*(int *)(param_1[0x1e] + 0x20) + 0x24) = 0x41100000;
  *(undefined4 *)(*(int *)(param_1[0x1e] + 0x20) + 0x2c) = 0xffffff;
  puVar2 = FUN_0040a690(1,'\0');
  param_1[0x1f] = puVar2;
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  *(undefined4 *)(param_1[0x1f] + 0x18) = uVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(void **)((int)*(void **)(param_1[0x1f] + 0x18) + 0x18) != pvVar4) {
    Engine_SetResourceReference(*(void **)(param_1[0x1f] + 0x18),(int)pvVar4);
  }
  *(undefined1 *)(*(int *)(param_1[0x1f] + 0x18) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(param_1[0x1f] + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  puVar1 = (uint *)(*(int *)(param_1[0x1f] + 0x18) + 0x14);
  *puVar1 = *puVar1 | 1;
  FUN_0099a220((void *)param_1[0x1f],1);
  *(byte *)(param_1[0x1f] + 0x24) = *(byte *)(param_1[0x1f] + 0x24) | 0x40;
  *(uint *)(*(int *)(param_1[0x1f] + 0x20) + 0x30) =
       *(uint *)(*(int *)(param_1[0x1f] + 0x20) + 0x30) & 0xfffffeff;
  *(undefined4 *)(*(int *)(param_1[0x1f] + 0x20) + 0x24) = 0x41400000;
  *(undefined4 *)(*(int *)(param_1[0x1f] + 0x20) + 0x2c) = 0x14ffffff;
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00411fa0 @ 00411fa0 ////

void __fastcall FUN_00411fa0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  LONG LVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9d378;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1706c;
  local_4 = 0;
  if (param_1[0x20] != 0) {
    pvVar1 = *(void **)(param_1[0x20] + 0x18);
    if (pvVar1 != (void *)0x0) {
      FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    *(undefined4 *)(param_1[0x20] + 0x18) = 0;
    puVar2 = (undefined4 *)param_1[0x20];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar3;
      param_1[0x20] = 0;
    }
  }
  if (param_1[0x1e] != 0) {
    pvVar1 = *(void **)(param_1[0x1e] + 0x18);
    if (pvVar1 != (void *)0x0) {
      FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    *(undefined4 *)(param_1[0x1e] + 0x18) = 0;
    puVar2 = (undefined4 *)param_1[0x1e];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar3;
      param_1[0x1e] = 0;
    }
  }
  if (param_1[0x1f] != 0) {
    pvVar1 = *(void **)(param_1[0x1f] + 0x18);
    if (pvVar1 != (void *)0x0) {
      FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    *(undefined4 *)(param_1[0x1f] + 0x18) = 0;
    puVar2 = (undefined4 *)param_1[0x1f];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar3;
      param_1[0x1f] = 0;
    }
  }
  local_4 = 0xffffffff;
  FUN_0053ddb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00412320 @ 00412320 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00412320(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  ulonglong uVar8;
  
  if (((0 < DAT_0105be08) && (*(int *)((int)this + 0x84) < 100)) && (0.0 <= param_1[2])) {
    pfVar7 = (float *)(*(int *)((int)this + 0x84) * 0x34 +
                      *(int *)(*(int *)((int)this + 0x80) + 0x20));
    pfVar7[0xc] = (float)((uint)pfVar7[0xc] & 0xfffffeff);
    fVar3 = param_1[2] / _DAT_00e67b80;
    fVar4 = _DAT_00e67b7c * fVar3;
    fVar5 = _DAT_00e67b80 * fVar3;
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    *pfVar7 = *param_1 - _DAT_00e67b78 * fVar3;
    pfVar7[1] = fVar1 - fVar4;
    pfVar7[2] = fVar2 - fVar5;
    fVar1 = param_2 * 0.75;
    if (fVar1 < 0.001) {
      fVar1 = 0.001;
    }
    pfVar7[9] = fVar1;
    uVar8 = FUN_00acd42c();
    iVar6 = (int)uVar8;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (0xff < iVar6) {
      iVar6 = 0xff;
    }
    *(char *)((int)pfVar7 + 0x2f) = (char)iVar6;
    *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + 1;
  }
  return;
}


//// FUNCTION FUN_00412440 @ 00412440 ////

undefined4 FUN_00412440(void)

{
  return DAT_00f87a8c;
}


//// FUNCTION FUN_00412450 @ 00412450 ////

void FUN_00412450(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f87a8c;
  if (DAT_00f87a8c != (undefined4 *)0x0) {
    iVar1 = DAT_00f87a8c[0x12];
    DAT_00f87a8c[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f87a78[1])();
    DAT_00f87a8c = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00412490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_00f87a78)();
    return;
  }
  return;
}


//// FUNCTION FUN_004124d0 @ 004124d0 ////

undefined4 * __thiscall FUN_004124d0(void *this,byte param_1)

{
  FUN_00411fa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION IconShadowRenderer_Constructor @ 004124f0 ////

/* WARNING: Removing unreachable block (ram,0x004125b5) */

void IconShadowRenderer_Constructor(void)

{
  undefined4 *puVar1;
  char acStack_20 [19];
  undefined1 uStack_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d3a3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x8c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00411ce0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_00f87a78[1])();
  DAT_00f87a8c = puVar1;
  (*(code *)*DAT_00f87a78)();
  acStack_20[0] = '\0';
  _strncpy(acStack_20,"shd_showiconshadows",0x13);
  uStack_d = 0;
  local_4 = 1;
  CVarSystem_Register_STUBBED();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004125e0 @ 004125e0 ////

void __fastcall FUN_004125e0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d170b4;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00412630 @ 00412630 ////

void __fastcall FUN_00412630(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d170b4;
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


//// FUNCTION FUN_004126f0 @ 004126f0 ////

void __cdecl FUN_004126f0(undefined1 param_1)

{
  DAT_00e4e41c = param_1;
  return;
}


//// FUNCTION FUN_00412700 @ 00412700 ////

undefined4 FUN_00412700(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004233e0(DAT_00f87b04);
  if (((char)uVar1 != '\0') && (DAT_00f87ab5 != '\0')) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00412800 @ 00412800 ////

undefined ** __cdecl FUN_00412800(undefined4 param_1)

{
  switch(param_1) {
  case 0x16:
    return &PTR_s__preproduction_00e4e424;
  case 0x17:
    return &PTR_s__production_00e4e42c;
  case 0x18:
    return &PTR_s__postproduction_00e4e434;
  case 0x19:
    return &PTR_s__customscript_00e4e43c;
  case 0x1a:
    return &PTR_s__script_00e4e444;
  case 0x1b:
    return &PTR_s__gatehouse_00e4e44c;
  default:
    return (undefined **)0x0;
  case 0x1d:
    return &PTR_DAT_00e4e460;
  case 0x1e:
    return &PTR_s_trailer__00e4e468;
  case 0x1f:
    return &PTR_s__research_00d17106_2_00e4e490;
  }
}


//// FUNCTION FUN_004129c0 @ 004129c0 ////

undefined1 __fastcall FUN_004129c0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x229);
}


//// FUNCTION FUN_004129e0 @ 004129e0 ////

void __fastcall FUN_004129e0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_004201b0((int)DAT_00f87b04);
  *(undefined1 *)(param_1 + 0x310) = uVar1;
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(DAT_0104cdf4 + 0x38);
  FUN_004201a0(DAT_00f87b04,1);
  *(undefined1 *)((int)DAT_00f87b04 + 10) = 1;
  *(undefined4 *)(DAT_0104cdf4 + 0x38) = 0x3f800000;
  return;
}


//// FUNCTION FUN_00412a30 @ 00412a30 ////

void __fastcall FUN_00412a30(int param_1)

{
  FUN_004201a0(DAT_00f87b04,*(undefined1 *)(param_1 + 0x310));
  *(undefined1 *)((int)DAT_00f87b04 + 10) = 0;
  *(undefined4 *)(DAT_0104cdf4 + 0x38) = *(undefined4 *)(param_1 + 0x314);
  return;
}


//// FUNCTION FUN_00412ab0 @ 00412ab0 ////

void __thiscall FUN_00412ab0(void *this,int param_1,int param_2,int param_3)

{
  *(undefined1 *)this = 0xff;
  *(undefined1 *)((int)this + 1) = 0xff;
  *(undefined1 *)((int)this + 2) = 0xff;
  *(undefined1 *)((int)this + 3) = 0xff;
  *(undefined1 *)((int)this + 3) = 0xff;
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0xff < param_1) {
    param_1 = 0xff;
  }
  *(char *)((int)this + 2) = (char)param_1;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0xff < param_2) {
    param_2 = 0xff;
  }
  *(char *)((int)this + 1) = (char)param_2;
  if (param_3 < 0) {
    *(undefined1 *)this = 0;
    return;
  }
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  *(char *)this = (char)param_3;
  return;
}


//// FUNCTION FUN_00412b10 @ 00412b10 ////

void __thiscall
FUN_00412b10(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3,
            undefined4 param_4)

{
  *(undefined4 *)((int)this + 0xd0) = *param_1;
  *(undefined4 *)((int)this + 0xd4) = param_1[1];
  *(undefined4 *)((int)this + 0xd8) = param_1[2];
  *(undefined4 *)((int)this + 0xdc) = *param_2;
  *(undefined4 *)((int)this + 0xe0) = param_2[1];
  *(undefined4 *)((int)this + 0xe4) = param_2[2];
  *(undefined4 *)((int)this + 0x21c) = param_3;
  *(undefined4 *)((int)this + 0x218) = param_4;
  return;
}


//// FUNCTION FUN_00412b60 @ 00412b60 ////

void __thiscall
FUN_00412b60(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  *param_1 = *(undefined4 *)((int)this + 0xd0);
  param_1[1] = *(undefined4 *)((int)this + 0xd4);
  param_1[2] = *(undefined4 *)((int)this + 0xd8);
  *param_2 = *(undefined4 *)((int)this + 0xdc);
  param_2[1] = *(undefined4 *)((int)this + 0xe0);
  param_2[2] = *(undefined4 *)((int)this + 0xe4);
  *param_3 = *(undefined4 *)((int)this + 0x21c);
  *param_4 = *(undefined4 *)((int)this + 0x218);
  return;
}


//// FUNCTION FUN_00412c90 @ 00412c90 ////

float10 __fastcall FUN_00412c90(float *param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  if ((fVar1 == 0.0) && (fVar2 == 0.0)) {
    return (float10)0.0;
  }
  fVar3 = SQRT((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2);
  fVar4 = (float10)1.0 / fVar3;
  *param_1 = (float)((float10)fVar1 * fVar4);
  param_1[1] = (float)(fVar4 * (float10)fVar2);
  return fVar3;
}


//// FUNCTION FUN_00412da0 @ 00412da0 ////

void __thiscall FUN_00412da0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[2];
  fVar2 = *(float *)((int)this + 8);
  fVar3 = param_2[1];
  fVar4 = *(float *)((int)this + 4);
  *param_1 = *param_2 + *(float *)this;
  param_1[1] = fVar3 + fVar4;
  param_1[2] = fVar1 + fVar2;
  return;
}


//// FUNCTION FUN_00412df0 @ 00412df0 ////

void __cdecl FUN_00412df0(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3[2];
  fVar2 = param_3[1];
  *param_1 = param_2 * *param_3;
  param_1[1] = param_2 * fVar2;
  param_1[2] = param_2 * fVar1;
  return;
}


//// FUNCTION FUN_00412e20 @ 00412e20 ////

float10 __fastcall FUN_00412e20(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  if (((fVar1 == 0.0) && (fVar2 == 0.0)) && (fVar3 == 0.0)) {
    return (float10)0.0;
  }
  fVar4 = SQRT((float10)fVar1 * (float10)fVar1 +
               (float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3);
  fVar5 = (float10)1.0 / fVar4;
  *param_1 = (float)((float10)fVar1 * fVar5);
  param_1[1] = (float)((float10)fVar2 * fVar5);
  param_1[2] = (float)(fVar5 * (float10)fVar3);
  return fVar4;
}


//// FUNCTION FUN_00412ec0 @ 00412ec0 ////

void __thiscall FUN_00412ec0(void *this,float *param_1,float *param_2)

{
  float local_18 [3];
  float local_c [3];
  
  FUN_009a1a20(&DAT_0105c2e8,param_1,local_c,0.0);
  FUN_009a1a20(&DAT_0105c2e8,param_1,local_18,*(float *)((int)this + 0x98));
  FUN_009a43c0((void *)((int)this + 0x324),local_c,local_18,param_2);
  return;
}


//// FUNCTION FUN_00412f20 @ 00412f20 ////

float10 __fastcall FUN_00412f20(float *param_1)

{
  return SQRT((float10)param_1[2] * (float10)param_1[2] +
              (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}


//// FUNCTION FUN_00412f50 @ 00412f50 ////

void FUN_00412f50(void)

{
  return;
}


//// FUNCTION FUN_00412f80 @ 00412f80 ////

float10 __thiscall FUN_00412f80(float *param_1,float *param_2)

{
  return SQRT(((float10)*param_1 - (float10)*param_2) * ((float10)*param_1 - (float10)*param_2) +
              ((float10)param_1[1] - (float10)param_2[1]) *
              ((float10)param_1[1] - (float10)param_2[1]) +
              ((float10)param_1[2] - (float10)param_2[2]) *
              ((float10)param_1[2] - (float10)param_2[2]));
}


//// FUNCTION FUN_00412fd0 @ 00412fd0 ////

void __thiscall FUN_00412fd0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (this == param_1) {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar3 = param_1[2];
    *(float *)this = fVar2 * param_2[2] - fVar3 * param_2[1];
    *(float *)((int)this + 4) = fVar3 * *param_2 - fVar1 * param_2[2];
    *(float *)((int)this + 8) = fVar1 * param_2[1] - fVar2 * *param_2;
    return;
  }
  if (this == param_2) {
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    *(float *)this = fVar3 * param_1[1] - fVar2 * param_1[2];
    *(float *)((int)this + 4) = fVar1 * param_1[2] - fVar3 * *param_1;
    *(float *)((int)this + 8) = fVar2 * *param_1 - fVar1 * param_1[1];
    return;
  }
  *(float *)this = param_1[1] * param_2[2] - param_1[2] * param_2[1];
  *(float *)((int)this + 4) = param_1[2] * *param_2 - param_2[2] * *param_1;
  *(float *)((int)this + 8) = param_2[1] * *param_1 - param_1[1] * *param_2;
  return;
}


//// FUNCTION FUN_004130d0 @ 004130d0 ////

void __thiscall FUN_004130d0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)((int)this + 4);
  *(float *)this = fVar2 * param_1[2] - *(float *)((int)this + 8) * param_1[1];
  *(float *)((int)this + 4) = *(float *)((int)this + 8) * *param_1 - fVar1 * param_1[2];
  *(float *)((int)this + 8) = fVar1 * param_1[1] - fVar2 * *param_1;
  return;
}


//// FUNCTION FUN_00413130 @ 00413130 ////

int * __thiscall FUN_00413130(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00413170 @ 00413170 ////

int * __thiscall FUN_00413170(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00413190 @ 00413190 ////

int * __thiscall FUN_00413190(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00413250 @ 00413250 ////

int * __thiscall FUN_00413250(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00413290 @ 00413290 ////

int * __thiscall FUN_00413290(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004132b0 @ 004132b0 ////

int * __thiscall FUN_004132b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00413450 @ 00413450 ////

uint __thiscall FUN_00413450(void *this,char *param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  char *_Buf;
  uint uVar2;
  char *_MaxCount;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if ((param_3 != 0) || (*(uint *)((int)this + 4) < param_2)) {
    uVar2 = *(uint *)((int)this + 4) - param_2;
    if ((param_2 < *(uint *)((int)this + 4)) && (param_3 <= uVar2)) {
      _Buf = (char *)(*(int *)this + param_2);
      _MaxCount = (char *)(uVar2 + (1 - param_3));
      pcVar1 = _memchr(_Buf,(int)*param_1,(size_t)_MaxCount);
      if (pcVar1 != (char *)0x0) {
        do {
          bVar5 = true;
          uVar2 = param_3;
          pcVar3 = pcVar1;
          pcVar4 = param_1;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            bVar5 = *pcVar3 == *pcVar4;
            pcVar3 = pcVar3 + 1;
            pcVar4 = pcVar4 + 1;
          } while (bVar5);
          if (bVar5) {
            return (int)pcVar1 - *(int *)this;
          }
          _MaxCount = _Buf + (int)(_MaxCount + (-1 - (int)pcVar1));
          _Buf = pcVar1 + 1;
          pcVar1 = _memchr(_Buf,(int)*param_1,(size_t)_MaxCount);
          if (pcVar1 == (char *)0x0) {
            return 0xffffffff;
          }
        } while( true );
      }
    }
    param_2 = 0xffffffff;
  }
  return param_2;
}


//// FUNCTION FUN_00413780 @ 00413780 ////

void __thiscall FUN_00413780(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}


//// FUNCTION FUN_004137b0 @ 004137b0 ////

void __thiscall FUN_004137b0(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1 + *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x14) = fVar1;
  if (*(float *)((int)this + 0x18) <= fVar1) {
    *(undefined4 *)this = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x18);
    return;
  }
  fVar3 = fVar1 * fVar1 * 0.5;
  fVar2 = fVar1 * fVar3 * 0.33333334;
  *(float *)((int)this + 0xc) =
       fVar2 * *(float *)((int)this + 0x2c) +
       fVar3 * *(float *)((int)this + 0x28) + fVar1 * *(float *)((int)this + 0x24) +
       *(float *)((int)this + 0x20);
  *(float *)this =
       fVar1 * *(float *)((int)this + 0x20) +
       fVar3 * *(float *)((int)this + 0x24) +
       fVar2 * *(float *)((int)this + 0x28) +
       fVar3 * fVar3 * 0.16666667 * *(float *)((int)this + 0x2c) + *(float *)((int)this + 0x1c);
  return;
}


//// FUNCTION FUN_00413840 @ 00413840 ////

void __thiscall FUN_00413840(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)this = uVar1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = param_1[1];
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x30) = uVar1;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  uVar1 = param_1[2];
  *(undefined4 *)((int)this + 100) = uVar1;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x60) = uVar1;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  return;
}


//// FUNCTION FUN_004138f0 @ 004138f0 ////

void __cdecl FUN_004138f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_004139b0 @ 004139b0 ////

void __thiscall FUN_004139b0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 0x10);
  fVar3 = *(float *)((int)this + 8);
  fVar4 = *(float *)((int)this + 0x14);
  *param_1 = *(float *)this - *(float *)((int)this + 0xc);
  param_1[1] = fVar1 - fVar2;
  param_1[2] = fVar3 - fVar4;
  return;
}


//// FUNCTION FUN_004139f0 @ 004139f0 ////

void __thiscall FUN_004139f0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)((int)this + 0x10);
  fVar2 = *(float *)((int)this + 4);
  fVar3 = *(float *)((int)this + 0x14);
  fVar4 = *(float *)((int)this + 8);
  *param_1 = *(float *)((int)this + 0xc) + *(float *)this;
  param_1[1] = fVar1 + fVar2;
  param_1[2] = fVar3 + fVar4;
  return;
}


//// FUNCTION FUN_00413b10 @ 00413b10 ////

void __thiscall FUN_00413b10(void *this,float *param_1,float *param_2)

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
  float fVar23;
  float fVar24;
  
  fVar1 = *(float *)((int)this + 0xc);
  fVar2 = param_2[3];
  fVar3 = *param_2;
  fVar4 = *(float *)this;
  fVar5 = *(float *)((int)this + 4);
  fVar6 = param_2[1];
  fVar7 = *(float *)((int)this + 8);
  fVar8 = param_2[2];
  fVar9 = param_2[2];
  fVar10 = *(float *)((int)this + 0xc);
  fVar11 = param_2[1];
  fVar12 = *(float *)this;
  fVar13 = *(float *)((int)this + 8);
  fVar14 = param_2[3];
  fVar15 = *(float *)((int)this + 4);
  fVar16 = *param_2;
  fVar17 = param_2[1];
  fVar18 = *(float *)((int)this + 0xc);
  fVar19 = *(float *)((int)this + 4);
  fVar20 = param_2[3];
  fVar21 = *(float *)((int)this + 8);
  fVar22 = *param_2;
  fVar23 = param_2[2];
  fVar24 = *(float *)this;
  *param_1 = (*(float *)((int)this + 4) * param_2[2] +
             *(float *)this * param_2[3] + *(float *)((int)this + 0xc) * *param_2) -
             *(float *)((int)this + 8) * param_2[1];
  param_1[1] = (fVar21 * fVar22 + fVar19 * fVar20 + fVar17 * fVar18) - fVar23 * fVar24;
  param_1[2] = (fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10) - fVar15 * fVar16;
  param_1[3] = ((fVar1 * fVar2 - fVar3 * fVar4) - fVar5 * fVar6) - fVar7 * fVar8;
  return;
}


//// FUNCTION FUN_00413c20 @ 00413c20 ////

int * __thiscall FUN_00413c20(void *this,byte param_1)

{
  FUN_009a7db0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00413cc0 @ 00413cc0 ////

bool __fastcall FUN_00413cc0(int param_1)

{
  return *(int *)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + 0x18) == 0x48a;
}


//// FUNCTION FUN_00413e40 @ 00413e40 ////

void __thiscall FUN_00413e40(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return;
}


//// FUNCTION FUN_00413e80 @ 00413e80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00413e80(int param_1)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  float10 fVar9;
  float local_c;
  float local_8;
  float local_4;
  
  bVar7 = false;
  if (0.0 < _DAT_00f87a98) {
    uVar8 = 0x73;
    if (_DAT_00f87a98 != 1.0) {
      uVar8 = 0x74;
    }
    uVar6 = FUN_00553fa0(uVar8);
    if (((char)uVar6 != '\0') && (DAT_00f885f4 == 0)) {
      FUN_009a1a20(&DAT_0105c2e8,(float *)&DAT_0104cce0,&local_c,0.0);
      fVar3 = local_4 - DAT_0105c3b0;
      if (fVar3 < 0.0) {
        fVar2 = -(DAT_0105c3b0 / fVar3);
        local_8 = (local_8 - DAT_0105c3ac) * fVar2;
        local_4 = fVar2 * fVar3;
        fVar3 = local_8 + DAT_0105c3ac;
        fVar4 = local_4 + DAT_0105c3b0;
        *(float *)(param_1 + 0x2ec) = DAT_0105c3a8 + (local_c - DAT_0105c3a8) * fVar2;
        *(float *)(param_1 + 0x2f0) = fVar3;
        *(undefined1 *)(param_1 + 0x2e8) = 1;
        *(float *)(param_1 + 0x2f4) = fVar4;
      }
    }
    cVar5 = FUN_00553f70(uVar8);
    if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + 0x2e8) = 0;
    }
  }
  cVar5 = FUN_00553f70(0x73);
  if ((cVar5 == '\0') || (cVar5 = FUN_00553f70(0x74), cVar5 == '\0')) {
    cVar5 = FUN_00553f70(0x73);
    if ((cVar5 == '\0') || (0 < *(int *)(param_1 + 0x2e0))) {
      FUN_00553f70(0x74);
    }
    else {
      bVar7 = 0.3 < *(float *)(param_1 + 0x2e4);
      *(float *)(param_1 + 0x2e4) = *(float *)(param_1 + 0x2e4) + 0.1;
    }
  }
  else {
    bVar7 = true;
  }
  cVar5 = FUN_00553f70(0x73);
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1 + 0x2e4) = 0;
  }
  fVar9 = FUN_005543d0();
  fVar1 = (float10)_DAT_00f87ab0;
  _DAT_00f87ab0 = 0.0;
  _DAT_00f87aac = (float)((fVar9 + (float10)_DAT_00f87aac) - fVar1);
  return bVar7;
}


//// FUNCTION FUN_00414060 @ 00414060 ////

void __fastcall FUN_00414060(int param_1)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0.0;
  local_4 = 0.0;
  uVar4 = FUN_00554090(2);
  if ((char)uVar4 == '\0') {
    uVar4 = FUN_00554090(3);
    if ((char)uVar4 != '\0') {
      local_8 = DAT_00f87a90;
    }
  }
  else {
    local_8 = -DAT_00f87a90;
  }
  uVar4 = FUN_00554090(4);
  if ((char)uVar4 == '\0') {
    uVar4 = FUN_00554090(5);
    if ((char)uVar4 != '\0') {
      local_4 = -DAT_00f87a90;
    }
  }
  else {
    local_4 = DAT_00f87a90;
  }
  if ((local_8 == 0.0) && (local_4 == 0.0)) {
    fVar5 = (float10)FUN_00ace9b0();
    *(float *)(param_1 + 0x2a0) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x2a0));
    *(float *)(param_1 + 0x2a4) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x2a4));
    return;
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + 0x18) != 0x66a) {
    cVar3 = FUN_00553f70(0x39);
    if (cVar3 == '\0') {
      cVar3 = FUN_00553f70(0x38);
      if (cVar3 == '\0') goto LAB_004141d1;
    }
    fVar5 = (float10)FUN_00ace9b0();
    *(float *)(param_1 + 0x2a0) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x2a0));
    *(float *)(param_1 + 0x2a4) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x2a4));
    *(float *)(param_1 + 0x2d0) = local_8 * 60.0 + *(float *)(param_1 + 0x2d0);
    *(float *)(param_1 + 0x2c0) = local_4 * 50.0 + *(float *)(param_1 + 0x2c0);
    return;
  }
LAB_004141d1:
  fVar2 = *(float *)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + 0x5c);
  pfVar1 = (float *)(param_1 + 0x2a0);
  *pfVar1 = local_8 * fVar2 + *pfVar1;
  *(float *)(param_1 + 0x2a4) = fVar2 * local_4 + *(float *)(param_1 + 0x2a4);
  if (*(float *)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + 0x60) <
      SQRT(*(float *)(param_1 + 0x2a4) * *(float *)(param_1 + 0x2a4) + *pfVar1 * *pfVar1)) {
    FUN_00412c90(pfVar1);
    fVar2 = *(float *)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + 0x60);
    *pfVar1 = fVar2 * *pfVar1;
    *(float *)(param_1 + 0x2a4) = fVar2 * *(float *)(param_1 + 0x2a4);
  }
  return;
}


//// FUNCTION FUN_00414260 @ 00414260 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00414260(void *this,int param_1)

{
  float fVar1;
  char cVar2;
  undefined4 local_8;
  
  local_8 = 0.0;
  cVar2 = FUN_00553f70(0x7f);
  if (cVar2 == '\0') {
    cVar2 = FUN_00553f70(0x80);
    if (cVar2 != '\0') {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = -1.0;
  }
  cVar2 = FUN_00553f70(0x7d);
  if (cVar2 == '\0') {
    cVar2 = FUN_00553f70(0x7e);
    if (cVar2 == '\0') {
      fVar1 = 0.0;
    }
    else {
      fVar1 = -1.0;
    }
  }
  else {
    fVar1 = 1.0;
  }
  *(float *)((int)this + 0x2a0) = local_8 + *(float *)((int)this + 0x2a0);
  *(float *)((int)this + 0x2a4) = fVar1 + *(float *)((int)this + 0x2a4);
  if ((_DAT_0104cd20 != 0.0) || (_DAT_0104cd24 != 0.0)) {
    *(float *)(param_1 + 0x34) = _DAT_0104cd20 * 0.001 * 0.1;
    *(float *)(param_1 + 0x24) = _DAT_0104cd24 * 0.001 * 0.1;
  }
  return;
}


//// FUNCTION FUN_00414360 @ 00414360 ////

void __cdecl FUN_00414360(float *param_1,float *param_2,float *param_3,float param_4)

{
  void *this;
  float *pfVar1;
  float *pfVar2;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10 [4];
  
  if (param_4 != 0.0) {
    local_20 = *param_2 - *param_1;
    local_14 = 0;
    local_1c = param_2[1] - param_1[1];
    local_18 = param_2[2] - param_1[2];
    FUN_009a9bb0(&local_30,param_4,param_3);
    local_40 = -local_30;
    local_3c = -local_2c;
    pfVar2 = &local_40;
    pfVar1 = &local_20;
    local_38 = -local_28;
    local_34 = local_24;
    this = (void *)FUN_00413b10(&local_30,local_10,&local_20);
    FUN_00413b10(this,pfVar1,pfVar2);
    *param_1 = *param_2 - local_20;
    param_1[1] = param_2[1] - local_1c;
    param_1[2] = param_2[2] - local_18;
  }
  return;
}


//// FUNCTION FUN_004149f0 @ 004149f0 ////

undefined4 FUN_004149f0(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  fVar4 = param_1;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  if (fVar1 == 0.0) {
    fVar5 = (float)CONCAT22((short)((uint)param_2 >> 0x10),
                            (ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                            (ushort)(fVar2 == 0.0) << 0xe);
    if (fVar2 == 0.0) goto LAB_00414b49;
  }
  local_10 = 0;
  local_c = 0x3f800000;
  FUN_009840b0(local_8,(undefined4 *)((int)param_1 + 0x90));
  pfVar6 = FUN_00984190(local_8,(float *)&param_2);
  pfVar7 = FUN_00984190(&local_10,&param_1);
  iVar3 = *(int *)(*(int *)(DAT_00f87aa0 + 0xa4) + 8);
  fVar8 = (float10)fcos((float10)*pfVar6 - (float10)*pfVar7);
  fVar9 = (float10)fsin((float10)*pfVar6 - (float10)*pfVar7);
  fVar10 = (float10)*(float *)(DAT_00f87aa0 + 0x21c);
  fVar11 = fVar10 * (float10)*(float *)(iVar3 + 0x20);
  fVar12 = fVar10 * (float10)*(float *)(iVar3 + 0x24);
  fVar10 = fVar10 * (float10)*(float *)(iVar3 + 0x28);
  fVar5 = *(float *)(iVar3 + 0x20);
  fVar11 = (float10)1.0 -
           SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10) /
           SQRT((float10)*(float *)(iVar3 + 0x28) * (float10)*(float *)(iVar3 + 0x28) +
                (float10)*(float *)(iVar3 + 0x24) * (float10)*(float *)(iVar3 + 0x24) +
                (float10)fVar5 * (float10)fVar5);
  *(float *)((int)fVar4 + 0x280) =
       (float)((float10)(float)(fVar8 * (float10)fVar1 + -((float10)fVar2 * fVar9)) * fVar11) +
       *(float *)((int)fVar4 + 0x280);
  *(float *)((int)fVar4 + 0x284) =
       (float)(fVar11 * (fVar8 * (float10)fVar2 + fVar9 * (float10)fVar1) +
              (float10)*(float *)((int)fVar4 + 0x284));
LAB_00414b49:
  return CONCAT31((int3)((uint)fVar5 >> 8),1);
}


//// FUNCTION FUN_00414b60 @ 00414b60 ////

undefined4 FUN_00414b60(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  if (fVar1 == 0.0) {
    iVar3 = CONCAT22((short)((uint)param_2 >> 0x10),
                     (ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                     (ushort)(fVar2 == 0.0) << 0xe);
    if (fVar2 == 0.0) goto LAB_00414bda;
  }
  *(float *)(param_1 + 0xdc) = fVar1 + *(float *)(param_1 + 0xdc);
  *(float *)(param_1 + 0xe0) = fVar2 + *(float *)(param_1 + 0xe0);
  *(float *)(param_1 + 0xd0) = fVar1 + *(float *)(param_1 + 0xd0);
  *(float *)(param_1 + 0xd4) = fVar2 + *(float *)(param_1 + 0xd4);
  iVar3 = param_1;
LAB_00414bda:
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


//// FUNCTION FUN_00414c90 @ 00414c90 ////

undefined4 FUN_00414c90(int param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (*param_2 != '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
    *(float *)(param_1 + 0xdc) = *(float *)(iVar3 + 0x2c);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar3 + 0x30);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(iVar3 + 0x34);
    fVar1 = *(float *)(iVar3 + 0x24);
    fVar2 = *(float *)(iVar3 + 0x28);
    *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xdc) - *(float *)(iVar3 + 0x20);
    *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xe0) - fVar1;
    *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xe4) - fVar2;
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(iVar3 + 0x78);
    *(undefined4 *)(param_1 + 0x218) = 0;
    param_2 = (char *)(param_1 + 0x90);
    *(undefined4 *)param_2 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar3 + 0x24);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar3 + 0x28);
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


//// FUNCTION FUN_00414d50 @ 00414d50 ////

void __fastcall FUN_00414d50(int param_1)

{
  char local_1;
  
  FUN_00414c90(param_1,&local_1);
  return;
}


//// FUNCTION FUN_00414e20 @ 00414e20 ////

void __cdecl FUN_00414e20(void *param_1,float param_2)

{
  int iVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_0097e350(param_1,0);
    if (iVar1 != 0) {
      local_30 = *(float *)(DAT_00f87aa0 + 0xd0);
      local_2c = *(float *)(DAT_00f87aa0 + 0xd4);
      local_28 = *(float *)(DAT_00f87aa0 + 0xd8);
      FUN_0040b490((void *)((int)param_1 + 0x48),&local_30);
      iVar1 = FUN_0097e350(param_1,0);
      local_24 = *(float *)(iVar1 + 200) - *(float *)(iVar1 + 0xd4);
      local_20 = *(float *)(iVar1 + 0xcc) - *(float *)(iVar1 + 0xd8);
      local_1c = *(float *)(iVar1 + 0xd0) - *(float *)(iVar1 + 0xdc);
      local_18 = local_24;
      local_14 = local_20;
      local_10 = local_1c;
      iVar1 = FUN_0097e350(param_1,0);
      if ((((local_18 - param_2 < local_30) &&
           (local_30 < *(float *)(iVar1 + 200) + *(float *)(iVar1 + 0xd4) + param_2)) &&
          (local_14 - param_2 < local_2c)) &&
         (((local_2c < *(float *)(iVar1 + 0xd8) + *(float *)(iVar1 + 0xcc) + param_2 &&
           (local_10 - param_2 < local_28)) &&
          (local_28 < *(float *)(iVar1 + 0xdc) + *(float *)(iVar1 + 0xd0) + param_2)))) {
        *(uint *)((int)param_1 + 0x9c) = *(uint *)((int)param_1 + 0x9c) | 0x2000;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00414f90 @ 00414f90 ////

void __fastcall FUN_00414f90(int param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + 0x18) != 0x5f2) {
    fVar3 = FUN_004012c0(*(float *)(param_1 + 0xec) * *(float *)(param_1 + 0xe8));
    FUN_009a1950(&DAT_0105c2e8,(float)fVar3);
    pfVar1 = (float *)(param_1 + 0xd0);
    FUN_009a2830(&DAT_0105c2e8,pfVar1,(float *)(param_1 + 0xdc),0.0);
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + 0x18);
    if (iVar2 != 0x66a) {
      if (iVar2 == 0x5ca) {
        *(undefined4 *)(param_1 + 0xf0) = 0x3e800000;
        FUN_009a6070(&DAT_0105c2e8,0.25);
        DAT_0105c3e4 = 0x42c80000;
        FUN_009a5390(0x105c2e8);
        return;
      }
      local_18 = DAT_0105c400 * 0.5;
      local_14 = (float)DAT_0105c404;
      FUN_00538ef0(&local_c,&local_18,0.0);
      local_18 = *(float *)(param_1 + 0xdc) - *pfVar1;
      local_14 = *(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0xd4);
      local_10 = *(float *)(param_1 + 0xe4) - *(float *)(param_1 + 0xd8);
      FUN_00412e20(&local_18);
      local_18 = (local_c - *pfVar1) * local_18 +
                 (local_8 - *(float *)(param_1 + 0xd4)) * local_14 +
                 (local_4 - *(float *)(param_1 + 0xd8)) * local_10;
      if (*(float *)(param_1 + 0xf0) < local_18) {
        local_18 = *(float *)(param_1 + 0xf0);
      }
      *(float *)(param_1 + 0xf0) = local_18;
      if (local_18 <= 0.01) {
        local_18 = 0.01;
      }
      *(float *)(param_1 + 0xf0) = local_18;
      FUN_009a6070(&DAT_0105c2e8,local_18);
      DAT_0105c3e4 = DAT_00e4e418;
      FUN_009a5390(0x105c2e8);
    }
  }
  return;
}


//// FUNCTION FUN_00415130 @ 00415130 ////

void __thiscall FUN_00415130(void *this,int param_1)

{
  float *pfVar1;
  undefined1 local_c [12];
  
  pfVar1 = (float *)(**(code **)(**(int **)(param_1 + 0x14) + 0x38))(local_c);
  *(float *)((int)this + 0xdc) = *pfVar1;
  *(float *)((int)this + 0xe0) = pfVar1[1];
  *(float *)((int)this + 0xe4) = pfVar1[2];
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(float *)((int)this + 0xd0) = *(float *)((int)this + 0xdc) - *(float *)((int)this + 0x90);
  *(float *)((int)this + 0xd4) = *(float *)((int)this + 0xe0) - *(float *)((int)this + 0x94);
  *(float *)((int)this + 0xd8) = *(float *)((int)this + 0xe4) - *(float *)((int)this + 0x98);
  return;
}


//// FUNCTION FUN_004151b0 @ 004151b0 ////

void __thiscall FUN_004151b0(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28);
  *(float *)((int)this + 0xd0) = *(float *)((int)this + 0xdc) - *(float *)(param_1 + 0x20);
  *(float *)((int)this + 0xd4) = *(float *)((int)this + 0xe0) - fVar1;
  *(float *)((int)this + 0xd8) = *(float *)((int)this + 0xe4) - fVar2;
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0x40);
  return;
}


//// FUNCTION FUN_00415210 @ 00415210 ////

float10 __fastcall FUN_00415210(int param_1)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)(param_1 + 0x90);
  local_8 = *(float *)(param_1 + 0x94);
  local_4 = *(float *)(param_1 + 0x98);
  FUN_00412e20(&local_c);
  return (((float10)local_8 + (float10)local_c) * (float10)0.0 - (float10)local_4 * (float10)1.0) *
         (float10)120.0 + (float10)30.0;
}


//// FUNCTION FUN_00415260 @ 00415260 ////

void __thiscall FUN_00415260(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_18;
  float local_14;
  undefined4 local_10;
  
  fVar4 = DAT_0105c3c8;
  fVar1 = *(float *)((int)this + 0xd0);
  fVar2 = *(float *)((int)this + 0xd4);
  fVar3 = *(float *)((int)this + 0xd8);
  local_18 = DAT_0105c3c0;
  local_14 = DAT_0105c3c4;
  local_10 = 0;
  fVar5 = FUN_00412e20(&local_18);
  fVar5 = (float10)fVar4 / fVar5;
  if ((float10)-0.5 <= fVar5) {
    fVar5 = (float10)-0.5;
  }
  fVar6 = -((float10)*(float *)((int)this + 0xd8) / fVar5);
  *param_1 = (float)((float10)local_18 * fVar6) + fVar1;
  param_1[1] = fVar2 + (float)((float10)local_14 * fVar6);
  param_1[2] = (float)((float10)fVar3 + fVar6 * fVar5);
  return;
}


//// FUNCTION FUN_00415340 @ 00415340 ////

void __thiscall FUN_00415340(void *this,int param_1)

{
  int *piVar1;
  void *extraout_ECX;
  
  if (*(char *)(param_1 + 0x59) != '\0') {
    FUN_004151b0(this,param_1);
    this = extraout_ECX;
  }
  piVar1 = (int *)(param_1 + 0x68);
  *piVar1 = (int)this + 0xa0;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((int)this + 0xa4);
  **(int **)((int)this + 0xa4) = (int)piVar1;
  *(int **)((int)this + 0xa4) = piVar1;
  return;
}


//// FUNCTION FUN_00415390 @ 00415390 ////

void __thiscall FUN_00415390(void *this,float *param_1,float *param_2)

{
  float fVar1;
  int *piVar2;
  float10 fVar3;
  float10 fVar4;
  
  FUN_00412ec0(this,param_1,(float *)((int)this + 0xdc));
  piVar2 = (int *)FUN_0071b2a0();
  fVar3 = (float10)(**(code **)(*piVar2 + 0x10))();
  piVar2 = (int *)FUN_0071b2a0();
  fVar4 = (float10)(**(code **)(*piVar2 + 0x14))();
  fVar1 = ((float)fVar3 / *param_2) / (float)fVar3;
  fVar4 = (fVar4 / (float10)param_2[1]) / fVar4;
  if (fVar4 < (float10)fVar1) {
    fVar4 = (float10)fVar1;
  }
  fVar4 = (float10)1.0 - fVar4;
  *(float *)((int)this + 0xd0) = *(float *)((int)this + 0xdc) - *(float *)((int)this + 0x90);
  *(float *)((int)this + 0xd4) = *(float *)((int)this + 0xe0) - *(float *)((int)this + 0x94);
  *(float *)((int)this + 0xd8) = *(float *)((int)this + 0xe4) - *(float *)((int)this + 0x98);
  *(float *)((int)this + 0x26c) = (float)(fVar4 * (float10)*(float *)((int)this + 0x90));
  *(float *)((int)this + 0x270) = (float)(fVar4 * (float10)*(float *)((int)this + 0x94));
  *(float *)((int)this + 0x274) = (float)(fVar4 * (float10)*(float *)((int)this + 0x98));
  return;
}


//// FUNCTION FUN_004154a0 @ 004154a0 ////

void __thiscall FUN_004154a0(void *this,float param_1)

{
  float *pfVar1;
  
  pfVar1 = (float *)((int)this + 0x90);
  FUN_00412e20(pfVar1);
  *pfVar1 = param_1 * *pfVar1;
  *(float *)((int)this + 0x94) = param_1 * *(float *)((int)this + 0x94);
  *(float *)((int)this + 0x98) = param_1 * *(float *)((int)this + 0x98);
  *(float *)((int)this + 0xd0) = *(float *)((int)this + 0xdc) - *pfVar1;
  *(float *)((int)this + 0xd4) = *(float *)((int)this + 0xe0) - *(float *)((int)this + 0x94);
  *(float *)((int)this + 0xd8) = *(float *)((int)this + 0xe4) - *(float *)((int)this + 0x98);
  return;
}


//// FUNCTION FUN_00415520 @ 00415520 ////

void FUN_00415520(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f87aa0;
  if (DAT_00f87aa0 != (undefined4 *)0x0) {
    iVar1 = DAT_00f87aa0[0x12];
    DAT_00f87aa0[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_00f87aa0 = (undefined4 *)0x0;
  }
  return;
}


//// FUNCTION FUN_00415550 @ 00415550 ////

void __fastcall FUN_00415550(int param_1)

{
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined1 *)(param_1 + 0x2dc) = 0;
  *(undefined1 *)(param_1 + 0x2dd) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  return;
}


//// FUNCTION FUN_004155b0 @ 004155b0 ////

void __thiscall FUN_004155b0(void *this,char *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00413450(this,param_1,param_2,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


//// FUNCTION FUN_004155e0 @ 004155e0 ////

void __thiscall FUN_004155e0(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  while (iVar2 = iVar1, 0 < param_2) {
    param_2 = param_2 + -1;
    iVar2 = 0;
    if (iVar1 == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  *param_1 = iVar2;
  return;
}


//// FUNCTION FUN_00415610 @ 00415610 ////

void __fastcall FUN_00415610(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00415640 @ 00415640 ////

void __fastcall FUN_00415640(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00415910 @ 00415910 ////

void __thiscall FUN_00415910(void *this,float param_1,float param_2,float param_3)

{
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((0.001 <= param_3) && (0.001 <= ABS(*(float *)this - param_1))) {
    *(float *)((int)this + 4) = param_1;
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)this;
    local_28 = param_3 * param_3 * 0.5;
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0xc);
    *(float *)((int)this + 8) = param_2;
    *(float *)((int)this + 0x18) = param_3;
    local_2c = param_3 * local_28 * 0.33333334;
    local_1c = param_3;
    local_30 = local_28 * local_28 * 0.16666667;
    *(undefined4 *)((int)this + 0x14) = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_40 = 0x3f800000;
    local_50 = 0x3f800000;
    local_60 = 0x3f800000;
    local_14 = param_3;
    local_10 = 0x3f800000;
    local_4 = 0;
    local_8 = 0;
    local_c = 0;
    local_24 = local_2c;
    local_20 = local_28;
    local_18 = local_28;
    FUN_009aa500(&local_60,&local_30);
    local_64 = 0;
    local_6c = (*(float *)((int)this + 4) - *(float *)((int)this + 0x1c)) -
               *(float *)((int)this + 0x20) * *(float *)((int)this + 0x18);
    local_68 = *(float *)((int)this + 8) - *(float *)((int)this + 0x20);
    FUN_0040b490(&local_60,&local_6c);
    *(float *)((int)this + 0x2c) = local_6c;
    *(undefined4 *)((int)this + 0x24) = local_64;
    *(float *)((int)this + 0x28) = local_68;
    return;
  }
  *(float *)((int)this + 4) = param_1;
  *(float *)this = param_1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(float *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return;
}


//// FUNCTION FUN_00415b80 @ 00415b80 ////

void __cdecl FUN_00415b80(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


//// FUNCTION FUN_00415be0 @ 00415be0 ////

void __cdecl FUN_00415be0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_3 = param_3 + 2;
  }
  return;
}


//// FUNCTION FUN_00415c10 @ 00415c10 ////

void __fastcall FUN_00415c10(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    FUN_009a7db0(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00416240 @ 00416240 ////

void __fastcall FUN_00416240(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0xe] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x1a] = 0;
  return;
}


//// FUNCTION FUN_004162c0 @ 004162c0 ////

void __cdecl FUN_004162c0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float local_c;
  float local_8;
  float local_4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
  pfVar5 = (float *)(param_1 + 0xdc);
  pfVar1 = (float *)(param_1 + 0xd0);
  fVar2 = *(float *)(iVar4 + 0x24);
  fVar3 = *(float *)(iVar4 + 0x28);
  *pfVar1 = *(float *)(param_1 + 0xdc) - *(float *)(iVar4 + 0x20);
  *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xe0) - fVar2;
  fVar2 = *(float *)(param_1 + 0x21c);
  *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xe4) - fVar3;
  local_8 = fVar2 * *(float *)(iVar4 + 0x24);
  local_4 = fVar2 * *(float *)(iVar4 + 0x28);
  *pfVar1 = fVar2 * *(float *)(iVar4 + 0x20) + *pfVar1;
  *(float *)(param_1 + 0xd4) = local_8 + *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0xd8) = local_4 + *(float *)(param_1 + 0xd8);
  fVar2 = *(float *)(param_1 + 0xe4) - *(float *)(iVar4 + 0x28);
  *(undefined4 *)(param_1 + 0xe4) = 0x3fcccccd;
  fVar6 = (float10)FUN_00ace9b0();
  *(float *)(param_1 + 0xd8) = (float)((fVar6 * (float10)fVar2 + (float10)1.6) - (float10)2.7);
  FUN_00414360(pfVar1,pfVar5,(float *)(param_1 + 0x318),*(float *)(param_1 + 0x218));
  fVar3 = *(float *)(param_1 + 0x294) + *(float *)(param_1 + 0x28c);
  if (fVar3 != 0.0) {
    local_c = *pfVar1 - *pfVar5;
    local_8 = *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xe0);
    local_4 = *(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xe4);
    FUN_00412e20(&local_c);
    FUN_004130d0(&local_c,(float *)(param_1 + 0x318));
    FUN_00414360(pfVar1,pfVar5,&local_c,fVar3);
  }
  fVar3 = (*(float *)(param_1 + 0xd8) - 1.6) * 0.05 + 0.1;
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  local_c = (*pfVar1 - *pfVar5) * fVar3 + *pfVar5;
  local_8 = (*(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xe0)) * fVar3 +
            *(float *)(param_1 + 0xe0);
  local_4 = fVar3 * (*(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xe4)) +
            *(float *)(param_1 + 0xe4);
  *pfVar1 = local_c;
  *(float *)(param_1 + 0xd4) = local_8;
  *(float *)(param_1 + 0xd8) = local_4;
  fVar2 = (*(float *)(param_1 + 0xd8) - 1.6) / (fVar2 - 1.6);
  fVar3 = 1.0 - *(float *)(param_1 + 0xec) * *(float *)(param_1 + 0xec);
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar2 = fVar2 * 14.0 + 1.0;
  *(float *)(param_1 + 0xf0) = fVar2;
  if (15.0 <= fVar2) {
    fVar2 = 15.0;
  }
  *(float *)(param_1 + 0xf0) = fVar2;
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  *(float *)(param_1 + 0xf0) = fVar2;
  if ((*(int *)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + 0x18) == 0x4b2) &&
     (*(int **)(iVar4 + 0x14) != (int *)0x0)) {
    pfVar5 = (float *)(**(code **)(**(int **)(iVar4 + 0x14) + 0x38))(&local_c);
    fVar3 = pfVar5[1] - *(float *)(param_1 + 0xd4);
    fVar2 = pfVar5[2] - *(float *)(param_1 + 0xd8);
    fVar2 = SQRT((*pfVar5 - *pfVar1) * (*pfVar5 - *pfVar1) + fVar3 * fVar3 + fVar2 * fVar2) - 0.5;
    if (fVar2 <= 0.1) {
      fVar2 = 0.1;
    }
    if (*(float *)(param_1 + 0xf0) < fVar2) {
      fVar2 = *(float *)(param_1 + 0xf0);
    }
    *(float *)(param_1 + 0xf0) = fVar2;
  }
  return;
}


//// FUNCTION FUN_004165c0 @ 004165c0 ////

void __cdecl FUN_004165c0(int param_1)

{
  float fVar1;
  float fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)(param_1 + 0x290) + *(float *)(param_1 + 0x288);
  fVar2 = *(float *)(param_1 + 0x294) + *(float *)(param_1 + 0x28c);
  if (fVar1 != 0.0) {
    FUN_00414360((float *)(param_1 + 0xdc),(float *)(param_1 + 0xd0),(float *)(param_1 + 0x318),
                 fVar1);
  }
  if (fVar2 != 0.0) {
    local_c = *(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0xd0);
    local_8 = *(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0xd4);
    local_4 = *(float *)(param_1 + 0xe4) - *(float *)(param_1 + 0xd8);
    FUN_00412e20(&local_c);
    FUN_004130d0(&local_c,(float *)(param_1 + 0x318));
    FUN_00414360((float *)(param_1 + 0xdc),(float *)(param_1 + 0xd0),&local_c,fVar2);
  }
  return;
}


//// FUNCTION FUN_004166a0 @ 004166a0 ////

void __fastcall FUN_004166a0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_1c;
  
  local_1c = 0.0;
  fVar1 = *(float *)(DAT_00f890c0 + 0x44c) + 1.5;
  fVar3 = *(float *)(DAT_00f890c0 + 0x454) - 1.5;
  fVar4 = *(float *)(DAT_00f890c0 + 0x458) - 1.5;
  fVar2 = (*(float *)(DAT_00f890c0 + 0x450) + 1.5) - param_3;
  if ((*param_1 < fVar1) || (fVar1 = fVar3, fVar3 < *param_1)) {
    local_1c = fVar1 - *param_1;
  }
  if (((0.0 <= param_3) && (param_1[1] < fVar2)) || (fVar1 = 0.0, fVar2 = fVar4, fVar4 < param_1[1])
     ) {
    fVar1 = fVar2 - param_1[1];
  }
  if (ABS(local_1c) <= ABS(*param_2)) {
    local_1c = *param_2;
  }
  *param_2 = local_1c;
  if (ABS(fVar1) <= ABS(param_2[1])) {
    param_2[1] = param_2[1];
    return;
  }
  param_2[1] = fVar1;
  return;
}


//// FUNCTION FUN_00416e40 @ 00416e40 ////

uint __thiscall FUN_00416e40(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  void *extraout_ECX;
  
  if (*(uint *)((int)this + 0xa4) == (int)this + 0xb0U) {
    return (int)this + 0xb0U & 0xffffff00;
  }
  piVar1 = *(int **)((int)this + 0xa4);
  while( true ) {
    if (piVar1 == (int *)((int)this + 0xb0)) {
      return (uint)piVar1 & 0xffffff00;
    }
    if ((*(int *)(piVar1[2] + 0x14) == param_1) && (*(int *)(piVar1[2] + 0x18) == *param_2)) break;
    piVar1 = (int *)piVar1[1];
  }
  iVar2 = piVar1[2];
  if ((int *)piVar1[1] != (int *)0x0) {
    *(int *)piVar1[1] = *piVar1;
  }
  if (*piVar1 != 0) {
    *(int *)(*piVar1 + 4) = piVar1[1];
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  if (*(char *)(iVar2 + 0x59) != '\0') {
    FUN_004151b0(this,iVar2);
    this = extraout_ECX;
  }
  piVar1 = (int *)(iVar2 + 0x68);
  *piVar1 = (int)this + 0xa0;
  *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)((int)this + 0xa4);
  **(int **)((int)this + 0xa4) = (int)piVar1;
  *(int **)((int)this + 0xa4) = piVar1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}


//// FUNCTION FUN_00416ef0 @ 00416ef0 ////

void __thiscall FUN_00416ef0(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = *(int *)(*(int *)(*param_2 + 8) + 0x18);
  if (iVar8 == 0x5ca) {
    FUN_004f3b20();
    uVar7 = 0;
    this_00 = (void *)FUN_004f3b20();
    FUN_004f9510(this_00,uVar7);
    iVar8 = 0;
    uVar6 = 0;
    uVar5 = 0x3c3;
    uVar3 = FUN_006a36e0();
    FUN_00470a70(DAT_0104917c,uVar3,uVar5,uVar6,iVar8);
    FUN_004201a0(DAT_00f87b04,*(undefined1 *)((int)this + 0x310));
    *(undefined1 *)((int)DAT_00f87b04 + 10) = 0;
    *(undefined4 *)(DAT_0104cdf4 + 0x38) = *(undefined4 *)((int)this + 0x314);
  }
  else if (iVar8 == 0x48a) {
    FUN_004201a0(DAT_00f87b04,*(undefined1 *)((int)this + 0x310));
    *(undefined1 *)((int)DAT_00f87b04 + 10) = 0;
    *(undefined4 *)(DAT_0104cdf4 + 0x38) = *(undefined4 *)((int)this + 0x314);
  }
  piVar1 = (int *)*param_2;
  cVar4 = '\0';
  if (piVar1 == *(int **)((int)this + 0xa4)) {
    cVar4 = *(char *)(piVar1[2] + 0x59);
  }
  piVar2 = (int *)piVar1[1];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar1;
  }
  if (*piVar1 != 0) {
    *(int *)(*piVar1 + 4) = piVar1[1];
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  if ((cVar4 != '\0') && (*(int *)((int)this + 0xa4) != (int)this + 0xb0)) {
    FUN_004151b0(this,*(int *)(*(int *)((int)this + 0xa4) + 8));
  }
  *(undefined4 *)((int)this + 0x29c) = 0x3f4ccccd;
  *param_1 = (int)piVar2;
  return;
}


//// FUNCTION FUN_00417010 @ 00417010 ////

undefined4 __thiscall FUN_00417010(void *this,int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  float local_78 [3];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9d540;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00558a50(*(void **)((int)this + 0x8c),param_2,(undefined4 *)0x0);
  if ((char)uVar1 == '\0') {
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    ExceptionList = local_c;
    return uVar1 & 0xffffff00;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"startzoom",9);
  local_68 = 9;
  local_6c[9] = '\0';
  local_4._0_1_ = 1;
  fVar4 = FUN_00558610(*(void **)((int)this + 0x8c),&local_6c,0.0);
  *(float *)(param_1 + 0x78) = (float)fVar4;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"startfocus",10);
  local_68 = 10;
  local_6c[10] = '\0';
  local_4._0_1_ = 2;
  puVar2 = FUN_005584e0(*(void **)((int)this + 0x8c),local_2c,&local_6c);
  local_4._0_1_ = 3;
  puVar2 = (undefined4 *)FUN_00567e30(local_78,puVar2,'\0');
  *(undefined4 *)(param_1 + 0x2c) = *puVar2;
  *(undefined4 *)(param_1 + 0x30) = puVar2[1];
  *(undefined4 *)(param_1 + 0x34) = puVar2[2];
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"heading",7);
  local_68 = 7;
  local_6c[7] = '\0';
  local_4._0_1_ = 4;
  puVar2 = FUN_005584e0(*(void **)((int)this + 0x8c),local_2c,&local_6c);
  local_4._0_1_ = 5;
  puVar2 = (undefined4 *)FUN_00567e30(local_78,puVar2,'\0');
  *(undefined4 *)(param_1 + 0x20) = *puVar2;
  *(undefined4 *)(param_1 + 0x24) = puVar2[1];
  *(undefined4 *)(param_1 + 0x28) = puVar2[2];
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"fov",3);
  local_68 = 3;
  local_6c[3] = '\0';
  local_4._0_1_ = 6;
  puVar2 = FUN_005584e0(*(void **)((int)this + 0x8c),local_2c,&local_6c);
  local_4._0_1_ = 7;
  fVar4 = FUN_00567d60(puVar2);
  *(float *)(param_1 + 0x40) = (float)fVar4;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (*(float *)(param_1 + 0x40) == 0.0) {
    *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"cameraspeed",0xb);
  local_68 = 0xb;
  local_6c[0xb] = '\0';
  local_4._0_1_ = 8;
  puVar2 = FUN_005584e0(*(void **)((int)this + 0x8c),local_2c,&local_6c);
  local_4._0_1_ = 9;
  fVar4 = FUN_00567d60(puVar2);
  *(float *)(param_1 + 0x44) = (float)fVar4;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (*(float *)(param_1 + 0x44) == 0.0) {
    *(undefined4 *)(param_1 + 0x44) = 0x43960000;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"acceleration",0xc);
  local_68 = 0xc;
  local_6c[0xc] = '\0';
  local_4._0_1_ = 10;
  puVar2 = FUN_005584e0(*(void **)((int)this + 0x8c),local_2c,&local_6c);
  local_4._0_1_ = 0xb;
  fVar4 = FUN_00567d60(puVar2);
  *(float *)(param_1 + 0x5c) = (float)fVar4;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (*(float *)(param_1 + 0x5c) == 0.0) {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x44);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"maxvelocity",0xb);
  local_68 = 0xb;
  local_6c[0xb] = '\0';
  local_4._0_1_ = 0xc;
  puVar2 = FUN_005584e0(*(void **)((int)this + 0x8c),local_2c,&local_6c);
  local_4._0_1_ = 0xd;
  fVar4 = FUN_00567d60(puVar2);
  *(float *)(param_1 + 0x60) = (float)fVar4;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (*(float *)(param_1 + 0x60) == 0.0) {
    *(undefined4 *)(param_1 + 0x60) = 0x41f00000;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"damping",7);
  local_68 = 7;
  local_6c[7] = '\0';
  local_4._0_1_ = 0xe;
  puVar2 = FUN_005584e0(*(void **)((int)this + 0x8c),local_2c,&local_6c);
  local_4._0_1_ = 0xf;
  fVar4 = FUN_00567d60(puVar2);
  *(float *)(param_1 + 100) = (float)fVar4;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (*(float *)(param_1 + 100) == 0.0) {
    *(undefined4 *)(param_1 + 100) = 0x3e4ccccd;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"rotationspeed",0xd);
  local_68 = 0xd;
  local_6c[0xd] = '\0';
  local_4._0_1_ = 0x10;
  puVar2 = FUN_005584e0(*(void **)((int)this + 0x8c),local_2c,&local_6c);
  local_4._0_1_ = 0x11;
  fVar4 = FUN_00567d60(puVar2);
  *(float *)(param_1 + 0x48) = (float)fVar4;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (*(float *)(param_1 + 0x48) == 0.0) {
    *(undefined4 *)(param_1 + 0x48) = 0x40000000;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"zoomspeed",9);
  local_68 = 9;
  local_6c[9] = '\0';
  local_4._0_1_ = 0x12;
  puVar2 = FUN_005584e0(*(void **)((int)this + 0x8c),local_2c,&local_6c);
  local_4._0_1_ = 0x13;
  fVar4 = FUN_00567d60(puVar2);
  *(float *)(param_1 + 0x4c) = (float)fVar4;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (*(float *)(param_1 + 0x4c) == 0.0) {
    *(undefined4 *)(param_1 + 0x4c) = 0x40000000;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"wheelspeed",10);
  local_68 = 10;
  local_6c[10] = '\0';
  local_4._0_1_ = 0x14;
  puVar2 = FUN_005584e0(*(void **)((int)this + 0x8c),local_2c,&local_6c);
  local_4._0_1_ = 0x15;
  fVar4 = FUN_00567d60(puVar2);
  *(float *)(param_1 + 0x50) = (float)fVar4;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (*(float *)(param_1 + 0x50) == 0.0) {
    *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"zoomcurve",9);
  local_68 = 9;
  local_6c[9] = '\0';
  local_4._0_1_ = 0x16;
  puVar2 = FUN_005584e0(*(void **)((int)this + 0x8c),local_2c,&local_6c);
  local_4._0_1_ = 0x17;
  fVar4 = FUN_00567d60(puVar2);
  *(float *)(param_1 + 0x54) = (float)fVar4;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"exclusive",9);
  local_68 = 9;
  local_6c[9] = '\0';
  local_4._0_1_ = 0x18;
  puVar2 = FUN_005584e0(*(void **)((int)this + 0x8c),local_2c,&local_6c);
  local_4 = CONCAT31(local_4._1_3_,0x19);
  iVar3 = FUN_00567d80(puVar2);
  *(bool *)(param_1 + 0x58) = iVar3 != 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


//// FUNCTION FUN_004178e0 @ 004178e0 ////

void __fastcall FUN_004178e0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d16bec;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00417900 @ 00417900 ////

void __fastcall FUN_00417900(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d165ac;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00417920 @ 00417920 ////

void __fastcall FUN_00417920(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d172a0;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00417950 @ 00417950 ////

void __fastcall FUN_00417950(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00417970 @ 00417970 ////

void __fastcall FUN_00417970(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d172a0;
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


//// FUNCTION FUN_004179c0 @ 004179c0 ////

void __fastcall FUN_004179c0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d172b0;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_004179f0 @ 004179f0 ////

void __fastcall FUN_004179f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = (int *)(param_1 + 4);
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00417a10 @ 00417a10 ////

void __fastcall FUN_00417a10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d172b0;
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


//// FUNCTION FUN_00417ac0 @ 00417ac0 ////

void __fastcall FUN_00417ac0(int param_1)

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


//// FUNCTION FUN_00417b00 @ 00417b00 ////

void __fastcall FUN_00417b00(int param_1)

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


//// FUNCTION FUN_00417b30 @ 00417b30 ////

void __cdecl FUN_00417b30(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
    }
    param_1 = param_1 + 2;
  }
  return;
}


//// FUNCTION FUN_00417bc0 @ 00417bc0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417bc0(void)

{
  float10 fVar1;
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
  
  puStack_8 = &LAB_00c9d570;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  if (*(int *)(*(int *)(*(int *)((int)DAT_00f87aa0 + 0xa4) + 8) + 0x18) == 0x462) {
    ExceptionList = &local_c;
    _strncpy(local_20,"normal",6);
    local_28 = 6;
    local_2c[6] = '\0';
    FUN_00417010(DAT_00f87aa0,*(int *)(*(int *)((int)DAT_00f87aa0 + 0xa4) + 8),&local_2c);
    if (*(int *)((int)DAT_00f87aa0 + 0x8c) != 0) {
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      _strncpy(local_4c,"",0);
      local_48 = 0;
      *local_4c = '\0';
      local_4._0_1_ = 1;
      FUN_00558a50(*(void **)((int)DAT_00f87aa0 + 0x8c),&local_4c,(undefined4 *)0x1);
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      _strncpy(local_4c,"wheelscale",10);
      local_48 = 10;
      local_4c[10] = '\0';
      local_4._0_1_ = 2;
      fVar1 = FUN_00558610(*(void **)((int)DAT_00f87aa0 + 0x8c),&local_4c,0.0);
      _DAT_00e4e410 = (float)((float10)1000.0 / fVar1);
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      _strncpy(local_4c,"pushdistance",0xc);
      local_48 = 0xc;
      local_4c[0xc] = '\0';
      local_4 = CONCAT31(local_4._1_3_,3);
      fVar1 = FUN_00558610(*(void **)((int)DAT_00f87aa0 + 0x8c),&local_4c,0.0);
      _DAT_00e4e414 = (float)fVar1;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      _DAT_00e4e414 = _DAT_00e4e414 * _DAT_00e4e414;
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00417e10 @ 00417e10 ////

void FUN_00417e10(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d58b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00423320(DAT_00f87b04);
  if (iVar1 != 1) {
    if (DAT_00f87ab8 == (int *)0x0) {
      puVar2 = operator_new(0x344);
      local_4 = 0;
      if (puVar2 == (undefined4 *)0x0) {
        DAT_00f87ab8 = (int *)0x0;
      }
      else {
        DAT_00f87ab8 = FUN_007432f0(puVar2);
      }
      iVar1 = *DAT_00f87ab8;
      uVar5 = 0;
      local_4 = 0xffffffff;
      uVar3 = FUN_0071b2a0();
      (**(code **)(iVar1 + 0x70))(uVar3,uVar5);
      piVar4 = (int *)FUN_0071b2a0();
      (**(code **)(*piVar4 + 0xc))(DAT_00f87ab8,2);
    }
    piVar4 = DAT_00f87ac4;
    if (DAT_00f87ac4 != DAT_00f87ac8) {
      do {
        *(undefined1 *)(*piVar4 + 0x30) = 0;
        piVar4 = piVar4 + 1;
      } while (piVar4 != DAT_00f87ac8);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00417ee0 @ 00417ee0 ////

undefined4 __thiscall FUN_00417ee0(void *this,undefined4 *param_1,undefined *param_2)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char *pcVar4;
  char cVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  void *this_00;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined **ppuVar12;
  undefined4 *local_10;
  int local_4;
  
  puVar11 = DAT_0104c4d8;
  if ((undefined4 **)DAT_0104c4d8 != &DAT_0104c4e4) {
    local_10 = DAT_0104c4e4;
    ppuVar6 = FUN_00412800(param_1);
    if (ppuVar6 == *(undefined ***)this) {
      uVar9 = 0;
      puVar7 = puVar11;
      if ((undefined4 **)puVar11 != &DAT_0104c4e4) {
        do {
          puVar1 = puVar7 + 1;
          uVar9 = uVar9 + 1;
          puVar7 = (undefined4 *)*puVar1;
        } while ((undefined4 **)*puVar1 != &DAT_0104c4e4);
      }
      if (*(uint *)((int)this + 4) < uVar9) {
        param_1 = puVar11;
        local_10 = (undefined4 *)FUN_004155e0(&param_1,&local_4,*(uint *)((int)this + 4));
        local_10 = (undefined4 *)*local_10;
      }
    }
    param_1 = (undefined4 *)0x3e8;
    puVar7 = local_10;
    do {
      param_1 = (undefined4 *)((int)param_1 + -1);
      if (param_1 == (undefined4 *)0x0) {
        return 0;
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
      if ((undefined4 **)*puVar1 == &DAT_0104c4e4) {
        puVar7 = puVar11;
      }
      this_00 = (void *)FUN_00528460(puVar7[2]);
      puVar3 = *ppuVar6;
      ppuVar12 = ppuVar6;
      puVar11 = DAT_0104c4d8;
      while (DAT_0104c4d8 = puVar11, puVar3 != (undefined *)0x0) {
        pcVar4 = *ppuVar12;
        pcVar8 = pcVar4;
        do {
          cVar5 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar5 != '\0');
        uVar9 = FUN_00413450(this_00,pcVar4,0,(int)pcVar8 - (int)(pcVar4 + 1));
        if ((uVar9 != 0xffffffff) &&
           ((param_2 == (undefined *)0x0 || (cVar5 = (*(code *)param_2)(puVar7[2]), cVar5 != '\0')))
           ) {
          iVar10 = 0;
          for (puVar11 = DAT_0104c4d8; puVar11 != puVar7; puVar11 = (undefined4 *)puVar11[1]) {
            iVar10 = iVar10 + 1;
          }
          *(int *)((int)this + 4) = iVar10;
          *(undefined ***)this = ppuVar6;
          return puVar7[2];
        }
        ppuVar2 = ppuVar12 + 1;
        ppuVar12 = ppuVar12 + 1;
        puVar11 = DAT_0104c4d8;
        puVar3 = *ppuVar2;
      }
    } while (puVar7 != local_10);
    *(undefined4 *)this = 0;
  }
  return 0;
}


//// FUNCTION FUN_00418040 @ 00418040 ////

int * __thiscall FUN_00418040(void *this,int param_1,int param_2)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9d5b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d165ac;
  *(undefined4 *)((int)this + 0x14) = 0;
  piVar1 = (int *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(int **)((int)this + 0x24) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  local_4 = 1;
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  (**(code **)(*piVar1 + 4))();
  *(int *)((int)this + 0x2c) = param_2;
  (**(code **)*piVar1)();
  piVar1 = (int *)(*(int *)((int)this + 0x2c) + 0x48);
  *piVar1 = *piVar1 + 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004180e0 @ 004180e0 ////

void __fastcall FUN_004180e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9d5d3;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)param_1[0xb];
  local_4 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[6] + 4))();
    param_1[0xb] = 0;
    (**(code **)param_1[6])();
  }
  param_1[6] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[8] = param_1[7];
  }
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1[7] + 4) = param_1[8];
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[8] = param_1[7];
  }
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1[7] + 4) = param_1[8];
  }
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_00d165ac;
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
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004181d0 @ 004181d0 ////

void __fastcall FUN_004181d0(int param_1)

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


//// FUNCTION FUN_00418230 @ 00418230 ////

void __fastcall FUN_00418230(int param_1)

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


