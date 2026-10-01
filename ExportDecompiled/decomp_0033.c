//// FUNCTION FUN_00881c00 @ 00881c00 ////

void __thiscall FUN_00881c00(void *this,char *param_1,uint param_2)

{
  void *this_00;
  
  this_00 = (void *)FUN_00881050((void *)((int)this + 0x1ac),param_1);
  if (this_00 != (void *)0x0) {
    FUN_008887b0(this_00,param_2);
    FUN_0088fd50(this_00,param_2,7);
  }
  return;
}


//// FUNCTION FUN_00881d40 @ 00881d40 ////

void __thiscall FUN_00881d40(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00888870((int)this + 0x148);
  if ((int)param_1 < iVar1) {
    FUN_008887b0(*(void **)((int)this + 0x170),param_1);
    FUN_0088fd50(*(void **)((int)this + 0x170),param_1,6);
  }
  return;
}


//// FUNCTION FUN_00881d80 @ 00881d80 ////

void __thiscall FUN_00881d80(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00888870((int)this + 0x148);
  if ((int)param_1 < iVar1) {
    FUN_008887b0(*(void **)((int)this + 0x170),param_1);
    FUN_0088fd50(*(void **)((int)this + 0x170),param_1,7);
  }
  return;
}


//// FUNCTION FUN_00881ec0 @ 00881ec0 ////

uint __fastcall FUN_00881ec0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x170) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00881ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x170) + 0x10))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00881ee0 @ 00881ee0 ////

undefined1 __fastcall FUN_00881ee0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (-1 < *(int *)(param_1 + 0x80)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x170) + 0x260);
    if (iVar2 == *(int *)(param_1 + 0x80)) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      return *(undefined1 *)(param_1 + 0x88);
    }
    uVar1 = *(uint *)(param_1 + 0x84);
    if ((iVar2 < (int)uVar1) && (iVar2 = FUN_00888870(param_1 + 0x148), (int)uVar1 < iVar2)) {
      FUN_008887b0(*(void **)(param_1 + 0x170),uVar1);
    }
  }
  return *(undefined1 *)(param_1 + 0x88);
}


//// FUNCTION FUN_00881f70 @ 00881f70 ////

void __fastcall FUN_00881f70(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00881fc0 @ 00881fc0 ////

void __fastcall FUN_00881fc0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00882060 @ 00882060 ////

void __fastcall FUN_00882060(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d638f4;
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


//// FUNCTION FUN_008820b0 @ 008820b0 ////

void * __fastcall FUN_008820b0(void *param_1)

{
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0xc) = 1;
  FUN_008812e0(param_1,10);
  return param_1;
}


//// FUNCTION FUN_008820d0 @ 008820d0 ////

void * __fastcall FUN_008820d0(void *param_1)

{
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0xc) = 1;
  FUN_00881340(param_1,10);
  return param_1;
}


//// FUNCTION FUN_008820f0 @ 008820f0 ////

int __thiscall FUN_008820f0(void *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_009f3be0(param_1);
  uVar2 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    piVar3 = *(int **)this;
    do {
      if (*piVar3 == iVar1) {
        if ((int)uVar2 < 0) {
          return 0;
        }
        return (*(int **)this)[uVar2 * 2 + 1];
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 < *(uint *)((int)this + 4));
  }
  return 0;
}


//// FUNCTION FUN_008821b0 @ 008821b0 ////

void FUN_008821b0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xc);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_008821d0 @ 008821d0 ////

uint __thiscall FUN_008821d0(void *this,int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 == *(int *)((int)this + 8)) {
    iVar1 = FUN_00881530(this,iVar1 * 2);
  }
  uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),param_2);
  if (param_2 != '\0') {
    uVar2 = 0;
    if (*(uint *)((int)this + 4) != 0) {
      piVar3 = *(int **)this;
      do {
        if (*piVar3 == param_1) {
          if (uVar2 != 0xffffffff) {
            return uVar2 & 0xffffff00;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 < *(uint *)((int)this + 4));
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION FUN_00882220 @ 00882220 ////

uint __thiscall FUN_00882220(void *this,int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 == *(int *)((int)this + 8)) {
    iVar1 = FUN_008815b0(this,iVar1 * 2);
  }
  uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),param_2);
  if (param_2 != '\0') {
    uVar2 = 0;
    if (*(uint *)((int)this + 4) != 0) {
      piVar3 = *(int **)this;
      do {
        if (*piVar3 == param_1) {
          if (uVar2 != 0xffffffff) {
            return uVar2 & 0xffffff00;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 < *(uint *)((int)this + 4));
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION FUN_00882270 @ 00882270 ////

void FUN_00882270(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xc);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_00882290 @ 00882290 ////

void FUN_00882290(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xc);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_008822c0 @ 008822c0 ////

int * __fastcall FUN_008822c0(int *param_1)

{
  FUN_008807b0(param_1);
  return param_1;
}


//// FUNCTION FUN_008822d0 @ 008822d0 ////

int * __fastcall FUN_008822d0(int *param_1)

{
  FUN_00880840(param_1);
  return param_1;
}


//// FUNCTION FUN_008822e0 @ 008822e0 ////

int * __fastcall FUN_008822e0(int *param_1)

{
  FUN_008808d0(param_1);
  return param_1;
}


//// FUNCTION FUN_008822f0 @ 008822f0 ////

void __fastcall FUN_008822f0(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00882340 @ 00882340 ////

void __fastcall FUN_00882340(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00882390 @ 00882390 ////

void __fastcall FUN_00882390(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_008823e0 @ 008823e0 ////

void __fastcall FUN_008823e0(int param_1)

{
  FUN_00881770(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00882410 @ 00882410 ////

void FUN_00882410(void)

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


//// FUNCTION FUN_00882460 @ 00882460 ////

void __fastcall FUN_00882460(int param_1)

{
  FUN_00881800(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00882490 @ 00882490 ////

void FUN_00882490(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}


//// FUNCTION FUN_008824e0 @ 008824e0 ////

void __fastcall FUN_008824e0(int param_1)

{
  FUN_00881890(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00882510 @ 00882510 ////

void FUN_00882510(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}


//// FUNCTION FUN_008825f0 @ 008825f0 ////

void __fastcall FUN_008825f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  (**(code **)(*(int *)(param_1 + 0x17c) + 4))();
  *(undefined4 *)(param_1 + 400) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x17c))();
  if (*(int *)(param_1 + 0x178) != 0) {
    FUN_0087de20(*(int *)(param_1 + 0x178));
  }
  piVar2 = (int *)**(int **)(param_1 + 0x208);
  if (piVar2 != *(int **)(param_1 + 0x208)) {
    do {
      *(undefined1 *)(piVar2[2] + 0x8d) = 1;
      *(undefined4 *)(piVar2[2] + 0x48) = 0;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x208));
  }
  piVar2 = (int *)**(int **)(param_1 + 0x214);
  if (piVar2 != *(int **)(param_1 + 0x214)) {
    do {
      piVar1 = (int *)piVar2[2];
      (**(code **)(*piVar1 + 4))();
      piVar1[5] = 0;
      (**(code **)*piVar1)();
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x214));
  }
  return;
}


//// FUNCTION FUN_00882680 @ 00882680 ////

undefined4 __thiscall FUN_00882680(void *this,int *param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_00881050((void *)((int)this + 0x1ac),"boundingbox");
  if (iVar1 != 0) {
    iVar1 = FUN_00889b90(iVar1);
    iVar1 = *(int *)(iVar1 + 4);
    if (((*(byte *)(*(int *)(iVar1 + 0x3c) + 0x50) & 2) != 0) &&
       (iVar1 = *(int *)(*(int *)(iVar1 + 0x3c) + 0x160), param_1 != (int *)0x0)) {
      (**(code **)(*param_1 + 0x78))
                ((float)(*(int *)(iVar1 + 0x54) - *(int *)(iVar1 + 0x50)) * 0.05);
      iVar1 = (**(code **)(*param_1 + 0x7c))(unaff_ESI);
    }
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


//// FUNCTION FUN_00882710 @ 00882710 ////

undefined4 __thiscall FUN_00882710(void *this,float *param_1)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = FUN_00881050((void *)((int)this + 0x1ac),"boundingbox");
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00889b90(iVar1);
  iVar1 = *(int *)(iVar1 + 4);
  pfVar2 = *(float **)(iVar1 + 0x3c);
  if (((uint)pfVar2[0x14] & 2) != 0) {
    *param_1 = (float)(*(int *)((int)pfVar2[0x58] + 0x54) - *(int *)((int)pfVar2[0x58] + 0x50));
    iVar1 = *(int *)(*(int *)(iVar1 + 0x3c) + 0x160);
    param_1[1] = (float)(*(int *)(iVar1 + 0x5c) - *(int *)(iVar1 + 0x58));
    *param_1 = *param_1 * 0.05;
    param_1[1] = param_1[1] * 0.05;
    pfVar2 = param_1;
  }
  return CONCAT31((int3)((uint)pfVar2 >> 8),1);
}


//// FUNCTION FUN_00882830 @ 00882830 ////

void __thiscall FUN_00882830(void *this,char *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce9eb8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00881050((void *)((int)this + 0x1ac),param_1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x23c) + 4))();
    *(undefined4 *)(iVar1 + 0x250) = in_stack_00000024;
    (*(code *)**(undefined4 **)(iVar1 + 0x23c))();
    *(undefined4 *)(iVar1 + 600) = in_stack_00000028;
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008828c0 @ 008828c0 ////

void __thiscall FUN_008828c0(void *this,char *param_1)

{
  FUN_008820f0((void *)((int)this + 0x1bc),param_1);
  return;
}


//// FUNCTION FUN_008828d0 @ 008828d0 ////

uint __fastcall FUN_008828d0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = DAT_01050150;
  if ((DAT_01050150 != 0) && (*(uint *)(param_1 + 0x174) == DAT_01050150)) {
    *(undefined1 *)(DAT_01050150 + 0x178) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x174);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar3 = (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x174) = 0;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    FUN_00880d20(param_1);
    uVar3 = FUN_00553fa0(0x73);
    DAT_0105015c = (undefined1)uVar3;
    uVar3 = FUN_00553fd0(0x73);
    DAT_0105015d = (undefined1)uVar3;
    uVar3 = FUN_0088a3f0(*(void **)(param_1 + 0x170),(int *)(param_1 + 0xe4));
    return uVar3;
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00882950 @ 00882950 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00882950(int param_1)

{
  undefined4 *this;
  char cVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 uVar3;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_30 [6];
  int aiStack_18 [6];
  
  (*(code *)DAT_0105018c[1])();
  DAT_010501a0 = param_1;
  (*(code *)*DAT_0105018c)();
  _DAT_01050178 = *(undefined4 *)(param_1 + 0x50);
  _DAT_0105017c = *(undefined4 *)(param_1 + 0x54);
  _DAT_01050180 = *(undefined4 *)(param_1 + 0x58);
  _DAT_01050184 = *(undefined4 *)(param_1 + 0x5c);
  if ((*(int *)(param_1 + 0x74) != 0) && (*(int *)(param_1 + 0x170) != 0)) {
    DAT_00e5e7ec = 0;
    DAT_00e5e7e8 = 0;
    DAT_00e5e7f8 = 0;
    DAT_00e5e7f4 = 0;
    DAT_00e5e808._0_2_ = 0x100;
    DAT_00e5e804._0_2_ = 0x100;
    DAT_00e5e800._0_2_ = 0x100;
    DAT_00e5e7fc._0_2_ = 0x100;
    DAT_00e5e808._2_2_ = 0;
    DAT_00e5e804._2_2_ = 0;
    DAT_00e5e800._2_2_ = 0;
    DAT_00e5e7fc._2_2_ = 0;
    DAT_00e5e284 = 0xffffffff;
    DAT_01050158 = 0;
    DAT_00e5e7e4 = 0x10000;
    DAT_00e5e7f0 = 0x10000;
    this = (undefined4 *)(param_1 + 0xe4);
    *this = 0x10000;
    *(undefined4 *)(param_1 + 0xf0) = 0x10000;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    if (*(char *)(param_1 + 0xfc) != '\0') {
      puVar2 = (undefined4 *)FUN_0086ddb0(this,aiStack_30,(int *)(param_1 + 0xcc));
      *this = *puVar2;
      *(undefined4 *)(param_1 + 0xe8) = puVar2[1];
      *(undefined4 *)(param_1 + 0xec) = puVar2[2];
      *(undefined4 *)(param_1 + 0xf0) = puVar2[3];
      *(undefined4 *)(param_1 + 0xf4) = puVar2[4];
      *(undefined4 *)(param_1 + 0xf8) = puVar2[5];
    }
    piVar6 = (int *)(param_1 + 0xb4);
    piVar5 = aiStack_30;
    this_00 = (void *)FUN_0086ddb0(this,aiStack_18,(int *)(param_1 + 0x9c));
    puVar2 = (undefined4 *)FUN_0086ddb0(this_00,piVar5,piVar6);
    *this = *puVar2;
    *(undefined4 *)(param_1 + 0xe8) = puVar2[1];
    *(undefined4 *)(param_1 + 0xec) = puVar2[2];
    *(undefined4 *)(param_1 + 0xf0) = puVar2[3];
    *(undefined4 *)(param_1 + 0xf4) = puVar2[4];
    *(undefined4 *)(param_1 + 0xf8) = puVar2[5];
    if (*(char *)(param_1 + 0x7d) == '\0') {
      uVar4 = FUN_00acd42c();
      *this = (int)uVar4;
      uVar4 = FUN_00acd42c();
      uVar3 = (undefined4)uVar4;
    }
    else {
      uVar4 = FUN_00acd42c();
      *this = (int)uVar4;
      uVar4 = FUN_00acd42c();
      uVar3 = (undefined4)uVar4;
    }
    *(undefined4 *)(param_1 + 0xf0) = uVar3;
    cVar1 = FUN_00881ee0(param_1);
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x170) + 0x14))(this,&DAT_00e5e7fc);
      FUN_00881990(param_1);
    }
    *(undefined1 *)(param_1 + 0xfd) = 0;
    *(undefined1 *)(param_1 + 0xfc) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0xfd) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  return;
}


//// FUNCTION FUN_00882b70 @ 00882b70 ////

uint __thiscall FUN_00882b70(void *this,uint param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_008821d0(this,param_1,param_3);
  if (((char)uVar1 != '\0') &&
     (uVar1 = CONCAT31((int3)(uVar1 >> 8),*(char *)((int)this + 0xc)),
     *(char *)((int)this + 0xc) != '\0')) {
    uVar1 = **(uint **)this;
    for (uVar3 = 0; (uVar1 < param_1 && ((*(uint **)this)[uVar3 * 2] != 0xffffffff));
        uVar3 = uVar3 + 1) {
      uVar1 = *(uint *)(*(int *)this + 8 + uVar3 * 8);
    }
    for (uVar1 = *(uint *)((int)this + 4); uVar3 < uVar1; uVar1 = uVar1 - 1) {
      *(undefined4 *)(*(int *)this + uVar1 * 8) = *(undefined4 *)(*(int *)this + -8 + uVar1 * 8);
      *(undefined4 *)(*(int *)this + uVar1 * 8 + 4) = *(undefined4 *)(*(int *)this + -4 + uVar1 * 8)
      ;
    }
    *(uint *)(*(int *)this + uVar3 * 8) = param_1;
    *(undefined4 *)(*(int *)this + 4 + uVar3 * 8) = param_2;
    iVar2 = *(int *)((int)this + 4) + 1;
    *(int *)((int)this + 4) = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00882c50 @ 00882c50 ////

void __fastcall FUN_00882c50(int param_1)

{
  FUN_008822f0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00882c80 @ 00882c80 ////

void __fastcall FUN_00882c80(int param_1)

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


//// FUNCTION FUN_00882cb0 @ 00882cb0 ////

void __fastcall FUN_00882cb0(int param_1)

{
  FUN_00882340(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00882ce0 @ 00882ce0 ////

void __fastcall FUN_00882ce0(int param_1)

{
  FUN_00882390(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00882d10 @ 00882d10 ////

void __fastcall FUN_00882d10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00882410();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00882d50 @ 00882d50 ////

void __fastcall FUN_00882d50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00882490();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00882d90 @ 00882d90 ////

void __fastcall FUN_00882d90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00882510();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00882e00 @ 00882e00 ////

void __thiscall FUN_00882e00(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *this_00;
  
  iVar1 = FUN_009f3be0((char *)*param_2);
  this_00 = (int *)((int)this + 0x1bc);
  if (*(int *)((int)this + 0x1c0) == *(int *)((int)this + 0x1c4)) {
    FUN_008815b0(this_00,*(int *)((int)this + 0x1c0) * 2);
  }
  *(int *)(*this_00 + *(int *)((int)this + 0x1c0) * 8) = iVar1;
  *(undefined4 *)(*this_00 + 4 + *(int *)((int)this + 0x1c0) * 8) = param_1;
  *(int *)((int)this + 0x1c0) = *(int *)((int)this + 0x1c0) + 1;
  *(undefined1 *)((int)this + 0x1c8) = 0;
  return;
}


//// FUNCTION FUN_00882e60 @ 00882e60 ////

void __thiscall FUN_00882e60(void *this,undefined4 param_1,char *param_2)

{
  int *this_00;
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9ed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_009f3be0(param_2);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,param_2,(int)pcVar3 - (int)(param_2 + 1));
  local_4 = 0;
  this_00 = (int *)((int)this + 0x1ac);
  iVar4 = FUN_009f3c40(&local_2c);
  uVar5 = 0;
  if (*(uint *)((int)this + 0x1b0) != 0) {
    piVar6 = (int *)*this_00;
    do {
      if (*piVar6 == iVar4) goto LAB_00882eff;
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 < *(uint *)((int)this + 0x1b0));
  }
  uVar5 = 0xffffffff;
LAB_00882eff:
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (uVar5 != 0xffffffff) {
    if (*(char *)((int)this + 0x21d) == '\0') {
      *(undefined4 *)(*this_00 + 4 + uVar5 * 8) = param_1;
    }
    ExceptionList = local_c;
    return;
  }
  FUN_00882b70(this_00,uVar2,param_1,'\0');
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00882f80 @ 00882f80 ////

int __fastcall FUN_00882f80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008821b0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00882fa0 @ 00882fa0 ////

void __fastcall FUN_00882fa0(int param_1)

{
  FUN_008822f0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00882fc0 @ 00882fc0 ////

void __fastcall FUN_00882fc0(int param_1)

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


//// FUNCTION FUN_00882ff0 @ 00882ff0 ////

int __fastcall FUN_00882ff0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00882270();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00883010 @ 00883010 ////

void __fastcall FUN_00883010(int param_1)

{
  FUN_00882340(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00883030 @ 00883030 ////

int __fastcall FUN_00883030(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00882290();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00883050 @ 00883050 ////

void __fastcall FUN_00883050(int param_1)

{
  FUN_00882390(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00883070 @ 00883070 ////

void FUN_00883070(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    (**(code **)*param_1)(0);
  }
  return;
}


//// FUNCTION FUN_008830a0 @ 008830a0 ////

int __fastcall FUN_008830a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00882410();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008830d0 @ 008830d0 ////

int __fastcall FUN_008830d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00882490();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00883100 @ 00883100 ////

int __fastcall FUN_00883100(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00882510();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00883130 @ 00883130 ////

void __fastcall FUN_00883130(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x10) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00883180 @ 00883180 ////

undefined4 __thiscall FUN_00883180(void *this,char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 local_14 [20];
  
  iVar2 = FUN_00881050((void *)((int)this + 0x1ac),param_1);
  pcVar3 = (char *)0x0;
  if (iVar2 != 0) {
    local_20 = local_14;
    local_14[0] = 0;
    local_1c = 0;
    local_18 = 0x14;
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_20,param_2,(int)pcVar3 - (int)(param_2 + 1));
    FUN_00591070((void *)(*(int *)(iVar2 + 0x164) + 0x1c),(int *)&param_1,&local_20);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    pcVar3 = param_1;
    if (param_1 != *(char **)(*(int *)(iVar2 + 0x164) + 0x20)) {
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
  }
  return (uint)pcVar3 & 0xffffff00;
}


//// FUNCTION FUN_00883230 @ 00883230 ////

undefined4 __thiscall FUN_00883230(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char **ppcVar4;
  char *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 local_14 [20];
  
  local_20 = local_14;
  local_14[0] = 0;
  local_1c = 0;
  local_18 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_20,param_1,(int)pcVar2 - (int)(param_1 + 1));
  param_1 = (char *)FUN_0048f2c0((void *)((int)this + 0x1ec),&local_20);
  pcVar2 = *(char **)((int)this + 0x1f0);
  if (param_1 != pcVar2) {
    uVar3 = FUN_00441060(&local_20,(undefined4 *)(param_1 + 0xc));
    if ((char)uVar3 == '\0') {
      ppcVar4 = &param_1;
      goto LAB_008832b4;
    }
  }
  local_24 = pcVar2;
  ppcVar4 = &local_24;
LAB_008832b4:
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return CONCAT31((int3)((uint)ppcVar4 >> 8),*ppcVar4 != *(char **)((int)this + 0x1f0));
}


//// FUNCTION FUN_008832e0 @ 008832e0 ////

void __fastcall FUN_008832e0(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x10) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_008832f0 @ 008832f0 ////

void __thiscall FUN_008832f0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce9ef8;
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
  FUN_008807b0((int *)&param_2);
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
      goto LAB_00883461;
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
      piVar2 = (int *)FUN_00880130(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_00880110((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00883461:
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
            FUN_00881130(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_00880170(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_00881130(this,(int)piVar5);
              break;
            }
LAB_00883524:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_00880170(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_00883524;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_00881130(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_00880170(this,piVar5);
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


//// FUNCTION FUN_008835b0 @ 008835b0 ////

void __thiscall FUN_008835b0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce9f18;
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
  FUN_00880840((int *)&param_2);
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
      goto LAB_00883721;
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
      piVar2 = (int *)FUN_00880280(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x11) == '\0') {
      uVar3 = FUN_00880260((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00883721:
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
            FUN_008811a0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(*piVar4 + 0x10) != '\x01') || (*(char *)(piVar4[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x10) = 1;
                *(undefined1 *)(piVar4 + 4) = 0;
                FUN_008802c0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 4) = (char)piVar5[4];
              *(undefined1 *)(piVar5 + 4) = 1;
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              FUN_008811a0(this,(int)piVar5);
              break;
            }
LAB_008837e4:
            *(undefined1 *)(piVar4 + 4) = 0;
          }
        }
        else {
          if ((char)piVar4[4] == '\0') {
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(piVar5 + 4) = 0;
            FUN_008802c0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(piVar4[2] + 0x10) == '\x01') && (*(char *)(*piVar4 + 0x10) == '\x01'))
            goto LAB_008837e4;
            if (*(char *)(*piVar4 + 0x10) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              *(undefined1 *)(piVar4 + 4) = 0;
              FUN_008811a0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 4) = (char)piVar5[4];
            *(undefined1 *)(piVar5 + 4) = 1;
            *(undefined1 *)(*piVar4 + 0x10) = 1;
            FUN_008802c0(this,piVar5);
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


//// FUNCTION FUN_00883870 @ 00883870 ////

void __thiscall FUN_00883870(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce9f38;
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
  FUN_008808d0((int *)&param_2);
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
      goto LAB_008839e1;
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
      piVar2 = (int *)FUN_008803d0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x11) == '\0') {
      uVar3 = FUN_008803b0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_008839e1:
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
            FUN_00881210(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(*piVar4 + 0x10) != '\x01') || (*(char *)(piVar4[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x10) = 1;
                *(undefined1 *)(piVar4 + 4) = 0;
                FUN_00880410(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 4) = (char)piVar5[4];
              *(undefined1 *)(piVar5 + 4) = 1;
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              FUN_00881210(this,(int)piVar5);
              break;
            }
LAB_00883aa4:
            *(undefined1 *)(piVar4 + 4) = 0;
          }
        }
        else {
          if ((char)piVar4[4] == '\0') {
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(piVar5 + 4) = 0;
            FUN_00880410(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(piVar4[2] + 0x10) == '\x01') && (*(char *)(*piVar4 + 0x10) == '\x01'))
            goto LAB_00883aa4;
            if (*(char *)(*piVar4 + 0x10) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              *(undefined1 *)(piVar4 + 4) = 0;
              FUN_00881210(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 4) = (char)piVar5[4];
            *(undefined1 *)(piVar5 + 4) = 1;
            *(undefined1 *)(*piVar4 + 0x10) = 1;
            FUN_00880410(this,piVar5);
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


//// FUNCTION FUN_00883b30 @ 00883b30 ////

void __thiscall FUN_00883b30(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00881770((void *)piVar6[1]);
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
    FUN_008832f0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00883bf0 @ 00883bf0 ////

void __thiscall FUN_00883bf0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00881800((void *)piVar6[1]);
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
    FUN_008835b0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00883cb0 @ 00883cb0 ////

void __thiscall FUN_00883cb0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00881890((void *)piVar6[1]);
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
    FUN_00883870(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00883fc0 @ 00883fc0 ////

void __fastcall FUN_00883fc0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00883b30(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00883ff0 @ 00883ff0 ////

void __fastcall FUN_00883ff0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00883bf0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00884020 @ 00884020 ////

void __fastcall FUN_00884020(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00883cb0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00884120 @ 00884120 ////

void __thiscall FUN_00884120(void *this,char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  void *this_00;
  char *pcVar4;
  undefined4 local_34 [2];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9fa0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (void *)FUN_00881050((void *)((int)this + 0x1ac),param_1);
  if (this_00 != (void *)0x0) {
    local_2c = local_20;
    local_24 = 0x14;
    local_28 = 0;
    local_20[0] = 0;
    pcVar1 = param_1 + 1;
    if (*(int *)((int)this_00 + 0x260) == 1) {
      param_1 = (char *)0x0;
      pcVar4 = pcVar3;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      FUN_004015d0(&local_2c,pcVar3,(int)pcVar4 - (int)pcVar1);
      local_4 = 0;
      FUN_00648b10((void *)((int)this + 0x1ec),&local_2c);
    }
    else {
      param_1 = (char *)0x1;
      pcVar4 = pcVar3;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      FUN_004015d0(&local_2c,pcVar3,(int)pcVar4 - (int)pcVar1);
      local_4 = 1;
      FUN_0048fab0((void *)((int)this + 0x1ec),local_34,&local_2c);
    }
    if (0x14 < local_24) {
      local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_4 = 0xffffffff;
    FUN_008887b0(this_00,(uint)param_1);
    FUN_0088fd50(this_00,(uint)param_1,7);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00884250 @ 00884250 ////

int __fastcall FUN_00884250(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00882410();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00884280 @ 00884280 ////

int __fastcall FUN_00884280(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00882490();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008842b0 @ 008842b0 ////

int __fastcall FUN_008842b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00882510();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008842e0 @ 008842e0 ////

void __fastcall FUN_008842e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00872b30(*(int *)(param_1 + 4),*(int *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00884320 @ 00884320 ////

void __fastcall FUN_00884320(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00872b30(*(int *)(param_1 + 4),*(int *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00884360 @ 00884360 ////

void __fastcall FUN_00884360(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00872b30(*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_00883130(param_1);
  return;
}


//// FUNCTION FUN_008843b0 @ 008843b0 ////

void * __thiscall FUN_008843b0(void *this,byte param_1)

{
  FUN_00884360((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00884450 @ 00884450 ////

void FUN_00884450(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_00884360(param_1);
  }
  return;
}


//// FUNCTION FUN_008844d0 @ 008844d0 ////

void __fastcall FUN_008844d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x20) {
    FUN_00884360(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_008844e0 @ 008844e0 ////

void __fastcall FUN_008844e0(int param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce9fc3;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_00423c20((void *)(param_1 + 0x1c),&local_10,(int *)**(int **)(param_1 + 0x20),
               *(int **)(param_1 + 0x20));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x20));
}


//// FUNCTION FUN_00884560 @ 00884560 ////

void __fastcall FUN_00884560(undefined4 *param_1)

{
  void *pvVar1;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea0fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d63910;
  pvVar1 = (void *)param_1[0x5e];
  local_4 = 0x15;
  if (pvVar1 != (void *)0x0) {
    FUN_0087f980((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  param_1[0x5e] = 0;
  if (param_1[0x42] != 0) {
    do {
      if (*(int *)(*(int *)param_1[0x41] + 0x10) != 0) {
        FUN_0099b400(*(void **)(*(int *)param_1[0x41] + 0x10));
        *(undefined4 *)(*(int *)param_1[0x41] + 0x10) = 0;
      }
      FUN_008832f0(param_1 + 0x40,local_10,*(int **)param_1[0x41]);
    } while (param_1[0x42] != 0);
  }
  if (param_1[0x45] != 0) {
    do {
      if (*(int **)(*(int *)param_1[0x44] + 0xc) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)param_1[0x44] + 0xc) + 0x14))(1);
      }
      FUN_008835b0(param_1 + 0x43,local_10,*(int **)param_1[0x44]);
    } while (param_1[0x45] != 0);
  }
  if (param_1[0x48] != 0) {
    do {
      pvVar1 = *(void **)(*(int *)param_1[0x47] + 0xc);
      if (pvVar1 != (void *)0x0) {
        FUN_008ab0b0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
        _free(pvVar1);
      }
      FUN_00883870(param_1 + 0x46,local_10,*(int **)param_1[0x47]);
    } while (param_1[0x48] != 0);
  }
  if ((uint)param_1[0x95] < 0xb) {
    if ((uint)param_1[0x8a] < 0x15) {
      FUN_00882390((int)(param_1 + 0x84));
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x85]);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x88]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x93]);
}


//// FUNCTION FUN_00884a20 @ 00884a20 ////

undefined4 * __thiscall FUN_00884a20(void *this,undefined4 param_1,undefined1 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cea249;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053d690(this);
  *(undefined ***)this = &PTR_FUN_00d63910;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0x10000;
  *(undefined4 *)((int)this + 0xa8) = 0x10000;
  *(undefined4 *)((int)this + 0xb4) = 0x10000;
  *(undefined4 *)((int)this + 0xc0) = 0x10000;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0x10000;
  *(undefined4 *)((int)this + 0xd8) = 0x10000;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0xe4) = 0x10000;
  *(undefined4 *)((int)this + 0xf0) = 0x10000;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  iVar3 = FUN_00882410();
  *(int *)((int)this + 0x104) = iVar3;
  *(undefined1 *)(iVar3 + 0x15) = 1;
  *(int *)(*(int *)((int)this + 0x104) + 4) = *(int *)((int)this + 0x104);
  *(undefined4 *)*(undefined4 *)((int)this + 0x104) = *(undefined4 *)((int)this + 0x104);
  *(int *)(*(int *)((int)this + 0x104) + 8) = *(int *)((int)this + 0x104);
  *(undefined4 *)((int)this + 0x108) = 0;
  local_4._0_1_ = 1;
  iVar3 = FUN_00882490();
  *(int *)((int)this + 0x110) = iVar3;
  *(undefined1 *)(iVar3 + 0x11) = 1;
  *(int *)(*(int *)((int)this + 0x110) + 4) = *(int *)((int)this + 0x110);
  *(undefined4 *)*(undefined4 *)((int)this + 0x110) = *(undefined4 *)((int)this + 0x110);
  *(int *)(*(int *)((int)this + 0x110) + 8) = *(int *)((int)this + 0x110);
  *(undefined4 *)((int)this + 0x114) = 0;
  local_4._0_1_ = 2;
  iVar3 = FUN_00882510();
  *(int *)((int)this + 0x11c) = iVar3;
  *(undefined1 *)(iVar3 + 0x11) = 1;
  *(int *)(*(int *)((int)this + 0x11c) + 4) = *(int *)((int)this + 0x11c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x11c) = *(undefined4 *)((int)this + 0x11c);
  *(int *)(*(int *)((int)this + 0x11c) + 8) = *(int *)((int)this + 0x11c);
  *(undefined4 *)((int)this + 0x120) = 0;
  local_4._0_1_ = 3;
  uVar4 = FUN_008821b0();
  *(undefined4 *)((int)this + 0x128) = uVar4;
  *(undefined4 *)((int)this + 300) = 0;
  local_4._0_1_ = 4;
  iVar3 = FUN_00879cb0();
  *(int *)((int)this + 0x134) = iVar3;
  *(undefined1 *)(iVar3 + 0x3d) = 1;
  *(int *)(*(int *)((int)this + 0x134) + 4) = *(int *)((int)this + 0x134);
  *(undefined4 *)*(undefined4 *)((int)this + 0x134) = *(undefined4 *)((int)this + 0x134);
  *(int *)(*(int *)((int)this + 0x134) + 8) = *(int *)((int)this + 0x134);
  *(undefined4 *)((int)this + 0x138) = 0;
  local_4._0_1_ = 5;
  iVar3 = FUN_004220b0();
  *(int *)((int)this + 0x140) = iVar3;
  *(undefined1 *)(iVar3 + 0x31) = 1;
  *(int *)(*(int *)((int)this + 0x140) + 4) = *(int *)((int)this + 0x140);
  *(undefined4 *)*(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)this + 0x140);
  *(int *)(*(int *)((int)this + 0x140) + 8) = *(int *)((int)this + 0x140);
  *(undefined4 *)((int)this + 0x144) = 0;
  local_4._0_1_ = 6;
  FUN_0088efb0((void *)((int)this + 0x148),0xffffffff);
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  piVar2 = (int *)((int)this + 0x17c);
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(int **)((int)this + 0x188) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d2dc34;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 **)((int)this + 0x1a0) = (undefined4 *)((int)this + 0x194);
  *(undefined4 *)((int)this + 0x194) = &PTR_LAB_00d638f4;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  local_4._0_1_ = 0xb;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined1 *)((int)this + 0x1b8) = 1;
  FUN_008812e0((void *)((int)this + 0x1ac),10);
  local_4._0_1_ = 0xc;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined1 *)((int)this + 0x1c8) = 1;
  FUN_00881340((void *)((int)this + 0x1bc),10);
  local_4._0_1_ = 0xd;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined1 *)((int)this + 0x1d8) = 1;
  FUN_008812e0((void *)((int)this + 0x1cc),10);
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  local_4._0_1_ = 0xf;
  iVar3 = FUN_0048f380();
  *(int *)((int)this + 0x1f0) = iVar3;
  *(undefined1 *)(iVar3 + 0x2d) = 1;
  *(int *)(*(int *)((int)this + 0x1f0) + 4) = *(int *)((int)this + 0x1f0);
  *(undefined4 *)*(undefined4 *)((int)this + 0x1f0) = *(undefined4 *)((int)this + 0x1f0);
  *(int *)(*(int *)((int)this + 0x1f0) + 8) = *(int *)((int)this + 0x1f0);
  *(undefined4 *)((int)this + 500) = 0;
  local_4._0_1_ = 0x10;
  iVar3 = FUN_004220b0();
  *(int *)((int)this + 0x1fc) = iVar3;
  *(undefined1 *)(iVar3 + 0x31) = 1;
  *(int *)(*(int *)((int)this + 0x1fc) + 4) = *(int *)((int)this + 0x1fc);
  *(undefined4 *)*(undefined4 *)((int)this + 0x1fc) = *(undefined4 *)((int)this + 0x1fc);
  *(int *)(*(int *)((int)this + 0x1fc) + 8) = *(int *)((int)this + 0x1fc);
  *(undefined4 *)((int)this + 0x200) = 0;
  local_4._0_1_ = 0x11;
  uVar4 = FUN_00882270();
  *(undefined4 *)((int)this + 0x208) = uVar4;
  *(undefined4 *)((int)this + 0x20c) = 0;
  local_4._0_1_ = 0x12;
  uVar4 = FUN_00882290();
  *(undefined4 *)((int)this + 0x214) = uVar4;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined1 **)((int)this + 0x220) = (undefined1 *)((int)this + 0x22c);
  *(undefined1 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0x14;
  *(undefined2 **)((int)this + 0x24c) = (undefined2 *)((int)this + 600);
  *(undefined2 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 10;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  puVar5 = *(undefined4 **)((int)this + 0x170);
  local_4 = CONCAT31(local_4._1_3_,0x15);
  if (puVar5 != (undefined4 *)0x0) {
    piVar1 = puVar5 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(1);
    }
  }
  *(undefined4 *)((int)this + 0x170) = 0;
  puVar5 = *(undefined4 **)((int)this + 0x174);
  if (puVar5 != (undefined4 *)0x0) {
    piVar1 = puVar5 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(1);
    }
  }
  *(undefined4 *)((int)this + 0x174) = 0;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 400) = param_1;
  (**(code **)*piVar2)();
  puVar5 = operator_new(0x58);
  local_4 = CONCAT31(local_4._1_3_,0x16);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_0087fc00(puVar5);
  }
  *(undefined4 **)((int)this + 0x178) = puVar5;
  *(undefined1 *)((int)this + 0xfd) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0x10000;
  *(undefined4 *)((int)this + 0xa8) = 0x10000;
  *(undefined4 *)((int)this + 0xb4) = 0x10000;
  *(undefined4 *)((int)this + 0xc0) = 0x10000;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined1 *)((int)this + 0x7f) = param_2;
  *(undefined4 *)((int)this + 0x8c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x90) = 0x3f800000;
  *(undefined4 *)((int)this + 0x98) = 0x3f800000;
  *(undefined4 *)((int)this + 0x94) = 0x3f800000;
  *(undefined1 *)((int)this + 0x7e) = 0;
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x21d) = 0;
  *(undefined1 *)((int)this + 0x248) = 0;
  *(undefined1 *)((int)this + 0x21c) = 0;
  *(undefined1 *)((int)this + 0xfe) = 0;
  *(undefined1 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  *(undefined1 *)((int)this + 0x7d) = 1;
  *(undefined1 *)((int)this + 0x7c) = 1;
  *(undefined4 *)((int)this + 0x244) = 2;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00884ec0 @ 00884ec0 ////

undefined4 * __thiscall FUN_00884ec0(void *this,byte param_1)

{
  FUN_00884560(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00884f00 @ 00884f00 ////

void FUN_00884f00(void)

{
  return;
}


//// FUNCTION FUN_00884f90 @ 00884f90 ////

void __fastcall FUN_00884f90(int param_1)

{
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00884f99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))();
    return;
  }
  return;
}


//// FUNCTION FUN_00884fa0 @ 00884fa0 ////

uint __fastcall FUN_00884fa0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00884fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00884fc0 @ 00884fc0 ////

void __cdecl FUN_00884fc0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    if (*(int *)((int)DAT_010501b0 + 400) < *(int *)(param_1 + 0x2c)) {
      FUN_00888890((int)DAT_010501b0);
    }
    if (*(int *)(param_1 + 0x34) < 1) {
      if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))(param_1 + 4,param_1 + 0x1c);
        return;
      }
    }
    else if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_008892f0(DAT_010501b0,*(undefined4 *)(param_1 + 0x2c),*(int *)(param_1 + 0x34),
                   *(int *)(param_1 + 0x3c),(undefined4 *)(param_1 + 4),
                   (undefined4 *)(param_1 + 0x1c));
    }
  }
  return;
}


//// FUNCTION FUN_00885030 @ 00885030 ////

void __fastcall FUN_00885030(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00885080 @ 00885080 ////

void __fastcall FUN_00885080(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_00d63920;
  puVar2 = (undefined4 *)param_1[0xf];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0xf] = 0;
  return;
}


//// FUNCTION FUN_008850b0 @ 008850b0 ////

void __thiscall FUN_008850b0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 0x2c) = param_1;
  *(undefined4 *)((int)this + 0x30) = param_2;
  if (param_3 != 0) {
    *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
  }
  puVar2 = *(undefined4 **)((int)this + 0x3c);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(int *)((int)this + 0x3c) = param_3;
  iVar3 = *(int *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x50) & 4) != 0)) {
    *(undefined4 *)(iVar3 + 0x180) = *(undefined4 *)((int)this + 0x2c);
  }
  return;
}


//// FUNCTION FUN_00885110 @ 00885110 ////

undefined4 __cdecl FUN_00885110(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  undefined2 uVar14;
  int iVar10;
  undefined3 extraout_var;
  int *piVar11;
  void *pvVar12;
  int iVar13;
  int iVar15;
  uint uVar16;
  int *piVar17;
  ulonglong uVar18;
  float local_4c;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30 [3];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int aiStack_18 [6];
  
  uVar16 = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0;
  }
  uVar9 = FUN_00553fd0(0x73);
  pvVar12 = *(void **)(param_1 + 0x3c);
  uVar3 = *(uint *)((int)pvVar12 + 0x50);
  cVar7 = (char)uVar9;
  if ((int)uVar3 < 5) {
    local_3c = DAT_0104cd04;
    local_34 = DAT_0104cd0c;
    local_40 = DAT_0104cd00;
    fVar2 = *(float *)(DAT_010501a0 + 0x8c);
    local_38 = DAT_0104cd08;
    local_4c = *(float *)(DAT_010501a0 + 0x90);
    uVar14 = (undefined2)((uint)local_4c >> 0x10);
    uVar9 = CONCAT22(uVar14,(ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                            (ushort)(fVar2 == 0.0) << 0xe);
    if ((fVar2 == 0.0) ||
       (uVar9 = CONCAT22(uVar14,(ushort)(local_4c < 0.0) << 8 | (ushort)NAN(local_4c) << 10 |
                                (ushort)(local_4c == 0.0) << 0xe), local_4c == 0.0)) {
      fVar2 = (float)*(int *)(DAT_010501a0 + 0x6c) / DAT_0105c400;
      local_4c = (float)*(int *)(DAT_010501a0 + 0x68) / DAT_0105c404;
    }
    fVar2 = 1.0 / fVar2;
    fVar5 = fVar2 * DAT_0104cce0 * 20.0;
    local_4c = 1.0 / local_4c;
    fVar6 = local_4c * DAT_0104cce4 * 20.0;
    if (cVar7 != '\0') {
      local_40 = fVar2 * DAT_0104cd00 * 20.0;
      local_3c = local_4c * DAT_0104cd04 * 20.0;
      local_38 = fVar2 * DAT_0104cd08 * 20.0;
      local_34 = local_4c * DAT_0104cd0c * 20.0;
    }
    if ((*(int *)(DAT_010501a0 + 0x244) == 0) && ((uVar3 & 2) != 0)) {
      FUN_0086ddb0(&DAT_00e5e7e4,local_30,(int *)(param_1 + 4));
      uVar18 = FUN_00acd42c();
      local_30[0] = (int)uVar18;
      uVar18 = FUN_00acd42c();
      local_24 = (undefined4)uVar18;
      uVar18 = FUN_00acd42c();
      local_20 = (undefined4)uVar18;
      uVar18 = FUN_00acd42c();
      local_1c = (undefined4)uVar18;
      iVar10 = (**(code **)(**(int **)((int)pvVar12 + 0x160) + 0xc))(fVar5,fVar6,local_30);
      uVar9 = 0;
      if ((iVar10 != 0) && (uVar9 = *(uint *)(param_1 + 0x2c), uVar9 < DAT_00e5e284)) {
        DAT_00e5e284 = uVar9;
        DAT_01050150 = 0;
        DAT_01050154 = 0;
        return CONCAT31((int3)(uVar9 >> 8),1);
      }
    }
    iVar13 = DAT_01050150;
    iVar10 = *(int *)(param_1 + 0x3c);
    if ((*(byte *)(iVar10 + 0x50) & 4) != 0) {
      if (*(int *)(iVar10 + 0x15c) != 0) {
        DAT_01050150 = 0;
        DAT_01050158 = *(int *)(*(int *)(iVar10 + 0x15c) + 0x358);
        cVar8 = FUN_0089f4f0(*(int *)(iVar10 + 0x15c));
        uVar9 = CONCAT31(extraout_var,cVar8);
        if (cVar8 != '\0') {
LAB_00885558:
          return CONCAT31((int3)(uVar9 >> 8),1);
        }
      }
      iVar15 = 0;
      DAT_01050150 = iVar13;
      do {
        while( true ) {
          iVar13 = *(int *)(iVar10 + 0x160);
          if (*(int *)(iVar13 + 0x10) == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(int *)(iVar13 + 0x14) - *(int *)(iVar13 + 0x10) >> 2;
          }
          if ((int)uVar9 <= iVar15) goto LAB_008854a3;
          iVar1 = iVar15 * 4;
          if (**(char **)(*(int *)(iVar13 + 0x10) + iVar1) != '\0') break;
LAB_00885498:
          iVar15 = iVar15 + 1;
        }
        piVar11 = (int *)(*(int *)(*(int *)(iVar13 + 0x10) + iVar1) + 0x10);
        piVar17 = local_30;
        pvVar12 = (void *)FUN_0086ddb0(&DAT_00e5e7e4,aiStack_18,(int *)(param_1 + 4));
        FUN_0086ddb0(pvVar12,piVar17,piVar11);
        if (DAT_010501a0 != DAT_01050158) {
          uVar18 = FUN_00acd42c();
          local_30[0] = (int)uVar18;
          uVar18 = FUN_00acd42c();
          local_24 = (undefined4)uVar18;
        }
        uVar18 = FUN_00acd42c();
        local_20 = (undefined4)uVar18;
        uVar18 = FUN_00acd42c();
        local_1c = (undefined4)uVar18;
        if (cVar7 == '\0') {
          uVar9 = (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(iVar10 + 0x160) + 0x10) + iVar1
                                                  ) + 8) + 0xc))(fVar5,fVar6,local_30);
          uVar16 = uVar16 | uVar9;
          if (uVar16 == 0) goto LAB_00885498;
          goto LAB_008854a3;
        }
        iVar13 = (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(iVar10 + 0x160) + 0x10) + iVar1)
                                        + 8) + 0xc))(local_40,local_3c,local_30);
        if ((iVar13 != 0) &&
           (uVar9 = (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(iVar10 + 0x160) + 0x10) +
                                                    iVar1) + 8) + 0xc))(local_38,local_34,local_30),
           uVar9 != 0)) goto LAB_0088549e;
        uVar16 = 0;
        iVar15 = iVar15 + 1;
      } while( true );
    }
  }
  else if ((uVar3 & 0x10) != 0) {
    if (*(int *)((int)pvVar12 + 0x204) == 0) {
      uVar16 = FUN_0088a3f0(pvVar12,(int *)(param_1 + 4));
      return uVar16;
    }
    if (*(int *)((int)pvVar12 + 0x250) == 0) {
      uVar9 = (*(code *)**(undefined4 **)(*(int *)((int)pvVar12 + 0x204) + 0x50))();
      if ((char)uVar9 != '\0') goto LAB_0088550a;
    }
    else {
      uVar9 = FUN_00889bb0((int)pvVar12);
      if (((char)uVar9 != '\0') &&
         (uVar9 = FUN_008828d0(*(int *)((int)pvVar12 + 0x250)), (char)uVar9 != '\0'))
      goto LAB_00885558;
    }
  }
  goto LAB_0088556d;
LAB_0088549e:
  uVar16 = 1;
LAB_008854a3:
  *(undefined1 *)(iVar10 + 0x178) = 0;
  if ((uVar16 != 0) && (uVar9 = *(uint *)(iVar10 + 0x180), uVar9 < DAT_00e5e284)) {
    piVar17 = (int *)(DAT_010501a0 + 0x174);
    DAT_00e5e284 = uVar9;
    DAT_01050150 = iVar10;
    *(int *)(iVar10 + 0x48) = *(int *)(iVar10 + 0x48) + 1;
    puVar4 = (undefined4 *)*piVar17;
    if (puVar4 != (undefined4 *)0x0) {
      piVar11 = puVar4 + 0x12;
      *piVar11 = *piVar11 + -1;
      if (*piVar11 == 0) {
        uVar9 = (**(code **)*puVar4)(1);
      }
    }
    uVar9 = CONCAT31((int3)(uVar9 >> 8),cVar7);
    *piVar17 = iVar10;
    *(undefined1 *)(iVar10 + 0x178) = 1;
    if (cVar7 != '\0') {
      DAT_01050154 = iVar10;
    }
LAB_0088550a:
    return CONCAT31((int3)(uVar9 >> 8),1);
  }
LAB_0088556d:
  return uVar9 & 0xffffff00;
}


//// FUNCTION FUN_00885580 @ 00885580 ////

undefined4 * __thiscall FUN_00885580(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea26b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_00d63920;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 4) = 0x10000;
  *(undefined4 *)((int)this + 0x10) = 0x10000;
  *(undefined2 *)((int)this + 0x28) = 0x100;
  *(undefined2 *)((int)this + 0x24) = 0x100;
  *(undefined2 *)((int)this + 0x20) = 0x100;
  *(undefined2 *)((int)this + 0x1c) = 0x100;
  *(undefined2 *)((int)this + 0x2a) = 0;
  *(undefined2 *)((int)this + 0x26) = 0;
  *(undefined2 *)((int)this + 0x22) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x30) = param_2;
  puVar2 = *(undefined4 **)((int)this + 0x3c);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 4) = 0x10000;
  *(undefined4 *)((int)this + 0x10) = 0x10000;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x28) = 0x100;
  *(undefined2 *)((int)this + 0x24) = 0x100;
  *(undefined2 *)((int)this + 0x20) = 0x100;
  *(undefined2 *)((int)this + 0x1c) = 0x100;
  *(undefined2 *)((int)this + 0x2a) = 0;
  *(undefined2 *)((int)this + 0x26) = 0;
  *(undefined2 *)((int)this + 0x22) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x2c) = param_1;
  *(undefined4 *)((int)this + 0x30) = param_2;
  puVar2 = *(undefined4 **)((int)this + 0x3c);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  iVar3 = *(int *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x50) & 4) != 0)) {
    *(undefined4 *)(iVar3 + 0x180) = *(undefined4 *)((int)this + 0x2c);
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00885690 @ 00885690 ////

undefined4 * __thiscall FUN_00885690(void *this,byte param_1)

{
  FUN_00885080(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00885730 @ 00885730 ////

void __thiscall FUN_00885730(void *this,undefined4 *param_1,char param_2,char param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 0x10000;
  local_c = 0x10000;
  uVar11 = 0;
  local_10 = 0;
  if (param_2 != '\0') {
    iVar9 = *(int *)((int)this + 0x28);
    iVar10 = *(int *)((int)this + 0x24);
    *(int *)((int)this + 0x28) = iVar9 + 4;
    local_18 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar10 + 3 + iVar9),
                                          *(undefined1 *)(iVar10 + 2 + iVar9)),
                                 *(undefined1 *)(iVar10 + 1 + iVar9)),
                        *(undefined1 *)(iVar10 + iVar9));
    *(int *)((int)this + 0x28) = iVar9 + 8;
    local_c = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar9 + 7 + iVar10),
                                         *(undefined1 *)(iVar9 + 6 + iVar10)),
                                *(undefined1 *)(iVar9 + 5 + iVar10)),
                       *(undefined1 *)(iVar9 + 4 + iVar10));
  }
  if (param_3 != '\0') {
    iVar9 = *(int *)((int)this + 0x28);
    iVar10 = *(int *)((int)this + 0x24);
    *(int *)((int)this + 0x28) = iVar9 + 4;
    uVar11 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar10 + 3 + iVar9),
                                        *(undefined1 *)(iVar10 + 2 + iVar9)),
                               *(undefined1 *)(iVar10 + 1 + iVar9)),*(undefined1 *)(iVar10 + iVar9))
    ;
    *(int *)((int)this + 0x28) = iVar9 + 8;
    local_10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar9 + 7 + iVar10),
                                          *(undefined1 *)(iVar9 + 6 + iVar10)),
                                 *(undefined1 *)(iVar9 + 5 + iVar10)),
                        *(undefined1 *)(iVar9 + 4 + iVar10));
  }
  iVar9 = *(int *)((int)this + 0x28);
  iVar10 = *(int *)((int)this + 0x24);
  *(int *)((int)this + 0x28) = iVar9 + 4;
  uVar1 = *(undefined1 *)(iVar10 + 1 + iVar9);
  uVar2 = *(undefined1 *)(iVar10 + 3 + iVar9);
  uVar3 = *(undefined1 *)(iVar10 + 2 + iVar9);
  uVar4 = *(undefined1 *)(iVar10 + iVar9);
  *(int *)((int)this + 0x28) = iVar9 + 8;
  uVar5 = *(undefined1 *)(iVar9 + 5 + iVar10);
  uVar6 = *(undefined1 *)(iVar9 + 7 + iVar10);
  uVar7 = *(undefined1 *)(iVar9 + 6 + iVar10);
  uVar8 = *(undefined1 *)(iVar9 + 4 + iVar10);
  *param_1 = local_18;
  param_1[1] = uVar11;
  param_1[2] = local_10;
  param_1[3] = local_c;
  param_1[4] = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar1),uVar4);
  param_1[5] = CONCAT31(CONCAT21(CONCAT11(uVar6,uVar7),uVar5),uVar8);
  return;
}


//// FUNCTION FUN_008859a0 @ 008859a0 ////

void __cdecl FUN_008859a0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00885a00 @ 00885a00 ////

void __fastcall FUN_00885a00(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x24));
}


//// FUNCTION FUN_00885aa0 @ 00885aa0 ////

undefined4 FUN_00885aa0(char *param_1,undefined4 *param_2)

{
  FILE *pFVar1;
  int iVar2;
  undefined4 local_4;
  
  pFVar1 = FUN_00a10060(param_1,"rb");
  if (pFVar1 != (FILE *)0x0) {
    local_4 = 0;
    param_1 = (char *)0x0;
    FUN_00a100f0(&local_4,2,1,pFVar1);
    FUN_00a100f0(&param_1,4,1,pFVar1);
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_2);
  }
  iVar2 = FUN_00a100d0((FILE *)0x0);
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_00885b80 @ 00885b80 ////

void __thiscall FUN_00885b80(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar11 = *(int *)((int)this + 0x24);
  iVar12 = *(int *)((int)this + 0x28);
  *(int *)((int)this + 0x28) = iVar12 + 4;
  uVar1 = *(undefined1 *)(iVar11 + 1 + iVar12);
  uVar2 = *(undefined1 *)(iVar11 + iVar12);
  *(int *)((int)this + 0x28) = iVar12 + 8;
  uVar3 = *(undefined1 *)(iVar12 + 5 + iVar11);
  uVar4 = *(undefined1 *)(iVar12 + 4 + iVar11);
  *(int *)((int)this + 0x28) = iVar12 + 0xc;
  uVar5 = *(undefined1 *)(iVar12 + 9 + iVar11);
  uVar6 = *(undefined1 *)(iVar12 + 8 + iVar11);
  *(int *)((int)this + 0x28) = iVar12 + 0x10;
  uVar7 = *(undefined1 *)(iVar12 + 0xd + iVar11);
  uVar8 = *(undefined1 *)(iVar12 + 0xc + iVar11);
  *(int *)((int)this + 0x28) = iVar12 + 0x14;
  uVar9 = *(undefined1 *)(iVar12 + 0x11 + iVar11);
  uVar10 = *(undefined1 *)(iVar12 + 0x10 + iVar11);
  *(int *)((int)this + 0x28) = iVar12 + 0x18;
  local_c = CONCAT22(CONCAT11(uVar1,uVar2),CONCAT11(uVar9,uVar10));
  uVar1 = *(undefined1 *)(iVar12 + 0x15 + iVar11);
  uVar2 = *(undefined1 *)(iVar12 + 0x14 + iVar11);
  *(int *)((int)this + 0x28) = iVar12 + 0x1c;
  local_8 = CONCAT22(CONCAT11(uVar3,uVar4),CONCAT11(uVar1,uVar2));
  local_4 = CONCAT22(CONCAT11(uVar5,uVar6),
                     CONCAT11(*(undefined1 *)(iVar12 + 0x19 + iVar11),
                              *(undefined1 *)(iVar12 + 0x18 + iVar11)));
  *(int *)((int)this + 0x28) = iVar12 + 0x20;
  local_10 = CONCAT22(CONCAT11(uVar7,uVar8),
                      CONCAT11(*(undefined1 *)(iVar12 + 0x1d + iVar11),
                               *(undefined1 *)(iVar12 + 0x1c + iVar11)));
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}


//// FUNCTION FUN_00885d10 @ 00885d10 ////

void __fastcall FUN_00885d10(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x11) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x11) == '\0') {
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
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x11) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x11) == '\0');
    if (*(char *)((int)piVar4 + 0x11) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00885e60 @ 00885e60 ////

void FUN_00885e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    *(undefined1 *)(puVar1 + 4) = param_5;
    *(undefined1 *)((int)puVar1 + 0x11) = 0;
  }
  return;
}


//// FUNCTION FUN_00885ea0 @ 00885ea0 ////

int * __fastcall FUN_00885ea0(int *param_1)

{
  FUN_00885d10(param_1);
  return param_1;
}


//// FUNCTION FUN_00885ed0 @ 00885ed0 ////

int __thiscall FUN_00885ed0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  piVar1 = (int *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  if (piVar1 != (int *)(param_1 + 0x3c)) {
    iVar3 = *(int *)(param_1 + 0x3c);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
    }
    puVar4 = (undefined4 *)*piVar1;
    if (puVar4 != (undefined4 *)0x0) {
      piVar2 = puVar4 + 0x12;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
    *piVar1 = iVar3;
  }
  return (int)this;
}


//// FUNCTION FUN_00885f70 @ 00885f70 ////

void * __cdecl FUN_00885f70(int param_1,int param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00885ed0(param_3,param_1);
    param_1 = param_1 + 0x40;
    param_3 = (void *)((int)param_3 + 0x40);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00885fb0 @ 00885fb0 ////

void __thiscall FUN_00885fb0(void *this,void *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
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
  
  iVar5 = *(int *)((int)this + 0x28);
  iVar6 = *(int *)((int)this + 0x24);
  *(int *)((int)this + 0x28) = iVar5 + 2;
  uVar1 = *(undefined1 *)(iVar6 + 1 + iVar5);
  uVar2 = *(undefined1 *)(iVar6 + iVar5);
  *(int *)((int)this + 0x28) = iVar5 + 4;
  uVar3 = *(undefined1 *)(iVar5 + 3 + iVar6);
  uVar4 = *(undefined1 *)(iVar5 + 2 + iVar6);
  *(int *)((int)this + 0x28) = iVar5 + 10;
  FUN_00885730(this,&local_18,'\x01','\x01');
  FUN_00885b80(this,&local_28);
  FUN_0088c010(param_1,&param_2,(undefined ***)(param_2 & 0xffff),*(int *)this,
               (uint)CONCAT11(uVar3,uVar4),(uint)CONCAT11(uVar1,uVar2));
  *(undefined4 *)(param_2 + 4) = local_18;
  *(undefined4 *)(param_2 + 8) = local_14;
  *(undefined4 *)(param_2 + 0xc) = local_10;
  *(undefined4 *)(param_2 + 0x10) = local_c;
  *(undefined4 *)(param_2 + 0x14) = local_8;
  *(undefined4 *)(param_2 + 0x18) = local_4;
  *(undefined4 *)(param_2 + 0x1c) = local_28;
  *(undefined4 *)(param_2 + 0x20) = local_24;
  *(undefined4 *)(param_2 + 0x24) = local_20;
  *(undefined4 *)(param_2 + 0x28) = local_1c;
  FUN_00884f00();
  return;
}


//// FUNCTION FUN_008860c0 @ 008860c0 ////

undefined1 * FUN_008860c0(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  return param_1 + param_2;
}


//// FUNCTION FUN_008860f0 @ 008860f0 ////

int * __fastcall FUN_008860f0(int *param_1)

{
  FUN_00885d10(param_1);
  return param_1;
}


//// FUNCTION FUN_00886120 @ 00886120 ////

void __thiscall FUN_00886120(void *this,undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00885f70((int)param_2 + 0x40,*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -0x10; puVar2 != puVar1; puVar2 = puVar2 + 0x10) {
    (**(code **)*puVar2)(0);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x40;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_008861a0 @ 008861a0 ////

void __thiscall
FUN_008861a0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cea288;
  local_c = ExceptionList;
  if (0x3ffffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = (int *)FUN_00885e60(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
  cVar1 = *(char *)(piVar3[1] + 0x10);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x10) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[4] == '\0') {
LAB_0088629b:
        *(undefined1 *)(*piVar4 + 0x10) = 1;
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x10) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_008811a0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x10) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
        FUN_008802c0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[4] == '\0') goto LAB_0088629b;
      if (piVar6 == (int *)*piVar2) {
        FUN_008802c0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x10) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
      FUN_008811a0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x10);
  } while( true );
}


//// FUNCTION FUN_00886350 @ 00886350 ////

void __thiscall FUN_00886350(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char local_4;
  
  puVar2 = param_2;
  puVar4 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar3 = *(char *)((int)puVar4 + 0x11);
  local_4 = '\x01';
  puVar1 = *(undefined4 **)((int)this + 4);
  while (cVar3 == '\0') {
    local_4 = (**(code **)(*(int *)*puVar2 + 0x10))(puVar4[3]);
    if (local_4 == '\0') {
      puVar5 = (undefined4 *)puVar4[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar4;
    }
    puVar1 = puVar4;
    puVar4 = puVar5;
    cVar3 = *(char *)((int)puVar5 + 0x11);
  }
  param_2 = puVar1;
  if (local_4 != '\0') {
    if (puVar1 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = '\x01';
      goto LAB_008863ad;
    }
    FUN_00885d10((int *)&param_2);
  }
  puVar4 = param_2;
  cVar3 = (**(code **)(*(int *)param_2[3] + 0x10))(*puVar2);
  if (cVar3 == '\0') {
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_008863ad:
  puVar4 = (undefined4 *)FUN_008861a0(this,&param_2,local_4,puVar1,puVar2);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00886410 @ 00886410 ////

void __thiscall FUN_00886410(void *this,undefined1 *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 *_Dst;
  uint extraout_ECX;
  int iVar4;
  size_t sVar5;
  uint local_4;
  
  iVar1 = *(int *)((int)this + 4);
  param_3 = (undefined1 *)CONCAT31(param_3._1_3_,*param_3);
  if (iVar1 == 0) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)((int)this + 0xc) - iVar1;
  }
  if (param_2 != 0) {
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 8) - iVar1;
    }
    if (-iVar4 - 1U < param_2) {
      iVar1 = FUN_008728e0();
      local_4 = extraout_ECX;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 8) - iVar1;
    }
    if (local_4 < iVar4 + param_2) {
      if (-(local_4 >> 1) - 1 < local_4) {
        local_4 = 0;
      }
      else {
        local_4 = local_4 + (local_4 >> 1);
      }
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - iVar1;
      }
      if (local_4 < iVar4 + param_2) {
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)((int)this + 8) - iVar1;
        }
        local_4 = iVar1 + param_2;
      }
      pvVar2 = operator_new(local_4);
      sVar5 = (int)param_1 - (int)*(void **)((int)this + 4);
      pvVar3 = _memmove(pvVar2,*(void **)((int)this + 4),sVar5);
      _Dst = FUN_008860c0((undefined1 *)((int)pvVar3 + sVar5),param_2,(undefined1 *)&param_3);
      _memmove(_Dst,param_1,*(int *)((int)this + 8) - (int)param_1);
      pvVar3 = *(void **)((int)this + 4);
      if (pvVar3 == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - (int)pvVar3;
      }
      if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar3);
      }
      *(uint *)((int)this + 0xc) = (int)pvVar2 + local_4;
      *(uint *)((int)this + 8) = (int)pvVar2 + param_2 + iVar1;
      *(void **)((int)this + 4) = pvVar2;
      return;
    }
    pvVar3 = *(void **)((int)this + 8);
    if ((uint)((int)pvVar3 - (int)param_1) < param_2) {
      _memmove(param_1 + param_2,param_1,(int)pvVar3 - (int)param_1);
      FUN_008860c0(*(undefined1 **)((int)this + 8),
                   (int)(param_1 + (param_2 - (int)*(undefined1 **)((int)this + 8))),
                   (undefined1 *)&param_3);
      iVar1 = *(int *)((int)this + 8) + param_2;
      *(int *)((int)this + 8) = iVar1;
      FUN_008859a0(param_1,(undefined1 *)(iVar1 - param_2),(undefined1 *)&param_3);
      return;
    }
    sVar5 = (int)pvVar3 - (int)((int)pvVar3 - param_2);
    pvVar2 = _memmove(pvVar3,(void *)((int)pvVar3 - param_2),sVar5);
    *(size_t *)((int)this + 8) = (int)pvVar2 + sVar5;
    sVar5 = (int)pvVar3 + (-param_2 - (int)param_1);
    _memmove((void *)((int)pvVar3 - sVar5),param_1,sVar5);
    FUN_008859a0(param_1,param_1 + param_2,(undefined1 *)&param_3);
  }
  return;
}


//// FUNCTION FUN_008865e0 @ 008865e0 ////

undefined4 __thiscall FUN_008865e0(void *this,undefined4 *param_1)

{
  void *this_00;
  int *piVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cea2ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x28) = 6;
  this_00 = operator_new(0x28);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = FUN_0088efb0(this_00,(uint)param_1 & 0xffff);
  }
  local_4 = 0xffffffff;
  piVar1 = (int *)FUN_00886350((void *)(*(int *)this + 0x10c),local_14,&param_1);
  ExceptionList = local_c;
  return *(undefined4 *)(*piVar1 + 0xc);
}


//// FUNCTION FUN_00886680 @ 00886680 ////

void __thiscall FUN_00886680(void *this,int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (*(int *)((int)this + 8) == iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 - iVar1;
  }
  FUN_00886410(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1;
  return;
}


//// FUNCTION FUN_008866d0 @ 008866d0 ////

void __cdecl FUN_008866d0(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x10)) {
    FUN_00872ce0(param_1,param_3);
  }
  return;
}


//// FUNCTION FUN_00886700 @ 00886700 ////

void __thiscall FUN_00886700(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1) < (uint)(*(int *)((int)this + 0xc) - iVar1))) {
    puVar2 = *(undefined1 **)((int)this + 8);
    *puVar2 = *param_1;
    *(undefined1 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_00886410(this,*(undefined1 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00886750 @ 00886750 ////

void __cdecl FUN_00886750(void *param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cea2d1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_00872bc0(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x10);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008867e0 @ 008867e0 ////

void __thiscall FUN_008867e0(void *this,void *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar3 = (undefined1 *)(*(int *)((int)this + 0x24) + *(int *)((int)this + 0x28));
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
    iVar1 = *(int *)((int)param_1 + 4);
    if ((iVar1 == 0) ||
       ((uint)(*(int *)((int)param_1 + 0xc) - iVar1) <= (uint)(*(int *)((int)param_1 + 8) - iVar1)))
    {
      FUN_00886410(param_1,*(undefined1 **)((int)param_1 + 8),1,puVar3);
    }
    else {
      puVar2 = *(undefined1 **)((int)param_1 + 8);
      *puVar2 = *puVar3;
      *(undefined1 **)((int)param_1 + 8) = puVar2 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00886880 @ 00886880 ////

void * FUN_00886880(void *param_1,int param_2,int param_3)

{
  FUN_00886750(param_1,param_2,param_3);
  return (void *)(param_2 * 0x10 + (int)param_1);
}


//// FUNCTION FUN_008868b0 @ 008868b0 ////

void __thiscall FUN_008868b0(void *this,void *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_2c [4];
  void *local_28;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cea2e8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_00872bc0(local_2c,param_3);
  iVar3 = *(int *)((int)this + 4);
  iVar6 = 0;
  local_8 = 0;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - iVar3 >> 4;
  }
  uVar7 = CONCAT44(iVar3,iVar1);
  if (param_2 != 0) {
    if (iVar3 != 0) {
      iVar6 = *(int *)((int)this + 8) - iVar3 >> 4;
    }
    if (0xfffffffU - iVar6 < param_2) {
      uVar7 = FUN_008727d0();
    }
    iVar3 = (int)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)uVar7;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar3 >> 4;
    }
    if (uVar2 < iVar6 + param_2) {
      if (0xfffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - iVar3 >> 4;
      }
      if (uVar2 < iVar6 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)this + 8) - iVar3 >> 4;
        }
        uVar2 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar2 * 0x10);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar4;
      pvVar5 = FUN_00873150(*(int *)((int)this + 4),(int)param_1,pvVar4);
      FUN_00886750(pvVar5,param_2,(int)local_2c);
      FUN_00873150((int)param_1,*(int *)((int)this + 8),(void *)((int)pvVar5 + param_2 * 0x10));
      iVar3 = *(int *)((int)this + 4);
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - iVar3 >> 4;
      }
      if (iVar3 != 0) {
        FUN_00872b30(iVar3,*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar2 * 0x10 + (int)pvVar4);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar6) * 0x10 + (int)pvVar4);
      *(void **)((int)this + 4) = pvVar4;
    }
    else {
      local_1c = *(void **)((int)this + 8);
      if ((uint)((int)local_1c - (int)param_1 >> 4) < param_2) {
        FUN_00873150((int)param_1,(int)local_1c,(void *)(param_2 * 0x10 + (int)param_1));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00886880(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1 >> 4),(int)local_2c);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x10;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_008866d0(param_1,(void *)(iVar3 + param_2 * -0x10),local_2c);
      }
      else {
        pvVar5 = (void *)((int)local_1c + param_2 * -0x10);
        pvVar4 = FUN_00873150((int)pvVar5,(int)local_1c,local_1c);
        *(void **)((int)this + 8) = pvVar4;
        FUN_00872f20(param_1,pvVar5,local_1c);
        FUN_008866d0(param_1,(void *)(param_2 * 0x10 + (int)param_1),local_2c);
      }
    }
  }
  if (local_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00886ba0 @ 00886ba0 ////

void __thiscall FUN_00886ba0(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 4) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 4))
     ) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_00886750(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x10;
    return;
  }
  FUN_008868b0(this,*(void **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00886c10 @ 00886c10 ////

/* WARNING: Removing unreachable block (ram,0x00886e18) */
/* WARNING: Removing unreachable block (ram,0x00886e1c) */

void __thiscall FUN_00886c10(void *this,void *param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *_Memory;
  int iVar4;
  undefined1 local_21;
  int local_20;
  undefined1 local_1c [4];
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea308;
  local_c = ExceptionList;
  _Memory = (void *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  do {
    iVar4 = *(int *)((int)this + 0x28);
    *(int *)((int)this + 0x28) = iVar4 + 2;
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    _Memory = (void *)0x0;
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
    switch(*(undefined2 *)(*(int *)((int)this + 0x24) + iVar4)) {
    case 0:
    case 3:
      ExceptionList = local_c;
      return;
    case 1:
      FUN_00885fb0(this,param_1,param_2);
      goto switchD_00886c74_caseD_a;
    case 2:
      iVar4 = *(int *)((int)this + 0x28);
      *(int *)((int)this + 0x28) = iVar4 + 2;
      iVar2 = (param_2 & 0xffff) * 0x20;
      pvVar3 = (void *)(iVar2 + *(int *)((int)param_1 + 0x10));
      for (pvVar1 = *(void **)((int)pvVar3 + 4);
          pvVar1 != *(void **)(iVar2 + 8 + *(int *)((int)param_1 + 0x10));
          pvVar1 = (void *)((int)pvVar1 + 0x40)) {
        if (*(uint *)((int)pvVar1 + 0x2c) == (uint)*(ushort *)(*(int *)((int)this + 0x24) + iVar4))
        {
          FUN_00886120(pvVar3,&local_20,pvVar1);
          break;
        }
      }
      goto switchD_00886c74_caseD_a;
    case 4:
      local_21 = 6;
      FUN_00886410(local_1c,(undefined1 *)0x0,1,&local_21);
      break;
    case 5:
      local_21 = 7;
      goto LAB_00886d2c;
    case 6:
      local_21 = 4;
      FUN_00886410(local_1c,(undefined1 *)0x0,1,&local_21);
      break;
    case 7:
      local_21 = 5;
LAB_00886d2c:
      FUN_00886410(local_1c,(undefined1 *)0x0,1,&local_21);
      break;
    case 8:
      local_21 = 0x81;
      FUN_00886410(local_1c,(undefined1 *)0x0,1,&local_21);
      iVar4 = 2;
      goto LAB_00886d85;
    case 9:
      local_21 = 0x8c;
      goto LAB_00886d70;
    default:
      goto switchD_00886c74_caseD_a;
    case 0xb:
      local_21 = 0x83;
      goto LAB_00886d70;
    case 0xd:
      local_21 = 0x8b;
LAB_00886d70:
      FUN_00886410(local_1c,(undefined1 *)0x0,1,&local_21);
      iVar4 = 4;
LAB_00886d85:
      FUN_008867e0(this,local_1c,iVar4);
    }
    _Memory = local_18;
    if ((local_18 != (void *)0x0) && (local_20 = local_14 - (int)local_18, local_20 != 0)) {
      pvVar1 = (void *)((param_2 & 0xffff) * 0x20 + 0x10 + *(int *)((int)param_1 + 0x10));
      iVar4 = *(int *)((int)pvVar1 + 4);
      if ((iVar4 == 0) ||
         ((uint)(*(int *)((int)pvVar1 + 0xc) - iVar4 >> 4) <=
          (uint)(*(int *)((int)pvVar1 + 8) - iVar4 >> 4))) {
        FUN_008868b0(pvVar1,*(void **)((int)pvVar1 + 8),1,(int)local_1c);
      }
      else {
        pvVar3 = *(void **)((int)pvVar1 + 8);
        FUN_00886750(pvVar3,1,(int)local_1c);
        *(int *)((int)pvVar1 + 8) = (int)pvVar3 + 0x10;
      }
    }
switchD_00886c74_caseD_a:
  } while( true );
}


//// FUNCTION FUN_00886e80 @ 00886e80 ////

void __thiscall FUN_00886e80(void *this,undefined4 *param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *local_34;
  void *local_30;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cea333;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x20;
  ExceptionList = &pvStack_c;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"data\\ui\\MTestButton.SER",0x17);
  local_28 = 0x17;
  local_2c[0x17] = '\0';
  local_4 = 0;
  local_34 = (undefined4 *)0x0;
  FUN_00885aa0(local_2c,&local_34);
  local_30 = operator_new(0x28);
  local_4._0_1_ = 1;
  if (local_30 == (void *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = FUN_0088efb0(local_30,(uint)param_1 & 0xffff);
  }
  iVar1 = *(int *)((int)this + 0x28);
  *(int *)((int)this + 0x28) = iVar1 + 2;
  local_4 = (uint)local_4._1_3_ << 8;
  uVar3 = *(ushort *)(*(int *)((int)this + 0x24) + iVar1);
  uVar7 = (uint)uVar3;
  FUN_00890280(param_1,uVar7);
  puVar4 = operator_new(uVar7 * 4);
  puVar6 = puVar4;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)((int)this + 0x28);
      *(int *)((int)this + 0x28) = iVar1 + 4;
      uVar7 = uVar7 - 1;
      *puVar6 = *(undefined4 *)(*(int *)((int)this + 0x24) + iVar1);
      puVar6 = puVar6 + 1;
    } while (uVar7 != 0);
  }
  iVar1 = *(int *)((int)this + 0x28);
  iVar5 = iVar1 + 2;
  *(int *)((int)this + 0x28) = iVar5;
  uVar2 = *(ushort *)(*(int *)((int)this + 0x24) + iVar1);
  uVar7 = (uint)uVar2;
  if (uVar2 != 0) {
    do {
      iVar5 = iVar5 + 6;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    *(int *)((int)this + 0x28) = iVar5;
  }
  uVar7 = 0;
  local_34 = puVar4;
  if (uVar3 != 0) {
    do {
      *(undefined4 *)((int)this + 0x28) = *puVar4;
      FUN_00886c10(this,param_1,uVar7);
      uVar7 = uVar7 + 1;
      puVar4 = puVar4 + 1;
    } while ((ushort)uVar7 < uVar3);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_34);
}


//// FUNCTION FUN_008870a0 @ 008870a0 ////

void __fastcall FUN_008870a0(void *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 local_8;
  
  iVar2 = *(int *)((int)param_1 + 0x34);
  if (iVar2 != 0) {
    *(int *)((int)param_1 + 0x24) = iVar2;
    *(undefined4 *)((int)param_1 + 0x28) = 0xc;
    uVar6 = *(uint *)(iVar2 + 8);
    uVar7 = uVar6 >> 3;
    *(uint *)((int)param_1 + 0x40) = uVar7;
    pvVar8 = operator_new(uVar7 * 8);
    *(void **)((int)param_1 + 0x3c) = pvVar8;
    uVar7 = *(uint *)((int)param_1 + 0x28);
    while (uVar7 < uVar6) {
      iVar3 = *(int *)((int)param_1 + 0x28);
      iVar4 = *(int *)((int)param_1 + 0x24);
      iVar2 = iVar3 + 2;
      *(int *)((int)param_1 + 0x28) = iVar2;
      uVar5 = CONCAT11(*(undefined1 *)(iVar4 + 1 + iVar3),*(undefined1 *)(iVar4 + iVar3));
      *(int *)((int)param_1 + 0x28) = iVar3 + 4;
      iVar3 = *(int *)((int)param_1 + 0x3c);
      local_8 = CONCAT22(CONCAT11(*(undefined1 *)(iVar4 + 1 + iVar2),*(undefined1 *)(iVar4 + iVar2))
                         ,uVar5);
      *(undefined4 *)(iVar3 + (uint)uVar5 * 8) = local_8;
      *(undefined4 *)(iVar3 + 4 + (uint)uVar5 * 8) = 0;
      uVar7 = *(uint *)((int)param_1 + 0x28);
    }
    uVar7 = 0;
    if (*(int *)((int)param_1 + 0x40) != 0) {
      do {
        puVar1 = (ushort *)(*(int *)((int)param_1 + 0x3c) + uVar7 * 8);
        if (*(int *)(*(int *)((int)param_1 + 0x3c) + 4 + uVar7 * 8) == 0) {
          if (puVar1[1] == 0) {
            FUN_00886e80(param_1,(undefined4 *)(uint)*puVar1);
          }
          *(undefined4 *)(*(int *)((int)param_1 + 0x3c) + 4 + uVar7 * 8) = 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)((int)param_1 + 0x40));
    }
  }
  return;
}


//// FUNCTION FUN_00887190 @ 00887190 ////

undefined1 FUN_00887190(void)

{
  return 1;
}


//// FUNCTION FUN_008872c0 @ 008872c0 ////

void __cdecl FUN_008872c0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x31);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x31);
  }
  return;
}


//// FUNCTION FUN_008872e0 @ 008872e0 ////

void __cdecl FUN_008872e0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x31);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x31);
  }
  return;
}


//// FUNCTION FUN_00887320 @ 00887320 ////

void __thiscall FUN_00887320(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x31) == '\0') {
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


//// FUNCTION FUN_00887410 @ 00887410 ////

void __fastcall FUN_00887410(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x31) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x31) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x31);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x31);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x31);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x31);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00887500 @ 00887500 ////

void __thiscall FUN_00887500(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x31) == '\0') {
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


//// FUNCTION FUN_008875a0 @ 008875a0 ////

int * __fastcall FUN_008875a0(int *param_1)

{
  FUN_00887410(param_1);
  return param_1;
}


//// FUNCTION FUN_00887630 @ 00887630 ////

int * __fastcall FUN_00887630(int *param_1)

{
  FUN_00887410(param_1);
  return param_1;
}


//// FUNCTION FUN_00887640 @ 00887640 ////

void FUN_00887640(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xc) = 1;
  *(undefined1 *)((int)puVar1 + 0x31) = 0;
  return;
}


//// FUNCTION FUN_008876b0 @ 008876b0 ////

void __fastcall FUN_008876b0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_008876e0 @ 008876e0 ////

void __fastcall FUN_008876e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00887640();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00887720 @ 00887720 ////

void * __thiscall FUN_00887720(void *this,byte param_1)

{
  FUN_008876b0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00887740 @ 00887740 ////

int __fastcall FUN_00887740(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00887640();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00887790 @ 00887790 ////

void FUN_00887790(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00887790(*(void **)((int)param_1 + 8));
    FUN_008876b0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008877d0 @ 008877d0 ////

void __fastcall FUN_008877d0(int param_1)

{
  FUN_00887790(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00887800 @ 00887800 ////

void __thiscall FUN_00887800(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cea368;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x31) != '\0') {
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
  FUN_00887410((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x31) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x31) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x31) == '\0') {
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
      iVar1 = param_2[0xc];
      *(char *)(param_2 + 0xc) = (char)_Memory[0xc];
      *(char *)(_Memory + 0xc) = (char)iVar1;
      goto LAB_00887971;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x31) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      piVar2 = (int *)FUN_008872e0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_008872c0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00887971:
  if ((char)_Memory[0xc] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0xc] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00887500(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00887320(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00887500(this,(int)piVar5);
              break;
            }
LAB_00887a34:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00887320(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00887a34;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00887500(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00887320(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xc) = 1;
  }
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_00887ad0 @ 00887ad0 ////

void __thiscall FUN_00887ad0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00887790((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x31) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x31) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x31);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x31);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x31);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x31);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00887800(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00887b90 @ 00887b90 ////

undefined4 __fastcall FUN_00887b90(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  while (DAT_010501ac != 0) {
    if (*(undefined4 **)(*DAT_010501a8 + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(*DAT_010501a8 + 0x2c))(1);
    }
    FUN_00887800(&DAT_010501a4,&uStack_4,(int *)*DAT_010501a8);
  }
  return 1;
}


//// FUNCTION FUN_00887c40 @ 00887c40 ////

void __fastcall FUN_00887c40(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00887ad0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00887c70 @ 00887c70 ////

int __fastcall FUN_00887c70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00887640();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00887d00 @ 00887d00 ////

int * __thiscall FUN_00887d00(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00887d40 @ 00887d40 ////

int * __thiscall FUN_00887d40(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00887d60 @ 00887d60 ////

int * __thiscall FUN_00887d60(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00888020 @ 00888020 ////

void __cdecl FUN_00888020(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = g_pDirect3DDevice;
  if ((&DAT_01058ff0)[param_1] != param_2) {
    (&DAT_01058ff0)[param_1] = param_2;
    (**(code **)(*piVar1 + 0xe4))(piVar1,param_1,param_2);
  }
  return;
}


//// FUNCTION FUN_008880b0 @ 008880b0 ////

void __thiscall FUN_008880b0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x21) == '\0') {
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


//// FUNCTION FUN_008881d0 @ 008881d0 ////

void __cdecl FUN_008881d0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x21);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x21);
  }
  return;
}


//// FUNCTION FUN_008881f0 @ 008881f0 ////

void __cdecl FUN_008881f0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x21);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return;
}


//// FUNCTION FUN_00888230 @ 00888230 ////

void __fastcall FUN_00888230(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x21) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x21) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x21);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x21);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x21) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x21) == '\0');
    if (*(char *)((int)piVar4 + 0x21) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00888290 @ 00888290 ////

void __fastcall FUN_00888290(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x21);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x21);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x21);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_008883a0 @ 008883a0 ////

void __cdecl FUN_008883a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_008885f0 @ 008885f0 ////

void __thiscall FUN_008885f0(void *this,undefined4 *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  sVar1 = (short)((int)*param_2 * (int)*(short *)this +
                  ((int)*param_2 * (int)*(short *)this >> 0x1f & 0xffU) >> 8);
  if (0xfe < sVar1) {
    sVar1 = 0xff;
  }
  iVar5 = (int)param_2[6] * (int)*(short *)((int)this + 0xc);
  sVar2 = (short)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8);
  if (0xfe < sVar2) {
    sVar2 = 0xff;
  }
  iVar5 = (int)param_2[4] * (int)*(short *)((int)this + 8);
  sVar3 = (short)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8);
  if (0xfe < sVar3) {
    sVar3 = 0xff;
  }
  iVar5 = (int)param_2[2] * (int)*(short *)((int)this + 4);
  sVar4 = (short)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8);
  if (0xfe < sVar4) {
    sVar4 = 0xff;
  }
  iVar5 = (int)param_2[1] + (int)*(short *)((int)this + 2);
  local_10 = CONCAT22((short)iVar5,sVar1);
  if (0xfe < iVar5) {
    local_10 = CONCAT22(0xff,sVar1);
  }
  iVar5 = (int)param_2[7] + (int)*(short *)((int)this + 0xe);
  local_4 = CONCAT22((short)iVar5,sVar2);
  if (0xfe < iVar5) {
    local_4 = CONCAT22(0xff,sVar2);
  }
  iVar5 = (int)param_2[5] + (int)*(short *)((int)this + 10);
  local_8 = CONCAT22((short)iVar5,sVar3);
  if (0xfe < iVar5) {
    local_8 = CONCAT22(0xff,sVar3);
  }
  iVar5 = (int)param_2[3] + (int)*(short *)((int)this + 6);
  local_c = CONCAT22((short)iVar5,sVar4);
  if (0xfe < iVar5) {
    local_c = CONCAT22(0xff,sVar4);
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}


//// FUNCTION FUN_00888710 @ 00888710 ////

void __fastcall FUN_00888710(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 4))();
  param_1[5] = 0;
  (**(code **)*param_1)();
  piVar1 = param_1 + 7;
  param_1[6] = 0;
  (**(code **)(*piVar1 + 4))();
  param_1[0xc] = 0;
  (**(code **)*piVar1)();
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  (**(code **)(*piVar1 + 4))();
  param_1[0xc] = 0;
  (**(code **)*piVar1)();
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((int)param_1 + 0x46) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0xffff;
  param_1[0xe] = 0x3f800000;
  return;
}


//// FUNCTION FUN_008887b0 @ 008887b0 ////

void __thiscall FUN_008887b0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x164) + 0x10);
  if ((iVar1 != 0) && (param_1 < (uint)(*(int *)(*(int *)((int)this + 0x164) + 0x14) - iVar1 >> 5)))
  {
    *(uint *)((int)this + 0x260) = param_1;
  }
  return;
}


//// FUNCTION FUN_008887e0 @ 008887e0 ////

int * __thiscall FUN_008887e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(*(int *)((int)this + 0x1c) + 4))();
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  (*(code *)**(undefined4 **)((int)this + 0x1c))();
  *(undefined1 *)((int)this + 0x34) = *(undefined1 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined2 *)((int)this + 0x44) = *(undefined2 *)(param_1 + 0x44);
  *(undefined2 *)((int)this + 0x46) = *(undefined2 *)(param_1 + 0x46);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}


//// FUNCTION FUN_00888850 @ 00888850 ////

int * __thiscall FUN_00888850(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00888870 @ 00888870 ////

int __fastcall FUN_00888870(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 5;
}


//// FUNCTION FUN_00888890 @ 00888890 ////

void __fastcall FUN_00888890(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (-1 < *(int *)(param_1 + 0x18c)) {
    if (DAT_010590c0 != 1) {
      DAT_010590c0 = 1;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x34,1);
    }
    iVar2 = *(int *)(param_1 + 0x18c);
    if (DAT_010590d4 != iVar2) {
      DAT_010590d4 = iVar2;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x39,iVar2);
    }
    if (DAT_010590d0 != 3) {
      DAT_010590d0 = 3;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x38,3);
    }
    if (DAT_010590cc != 8) {
      DAT_010590cc = 8;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x37,8);
    }
    if (DAT_010590c8 != 1) {
      DAT_010590c8 = 1;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x36,1);
    }
    if (DAT_010590c4 != 1) {
      DAT_010590c4 = 1;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x35,1);
    }
    if (DAT_0105905c != 1) {
      DAT_0105905c = 1;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x1b,1);
    }
    if (DAT_0105903c != 1) {
      DAT_0105903c = 1;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x13,1);
    }
    if (DAT_01059040 != 2) {
      DAT_01059040 = 2;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x14,2);
    }
    (**(code **)(**(int **)(param_1 + 0x198) + 0x14))(param_1 + 0x19c,param_1 + 0x1b4);
    DAT_00e5e4d0 = DAT_00e5e4d0 + -1;
    uVar1 = (uint)(DAT_00e5e4d0 != 1);
    if (DAT_010590c0 != uVar1) {
      DAT_010590c0 = uVar1;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x34,uVar1);
    }
    if (DAT_0105905c != 0) {
      DAT_0105905c = 0;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x1b,0);
    }
    if (DAT_010590d0 != 3) {
      DAT_010590d0 = 3;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x38,3);
    }
    iVar2 = *(int *)(param_1 + 0x18c) + -1;
    if (DAT_010590d4 != iVar2) {
      DAT_010590d4 = iVar2;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x39,iVar2);
    }
    if (DAT_010590cc != 1) {
      DAT_010590cc = 1;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x37,1);
    }
    if (DAT_0105903c != 5) {
      DAT_0105903c = 5;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x13,5);
    }
    if (DAT_01059040 != 6) {
      DAT_01059040 = 6;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x14,6);
    }
    *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
  }
  return;
}


//// FUNCTION FUN_00888e60 @ 00888e60 ////

void __thiscall FUN_00888e60(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x21) == '\0') {
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


//// FUNCTION FUN_00888f10 @ 00888f10 ////

int * __fastcall FUN_00888f10(int *param_1)

{
  FUN_00888290(param_1);
  return param_1;
}


//// FUNCTION FUN_00888f20 @ 00888f20 ////

int * __fastcall FUN_00888f20(int *param_1)

{
  FUN_00888230(param_1);
  return param_1;
}


//// FUNCTION FUN_00889030 @ 00889030 ////

void __cdecl FUN_00889030(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00889080 @ 00889080 ////

void * __cdecl FUN_00889080(int param_1,int param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = param_2 + -0x40;
    param_3 = (void *)((int)param_3 + -0x40);
    FUN_00885ed0(param_3,param_2);
  } while (param_2 != param_1);
  return param_3;
}


//// FUNCTION FUN_008891a0 @ 008891a0 ////

undefined4 __thiscall FUN_008891a0(void *this,char *param_1,undefined4 param_2,uint param_3)

{
  char *_Memory;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea388;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0048ad50((int *)&param_1);
  _Memory = param_1;
  uVar1 = FUN_008819d0(*(void **)((int)this + 0x158),param_1);
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_008892f0 @ 008892f0 ////

void __thiscall
FUN_008892f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined4 *param_5)

{
  int iVar1;
  
  if (-1 < *(int *)((int)this + 0x18c)) {
    FUN_00888890((int)this);
  }
  *(int *)((int)this + 0x18c) = DAT_00e5e4d0;
  DAT_00e5e4d0 = DAT_00e5e4d0 + 1;
  *(undefined4 *)((int)this + 0x198) = param_3;
  *(undefined4 *)((int)this + 0x19c) = *param_4;
  *(undefined4 *)((int)this + 0x1a0) = param_4[1];
  *(undefined4 *)((int)this + 0x1a4) = param_4[2];
  *(undefined4 *)((int)this + 0x1a8) = param_4[3];
  *(undefined4 *)((int)this + 0x1ac) = param_4[4];
  *(undefined4 *)((int)this + 0x1b0) = param_4[5];
  *(undefined4 *)((int)this + 0x1b4) = *param_5;
  *(undefined4 *)((int)this + 0x1b8) = param_5[1];
  *(undefined4 *)((int)this + 0x1bc) = param_5[2];
  *(undefined4 *)((int)this + 0x1c0) = param_5[3];
  if (DAT_010590c0 != 1) {
    DAT_010590c0 = 1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x34,1);
  }
  iVar1 = *(int *)((int)this + 0x18c) + -1;
  if (DAT_010590d4 != iVar1) {
    DAT_010590d4 = iVar1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x39,iVar1);
  }
  if (DAT_010590d0 != 3) {
    DAT_010590d0 = 3;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x38,3);
  }
  if (DAT_010590cc != 7) {
    DAT_010590cc = 7;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x37,7);
  }
  if (DAT_010590c8 != 1) {
    DAT_010590c8 = 1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x36,1);
  }
  if (DAT_010590c4 != 1) {
    DAT_010590c4 = 1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x35,1);
  }
  if (DAT_0105905c != 1) {
    DAT_0105905c = 1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x1b,1);
  }
  if (DAT_0105903c != 1) {
    DAT_0105903c = 1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x13,1);
  }
  if (DAT_01059040 != 2) {
    DAT_01059040 = 2;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x14,2);
  }
  (**(code **)(**(int **)((int)this + 0x198) + 0x14))
            ((undefined4 *)((int)this + 0x19c),(undefined4 *)((int)this + 0x1b4));
  if (DAT_010590c0 != 1) {
    DAT_010590c0 = 1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x34,1);
  }
  if (DAT_0105905c != 0) {
    DAT_0105905c = 0;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x1b,0);
  }
  if (DAT_010590d0 != 3) {
    DAT_010590d0 = 3;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x38,3);
  }
  iVar1 = *(int *)((int)this + 0x18c);
  if (DAT_010590d4 != iVar1) {
    DAT_010590d4 = iVar1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x39,iVar1);
  }
  if (DAT_010590cc != 1) {
    DAT_010590cc = 1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x37,1);
  }
  if (DAT_0105903c != 5) {
    DAT_0105903c = 5;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x13,5);
  }
  if (DAT_01059040 != 6) {
    DAT_01059040 = 6;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x14,6);
  }
  return;
}


//// FUNCTION FUN_00889620 @ 00889620 ////

void __fastcall FUN_00889620(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d63958;
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


//// FUNCTION FUN_008896f0 @ 008896f0 ////

undefined4 * __thiscall FUN_008896f0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined ***)this = &PTR_FUN_00d63920;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = 0;
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
    puVar3 = *(undefined4 **)((int)this + 0x3c);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  *(int *)((int)this + 0x3c) = iVar2;
  return this;
}


//// FUNCTION FUN_008897c0 @ 008897c0 ////

undefined4 * __thiscall FUN_008897c0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar2 = *(char *)((int)puVar4 + 0x11);
  puVar1 = *(undefined4 **)((int)this + 4);
  while (cVar2 == '\0') {
    cVar2 = (**(code **)(*(int *)puVar4[3] + 0x10))(*param_1);
    if (cVar2 == '\0') {
      puVar3 = (undefined4 *)*puVar4;
    }
    else {
      puVar3 = (undefined4 *)puVar4[2];
      puVar4 = puVar1;
    }
    puVar1 = puVar4;
    puVar4 = puVar3;
    cVar2 = *(char *)((int)puVar3 + 0x11);
  }
  return puVar1;
}


//// FUNCTION FUN_00889800 @ 00889800 ////

void FUN_00889800(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
  }
  return;
}


//// FUNCTION FUN_00889830 @ 00889830 ////

int * __fastcall FUN_00889830(int *param_1)

{
  FUN_00888290(param_1);
  return param_1;
}


//// FUNCTION FUN_00889840 @ 00889840 ////

int * __fastcall FUN_00889840(int *param_1)

{
  FUN_00888230(param_1);
  return param_1;
}


//// FUNCTION FUN_00889870 @ 00889870 ////

void FUN_00889870(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 8) = 1;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  return;
}


//// FUNCTION FUN_00889900 @ 00889900 ////

void __cdecl FUN_00889900(void *param_1,void *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x40)) {
    FUN_00885ed0(param_1,param_3);
  }
  return;
}


//// FUNCTION FUN_00889990 @ 00889990 ////

void * FUN_00889990(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00889a10 @ 00889a10 ////

void __cdecl FUN_00889a10(void *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea3d1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_008896f0(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00889a60 @ 00889a60 ////

int * __fastcall FUN_00889a60(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea3f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (int)param_1;
  *param_1 = (int)&PTR_FUN_00d18c2c;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = (int)(param_1 + 7);
  param_1[7] = (int)&PTR_LAB_00d63958;
  param_1[0xc] = 0;
  local_4 = 1;
  FUN_00888710(param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00889ad0 @ 00889ad0 ////

void __fastcall FUN_00889ad0(undefined4 *param_1)

{
  param_1[7] = &PTR_LAB_00d63958;
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[9] = param_1[8];
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1[8] + 4) = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[9] = param_1[8];
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1[8] + 4) = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_00d18c2c;
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


//// FUNCTION FUN_00889b90 @ 00889b90 ////

int __fastcall FUN_00889b90(int param_1)

{
  return *(int *)(param_1 + 0x260) * 0x20 + *(int *)(*(int *)(param_1 + 0x164) + 0x10);
}


//// FUNCTION FUN_00889bb0 @ 00889bb0 ////

undefined4 __fastcall FUN_00889bb0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  float local_38;
  float local_34;
  int local_30 [3];
  undefined4 local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x164) + 0x10);
  iVar4 = *(int *)(param_1 + 0x260) * 0x20;
  uVar2 = *(uint *)(iVar4 + 4 + iVar1);
  if (((uVar2 != 0) && ((int)(*(int *)(iVar4 + iVar1 + 8) - uVar2) >> 6 != 0)) &&
     ((*(byte *)(*(int *)(uVar2 + 0x3c) + 0x50) & 2) != 0)) {
    FUN_0086ddb0(&DAT_00e5e7e4,local_30,(int *)(uVar2 + 4));
    local_10 = 0;
    local_14 = 0;
    local_4 = 0;
    local_8 = 0;
    local_18 = 0x10000;
    local_c = 0x10000;
    uVar5 = FUN_00acd42c();
    local_30[0] = (int)uVar5;
    uVar5 = FUN_00acd42c();
    local_24 = (undefined4)uVar5;
    uVar3 = FUN_00882710(*(void **)(param_1 + 0x250),&local_38);
    if ((char)uVar3 == '\0') {
      iVar1 = *(int *)(param_1 + 0x250);
      local_38 = (float)(*(int *)(iVar1 + 0x54) - *(int *)(iVar1 + 0x50)) * *(float *)(iVar1 + 0x8c)
                 * 0.05;
      local_34 = (float)(*(int *)(iVar1 + 0x5c) - *(int *)(iVar1 + 0x58)) * *(float *)(iVar1 + 0x90)
                 * 0.05;
    }
    uVar5 = FUN_00acd42c();
    local_30[0] = (int)uVar5;
    uVar5 = FUN_00acd42c();
    local_24 = (undefined4)uVar5;
    uVar3 = FUN_0087ff20(*(void **)(param_1 + 0x250),local_30,&local_18);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00889d60 @ 00889d60 ////

void __fastcall FUN_00889d60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00889bb0(param_1);
  if ((char)uVar1 != '\0') {
    FUN_00882950(*(int *)(param_1 + 0x250));
    return;
  }
  return;
}


//// FUNCTION FUN_00889d80 @ 00889d80 ////

uint __thiscall FUN_00889d80(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar4 = param_2 * 0x20;
  iVar3 = *(int *)(iVar1 + 4 + iVar4);
  if (iVar3 != *(int *)(iVar1 + 8 + iVar4)) {
    do {
      uVar2 = FUN_00884fa0(iVar3);
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      iVar1 = *(int *)((int)this + 0x10);
      iVar3 = iVar3 + 0x40;
    } while (iVar3 != *(int *)(iVar1 + 8 + iVar4));
  }
  return iVar1 + iVar4 & 0xffffff00;
}


//// FUNCTION FUN_00889dd0 @ 00889dd0 ////

void __thiscall FUN_00889dd0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 5 != 0)) {
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    if (*(int *)((int)this + 0x10) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 5;
    }
    iVar2 = (param_1 % uVar3) * 0x20;
    iVar1 = *(int *)(*(int *)((int)this + 0x10) + 8 + iVar2);
    for (iVar2 = *(int *)(*(int *)((int)this + 0x10) + 4 + iVar2); iVar2 != iVar1;
        iVar2 = iVar2 + 0x40) {
      FUN_00884fc0(iVar2);
    }
    FUN_00888890(DAT_010501b0);
  }
  return;
}


//// FUNCTION FUN_00889e40 @ 00889e40 ////

undefined4 __thiscall FUN_00889e40(void *this,uint param_1)

{
  int iVar1;
  uint in_EAX;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)((int)this + 0x10) == 0) ||
     (in_EAX = 0, *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 5 == 0)) {
    return in_EAX & 0xffffff00;
  }
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  if (*(int *)((int)this + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 5;
  }
  iVar1 = *(int *)((int)this + 0x10);
  iVar5 = (param_1 % uVar3) * 0x20;
  iVar4 = *(int *)(iVar1 + 8 + iVar5);
  if (iVar4 != *(int *)(iVar1 + 4 + iVar5)) {
    do {
      iVar4 = iVar4 + -0x40;
      uVar2 = FUN_00885110(iVar4);
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
    } while (iVar4 != *(int *)(*(int *)((int)this + 0x10) + iVar5 + 4));
    return uVar2;
  }
  return iVar1 + iVar5 & 0xffffff00;
}


//// FUNCTION FUN_00889ed0 @ 00889ed0 ////

void __fastcall FUN_00889ed0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea408;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)param_1[5];
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*param_1 + 4))();
    param_1[5] = 0;
    (**(code **)*param_1)();
  }
  *param_1 = (int)&PTR_FUN_00d637f0;
  if ((int *)param_1[2] != (int *)0x0) {
    *(int *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(int *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((int *)param_1[2] != (int *)0x0) {
    *(int *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(int *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00889f70 @ 00889f70 ////

void __thiscall FUN_00889f70(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((int)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_00889fe0 @ 00889fe0 ////

undefined4 __cdecl FUN_00889fe0(undefined4 param_1,void *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (param_2 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_3 - (int)param_2;
  }
  iVar1 = iVar1 * 8;
  uVar2 = 0;
  do {
    iVar1 = iVar1 + -8;
    if (param_2 == (void *)0x0) goto LAB_0088a02e;
    if ((uint)(param_3 - (int)param_2) <= uVar2) break;
    bVar3 = bVar3 | *(char *)((int)param_2 + uVar2) << ((byte)iVar1 & 0x1f);
    uVar2 = uVar2 + 1;
  } while (uVar2 == 0);
  if (param_2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
LAB_0088a02e:
  return CONCAT31((int3)(uVar2 >> 8),bVar3);
}


//// FUNCTION FUN_0088a0a0 @ 0088a0a0 ////

undefined4 * FUN_0088a0a0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0088a0d0 @ 0088a0d0 ////

void __fastcall FUN_0088a0d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00889870();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0088a190 @ 0088a190 ////

void * __cdecl FUN_0088a190(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cea431;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_008896f0(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x40);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_0088a220 @ 0088a220 ////

void * __cdecl FUN_0088a220(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cea451;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_008896f0(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x40);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_0088a2b0 @ 0088a2b0 ////

undefined4 __thiscall FUN_0088a2b0(void *this,void *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 **ppuVar4;
  undefined4 *local_8;
  undefined4 *local_4;
  
  FUN_0048ad50((int *)&param_1);
  iVar1 = *(int *)((int)this + 0x164);
  local_8 = FUN_00589920((void *)(iVar1 + 0x1c),&param_1);
  puVar2 = *(undefined4 **)(iVar1 + 0x20);
  if (local_8 != puVar2) {
    uVar3 = FUN_00441060(&param_1,local_8 + 3);
    if ((char)uVar3 == '\0') {
      ppuVar4 = &local_8;
      goto LAB_0088a303;
    }
  }
  local_4 = puVar2;
  ppuVar4 = &local_4;
LAB_0088a303:
  if (*ppuVar4 == *(undefined4 **)(iVar1 + 0x20)) {
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    return 0xffffffff;
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return (*ppuVar4)[0xb];
}


//// FUNCTION FUN_0088a3f0 @ 0088a3f0 ////

uint __thiscall FUN_0088a3f0(void *this,int *param_1)

{
  uint in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18 [6];
  
  uVar2 = in_EAX & 0xffffff00;
  if (*(int *)((int)this + 0x164) != 0) {
    local_30 = DAT_00e5e7e4;
    local_2c = DAT_00e5e7e8;
    local_24 = DAT_00e5e7f0;
    local_20 = DAT_00e5e7f4;
    local_28 = DAT_00e5e7ec;
    local_1c = DAT_00e5e7f8;
    puVar1 = (undefined4 *)FUN_0086ddb0(&local_30,local_18,param_1);
    DAT_00e5e7e4 = *puVar1;
    DAT_00e5e7e8 = puVar1[1];
    DAT_00e5e7ec = puVar1[2];
    DAT_00e5e7f0 = puVar1[3];
    DAT_00e5e7f4 = puVar1[4];
    DAT_00e5e7f8 = puVar1[5];
    uVar2 = FUN_00889e40(*(void **)((int)this + 0x164),*(uint *)((int)this + 0x260));
    DAT_00e5e7e4 = local_30;
    DAT_00e5e7e8 = local_2c;
    DAT_00e5e7ec = local_28;
    DAT_00e5e7f0 = local_24;
    DAT_00e5e7f4 = local_20;
    DAT_00e5e7f8 = local_1c;
  }
  return uVar2;
}


//// FUNCTION FUN_0088a510 @ 0088a510 ////

void __fastcall FUN_0088a510(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int *this;
  uint uVar6;
  uint *puVar7;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cea468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = FUN_009f3be0((char *)(param_1 + 0x54));
  uVar2 = *(uint *)(*(int *)(param_1 + 0x158) + 0x1d0);
  this = (int *)(*(int *)(param_1 + 0x158) + 0x1cc);
  uVar6 = 0;
  if (uVar2 != 0) {
    puVar7 = (uint *)*this;
    do {
      if (*puVar7 == uVar3) {
        if (-1 < (int)uVar6) {
          iVar5 = *(int *)(*this + 4 + uVar6 * 8);
          if ((iVar5 != 0) && (iVar5 != param_1)) {
            FUN_008887e0((void *)(param_1 + 0x1f0),iVar5 + 0x1f0);
            (**(code **)(*(int *)(param_1 + 0x23c) + 4))();
            *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(iVar5 + 0x250);
            (*(code *)**(undefined4 **)(param_1 + 0x23c))();
            *(undefined4 *)(param_1 + 600) = *(undefined4 *)(iVar5 + 600);
            FUN_00888710((int *)(iVar5 + 0x1f0));
            (**(code **)(*(int *)(iVar5 + 0x23c) + 4))();
            *(undefined4 *)(iVar5 + 0x250) = 0;
            (*(code *)**(undefined4 **)(iVar5 + 0x23c))();
            *(undefined1 *)(iVar5 + 0x1d8) = 0;
            *(undefined1 *)(param_1 + 0x254) = *(undefined1 *)(iVar5 + 0x254);
            *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(iVar5 + 0x1cc);
            *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(iVar5 + 0x1d0);
          }
          *(int *)(*(int *)(*(int *)(param_1 + 0x158) + 0x1cc) + 4 + uVar6 * 8) = param_1;
          goto LAB_0088a56f;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 2;
    } while (uVar6 < uVar2);
  }
  FUN_00882b70(this,uVar3,param_1,'\0');
LAB_0088a56f:
  if (*(int *)(param_1 + 0x204) == 0) {
    local_2c = local_20;
    pcVar4 = (char *)(param_1 + 0x54);
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_2c,(char *)(param_1 + 0x54),(int)pcVar4 - (param_1 + 0x55));
    local_4 = 0;
    if ((*(char *)(param_1 + 0x255) == '\0') && (*(int *)(param_1 + 0x204) == 0)) {
      iVar5 = FUN_0087b1b0(*(void **)(*(int *)(param_1 + 0x158) + 0x178),&local_2c);
      if (iVar5 != 0) {
        (**(code **)(*(int *)(param_1 + 0x1f0) + 4))();
        *(int *)(param_1 + 0x204) = iVar5;
        (*(code *)**(undefined4 **)(param_1 + 0x1f0))();
        *(undefined2 *)(param_1 + 0x236) = 2;
        *(undefined4 *)(param_1 + 600) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x255) = 1;
    if ((*(char *)(param_1 + 0x254) == '\0') && (*(int *)(param_1 + 0x204) == 0)) {
      iVar5 = FUN_0087b0f0(*(void **)(*(int *)(param_1 + 0x158) + 0x178),&local_2c);
      if (iVar5 != 0) {
        (**(code **)(*(int *)(param_1 + 0x23c) + 4))();
        *(int *)(param_1 + 0x250) = iVar5;
        (*(code *)**(undefined4 **)(param_1 + 0x23c))();
        *(undefined4 *)(param_1 + 600) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x254) = 1;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0088a7e0 @ 0088a7e0 ////

int __fastcall FUN_0088a7e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00889870();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0088a810 @ 0088a810 ////

void __cdecl FUN_0088a810(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)(param_4 + 4);
    do {
      pcVar3 = *(char **)(param_2 + 4);
      if (pcVar3 == (char *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_2 + 8) - (int)pcVar3;
      }
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_4 + 8) - iVar1;
      }
      if (iVar5 == iVar4) {
        pcVar2 = *(char **)(param_2 + 8);
        if (pcVar3 == pcVar2) break;
        iVar5 = iVar1 - (int)pcVar3;
        while (*pcVar3 == pcVar3[iVar5]) {
          pcVar3 = pcVar3 + 1;
          if (pcVar3 == pcVar2) {
            *param_1 = param_2;
            return;
          }
        }
        if (pcVar3 == pcVar2) break;
      }
      param_2 = param_2 + 0x10;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0088a8c0 @ 0088a8c0 ////

void __cdecl FUN_0088a8c0(void *param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cea491;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_008896f0(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x40);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0088a990 @ 0088a990 ////

void FUN_0088a990(int param_1,int param_2,void *param_3)

{
  FUN_0088a190(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_0088aa00 @ 0088aa00 ////

void * FUN_0088aa00(void *param_1,int param_2,int param_3)

{
  FUN_0088a8c0(param_1,param_2,param_3);
  return (void *)(param_2 * 0x40 + (int)param_1);
}


//// FUNCTION FUN_0088aa30 @ 0088aa30 ////

void __fastcall FUN_0088aa30(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = *(int *)(param_1 + 0x10) + -1 + *(int *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(param_1 + 8);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 4) + uVar3 * 4);
    if (*(void **)(iVar2 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(iVar2 + 4));
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    piVar1 = (int *)(param_1 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_0088aa80 @ 0088aa80 ////

void __fastcall FUN_0088aa80(int param_1)

{
  int *piVar1;
  void *_Memory;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  while (iVar3 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar2 = *(int *)(param_1 + 0x10) + -1 + *(int *)(param_1 + 0xc);
      if (*(uint *)(param_1 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(param_1 + 8);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 4) + uVar2 * 4);
      if (*(void **)(iVar3 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(iVar3 + 4));
      }
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      piVar1 = (int *)(param_1 + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
    iVar3 = *(int *)(param_1 + 0x10);
  }
  iVar3 = *(int *)(param_1 + 8);
  while (iVar3 != 0) {
    _Memory = *(void **)(*(int *)(param_1 + 4) + -4 + iVar3 * 4);
    iVar3 = iVar3 + -1;
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if (*(void **)(param_1 + 4) == (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0088ab20 @ 0088ab20 ////

void __fastcall FUN_0088ab20(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = *(int *)(param_1 + 0x10) + -1 + *(int *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(param_1 + 8);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 4) + uVar3 * 4);
    if (*(void **)(iVar2 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(iVar2 + 4));
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    piVar1 = (int *)(param_1 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_0088ab80 @ 0088ab80 ////

void FUN_0088ab80(void)

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
  puStack_8 = &LAB_00cea4a8;
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


//// FUNCTION FUN_0088abf0 @ 0088abf0 ////

void FUN_0088abf0(void)

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
  puStack_8 = &LAB_00cea4c8;
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


//// FUNCTION FUN_0088ac60 @ 0088ac60 ////

void FUN_0088ac60(void)

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
  puStack_8 = &LAB_00cea4e8;
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


//// FUNCTION FUN_0088acd0 @ 0088acd0 ////

void __thiscall FUN_0088acd0(void *this,uint param_1)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cea508;
  local_c = ExceptionList;
  if (0x3fffffffU - *(int *)((int)this + 8) < param_1) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_00405d50(local_50,(undefined4 *)"list<T> too long",0x10);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddceb4);
  }
  *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  return;
}


//// FUNCTION FUN_0088ad70 @ 0088ad70 ////

void FUN_0088ad70(void)

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
  puStack_8 = &LAB_00cea528;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"deque<T> too long",0x11);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddceb4);
}


//// FUNCTION FUN_0088ade0 @ 0088ade0 ////

void __fastcall FUN_0088ade0(int param_1)

{
  int *piVar1;
  void *_Memory;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  while (iVar3 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar2 = *(int *)(param_1 + 0x10) + -1 + *(int *)(param_1 + 0xc);
      if (*(uint *)(param_1 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(param_1 + 8);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 4) + uVar2 * 4);
      if (*(void **)(iVar3 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(iVar3 + 4));
      }
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      piVar1 = (int *)(param_1 + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
    iVar3 = *(int *)(param_1 + 0x10);
  }
  iVar3 = *(int *)(param_1 + 8);
  while (iVar3 != 0) {
    _Memory = *(void **)(*(int *)(param_1 + 4) + -4 + iVar3 * 4);
    iVar3 = iVar3 + -1;
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if (*(void **)(param_1 + 4) == (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0088ae40 @ 0088ae40 ////

void __fastcall FUN_0088ae40(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00872b30(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_0088ae80 @ 0088ae80 ////

undefined4 __thiscall FUN_0088ae80(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3ffffff < param_1) {
    param_1 = FUN_0088abf0();
  }
  pvVar1 = operator_new(param_1 * 0x40);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 0x40 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_0088aed0 @ 0088aed0 ////

void __thiscall FUN_0088aed0(void *this,void *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_5c [16];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cea548;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_008896f0(local_5c,param_3);
  iVar4 = *(int *)((int)this + 4);
  iVar7 = 0;
  local_8 = 0;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - iVar4 >> 6;
  }
  uVar8 = CONCAT44(iVar4,iVar2);
  if (param_2 != 0) {
    if (iVar4 != 0) {
      iVar7 = *(int *)((int)this + 8) - iVar4 >> 6;
    }
    if (0x3ffffffU - iVar7 < param_2) {
      uVar8 = FUN_0088abf0();
    }
    iVar4 = (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    if (iVar4 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar4 >> 6;
    }
    if (uVar3 < iVar7 + param_2) {
      if (0x3ffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (iVar4 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - iVar4 >> 6;
      }
      if (uVar3 < iVar7 + param_2) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)((int)this + 8) - iVar4 >> 6;
        }
        uVar3 = iVar4 + param_2;
      }
      pvVar5 = operator_new(uVar3 * 0x40);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar5;
      pvVar6 = FUN_0088a190(*(int *)((int)this + 4),(int)param_1,pvVar5);
      FUN_0088a8c0(pvVar6,param_2,(int)local_5c);
      FUN_0088a190((int)param_1,*(int *)((int)this + 8),(void *)((int)pvVar6 + param_2 * 0x40));
      puVar1 = *(undefined4 **)((int)this + 4);
      local_8 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)puVar1 >> 6;
      }
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00883070(puVar1,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar3 * 0x40 + (int)pvVar5);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar4) * 0x40 + (int)pvVar5);
      *(void **)((int)this + 4) = pvVar5;
    }
    else {
      local_1c = *(void **)((int)this + 8);
      if ((uint)((int)local_1c - (int)param_1 >> 6) < param_2) {
        FUN_0088a190((int)param_1,(int)local_1c,(void *)(param_2 * 0x40 + (int)param_1));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0088aa00(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1 >> 6),(int)local_5c);
        iVar4 = *(int *)((int)this + 8) + param_2 * 0x40;
        *(int *)((int)this + 8) = iVar4;
        local_8 = 0;
        FUN_00889900(param_1,(void *)(iVar4 + param_2 * -0x40),(int)local_5c);
      }
      else {
        pvVar6 = (void *)((int)local_1c + param_2 * -0x40);
        pvVar5 = FUN_0088a190((int)pvVar6,(int)local_1c,local_1c);
        *(void **)((int)this + 8) = pvVar5;
        FUN_00889080((int)param_1,(int)pvVar6,local_1c);
        FUN_00889900(param_1,(void *)(param_2 * 0x40 + (int)param_1),(int)local_5c);
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_00885080(local_5c);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0088b170 @ 0088b170 ////

void __fastcall FUN_0088b170(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00872b30(*(int *)(param_1 + 4),*(int *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_0088b1b0 @ 0088b1b0 ////

undefined4 __thiscall FUN_0088b1b0(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0xfffffff < param_1) {
    param_1 = FUN_008727d0();
  }
  pvVar1 = operator_new(param_1 * 0x10);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 0x10 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_0088b290 @ 0088b290 ////

void __thiscall FUN_0088b290(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *_Dst;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0xfffffff - uVar1 < param_1) {
    uVar1 = FUN_0088ad70();
  }
  uVar4 = uVar1 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  if ((param_1 < uVar4) && (uVar1 <= 0xfffffff - uVar4)) {
    param_1 = uVar4;
  }
  uVar4 = *(uint *)((int)this + 0xc);
  _Dst = operator_new((uVar1 + param_1) * 4);
  iVar6 = uVar4 * 4;
  pvVar3 = (void *)(iVar6 + *(int *)((int)this + 4));
  sVar2 = ((*(int *)((int)this + 8) * 4 - (int)pvVar3) + *(int *)((int)this + 4) >> 2) * 4;
  pvVar3 = _memmove(_Dst + uVar4,pvVar3,sVar2);
  pvVar3 = (void *)((int)pvVar3 + sVar2);
  if (param_1 < uVar4) {
    _memmove(pvVar3,*(void **)((int)this + 4),((int)(param_1 * 4) >> 2) << 2);
    pvVar3 = (void *)(param_1 * 4 + *(int *)((int)this + 4));
    sVar2 = ((iVar6 - (int)pvVar3) + *(int *)((int)this + 4) >> 2) * 4;
    pvVar3 = _memmove(_Dst,pvVar3,sVar2);
    puVar7 = (undefined4 *)((int)pvVar3 + sVar2);
    uVar4 = param_1;
  }
  else {
    sVar2 = (iVar6 >> 2) * 4;
    iVar6 = param_1 - uVar4;
    pvVar3 = _memmove(pvVar3,*(void **)((int)this + 4),sVar2);
    puVar5 = (undefined4 *)((int)pvVar3 + sVar2);
    puVar7 = _Dst;
    if (iVar6 != 0) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
  }
  if (uVar4 != 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  if (*(void **)((int)this + 4) == (void *)0x0) {
    *(undefined4 **)((int)this + 4) = _Dst;
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}


//// FUNCTION FUN_0088b3e0 @ 0088b3e0 ////

void __thiscall FUN_0088b3e0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00647890();
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
      _Dst = FUN_0088a0a0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00889990(param_1,iVar5,param_1 + param_2);
      FUN_0088a0a0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_008883a0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00889990(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00889030(param_1,(int)pvVar3,iVar5);
    FUN_008883a0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0088b5c0 @ 0088b5c0 ////

int __thiscall FUN_0088b5c0(void *this,int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cea560;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 6;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x3ffffff < uVar1) {
      uVar1 = FUN_0088abf0();
    }
    pvVar2 = operator_new(uVar1 * 0x40);
    *(void **)((int)this + 4) = pvVar2;
    *(void **)((int)this + 8) = pvVar2;
    *(void **)((int)this + 0xc) = (void *)(uVar1 * 0x40 + (int)pvVar2);
    local_8 = 0;
    pvVar2 = FUN_0088a220(*(int *)(param_1 + 4),*(int *)(param_1 + 8),pvVar2);
    *(void **)((int)this + 8) = pvVar2;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_0088b680 @ 0088b680 ////

void __fastcall FUN_0088b680(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00872b30(*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_0088b6c0 @ 0088b6c0 ////

void * __thiscall FUN_0088b6c0(void *this,void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (this == param_1) {
    return this;
  }
  iVar3 = *(int *)((int)param_1 + 4);
  if (iVar3 != 0) {
    uVar1 = *(int *)((int)param_1 + 8) - iVar3 >> 6;
    if (uVar1 != 0) {
      puVar2 = *(undefined4 **)((int)this + 4);
      if (puVar2 == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)((int)this + 8) - (int)puVar2 >> 6;
      }
      if (uVar1 <= uVar6) {
        puVar2 = FUN_00885f70(iVar3,*(int *)((int)param_1 + 8),puVar2);
        FUN_00883070(puVar2,*(undefined4 **)((int)this + 8));
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 6) * 0x40 +
             *(int *)((int)this + 4);
        return this;
      }
      if (puVar2 == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)((int)this + 0xc) - (int)puVar2 >> 6;
      }
      if (uVar6 < uVar1) {
        if (puVar2 != (undefined4 *)0x0) {
          FUN_00883070(puVar2,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        if (*(int *)((int)param_1 + 4) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 6;
        }
        uVar5 = FUN_0088ae80(this,uVar1);
        if ((char)uVar5 == '\0') {
          return this;
        }
        uVar5 = FUN_0088a990(*(int *)((int)param_1 + 4),*(int *)((int)param_1 + 8),
                             *(void **)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar5;
        return this;
      }
      if (puVar2 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - (int)puVar2 >> 6;
      }
      iVar3 = iVar3 * 0x40 + *(int *)((int)param_1 + 4);
      FUN_00885f70(*(int *)((int)param_1 + 4),iVar3,puVar2);
      pvVar4 = FUN_0088a190(iVar3,*(int *)((int)param_1 + 8),*(void **)((int)this + 8));
      *(void **)((int)this + 8) = pvVar4;
      return this;
    }
  }
  FUN_00883130((int)this);
  return this;
}


//// FUNCTION FUN_0088b870 @ 0088b870 ////

void __fastcall FUN_0088b870(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_0088b930 @ 0088b930 ////

void * __thiscall FUN_0088b930(void *this,byte param_1)

{
  FUN_0088b680((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0088b950 @ 0088b950 ////

void * __cdecl FUN_0088b950(void *param_1,void *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00872ce0(param_3,param_1);
    param_1 = (void *)((int)param_1 + 0x10);
    param_3 = (void *)((int)param_3 + 0x10);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_0088b990 @ 0088b990 ////

void * __cdecl FUN_0088b990(void *param_1,void *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00872ce0(param_3,param_1);
    param_1 = (void *)((int)param_1 + 0x10);
    param_3 = (void *)((int)param_3 + 0x10);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_0088b9d0 @ 0088b9d0 ////

undefined4 __thiscall FUN_0088b9d0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 local_10 [4];
  void *local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x1ec) == 0) {
    return 0;
  }
  uVar3 = (*(int *)((int)this + 0x1ec) + *(int *)((int)this + 0x1e8)) - 1;
  if (*(uint *)((int)this + 0x1e4) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 0x1e4);
  }
  FUN_00872bc0(local_10,*(int *)(*(int *)((int)this + 0x1e0) + uVar3 * 4));
  FUN_0088ab20((int)this + 0x1dc);
  iVar4 = 0;
  pcVar7 = param_1;
  if ((local_c != (void *)0x0) && (1 < (uint)(local_8 - (int)local_c))) {
    do {
      iVar2 = iVar4 + 1;
      iVar4 = iVar4 + 1;
    } while (*(byte *)((int)local_c + iVar2) < 0x1e);
    pcVar7 = (char *)((int)local_c + iVar4);
  }
  pcVar5 = pcVar7;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar6 = FUN_004015d0(param_1,pcVar7,(int)pcVar5 - (int)(pcVar7 + 1));
  if (local_c == (void *)0x0) {
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_c);
}


//// FUNCTION FUN_0088ba80 @ 0088ba80 ////

void __thiscall FUN_0088ba80(void *this,int param_1)

{
  if (param_1 != 0) {
    FUN_0088b6c0((void *)(param_1 * 0x20 + *(int *)((int)this + 0x10)),
                 (void *)((param_1 + 0x7ffffff) * 0x20 + *(int *)((int)this + 0x10)));
    return;
  }
  return;
}


//// FUNCTION FUN_0088bab0 @ 0088bab0 ////

undefined4 * __fastcall FUN_0088bab0(undefined4 *param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d637f0;
  param_1[5] = 0;
  local_4 = 0;
  local_10 = param_1;
  FUN_008742c0((int)param_1);
  param_1[5] = 0;
  (**(code **)*param_1)();
  if (DAT_010501a0 != 0) {
    iVar1 = *(int *)(DAT_010501a0 + 0x214);
    this = (void *)(DAT_010501a0 + 0x210);
    local_14 = param_1;
    iVar2 = FUN_00889800(iVar1,*(undefined4 *)(iVar1 + 4),&local_14);
    FUN_0088acd0(this,1);
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0088bb50 @ 0088bb50 ////

void __thiscall FUN_0088bb50(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 6) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 6))
     ) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_0088a8c0(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x40;
    return;
  }
  FUN_0088aed0(this,*(void **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0088bbc0 @ 0088bbc0 ////

void * __cdecl FUN_0088bbc0(void *param_1,undefined1 param_2)

{
  undefined1 local_21;
  undefined4 local_20;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea598;
  local_c = ExceptionList;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_21 = param_2;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00886410(local_1c,(undefined1 *)0x0,1,&local_21);
  FUN_00872bc0(param_1,(int)local_1c);
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0088bc40 @ 0088bc40 ////

void * __cdecl FUN_0088bc40(void *param_1,uint param_2)

{
  void *_Memory;
  byte bVar1;
  undefined1 local_21;
  int local_20;
  undefined1 local_1c [4];
  void *local_18;
  undefined1 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea5b8;
  local_c = ExceptionList;
  _Memory = (void *)0x0;
  local_18 = (void *)0x0;
  local_14 = (undefined1 *)0x0;
  local_10 = 0;
  local_4 = 0;
  bVar1 = 0x18;
  local_20 = 4;
  ExceptionList = &local_c;
  do {
    local_21 = (undefined1)((int)(0xff << (bVar1 & 0x1f) & param_2) >> (bVar1 & 0x1f));
    if ((_Memory == (void *)0x0) ||
       ((uint)(local_10 - (int)_Memory) <= (uint)((int)local_14 - (int)_Memory))) {
      FUN_00886410(local_1c,local_14,1,&local_21);
      _Memory = local_18;
    }
    else {
      *local_14 = local_21;
      local_14 = local_14 + 1;
    }
    bVar1 = bVar1 - 8;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  FUN_00872bc0(param_1,(int)local_1c);
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0088bd60 @ 0088bd60 ////

void __fastcall FUN_0088bd60(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_0088bdf0 @ 0088bdf0 ////

void * __cdecl FUN_0088bdf0(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cea601;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_00872bc0(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x10);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_0088be80 @ 0088be80 ////

int * __thiscall FUN_0088be80(void *this,int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8c [16];
  undefined4 local_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cea623;
  local_c = ExceptionList;
  pvVar2 = *(void **)((int)this + 4);
  if (pvVar2 != *(void **)((int)this + 8)) {
    do {
      if (*(int *)((int)pvVar2 + 0x2c) == param_2) {
        *param_1 = (int)pvVar2;
        return param_1;
      }
      if (param_2 <= *(int *)((int)pvVar2 + 0x2c)) {
        ExceptionList = &local_c;
        puVar1 = FUN_00885580(local_8c,param_2,param_3);
        iVar4 = *(int *)((int)this + 4);
        local_4 = 0;
        if ((iVar4 == 0) || (*(int *)((int)this + 8) - iVar4 >> 6 == 0)) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)pvVar2 - iVar4 >> 6;
        }
        FUN_0088aed0(this,pvVar2,1,(int)puVar1);
        *param_1 = iVar4 * 0x40 + *(int *)((int)this + 4);
        local_4 = 0xffffffff;
        FUN_00885080(local_8c);
        ExceptionList = local_c;
        return param_1;
      }
      pvVar2 = (void *)((int)pvVar2 + 0x40);
    } while (pvVar2 != *(void **)((int)this + 8));
  }
  ExceptionList = &local_c;
  puVar1 = FUN_00885580(local_4c,param_2,param_3);
  iVar4 = *(int *)((int)this + 4);
  local_4 = 1;
  if ((iVar4 == 0) ||
     ((uint)(*(int *)((int)this + 0xc) - iVar4 >> 6) <= (uint)(*(int *)((int)this + 8) - iVar4 >> 6)
     )) {
    FUN_0088aed0(this,*(void **)((int)this + 8),1,(int)puVar1);
  }
  else {
    pvVar2 = *(void **)((int)this + 8);
    FUN_0088a8c0(pvVar2,1,(int)puVar1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x40;
  }
  local_4 = 0xffffffff;
  FUN_00885080(local_4c);
  iVar4 = *(int *)((int)this + 4);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 8) - iVar4 >> 6;
  }
  *param_1 = (iVar3 + 0x3ffffff) * 0x40 + iVar4;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0088c010 @ 0088c010 ////

void __thiscall
FUN_0088c010(void *this,undefined4 *param_1,undefined ***param_2,int param_3,int param_4,int param_5
            )

{
  int *piVar1;
  undefined ***this_00;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined ****ppppuVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  undefined **local_18;
  undefined **local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  ppuVar7 = (undefined **)param_5;
  iVar3 = param_4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cea638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0088be80((void *)((int)param_2 * 0x20 + *(int *)((int)this + 0x10)),(int *)&param_2,param_4,
               param_5);
  iVar2 = param_3;
  this_00 = param_2;
  if ((int)ppuVar7 < 0) {
    ppuVar7 = param_2[0xc];
  }
  if ((param_2[0xf] != (undefined **)0x0) && (param_2[0xc] == ppuVar7)) {
    FUN_008850b0(param_2,iVar3,ppuVar7,(int)param_2[0xf]);
    goto LAB_0088c111;
  }
  local_18 = &PTR_LAB_00d638d8;
  local_10 = 1;
  param_2 = &local_18;
  local_4 = 0;
  local_14 = ppuVar7;
  param_2 = (undefined ***)FUN_008897c0((void *)(param_3 + 0x10c),&param_2);
  if (param_2 == *(undefined ****)(iVar2 + 0x110)) {
LAB_0088c0ce:
    param_5 = *(int *)(iVar2 + 0x110);
    ppppuVar5 = (undefined ****)&param_5;
  }
  else {
    cVar4 = (*(code *)local_18[4])(param_2[3]);
    if (cVar4 != '\0') goto LAB_0088c0ce;
    ppppuVar5 = &param_2;
  }
  if (*ppppuVar5 == *(undefined ****)(iVar2 + 0x110)) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)(**(code **)*(*ppppuVar5)[3])(iVar2);
  }
  FUN_008850b0(this_00,param_4,ppuVar7,(int)puVar6);
  if (puVar6 != (undefined4 *)0x0) {
    piVar1 = puVar6 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar6)(1);
    }
  }
LAB_0088c111:
  *param_1 = this_00;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0088c130 @ 0088c130 ////

void __thiscall FUN_0088c130(void *this,char param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  int local_8;
  void *local_4;
  
  iVar8 = *(int *)((int)this + 0x10);
  local_4 = this;
  if (iVar8 != *(int *)((int)this + 0x14)) {
    do {
      iVar7 = *(int *)(iVar8 + 4);
      if (iVar7 != *(int *)(iVar8 + 8)) {
        do {
          iVar2 = *(int *)(iVar7 + 0x3c);
          if ((*(int *)(iVar2 + 0x50) == 0x10) &&
             (local_8 = iVar2 + 0x54, *(char *)(iVar2 + 0x54) == param_1)) {
            iVar3 = *(int *)((int)param_2 + 4);
            for (uVar9 = 0;
                (iVar3 != 0 && (uVar9 < (uint)(*(int *)((int)param_2 + 8) - iVar3 >> 2)));
                uVar9 = uVar9 + 1) {
              pbVar5 = *(byte **)(iVar3 + uVar9 * 4);
              pbVar10 = (byte *)(iVar2 + 0x54);
              do {
                bVar1 = *pbVar5;
                bVar11 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_0088c1ca:
                  iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_0088c1cf;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                bVar11 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_0088c1ca;
                pbVar5 = pbVar5 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_0088c1cf:
              if (iVar6 == 0) goto LAB_0088c221;
            }
            if ((iVar3 == 0) ||
               ((uint)(*(int *)((int)param_2 + 0xc) - iVar3 >> 2) <=
                (uint)(*(int *)((int)param_2 + 8) - iVar3 >> 2))) {
              FUN_0088b3e0(param_2,*(undefined4 **)((int)param_2 + 8),1,&local_8);
            }
            else {
              piVar4 = *(int **)((int)param_2 + 8);
              *piVar4 = local_8;
              *(int **)((int)param_2 + 8) = piVar4 + 1;
            }
          }
LAB_0088c221:
          iVar7 = iVar7 + 0x40;
          this = local_4;
        } while (iVar7 != *(int *)(iVar8 + 8));
      }
      iVar8 = iVar8 + 0x20;
    } while (iVar8 != *(int *)((int)this + 0x14));
  }
  return;
}


//// FUNCTION FUN_0088c2b0 @ 0088c2b0 ////

void __thiscall FUN_0088c2b0(void *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    FUN_0088b290(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*(int *)(*(int *)((int)this + 4) + uVar2 * 4) == 0) {
    pvVar1 = operator_new(0x10);
    *(void **)(*(int *)((int)this + 4) + uVar2 * 4) = pvVar1;
  }
  FUN_00872e20(*(void **)(*(int *)((int)this + 4) + uVar2 * 4),param_1);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}


//// FUNCTION FUN_0088c370 @ 0088c370 ////

void __thiscall FUN_0088c370(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cea658;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x21) != '\0') {
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
  FUN_00888290((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x21) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x21) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x21) == '\0') {
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
      iVar1 = param_2[8];
      *(char *)(param_2 + 8) = (char)_Memory[8];
      *(char *)(_Memory + 8) = (char)iVar1;
      goto LAB_0088c4df;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x21) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x21) == '\0') {
      piVar2 = (int *)FUN_008881f0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x21) == '\0') {
      uVar3 = FUN_008881d0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0088c4df:
  if ((char)_Memory[8] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[8] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[8] == '\0') {
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(piVar5 + 8) = 0;
            FUN_00888e60(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x21) == '\0') {
            if ((*(char *)(*piVar4 + 0x20) != '\x01') || (*(char *)(piVar4[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x20) = 1;
                *(undefined1 *)(piVar4 + 8) = 0;
                FUN_008880b0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 8) = (char)piVar5[8];
              *(undefined1 *)(piVar5 + 8) = 1;
              *(undefined1 *)(piVar4[2] + 0x20) = 1;
              FUN_00888e60(this,(int)piVar5);
              break;
            }
LAB_0088c5a8:
            *(undefined1 *)(piVar4 + 8) = 0;
          }
        }
        else {
          if ((char)piVar4[8] == '\0') {
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(piVar5 + 8) = 0;
            FUN_008880b0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x21) == '\0') {
            if ((*(char *)(piVar4[2] + 0x20) == '\x01') && (*(char *)(*piVar4 + 0x20) == '\x01'))
            goto LAB_0088c5a8;
            if (*(char *)(*piVar4 + 0x20) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x20) = 1;
              *(undefined1 *)(piVar4 + 8) = 0;
              FUN_00888e60(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 8) = (char)piVar5[8];
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(*piVar4 + 0x20) = 1;
            FUN_008880b0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 8) = 1;
  }
  if (_Memory[5] == 0) {
    _Memory[5] = 0;
    _Memory[6] = 0;
    _Memory[7] = 0;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_00872b30(_Memory[5],_Memory[6]);
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[5]);
}


//// FUNCTION FUN_0088c660 @ 0088c660 ////

void FUN_0088c660(void *param_1)

{
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    FUN_0088c660(*(void **)((int)param_1 + 8));
    FUN_0088b680((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0088c6c0 @ 0088c6c0 ////

void __thiscall FUN_0088c6c0(void *this,void *param_1,void *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int extraout_ECX;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cea670;
  local_10 = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  uVar7 = (int)param_3 - (int)param_2 >> 4;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - iVar2 >> 4;
  }
  if (uVar7 != 0) {
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar2 >> 4;
    }
    ExceptionList = &local_10;
    if (0xfffffffU - iVar6 < uVar7) {
      ExceptionList = &local_10;
      uVar1 = FUN_008727d0();
      iVar2 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar2 >> 4;
    }
    if (uVar1 < iVar6 + uVar7) {
      if (0xfffffff - (uVar1 >> 1) < uVar1) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 + (uVar1 >> 1);
      }
      if (iVar2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - iVar2 >> 4;
      }
      if (uVar1 < iVar6 + uVar7) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)((int)this + 8) - iVar2 >> 4;
        }
        uVar1 = iVar2 + uVar7;
      }
      pvVar3 = operator_new(uVar1 * 0x10);
      local_8 = 0;
      pvVar4 = FUN_00873150(*(int *)((int)this + 4),(int)param_1,pvVar3);
      pvVar4 = FUN_0088bdf0((int)param_2,(int)param_3,pvVar4);
      FUN_00873150((int)param_1,*(int *)((int)this + 8),pvVar4);
      iVar2 = *(int *)((int)this + 4);
      if (iVar2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - iVar2 >> 4;
      }
      if (iVar2 != 0) {
        FUN_00872b30(iVar2,*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar1 * 0x10 + (int)pvVar3);
      *(void **)((int)this + 8) = (void *)((uVar7 + iVar6) * 0x10 + (int)pvVar3);
      *(void **)((int)this + 4) = pvVar3;
      ExceptionList = local_10;
      return;
    }
    pvVar3 = *(void **)((int)this + 8);
    if ((uint)((int)pvVar3 - (int)param_1 >> 4) < uVar7) {
      FUN_00873150((int)param_1,(int)pvVar3,(void *)(uVar7 * 0x10 + (int)param_1));
      pvVar3 = (void *)(((int)*(void **)((int)this + 8) - (int)param_1 >> 4) * 0x10 + (int)param_2);
      local_8 = 2;
      FUN_0088bdf0((int)pvVar3,(int)param_3,*(void **)((int)this + 8));
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + uVar7 * 0x10;
      local_8 = 0xffffffff;
      FUN_0088b990(param_2,pvVar3,param_1);
      ExceptionList = local_10;
      return;
    }
    pvVar5 = (void *)((int)pvVar3 + uVar7 * -0x10);
    pvVar4 = FUN_00873150((int)pvVar5,(int)pvVar3,pvVar3);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00872f20(param_1,pvVar5,pvVar3);
    FUN_0088b990(param_2,param_3,param_1);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0088c970 @ 0088c970 ////

void * __thiscall FUN_0088c970(void *this,void *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (this == param_1) {
    return this;
  }
  pvVar3 = *(void **)((int)param_1 + 4);
  if (pvVar3 != (void *)0x0) {
    uVar2 = (int)*(void **)((int)param_1 + 8) - (int)pvVar3 >> 4;
    if (uVar2 != 0) {
      pvVar1 = *(void **)((int)this + 4);
      if (pvVar1 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)((int)this + 8) - (int)pvVar1 >> 4;
      }
      if (uVar2 <= uVar6) {
        pvVar3 = FUN_0088b950(pvVar3,*(void **)((int)param_1 + 8),pvVar1);
        FUN_00872b30((int)pvVar3,*(int *)((int)this + 8));
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 4) * 0x10 +
             *(int *)((int)this + 4);
        return this;
      }
      if (pvVar1 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)((int)this + 0xc) - (int)pvVar1 >> 4;
      }
      if (uVar6 < uVar2) {
        if (pvVar1 != (void *)0x0) {
          FUN_00872ec0((int)pvVar1,*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        if (*(int *)((int)param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 4;
        }
        uVar5 = FUN_0088b1b0(this,uVar2);
        if ((char)uVar5 == '\0') {
          return this;
        }
        uVar5 = FUN_008732d0(*(int *)((int)param_1 + 4),*(int *)((int)param_1 + 8),
                             *(void **)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar5;
        return this;
      }
      if (pvVar1 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)pvVar1 >> 4;
      }
      pvVar3 = (void *)(iVar4 * 0x10 + (int)*(void **)((int)param_1 + 4));
      FUN_0088b950(*(void **)((int)param_1 + 4),pvVar3,pvVar1);
      pvVar3 = FUN_00873150((int)pvVar3,*(int *)((int)param_1 + 8),*(void **)((int)this + 8));
      *(void **)((int)this + 8) = pvVar3;
      return this;
    }
  }
  FUN_0088b170((int)this);
  return this;
}


//// FUNCTION FUN_0088cad0 @ 0088cad0 ////

int __thiscall FUN_0088cad0(void *this,int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cea680;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0xfffffff < uVar1) {
      uVar1 = FUN_008727d0();
    }
    pvVar2 = operator_new(uVar1 * 0x10);
    *(void **)((int)this + 4) = pvVar2;
    *(void **)((int)this + 8) = pvVar2;
    *(void **)((int)this + 0xc) = (void *)(uVar1 * 0x10 + (int)pvVar2);
    local_8 = 0;
    pvVar2 = FUN_0088bdf0(*(int *)(param_1 + 4),*(int *)(param_1 + 8),pvVar2);
    *(void **)((int)this + 8) = pvVar2;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_0088cb90 @ 0088cb90 ////

void * __thiscall FUN_0088cb90(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cea698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0088b5c0(this,param_1);
  local_4 = 0;
  FUN_0088cad0((void *)((int)this + 0x10),param_1 + 0x10);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0088cbf0 @ 0088cbf0 ////

void __fastcall FUN_0088cbf0(int param_1)

{
  FUN_0088c660(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0088cc90 @ 0088cc90 ////

void * __cdecl FUN_0088cc90(void *param_1,void *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_0088b6c0(param_3,param_1);
    FUN_0088c970((void *)((int)param_3 + 0x10),(void *)((int)param_1 + 0x10));
    param_1 = (void *)((int)param_1 + 0x20);
    param_3 = (void *)((int)param_3 + 0x20);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_0088ccd0 @ 0088ccd0 ////

void * __cdecl FUN_0088ccd0(void *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  void *this;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    pvVar1 = (void *)((int)param_2 + -0x20);
    this = (void *)((int)param_3 + -0x20);
    FUN_0088b6c0(this,pvVar1);
    FUN_0088c970((void *)((int)param_3 + -0x10),(void *)((int)param_2 + -0x10));
    param_2 = pvVar1;
    param_3 = this;
  } while (pvVar1 != param_1);
  return this;
}


//// FUNCTION FUN_0088cd10 @ 0088cd10 ////

void __cdecl FUN_0088cd10(void *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea6c1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_0088cb90(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0088cd60 @ 0088cd60 ////

undefined1 __fastcall FUN_0088cd60(void *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  void *pvVar13;
  bool bVar14;
  byte **ppbVar15;
  char *in_stack_fffffde0;
  byte **ppbVar16;
  undefined4 in_stack_fffffde4;
  uint in_stack_fffffde8;
  undefined4 uVar17;
  char **ppcVar18;
  uint uVar19;
  undefined1 **ppuVar20;
  uint uVar21;
  char local_1ed;
  undefined1 *local_1ec;
  undefined1 local_1e5;
  byte *local_1e4;
  uint local_1e0;
  uint local_1dc;
  byte local_1d8 [20];
  byte *local_1c4;
  undefined4 local_1c0;
  uint local_1bc;
  byte local_1b8 [20];
  uint *local_1a4;
  void *local_1a0;
  uint local_19c;
  uint local_198 [5];
  byte *local_184;
  uint local_180;
  uint local_17c;
  byte local_178 [20];
  char *local_164 [2];
  uint local_15c;
  undefined1 *local_134 [2];
  char *local_12c;
  undefined4 local_128;
  uint local_124;
  char local_120 [20];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cea775;
  local_c = ExceptionList;
  local_1ec = (undefined1 *)0x0;
  local_184 = local_178;
  local_1e5 = 1;
  local_178[0] = 0;
  local_180 = 0;
  local_17c = 0x14;
  local_4 = 0;
  uStack_3 = 0;
  ExceptionList = &local_c;
  FUN_0088b9d0(param_1,(char *)&local_184);
  FUN_0048ad50((int *)&local_184);
  local_1c4 = local_1b8;
  local_1b8[0] = 0;
  local_1c0 = 0;
  local_1bc = 0x14;
  _strncpy((char *)local_1c4,"extern",6);
  uVar21 = 6;
  local_1c0 = 6;
  uVar19 = 0;
  local_1c4[6] = 0;
  uVar17 = 0x88ce19;
  puVar4 = FUN_00430770(&local_184,local_164,uVar19,uVar21);
  pbVar9 = (byte *)*puVar4;
  pbVar11 = local_1c4;
  do {
    bVar1 = *pbVar9;
    bVar14 = bVar1 < *pbVar11;
    if (bVar1 != *pbVar11) {
LAB_0088ce49:
      iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_0088ce4e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar9[1];
    bVar14 = bVar1 < pbVar11[1];
    if (bVar1 != pbVar11[1]) goto LAB_0088ce49;
    pbVar9 = pbVar9 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0088ce4e:
  local_1ed = iVar5 == 0;
  if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
    _free(local_164[0]);
  }
  if (0x14 < local_1bc) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c4);
  }
  if ((bool)local_1ed) {
    local_1e4 = local_1d8;
    local_1d8[0] = 0;
    local_1e0 = 0;
    local_1dc = 0x20;
    local_1e4 = _malloc(0x20);
    _strncpy((char *)local_1e4,"externdamageincreased",0x15);
    local_1e0 = 0x15;
    local_1e4[0x15] = 0;
    if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
      _free(local_1e4);
    }
    local_1e4 = local_1d8;
    local_1d8[0] = 0;
    local_1e0 = 0;
    local_1dc = 0x14;
    _strncpy((char *)local_1e4,"externkillwin",0xd);
    local_1e0 = 0xd;
    local_1e4[0xd] = 0;
    pbVar9 = local_184;
    pbVar11 = local_1e4;
    do {
      bVar1 = *pbVar9;
      bVar14 = bVar1 < *pbVar11;
      if (bVar1 != *pbVar11) {
LAB_0088cf54:
        iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_0088cf59;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar9[1];
      bVar14 = bVar1 < pbVar11[1];
      if (bVar1 != pbVar11[1]) goto LAB_0088cf54;
      pbVar9 = pbVar9 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0088cf59:
    local_1ed = iVar5 == 0;
    if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
      _free(local_1e4);
    }
    if ((bool)local_1ed) {
      local_1e4 = local_1d8;
      local_1d8[0] = 0;
      local_1e0 = 0;
      local_1dc = 0x14;
      local_4 = 1;
      FUN_0088b9d0(param_1,(char *)&local_1e4);
      local_1ec = &stack0xfffffde0;
      pcVar10 = &stack0xfffffdec;
      uVar17 = 0;
      uVar19 = 0x14;
      FUN_004015d0(&stack0xfffffde0,(char *)local_1e4,local_1e0);
      iVar5 = FUN_008891a0(param_1,pcVar10,uVar17,uVar19);
      if (((iVar5 != 0) && (*(undefined4 **)(iVar5 + 0x204) != (undefined4 *)0x0)) &&
         (*(char *)(iVar5 + 0x224) == '\0')) {
        FUN_00401440(*(undefined4 **)(iVar5 + 0x204));
        FUN_00433b50((void *)(iVar5 + 0x1f0),0);
        *(undefined1 *)(iVar5 + 0x224) = 1;
      }
      if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
        _free(local_1e4);
      }
      goto LAB_0088db5a;
    }
    local_1c4 = local_1b8;
    local_1b8[0] = 0;
    local_1c0 = 0;
    local_1bc = 0x14;
    _strncpy((char *)local_1c4,(char *)&PTR_LAB_00d63a2c,3);
    uVar21 = 3;
    local_1c0 = 3;
    uVar19 = 6;
    local_1c4[3] = 0;
    puVar4 = FUN_00430770(&local_184,local_164,uVar19,uVar21);
    uVar17 = FUN_00401ec0(puVar4,&local_1c4);
    local_1ed = (char)uVar17;
    if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
      _free(local_164[0]);
    }
    if (0x14 < local_1bc) {
                    /* WARNING: Subroutine does not return */
      _free(local_1c4);
    }
    if (local_1ed != '\0') {
      local_1c4 = local_1b8;
      local_1ec = (undefined1 *)0x0;
      local_1b8[0] = 0;
      local_1c0 = 0;
      local_1bc = 0x14;
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      local_1a4 = local_198;
      local_198[0] = local_198[0] & 0xffffff00;
      local_1a0 = (void *)0x0;
      local_19c = 0x14;
      local_4 = 4;
      FUN_0088b9d0(param_1,(char *)&local_1c4);
      FUN_0088b9d0(param_1,(char *)&local_12c);
      uVar17 = FUN_0088b9d0(param_1,(char *)&local_1a4);
      if ((char)uVar17 != '\0') {
        local_1ec = (undefined1 *)0x3;
      }
      local_1e4 = local_1d8;
      local_1d8[0] = 0;
      local_1e0 = 0;
      local_1dc = 0x14;
      _strncpy((char *)local_1e4,"setvisible",10);
      uVar21 = 10;
      uVar19 = 9;
      ppcVar18 = local_164;
      local_1e0 = 10;
      local_1e4[10] = 0;
      puVar4 = FUN_00430770(&local_184,ppcVar18,uVar19,uVar21);
      uVar17 = FUN_00401ec0(puVar4,&local_1e4);
      local_1ed = (char)uVar17;
      if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
        _free(local_164[0]);
      }
      if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
        _free(local_1e4);
      }
      if (local_1ed == '\0') {
        local_134[0] = &stack0xfffffde0;
        FUN_00403de0(&stack0xfffffde0,&local_1c4);
        iVar5 = FUN_008891a0(param_1,in_stack_fffffde0,in_stack_fffffde4,in_stack_fffffde8);
        local_1e4 = local_1d8;
        local_1d8[0] = 0;
        local_1e0 = 0;
        local_1dc = 0x14;
        _strncpy((char *)local_1e4,"locktosize",10);
        uVar21 = 10;
        uVar19 = 9;
        ppcVar18 = local_164;
        local_1e0 = 10;
        local_1e4[10] = 0;
        puVar4 = FUN_00430770(&local_184,ppcVar18,uVar19,uVar21);
        uVar17 = FUN_00401ec0(puVar4,&local_1e4);
        local_1ed = (char)uVar17;
        if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
          _free(local_164[0]);
        }
        if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
          _free(local_1e4);
        }
        if (local_1ed == '\0') {
          FUN_00401de0(local_164,"locktoscale",0xffffffff);
          puVar4 = FUN_00430770(&local_184,&local_1e4,9,0xb);
          uVar17 = FUN_00401ec0(puVar4,local_164);
          local_1ed = (char)uVar17;
          if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
            _free(local_1e4);
          }
          if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
            _free(local_164[0]);
          }
          if (local_1ed != '\0') {
            *(undefined2 *)(iVar5 + 0x236) = 2;
          }
        }
        else {
          *(undefined2 *)(iVar5 + 0x236) = 1;
        }
        if (*(int *)(iVar5 + 0x204) == 0) {
          if (local_1ec == (undefined1 *)0x3) {
            cVar3 = (char)*local_1a4;
            for (pvVar13 = (void *)0x0; (cVar3 != ':' && (pvVar13 < local_1a0));
                pvVar13 = (void *)((int)pvVar13 + 1)) {
              cVar3 = *(char *)((int)local_1a4 + (int)pvVar13 + 1U);
            }
            FUN_00430770(&local_1a4,local_164,0,(uint)pvVar13);
            FUN_00430770(&local_1a4,&local_1e4,(int)pvVar13 + 1,(uint)local_1a0);
            _local_4 = CONCAT31(uStack_3,6);
            bVar14 = FUN_00430950(&local_1e4,"NULL");
            if ((bVar14) && (bVar14 = FUN_00430950(&local_1e4,"null"), bVar14)) {
              iVar7 = *(int *)((int)param_1 + 0x164);
              FUN_00591070((void *)(iVar7 + 0x1c),(int *)&local_1ec,&local_1e4);
              puVar2 = local_1ec;
              if (local_1ec == *(undefined1 **)(iVar7 + 0x20)) {
                _sprintf(local_10c,"Could not find label for %s");
              }
              else {
                FUN_0048ad50((int *)local_164);
                *(undefined4 *)(iVar5 + 0x230) = *(undefined4 *)(puVar2 + 0x2c);
                uVar17 = FUN_008819d0(*(void **)((int)param_1 + 0x158),local_164[0]);
                *(undefined4 *)(iVar5 + 0x208) = uVar17;
              }
            }
            if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
              _free(local_1e4);
            }
            local_4 = 4;
            if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
              _free(local_164[0]);
            }
          }
          else {
            *(undefined4 *)(iVar5 + 0x230) = 0xffffffff;
            *(undefined4 *)(iVar5 + 0x208) = 0;
          }
          FUN_0087b120(*(void **)(*(int *)((int)param_1 + 0x158) + 0x178),&local_12c,iVar5,
                       (uint)param_1);
          if (0x14 < local_19c) {
                    /* WARNING: Subroutine does not return */
            _free(local_1a4);
          }
          if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
            _free(local_12c);
          }
          if (0x14 < local_1bc) {
                    /* WARNING: Subroutine does not return */
            _free(local_1c4);
          }
          goto LAB_0088db5a;
        }
        if (((*(uint *)(*(int *)(iVar5 + 0x204) + 0x218) >> 4 & 1) == 0) &&
           (*(code **)(iVar5 + 0x238) != (code *)0x0)) {
          iVar7 = (**(code **)(iVar5 + 0x238))();
          FUN_00433b50((void *)(iVar5 + 0x1f0),iVar7);
          (**(code **)(**(int **)(iVar5 + 0x204) + 0x20))();
          *(undefined4 *)(iVar5 + 0x22c) = 0;
        }
        *(undefined1 *)(iVar5 + 0x224) = 0;
        if (0x14 < local_19c) {
                    /* WARNING: Subroutine does not return */
          _free(local_1a4);
        }
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c);
        }
        if (0x14 < local_1bc) {
                    /* WARNING: Subroutine does not return */
          _free(local_1c4);
        }
        if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
          _free(local_184);
        }
      }
      else {
        piVar6 = (int *)FUN_0087b1b0(*(void **)(*(int *)((int)param_1 + 0x158) + 0x178),&local_1c4);
        FUN_0048ad50((int *)&local_12c);
        bVar14 = true;
        iVar5 = 5;
        pcVar10 = local_12c;
        pcVar12 = "true";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar14 = *pcVar10 == *pcVar12;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        } while (bVar14);
        local_1ec = (undefined1 *)CONCAT31(local_1ec._1_3_,bVar14);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x20))();
        }
        if (0x14 < local_19c) {
                    /* WARNING: Subroutine does not return */
          _free(local_1a4);
        }
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c);
        }
        if (0x14 < local_1bc) {
                    /* WARNING: Subroutine does not return */
          _free(local_1c4);
        }
        if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
          _free(local_184);
        }
      }
      ExceptionList = local_c;
      return 1;
    }
    pvVar13 = *(void **)(*(int *)((int)param_1 + 0x158) + 0x178);
    local_1ed = '\0';
LAB_0088db3e:
    puVar4 = FUN_0087b1e0(pvVar13,&local_184);
    if ((puVar4 != (undefined4 *)0x0) && (cVar3 = (*(code *)puVar4[6])(), cVar3 == '\0')) {
      local_1e5 = 0;
    }
  }
  else {
    if (local_180 < 0xd) {
LAB_0088d6b5:
      local_1ed = '\0';
    }
    else {
      local_1e4 = local_1d8;
      local_1d8[0] = 0;
      local_1e0 = 0;
      local_1dc = 0x14;
      _strncpy((char *)local_1e4,"toggleboolvar",0xd);
      uVar21 = 0xd;
      uVar19 = 0;
      ppcVar18 = local_164;
      local_1e0 = 0xd;
      local_1e4[0xd] = 0;
      uVar17 = 0x88d696;
      puVar4 = FUN_00430770(&local_184,ppcVar18,uVar19,uVar21);
      local_1ec = (undefined1 *)0x3;
      uVar8 = FUN_00401ec0(puVar4,&local_1e4);
      local_1ed = '\x01';
      if ((char)uVar8 == '\0') goto LAB_0088d6b5;
    }
    if ((((uint)local_1ec & 2) != 0) &&
       (local_1ec = (undefined1 *)((uint)local_1ec & 0xfffffffd), 0x14 < local_15c)) {
                    /* WARNING: Subroutine does not return */
      _free(local_164[0]);
    }
    if ((((uint)local_1ec & 1) != 0) &&
       (local_1ec = (undefined1 *)((uint)local_1ec & 0xfffffffe), 0x14 < local_1dc)) {
                    /* WARNING: Subroutine does not return */
      _free(local_1e4);
    }
    if (local_1ed == '\0') {
      local_1c4 = local_1b8;
      local_1b8[0] = 0;
      local_1c0 = 0;
      local_1bc = 0x14;
      _strncpy((char *)local_1c4,"incrvar",7);
      local_1c0 = 7;
      local_1c4[7] = 0;
      ppbVar16 = &local_1c4;
      local_1ec = (undefined1 *)((uint)local_1ec | 4);
      uVar17 = FUN_00401ec0(&local_184,ppbVar16);
      if ((char)uVar17 == '\0') {
        local_1e4 = local_1d8;
        local_1d8[0] = 0;
        local_1e0 = 0;
        local_1dc = 0x14;
        _strncpy((char *)local_1e4,"decrvar",7);
        local_1e0 = 7;
        local_1e4[7] = 0;
        ppbVar16 = &local_1e4;
        local_1ec = (undefined1 *)((uint)local_1ec | 8);
        uVar17 = FUN_00401ec0(&local_184,ppbVar16);
        local_1ed = '\0';
        if ((char)uVar17 != '\0') goto LAB_0088d913;
      }
      else {
LAB_0088d913:
        local_1ed = '\x01';
      }
      if ((((uint)local_1ec & 8) != 0) &&
         (local_1ec = (undefined1 *)((uint)local_1ec & 0xfffffff7), 0x14 < local_1dc)) {
                    /* WARNING: Subroutine does not return */
        _free(local_1e4);
      }
      if ((((uint)local_1ec & 4) != 0) && (0x14 < local_1bc)) {
                    /* WARNING: Subroutine does not return */
        _free(local_1c4);
      }
      if (local_1ed != '\0') {
        local_1c4 = local_1b8;
        local_1b8[0] = 0;
        local_1c0 = 0;
        local_1bc = 0x14;
        local_4 = 0xb;
        FUN_0088b9d0(param_1,(char *)&local_1c4);
        iVar5 = *(int *)(*(int *)((int)param_1 + 0x158) + 0x178);
        ppuVar20 = &local_1ec;
        pvVar13 = (void *)0x88d9ab;
        FUN_0087aa80((void *)(iVar5 + 0x28),(int *)ppuVar20,&local_1c4);
        puVar2 = local_1ec;
        if (local_1ec != *(undefined1 **)(iVar5 + 0x2c)) {
          local_134[0] = &stack0xfffffdf0;
          FUN_00872bc0(&stack0xfffffdf0,(int)(local_1ec + 0x2c));
          uVar19 = FUN_0087ac80(ppbVar16,pvVar13,(int)ppuVar20);
          local_1e4 = local_1d8;
          local_1d8[0] = 0;
          local_1e0 = 0;
          local_1dc = 0x14;
          _strncpy((char *)local_1e4,"incrvar",7);
          ppbVar16 = &local_1e4;
          ppbVar15 = &local_184;
          local_1e0 = 7;
          local_1e4[7] = 0;
          uVar17 = FUN_00401ec0(ppbVar15,ppbVar16);
          local_1ed = (char)uVar17;
          if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
            _free(local_1e4);
          }
          if (local_1ed == '\0') {
            pvVar13 = FUN_0088bc40(&local_1a4,uVar19 - 1);
            local_4 = 0xd;
          }
          else {
            pvVar13 = FUN_0088bc40(&local_1a4,uVar19 + 1);
            local_4 = 0xc;
          }
          FUN_00872ce0(puVar2 + 0x2c,pvVar13);
          FUN_00872710((int)&local_1a4);
        }
        if (0x14 < local_1bc) {
                    /* WARNING: Subroutine does not return */
          _free(local_1c4);
        }
        goto LAB_0088db5a;
      }
      local_1e4 = local_1d8;
      local_1d8[0] = 0;
      local_1e0 = 0;
      local_1dc = 0x14;
      _strncpy((char *)local_1e4,"playsound",9);
      ppbVar16 = &local_1e4;
      ppbVar15 = &local_184;
      local_1e0 = 9;
      local_1e4[9] = 0;
      uVar17 = FUN_00401ec0(ppbVar15,ppbVar16);
      local_1ed = (char)uVar17;
      if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
        _free(local_1e4);
      }
      if (local_1ed == '\0') {
        pvVar13 = *(void **)(*(int *)((int)param_1 + 0x158) + 0x178);
        goto LAB_0088db3e;
      }
      local_1e4 = local_1d8;
      local_1d8[0] = 0;
      local_1e0 = 0;
      local_1dc = 0x14;
      local_4 = 0xe;
      FUN_0088b9d0(param_1,(char *)&local_1e4);
    }
    else {
      local_1e4 = local_1d8;
      local_1d8[0] = 0;
      local_1e0 = 0;
      local_1dc = 0x14;
      local_4 = 7;
      FUN_0088b9d0(param_1,(char *)&local_1e4);
      iVar5 = *(int *)(*(int *)((int)param_1 + 0x158) + 0x178);
      ppuVar20 = &local_1ec;
      pvVar13 = (void *)0x88d764;
      FUN_0087aa80((void *)(iVar5 + 0x28),(int *)ppuVar20,&local_1e4);
      puVar2 = local_1ec;
      if (local_1ec == *(undefined1 **)(iVar5 + 0x2c)) {
        _sprintf(local_10c,
                 "LSWF Warning: Boolean variable %s doesn\'t exist, creating and setting to 1");
        local_1a0 = (void *)0x0;
        local_19c = 0;
        local_198[0] = 0;
        local_4 = 8;
        local_1ed = '\x01';
        FUN_00886700(&local_1a4,&local_1ed);
        puVar4 = FUN_0087e210(local_164,&local_1e4,(int)&local_1a4);
        local_4 = 9;
        FUN_0087f830((void *)(*(int *)(*(int *)((int)param_1 + 0x158) + 0x178) + 0x28),local_134,
                     puVar4);
        FUN_0087b080(local_164);
      }
      else {
        local_134[0] = &stack0xfffffdf0;
        FUN_00872bc0(&stack0xfffffdf0,(int)(local_1ec + 0x2c));
        uVar17 = FUN_00889fe0(uVar17,pvVar13,(int)ppuVar20);
        pvVar13 = FUN_0088bbc0(&local_1a4,(char)uVar17 == '\0');
        local_4 = 10;
        FUN_00872ce0(puVar2 + 0x2c,pvVar13);
      }
      if (local_1a0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1a0);
      }
    }
    if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
      _free(local_1e4);
    }
  }
LAB_0088db5a:
  if (local_17c < 0x15) {
    ExceptionList = local_c;
    return local_1e5;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_184);
}


//// FUNCTION FUN_0088db90 @ 0088db90 ////

void __fastcall FUN_0088db90(void *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  char **ppcVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  void *pvVar16;
  undefined4 *this;
  byte local_1bc [7];
  char local_1b5;
  void *local_1b4;
  char *local_1b0;
  char *local_1ac;
  uint local_1a8;
  char *local_1a4;
  undefined1 local_1a0 [4];
  void *local_19c;
  byte *local_198;
  int local_194;
  int local_190;
  undefined1 local_18c [4];
  int local_188;
  int local_184;
  undefined1 local_17c [4];
  void *local_178;
  int local_174;
  undefined4 local_170;
  undefined1 local_16c [4];
  int local_168;
  int local_164;
  undefined1 *local_15c;
  undefined4 local_158;
  uint local_154;
  undefined1 local_150 [20];
  undefined1 *local_13c;
  undefined4 local_138;
  uint local_134;
  undefined1 local_130 [20];
  undefined1 local_11c [16];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cea7c2;
  local_c = ExceptionList;
  local_1b4 = (void *)((int)param_1 + 0x178);
  local_1a4 = (char *)0x0;
  local_1b5 = '\x01';
  ExceptionList = &local_c;
  for (local_1a8 = 0;
      (*(int *)((int)local_1b4 + 4) != 0 &&
      (local_1a8 < (uint)(*(int *)((int)local_1b4 + 8) - *(int *)((int)local_1b4 + 4) >> 4)));
      local_1a8 = local_1a8 + 1) {
    puVar4 = *(undefined1 **)(local_1a8 * 0x10 + 4 + *(int *)((int)param_1 + 0x17c));
    iVar13 = local_1a8 * 0x10 + *(int *)((int)param_1 + 0x17c);
    pbVar5 = puVar4 + 1;
    switch(*puVar4) {
    case 4:
      iVar13 = *(int *)((int)param_1 + 0x160);
      iVar12 = *(int *)(*(int *)(iVar13 + 0x164) + 0x10);
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(*(int *)(iVar13 + 0x164) + 0x14) - iVar12 >> 5;
      }
      *(int *)(iVar13 + 0x260) = (*(int *)(iVar13 + 0x260) + 1) % iVar12;
      break;
    case 5:
      iVar13 = *(int *)((int)param_1 + 0x160);
      iVar12 = *(int *)(*(int *)(iVar13 + 0x164) + 0x10);
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(*(int *)(iVar13 + 0x164) + 0x14) - iVar12 >> 5;
      }
      *(int *)(iVar13 + 0x260) = (*(int *)(iVar13 + 0x260) + -1 + iVar12) % iVar12;
      break;
    case 6:
      *(undefined1 *)(*(int *)((int)param_1 + 0x160) + 0x188) = 1;
      break;
    case 7:
      *(undefined1 *)(*(int *)((int)param_1 + 0x160) + 0x188) = 0;
      break;
    case 0x17:
      FUN_0088ab20((int)param_1 + 0x1dc);
      break;
    case 0x1c:
      uVar9 = (*(int *)((int)param_1 + 0x1ec) + *(int *)((int)param_1 + 0x1e8)) - 1;
      if (*(uint *)((int)param_1 + 0x1e4) <= uVar9) {
        uVar9 = uVar9 - *(uint *)((int)param_1 + 0x1e4);
      }
      FUN_00872bc0(local_17c,*(int *)(*(int *)((int)param_1 + 0x1e0) + uVar9 * 4));
      pvVar16 = local_178;
      local_4 = 0;
      if ((local_178 != (void *)0x0) && (1 < (uint)(local_174 - (int)local_178))) {
        local_13c = local_130;
        local_130[0] = 0;
        local_138 = 0;
        local_134 = 0x14;
        pcVar10 = (char *)((int)local_178 + 1);
        do {
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        FUN_004015d0(&local_13c,(char *)((int)local_178 + 1),(int)pcVar10 - ((int)local_178 + 2));
        FUN_0087aa80((void *)(*(int *)((int)param_1 + 0x158) + 0x130),&local_190,&local_13c);
        iVar13 = local_190;
        if (0x14 < local_134) {
                    /* WARNING: Subroutine does not return */
          _free(local_13c);
        }
        if (local_190 != *(int *)(*(int *)((int)param_1 + 0x158) + 0x134)) {
          FUN_0088ab20((int)param_1 + 0x1dc);
          FUN_00872bc0(local_11c,iVar13 + 0x2c);
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_0088c2b0((void *)((int)param_1 + 0x1dc),(int)local_11c);
          FUN_00872710((int)local_11c);
        }
      }
      local_4 = 0xffffffff;
      if (pvVar16 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar16);
      }
      local_178 = (void *)0x0;
      local_174 = 0;
      local_170 = 0;
      break;
    case 0x3d:
      local_1b5 = FUN_0088cd60(param_1);
      break;
    case 0x81:
      bVar2 = puVar4[2];
      *(uint *)(*(int *)((int)param_1 + 0x160) + 0x260) = (uint)*pbVar5;
      *(uint *)(*(int *)((int)param_1 + 0x160) + 0x260) =
           *(int *)(*(int *)((int)param_1 + 0x160) + 0x260) + (uint)bVar2 * 0x100;
      if (param_1 == *(void **)((int)param_1 + 0x160)) {
        iVar13 = *(int *)(*(int *)((int)param_1 + 0x164) + 0x10) +
                 *(int *)((int)param_1 + 0x260) * 0x20;
        FUN_0088c6c0(local_1b4,*(void **)((int)param_1 + 0x180),*(void **)(iVar13 + 0x14),
                     *(void **)(iVar13 + 0x18));
      }
      break;
    case 0x8b:
      cVar3 = puVar4[1];
      local_1a4 = puVar4 + 1;
      pcVar10 = (char *)0x0;
      iVar13 = 0;
      cVar11 = cVar3;
      if (cVar3 == '\0') {
LAB_0088dec6:
        pcVar10 = local_1a4;
      }
      else {
        do {
          if (cVar11 == '/') {
            pcVar10 = local_1a4 + iVar13 + 1;
          }
          iVar12 = iVar13 + 1;
          iVar13 = iVar13 + 1;
          cVar11 = local_1a4[iVar12];
        } while (local_1a4[iVar12] != '\0');
        if (pcVar10 == (char *)0x0) goto LAB_0088dec6;
      }
      if (cVar3 != '\0') {
        iVar13 = FUN_008819d0(*(void **)((int)param_1 + 0x158),pcVar10);
        *(int *)((int)param_1 + 0x160) = iVar13;
        if (iVar13 != 0) break;
      }
      *(void **)((int)param_1 + 0x160) = param_1;
      break;
    case 0x8c:
      local_15c = local_150;
      local_150[0] = 0;
      local_158 = 0;
      local_154 = 0x14;
      local_4 = 2;
      if (pbVar5 != *(byte **)(iVar13 + 8)) {
        do {
          local_1bc[0] = *pbVar5;
          FUN_004073f0(&local_15c,(char *)local_1bc,1);
          pbVar5 = pbVar5 + 1;
        } while (pbVar5 != *(byte **)(iVar13 + 8));
      }
      iVar13 = *(int *)(*(int *)((int)param_1 + 0x160) + 0x164);
      local_1b0 = (char *)FUN_00589920((void *)(iVar13 + 0x1c),&local_15c);
      pcVar10 = *(char **)(iVar13 + 0x20);
      if ((local_1b0 == pcVar10) ||
         (uVar6 = FUN_00441060(&local_15c,(undefined4 *)(local_1b0 + 0xc)), (char)uVar6 != '\0')) {
        local_1ac = pcVar10;
        ppcVar7 = &local_1ac;
      }
      else {
        ppcVar7 = &local_1b0;
      }
      if (*ppcVar7 == *(char **)(iVar13 + 0x20)) {
        _sprintf(local_10c,"Invalid label %s for target %s - label doesn\'t exist",local_15c,
                 local_1a4);
      }
      else {
        iVar12 = *(int *)(*ppcVar7 + 0x2c);
        iVar8 = iVar12 * 0x20;
        FUN_0088c6c0(local_1b4,*(void **)((int)param_1 + 0x180),
                     *(void **)(iVar8 + 0x14 + *(int *)(iVar13 + 0x10)),
                     *(void **)(iVar8 + 0x18 + *(int *)(iVar13 + 0x10)));
        *(int *)(*(int *)((int)param_1 + 0x160) + 0x260) = iVar12;
      }
      local_4 = 0xffffffff;
      if (0x14 < local_154) {
                    /* WARNING: Subroutine does not return */
        _free(local_15c);
      }
      break;
    case 0x96:
      pvVar16 = (void *)0x0;
      local_19c = (void *)0x0;
      local_198 = (byte *)0x0;
      local_194 = 0;
      local_4 = 3;
      if (pbVar5 != *(byte **)(iVar13 + 8)) {
        do {
          if ((pvVar16 == (void *)0x0) ||
             ((uint)(local_194 - (int)pvVar16) <= (uint)((int)local_198 - (int)pvVar16))) {
            FUN_00886410(local_1a0,local_198,1,pbVar5);
            pvVar16 = local_19c;
          }
          else {
            *local_198 = *pbVar5;
            local_198 = local_198 + 1;
          }
          pbVar5 = pbVar5 + 1;
        } while (pbVar5 != *(byte **)(iVar13 + 8));
      }
      FUN_0088c2b0((void *)((int)param_1 + 0x1dc),(int)local_1a0);
      local_4 = 0xffffffff;
      if (pvVar16 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar16);
      }
      local_19c = (void *)0x0;
      local_198 = (byte *)0x0;
      local_194 = 0;
      break;
    case 0x9a:
      local_1bc[0] = *pbVar5;
      uVar9 = (*(int *)((int)param_1 + 0x1ec) + *(int *)((int)param_1 + 0x1e8)) - 1;
      if (*(uint *)((int)param_1 + 0x1e4) <= uVar9) {
        uVar9 = uVar9 - *(uint *)((int)param_1 + 0x1e4);
      }
      FUN_00872bc0(local_16c,*(int *)(*(int *)((int)param_1 + 0x1e0) + uVar9 * 4));
      local_4 = 4;
      FUN_0088ab20((int)param_1 + 0x1dc);
      uVar9 = (*(int *)((int)param_1 + 0x1ec) + *(int *)((int)param_1 + 0x1e8)) - 1;
      if (*(uint *)((int)param_1 + 0x1e4) <= uVar9) {
        uVar9 = uVar9 - *(uint *)((int)param_1 + 0x1e4);
      }
      FUN_00872bc0(local_18c,*(int *)(*(int *)((int)param_1 + 0x1e0) + uVar9 * 4));
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_0088ab20((int)param_1 + 0x1dc);
      if (local_168 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = local_164 - local_168;
      }
      local_1b0 = operator_new(uVar9);
      for (uVar9 = 1; (local_168 != 0 && (uVar9 < (uint)(local_164 - local_168))); uVar9 = uVar9 + 1
          ) {
        local_1b0[uVar9 - 1] = *(char *)(uVar9 + local_168);
      }
      local_1b0[uVar9 - 1] = '\0';
      if (local_188 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = local_184 - local_188;
      }
      pcVar10 = operator_new(uVar9);
      for (uVar9 = 1; (local_188 != 0 && (uVar9 < (uint)(local_184 - local_188))); uVar9 = uVar9 + 1
          ) {
        pcVar10[uVar9 - 1] = *(char *)(local_188 + uVar9);
      }
      pcVar10[uVar9 - 1] = '\0';
      if ((local_1bc[0] & 0x40) != 0) {
        FUN_008819d0(*(void **)((int)param_1 + 0x158),local_1b0);
        FUN_0099bb50(pcVar10,0,0,0,'\0');
      }
                    /* WARNING: Subroutine does not return */
      _free(pcVar10);
    }
    if (local_1b5 == '\0') break;
  }
  pvVar16 = local_1b4;
  puVar14 = *(undefined4 **)((int)param_1 + 0x180);
  this = *(undefined4 **)((int)param_1 + 0x17c);
  if (this != puVar14) {
    puVar15 = *(undefined4 **)((int)local_1b4 + 8);
    for (; puVar14 != puVar15; puVar14 = puVar14 + 4) {
      FUN_00872ce0(this,puVar14);
      this = this + 4;
    }
    puVar14 = *(undefined4 **)((int)pvVar16 + 8);
    if (this != puVar14) {
      puVar15 = this + 1;
      do {
        if ((void *)*puVar15 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*puVar15);
        }
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[2] = 0;
        puVar1 = puVar15 + 3;
        pvVar16 = local_1b4;
        puVar15 = puVar15 + 4;
      } while (puVar1 != puVar14);
    }
    *(undefined4 **)((int)pvVar16 + 8) = this;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0088e3b0 @ 0088e3b0 ////

void __thiscall FUN_0088e3b0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0088c660((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x21) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x21);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x21);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x21);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x21);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0088c370(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0088e4d0 @ 0088e4d0 ////

void __cdecl FUN_0088e4d0(void *param_1,void *param_2,void *param_3)

{
  if (param_1 != param_2) {
    do {
      FUN_0088b6c0(param_1,param_3);
      FUN_0088c970((void *)((int)param_1 + 0x10),(void *)((int)param_3 + 0x10));
      param_1 = (void *)((int)param_1 + 0x20);
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_0088e550 @ 0088e550 ////

void * __cdecl FUN_0088e550(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cea7e9;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_0088b5c0(param_3,param_1);
      local_8 = 2;
      FUN_0088cad0((void *)((int)param_3 + 0x10),param_1 + 0x10);
    }
    param_3 = (void *)((int)param_3 + 0x20);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_0088e660 @ 0088e660 ////

void __thiscall FUN_0088e660(void *this,undefined4 *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_2 != param_3) {
    pvVar2 = FUN_0088cc90(param_3,*(void **)((int)this + 8),param_2);
    pvVar1 = *(void **)((int)this + 8);
    for (pvVar3 = pvVar2; pvVar3 != pvVar1; pvVar3 = (void *)((int)pvVar3 + 0x20)) {
      FUN_00884360((int)pvVar3);
    }
    *(void **)((int)this + 8) = pvVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0088e6c0 @ 0088e6c0 ////

undefined4 *
FUN_0088e6c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cea811;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x24);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    FUN_0088cad0(puVar1 + 4,(int)(param_4 + 1));
    *(undefined1 *)(puVar1 + 8) = param_5;
    *(undefined1 *)((int)puVar1 + 0x21) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_0088e790 @ 0088e790 ////

void __cdecl FUN_0088e790(void *param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cea839;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_0088b5c0(param_1,param_3);
      local_8 = 2;
      FUN_0088cad0((void *)((int)param_1 + 0x10),param_3 + 0x10);
    }
    param_1 = (void *)((int)param_1 + 0x20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0088e870 @ 0088e870 ////

void __thiscall FUN_0088e870(void *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  float10 fVar9;
  int iVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  int iVar13;
  undefined3 uStack_50;
  undefined1 local_4d;
  undefined1 *puStack_4c;
  float fStack_48;
  float fStack_44;
  void *pvStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  void *local_30;
  int local_2c;
  undefined4 local_28;
  int local_24 [3];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea863;
  local_c = ExceptionList;
  iVar10 = *(int *)(*(int *)((int)this + 0x158) + 400);
  ExceptionList = &local_c;
  if (((iVar10 != 0) &&
      (iVar5 = *(int *)((int)this + 0x204), ExceptionList = &local_c, *(int *)(iVar5 + 0x154) == 0))
     && (ExceptionList = &local_c, *(int *)(iVar5 + 0x150) == 0)) {
    piVar8 = (int *)(iVar5 + 0x150);
    ExceptionList = &local_c;
    *piVar8 = iVar10 + 0x120;
    *(undefined4 *)(iVar5 + 0x154) = *(undefined4 *)(iVar10 + 0x124);
    **(undefined4 **)(iVar10 + 0x124) = piVar8;
    *(int **)(iVar10 + 0x124) = piVar8;
  }
  if ((*(uint *)(*(int *)((int)this + 0x204) + 0x218) >> 4 & 1) == 0) {
    if ((*(int *)((int)this + 0x22c) == 0) &&
       (*(undefined4 *)((int)this + 0x22c) = 1, *(int *)((int)this + 0x208) != 0)) {
      local_30 = (void *)0x0;
      local_2c = 0;
      local_28 = 0;
      local_4 = 0;
      _uStack_50 = CONCAT13(0x81,uStack_50);
      FUN_00886700(&local_34,&local_4d);
      _uStack_50 = CONCAT13(*(undefined1 *)((int)this + 0x230),uStack_50);
      FUN_00886700(&local_34,&local_4d);
      FUN_00886ba0((void *)(*(int *)((int)this + 0x208) + 0x178),(int)&local_34);
      *(undefined1 *)(*(int *)((int)this + 0x208) + 0x188) = 1;
      local_4 = 0xffffffff;
      if (local_30 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_30);
      }
    }
    *(undefined1 *)((int)this + 0x224) = 1;
  }
  local_4 = 0xffffffff;
  iVar5 = *(int *)((int)this + 0x260) * 0x20 + *(int *)(*(int *)((int)this + 0x164) + 0x10);
  iVar10 = *(int *)(iVar5 + 4);
  if (((iVar10 != 0) && (*(int *)(iVar5 + 8) - iVar10 >> 6 != 0)) &&
     (((*(byte *)(*(int *)(iVar10 + 0x3c) + 0x50) & 2) != 0 &&
      ((((uint)(*(int **)((int)this + 0x204))[0x86] >> 4 & 1) != 0 &&
       (*(char *)((int)this + 0x224) == '\0')))))) {
    if (*(short *)((int)this + 0x234) == -1) {
      iVar13 = 0;
      pTVar12 = &TM::CWindowFrame::RTTI_Type_Descriptor;
      pTVar11 = &TM::CBackground::RTTI_Type_Descriptor;
      iVar10 = 0;
      piVar8 = (int *)(**(code **)(**(int **)((int)this + 0x204) + 0xa4))();
      iVar10 = FUN_00ace790(piVar8,iVar10,pTVar11,pTVar12,iVar13);
      *(ushort *)((int)this + 0x234) = (ushort)(iVar10 != 0);
    }
    iVar10 = *(int *)(*(int *)(*(int *)(iVar5 + 4) + 0x3c) + 0x160);
    iVar13 = *(int *)(iVar10 + 0x50);
    iVar1 = *(int *)(iVar10 + 0x54);
    local_2c = *(int *)(iVar10 + 0x58);
    iVar10 = *(int *)(iVar10 + 0x5c);
    FUN_0086ddb0(&DAT_00e5e7e4,local_24,(int *)(*(int *)(iVar5 + 4) + 4));
    pvStack_40 = (void *)(iVar10 - local_2c);
    bVar3 = false;
    puStack_4c = (undefined1 *)((float)(int)pvStack_40 * 0.05);
    if (((*(float *)((int)this + 0x1c4) == (float)*(int *)((int)param_1 + 0x10)) &&
        (*(float *)((int)this + 0x1c8) == (float)*(int *)((int)param_1 + 0x14))) ||
       (*(char *)((int)this + 0x188) == '\0')) {
      bVar3 = true;
    }
    if (*(short *)((int)this + 0x236) < 1) {
      fStack_3c = (float)iStack_14 * 0.05;
      fStack_38 = (float)iStack_10 * 0.05;
      if (*(char *)((int)this + 0x224) == '\0') {
        iVar10 = **(int **)((int)this + 0x204);
        (**(code **)(iVar10 + 0x10))();
        (**(code **)(iVar10 + 0x5c))();
        iVar10 = **(int **)((int)this + 0x204);
        uVar2 = *(undefined4 *)(*(int *)((int)this + 0x158) + 400);
        (**(code **)(iVar10 + 0x14))();
        (**(code **)(iVar10 + 100))(1,uVar2);
        do {
          cVar4 = (**(code **)(**(int **)((int)this + 0x204) + 0x50))();
        } while (cVar4 != '\0');
      }
    }
    else {
      fStack_3c = (float)iStack_14 * 0.05;
      fStack_38 = (float)iStack_10 * 0.05;
      param_1 = (float)local_24[0] * 1.5258789e-05 * (float)(iVar1 - iVar13) * 0.05;
      puStack_4c = (undefined1 *)((float)iStack_18 * 1.5258789e-05 * (float)puStack_4c);
      cVar4 = (**(code **)(**(int **)(*(int *)((int)this + 0x158) + 400) + 0x100))();
      if (cVar4 != '\0') {
        piVar8 = (int *)FUN_0071b2b0();
        piVar6 = (int *)FUN_0071b2a0();
        fVar9 = (float10)(**(code **)(*piVar8 + 0x10))();
        pvStack_40 = (void *)(float)fVar9;
        fVar9 = (float10)(**(code **)(*piVar6 + 0x10))();
        fStack_44 = (float)((float10)(float)pvStack_40 / fVar9);
        piVar8 = (int *)FUN_0071b2b0();
        piVar6 = (int *)FUN_0071b2a0();
        fVar9 = (float10)(**(code **)(*piVar8 + 0x14))();
        pvStack_40 = (void *)(float)fVar9;
        fVar9 = (float10)(**(code **)(*piVar6 + 0x14))();
        param_1 = fStack_44 * param_1;
        puStack_4c = (undefined1 *)
                     (float)((float10)(float)puStack_4c * ((float10)(float)pvStack_40 / fVar9));
        fStack_3c = fStack_44 * fStack_3c;
        fStack_38 = (float)(((float10)(float)pvStack_40 / fVar9) * (float10)fStack_38);
      }
      fStack_48 = 0.0;
      fStack_44 = 0.0;
      if ((*(short *)((int)this + 0x234) == 1) && (*(char *)((int)this + 0x224) == '\0')) {
        iVar10 = (**(code **)(**(int **)((int)this + 0x204) + 0xa4))();
        fStack_48 = *(float *)(iVar10 + 0x278) + *(float *)(iVar10 + 0x274);
        fStack_44 = *(float *)(iVar10 + 0x27c) + *(float *)(iVar10 + 0x270);
      }
      if (*(short *)((int)this + 0x236) == 1) {
        (**(code **)(**(int **)((int)this + 0x204) + 0x78))();
        (**(code **)(**(int **)((int)this + 0x204) + 0x7c))();
        if ((*(char *)((int)this + 0x224) == '\0') && (bVar3)) {
          iVar10 = **(int **)((int)this + 0x204);
          (**(code **)(iVar10 + 0x10))();
          (**(code **)(iVar10 + 0x5c))();
          iVar10 = **(int **)((int)this + 0x204);
          uVar2 = *(undefined4 *)(*(int *)((int)this + 0x158) + 400);
          (**(code **)(iVar10 + 0x14))();
          (**(code **)(iVar10 + 100))(1,uVar2);
          do {
            cVar4 = (**(code **)(**(int **)((int)this + 0x204) + 0x50))();
          } while (cVar4 != '\0');
        }
      }
      else {
        if (*(int *)((int)this + 0x220) == 0) {
          pvStack_40 = operator_new(0xd0);
          local_4 = 1;
          if (pvStack_40 == (void *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = FUN_0086d4c0(pvStack_40,*(undefined4 *)((int)this + 0x204));
          }
          local_4 = 0xffffffff;
          FUN_00887d40((void *)((int)this + 0x20c),(int)puVar7);
          FUN_0073e510(*(void **)((int)this + 0x204),*(undefined4 *)((int)this + 0x220));
          fVar9 = (float10)(**(code **)(**(int **)((int)this + 0x204) + 0x10))();
          if (((float10)0.0 == fVar9) ||
             (fVar9 = (float10)(**(code **)(**(int **)((int)this + 0x204) + 0x14))(),
             (float10)0.0 == fVar9)) {
            (**(code **)(**(int **)((int)this + 0x204) + 0x78))();
            (**(code **)(**(int **)((int)this + 0x204) + 0x7c))();
          }
        }
        if (((uint)(*(int **)((int)this + 0x204))[0x86] >> 4 & 1) != 0) {
          fVar9 = (float10)(**(code **)(**(int **)((int)this + 0x204) + 0x10))();
          fStack_44 = (float)fVar9;
          fVar9 = (float10)(**(code **)(**(int **)((int)this + 0x204) + 0x14))();
          pvStack_40 = (void *)(float)fVar9;
          iVar10 = *(int *)((int)this + 0x204);
          local_34 = (*(float *)(iVar10 + 0x108) + *(float *)(iVar10 + 0xc0)) * 0.5;
          local_30 = (void *)((*(float *)(iVar10 + 0xe4) + *(float *)(iVar10 + 0x9c)) * 0.5);
          fStack_48 = (float)puStack_4c / (float)pvStack_40;
          puStack_4c = &stack0xffffff90;
          (**(code **)(**(int **)((int)this + 0x220) + 0x30))(param_1 / fStack_44,fStack_48);
          if ((*(char *)((int)this + 0x188) == '\0') && (*(char *)((int)this + 0x224) == '\0')) {
            (**(code **)(**(int **)((int)this + 0x204) + 0x5c))();
            (**(code **)(**(int **)((int)this + 0x204) + 100))
                      (1,*(undefined4 *)(*(int *)((int)this + 0x158) + 400));
            do {
              cVar4 = (**(code **)(**(int **)((int)this + 0x204) + 0x50))();
            } while (cVar4 != '\0');
          }
        }
      }
    }
    (**(code **)(**(int **)((int)this + 0x204) + 0x2c))();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0088efb0 @ 0088efb0 ////

undefined4 * __thiscall FUN_0088efb0(void *this,undefined4 param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea883;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined ***)this = &PTR_FUN_00d63a9c;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_4 = 1;
  iVar1 = FUN_004220b0();
  *(int *)((int)this + 0x20) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)((int)this + 0x20) + 4) = *(int *)((int)this + 0x20);
  *(undefined4 *)*(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x20);
  *(int *)(*(int *)((int)this + 0x20) + 8) = *(int *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x24) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0088f070 @ 0088f070 ////

void __thiscall
FUN_0088f070(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cea898;
  local_c = ExceptionList;
  if (0xcccccca < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0088e6c0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x20);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x20) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[8] == '\0') {
LAB_0088f16b:
        *(undefined1 *)(*piVar4 + 0x20) = 1;
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x20) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00888e60(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x20) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x20) = 0;
        FUN_008880b0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[8] == '\0') goto LAB_0088f16b;
      if (piVar6 == (int *)*piVar2) {
        FUN_008880b0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x20) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x20) = 0;
      FUN_00888e60(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x20);
  } while( true );
}


//// FUNCTION FUN_0088f270 @ 0088f270 ////

void __fastcall FUN_0088f270(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0088e3b0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0088f2a0 @ 0088f2a0 ////

void __fastcall FUN_0088f2a0(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cea8f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d63ab8;
  local_4 = 4;
  FUN_00889ed0(param_1 + 0x8f);
  FUN_00889ad0(param_1 + 0x7c);
  FUN_0088aa80((int)(param_1 + 0x77));
  if (param_1[0x5f] != 0) {
    FUN_00872b30(param_1[0x5f],param_1[0x60]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x5f]);
  }
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_0088e3b0(param_1 + 0x5a,&local_10,*(int **)param_1[0x5b],(int *)param_1[0x5b]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x5b]);
}


//// FUNCTION FUN_0088f380 @ 0088f380 ////

void * __thiscall FUN_0088f380(void *this,byte param_1)

{
  FUN_008844e0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0088f3a0 @ 0088f3a0 ////

int __fastcall FUN_0088f3a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00889870();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0088f3d0 @ 0088f3d0 ////

void __thiscall FUN_0088f3d0(void *this,undefined4 *param_1,int *param_2)

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
  if (*(char *)(piVar5[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)piVar3 + 0x21) == '\0');
  }
  param_2 = piVar5;
  if (local_4) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_0088f070(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00888230((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_0088f070(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0088f490 @ 0088f490 ////

void * FUN_0088f490(void *param_1,int param_2,int param_3)

{
  FUN_0088e790(param_1,param_2,param_3);
  return (void *)(param_2 * 0x20 + (int)param_1);
}


//// FUNCTION FUN_0088f4c0 @ 0088f4c0 ////

undefined4 * __thiscall FUN_0088f4c0(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cea94e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00890290(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d63ab8;
  iVar1 = FUN_00889870();
  *(int *)((int)this + 0x16c) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)((int)this + 0x16c) + 4) = *(int *)((int)this + 0x16c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x16c) = *(undefined4 *)((int)this + 0x16c);
  *(int *)(*(int *)((int)this + 0x16c) + 8) = *(int *)((int)this + 0x16c);
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0x10000;
  *(undefined4 *)((int)this + 0x1a8) = 0x10000;
  *(undefined2 *)((int)this + 0x1c0) = 0x100;
  *(undefined2 *)((int)this + 0x1bc) = 0x100;
  *(undefined2 *)((int)this + 0x1b8) = 0x100;
  *(undefined2 *)((int)this + 0x1b4) = 0x100;
  *(undefined2 *)((int)this + 0x1c2) = 0;
  *(undefined2 *)((int)this + 0x1be) = 0;
  *(undefined2 *)((int)this + 0x1ba) = 0;
  *(undefined2 *)((int)this + 0x1b6) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  local_4._0_1_ = 3;
  FUN_00889a60((int *)((int)this + 0x1f0));
  local_4._0_1_ = 4;
  FUN_0088bab0((undefined4 *)((int)this + 0x23c));
  *(undefined4 *)((int)this + 0x158) = param_2;
  *(int *)((int)this + 0x164) = param_1;
  *(void **)((int)this + 0x160) = this;
  *(undefined4 *)((int)this + 0x18c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined1 *)((int)this + 0x188) = 1;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_0088c970((void *)((int)this + 0x178),(void *)(*(int *)(param_1 + 0x10) + 0x10));
  uVar2 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)((int)this + 0x1d4) = (int)uVar2;
  *(undefined4 *)((int)this + 0x50) = 0x10;
  *(undefined1 *)((int)this + 0x174) = 0;
  *(undefined1 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 600) = 2;
  *(undefined1 *)((int)this + 0x254) = 0;
  *(undefined1 *)((int)this + 0x255) = 0;
  *(undefined1 *)((int)this + 0x256) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0088f690 @ 0088f690 ////

undefined4 * __thiscall FUN_0088f690(void *this,byte param_1)

{
  FUN_0088f2a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0088f6b0 @ 0088f6b0 ////

undefined4 * __thiscall FUN_0088f6b0(void *this,undefined4 param_1)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cea96b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x264);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    puVar1 = FUN_0088f4c0(this_00,(int)this,param_1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0088f720 @ 0088f720 ////

undefined4 * __thiscall FUN_0088f720(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0088f070(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[3]) {
      FUN_0088f070(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[3] < *param_3) {
      FUN_0088f070(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_00888230((int *)&param_3);
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x21) != '\0') {
          FUN_0088f070(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_0088f070(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_00888290((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x21) != '\0') {
          FUN_0088f070(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_0088f070(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_0088f3d0(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}


//// FUNCTION FUN_0088f890 @ 0088f890 ////

void __thiscall FUN_0088f890(void *this,void *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int extraout_ECX;
  int iVar5;
  undefined1 local_3c [16];
  undefined1 local_2c [4];
  void *local_28;
  int local_24;
  undefined4 local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cea990;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_0088b5c0(local_3c,param_3);
  local_8 = 0;
  FUN_0088cad0(local_2c,param_3 + 0x10);
  iVar2 = *(int *)((int)this + 4);
  local_8 = 1;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - iVar2 >> 5;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - iVar2 >> 5;
    }
    if (0x7ffffffU - iVar5 < param_2) {
      uVar1 = FUN_0088ac60();
      iVar2 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - iVar2 >> 5;
    }
    if (uVar1 < iVar5 + param_2) {
      if (0x7ffffff - (uVar1 >> 1) < uVar1) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 + (uVar1 >> 1);
      }
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - iVar2 >> 5;
      }
      if (uVar1 < iVar5 + param_2) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)((int)this + 8) - iVar2 >> 5;
        }
        uVar1 = iVar2 + param_2;
      }
      pvVar3 = operator_new(uVar1 * 0x20);
      local_8 = CONCAT31(local_8._1_3_,2);
      local_1c = pvVar3;
      pvVar4 = FUN_0088e550(*(int *)((int)this + 4),(int)param_1,pvVar3);
      FUN_0088e790(pvVar4,param_2,(int)local_3c);
      FUN_0088e550((int)param_1,*(int *)((int)this + 8),(void *)((int)pvVar4 + param_2 * 0x20));
      iVar2 = *(int *)((int)this + 4);
      local_8 = 1;
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - iVar2 >> 5;
      }
      if (iVar2 != 0) {
        FUN_00884450(iVar2,*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar1 * 0x20 + (int)pvVar3);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar5) * 0x20 + (int)pvVar3);
      *(void **)((int)this + 4) = pvVar3;
    }
    else {
      local_1c = *(void **)((int)this + 8);
      if ((uint)((int)local_1c - (int)param_1 >> 5) < param_2) {
        FUN_0088e550((int)param_1,(int)local_1c,(void *)(param_2 * 0x20 + (int)param_1));
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_0088f490(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1 >> 5),(int)local_3c);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x20;
        *(int *)((int)this + 8) = iVar2;
        local_8 = 1;
        FUN_0088e4d0(param_1,(void *)(iVar2 + param_2 * -0x20),local_3c);
      }
      else {
        pvVar4 = (void *)((int)local_1c + param_2 * -0x20);
        pvVar3 = FUN_0088e550((int)pvVar4,(int)local_1c,local_1c);
        *(void **)((int)this + 8) = pvVar3;
        FUN_0088ccd0(param_1,pvVar4,local_1c);
        FUN_0088e4d0(param_1,(void *)(param_2 * 0x20 + (int)param_1),local_3c);
      }
    }
  }
  local_8 = 0xffffffff;
  if (local_28 != (void *)0x0) {
    FUN_00872b30((int)local_28,local_24);
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  FUN_00883130((int)local_3c);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0088fb80 @ 0088fb80 ////

int * __thiscall FUN_0088fb80(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined1 local_1c [4];
  void *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea9b0;
  local_c = ExceptionList;
  piVar3 = *(int **)((int)this + 4);
  if (*(char *)(piVar3[1] + 0x21) == '\0') {
    piVar1 = (int *)piVar3[1];
    do {
      if (piVar1[3] < *param_1) {
        piVar2 = (int *)piVar1[2];
      }
      else {
        piVar2 = (int *)*piVar1;
        piVar3 = piVar1;
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0x21) == '\0');
  }
  if ((piVar3 != *(int **)((int)this + 4)) && (piVar3[3] <= *param_1)) {
    return piVar3 + 4;
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = *param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0088cad0(local_1c,(int)local_30);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar3 = FUN_0088f720(this,&param_1,piVar3,&local_20);
  if (local_18 != (void *)0x0) {
    FUN_00872b30((int)local_18,local_14);
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return (int *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_0088fc70 @ 0088fc70 ////

void __thiscall FUN_0088fc70(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  void *in_stack_0000001c;
  int in_stack_00000020;
  undefined4 uStack00000024;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cea9c8;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2 >> 5;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2 >> 5;
    }
    ExceptionList = &local_c;
    FUN_0088f890(this,*(void **)((int)this + 8),param_1 - iVar2,(int)&stack0x00000008);
  }
  else {
    ExceptionList = &local_c;
    if ((iVar2 != 0) &&
       (ExceptionList = &local_c, param_1 < (uint)((int)*(void **)((int)this + 8) - iVar2 >> 5))) {
      ExceptionList = &local_c;
      FUN_0088e660(this,&param_1,(void *)(param_1 * 0x20 + iVar2),*(void **)((int)this + 8));
    }
  }
  local_4 = 0xffffffff;
  if (in_stack_0000001c != (void *)0x0) {
    FUN_00872b30((int)in_stack_0000001c,in_stack_00000020);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_0000001c);
  }
  in_stack_0000001c = (void *)0x0;
  in_stack_00000020 = 0;
  uStack00000024 = 0;
  FUN_00883130((int)&stack0x00000008);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0088fd50 @ 0088fd50 ////

void __thiscall FUN_0088fd50(void *this,uint param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  int *this_00;
  int *piVar3;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_1;
  puStack_8 = &LAB_00cea9e8;
  local_c = ExceptionList;
  iVar1 = *(int *)(*(int *)((int)this + 0x164) + 0x10);
  if ((iVar1 != 0) && (param_1 < (uint)(*(int *)(*(int *)((int)this + 0x164) + 0x14) - iVar1 >> 5)))
  {
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
    param_1 = CONCAT31(param_1._1_3_,param_2);
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_00886410(local_1c,(undefined1 *)0x0,1,(undefined1 *)&param_1);
    param_1 = uVar2;
    this_00 = FUN_0088fb80((void *)((int)this + 0x168),(int *)&param_1);
    iVar1 = this_00[2];
    piVar3 = (int *)FUN_0088a810((int *)&param_1,this_00[1],iVar1,(int)local_1c);
    if (*piVar3 == iVar1) {
      FUN_00886ba0(this_00,(int)local_1c);
    }
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0088fe30 @ 0088fe30 ////

void __thiscall FUN_0088fe30(void *this,int *param_1,short *param_2)

{
  uint *puVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 extraout_ECX;
  uint uVar13;
  undefined4 extraout_EDX;
  int iVar14;
  ulonglong uVar15;
  undefined1 *local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c [20];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar8 = DAT_00e5e808;
  uVar7 = DAT_00e5e804;
  uVar6 = DAT_00e5e800;
  uVar5 = DAT_00e5e7fc;
  if (*(int *)((int)this + 0x164) != 0) {
    local_14 = DAT_00e5e7e8;
    local_10 = DAT_00e5e7ec;
    local_18 = DAT_00e5e7e4;
    local_8 = DAT_00e5e7f4;
    local_4 = DAT_00e5e7f8;
    local_c = DAT_00e5e7f0;
    puVar9 = (undefined4 *)FUN_0086ddb0(&local_18,(int *)&local_38,param_1);
    DAT_00e5e7e4 = *puVar9;
    DAT_00e5e7e8 = puVar9[1];
    DAT_00e5e7ec = puVar9[2];
    DAT_00e5e7f0 = puVar9[3];
    DAT_00e5e7f4 = puVar9[4];
    DAT_00e5e7f8 = puVar9[5];
    *(float *)((int)this + 0x1cc) = (float)DAT_00e5e7f4 * 0.05;
    *(float *)((int)this + 0x1d0) = (float)DAT_00e5e7f8 * 0.05;
    puVar9 = (undefined4 *)FUN_008885f0(&DAT_00e5e7fc,&local_38,param_2);
    pvVar3 = DAT_010501b0;
    DAT_00e5e7fc = *puVar9;
    DAT_00e5e800 = puVar9[1];
    DAT_00e5e804 = puVar9[2];
    DAT_00e5e808 = puVar9[3];
    if ((*(char *)((int)this + 0x256) != '\0') &&
       (DAT_010501b8 = DAT_010501b0, DAT_010501b0 == (void *)0x0)) {
      DAT_010501b8 = this;
    }
    DAT_010501b0 = this;
    if ((*(char *)((int)this + 0x1d8) == '\0') &&
       (*(char *)(*(int *)((int)this + 0x158) + 0x21d) != '\0')) {
      FUN_0088a510((int)this);
      *(char *)((int)this + 0x1d8) = *(char *)((int)this + 0x1d8) + '\x01';
    }
    if ((*(byte *)((int)this + 0x25c) & 1) != 0) {
      local_38 = local_2c;
      local_2c[0] = 0;
      local_34 = 0;
      local_30 = 0x14;
      pcVar10 = (char *)((int)this + 0x54);
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_004015d0(&local_38,(char *)((int)this + 0x54),(int)pcVar10 - ((int)this + 0x55));
      FUN_0048f4b0((void *)(*(int *)((int)this + 0x158) + 0x1ec),(int *)&param_2,&local_38);
      if (0x14 < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_38);
      }
      *(uint *)((int)this + 0x260) =
           (uint)(param_2 != *(short **)(*(int *)((int)this + 0x158) + 0x1f0));
    }
    if (*(int *)((int)this + 600) == 2) {
      FUN_00889dd0(*(void **)((int)this + 0x164),*(uint *)((int)this + 0x260));
    }
    if (*(int *)((int)this + 0x204) != 0) {
      FUN_0088e870(this,(float)param_1);
    }
    if (*(int *)((int)this + 0x250) != 0) {
      uVar11 = FUN_00889bb0((int)this);
      if ((char)uVar11 != '\0') {
        FUN_00882950(*(int *)((int)this + 0x250));
      }
    }
    if (*(int *)((int)this + 600) == 1) {
      FUN_00889dd0(*(void **)((int)this + 0x164),*(uint *)((int)this + 0x260));
    }
    puVar1 = (uint *)((int)this + 0x260);
    DAT_010501b0 = pvVar3;
    piVar12 = (int *)FUN_00889f70((void *)((int)this + 0x168),&param_2,(int *)puVar1);
    if (*piVar12 != *(int *)((int)this + 0x16c)) {
      piVar12 = FUN_0088fb80((void *)((int)this + 0x168),(int *)puVar1);
      pvVar3 = (void *)piVar12[1];
      if ((pvVar3 != (void *)0x0) && (piVar12[2] - (int)pvVar3 >> 4 != 0)) {
        FUN_0088c6c0((void *)((int)this + 0x178),*(void **)((int)this + 0x180),pvVar3,
                     (void *)piVar12[2]);
      }
    }
    FUN_0088db90(this);
    if (*(char *)((int)this + 0x188) == '\0') {
      *(undefined4 *)((int)this + 0x1d4) = 0;
    }
    else {
      uVar15 = FUN_00990ae0(extraout_ECX,extraout_EDX);
      if ((uint)(1000 / (ulonglong)*(uint *)(*(int *)((int)this + 0x158) + 0x70)) <
          (uint)((int)uVar15 - *(int *)((int)this + 0x1d4))) {
        iVar4 = *(int *)((int)this + 0x164);
        if (*(int *)(iVar4 + 0x10) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) >> 5;
        }
        uVar13 = (*puVar1 + 1) % uVar13;
        *(int *)((int)this + 0x1d4) = (int)uVar15;
        *puVar1 = uVar13;
        iVar14 = uVar13 * 0x20;
        FUN_0088c6c0((void *)((int)this + 0x178),*(void **)((int)this + 0x180),
                     *(void **)(*(int *)(iVar4 + 0x10) + iVar14 + 0x14),
                     *(void **)(*(int *)(iVar4 + 0x10) + 0x18 + iVar14));
      }
    }
    if (DAT_010501b8 == this) {
      DAT_010501b8 = (void *)0x0;
    }
    DAT_00e5e7e4 = local_18;
    DAT_00e5e7ec = local_10;
    DAT_00e5e7e8 = local_14;
    DAT_00e5e7f0 = local_c;
    DAT_00e5e7f8 = local_4;
    DAT_00e5e7f4 = local_8;
    DAT_00e5e7fc = uVar5;
    DAT_00e5e800 = uVar6;
    DAT_00e5e804 = uVar7;
    DAT_00e5e808 = uVar8;
    *(float *)((int)this + 0x1c4) = (float)param_1[4];
    *(float *)((int)this + 0x1c8) = (float)param_1[5];
  }
  return;
}


//// FUNCTION FUN_00890220 @ 00890220 ////

void __thiscall FUN_00890220(void *this,uint param_1)

{
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ceaa08;
  local_c = ExceptionList;
  local_10 = auStack_34;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_0088fc70(this,param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00890280 @ 00890280 ////

void __thiscall FUN_00890280(void *this,uint param_1)

{
  FUN_00890220((void *)((int)this + 0xc),param_1);
  return;
}


//// FUNCTION FUN_00890290 @ 00890290 ////

undefined4 * __fastcall FUN_00890290(undefined4 *param_1)

{
  FUN_0053d690(param_1);
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x57] = 0;
  *param_1 = &PTR_FUN_00d63ad4;
  param_1[0x14] = 1;
  return param_1;
}


//// FUNCTION FUN_008902f0 @ 008902f0 ////

void __fastcall FUN_008902f0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ceaa28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d63ad4;
  puVar2 = (undefined4 *)param_1[0x57];
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x57] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0053d4f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00890360 @ 00890360 ////

undefined4 * __thiscall FUN_00890360(void *this,byte param_1)

{
  FUN_008902f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00890380 @ 00890380 ////

void FUN_00890380(int *param_1)

{
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0.0;
  local_c = 0.0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_24 = 0.0;
  local_28 = 0;
  local_2c = 0.0;
  local_10 = 0x3f800000;
  local_20 = 1.0;
  local_30 = 1.0;
  FUN_0086ddb0(&DAT_00e5e7e4,&local_48,param_1);
  local_30 = (float)local_48 * 1.5258789e-05;
  local_4 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_28 = 0;
  local_10 = 0x3f800000;
  local_2c = (float)local_44 * 1.5258789e-05;
  local_24 = (float)local_40 * 1.5258789e-05;
  local_20 = (float)local_3c * 1.5258789e-05;
  local_c = (float)local_38;
  local_8 = (float)local_34;
  FUN_009a5000(&local_30);
  return;
}


//// FUNCTION FUN_00890510 @ 00890510 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00890510(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  DAT_010501c0 = 0;
  DAT_010501bc = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x45c) = 0;
  *(undefined1 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  _DAT_010501c4 = param_1;
  return;
}


//// FUNCTION FUN_00890570 @ 00890570 ////

void __fastcall FUN_00890570(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}


//// FUNCTION FUN_008905c0 @ 008905c0 ////

int FUN_008905c0(byte param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((0x60 < param_1) && (param_1 < 0x7b)) {
    param_1 = param_1 - 0x20;
  }
  if ((0x2f < param_1) && (param_1 < 0x3a)) {
    return param_1 - 0x2f;
  }
  if ((0x40 < param_1) && (param_1 < 0x5b)) {
    return param_1 - 0x36;
  }
  if (param_1 == 0x20) {
    return 0x34;
  }
  switch(param_1) {
  case 1:
    return 0x6d;
  case 2:
    return 0x6e;
  case 3:
    return 0x69;
  case 4:
    return 0x6a;
  case 5:
    return 0x71;
  case 6:
    return 0x72;
  default:
    return -1;
  case 8:
    return 0x28;
  case 0xd:
    return 0x2c;
  case 0xe:
    return 0x6b;
  case 0xf:
    return 0x6c;
  case 0x10:
    return 0x6f;
  case 0x11:
    return 0x70;
  case 0x12:
    return 0x29;
  case 0x13:
    return 0x25;
  }
}


//// FUNCTION FUN_008907b0 @ 008907b0 ////

void __thiscall FUN_008907b0(void *this,int param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 == '\0') {
    iVar5 = *(int *)((int)this + 8);
    uVar3 = *(uint *)((int)this + 0xc);
  }
  else {
    iVar5 = *(int *)(*(int *)((int)this + 0x480) + 0x3c);
    uVar3 = 0;
  }
  uVar1 = uVar3 + param_1;
  bVar2 = false;
  if (uVar3 < uVar1) {
    do {
      uVar4 = uVar3 + 1;
      if (*(char *)(uVar3 + iVar5) == -1) {
        if (*(char *)(uVar4 + iVar5) == -0x20) {
          bVar2 = true;
        }
        else if ((*(char *)(uVar4 + iVar5) == -0x27) && (!bVar2)) {
          *(undefined1 *)(uVar4 + iVar5) = 0;
          if (uVar1 <= uVar4) {
            return;
          }
          while ((*(char *)(iVar5 + 1 + uVar4) != -1 || (*(char *)(uVar4 + 2 + iVar5) != -0x28))) {
            uVar4 = uVar4 + 2;
            if (uVar1 <= uVar4) {
              return;
            }
          }
          *(undefined1 *)(uVar4 + 2 + iVar5) = 0;
          return;
        }
        uVar4 = uVar3 + 2;
      }
      uVar3 = uVar4;
      if (uVar1 <= uVar4) {
        return;
      }
    } while( true );
  }
  return;
}


//// FUNCTION FUN_00890840 @ 00890840 ////

void __fastcall FUN_00890840(int param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(undefined1 *)(*(int *)(param_1 + 0x480) + 0x40) = 1;
  *(int *)(*(int *)(param_1 + 0x480) + 0x44) = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0xc);
  pvVar1 = operator_new(*(uint *)(*(int *)(param_1 + 0x480) + 0x44));
  *(void **)(*(int *)(param_1 + 0x480) + 0x38) = pvVar1;
  uVar3 = *(uint *)(*(int *)(param_1 + 0x480) + 0x44);
  puVar4 = (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc));
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x480) + 0x38);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return;
}


//// FUNCTION FUN_008908c0 @ 008908c0 ////

void __fastcall FUN_008908c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x454);
  while (iVar1 < 0x19) {
    *(uint *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) << 8 | (uint)**(byte **)(param_1 + 0x44c)
    ;
    iVar1 = *(int *)(param_1 + 0x454) + 8;
    *(byte **)(param_1 + 0x44c) = *(byte **)(param_1 + 0x44c) + 1;
    *(int *)(param_1 + 0x454) = iVar1;
  }
  return;
}


//// FUNCTION FUN_00890910 @ 00890910 ////

uint __thiscall FUN_00890910(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x454) < param_1) {
    FUN_008908c0((int)this);
  }
  iVar1 = *(int *)((int)this + 0x454);
  *(int *)((int)this + 0x454) = iVar1 - param_1;
  return (uint)(*(int *)((int)this + 0x450) << (0x20U - (char)iVar1 & 0x1f)) >>
         (0x20U - (char)param_1 & 0x1f);
}


//// FUNCTION FUN_00890960 @ 00890960 ////

int __thiscall FUN_00890960(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x454) < param_1) {
    FUN_008908c0((int)this);
  }
  iVar1 = *(int *)((int)this + 0x454);
  *(int *)((int)this + 0x454) = iVar1 - param_1;
  return (*(int *)((int)this + 0x450) << (0x20U - (char)iVar1 & 0x1f)) >>
         (0x20U - (char)param_1 & 0x1f);
}


//// FUNCTION FUN_008909d0 @ 008909d0 ////

void __fastcall FUN_008909d0(int param_1)

{
  size_t sVar1;
  
  if (*(FILE **)(param_1 + 0x48) != (FILE *)0x0) {
    sVar1 = _fwrite((void *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x24)),1,
                    *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24),*(FILE **)(param_1 + 0x48));
    *(size_t *)(param_1 + 0x45c) = *(int *)(param_1 + 0x45c) + sVar1;
  }
  return;
}


//// FUNCTION FUN_00890a50 @ 00890a50 ////

int __fastcall FUN_00890a50(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x74;
}


//// FUNCTION FUN_00890a80 @ 00890a80 ////

int __fastcall FUN_00890a80(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x68;
}


//// FUNCTION FUN_00890b80 @ 00890b80 ////

void __cdecl FUN_00890b80(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x1d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x1d);
  }
  return;
}


//// FUNCTION FUN_00890ba0 @ 00890ba0 ////

void __cdecl FUN_00890ba0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x1d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x1d);
  }
  return;
}


//// FUNCTION FUN_00890be0 @ 00890be0 ////

void __thiscall FUN_00890be0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x1d) == '\0') {
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


//// FUNCTION FUN_00890ca0 @ 00890ca0 ////

int __fastcall FUN_00890ca0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}


//// FUNCTION FUN_00891140 @ 00891140 ////

void __fastcall FUN_00891140(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x1d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x1d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x1d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x1d);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x1d);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00891480 @ 00891480 ////

void __thiscall FUN_00891480(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x11) == '\0') {
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


//// FUNCTION FUN_008914e0 @ 008914e0 ////

void __cdecl FUN_008914e0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x11);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x11);
  }
  return;
}


//// FUNCTION FUN_00891500 @ 00891500 ////

void __cdecl FUN_00891500(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return;
}


//// FUNCTION FUN_00891520 @ 00891520 ////

void __thiscall FUN_00891520(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x11) == '\0') {
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


//// FUNCTION FUN_008915d0 @ 008915d0 ////

void __fastcall FUN_008915d0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_008916f0 @ 008916f0 ////

void __cdecl FUN_008916f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00891730 @ 00891730 ////

void __cdecl FUN_00891730(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_008917c0 @ 008917c0 ////

void __cdecl FUN_008917c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 0x1d;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0x1d; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00891810 @ 00891810 ////

void __cdecl FUN_00891810(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00891850 @ 00891850 ////

void __cdecl FUN_00891850(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 0x1a;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0x1a; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_008918a0 @ 008918a0 ////

void __cdecl FUN_008918a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_00891e70 @ 00891e70 ////

undefined4 __fastcall FUN_00891e70(int param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1);
}


//// FUNCTION FUN_00891ed0 @ 00891ed0 ////

undefined4 __fastcall FUN_00891ed0(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x24) = iVar1;
  *(int *)(param_1 + 0x28) = iVar1;
  *(int *)(param_1 + 0xc) = iVar1 + 2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar3 = CONCAT11(*(undefined1 *)(iVar2 + 1 + iVar1),*(undefined1 *)(iVar2 + iVar1));
  uVar4 = uVar3 & 0x3f;
  if (uVar4 == 0x3f) {
    *(int *)(param_1 + 0xc) = iVar1 + 6;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 5 + iVar2),
                                       *(undefined1 *)(iVar1 + 4 + iVar2)),
                              *(undefined1 *)(iVar1 + 3 + iVar2)),*(undefined1 *)(iVar1 + 2 + iVar2)
                    );
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 4;
  }
  *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0xc) + uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  return CONCAT22((short)(uVar4 >> 0x10),uVar3 >> 6);
}


//// FUNCTION FUN_00891f80 @ 00891f80 ////

/* WARNING: Removing unreachable block (ram,0x00891ff0) */
/* WARNING: Removing unreachable block (ram,0x00892028) */
/* WARNING: Removing unreachable block (ram,0x0089205b) */

uint __thiscall FUN_00891f80(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(int *)((int)this + 0xc) = iVar2 + 1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(int *)((int)this + 0xc) = iVar2 + 2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(int *)((int)this + 0xc) = iVar2 + 3;
  uVar3 = 0xff;
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    bVar1 = *(byte *)(iVar2 + 3 + *(int *)((int)this + 8));
    *(int *)((int)this + 0xc) = iVar2 + 4;
    uVar3 = (uint)bVar1;
  }
  FUN_00ace9b0();
  uVar4 = FUN_00acd42c();
  FUN_00ace9b0();
  uVar5 = FUN_00acd42c();
  FUN_00ace9b0();
  uVar6 = FUN_00acd42c();
  return (uint)uVar6 | (((uint)uVar4 | uVar3 << 8) << 8 | (uint)uVar5) << 8;
}


//// FUNCTION FUN_00892090 @ 00892090 ////

uint __thiscall FUN_00892090(void *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = param_1 - *(int *)((int)this + 0x1c);
  uVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)((int)this + 0x20);
      *(undefined4 *)((int)this + 0x20) = 0;
      uVar5 = uVar5 | iVar4 << ((byte)iVar3 & 0x1f);
      param_1 = param_1 - *(int *)((int)this + 0x1c);
      *(undefined4 *)((int)this + 0x1c) = 0;
      bVar1 = *(byte *)(*(int *)((int)this + 8) + *(int *)((int)this + 0xc));
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      *(uint *)((int)this + 0x20) = (uint)bVar1;
      *(undefined4 *)((int)this + 0x1c) = 8;
      iVar3 = param_1 - *(int *)((int)this + 0x1c);
    } while (0 < iVar3);
  }
  uVar2 = *(uint *)((int)this + 0x20);
  iVar4 = *(int *)((int)this + 0x1c) - param_1;
  *(int *)((int)this + 0x1c) = iVar4;
  *(uint *)((int)this + 0x20) = 0xff >> (8U - (char)iVar4 & 0x1f) & uVar2;
  return uVar5 | uVar2 >> (-(char)iVar3 & 0x1fU);
}


//// FUNCTION FUN_00892190 @ 00892190 ////

void __fastcall FUN_00892190(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar3 + 2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + iVar3 + 2);
    *(int *)(param_1 + 0xc) = iVar3 + 3;
    if ((bVar1 & 1) != 0) {
      *(int *)(param_1 + 0xc) = iVar3 + 7;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    if ((bVar1 & 2) != 0) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    if ((bVar1 & 4) != 0) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    if ((bVar1 & 8) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      uVar2 = (uint)*(byte *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc));
      iVar3 = *(int *)(param_1 + 0xc) + 1;
      *(int *)(param_1 + 0xc) = iVar3;
      if (uVar2 != 0) {
        do {
          iVar3 = iVar3 + 8;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        *(int *)(param_1 + 0xc) = iVar3;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00892220 @ 00892220 ////

void __fastcall FUN_00892220(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0xff;
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 0xff;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  *(undefined1 *)(param_1 + 0x11) = 0xff;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  *(undefined1 *)(param_1 + 0x13) = 0xff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  *(undefined1 *)(param_1 + 0x19) = 0xff;
  *(undefined1 *)(param_1 + 0x1a) = 0xff;
  *(undefined1 *)(param_1 + 0x1b) = 0xff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0xff;
  *(undefined1 *)(param_1 + 0x21) = 0xff;
  *(undefined1 *)(param_1 + 0x22) = 0xff;
  *(undefined1 *)(param_1 + 0x23) = 0xff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0xff;
  *(undefined1 *)(param_1 + 0x29) = 0xff;
  *(undefined1 *)(param_1 + 0x2a) = 0xff;
  *(undefined1 *)(param_1 + 0x2b) = 0xff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  *(undefined1 *)(param_1 + 0x31) = 0xff;
  *(undefined1 *)(param_1 + 0x32) = 0xff;
  *(undefined1 *)(param_1 + 0x33) = 0xff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0xff;
  *(undefined1 *)(param_1 + 0x39) = 0xff;
  *(undefined1 *)(param_1 + 0x3a) = 0xff;
  *(undefined1 *)(param_1 + 0x3b) = 0xff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0xff;
  *(undefined1 *)(param_1 + 0x41) = 0xff;
  *(undefined1 *)(param_1 + 0x42) = 0xff;
  *(undefined1 *)(param_1 + 0x43) = 0xff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}


//// FUNCTION FUN_00892330 @ 00892330 ////

void __thiscall
FUN_00892330(void *this,undefined4 *param_1,int *param_2,int *param_3,uint param_4,char param_5)

{
  void *pvVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_254;
  int local_250;
  uint local_24c;
  undefined1 *local_248;
  undefined1 *local_244;
  undefined1 *local_240;
  undefined1 *local_23c;
  undefined *local_238;
  int local_234 [6];
  int *local_21c;
  int local_218;
  int local_214;
  undefined4 local_84 [2];
  undefined *local_7c;
  
  FUN_00aef150(local_234,0x3e,0x1b0);
  DAT_010501c0 = *(int *)((int)this + 8) + *(int *)((int)this + 0xc);
  DAT_010501bc = param_4;
  if ((*(char *)(*(int *)((int)this + 0x480) + 0x40) != '\0') && (param_5 != '\0')) {
    pvVar1 = *(void **)(*(int *)((int)this + 0x480) + 0x3c);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    DAT_010501bc = *(int *)(*(int *)((int)this + 0x480) + 0x44) + param_4;
    pvVar1 = operator_new(DAT_010501bc);
    *(void **)(*(int *)((int)this + 0x480) + 0x3c) = pvVar1;
    iVar6 = *(int *)((int)this + 0x480);
    uVar5 = *(uint *)(iVar6 + 0x44);
    puVar7 = *(undefined4 **)(iVar6 + 0x38);
    puVar8 = *(undefined4 **)(iVar6 + 0x3c);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar7 = (undefined4 *)(*(int *)((int)this + 8) + *(int *)((int)this + 0xc));
    puVar8 = (undefined4 *)
             (*(int *)(*(int *)((int)this + 0x480) + 0x44) +
             *(int *)(*(int *)((int)this + 0x480) + 0x3c));
    for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = param_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    DAT_010501c0 = *(int *)(*(int *)((int)this + 0x480) + 0x3c);
    FUN_008907b0(this,DAT_010501bc,'\x01');
  }
  local_21c = &local_250;
  local_24c = DAT_010501bc;
  local_244 = &LAB_00890740;
  local_248 = &LAB_00890720;
  local_23c = &LAB_00af1640;
  local_240 = &LAB_00890750;
  local_238 = &DAT_00890770;
  local_250 = DAT_010501c0;
  local_234[0] = FUN_00aefbe0(local_84);
  local_7c = &DAT_008907a0;
  FUN_00aef610(local_234,'\x01');
  *param_3 = local_218;
  *param_2 = local_214;
  puVar2 = operator_new(*param_3 * local_214 * 4);
  *param_1 = puVar2;
  iVar6 = 0;
  FUN_00aef9a0(local_234);
  local_254 = operator_new(*param_3 * 3);
  if (0 < *param_2) {
    do {
      iVar3 = FUN_00aef750(local_234,&local_254,1);
      iVar6 = iVar6 + iVar3;
      iVar3 = 0;
      if (0 < *param_3 * 3) {
        do {
          *puVar2 = ((*(byte *)((int)local_254 + iVar3) | 0xffffff00) << 8 |
                    (uint)*(byte *)((int)local_254 + iVar3 + 1)) << 8 |
                    (uint)*(byte *)((int)local_254 + iVar3 + 2);
          iVar3 = iVar3 + 3;
          puVar2 = puVar2 + 1;
        } while (iVar3 < *param_3 * 3);
      }
    } while (iVar6 < *param_2);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_254);
}


//// FUNCTION FUN_008925f0 @ 008925f0 ////

void __thiscall FUN_008925f0(void *this,undefined4 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (0 < param_2) {
    while( true ) {
      iVar4 = *(int *)((int)this + 0xc);
      iVar5 = *(int *)((int)this + 8);
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      cVar1 = *(char *)(iVar5 + iVar4);
      *(int *)((int)this + 0xc) = iVar4 + 1;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      bVar2 = *(byte *)(iVar4 + 1 + iVar5);
      *(int *)((int)this + 0xc) = iVar4 + 2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      bVar3 = *(byte *)(iVar4 + 2 + iVar5);
      *(int *)((int)this + 0xc) = iVar4 + 4;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      iVar5 = *(int *)(&DAT_00e5e548 + (bVar2 >> 3 & 3) * 4);
      if ((((cVar1 != -1) || (bVar2 < 0xe0)) || (iVar5 == 3)) || ((bVar2 >> 1 & 3) != 1)) break;
      iVar7 = *(int *)(&DAT_00e5e558 + (bVar3 >> 2 & 3) * 4) >> ((byte)iVar5 & 0x1f);
      if (iVar7 == 0) {
        return;
      }
      if (*(int *)(&DAT_00e5e5e8 + ((uint)(iVar5 != 0) * 0x30 + (uint)(bVar3 >> 4)) * 4) * 1000 == 0
         ) {
        return;
      }
      uVar6 = (int)(((-(uint)(iVar5 != 0) & 0xffffffb8) + 0x90) *
                   *(int *)(&DAT_00e5e5e8 + ((uint)(iVar5 != 0) * 0x30 + (uint)(bVar3 >> 4)) * 4) *
                   1000) / iVar7 + -4 + (bVar3 >> 1 & 1) + iVar4 + 4;
      if (*(uint *)((int)this + 0x2c) <= uVar6) {
        return;
      }
      *(uint *)((int)this + 0xc) = uVar6;
    }
  }
  return;
}


//// FUNCTION FUN_00892700 @ 00892700 ////

void __fastcall FUN_00892700(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_4;
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar2 = *(int *)(param_1 + 8);
    local_4 = 3;
    do {
      iVar3 = *(int *)(param_1 + 0xc);
      *(int *)(param_1 + 0xc) = iVar3 + 2;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (CONCAT11(*(undefined1 *)(iVar3 + 1 + iVar2),*(undefined1 *)(iVar3 + iVar2)) != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        bVar1 = *(byte *)(iVar3 + 2 + iVar2);
        *(int *)(param_1 + 0xc) = iVar3 + 3;
        if ((bVar1 & 1) != 0) {
          *(int *)(param_1 + 0xc) = iVar3 + 7;
          *(undefined4 *)(param_1 + 0x1c) = 0;
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        if ((bVar1 & 2) != 0) {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
          *(undefined4 *)(param_1 + 0x1c) = 0;
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        if ((bVar1 & 4) != 0) {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
          *(undefined4 *)(param_1 + 0x1c) = 0;
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        if ((bVar1 & 8) != 0) {
          *(undefined4 *)(param_1 + 0x1c) = 0;
          *(undefined4 *)(param_1 + 0x20) = 0;
          uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar2);
          iVar3 = *(int *)(param_1 + 0xc) + 1;
          *(int *)(param_1 + 0xc) = iVar3;
          if (uVar4 != 0) {
            do {
              iVar3 = iVar3 + 8;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
            *(int *)(param_1 + 0xc) = iVar3;
            *(undefined4 *)(param_1 + 0x1c) = 0;
            *(undefined4 *)(param_1 + 0x20) = 0;
          }
        }
      }
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}


//// FUNCTION FUN_008927d0 @ 008927d0 ////

void __fastcall FUN_008927d0(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + 1;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  uVar2 = FUN_00892090(param_1,4);
  *(uint *)((int)param_1 + 0x464) = uVar2;
  uVar2 = FUN_00892090(param_1,2);
  *(uint *)((int)param_1 + 0x468) = uVar2;
  uVar2 = FUN_00892090(param_1,1);
  *(uint *)((int)param_1 + 0x46c) = uVar2;
  uVar2 = FUN_00892090(param_1,1);
  iVar1 = *(int *)((int)param_1 + 0xc);
  *(uint *)((int)param_1 + 0x470) = uVar2;
  *(int *)((int)param_1 + 0xc) = iVar1 + 2;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(uint *)((int)param_1 + 0x474) = (uint)*(ushort *)(*(int *)((int)param_1 + 8) + iVar1);
  return;
}


//// FUNCTION FUN_00892bc0 @ 00892bc0 ////

void __thiscall FUN_00892bc0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)this;
  if (puVar2 != param_1) {
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)this = param_1;
  }
  return;
}


//// FUNCTION FUN_00892ca0 @ 00892ca0 ////

void __thiscall FUN_00892ca0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x1d) == '\0') {
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


//// FUNCTION FUN_00892f10 @ 00892f10 ////

int * __fastcall FUN_00892f10(int *param_1)

{
  FUN_00891140(param_1);
  return param_1;
}


//// FUNCTION FUN_00893260 @ 00893260 ////

void __fastcall FUN_00893260(int *param_1)

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


//// FUNCTION FUN_008932c0 @ 008932c0 ////

void __fastcall FUN_008932c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x11) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x11) == '\0') {
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
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x11) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x11) == '\0');
    if (*(char *)((int)piVar4 + 0x11) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00893350 @ 00893350 ////

void FUN_00893350(void *param_1)

{
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    FUN_00893350(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00893440 @ 00893440 ////

int * __fastcall FUN_00893440(int *param_1)

{
  FUN_008915d0(param_1);
  return param_1;
}


//// FUNCTION FUN_00893450 @ 00893450 ////

void __cdecl FUN_00893450(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  while (param_1 != param_2) {
    puVar3 = param_1 + 0x1d;
    puVar1 = param_3 + 0x1d;
    puVar4 = param_1;
    puVar5 = param_3;
    for (iVar2 = 0x1d; param_1 = puVar3, param_3 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_008934a0 @ 008934a0 ////

void __cdecl FUN_008934a0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_008934e0 @ 008934e0 ////

void __cdecl FUN_008934e0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00893510 @ 00893510 ////

void __cdecl FUN_00893510(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_1 != param_2) {
    param_2 = param_2 + -0x1d;
    param_3 = param_3 + -0x1d;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 0x1d; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00893540 @ 00893540 ////

void __cdecl FUN_00893540(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_008935a0 @ 008935a0 ////

void __cdecl FUN_008935a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_1 != param_2) {
    param_2 = param_2 + -0x1a;
    param_3 = param_3 + -0x1a;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00893600 @ 00893600 ////

void __cdecl FUN_00893600(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


//// FUNCTION FUN_008937c0 @ 008937c0 ////

void __cdecl FUN_008937c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1d) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0x1d; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 0x1d;
  }
  return;
}


//// FUNCTION FUN_008937f0 @ 008937f0 ////

void __cdecl FUN_008937f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1a) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 0x1a;
  }
  return;
}


//// FUNCTION FUN_00893820 @ 00893820 ////

void __cdecl FUN_00893820(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00893850 @ 00893850 ////

void __cdecl FUN_00893850(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1a) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 0x1a;
  }
  return;
}


//// FUNCTION FUN_00893880 @ 00893880 ////

void __cdecl FUN_00893880(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008938b0 @ 008938b0 ////

void __thiscall FUN_008938b0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_FUN_00d63ce4;
  *(undefined2 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 10;
  *(int *)((int)this + 0x4c) = (int)this + 0x58;
  *(undefined2 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 10;
  *(int *)((int)this + 0x6c) = (int)this + 0x78;
  *(undefined1 *)((int)this + 0x90) = 0xff;
  *(undefined1 *)((int)this + 0x91) = 0xff;
  *(undefined1 *)((int)this + 0x92) = 0xff;
  *(undefined1 *)((int)this + 0x93) = 0xff;
  *(undefined4 *)((int)this + 0x90) = 0xffffffff;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x32) = 0xffff;
  *(undefined2 *)((int)this + 0x42) = 0;
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined2 *)((int)this + 0x3e) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 8) = 0x20;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x8d) = 1;
  return;
}


//// FUNCTION FUN_00893960 @ 00893960 ////

undefined4 * __thiscall FUN_00893960(void *this,byte param_1)

{
  FUN_00893980(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00893980 @ 00893980 ////

void __fastcall FUN_00893980(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = ExceptionList;
  puStack_8 = &LAB_00ceaa5e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d63ce4;
  _Memory = (int *)param_1[9];
  local_4 = 2;
  if (_Memory != (int *)0x0) {
    iVar1 = _Memory[1];
    _Memory[1] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_009a7db0(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    param_1[9] = 0;
  }
  if (10 < (uint)param_1[0x1d]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1b]);
  }
  if (10 < (uint)param_1[0x15]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x13]);
  }
  *param_1 = &PTR_LAB_00d638d8;
  ExceptionList = pvVar2;
  return;
}


//// FUNCTION FUN_00893a20 @ 00893a20 ////

uint __thiscall FUN_00893a20(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00892090(this,param_1);
  if ((uVar1 & 1 << ((byte)param_1 - 1 & 0x1f)) != 0) {
    uVar1 = uVar1 | -1 << ((byte)param_1 & 0x1f);
  }
  return uVar1;
}


//// FUNCTION FUN_00893a50 @ 00893a50 ////

int __fastcall FUN_00893a50(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0x10000;
  *(undefined4 *)(param_1 + 0x14) = 0x10000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00892220(param_1 + 0x20);
  return param_1;
}


//// FUNCTION FUN_00893a80 @ 00893a80 ////

int __fastcall FUN_00893a80(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0x10000;
  *(undefined4 *)(param_1 + 0x14) = 0x10000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00892220(param_1 + 0x20);
  return param_1;
}


//// FUNCTION FUN_00893ab0 @ 00893ab0 ////

void __thiscall FUN_00893ab0(void *this,int param_1,uint param_2,int param_3,undefined2 *param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint local_10 [4];
  
  uVar12 = 0;
  local_10[0] = 0;
  local_10[2] = 0;
  local_10[1] = 0;
  local_10[3] = 0;
  uVar2 = FUN_00892090(this,2);
  iVar3 = uVar2 + 2;
  puVar1 = (&PTR_DAT_00e5e6e8)[uVar2];
  uVar7 = 1 << ((byte)uVar2 & 0x1f);
  uVar2 = 1 << ((byte)uVar2 + 1 & 0x1f);
  if (param_3 == 0) {
    if (param_2 == 0) {
      uVar12 = *(uint *)((int)this + 0x458);
      uVar9 = 0;
      uVar6 = 0;
      if (0 < param_1) {
        do {
          uVar12 = uVar12 + 1;
          if ((uVar12 & 0xfff) == 1) {
            uVar9 = FUN_00892090(this,8);
            if (param_4 != (undefined2 *)0x0) {
              *(char *)param_4 = (char)uVar9;
              param_4 = (undefined2 *)((int)param_4 + 1);
            }
            uVar6 = FUN_00892090(this,6);
          }
          else {
            uVar5 = FUN_00892090(this,iVar3);
            iVar8 = *(int *)(&DAT_00d63b68 + uVar6 * 4);
            iVar10 = 0;
            uVar4 = uVar7;
            do {
              if ((uVar5 & uVar4) != 0) {
                iVar10 = iVar10 + iVar8;
              }
              uVar4 = (int)uVar4 >> 1;
              iVar8 = iVar8 >> 1;
            } while (uVar4 != 0);
            iVar10 = iVar10 + iVar8;
            if ((uVar2 & uVar5) != 0) {
              iVar10 = -iVar10;
            }
            uVar9 = uVar9 + iVar10;
            uVar6 = uVar6 + *(int *)(puVar1 + (~uVar2 & uVar5) * 4);
            if ((int)uVar6 < 0) {
              uVar6 = 0;
            }
            else if (0x58 < (int)uVar6) {
              uVar6 = 0x58;
            }
            if ((int)uVar9 < 0) {
              uVar9 = 0;
            }
            else if (0xff < (int)uVar9) {
              uVar9 = 0xff;
            }
            if (param_4 != (undefined2 *)0x0) {
              *(char *)param_4 = (char)uVar9;
              param_4 = (undefined2 *)((int)param_4 + 1);
            }
          }
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      *(uint *)((int)this + 0x458) = uVar12;
      return;
    }
    if (0 < param_1) {
      param_2 = param_1;
      do {
        uVar12 = *(int *)((int)this + 0x458) + 1;
        *(uint *)((int)this + 0x458) = uVar12;
        if ((uVar12 & 0xfff) == 1) {
          iVar8 = 0;
          do {
            uVar12 = FUN_00892090(this,8);
            local_10[iVar8] = uVar12;
            if (param_4 != (undefined2 *)0x0) {
              *(char *)param_4 = (char)uVar12;
              param_4 = (undefined2 *)((int)param_4 + 1);
            }
            uVar12 = FUN_00892090(this,6);
            local_10[iVar8 + 2] = uVar12;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 2);
        }
        else {
          iVar8 = 0;
          do {
            uVar9 = FUN_00892090(this,iVar3);
            iVar10 = *(int *)(&DAT_00d63b68 + local_10[iVar8 + 2] * 4);
            iVar11 = 0;
            uVar12 = uVar7;
            do {
              if ((uVar9 & uVar12) != 0) {
                iVar11 = iVar11 + iVar10;
              }
              uVar12 = (int)uVar12 >> 1;
              iVar10 = iVar10 >> 1;
            } while (uVar12 != 0);
            iVar11 = iVar11 + iVar10;
            if ((uVar2 & uVar9) != 0) {
              iVar11 = -iVar11;
            }
            local_10[iVar8] = local_10[iVar8] + iVar11;
            uVar12 = *(int *)(puVar1 + (~uVar2 & uVar9) * 4) + local_10[iVar8 + 2];
            local_10[iVar8 + 2] = uVar12;
            if ((int)uVar12 < 0) {
              local_10[iVar8 + 2] = 0;
            }
            else if (0x58 < (int)uVar12) {
              local_10[iVar8 + 2] = 0x58;
            }
            uVar12 = local_10[iVar8];
            if (uVar12 != (int)(short)uVar12) {
              local_10[iVar8] = ((-1 < (int)uVar12) - 1 & 0xffff0001) + 0x7fff;
            }
            if (param_4 != (undefined2 *)0x0) {
              *(char *)param_4 = (char)local_10[iVar8];
              param_4 = (undefined2 *)((int)param_4 + 1);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 2);
        }
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  else {
    if (param_2 == 0) {
      param_2 = *(uint *)((int)this + 0x458);
      uVar9 = 0;
      if (0 < param_1) {
        do {
          param_2 = param_2 + 1;
          if ((param_2 & 0xfff) == 1) {
            uVar9 = FUN_00892090(this,0x10);
            if ((char)(uVar9 >> 8) < '\0') {
              uVar9 = uVar9 | 0xffff0000;
            }
            if (param_4 != (undefined2 *)0x0) {
              *param_4 = (short)uVar9;
              param_4 = param_4 + 1;
            }
            uVar12 = FUN_00892090(this,6);
          }
          else {
            uVar4 = FUN_00892090(this,iVar3);
            iVar8 = *(int *)(&DAT_00d63b68 + uVar12 * 4);
            iVar10 = 0;
            uVar6 = uVar7;
            do {
              if ((uVar4 & uVar6) != 0) {
                iVar10 = iVar10 + iVar8;
              }
              uVar6 = (int)uVar6 >> 1;
              iVar8 = iVar8 >> 1;
            } while (uVar6 != 0);
            iVar10 = iVar10 + iVar8;
            if ((uVar2 & uVar4) != 0) {
              iVar10 = -iVar10;
            }
            uVar9 = uVar9 + iVar10;
            uVar12 = uVar12 + *(int *)(puVar1 + (~uVar2 & uVar4) * 4);
            if ((int)uVar12 < 0) {
              uVar12 = 0;
            }
            else if (0x58 < (int)uVar12) {
              uVar12 = 0x58;
            }
            if (uVar9 != (int)(short)uVar9) {
              uVar9 = ((-1 < (int)uVar9) - 1 & 0xffff0001) + 0x7fff;
            }
            if (param_4 != (undefined2 *)0x0) {
              *param_4 = (short)uVar9;
              param_4 = param_4 + 1;
            }
          }
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      *(uint *)((int)this + 0x458) = param_2;
      return;
    }
    if (0 < param_1) {
      param_2 = param_1;
      do {
        uVar12 = *(int *)((int)this + 0x458) + 1;
        *(uint *)((int)this + 0x458) = uVar12;
        if ((uVar12 & 0xfff) == 1) {
          iVar8 = 0;
          do {
            uVar12 = FUN_00892090(this,0x10);
            if ((char)(uVar12 >> 8) < '\0') {
              uVar12 = uVar12 | 0xffff0000;
            }
            local_10[iVar8] = uVar12;
            if (param_4 != (undefined2 *)0x0) {
              *param_4 = (short)uVar12;
              param_4 = param_4 + 1;
            }
            uVar12 = FUN_00892090(this,6);
            local_10[iVar8 + 2] = uVar12;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 2);
        }
        else {
          iVar8 = 0;
          do {
            uVar9 = FUN_00892090(this,iVar3);
            iVar10 = *(int *)(&DAT_00d63b68 + local_10[iVar8 + 2] * 4);
            iVar11 = 0;
            uVar12 = uVar7;
            do {
              if ((uVar9 & uVar12) != 0) {
                iVar11 = iVar11 + iVar10;
              }
              uVar12 = (int)uVar12 >> 1;
              iVar10 = iVar10 >> 1;
            } while (uVar12 != 0);
            iVar11 = iVar11 + iVar10;
            if ((uVar2 & uVar9) != 0) {
              iVar11 = -iVar11;
            }
            local_10[iVar8] = local_10[iVar8] + iVar11;
            uVar12 = *(int *)(puVar1 + (~uVar2 & uVar9) * 4) + local_10[iVar8 + 2];
            local_10[iVar8 + 2] = uVar12;
            if ((int)uVar12 < 0) {
              local_10[iVar8 + 2] = 0;
            }
            else if (0x58 < (int)uVar12) {
              local_10[iVar8 + 2] = 0x58;
            }
            uVar12 = local_10[iVar8];
            if (uVar12 != (int)(short)uVar12) {
              local_10[iVar8] = ((-1 < (int)uVar12) - 1 & 0xffff0001) + 0x7fff;
            }
            if (param_4 != (undefined2 *)0x0) {
              *param_4 = (short)local_10[iVar8];
              param_4 = param_4 + 1;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 2);
        }
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00893fb0 @ 00893fb0 ////

void __thiscall FUN_00893fb0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar3 = FUN_00892090(this,4);
  FUN_00892090(this,2);
  uVar4 = FUN_00892090(this,1);
  uVar5 = FUN_00892090(this,1);
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 8);
  *(int *)((int)this + 0xc) = iVar1 + 4;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  iVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 3 + iVar1),
                                     *(undefined1 *)(iVar2 + 2 + iVar1)),
                            *(undefined1 *)(iVar2 + 1 + iVar1)),*(undefined1 *)(iVar2 + iVar1));
  if ((*(int *)((int)this + 0x44) != 0) && (uVar3 != 0)) {
    if (uVar3 == 1) {
      *(undefined4 *)((int)this + 0x458) = 0;
      *(int *)((int)this + 0x44c) = iVar1 + 4 + iVar2;
      FUN_00893ab0(this,iVar6,uVar5,uVar4,(undefined2 *)0x0);
    }
    else if (uVar3 == 2) {
      *(int *)((int)this + 0xc) = iVar1 + 6;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      FUN_008925f0(this,param_1,iVar6);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_008940a0 @ 008940a0 ////

void __thiscall FUN_008940a0(void *this,undefined4 param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = *(int *)((int)this + 0x464);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *(int *)((int)this + 0x44c) = *(int *)((int)this + 0xc) + *(int *)((int)this + 8);
      *(undefined4 *)((int)this + 0x458) = 0;
      FUN_00893ab0(this,*(int *)((int)this + 0x474),*(uint *)((int)this + 0x470),
                   *(int *)((int)this + 0x46c),(undefined2 *)0x0);
    }
    else if (iVar1 == 2) {
      iVar1 = *(int *)((int)this + 0xc);
      *(int *)((int)this + 0xc) = iVar1 + 2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      uVar2 = *(ushort *)(*(int *)((int)this + 8) + iVar1);
      *(int *)((int)this + 0xc) = iVar1 + 4;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      FUN_008925f0(this,param_1,(uint)uVar2);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_008941a0 @ 008941a0 ////

void FUN_008941a0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1c);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_008941c0 @ 008941c0 ////

int * __fastcall FUN_008941c0(int *param_1)

{
  FUN_00891140(param_1);
  return param_1;
}


//// FUNCTION FUN_008941e0 @ 008941e0 ////

void __fastcall FUN_008941e0(int param_1)

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


//// FUNCTION FUN_00894270 @ 00894270 ////

void __thiscall FUN_00894270(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(int *)puVar1[3] < *(int *)*param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  *param_1 = (int)puVar3;
  return;
}


//// FUNCTION FUN_008942b0 @ 008942b0 ////

void FUN_008942b0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x40);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_008942f0 @ 008942f0 ////

void __fastcall FUN_008942f0(int param_1)

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


//// FUNCTION FUN_00894320 @ 00894320 ////

void __fastcall FUN_00894320(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00894380 @ 00894380 ////

void FUN_00894380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_008943c0 @ 008943c0 ////

void FUN_008943c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    *(undefined1 *)(puVar1 + 4) = param_5;
    *(undefined1 *)((int)puVar1 + 0x11) = 0;
  }
  return;
}


//// FUNCTION FUN_00894400 @ 00894400 ////

void FUN_00894400(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
  }
  return;
}


//// FUNCTION FUN_00894460 @ 00894460 ////

int * __fastcall FUN_00894460(int *param_1)

{
  FUN_00893260(param_1);
  return param_1;
}


//// FUNCTION FUN_00894470 @ 00894470 ////

int * __fastcall FUN_00894470(int *param_1)

{
  FUN_008932c0(param_1);
  return param_1;
}


//// FUNCTION FUN_00894480 @ 00894480 ////

void __fastcall FUN_00894480(int param_1)

{
  FUN_00893350(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_008944b0 @ 008944b0 ////

void FUN_008944b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 7) = 1;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  return;
}


//// FUNCTION FUN_00894520 @ 00894520 ////

void FUN_00894520(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}


//// FUNCTION FUN_00894570 @ 00894570 ////

void FUN_00894570(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_00894570(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008945b0 @ 008945b0 ////

int * __fastcall FUN_008945b0(int *param_1)

{
  FUN_008915d0(param_1);
  return param_1;
}


//// FUNCTION FUN_00894620 @ 00894620 ////

void * FUN_00894620(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00894650 @ 00894650 ////

void * FUN_00894650(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00894680 @ 00894680 ////

void * FUN_00894680(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00894750 @ 00894750 ////

void __cdecl FUN_00894750(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 0x1d; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 0x1d;
  }
  return;
}


//// FUNCTION FUN_00894810 @ 00894810 ////

void __cdecl FUN_00894810(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 0x1a;
  }
  return;
}


//// FUNCTION FUN_00894840 @ 00894840 ////

void __cdecl FUN_00894840(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00894870 @ 00894870 ////

void __thiscall FUN_00894870(void *this,uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar2 = FUN_00892090(this,5);
  uVar3 = FUN_00892090(this,uVar2);
  bVar1 = (byte)uVar2;
  uVar4 = 1 << (bVar1 - 1 & 0x1f);
  if ((uVar3 & uVar4) != 0) {
    uVar3 = uVar3 | -1 << (bVar1 & 0x1f);
  }
  *param_1 = uVar3;
  uVar3 = FUN_00892090(this,uVar2);
  if ((uVar3 & uVar4) != 0) {
    uVar3 = uVar3 | -1 << (bVar1 & 0x1f);
  }
  param_1[1] = uVar3;
  uVar3 = FUN_00892090(this,uVar2);
  if ((uVar3 & uVar4) != 0) {
    uVar3 = uVar3 | -1 << (bVar1 & 0x1f);
  }
  param_1[2] = uVar3;
  uVar2 = FUN_00892090(this,uVar2);
  if ((uVar2 & uVar4) != 0) {
    uVar2 = uVar2 | -1 << (bVar1 & 0x1f);
  }
  param_1[3] = uVar2;
  return;
}


//// FUNCTION FUN_00894900 @ 00894900 ////

void __thiscall FUN_00894900(void *this,uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar2 = FUN_00892090(this,1);
  if (uVar2 == 0) {
    param_1[3] = 0x10000;
    *param_1 = 0x10000;
  }
  else {
    uVar2 = FUN_00892090(this,5);
    uVar3 = FUN_00892090(this,uVar2);
    bVar1 = (byte)uVar2;
    uVar4 = 1 << (bVar1 - 1 & 0x1f);
    if ((uVar3 & uVar4) != 0) {
      uVar3 = uVar3 | -1 << (bVar1 & 0x1f);
    }
    *param_1 = uVar3;
    uVar2 = FUN_00892090(this,uVar2);
    if ((uVar2 & uVar4) != 0) {
      uVar2 = uVar2 | -1 << (bVar1 & 0x1f);
    }
    param_1[3] = uVar2;
  }
  uVar2 = FUN_00892090(this,1);
  if (uVar2 == 0) {
    uVar2 = 0;
    param_1[1] = 0;
  }
  else {
    uVar2 = FUN_00892090(this,5);
    uVar3 = FUN_00892090(this,uVar2);
    bVar1 = (byte)uVar2;
    uVar4 = 1 << (bVar1 - 1 & 0x1f);
    if ((uVar3 & uVar4) != 0) {
      uVar3 = uVar3 | -1 << (bVar1 & 0x1f);
    }
    param_1[1] = uVar3;
    uVar2 = FUN_00892090(this,uVar2);
    if ((uVar2 & uVar4) != 0) {
      uVar2 = uVar2 | -1 << (bVar1 & 0x1f);
    }
  }
  param_1[2] = uVar2;
  uVar2 = FUN_00892090(this,5);
  uVar3 = FUN_00892090(this,uVar2);
  bVar1 = (byte)uVar2;
  uVar4 = 1 << (bVar1 - 1 & 0x1f);
  if ((uVar3 & uVar4) != 0) {
    uVar3 = uVar3 | -1 << (bVar1 & 0x1f);
  }
  param_1[4] = uVar3;
  uVar2 = FUN_00892090(this,uVar2);
  if ((uVar2 & uVar4) != 0) {
    uVar2 = uVar2 | -1 << (bVar1 & 0x1f);
  }
  param_1[5] = uVar2;
  return;
}


//// FUNCTION FUN_00894a20 @ 00894a20 ////

void __thiscall FUN_00894a20(void *this,undefined2 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar1 = FUN_00892090(this,1);
  uVar2 = FUN_00892090(this,1);
  uVar3 = FUN_00892090(this,4);
  *param_1 = 0x100;
  param_1[1] = 0;
  bVar4 = (byte)uVar3;
  if (uVar2 == 0) {
    param_1[6] = 0x100;
    param_1[4] = 0x100;
    param_1[2] = 0x100;
  }
  else {
    uVar2 = FUN_00892090(this,uVar3);
    uVar5 = 1 << (bVar4 - 1 & 0x1f);
    if ((uVar2 & uVar5) != 0) {
      uVar2 = uVar2 | -1 << (bVar4 & 0x1f);
    }
    param_1[2] = (short)uVar2;
    uVar2 = FUN_00892090(this,uVar3);
    if ((uVar2 & uVar5) != 0) {
      uVar2 = uVar2 | -1 << (bVar4 & 0x1f);
    }
    param_1[4] = (short)uVar2;
    uVar2 = FUN_00892090(this,uVar3);
    if ((uVar2 & uVar5) != 0) {
      uVar2 = uVar2 | -1 << (bVar4 & 0x1f);
    }
    param_1[6] = (short)uVar2;
    if (param_2 != 0) {
      uVar2 = FUN_00892090(this,uVar3);
      if ((uVar2 & uVar5) != 0) {
        uVar2 = uVar2 | -1 << (bVar4 & 0x1f);
      }
      *param_1 = (short)uVar2;
    }
  }
  if (uVar1 == 0) {
    param_1[7] = 0;
    param_1[5] = 0;
    param_1[3] = 0;
  }
  else {
    uVar1 = FUN_00892090(this,uVar3);
    uVar2 = 1 << (bVar4 - 1 & 0x1f);
    if ((uVar1 & uVar2) != 0) {
      uVar1 = uVar1 | -1 << (bVar4 & 0x1f);
    }
    param_1[3] = (short)uVar1;
    uVar1 = FUN_00892090(this,uVar3);
    if ((uVar1 & uVar2) != 0) {
      uVar1 = uVar1 | -1 << (bVar4 & 0x1f);
    }
    param_1[5] = (short)uVar1;
    uVar1 = FUN_00892090(this,uVar3);
    if ((uVar1 & uVar2) != 0) {
      uVar1 = uVar1 | -1 << (bVar4 & 0x1f);
    }
    param_1[7] = (short)uVar1;
    if (param_2 != 0) {
      uVar1 = FUN_00892090(this,uVar3);
      if ((uVar1 & uVar2) != 0) {
        uVar1 = uVar1 | -1 << (bVar4 & 0x1f);
      }
      param_1[1] = (short)uVar1;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00894ba0 @ 00894ba0 ////

void __fastcall FUN_00894ba0(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *local_4;
  
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  param_1[3] = iVar4 + 2;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = *(undefined1 *)(iVar3 + 1 + iVar4);
  uVar2 = *(undefined1 *)(iVar3 + iVar4);
  param_1[3] = iVar4 + 4;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_1[0xf] != 0) {
    local_4 = param_1;
    FUN_0088c010((void *)param_1[1],&local_4,*(undefined ****)(param_1[0x120] + 0x34),*param_1,
                 (uint)CONCAT11(*(undefined1 *)(iVar4 + 3 + iVar3),
                                *(undefined1 *)(iVar4 + 2 + iVar3)),(uint)CONCAT11(uVar1,uVar2));
    FUN_00894900(param_1,(uint *)(local_4 + 1));
    if ((uint)param_1[3] < (uint)param_1[0xb]) {
      FUN_00894a20(param_1,(undefined2 *)(local_4 + 7),0);
    }
  }
  return;
}


//// FUNCTION FUN_00894c30 @ 00894c30 ////

void __fastcall FUN_00894c30(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_8;
  uint local_4;
  
  iVar5 = param_1[3];
  iVar6 = param_1[2];
  param_1[7] = 0;
  param_1[8] = 0;
  bVar1 = *(byte *)(iVar6 + iVar5);
  param_1[3] = iVar5 + 3;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar2 = *(undefined1 *)(iVar5 + 2 + iVar6);
  uVar3 = *(undefined1 *)(iVar5 + 1 + iVar6);
  uVar7 = 0xffffffff;
  if ((bVar1 & 2) != 0) {
    param_1[3] = iVar5 + 5;
    param_1[7] = 0;
    param_1[8] = 0;
    uVar7 = (uint)CONCAT11(*(undefined1 *)(iVar5 + 4 + iVar6),*(undefined1 *)(iVar5 + 3 + iVar6));
  }
  FUN_0088c010((void *)param_1[1],&local_8,*(undefined ****)(param_1[0x120] + 0x34),*param_1,
               (uint)CONCAT11(uVar2,uVar3),uVar7);
  if ((bVar1 & 4) != 0) {
    FUN_00894900(param_1,(uint *)(local_8 + 4));
  }
  if ((bVar1 & 8) != 0) {
    FUN_00894a20(param_1,(undefined2 *)(local_8 + 0x1c),1);
  }
  if ((bVar1 & 0x10) != 0) {
    iVar5 = param_1[3];
    param_1[3] = iVar5 + 2;
    param_1[7] = 0;
    param_1[8] = 0;
    local_4 = (uint)*(ushort *)(param_1[2] + iVar5);
    *(float *)(local_8 + 0x38) = (float)local_4 * 1.5258789e-05;
  }
  if ((bVar1 & 0x40) != 0) {
    iVar5 = param_1[3];
    param_1[3] = iVar5 + 2;
    param_1[7] = 0;
    param_1[8] = 0;
    *(uint *)(local_8 + 0x34) = (uint)*(ushort *)(param_1[2] + iVar5);
  }
  if ((bVar1 & 0x20) != 0) {
    do {
      param_1[7] = 0;
      param_1[8] = 0;
      cVar4 = *(char *)(param_1[2] + param_1[3]);
      param_1[3] = param_1[3] + 1;
    } while (cVar4 != '\0');
    FUN_00884f90(local_8);
  }
  return;
}


//// FUNCTION FUN_00894d70 @ 00894d70 ////

void __fastcall FUN_00894d70(void *param_1)

{
  uint uVar1;
  undefined2 local_10 [8];
  
  uVar1 = *(int *)((int)param_1 + 0xc) + 2;
  *(uint *)((int)param_1 + 0xc) = uVar1;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  if ((*(int *)((int)param_1 + 0x3c) != 0) && (uVar1 < *(uint *)((int)param_1 + 0x2c))) {
    do {
      FUN_00894a20(param_1,local_10,0);
    } while (*(uint *)((int)param_1 + 0xc) < *(uint *)((int)param_1 + 0x2c));
  }
  return;
}


//// FUNCTION FUN_00894dc0 @ 00894dc0 ////

void __fastcall FUN_00894dc0(int param_1)

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


//// FUNCTION FUN_00894e00 @ 00894e00 ////

void __thiscall FUN_00894e00(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((int)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_00894e70 @ 00894e70 ////

void __thiscall FUN_00894e70(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  FUN_00894270(this,(int *)&param_2,param_2);
  if ((param_2 != *(undefined4 **)((int)this + 4)) && (*(int *)param_2[3] <= *(int *)*puVar1)) {
    *param_1 = (int)param_2;
    return;
  }
  *param_1 = (int)*(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_00894ed0 @ 00894ed0 ////

void __fastcall FUN_00894ed0(int param_1)

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


//// FUNCTION FUN_00894f00 @ 00894f00 ////

void __fastcall FUN_00894f00(int param_1)

{
  FUN_00894320(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00894f30 @ 00894f30 ////

void __fastcall FUN_00894f30(int param_1)

{
  FUN_0086e670(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00894f50 @ 00894f50 ////

undefined4 * FUN_00894f50(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00894f80 @ 00894f80 ////

void __fastcall FUN_00894f80(int param_1)

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


//// FUNCTION FUN_00894fb0 @ 00894fb0 ////

undefined4 * FUN_00894fb0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00894ff0 @ 00894ff0 ////

undefined4 * FUN_00894ff0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00895020 @ 00895020 ////

int * __fastcall FUN_00895020(int *param_1)

{
  FUN_00893260(param_1);
  return param_1;
}


//// FUNCTION FUN_00895030 @ 00895030 ////

int * __fastcall FUN_00895030(int *param_1)

{
  FUN_008932c0(param_1);
  return param_1;
}


//// FUNCTION FUN_00895040 @ 00895040 ////

void __fastcall FUN_00895040(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008944b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00895080 @ 00895080 ////

void __fastcall FUN_00895080(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00894520();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_008950c0 @ 008950c0 ////

void __fastcall FUN_008950c0(int param_1)

{
  FUN_00894570(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00895110 @ 00895110 ////

void FUN_00895110(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_008937c0(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00895280 @ 00895280 ////

void __fastcall FUN_00895280(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  void *pvVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  int local_30 [9];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceaa78;
  pvStack_c = ExceptionList;
  iVar5 = param_1[3];
  ExceptionList = &pvStack_c;
  param_1[3] = iVar5 + 2;
  param_1[7] = 0;
  param_1[8] = 0;
  local_34 = (uint)*(ushort *)(param_1[2] + iVar5);
  FUN_008ab1d0(local_30,local_34);
  local_3c = *(undefined4 **)(*param_1 + 0x11c);
  puVar11 = (undefined4 *)local_3c[1];
  cVar1 = *(char *)((int)puVar11 + 0x11);
  local_4 = 0;
  while (cVar1 == '\0') {
    if (*(int *)puVar11[3] < local_30[0]) {
      puVar7 = (undefined4 *)puVar11[2];
      puVar11 = local_3c;
    }
    else {
      puVar7 = (undefined4 *)*puVar11;
    }
    local_3c = puVar11;
    puVar11 = puVar7;
    cVar1 = *(char *)((int)puVar7 + 0x11);
  }
  puVar11 = *(undefined4 **)(*param_1 + 0x11c);
  if ((local_3c == puVar11) || (local_30[0] < *(int *)local_3c[3])) {
    local_38 = puVar11;
    ppuVar8 = &local_38;
  }
  else {
    ppuVar8 = &local_3c;
  }
  iVar5 = (*ppuVar8)[3];
  param_1[7] = 0;
  param_1[8] = 0;
  uVar12 = (uint)*(byte *)(param_1[3] + param_1[2]);
  param_1[3] = param_1[3] + 1;
  pvVar9 = operator_new(uVar12 + 1);
  *(void **)(iVar5 + 0xc) = pvVar9;
  iVar10 = 0;
  if (uVar12 != 0) {
    do {
      param_1[7] = 0;
      param_1[8] = 0;
      uVar2 = *(undefined1 *)(param_1[3] + param_1[2]);
      param_1[3] = param_1[3] + 1;
      *(undefined1 *)(iVar10 + *(int *)(iVar5 + 0xc)) = uVar2;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar12);
  }
  *(undefined1 *)(iVar10 + *(int *)(iVar5 + 0xc)) = 0;
  *(uint *)(iVar5 + 8) = uVar12;
  param_1[7] = 0;
  param_1[8] = 0;
  bVar3 = *(byte *)(param_1[3] + param_1[2]);
  param_1[3] = param_1[3] + 1;
  local_3c = (undefined4 *)param_1[local_34 + 0x13];
  if (*(int *)(iVar5 + 4) == 0) {
    *(undefined4 **)(iVar5 + 4) = local_3c;
  }
  pvVar9 = operator_new((int)local_3c * 4);
  iVar10 = 0;
  if (0 < (int)local_3c) {
    do {
      param_1[8] = 0;
      param_1[7] = 0;
      if ((bVar3 & 1) == 0) {
        bVar4 = *(byte *)(param_1[3] + param_1[2]);
        param_1[3] = param_1[3] + 1;
        *(uint *)((int)pvVar9 + iVar10 * 4) = (uint)bVar4;
      }
      else {
        iVar6 = param_1[3];
        param_1[3] = iVar6 + 2;
        *(uint *)((int)pvVar9 + iVar10 * 4) = (uint)(*(ushort *)(param_1[2] + iVar6) >> 8);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)local_3c);
  }
  *(void **)(iVar5 + 0x20) = pvVar9;
  local_4 = 0xffffffff;
  FUN_008ab0b0((int)local_30);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00895440 @ 00895440 ////

void __fastcall FUN_00895440(int param_1)

{
  FUN_00894320(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00895460 @ 00895460 ////

int __fastcall FUN_00895460(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008941a0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00895480 @ 00895480 ////

void __fastcall FUN_00895480(int param_1)

{
  FUN_0086e670(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_008954a0 @ 008954a0 ////

void __fastcall FUN_008954a0(int param_1)

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


//// FUNCTION FUN_008954d0 @ 008954d0 ////

int __fastcall FUN_008954d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008942b0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008954f0 @ 008954f0 ////

int __fastcall FUN_008954f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008944b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00895520 @ 00895520 ////

int __fastcall FUN_00895520(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00894520();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00895560 @ 00895560 ////

void __fastcall FUN_00895560(int param_1)

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


//// FUNCTION FUN_00895590 @ 00895590 ////

undefined4 * FUN_00895590(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00894750(param_1,param_2,param_3);
  return param_1 + param_2 * 0x1d;
}


//// FUNCTION FUN_008955f0 @ 008955f0 ////

undefined4 * FUN_008955f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00894810(param_1,param_2,param_3);
  return param_1 + param_2 * 0x1a;
}


//// FUNCTION FUN_00895620 @ 00895620 ////

undefined4 * FUN_00895620(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00894840(param_1,param_2,param_3);
  return param_1 + param_2 * 2;
}


//// FUNCTION FUN_00895650 @ 00895650 ////

void __fastcall FUN_00895650(int param_1)

{
  FUN_00894320(param_1 + 8);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0xc));
}


//// FUNCTION FUN_00895670 @ 00895670 ////

void __fastcall FUN_00895670(int param_1)

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


//// FUNCTION FUN_008956a0 @ 008956a0 ////

void __fastcall FUN_008956a0(int param_1)

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


//// FUNCTION FUN_008956d0 @ 008956d0 ////

void __fastcall FUN_008956d0(int param_1)

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


//// FUNCTION FUN_00895700 @ 00895700 ////

void __fastcall FUN_00895700(int param_1)

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


//// FUNCTION FUN_00895730 @ 00895730 ////

void __fastcall FUN_00895730(int param_1)

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


//// FUNCTION FUN_00895760 @ 00895760 ////

void __fastcall FUN_00895760(int param_1)

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


//// FUNCTION FUN_00895790 @ 00895790 ////

void __thiscall FUN_00895790(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 **)((int)this + 8);
    puVar2 = param_2;
    while (param_3 != puVar1) {
      puVar3 = param_3 + 0x1a;
      puVar5 = puVar2 + 0x1a;
      puVar6 = param_3;
      puVar7 = puVar2;
      for (iVar4 = 0x1a; puVar2 = puVar5, param_3 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00895820 @ 00895820 ////

void __fastcall FUN_00895820(int param_1)

{
  FUN_00894320(param_1 + 0x10);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x14));
}


//// FUNCTION FUN_00895870 @ 00895870 ////

void __fastcall FUN_00895870(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  void *this;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 4;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x480) + 0x34) * 0x20;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  pvVar3 = *(void **)(iVar5 + 8 + iVar2);
  this = (void *)(iVar5 + iVar2);
  pvVar4 = *(void **)((int)this + 4);
  if (pvVar4 != pvVar3) {
    while (*(uint *)((int)pvVar4 + 0x2c) != (uint)*(ushort *)(*(int *)(param_1 + 8) + iVar1 + 2)) {
      pvVar4 = (void *)((int)pvVar4 + 0x40);
      if (pvVar4 == pvVar3) {
        return;
      }
    }
    local_4 = param_1;
    FUN_00886120(this,&local_4,pvVar4);
  }
  return;
}


//// FUNCTION FUN_008958e0 @ 008958e0 ////

void __fastcall FUN_008958e0(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  void *this;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x480) + 0x34) * 0x20;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  pvVar3 = *(void **)(iVar5 + 8 + iVar2);
  this = (void *)(iVar5 + iVar2);
  pvVar4 = *(void **)((int)this + 4);
  if (pvVar4 != pvVar3) {
    while (*(uint *)((int)pvVar4 + 0x2c) != (uint)*(ushort *)(*(int *)(param_1 + 8) + iVar1)) {
      pvVar4 = (void *)((int)pvVar4 + 0x40);
      if (pvVar4 == pvVar3) {
        return;
      }
    }
    local_4 = param_1;
    FUN_00886120(this,&local_4,pvVar4);
  }
  return;
}


//// FUNCTION FUN_00895950 @ 00895950 ////

void __fastcall FUN_00895950(int param_1)

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


//// FUNCTION FUN_00895980 @ 00895980 ////

void __fastcall FUN_00895980(int param_1)

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


//// FUNCTION FUN_008959b0 @ 008959b0 ////

void __fastcall FUN_008959b0(int param_1)

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


//// FUNCTION FUN_008959e0 @ 008959e0 ////

void __fastcall FUN_008959e0(int param_1)

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


//// FUNCTION FUN_00895a10 @ 00895a10 ////

void __fastcall FUN_00895a10(int param_1)

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


//// FUNCTION FUN_00895a40 @ 00895a40 ////

void __fastcall FUN_00895a40(int param_1)

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


//// FUNCTION FUN_00895a70 @ 00895a70 ////

void * __thiscall FUN_00895a70(void *this,byte param_1)

{
  FUN_00895820((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00895a90 @ 00895a90 ////

void __fastcall FUN_00895a90(int param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_0086e670(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00895af0 @ 00895af0 ////

void __fastcall FUN_00895af0(int param_1)

{
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x38));
  }
  if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x3c));
  }
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00895b50 @ 00895b50 ////

void __thiscall FUN_00895b50(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ceaa98;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x1d) != '\0') {
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
  FUN_00891140((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x1d) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x1d) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x1d) == '\0') {
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
      iVar1 = param_2[7];
      *(char *)(param_2 + 7) = (char)_Memory[7];
      *(char *)(_Memory + 7) = (char)iVar1;
      goto LAB_00895cc1;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x1d) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x1d) == '\0') {
      piVar2 = (int *)FUN_00890ba0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x1d) == '\0') {
      uVar3 = FUN_00890b80((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00895cc1:
  if ((char)_Memory[7] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[7] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[7] == '\0') {
            *(undefined1 *)(piVar4 + 7) = 1;
            *(undefined1 *)(piVar5 + 7) = 0;
            FUN_00892ca0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x1d) == '\0') {
            if ((*(char *)(*piVar4 + 0x1c) != '\x01') || (*(char *)(piVar4[2] + 0x1c) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x1c) = 1;
                *(undefined1 *)(piVar4 + 7) = 0;
                FUN_00890be0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 7) = (char)piVar5[7];
              *(undefined1 *)(piVar5 + 7) = 1;
              *(undefined1 *)(piVar4[2] + 0x1c) = 1;
              FUN_00892ca0(this,(int)piVar5);
              break;
            }
LAB_00895d84:
            *(undefined1 *)(piVar4 + 7) = 0;
          }
        }
        else {
          if ((char)piVar4[7] == '\0') {
            *(undefined1 *)(piVar4 + 7) = 1;
            *(undefined1 *)(piVar5 + 7) = 0;
            FUN_00890be0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x1d) == '\0') {
            if ((*(char *)(piVar4[2] + 0x1c) == '\x01') && (*(char *)(*piVar4 + 0x1c) == '\x01'))
            goto LAB_00895d84;
            if (*(char *)(*piVar4 + 0x1c) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x1c) = 1;
              *(undefined1 *)(piVar4 + 7) = 0;
              FUN_00892ca0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 7) = (char)piVar5[7];
            *(undefined1 *)(piVar5 + 7) = 1;
            *(undefined1 *)(*piVar4 + 0x1c) = 1;
            FUN_00890be0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 7) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00895e10 @ 00895e10 ////

void __thiscall
FUN_00895e10(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ceaab8;
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
  piVar3 = (int *)FUN_00894380(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_00895f0b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00881130(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_00880170(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_00895f0b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00880170(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_00881130(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_00895fc0 @ 00895fc0 ////

void __thiscall
FUN_00895fc0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ceaad8;
  local_c = ExceptionList;
  if (0x3ffffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = (int *)FUN_008943c0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
  cVar1 = *(char *)(piVar3[1] + 0x10);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x10) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[4] == '\0') {
LAB_008960bb:
        *(undefined1 *)(*piVar4 + 0x10) = 1;
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x10) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00881210(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x10) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
        FUN_00880410(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[4] == '\0') goto LAB_008960bb;
      if (piVar6 == (int *)*piVar2) {
        FUN_00880410(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x10) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
      FUN_00881210(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x10);
  } while( true );
}


//// FUNCTION FUN_00896170 @ 00896170 ////

void FUN_00896170(void)

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
  puStack_8 = &LAB_00ceaaf8;
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


//// FUNCTION FUN_008961e0 @ 008961e0 ////

void __thiscall FUN_008961e0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00893350((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x1d) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x1d) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x1d);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x1d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x1d);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x1d);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00895b50(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_008962a0 @ 008962a0 ////

void FUN_008962a0(void)

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
  puStack_8 = &LAB_00ceab18;
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


//// FUNCTION FUN_00896310 @ 00896310 ////

void __thiscall FUN_00896310(void *this,uint param_1)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceab38;
  local_c = ExceptionList;
  if (0x3fffffffU - *(int *)((int)this + 8) < param_1) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_00405d50(local_50,(undefined4 *)"list<T> too long",0x10);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddceb4);
  }
  *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  return;
}


//// FUNCTION FUN_008963b0 @ 008963b0 ////

void FUN_008963b0(void)

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
  puStack_8 = &LAB_00ceab58;
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


//// FUNCTION FUN_00896420 @ 00896420 ////

void FUN_00896420(void)

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
  puStack_8 = &LAB_00ceab78;
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


//// FUNCTION FUN_00896490 @ 00896490 ////

void FUN_00896490(void)

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
  puStack_8 = &LAB_00ceab98;
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


//// FUNCTION FUN_00896500 @ 00896500 ////

void FUN_00896500(void)

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
  puStack_8 = &LAB_00ceabb8;
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


//// FUNCTION FUN_00896570 @ 00896570 ////

void FUN_00896570(void)

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
  puStack_8 = &LAB_00ceabd8;
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


//// FUNCTION FUN_008965e0 @ 008965e0 ////

void FUN_008965e0(void)

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
  puStack_8 = &LAB_00ceabf8;
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


//// FUNCTION FUN_00896650 @ 00896650 ////

void __thiscall FUN_00896650(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ceac18;
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
  FUN_008915d0((int *)&param_2);
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
      goto LAB_008967c1;
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
      piVar2 = (int *)FUN_00891500(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x11) == '\0') {
      uVar3 = FUN_008914e0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_008967c1:
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
            FUN_00891480(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(*piVar4 + 0x10) != '\x01') || (*(char *)(piVar4[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x10) = 1;
                *(undefined1 *)(piVar4 + 4) = 0;
                FUN_00891520(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 4) = (char)piVar5[4];
              *(undefined1 *)(piVar5 + 4) = 1;
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              FUN_00891480(this,(int)piVar5);
              break;
            }
LAB_00896884:
            *(undefined1 *)(piVar4 + 4) = 0;
          }
        }
        else {
          if ((char)piVar4[4] == '\0') {
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(piVar5 + 4) = 0;
            FUN_00891520(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(piVar4[2] + 0x10) == '\x01') && (*(char *)(*piVar4 + 0x10) == '\x01'))
            goto LAB_00896884;
            if (*(char *)(*piVar4 + 0x10) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              *(undefined1 *)(piVar4 + 4) = 0;
              FUN_00891480(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 4) = (char)piVar5[4];
            *(undefined1 *)(piVar5 + 4) = 1;
            *(undefined1 *)(*piVar4 + 0x10) = 1;
            FUN_00891520(this,piVar5);
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


//// FUNCTION FUN_00896920 @ 00896920 ////

void __fastcall FUN_00896920(int param_1)

{
  FUN_00895a90(param_1 + 8);
  return;
}


//// FUNCTION FUN_00896930 @ 00896930 ////

void __thiscall FUN_00896930(void *this,undefined4 *param_1,int *param_2)

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
  if (*(char *)(piVar5[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)piVar3 + 0x15) == '\0');
  }
  param_2 = piVar5;
  if (local_4) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_00895e10(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00893260((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_00895e10(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_008969f0 @ 008969f0 ////

void __thiscall FUN_008969f0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool local_4;
  
  puVar1 = param_2;
  puVar3 = *(undefined4 **)((int)this + 4);
  local_4 = true;
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      local_4 = *(int *)*param_2 < *(int *)puVar3[3];
      if (local_4) {
        puVar2 = (undefined4 *)*puVar3;
      }
      else {
        puVar2 = (undefined4 *)puVar3[2];
      }
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  param_2 = puVar3;
  if (local_4) {
    if (puVar3 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_00896a4b;
    }
    FUN_008932c0((int *)&param_2);
  }
  if (*(int *)*puVar1 <= *(int *)param_2[3]) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_00896a4b:
  puVar3 = (undefined4 *)FUN_00895fc0(this,&param_2,local_4,puVar3,puVar1);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00896c00 @ 00896c00 ////

undefined4 __thiscall FUN_00896c00(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x234f72c < param_1) {
    FUN_00896420();
  }
  pvVar1 = operator_new(param_1 * 0x74);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 0x74 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_00896d40 @ 00896d40 ////

void __fastcall FUN_00896d40(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
    FUN_00895820((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00896d80 @ 00896d80 ////

void __thiscall FUN_00896d80(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_008962a0();
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
      _Dst = FUN_00894f50((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00894620(param_1,iVar5,param_1 + param_2);
      FUN_00894f50(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_008916f0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00894620(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_008934a0(param_1,(int)pvVar3,iVar5);
    FUN_008916f0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00896f60 @ 00896f60 ////

void __thiscall FUN_00896f60(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_008965e0();
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
      _Dst = FUN_00894fb0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00894650(param_1,iVar5,param_1 + param_2);
      FUN_00894fb0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00891730(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00894650(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_008934e0(param_1,(int)pvVar3,iVar5);
    FUN_00891730(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00897140 @ 00897140 ////

void __thiscall FUN_00897140(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00894570((void *)piVar6[1]);
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
    FUN_00896650(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00897200 @ 00897200 ////

void __thiscall FUN_00897200(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 local_88 [29];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceac30;
  local_10 = ExceptionList;
  puVar1 = local_88;
  for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  iVar4 = *(int *)((int)this + 4);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)((int)this + 0xc) - iVar4) / 0x74;
  }
  if (param_2 != 0) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x74;
    }
    ExceptionList = &local_10;
    local_14 = &stack0xffffff6c;
    if (0x234f72cU - iVar4 < param_2) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff6c;
      FUN_00896420();
      uVar5 = extraout_ECX;
    }
    if (*(int *)((int)this + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x74;
    }
    if (uVar5 < iVar4 + param_2) {
      if (0x234f72c - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x74;
      }
      if (uVar5 < iVar4 + param_2) {
        iVar4 = FUN_00890a50((int)this);
        uVar5 = iVar4 + param_2;
      }
      puVar1 = operator_new(uVar5 * 0x74);
      local_8 = 0;
      puVar2 = (undefined4 *)FUN_008937c0(*(undefined4 **)((int)this + 4),param_1,puVar1);
      FUN_00894750(puVar2,param_2,local_88);
      FUN_008937c0(param_1,*(undefined4 **)((int)this + 8),puVar2 + param_2 * 0x1d);
      iVar4 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x74;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar1 + uVar5 * 0x1d;
      *(undefined4 **)((int)this + 8) = puVar1 + (param_2 + iVar4) * 0x1d;
      *(undefined4 **)((int)this + 4) = puVar1;
      ExceptionList = local_10;
      return;
    }
    puVar1 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar1 - (int)param_1) / 0x74) < param_2) {
      FUN_008937c0(param_1,puVar1,param_1 + param_2 * 0x1d);
      local_8 = 2;
      FUN_00895590(*(undefined4 **)((int)this + 8),
                   param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x74,local_88);
      iVar4 = *(int *)((int)this + 8) + param_2 * 0x74;
      *(int *)((int)this + 8) = iVar4;
      FUN_008917c0(param_1,(undefined4 *)(iVar4 + param_2 * -0x74),local_88);
      ExceptionList = local_10;
      return;
    }
    uVar3 = FUN_008937c0(puVar1 + param_2 * -0x1d,puVar1,puVar1);
    *(undefined4 *)((int)this + 8) = uVar3;
    FUN_00893510(param_1,puVar1 + param_2 * -0x1d,puVar1);
    FUN_008917c0(param_1,param_1 + param_2 * 0x1d,local_88);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008974e0 @ 008974e0 ////

void __thiscall FUN_008974e0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00896490();
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
      _Dst = FUN_00894ff0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00894680(param_1,iVar5,param_1 + param_2);
      FUN_00894ff0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00891810(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00894680(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00893540(param_1,(int)pvVar3,iVar5);
    FUN_00891810(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_008976c0 @ 008976c0 ////

void __thiscall FUN_008976c0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_7c [26];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceac40;
  local_10 = ExceptionList;
  puVar2 = local_7c;
  for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar5 = *(int *)((int)this + 4);
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)((int)this + 0xc) - iVar5) / 0x68;
  }
  if (param_2 != 0) {
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar5) / 0x68;
    }
    ExceptionList = &local_10;
    local_14 = &stack0xffffff78;
    if (0x2762762U - iVar1 < param_2) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff78;
      FUN_00896500();
      uVar6 = extraout_ECX;
    }
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar5) / 0x68;
    }
    if (uVar6 < iVar1 + param_2) {
      if (0x2762762 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)((int)this + 8) - iVar5) / 0x68;
      }
      if (uVar6 < iVar5 + param_2) {
        iVar5 = FUN_00890a80((int)this);
        uVar6 = iVar5 + param_2;
      }
      puVar2 = operator_new(uVar6 * 0x68);
      local_8 = 0;
      puVar3 = (undefined4 *)FUN_00893850(*(undefined4 **)((int)this + 4),param_1,puVar2);
      FUN_00894810(puVar3,param_2,local_7c);
      FUN_00893850(param_1,*(undefined4 **)((int)this + 8),puVar3 + param_2 * 0x1a);
      iVar5 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar5 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x68;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar2 + uVar6 * 0x1a;
      *(undefined4 **)((int)this + 8) = puVar2 + (param_2 + iVar5) * 0x1a;
      *(undefined4 **)((int)this + 4) = puVar2;
      ExceptionList = local_10;
      return;
    }
    puVar2 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar2 - (int)param_1) / 0x68) < param_2) {
      FUN_00893850(param_1,puVar2,param_1 + param_2 * 0x1a);
      local_8 = 2;
      FUN_008955f0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x68,local_7c);
      iVar5 = *(int *)((int)this + 8) + param_2 * 0x68;
      *(int *)((int)this + 8) = iVar5;
      FUN_00891850(param_1,(undefined4 *)(iVar5 + param_2 * -0x68),local_7c);
      ExceptionList = local_10;
      return;
    }
    uVar4 = FUN_00893850(puVar2 + param_2 * -0x1a,puVar2,puVar2);
    *(undefined4 *)((int)this + 8) = uVar4;
    FUN_008935a0(param_1,puVar2 + param_2 * -0x1a,puVar2);
    FUN_00891850(param_1,param_1 + param_2 * 0x1a,local_7c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00897970 @ 00897970 ////

void __thiscall FUN_00897970(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int iVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceac50;
  local_10 = ExceptionList;
  local_1c = param_3[1];
  local_20 = *param_3;
  iVar3 = *(int *)((int)this + 4);
  local_14 = &stack0xffffffd4;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0xc) - iVar3 >> 3;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar3 >> 3;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd4;
    if (0x1fffffffU - iVar7 < param_2) {
      ExceptionList = &local_10;
      uVar2 = FUN_00896570();
      iVar3 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar3 >> 3;
    }
    if (uVar2 < iVar7 + param_2) {
      if (0x1fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - iVar3 >> 3;
      }
      if (uVar2 < iVar7 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)this + 8) - iVar3 >> 3;
        }
        uVar2 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar2 * 8);
      local_8 = 0;
      local_18 = puVar4;
      puVar5 = (undefined4 *)FUN_00893880(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00894840(puVar5,param_2,&local_20);
      FUN_00893880(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - (int)_Memory >> 3;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar2 * 2;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 2;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar4 - (int)param_1 >> 3) < param_2) {
      FUN_00893880(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_00895620(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_008918a0(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00893880(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00893600((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_008918a0(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00897bc0 @ 00897bc0 ////

void * __thiscall FUN_00897bc0(void *this,byte param_1)

{
  FUN_00896920((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00897be0 @ 00897be0 ////

void FUN_00897be0(void *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  size_t sVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_88;
  void *local_84;
  void *local_80;
  int *local_7c [2];
  int local_74;
  undefined4 *local_70;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceac68;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_6c,*(char **)(DAT_010501a0 + 0x220),*(uint *)(DAT_010501a0 + 0x224));
  local_4 = 0;
  sVar1 = _sprintf(local_4c,(char *)&param_2_00d1b93c,param_1);
  FUN_004073f0(&local_6c,local_4c,sVar1);
  iVar2 = 0x15;
  if (param_4 == 2) {
    iVar2 = 0x18;
  }
  this = FUN_0099bb50(local_6c,iVar2,param_2,param_3,'\0');
  local_74 = 0;
  local_70 = (undefined4 *)0x0;
  local_84 = this;
  uVar3 = MediaPlayer_LockVideoBuffer(this,&local_74);
  if ((char)uVar3 != '\0') {
    if (0 < param_3) {
      uVar4 = param_2 * param_4;
      local_88 = param_3;
      puVar6 = local_70;
      do {
        puVar7 = param_5;
        puVar8 = puVar6;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        puVar6 = (undefined4 *)((int)puVar6 + local_74);
        param_5 = (undefined4 *)((int)param_5 + uVar4);
        local_88 = local_88 + -1;
        this = local_84;
      } while (local_88 != 0);
    }
    uVar3 = MediaPlayer_UnlockVideoBuffer((int)this);
    if ((char)uVar3 != '\0') {
      local_84 = param_1;
      local_80 = this;
      FUN_00896930((void *)(*local_7c[0] + 0x100),local_7c,(int *)&local_84);
    }
  }
  if (local_64 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_00897d70 @ 00897d70 ////

void __fastcall FUN_00897d70(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  undefined4 *_Memory;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_54;
  int local_38;
  undefined4 local_34;
  undefined4 *local_2c;
  uint local_28;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar9 = *(int *)(param_1 + 0xc);
  iVar7 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 0xc) = iVar9 + 2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = *(undefined1 *)(iVar7 + 1 + iVar9);
  uVar2 = *(undefined1 *)(iVar7 + iVar9);
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    cVar3 = *(char *)(iVar9 + 2 + iVar7);
    *(int *)(param_1 + 0xc) = iVar9 + 5;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 4 + iVar7),*(undefined1 *)(iVar9 + 3 + iVar7));
    *(int *)(param_1 + 0xc) = iVar9 + 7;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar13 = (uint)CONCAT11(*(undefined1 *)(iVar9 + 6 + iVar7),*(undefined1 *)(iVar9 + 5 + iVar7));
    uVar11 = 0;
    if (cVar3 == '\x03') {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      bVar4 = *(byte *)(iVar9 + 7 + iVar7);
      *(int *)(param_1 + 0xc) = iVar9 + 8;
      uVar11 = (uint)bVar4;
    }
    iVar9 = *(int *)(param_1 + 0xc);
    uVar11 = (uVar11 + 1) * 3;
    pvVar8 = operator_new(uVar11);
    local_34 = 1;
    local_18 = 0;
    local_14 = 0;
    local_38 = iVar9 + iVar7;
    zlib_inflateInit_copy2((int)&local_38,"1.2.1",0x38);
    if (cVar3 == '\x03') {
      local_2c = pvVar8;
      local_28 = uVar11;
      iVar9 = zlib_inflate_copy2(&local_38,2);
      while (iVar9 != 1) {
        if (iVar9 != 0) {
          return;
        }
        local_34 = 1;
        if (local_28 == 0) break;
        iVar9 = zlib_inflate_copy2(&local_38,2);
      }
      local_54 = 1;
    }
    else if (cVar3 == '\x05') {
      local_54 = 4;
    }
    else if (cVar3 == '\x04') {
      local_54 = 2;
    }
    uVar11 = local_54 * uVar13 * uVar12;
    _Memory = operator_new(uVar11);
    local_2c = _Memory;
    local_28 = uVar11;
    iVar9 = zlib_inflate_copy2(&local_38,2);
    while( true ) {
      if ((iVar9 == 1) || (local_28 == 0)) {
        zlib_inflateEnd_copy2((int)&local_38);
        if (cVar3 == '\x05') {
          iVar9 = uVar13 * uVar12;
          if (0 < iVar9) {
            puVar10 = (undefined1 *)((int)_Memory + 2);
            do {
              uVar5 = puVar10[-2];
              uVar6 = puVar10[-1];
              puVar10[-2] = puVar10[1];
              puVar10[-1] = *puVar10;
              *puVar10 = uVar6;
              puVar10[1] = uVar5;
              puVar10 = puVar10 + 4;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          FUN_00897be0((void *)(uint)CONCAT11(uVar1,uVar2),uVar12,uVar13,local_54,_Memory);
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      if (iVar9 != 0) break;
      local_34 = 1;
      iVar9 = zlib_inflate_copy2(&local_38,2);
    }
  }
  return;
}


//// FUNCTION FUN_00897fb0 @ 00897fb0 ////

void __fastcall FUN_00897fb0(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  undefined4 *_Memory;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_54;
  int local_38;
  undefined4 local_34;
  undefined4 *local_2c;
  uint local_28;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar9 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar7 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar7 + 2;
  uVar1 = *(undefined1 *)(iVar9 + 1 + iVar7);
  uVar2 = *(undefined1 *)(iVar9 + iVar7);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  cVar3 = *(char *)(iVar7 + 2 + iVar9);
  *(int *)(param_1 + 0xc) = iVar7 + 5;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar13 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 4 + iVar9),*(undefined1 *)(iVar7 + 3 + iVar9));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0xc) = iVar7 + 7;
  uVar11 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 6 + iVar9),*(undefined1 *)(iVar7 + 5 + iVar9));
  uVar12 = 0;
  if (cVar3 == '\x03') {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    bVar4 = *(byte *)(iVar7 + 7 + iVar9);
    *(int *)(param_1 + 0xc) = iVar7 + 8;
    uVar12 = (uint)bVar4;
  }
  iVar7 = *(int *)(param_1 + 0xc);
  uVar12 = (uVar12 + 1) * 3;
  pvVar8 = operator_new(uVar12);
  local_34 = 1;
  local_18 = 0;
  local_14 = 0;
  local_38 = iVar7 + iVar9;
  zlib_inflateInit_copy2((int)&local_38,"1.2.1",0x38);
  if (cVar3 == '\x03') {
    local_2c = pvVar8;
    local_28 = uVar12;
    iVar9 = zlib_inflate_copy2(&local_38,2);
    while (iVar9 != 1) {
      if (iVar9 != 0) {
        return;
      }
      local_34 = 1;
      if (local_28 == 0) break;
      iVar9 = zlib_inflate_copy2(&local_38,2);
    }
    local_54 = 1;
  }
  else if (cVar3 == '\x05') {
    local_54 = 4;
  }
  uVar12 = local_54 * uVar11 * uVar13;
  _Memory = operator_new(uVar12);
  local_2c = _Memory;
  local_28 = uVar12;
  iVar9 = zlib_inflate_copy2(&local_38,2);
  while ((iVar9 != 1 && (local_28 != 0))) {
    if (iVar9 != 0) {
      return;
    }
    local_34 = 1;
    iVar9 = zlib_inflate_copy2(&local_38,2);
  }
  zlib_inflateEnd_copy2((int)&local_38);
  if ((cVar3 == '\x05') && (iVar9 = uVar11 * uVar13, 0 < iVar9)) {
    puVar10 = (undefined1 *)((int)_Memory + 2);
    do {
      uVar5 = puVar10[-2];
      uVar6 = puVar10[-1];
      puVar10[-2] = puVar10[1];
      puVar10[-1] = *puVar10;
      *puVar10 = uVar6;
      puVar10[1] = uVar5;
      puVar10 = puVar10 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_00897be0((void *)(uint)CONCAT11(uVar1,uVar2),uVar13,uVar11,local_54,_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008981d0 @ 008981d0 ////

void __fastcall FUN_008981d0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint local_21c;
  void *local_218;
  uint local_214;
  undefined4 local_210;
  char cStack_209;
  char local_208 [256];
  undefined4 local_108;
  
  iVar2 = param_1[2];
  iVar7 = 0;
  while( true ) {
    iVar10 = param_1[3];
    param_1[7] = 0;
    param_1[8] = 0;
    cVar1 = *(char *)(iVar2 + iVar10);
    param_1[3] = iVar10 + 1;
    local_208[iVar7] = cVar1;
    if (cVar1 == '\0') break;
    param_1[7] = 0;
    param_1[8] = 0;
    cVar1 = *(char *)(iVar10 + 1 + iVar2);
    param_1[3] = iVar10 + 2;
    local_208[iVar7 + 1] = cVar1;
    if (cVar1 == '\0') break;
    param_1[7] = 0;
    param_1[8] = 0;
    cVar1 = *(char *)(iVar10 + 2 + iVar2);
    param_1[3] = iVar10 + 3;
    local_208[iVar7 + 2] = cVar1;
    if (cVar1 == '\0') break;
    param_1[7] = 0;
    param_1[8] = 0;
    cVar1 = *(char *)(iVar10 + 3 + iVar2);
    param_1[3] = iVar10 + 4;
    local_208[iVar7 + 3] = cVar1;
    if ((cVar1 == '\0') || (iVar7 = iVar7 + 4, 0xff < iVar7)) break;
  }
  iVar7 = param_1[3];
  param_1[3] = iVar7 + 2;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar9 = (uint)CONCAT11(*(undefined1 *)(iVar2 + 1 + iVar7),*(undefined1 *)(iVar2 + iVar7));
  param_1[3] = iVar7 + 4;
  param_1[7] = 0;
  param_1[8] = 0;
  iVar10 = 0;
  local_214 = (uint)CONCAT11(*(undefined1 *)(iVar7 + 3 + iVar2),*(undefined1 *)(iVar7 + 2 + iVar2));
  while( true ) {
    iVar7 = param_1[3];
    param_1[7] = 0;
    param_1[8] = 0;
    cVar1 = *(char *)(iVar2 + iVar7);
    param_1[3] = iVar7 + 1;
    *(char *)((int)&local_108 + iVar10) = cVar1;
    if (cVar1 == '\0') break;
    param_1[7] = 0;
    param_1[8] = 0;
    cVar1 = *(char *)(iVar7 + 1 + iVar2);
    param_1[3] = iVar7 + 2;
    *(char *)((int)&local_108 + iVar10 + 1) = cVar1;
    if (cVar1 == '\0') break;
    param_1[7] = 0;
    param_1[8] = 0;
    cVar1 = *(char *)(iVar7 + 2 + iVar2);
    param_1[3] = iVar7 + 3;
    *(char *)((int)&local_108 + iVar10 + 2) = cVar1;
    if (cVar1 == '\0') break;
    param_1[7] = 0;
    param_1[8] = 0;
    cVar1 = *(char *)(iVar7 + 3 + iVar2);
    param_1[3] = iVar7 + 4;
    *(char *)((int)&local_108 + iVar10 + 3) = cVar1;
    if ((cVar1 == '\0') || (iVar10 = iVar10 + 4, 0xff < iVar10)) break;
  }
  pcVar3 = (char *)&local_108;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)pcVar3 - (int)&local_108;
  pcVar3 = &cStack_209;
  do {
    pcVar8 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)&local_108;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar4 = uVar4 & 3; local_21c = uVar9, uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar3 = pcVar3 + 1;
  }
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    pvVar5 = FUN_0099bb50(local_208,0,0,0,'\0');
    if (pvVar5 != (void *)0x0) {
      local_21c = local_214 & 0xffff;
      local_218 = pvVar5;
      FUN_00896930((void *)(*param_1 + 0x100),&local_210,(int *)&local_21c);
    }
  }
  return;
}


//// FUNCTION FUN_00898380 @ 00898380 ////

void __fastcall FUN_00898380(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 local_58 [2];
  char *local_50;
  uint local_4c;
  uint local_48;
  char local_44 [20];
  undefined1 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [20];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceac90;
  local_c = ExceptionList;
  pcVar4 = (char *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8));
  ExceptionList = &local_c;
  do {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    cVar1 = *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  } while (cVar1 != '\0');
  local_50 = local_44;
  local_44[0] = '\0';
  local_4c = 0;
  local_48 = 0x14;
  pcVar3 = pcVar4;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_50,pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
  iVar2 = *(int *)(param_1 + 0x480);
  local_30 = local_24;
  local_4 = 0;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,local_50,local_4c);
  local_10 = *(undefined4 *)(iVar2 + 0x34);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00593480(*(void **)(param_1 + 0x484),local_58,&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00898530 @ 00898530 ////

void * __thiscall FUN_00898530(void *this,void *param_1)

{
  undefined4 *_Memory;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (this == param_1) {
    return this;
  }
  if (*(int *)((int)param_1 + 4) != 0) {
    iVar4 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4);
    iVar2 = iVar4 >> 0x1f;
    iVar4 = iVar4 / 0x74 + iVar2;
    uVar5 = iVar4 - iVar2;
    if (iVar4 != iVar2) {
      _Memory = *(undefined4 **)((int)this + 4);
      if (_Memory == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(int *)((int)this + 8) - (int)_Memory) / 0x74;
      }
      if (uVar5 <= uVar1) {
        FUN_00893450(*(undefined4 **)((int)param_1 + 4),*(undefined4 **)((int)param_1 + 8),_Memory);
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             ((*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4)) / 0x74) * 0x74 +
             *(int *)((int)this + 4);
        return this;
      }
      if (_Memory == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(int *)((int)this + 0xc) - (int)_Memory) / 0x74;
      }
      if (uVar1 < uVar5) {
        if (_Memory != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        uVar5 = FUN_00890a50((int)param_1);
        uVar3 = FUN_00896c00(this,uVar5);
        if ((char)uVar3 == '\0') {
          return this;
        }
        uVar3 = FUN_00895110(*(undefined4 **)((int)param_1 + 4),*(undefined4 **)((int)param_1 + 8),
                             *(undefined4 **)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar3;
        return this;
      }
      iVar2 = FUN_00890a50((int)this);
      puVar6 = *(undefined4 **)((int)param_1 + 4) + iVar2 * 0x1d;
      FUN_00893450(*(undefined4 **)((int)param_1 + 4),puVar6,_Memory);
      uVar3 = FUN_008937c0(puVar6,*(undefined4 **)((int)param_1 + 8),*(undefined4 **)((int)this + 8)
                          );
      *(undefined4 *)((int)this + 8) = uVar3;
      return this;
    }
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return this;
}


//// FUNCTION FUN_008986d0 @ 008986d0 ////

int __thiscall FUN_008986d0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceaca0;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x68;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar3 != 0) {
    if (0x2762762 < uVar3) {
      FUN_00896500();
    }
    puVar1 = operator_new(uVar3 * 0x68);
    *(undefined4 **)((int)this + 4) = puVar1;
    *(undefined4 **)((int)this + 8) = puVar1;
    *(undefined4 **)((int)this + 0xc) = puVar1 + uVar3 * 0x1a;
    local_8 = 0;
    uVar2 = FUN_008937f0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),puVar1);
    *(undefined4 *)((int)this + 8) = uVar2;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_008987b0 @ 008987b0 ////

int __thiscall FUN_008987b0(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceacb0;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x1fffffff < uVar1) {
      uVar1 = FUN_00896570();
    }
    puVar2 = operator_new(uVar1 * 8);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1 * 2;
    local_8 = 0;
    uVar3 = FUN_00893820(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),puVar2);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_00898870 @ 00898870 ////

void __fastcall FUN_00898870(int param_1)

{
  FUN_00896d40(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00898960 @ 00898960 ////

void __thiscall FUN_00898960(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x74 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x74;
      goto LAB_008989a9;
    }
  }
  iVar1 = 0;
LAB_008989a9:
  FUN_00897200(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x74 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00898a20 @ 00898a20 ////

void __thiscall FUN_00898a20(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x68;
  }
  if (param_1 <= uVar1) {
    if ((iVar2 != 0) && (param_1 < (uint)(((int)*(undefined4 **)((int)this + 8) - iVar2) / 0x68))) {
      FUN_00895790(this,&param_1,(undefined4 *)(param_1 * 0x68 + iVar2),
                   *(undefined4 **)((int)this + 8));
    }
    return;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x68;
  }
  FUN_008976c0(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008);
  return;
}


//// FUNCTION FUN_00898b40 @ 00898b40 ////

void __thiscall FUN_00898b40(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_FUN_00d63d0c;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 **)((int)this + 0x1c) = (undefined2 *)((int)this + 0x28);
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 10;
  *(undefined4 *)((int)this + 8) = 2;
  *(undefined1 *)((int)this + 0x3c) = 0;
  return;
}


//// FUNCTION FUN_00898ba0 @ 00898ba0 ////

undefined4 * __thiscall FUN_00898ba0(void *this,byte param_1)

{
  FUN_00898bc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00898bc0 @ 00898bc0 ////

void __fastcall FUN_00898bc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d63d0c;
  if (10 < (uint)param_1[9]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[7]);
  }
  if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_00d63754;
  return;
}


//// FUNCTION FUN_00898c10 @ 00898c10 ////

void __thiscall FUN_00898c10(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_FUN_00d63d14;
  *(undefined4 *)((int)this + 0x1c) = 0x10000;
  *(undefined4 *)((int)this + 0x28) = 0x10000;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  return;
}


//// FUNCTION FUN_00898c70 @ 00898c70 ////

undefined4 * __thiscall FUN_00898c70(void *this,byte param_1)

{
  FUN_00898c90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00898c90 @ 00898c90 ////

void __fastcall FUN_00898c90(undefined4 *param_1)

{
  undefined4 *this;
  int iVar1;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cead13;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d63d14;
  this = param_1 + 0xe;
  local_4 = 1;
  iVar1 = FUN_00890ca0((int)this);
  while (iVar1 != 0) {
    if (*(undefined4 **)param_1[0xf] != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)param_1[0xf])(1);
    }
    FUN_00898d40(this,&uStack_10,(void *)param_1[0xf]);
    iVar1 = FUN_00890ca0((int)this);
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf]);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_LAB_00d638d8;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00898d40 @ 00898d40 ////

void __thiscall FUN_00898d40(void *this,undefined4 *param_1,void *param_2)

{
  _memmove(param_2,(void *)((int)param_2 + 4),
           (*(int *)((int)this + 8) - ((int)param_2 + 4) >> 2) << 2);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -4;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00898da0 @ 00898da0 ////

undefined4 * __thiscall FUN_00898da0(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cead33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined ***)this = &PTR_FUN_00d63d34;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_4 = 1;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x74),0x10,0x10,FUN_0088b870,FUN_00884320);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00898e30 @ 00898e30 ////

undefined4 * __thiscall FUN_00898e30(void *this,byte param_1)

{
  FUN_00898e50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00898e50 @ 00898e50 ////

void __fastcall FUN_00898e50(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cead69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d63d34;
  local_4 = 2;
  iVar1 = FUN_00871250((int)(param_1 + 3));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)param_1[4]);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_destructor_iterator_(param_1 + 0x1d,0x10,0x10,FUN_00884320);
  if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_00d638d8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00898f40 @ 00898f40 ////

void __fastcall FUN_00898f40(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[10] = 0xffffffff;
  return;
}


//// FUNCTION FUN_00898fa0 @ 00898fa0 ////

void __fastcall FUN_00898fa0(void *param_1)

{
  int iVar1;
  ushort uVar2;
  undefined4 *_Memory;
  int iVar3;
  undefined4 *local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)((int)param_1 + 0xc);
  iVar3 = iVar1 + 2;
  *(int *)((int)param_1 + 0xc) = iVar3;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  local_c = (undefined4 *)0x0;
  uVar2 = *(ushort *)(*(int *)((int)param_1 + 8) + iVar1);
  FUN_00892330(param_1,&local_c,&local_8,&local_4,*(int *)((int)param_1 + 0x2c) - iVar3,'\x01');
  _Memory = local_c;
  FUN_00897be0((void *)(uint)uVar2,local_4,local_8,4,local_c);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00899020 @ 00899020 ////

void __fastcall FUN_00899020(void *param_1)

{
  int iVar1;
  ushort uVar2;
  undefined4 *_Memory;
  undefined4 *local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)((int)param_1 + 0xc);
  *(int *)((int)param_1 + 0xc) = iVar1 + 2;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  local_c = (undefined4 *)0x0;
  uVar2 = *(ushort *)(*(int *)((int)param_1 + 8) + iVar1);
  *(int *)((int)param_1 + 0xc) = iVar1 + 6;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  FUN_008907b0(param_1,*(int *)((int)param_1 + 0x2c) - (iVar1 + 6),'\0');
  FUN_00892330(param_1,&local_c,&local_8,&local_4,
               *(int *)((int)param_1 + 0x2c) - *(int *)((int)param_1 + 0xc),'\0');
  _Memory = local_c;
  FUN_00897be0((void *)(uint)uVar2,local_4,local_8,4,local_c);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008990b0 @ 008990b0 ////

void __fastcall FUN_008990b0(void *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  void *_Memory;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *local_48;
  int local_44;
  int local_40;
  void *local_3c;
  int iStack_38;
  undefined4 uStack_34;
  void *pvStack_2c;
  uint uStack_28;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar4 = *(int *)((int)param_1 + 8);
  iVar3 = *(int *)((int)param_1 + 0xc);
  iVar6 = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(int *)((int)param_1 + 0xc) = iVar3 + 2;
  local_48 = (undefined4 *)0x0;
  local_3c = (void *)(uint)CONCAT11(*(undefined1 *)(iVar4 + 1 + iVar3),
                                    *(undefined1 *)(iVar4 + iVar3));
  *(int *)((int)param_1 + 0xc) = iVar3 + 4;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  uVar1 = *(undefined1 *)(iVar3 + 3 + iVar4);
  uVar2 = *(undefined1 *)(iVar3 + 2 + iVar4);
  *(int *)((int)param_1 + 0xc) = iVar3 + 6;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  uVar5 = CONCAT22(CONCAT11(*(undefined1 *)(iVar3 + 5 + iVar4),*(undefined1 *)(iVar3 + 4 + iVar4)),
                   CONCAT11(uVar1,uVar2));
  FUN_008907b0(param_1,uVar5,'\0');
  FUN_00892330(param_1,&local_48,&local_44,&local_40,uVar5,'\0');
  uVar7 = local_44 * local_40;
  iVar3 = *(int *)((int)param_1 + 0xc) + uVar5;
  iVar4 = *(int *)((int)param_1 + 8);
  *(int *)((int)param_1 + 0xc) = iVar3;
  _Memory = operator_new(uVar7);
  uStack_34 = 1;
  uStack_18 = 0;
  uStack_14 = 0;
  iStack_38 = iVar4 + iVar3;
  zlib_inflateInit_copy2((int)&iStack_38,"1.2.1",0x38);
  pvStack_2c = _Memory;
  uStack_28 = uVar7;
  iVar4 = zlib_inflate_copy2(&iStack_38,2);
  while (iVar4 != 1) {
    if (iVar4 != 0) {
      return;
    }
    uStack_34 = 1;
    if (uStack_28 == 0) break;
    iVar4 = zlib_inflate_copy2(&iStack_38,2);
  }
  zlib_inflateEnd_copy2((int)&iStack_38);
  if (0 < (int)uVar7) {
    do {
      local_48[iVar6] = (uint)*(byte *)((int)_Memory + iVar6) << 0x18 | local_48[iVar6] & 0xffffff;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar7);
  }
  FUN_00897be0(local_3c,local_40,local_44,4,local_48);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00899230 @ 00899230 ////

void __fastcall FUN_00899230(int *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  void *this;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  ulonglong uVar15;
  uint local_78;
  uint local_74 [2];
  byte *local_6c;
  undefined4 local_68;
  uint local_64;
  byte local_60 [20];
  byte *local_4c;
  undefined4 local_48;
  uint local_44;
  byte local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceadb0;
  local_c = ExceptionList;
  iVar10 = param_1[3];
  ExceptionList = &local_c;
  param_1[3] = iVar10 + 2;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar5 = *(ushort *)(param_1[2] + iVar10);
  this = operator_new(0x94);
  if (this == (void *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = FUN_008938b0(this,(uint)uVar5);
  }
  piVar6 = (int *)FUN_00886350((void *)(*param_1 + 0x10c),local_74,&local_78);
  iVar10 = *param_1;
  uVar3 = *(uint *)(*piVar6 + 0xc);
  local_74[0] = *(uint *)(iVar10 + 0x208);
  local_78 = uVar3;
  local_78 = FUN_00894400(local_74[0],*(undefined4 *)(local_74[0] + 4),&local_78);
  FUN_00896310((void *)(iVar10 + 0x204),1);
  *(uint *)(local_74[0] + 4) = local_78;
  **(uint **)(local_78 + 4) = local_78;
  FUN_00894870(param_1,(uint *)(uVar3 + 0xc));
  *(int *)(uVar3 + 0x1c) = *param_1;
  iVar10 = param_1[3];
  iVar4 = param_1[2];
  param_1[3] = iVar10 + 2;
  param_1[7] = 0;
  param_1[8] = 0;
  local_78 = (uint)CONCAT11(*(undefined1 *)(iVar4 + 1 + iVar10),*(byte *)(iVar4 + iVar10));
  if ((*(byte *)(iVar4 + iVar10) & 1) != 0) {
    param_1[3] = iVar10 + 4;
    param_1[7] = 0;
    param_1[8] = 0;
    *(ushort *)(uVar3 + 0x28) =
         CONCAT11(*(undefined1 *)(iVar10 + 3 + iVar4),*(undefined1 *)(iVar10 + 2 + iVar4));
    iVar10 = param_1[3];
    param_1[3] = iVar10 + 2;
    param_1[7] = 0;
    param_1[8] = 0;
    local_74[0] = (uint)*(ushort *)(param_1[2] + iVar10);
    uVar15 = FUN_00acd42c();
    *(short *)(uVar3 + 0x2a) = (short)uVar15;
    if (*(char *)(*param_1 + 0x7f) != '\0') {
      local_74[0] = (uint)*(ushort *)(uVar3 + 0x2a);
      uVar15 = FUN_00acd42c();
      *(short *)(uVar3 + 0x2a) = (short)uVar15;
    }
  }
  if ((local_78 & 0x900) != 0) {
    *(byte *)(uVar3 + 0x44) = *(byte *)(uVar3 + 0x44) | 2;
  }
  if ((local_78 & 4) != 0) {
    uVar7 = FUN_00891f80(param_1,1);
    *(uint *)(uVar3 + 0x2c) = uVar7;
  }
  if ((local_78 & 2) != 0) {
    iVar10 = param_1[3];
    param_1[3] = iVar10 + 2;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined2 *)(uVar3 + 0x30) = *(undefined2 *)(param_1[2] + iVar10);
  }
  if ((local_78 & 0x2000) != 0) {
    param_1[7] = 0;
    param_1[8] = 0;
    bVar1 = *(byte *)(param_1[3] + param_1[2]);
    param_1[3] = param_1[3] + 1;
    *(short *)(uVar3 + 0x32) = (short)(1 << (bVar1 & 0x1f));
    iVar10 = param_1[3];
    param_1[3] = iVar10 + 2;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined2 *)(uVar3 + 0x3c) = *(undefined2 *)(param_1[2] + iVar10);
    iVar10 = param_1[3];
    param_1[3] = iVar10 + 2;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined2 *)(uVar3 + 0x3e) = *(undefined2 *)(param_1[2] + iVar10);
    iVar10 = param_1[3];
    param_1[3] = iVar10 + 2;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined2 *)(uVar3 + 0x40) = *(undefined2 *)(param_1[2] + iVar10);
    iVar10 = param_1[3];
    param_1[3] = iVar10 + 2;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined2 *)(uVar3 + 0x42) = *(undefined2 *)(param_1[2] + iVar10);
  }
  pcVar12 = (char *)(param_1[3] + param_1[2]);
  do {
    param_1[7] = 0;
    param_1[8] = 0;
    cVar2 = *(char *)(param_1[2] + param_1[3]);
    param_1[3] = param_1[3] + 1;
  } while (cVar2 != '\0');
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar8 = pcVar12;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004015d0(&local_4c,pcVar12,(int)pcVar8 - (int)(pcVar12 + 1));
  local_4 = 0;
  FUN_0048ad50((int *)&local_4c);
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  _strncpy((char *)local_6c,"no_outline",10);
  local_68 = 10;
  local_6c[10] = 0;
  pbVar9 = local_6c;
  pbVar13 = local_4c;
  do {
    bVar1 = *pbVar13;
    bVar14 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_00899545:
      iVar10 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_0089954a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar13[1];
    bVar14 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_00899545;
    pbVar13 = pbVar13 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  iVar10 = 0;
LAB_0089954a:
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (iVar10 == 0) {
    *(byte *)(uVar3 + 0x44) = *(byte *)(uVar3 + 0x44) | 2;
  }
  if ((char)local_78 < '\0') {
    pcVar12 = (char *)(param_1[3] + param_1[2]);
    do {
      param_1[7] = 0;
      param_1[8] = 0;
      cVar2 = *(char *)(param_1[2] + param_1[3]);
      param_1[3] = param_1[3] + 1;
    } while (cVar2 != '\0');
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 0x14;
    pcVar8 = pcVar12;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_004015d0(&local_6c,pcVar12,(int)pcVar8 - (int)(pcVar12 + 1));
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar11 = FUN_009acf60(local_2c,&local_6c);
    FUN_004036d0((undefined4 *)(uVar3 + 0x4c),(wchar_t *)*puVar11,puVar11[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    FUN_004036d0((void *)(uVar3 + 0x6c),*(wchar_t **)(uVar3 + 0x4c),*(uint *)(uVar3 + 0x50));
  }
  if (local_44 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_00899660 @ 00899660 ////

void __fastcall FUN_00899660(int param_1)

{
  FUN_00896d40(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00899680 @ 00899680 ////

int __fastcall FUN_00899680(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008944b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008996b0 @ 008996b0 ////

void __thiscall FUN_008996b0(void *this,undefined4 *param_1)

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
  FUN_00896d80(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00899780 @ 00899780 ////

void __thiscall FUN_00899780(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x74) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x74))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00894750(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 0x1d;
    return;
  }
  FUN_00898960(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00899860 @ 00899860 ////

void __thiscall FUN_00899860(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_dc [25];
  undefined4 uStack_78;
  undefined4 local_68 [8];
  undefined1 local_48 [72];
  
  local_68[2] = 0x10000;
  local_68[5] = 0x10000;
  local_68[4] = 0;
  local_68[3] = 0;
  local_68[7] = 0;
  local_68[6] = 0;
  uStack_78 = 0x899890;
  FUN_00892220((int)local_48);
  puVar2 = local_68;
  puVar3 = auStack_dc;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00898a20(this,param_1);
  return;
}


//// FUNCTION FUN_00899910 @ 00899910 ////

void __fastcall FUN_00899910(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00897140(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00899940 @ 00899940 ////

int __fastcall FUN_00899940(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceadc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_008941a0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0;
  iVar2 = FUN_008944b0();
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined1 *)(iVar2 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 0x10) + 4) = *(int *)(param_1 + 0x10);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(*(int *)(param_1 + 0x10) + 8) = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008999c0 @ 008999c0 ////

void __fastcall FUN_008999c0(int param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ceade8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_008961e0((void *)(param_1 + 0xc),&local_10,(int *)**(int **)(param_1 + 0x10),
               *(int **)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x10));
}


//// FUNCTION FUN_00899a40 @ 00899a40 ////

void __fastcall FUN_00899a40(int *param_1)

{
  char cVar1;
  ushort uVar2;
  void *this;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *local_b0;
  uint local_ac;
  int *local_a8;
  undefined1 local_a4 [4];
  void *local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90 [28];
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00ceae0b;
  local_14 = ExceptionList;
  local_b0 = (int *)**(int **)(*param_1 + 0x110);
  ExceptionList = &local_14;
  local_a8 = param_1;
  if (local_b0 != *(int **)(*param_1 + 0x110)) {
    do {
      this = (void *)local_b0[3];
      if ((*(byte *)((int)this + 8) & 2) != 0) {
        local_a0 = (void *)0x0;
        local_9c = 0;
        local_98 = 0;
        puVar7 = *(undefined4 **)((int)this + 0x78);
        local_c = 0;
        if (puVar7 != *(undefined4 **)((int)this + 0x7c)) {
          do {
            uVar2 = *(ushort *)(puVar7 + 0x19);
            puVar8 = puVar7;
            puVar9 = local_90;
            for (iVar6 = 0x1d; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            if ((uVar2 != 0) && (uVar2 != 0xffff)) {
              local_ac = (uint)uVar2;
              iVar6 = *param_1;
              FUN_00894e00((void *)(iVar6 + 0x100),&local_94,(int *)&local_ac);
              if ((local_94 != *(int *)(iVar6 + 0x104)) &&
                 (iVar6 = *(int *)(local_94 + 0x10), iVar6 != 0)) {
                FUN_00a26d00(iVar6);
                local_20 = iVar6;
                FUN_00899780(local_a4,local_90);
              }
            }
            puVar7 = puVar7 + 0x1d;
            param_1 = local_a8;
          } while (puVar7 != *(undefined4 **)((int)this + 0x7c));
          if ((local_a0 != (void *)0x0) &&
             (local_ac = (local_9c - (int)local_a0) / 0x74, local_ac != 0)) {
            FUN_00898530((void *)((int)this + 0x74),local_a4);
          }
        }
        for (pvVar5 = *(void **)((int)this + 0x78); pvVar5 != *(void **)((int)this + 0x7c);
            pvVar5 = (void *)((int)pvVar5 + 0x74)) {
          if (*(int *)((int)pvVar5 + 0x70) != 0) {
            FUN_008a3210(this,pvVar5);
            break;
          }
        }
        local_c = 0xffffffff;
        param_1 = local_a8;
        if (local_a0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_a0);
        }
      }
      if (*(char *)((int)local_b0 + 0x11) == '\0') {
        piVar3 = (int *)local_b0[2];
        if (*(char *)((int)piVar3 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x11);
          local_b0 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x11);
            local_b0 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(local_b0[1] + 0x11);
          piVar4 = (int *)local_b0[1];
          piVar3 = local_b0;
          while ((local_b0 = piVar4, cVar1 == '\0' && (piVar3 == (int *)local_b0[2]))) {
            cVar1 = *(char *)(local_b0[1] + 0x11);
            piVar4 = (int *)local_b0[1];
            piVar3 = local_b0;
          }
        }
      }
    } while (local_b0 != *(int **)(*param_1 + 0x110));
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_00899c50 @ 00899c50 ////

/* WARNING: Removing unreachable block (ram,0x00899fe0) */

void __thiscall FUN_00899c50(void *this,undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int extraout_ECX;
  int extraout_EDX;
  short sVar8;
  undefined4 unaff_EBP;
  int *piVar9;
  uint uVar10;
  uint local_10 [2];
  int *local_8;
  uint local_4;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar6 = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  bVar1 = *(byte *)(iVar6 + iVar5);
  piVar9 = (int *)CONCAT22((short)((uint)unaff_EBP >> 0x10),(ushort)bVar1);
  *(int *)((int)this + 0xc) = iVar5 + 1;
  if (bVar1 == 0xff) {
    *(int *)((int)this + 0xc) = iVar5 + 3;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    piVar9 = (int *)(uint)CONCAT11(*(undefined1 *)(iVar5 + 2 + iVar6),
                                   *(undefined1 *)(iVar5 + 1 + iVar6));
  }
  piVar3 = *(int **)((int)this + 0x480);
  if (piVar3[3] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (piVar3[4] - piVar3[3]) / 0x68;
  }
  *piVar3 = iVar5;
  iVar5 = *(int *)((int)this + 0x480);
  if (*(int *)(iVar5 + 0xc) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc)) / 0x68;
  }
  local_8 = piVar9;
  FUN_00899860((void *)(iVar5 + 8),((uint)piVar9 & 0xffff) + 1 + iVar6);
  *(undefined2 *)(*(int *)(*(int *)((int)this + 0x480) + 0xc) + 100) = 0xffff;
  local_10[0] = 1;
  if ((short)piVar9 != 0) {
    do {
      piVar9 = *(int **)((int)this + 0x480);
      uVar10 = local_10[0] & 0xffff;
      if ((piVar9[3] == 0) || ((uint)((piVar9[4] - piVar9[3]) / 0x68) <= uVar10)) {
        FUN_00896170();
        iVar5 = extraout_ECX;
        iVar6 = extraout_EDX;
        goto LAB_00899f5a;
      }
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      bVar1 = *(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      *(byte *)((*piVar9 + uVar10) * 0x68 + piVar9[3]) = bVar1;
      *(undefined2 *)
       ((**(int **)((int)this + 0x480) + uVar10) * 0x68 + 100 + (*(int **)((int)this + 0x480))[3]) =
           0xffff;
      if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) == 0) {
          piVar9 = (int *)((**(int **)((int)this + 0x480) + uVar10) * 0x68 +
                          (*(int **)((int)this + 0x480))[3]);
          uVar10 = FUN_00891f80(this,param_2);
          piVar9[1] = uVar10;
        }
        else {
          iVar5 = *(int *)((int)this + 0xc);
          piVar9 = *(int **)((int)this + 0x480);
          *(undefined4 *)((int)this + 0x1c) = 0;
          *(undefined4 *)((int)this + 0x20) = 0;
          *(int *)((int)this + 0xc) = iVar5 + 2;
          *(undefined2 *)((*piVar9 + uVar10) * 0x68 + 100 + piVar9[3]) =
               *(undefined2 *)(*(int *)((int)this + 8) + iVar5);
          FUN_00894900(this,(uint *)((**(int **)((int)this + 0x480) + uVar10) * 0x68 + 8 +
                                    (*(int **)((int)this + 0x480))[3]));
        }
      }
      else {
        FUN_00894900(this,(uint *)((**(int **)((int)this + 0x480) + uVar10) * 0x68 + 8 +
                                  (*(int **)((int)this + 0x480))[3]));
        *(undefined4 *)((int)this + 0x1c) = 0;
        *(undefined4 *)((int)this + 0x20) = 0;
        uVar2 = *(undefined1 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
        *(undefined1 *)
         ((**(int **)((int)this + 0x480) + uVar10) * 0x68 + 0x20 + (*(int **)((int)this + 0x480))[3]
         ) = uVar2;
        piVar9 = (int *)0x0;
        if (*(char *)((**(int **)((int)this + 0x480) + uVar10) * 0x68 + 0x20 +
                     (*(int **)((int)this + 0x480))[3]) != '\0') {
          do {
            *(undefined4 *)((int)this + 0x1c) = 0;
            *(undefined4 *)((int)this + 0x20) = 0;
            bVar1 = *(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
            *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
            local_4 = (uint)bVar1;
            *(float *)((*(int **)((int)this + 0x480))[3] + 0x24 +
                      ((**(int **)((int)this + 0x480) + uVar10) * 0xd + ((uint)piVar9 & 0xffff)) * 8
                      ) = (float)local_4 * 0.003921569;
            uVar7 = FUN_00891f80(this,param_2);
            *(uint *)((*(int **)((int)this + 0x480))[3] + 0x28 +
                     ((**(int **)((int)this + 0x480) + uVar10) * 0xd + ((uint)piVar9 & 0xffff)) * 8)
                 = uVar7;
            piVar9 = (int *)((int)piVar9 + 1);
          } while ((ushort)piVar9 <
                   (ushort)*(byte *)((**(int **)((int)this + 0x480) + uVar10) * 0x68 + 0x20 +
                                    (*(int **)((int)this + 0x480))[3]));
        }
      }
      local_10[0] = local_10[0] + 1;
    } while ((ushort)local_10[0] <= (ushort)local_8);
  }
  iVar5 = *(int *)((int)this + 0xc);
  iVar6 = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  bVar1 = *(byte *)(iVar6 + iVar5);
  piVar9 = (int *)CONCAT22((short)((uint)piVar9 >> 0x10),(ushort)bVar1);
  *(int *)((int)this + 0xc) = iVar5 + 1;
  if (bVar1 == 0xff) {
    *(int *)((int)this + 0xc) = iVar5 + 3;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    piVar9 = (int *)(uint)CONCAT11(*(undefined1 *)(iVar5 + 2 + iVar6),
                                   *(undefined1 *)(iVar5 + 1 + iVar6));
  }
  iVar5 = *(int *)((int)this + 0x480);
  iVar6 = *(int *)(iVar5 + 0x1c);
  local_8 = piVar9;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
LAB_00899f5a:
    iVar6 = *(int *)(iVar5 + 0x20) - iVar6 >> 3;
  }
  sVar8 = (short)piVar9;
  *(int *)(iVar5 + 4) = iVar6;
  iVar6 = *(int *)((int)this + 0x480);
  local_4 = (uint)piVar9 & 0xffff;
  uVar10 = *(int *)(iVar6 + 4) + 1 + local_4;
  local_10[0] = 0;
  local_10[1] = 0;
  iVar5 = *(int *)(iVar6 + 0x1c);
  if (iVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(int *)(iVar6 + 0x20) - iVar5 >> 3;
  }
  if (uVar7 < uVar10) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar6 + 0x20) - iVar5 >> 3;
    }
    FUN_00897970((void *)(iVar6 + 0x18),*(undefined4 **)(iVar6 + 0x20),uVar10 - iVar5,local_10);
  }
  else if (iVar5 != 0) {
    if ((uVar10 < (uint)(*(int *)(iVar6 + 0x20) - iVar5 >> 3)) &&
       (iVar5 = iVar5 + uVar10 * 8, iVar5 != *(int *)(iVar6 + 0x20))) {
      *(int *)(iVar6 + 0x20) = iVar5;
    }
    sVar8 = (short)local_8;
  }
  if (sVar8 != 0) {
    local_8 = (int *)local_4;
    iVar5 = 1;
    do {
      iVar6 = *(int *)((int)this + 0xc);
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      *(int *)((int)this + 0xc) = iVar6 + 2;
      *(uint *)(*(int *)(*(int *)((int)this + 0x480) + 0x1c) +
               (*(int *)(*(int *)((int)this + 0x480) + 4) + iVar5) * 8) =
           (uint)*(ushort *)(*(int *)((int)this + 8) + iVar6);
      iVar6 = *(int *)(*(int *)((int)this + 0x480) + 4);
      iVar4 = *(int *)(*(int *)((int)this + 0x480) + 0x1c);
      uVar10 = FUN_00891f80(this,param_2);
      *(uint *)(iVar4 + (iVar6 + iVar5) * 8 + 4) = uVar10;
      iVar5 = iVar5 + 1;
      local_8 = (int *)((int)local_8 - 1);
    } while (local_8 != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_0089a080 @ 0089a080 ////

void __thiscall
FUN_0089a080(void *this,int param_1,undefined4 param_2,undefined ***param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  void *pvVar5;
  undefined ****ppppuVar6;
  undefined **ppuVar7;
  uint uVar8;
  void *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined **local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceae28;
  local_c = ExceptionList;
  local_28 = (uint)param_3 & 4;
  local_20 = (uint)param_3 & 2;
  iVar1 = *(int *)((int)this + 0xc);
  local_24 = (uint)param_3 & 1;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(int *)((int)this + 0xc) = iVar1 + 2;
  iVar2 = *(int *)((int)this + 8);
  uVar8 = (uint)param_3 & 8;
  local_2c = (uint)CONCAT11(*(undefined1 *)(iVar2 + 1 + iVar1),*(undefined1 *)(iVar2 + iVar1));
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(int *)((int)this + 0xc) = iVar1 + 4;
  local_1c = (uint)CONCAT11(*(undefined1 *)(iVar1 + 3 + iVar2),*(undefined1 *)(iVar1 + 2 + iVar2));
  pvVar5 = operator_new(0x38);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar5 + 0x18) = 0;
    *(undefined4 *)((int)pvVar5 + 0x14) = 0;
    *(undefined4 *)((int)pvVar5 + 0x24) = 0;
    *(undefined4 *)((int)pvVar5 + 0x20) = 0;
    *(undefined4 *)((int)pvVar5 + 0x10) = 0x10000;
    *(undefined4 *)((int)pvVar5 + 0x1c) = 0x10000;
    *(undefined2 *)((int)pvVar5 + 0x34) = 0x100;
    *(undefined2 *)((int)pvVar5 + 0x30) = 0x100;
    *(undefined2 *)((int)pvVar5 + 0x2c) = 0x100;
    *(undefined2 *)((int)pvVar5 + 0x28) = 0x100;
    *(undefined2 *)((int)pvVar5 + 0x36) = 0;
    *(undefined2 *)((int)pvVar5 + 0x32) = 0;
    *(undefined2 *)((int)pvVar5 + 0x2e) = 0;
    *(undefined2 *)((int)pvVar5 + 0x2a) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  local_30 = pvVar5;
  if (iVar1 == 0) {
    param_3 = (undefined ***)0x0;
  }
  else {
    param_3 = (undefined ***)(*(int *)(param_1 + 0x14) - iVar1 >> 2);
    if (param_3 < (undefined ***)(*(int *)(param_1 + 0x18) - iVar1 >> 2)) {
      puVar3 = *(undefined4 **)(param_1 + 0x14);
      *puVar3 = pvVar5;
      *(undefined4 **)(param_1 + 0x14) = puVar3 + 1;
      goto LAB_0089a19f;
    }
  }
  FUN_008974e0((void *)(param_1 + 0xc),*(undefined4 **)(param_1 + 0x14),1,&local_30);
LAB_0089a19f:
  *(uint *)((int)pvVar5 + 4) = local_2c;
  *(bool *)pvVar5 = uVar8 != 0;
  *(bool *)((int)pvVar5 + 1) = local_28 != 0;
  *(bool *)((int)pvVar5 + 3) = local_24 != 0;
  *(bool *)((int)pvVar5 + 2) = local_20 != 0;
  *(uint *)((int)pvVar5 + 0xc) = local_1c;
  local_18 = &PTR_LAB_00d638d8;
  local_14 = local_2c;
  local_10 = 1;
  iVar1 = *(int *)this;
  param_3 = &local_18;
  local_4 = 0;
  param_3 = (undefined ***)FUN_008897c0((void *)(iVar1 + 0x10c),&param_3);
  if ((param_3 == *(undefined ****)(iVar1 + 0x110)) ||
     (cVar4 = (*(code *)local_18[4])(param_3[3]), cVar4 != '\0')) {
    param_1 = *(int *)(iVar1 + 0x110);
    ppppuVar6 = (undefined ****)&param_1;
  }
  else {
    ppppuVar6 = &param_3;
  }
  if (*ppppuVar6 == *(undefined ****)(*(int *)this + 0x110)) {
    ppuVar7 = (undefined **)0x0;
  }
  else {
    ppuVar7 = (*ppppuVar6)[3];
  }
  *(undefined ***)((int)pvVar5 + 8) = ppuVar7;
  FUN_00894900(this,(uint *)((int)pvVar5 + 0x10));
  if (param_4 == 0) {
    *(undefined2 *)((int)pvVar5 + 0x36) = 0;
    *(undefined2 *)((int)pvVar5 + 0x32) = 0;
    *(undefined2 *)((int)pvVar5 + 0x2e) = 0;
    *(undefined2 *)((int)pvVar5 + 0x2a) = 0;
    *(undefined2 *)((int)pvVar5 + 0x34) = 0x100;
    *(undefined2 *)((int)pvVar5 + 0x30) = 0x100;
    *(undefined2 *)((int)pvVar5 + 0x2c) = 0x100;
    *(undefined2 *)((int)pvVar5 + 0x28) = 0x100;
    ExceptionList = local_c;
    return;
  }
  FUN_00894a20(this,(undefined2 *)((int)pvVar5 + 0x28),param_5);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0089a2c0 @ 0089a2c0 ////

undefined4 __thiscall
FUN_0089a2c0(void *this,int param_1,undefined4 param_2,char **param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  char **ppcVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  ulonglong uVar15;
  char **ppcVar16;
  char **ppcVar17;
  void *local_54;
  char *pcStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  char acStack_44 [20];
  char *local_30;
  undefined4 uStack_2c;
  uint uStack_28;
  char acStack_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar6 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceae69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  bVar1 = *(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  if (bVar1 == 0) {
    ExceptionList = pvVar6;
    return 0;
  }
  if ((char)bVar1 < '\0') {
    pvVar6 = operator_new(0x34);
    if (pvVar6 == (void *)0x0) {
      ppcVar7 = (char **)0x0;
    }
    else {
      ppcVar7 = (char **)FUN_008711d0(pvVar6,(uint)bVar1);
    }
    param_3 = ppcVar7;
    FUN_008996b0((void *)(param_1 + 0x38),&param_3);
    param_1._0_1_ = bVar1 & 8;
    if ((bVar1 & 8) == 0) {
      ppcVar7[3] = (char *)0x0;
    }
    else {
      iVar14 = *(int *)((int)this + 0xc);
      *(int *)((int)this + 0xc) = iVar14 + 2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      pcVar13 = (char *)(uint)*(ushort *)(*(int *)((int)this + 8) + iVar14);
      ppcVar7[3] = pcVar13;
      FUN_008ab1d0(&local_30,pcVar13);
      iVar14 = *(int *)this;
      param_3 = &local_30;
      FUN_00894e70((void *)(iVar14 + 0x118),&param_4,&param_3);
      if (param_4 == *(int *)(iVar14 + 0x11c)) {
        ppcVar7[4] = (char *)0x0;
        FUN_008ab0b0((int)&local_30);
      }
      else {
        ppcVar7[4] = *(char **)(param_4 + 0xc);
        FUN_008ab0b0((int)&local_30);
      }
    }
    if ((bVar1 & 4) == 0) {
      ppcVar7[8] = (char *)0xffffffff;
    }
    else {
      iVar14 = *(int *)((int)this + 0xc);
      iVar5 = *(int *)((int)this + 8);
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      bVar2 = *(byte *)(iVar14 + iVar5);
      *(int *)((int)this + 0xc) = iVar14 + 1;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      param_3 = (char **)(uint)*(byte *)(iVar14 + 1 + iVar5);
      *(int *)((int)this + 0xc) = iVar14 + 2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      bVar3 = *(byte *)(iVar14 + 2 + iVar5);
      *(int *)((int)this + 0xc) = iVar14 + 3;
      ppcVar7[8] = (char *)(((bVar2 | 0xffffff00) << 8 | (uint)param_3) << 8 | (uint)bVar3);
    }
    if ((bVar1 & 1) == 0) {
      ppcVar7[9] = (char *)0x0;
    }
    else {
      iVar14 = *(int *)((int)this + 0xc);
      *(int *)((int)this + 0xc) = iVar14 + 2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      ppcVar7[9] = (char *)(uint)*(ushort *)(*(int *)((int)this + 8) + iVar14);
    }
    if ((bVar1 & 2) == 0) {
      ppcVar7[10] = (char *)0x0;
    }
    else {
      iVar14 = *(int *)((int)this + 0xc);
      *(int *)((int)this + 0xc) = iVar14 + 2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      ppcVar7[10] = (char *)(uint)*(ushort *)(*(int *)((int)this + 8) + iVar14);
    }
    if ((byte)param_1 == 0) {
      ppcVar7[0xb] = (char *)0x0;
    }
    else {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      uVar15 = FUN_00acd42c();
      ppcVar7[0xb] = (char *)uVar15;
      if (*(char *)(*(int *)this + 0x7f) != '\0') {
        uVar15 = FUN_00acd42c();
        ppcVar7[0xb] = (char *)uVar15;
      }
      if (ppcVar7[4] != (char *)0x0) {
        pcVar13 = *(char **)(ppcVar7[4] + 0xc);
        pcStack_50 = acStack_44;
        acStack_44[0] = '\0';
        uStack_4c = 0;
        uStack_48 = 0x14;
        pcVar8 = pcVar13;
        do {
          cVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar4 != '\0');
        FUN_004015d0(&pcStack_50,pcVar13,(int)pcVar8 - (int)(pcVar13 + 1));
        local_4 = 0;
        FUN_0048ad50((int *)&pcStack_50);
        local_30 = acStack_24;
        acStack_24[0] = '\0';
        uStack_2c = 0;
        uStack_28 = 0x14;
        _strncpy(local_30,"lithograph",10);
        ppcVar17 = &local_30;
        ppcVar16 = &pcStack_50;
        uStack_2c = 10;
        local_30[10] = '\0';
        uVar9 = FUN_00401ec0(ppcVar16,ppcVar17);
        if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
          _free(local_30);
        }
        if ((char)uVar9 != '\0') {
          FUN_00403e20(&pcStack_50,"default_bold");
        }
        param_3 = operator_new(0x7c);
        local_4._0_1_ = 1;
        if (param_3 == (char **)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = FUN_009a8a00(param_3,pcStack_50,(int)ppcVar7[0xb],0,-0x1000000);
        }
        local_4._0_1_ = 0;
        ppcVar7[5] = (char *)piVar10;
        param_3 = operator_new(0x7c);
        local_4 = CONCAT31(local_4._1_3_,2);
        if (param_3 == (char **)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = FUN_009a8a00(param_3,pcStack_50,(int)ppcVar7[0xb],0,-0x7f7f80);
        }
        ppcVar7[6] = (char *)piVar10;
        ppcVar7[7] = ppcVar7[5];
        if (0x14 < uStack_48) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_50);
        }
      }
    }
  }
  else {
    local_54 = operator_new(0x40);
    local_4 = 3;
    if (local_54 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)FUN_00898b40(local_54,(uint)bVar1);
    }
    local_4 = 0xffffffff;
    local_54 = pvVar6;
    FUN_008996b0((void *)(param_1 + 0x38),&local_54);
    FUN_0040f4c0((void *)((int)pvVar6 + 0xc),(uint)bVar1 * 2);
    iVar14 = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    if (bVar1 != 0) {
      do {
        uVar11 = FUN_00892090(this,(int)param_3);
        uVar12 = FUN_00892090(this,param_4);
        *(uint *)(*(int *)((int)pvVar6 + 0x10) + iVar14 * 8) = uVar11;
        *(uint *)(iVar14 * 8 + 4 + *(int *)((int)pvVar6 + 0x10)) = uVar12;
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)(uint)bVar1);
    }
  }
  ExceptionList = local_c;
  return 1;
}


//// FUNCTION FUN_0089a740 @ 0089a740 ////

void __thiscall FUN_0089a740(void *this,undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  void *local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceae8b;
  local_c = ExceptionList;
  iVar3 = *(int *)((int)this + 0xc);
  ExceptionList = &local_c;
  *(int *)((int)this + 0xc) = iVar3 + 2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar4 = *(ushort *)(*(int *)((int)this + 8) + iVar3);
  local_18 = operator_new(0x48);
  local_4 = 0;
  if (local_18 == (void *)0x0) {
    local_18 = (void *)0x0;
  }
  else {
    local_18 = (void *)FUN_00898c10(local_18,(uint)uVar4);
  }
  local_4 = 0xffffffff;
  piVar5 = (int *)FUN_00886350((void *)(*(int *)this + 0x10c),local_14,&local_18);
  iVar3 = *(int *)(*piVar5 + 0xc);
  FUN_00894870(this,(uint *)(iVar3 + 0xc));
  FUN_00894900(this,(uint *)(iVar3 + 0x1c));
  *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)this;
  iVar6 = *(int *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  bVar1 = *(byte *)(*(int *)((int)this + 8) + iVar6);
  *(int *)((int)this + 0xc) = iVar6 + 1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  bVar2 = *(byte *)(iVar6 + 1 + *(int *)((int)this + 8));
  *(int *)((int)this + 0xc) = iVar6 + 2;
  do {
    iVar6 = FUN_0089a2c0(this,iVar3,param_1,(char **)(uint)bVar1,(uint)bVar2);
  } while (iVar6 != 0);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0089a830 @ 0089a830 ////

int __fastcall FUN_0089a830(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00894520();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0089a860 @ 0089a860 ////

void __fastcall FUN_0089a860(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
    FUN_00896920((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_0089a8a0 @ 0089a8a0 ////

uint __thiscall
FUN_0089a8a0(void *this,void *param_1,undefined4 param_2,uint *param_3,uint *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_38;
  float local_28;
  float local_18;
  float local_8;
  
  uVar6 = FUN_00892090(this,1);
  if (uVar6 == 0) {
    uVar6 = FUN_00892090(this,5);
    if ((short)uVar6 == 0) {
      return 1;
    }
    if ((uVar6 & 1) != 0) {
      uVar7 = FUN_00892090(this,5);
      uVar7 = uVar7 & 0xffff;
      uVar8 = FUN_00892090(this,uVar7);
      bVar5 = (byte)uVar7;
      if ((uVar8 & 1 << (bVar5 - 1 & 0x1f)) != 0) {
        uVar8 = uVar8 | -1 << (bVar5 & 0x1f);
      }
      uVar7 = FUN_00892090(this,uVar7);
      if ((uVar7 & 1 << (bVar5 - 1 & 0x1f)) != 0) {
        uVar7 = uVar7 | -1 << (bVar5 & 0x1f);
      }
      *param_3 = uVar8;
      *param_4 = uVar7;
      if (param_1 != (void *)0x0) {
        *(int *)((int)param_1 + 0x4c) = *(int *)((int)param_1 + 0x4c) + 1;
      }
    }
    if ((uVar6 & 2) != 0) {
      uVar7 = FUN_00892090(this,*(int *)((int)this + 0x34));
      *(uint *)(*(int *)((int)this + 0x480) + 0x28) = uVar7;
      piVar1 = *(int **)((int)this + 0x480);
      if (piVar1[10] == 0) {
        piVar1[10] = -1;
      }
      else {
        piVar1[10] = piVar1[10] + *piVar1;
      }
      if (param_1 != (void *)0x0) {
        *(int *)((int)param_1 + 0x4c) = *(int *)((int)param_1 + 0x4c) + 1;
      }
    }
    if ((uVar6 & 4) != 0) {
      uVar7 = FUN_00892090(this,*(int *)((int)this + 0x34));
      *(uint *)(*(int *)((int)this + 0x480) + 0x2c) = uVar7;
      piVar1 = *(int **)((int)this + 0x480);
      if (piVar1[0xb] == 0) {
        piVar1[0xb] = -1;
      }
      else {
        piVar1[0xb] = piVar1[0xb] + *piVar1;
      }
      if (param_1 != (void *)0x0) {
        *(int *)((int)param_1 + 0x4c) = *(int *)((int)param_1 + 0x4c) + 1;
      }
    }
    if ((uVar6 & 8) != 0) {
      uVar7 = FUN_00892090(this,*(int *)((int)this + 0x38));
      *(uint *)(*(int *)((int)this + 0x480) + 0x30) = uVar7;
      iVar2 = *(int *)((int)this + 0x480);
      if (*(int *)(iVar2 + 0x30) == 0) {
        *(undefined4 *)(iVar2 + 0x30) = 0xffffffff;
      }
      else {
        *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + *(int *)(iVar2 + 4);
      }
      if (param_1 != (void *)0x0) {
        *(int *)((int)param_1 + 0x4c) = *(int *)((int)param_1 + 0x4c) + 1;
      }
    }
    if ((uVar6 & 0x10) != 0) {
      if (param_1 != (void *)0x0) {
        *(int *)((int)param_1 + 0x4c) = *(int *)((int)param_1 + 0x4c) + 1;
      }
      FUN_00899c50(this,param_2,param_5);
      uVar7 = FUN_00892090(this,4);
      *(uint *)((int)this + 0x34) = uVar7 & 0xffff;
      uVar7 = FUN_00892090(this,4);
      *(uint *)((int)this + 0x38) = uVar7 & 0xffff;
      *(undefined4 *)(*(int *)((int)this + 0x480) + 0x28) = 0xffffffff;
      *(undefined4 *)(*(int *)((int)this + 0x480) + 0x2c) = 0xffffffff;
      *(undefined4 *)(*(int *)((int)this + 0x480) + 0x30) = 0xffffffff;
    }
    return uVar6 >> 7 & 1;
  }
  uVar6 = FUN_00892090(this,1);
  if (uVar6 == 0) {
    uVar6 = FUN_00892090(this,4);
    uVar7 = uVar6 + 2 & 0xffff;
    uVar6 = FUN_00892090(this,uVar7);
    bVar5 = (byte)uVar7;
    if ((uVar6 & 1 << (bVar5 - 1 & 0x1f)) != 0) {
      uVar6 = uVar6 | -1 << (bVar5 & 0x1f);
    }
    uVar8 = FUN_00892090(this,uVar7);
    if ((uVar8 & 1 << (bVar5 - 1 & 0x1f)) != 0) {
      uVar8 = uVar8 | -1 << (bVar5 & 0x1f);
    }
    local_38 = FUN_00892090(this,uVar7);
    if ((local_38 & 1 << (bVar5 - 1 & 0x1f)) != 0) {
      local_38 = local_38 | -1 << (bVar5 & 0x1f);
    }
    uVar7 = FUN_00892090(this,uVar7);
    if ((uVar7 & 1 << (bVar5 - 1 & 0x1f)) != 0) {
      uVar7 = uVar7 | -1 << (bVar5 & 0x1f);
    }
    if (param_1 != (void *)0x0) {
      uVar3 = *param_3;
      iVar2 = *(int *)((int)this + 0x480);
      uVar4 = *param_4;
      FUN_008a8640(param_1,(float *)(float)(int)uVar3,(float)(int)uVar4,local_8,0,
                   (float)(int)(uVar3 + uVar6),(float)(int)(uVar4 + uVar8),local_28,0,
                   (float)(int)(local_38 + uVar3 + uVar6),(float)(int)(uVar7 + uVar4 + uVar8),
                   local_18,0,*(float *)(iVar2 + 0x28),*(float *)(iVar2 + 0x2c),
                   *(void **)(iVar2 + 0x30));
    }
    *param_3 = *param_3 + local_38 + uVar6;
    *param_4 = *param_4 + uVar7 + uVar8;
    return 0;
  }
  uVar6 = FUN_00892090(this,4);
  uVar6 = uVar6 + 2;
  uVar7 = FUN_00892090(this,1);
  if (uVar7 != 0) {
    uVar6 = uVar6 & 0xffff;
    uVar7 = FUN_00892090(this,uVar6);
    bVar5 = (byte)uVar6;
    if ((uVar7 & 1 << (bVar5 - 1 & 0x1f)) != 0) {
      uVar7 = uVar7 | -1 << (bVar5 & 0x1f);
    }
    uVar6 = FUN_00892090(this,uVar6);
    if ((uVar6 & 1 << (bVar5 - 1 & 0x1f)) != 0) {
      uVar6 = uVar6 | -1 << (bVar5 & 0x1f);
    }
    if (param_1 != (void *)0x0) {
      iVar2 = *(int *)((int)this + 0x480);
      FUN_008a8520(param_1,(float *)(float)(int)*param_3,(float)(int)*param_4,local_18,0,
                   (float *)(float)(int)(*param_3 + uVar7),(float)(int)(*param_4 + uVar6),local_28,0
                   ,*(float *)(iVar2 + 0x28),*(float *)(iVar2 + 0x2c),*(void **)(iVar2 + 0x30));
    }
    *param_3 = *param_3 + uVar7;
    *param_4 = *param_4 + uVar6;
    return 0;
  }
  uVar7 = FUN_00892090(this,1);
  if (uVar7 != 0) {
    uVar6 = FUN_00893a20(this,uVar6 & 0xffff);
    if (param_1 != (void *)0x0) {
      iVar2 = *(int *)((int)this + 0x480);
      FUN_008a8520(param_1,(float *)(float)(int)*param_3,(float)(int)*param_4,local_28,0,
                   (float *)(float)(int)*param_3,(float)(int)(*param_4 + uVar6),local_18,0,
                   *(float *)(iVar2 + 0x28),*(float *)(iVar2 + 0x2c),*(void **)(iVar2 + 0x30));
    }
    *param_4 = *param_4 + uVar6;
    return 0;
  }
  uVar6 = FUN_00893a20(this,uVar6 & 0xffff);
  if (param_1 != (void *)0x0) {
    iVar2 = *(int *)((int)this + 0x480);
    FUN_008a8520(param_1,(float *)(float)(int)*param_3,(float)(int)*param_4,local_28,0,
                 (float *)(float)(int)(*param_3 + uVar6),(float)(int)*param_4,local_18,0,
                 *(float *)(iVar2 + 0x28),*(float *)(iVar2 + 0x2c),*(void **)(iVar2 + 0x30));
  }
  *param_3 = *param_3 + uVar6;
  return 0;
}


//// FUNCTION FUN_0089aeb0 @ 0089aeb0 ////

void __fastcall FUN_0089aeb0(int param_1)

{
  FUN_0089a860(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0089aed0 @ 0089aed0 ////

void __fastcall FUN_0089aed0(int param_1)

{
  FUN_0089a860(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0089aef0 @ 0089aef0 ////

undefined4 * __thiscall FUN_0089aef0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ceaedf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d63d68;
  iVar1 = FUN_00894520();
  *(int *)((int)this + 0x10) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)((int)this + 0x10) + 4) = *(int *)((int)this + 0x10);
  *(undefined4 *)*(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(int *)(*(int *)((int)this + 0x10) + 8) = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_4._0_1_ = 2;
  uVar2 = FUN_008942b0();
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00899940((int)this + 0x34);
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 8) = 2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0089afd0 @ 0089afd0 ////

undefined4 * __thiscall FUN_0089afd0(void *this,byte param_1)

{
  FUN_008a7c10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0089aff0 @ 0089aff0 ////

void __fastcall FUN_0089aff0(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *local_11c;
  void *local_118;
  void *local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_100 [2];
  undefined4 local_f8 [4];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [68];
  ushort local_94;
  undefined4 local_90 [8];
  undefined1 local_70 [72];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ceaefe;
  local_14 = ExceptionList;
  iVar14 = param_1[3];
  ExceptionList = &local_14;
  param_1[3] = iVar14 + 4;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar12 = *(undefined4 *)(param_1[2] + iVar14);
  local_114 = operator_new(0xa8);
  local_c = 0;
  if (local_114 == (void *)0x0) {
    local_11c = (undefined4 *)0x0;
  }
  else {
    local_11c = FUN_0089aef0(local_114,uVar12);
  }
  local_c = 0xffffffff;
  piVar13 = (int *)FUN_00886350((void *)(*param_1 + 0x10c),local_100,&local_11c);
  local_118 = *(void **)(*piVar13 + 0xc);
  iVar10 = param_1[2];
  iVar11 = param_1[3];
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = iVar11 + 4;
  local_110 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar10 + 3 + iVar11),
                                         *(undefined1 *)(iVar10 + 2 + iVar11)),
                                *(undefined1 *)(iVar10 + 1 + iVar11)),
                       *(undefined1 *)(iVar10 + iVar11));
  param_1[7] = 0;
  param_1[8] = 0;
  iVar14 = iVar11 + 8;
  param_1[3] = iVar14;
  local_10c = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar11 + 7 + iVar10),
                                         *(undefined1 *)(iVar11 + 6 + iVar10)),
                                *(undefined1 *)(iVar11 + 5 + iVar10)),
                       *(undefined1 *)(iVar11 + 4 + iVar10));
  param_1[7] = 0;
  param_1[8] = 0;
  iVar1 = iVar11 + 0xc;
  param_1[3] = iVar1;
  uVar2 = *(undefined1 *)(iVar10 + 3 + iVar14);
  uVar3 = *(undefined1 *)(iVar10 + 1 + iVar14);
  uVar4 = *(undefined1 *)(iVar10 + 2 + iVar14);
  uVar5 = *(undefined1 *)(iVar10 + iVar14);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = iVar11 + 0x10;
  uVar6 = *(undefined1 *)(iVar10 + 3 + iVar1);
  uVar7 = *(undefined1 *)(iVar10 + 1 + iVar1);
  uVar8 = *(undefined1 *)(iVar10 + 2 + iVar1);
  uVar9 = *(undefined1 *)(iVar10 + iVar1);
  *(undefined4 *)((int)local_118 + 0x50) = local_110;
  *(undefined4 *)((int)local_118 + 0x54) = local_10c;
  *(uint *)((int)local_118 + 0x58) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar4),uVar3),uVar5);
  *(uint *)((int)local_118 + 0x5c) = CONCAT31(CONCAT21(CONCAT11(uVar6,uVar8),uVar7),uVar9);
  iVar14 = param_1[3];
  param_1[3] = iVar14 + 2;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar16 = (undefined4 *)(uint)*(ushort *)(param_1[2] + iVar14);
  puVar15 = local_11c;
  while (local_11c = puVar16, local_11c != (undefined4 *)0x0) {
    local_dc = 0;
    FUN_00892220((int)local_d8);
    iVar10 = param_1[2];
    iVar11 = param_1[3];
    param_1[7] = 0;
    param_1[8] = 0;
    local_f8[0]._0_1_ = *(undefined1 *)(iVar10 + iVar11);
    param_1[7] = 0;
    param_1[8] = 0;
    iVar14 = iVar11 + 5;
    param_1[3] = iVar14;
    uVar2 = *(undefined1 *)(iVar11 + 4 + iVar10);
    uVar3 = *(undefined1 *)(iVar11 + 2 + iVar10);
    uVar4 = *(undefined1 *)(iVar11 + 3 + iVar10);
    uVar5 = *(undefined1 *)(iVar11 + 1 + iVar10);
    param_1[7] = 0;
    param_1[8] = 0;
    local_f8[1] = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar4),uVar3),uVar5);
    iVar1 = iVar11 + 7;
    param_1[3] = iVar1;
    local_94 = CONCAT11(*(undefined1 *)(iVar10 + 1 + iVar14),*(undefined1 *)(iVar10 + iVar14));
    param_1[7] = 0;
    param_1[8] = 0;
    iVar14 = iVar11 + 0xb;
    param_1[3] = iVar14;
    local_f8[2] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar10 + 3 + iVar1),
                                             *(undefined1 *)(iVar10 + 2 + iVar1)),
                                    *(undefined1 *)(iVar10 + 1 + iVar1)),
                           *(undefined1 *)(iVar10 + iVar1));
    param_1[7] = 0;
    param_1[8] = 0;
    iVar1 = iVar11 + 0xf;
    param_1[3] = iVar1;
    local_f8[3] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar10 + 3 + iVar14),
                                             *(undefined1 *)(iVar10 + 2 + iVar14)),
                                    *(undefined1 *)(iVar10 + 1 + iVar14)),
                           *(undefined1 *)(iVar10 + iVar14));
    param_1[7] = 0;
    param_1[8] = 0;
    iVar14 = iVar11 + 0x13;
    param_1[3] = iVar14;
    local_e8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar10 + 3 + iVar1),
                                          *(undefined1 *)(iVar10 + 2 + iVar1)),
                                 *(undefined1 *)(iVar10 + 1 + iVar1)),
                        *(undefined1 *)(iVar10 + iVar1));
    iVar1 = iVar11 + 0x17;
    param_1[3] = iVar1;
    param_1[7] = 0;
    param_1[8] = 0;
    local_e4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar10 + 3 + iVar14),
                                          *(undefined1 *)(iVar10 + 2 + iVar14)),
                                 *(undefined1 *)(iVar10 + 1 + iVar14)),
                        *(undefined1 *)(iVar10 + iVar14));
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[3] = iVar11 + 0x1f;
    local_e0 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar10 + 7 + iVar1),
                                          *(undefined1 *)(iVar10 + 6 + iVar1)),
                                 *(undefined1 *)(iVar10 + 5 + iVar1)),
                        *(undefined1 *)(iVar10 + 4 + iVar1));
    FUN_00892220((int)local_70);
    if ((local_94 != 0) && (local_94 != 0xffff)) {
      iVar14 = *(int *)((int)local_118 + 0x68);
      local_114 = (void *)(uint)local_94;
      if ((iVar14 == 0) ||
         ((uint)(*(int *)((int)local_118 + 0x70) - iVar14 >> 2) <=
          (uint)(*(int *)((int)local_118 + 0x6c) - iVar14 >> 2))) {
        FUN_0040ec60((void *)((int)local_118 + 100),*(undefined4 **)((int)local_118 + 0x6c),1,
                     &local_114);
      }
      else {
        puVar15 = *(undefined4 **)((int)local_118 + 0x6c);
        *puVar15 = local_114;
        *(undefined4 **)((int)local_118 + 0x6c) = puVar15 + 1;
      }
    }
    puVar15 = local_f8;
    puVar16 = local_90;
    for (iVar14 = 0x1a; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_00899780((void *)((int)local_118 + 0x74),local_90);
    puVar15 = (undefined4 *)((int)local_11c + -1);
    puVar16 = puVar15;
  }
  local_11c = puVar15;
  FUN_008a1550(local_118,(void *)param_1[0x11f]);
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_0089b3d0 @ 0089b3d0 ////

void __thiscall FUN_0089b3d0(void *this,undefined4 param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  void *this_00;
  undefined4 *puVar6;
  undefined4 in_stack_ffffff18;
  void *in_stack_ffffff1c;
  undefined4 *local_b8;
  undefined4 *local_b4;
  void *local_b0;
  undefined1 *local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98 [2];
  undefined4 local_90 [8];
  undefined1 local_70 [72];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ceaf29;
  local_14 = ExceptionList;
  iVar4 = *(int *)((int)this + 0xc);
  ExceptionList = &local_14;
  *(int *)((int)this + 0xc) = iVar4 + 2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_b8 = (undefined4 *)(uint)*(ushort *)(*(int *)((int)this + 8) + iVar4);
  FUN_00894870(this,&local_a8);
  iVar4 = *(int *)((int)this + 0x480);
  if (*(void **)(iVar4 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar4 + 0xc));
  }
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *(undefined4 *)(iVar4 + 0x14) = 0;
  iVar4 = *(int *)((int)this + 0x480);
  if (*(void **)(iVar4 + 0x1c) == (void *)0x0) {
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    FUN_00899c50(this,param_1,param_2);
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    uVar2 = FUN_00892090(this,4);
    *(uint *)((int)this + 0x34) = uVar2 & 0xffff;
    uVar2 = FUN_00892090(this,4);
    *(uint *)((int)this + 0x38) = uVar2 & 0xffff;
    *(undefined4 *)(*(int *)((int)this + 0x480) + 0x28) = 0xffffffff;
    *(undefined4 *)(*(int *)((int)this + 0x480) + 0x2c) = 0xffffffff;
    local_ac = (undefined1 *)0x0;
    local_b4 = (undefined4 *)0x0;
    *(undefined4 *)(*(int *)((int)this + 0x480) + 0x30) = 0xffffffff;
    local_b0 = operator_new(0xa8);
    local_c = 0;
    if (local_b0 == (void *)0x0) {
      local_b8 = (undefined4 *)0x0;
    }
    else {
      local_b8 = FUN_0089aef0(local_b0,local_b8);
    }
    local_c = 0xffffffff;
    piVar3 = (int *)FUN_00886350((void *)(*(int *)this + 0x10c),local_98,&local_b8);
    this_00 = *(void **)(*piVar3 + 0xc);
    *(uint *)((int)this_00 + 0x50) = local_a8;
    *(undefined4 *)((int)this_00 + 0x54) = local_a4;
    *(undefined4 *)((int)this_00 + 0x58) = local_a0;
    *(undefined4 *)((int)this_00 + 0x5c) = local_9c;
    local_b0 = this_00;
    do {
      uVar2 = FUN_0089a8a0(this,this_00,param_1,(uint *)&local_ac,(uint *)&local_b4,param_2);
    } while (uVar2 == 0);
    local_90[2] = 0x10000;
    local_90[5] = 0x10000;
    local_90[4] = 0;
    local_90[3] = 0;
    local_90[7] = 0;
    local_90[6] = 0;
    FUN_00892220((int)local_70);
    local_b4 = *(undefined4 **)(*(int *)((int)this + 0x480) + 0xc);
    if (local_b4 != *(undefined4 **)(*(int *)((int)this + 0x480) + 0x10)) {
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      do {
        uVar1 = *(ushort *)(local_b4 + 0x19);
        if ((uVar1 != 0) && (uVar1 != 0xffff)) {
          iVar4 = *(int *)((int)this_00 + 0x68);
          local_b8 = (undefined4 *)(uint)uVar1;
          if ((iVar4 == 0) ||
             ((uint)(*(int *)((int)this_00 + 0x70) - iVar4 >> 2) <=
              (uint)(*(int *)((int)this_00 + 0x6c) - iVar4 >> 2))) {
            FUN_0040ec60((void *)((int)this_00 + 100),*(undefined4 **)((int)this_00 + 0x6c),1,
                         &local_b8);
          }
          else {
            puVar5 = *(undefined4 **)((int)this_00 + 0x6c);
            *puVar5 = local_b8;
            *(undefined4 **)((int)this_00 + 0x6c) = puVar5 + 1;
          }
        }
        puVar5 = local_b4;
        puVar6 = local_90;
        for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_00899780((void *)((int)local_b0 + 0x74),local_90);
        local_b4 = local_b4 + 0x1a;
        this_00 = local_b0;
      } while (local_b4 != *(undefined4 **)(*(int *)((int)this + 0x480) + 0x10));
    }
    local_ac = &stack0xffffff28;
    FUN_008987b0(&stack0xffffff28,*(int *)((int)this + 0x480) + 0x18);
    local_b8 = (undefined4 *)&stack0xffffff18;
    local_c = 1;
    FUN_008986d0(&stack0xffffff18,*(int *)((int)this + 0x480) + 8);
    local_c = 0xffffffff;
    FUN_008a9700(this_00,in_stack_ffffff18,in_stack_ffffff1c);
    iVar4 = *(int *)((int)this + 0x480);
    if (*(void **)(iVar4 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(iVar4 + 0xc));
    }
    *(undefined4 *)(iVar4 + 0xc) = 0;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(undefined4 *)(iVar4 + 0x14) = 0;
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(iVar4 + 0x1c));
}


//// FUNCTION FUN_0089b700 @ 0089b700 ////

void __thiscall FUN_0089b700(void *this,undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint **ppuVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 auStack_138 [20];
  undefined4 uStack_e8;
  int local_c0;
  int local_bc;
  uint *local_b8;
  uint *local_b4;
  undefined4 *local_b0;
  void *local_ac;
  int local_a8;
  uint local_a4;
  void *local_a0 [2];
  int local_98 [9];
  undefined4 local_74 [8];
  undefined1 local_54 [72];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceaf67;
  pvStack_c = ExceptionList;
  iVar9 = *(int *)((int)this + 0xc);
  ExceptionList = &pvStack_c;
  *(int *)((int)this + 0xc) = iVar9 + 2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar7 = (uint)*(ushort *)(*(int *)((int)this + 8) + iVar9);
  FUN_008ab1d0(local_98,uVar7);
  iVar9 = *(int *)this;
  puVar6 = (uint *)(*(uint **)(iVar9 + 0x11c))[1];
  cVar1 = *(char *)((int)puVar6 + 0x11);
  local_4 = 0;
  local_b8 = *(uint **)(iVar9 + 0x11c);
  while (cVar1 == '\0') {
    if (*(int *)puVar6[3] < local_98[0]) {
      puVar3 = (uint *)puVar6[2];
      puVar6 = local_b8;
    }
    else {
      puVar3 = (uint *)*puVar6;
    }
    local_b8 = puVar6;
    puVar6 = puVar3;
    cVar1 = *(char *)((int)puVar3 + 0x11);
  }
  if ((local_b8 == *(uint **)(iVar9 + 0x11c)) || (local_98[0] < *(int *)local_b8[3])) {
    local_b4 = *(uint **)(iVar9 + 0x11c);
    ppuVar4 = &local_b4;
  }
  else {
    ppuVar4 = &local_b8;
  }
  puVar6 = *ppuVar4;
  if (puVar6 == *(uint **)(iVar9 + 0x11c)) {
    local_ac = operator_new(0x24);
    local_4._0_1_ = 1;
    if (local_ac == (void *)0x0) {
      local_b8 = (uint *)0x0;
    }
    else {
      local_b8 = (uint *)FUN_008ab1d0(local_ac,uVar7);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    piVar5 = (int *)FUN_008969f0((void *)(*(int *)this + 0x118),local_a0,&local_b8);
    puVar6 = (uint *)*piVar5;
  }
  local_b4 = (uint *)puVar6[3];
  local_a8 = *(int *)((int)this + 0xc);
  *(int *)((int)this + 0xc) = local_a8 + 2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar8 = (uint)*(ushort *)(*(int *)((int)this + 8) + local_a8);
  uVar10 = (int)uVar8 >> 1;
  *(uint *)((int)this + uVar7 * 4 + 0x4c) = uVar10;
  local_b4[1] = uVar10;
  local_ac = (void *)uVar10;
  if ((void *)local_b4[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_b4[5]);
  }
  local_b4[5] = 0;
  local_b4[6] = 0;
  local_b4[7] = 0;
  local_b8 = operator_new(uVar10 * 4);
  *local_b8 = uVar8;
  iVar9 = 1;
  if (1 < uVar10) {
    do {
      iVar2 = *(int *)((int)this + 0xc);
      *(int *)((int)this + 0xc) = iVar2 + 2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      iVar12 = iVar9 + 1;
      local_b8[iVar9] = (uint)*(ushort *)(*(int *)((int)this + 8) + iVar2);
      iVar9 = iVar12;
    } while (iVar12 < (int)uVar10);
  }
  local_c0 = 0;
  if (uVar10 != 0) {
    local_bc = 0;
    do {
      local_a0[0] = operator_new(0xa8);
      local_4._0_1_ = 2;
      if (local_a0[0] == (void *)0x0) {
        local_b0 = (undefined4 *)0x0;
      }
      else {
        local_b0 = FUN_0089aef0(local_a0[0],local_c0);
      }
      uVar7 = local_b4[5];
      local_4 = (uint)local_4._1_3_ << 8;
      if ((uVar7 == 0) ||
         ((uint)((int)(local_b4[7] - uVar7) >> 2) <= (uint)((int)(local_b4[6] - uVar7) >> 2))) {
        FUN_00896f60(local_b4 + 4,(undefined4 *)local_b4[6],1,&local_b0);
      }
      else {
        puVar11 = (undefined4 *)local_b4[6];
        *puVar11 = local_b0;
        local_b4[6] = (uint)(puVar11 + 1);
      }
      *(int *)((int)this + 0xc) = *(int *)(local_bc + (int)local_b8) + local_a8;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      uVar7 = FUN_00892090(this,4);
      *(uint *)((int)this + 0x34) = uVar7 & 0xffff;
      uVar7 = FUN_00892090(this,4);
      *(uint *)((int)this + 0x38) = uVar7 & 0xffff;
      **(undefined4 **)((int)this + 0x480) = 0;
      local_b0 = (undefined4 *)(*(int *)((int)this + 0x480) + 8);
      local_a0[0] = (void *)0x0;
      local_a4 = 0;
      local_74[2] = 0x10000;
      local_74[5] = 0x10000;
      local_74[4] = 0;
      local_74[3] = 0;
      local_74[7] = 0;
      local_74[6] = 0;
      FUN_00892220((int)local_54);
      puVar11 = local_74;
      puVar13 = auStack_138;
      for (iVar9 = 0x1a; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      FUN_00898a20(local_b0,2);
      *(undefined1 *)(*(int *)(*(int *)((int)this + 0x480) + 0xc) + 0x68) = 0;
      *(undefined4 *)(*(int *)(*(int *)((int)this + 0x480) + 0xc) + 0x6c) = 0xff000000;
      *(undefined4 *)(*(int *)((int)this + 0x480) + 0x2c) = 0xffffffff;
      *(undefined4 *)(*(int *)((int)this + 0x480) + 0x28) = 0xffffffff;
      *(undefined4 *)(*(int *)((int)this + 0x480) + 0x30) = 0xffffffff;
      do {
        uStack_e8 = 0x89ba49;
        uVar7 = FUN_0089a8a0(this,*(void **)(local_bc + local_b4[5]),param_1,(uint *)local_a0,
                             &local_a4,0);
      } while (uVar7 == 0);
      local_c0 = local_c0 + 1;
      local_bc = local_bc + 4;
    } while (local_c0 < (int)local_ac);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_b8);
}


//// FUNCTION FUN_0089bab0 @ 0089bab0 ////

/* WARNING: Removing unreachable block (ram,0x0089bffb) */
/* WARNING: Removing unreachable block (ram,0x0089c000) */

void __thiscall FUN_0089bab0(void *this,undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint *puVar3;
  ushort uVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  int *piVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 auStack_144 [16];
  undefined4 uStack_104;
  undefined4 in_stack_ffffff04;
  void *in_stack_ffffff08;
  undefined4 *local_cc;
  uint local_c8;
  undefined4 *local_c4;
  uint local_c0;
  undefined4 *local_bc;
  uint *local_b8;
  undefined4 *local_b4;
  void *local_b0;
  void *local_ac;
  undefined4 *local_a8 [4];
  int local_98 [9];
  undefined4 local_74 [8];
  undefined1 local_54 [72];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceafb2;
  pvStack_c = ExceptionList;
  iVar10 = *(int *)((int)this + 8);
  iVar12 = *(int *)((int)this + 0xc);
  ExceptionList = &pvStack_c;
  *(int *)((int)this + 0xc) = iVar12 + 2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar13 = (uint)CONCAT11(*(undefined1 *)(iVar10 + 1 + iVar12),*(undefined1 *)(iVar10 + iVar12));
  *(int *)((int)this + 0xc) = iVar12 + 4;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_c0 = (uint)CONCAT11(*(undefined1 *)(iVar12 + 3 + iVar10),
                            *(undefined1 *)(iVar12 + 2 + iVar10));
  local_c8 = uVar13;
  FUN_008ab1d0(local_98,uVar13);
  iVar10 = *(int *)this;
  puVar8 = (undefined4 *)(*(undefined4 **)(iVar10 + 0x11c))[1];
  cVar1 = *(char *)((int)puVar8 + 0x11);
  local_4 = 0;
  local_c4 = *(undefined4 **)(iVar10 + 0x11c);
  while (cVar1 == '\0') {
    if (*(int *)puVar8[3] < local_98[0]) {
      puVar5 = (undefined4 *)puVar8[2];
      puVar8 = local_c4;
    }
    else {
      puVar5 = (undefined4 *)*puVar8;
    }
    local_c4 = puVar8;
    puVar8 = puVar5;
    uVar13 = local_c8;
    cVar1 = *(char *)((int)puVar5 + 0x11);
  }
  if ((local_c4 == *(undefined4 **)(iVar10 + 0x11c)) || (local_98[0] < *(int *)local_c4[3])) {
    local_bc = *(undefined4 **)(iVar10 + 0x11c);
    ppuVar6 = &local_bc;
  }
  else {
    ppuVar6 = &local_c4;
  }
  puVar8 = *ppuVar6;
  if (puVar8 == *(undefined4 **)(iVar10 + 0x11c)) {
    local_ac = operator_new(0x24);
    local_4._0_1_ = 1;
    if (local_ac == (void *)0x0) {
      local_c4 = (undefined4 *)0x0;
    }
    else {
      local_c4 = (undefined4 *)FUN_008ab1d0(local_ac,uVar13);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    piVar7 = (int *)FUN_008969f0((void *)(*(int *)this + 0x118),local_a8,&local_c4);
    puVar8 = (undefined4 *)*piVar7;
  }
  puVar3 = (uint *)puVar8[3];
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar13 = (uint)*(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  puVar3[2] = uVar13;
  local_b8 = puVar3;
  pvVar9 = operator_new(uVar13 + 1);
  puVar3[3] = (uint)pvVar9;
  iVar10 = 0;
  if (uVar13 != 0) {
    do {
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      uVar2 = *(undefined1 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      *(undefined1 *)(iVar10 + puVar3[3]) = uVar2;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar13);
  }
  *(undefined1 *)(iVar10 + puVar3[3]) = 0;
  iVar10 = *(int *)((int)this + 0xc);
  local_c4 = (undefined4 *)(iVar10 + 2);
  *(undefined4 **)((int)this + 0xc) = local_c4;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar4 = *(ushort *)(*(int *)((int)this + 8) + iVar10);
  local_cc = (undefined4 *)(uint)uVar4;
  local_b4 = local_cc;
  if (uVar4 == 0) {
    if ((char)local_c0 < '\0') {
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 6;
      iVar12 = *(int *)((int)this + 0xc);
      iVar10 = iVar12 + 2;
      *(int *)((int)this + 0xc) = iVar10;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      iVar12 = (int)*(short *)(*(int *)((int)this + 8) + iVar12);
      if (0 < iVar12) {
        do {
          if ((local_c0 & 8) == 0) {
            iVar10 = iVar10 + 2;
          }
          else {
            iVar10 = iVar10 + 4;
          }
          iVar10 = iVar10 + 2;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        *(int *)((int)this + 0xc) = iVar10;
        *(undefined4 *)((int)this + 0x1c) = 0;
        *(undefined4 *)((int)this + 0x20) = 0;
      }
    }
    local_4 = 0xffffffff;
    FUN_008ab0b0((int)local_98);
    ExceptionList = pvStack_c;
    return;
  }
  puVar3[1] = (uint)local_cc;
  *puVar3 = local_c8;
  if ((void *)puVar3[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)puVar3[5]);
  }
  local_ac = (void *)((int)local_cc * 4);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  local_b0 = operator_new((uint)local_ac);
  iVar10 = 0;
  if (0 < (int)local_cc) {
    do {
      iVar12 = *(int *)((int)this + 0xc);
      puVar11 = (ushort *)(*(int *)((int)this + 8) + iVar12);
      *(undefined4 *)((int)this + 0x20) = 0;
      *(undefined4 *)((int)this + 0x1c) = 0;
      if ((local_c0 & 8) == 0) {
        *(int *)((int)this + 0xc) = iVar12 + 2;
        *(uint *)((int)local_b0 + iVar10 * 4) = (uint)*puVar11;
      }
      else {
        *(int *)((int)this + 0xc) = iVar12 + 4;
        *(undefined4 *)((int)local_b0 + iVar10 * 4) = *(undefined4 *)puVar11;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)local_cc);
  }
  iVar10 = *(int *)((int)this + 0xc);
  local_c8 = local_c0 & 8;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (local_c8 == 0) {
    *(int *)((int)this + 0xc) = iVar10 + 2;
    local_bc = (undefined4 *)(uint)*(ushort *)(*(int *)((int)this + 8) + iVar10);
  }
  else {
    *(int *)((int)this + 0xc) = iVar10 + 4;
    local_bc = *(undefined4 **)(*(int *)((int)this + 8) + iVar10);
  }
  local_cc = (undefined4 *)(*(int *)((int)this + 0x480) + 8);
  local_74[2] = 0x10000;
  local_74[5] = 0x10000;
  local_74[4] = 0;
  local_74[3] = 0;
  local_74[7] = 0;
  local_74[6] = 0;
  FUN_00892220((int)local_54);
  puVar8 = local_74;
  puVar5 = auStack_144;
  for (iVar10 = 0x1a; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar5 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00898a20(local_cc,2);
  **(undefined4 **)((int)this + 0x480) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x480) + 0x28) = 0xffffffff;
  *(undefined4 *)(*(int *)((int)this + 0x480) + 0x2c) = 0xffffffff;
  *(undefined4 *)(*(int *)((int)this + 0x480) + 0x30) = 0xffffffff;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x480) + 0xc) + 0x68) = 0;
  iVar10 = 0;
  *(undefined4 *)(*(int *)(*(int *)((int)this + 0x480) + 0xc) + 0x6c) = 0xff000000;
  if ((short)local_b4 != 0) {
    do {
      local_a8[0] = operator_new(0xa8);
      local_4._0_1_ = 2;
      if (local_a8[0] == (undefined4 *)0x0) {
        local_cc = (undefined4 *)0x0;
      }
      else {
        local_cc = FUN_0089aef0(local_a8[0],iVar10);
      }
      uVar13 = local_b8[5];
      local_4 = (uint)local_4._1_3_ << 8;
      local_a8[0] = local_cc;
      if ((uVar13 == 0) ||
         ((uint)((int)(local_b8[7] - uVar13) >> 2) <= (uint)((int)(local_b8[6] - uVar13) >> 2))) {
        FUN_00896f60(local_b8 + 4,(undefined4 *)local_b8[6],1,local_a8);
      }
      else {
        puVar8 = (undefined4 *)local_b8[6];
        *puVar8 = local_cc;
        local_b8[6] = (uint)(puVar8 + 1);
      }
      *(int *)((int)this + 0xc) = *(int *)((int)local_b0 + iVar10 * 4) + (int)local_c4;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      uVar13 = FUN_00892090(this,4);
      *(uint *)((int)this + 0x34) = uVar13 & 0xffff;
      uVar13 = FUN_00892090(this,4);
      *(uint *)((int)this + 0x38) = uVar13 & 0xffff;
      local_cc = (undefined4 *)0x0;
      local_a8[0] = (undefined4 *)0x0;
      do {
        uVar13 = FUN_0089a8a0(this,*(void **)(local_b8[5] + iVar10 * 4),param_1,(uint *)&local_cc,
                              (uint *)local_a8,0);
      } while (uVar13 == 0);
      local_a8[0] = (undefined4 *)&stack0xffffff14;
      FUN_008987b0(&stack0xffffff14,*(int *)((int)this + 0x480) + 0x18);
      local_cc = (undefined4 *)&stack0xffffff04;
      local_4._0_1_ = 3;
      uStack_104 = 0x89bf31;
      FUN_008986d0(&stack0xffffff04,*(int *)((int)this + 0x480) + 8);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_008a9700(*(void **)(local_b8[5] + iVar10 * 4),in_stack_ffffff04,in_stack_ffffff08);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)((uint)local_b4 & 0xffff));
  }
                    /* WARNING: Subroutine does not return */
  _free(local_b0);
}


//// FUNCTION FUN_0089c090 @ 0089c090 ////

void __thiscall FUN_0089c090(void *this,undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_198 [3];
  uint local_18c [6];
  uint local_174 [6];
  undefined4 local_15c [42];
  undefined4 local_b4 [42];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceafd6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  FUN_00894870(this,local_18c);
  FUN_00894870(this,local_18c);
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)((int)this + 8);
  iVar6 = iVar2 + 4;
  *(int *)((int)this + 0xc) = iVar6;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_198[2] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 3 + iVar2),
                                            *(undefined1 *)(iVar3 + 2 + iVar2)),
                                   *(undefined1 *)(iVar3 + 1 + iVar2)),
                          *(undefined1 *)(iVar3 + iVar2)) + iVar6;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar5 = (uint)*(byte *)(iVar3 + iVar6);
  iVar6 = iVar2 + 5;
  *(int *)((int)this + 0xc) = iVar6;
  if (0xfe < uVar5) {
    *(int *)((int)this + 0xc) = iVar2 + 7;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    uVar5 = (uint)CONCAT11(*(undefined1 *)(iVar3 + 1 + iVar6),*(undefined1 *)(iVar3 + iVar6));
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    iVar6 = *(int *)((int)this + 0xc);
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    bVar1 = *(byte *)(iVar6 + *(int *)((int)this + 8));
    *(int *)((int)this + 0xc) = iVar6 + 1;
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 0x40) == 0) {
        FUN_00891f80(this,1);
        FUN_00891f80(this,1);
      }
      else {
        *(int *)((int)this + 0xc) = iVar6 + 3;
        *(undefined4 *)((int)this + 0x1c) = 0;
        *(undefined4 *)((int)this + 0x20) = 0;
        FUN_00894900(this,local_174);
        FUN_00894900(this,local_18c);
      }
    }
    else {
      FUN_00894900(this,local_18c);
      FUN_00894900(this,local_174);
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      bVar1 = *(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      for (uVar4 = (uint)bVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
        *(undefined4 *)((int)this + 0x1c) = 0;
        *(undefined4 *)((int)this + 0x20) = 0;
        FUN_00891f80(this,1);
        *(undefined4 *)((int)this + 0x1c) = 0;
        *(undefined4 *)((int)this + 0x20) = 0;
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
        FUN_00891f80(this,1);
      }
    }
  }
  iVar6 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar5 = (uint)*(byte *)(iVar6 + iVar2);
  *(int *)((int)this + 0xc) = iVar6 + 1;
  if (0xfe < uVar5) {
    *(int *)((int)this + 0xc) = iVar6 + 3;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    uVar5 = (uint)CONCAT11(*(undefined1 *)(iVar6 + 2 + iVar2),*(undefined1 *)(iVar6 + 1 + iVar2));
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 4;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    FUN_00891f80(this,1);
    FUN_00891f80(this,1);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar5 = FUN_00892090(this,4);
  *(uint *)((int)this + 0x34) = uVar5 & 0xffff;
  uVar5 = FUN_00892090(this,4);
  *(uint *)((int)this + 0x38) = uVar5 & 0xffff;
  local_198[0] = 0;
  local_198[1] = 0;
  FUN_0089aef0(local_b4,0xffffffff);
  local_4 = 0;
  FUN_0089aef0(local_15c,0xfffffffe);
  local_4 = CONCAT31(local_4._1_3_,1);
  do {
    uVar5 = FUN_0089a8a0(this,local_b4,param_1,local_198,local_198 + 1,1);
  } while (uVar5 == 0);
  if (*(int *)((int)this + 0xc) == local_198[2]) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    uVar5 = FUN_00892090(this,4);
    *(uint *)((int)this + 0x34) = uVar5 & 0xffff;
    uVar5 = FUN_00892090(this,4);
    *(uint *)((int)this + 0x38) = uVar5 & 0xffff;
    local_198[0] = 0;
    local_198[1] = 0;
    do {
      uVar5 = FUN_0089a8a0(this,local_15c,param_1,local_198,local_198 + 1,1);
    } while (uVar5 == 0);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_008a7c10(local_15c);
  local_4 = 0xffffffff;
  FUN_008a7c10(local_b4);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0089c380 @ 0089c380 ////

void __thiscall FUN_0089c380(void *this,void *param_1)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  byte local_181;
  void *local_180;
  uint local_17c;
  undefined1 local_178 [4];
  int local_174;
  uint local_170;
  int local_16c;
  uint local_168;
  void *local_164;
  uint local_160;
  undefined1 local_15c [4];
  void *local_158;
  byte *local_154;
  int local_150;
  uint local_14c;
  char *local_148;
  uint local_144;
  undefined1 local_140 [4];
  void *local_13c;
  undefined1 *local_138;
  int local_134;
  undefined1 local_130 [4];
  char *local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  byte *local_11c;
  uint local_118;
  uint local_114;
  byte local_110 [20];
  char *local_fc;
  uint local_f8;
  uint local_f4;
  char local_f0 [20];
  char *local_dc;
  undefined4 local_d8;
  uint local_d4;
  char local_d0 [20];
  char *local_bc;
  undefined4 local_b8;
  uint local_b4;
  char local_b0 [20];
  undefined1 local_9c [4];
  void *local_98;
  undefined4 local_94;
  undefined4 local_90;
  byte *local_8c;
  undefined4 local_88;
  uint local_84;
  byte local_80 [20];
  undefined1 local_6c [4];
  void *local_68;
  undefined4 local_64;
  undefined4 local_60;
  byte *local_5c;
  undefined4 local_58;
  uint local_54;
  byte local_50 [20];
  undefined1 local_3c [4];
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00ceb05c;
  local_c = ExceptionList;
  local_17c = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  local_168 = 0;
  uStack_3 = 0;
  ExceptionList = &local_c;
  do {
    local_13c = (void *)0x0;
    local_138 = (undefined1 *)0x0;
    local_134 = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    local_181 = *(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    local_14c = (uint)local_181;
    local_4 = 1;
    FUN_00886410(local_140,(undefined1 *)0x0,1,&local_181);
    if (local_14c == 0) {
      if (local_13c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_13c);
      }
      FUN_0088aa80((int)local_178);
      ExceptionList = local_c;
      return;
    }
    local_160 = 0;
    if ((char)local_14c < '\0') {
      iVar10 = *(int *)((int)this + 0xc);
      *(int *)((int)this + 0xc) = iVar10 + 2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      local_160 = (uint)*(ushort *)(*(int *)((int)this + 8) + iVar10);
    }
    local_120 = *(int *)((int)this + 0xc) + local_160;
    if (local_14c == 0x96) {
      pbVar9 = (byte *)0x0;
      iVar10 = 0;
      local_158 = (void *)0x0;
      local_154 = (byte *)0x0;
      local_150 = 0;
      _local_4 = CONCAT31(uStack_3,2);
      local_180 = (void *)0x0;
      if (local_160 != 0) {
        do {
          pbVar13 = (byte *)(*(int *)((int)this + 8) + (int)local_180 + *(int *)((int)this + 0xc));
          if (0x1d < *pbVar13) {
            if ((local_158 == (void *)0x0) ||
               ((uint)(iVar10 - (int)local_158) <= (uint)((int)pbVar9 - (int)local_158))) {
              FUN_00886410(local_15c,pbVar9,1,pbVar13);
              pbVar9 = local_154;
              iVar10 = local_150;
            }
            else {
              *pbVar9 = *pbVar13;
              local_154 = pbVar9 + 1;
              pbVar9 = local_154;
            }
          }
          local_180 = (void *)((int)local_180 + 1);
        } while ((int)local_180 < (int)local_160);
      }
      local_181 = 0;
      if ((local_158 == (void *)0x0) ||
         ((uint)(iVar10 - (int)local_158) <= (uint)((int)pbVar9 - (int)local_158))) {
        FUN_00886410(local_15c,pbVar9,1,&local_181);
      }
      else {
        *pbVar9 = 0;
        local_154 = pbVar9 + 1;
      }
      if (local_170 <= local_168 + 1) {
        FUN_0088b290(local_178,1);
      }
      uVar11 = local_168 + local_16c;
      if (local_170 <= uVar11) {
        uVar11 = uVar11 - local_170;
      }
      if (*(int *)(local_174 + uVar11 * 4) == 0) {
        pvVar4 = operator_new(0x10);
        *(void **)(local_174 + uVar11 * 4) = pvVar4;
      }
      local_164 = *(void **)(local_174 + uVar11 * 4);
      local_4 = 3;
      local_148 = local_164;
      if (local_164 != (void *)0x0) {
        FUN_00872bc0(local_164,(int)local_15c);
      }
      local_168 = local_168 + 1;
      local_4 = 2;
      if ((*(int *)(*(int *)this + 0x178) != 0) && (1 < local_168)) {
        uVar11 = (local_168 + local_16c) - 1;
        if (local_170 <= uVar11) {
          uVar11 = uVar11 - local_170;
        }
        FUN_00872bc0(local_130,*(int *)(local_174 + uVar11 * 4));
        local_11c = local_110;
        local_110[0] = 0;
        local_118 = 0;
        local_114 = 0x14;
        pcVar12 = local_12c;
        do {
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        uVar11 = (int)pcVar12 - (int)(local_12c + 1);
        if (0x13 < uVar11) {
          local_114 = uVar11 + 0x20 & 0xffffffe0;
          local_11c = _malloc(local_114);
        }
        _strncpy((char *)local_11c,local_12c,uVar11);
        local_11c[uVar11] = 0;
        local_8c = local_80;
        local_4 = 5;
        local_80[0] = 0;
        local_88 = 0;
        local_84 = 0x14;
        local_118 = uVar11;
        _strncpy((char *)local_8c,"InitNumVar",10);
        local_88 = 10;
        local_8c[10] = 0;
        pbVar9 = local_11c;
        pbVar13 = local_8c;
        do {
          bVar3 = *pbVar9;
          bVar14 = bVar3 < *pbVar13;
          if (bVar3 != *pbVar13) {
LAB_0089c6d4:
            iVar10 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_0089c6d9;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar9[1];
          bVar14 = bVar3 < pbVar13[1];
          if (bVar3 != pbVar13[1]) goto LAB_0089c6d4;
          pbVar9 = pbVar9 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar3 != 0);
        iVar10 = 0;
LAB_0089c6d9:
        local_181 = iVar10 == 0;
        if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c);
        }
        if ((bool)local_181) {
          if (local_168 != 0) {
            uVar11 = (local_168 - 1) + local_16c;
            if (local_170 <= uVar11) {
              uVar11 = uVar11 - local_170;
            }
            iVar10 = *(int *)(local_174 + uVar11 * 4);
            if (*(void **)(iVar10 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free(*(void **)(iVar10 + 4));
            }
            *(undefined4 *)(iVar10 + 4) = 0;
            *(undefined4 *)(iVar10 + 8) = 0;
            *(undefined4 *)(iVar10 + 0xc) = 0;
            local_168 = local_168 - 1;
            if (local_168 == 0) {
              local_16c = 0;
            }
          }
          uVar11 = (local_168 + local_16c) - 1;
          if (local_170 <= uVar11) {
            uVar11 = uVar11 - local_170;
          }
          FUN_00872ce0(local_130,*(void **)(local_174 + uVar11 * 4));
          if (local_168 != 0) {
            uVar11 = (local_168 - 1) + local_16c;
            if (local_170 <= uVar11) {
              uVar11 = uVar11 - local_170;
            }
            iVar10 = *(int *)(local_174 + uVar11 * 4);
            if (*(void **)(iVar10 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free(*(void **)(iVar10 + 4));
            }
            *(undefined4 *)(iVar10 + 4) = 0;
            *(undefined4 *)(iVar10 + 8) = 0;
            *(undefined4 *)(iVar10 + 0xc) = 0;
            local_168 = local_168 - 1;
            if (local_168 == 0) {
              local_16c = 0;
            }
          }
          iVar10 = 0;
          cVar2 = *local_12c;
          while (('-' < cVar2 && (cVar2 < ':'))) {
            iVar5 = iVar10 + 1;
            iVar10 = iVar10 + 1;
            cVar2 = local_12c[iVar5];
          }
          local_148 = local_12c + iVar10;
          local_180 = operator_new(iVar10 + 1);
          iVar5 = 0;
          if (0 < iVar10) {
            pcVar12 = (char *)((int)local_180 + iVar10 + -1);
            do {
              pcVar1 = local_12c + iVar5;
              iVar5 = iVar5 + 1;
              *pcVar12 = *pcVar1;
              pcVar12 = pcVar12 + -1;
            } while (iVar5 < iVar10);
          }
          uVar11 = 0;
          *(undefined1 *)((int)local_180 + iVar10) = 0;
          local_144 = 0;
          if (0 < iVar10) {
            do {
              iVar5 = 10;
              uVar6 = uVar11;
              if ((int)uVar11 < 0) {
                uVar6 = -uVar11;
              }
              local_164 = (void *)0x1;
              while( true ) {
                if ((uVar6 & 1) != 0) {
                  local_164 = (void *)((int)local_164 * iVar5);
                }
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) break;
                iVar5 = iVar5 * iVar5;
              }
              pvVar4 = local_164;
              if ((int)uVar11 < 0) {
                pvVar4 = (void *)(1 / (longlong)(int)local_164);
              }
              local_144 = local_144 + (*(char *)(uVar11 + (int)local_180) + -0x30) * (int)pvVar4;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < iVar10);
          }
          local_164 = FUN_0088bc40(local_3c,local_144);
          local_fc = local_f0;
          local_f0[0] = '\0';
          local_f8 = 0;
          local_f4 = 0x14;
          pcVar12 = local_148;
          do {
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
          uVar11 = (int)pcVar12 - (int)(local_148 + 1);
          if (0x13 < uVar11) {
            local_f4 = uVar11 + 0x20 & 0xffffffe0;
            local_fc = _malloc(local_f4);
          }
          _strncpy(local_fc,local_148,uVar11);
          local_fc[uVar11] = '\0';
          _local_4 = CONCAT31(uStack_3,7);
          local_f8 = uVar11;
          FUN_0087fb40(*(void **)(*(int *)this + 0x178),&local_fc,(int)local_164);
          if (0x14 < local_f4) {
                    /* WARNING: Subroutine does not return */
            _free(local_fc);
          }
          if (local_38 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(local_38);
          }
          local_38 = (void *)0x0;
          local_34 = 0;
          local_30 = 0;
                    /* WARNING: Subroutine does not return */
          _free(local_180);
        }
        bVar14 = FUN_00430950(&local_11c,"InitNumVar");
        if (bVar14) {
          if (local_168 != 0) {
            uVar11 = (local_168 - 1) + local_16c;
            if (local_170 <= uVar11) {
              uVar11 = uVar11 - local_170;
            }
            iVar10 = *(int *)(local_174 + uVar11 * 4);
            if (*(void **)(iVar10 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free(*(void **)(iVar10 + 4));
            }
            *(undefined4 *)(iVar10 + 4) = 0;
            *(undefined4 *)(iVar10 + 8) = 0;
            *(undefined4 *)(iVar10 + 0xc) = 0;
            local_168 = local_168 - 1;
            if (local_168 == 0) {
              local_16c = 0;
            }
          }
          uVar11 = (local_168 + local_16c) - 1;
          if (local_170 <= uVar11) {
            uVar11 = uVar11 - local_170;
          }
          FUN_00872ce0(local_130,*(void **)(local_174 + uVar11 * 4));
          if (local_168 != 0) {
            uVar11 = (local_168 - 1) + local_16c;
            if (local_170 <= uVar11) {
              uVar11 = uVar11 - local_170;
            }
            iVar10 = *(int *)(local_174 + uVar11 * 4);
            if (*(void **)(iVar10 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free(*(void **)(iVar10 + 4));
            }
            *(undefined4 *)(iVar10 + 4) = 0;
            *(undefined4 *)(iVar10 + 8) = 0;
            *(undefined4 *)(iVar10 + 0xc) = 0;
            local_168 = local_168 - 1;
            if (local_168 == 0) {
              local_16c = 0;
            }
          }
          local_2c = local_20;
          local_20[0] = 0;
          local_28 = 0;
          local_24 = 0x14;
          pcVar12 = local_12c;
          do {
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
          FUN_004015d0(&local_2c,local_12c,(int)pcVar12 - (int)(local_12c + 1));
          local_5c = local_50;
          local_4 = 8;
          local_50[0] = 0;
          local_58 = 0;
          local_54 = 0x14;
          _strncpy((char *)local_5c,"ToggleBoolVar",0xd);
          local_58 = 0xd;
          local_5c[0xd] = 0;
          pbVar9 = local_11c;
          pbVar13 = local_5c;
          do {
            bVar3 = *pbVar9;
            bVar14 = bVar3 < *pbVar13;
            if (bVar3 != *pbVar13) {
LAB_0089cb24:
              iVar10 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_0089cb29;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar9[1];
            bVar14 = bVar3 < pbVar13[1];
            if (bVar3 != pbVar13[1]) goto LAB_0089cb24;
            pbVar9 = pbVar9 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar3 != 0);
          iVar10 = 0;
LAB_0089cb29:
          local_181 = iVar10 == 0;
          if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
            _free(local_5c);
          }
          if ((bool)local_181) {
            pvVar4 = FUN_0088bbc0(local_6c,1);
            local_4 = 9;
            FUN_0087fb40(*(void **)(*(int *)this + 0x178),&local_2c,(int)pvVar4);
            if (local_68 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free(local_68);
            }
            local_68 = (void *)0x0;
            local_64 = 0;
            local_60 = 0;
          }
          else {
            local_b4 = 0x14;
            local_bc = local_b0;
            local_b0[0] = '\0';
            local_b8 = 0;
            _strncpy(local_bc,"IncrVar",7);
            local_b8 = 7;
            local_bc[7] = '\0';
            local_17c = local_17c | 1;
            uVar7 = FUN_00401ec0(&local_11c,&local_bc);
            if ((char)uVar7 == '\0') {
              local_dc = local_d0;
              local_d0[0] = '\0';
              local_d8 = 0;
              local_d4 = 0x14;
              _strncpy(local_dc,"DecrVar",7);
              local_d8 = 7;
              local_dc[7] = '\0';
              local_17c = local_17c | 2;
              uVar7 = FUN_00401ec0(&local_11c,&local_dc);
              local_181 = 0;
              if ((char)uVar7 != '\0') goto LAB_0089cc8d;
            }
            else {
LAB_0089cc8d:
              local_181 = 1;
            }
            if (((local_17c & 2) != 0) && (local_17c = local_17c & 0xfffffffd, 0x14 < local_d4)) {
                    /* WARNING: Subroutine does not return */
              _free(local_dc);
            }
            if (((local_17c & 1) != 0) && (local_17c = local_17c & 0xfffffffe, 0x14 < local_b4)) {
                    /* WARNING: Subroutine does not return */
              _free(local_bc);
            }
            if (local_181 != 0) {
              pvVar4 = FUN_0088bbc0(local_9c,0);
              local_4 = 10;
              FUN_0087fb40(*(void **)(*(int *)this + 0x178),&local_2c,(int)pvVar4);
              if (local_98 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                _free(local_98);
              }
              local_98 = (void *)0x0;
              local_94 = 0;
              local_90 = 0;
            }
          }
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
        }
        if (0x14 < local_114) {
                    /* WARNING: Subroutine does not return */
          _free(local_11c);
        }
        if (local_12c != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c);
        }
        local_12c = (char *)0x0;
        local_128 = 0;
        local_124 = 0;
      }
      local_4 = 1;
      if (local_158 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_158);
      }
      local_158 = (void *)0x0;
      local_154 = (byte *)0x0;
      local_150 = 0;
    }
    local_180 = (void *)0x0;
    pvVar4 = local_13c;
    if (0 < (int)local_160) {
      do {
        puVar8 = (undefined1 *)
                 (*(int *)((int)this + 8) + (int)local_180 + *(int *)((int)this + 0xc));
        if ((pvVar4 == (void *)0x0) ||
           ((uint)(local_134 - (int)pvVar4) <= (uint)((int)local_138 - (int)pvVar4))) {
          FUN_00886410(local_140,local_138,1,puVar8);
          pvVar4 = local_13c;
        }
        else {
          *local_138 = *puVar8;
          local_138 = local_138 + 1;
        }
        local_180 = (void *)((int)local_180 + 1);
      } while ((int)local_180 < (int)local_160);
    }
    switch(local_14c) {
    case 0x81:
    case 0x99:
    case 0x9d:
      iVar10 = *(int *)((int)this + 0xc) + 2;
      goto LAB_0089ceb7;
    case 0x83:
      do {
        *(undefined4 *)((int)this + 0x1c) = 0;
        *(undefined4 *)((int)this + 0x20) = 0;
        cVar2 = *(char *)(*(int *)((int)this + 8) + *(int *)((int)this + 0xc));
        iVar10 = *(int *)((int)this + 0xc) + 1;
        *(int *)((int)this + 0xc) = iVar10;
      } while (cVar2 != '\0');
      do {
        *(undefined4 *)((int)this + 0x1c) = 0;
        *(undefined4 *)((int)this + 0x20) = 0;
        cVar2 = *(char *)(iVar10 + *(int *)((int)this + 8));
        iVar10 = iVar10 + 1;
        *(int *)((int)this + 0xc) = iVar10;
      } while (cVar2 != '\0');
      break;
    case 0x8a:
      iVar10 = *(int *)((int)this + 0xc) + 3;
      goto LAB_0089ceb7;
    case 0x8d:
    case 0x9a:
    case 0x9f:
      iVar10 = *(int *)((int)this + 0xc) + 1;
LAB_0089ceb7:
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      *(int *)((int)this + 0xc) = iVar10;
      break;
    case 0x96:
      iVar10 = *(int *)((int)this + 0xc);
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      cVar2 = *(char *)(iVar10 + *(int *)((int)this + 8));
      *(int *)((int)this + 0xc) = iVar10 + 1;
      if (cVar2 == '\x01') {
        iVar10 = iVar10 + 5;
        goto LAB_0089ceb7;
      }
    }
    iVar10 = *(int *)((int)param_1 + 4);
    if ((iVar10 == 0) ||
       ((uint)(*(int *)((int)param_1 + 0xc) - iVar10 >> 4) <=
        (uint)(*(int *)((int)param_1 + 8) - iVar10 >> 4))) {
      FUN_008868b0(param_1,*(void **)((int)param_1 + 8),1,(int)local_140);
    }
    else {
      pvVar4 = *(void **)((int)param_1 + 8);
      FUN_00886750(pvVar4,1,(int)local_140);
      *(int *)((int)param_1 + 8) = (int)pvVar4 + 0x10;
    }
    *(int *)((int)this + 0xc) = local_120;
    if (local_13c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_13c);
    }
  } while( true );
}


//// FUNCTION FUN_0089d030 @ 0089d030 ////

void __thiscall FUN_0089d030(void *this,undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  int *piVar4;
  undefined ***pppuVar5;
  undefined4 *local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb07b;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 0xc);
  ExceptionList = &local_c;
  *(int *)((int)this + 0xc) = iVar2 + 2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar3 = *(ushort *)(*(int *)((int)this + 8) + iVar2);
  local_18 = operator_new(0x174);
  local_4 = 0;
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = FUN_00898da0(local_18,(uint)uVar3);
  }
  local_4 = 0xffffffff;
  piVar4 = (int *)FUN_00886350((void *)(*(int *)this + 0x10c),local_14,&local_18);
  iVar2 = *(int *)(*piVar4 + 0xc);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  bVar1 = *(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  pppuVar5 = (undefined ***)(uint)bVar1;
  do {
    FUN_0089a080(this,iVar2,param_1,pppuVar5,0,0);
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    bVar1 = *(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    pppuVar5 = (undefined ***)(uint)bVar1;
  } while (pppuVar5 != (undefined ***)0x0);
  FUN_0089c380(this,(void *)(iVar2 + 0x74));
  *(undefined4 *)(iVar2 + 0x24) = 8;
  *(undefined4 *)(iVar2 + 0x20) = 1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0089d130 @ 0089d130 ////

void __thiscall FUN_0089d130(void *this,undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  int *piVar8;
  undefined ***pppuVar9;
  int iVar10;
  uint uVar11;
  int extraout_EDX;
  int local_24;
  uint *local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb09b;
  local_c = ExceptionList;
  iVar10 = *(int *)((int)this + 0xc);
  ExceptionList = &local_c;
  *(int *)((int)this + 0xc) = iVar10 + 2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar7 = *(ushort *)(*(int *)((int)this + 8) + iVar10);
  local_18 = operator_new(0x174);
  local_4 = 0;
  if (local_18 == (void *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c = FUN_00898da0(local_18,(uint)uVar7);
  }
  local_4 = 0xffffffff;
  piVar8 = (int *)FUN_00886350((void *)(*(int *)this + 0x10c),local_14,&local_1c);
  iVar4 = *(int *)(*piVar8 + 0xc);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  bVar1 = *(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  *(uint *)(iVar4 + 0x1c) = (uint)bVar1;
  iVar5 = *(int *)((int)this + 0xc);
  iVar6 = *(int *)((int)this + 8);
  iVar10 = iVar5 + 2;
  *(int *)((int)this + 0xc) = iVar10;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar2 = *(undefined1 *)(iVar6 + 1 + iVar5);
  uVar3 = *(undefined1 *)(iVar6 + iVar5);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  bVar1 = *(byte *)(iVar10 + iVar6);
  iVar10 = (CONCAT11(uVar2,uVar3) - 2) + iVar10;
  *(int *)((int)this + 0xc) = iVar5 + 3;
  pppuVar9 = (undefined ***)(uint)bVar1;
  do {
    FUN_0089a080(this,iVar4,param_1,pppuVar9,1,1);
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    bVar1 = *(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    pppuVar9 = (undefined ***)(uint)bVar1;
  } while (pppuVar9 != (undefined ***)0x0);
  iVar5 = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(int *)((int)this + 0xc) = iVar10 + 2;
  local_1c = (undefined4 *)
             (uint)CONCAT11(*(undefined1 *)(iVar5 + 1 + iVar10),*(undefined1 *)(iVar5 + iVar10));
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  bVar1 = *(byte *)(iVar5 + iVar10 + 2);
  iVar5 = iVar10 + (int)local_1c;
  *(int *)((int)this + 0xc) = iVar10 + 3;
  *(uint *)(iVar4 + 0x24) = (uint)bVar1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  bVar1 = *(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  iVar10 = FUN_008905c0(bVar1 >> 1);
  *(char *)(iVar4 + 100) = (char)iVar10;
  FUN_0089c380(this,(void *)(iVar4 + 0x74));
  local_24 = 1;
  if (local_1c == (undefined4 *)0x0) {
    *(undefined4 *)(iVar4 + 0x20) = 1;
    ExceptionList = local_c;
    return;
  }
  local_1c = (undefined4 *)(iVar4 + 0x84);
  local_20 = (uint *)(iVar4 + 0x28);
  local_18 = (void *)iVar5;
  do {
    *(void **)((int)this + 0xc) = local_18;
    *(int *)((int)this + 0xc) = (int)local_18 + 2;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    uVar11 = (uint)*(ushort *)(*(int *)((int)this + 8) + (int)local_18);
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    local_18 = (void *)(*(int *)((int)this + 0xc) + -2 + uVar11);
    bVar1 = *(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    *local_20 = (uint)bVar1;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    bVar1 = *(byte *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8));
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    iVar10 = FUN_008905c0(bVar1 >> 1);
    *(char *)(iVar4 + 100 + extraout_EDX) = (char)iVar10;
    FUN_0089c380(this,local_1c);
    local_24 = local_24 + 1;
    local_20 = local_20 + 1;
    local_1c = local_1c + 4;
  } while (uVar11 != 0);
  *(int *)(iVar4 + 0x20) = local_24;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0089d3a0 @ 0089d3a0 ////

void __thiscall FUN_0089d3a0(void *this,int param_1,uint param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 *local_90;
  undefined1 local_8c [36];
  undefined4 local_68;
  undefined4 local_64;
  void *local_60;
  undefined4 local_5c [2];
  undefined4 local_54 [3];
  void *local_48;
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_1c;
  void *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb0c3;
  local_c = ExceptionList;
  local_64 = *(undefined4 *)((int)this + 4);
  local_68 = *(undefined4 *)((int)this + 0x480);
  ExceptionList = &local_c;
  *(int *)((int)this + 4) = param_4;
  *(int *)this = param_3;
  FUN_00898f40(local_54);
  uVar8 = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x480) = local_54;
  if (param_2 != 0) {
    do {
      if (0x1f < uVar8) break;
      local_8c[uVar8] = 9;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_2);
  }
  local_8c[uVar8] = 0;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0x14);
  }
  else {
    iVar10 = *(int *)((int)this + 0xc);
    iVar5 = *(int *)((int)this + 8);
    *(int *)((int)this + 0xc) = iVar10 + 2;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    local_90 = (undefined4 *)
               (uint)CONCAT11(*(undefined1 *)(iVar5 + 1 + iVar10),*(undefined1 *)(iVar5 + iVar10));
    *(int *)((int)this + 0xc) = iVar10 + 4;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    uVar1 = *(undefined1 *)(iVar10 + 3 + iVar5);
    uVar2 = *(undefined1 *)(iVar10 + 2 + iVar5);
    local_60 = operator_new(0x28);
    local_4._0_1_ = 1;
    if (local_60 == (void *)0x0) {
      local_90 = (undefined4 *)0x0;
    }
    else {
      local_90 = FUN_0088efb0(local_60,local_90);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    piVar9 = (int *)FUN_00886350((void *)(*(int *)this + 0x10c),local_5c,&local_90);
    pvVar6 = *(void **)(*piVar9 + 0xc);
    FUN_00890280(pvVar6,(uint)CONCAT11(uVar1,uVar2));
    *(void **)((int)this + 4) = pvVar6;
    *(int *)((int)this + 0x484) = (int)pvVar6 + 0x1c;
  }
  *(undefined4 *)(*(int *)((int)this + 0x480) + 0x34) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x480) + 0x30) = 0xffffffff;
  *(undefined4 *)(*(int *)((int)this + 0x480) + 0x2c) = 0xffffffff;
  local_90 = (undefined4 *)0x0;
  *(undefined4 *)(*(int *)((int)this + 0x480) + 0x28) = 0xffffffff;
  do {
    uVar8 = FUN_00891ed0((int)this);
    uVar7 = *(undefined4 *)((int)this + 0x2c);
    switch(uVar8 & 0xffff) {
    case 0:
      local_90 = (undefined4 *)0x1;
      break;
    case 1:
      piVar9 = (int *)(*(int *)((int)this + 0x480) + 0x34);
      *piVar9 = *piVar9 + 1;
      pvVar6 = *(void **)((int)this + 4);
      if (*(int *)((int)pvVar6 + 0x10) == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)((int)pvVar6 + 0x14) - *(int *)((int)pvVar6 + 0x10) >> 5;
      }
      iVar5 = *(int *)(*(int *)((int)this + 0x480) + 0x34);
      if (iVar5 < iVar10) {
        FUN_0088ba80(pvVar6,iVar5);
      }
      break;
    case 2:
      FUN_0089b3d0(this,local_8c,0);
      break;
    case 3:
    case 0x21:
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      break;
    case 4:
      FUN_00894ba0(this);
      break;
    case 5:
      FUN_00895870((int)this);
      break;
    case 6:
      FUN_00898fa0(this);
      break;
    case 7:
      FUN_0089d030(this,local_8c);
      break;
    case 8:
      FUN_00890840((int)this);
      break;
    case 9:
      iVar10 = *(int *)((int)this + 0xc);
      iVar5 = *(int *)((int)this + 8);
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      uVar1 = *(undefined1 *)(iVar5 + iVar10);
      *(int *)((int)this + 0xc) = iVar10 + 1;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      uVar2 = *(undefined1 *)(iVar10 + 1 + iVar5);
      *(int *)((int)this + 0xc) = iVar10 + 2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      uVar3 = *(undefined1 *)(iVar10 + 2 + iVar5);
      *(int *)((int)this + 0xc) = iVar10 + 3;
      *(uint *)(*(int *)this + 0x78) = (uint)CONCAT21(CONCAT11(uVar1,uVar2),uVar3);
      break;
    case 10:
      FUN_0089b700(this,local_8c);
      break;
    case 0xb:
      FUN_0089a740(this,local_8c);
      break;
    case 0xc:
      FUN_0089c380(this,(void *)(*(int *)(*(int *)((int)this + 0x480) + 0x34) * 0x20 +
                                 *(int *)(*(int *)((int)this + 4) + 0x10) + 0x10));
      break;
    case 0xd:
    case 0x3e:
      FUN_00895280(this);
      break;
    case 0xe:
      FUN_00893fb0(this,local_8c);
      break;
    case 0xf:
      FUN_00892190((int)this);
      break;
    case 0x11:
      FUN_00892700((int)this);
      break;
    case 0x12:
      FUN_008927d0(this);
      break;
    case 0x13:
      FUN_008940a0(this,local_8c);
      break;
    case 0x14:
      FUN_00897d70((int)this);
      break;
    case 0x15:
      FUN_00899020(this);
      break;
    case 0x16:
      FUN_0089b3d0(this,local_8c,0);
      break;
    case 0x17:
      FUN_00894d70(this);
      break;
    case 0x1a:
      FUN_00894c30(this);
      break;
    case 0x1c:
      FUN_008958e0((int)this);
      break;
    case 0x20:
      FUN_0089b3d0(this,local_8c,1);
      break;
    case 0x22:
      FUN_0089d130(this,local_8c);
      break;
    case 0x23:
      FUN_008990b0(this);
      break;
    case 0x24:
      FUN_00897fb0((int)this);
      break;
    case 0x25:
      FUN_00899230(this);
      break;
    case 0x27:
      FUN_0089d3a0(this,1,param_2 + 1,*(int *)this,*(int *)((int)this + 4));
      break;
    case 0x28:
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      do {
        *(undefined4 *)((int)this + 0x1c) = 0;
        *(undefined4 *)((int)this + 0x20) = 0;
        cVar4 = *(char *)(*(int *)((int)this + 8) + *(int *)((int)this + 0xc));
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      } while (cVar4 != '\0');
      break;
    case 0x2b:
      FUN_00898380((int)this);
      break;
    case 0x2d:
      FUN_008927d0(this);
      break;
    case 0x2e:
      FUN_0089c090(this,local_8c);
      break;
    case 0x30:
      FUN_0089bab0(this,local_8c);
      break;
    case 0x39:
      FUN_008981d0(this);
      break;
    case 0x9c:
      FUN_0089aff0(this);
    }
    *(undefined4 *)((int)this + 0xc) = uVar7;
  } while (local_90 == (undefined4 *)0x0);
  *(undefined4 *)((int)this + 0x480) = local_68;
  *(undefined4 *)((int)this + 4) = local_64;
  if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  if (local_38 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  local_38 = (void *)0x0;
  local_34 = 0;
  local_30 = 0;
  if (local_48 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_48);
  }
  ExceptionList = local_c;
  return;
}


